
(lisp::defun compiler::cmp-anon (#0=#:g9964 #1=#:g9966) (lisp::function (lisp::lambda (pcl::.arg0. pcl::.arg1.) (lisp::locally (lisp::declare (lisp::optimize (lisp::speed 3) (lisp::safety 0))) (lisp::let ((pcl::emf #0#)) (lisp::progn lisp::nil (lisp::cond ((lisp::typep pcl::emf (lisp::quote pcl::fast-method-call)) (lisp::funcall (pcl::fast-method-call-function pcl::emf) (pcl::fast-method-call-pv-cell pcl::emf) (pcl::fast-method-call-next-method-call pcl::emf) . #2=(pcl::.arg0. pcl::.arg1.))) ((lisp::typep pcl::emf (lisp::quote lisp::fixnum)) (lisp::let ((pcl::.new-value. pcl::.arg0.) (pcl::.slots. (lisp::cond ((pcl::std-instance-p pcl::.arg0.) (pcl::%std-instance-slots pcl::.arg0.)) ((pcl::funcallable-instance-p pcl::.arg0.) (lisp::car (pcl::%cclosure-env-nthcdr 12 pcl::.arg0.)))))) (lisp::if pcl::.slots. (lisp::progn (system::svset (lisp::the lisp::simple-vector pcl::.slots.) (lisp::the lisp::fixnum pcl::emf) pcl::.new-value.))))) (lisp::t (lisp::let ((#3=#:g9965 pcl::emf)) (lisp::if (lisp::typep #3# (lisp::quote pcl::method-call)) (lisp::progn (lisp::let ((pcl::.function. (pcl::method-call-function pcl::emf)) (pcl::.args. (lisp::list . #2#)) (pcl::.cm-args. (pcl::method-call-call-method-args pcl::emf))) (lisp::declare (lisp::type lisp::function pcl::.function.)) (lisp::if (lisp::if pcl::.cm-args. (lisp::null (lisp::cdr pcl::.cm-args.))) (lisp::funcall pcl::.function. pcl::.args. (lisp::car pcl::.cm-args.)) (lisp::apply pcl::.function. pcl::.args. pcl::.cm-args.)))) (lisp::if (lisp::typep #3# (lisp::quote lisp::function)) (lisp::progn (lisp::funcall (lisp::the lisp::function pcl::emf) . #2#)) (lisp::error (system::typecase-error-string (lisp::quote pcl::emf) #3# #1#)))))))))))))