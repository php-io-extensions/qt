
extern zend_class_entry *qt_bridge_bridge_ce;

ZEPHIR_INIT_CLASS(Qt_Bridge_Bridge);

PHP_METHOD(Qt_Bridge_Bridge, init);
PHP_METHOD(Qt_Bridge_Bridge, pump);
PHP_METHOD(Qt_Bridge_Bridge, release);
PHP_METHOD(Qt_Bridge_Bridge, adopt);
PHP_METHOD(Qt_Bridge_Bridge, isValid);
PHP_METHOD(Qt_Bridge_Bridge, isShell);
PHP_METHOD(Qt_Bridge_Bridge, typeName);
PHP_METHOD(Qt_Bridge_Bridge, isA);
PHP_METHOD(Qt_Bridge_Bridge, connect);
PHP_METHOD(Qt_Bridge_Bridge, disconnect);
PHP_METHOD(Qt_Bridge_Bridge, override);
PHP_METHOD(Qt_Bridge_Bridge, clearOverride);
PHP_METHOD(Qt_Bridge_Bridge, installEventFilter);
PHP_METHOD(Qt_Bridge_Bridge, removeEventFilter);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_bridge_bridge_init, 0, 0, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_bridge_bridge_pump, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, maxTimeMs, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_bridge_bridge_release, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_bridge_bridge_adopt, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_bridge_bridge_isvalid, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_bridge_bridge_isshell, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_qt_bridge_bridge_typename, 0, 0, 1)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_bridge_bridge_isa, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, typeName, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_bridge_bridge_connect, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, signature, IS_STRING, 0)
	ZEND_ARG_INFO(0, callback)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_bridge_bridge_disconnect, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, connectionId, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_bridge_bridge_override, 0, 3, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, member, IS_STRING, 0)
	ZEND_ARG_INFO(0, callback)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_bridge_bridge_clearoverride, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, member, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_bridge_bridge_installeventfilter, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_INFO(0, callback)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_bridge_bridge_removeeventfilter, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_bridge_bridge_method_entry) {
	PHP_ME(Qt_Bridge_Bridge, init, arginfo_qt_bridge_bridge_init, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Bridge_Bridge, pump, arginfo_qt_bridge_bridge_pump, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Bridge_Bridge, release, arginfo_qt_bridge_bridge_release, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Bridge_Bridge, adopt, arginfo_qt_bridge_bridge_adopt, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Bridge_Bridge, isValid, arginfo_qt_bridge_bridge_isvalid, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Bridge_Bridge, isShell, arginfo_qt_bridge_bridge_isshell, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Bridge_Bridge, typeName, arginfo_qt_bridge_bridge_typename, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Bridge_Bridge, isA, arginfo_qt_bridge_bridge_isa, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Bridge_Bridge, connect, arginfo_qt_bridge_bridge_connect, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Bridge_Bridge, disconnect, arginfo_qt_bridge_bridge_disconnect, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Bridge_Bridge, override, arginfo_qt_bridge_bridge_override, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Bridge_Bridge, clearOverride, arginfo_qt_bridge_bridge_clearoverride, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Bridge_Bridge, installEventFilter, arginfo_qt_bridge_bridge_installeventfilter, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Bridge_Bridge, removeEventFilter, arginfo_qt_bridge_bridge_removeeventfilter, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
