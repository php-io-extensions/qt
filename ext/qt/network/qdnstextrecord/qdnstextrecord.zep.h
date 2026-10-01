
extern zend_class_entry *qt_network_qdnstextrecord_qdnstextrecord_ce;

ZEPHIR_INIT_CLASS(Qt_Network_QDnsTextRecord_QDnsTextRecord);

PHP_METHOD(Qt_Network_QDnsTextRecord_QDnsTextRecord, new_);
PHP_METHOD(Qt_Network_QDnsTextRecord_QDnsTextRecord, newQDnsTextRecord);
PHP_METHOD(Qt_Network_QDnsTextRecord_QDnsTextRecord, swap);
PHP_METHOD(Qt_Network_QDnsTextRecord_QDnsTextRecord, name);
PHP_METHOD(Qt_Network_QDnsTextRecord_QDnsTextRecord, timeToLive);
PHP_METHOD(Qt_Network_QDnsTextRecord_QDnsTextRecord, values);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qdnstextrecord_qdnstextrecord_new_, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qdnstextrecord_qdnstextrecord_newqdnstextrecord, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, other, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qdnstextrecord_qdnstextrecord_swap, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, other, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qdnstextrecord_qdnstextrecord_name, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qdnstextrecord_qdnstextrecord_timetolive, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qdnstextrecord_qdnstextrecord_values, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_network_qdnstextrecord_qdnstextrecord_method_entry) {
	PHP_ME(Qt_Network_QDnsTextRecord_QDnsTextRecord, new_, arginfo_qt_network_qdnstextrecord_qdnstextrecord_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QDnsTextRecord_QDnsTextRecord, newQDnsTextRecord, arginfo_qt_network_qdnstextrecord_qdnstextrecord_newqdnstextrecord, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QDnsTextRecord_QDnsTextRecord, swap, arginfo_qt_network_qdnstextrecord_qdnstextrecord_swap, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QDnsTextRecord_QDnsTextRecord, name, arginfo_qt_network_qdnstextrecord_qdnstextrecord_name, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QDnsTextRecord_QDnsTextRecord, timeToLive, arginfo_qt_network_qdnstextrecord_qdnstextrecord_timetolive, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QDnsTextRecord_QDnsTextRecord, values, arginfo_qt_network_qdnstextrecord_qdnstextrecord_values, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
