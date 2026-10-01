
extern zend_class_entry *qt_dbus_qdbusabstractinterface_qdbusabstractinterface_ce;

ZEPHIR_INIT_CLASS(Qt_DBus_QDBusAbstractInterface_QDBusAbstractInterface);

PHP_METHOD(Qt_DBus_QDBusAbstractInterface_QDBusAbstractInterface, staticMetaObject);
PHP_METHOD(Qt_DBus_QDBusAbstractInterface_QDBusAbstractInterface, tr);
PHP_METHOD(Qt_DBus_QDBusAbstractInterface_QDBusAbstractInterface, isValid);
PHP_METHOD(Qt_DBus_QDBusAbstractInterface_QDBusAbstractInterface, connection);
PHP_METHOD(Qt_DBus_QDBusAbstractInterface_QDBusAbstractInterface, service);
PHP_METHOD(Qt_DBus_QDBusAbstractInterface_QDBusAbstractInterface, path);
PHP_METHOD(Qt_DBus_QDBusAbstractInterface_QDBusAbstractInterface, interface_);
PHP_METHOD(Qt_DBus_QDBusAbstractInterface_QDBusAbstractInterface, lastError);
PHP_METHOD(Qt_DBus_QDBusAbstractInterface_QDBusAbstractInterface, setTimeout);
PHP_METHOD(Qt_DBus_QDBusAbstractInterface_QDBusAbstractInterface, timeout);
PHP_METHOD(Qt_DBus_QDBusAbstractInterface_QDBusAbstractInterface, setInteractiveAuthorizationAllowed);
PHP_METHOD(Qt_DBus_QDBusAbstractInterface_QDBusAbstractInterface, isInteractiveAuthorizationAllowed);
PHP_METHOD(Qt_DBus_QDBusAbstractInterface_QDBusAbstractInterface, call);
PHP_METHOD(Qt_DBus_QDBusAbstractInterface_QDBusAbstractInterface, callQDBusCallModeQString);
PHP_METHOD(Qt_DBus_QDBusAbstractInterface_QDBusAbstractInterface, callWithArgumentList);
PHP_METHOD(Qt_DBus_QDBusAbstractInterface_QDBusAbstractInterface, callWithCallback);
PHP_METHOD(Qt_DBus_QDBusAbstractInterface_QDBusAbstractInterface, callWithCallbackQStringQListQVariantQObjectChar);
PHP_METHOD(Qt_DBus_QDBusAbstractInterface_QDBusAbstractInterface, asyncCall);
PHP_METHOD(Qt_DBus_QDBusAbstractInterface_QDBusAbstractInterface, asyncCallWithArgumentList);
PHP_METHOD(Qt_DBus_QDBusAbstractInterface_QDBusAbstractInterface, new_);
PHP_METHOD(Qt_DBus_QDBusAbstractInterface_QDBusAbstractInterface, connectNotify);
PHP_METHOD(Qt_DBus_QDBusAbstractInterface_QDBusAbstractInterface, disconnectNotify);
PHP_METHOD(Qt_DBus_QDBusAbstractInterface_QDBusAbstractInterface, internalPropGet);
PHP_METHOD(Qt_DBus_QDBusAbstractInterface_QDBusAbstractInterface, internalPropSet);
PHP_METHOD(Qt_DBus_QDBusAbstractInterface_QDBusAbstractInterface, internalConstCall);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_dbus_qdbusabstractinterface_qdbusabstractinterface_staticmetaobject, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_dbus_qdbusabstractinterface_qdbusabstractinterface_tr, 0, 1, IS_STRING, 0)
	ZEND_ARG_INFO(0, s)
	ZEND_ARG_INFO(0, c)
	ZEND_ARG_TYPE_INFO(0, n, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_dbus_qdbusabstractinterface_qdbusabstractinterface_isvalid, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_dbus_qdbusabstractinterface_qdbusabstractinterface_connection, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_dbus_qdbusabstractinterface_qdbusabstractinterface_service, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_dbus_qdbusabstractinterface_qdbusabstractinterface_path, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_dbus_qdbusabstractinterface_qdbusabstractinterface_interface_, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_dbus_qdbusabstractinterface_qdbusabstractinterface_lasterror, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_dbus_qdbusabstractinterface_qdbusabstractinterface_settimeout, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, timeout, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_dbus_qdbusabstractinterface_qdbusabstractinterface_timeout, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_dbus_qdbusabstractinterface_qdbusabstractinterface_setinteractiveauthorizationallowed, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, enable, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_dbus_qdbusabstractinterface_qdbusabstractinterface_isinteractiveauthorizationallowed, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_dbus_qdbusabstractinterface_qdbusabstractinterface_call, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, method, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_dbus_qdbusabstractinterface_qdbusabstractinterface_callqdbuscallmodeqstring, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, mode, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, method, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_dbus_qdbusabstractinterface_qdbusabstractinterface_callwithargumentlist, 0, 4, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, mode, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, method, IS_STRING, 0)
	ZEND_ARG_ARRAY_INFO(0, args, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_dbus_qdbusabstractinterface_qdbusabstractinterface_callwithcallback, 0, 6, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, method, IS_STRING, 0)
	ZEND_ARG_ARRAY_INFO(0, args, 0)
	ZEND_ARG_TYPE_INFO(0, receiver, IS_LONG, 0)
	ZEND_ARG_INFO(0, member)
	ZEND_ARG_INFO(0, errorSlot)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_dbus_qdbusabstractinterface_qdbusabstractinterface_callwithcallbackqstringqlistqvariantqobjectchar, 0, 5, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, method, IS_STRING, 0)
	ZEND_ARG_ARRAY_INFO(0, args, 0)
	ZEND_ARG_TYPE_INFO(0, receiver, IS_LONG, 0)
	ZEND_ARG_INFO(0, member)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_dbus_qdbusabstractinterface_qdbusabstractinterface_asynccall, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, method, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_dbus_qdbusabstractinterface_qdbusabstractinterface_asynccallwithargumentlist, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, method, IS_STRING, 0)
	ZEND_ARG_ARRAY_INFO(0, args, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_dbus_qdbusabstractinterface_qdbusabstractinterface_new_, 0, 5, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, service, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, path, IS_STRING, 0)
	ZEND_ARG_INFO(0, interface_)
	ZEND_ARG_TYPE_INFO(0, connection, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_dbus_qdbusabstractinterface_qdbusabstractinterface_connectnotify, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, signal, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_dbus_qdbusabstractinterface_qdbusabstractinterface_disconnectnotify, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, signal, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_qt_dbus_qdbusabstractinterface_qdbusabstractinterface_internalpropget, 0, 0, 2)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_INFO(0, propname)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_dbus_qdbusabstractinterface_qdbusabstractinterface_internalpropset, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_INFO(0, propname)
	ZEND_ARG_INFO(0, value)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_dbus_qdbusabstractinterface_qdbusabstractinterface_internalconstcall, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, mode, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, method, IS_STRING, 0)
	ZEND_ARG_INFO(0, args)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_dbus_qdbusabstractinterface_qdbusabstractinterface_method_entry) {
	PHP_ME(Qt_DBus_QDBusAbstractInterface_QDBusAbstractInterface, staticMetaObject, arginfo_qt_dbus_qdbusabstractinterface_qdbusabstractinterface_staticmetaobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_DBus_QDBusAbstractInterface_QDBusAbstractInterface, tr, arginfo_qt_dbus_qdbusabstractinterface_qdbusabstractinterface_tr, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_DBus_QDBusAbstractInterface_QDBusAbstractInterface, isValid, arginfo_qt_dbus_qdbusabstractinterface_qdbusabstractinterface_isvalid, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_DBus_QDBusAbstractInterface_QDBusAbstractInterface, connection, arginfo_qt_dbus_qdbusabstractinterface_qdbusabstractinterface_connection, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_DBus_QDBusAbstractInterface_QDBusAbstractInterface, service, arginfo_qt_dbus_qdbusabstractinterface_qdbusabstractinterface_service, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_DBus_QDBusAbstractInterface_QDBusAbstractInterface, path, arginfo_qt_dbus_qdbusabstractinterface_qdbusabstractinterface_path, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_DBus_QDBusAbstractInterface_QDBusAbstractInterface, interface_, arginfo_qt_dbus_qdbusabstractinterface_qdbusabstractinterface_interface_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_DBus_QDBusAbstractInterface_QDBusAbstractInterface, lastError, arginfo_qt_dbus_qdbusabstractinterface_qdbusabstractinterface_lasterror, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_DBus_QDBusAbstractInterface_QDBusAbstractInterface, setTimeout, arginfo_qt_dbus_qdbusabstractinterface_qdbusabstractinterface_settimeout, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_DBus_QDBusAbstractInterface_QDBusAbstractInterface, timeout, arginfo_qt_dbus_qdbusabstractinterface_qdbusabstractinterface_timeout, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_DBus_QDBusAbstractInterface_QDBusAbstractInterface, setInteractiveAuthorizationAllowed, arginfo_qt_dbus_qdbusabstractinterface_qdbusabstractinterface_setinteractiveauthorizationallowed, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_DBus_QDBusAbstractInterface_QDBusAbstractInterface, isInteractiveAuthorizationAllowed, arginfo_qt_dbus_qdbusabstractinterface_qdbusabstractinterface_isinteractiveauthorizationallowed, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_DBus_QDBusAbstractInterface_QDBusAbstractInterface, call, arginfo_qt_dbus_qdbusabstractinterface_qdbusabstractinterface_call, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_DBus_QDBusAbstractInterface_QDBusAbstractInterface, callQDBusCallModeQString, arginfo_qt_dbus_qdbusabstractinterface_qdbusabstractinterface_callqdbuscallmodeqstring, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_DBus_QDBusAbstractInterface_QDBusAbstractInterface, callWithArgumentList, arginfo_qt_dbus_qdbusabstractinterface_qdbusabstractinterface_callwithargumentlist, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_DBus_QDBusAbstractInterface_QDBusAbstractInterface, callWithCallback, arginfo_qt_dbus_qdbusabstractinterface_qdbusabstractinterface_callwithcallback, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_DBus_QDBusAbstractInterface_QDBusAbstractInterface, callWithCallbackQStringQListQVariantQObjectChar, arginfo_qt_dbus_qdbusabstractinterface_qdbusabstractinterface_callwithcallbackqstringqlistqvariantqobjectchar, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_DBus_QDBusAbstractInterface_QDBusAbstractInterface, asyncCall, arginfo_qt_dbus_qdbusabstractinterface_qdbusabstractinterface_asynccall, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_DBus_QDBusAbstractInterface_QDBusAbstractInterface, asyncCallWithArgumentList, arginfo_qt_dbus_qdbusabstractinterface_qdbusabstractinterface_asynccallwithargumentlist, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_DBus_QDBusAbstractInterface_QDBusAbstractInterface, new_, arginfo_qt_dbus_qdbusabstractinterface_qdbusabstractinterface_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_DBus_QDBusAbstractInterface_QDBusAbstractInterface, connectNotify, arginfo_qt_dbus_qdbusabstractinterface_qdbusabstractinterface_connectnotify, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_DBus_QDBusAbstractInterface_QDBusAbstractInterface, disconnectNotify, arginfo_qt_dbus_qdbusabstractinterface_qdbusabstractinterface_disconnectnotify, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_DBus_QDBusAbstractInterface_QDBusAbstractInterface, internalPropGet, arginfo_qt_dbus_qdbusabstractinterface_qdbusabstractinterface_internalpropget, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_DBus_QDBusAbstractInterface_QDBusAbstractInterface, internalPropSet, arginfo_qt_dbus_qdbusabstractinterface_qdbusabstractinterface_internalpropset, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_DBus_QDBusAbstractInterface_QDBusAbstractInterface, internalConstCall, arginfo_qt_dbus_qdbusabstractinterface_qdbusabstractinterface_internalconstcall, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
