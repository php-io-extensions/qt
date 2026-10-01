
extern zend_class_entry *qt_core_qunhandledexception_qunhandledexception_ce;

ZEPHIR_INIT_CLASS(Qt_Core_QUnhandledException_QUnhandledException);

PHP_METHOD(Qt_Core_QUnhandledException_QUnhandledException, new_);
PHP_METHOD(Qt_Core_QUnhandledException_QUnhandledException, swap);
PHP_METHOD(Qt_Core_QUnhandledException_QUnhandledException, raise);
PHP_METHOD(Qt_Core_QUnhandledException_QUnhandledException, clone_);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qunhandledexception_qunhandledexception_new_, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, other, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qunhandledexception_qunhandledexception_swap, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, other, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qunhandledexception_qunhandledexception_raise, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qunhandledexception_qunhandledexception_clone_, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_core_qunhandledexception_qunhandledexception_method_entry) {
	PHP_ME(Qt_Core_QUnhandledException_QUnhandledException, new_, arginfo_qt_core_qunhandledexception_qunhandledexception_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QUnhandledException_QUnhandledException, swap, arginfo_qt_core_qunhandledexception_qunhandledexception_swap, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QUnhandledException_QUnhandledException, raise, arginfo_qt_core_qunhandledexception_qunhandledexception_raise, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QUnhandledException_QUnhandledException, clone_, arginfo_qt_core_qunhandledexception_qunhandledexception_clone_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
