;; -*-Lisp-*-
;;; CMPIF  Conditionals.
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

(si:putprop 'if 'c1if 'c1special)
(si:putprop 'if 'c2if 'c2)
(si:putprop 'and 'c1and 'c1)
(si:putprop 'and 'c2and 'c2)
(si:putprop 'or 'c1or 'c1)
(si:putprop 'or 'c2or 'c2)

(si:putprop 'jump-true 'set-jump-true 'set-loc)
(si:putprop 'jump-false 'set-jump-false 'set-loc)

(si:putprop 'case 'c1case 'c1)
(si:putprop 'ecase 'c1ecase 'c1)
(si:putprop 'case 'c2case 'c2)

(defun note-branch-elimination (test-form val elim-form)
;  (let ((*suppress-compiler-notes* t) (*suppress-compiler-warnings* t))
;    (c1expr elim-form))
  (cmpnote "Test form ~S is ~S,~%;; eliminating branch ~S~%" test-form val elim-form))

(defun negate (tp)
  (or (not tp) (unless (eq tp t) `(not ,tp))))

(defun tp-reduce (f1 f2 l1 l2 r);;FIXME this needs to work on vars, not names
  (cond (l1 (tp-reduce f1 f2 (cdr l1) l2 
		       (cons (cons (caar l1) 
				   (cons 
				    (funcall f1 (nil-to-t (cadr (assoc (caar l1) l2))) (cadar l1))
				    (funcall f2 (nil-to-t (cddr (assoc (caar l1) l2))) (cddar l1)))) r)))
	((assoc (caar l2) r) (tp-reduce f1 f2 l1 (cdr l2) r))
	(l2 (tp-reduce f1 f2 l1 (cdr l2) (cons (cons (caar l2) 
						  (cons 
						   (funcall f1 t (cadar l2))
						   (funcall f2 t (cddar l2)))) r)))
	(r)))

(defconstant +bool-inf-op-list+ '((> . <=) (>= . <) (< . >=) (<= . >) (= . /=) (/= . =)))
(defconstant +bool-inf-sop-list+ '((> . <) (< . >) (<= . >=) (>= . <=) (= . =) (/= . /=)))

(defun two-tp-inf (fn t2);;FIXME use num type bounds here for or types
  (if (type-and t2 #tratio) t ;;FIXME
    (let ((t2 (type-and #tlong-float (cmp-norm-tp (sublis '((integer . long-float) (short-float . long-float)) t2)))))
      (if (not (eq (car t2) 'long-float)) t ;FIXME
	(case fn
	      (= (cmp-norm-tp `(real ,(or (cadr t2) '*) ,(or (caddr t2) '*))))
	      (/= (if (atomic-tp t2) (type-and #tnumber (cmp-norm-tp `(not (real ,@(cdr t2))))) #treal))
	      (>  (cmp-norm-tp `(real ,(cond ((numberp (cadr t2)) (list (cadr t2))) ((cadr t2)) ('*)))))
	      (>= (cmp-norm-tp `(real ,(or (cadr t2) '*))))
	      (<  (cmp-norm-tp `(real * ,(cond ((numberp (caddr t2)) (list (caddr t2))) ((caddr t2)) ('*)))))
	      (<= (cmp-norm-tp `(real * ,(or (caddr t2) '*)))))))))

(defmacro vl-name (x) `(var-name (car (third ,x))))
(defmacro itp (x) `(info-type (second ,x)))
(defmacro vlp (x) `(and (eq 'var (car ,x)) (eq (var-kind (car (third ,x))) 'lexical)))
(defmacro tppr (f r x) (let ((s (gensym))) `(let ((,s (cmp-norm-tp ,x))) (cons (two-tp-inf ,f ,s) (two-tp-inf ,r ,s)))))

(defun fmla-infer-tp (fmla)
  (case (car fmla)
	(fmla-and (let ((z (maplist 'fmla-infer-tp (cdr fmla))))
		    (reduce (lambda (x y) (tp-reduce 'type-and 'type-or1 x y nil)) (cdr z) :initial-value (car z))))
	(fmla-or  (let ((z (maplist 'fmla-infer-tp (cdr fmla))))
		    (reduce (lambda (x y) (tp-reduce 'type-or1 'type-and x y nil)) (cdr z)  :initial-value (car z))))
	(fmla-not (mapcar (lambda (x) (cons (car x) (cons (cddr x) (cadr x)))) (fmla-infer-tp (cdr fmla))))
	(var (when (vlp fmla) (list (cons (var-name (car (third fmla))) (cons #t(not null) #tnull)))))
	(call-global
	 (let* ((fn (third fmla)) (rfn (cdr (assoc fn +bool-inf-op-list+)))
		(sfn (cdr (assoc fn +bool-inf-sop-list+)))
		(srfn (cdr (assoc sfn +bool-inf-op-list+)))
		(args (fourth fmla)) (l (length args))
		(pt (get fn 'si::predicate-type)));FIXME +cmp-type-alist+
	   (cond ((and (= l 1) (vlp (first args)) pt) 
		  (list (cons (vl-name (first args)) (cons (cmp-norm-tp pt) (cmp-norm-tp `(not ,pt))))))
		 ((and (= l 2) rfn)
		  (let (r)
		    (when (vlp (first args))
		      (push (cons (vl-name (first args)) (tppr fn rfn (itp (second args)))) r))
		    (when (vlp (second args))
		      (push (cons (vl-name (second args)) (tppr sfn srfn (itp (first args)))) r))
		    r)))))
	;;((map 'list (lambda (x) (cons (var-name x) (cons t t))) (info-referred-array (second fmla))))
	(otherwise (when (consp (car fmla))
		     (fmla-infer-tp (car fmla))))))

(defvar *restore-vars*)

(defun restrict-type (v ot lt)
  (setf (var-type v) ot)
  (unless (type>= lt ot)
    (let ((nt (type-and ot lt)))
      (cmpnote "restricting type of ~s to ~s~%" (var-name v) nt)
      (setf (var-type v) nt))))

(defun ignorable-pivot (pivot value)
  (let ((s (gensym)))
    `(let ((,s ,pivot))
       (declare (ignorable ,s))
       ,value)))

(defun fmla-is-changed (name fmla)
  (cond ((info-p fmla) (let ((v (car (member name *vars* :key (lambda (x) (when (var-p x) (var-name x)))))))
			 (is-changed v fmla)))
	((atom fmla) nil)
	((or (fmla-is-changed name (car fmla)) (fmla-is-changed name (cdr fmla))))))

(defun c1branch (tf r args info)
  (if (and (not tf) (endp (cddr args)))
      (list (c1nil) nil)
    (with-restore-vars
     (dolist (l r) (restrict-type (car l) (cadr l) (let ((l (caddr l))) (if tf (car l) (cdr l)))))
     (let (trv (b (c1expr* (if tf (cadr args) (caddr args)) info)))
;       (when (info-type (cadr b)) 
       (dolist (l *restore-vars*) (push (list (car l) (var-type (car l))) trv));)
       (list b trv)))))

(defun c1if (args &aux info f)
  (when (or (endp args) (endp (cdr args)))
        (too-few-args 'if 2 (length args)))
  (unless (or (endp (cddr args)) (endp (cdddr args)))
          (too-many-args 'if 3 (length args)))
  (setq f (c1fmla-constant (car args)))

  (case f
        ((t) 
	 (when (caddr args) (note-branch-elimination (car args) t (caddr args)))
	 (c1expr (cadr args)))
        ((nil) 
	 (note-branch-elimination (car args) nil (cadr args))
	 (if (endp (cddr args)) (c1nil) (c1expr (caddr args))))
        (otherwise
         (setq info (make-info))
	 (let* ((fmla (c1fmla f info))
		(inf (fmla-infer-tp fmla))
		(inf (remove-if (lambda (x) (fmla-is-changed (car x) fmla)) inf))
		(fmlae (fmla-eval-const fmla))
		(fmlae (if (notevery 'cadr inf) nil fmlae))
		(fmlae (if (notevery 'cddr inf) t   fmlae)))
	   (if (not (eq fmlae 'boolean))
	       (cond (fmlae 
		      (when (caddr args) (note-branch-elimination (car args) t (caddr args)))
		      (c1expr** (ignorable-pivot (car args) (cadr args)) info))
		     (t (note-branch-elimination (car args) nil (cadr args)) 
			(c1expr** (ignorable-pivot (car args) (caddr args)) info)))
	     (let (r)
	       (dolist (l inf)
		 (let ((v (car (member (car l) *vars* :key (lambda (x) (when (var-p x) (var-name x)))))))
		   (when v
		     (push (list v (var-type v) (cdr l)) r))));;FIXME return in this from from infer-tp
	       (unwind-protect

		   (let* ((tbl (c1branch t   r args info))
			  (fbl (c1branch nil r args info))
			  (tb (car tbl))
			  (fb (car fbl))
			  (trv (append (cadr tbl) (cadr fbl))))

		     (setf (info-type info) (type-or1 (info-type (cadr tb)) (info-type (cadr fb))))

		     (do (rv) ((not (setq rv (pop r))))
			 (setf (var-type (car rv)) (cadr rv))
			 (unless (info-type (cadr tb)) (do-setq-tp (car rv) nil (type-and (cdr (caddr rv)) (var-type (car rv)))))
			 (unless (info-type (cadr fb)) (do-setq-tp (car rv) nil (type-and (car (caddr rv)) (var-type (car rv))))))

		     (do (rv) ((not (setq rv (pop trv))))
			 (do-setq-tp (car rv) nil (type-or1 (var-type (car rv)) (cadr rv))))

		     (list 'if info fmla tb fb))

		 (dolist (l r)
		   (setf (var-type (car l)) (cadr l))))))))))



(defun t-and (x y)
  (cond ((eq x 'boolean) (when y 'boolean))
	((eq y 'boolean) (when x 'boolean))
	((and x y))))

(defun t-or (x y)
  (cond ((eq x 'boolean) (or (eq y t) 'boolean))
	((eq y 'boolean) (or (eq x t) 'boolean))
	((or x y))))

(defun t-not (x)
  (if (eq x 'boolean)
      'boolean
    (not x)))

(defun fmla-eval-const (fmla)
  (case (car fmla)
	(fmla-and (reduce (lambda (y x) (t-and (fmla-eval-const x) y)) (cdr fmla) :initial-value t))
	(fmla-or (reduce (lambda (y x) (t-or (fmla-eval-const x) y)) (cdr fmla) :initial-value nil))
	(fmla-not (t-not (fmla-eval-const (cdr fmla))))
;	(location (caddr fmla))
	((t nil) (car fmla))
;	((var call-global) (cond ((type>= #tnull (info-type (second fmla))) nil) ;FIXME
;				 ((type>= #t(not null) (info-type (second fmla))) t)
;				 ('boolean)))
	(otherwise (if (consp (car fmla)) 
		       (fmla-eval-const (car fmla)) 
		     (cond ((type>= #tnull (info-type (second fmla))) nil) ;FIXME
			   ((type>= #t(not null) (info-type (second fmla))) t)
			   ('boolean))))))

(defun c1fmla-constant (fmla &aux f)
  (cond
   ((consp fmla)
    (case (car fmla)
          (and (do ((fl (cdr fmla) (cdr fl)))
                   ((endp fl) t)
                   (declare (object fl))
                   (setq f (c1fmla-constant (car fl)))
                   (case f
                         ((t))
                         ((nil) (return nil))
                         (t (if (endp (cdr fl))
                                (return f)
                                  (return (list* 'and f (cdr fl))))))))
          (or (do ((fl (cdr fmla) (cdr fl)))
                  ((endp fl) nil)
                  (declare (object fl))
                  (setq f (c1fmla-constant (car fl)))
                  (case f
                        ((t) (return t))
                        ((nil))
                        (t (if (endp (cdr fl))
                               (return f)
                               (return (list* 'or f (cdr fl))))))))
          ((not null)
           (when (endp (cdr fmla)) (too-few-args 'not 1 0))
           (unless (endp (cddr fmla))
                   (too-many-args 'not 1 (length (cdr fmla))))
           (setq f (c1fmla-constant (cadr fmla)))
           (case f
                 ((t) nil)
                 ((nil) t)
                 (t (list 'not f))))
          (t fmla)))
   ((symbolp fmla) (if (constantp fmla)
                       (if (symbol-value fmla) t nil)
                       fmla))
   (t t)))

(defvar *c1fmla-recursion* nil)

(defun fmla-and-or (fmlac info tp)
  (let (r rp)
    (dolist (x fmlac r)
      (with-restore-vars
       (let ((z (c1fmla x info)))
	 (do (l) ((not (setq l (pop *restore-vars*)))) 
	     (setf (var-type (car l)) (type-or1 (var-type (car l)) (cadr l))))
	 (setq rp (let ((tmp (cons z nil))) (if rp (cdr (rplacd rp tmp)) (setq r tmp))))
	 (when (and (info-p (cadr z)) (type>= tp (info-type (cadr z))))
	   (return r)))))))

(defun c1fmla (fmla info)
  (if (consp fmla)
      (case (car fmla)
            (and (case (length (cdr fmla))
                   (0 (c1t))
                   (1 (c1fmla (cadr fmla) info))
                   (t (cons 'FMLA-AND (fmla-and-or (cdr fmla) info #tnull)))))
;;FIXME pass this all through iff and avoid duplication of this logic here
;                            (mapcar (lambda (x) (with-restore-vars (prog1 (c1fmla x info) (do (l) ((not (setq l (pop *restore-vars*)))) (setf (var-type (car l)) (type-or1 (var-type (car l)) (cadr l)))))))
;                                    (cdr fmla))
            (or (case (length (cdr fmla))
                   (0 (c1nil))
                   (1 (c1fmla (cadr fmla) info))
                   (t (cons 'FMLA-OR (fmla-and-or (cdr fmla) info #t(not null))))))
;                            (mapcar (lambda (x) (with-restore-vars (prog1 (c1fmla x info) (do (l) ((not (setq l (pop *restore-vars*)))) (setf (var-type (car l)) (type-or1 (var-type (car l)) (cadr l)))))))
;                                    (cdr fmla))
            ((not null)
                  (when (endp (cdr fmla)) (too-few-args 'not 1 0))
                  (unless (endp (cddr fmla))
                          (too-many-args 'not 1 (length (cdr fmla))))
                  (list 'FMLA-NOT (c1fmla (cadr fmla) info)))
	    ;;FIXME collapse and an or to if with compiler-macros/normal macros, and ensure order makes sense with that in c1symbol-fun
            (t (let* ((cm (and (symbolp (car fmla)) (get (car fmla) 'si::compiler-macro-prop)))
		      (cm (and cm (funcall cm fmla nil))))
		 (cond ((and cm (not (eq cm fmla)))  (c1fmla cm info))
		       ((let ((r (c1expr* fmla info))) (and (or *c1fmla-recursion*
								(type>= #tboolean (info-type (cadr r)))) r)))
		       ((let ((*c1fmla-recursion* t)) (c1expr* `(when ,fmla t) info)))))))
    (c1expr* fmla info)))

(defun c2if (fmla form1 form2
                  &aux (Tlabel (next-label)) Flabel)
  (cond ((and (eq (car form2) 'LOCATION)
              (null (caddr form2))
              (eq *value-to-go* 'TRASH)
               (not (eq *exit* 'RETURN)))
         (let ((exit *exit*)
               (*unwind-exit* (cons Tlabel *unwind-exit*))
               (*exit* Tlabel))
              (CJF fmla Tlabel exit))
         (wt-label Tlabel)
         (c2expr form1))
        (t
         (setq Flabel (next-label))
         (let ((*unwind-exit* (cons Flabel (cons Tlabel *unwind-exit*)))
               (*exit* Tlabel))
              (CJF fmla Tlabel Flabel))
         (wt-label Tlabel)
         (let ((*unwind-exit* (cons 'JUMP *unwind-exit*))) (c2expr form1))
         (wt-label Flabel)
         (c2expr form2)))
  )

;;; If fmla is true, jump to Tlabel.  If false, do nothing.
(defun CJT (fmla Tlabel Flabel)
  (case (car fmla)
    (fmla-and (do ((fs (cdr fmla) (cdr fs)))
                  ((endp (cdr fs))
                   (CJT (car fs) Tlabel Flabel))
                  (declare (object fs))
                  (let* ((label (next-label))
                         (*unwind-exit* (cons label *unwind-exit*)))
                        (CJF (car fs) label Flabel)
                        (wt-label label))))
    (fmla-or (do ((fs (cdr fmla) (cdr fs)))
                 ((endp (cdr fs))
                  (CJT (car fs) Tlabel Flabel))
                 (declare (object fs))
                 (let* ((label (next-label))
                        (*unwind-exit* (cons label *unwind-exit*)))
                       (CJT (car fs) Tlabel label)
                       (wt-label label))))
    (fmla-not (CJF (cadr fmla) Flabel Tlabel))
    (LOCATION
     (case (caddr fmla)
           ((t) (unwind-no-exit Tlabel) (wt-nl) (wt-go Tlabel))
           ((nil))
           (t (let ((*value-to-go* (list 'jump-true Tlabel)))
                   (c2expr* fmla)))))
    (t (let ((*value-to-go* (list 'jump-true Tlabel))) (c2expr* fmla))))
  )

;;; If fmla is false, jump to Flabel.  If true, do nothing.
(defun CJF (fmla Tlabel Flabel)
  (case (car fmla)
    (FMLA-AND (do ((fs (cdr fmla) (cdr fs)))
                  ((endp (cdr fs)) (CJF (car fs) Tlabel Flabel))
                  (declare (object fs))
                  (let* ((label (next-label))
                         (*unwind-exit* (cons label *unwind-exit*)))
                        (CJF (car fs) label Flabel)
                        (wt-label label))))
    (FMLA-OR (do ((fs (cdr fmla) (cdr fs)))
                 ((endp (cdr fs)) (CJF (car fs) Tlabel Flabel))
                 (declare (object fs))
                 (let* ((label (next-label))
                        (*unwind-exit* (cons label *unwind-exit*)))
                       (CJT (car fs) Tlabel label)
                       (wt-label label))))
    (FMLA-NOT (CJT (cadr fmla) Flabel Tlabel))
    (LOCATION
     (case (caddr fmla)
           ((t))
           ((nil) (unwind-no-exit Flabel) (wt-nl) (wt-go Flabel))
           (t (let ((*value-to-go* (list 'jump-false Flabel)))
                   (c2expr* fmla)))))
    (t (let ((*value-to-go* (list 'jump-false Flabel))) (c2expr* fmla))))
  )

(defun c1and (args)
  (cond ((endp args) (c1t))
        ((endp (cdr args)) (c1expr (car args)))
        ((let ((info (make-info))
	       (nargs (append (mapcar (lambda (x) `(when ,x t)) (butlast args))
			      (last args))))
	   (list 'AND info (c1args nargs info))))))

(defun c2and (forms)
  (do ((forms forms (cdr forms)))
      ((endp (cdr forms))
       (c2expr (car forms)))
      (declare (object forms))
      (cond ((eq (caar forms) 'LOCATION)
             (case (caddar forms)
                   ((t))
                   ((nil) (unwind-exit nil 'JUMP))
                   (t (wt-nl "if(" (caddar forms) "==Cnil){")
                      (unwind-exit nil 'JUMP) (wt "}")
                      )))
            ((eq (caar forms) 'VAR)
             (wt-nl "if(")
             (wt-var (car (caddar forms)) (cadr (caddar forms)))
             (wt "==Cnil){")
             (unwind-exit nil 'jump) (wt "}"))
            (t
             (let* ((label (next-label))
                    (*unwind-exit* (cons label *unwind-exit*)))
                   (let ((*value-to-go* (list 'jump-true label)))
                        (c2expr* (car forms)))
                   (unwind-exit nil 'jump)
                   (wt-label label))))
      ))

(defun c1or (args)
  (cond ((endp args) (c1nil))
        ((endp (cdr args)) (c1expr (car args)))
        (t (let ((info (make-info)))
                (list 'OR info (c1args args info))))))

(defun c2or (forms &aux (*vs* *vs*) temp)
  (do ((forms forms (cdr forms))
       )
      ((endp (cdr forms))
       (c2expr (car forms)))
      (declare (object forms))
      (cond ((eq (caar forms) 'LOCATION)
             (case (caddar forms)
                   ((t) (unwind-exit t 'JUMP))
                   ((nil))
                   (t (wt-nl "if(" (caddar forms) "!=Cnil){")
                      (unwind-exit (caddar forms) 'JUMP) (wt "}"))))
            ((eq (caar forms) 'VAR)
             (wt-nl "if(")
             (wt-var (car (caddar forms)) (cadr (caddar forms)))
             (wt "!=Cnil){")
             (unwind-exit (cons 'VAR (caddar forms)) 'jump) (wt "}"))
            ((and (eq (caar forms) 'CALL-GLOBAL)
                  (get (caddar forms) 'predicate))
             (let* ((label (next-label))
                    (*unwind-exit* (cons label *unwind-exit*)))
                   (let ((*value-to-go* (list 'jump-false label)))
                        (c2expr* (car forms)))
                   (unwind-exit t 'jump)
                   (wt-label label)))
            (t
             (let* ((label (next-label))
		    (*inline-blocks* 0)
                    (*unwind-exit* (cons label *unwind-exit*)))
	           (setq temp (wt-c-push))
                   (let ((*value-to-go* temp)) (c2expr* (car forms)))
                   (wt-nl "if(" temp "==Cnil)") (wt-go label)
                   (unwind-exit temp 'jump)
                   (wt-label label)
		   (close-inline-blocks)
		   )))
      )
  )

(defun set-jump-true (loc label)
  (unless (null loc)
    (cond ((eq loc t))
          ((and (consp loc) (eq (car loc) 'INLINE-COND))
           (wt-nl "if(")
           (wt-inline-loc (caddr loc) (cadddr loc))
           (wt ")"))
          (t (wt-nl "if((" loc ")!=Cnil)")))
    (unless (eq loc t) (wt "{"))
    (unwind-no-exit label)
    (wt-nl) (wt-go label)
    (unless (eq loc t) (wt "}")))
  )

(defun set-jump-false (loc label)
  (unless (eq loc t)
    (cond ((null loc))
          ((and (consp loc) (eq (car loc) 'INLINE-COND))
           (wt-nl "if(!(")
           (wt-inline-loc (caddr loc) (cadddr loc))
           (wt "))"))
          (t (wt-nl "if((" loc ")==Cnil)")))
    (unless (null loc) (wt "{"))
    (unwind-no-exit label)
    (wt-nl) (wt-go label)
    (unless (null loc) (wt "}")))
  )

(defun c1ecase (args) (c1case args t))  

;;If the key is declared fixnum, then we convert a case statement to a switch,
;;so that we may see the benefit of a table jump.

(defun convert-case-to-switch (args default)
  (let ((sym (gensym)) body keys)
    (dolist (v (cdr args))
	    (cond ((si::fixnump (car v)) (push  (car v) body))
		  ((consp (car v))(dolist (w (car v)) (push w body)))
		  ((member (car v) '(t otherwise))
		   (and default
			(cmperror "T or otherwise found in an ecase"))
		   (push t body)))
	    (push `(return-from ,sym (progn ,@ (cdr v))) body))
    (cond (default (push t body)
	    (dolist (v (cdr args))
		    (cond ((atom (car v)) (push (car v) keys))
			  (t (setq keys (append (car v) keys)))))
	    (push `(error "The key ~a for ECASE was not found in cases ~a"
			  ,(car args) ',keys)
		  body)))
    `(block ,sym (si::switch ,(car args) ,@ (nreverse body)))))
	    
		  

(defun c1case (args &optional (default nil))
  (when (endp args) (too-few-args 'case 1 0))
  (let* ((info (make-info :type #tnil))
         (key-form (with-restore-vars (c1expr* (car args) info)))
         (clauses nil) or-list)
    (cond ((unless (atomic-tp (info-type (second key-form)))
	     (type>= #tfixnum (nil-to-t (info-type (second key-form)))))
	   (return-from c1case  (c1expr (convert-case-to-switch args default ))))
	  ((return-from c1case (c1expr (cmp-macroexpand `(,(if default 'ecase 'case) ,@args))))))
    (dolist (clause (cdr args))
      (cmpck (endp clause) "The CASE clause ~S is illegal." clause)
      (case (car clause)
            ((nil))
            ((t otherwise)
             (when default
                   (cmperr (if (eq default 't)
                               "ECASE had an OTHERWISE clause."
                               "CASE had more than one OTHERWISE clauses.")))
             (setq default (with-restore-vars
			    (prog1
				(c1progn (cdr clause))
			      (dolist (l *restore-vars*) (push (list (car l) (var-type (car l))) or-list)))))
	     (setf (info-type info) (type-or1 (info-type info) (info-type (cadr default))))
             (add-info info (cadr default)))
            (t (let* ((keylist
                       (cond ((consp (car clause))
                              (mapcar #'(lambda (key) (if (symbolp key) key
                                                          (add-object key)))
                                      (car clause)))
                             ((symbolp (car clause)) (list (car clause)))
                             (t (list (add-object (car clause))))))
                      (body (with-restore-vars 
			     (prog1 
				 (c1progn (cdr clause))
			       (dolist (l *restore-vars*) (push (list (car l) (var-type (car l))) or-list))))))
                 (add-info info (cadr body))
		 (setf (info-type info) (type-or1 (info-type info) (info-type (cadr body))))
                 (push (cons keylist body) clauses)))))
    (dolist (l or-list ) (setf (var-type (car l)) (type-or1 (var-type (car l)) (cadr l))))
    (list 'case info key-form (reverse clauses) (or default (c1nil)))))

(defun c2case (key-form clauses default
               &aux (cvar (cs-push t t)) (*vs* *vs*) (*inline-blocks* 0))
  (setq key-form (car (inline-args (list key-form) '(t))))
  (wt-nl "{object V" cvar "= " key-form ";")

  (dolist (clause clauses)
    (let* ((label (next-label))
           (keylist (car clause))
           (local-label nil))
      (do ()
          ((<= (length keylist) 5))
        (when (null local-label) (setq local-label (next-label)))
        (wt-nl "if(")
        (dotimes (i 5)
          (cond ((symbolp (car keylist))
                 (wt "(V" cvar "== ")
                 (case (car keylist)
                   ((t) (wt "Ct"))
                   ((nil) (wt "Cnil"))
                   (otherwise (wt (vv-str (add-symbol (car keylist))))))
                 (wt ")"))
                (t (wt "eql(V" cvar "," (vv-str (car keylist)) ")")))
          (when (< i 4) (wt-nl "|| "))
          (pop keylist))
        (wt ")")
        (wt-go local-label))

      (wt-nl "if(")
      (do ()
          ((endp keylist))
        (cond ((symbolp (car keylist))
               (wt "(V" cvar "!= ")
               (case (car keylist)
                 ((t) (wt "Ct"))
                 ((nil) (wt "Cnil"))
                 (otherwise (wt (vv-str (add-symbol (car keylist))))))
               (wt ")"))
              (t (wt "!eql(V" cvar "," (vv-str (car keylist)) ")")))
        (unless (endp (cdr keylist)) (wt-nl "&& "))
        (pop keylist))
      (wt ")")
      (wt-go label)
      (when local-label (wt-label local-label))
      (let ((*unwind-exit* (cons 'JUMP *unwind-exit*))) (c2expr (cdr clause)))
      (wt-label label)))

  (if (eq default 't)
      (progn (wt-nl "FEerror(\"The ECASE key value ~s is illegal.\",1,V" cvar ");")
	     (unwind-exit nil 'jump))
      (c2expr default))

  (wt "}")
  (close-inline-blocks))


