
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
#include "src/dbus-qdbusconnection.h"
#include "kernel/object.h"
#include "kernel/operators.h"
#include "kernel/memory.h"
#include "kernel/string.h"


ZEPHIR_INIT_CLASS(Qt_DBus_QDBusConnection_QDBusConnection)
{
	ZEPHIR_REGISTER_CLASS(Qt\\DBus\\QDBusConnection, QDBusConnection, qt, dbus_qdbusconnection_qdbusconnection, qt_dbus_qdbusconnection_qdbusconnection_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_DBus_QDBusConnection_QDBusConnection, staticMetaObject)
{

	RETURN_LONG(phpqt_qdbusconnection_static_meta_object());
}

PHP_METHOD(Qt_DBus_QDBusConnection_QDBusConnection, qt_check_for_QGADGET_macro)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qdbusconnection_qt_check_for__q_g_a_d_g_e_t_macro(&_0);
}

PHP_METHOD(Qt_DBus_QDBusConnection_QDBusConnection, new_)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *name_param = NULL;
	zval name;

	ZVAL_UNDEF(&name);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_STR(name)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &name_param);
	zephir_get_strval(&name, name_param);
	RETURN_MM_LONG(phpqt_qdbusconnection_new(&name));
}

PHP_METHOD(Qt_DBus_QDBusConnection_QDBusConnection, newQDBusConnection)
{
	zval *other_param = NULL, _0;
	zend_long other;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(other)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &other_param);
	ZVAL_LONG(&_0, other);
	RETURN_LONG(phpqt_qdbusconnection_new_q_d_bus_connection(&_0));
}

PHP_METHOD(Qt_DBus_QDBusConnection_QDBusConnection, swap)
{
	zval *handle_param = NULL, *other_param = NULL, _0, _1;
	zend_long handle, other;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(other)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &other_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, other);
	phpqt_qdbusconnection_swap(&_0, &_1);
}

PHP_METHOD(Qt_DBus_QDBusConnection_QDBusConnection, isConnected)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qdbusconnection_is_connected(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_DBus_QDBusConnection_QDBusConnection, baseService)
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
	phpqt_qdbusconnection_base_service(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_DBus_QDBusConnection_QDBusConnection, lastError)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qdbusconnection_last_error(&_0));
}

PHP_METHOD(Qt_DBus_QDBusConnection_QDBusConnection, name)
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
	phpqt_qdbusconnection_name(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_DBus_QDBusConnection_QDBusConnection, connectionCapabilities)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qdbusconnection_connection_capabilities(&_0));
}

PHP_METHOD(Qt_DBus_QDBusConnection_QDBusConnection, send)
{
	zval *handle_param = NULL, *message_param = NULL, _0, _1;
	zend_long handle, message, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(message)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &message_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, message);
	r = phpqt_qdbusconnection_send(&_0, &_1);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_DBus_QDBusConnection_QDBusConnection, callWithCallback)
{
	zval *handle_param = NULL, *message_param = NULL, *receiver_param = NULL, *returnMethod = NULL, returnMethod_sub, *errorMethod = NULL, errorMethod_sub, *timeout_param = NULL, _0, _1, _2, _3;
	zend_long handle, message, receiver, timeout, r = 0;

	ZVAL_UNDEF(&returnMethod_sub);
	ZVAL_UNDEF(&errorMethod_sub);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(5, 6)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(message)
		Z_PARAM_LONG(receiver)
		Z_PARAM_ZVAL(returnMethod)
		Z_PARAM_ZVAL(errorMethod)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(timeout)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(5, 1, &handle_param, &message_param, &receiver_param, &returnMethod, &errorMethod, &timeout_param);
	if (!timeout_param) {
		timeout = -1;
	} else {
		}
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, message);
	ZVAL_LONG(&_2, receiver);
	ZVAL_LONG(&_3, timeout);
	r = phpqt_qdbusconnection_call_with_callback(&_0, &_1, &_2, returnMethod, errorMethod, &_3);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_DBus_QDBusConnection_QDBusConnection, callWithCallbackQDBusMessageQObjectCharInt)
{
	zval *handle_param = NULL, *message_param = NULL, *receiver_param = NULL, *slot = NULL, slot_sub, *timeout_param = NULL, _0, _1, _2, _3;
	zend_long handle, message, receiver, timeout, r = 0;

	ZVAL_UNDEF(&slot_sub);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(4, 5)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(message)
		Z_PARAM_LONG(receiver)
		Z_PARAM_ZVAL(slot)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(timeout)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 1, &handle_param, &message_param, &receiver_param, &slot, &timeout_param);
	if (!timeout_param) {
		timeout = -1;
	} else {
		}
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, message);
	ZVAL_LONG(&_2, receiver);
	ZVAL_LONG(&_3, timeout);
	r = phpqt_qdbusconnection_call_with_callback_q_d_bus_message_q_object_char_int(&_0, &_1, &_2, slot, &_3);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_DBus_QDBusConnection_QDBusConnection, call)
{
	zval *handle_param = NULL, *message_param = NULL, *mode = NULL, mode_sub, *timeout_param = NULL, __$null, _0, _1, _2;
	zend_long handle, message, timeout;

	ZVAL_UNDEF(&mode_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(2, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(message)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(mode)
		Z_PARAM_LONG(timeout)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 2, &handle_param, &message_param, &mode, &timeout_param);
	if (!mode) {
		mode = &mode_sub;
		mode = &__$null;
	}
	if (!timeout_param) {
		timeout = -1;
	} else {
		}
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, message);
	ZVAL_LONG(&_2, timeout);
	RETURN_LONG(phpqt_qdbusconnection_call(&_0, &_1, mode, &_2));
}

PHP_METHOD(Qt_DBus_QDBusConnection_QDBusConnection, asyncCall)
{
	zval *handle_param = NULL, *message_param = NULL, *timeout_param = NULL, _0, _1, _2;
	zend_long handle, message, timeout;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(2, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(message)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(timeout)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 1, &handle_param, &message_param, &timeout_param);
	if (!timeout_param) {
		timeout = -1;
	} else {
		}
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, message);
	ZVAL_LONG(&_2, timeout);
	RETURN_LONG(phpqt_qdbusconnection_async_call(&_0, &_1, &_2));
}

PHP_METHOD(Qt_DBus_QDBusConnection_QDBusConnection, connect)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval service, path, interface_, name;
	zval *handle_param = NULL, *service_param = NULL, *path_param = NULL, *interface__param = NULL, *name_param = NULL, *receiver_param = NULL, *slot = NULL, slot_sub, _0, _1;
	zend_long handle, receiver, r = 0;

	ZVAL_UNDEF(&slot_sub);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&service);
	ZVAL_UNDEF(&path);
	ZVAL_UNDEF(&interface_);
	ZVAL_UNDEF(&name);
	ZEND_PARSE_PARAMETERS_START(7, 7)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(service)
		Z_PARAM_STR(path)
		Z_PARAM_STR(interface_)
		Z_PARAM_STR(name)
		Z_PARAM_LONG(receiver)
		Z_PARAM_ZVAL(slot)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 7, 0, &handle_param, &service_param, &path_param, &interface__param, &name_param, &receiver_param, &slot);
	zephir_get_strval(&service, service_param);
	zephir_get_strval(&path, path_param);
	zephir_get_strval(&interface_, interface__param);
	zephir_get_strval(&name, name_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, receiver);
	r = phpqt_qdbusconnection_connect(&_0, &service, &path, &interface_, &name, &_1, slot);
	RETURN_MM_BOOL(r == 1);
}

PHP_METHOD(Qt_DBus_QDBusConnection_QDBusConnection, connectQStringQStringQStringQStringQStringQObjectChar)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval service, path, interface_, name, signature;
	zval *handle_param = NULL, *service_param = NULL, *path_param = NULL, *interface__param = NULL, *name_param = NULL, *signature_param = NULL, *receiver_param = NULL, *slot = NULL, slot_sub, _0, _1;
	zend_long handle, receiver, r = 0;

	ZVAL_UNDEF(&slot_sub);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&service);
	ZVAL_UNDEF(&path);
	ZVAL_UNDEF(&interface_);
	ZVAL_UNDEF(&name);
	ZVAL_UNDEF(&signature);
	ZEND_PARSE_PARAMETERS_START(8, 8)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(service)
		Z_PARAM_STR(path)
		Z_PARAM_STR(interface_)
		Z_PARAM_STR(name)
		Z_PARAM_STR(signature)
		Z_PARAM_LONG(receiver)
		Z_PARAM_ZVAL(slot)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 8, 0, &handle_param, &service_param, &path_param, &interface__param, &name_param, &signature_param, &receiver_param, &slot);
	zephir_get_strval(&service, service_param);
	zephir_get_strval(&path, path_param);
	zephir_get_strval(&interface_, interface__param);
	zephir_get_strval(&name, name_param);
	zephir_get_strval(&signature, signature_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, receiver);
	r = phpqt_qdbusconnection_connect_q_string_q_string_q_string_q_string_q_string_q_object_char(&_0, &service, &path, &interface_, &name, &signature, &_1, slot);
	RETURN_MM_BOOL(r == 1);
}

PHP_METHOD(Qt_DBus_QDBusConnection_QDBusConnection, connectQStringQStringQStringQStringQStringListQStringQObjectChar)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval argumentMatch;
	zval service, path, interface_, name, signature;
	zval *handle_param = NULL, *service_param = NULL, *path_param = NULL, *interface__param = NULL, *name_param = NULL, *argumentMatch_param = NULL, *signature_param = NULL, *receiver_param = NULL, *slot = NULL, slot_sub, _0, _1;
	zend_long handle, receiver, r = 0;

	ZVAL_UNDEF(&slot_sub);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&service);
	ZVAL_UNDEF(&path);
	ZVAL_UNDEF(&interface_);
	ZVAL_UNDEF(&name);
	ZVAL_UNDEF(&signature);
	ZVAL_UNDEF(&argumentMatch);
	ZEND_PARSE_PARAMETERS_START(9, 9)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(service)
		Z_PARAM_STR(path)
		Z_PARAM_STR(interface_)
		Z_PARAM_STR(name)
		Z_PARAM_ARRAY(argumentMatch)
		Z_PARAM_STR(signature)
		Z_PARAM_LONG(receiver)
		Z_PARAM_ZVAL(slot)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 9, 0, &handle_param, &service_param, &path_param, &interface__param, &name_param, &argumentMatch_param, &signature_param, &receiver_param, &slot);
	zephir_get_strval(&service, service_param);
	zephir_get_strval(&path, path_param);
	zephir_get_strval(&interface_, interface__param);
	zephir_get_strval(&name, name_param);
	zephir_get_arrval(&argumentMatch, argumentMatch_param);
	zephir_get_strval(&signature, signature_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, receiver);
	r = phpqt_qdbusconnection_connect_q_string_q_string_q_string_q_string_q_string_list_q_string_q_object_char(&_0, &service, &path, &interface_, &name, &argumentMatch, &signature, &_1, slot);
	RETURN_MM_BOOL(r == 1);
}

PHP_METHOD(Qt_DBus_QDBusConnection_QDBusConnection, disconnect)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval service, path, interface_, name;
	zval *handle_param = NULL, *service_param = NULL, *path_param = NULL, *interface__param = NULL, *name_param = NULL, *receiver_param = NULL, *slot = NULL, slot_sub, _0, _1;
	zend_long handle, receiver, r = 0;

	ZVAL_UNDEF(&slot_sub);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&service);
	ZVAL_UNDEF(&path);
	ZVAL_UNDEF(&interface_);
	ZVAL_UNDEF(&name);
	ZEND_PARSE_PARAMETERS_START(7, 7)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(service)
		Z_PARAM_STR(path)
		Z_PARAM_STR(interface_)
		Z_PARAM_STR(name)
		Z_PARAM_LONG(receiver)
		Z_PARAM_ZVAL(slot)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 7, 0, &handle_param, &service_param, &path_param, &interface__param, &name_param, &receiver_param, &slot);
	zephir_get_strval(&service, service_param);
	zephir_get_strval(&path, path_param);
	zephir_get_strval(&interface_, interface__param);
	zephir_get_strval(&name, name_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, receiver);
	r = phpqt_qdbusconnection_disconnect(&_0, &service, &path, &interface_, &name, &_1, slot);
	RETURN_MM_BOOL(r == 1);
}

PHP_METHOD(Qt_DBus_QDBusConnection_QDBusConnection, disconnectQStringQStringQStringQStringQStringQObjectChar)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval service, path, interface_, name, signature;
	zval *handle_param = NULL, *service_param = NULL, *path_param = NULL, *interface__param = NULL, *name_param = NULL, *signature_param = NULL, *receiver_param = NULL, *slot = NULL, slot_sub, _0, _1;
	zend_long handle, receiver, r = 0;

	ZVAL_UNDEF(&slot_sub);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&service);
	ZVAL_UNDEF(&path);
	ZVAL_UNDEF(&interface_);
	ZVAL_UNDEF(&name);
	ZVAL_UNDEF(&signature);
	ZEND_PARSE_PARAMETERS_START(8, 8)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(service)
		Z_PARAM_STR(path)
		Z_PARAM_STR(interface_)
		Z_PARAM_STR(name)
		Z_PARAM_STR(signature)
		Z_PARAM_LONG(receiver)
		Z_PARAM_ZVAL(slot)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 8, 0, &handle_param, &service_param, &path_param, &interface__param, &name_param, &signature_param, &receiver_param, &slot);
	zephir_get_strval(&service, service_param);
	zephir_get_strval(&path, path_param);
	zephir_get_strval(&interface_, interface__param);
	zephir_get_strval(&name, name_param);
	zephir_get_strval(&signature, signature_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, receiver);
	r = phpqt_qdbusconnection_disconnect_q_string_q_string_q_string_q_string_q_string_q_object_char(&_0, &service, &path, &interface_, &name, &signature, &_1, slot);
	RETURN_MM_BOOL(r == 1);
}

PHP_METHOD(Qt_DBus_QDBusConnection_QDBusConnection, disconnectQStringQStringQStringQStringQStringListQStringQObjectChar)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval argumentMatch;
	zval service, path, interface_, name, signature;
	zval *handle_param = NULL, *service_param = NULL, *path_param = NULL, *interface__param = NULL, *name_param = NULL, *argumentMatch_param = NULL, *signature_param = NULL, *receiver_param = NULL, *slot = NULL, slot_sub, _0, _1;
	zend_long handle, receiver, r = 0;

	ZVAL_UNDEF(&slot_sub);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&service);
	ZVAL_UNDEF(&path);
	ZVAL_UNDEF(&interface_);
	ZVAL_UNDEF(&name);
	ZVAL_UNDEF(&signature);
	ZVAL_UNDEF(&argumentMatch);
	ZEND_PARSE_PARAMETERS_START(9, 9)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(service)
		Z_PARAM_STR(path)
		Z_PARAM_STR(interface_)
		Z_PARAM_STR(name)
		Z_PARAM_ARRAY(argumentMatch)
		Z_PARAM_STR(signature)
		Z_PARAM_LONG(receiver)
		Z_PARAM_ZVAL(slot)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 9, 0, &handle_param, &service_param, &path_param, &interface__param, &name_param, &argumentMatch_param, &signature_param, &receiver_param, &slot);
	zephir_get_strval(&service, service_param);
	zephir_get_strval(&path, path_param);
	zephir_get_strval(&interface_, interface__param);
	zephir_get_strval(&name, name_param);
	zephir_get_arrval(&argumentMatch, argumentMatch_param);
	zephir_get_strval(&signature, signature_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, receiver);
	r = phpqt_qdbusconnection_disconnect_q_string_q_string_q_string_q_string_q_string_list_q_string_q_object_char(&_0, &service, &path, &interface_, &name, &argumentMatch, &signature, &_1, slot);
	RETURN_MM_BOOL(r == 1);
}

PHP_METHOD(Qt_DBus_QDBusConnection_QDBusConnection, registerObject)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval path;
	zval *handle_param = NULL, *path_param = NULL, *object__param = NULL, *options = NULL, options_sub, __$null, _0, _1;
	zend_long handle, object_, r = 0;

	ZVAL_UNDEF(&options_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&path);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(3, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(path)
		Z_PARAM_LONG(object_)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(options)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 3, 1, &handle_param, &path_param, &object__param, &options);
	zephir_get_strval(&path, path_param);
	if (!options) {
		options = &options_sub;
		options = &__$null;
	}
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, object_);
	r = phpqt_qdbusconnection_register_object(&_0, &path, &_1, options);
	RETURN_MM_BOOL(r == 1);
}

PHP_METHOD(Qt_DBus_QDBusConnection_QDBusConnection, registerObjectQStringQStringQObjectQDBusConnectionRegisterOptions)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval path, interface_;
	zval *handle_param = NULL, *path_param = NULL, *interface__param = NULL, *object__param = NULL, *options = NULL, options_sub, __$null, _0, _1;
	zend_long handle, object_, r = 0;

	ZVAL_UNDEF(&options_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&path);
	ZVAL_UNDEF(&interface_);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(4, 5)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(path)
		Z_PARAM_STR(interface_)
		Z_PARAM_LONG(object_)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(options)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 4, 1, &handle_param, &path_param, &interface__param, &object__param, &options);
	zephir_get_strval(&path, path_param);
	zephir_get_strval(&interface_, interface__param);
	if (!options) {
		options = &options_sub;
		options = &__$null;
	}
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, object_);
	r = phpqt_qdbusconnection_register_object_q_string_q_string_q_object_q_d_bus_connection_register_options(&_0, &path, &interface_, &_1, options);
	RETURN_MM_BOOL(r == 1);
}

PHP_METHOD(Qt_DBus_QDBusConnection_QDBusConnection, unregisterObject)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval path;
	zval *handle_param = NULL, *path_param = NULL, *mode = NULL, mode_sub, __$null, _0;
	zend_long handle;

	ZVAL_UNDEF(&mode_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&path);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(2, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(path)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(mode)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 1, &handle_param, &path_param, &mode);
	zephir_get_strval(&path, path_param);
	if (!mode) {
		mode = &mode_sub;
		mode = &__$null;
	}
	ZVAL_LONG(&_0, handle);
	phpqt_qdbusconnection_unregister_object(&_0, &path, mode);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_DBus_QDBusConnection_QDBusConnection, objectRegisteredAt)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval path;
	zval *handle_param = NULL, *path_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&path);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(path)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &path_param);
	zephir_get_strval(&path, path_param);
	ZVAL_LONG(&_0, handle);
	RETURN_MM_LONG(phpqt_qdbusconnection_object_registered_at(&_0, &path));
}

PHP_METHOD(Qt_DBus_QDBusConnection_QDBusConnection, registerVirtualObject)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval path;
	zval *handle_param = NULL, *path_param = NULL, *object__param = NULL, *options = NULL, options_sub, __$null, _0, _1;
	zend_long handle, object_, r = 0;

	ZVAL_UNDEF(&options_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&path);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(3, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(path)
		Z_PARAM_LONG(object_)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(options)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 3, 1, &handle_param, &path_param, &object__param, &options);
	zephir_get_strval(&path, path_param);
	if (!options) {
		options = &options_sub;
		options = &__$null;
	}
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, object_);
	r = phpqt_qdbusconnection_register_virtual_object(&_0, &path, &_1, options);
	RETURN_MM_BOOL(r == 1);
}

PHP_METHOD(Qt_DBus_QDBusConnection_QDBusConnection, registerService)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval serviceName;
	zval *handle_param = NULL, *serviceName_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&serviceName);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(serviceName)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &serviceName_param);
	zephir_get_strval(&serviceName, serviceName_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qdbusconnection_register_service(&_0, &serviceName);
	RETURN_MM_BOOL(r == 1);
}

PHP_METHOD(Qt_DBus_QDBusConnection_QDBusConnection, unregisterService)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval serviceName;
	zval *handle_param = NULL, *serviceName_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&serviceName);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(serviceName)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &serviceName_param);
	zephir_get_strval(&serviceName, serviceName_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qdbusconnection_unregister_service(&_0, &serviceName);
	RETURN_MM_BOOL(r == 1);
}

PHP_METHOD(Qt_DBus_QDBusConnection_QDBusConnection, interface_)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qdbusconnection_interface(&_0));
}

PHP_METHOD(Qt_DBus_QDBusConnection_QDBusConnection, connectToBus)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval name;
	zval *type_param = NULL, *name_param = NULL, _0;
	zend_long type;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&name);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(type)
		Z_PARAM_STR(name)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &type_param, &name_param);
	zephir_get_strval(&name, name_param);
	ZVAL_LONG(&_0, type);
	RETURN_MM_LONG(phpqt_qdbusconnection_connect_to_bus(&_0, &name));
}

PHP_METHOD(Qt_DBus_QDBusConnection_QDBusConnection, connectToBusQStringQString)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *address_param = NULL, *name_param = NULL;
	zval address, name;

	ZVAL_UNDEF(&address);
	ZVAL_UNDEF(&name);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_STR(address)
		Z_PARAM_STR(name)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &address_param, &name_param);
	zephir_get_strval(&address, address_param);
	zephir_get_strval(&name, name_param);
	RETURN_MM_LONG(phpqt_qdbusconnection_connect_to_bus_q_string_q_string(&address, &name));
}

PHP_METHOD(Qt_DBus_QDBusConnection_QDBusConnection, connectToPeer)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *address_param = NULL, *name_param = NULL;
	zval address, name;

	ZVAL_UNDEF(&address);
	ZVAL_UNDEF(&name);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_STR(address)
		Z_PARAM_STR(name)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &address_param, &name_param);
	zephir_get_strval(&address, address_param);
	zephir_get_strval(&name, name_param);
	RETURN_MM_LONG(phpqt_qdbusconnection_connect_to_peer(&address, &name));
}

PHP_METHOD(Qt_DBus_QDBusConnection_QDBusConnection, disconnectFromBus)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *name_param = NULL;
	zval name;

	ZVAL_UNDEF(&name);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_STR(name)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &name_param);
	zephir_get_strval(&name, name_param);
	phpqt_qdbusconnection_disconnect_from_bus(&name);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_DBus_QDBusConnection_QDBusConnection, disconnectFromPeer)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *name_param = NULL;
	zval name;

	ZVAL_UNDEF(&name);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_STR(name)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &name_param);
	zephir_get_strval(&name, name_param);
	phpqt_qdbusconnection_disconnect_from_peer(&name);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_DBus_QDBusConnection_QDBusConnection, localMachineId)
{
	zval result;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;

	ZVAL_UNDEF(&result);
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);

	ZEPHIR_INIT_VAR(&result);
	phpqt_qdbusconnection_local_machine_id(&result);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_DBus_QDBusConnection_QDBusConnection, sessionBus)
{

	RETURN_LONG(phpqt_qdbusconnection_session_bus());
}

PHP_METHOD(Qt_DBus_QDBusConnection_QDBusConnection, systemBus)
{

	RETURN_LONG(phpqt_qdbusconnection_system_bus());
}

