
extern zend_class_entry *qt_dbus_qdbusconnection_qdbusconnection_ce;

ZEPHIR_INIT_CLASS(Qt_DBus_QDBusConnection_QDBusConnection);

PHP_METHOD(Qt_DBus_QDBusConnection_QDBusConnection, staticMetaObject);
PHP_METHOD(Qt_DBus_QDBusConnection_QDBusConnection, qt_check_for_QGADGET_macro);
PHP_METHOD(Qt_DBus_QDBusConnection_QDBusConnection, new_);
PHP_METHOD(Qt_DBus_QDBusConnection_QDBusConnection, newQDBusConnection);
PHP_METHOD(Qt_DBus_QDBusConnection_QDBusConnection, swap);
PHP_METHOD(Qt_DBus_QDBusConnection_QDBusConnection, isConnected);
PHP_METHOD(Qt_DBus_QDBusConnection_QDBusConnection, baseService);
PHP_METHOD(Qt_DBus_QDBusConnection_QDBusConnection, lastError);
PHP_METHOD(Qt_DBus_QDBusConnection_QDBusConnection, name);
PHP_METHOD(Qt_DBus_QDBusConnection_QDBusConnection, connectionCapabilities);
PHP_METHOD(Qt_DBus_QDBusConnection_QDBusConnection, send);
PHP_METHOD(Qt_DBus_QDBusConnection_QDBusConnection, callWithCallback);
PHP_METHOD(Qt_DBus_QDBusConnection_QDBusConnection, callWithCallbackQDBusMessageQObjectCharInt);
PHP_METHOD(Qt_DBus_QDBusConnection_QDBusConnection, call);
PHP_METHOD(Qt_DBus_QDBusConnection_QDBusConnection, asyncCall);
PHP_METHOD(Qt_DBus_QDBusConnection_QDBusConnection, connect);
PHP_METHOD(Qt_DBus_QDBusConnection_QDBusConnection, connectQStringQStringQStringQStringQStringQObjectChar);
PHP_METHOD(Qt_DBus_QDBusConnection_QDBusConnection, connectQStringQStringQStringQStringQStringListQStringQObjectChar);
PHP_METHOD(Qt_DBus_QDBusConnection_QDBusConnection, disconnect);
PHP_METHOD(Qt_DBus_QDBusConnection_QDBusConnection, disconnectQStringQStringQStringQStringQStringQObjectChar);
PHP_METHOD(Qt_DBus_QDBusConnection_QDBusConnection, disconnectQStringQStringQStringQStringQStringListQStringQObjectChar);
PHP_METHOD(Qt_DBus_QDBusConnection_QDBusConnection, registerObject);
PHP_METHOD(Qt_DBus_QDBusConnection_QDBusConnection, registerObjectQStringQStringQObjectQDBusConnectionRegisterOptions);
PHP_METHOD(Qt_DBus_QDBusConnection_QDBusConnection, unregisterObject);
PHP_METHOD(Qt_DBus_QDBusConnection_QDBusConnection, objectRegisteredAt);
PHP_METHOD(Qt_DBus_QDBusConnection_QDBusConnection, registerVirtualObject);
PHP_METHOD(Qt_DBus_QDBusConnection_QDBusConnection, registerService);
PHP_METHOD(Qt_DBus_QDBusConnection_QDBusConnection, unregisterService);
PHP_METHOD(Qt_DBus_QDBusConnection_QDBusConnection, interface_);
PHP_METHOD(Qt_DBus_QDBusConnection_QDBusConnection, connectToBus);
PHP_METHOD(Qt_DBus_QDBusConnection_QDBusConnection, connectToBusQStringQString);
PHP_METHOD(Qt_DBus_QDBusConnection_QDBusConnection, connectToPeer);
PHP_METHOD(Qt_DBus_QDBusConnection_QDBusConnection, disconnectFromBus);
PHP_METHOD(Qt_DBus_QDBusConnection_QDBusConnection, disconnectFromPeer);
PHP_METHOD(Qt_DBus_QDBusConnection_QDBusConnection, localMachineId);
PHP_METHOD(Qt_DBus_QDBusConnection_QDBusConnection, sessionBus);
PHP_METHOD(Qt_DBus_QDBusConnection_QDBusConnection, systemBus);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_dbus_qdbusconnection_qdbusconnection_staticmetaobject, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_dbus_qdbusconnection_qdbusconnection_qt_check_for_qgadget_macro, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_dbus_qdbusconnection_qdbusconnection_new_, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, name, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_dbus_qdbusconnection_qdbusconnection_newqdbusconnection, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, other, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_dbus_qdbusconnection_qdbusconnection_swap, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, other, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_dbus_qdbusconnection_qdbusconnection_isconnected, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_dbus_qdbusconnection_qdbusconnection_baseservice, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_dbus_qdbusconnection_qdbusconnection_lasterror, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_dbus_qdbusconnection_qdbusconnection_name, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_dbus_qdbusconnection_qdbusconnection_connectioncapabilities, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_dbus_qdbusconnection_qdbusconnection_send, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, message, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_dbus_qdbusconnection_qdbusconnection_callwithcallback, 0, 5, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, message, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, receiver, IS_LONG, 0)
	ZEND_ARG_INFO(0, returnMethod)
	ZEND_ARG_INFO(0, errorMethod)
	ZEND_ARG_TYPE_INFO(0, timeout, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_dbus_qdbusconnection_qdbusconnection_callwithcallbackqdbusmessageqobjectcharint, 0, 4, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, message, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, receiver, IS_LONG, 0)
	ZEND_ARG_INFO(0, slot)
	ZEND_ARG_TYPE_INFO(0, timeout, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_dbus_qdbusconnection_qdbusconnection_call, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, message, IS_LONG, 0)
	ZEND_ARG_INFO(0, mode)
	ZEND_ARG_TYPE_INFO(0, timeout, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_dbus_qdbusconnection_qdbusconnection_asynccall, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, message, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, timeout, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_dbus_qdbusconnection_qdbusconnection_connect, 0, 7, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, service, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, path, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, interface_, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, name, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, receiver, IS_LONG, 0)
	ZEND_ARG_INFO(0, slot)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_dbus_qdbusconnection_qdbusconnection_connectqstringqstringqstringqstringqstringqobjectchar, 0, 8, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, service, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, path, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, interface_, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, name, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, signature, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, receiver, IS_LONG, 0)
	ZEND_ARG_INFO(0, slot)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_dbus_qdbusconnection_qdbusconnection_connectqstringqstringqstringqstringqstringlistqstringqobjectchar, 0, 9, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, service, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, path, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, interface_, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, name, IS_STRING, 0)
	ZEND_ARG_ARRAY_INFO(0, argumentMatch, 0)
	ZEND_ARG_TYPE_INFO(0, signature, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, receiver, IS_LONG, 0)
	ZEND_ARG_INFO(0, slot)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_dbus_qdbusconnection_qdbusconnection_disconnect, 0, 7, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, service, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, path, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, interface_, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, name, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, receiver, IS_LONG, 0)
	ZEND_ARG_INFO(0, slot)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_dbus_qdbusconnection_qdbusconnection_disconnectqstringqstringqstringqstringqstringqobjectchar, 0, 8, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, service, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, path, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, interface_, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, name, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, signature, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, receiver, IS_LONG, 0)
	ZEND_ARG_INFO(0, slot)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_dbus_qdbusconnection_qdbusconnection_disconnectqstringqstringqstringqstringqstringlistqstringqobjectchar, 0, 9, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, service, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, path, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, interface_, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, name, IS_STRING, 0)
	ZEND_ARG_ARRAY_INFO(0, argumentMatch, 0)
	ZEND_ARG_TYPE_INFO(0, signature, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, receiver, IS_LONG, 0)
	ZEND_ARG_INFO(0, slot)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_dbus_qdbusconnection_qdbusconnection_registerobject, 0, 3, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, path, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, object_, IS_LONG, 0)
	ZEND_ARG_INFO(0, options)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_dbus_qdbusconnection_qdbusconnection_registerobjectqstringqstringqobjectqdbusconnectionregisteroptions, 0, 4, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, path, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, interface_, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, object_, IS_LONG, 0)
	ZEND_ARG_INFO(0, options)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_dbus_qdbusconnection_qdbusconnection_unregisterobject, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, path, IS_STRING, 0)
	ZEND_ARG_INFO(0, mode)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_dbus_qdbusconnection_qdbusconnection_objectregisteredat, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, path, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_dbus_qdbusconnection_qdbusconnection_registervirtualobject, 0, 3, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, path, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, object_, IS_LONG, 0)
	ZEND_ARG_INFO(0, options)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_dbus_qdbusconnection_qdbusconnection_registerservice, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, serviceName, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_dbus_qdbusconnection_qdbusconnection_unregisterservice, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, serviceName, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_dbus_qdbusconnection_qdbusconnection_interface_, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_dbus_qdbusconnection_qdbusconnection_connecttobus, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, type, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, name, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_dbus_qdbusconnection_qdbusconnection_connecttobusqstringqstring, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, address, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, name, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_dbus_qdbusconnection_qdbusconnection_connecttopeer, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, address, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, name, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_dbus_qdbusconnection_qdbusconnection_disconnectfrombus, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, name, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_dbus_qdbusconnection_qdbusconnection_disconnectfrompeer, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, name, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_dbus_qdbusconnection_qdbusconnection_localmachineid, 0, 0, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_dbus_qdbusconnection_qdbusconnection_sessionbus, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_dbus_qdbusconnection_qdbusconnection_systembus, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_dbus_qdbusconnection_qdbusconnection_method_entry) {
	PHP_ME(Qt_DBus_QDBusConnection_QDBusConnection, staticMetaObject, arginfo_qt_dbus_qdbusconnection_qdbusconnection_staticmetaobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_DBus_QDBusConnection_QDBusConnection, qt_check_for_QGADGET_macro, arginfo_qt_dbus_qdbusconnection_qdbusconnection_qt_check_for_qgadget_macro, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_DBus_QDBusConnection_QDBusConnection, new_, arginfo_qt_dbus_qdbusconnection_qdbusconnection_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_DBus_QDBusConnection_QDBusConnection, newQDBusConnection, arginfo_qt_dbus_qdbusconnection_qdbusconnection_newqdbusconnection, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_DBus_QDBusConnection_QDBusConnection, swap, arginfo_qt_dbus_qdbusconnection_qdbusconnection_swap, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_DBus_QDBusConnection_QDBusConnection, isConnected, arginfo_qt_dbus_qdbusconnection_qdbusconnection_isconnected, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_DBus_QDBusConnection_QDBusConnection, baseService, arginfo_qt_dbus_qdbusconnection_qdbusconnection_baseservice, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_DBus_QDBusConnection_QDBusConnection, lastError, arginfo_qt_dbus_qdbusconnection_qdbusconnection_lasterror, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_DBus_QDBusConnection_QDBusConnection, name, arginfo_qt_dbus_qdbusconnection_qdbusconnection_name, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_DBus_QDBusConnection_QDBusConnection, connectionCapabilities, arginfo_qt_dbus_qdbusconnection_qdbusconnection_connectioncapabilities, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_DBus_QDBusConnection_QDBusConnection, send, arginfo_qt_dbus_qdbusconnection_qdbusconnection_send, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_DBus_QDBusConnection_QDBusConnection, callWithCallback, arginfo_qt_dbus_qdbusconnection_qdbusconnection_callwithcallback, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_DBus_QDBusConnection_QDBusConnection, callWithCallbackQDBusMessageQObjectCharInt, arginfo_qt_dbus_qdbusconnection_qdbusconnection_callwithcallbackqdbusmessageqobjectcharint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_DBus_QDBusConnection_QDBusConnection, call, arginfo_qt_dbus_qdbusconnection_qdbusconnection_call, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_DBus_QDBusConnection_QDBusConnection, asyncCall, arginfo_qt_dbus_qdbusconnection_qdbusconnection_asynccall, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_DBus_QDBusConnection_QDBusConnection, connect, arginfo_qt_dbus_qdbusconnection_qdbusconnection_connect, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_DBus_QDBusConnection_QDBusConnection, connectQStringQStringQStringQStringQStringQObjectChar, arginfo_qt_dbus_qdbusconnection_qdbusconnection_connectqstringqstringqstringqstringqstringqobjectchar, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_DBus_QDBusConnection_QDBusConnection, connectQStringQStringQStringQStringQStringListQStringQObjectChar, arginfo_qt_dbus_qdbusconnection_qdbusconnection_connectqstringqstringqstringqstringqstringlistqstringqobjectchar, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_DBus_QDBusConnection_QDBusConnection, disconnect, arginfo_qt_dbus_qdbusconnection_qdbusconnection_disconnect, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_DBus_QDBusConnection_QDBusConnection, disconnectQStringQStringQStringQStringQStringQObjectChar, arginfo_qt_dbus_qdbusconnection_qdbusconnection_disconnectqstringqstringqstringqstringqstringqobjectchar, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_DBus_QDBusConnection_QDBusConnection, disconnectQStringQStringQStringQStringQStringListQStringQObjectChar, arginfo_qt_dbus_qdbusconnection_qdbusconnection_disconnectqstringqstringqstringqstringqstringlistqstringqobjectchar, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_DBus_QDBusConnection_QDBusConnection, registerObject, arginfo_qt_dbus_qdbusconnection_qdbusconnection_registerobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_DBus_QDBusConnection_QDBusConnection, registerObjectQStringQStringQObjectQDBusConnectionRegisterOptions, arginfo_qt_dbus_qdbusconnection_qdbusconnection_registerobjectqstringqstringqobjectqdbusconnectionregisteroptions, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_DBus_QDBusConnection_QDBusConnection, unregisterObject, arginfo_qt_dbus_qdbusconnection_qdbusconnection_unregisterobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_DBus_QDBusConnection_QDBusConnection, objectRegisteredAt, arginfo_qt_dbus_qdbusconnection_qdbusconnection_objectregisteredat, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_DBus_QDBusConnection_QDBusConnection, registerVirtualObject, arginfo_qt_dbus_qdbusconnection_qdbusconnection_registervirtualobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_DBus_QDBusConnection_QDBusConnection, registerService, arginfo_qt_dbus_qdbusconnection_qdbusconnection_registerservice, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_DBus_QDBusConnection_QDBusConnection, unregisterService, arginfo_qt_dbus_qdbusconnection_qdbusconnection_unregisterservice, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_DBus_QDBusConnection_QDBusConnection, interface_, arginfo_qt_dbus_qdbusconnection_qdbusconnection_interface_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_DBus_QDBusConnection_QDBusConnection, connectToBus, arginfo_qt_dbus_qdbusconnection_qdbusconnection_connecttobus, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_DBus_QDBusConnection_QDBusConnection, connectToBusQStringQString, arginfo_qt_dbus_qdbusconnection_qdbusconnection_connecttobusqstringqstring, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_DBus_QDBusConnection_QDBusConnection, connectToPeer, arginfo_qt_dbus_qdbusconnection_qdbusconnection_connecttopeer, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_DBus_QDBusConnection_QDBusConnection, disconnectFromBus, arginfo_qt_dbus_qdbusconnection_qdbusconnection_disconnectfrombus, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_DBus_QDBusConnection_QDBusConnection, disconnectFromPeer, arginfo_qt_dbus_qdbusconnection_qdbusconnection_disconnectfrompeer, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_DBus_QDBusConnection_QDBusConnection, localMachineId, arginfo_qt_dbus_qdbusconnection_qdbusconnection_localmachineid, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_DBus_QDBusConnection_QDBusConnection, sessionBus, arginfo_qt_dbus_qdbusconnection_qdbusconnection_sessionbus, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_DBus_QDBusConnection_QDBusConnection, systemBus, arginfo_qt_dbus_qdbusconnection_qdbusconnection_systembus, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
