
extern zend_class_entry *qt_dbus_qdbuscontext_qdbuscontext_ce;

ZEPHIR_INIT_CLASS(Qt_DBus_QDBusContext_QDBusContext);

PHP_METHOD(Qt_DBus_QDBusContext_QDBusContext, new_);
PHP_METHOD(Qt_DBus_QDBusContext_QDBusContext, calledFromDBus);
PHP_METHOD(Qt_DBus_QDBusContext_QDBusContext, connection);
PHP_METHOD(Qt_DBus_QDBusContext_QDBusContext, message);
PHP_METHOD(Qt_DBus_QDBusContext_QDBusContext, isDelayedReply);
PHP_METHOD(Qt_DBus_QDBusContext_QDBusContext, setDelayedReply);
PHP_METHOD(Qt_DBus_QDBusContext_QDBusContext, sendErrorReply);
PHP_METHOD(Qt_DBus_QDBusContext_QDBusContext, sendErrorReplyQDBusErrorErrorTypeQString);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_dbus_qdbuscontext_qdbuscontext_new_, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_dbus_qdbuscontext_qdbuscontext_calledfromdbus, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_dbus_qdbuscontext_qdbuscontext_connection, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_dbus_qdbuscontext_qdbuscontext_message, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_dbus_qdbuscontext_qdbuscontext_isdelayedreply, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_dbus_qdbuscontext_qdbuscontext_setdelayedreply, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, enable, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_dbus_qdbuscontext_qdbuscontext_senderrorreply, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, name, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, msg, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_dbus_qdbuscontext_qdbuscontext_senderrorreplyqdbuserrorerrortypeqstring, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, type, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, msg, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_dbus_qdbuscontext_qdbuscontext_method_entry) {
	PHP_ME(Qt_DBus_QDBusContext_QDBusContext, new_, arginfo_qt_dbus_qdbuscontext_qdbuscontext_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_DBus_QDBusContext_QDBusContext, calledFromDBus, arginfo_qt_dbus_qdbuscontext_qdbuscontext_calledfromdbus, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_DBus_QDBusContext_QDBusContext, connection, arginfo_qt_dbus_qdbuscontext_qdbuscontext_connection, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_DBus_QDBusContext_QDBusContext, message, arginfo_qt_dbus_qdbuscontext_qdbuscontext_message, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_DBus_QDBusContext_QDBusContext, isDelayedReply, arginfo_qt_dbus_qdbuscontext_qdbuscontext_isdelayedreply, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_DBus_QDBusContext_QDBusContext, setDelayedReply, arginfo_qt_dbus_qdbuscontext_qdbuscontext_setdelayedreply, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_DBus_QDBusContext_QDBusContext, sendErrorReply, arginfo_qt_dbus_qdbuscontext_qdbuscontext_senderrorreply, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_DBus_QDBusContext_QDBusContext, sendErrorReplyQDBusErrorErrorTypeQString, arginfo_qt_dbus_qdbuscontext_qdbuscontext_senderrorreplyqdbuserrorerrortypeqstring, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
