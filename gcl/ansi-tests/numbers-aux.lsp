;-*- Mode:     Lisp -*-
;;;; Author:   Paul Dietz
;;;; Created:  Mon Apr  7 07:24:43 2003
;;;; Contains: Auxiliary functions for number tests

(in-package :cl-test)

(defun numbers-are-compatible (x y)
  (cond
   ((complexp x)
    (and (numbers-are-compatible (realpart x) y)
	 (numbers-are-compatible (imagpart x) y)))
   ((complexp y)
    (and (numbers-are-compatible x (realpart y))
	 (numbers-are-compatible x (imagpart y))))
   (t
    (when (floatp x) (rotatef x y))
    (or (floatp x)
	(not (floatp y))
	(etypecase y
	  (short-float
	   (<= #.(rationalize most-negative-short-float)
	       x
	       #.(rationalize most-positive-short-float)))
	  (single-float
	   (<= #.(rationalize most-negative-single-float)
	       x
	       #.(rationalize most-positive-single-float)))
	  (double-float
	   (<= #.(rationalize most-negative-double-float)
	       x
	       #.(rationalize most-positive-double-float)))
	  (long-float
	   (<= #.(rationalize most-negative-long-float)
	       x
	       #.(rationalize most-positive-long-float))))))))    

(defun =.4-fn ()
  (loop for x in *numbers*
	append
	(loop for y in *numbers*
	      unless (or (not (numbers-are-compatible x y))
			 (if (= x y) (= y x) (not (= y x))))
	      collect (list x y))))

(defun /=.4-fn ()
  (loop for x in *numbers*
	append
	(loop for y in *numbers*
	      unless (or (not (numbers-are-compatible x y))
			 (if (/= x y) (/= y x) (not (/= y x))))
	      collect (list x y))))

(defun /=.4a-fn ()
  (loop for x in *numbers*
	append
	(loop for y in *numbers*
	      when (and (numbers-are-compatible x y)
			(if (= x y)
			    (/= x y)
			  (not (/= x y))))
	      collect (list x y))))

(defun <.8-fn ()
  (loop for x in *reals*
	nconc
	(loop for y in *reals*
	      when (and (numbers-are-compatible x y)
			(and (< x y) (> x y)))
	      collect (list x y))))

(defun <.9-fn ()
  (loop for x in *reals*
	nconc
	(loop for y in *reals*
	      when (and (numbers-are-compatible x y)
			(if (< x y) (not (> y x))
			  (> y x)))
	      collect (list x y))))

(defun <.10-fn ()
  (loop for x in *reals*
	nconc
	(loop for y in *reals*
	      when (and (numbers-are-compatible x y)
			(if (< x y) (>= x y)
			  (not (>= x y))))
	      collect (list x y))))

(defun <=.8-fn ()
  (loop for x in *reals*
	nconc
	(loop for y in *reals*
	      when (and (numbers-are-compatible x y)
			(if (<= x y) (not (>= y x))
			  (>= y x)))
	      collect (list x y))))
 
(defun <=.9-fn ()
  (loop for x in *reals*
	nconc
	(loop for y in *reals*
	      when (and (numbers-are-compatible x y)
			(if (<= x y) (not (or (= x y) (< x y)))
			  (or (= x y) (< x y))))
	      collect (list x y))))

(defun >.8-fn ()
  (loop for x in *reals*
	nconc
	(loop for y in *reals*
	      when (and (numbers-are-compatible x y)
			(if (> x y) (<= x y)
			  (not (<= x y))))
	      collect (list x y))))

(defun >=.8-fn ()
  (loop for x in *reals*
	nconc
	(loop for y in *reals*
	      when (and (numbers-are-compatible x y)
			(if (>= x y) (not (or (= x y) (> x y)))
			  (or (= x y) (> x y))))
	      collect (list x y))))

;;; Comparison of rationsls

(defun compare-random-rationals (n m rep)
  (loop for a = (- (random n) m)
	for b = (- (random n) m)
	for c = (- (random n) m)
	for d = (- (random n) m)
	repeat rep
	when
	(and (/= b 0)
	     (/= d 0)
	     (let ((q1 (/ a b))
		   (q2 (/ c d))
		   (ad (* a d))
		   (bc (* b c)))
	       (when (< (* b d) 0)
		 (setq ad (- ad))
		 (setq bc (- bc)))
	       (or (if (< q1 q2) (not (< ad bc)) (< ad bc))
		   (if (<= q1 q2) (not (<= ad bc)) (<= ad bc))
		   (if (> q1 q2) (not (> ad bc)) (> ad bc))
		   (if (>= q1 q2) (not (>= ad bc)) (>= ad bc))
		   (if (= q1 q2) (not (= ad bc)) (= ad bc))
		   (if (/= q1 q2) (not (/= ad bc)) (/= ad bc)))))
	collect (list a b c d)))

(defun max.2-fn ()
  (loop for x in *reals*
	nconc
	(loop for y in *reals*
	      for m = (max x y)
	      unless (and (>= m x) (>= m y)
			  (or (= m x) (= m y)))
	      collect (list x y m))))

(defun min.2-fn ()
  (loop for x in *reals*
	nconc
	(loop for y in *reals*
	      for m = (min x y)
	      unless (and (<= m x) (<= m y)
			  (or (= m x) (= m y)))
	      collect (list x y m))))

(defun random-nonnegative-real ()
  (if (coin 3)
      (random-case
       (/ (random 10000) (1+ (random 1000)))
       (/ (random 1000000) (1+ (random 100000)))
       (/ (random 100000000) (1+ (random 10000000)))
       (/ (random 1000000000000) (1+ (random 10000000))))
    (random (random-case
	     1000
	     100000
	     10000000
	     1000000000
	     (expt 2.0s0 (random 15))
	     (expt 2.0f0 (random 32))
	     (expt 2.0d0 (random 32))
	     (expt 2.0l0 (random 32))))))

(defun random-real ()
  (if (coin) (random-nonnegative-real)
    (- (random-nonnegative-real))))

(defun epsilon (number)
  (etypecase number
    (short-float short-float-epsilon)
    (single-float single-float-epsilon)
    (double-float double-float-epsilon)
    (long-float long-float-epsilon)
    (rational 0)))

(defun negative-epsilon (number)
  (etypecase number
    (short-float short-float-negative-epsilon)
    (single-float single-float-negative-epsilon)
    (double-float double-float-negative-epsilon)
    (long-float long-float-negative-epsilon)
    (rational 0)))



