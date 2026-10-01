
extern zend_class_entry *qt_dbus_qdbusservicewatcher_qdbusservicewatcher_ce;

ZEPHIR_INIT_CLASS(Qt_DBus_QDBusServiceWatcher_QDBusServiceWatcher);

PHP_METHOD(Qt_DBus_QDBusServiceWatcher_QDBusServiceWatcher, staticMetaObject);
PHP_METHOD(Qt_DBus_QDBusServiceWatcher_QDBusServiceWatcher, tr);
PHP_METHOD(Qt_DBus_QDBusServiceWatcher_QDBusServiceWatcher, new_);
PHP_METHOD(Qt_DBus_QDBusServiceWatcher_QDBusServiceWatcher, newQStringQDBusConnectionQDBusServiceWatcherWatchModeQObject);
PHP_METHOD(Qt_DBus_QDBusServiceWatcher_QDBusServiceWatcher, watchedServices);
PHP_METHOD(Qt_DBus_QDBusServiceWatcher_QDBusServiceWatcher, setWatchedServices);
PHP_METHOD(Qt_DBus_QDBusServiceWatcher_QDBusServiceWatcher, addWatchedService);
PHP_METHOD(Qt_DBus_QDBusServiceWatcher_QDBusServiceWatcher, removeWatchedService);
PHP_METHOD(Qt_DBus_QDBusServiceWatcher_QDBusServiceWatcher, watchMode);
PHP_METHOD(Qt_DBus_QDBusServiceWatcher_QDBusServiceWatcher, setWatchMode);
PHP_METHOD(Qt_DBus_QDBusServiceWatcher_QDBusServiceWatcher, connection);
PHP_METHOD(Qt_DBus_QDBusServiceWatcher_QDBusServiceWatcher, setConnection);
PHP_METHOD(Qt_DBus_QDBusServiceWatcher_QDBusServiceWatcher, serviceRegistered);
PHP_METHOD(Qt_DBus_QDBusServiceWatcher_QDBusServiceWatcher, serviceUnregistered);
PHP_METHOD(Qt_DBus_QDBusServiceWatcher_QDBusServiceWatcher, serviceOwnerChanged);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_dbus_qdbusservicewatcher_qdbusservicewatcher_staticmetaobject, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_dbus_qdbusservicewatcher_qdbusservicewatcher_tr, 0, 1, IS_STRING, 0)
	ZEND_ARG_INFO(0, s)
	ZEND_ARG_INFO(0, c)
	ZEND_ARG_TYPE_INFO(0, n, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_dbus_qdbusservicewatcher_qdbusservicewatcher_new_, 0, 0, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_dbus_qdbusservicewatcher_qdbusservicewatcher_newqstringqdbusconnectionqdbusservicewatcherwatchmodeqobject, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, service, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, connection, IS_LONG, 0)
	ZEND_ARG_INFO(0, watchMode)
	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_dbus_qdbusservicewatcher_qdbusservicewatcher_watchedservices, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_dbus_qdbusservicewatcher_qdbusservicewatcher_setwatchedservices, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_ARRAY_INFO(0, services, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_dbus_qdbusservicewatcher_qdbusservicewatcher_addwatchedservice, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, newService, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_dbus_qdbusservicewatcher_qdbusservicewatcher_removewatchedservice, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, service, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_dbus_qdbusservicewatcher_qdbusservicewatcher_watchmode, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_dbus_qdbusservicewatcher_qdbusservicewatcher_setwatchmode, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, mode, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_dbus_qdbusservicewatcher_qdbusservicewatcher_connection, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_dbus_qdbusservicewatcher_qdbusservicewatcher_setconnection, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, connection, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_dbus_qdbusservicewatcher_qdbusservicewatcher_serviceregistered, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, service, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_dbus_qdbusservicewatcher_qdbusservicewatcher_serviceunregistered, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, service, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_dbus_qdbusservicewatcher_qdbusservicewatcher_serviceownerchanged, 0, 4, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, service, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, oldOwner, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, newOwner, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_dbus_qdbusservicewatcher_qdbusservicewatcher_method_entry) {
	PHP_ME(Qt_DBus_QDBusServiceWatcher_QDBusServiceWatcher, staticMetaObject, arginfo_qt_dbus_qdbusservicewatcher_qdbusservicewatcher_staticmetaobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_DBus_QDBusServiceWatcher_QDBusServiceWatcher, tr, arginfo_qt_dbus_qdbusservicewatcher_qdbusservicewatcher_tr, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_DBus_QDBusServiceWatcher_QDBusServiceWatcher, new_, arginfo_qt_dbus_qdbusservicewatcher_qdbusservicewatcher_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_DBus_QDBusServiceWatcher_QDBusServiceWatcher, newQStringQDBusConnectionQDBusServiceWatcherWatchModeQObject, arginfo_qt_dbus_qdbusservicewatcher_qdbusservicewatcher_newqstringqdbusconnectionqdbusservicewatcherwatchmodeqobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_DBus_QDBusServiceWatcher_QDBusServiceWatcher, watchedServices, arginfo_qt_dbus_qdbusservicewatcher_qdbusservicewatcher_watchedservices, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_DBus_QDBusServiceWatcher_QDBusServiceWatcher, setWatchedServices, arginfo_qt_dbus_qdbusservicewatcher_qdbusservicewatcher_setwatchedservices, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_DBus_QDBusServiceWatcher_QDBusServiceWatcher, addWatchedService, arginfo_qt_dbus_qdbusservicewatcher_qdbusservicewatcher_addwatchedservice, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_DBus_QDBusServiceWatcher_QDBusServiceWatcher, removeWatchedService, arginfo_qt_dbus_qdbusservicewatcher_qdbusservicewatcher_removewatchedservice, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_DBus_QDBusServiceWatcher_QDBusServiceWatcher, watchMode, arginfo_qt_dbus_qdbusservicewatcher_qdbusservicewatcher_watchmode, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_DBus_QDBusServiceWatcher_QDBusServiceWatcher, setWatchMode, arginfo_qt_dbus_qdbusservicewatcher_qdbusservicewatcher_setwatchmode, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_DBus_QDBusServiceWatcher_QDBusServiceWatcher, connection, arginfo_qt_dbus_qdbusservicewatcher_qdbusservicewatcher_connection, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_DBus_QDBusServiceWatcher_QDBusServiceWatcher, setConnection, arginfo_qt_dbus_qdbusservicewatcher_qdbusservicewatcher_setconnection, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_DBus_QDBusServiceWatcher_QDBusServiceWatcher, serviceRegistered, arginfo_qt_dbus_qdbusservicewatcher_qdbusservicewatcher_serviceregistered, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_DBus_QDBusServiceWatcher_QDBusServiceWatcher, serviceUnregistered, arginfo_qt_dbus_qdbusservicewatcher_qdbusservicewatcher_serviceunregistered, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_DBus_QDBusServiceWatcher_QDBusServiceWatcher, serviceOwnerChanged, arginfo_qt_dbus_qdbusservicewatcher_qdbusservicewatcher_serviceownerchanged, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
