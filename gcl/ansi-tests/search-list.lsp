;-*- Mode:     Lisp -*-
;;;; Author:   Paul Dietz
;;;; Created:  Sat Aug 24 07:22:10 2002
;;;; Contains: Tests for SEARCH on lists

(in-package :cl-test)

(deftest search-list.1
  (let ((target *searched-list*)
	(pat '(a)))
    (loop for i from 0 to (1- (length target))
	  for tail on target
	  always
	  (let ((pos (search pat tail)))
	    (search-check pat tail pos))))
  t)

(deftest search-list.2
  (let ((target *searched-list*)
	(pat '(a)))
    (loop for i from 1 to (length target)
	  always
	  (let ((pos (search pat target :end2 i :from-end t)))
	    (search-check pat target pos :end2 i :from-end t))))
  t)

(deftest search-list.3
  (let ((target *searched-list*))
    (loop for pat in *pattern-sublists*
	  for pos = (search pat target)
	  unless (search-check pat target pos)
	  collect pat))
  nil)

(deftest search-list.4
  (let ((target *searched-list*))
    (loop for pat in *pattern-sublists*
	  for pos = (search pat target :from-end t)
	  unless (search-check pat target pos :from-end t)
	  collect pat))
  nil)

(deftest search-list.5
  (let ((target *searched-list*))
    (loop for pat in *pattern-sublists*
	  for pos = (search pat target :start2 25 :end2 75)
	  unless (search-check pat target pos :start2 25 :end2 75)
	  collect pat))
  nil)

(deftest search-list.6
  (let ((target *searched-list*))
    (loop for pat in *pattern-sublists*
	  for pos = (search pat target :from-end t :start2 25 :end2 75)
	  unless (search-check pat target pos :from-end t
			       :start2 25 :end2 75)
	  collect pat))
  nil)

(deftest search-list.7
  (let ((target *searched-list*))
    (loop for pat in *pattern-sublists*
	  for pos = (search pat target :start2 20)
	  unless (search-check pat target pos :start2 20)
	  collect pat))
  nil)

(deftest search-list.8
  (let ((target *searched-list*))
    (loop for pat in *pattern-sublists*
	  for pos = (search pat target :from-end t :start2 20)
	  unless (search-check pat target pos :from-end t
			       :start2 20)
	  collect pat))
  nil)

(deftest search-list.9
  (let ((target (sublis '((a . 1) (b . 2)) *searched-list*)))
    (loop for pat in (sublis '((a . 3) (b . 4)) *pattern-sublists*)
	  for pos = (search pat target :start2 20 :key #'evenp)
	  unless (search-check pat target pos :start2 20 :key #'evenp)
	  collect pat))
  nil)

(deftest search-list.10
  (let ((target (sublis '((a . 1) (b . 2)) *searched-list*)))
    (loop for pat in (sublis '((a . 3) (b . 4)) *pattern-sublists*)
	  for pos = (search pat target :from-end t :start2 20 :key 'oddp)
	  unless (search-check pat target pos :from-end t
			       :start2 20 :key 'oddp)
	  collect pat))
  nil)

(deftest search-list.11
  (let ((target *searched-list*))
    (loop for pat in *pattern-sublists*
	  for pos = (search pat target :start2 20 :test (complement #'eq))
	  unless (search-check pat target pos :start2 20
			       :test (complement #'eq))
	  collect pat))
  nil)

(deftest search-list.12
  (let ((target *searched-list*))
    (loop for pat in *pattern-sublists*
	  for pos = (search pat target :from-end t :start2 20 :test-not #'eq)
	  unless (search-check pat target pos :from-end t
			       :start2 20 :test (complement #'eq))
	  collect pat))
  nil)

(deftest search-list.13
  (let ((target *searched-list*))
    (loop for pat in *pattern-sublists*
	  when (and (> (length pat) 0)
		    (let ((pos (search pat target :start1 1
				       :test (complement #'eq))))
		      (not (search-check pat target pos
					 :start1 1
					 :test (complement #'eq)))))
	  collect pat))
  nil)

(deftest search-list.14
  (let ((target *searched-list*))
    (loop for pat in *pattern-sublists*
	  when (let ((len (length pat)))
		 (and (> len 0)
		      (let ((pos (search pat target :end1 (1- len)
					 :test (complement #'eq))))
		      (not (search-check pat target pos
					 :end1 (1- len)
					 :test (complement #'eq))))))
	  collect pat))
  nil)

;;; Keyword tests

(deftest search.allow-other-keys.1
  (search '(c d) '(a b c d c d e) :allow-other-keys t)
  2)

(deftest search.allow-other-keys.2
  (search '(c d) '(a b c d c d e) :allow-other-keys nil)
  2)

(deftest search.allow-other-keys.3
  (search '(c d) '(a b c d c d e) :bad t :allow-other-keys t)
  2)

(deftest search.allow-other-keys.4
  (search '(c d) '(a b c d c d e) :allow-other-keys 'foo :bad nil)
  2)

(deftest search.allow-other-keys.5
  (search '(c d) '(a b c d c d e) :bad1 1 :allow-other-keys t :bad2 2
	  :allow-other-keys nil :bad3 3)
  2)

(deftest search.allow-other-keys.6
  (search '(c d) '(a b c d c d e) :allow-other-keys 'foo
	  :from-end t)
  4)

(deftest search.allow-other-keys.7
  (search '(c d) '(a b c d c d e) :from-end t :allow-other-keys t)
  4)

(deftest search.keywords.8
  (search '(c d) '(a b c d c d e) :start1 0 :start2 0 :start1 1
	  :start2 6 :from-end t :from-end nil)
  4)


;;; Error cases

(deftest search.error.1
  (classify-error (search))
  program-error)

(deftest search.error.2
  (classify-error (search "a"))
  program-error)

(deftest search.error.3
  (classify-error (search "a" "a" :key))
  program-error)

(deftest search.error.4
  (classify-error (search "a" "a" 'bad t))
  program-error)

(deftest search.error.5
  (classify-error (search "a" "a" 'bad t :allow-other-keys nil))
  program-error)

(deftest search.error.6
  (classify-error (search "a" "a" 1 2))
  program-error)


