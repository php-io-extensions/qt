
extern zend_class_entry *qt_core_qexception_qexception_ce;

ZEPHIR_INIT_CLASS(Qt_Core_QException_QException);

PHP_METHOD(Qt_Core_QException_QException, new_);
PHP_METHOD(Qt_Core_QException_QException, newQException);
PHP_METHOD(Qt_Core_QException_QException, raise);
PHP_METHOD(Qt_Core_QException_QException, clone_);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qexception_qexception_new_, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qexception_qexception_newqexception, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qexception_qexception_raise, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qexception_qexception_clone_, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_core_qexception_qexception_method_entry) {
	PHP_ME(Qt_Core_QException_QException, new_, arginfo_qt_core_qexception_qexception_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QException_QException, newQException, arginfo_qt_core_qexception_qexception_newqexception, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QException_QException, raise, arginfo_qt_core_qexception_qexception_raise, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QException_QException, clone_, arginfo_qt_core_qexception_qexception_clone_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
