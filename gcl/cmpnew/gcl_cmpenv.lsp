;;-*-Lisp-*-
;;; CMPENV  Environments of the Compiler.
;;;
;; Copyright (C) 1994 M. Hagiya, W. Schelter, T. Yuasa

;; This file is part of GNU Common Lisp, herein referred to as GCL
;;
;; GCL is free software; you can redistribute it and/or modify it under
;;  the terms of the GNU LIBRARY GENERAL PUBLIC LICENSE as published by
;; the Free Software Foundation; either version 2, or (at your option)
;; any later version.
;; 
;; GCL is distributed in the hope that it will be useful, but WITHOUT
;; ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
;; FITNESS FOR A PARTICULAR PURPOSE.  See the GNU Library General Public 
;; License for more details.
;; 
;; You should have received a copy of the GNU Library General Public License 
;; along with GCL; see the file COPYING.  If not, write to the Free Software
;; Foundation, 675 Mass Ave, Cambridge, MA 02139, USA.


(in-package 'compiler)

(defvar *safe-compile* nil)
(defvar *compiler-check-args* nil)
(defvar *compiler-push-events* nil)
(defvar *speed* 3)
(defvar *space* 0)
(defvar *debug* 0)

;;; Only these flags are set by the user.
;;; If *safe-compile* is ON, some kind of run-time checks are not
;;; included in the compiled code.  The default value is OFF.

(defun init-env ()
  (setq *next-cvar* 0)
  (setq *next-cmacro* 0)
  (setq *next-vv* -1)
  (setq *next-cfun* 0)
  (setq *last-label* 0)
  (clrhash *objects*)
  (clrhash *objects-rev*)
;  (setq *objects* nil)
  (setq *constants* nil)
  (setq *local-funs* nil)
  (setq *global-funs* nil)
  (setq *setf-function-proxy-symbols* nil)
  (setq *global-entries* nil)
  (setq *undefined-vars* nil)
  (setq *reservations* nil)
  (setq *closures* nil)
  (setq *top-level-forms* nil)
  (setq *non-package-operation* nil)
  (setq *function-declarations* nil)
  (setq *inline-functions* nil)
  (setq *inline-blocks* 0)
  (setq *tmp-pack* nil)
  (setq *notinline* nil))

(defvar *next-cvar* 0)
(defvar *next-cmacro* 0)
(defvar *next-vv* -1)
(defvar *next-cfun* 0)
(defvar *tmp-pack* nil)

;;; *next-cvar* holds the last cvar number used.
;;; *next-cmacro* holds the last cmacro number used.
;;; *next-vv* holds the last VV index used.
;;; *next-cfun* holds the last cfun used.

(defmacro next-cfun () '(incf *next-cfun*))

(defun add-symbol (symbol)
  (let ((x (gethash symbol *objects*)))
       (cond (x)
             ((push-data-incf symbol)
		(setf (gethash *next-vv* *objects-rev*) symbol)
		(setf (gethash symbol *objects*) *next-vv*)))))

;; Write to a string with all the *print-.. levels bound appropriately.
(defun wt-to-string (x &aux
		       (*compiler-output-data* (make-string-output-stream))
		       *fasd-data*)
  (wt-data1 x)
  (get-output-stream-string *compiler-output-data*))

(defun add-sharp-comma (object)
  (cond ((caar (member object *sharp-commas* :key 'cadr :test 'equal)))
	((push-data-incf nil)
	 (push (list *next-vv* object) *sharp-commas*)
	 *next-vv*)))

(defun add-object (object)
  ;;; Used only during Pass 1.

  (cond ((and (consp object) (eq (car object) 'si::|#,|)
	      (not (si:contains-sharp-comma (cdr object))))
	 (add-sharp-comma (cdr object)))
	((si:contains-sharp-comma object)
	 (add-sharp-comma `(si::string-to-object ,(wt-to-string object))))
	((typep object 'compiled-function)
	 (add-sharp-comma `(function ,(or (si::compiled-function-name object)
					  (cmperr "Can't dump un named compiled funs")))))
	((gethash object *objects*))
	((push-data-incf object)
	 (setf (gethash *next-vv* *objects-rev*) object)
	 (setf (gethash object *objects*) *next-vv*))))

(defun add-constant (symbol &aux x)
  ;;; Used only during Pass 1.
  (cond ((setq x (assoc symbol *constants* :test 'equal))
         (cadr x))
        (t (push-data-incf nil)
           (push (list *next-vv* symbol) *sharp-commas*)
           (push (list symbol *next-vv*) *constants*)
           *next-vv*)))

(defmacro next-cvar () '(incf *next-cvar*))
(defmacro next-cmacro () '(incf *next-cmacro*))

;;; Tail recursion information.
(defvar *do-tail-recursion* t)
(defvar *tail-recursion-info* nil)
;;; Tail recursion optimization never occurs if *do-tail-recursion* is NIL.
;;; *tail-recursion-info* holds NIL, if tail recursion is impossible.
;;; If possible, *tail-recursion-info* holds
;;;	( fname  required-arg .... required-arg ),
;;; where each required-arg is a var-object.


(defvar *function-declarations* nil)
;;; *function-declarations* holds :
;;;	(... ( { function-name | fun-object } arg-types return-type ) ...)
;;; Function declarations for global functions are ASSOCed by function names,
;;; whereas those for local functions are ASSOCed by function objects.
;;;
;;; The valid argment type declaration is:
;;;	( {type}* [ &optional {type}* ] [ &rest type ] [ &key {type}* ] )
;;; though &optional, &rest, and &key return types are simply ignored.

(defun t-to-nil (x)
  (if (eq x t) nil x))

(defun nil-to-t (x)
  (if x x t))

(defun is-global-arg-type (x)
  (let ((x (promoted-c-type x)))
    (or (eq x t) (member x +c-global-arg-types+))))
(defun is-local-arg-type (x)
  (let ((x (promoted-c-type x)))
    (or (eq x t) (member x +c-local-arg-types+))))
(defun is-local-var-type (x)
  (let ((x (promoted-c-type x)))
    (or (eq x t) (member x +c-local-var-types+))))

;; (defun coerce-to-one-value (type)
;;   (or (not type) (type-and type t)))

(defun function-arg-types (arg-types) (mapcar 'readable-tp arg-types))
;; (defun function-arg-types (arg-types &aux vararg (types nil) result)
;;   (setq result
;; 	(do ((al arg-types (cdr al))
;; 	     (i 0 (the fixnum (+ 1 i))))
;; 	    ((endp al)
;; 	     (reverse types))
;; 	    (declare (fixnum i))
;; 	    (cond ((or (member (car al) '(&optional &rest &key))
;; 		       (equal (car al) '* ))
;; 		   (setq vararg t)
;; 		   (return (reverse (cons '* types)))))
;; 	    ;; only the first 9 args may have proclaimed type different from T
;; 	    (push       (cond 
;; 			       ((< i 9)
;; 				(let ((tem
;; 				       (type-filter (car al))))
;; 				  (if (is-local-arg-type tem) (nil-to-t (car al)) t)));FIXME
;; 			      (t (if (eq (car al) '*) '* t)))
;; 			types)))
;;   ;;only type t args for var arg so far.
;;   (cond (vararg (do ((v result (cdr v)))
;; 		    ((null v))
;; 		    (setf (car v) (if (eq (car v) '*) '* t)))))
		    
;;   result)


;;; The valid return type declaration is:
;;;	(( VALUES {type}* )) or ( {type}* ).

(defun function-return-type (return-types)
  (cond ((endp return-types) nil)
        ((cmpt return-types)
	 (cmp-norm-tp `(,(car return-types) ,@(function-return-type (cdr return-types)))))
        ((cmpt (car return-types))
	 (cmp-norm-tp `(,(caar return-types) ,@(function-return-type (cdar return-types)))))
	((mapcar 'readable-tp return-types))))
;; 	(t (do ((v return-types (cdr v))
;; 		(result))
;; 	       ((endp v)(or (null v)
;; 			    (warn "The function return type ~s is illegal."
;; 				  return-types))
;; 		(nreverse result))
;; 	     (let ((tem  (if (eq (car v) '*) '* (type-filter (car v)))))
;; 	       (unless (or (not tem) (eq tem '*) (is-local-arg-type tem)) (setq tem t))
;; 	       (push (or (car (member tem '(* t))) (car v)) result))))));FIXME

(defun put-procls (fname arg-types return-types procl)

  (if (eq arg-types '*)
      (remprop fname  'proclaimed-arg-types)
    (si:putprop fname  arg-types  'proclaimed-arg-types))

  (si:putprop fname return-types  'proclaimed-return-type)

  (if procl  (si:putprop fname t 'proclaimed-function)
    (remprop fname 'proclaimed-function)))


(defun add-function-proclamation (fname decl list &aux (procl t)
					arg-types return-types)
 (when (not (listp list))
   (error 'type-error :datum list :expected-type 'list))
  (cond
   ((and (symbolp fname)
	 (listp decl) (listp (cdr decl)))
    (cond ((or (null decl)(eq (car decl) '*)) (setq arg-types '(*)))
	  ((setq arg-types (function-arg-types (car decl)))))
    (setq return-types (function-return-type (cdr decl)))
    (unless (cmpt return-types)
      (setq return-types (car return-types)))
;      (when (and (member '* arg-types) (type>= t return-types))
;	(setq return-types t)))
;;     (cond ((and (consp return-types)	; ie not nil
;; 		(endp (cdr return-types)))
;; 	   (setq return-types
;; 		 ;; varargs must return type t currently.
;; 		 (if (and (type>= t (cmp-norm-tp (car return-types)))
;; 			  (member '* (and (consp arg-types) arg-types))) 
;; 		     t (car return-types))))
;; ;		 procl (unless (eq '* return-types) procl)))
;; 	  (t (setq procl (unless (member '* return-types) procl))))
    (cond ((and (listp arg-types)
		(< (length arg-types) call-arguments-limit)))
	  (t (setq procl nil)))
    (do ((fname fname (car list)))
	(())
      (cond ((is-setf-function fname)
	     (let ((*setf-function-proxy-symbols* *setf-function-proxy-symbols*))
	       (let ((new (make-setf-function-proxy-symbol (cadr fname))))
		 (put-procls new arg-types return-types procl)
		 (let (alist)
		   (dolist (l '(proclaimed-arg-types proclaimed-return-type proclaimed-function))
		     (let ((prop (get new l)))
		       (when prop
			 (push (cons l prop) alist))))
		   (when alist
		     (si::putprop (cadr fname) alist 'setf-proclamations))))))
	    ((symbolp fname)
	     (put-procls fname arg-types return-types procl))
	    (t
	     (return (add-function-proclamation fname decl nil))))
      (setq list (cdr list))
      (or (consp list) (return 'done))
      ))
    (t (warn "The function procl ~s ~s is not valid." fname decl))))

(defun add-function-declaration (fname arg-types return-types)
  (cond ((symbolp fname)
         (push (list (sch-local-fun fname)
                     (function-arg-types arg-types)
                     (let ((z (function-return-type return-types)))
		       (if (member (car z) '(values returns-exactly)) (cdr z) z)))
               *function-declarations*))
        (t (warn "The function name ~s is not a symbol." fname))))

(defun get-arg-types (fname)
  (mapcar 'cmp-norm-tp 
	  (cond ((not (symbolp fname)) '(*))
		((let* ((x (assoc fname *function-declarations*))
			(types1 (if x (cadr x) (get fname 'proclaimed-arg-types)))
			(types (get fname 'arg-types)))
		   (cond ((and types types1)
			  (let* ((l1 (length types))
				 (l2 (length types1))
				 (n (- (max l1 l2) (min l1 l2)))
				 (e (make-list n :initial-element '*))
				 (ntypes (if (> l2 l1) (append types e) types))
				 (ntypes1 (if (> l1 l2) (append types1 e) types1))
				 (res (mapcar 'type-and ntypes1 ntypes)))
			    (cond ((every 'identity res) res)
				  ((progn 
				     (cmpwarn "The arg types of ~s were badly declared." fname)
				     types1)))))
			 ((or types1 types))
			 ((not (intersection '(proclaimed-arg-types arg-types) (symbol-plist fname))) '(*))))))))

(defun get-return-type (fname)
  (cmp-norm-tp 
   (cond ((not (symbolp fname)) '*)
	 ((let* ((x (assoc fname *function-declarations*))
		 (type1 (if x (caddr x) (get fname 'proclaimed-return-type)))
		 (type (if (get fname 'predicate) #tboolean (get fname 'return-type))))
	    (cond ((and type type1 (type-and type type1)))
		  ((and type type1) 
		   (cmpwarn "The return type of ~s was badly declared." fname)
		   type1)
		  ((or type1 type))
		  ((not (intersection '(proclaimed-return-type return-type) (symbol-plist fname))) '*)))))))

(defun get-local-arg-types (fun &aux x)
  (if (setq x (assoc fun *function-declarations*))
      (cadr x)
      nil))

(defun get-local-return-type (fun &aux x)
  (if (setq x (assoc fun *function-declarations*))
      (caddr x)
      nil))

(defvar *vs-base-ori-used* nil)
(defvar *sup-used* nil)
(defvar *base-used* nil)

(defun reset-top ()
       (wt "vs_top=sup;")
       (setq *sup-used* t))

(defmacro base-used () '(setq *base-used* t))

;;; Proclamation and declaration handling.

(defvar *alien-declarations* nil)
(defvar *notinline* nil)

(defun inline-possible (fname)
       (not (or *compiler-push-events*
                (member fname *notinline*)
                (get fname 'cmp-notinline))))

(defun proclaim (decl)
 (declare (optimize (safety 1)))
 (when (not (listp decl))
   (error 'type-error :datum decl :expected-type 'list))
 (when (not (listp (cdr decl)))
   (error 'type-error :datum (cdr decl) :expected-type 'list))
  (case (car decl)
    (special
     (dolist** (var (cdr decl))
       (if (symbolp var)
           (si:*make-special var)
           (warn "The variable name ~s is not a symbol." var))))
    (optimize
     (dolist** (x (cdr decl))
       (when (symbolp x) (setq x (list x 3)))
       (if (or (not (consp x))
               (not (consp (cdr x)))
               (not (numberp (cadr x)))
               (not (<= 0 (cadr x) 3)))
           (warn "The OPTIMIZE proclamation ~s is illegal." x)
           (case (car x)
		 (debug (setq *debug* (cadr x)))
                 (safety (setq *compiler-check-args* (>= (cadr x) 1))
                         (setq *safe-compile* (>= (cadr x) 2))
                         (setq *compiler-push-events* (>= (cadr x) 3)))
                 (space (setq *space* (cadr x)))
                 (speed (setq *speed* (cadr x)))
                 (compilation-speed (setq *speed* (- 3 (cadr x))))
                 (t (warn "The OPTIMIZE quality ~s is unknown." (car x)))))))
    (type
     (if (consp (cdr decl))
         (proclaim-var (cadr decl) (cddr decl))
         (warn "The type declaration ~s is illegal." decl)))
    (ftype
      (cond ((and (consp (cdr decl))
		  (consp (cadr decl))
		  (eq (caadr decl) 'function))
	     (add-function-proclamation (caddr decl) (cdr (cadr decl))
					(cddr decl)))
	  (t (cmpwarn "Bad function proclamation ~a" decl))))
   (function
    (cond ((and (consp (cdr decl)))
		(add-function-proclamation (cadr decl) (cddr decl) nil))
	  (t (cmpwarn "Bad function proclamation ~a" decl))))
    (inline
     (dolist** (fun (cdr decl))
               (if (symbolp fun)
                   (remprop fun 'cmp-notinline)
                   (warn "The function name ~s is not a symbol." fun))))
    (notinline
     (dolist** (fun (cdr decl))
               (if (symbolp fun)
                   (si:putprop fun t 'cmp-notinline)
                   (warn "The function name ~s is not a symbol." fun))))
    ((object ignore ignorable)
     (dolist** (var (cdr decl))
       (unless (symbolp var)
               (warn "The variable name ~s is not a symbol." var))))
    (declaration
     (dolist** (x (cdr decl))
       (if (symbolp x)
           (unless (member x *alien-declarations*)
                   (push x *alien-declarations*))
           (warn "The declaration specifier ~s is not a symbol." x))))
    ;;FIXME
    ((array atom bignum bit bit-vector character common compiled-function
      complex cons double-float fixnum float hash-table integer keyword list
      long-float nil null number package pathname random-state ratio rational
      readtable sequence short-float simple-array simple-bit-vector
      simple-string simple-vector single-float standard-char stream string
      string-char symbol t vector signed-byte unsigned-byte)
     (proclaim-var (car decl) (cdr decl)))
    (otherwise
     (unless (member (car decl) *alien-declarations*)
             (warn "The declaration specifier ~s is unknown." (car decl)))
     (and (symbolp (car decl))
	  (functionp (get (car decl) :proclaim))
	  (dolist** (v (cdr decl))
		    (funcall (get (car decl) :proclaim) v)))
     )
    )
  nil
  )

(defun proclaim-var (type vl)
 (when (not (listp vl))
   (error 'type-error :datum vl :expected-type 'list))
  (setq type (type-filter type))
  (dolist** (var vl)
    (cond ((symbolp var)
           (let ((type1 (get var 'cmp-type))
                 (v (sch-global var)))
                (setq type1 (if type1 (type-and type1 type) type))
                (when v (setq type1 (type-and type1 (var-type v))))
                (when (null type1) (warn
      "Inconsistent type declaration was found for the variable ~s."
                                    var))
                (si:putprop var type1 'cmp-type)
                (when v (setf (var-type v) type1))))
          (t
           (warn "The variable name ~s is not a symbol." var)))))

(defun c1body (body doc-p &aux (ss nil) (is nil) (ts nil) (others nil)
                    doc form)
  (loop
    (when (endp body) (return))
    (setq form (cmp-macroexpand (car body)))
    (when (and (consp form) (eq (car form) 'load-time-value))
      (setq form (cmp-eval form)))
    (cond
     ((stringp form)
      (when (or (null doc-p) (endp (cdr body)) doc) (return))
      (setq doc form))
     ((and (consp form) (eq (car form) 'declare))
      (dolist** (decl (cdr form))
;;; Add support for 'cons' declarations, such as (declare ((vector t) foo))
;;; 20040320 CM		
		(cmpck (not (consp decl))
		       "The declaration ~s is illegal." decl)
		(let* ((dtype (car decl)))
;; Can process user deftypes here in the future -- 20040318 CM
;;		       (dft (and (symbolp dtype) (get dtype 'si::deftype-definition)))
;;		       (dtype (or (and dft (funcall dft)) dtype)))
		  (if (consp dtype)
		    (let* ((dtype (cmp-norm-tp dtype))
			   (stype (car dtype)))
;		      (cmpck (or (not (symbolp stype)) (cdddr dtype)) "The declaration ~s is illegal." decl) FIXME
		      (case stype
			(satisfies
			 (push decl others))
			(otherwise
			 (dolist** (var (cdr decl))
				   (cmpck (not (symbolp var))
					  "The type declaration ~s contains a non-symbol ~s."
					  decl var)
				   (push (cons var dtype) ts)))))
		    (let ((stype dtype))
		      (cmpck (not (symbolp stype)) "The declaration ~s is illegal." decl)
		      (case stype
			(special
			 (dolist** (var (cdr decl))
				   (cmpck (not (symbolp var))
					  "The special declaration ~s contains a non-symbol ~s."
					  decl var)
				   (push var ss)))
			((ignore ignorable)
			 (dolist** (var (cdr decl))
				   (cmpck (not (symbolp var))
					  "The ignore declaration ~s contains a non-symbol ~s."
					  decl var)
				   (when (eq stype 'ignorable)
				     (push 'ignorable is))
				   (push var is)))
			(type
			 (cmpck (endp (cdr decl))
				"The type declaration ~s is illegal." decl)
			 (let ((type (type-filter (cadr decl))))
			   (when type
			     (dolist** (var (cddr decl))
				       (cmpck (not (symbolp var))
					      "The type declaration ~s contains a non-symbol ~s."
					      decl var)
				       (push (cons var type) ts)))))
			(class
			 (cmpck (cdddr decl)
				"The type declaration ~s is illegal." decl)
			 (let ((type (type-filter (or (caddr decl) (car decl)))))
			   (when type
			     (let ((var (cadr decl)))
			       (cmpck (not (symbolp var))
				      "The type declaration ~s contains a non-symbol ~s."
				      decl var)
			       (push (cons var type) ts)))))
			(object
			 (dolist** (var (cdr decl))
				   (cmpck (not (symbolp var))
					  "The object declaration ~s contains a non-symbol ~s."
					  decl var)
				   (push (cons var 'object) ts)))
			(:register
			 (dolist** (var (cdr decl))
				   (cmpck (not (symbolp var))
					  "The register declaration ~s contains a non-symbol ~s."
					  decl var)
				   (push (cons var  'register) ts)
				   ))
			((:dynamic-extent dynamic-extent)
			 (dolist** (var (cdr decl))
				   (cmpck (not (symbolp var))
					  "The type declaration ~s contains a non-symbol ~s."
					  decl var)
				   (push (cons var 'dynamic-extent) ts)))
			(otherwise
			 (let ((type (cmp-norm-tp stype)))
			   (if (not (eq type '*))
			       (dolist** (var (cdr decl))
					 (cmpck (not (symbolp var))
						"The type declaration ~s contains a non-symbol ~s."
						decl var)
					 (push (cons var type) ts))
			     (push decl others))))))))))
     (t (return)))
    (pop body)
    )
  (values body ss ts is others doc)
  )

(defun c1decl-body (decls body &aux (dl nil))
  (if (null decls)
      (c1progn body)
      (let ((*function-declarations* *function-declarations*)
            (*alien-declarations* *alien-declarations*)
            (*notinline* *notinline*)
            (*space* *space*)
	    (*compiler-check-args* *compiler-check-args*)
	    (*safe-compile* *safe-compile*))
           (dolist** (decl decls dl)
             (case (car decl)
              (optimize
               (dolist (x (cdr decl))
                 (when (symbolp x) (setq x (list x 3)))
                 (if (or (not (consp x))
                         (not (consp (cdr x)))
                         (not (numberp (cadr x)))
                         (not (<= 0 (cadr x) 3)))
                     (warn "The OPTIMIZE proclamation ~s is illegal." x)
                     (case (car x)
			   (debug (setq *debug* (cadr x))
				  (push (list 'debug (cadr x)) dl))
                           (safety
			     (setq *safe-compile*
				   (>= (the fixnum (cadr x)) 2))
			     (setq *compiler-check-args*
				   (>= (the fixnum (cadr x)) 1))
			     (push (list 'safety (cadr x)) dl))
                           (space (setq *space* (cadr x))
                                  (push (list 'space (cadr x)) dl))
                           ((speed compilation-speed))
                           (t (warn "The OPTIMIZE quality ~s is unknown."
                                    (car x)))))))
              (ftype
               (if (or (endp (cdr decl))
                       (not (consp (cadr decl)))
                       (not (eq (caadr decl) 'function))
                       (endp (cdadr decl)))
                   (warn "The function declaration ~s is illegal." decl)
                   (dolist** (fname (cddr decl))
                     (add-function-declaration
                      fname (cadadr decl) (cddadr decl)))))
              (function
               (if (or (endp (cdr decl))
                       (endp (cddr decl))
                       (not (symbolp (cadr decl))))
                   (warn "The function declaration ~s is illegal." decl)
                   (add-function-declaration
                    (cadr decl) (caddr decl) (cdddr decl))))
              (inline
               (dolist** (fun (cdr decl))
                 (if (symbolp fun)
                     (progn (push (list 'inline fun) dl)
                            (setq *notinline* (remove fun *notinline*)))
                     (warn "The function name ~s is not a symbol." fun))))
              (notinline
               (dolist** (fun (cdr decl))
                 (if (symbolp fun)
                     (progn (push (list 'notinline fun) dl)
                            (push fun *notinline*))
                     (warn "The function name ~s is not a symbol." fun))))
              (declaration
               (dolist** (x (cdr decl))
                 (if (symbolp x)
                     (unless (member x *alien-declarations*)
                             (push x *alien-declarations*))
                     (warn "The declaration specifier ~s is not a symbol."
                           x))))
              (otherwise
               (unless (member (car decl) *alien-declarations*)
                 (warn "The declaration specifier ~s is unknown."
                       (car decl))))
              ))
           (setq body (c1progn body))
           (list 'decl-body (cadr body) dl body)
           )
      )
  )

(si:putprop 'decl-body 'c2decl-body 'c2)

(defun local-compile-decls (decls)
  (dolist** 
   (decl decls)
   (unless (consp decl) (setq decl (list decl 3)))
   (case (car decl)
	 (debug (setq *debug* (cadr decl)))
	 (safety
	  (let ((level (cadr decl)))
	    (declare (fixnum level))
	    (setq *compiler-check-args* (>= level 1)
		  *safe-compile* (>= level 2)
		  *compiler-push-events* (>= level 3))))
	 (space (setq *space* (cadr decl)))
	 (notinline (push (cadr decl) *notinline*))
	 (speed) ;;FIXME
	 (compilation-speed) ;;FIXME
	 (inline
	   (setq *notinline* (remove (cadr decl) *notinline*)))
	 (otherwise (baboon)))))

(defun c2decl-body (decls body)
  (let ((*compiler-check-args* *compiler-check-args*)
        (*safe-compile* *safe-compile*)
        (*compiler-push-events* *compiler-push-events*)
        (*notinline* *notinline*)
        (*space* *space*)
        (*debug* *debug*))
    (local-compile-decls decls)
    (c2expr body)))

(defun check-vdecl (vnames ts is)
  (dolist** (x ts)
    (unless (member (car x) vnames)
      (cmpwarn "Type declaration was found for not bound variable ~s" (car x))))
  (dolist** (x is)
    (unless (or (eq x 'ignorable) (member x vnames))
      (cmpwarn "Ignore/ignorable declaration was found for not bound variable ~s." x)))
  )


