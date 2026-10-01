
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
#include "src/core-qjsonarray.h"
#include "kernel/object.h"
#include "kernel/operators.h"
#include "kernel/memory.h"


ZEPHIR_INIT_CLASS(Qt_Core_QJsonArray_QJsonArray)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Core\\QJsonArray, QJsonArray, qt, core_qjsonarray_qjsonarray, qt_core_qjsonarray_qjsonarray_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Core_QJsonArray_QJsonArray, new_)
{

	RETURN_LONG(phpqt_qjsonarray_new());
}

PHP_METHOD(Qt_Core_QJsonArray_QJsonArray, newQJsonArray)
{
	zval *other_param = NULL, _0;
	zend_long other;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(other)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &other_param);
	ZVAL_LONG(&_0, other);
	RETURN_LONG(phpqt_qjsonarray_new_q_json_array(&_0));
}

PHP_METHOD(Qt_Core_QJsonArray_QJsonArray, fromStringList)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *list__param = NULL;
	zval list_;

	ZVAL_UNDEF(&list_);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_ARRAY(list_)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &list__param);
	zephir_get_arrval(&list_, list__param);
	RETURN_MM_LONG(phpqt_qjsonarray_from_string_list(&list_));
}

PHP_METHOD(Qt_Core_QJsonArray_QJsonArray, fromVariantList)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *list__param = NULL;
	zval list_;

	ZVAL_UNDEF(&list_);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_ARRAY(list_)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &list__param);
	zephir_get_arrval(&list_, list__param);
	RETURN_MM_LONG(phpqt_qjsonarray_from_variant_list(&list_));
}

PHP_METHOD(Qt_Core_QJsonArray_QJsonArray, toVariantList)
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
	phpqt_qjsonarray_to_variant_list(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QJsonArray_QJsonArray, size)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qjsonarray_size(&_0));
}

PHP_METHOD(Qt_Core_QJsonArray_QJsonArray, count)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qjsonarray_count(&_0));
}

PHP_METHOD(Qt_Core_QJsonArray_QJsonArray, isEmpty)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qjsonarray_is_empty(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QJsonArray_QJsonArray, at)
{
	zval *handle_param = NULL, *i_param = NULL, _0, _1;
	zend_long handle, i;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(i)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &i_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, i);
	RETURN_LONG(phpqt_qjsonarray_at(&_0, &_1));
}

PHP_METHOD(Qt_Core_QJsonArray_QJsonArray, first)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qjsonarray_first(&_0));
}

PHP_METHOD(Qt_Core_QJsonArray_QJsonArray, last)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qjsonarray_last(&_0));
}

PHP_METHOD(Qt_Core_QJsonArray_QJsonArray, prepend)
{
	zval *handle_param = NULL, *value_param = NULL, _0, _1;
	zend_long handle, value;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(value)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &value_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, value);
	phpqt_qjsonarray_prepend(&_0, &_1);
}

PHP_METHOD(Qt_Core_QJsonArray_QJsonArray, append)
{
	zval *handle_param = NULL, *value_param = NULL, _0, _1;
	zend_long handle, value;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(value)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &value_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, value);
	phpqt_qjsonarray_append(&_0, &_1);
}

PHP_METHOD(Qt_Core_QJsonArray_QJsonArray, removeAt)
{
	zval *handle_param = NULL, *i_param = NULL, _0, _1;
	zend_long handle, i;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(i)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &i_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, i);
	phpqt_qjsonarray_remove_at(&_0, &_1);
}

PHP_METHOD(Qt_Core_QJsonArray_QJsonArray, takeAt)
{
	zval *handle_param = NULL, *i_param = NULL, _0, _1;
	zend_long handle, i;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(i)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &i_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, i);
	RETURN_LONG(phpqt_qjsonarray_take_at(&_0, &_1));
}

PHP_METHOD(Qt_Core_QJsonArray_QJsonArray, removeFirst)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qjsonarray_remove_first(&_0);
}

PHP_METHOD(Qt_Core_QJsonArray_QJsonArray, removeLast)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qjsonarray_remove_last(&_0);
}

PHP_METHOD(Qt_Core_QJsonArray_QJsonArray, insert)
{
	zval *handle_param = NULL, *i_param = NULL, *value_param = NULL, _0, _1, _2;
	zend_long handle, i, value;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(i)
		Z_PARAM_LONG(value)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &i_param, &value_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, i);
	ZVAL_LONG(&_2, value);
	phpqt_qjsonarray_insert(&_0, &_1, &_2);
}

PHP_METHOD(Qt_Core_QJsonArray_QJsonArray, replace)
{
	zval *handle_param = NULL, *i_param = NULL, *value_param = NULL, _0, _1, _2;
	zend_long handle, i, value;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(i)
		Z_PARAM_LONG(value)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &i_param, &value_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, i);
	ZVAL_LONG(&_2, value);
	phpqt_qjsonarray_replace(&_0, &_1, &_2);
}

PHP_METHOD(Qt_Core_QJsonArray_QJsonArray, contains)
{
	zval *handle_param = NULL, *element_param = NULL, _0, _1;
	zend_long handle, element, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(element)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &element_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, element);
	r = phpqt_qjsonarray_contains(&_0, &_1);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QJsonArray_QJsonArray, swap)
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
	phpqt_qjsonarray_swap(&_0, &_1);
}

PHP_METHOD(Qt_Core_QJsonArray_QJsonArray, push_back)
{
	zval *handle_param = NULL, *t_param = NULL, _0, _1;
	zend_long handle, t;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(t)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &t_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, t);
	phpqt_qjsonarray_push_back(&_0, &_1);
}

PHP_METHOD(Qt_Core_QJsonArray_QJsonArray, push_front)
{
	zval *handle_param = NULL, *t_param = NULL, _0, _1;
	zend_long handle, t;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(t)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &t_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, t);
	phpqt_qjsonarray_push_front(&_0, &_1);
}

PHP_METHOD(Qt_Core_QJsonArray_QJsonArray, pop_front)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qjsonarray_pop_front(&_0);
}

PHP_METHOD(Qt_Core_QJsonArray_QJsonArray, pop_back)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qjsonarray_pop_back(&_0);
}

PHP_METHOD(Qt_Core_QJsonArray_QJsonArray, empty_)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qjsonarray_empty(&_0);
	RETURN_BOOL(r == 1);
}

