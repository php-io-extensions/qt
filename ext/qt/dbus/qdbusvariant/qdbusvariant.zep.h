
extern zend_class_entry *qt_dbus_qdbusvariant_qdbusvariant_ce;

ZEPHIR_INIT_CLASS(Qt_DBus_QDBusVariant_QDBusVariant);

PHP_METHOD(Qt_DBus_QDBusVariant_QDBusVariant, new_);
PHP_METHOD(Qt_DBus_QDBusVariant_QDBusVariant, newQVariant);
PHP_METHOD(Qt_DBus_QDBusVariant_QDBusVariant, swap);
PHP_METHOD(Qt_DBus_QDBusVariant_QDBusVariant, setVariant);
PHP_METHOD(Qt_DBus_QDBusVariant_QDBusVariant, variant);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_dbus_qdbusvariant_qdbusvariant_new_, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_dbus_qdbusvariant_qdbusvariant_newqvariant, 0, 1, IS_LONG, 0)
	ZEND_ARG_INFO(0, variant)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_dbus_qdbusvariant_qdbusvariant_swap, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, other, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_dbus_qdbusvariant_qdbusvariant_setvariant, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_INFO(0, variant)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_qt_dbus_qdbusvariant_qdbusvariant_variant, 0, 0, 1)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_dbus_qdbusvariant_qdbusvariant_method_entry) {
	PHP_ME(Qt_DBus_QDBusVariant_QDBusVariant, new_, arginfo_qt_dbus_qdbusvariant_qdbusvariant_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_DBus_QDBusVariant_QDBusVariant, newQVariant, arginfo_qt_dbus_qdbusvariant_qdbusvariant_newqvariant, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_DBus_QDBusVariant_QDBusVariant, swap, arginfo_qt_dbus_qdbusvariant_qdbusvariant_swap, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_DBus_QDBusVariant_QDBusVariant, setVariant, arginfo_qt_dbus_qdbusvariant_qdbusvariant_setvariant, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_DBus_QDBusVariant_QDBusVariant, variant, arginfo_qt_dbus_qdbusvariant_qdbusvariant_variant, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
