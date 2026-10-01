
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
#include "src/core-qcbormap.h"
#include "kernel/object.h"
#include "kernel/operators.h"
#include "kernel/memory.h"


ZEPHIR_INIT_CLASS(Qt_Core_QCborMap_QCborMap)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Core\\QCborMap, QCborMap, qt, core_qcbormap_qcbormap, qt_core_qcbormap_qcbormap_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Core_QCborMap_QCborMap, new_)
{

	RETURN_LONG(phpqt_qcbormap_new());
}

PHP_METHOD(Qt_Core_QCborMap_QCborMap, newQCborMap)
{
	zval *other_param = NULL, _0;
	zend_long other;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(other)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &other_param);
	ZVAL_LONG(&_0, other);
	RETURN_LONG(phpqt_qcbormap_new_q_cbor_map(&_0));
}

PHP_METHOD(Qt_Core_QCborMap_QCborMap, swap)
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
	phpqt_qcbormap_swap(&_0, &_1);
}

PHP_METHOD(Qt_Core_QCborMap_QCborMap, toCborValue)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qcbormap_to_cbor_value(&_0));
}

PHP_METHOD(Qt_Core_QCborMap_QCborMap, size)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qcbormap_size(&_0));
}

PHP_METHOD(Qt_Core_QCborMap_QCborMap, isEmpty)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qcbormap_is_empty(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QCborMap_QCborMap, clear)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qcbormap_clear(&_0);
}

PHP_METHOD(Qt_Core_QCborMap_QCborMap, keys)
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
	phpqt_qcbormap_keys(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QCborMap_QCborMap, value)
{
	zval *handle_param = NULL, *key_param = NULL, _0, _1;
	zend_long handle, key;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(key)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &key_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, key);
	RETURN_LONG(phpqt_qcbormap_value(&_0, &_1));
}

PHP_METHOD(Qt_Core_QCborMap_QCborMap, valueQLatin1StringView)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval key;
	zval *handle_param = NULL, *key_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&key);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(key)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &key_param);
	zephir_get_strval(&key, key_param);
	ZVAL_LONG(&_0, handle);
	RETURN_MM_LONG(phpqt_qcbormap_value_q_latin1_string_view(&_0, &key));
}

PHP_METHOD(Qt_Core_QCborMap_QCborMap, valueQString)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval key;
	zval *handle_param = NULL, *key_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&key);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(key)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &key_param);
	zephir_get_strval(&key, key_param);
	ZVAL_LONG(&_0, handle);
	RETURN_MM_LONG(phpqt_qcbormap_value_q_string(&_0, &key));
}

PHP_METHOD(Qt_Core_QCborMap_QCborMap, valueQCborValue)
{
	zval *handle_param = NULL, *key_param = NULL, _0, _1;
	zend_long handle, key;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(key)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &key_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, key);
	RETURN_LONG(phpqt_qcbormap_value_q_cbor_value(&_0, &_1));
}

PHP_METHOD(Qt_Core_QCborMap_QCborMap, take)
{
	zval *handle_param = NULL, *key_param = NULL, _0, _1;
	zend_long handle, key;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(key)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &key_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, key);
	RETURN_LONG(phpqt_qcbormap_take(&_0, &_1));
}

PHP_METHOD(Qt_Core_QCborMap_QCborMap, takeQLatin1StringView)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval key;
	zval *handle_param = NULL, *key_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&key);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(key)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &key_param);
	zephir_get_strval(&key, key_param);
	ZVAL_LONG(&_0, handle);
	RETURN_MM_LONG(phpqt_qcbormap_take_q_latin1_string_view(&_0, &key));
}

PHP_METHOD(Qt_Core_QCborMap_QCborMap, takeQString)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval key;
	zval *handle_param = NULL, *key_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&key);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(key)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &key_param);
	zephir_get_strval(&key, key_param);
	ZVAL_LONG(&_0, handle);
	RETURN_MM_LONG(phpqt_qcbormap_take_q_string(&_0, &key));
}

PHP_METHOD(Qt_Core_QCborMap_QCborMap, takeQCborValue)
{
	zval *handle_param = NULL, *key_param = NULL, _0, _1;
	zend_long handle, key;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(key)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &key_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, key);
	RETURN_LONG(phpqt_qcbormap_take_q_cbor_value(&_0, &_1));
}

PHP_METHOD(Qt_Core_QCborMap_QCborMap, remove)
{
	zval *handle_param = NULL, *key_param = NULL, _0, _1;
	zend_long handle, key;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(key)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &key_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, key);
	phpqt_qcbormap_remove(&_0, &_1);
}

PHP_METHOD(Qt_Core_QCborMap_QCborMap, removeQLatin1StringView)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval key;
	zval *handle_param = NULL, *key_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&key);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(key)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &key_param);
	zephir_get_strval(&key, key_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qcbormap_remove_q_latin1_string_view(&_0, &key);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_Core_QCborMap_QCborMap, removeQString)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval key;
	zval *handle_param = NULL, *key_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&key);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(key)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &key_param);
	zephir_get_strval(&key, key_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qcbormap_remove_q_string(&_0, &key);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_Core_QCborMap_QCborMap, removeQCborValue)
{
	zval *handle_param = NULL, *key_param = NULL, _0, _1;
	zend_long handle, key;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(key)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &key_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, key);
	phpqt_qcbormap_remove_q_cbor_value(&_0, &_1);
}

PHP_METHOD(Qt_Core_QCborMap_QCborMap, contains)
{
	zval *handle_param = NULL, *key_param = NULL, _0, _1;
	zend_long handle, key, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(key)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &key_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, key);
	r = phpqt_qcbormap_contains(&_0, &_1);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QCborMap_QCborMap, containsQLatin1StringView)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval key;
	zval *handle_param = NULL, *key_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&key);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(key)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &key_param);
	zephir_get_strval(&key, key_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qcbormap_contains_q_latin1_string_view(&_0, &key);
	RETURN_MM_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QCborMap_QCborMap, containsQString)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval key;
	zval *handle_param = NULL, *key_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&key);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(key)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &key_param);
	zephir_get_strval(&key, key_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qcbormap_contains_q_string(&_0, &key);
	RETURN_MM_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QCborMap_QCborMap, containsQCborValue)
{
	zval *handle_param = NULL, *key_param = NULL, _0, _1;
	zend_long handle, key, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(key)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &key_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, key);
	r = phpqt_qcbormap_contains_q_cbor_value(&_0, &_1);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QCborMap_QCborMap, compare)
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
	RETURN_LONG(phpqt_qcbormap_compare(&_0, &_1));
}

PHP_METHOD(Qt_Core_QCborMap_QCborMap, empty_)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qcbormap_empty(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QCborMap_QCborMap, fromVariantMap)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *map_param = NULL;
	zval map;

	ZVAL_UNDEF(&map);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_ARRAY(map)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &map_param);
	zephir_get_arrval(&map, map_param);
	RETURN_MM_LONG(phpqt_qcbormap_from_variant_map(&map));
}

PHP_METHOD(Qt_Core_QCborMap_QCborMap, fromVariantHash)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *hash_param = NULL;
	zval hash;

	ZVAL_UNDEF(&hash);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_ARRAY(hash)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &hash_param);
	zephir_get_arrval(&hash, hash_param);
	RETURN_MM_LONG(phpqt_qcbormap_from_variant_hash(&hash));
}

PHP_METHOD(Qt_Core_QCborMap_QCborMap, fromJsonObject)
{
	zval *o_param = NULL, _0;
	zend_long o;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(o)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &o_param);
	ZVAL_LONG(&_0, o);
	RETURN_LONG(phpqt_qcbormap_from_json_object(&_0));
}

PHP_METHOD(Qt_Core_QCborMap_QCborMap, toVariantMap)
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
	phpqt_qcbormap_to_variant_map(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QCborMap_QCborMap, toVariantHash)
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
	phpqt_qcbormap_to_variant_hash(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QCborMap_QCborMap, toJsonObject)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qcbormap_to_json_object(&_0));
}

