
extern zend_class_entry *qt_core_qatomicint_qatomicint_ce;

ZEPHIR_INIT_CLASS(Qt_Core_QAtomicInt_QAtomicInt);

PHP_METHOD(Qt_Core_QAtomicInt_QAtomicInt, new_);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qatomicint_qatomicint_new_, 0, 0, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_core_qatomicint_qatomicint_method_entry) {
	PHP_ME(Qt_Core_QAtomicInt_QAtomicInt, new_, arginfo_qt_core_qatomicint_qatomicint_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
