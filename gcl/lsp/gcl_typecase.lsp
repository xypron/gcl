(in-package :si)

(defmacro typecase (keyform &rest clauses &aux (key (if (symbolp keyform) keyform (sgen))))
  (declare (optimize (safety 2)))
  (labels ((l (x &aux (c (pop x))(tp (pop c))(fm (if (cdr c) (cons 'progn c) (car c)))(y (when x (l x))))
	      (if (or (eq tp t) (eq tp 'otherwise)) fm `(if (typep ,key ',tp) ,fm ,y))))
	  (let ((x (l clauses)))
	    (if (eq key keyform) x `(let ((,key ,keyform)) ,x)))))

(defmacro etypecase (keyform &rest clauses &aux (key (if (symbolp keyform) keyform (gensym))))
  (declare (optimize (safety 2)))
;  (check-type clauses (list-of proper-list))
  (let ((tp `(or ,@(mapcar 'car clauses))))
    `(typecase ,keyform ,@clauses (t (error 'type-error :datum ,key :expected-type ',tp)))))

(defmacro infer-tp (x y z) (declare (ignore x y)) z)

(defun mkinfm (f tp z &aux (z (?-add 'progn z)))
  `(infer-tp ,f ,tp ,z))

(defun ?-add (x tp) (if (atom tp) tp (if (cdr tp) (cons x tp) (car tp))))

(defun branch (tpsff x f &aux (q (cdr x))(x (car x))(z (cddr (assoc x tpsff))))
  (if q
      `(((typep ,f ',(cmp-unnorm-tp q)) ,(mkinfm f q z)))
    `((t ,(?-add 'progn z)))))

(defun branch1 (x tpsff f o)
  (let* ((z (mapcan (lambda (x) (branch tpsff x f)) (cdr x)))
	 (s (lremove nil (mapcar 'cdr (cdr x))))
	 (z (if s (nconc z `((t ,(mkinfm f (tp-not (lreduce 'type-or1 s)) (cdar o))))) z)))
    (cons 'cond z)))

(defun branches (f tpsff fnl o c)
  (mapcar (lambda (x)
	    `(,(lremove-duplicates (mapcar (lambda (x) (cdr (assoc x fnl))) (car x)))
	      ,(mkinfm f (lreduce 'type-or1 (car x)) (list (branch1 x tpsff f o)))))
	  c))

(define-compiler-macro typecase (&whole w x &rest ff)
  (let* ((bind (unless (symbolp x) (list (list (gensym) x))));FIXME sgen?
	 (f (or (caar bind) x))
	 (o (member-if (lambda (x) (or (eq (car x) t) (eq (car x) 'otherwise))) ff))
	 (ff (if o (ldiff ff o) ff))
	 (o (list (cons t (cdar o))))
	 (tps (mapcar 'cmp-norm-tp (mapcar 'car ff)))
	 (z nil) (tps (mapcar (lambda (x) (prog1 (type-and x (tp-not z)) (setq z (type-or1 x z)))) tps))
	 (a (type-and-list tps))(c (calist2 a))
	 (fn (best-type-of c))
	 (fm `(case (,fn ,f)
		    ,@(branches f (mapcar 'cons tps ff) (cdr (assoc fn +rs+)) o c)
		    (otherwise
		     ,(mkinfm f
			      (tp-not
			       (lreduce 'type-or1
					(lreduce 'append
						 (mapcar 'car c))))
			      (cdar o))))))
    (if bind `(let ,bind ,fm) fm)))



n(defun ?-add (x tp) (if (atom tp) tp (if (cdr tp) (cons x tp) (car tp))))

(defun branches (f tpsff fnl o c)
  (mapcar (lambda (x)
	    `(,(lremove-duplicates (mapcar (lambda (x) (cdr (assoc x fnl))) (car x)))
	      ,(mkinfm f (lreduce 'type-or1 (car x)) (list (branch1 x tpsff f o)))))
	  c))






(defconstant +xi+ (let* ((a (type-and-list (list (cmp-norm-tp `(and number (not immfix))))))
			 (rl (cdr (assoc 'tp8 +rs+)))
			 (i (lremove-duplicates (mapcar (lambda (x) (cdr (assoc (cadr x) rl))) a)))
			 (mi (apply 'min i))(xi (apply 'max i))(m (apply '+ i)))
;		    (assert (= mi 1))
;		    (assert (= m (/ (* xi (1+ xi)) 2)))
		    xi))


(eval-when
 (compile eval)
 (defun mtp8b (tpi &aux (rl (cdr (assoc 'tp8 +rs+)))
		   (tp (lreduce 'type-or1
				(mapcar 'car
					(lremove-if-not
					 (lambda (x) (eql tpi (cdr x)))
					 rl))
				:initial-value nil)))
   `(infer-type
     'x ,tp
     (infer-type
      'y ,tp
      ,(let ((x (caar (member-if
		       (lambda (x &aux (z (assoc (cmp-norm-tp (cdr x)) rl :test 'type<=)))
			 (eql tpi (cdr z)))
		       '((:fixnum . (and fixnum (not immfix)))
			 (:float . short-float)
			 (:double . long-float)
			 (:fcomplex . fcomplex)
			 (:dcomplex . dcomplex))))))
	 (if x `(,(intern (string-upcase (strcat "C-" x "-=="))) x y)
	   (cond ((type<= tp (cmp-norm-tp 'bignum)) `(eql 0 (mpz_cmp x y)))
		 ((type<= tp (cmp-norm-tp 'ratio))
		  `(and (eql (numerator x) (numerator y))
			(eql (denominator x) (denominator y))))
		 ((type<= tp (cmp-norm-tp '(complex rational)))
		  `(and (eql (realpart x) (realpart y))
			(eql (imagpart x) (imagpart y))))
		 ((error "Unknown tp")))))))))
			   
#.`(defun num-comp (x y tp)
     (declare (fixnum tp))
     (case tp
	    ,@(let (r) (dotimes (i +xi+) (push `(,(1+ i) ,(mtp8b (1+ i))) r)) (nreverse r))))
(setf (get 'num-comp 'cmp-inline) t)

(defun eql (x y)
  (or (eq x y)
      (let ((tx (tp8 x))(ty (tp8 y))) 
	(when (= tx ty)
	  (num-comp x y tx)))))

(defun eql-with-tx (x y tx)
  (declare (fixnum tx))
  (or (eq x y)
      (let ((ty (tp8 y))) 
	(when (= tx ty)
	  (num-comp x y tx)))))
(setf (get 'eql-with-tx 'cmp-inline) t)
