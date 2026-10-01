
#ifdef HAVE_CONFIG_H
#include "../../../ext_config.h"
#endif

#include <php.h>
#include "../../../php_ext.h"
#include "../../../ext.h"

#include <Zend/zend_operators.h>
#include <Zend/zend_exceptions.h>
#include <Zend/zend_interfaces.h>

#include "kernel/main.h"
#include "src/dbus-qdbuscontext.h"
#include "kernel/object.h"
#include "kernel/operators.h"
#include "kernel/memory.h"


ZEPHIR_INIT_CLASS(Qt_DBus_QDBusContext_QDBusContext)
{
	ZEPHIR_REGISTER_CLASS(Qt\\DBus\\QDBusContext, QDBusContext, qt, dbus_qdbuscontext_qdbuscontext, qt_dbus_qdbuscontext_qdbuscontext_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_DBus_QDBusContext_QDBusContext, new_)
{

	RETURN_LONG(phpqt_qdbuscontext_new());
}

PHP_METHOD(Qt_DBus_QDBusContext_QDBusContext, calledFromDBus)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qdbuscontext_called_from_d_bus(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_DBus_QDBusContext_QDBusContext, connection)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qdbuscontext_connection(&_0));
}

PHP_METHOD(Qt_DBus_QDBusContext_QDBusContext, message)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qdbuscontext_message(&_0));
}

PHP_METHOD(Qt_DBus_QDBusContext_QDBusContext, isDelayedReply)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qdbuscontext_is_delayed_reply(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_DBus_QDBusContext_QDBusContext, setDelayedReply)
{
	zend_bool enable;
	zval *handle_param = NULL, *enable_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_BOOL(enable)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &enable_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_BOOL(&_1, (enable ? 1 : 0));
	phpqt_qdbuscontext_set_delayed_reply(&_0, &_1);
}

PHP_METHOD(Qt_DBus_QDBusContext_QDBusContext, sendErrorReply)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval name, msg;
	zval *handle_param = NULL, *name_param = NULL, *msg_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&name);
	ZVAL_UNDEF(&msg);
	ZEND_PARSE_PARAMETERS_START(2, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(name)
		Z_PARAM_OPTIONAL
		Z_PARAM_STR(msg)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 1, &handle_param, &name_param, &msg_param);
	zephir_get_strval(&name, name_param);
	if (!msg_param) {
		ZEPHIR_INIT_VAR(&msg);
		ZVAL_STRING(&msg, "");
	} else {
		zephir_get_strval(&msg, msg_param);
	}
	ZVAL_LONG(&_0, handle);
	phpqt_qdbuscontext_send_error_reply(&_0, &name, &msg);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_DBus_QDBusContext_QDBusContext, sendErrorReplyQDBusErrorErrorTypeQString)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval msg;
	zval *handle_param = NULL, *type_param = NULL, *msg_param = NULL, _0, _1;
	zend_long handle, type;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&msg);
	ZEND_PARSE_PARAMETERS_START(2, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(type)
		Z_PARAM_OPTIONAL
		Z_PARAM_STR(msg)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 1, &handle_param, &type_param, &msg_param);
	if (!msg_param) {
		ZEPHIR_INIT_VAR(&msg);
		ZVAL_STRING(&msg, "");
	} else {
		zephir_get_strval(&msg, msg_param);
	}
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, type);
	phpqt_qdbuscontext_send_error_reply_q_d_bus_error_error_type_q_string(&_0, &_1, &msg);
	ZEPHIR_MM_RESTORE();
}

