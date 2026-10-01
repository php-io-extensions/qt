
extern zend_class_entry *qt_network_qsslkeyfunctions_qsslkeyfunctions_ce;

ZEPHIR_INIT_CLASS(Qt_Network_QSslkeyFunctions_QSslkeyFunctions);

PHP_METHOD(Qt_Network_QSslkeyFunctions_QSslkeyFunctions, swap);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qsslkeyfunctions_qsslkeyfunctions_swap, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, value1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value2, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_network_qsslkeyfunctions_qsslkeyfunctions_method_entry) {
	PHP_ME(Qt_Network_QSslkeyFunctions_QSslkeyFunctions, swap, arginfo_qt_network_qsslkeyfunctions_qsslkeyfunctions_swap, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
