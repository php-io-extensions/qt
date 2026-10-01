
extern zend_class_entry *qt_network_qdnsservicerecord_qdnsservicerecord_ce;

ZEPHIR_INIT_CLASS(Qt_Network_QDnsServiceRecord_QDnsServiceRecord);

PHP_METHOD(Qt_Network_QDnsServiceRecord_QDnsServiceRecord, new_);
PHP_METHOD(Qt_Network_QDnsServiceRecord_QDnsServiceRecord, newQDnsServiceRecord);
PHP_METHOD(Qt_Network_QDnsServiceRecord_QDnsServiceRecord, swap);
PHP_METHOD(Qt_Network_QDnsServiceRecord_QDnsServiceRecord, name);
PHP_METHOD(Qt_Network_QDnsServiceRecord_QDnsServiceRecord, port);
PHP_METHOD(Qt_Network_QDnsServiceRecord_QDnsServiceRecord, priority);
PHP_METHOD(Qt_Network_QDnsServiceRecord_QDnsServiceRecord, target);
PHP_METHOD(Qt_Network_QDnsServiceRecord_QDnsServiceRecord, timeToLive);
PHP_METHOD(Qt_Network_QDnsServiceRecord_QDnsServiceRecord, weight);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qdnsservicerecord_qdnsservicerecord_new_, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qdnsservicerecord_qdnsservicerecord_newqdnsservicerecord, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, other, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qdnsservicerecord_qdnsservicerecord_swap, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, other, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qdnsservicerecord_qdnsservicerecord_name, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qdnsservicerecord_qdnsservicerecord_port, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qdnsservicerecord_qdnsservicerecord_priority, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qdnsservicerecord_qdnsservicerecord_target, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qdnsservicerecord_qdnsservicerecord_timetolive, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qdnsservicerecord_qdnsservicerecord_weight, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_network_qdnsservicerecord_qdnsservicerecord_method_entry) {
	PHP_ME(Qt_Network_QDnsServiceRecord_QDnsServiceRecord, new_, arginfo_qt_network_qdnsservicerecord_qdnsservicerecord_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QDnsServiceRecord_QDnsServiceRecord, newQDnsServiceRecord, arginfo_qt_network_qdnsservicerecord_qdnsservicerecord_newqdnsservicerecord, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QDnsServiceRecord_QDnsServiceRecord, swap, arginfo_qt_network_qdnsservicerecord_qdnsservicerecord_swap, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QDnsServiceRecord_QDnsServiceRecord, name, arginfo_qt_network_qdnsservicerecord_qdnsservicerecord_name, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QDnsServiceRecord_QDnsServiceRecord, port, arginfo_qt_network_qdnsservicerecord_qdnsservicerecord_port, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QDnsServiceRecord_QDnsServiceRecord, priority, arginfo_qt_network_qdnsservicerecord_qdnsservicerecord_priority, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QDnsServiceRecord_QDnsServiceRecord, target, arginfo_qt_network_qdnsservicerecord_qdnsservicerecord_target, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QDnsServiceRecord_QDnsServiceRecord, timeToLive, arginfo_qt_network_qdnsservicerecord_qdnsservicerecord_timetolive, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QDnsServiceRecord_QDnsServiceRecord, weight, arginfo_qt_network_qdnsservicerecord_qdnsservicerecord_weight, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
