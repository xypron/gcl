;-*- Mode:     Lisp -*-
;;;; Author:   Paul Dietz
;;;; Created:  Sat Apr 25 08:02:43 1998
;;;; Contains: Tests of MAKE-PACKAGE

(in-package :cl-test)
(declaim (optimize (safety 3)))

;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;;; make-package

;; Test basic make-package, using string, symbol and character
;;    package-designators

(deftest make-package.1
  (progn
    (safely-delete-package "TEST1")
    (let ((p (ignore-errors (make-package "TEST1"))))
      (prog1
	  (and (packagep p)
	       (equalt (package-name p) "TEST1")
	       (equalt (package-nicknames p) nil)
	       (equalt (package-used-by-list p) nil))
	(safely-delete-package p))))
  t)

(deftest make-package.2
  (progn
    (safely-delete-package '#:|TEST1|)
    (let ((p (ignore-errors (make-package '#:|TEST1|))))
      (prog1
	  (and (packagep p)
	       (equalt (package-name p) "TEST1")
	       (equalt (package-nicknames p) nil)
	       (equalt (package-used-by-list p) nil))
	(safely-delete-package p))))
  t)

(deftest make-package.3
  (progn
    (safely-delete-package #\X)
    (let ((p (ignore-errors (make-package #\X))))
      (prog1
	  (and (packagep p)
	       (equalt (package-name p) "X")
	       (equalt (package-nicknames p) nil)
	       (equalt (package-used-by-list p) nil))
	(safely-delete-package p))))
  t)

;; Same, but with a null :use list

(deftest make-package.4
  (progn
    (safely-delete-package "TEST1")
    (let ((p (ignore-errors (make-package "TEST1" :use nil))))
      (prog1
	  (and (packagep p)
	       (equalt (package-name p) "TEST1")
	       (equalt (package-nicknames p) nil)
	       (equalt (package-use-list p) nil)
	       (equalt (package-used-by-list p) nil))
	(safely-delete-package p))))
  t)

(deftest make-package.5
  (progn
    (safely-delete-package '#:|TEST1|)
    (let ((p (ignore-errors (make-package '#:|TEST1| :use nil))))
      (prog1
	  (and (packagep p)
	       (equalt (package-name p) "TEST1")
	       (equalt (package-nicknames p) nil)
	       (equalt (package-use-list p) nil)
	       (equalt (package-used-by-list p) nil))
	(safely-delete-package p))))
  t)

(deftest make-package.6
  (progn
    (safely-delete-package #\X)
    (let ((p (make-package #\X)))
      (prog1
	  (and (packagep p)
	       (equalt (package-name p) "X")
	       (equalt (package-nicknames p) nil)
	       ;; (equalt (package-use-list p) nil)
	       (equalt (package-used-by-list p) nil))
	(safely-delete-package p))))
  t)

;; Same, but use the A package

(deftest make-package.7
  (progn
    (safely-delete-package "TEST1")
    (let ((p (ignore-errors (make-package "TEST1" :use '("A")))))
      (prog1
	  (and (packagep p)
	       (equalt (package-name p) "TEST1")
	       (equalt (package-nicknames p) nil)
	       (equalt (package-use-list p) (list (find-package "A")))
	       (equalt (package-used-by-list p) nil))
	(safely-delete-package p))))
  t)

(deftest make-package.7a
  (progn
    (safely-delete-package "TEST1")
    (let ((p (ignore-errors (make-package "TEST1" :use '(#:|A|)))))
      (prog1
	  (and (packagep p)
	       (equalt (package-name p) "TEST1")
	       (equalt (package-nicknames p) nil)
	       (equalt (package-use-list p) (list (find-package "A")))
	       (equalt (package-used-by-list p) nil))
	(safely-delete-package p))))
  t)

(deftest make-package.7b
  (progn
    (safely-delete-package "TEST1")
    (let ((p (ignore-errors (make-package "TEST1" :use '(#\A)))))
      (prog1
	  (and (packagep p)
	       (equalt (package-name p) "TEST1")
	       (equalt (package-nicknames p) nil)
	       (equalt (package-use-list p) (list (find-package "A")))
	       (equalt (package-used-by-list p) nil))
	(safely-delete-package p))))
  t)

(deftest make-package.8
  (progn
    (safely-delete-package '#:|TEST1|)
    (let ((p (ignore-errors (make-package '#:|TEST1| :use '("A")))))
      (prog1
	  (and (packagep p)
	       (equalt (package-name p) "TEST1")
	       (equalt (package-nicknames p) nil)
	       (equalt (package-use-list p) (list (find-package "A")))
	       (equalt (package-used-by-list p) nil))
	(safely-delete-package p))))
  t)

(deftest make-package.8a
  (progn
    (safely-delete-package '#:|TEST1|)
    (let ((p (ignore-errors (make-package '#:|TEST1| :use '(#:|A|)))))
      (prog1
	  (and (packagep p)
	       (equalt (package-name p) "TEST1")
	       (equalt (package-nicknames p) nil)
	       (equalt (package-use-list p) (list (find-package "A")))
	       (equalt (package-used-by-list p) nil))
	(safely-delete-package p))))
  t)

(deftest make-package.8b
  (progn
    (safely-delete-package '#:|TEST1|)
    (let ((p (ignore-errors (make-package '#:|TEST1| :use '(#\A)))))
      (prog1
	  (and (packagep p)
	       (equalt (package-name p) "TEST1")
	       (equalt (package-nicknames p) nil)
	       (equalt (package-use-list p) (list (find-package "A")))
	       (equalt (package-used-by-list p) nil))
	(safely-delete-package p))))
  t)

(deftest make-package.9
  (progn
    (safely-delete-package #\X)
    (let ((p (ignore-errors (make-package #\X :use '("A")))))
      (prog1
	  (and (packagep p)
	       (equalt (package-name p) "X")
	       (equalt (package-nicknames p) nil)
	       (equalt (package-use-list p) (list (find-package "A")))
	       (equalt (package-used-by-list p) nil))
	(safely-delete-package p))))
  t)

(deftest make-package.9a
  (progn
    (safely-delete-package #\X)
    (let ((p (ignore-errors (make-package #\X :use '(#:|A|)))))
      (prog1
	  (and (packagep p)
	       (equalt (package-name p) "X")
	       (equalt (package-nicknames p) nil)
	       (equalt (package-use-list p) (list (find-package "A")))
	       (equalt (package-used-by-list p) nil))
	(safely-delete-package p))))
  t)

(deftest make-package.9b
  (progn
    (safely-delete-package #\X)
    (let ((p (ignore-errors (make-package #\X :use '(#\A)))))
      (prog1
	  (and (packagep p)
	       (equalt (package-name p) "X")
	       (equalt (package-nicknames p) nil)
	       (equalt (package-use-list p) (list (find-package "A")))
	       (equalt (package-used-by-list p) nil))
	(safely-delete-package p))))
  t)

;; make-package with nicknames

(deftest make-package.10
  (progn
    (safely-delete-package "TEST1")
    (let ((p (make-package "TEST1" :nicknames '("F"))))
      (prog1
	  (and (packagep p)
	       (equalt (package-name p) "TEST1")
	       (equalt (package-nicknames p) '("F"))
	       (equalt (package-used-by-list p) nil))
	(safely-delete-package p))))
  t)

(deftest make-package.11
  (progn
    (safely-delete-package '#:|TEST1|)
    (let ((p (make-package '#:|TEST1| :nicknames '(#:|G|))))
      (prog1
	  (and (packagep p)
	       (equalt (package-name p) "TEST1")
	       (equalt (package-nicknames p) '("G"))
	       (equalt (package-used-by-list p) nil))
	(safely-delete-package p))))
  t)

(deftest make-package.12
  (progn
    (safely-delete-package '#:|TEST1|)
    (let ((p (make-package '#:|TEST1| :nicknames '(#\G))))
      (prog1
	  (and (packagep p)
	       (equalt (package-name p) "TEST1")
	       (equalt (package-nicknames p) '("G"))
	       (equalt (package-used-by-list p) nil))
	(safely-delete-package p))))
  t)

(deftest make-package.13
  (progn
    (safely-delete-package #\X)
    (let ((p (make-package #\X :nicknames '("F" #\G #:|H|))))
      (prog1
	  (and (packagep p)
	       (equalt (package-name p) "X")
	       (null (set-exclusive-or (package-nicknames p)
				       '("F" "G" "H")
				       :test #'equal))
	       (equalt (package-used-by-list p) nil))
	(safely-delete-package p))))
  t)

;;; Specialized sequences as designators

;;; The package name being a specialized sequence

(defmacro def-make-package-test1 (test-name name-form)
  `(deftest ,test-name
     (let ((name ,name-form))
       (assert (string= name "TEST1"))
       (safely-delete-package "TEST1")
       (let ((p (ignore-errors (make-package name))))
	 (prog1
	     (and (packagep p)
		  (equalt (package-name p) "TEST1")
		  (equalt (package-nicknames p) nil)
		  (equalt (package-used-by-list p) nil))
	   (safely-delete-package p))))
     t))

(def-make-package-test1 make-package.14
  (make-array 5 :initial-contents "TEST1"
	      :element-type 'base-char))

(def-make-package-test1 make-package.15
  (make-array 12 :initial-contents "TEST1xxxyyyz"
	      :fill-pointer 5
	      :element-type 'base-char))

(def-make-package-test1 make-package.16
  (make-array 12 :initial-contents "TEST1xxxyyyz"
	      :fill-pointer 5
	      :element-type 'character))

(def-make-package-test1 make-package.17
  (make-array 5 :initial-contents "TEST1"
	      :adjustable t
	      :element-type 'base-char))

(def-make-package-test1 make-package.18
  (make-array 5 :initial-contents "TEST1"
	      :adjustable t
	      :element-type 'character))

(def-make-package-test1 make-package.19
  (let* ((etype 'base-char)
	 (name0 (make-array 10 :initial-contents "xxTEST1yyy"
			    :element-type etype)))
    (make-array 5 :element-type etype
		:displaced-to name0
		:displaced-index-offset 2)))

(def-make-package-test1 make-package.20
  (let* ((etype 'character)
	 (name0 (make-array 10 :initial-contents "xxTEST1yyy"
			    :element-type etype)))
    (make-array 5 :element-type etype
		:displaced-to name0
		:displaced-index-offset 2)))

;;; Nicknames being specialized sequences

(defmacro def-make-package-test2 (test-name name-form)
  `(deftest ,test-name
     (let ((name ,name-form)
	   (nickname "TEST1-NICKNAME"))
       (safely-delete-package "TEST1")
       (safely-delete-package nickname)
       (let ((p (make-package name :nicknames (list nickname))))
	 (prog1
	     (and (packagep p)
		  (equalt (package-name p) "TEST1")
		  (equalt (package-nicknames p) (list nickname))
		  (equalt (package-used-by-list p) nil))
	   (safely-delete-package p))))
     t))

(def-make-package-test2 make-package.21
  (make-array 5 :initial-contents "TEST1"
	      :element-type 'base-char))

(def-make-package-test2 make-package.22
  (make-array 12 :initial-contents "TEST1xxxyyyz"
	      :fill-pointer 5
	      :element-type 'base-char))

(def-make-package-test2 make-package.23
  (make-array 12 :initial-contents "TEST1xxxyyyz"
	      :fill-pointer 5
	      :element-type 'character))

(def-make-package-test2 make-package.24
  (make-array 5 :initial-contents "TEST1"
	      :adjustable t
	      :element-type 'base-char))

(def-make-package-test2 make-package.25
  (make-array 5 :initial-contents "TEST1"
	      :adjustable t
	      :element-type 'character))

(def-make-package-test2 make-package.26
  (let* ((etype 'base-char)
	 (name0 (make-array 10 :initial-contents "xxTEST1yyy"
			    :element-type etype)))
    (make-array 5 :element-type etype
		:displaced-to name0
		:displaced-index-offset 2)))

(def-make-package-test2 make-package.27
  (let* ((etype 'character)
	 (name0 (make-array 10 :initial-contents "xxTEST1yyy"
			    :element-type etype)))
    (make-array 5 :element-type etype
		:displaced-to name0
		:displaced-index-offset 2)))

;;; USE names being specialized sequences

(defmacro def-make-package-test3 (test-name name-form)
  `(deftest ,test-name
     (let ((name ,name-form))
       (safely-delete-package "TEST1")
       (assert (find-package name))
       (let ((p (ignore-errors (make-package "TEST1" :use (list name)))))
	 (prog1
	     (and (packagep p)
		  (equalt (package-name p) "TEST1")
		  (equalt (package-nicknames p) nil)
		  (equalt (package-use-list p) (list (find-package name)))
		  (equalt (package-used-by-list p) nil))
	   (safely-delete-package p))))
     t))

(def-make-package-test3 make-package.28
  (make-array 1 :initial-contents "A" :element-type 'base-char))

(def-make-package-test3 make-package.29
  (make-array 8 :initial-contents "Axxxyyyz"
	      :fill-pointer 1
	      :element-type 'base-char))

(def-make-package-test3 make-package.30
  (make-array 8 :initial-contents "Axxxyyyz"
	      :fill-pointer 1
	      :element-type 'character))

(def-make-package-test3 make-package.31
  (make-array 1 :initial-contents "A"
	      :adjustable t
	      :element-type 'base-char))

(def-make-package-test3 make-package.32
  (make-array 1 :initial-contents "A"
	      :adjustable t
	      :element-type 'character))

(def-make-package-test3 make-package.33
  (let* ((etype 'base-char)
	 (name0 (make-array 10 :initial-contents "xxAyyy0123"
			    :element-type etype)))
    (make-array 1 :element-type etype
		:displaced-to name0
		:displaced-index-offset 2)))

(def-make-package-test3 make-package.34
  (let* ((etype 'character)
	 (name0 (make-array 10 :initial-contents "xxAzzzzyyy"
			    :element-type etype)))
    (make-array 1 :element-type etype
		:displaced-to name0
		:displaced-index-offset 2)))

;; Signal a continuable error if the package or any nicknames
;; exist as packages or nicknames of packages

(deftest make-package.error.1
  (handle-non-abort-restart (make-package "A"))
  success)  

(deftest make-package.error.2
  (handle-non-abort-restart (make-package "Q"))
  success)

(deftest make-package.error.3
  (handle-non-abort-restart
   (safely-delete-package "TEST1")
   (make-package "TEST1" :nicknames '("A")))
  success)

(deftest make-package.error.4
  (handle-non-abort-restart
   (safely-delete-package "TEST1")
   (make-package "TEST1" :nicknames '("Q")))
  success)

(deftest make-package.error.5
  (signals-error (make-package) program-error)
  t)

(deftest make-package.error.6
  (progn
    (safely-delete-package "MPE6")
    (signals-error (make-package "MPE6" :bad t) program-error))
  t)

(deftest make-package.error.7
  (progn
    (safely-delete-package "MPE7")
    (signals-error (make-package "MPE7" :nicknames) program-error))
  t)

(deftest make-package.error.8
  (progn
    (safely-delete-package "MPE8")
    (signals-error (make-package "MPE8" :use) program-error))
  t)

(deftest make-package.error.9
  (progn
    (safely-delete-package "MPE9")
    (signals-error (make-package "MPE9" 'bad t) program-error))
  t)

(deftest make-package.error.10
  (progn
    (safely-delete-package "MPE10")
    (signals-error (make-package "MPE10" 1 2) program-error))
  t)

(deftest make-package.error.11
  (progn
    (safely-delete-package "MPE11")
    (signals-error (make-package "MPE11" 'bad t :allow-other-keys nil)
		   program-error))
  t)
