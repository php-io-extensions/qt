
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
#include "src/dbus-qdbusabstractinterface.h"
#include "kernel/object.h"
#include "kernel/string.h"
#include "kernel/memory.h"
#include "kernel/operators.h"


ZEPHIR_INIT_CLASS(Qt_DBus_QDBusAbstractInterface_QDBusAbstractInterface)
{
	ZEPHIR_REGISTER_CLASS(Qt\\DBus\\QDBusAbstractInterface, QDBusAbstractInterface, qt, dbus_qdbusabstractinterface_qdbusabstractinterface, qt_dbus_qdbusabstractinterface_qdbusabstractinterface_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_DBus_QDBusAbstractInterface_QDBusAbstractInterface, staticMetaObject)
{

	RETURN_LONG(phpqt_qdbusabstractinterface_static_meta_object());
}

PHP_METHOD(Qt_DBus_QDBusAbstractInterface_QDBusAbstractInterface, tr)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long n;
	zval *s = NULL, s_sub, *c = NULL, c_sub, *n_param = NULL, __$null, result, _0;

	ZVAL_UNDEF(&s_sub);
	ZVAL_UNDEF(&c_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(1, 3)
		Z_PARAM_ZVAL(s)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(c)
		Z_PARAM_LONG(n)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 2, &s, &c, &n_param);
	if (!c) {
		c = &c_sub;
		c = &__$null;
	}
	if (!n_param) {
		n = -1;
	} else {
		}
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, n);
	phpqt_qdbusabstractinterface_tr(&result, s, c, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_DBus_QDBusAbstractInterface_QDBusAbstractInterface, isValid)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qdbusabstractinterface_is_valid(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_DBus_QDBusAbstractInterface_QDBusAbstractInterface, connection)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qdbusabstractinterface_connection(&_0));
}

PHP_METHOD(Qt_DBus_QDBusAbstractInterface_QDBusAbstractInterface, service)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, result, _0;
	zend_long handle;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &handle_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	phpqt_qdbusabstractinterface_service(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_DBus_QDBusAbstractInterface_QDBusAbstractInterface, path)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, result, _0;
	zend_long handle;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &handle_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	phpqt_qdbusabstractinterface_path(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_DBus_QDBusAbstractInterface_QDBusAbstractInterface, interface_)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, result, _0;
	zend_long handle;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &handle_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	phpqt_qdbusabstractinterface_interface(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_DBus_QDBusAbstractInterface_QDBusAbstractInterface, lastError)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qdbusabstractinterface_last_error(&_0));
}

PHP_METHOD(Qt_DBus_QDBusAbstractInterface_QDBusAbstractInterface, setTimeout)
{
	zval *handle_param = NULL, *timeout_param = NULL, _0, _1;
	zend_long handle, timeout;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(timeout)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &timeout_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, timeout);
	phpqt_qdbusabstractinterface_set_timeout(&_0, &_1);
}

PHP_METHOD(Qt_DBus_QDBusAbstractInterface_QDBusAbstractInterface, timeout)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qdbusabstractinterface_timeout(&_0));
}

PHP_METHOD(Qt_DBus_QDBusAbstractInterface_QDBusAbstractInterface, setInteractiveAuthorizationAllowed)
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
	phpqt_qdbusabstractinterface_set_interactive_authorization_allowed(&_0, &_1);
}

PHP_METHOD(Qt_DBus_QDBusAbstractInterface_QDBusAbstractInterface, isInteractiveAuthorizationAllowed)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qdbusabstractinterface_is_interactive_authorization_allowed(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_DBus_QDBusAbstractInterface_QDBusAbstractInterface, call)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval method;
	zval *handle_param = NULL, *method_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&method);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(method)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &method_param);
	zephir_get_strval(&method, method_param);
	ZVAL_LONG(&_0, handle);
	RETURN_MM_LONG(phpqt_qdbusabstractinterface_call(&_0, &method));
}

PHP_METHOD(Qt_DBus_QDBusAbstractInterface_QDBusAbstractInterface, callQDBusCallModeQString)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval method;
	zval *handle_param = NULL, *mode_param = NULL, *method_param = NULL, _0, _1;
	zend_long handle, mode;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&method);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(mode)
		Z_PARAM_STR(method)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 3, 0, &handle_param, &mode_param, &method_param);
	zephir_get_strval(&method, method_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, mode);
	RETURN_MM_LONG(phpqt_qdbusabstractinterface_call_q_d_bus_call_mode_q_string(&_0, &_1, &method));
}

PHP_METHOD(Qt_DBus_QDBusAbstractInterface_QDBusAbstractInterface, callWithArgumentList)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval args;
	zval method;
	zval *handle_param = NULL, *mode_param = NULL, *method_param = NULL, *args_param = NULL, _0, _1;
	zend_long handle, mode;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&method);
	ZVAL_UNDEF(&args);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(mode)
		Z_PARAM_STR(method)
		Z_PARAM_ARRAY(args)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 4, 0, &handle_param, &mode_param, &method_param, &args_param);
	zephir_get_strval(&method, method_param);
	zephir_get_arrval(&args, args_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, mode);
	RETURN_MM_LONG(phpqt_qdbusabstractinterface_call_with_argument_list(&_0, &_1, &method, &args));
}

PHP_METHOD(Qt_DBus_QDBusAbstractInterface_QDBusAbstractInterface, callWithCallback)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval args;
	zval method;
	zval *handle_param = NULL, *method_param = NULL, *args_param = NULL, *receiver_param = NULL, *member = NULL, member_sub, *errorSlot = NULL, errorSlot_sub, _0, _1;
	zend_long handle, receiver, r = 0;

	ZVAL_UNDEF(&member_sub);
	ZVAL_UNDEF(&errorSlot_sub);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&method);
	ZVAL_UNDEF(&args);
	ZEND_PARSE_PARAMETERS_START(6, 6)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(method)
		Z_PARAM_ARRAY(args)
		Z_PARAM_LONG(receiver)
		Z_PARAM_ZVAL(member)
		Z_PARAM_ZVAL(errorSlot)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 6, 0, &handle_param, &method_param, &args_param, &receiver_param, &member, &errorSlot);
	zephir_get_strval(&method, method_param);
	zephir_get_arrval(&args, args_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, receiver);
	r = phpqt_qdbusabstractinterface_call_with_callback(&_0, &method, &args, &_1, member, errorSlot);
	RETURN_MM_BOOL(r == 1);
}

PHP_METHOD(Qt_DBus_QDBusAbstractInterface_QDBusAbstractInterface, callWithCallbackQStringQListQVariantQObjectChar)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval args;
	zval method;
	zval *handle_param = NULL, *method_param = NULL, *args_param = NULL, *receiver_param = NULL, *member = NULL, member_sub, _0, _1;
	zend_long handle, receiver, r = 0;

	ZVAL_UNDEF(&member_sub);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&method);
	ZVAL_UNDEF(&args);
	ZEND_PARSE_PARAMETERS_START(5, 5)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(method)
		Z_PARAM_ARRAY(args)
		Z_PARAM_LONG(receiver)
		Z_PARAM_ZVAL(member)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 5, 0, &handle_param, &method_param, &args_param, &receiver_param, &member);
	zephir_get_strval(&method, method_param);
	zephir_get_arrval(&args, args_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, receiver);
	r = phpqt_qdbusabstractinterface_call_with_callback_q_string_q_list_q_variant_q_object_char(&_0, &method, &args, &_1, member);
	RETURN_MM_BOOL(r == 1);
}

PHP_METHOD(Qt_DBus_QDBusAbstractInterface_QDBusAbstractInterface, asyncCall)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval method;
	zval *handle_param = NULL, *method_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&method);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(method)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &method_param);
	zephir_get_strval(&method, method_param);
	ZVAL_LONG(&_0, handle);
	RETURN_MM_LONG(phpqt_qdbusabstractinterface_async_call(&_0, &method));
}

PHP_METHOD(Qt_DBus_QDBusAbstractInterface_QDBusAbstractInterface, asyncCallWithArgumentList)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval args;
	zval method;
	zval *handle_param = NULL, *method_param = NULL, *args_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&method);
	ZVAL_UNDEF(&args);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(method)
		Z_PARAM_ARRAY(args)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 3, 0, &handle_param, &method_param, &args_param);
	zephir_get_strval(&method, method_param);
	zephir_get_arrval(&args, args_param);
	ZVAL_LONG(&_0, handle);
	RETURN_MM_LONG(phpqt_qdbusabstractinterface_async_call_with_argument_list(&_0, &method, &args));
}

PHP_METHOD(Qt_DBus_QDBusAbstractInterface_QDBusAbstractInterface, new_)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long connection, parent_;
	zval *service_param = NULL, *path_param = NULL, *interface_ = NULL, interface__sub, *connection_param = NULL, *parent__param = NULL, _0, _1;
	zval service, path;

	ZVAL_UNDEF(&service);
	ZVAL_UNDEF(&path);
	ZVAL_UNDEF(&interface__sub);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(5, 5)
		Z_PARAM_STR(service)
		Z_PARAM_STR(path)
		Z_PARAM_ZVAL(interface_)
		Z_PARAM_LONG(connection)
		Z_PARAM_LONG(parent_)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 5, 0, &service_param, &path_param, &interface_, &connection_param, &parent__param);
	zephir_get_strval(&service, service_param);
	zephir_get_strval(&path, path_param);
	ZVAL_LONG(&_0, connection);
	ZVAL_LONG(&_1, parent_);
	RETURN_MM_LONG(phpqt_qdbusabstractinterface_new(&service, &path, interface_, &_0, &_1));
}

PHP_METHOD(Qt_DBus_QDBusAbstractInterface_QDBusAbstractInterface, connectNotify)
{
	zval *handle_param = NULL, *signal_param = NULL, _0, _1;
	zend_long handle, signal;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(signal)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &signal_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, signal);
	phpqt_qdbusabstractinterface_connect_notify(&_0, &_1);
}

PHP_METHOD(Qt_DBus_QDBusAbstractInterface_QDBusAbstractInterface, disconnectNotify)
{
	zval *handle_param = NULL, *signal_param = NULL, _0, _1;
	zend_long handle, signal;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(signal)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &signal_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, signal);
	phpqt_qdbusabstractinterface_disconnect_notify(&_0, &_1);
}

PHP_METHOD(Qt_DBus_QDBusAbstractInterface_QDBusAbstractInterface, internalPropGet)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, *propname = NULL, propname_sub, result, _0;
	zend_long handle;

	ZVAL_UNDEF(&propname_sub);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(propname)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &propname);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	phpqt_qdbusabstractinterface_internal_prop_get(&result, &_0, propname);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_DBus_QDBusAbstractInterface_QDBusAbstractInterface, internalPropSet)
{
	zval *handle_param = NULL, *propname = NULL, propname_sub, *value = NULL, value_sub, _0;
	zend_long handle;

	ZVAL_UNDEF(&propname_sub);
	ZVAL_UNDEF(&value_sub);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(propname)
		Z_PARAM_ZVAL(value)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &propname, &value);
	ZVAL_LONG(&_0, handle);
	phpqt_qdbusabstractinterface_internal_prop_set(&_0, propname, value);
}

PHP_METHOD(Qt_DBus_QDBusAbstractInterface_QDBusAbstractInterface, internalConstCall)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval method;
	zval *handle_param = NULL, *mode_param = NULL, *method_param = NULL, *args = NULL, args_sub, __$null, _0, _1;
	zend_long handle, mode;

	ZVAL_UNDEF(&args_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&method);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(3, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(mode)
		Z_PARAM_STR(method)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(args)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 3, 1, &handle_param, &mode_param, &method_param, &args);
	zephir_get_strval(&method, method_param);
	if (!args) {
		args = &args_sub;
		args = &__$null;
	}
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, mode);
	RETURN_MM_LONG(phpqt_qdbusabstractinterface_internal_const_call(&_0, &_1, &method, args));
}

