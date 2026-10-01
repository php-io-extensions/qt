
extern zend_class_entry *qt_dbus_qdbusreplyfunctions_qdbusreplyfunctions_ce;

ZEPHIR_INIT_CLASS(Qt_DBus_QDbusreplyFunctions_QDbusreplyFunctions);

PHP_METHOD(Qt_DBus_QDbusreplyFunctions_QDbusreplyFunctions, qDBusReplyFill);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_dbus_qdbusreplyfunctions_qdbusreplyfunctions_qdbusreplyfill, 0, 2, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, reply, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, error, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_dbus_qdbusreplyfunctions_qdbusreplyfunctions_method_entry) {
	PHP_ME(Qt_DBus_QDbusreplyFunctions_QDbusreplyFunctions, qDBusReplyFill, arginfo_qt_dbus_qdbusreplyfunctions_qdbusreplyfunctions_qdbusreplyfill, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
