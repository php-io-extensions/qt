
extern zend_class_entry *qt_dbus_qdbuserror_qdbuserror_ce;

ZEPHIR_INIT_CLASS(Qt_DBus_QDBusError_QDBusError);

PHP_METHOD(Qt_DBus_QDBusError_QDBusError, staticMetaObject);
PHP_METHOD(Qt_DBus_QDBusError_QDBusError, qt_check_for_QGADGET_macro);
PHP_METHOD(Qt_DBus_QDBusError_QDBusError, new_);
PHP_METHOD(Qt_DBus_QDBusError_QDBusError, newQDBusMessage);
PHP_METHOD(Qt_DBus_QDBusError_QDBusError, newQDBusErrorErrorTypeQString);
PHP_METHOD(Qt_DBus_QDBusError_QDBusError, newQDBusError);
PHP_METHOD(Qt_DBus_QDBusError_QDBusError, swap);
PHP_METHOD(Qt_DBus_QDBusError_QDBusError, type);
PHP_METHOD(Qt_DBus_QDBusError_QDBusError, name);
PHP_METHOD(Qt_DBus_QDBusError_QDBusError, message);
PHP_METHOD(Qt_DBus_QDBusError_QDBusError, isValid);
PHP_METHOD(Qt_DBus_QDBusError_QDBusError, errorString);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_dbus_qdbuserror_qdbuserror_staticmetaobject, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_dbus_qdbuserror_qdbuserror_qt_check_for_qgadget_macro, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_dbus_qdbuserror_qdbuserror_new_, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_dbus_qdbuserror_qdbuserror_newqdbusmessage, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, msg, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_dbus_qdbuserror_qdbuserror_newqdbuserrorerrortypeqstring, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, error, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, message, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_dbus_qdbuserror_qdbuserror_newqdbuserror, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, other, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_dbus_qdbuserror_qdbuserror_swap, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, other, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_dbus_qdbuserror_qdbuserror_type, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_dbus_qdbuserror_qdbuserror_name, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_dbus_qdbuserror_qdbuserror_message, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_dbus_qdbuserror_qdbuserror_isvalid, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_dbus_qdbuserror_qdbuserror_errorstring, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, error, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_dbus_qdbuserror_qdbuserror_method_entry) {
	PHP_ME(Qt_DBus_QDBusError_QDBusError, staticMetaObject, arginfo_qt_dbus_qdbuserror_qdbuserror_staticmetaobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_DBus_QDBusError_QDBusError, qt_check_for_QGADGET_macro, arginfo_qt_dbus_qdbuserror_qdbuserror_qt_check_for_qgadget_macro, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_DBus_QDBusError_QDBusError, new_, arginfo_qt_dbus_qdbuserror_qdbuserror_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_DBus_QDBusError_QDBusError, newQDBusMessage, arginfo_qt_dbus_qdbuserror_qdbuserror_newqdbusmessage, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_DBus_QDBusError_QDBusError, newQDBusErrorErrorTypeQString, arginfo_qt_dbus_qdbuserror_qdbuserror_newqdbuserrorerrortypeqstring, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_DBus_QDBusError_QDBusError, newQDBusError, arginfo_qt_dbus_qdbuserror_qdbuserror_newqdbuserror, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_DBus_QDBusError_QDBusError, swap, arginfo_qt_dbus_qdbuserror_qdbuserror_swap, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_DBus_QDBusError_QDBusError, type, arginfo_qt_dbus_qdbuserror_qdbuserror_type, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_DBus_QDBusError_QDBusError, name, arginfo_qt_dbus_qdbuserror_qdbuserror_name, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_DBus_QDBusError_QDBusError, message, arginfo_qt_dbus_qdbuserror_qdbuserror_message, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_DBus_QDBusError_QDBusError, isValid, arginfo_qt_dbus_qdbuserror_qdbuserror_isvalid, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_DBus_QDBusError_QDBusError, errorString, arginfo_qt_dbus_qdbuserror_qdbuserror_errorstring, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
