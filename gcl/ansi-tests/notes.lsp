;-*- Mode:     Lisp -*-
;;;; Author:   Paul Dietz
;;;; Created:  Mon Jun 30 21:43:23 2003
;;;; Contains: Notes concerning various parts of the ANSI spec.

(in-package :cl-test)

(defnote :allow-nil-arrays
  "Allow specialized arrays of type (array nil).")

(defnote :allow-nonzero-nil-vectors
  "Allow specialized vectors of type (vector nil) of nonzero size.")

(defnote :nil-vectors-are-strings
  "Assume that (VECTOR NIL) objects are strings.")

(defnote :standardized-package-nicknames
  "The standardized package nicknames specified in section 11 of ANSI CL are exclusive (disputed).")

(defnote :type-of/strict-builtins
  "Interpret requirement 1.a on the TYPE-OF page to apply to all built-in types that contain the object, not just to some builtin type that contains the object.")

(defnote :assume-no-gray-streams
  "Disable the test if gray streams are present.")

(defnote :assume-no-simple-streams
  "Disable the test if simple streams are present.")

(defnote :open-if-exists-new-version-no-error
  "Assume that OPEN, when called with :if-exists :new-version, does not fail.")

#+sbcl (rt::disable-note :open-if-exists-new-version-no-error)

(defnote :negative-zero-is-similar-to-positive-zero
  "The definition of similarity implies that -0.0 and 0.0 are similar (for each float type.)  If negative zeros are distinct this is probably not good, since it makes (defconstant x 0.0) be nonportable.")
