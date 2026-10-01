
extern zend_class_entry *qt_core_qeventloopfunctions_qeventloopfunctions_ce;

ZEPHIR_INIT_CLASS(Qt_Core_QEventloopFunctions_QEventloopFunctions);

PHP_METHOD(Qt_Core_QEventloopFunctions_QEventloopFunctions, swap);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qeventloopfunctions_qeventloopfunctions_swap, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, lhs, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rhs, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_core_qeventloopfunctions_qeventloopfunctions_method_entry) {
	PHP_ME(Qt_Core_QEventloopFunctions_QEventloopFunctions, swap, arginfo_qt_core_qeventloopfunctions_qeventloopfunctions_swap, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
