
extern zend_class_entry *qt_dbus_qdbuspendingcall_qdbuspendingcall_ce;

ZEPHIR_INIT_CLASS(Qt_DBus_QDBusPendingCall_QDBusPendingCall);

PHP_METHOD(Qt_DBus_QDBusPendingCall_QDBusPendingCall, new_);
PHP_METHOD(Qt_DBus_QDBusPendingCall_QDBusPendingCall, swap);
PHP_METHOD(Qt_DBus_QDBusPendingCall_QDBusPendingCall, isFinished);
PHP_METHOD(Qt_DBus_QDBusPendingCall_QDBusPendingCall, waitForFinished);
PHP_METHOD(Qt_DBus_QDBusPendingCall_QDBusPendingCall, isError);
PHP_METHOD(Qt_DBus_QDBusPendingCall_QDBusPendingCall, isValid);
PHP_METHOD(Qt_DBus_QDBusPendingCall_QDBusPendingCall, error);
PHP_METHOD(Qt_DBus_QDBusPendingCall_QDBusPendingCall, reply);
PHP_METHOD(Qt_DBus_QDBusPendingCall_QDBusPendingCall, fromError);
PHP_METHOD(Qt_DBus_QDBusPendingCall_QDBusPendingCall, fromCompletedCall);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_dbus_qdbuspendingcall_qdbuspendingcall_new_, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, other, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_dbus_qdbuspendingcall_qdbuspendingcall_swap, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, other, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_dbus_qdbuspendingcall_qdbuspendingcall_isfinished, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_dbus_qdbuspendingcall_qdbuspendingcall_waitforfinished, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_dbus_qdbuspendingcall_qdbuspendingcall_iserror, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_dbus_qdbuspendingcall_qdbuspendingcall_isvalid, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_dbus_qdbuspendingcall_qdbuspendingcall_error, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_dbus_qdbuspendingcall_qdbuspendingcall_reply, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_dbus_qdbuspendingcall_qdbuspendingcall_fromerror, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, error, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_dbus_qdbuspendingcall_qdbuspendingcall_fromcompletedcall, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, message, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_dbus_qdbuspendingcall_qdbuspendingcall_method_entry) {
	PHP_ME(Qt_DBus_QDBusPendingCall_QDBusPendingCall, new_, arginfo_qt_dbus_qdbuspendingcall_qdbuspendingcall_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_DBus_QDBusPendingCall_QDBusPendingCall, swap, arginfo_qt_dbus_qdbuspendingcall_qdbuspendingcall_swap, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_DBus_QDBusPendingCall_QDBusPendingCall, isFinished, arginfo_qt_dbus_qdbuspendingcall_qdbuspendingcall_isfinished, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_DBus_QDBusPendingCall_QDBusPendingCall, waitForFinished, arginfo_qt_dbus_qdbuspendingcall_qdbuspendingcall_waitforfinished, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_DBus_QDBusPendingCall_QDBusPendingCall, isError, arginfo_qt_dbus_qdbuspendingcall_qdbuspendingcall_iserror, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_DBus_QDBusPendingCall_QDBusPendingCall, isValid, arginfo_qt_dbus_qdbuspendingcall_qdbuspendingcall_isvalid, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_DBus_QDBusPendingCall_QDBusPendingCall, error, arginfo_qt_dbus_qdbuspendingcall_qdbuspendingcall_error, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_DBus_QDBusPendingCall_QDBusPendingCall, reply, arginfo_qt_dbus_qdbuspendingcall_qdbuspendingcall_reply, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_DBus_QDBusPendingCall_QDBusPendingCall, fromError, arginfo_qt_dbus_qdbuspendingcall_qdbuspendingcall_fromerror, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_DBus_QDBusPendingCall_QDBusPendingCall, fromCompletedCall, arginfo_qt_dbus_qdbuspendingcall_qdbuspendingcall_fromcompletedcall, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
