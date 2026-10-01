
extern zend_class_entry *qt_core_qprocessfunctions_qprocessfunctions_ce;

ZEPHIR_INIT_CLASS(Qt_Core_QProcessFunctions_QProcessFunctions);

PHP_METHOD(Qt_Core_QProcessFunctions_QProcessFunctions, swap);
PHP_METHOD(Qt_Core_QProcessFunctions_QProcessFunctions, comparesEqual);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qprocessfunctions_qprocessfunctions_swap, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, value1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value2, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qprocessfunctions_qprocessfunctions_comparesequal, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, lhs, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rhs, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_core_qprocessfunctions_qprocessfunctions_method_entry) {
	PHP_ME(Qt_Core_QProcessFunctions_QProcessFunctions, swap, arginfo_qt_core_qprocessfunctions_qprocessfunctions_swap, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QProcessFunctions_QProcessFunctions, comparesEqual, arginfo_qt_core_qprocessfunctions_qprocessfunctions_comparesequal, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
