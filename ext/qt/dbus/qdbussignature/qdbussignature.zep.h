
extern zend_class_entry *qt_dbus_qdbussignature_qdbussignature_ce;

ZEPHIR_INIT_CLASS(Qt_DBus_QDBusSignature_QDBusSignature);

PHP_METHOD(Qt_DBus_QDBusSignature_QDBusSignature, new_);
PHP_METHOD(Qt_DBus_QDBusSignature_QDBusSignature, newChar);
PHP_METHOD(Qt_DBus_QDBusSignature_QDBusSignature, newQLatin1StringView);
PHP_METHOD(Qt_DBus_QDBusSignature_QDBusSignature, newQString);
PHP_METHOD(Qt_DBus_QDBusSignature_QDBusSignature, swap);
PHP_METHOD(Qt_DBus_QDBusSignature_QDBusSignature, setSignature);
PHP_METHOD(Qt_DBus_QDBusSignature_QDBusSignature, signature);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_dbus_qdbussignature_qdbussignature_new_, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_dbus_qdbussignature_qdbussignature_newchar, 0, 1, IS_LONG, 0)
	ZEND_ARG_INFO(0, signature)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_dbus_qdbussignature_qdbussignature_newqlatin1stringview, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, signature, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_dbus_qdbussignature_qdbussignature_newqstring, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, signature, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_dbus_qdbussignature_qdbussignature_swap, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, other, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_dbus_qdbussignature_qdbussignature_setsignature, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, signature, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_dbus_qdbussignature_qdbussignature_signature, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_dbus_qdbussignature_qdbussignature_method_entry) {
	PHP_ME(Qt_DBus_QDBusSignature_QDBusSignature, new_, arginfo_qt_dbus_qdbussignature_qdbussignature_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_DBus_QDBusSignature_QDBusSignature, newChar, arginfo_qt_dbus_qdbussignature_qdbussignature_newchar, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_DBus_QDBusSignature_QDBusSignature, newQLatin1StringView, arginfo_qt_dbus_qdbussignature_qdbussignature_newqlatin1stringview, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_DBus_QDBusSignature_QDBusSignature, newQString, arginfo_qt_dbus_qdbussignature_qdbussignature_newqstring, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_DBus_QDBusSignature_QDBusSignature, swap, arginfo_qt_dbus_qdbussignature_qdbussignature_swap, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_DBus_QDBusSignature_QDBusSignature, setSignature, arginfo_qt_dbus_qdbussignature_qdbussignature_setsignature, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_DBus_QDBusSignature_QDBusSignature, signature, arginfo_qt_dbus_qdbussignature_qdbussignature_signature, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
