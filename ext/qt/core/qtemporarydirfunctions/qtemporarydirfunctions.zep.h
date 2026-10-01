
extern zend_class_entry *qt_core_qtemporarydirfunctions_qtemporarydirfunctions_ce;

ZEPHIR_INIT_CLASS(Qt_Core_QTemporarydirFunctions_QTemporarydirFunctions);

PHP_METHOD(Qt_Core_QTemporarydirFunctions_QTemporarydirFunctions, swap);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qtemporarydirfunctions_qtemporarydirfunctions_swap, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, lhs, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rhs, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_core_qtemporarydirfunctions_qtemporarydirfunctions_method_entry) {
	PHP_ME(Qt_Core_QTemporarydirFunctions_QTemporarydirFunctions, swap, arginfo_qt_core_qtemporarydirfunctions_qtemporarydirfunctions_swap, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
