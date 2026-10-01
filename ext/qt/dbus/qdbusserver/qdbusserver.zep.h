
extern zend_class_entry *qt_dbus_qdbusserver_qdbusserver_ce;

ZEPHIR_INIT_CLASS(Qt_DBus_QDBusServer_QDBusServer);

PHP_METHOD(Qt_DBus_QDBusServer_QDBusServer, staticMetaObject);
PHP_METHOD(Qt_DBus_QDBusServer_QDBusServer, tr);
PHP_METHOD(Qt_DBus_QDBusServer_QDBusServer, new_);
PHP_METHOD(Qt_DBus_QDBusServer_QDBusServer, newQObject);
PHP_METHOD(Qt_DBus_QDBusServer_QDBusServer, isConnected);
PHP_METHOD(Qt_DBus_QDBusServer_QDBusServer, lastError);
PHP_METHOD(Qt_DBus_QDBusServer_QDBusServer, address);
PHP_METHOD(Qt_DBus_QDBusServer_QDBusServer, setAnonymousAuthenticationAllowed);
PHP_METHOD(Qt_DBus_QDBusServer_QDBusServer, isAnonymousAuthenticationAllowed);
PHP_METHOD(Qt_DBus_QDBusServer_QDBusServer, newConnection);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_dbus_qdbusserver_qdbusserver_staticmetaobject, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_dbus_qdbusserver_qdbusserver_tr, 0, 1, IS_STRING, 0)
	ZEND_ARG_INFO(0, s)
	ZEND_ARG_INFO(0, c)
	ZEND_ARG_TYPE_INFO(0, n, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_dbus_qdbusserver_qdbusserver_new_, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, address, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_dbus_qdbusserver_qdbusserver_newqobject, 0, 0, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_dbus_qdbusserver_qdbusserver_isconnected, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_dbus_qdbusserver_qdbusserver_lasterror, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_dbus_qdbusserver_qdbusserver_address, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_dbus_qdbusserver_qdbusserver_setanonymousauthenticationallowed, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_dbus_qdbusserver_qdbusserver_isanonymousauthenticationallowed, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_dbus_qdbusserver_qdbusserver_newconnection, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, connection, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_dbus_qdbusserver_qdbusserver_method_entry) {
	PHP_ME(Qt_DBus_QDBusServer_QDBusServer, staticMetaObject, arginfo_qt_dbus_qdbusserver_qdbusserver_staticmetaobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_DBus_QDBusServer_QDBusServer, tr, arginfo_qt_dbus_qdbusserver_qdbusserver_tr, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_DBus_QDBusServer_QDBusServer, new_, arginfo_qt_dbus_qdbusserver_qdbusserver_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_DBus_QDBusServer_QDBusServer, newQObject, arginfo_qt_dbus_qdbusserver_qdbusserver_newqobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_DBus_QDBusServer_QDBusServer, isConnected, arginfo_qt_dbus_qdbusserver_qdbusserver_isconnected, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_DBus_QDBusServer_QDBusServer, lastError, arginfo_qt_dbus_qdbusserver_qdbusserver_lasterror, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_DBus_QDBusServer_QDBusServer, address, arginfo_qt_dbus_qdbusserver_qdbusserver_address, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_DBus_QDBusServer_QDBusServer, setAnonymousAuthenticationAllowed, arginfo_qt_dbus_qdbusserver_qdbusserver_setanonymousauthenticationallowed, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_DBus_QDBusServer_QDBusServer, isAnonymousAuthenticationAllowed, arginfo_qt_dbus_qdbusserver_qdbusserver_isanonymousauthenticationallowed, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_DBus_QDBusServer_QDBusServer, newConnection, arginfo_qt_dbus_qdbusserver_qdbusserver_newconnection, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
