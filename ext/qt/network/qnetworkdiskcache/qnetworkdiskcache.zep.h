
extern zend_class_entry *qt_network_qnetworkdiskcache_qnetworkdiskcache_ce;

ZEPHIR_INIT_CLASS(Qt_Network_QNetworkDiskCache_QNetworkDiskCache);

PHP_METHOD(Qt_Network_QNetworkDiskCache_QNetworkDiskCache, staticMetaObject);
PHP_METHOD(Qt_Network_QNetworkDiskCache_QNetworkDiskCache, tr);
PHP_METHOD(Qt_Network_QNetworkDiskCache_QNetworkDiskCache, new_);
PHP_METHOD(Qt_Network_QNetworkDiskCache_QNetworkDiskCache, cacheDirectory);
PHP_METHOD(Qt_Network_QNetworkDiskCache_QNetworkDiskCache, setCacheDirectory);
PHP_METHOD(Qt_Network_QNetworkDiskCache_QNetworkDiskCache, maximumCacheSize);
PHP_METHOD(Qt_Network_QNetworkDiskCache_QNetworkDiskCache, setMaximumCacheSize);
PHP_METHOD(Qt_Network_QNetworkDiskCache_QNetworkDiskCache, cacheSize);
PHP_METHOD(Qt_Network_QNetworkDiskCache_QNetworkDiskCache, metaData);
PHP_METHOD(Qt_Network_QNetworkDiskCache_QNetworkDiskCache, updateMetaData);
PHP_METHOD(Qt_Network_QNetworkDiskCache_QNetworkDiskCache, data);
PHP_METHOD(Qt_Network_QNetworkDiskCache_QNetworkDiskCache, remove);
PHP_METHOD(Qt_Network_QNetworkDiskCache_QNetworkDiskCache, prepare);
PHP_METHOD(Qt_Network_QNetworkDiskCache_QNetworkDiskCache, insert);
PHP_METHOD(Qt_Network_QNetworkDiskCache_QNetworkDiskCache, fileMetaData);
PHP_METHOD(Qt_Network_QNetworkDiskCache_QNetworkDiskCache, clear);
PHP_METHOD(Qt_Network_QNetworkDiskCache_QNetworkDiskCache, expire);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qnetworkdiskcache_qnetworkdiskcache_staticmetaobject, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qnetworkdiskcache_qnetworkdiskcache_tr, 0, 1, IS_STRING, 0)
	ZEND_ARG_INFO(0, s)
	ZEND_ARG_INFO(0, c)
	ZEND_ARG_TYPE_INFO(0, n, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qnetworkdiskcache_qnetworkdiskcache_new_, 0, 0, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qnetworkdiskcache_qnetworkdiskcache_cachedirectory, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qnetworkdiskcache_qnetworkdiskcache_setcachedirectory, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, cacheDir, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qnetworkdiskcache_qnetworkdiskcache_maximumcachesize, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qnetworkdiskcache_qnetworkdiskcache_setmaximumcachesize, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, size, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qnetworkdiskcache_qnetworkdiskcache_cachesize, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qnetworkdiskcache_qnetworkdiskcache_metadata, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, url, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qnetworkdiskcache_qnetworkdiskcache_updatemetadata, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, metaData, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qnetworkdiskcache_qnetworkdiskcache_data, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, url, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qnetworkdiskcache_qnetworkdiskcache_remove, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, url, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qnetworkdiskcache_qnetworkdiskcache_prepare, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, metaData, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qnetworkdiskcache_qnetworkdiskcache_insert, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, device, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qnetworkdiskcache_qnetworkdiskcache_filemetadata, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, fileName, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qnetworkdiskcache_qnetworkdiskcache_clear, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qnetworkdiskcache_qnetworkdiskcache_expire, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_network_qnetworkdiskcache_qnetworkdiskcache_method_entry) {
	PHP_ME(Qt_Network_QNetworkDiskCache_QNetworkDiskCache, staticMetaObject, arginfo_qt_network_qnetworkdiskcache_qnetworkdiskcache_staticmetaobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QNetworkDiskCache_QNetworkDiskCache, tr, arginfo_qt_network_qnetworkdiskcache_qnetworkdiskcache_tr, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QNetworkDiskCache_QNetworkDiskCache, new_, arginfo_qt_network_qnetworkdiskcache_qnetworkdiskcache_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QNetworkDiskCache_QNetworkDiskCache, cacheDirectory, arginfo_qt_network_qnetworkdiskcache_qnetworkdiskcache_cachedirectory, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QNetworkDiskCache_QNetworkDiskCache, setCacheDirectory, arginfo_qt_network_qnetworkdiskcache_qnetworkdiskcache_setcachedirectory, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QNetworkDiskCache_QNetworkDiskCache, maximumCacheSize, arginfo_qt_network_qnetworkdiskcache_qnetworkdiskcache_maximumcachesize, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QNetworkDiskCache_QNetworkDiskCache, setMaximumCacheSize, arginfo_qt_network_qnetworkdiskcache_qnetworkdiskcache_setmaximumcachesize, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QNetworkDiskCache_QNetworkDiskCache, cacheSize, arginfo_qt_network_qnetworkdiskcache_qnetworkdiskcache_cachesize, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QNetworkDiskCache_QNetworkDiskCache, metaData, arginfo_qt_network_qnetworkdiskcache_qnetworkdiskcache_metadata, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QNetworkDiskCache_QNetworkDiskCache, updateMetaData, arginfo_qt_network_qnetworkdiskcache_qnetworkdiskcache_updatemetadata, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QNetworkDiskCache_QNetworkDiskCache, data, arginfo_qt_network_qnetworkdiskcache_qnetworkdiskcache_data, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QNetworkDiskCache_QNetworkDiskCache, remove, arginfo_qt_network_qnetworkdiskcache_qnetworkdiskcache_remove, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QNetworkDiskCache_QNetworkDiskCache, prepare, arginfo_qt_network_qnetworkdiskcache_qnetworkdiskcache_prepare, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QNetworkDiskCache_QNetworkDiskCache, insert, arginfo_qt_network_qnetworkdiskcache_qnetworkdiskcache_insert, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QNetworkDiskCache_QNetworkDiskCache, fileMetaData, arginfo_qt_network_qnetworkdiskcache_qnetworkdiskcache_filemetadata, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QNetworkDiskCache_QNetworkDiskCache, clear, arginfo_qt_network_qnetworkdiskcache_qnetworkdiskcache_clear, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QNetworkDiskCache_QNetworkDiskCache, expire, arginfo_qt_network_qnetworkdiskcache_qnetworkdiskcache_expire, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
