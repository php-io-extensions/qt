
extern zend_class_entry *qt_dbus_qdbusobjectpath_qdbusobjectpath_ce;

ZEPHIR_INIT_CLASS(Qt_DBus_QDBusObjectPath_QDBusObjectPath);

PHP_METHOD(Qt_DBus_QDBusObjectPath_QDBusObjectPath, new_);
PHP_METHOD(Qt_DBus_QDBusObjectPath_QDBusObjectPath, newChar);
PHP_METHOD(Qt_DBus_QDBusObjectPath_QDBusObjectPath, newQLatin1StringView);
PHP_METHOD(Qt_DBus_QDBusObjectPath_QDBusObjectPath, newQString);
PHP_METHOD(Qt_DBus_QDBusObjectPath_QDBusObjectPath, swap);
PHP_METHOD(Qt_DBus_QDBusObjectPath_QDBusObjectPath, setPath);
PHP_METHOD(Qt_DBus_QDBusObjectPath_QDBusObjectPath, path);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_dbus_qdbusobjectpath_qdbusobjectpath_new_, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_dbus_qdbusobjectpath_qdbusobjectpath_newchar, 0, 1, IS_LONG, 0)
	ZEND_ARG_INFO(0, path)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_dbus_qdbusobjectpath_qdbusobjectpath_newqlatin1stringview, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, path, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_dbus_qdbusobjectpath_qdbusobjectpath_newqstring, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, path, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_dbus_qdbusobjectpath_qdbusobjectpath_swap, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, other, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_dbus_qdbusobjectpath_qdbusobjectpath_setpath, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, path, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_dbus_qdbusobjectpath_qdbusobjectpath_path, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_dbus_qdbusobjectpath_qdbusobjectpath_method_entry) {
	PHP_ME(Qt_DBus_QDBusObjectPath_QDBusObjectPath, new_, arginfo_qt_dbus_qdbusobjectpath_qdbusobjectpath_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_DBus_QDBusObjectPath_QDBusObjectPath, newChar, arginfo_qt_dbus_qdbusobjectpath_qdbusobjectpath_newchar, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_DBus_QDBusObjectPath_QDBusObjectPath, newQLatin1StringView, arginfo_qt_dbus_qdbusobjectpath_qdbusobjectpath_newqlatin1stringview, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_DBus_QDBusObjectPath_QDBusObjectPath, newQString, arginfo_qt_dbus_qdbusobjectpath_qdbusobjectpath_newqstring, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_DBus_QDBusObjectPath_QDBusObjectPath, swap, arginfo_qt_dbus_qdbusobjectpath_qdbusobjectpath_swap, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_DBus_QDBusObjectPath_QDBusObjectPath, setPath, arginfo_qt_dbus_qdbusobjectpath_qdbusobjectpath_setpath, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_DBus_QDBusObjectPath_QDBusObjectPath, path, arginfo_qt_dbus_qdbusobjectpath_qdbusobjectpath_path, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
