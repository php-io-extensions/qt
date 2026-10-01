
extern zend_class_entry *qt_dbus_qdbusconnectioninterface_qdbusconnectioninterface_ce;

ZEPHIR_INIT_CLASS(Qt_DBus_QDBusConnectionInterface_QDBusConnectionInterface);

PHP_METHOD(Qt_DBus_QDBusConnectionInterface_QDBusConnectionInterface, staticMetaObject);
PHP_METHOD(Qt_DBus_QDBusConnectionInterface_QDBusConnectionInterface, tr);
PHP_METHOD(Qt_DBus_QDBusConnectionInterface_QDBusConnectionInterface, serviceRegistered);
PHP_METHOD(Qt_DBus_QDBusConnectionInterface_QDBusConnectionInterface, serviceUnregistered);
PHP_METHOD(Qt_DBus_QDBusConnectionInterface_QDBusConnectionInterface, serviceOwnerChanged);
PHP_METHOD(Qt_DBus_QDBusConnectionInterface_QDBusConnectionInterface, callWithCallbackFailed);
PHP_METHOD(Qt_DBus_QDBusConnectionInterface_QDBusConnectionInterface, NameAcquired);
PHP_METHOD(Qt_DBus_QDBusConnectionInterface_QDBusConnectionInterface, NameLost);
PHP_METHOD(Qt_DBus_QDBusConnectionInterface_QDBusConnectionInterface, NameOwnerChanged);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_dbus_qdbusconnectioninterface_qdbusconnectioninterface_staticmetaobject, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_dbus_qdbusconnectioninterface_qdbusconnectioninterface_tr, 0, 1, IS_STRING, 0)
	ZEND_ARG_INFO(0, s)
	ZEND_ARG_INFO(0, c)
	ZEND_ARG_TYPE_INFO(0, n, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_dbus_qdbusconnectioninterface_qdbusconnectioninterface_serviceregistered, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, service, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_dbus_qdbusconnectioninterface_qdbusconnectioninterface_serviceunregistered, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, service, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_dbus_qdbusconnectioninterface_qdbusconnectioninterface_serviceownerchanged, 0, 4, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, name, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, oldOwner, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, newOwner, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_dbus_qdbusconnectioninterface_qdbusconnectioninterface_callwithcallbackfailed, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, error, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, call, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_dbus_qdbusconnectioninterface_qdbusconnectioninterface_nameacquired, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_dbus_qdbusconnectioninterface_qdbusconnectioninterface_namelost, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_dbus_qdbusconnectioninterface_qdbusconnectioninterface_nameownerchanged, 0, 4, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, arg1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, arg2, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_dbus_qdbusconnectioninterface_qdbusconnectioninterface_method_entry) {
	PHP_ME(Qt_DBus_QDBusConnectionInterface_QDBusConnectionInterface, staticMetaObject, arginfo_qt_dbus_qdbusconnectioninterface_qdbusconnectioninterface_staticmetaobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_DBus_QDBusConnectionInterface_QDBusConnectionInterface, tr, arginfo_qt_dbus_qdbusconnectioninterface_qdbusconnectioninterface_tr, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_DBus_QDBusConnectionInterface_QDBusConnectionInterface, serviceRegistered, arginfo_qt_dbus_qdbusconnectioninterface_qdbusconnectioninterface_serviceregistered, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_DBus_QDBusConnectionInterface_QDBusConnectionInterface, serviceUnregistered, arginfo_qt_dbus_qdbusconnectioninterface_qdbusconnectioninterface_serviceunregistered, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_DBus_QDBusConnectionInterface_QDBusConnectionInterface, serviceOwnerChanged, arginfo_qt_dbus_qdbusconnectioninterface_qdbusconnectioninterface_serviceownerchanged, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_DBus_QDBusConnectionInterface_QDBusConnectionInterface, callWithCallbackFailed, arginfo_qt_dbus_qdbusconnectioninterface_qdbusconnectioninterface_callwithcallbackfailed, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_DBus_QDBusConnectionInterface_QDBusConnectionInterface, NameAcquired, arginfo_qt_dbus_qdbusconnectioninterface_qdbusconnectioninterface_nameacquired, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_DBus_QDBusConnectionInterface_QDBusConnectionInterface, NameLost, arginfo_qt_dbus_qdbusconnectioninterface_qdbusconnectioninterface_namelost, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_DBus_QDBusConnectionInterface_QDBusConnectionInterface, NameOwnerChanged, arginfo_qt_dbus_qdbusconnectioninterface_qdbusconnectioninterface_nameownerchanged, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
