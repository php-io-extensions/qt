
extern zend_class_entry *qt_dbus_qdbusinterface_qdbusinterface_ce;

ZEPHIR_INIT_CLASS(Qt_DBus_QDBusInterface_QDBusInterface);

PHP_METHOD(Qt_DBus_QDBusInterface_QDBusInterface, new_);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_dbus_qdbusinterface_qdbusinterface_new_, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, service, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, path, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, interface_, IS_STRING, 0)
	ZEND_ARG_INFO(0, connection)
	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_dbus_qdbusinterface_qdbusinterface_method_entry) {
	PHP_ME(Qt_DBus_QDBusInterface_QDBusInterface, new_, arginfo_qt_dbus_qdbusinterface_qdbusinterface_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
