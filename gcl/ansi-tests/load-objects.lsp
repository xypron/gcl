;-*- Mode:     Lisp -*-
;;;; Author:   Paul Dietz
;;;; Created:  Mon Mar 24 03:39:09 2003
;;;; Contains: Loader for CLOS-related test files

(compile-and-load "defclass-aux.lsp")
(load "defclass.lsp")
(load "defclass-01.lsp")
(load "defclass-02.lsp")
(load "defclass-03.lsp")
(load "defclass-errors.lsp")
(load "defclass-forward-reference.lsp")
(load "ensure-generic-function.lsp")
(load "allocate-instance.lsp")
(load "reinitialize-instance.lsp")
(load "shared-initialize.lsp")
(load "change-class.lsp")
(load "update-instance-for-different-class.lsp")
(load "slot-boundp.lsp")
(load "slot-exists-p.lsp")
(load "slot-makunbound.lsp")
(load "slot-value.lsp")
(load "method-qualifiers.lsp")
(load "no-applicable-method.lsp")
(load "no-next-method.lsp")
(load "remove-method.lsp")
(load "make-instance.lsp")
