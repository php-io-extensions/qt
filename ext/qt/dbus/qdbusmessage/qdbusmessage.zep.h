
extern zend_class_entry *qt_dbus_qdbusmessage_qdbusmessage_ce;

ZEPHIR_INIT_CLASS(Qt_DBus_QDBusMessage_QDBusMessage);

PHP_METHOD(Qt_DBus_QDBusMessage_QDBusMessage, new_);
PHP_METHOD(Qt_DBus_QDBusMessage_QDBusMessage, newQDBusMessage);
PHP_METHOD(Qt_DBus_QDBusMessage_QDBusMessage, swap);
PHP_METHOD(Qt_DBus_QDBusMessage_QDBusMessage, createSignal);
PHP_METHOD(Qt_DBus_QDBusMessage_QDBusMessage, createTargetedSignal);
PHP_METHOD(Qt_DBus_QDBusMessage_QDBusMessage, createMethodCall);
PHP_METHOD(Qt_DBus_QDBusMessage_QDBusMessage, createError);
PHP_METHOD(Qt_DBus_QDBusMessage_QDBusMessage, createErrorQDBusError);
PHP_METHOD(Qt_DBus_QDBusMessage_QDBusMessage, createErrorQDBusErrorErrorTypeQString);
PHP_METHOD(Qt_DBus_QDBusMessage_QDBusMessage, createReply);
PHP_METHOD(Qt_DBus_QDBusMessage_QDBusMessage, createReplyQVariant);
PHP_METHOD(Qt_DBus_QDBusMessage_QDBusMessage, createErrorReply);
PHP_METHOD(Qt_DBus_QDBusMessage_QDBusMessage, createErrorReplyQDBusError);
PHP_METHOD(Qt_DBus_QDBusMessage_QDBusMessage, createErrorReplyQDBusErrorErrorTypeQString);
PHP_METHOD(Qt_DBus_QDBusMessage_QDBusMessage, service);
PHP_METHOD(Qt_DBus_QDBusMessage_QDBusMessage, path);
PHP_METHOD(Qt_DBus_QDBusMessage_QDBusMessage, interface_);
PHP_METHOD(Qt_DBus_QDBusMessage_QDBusMessage, member);
PHP_METHOD(Qt_DBus_QDBusMessage_QDBusMessage, errorName);
PHP_METHOD(Qt_DBus_QDBusMessage_QDBusMessage, errorMessage);
PHP_METHOD(Qt_DBus_QDBusMessage_QDBusMessage, type);
PHP_METHOD(Qt_DBus_QDBusMessage_QDBusMessage, signature);
PHP_METHOD(Qt_DBus_QDBusMessage_QDBusMessage, isReplyRequired);
PHP_METHOD(Qt_DBus_QDBusMessage_QDBusMessage, setDelayedReply);
PHP_METHOD(Qt_DBus_QDBusMessage_QDBusMessage, isDelayedReply);
PHP_METHOD(Qt_DBus_QDBusMessage_QDBusMessage, setAutoStartService);
PHP_METHOD(Qt_DBus_QDBusMessage_QDBusMessage, autoStartService);
PHP_METHOD(Qt_DBus_QDBusMessage_QDBusMessage, setInteractiveAuthorizationAllowed);
PHP_METHOD(Qt_DBus_QDBusMessage_QDBusMessage, isInteractiveAuthorizationAllowed);
PHP_METHOD(Qt_DBus_QDBusMessage_QDBusMessage, setArguments);
PHP_METHOD(Qt_DBus_QDBusMessage_QDBusMessage, arguments);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_dbus_qdbusmessage_qdbusmessage_new_, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_dbus_qdbusmessage_qdbusmessage_newqdbusmessage, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, other, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_dbus_qdbusmessage_qdbusmessage_swap, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, other, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_dbus_qdbusmessage_qdbusmessage_createsignal, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, path, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, interface_, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, name, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_dbus_qdbusmessage_qdbusmessage_createtargetedsignal, 0, 4, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, service, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, path, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, interface_, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, name, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_dbus_qdbusmessage_qdbusmessage_createmethodcall, 0, 4, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, destination, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, path, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, interface_, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, method, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_dbus_qdbusmessage_qdbusmessage_createerror, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, name, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, msg, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_dbus_qdbusmessage_qdbusmessage_createerrorqdbuserror, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, err, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_dbus_qdbusmessage_qdbusmessage_createerrorqdbuserrorerrortypeqstring, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, type, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, msg, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_dbus_qdbusmessage_qdbusmessage_createreply, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_INFO(0, arguments)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_dbus_qdbusmessage_qdbusmessage_createreplyqvariant, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_INFO(0, argument)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_dbus_qdbusmessage_qdbusmessage_createerrorreply, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, name, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, msg, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_dbus_qdbusmessage_qdbusmessage_createerrorreplyqdbuserror, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, err, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_dbus_qdbusmessage_qdbusmessage_createerrorreplyqdbuserrorerrortypeqstring, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, type, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, msg, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_dbus_qdbusmessage_qdbusmessage_service, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_dbus_qdbusmessage_qdbusmessage_path, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_dbus_qdbusmessage_qdbusmessage_interface_, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_dbus_qdbusmessage_qdbusmessage_member, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_dbus_qdbusmessage_qdbusmessage_errorname, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_dbus_qdbusmessage_qdbusmessage_errormessage, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_dbus_qdbusmessage_qdbusmessage_type, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_dbus_qdbusmessage_qdbusmessage_signature, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_dbus_qdbusmessage_qdbusmessage_isreplyrequired, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_dbus_qdbusmessage_qdbusmessage_setdelayedreply, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, enable, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_dbus_qdbusmessage_qdbusmessage_isdelayedreply, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_dbus_qdbusmessage_qdbusmessage_setautostartservice, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, enable, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_dbus_qdbusmessage_qdbusmessage_autostartservice, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_dbus_qdbusmessage_qdbusmessage_setinteractiveauthorizationallowed, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, enable, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_dbus_qdbusmessage_qdbusmessage_isinteractiveauthorizationallowed, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_dbus_qdbusmessage_qdbusmessage_setarguments, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_ARRAY_INFO(0, arguments, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_dbus_qdbusmessage_qdbusmessage_arguments, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_dbus_qdbusmessage_qdbusmessage_method_entry) {
	PHP_ME(Qt_DBus_QDBusMessage_QDBusMessage, new_, arginfo_qt_dbus_qdbusmessage_qdbusmessage_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_DBus_QDBusMessage_QDBusMessage, newQDBusMessage, arginfo_qt_dbus_qdbusmessage_qdbusmessage_newqdbusmessage, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_DBus_QDBusMessage_QDBusMessage, swap, arginfo_qt_dbus_qdbusmessage_qdbusmessage_swap, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_DBus_QDBusMessage_QDBusMessage, createSignal, arginfo_qt_dbus_qdbusmessage_qdbusmessage_createsignal, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_DBus_QDBusMessage_QDBusMessage, createTargetedSignal, arginfo_qt_dbus_qdbusmessage_qdbusmessage_createtargetedsignal, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_DBus_QDBusMessage_QDBusMessage, createMethodCall, arginfo_qt_dbus_qdbusmessage_qdbusmessage_createmethodcall, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_DBus_QDBusMessage_QDBusMessage, createError, arginfo_qt_dbus_qdbusmessage_qdbusmessage_createerror, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_DBus_QDBusMessage_QDBusMessage, createErrorQDBusError, arginfo_qt_dbus_qdbusmessage_qdbusmessage_createerrorqdbuserror, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_DBus_QDBusMessage_QDBusMessage, createErrorQDBusErrorErrorTypeQString, arginfo_qt_dbus_qdbusmessage_qdbusmessage_createerrorqdbuserrorerrortypeqstring, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_DBus_QDBusMessage_QDBusMessage, createReply, arginfo_qt_dbus_qdbusmessage_qdbusmessage_createreply, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_DBus_QDBusMessage_QDBusMessage, createReplyQVariant, arginfo_qt_dbus_qdbusmessage_qdbusmessage_createreplyqvariant, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_DBus_QDBusMessage_QDBusMessage, createErrorReply, arginfo_qt_dbus_qdbusmessage_qdbusmessage_createerrorreply, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_DBus_QDBusMessage_QDBusMessage, createErrorReplyQDBusError, arginfo_qt_dbus_qdbusmessage_qdbusmessage_createerrorreplyqdbuserror, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_DBus_QDBusMessage_QDBusMessage, createErrorReplyQDBusErrorErrorTypeQString, arginfo_qt_dbus_qdbusmessage_qdbusmessage_createerrorreplyqdbuserrorerrortypeqstring, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_DBus_QDBusMessage_QDBusMessage, service, arginfo_qt_dbus_qdbusmessage_qdbusmessage_service, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_DBus_QDBusMessage_QDBusMessage, path, arginfo_qt_dbus_qdbusmessage_qdbusmessage_path, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_DBus_QDBusMessage_QDBusMessage, interface_, arginfo_qt_dbus_qdbusmessage_qdbusmessage_interface_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_DBus_QDBusMessage_QDBusMessage, member, arginfo_qt_dbus_qdbusmessage_qdbusmessage_member, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_DBus_QDBusMessage_QDBusMessage, errorName, arginfo_qt_dbus_qdbusmessage_qdbusmessage_errorname, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_DBus_QDBusMessage_QDBusMessage, errorMessage, arginfo_qt_dbus_qdbusmessage_qdbusmessage_errormessage, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_DBus_QDBusMessage_QDBusMessage, type, arginfo_qt_dbus_qdbusmessage_qdbusmessage_type, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_DBus_QDBusMessage_QDBusMessage, signature, arginfo_qt_dbus_qdbusmessage_qdbusmessage_signature, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_DBus_QDBusMessage_QDBusMessage, isReplyRequired, arginfo_qt_dbus_qdbusmessage_qdbusmessage_isreplyrequired, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_DBus_QDBusMessage_QDBusMessage, setDelayedReply, arginfo_qt_dbus_qdbusmessage_qdbusmessage_setdelayedreply, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_DBus_QDBusMessage_QDBusMessage, isDelayedReply, arginfo_qt_dbus_qdbusmessage_qdbusmessage_isdelayedreply, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_DBus_QDBusMessage_QDBusMessage, setAutoStartService, arginfo_qt_dbus_qdbusmessage_qdbusmessage_setautostartservice, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_DBus_QDBusMessage_QDBusMessage, autoStartService, arginfo_qt_dbus_qdbusmessage_qdbusmessage_autostartservice, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_DBus_QDBusMessage_QDBusMessage, setInteractiveAuthorizationAllowed, arginfo_qt_dbus_qdbusmessage_qdbusmessage_setinteractiveauthorizationallowed, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_DBus_QDBusMessage_QDBusMessage, isInteractiveAuthorizationAllowed, arginfo_qt_dbus_qdbusmessage_qdbusmessage_isinteractiveauthorizationallowed, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_DBus_QDBusMessage_QDBusMessage, setArguments, arginfo_qt_dbus_qdbusmessage_qdbusmessage_setarguments, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_DBus_QDBusMessage_QDBusMessage, arguments, arginfo_qt_dbus_qdbusmessage_qdbusmessage_arguments, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
