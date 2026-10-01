
extern zend_class_entry *qt_network_qabstractnetworkcache_qabstractnetworkcache_ce;

ZEPHIR_INIT_CLASS(Qt_Network_QAbstractNetworkCache_QAbstractNetworkCache);

PHP_METHOD(Qt_Network_QAbstractNetworkCache_QAbstractNetworkCache, staticMetaObject);
PHP_METHOD(Qt_Network_QAbstractNetworkCache_QAbstractNetworkCache, tr);
PHP_METHOD(Qt_Network_QAbstractNetworkCache_QAbstractNetworkCache, metaData);
PHP_METHOD(Qt_Network_QAbstractNetworkCache_QAbstractNetworkCache, updateMetaData);
PHP_METHOD(Qt_Network_QAbstractNetworkCache_QAbstractNetworkCache, data);
PHP_METHOD(Qt_Network_QAbstractNetworkCache_QAbstractNetworkCache, remove);
PHP_METHOD(Qt_Network_QAbstractNetworkCache_QAbstractNetworkCache, cacheSize);
PHP_METHOD(Qt_Network_QAbstractNetworkCache_QAbstractNetworkCache, prepare);
PHP_METHOD(Qt_Network_QAbstractNetworkCache_QAbstractNetworkCache, insert);
PHP_METHOD(Qt_Network_QAbstractNetworkCache_QAbstractNetworkCache, clear);
PHP_METHOD(Qt_Network_QAbstractNetworkCache_QAbstractNetworkCache, new_);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qabstractnetworkcache_qabstractnetworkcache_staticmetaobject, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qabstractnetworkcache_qabstractnetworkcache_tr, 0, 1, IS_STRING, 0)
	ZEND_ARG_INFO(0, s)
	ZEND_ARG_INFO(0, c)
	ZEND_ARG_TYPE_INFO(0, n, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qabstractnetworkcache_qabstractnetworkcache_metadata, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, url, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qabstractnetworkcache_qabstractnetworkcache_updatemetadata, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, metaData, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qabstractnetworkcache_qabstractnetworkcache_data, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, url, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qabstractnetworkcache_qabstractnetworkcache_remove, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, url, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qabstractnetworkcache_qabstractnetworkcache_cachesize, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qabstractnetworkcache_qabstractnetworkcache_prepare, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, metaData, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qabstractnetworkcache_qabstractnetworkcache_insert, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, device, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qabstractnetworkcache_qabstractnetworkcache_clear, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qabstractnetworkcache_qabstractnetworkcache_new_, 0, 0, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_network_qabstractnetworkcache_qabstractnetworkcache_method_entry) {
	PHP_ME(Qt_Network_QAbstractNetworkCache_QAbstractNetworkCache, staticMetaObject, arginfo_qt_network_qabstractnetworkcache_qabstractnetworkcache_staticmetaobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QAbstractNetworkCache_QAbstractNetworkCache, tr, arginfo_qt_network_qabstractnetworkcache_qabstractnetworkcache_tr, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QAbstractNetworkCache_QAbstractNetworkCache, metaData, arginfo_qt_network_qabstractnetworkcache_qabstractnetworkcache_metadata, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QAbstractNetworkCache_QAbstractNetworkCache, updateMetaData, arginfo_qt_network_qabstractnetworkcache_qabstractnetworkcache_updatemetadata, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QAbstractNetworkCache_QAbstractNetworkCache, data, arginfo_qt_network_qabstractnetworkcache_qabstractnetworkcache_data, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QAbstractNetworkCache_QAbstractNetworkCache, remove, arginfo_qt_network_qabstractnetworkcache_qabstractnetworkcache_remove, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QAbstractNetworkCache_QAbstractNetworkCache, cacheSize, arginfo_qt_network_qabstractnetworkcache_qabstractnetworkcache_cachesize, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QAbstractNetworkCache_QAbstractNetworkCache, prepare, arginfo_qt_network_qabstractnetworkcache_qabstractnetworkcache_prepare, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QAbstractNetworkCache_QAbstractNetworkCache, insert, arginfo_qt_network_qabstractnetworkcache_qabstractnetworkcache_insert, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QAbstractNetworkCache_QAbstractNetworkCache, clear, arginfo_qt_network_qabstractnetworkcache_qabstractnetworkcache_clear, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QAbstractNetworkCache_QAbstractNetworkCache, new_, arginfo_qt_network_qabstractnetworkcache_qabstractnetworkcache_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
