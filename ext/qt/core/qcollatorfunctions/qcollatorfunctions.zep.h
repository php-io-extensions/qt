
extern zend_class_entry *qt_core_qcollatorfunctions_qcollatorfunctions_ce;

ZEPHIR_INIT_CLASS(Qt_Core_QCollatorFunctions_QCollatorFunctions);

PHP_METHOD(Qt_Core_QCollatorFunctions_QCollatorFunctions, swap);
PHP_METHOD(Qt_Core_QCollatorFunctions_QCollatorFunctions, swapQCollatorQCollator);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcollatorfunctions_qcollatorfunctions_swap, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, value1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value2, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcollatorfunctions_qcollatorfunctions_swapqcollatorqcollator, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, value1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value2, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_core_qcollatorfunctions_qcollatorfunctions_method_entry) {
	PHP_ME(Qt_Core_QCollatorFunctions_QCollatorFunctions, swap, arginfo_qt_core_qcollatorfunctions_qcollatorfunctions_swap, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCollatorFunctions_QCollatorFunctions, swapQCollatorQCollator, arginfo_qt_core_qcollatorfunctions_qcollatorfunctions_swapqcollatorqcollator, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
