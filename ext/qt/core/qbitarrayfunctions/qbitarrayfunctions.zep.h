
extern zend_class_entry *qt_core_qbitarrayfunctions_qbitarrayfunctions_ce;

ZEPHIR_INIT_CLASS(Qt_Core_QBitarrayFunctions_QBitarrayFunctions);

PHP_METHOD(Qt_Core_QBitarrayFunctions_QBitarrayFunctions, swap);
PHP_METHOD(Qt_Core_QBitarrayFunctions_QBitarrayFunctions, comparesEqual);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qbitarrayfunctions_qbitarrayfunctions_swap, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, value1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value2, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qbitarrayfunctions_qbitarrayfunctions_comparesequal, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, lhs, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rhs, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_core_qbitarrayfunctions_qbitarrayfunctions_method_entry) {
	PHP_ME(Qt_Core_QBitarrayFunctions_QBitarrayFunctions, swap, arginfo_qt_core_qbitarrayfunctions_qbitarrayfunctions_swap, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QBitarrayFunctions_QBitarrayFunctions, comparesEqual, arginfo_qt_core_qbitarrayfunctions_qbitarrayfunctions_comparesequal, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
