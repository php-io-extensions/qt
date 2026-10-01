
#ifdef HAVE_CONFIG_H
#include "../../ext_config.h"
#endif

#include <php.h>
#include "../../php_ext.h"
#include "../../ext.h"

#include <Zend/zend_operators.h>
#include <Zend/zend_exceptions.h>
#include <Zend/zend_interfaces.h>

#include "kernel/main.h"
#include "src/phpqt-bridge.h"
#include "kernel/object.h"
#include "kernel/operators.h"
#include "kernel/memory.h"


ZEPHIR_INIT_CLASS(Qt_Bridge_Bridge)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Bridge, Bridge, qt, bridge_bridge, qt_bridge_bridge_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Bridge_Bridge, init)
{
	zend_long r = 0;
	r = phpqt_bridge_init();
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Bridge_Bridge, pump)
{
	zval *maxTimeMs_param = NULL, _0;
	zend_long maxTimeMs;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(maxTimeMs)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &maxTimeMs_param);
	ZVAL_LONG(&_0, maxTimeMs);
	phpqt_bridge_pump(&_0);
}

PHP_METHOD(Qt_Bridge_Bridge, release)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_bridge_release(&_0);
}

PHP_METHOD(Qt_Bridge_Bridge, adopt)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_bridge_adopt(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Bridge_Bridge, isValid)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_bridge_is_valid(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Bridge_Bridge, isShell)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_bridge_is_shell(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Bridge_Bridge, typeName)
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
	phpqt_bridge_type_name(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Bridge_Bridge, isA)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval typeName;
	zval *handle_param = NULL, *typeName_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&typeName);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(typeName)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &typeName_param);
	zephir_get_strval(&typeName, typeName_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_bridge_is_a(&_0, &typeName);
	RETURN_MM_BOOL(r == 1);
}

PHP_METHOD(Qt_Bridge_Bridge, connect)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval signature;
	zval *handle_param = NULL, *signature_param = NULL, *callback = NULL, callback_sub, _0;
	zend_long handle;

	ZVAL_UNDEF(&callback_sub);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&signature);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(signature)
		Z_PARAM_ZVAL(callback)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 3, 0, &handle_param, &signature_param, &callback);
	zephir_get_strval(&signature, signature_param);
	ZVAL_LONG(&_0, handle);
	RETURN_MM_LONG(phpqt_bridge_connect(&_0, &signature, callback));
}

PHP_METHOD(Qt_Bridge_Bridge, disconnect)
{
	zval *handle_param = NULL, *connectionId_param = NULL, _0, _1;
	zend_long handle, connectionId;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(connectionId)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &connectionId_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, connectionId);
	phpqt_bridge_disconnect(&_0, &_1);
}

PHP_METHOD(Qt_Bridge_Bridge, override)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval member;
	zval *handle_param = NULL, *member_param = NULL, *callback = NULL, callback_sub, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&callback_sub);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&member);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(member)
		Z_PARAM_ZVAL(callback)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 3, 0, &handle_param, &member_param, &callback);
	zephir_get_strval(&member, member_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_bridge_override(&_0, &member, callback);
	RETURN_MM_BOOL(r == 1);
}

PHP_METHOD(Qt_Bridge_Bridge, clearOverride)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval member;
	zval *handle_param = NULL, *member_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&member);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(member)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &member_param);
	zephir_get_strval(&member, member_param);
	ZVAL_LONG(&_0, handle);
	phpqt_bridge_clear_override(&_0, &member);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_Bridge_Bridge, installEventFilter)
{
	zval *handle_param = NULL, *callback = NULL, callback_sub, _0;
	zend_long handle;

	ZVAL_UNDEF(&callback_sub);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(callback)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &callback);
	ZVAL_LONG(&_0, handle);
	phpqt_bridge_install_event_filter(&_0, callback);
}

PHP_METHOD(Qt_Bridge_Bridge, removeEventFilter)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_bridge_remove_event_filter(&_0);
}

