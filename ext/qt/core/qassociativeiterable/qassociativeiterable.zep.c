
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
#include "src/core-qassociativeiterable.h"
#include "kernel/object.h"
#include "kernel/operators.h"
#include "kernel/memory.h"


ZEPHIR_INIT_CLASS(Qt_Core_QAssociativeIterable_QAssociativeIterable)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Core\\QAssociativeIterable, QAssociativeIterable, qt, core_qassociativeiterable_qassociativeiterable, qt_core_qassociativeiterable_qassociativeiterable_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Core_QAssociativeIterable_QAssociativeIterable, new_)
{

	RETURN_LONG(phpqt_qassociativeiterable_new());
}

PHP_METHOD(Qt_Core_QAssociativeIterable_QAssociativeIterable, containsKey)
{
	zval *handle_param = NULL, *key = NULL, key_sub, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&key_sub);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(key)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &key);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qassociativeiterable_contains_key(&_0, key);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QAssociativeIterable_QAssociativeIterable, insertKey)
{
	zval *handle_param = NULL, *key = NULL, key_sub, _0;
	zend_long handle;

	ZVAL_UNDEF(&key_sub);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(key)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &key);
	ZVAL_LONG(&_0, handle);
	phpqt_qassociativeiterable_insert_key(&_0, key);
}

PHP_METHOD(Qt_Core_QAssociativeIterable_QAssociativeIterable, removeKey)
{
	zval *handle_param = NULL, *key = NULL, key_sub, _0;
	zend_long handle;

	ZVAL_UNDEF(&key_sub);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(key)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &key);
	ZVAL_LONG(&_0, handle);
	phpqt_qassociativeiterable_remove_key(&_0, key);
}

PHP_METHOD(Qt_Core_QAssociativeIterable_QAssociativeIterable, value)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, *key = NULL, key_sub, result, _0;
	zend_long handle;

	ZVAL_UNDEF(&key_sub);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(key)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &key);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	phpqt_qassociativeiterable_value(&result, &_0, key);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QAssociativeIterable_QAssociativeIterable, setValue)
{
	zval *handle_param = NULL, *key = NULL, key_sub, *mapped = NULL, mapped_sub, _0;
	zend_long handle;

	ZVAL_UNDEF(&key_sub);
	ZVAL_UNDEF(&mapped_sub);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(key)
		Z_PARAM_ZVAL(mapped)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &key, &mapped);
	ZVAL_LONG(&_0, handle);
	phpqt_qassociativeiterable_set_value(&_0, key, mapped);
}

