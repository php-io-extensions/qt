
extern zend_class_entry *qt_network_qrestaccessmanager_qrestaccessmanager_ce;

ZEPHIR_INIT_CLASS(Qt_Network_QRestAccessManager_QRestAccessManager);

PHP_METHOD(Qt_Network_QRestAccessManager_QRestAccessManager, staticMetaObject);
PHP_METHOD(Qt_Network_QRestAccessManager_QRestAccessManager, tr);
PHP_METHOD(Qt_Network_QRestAccessManager_QRestAccessManager, new_);
PHP_METHOD(Qt_Network_QRestAccessManager_QRestAccessManager, networkAccessManager);
PHP_METHOD(Qt_Network_QRestAccessManager_QRestAccessManager, deleteResource);
PHP_METHOD(Qt_Network_QRestAccessManager_QRestAccessManager, head);
PHP_METHOD(Qt_Network_QRestAccessManager_QRestAccessManager, get);
PHP_METHOD(Qt_Network_QRestAccessManager_QRestAccessManager, getQNetworkRequestQByteArray);
PHP_METHOD(Qt_Network_QRestAccessManager_QRestAccessManager, getQNetworkRequestQJsonDocument);
PHP_METHOD(Qt_Network_QRestAccessManager_QRestAccessManager, getQNetworkRequestQIODevice);
PHP_METHOD(Qt_Network_QRestAccessManager_QRestAccessManager, post);
PHP_METHOD(Qt_Network_QRestAccessManager_QRestAccessManager, postQNetworkRequestQVariantMap);
PHP_METHOD(Qt_Network_QRestAccessManager_QRestAccessManager, postQNetworkRequestQByteArray);
PHP_METHOD(Qt_Network_QRestAccessManager_QRestAccessManager, postQNetworkRequestQHttpMultiPart);
PHP_METHOD(Qt_Network_QRestAccessManager_QRestAccessManager, postQNetworkRequestQIODevice);
PHP_METHOD(Qt_Network_QRestAccessManager_QRestAccessManager, put);
PHP_METHOD(Qt_Network_QRestAccessManager_QRestAccessManager, putQNetworkRequestQVariantMap);
PHP_METHOD(Qt_Network_QRestAccessManager_QRestAccessManager, putQNetworkRequestQByteArray);
PHP_METHOD(Qt_Network_QRestAccessManager_QRestAccessManager, putQNetworkRequestQHttpMultiPart);
PHP_METHOD(Qt_Network_QRestAccessManager_QRestAccessManager, putQNetworkRequestQIODevice);
PHP_METHOD(Qt_Network_QRestAccessManager_QRestAccessManager, patch);
PHP_METHOD(Qt_Network_QRestAccessManager_QRestAccessManager, patchQNetworkRequestQVariantMap);
PHP_METHOD(Qt_Network_QRestAccessManager_QRestAccessManager, patchQNetworkRequestQByteArray);
PHP_METHOD(Qt_Network_QRestAccessManager_QRestAccessManager, patchQNetworkRequestQIODevice);
PHP_METHOD(Qt_Network_QRestAccessManager_QRestAccessManager, sendCustomRequest);
PHP_METHOD(Qt_Network_QRestAccessManager_QRestAccessManager, sendCustomRequestQNetworkRequestQByteArrayQIODevice);
PHP_METHOD(Qt_Network_QRestAccessManager_QRestAccessManager, sendCustomRequestQNetworkRequestQByteArrayQHttpMultiPart);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qrestaccessmanager_qrestaccessmanager_staticmetaobject, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qrestaccessmanager_qrestaccessmanager_tr, 0, 1, IS_STRING, 0)
	ZEND_ARG_INFO(0, s)
	ZEND_ARG_INFO(0, c)
	ZEND_ARG_TYPE_INFO(0, n, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qrestaccessmanager_qrestaccessmanager_new_, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, manager, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qrestaccessmanager_qrestaccessmanager_networkaccessmanager, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qrestaccessmanager_qrestaccessmanager_deleteresource, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, request, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qrestaccessmanager_qrestaccessmanager_head, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, request, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qrestaccessmanager_qrestaccessmanager_get, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, request, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qrestaccessmanager_qrestaccessmanager_getqnetworkrequestqbytearray, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, request, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, data, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qrestaccessmanager_qrestaccessmanager_getqnetworkrequestqjsondocument, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, request, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, data, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qrestaccessmanager_qrestaccessmanager_getqnetworkrequestqiodevice, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, request, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, data, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qrestaccessmanager_qrestaccessmanager_post, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, request, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, data, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qrestaccessmanager_qrestaccessmanager_postqnetworkrequestqvariantmap, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, request, IS_LONG, 0)
	ZEND_ARG_ARRAY_INFO(0, data, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qrestaccessmanager_qrestaccessmanager_postqnetworkrequestqbytearray, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, request, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, data, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qrestaccessmanager_qrestaccessmanager_postqnetworkrequestqhttpmultipart, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, request, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, data, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qrestaccessmanager_qrestaccessmanager_postqnetworkrequestqiodevice, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, request, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, data, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qrestaccessmanager_qrestaccessmanager_put, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, request, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, data, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qrestaccessmanager_qrestaccessmanager_putqnetworkrequestqvariantmap, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, request, IS_LONG, 0)
	ZEND_ARG_ARRAY_INFO(0, data, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qrestaccessmanager_qrestaccessmanager_putqnetworkrequestqbytearray, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, request, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, data, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qrestaccessmanager_qrestaccessmanager_putqnetworkrequestqhttpmultipart, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, request, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, data, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qrestaccessmanager_qrestaccessmanager_putqnetworkrequestqiodevice, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, request, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, data, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qrestaccessmanager_qrestaccessmanager_patch, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, request, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, data, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qrestaccessmanager_qrestaccessmanager_patchqnetworkrequestqvariantmap, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, request, IS_LONG, 0)
	ZEND_ARG_ARRAY_INFO(0, data, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qrestaccessmanager_qrestaccessmanager_patchqnetworkrequestqbytearray, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, request, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, data, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qrestaccessmanager_qrestaccessmanager_patchqnetworkrequestqiodevice, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, request, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, data, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qrestaccessmanager_qrestaccessmanager_sendcustomrequest, 0, 4, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, request, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, method, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, data, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qrestaccessmanager_qrestaccessmanager_sendcustomrequestqnetworkrequestqbytearrayqiodevice, 0, 4, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, request, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, method, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, data, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qrestaccessmanager_qrestaccessmanager_sendcustomrequestqnetworkrequestqbytearrayqhttpmultipart, 0, 4, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, request, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, method, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, data, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_network_qrestaccessmanager_qrestaccessmanager_method_entry) {
	PHP_ME(Qt_Network_QRestAccessManager_QRestAccessManager, staticMetaObject, arginfo_qt_network_qrestaccessmanager_qrestaccessmanager_staticmetaobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QRestAccessManager_QRestAccessManager, tr, arginfo_qt_network_qrestaccessmanager_qrestaccessmanager_tr, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QRestAccessManager_QRestAccessManager, new_, arginfo_qt_network_qrestaccessmanager_qrestaccessmanager_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QRestAccessManager_QRestAccessManager, networkAccessManager, arginfo_qt_network_qrestaccessmanager_qrestaccessmanager_networkaccessmanager, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QRestAccessManager_QRestAccessManager, deleteResource, arginfo_qt_network_qrestaccessmanager_qrestaccessmanager_deleteresource, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QRestAccessManager_QRestAccessManager, head, arginfo_qt_network_qrestaccessmanager_qrestaccessmanager_head, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QRestAccessManager_QRestAccessManager, get, arginfo_qt_network_qrestaccessmanager_qrestaccessmanager_get, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QRestAccessManager_QRestAccessManager, getQNetworkRequestQByteArray, arginfo_qt_network_qrestaccessmanager_qrestaccessmanager_getqnetworkrequestqbytearray, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QRestAccessManager_QRestAccessManager, getQNetworkRequestQJsonDocument, arginfo_qt_network_qrestaccessmanager_qrestaccessmanager_getqnetworkrequestqjsondocument, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QRestAccessManager_QRestAccessManager, getQNetworkRequestQIODevice, arginfo_qt_network_qrestaccessmanager_qrestaccessmanager_getqnetworkrequestqiodevice, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QRestAccessManager_QRestAccessManager, post, arginfo_qt_network_qrestaccessmanager_qrestaccessmanager_post, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QRestAccessManager_QRestAccessManager, postQNetworkRequestQVariantMap, arginfo_qt_network_qrestaccessmanager_qrestaccessmanager_postqnetworkrequestqvariantmap, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QRestAccessManager_QRestAccessManager, postQNetworkRequestQByteArray, arginfo_qt_network_qrestaccessmanager_qrestaccessmanager_postqnetworkrequestqbytearray, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QRestAccessManager_QRestAccessManager, postQNetworkRequestQHttpMultiPart, arginfo_qt_network_qrestaccessmanager_qrestaccessmanager_postqnetworkrequestqhttpmultipart, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QRestAccessManager_QRestAccessManager, postQNetworkRequestQIODevice, arginfo_qt_network_qrestaccessmanager_qrestaccessmanager_postqnetworkrequestqiodevice, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QRestAccessManager_QRestAccessManager, put, arginfo_qt_network_qrestaccessmanager_qrestaccessmanager_put, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QRestAccessManager_QRestAccessManager, putQNetworkRequestQVariantMap, arginfo_qt_network_qrestaccessmanager_qrestaccessmanager_putqnetworkrequestqvariantmap, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QRestAccessManager_QRestAccessManager, putQNetworkRequestQByteArray, arginfo_qt_network_qrestaccessmanager_qrestaccessmanager_putqnetworkrequestqbytearray, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QRestAccessManager_QRestAccessManager, putQNetworkRequestQHttpMultiPart, arginfo_qt_network_qrestaccessmanager_qrestaccessmanager_putqnetworkrequestqhttpmultipart, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QRestAccessManager_QRestAccessManager, putQNetworkRequestQIODevice, arginfo_qt_network_qrestaccessmanager_qrestaccessmanager_putqnetworkrequestqiodevice, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QRestAccessManager_QRestAccessManager, patch, arginfo_qt_network_qrestaccessmanager_qrestaccessmanager_patch, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QRestAccessManager_QRestAccessManager, patchQNetworkRequestQVariantMap, arginfo_qt_network_qrestaccessmanager_qrestaccessmanager_patchqnetworkrequestqvariantmap, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QRestAccessManager_QRestAccessManager, patchQNetworkRequestQByteArray, arginfo_qt_network_qrestaccessmanager_qrestaccessmanager_patchqnetworkrequestqbytearray, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QRestAccessManager_QRestAccessManager, patchQNetworkRequestQIODevice, arginfo_qt_network_qrestaccessmanager_qrestaccessmanager_patchqnetworkrequestqiodevice, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QRestAccessManager_QRestAccessManager, sendCustomRequest, arginfo_qt_network_qrestaccessmanager_qrestaccessmanager_sendcustomrequest, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QRestAccessManager_QRestAccessManager, sendCustomRequestQNetworkRequestQByteArrayQIODevice, arginfo_qt_network_qrestaccessmanager_qrestaccessmanager_sendcustomrequestqnetworkrequestqbytearrayqiodevice, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QRestAccessManager_QRestAccessManager, sendCustomRequestQNetworkRequestQByteArrayQHttpMultiPart, arginfo_qt_network_qrestaccessmanager_qrestaccessmanager_sendcustomrequestqnetworkrequestqbytearrayqhttpmultipart, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
