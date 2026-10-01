
extern zend_class_entry *qt_dbus_qdbusmetatype_qdbusmetatype_ce;

ZEPHIR_INIT_CLASS(Qt_DBus_QDBusMetaType_QDBusMetaType);

PHP_METHOD(Qt_DBus_QDBusMetaType_QDBusMetaType, registerCustomType);
PHP_METHOD(Qt_DBus_QDBusMetaType_QDBusMetaType, signatureToMetaType);
PHP_METHOD(Qt_DBus_QDBusMetaType_QDBusMetaType, typeToSignature);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_dbus_qdbusmetatype_qdbusmetatype_registercustomtype, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, type, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, signature, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_dbus_qdbusmetatype_qdbusmetatype_signaturetometatype, 0, 1, IS_LONG, 0)
	ZEND_ARG_INFO(0, signature)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_qt_dbus_qdbusmetatype_qdbusmetatype_typetosignature, 0, 0, 1)
	ZEND_ARG_TYPE_INFO(0, type, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_dbus_qdbusmetatype_qdbusmetatype_method_entry) {
	PHP_ME(Qt_DBus_QDBusMetaType_QDBusMetaType, registerCustomType, arginfo_qt_dbus_qdbusmetatype_qdbusmetatype_registercustomtype, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_DBus_QDBusMetaType_QDBusMetaType, signatureToMetaType, arginfo_qt_dbus_qdbusmetatype_qdbusmetatype_signaturetometatype, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_DBus_QDBusMetaType_QDBusMetaType, typeToSignature, arginfo_qt_dbus_qdbusmetatype_qdbusmetatype_typetosignature, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
