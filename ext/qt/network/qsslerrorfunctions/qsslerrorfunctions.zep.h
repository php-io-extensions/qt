
extern zend_class_entry *qt_network_qsslerrorfunctions_qsslerrorfunctions_ce;

ZEPHIR_INIT_CLASS(Qt_Network_QSslerrorFunctions_QSslerrorFunctions);

PHP_METHOD(Qt_Network_QSslerrorFunctions_QSslerrorFunctions, swap);
PHP_METHOD(Qt_Network_QSslerrorFunctions_QSslerrorFunctions, qHash);
PHP_METHOD(Qt_Network_QSslerrorFunctions_QSslerrorFunctions, qRegisterNormalizedMetaType_QList_QSslError);
PHP_METHOD(Qt_Network_QSslerrorFunctions_QSslerrorFunctions, print_);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qsslerrorfunctions_qsslerrorfunctions_swap, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, value1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value2, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qsslerrorfunctions_qsslerrorfunctions_qhash, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, key, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, seed, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qsslerrorfunctions_qsslerrorfunctions_qregisternormalizedmetatype_qlist_qsslerror, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qsslerrorfunctions_qsslerrorfunctions_print_, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, debug, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, error, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_network_qsslerrorfunctions_qsslerrorfunctions_method_entry) {
	PHP_ME(Qt_Network_QSslerrorFunctions_QSslerrorFunctions, swap, arginfo_qt_network_qsslerrorfunctions_qsslerrorfunctions_swap, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QSslerrorFunctions_QSslerrorFunctions, qHash, arginfo_qt_network_qsslerrorfunctions_qsslerrorfunctions_qhash, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QSslerrorFunctions_QSslerrorFunctions, qRegisterNormalizedMetaType_QList_QSslError, arginfo_qt_network_qsslerrorfunctions_qsslerrorfunctions_qregisternormalizedmetatype_qlist_qsslerror, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QSslerrorFunctions_QSslerrorFunctions, print_, arginfo_qt_network_qsslerrorfunctions_qsslerrorfunctions_print_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
