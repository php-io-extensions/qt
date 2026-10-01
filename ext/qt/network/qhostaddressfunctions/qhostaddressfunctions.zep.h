
extern zend_class_entry *qt_network_qhostaddressfunctions_qhostaddressfunctions_ce;

ZEPHIR_INIT_CLASS(Qt_Network_QHostaddressFunctions_QHostaddressFunctions);

PHP_METHOD(Qt_Network_QHostaddressFunctions_QHostaddressFunctions, qHash);
PHP_METHOD(Qt_Network_QHostaddressFunctions_QHostaddressFunctions, swap);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qhostaddressfunctions_qhostaddressfunctions_qhash, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, key, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, seed, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qhostaddressfunctions_qhostaddressfunctions_swap, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, value1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value2, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_network_qhostaddressfunctions_qhostaddressfunctions_method_entry) {
	PHP_ME(Qt_Network_QHostaddressFunctions_QHostaddressFunctions, qHash, arginfo_qt_network_qhostaddressfunctions_qhostaddressfunctions_qhash, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QHostaddressFunctions_QHostaddressFunctions, swap, arginfo_qt_network_qhostaddressfunctions_qhostaddressfunctions_swap, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
