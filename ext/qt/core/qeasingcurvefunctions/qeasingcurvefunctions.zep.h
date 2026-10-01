
extern zend_class_entry *qt_core_qeasingcurvefunctions_qeasingcurvefunctions_ce;

ZEPHIR_INIT_CLASS(Qt_Core_QEasingcurveFunctions_QEasingcurveFunctions);

PHP_METHOD(Qt_Core_QEasingcurveFunctions_QEasingcurveFunctions, swap);
PHP_METHOD(Qt_Core_QEasingcurveFunctions_QEasingcurveFunctions, comparesEqual);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qeasingcurvefunctions_qeasingcurvefunctions_swap, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, value1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value2, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qeasingcurvefunctions_qeasingcurvefunctions_comparesequal, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, lhs, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rhs, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_core_qeasingcurvefunctions_qeasingcurvefunctions_method_entry) {
	PHP_ME(Qt_Core_QEasingcurveFunctions_QEasingcurveFunctions, swap, arginfo_qt_core_qeasingcurvefunctions_qeasingcurvefunctions_swap, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QEasingcurveFunctions_QEasingcurveFunctions, comparesEqual, arginfo_qt_core_qeasingcurvefunctions_qeasingcurvefunctions_comparesequal, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
