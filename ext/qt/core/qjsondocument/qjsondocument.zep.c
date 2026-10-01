
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
#include "src/core-qjsondocument.h"
#include "kernel/object.h"
#include "kernel/operators.h"
#include "kernel/memory.h"
#include "kernel/string.h"


ZEPHIR_INIT_CLASS(Qt_Core_QJsonDocument_QJsonDocument)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Core\\QJsonDocument, QJsonDocument, qt, core_qjsondocument_qjsondocument, qt_core_qjsondocument_qjsondocument_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Core_QJsonDocument_QJsonDocument, BinaryFormatTag)
{

	RETURN_LONG(phpqt_qjsondocument_binary_format_tag());
}

PHP_METHOD(Qt_Core_QJsonDocument_QJsonDocument, new_)
{

	RETURN_LONG(phpqt_qjsondocument_new());
}

PHP_METHOD(Qt_Core_QJsonDocument_QJsonDocument, newQJsonObject)
{
	zval *object__param = NULL, _0;
	zend_long object_;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(object_)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &object__param);
	ZVAL_LONG(&_0, object_);
	RETURN_LONG(phpqt_qjsondocument_new_q_json_object(&_0));
}

PHP_METHOD(Qt_Core_QJsonDocument_QJsonDocument, newQJsonArray)
{
	zval *array__param = NULL, _0;
	zend_long array_;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(array_)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &array__param);
	ZVAL_LONG(&_0, array_);
	RETURN_LONG(phpqt_qjsondocument_new_q_json_array(&_0));
}

PHP_METHOD(Qt_Core_QJsonDocument_QJsonDocument, newQJsonDocument)
{
	zval *other_param = NULL, _0;
	zend_long other;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(other)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &other_param);
	ZVAL_LONG(&_0, other);
	RETURN_LONG(phpqt_qjsondocument_new_q_json_document(&_0));
}

PHP_METHOD(Qt_Core_QJsonDocument_QJsonDocument, swap)
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
	phpqt_qjsondocument_swap(&_0, &_1);
}

PHP_METHOD(Qt_Core_QJsonDocument_QJsonDocument, fromVariant)
{
	zval *variant = NULL, variant_sub;

	ZVAL_UNDEF(&variant_sub);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_ZVAL(variant)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &variant);
	RETURN_LONG(phpqt_qjsondocument_from_variant(variant));
}

PHP_METHOD(Qt_Core_QJsonDocument_QJsonDocument, toVariant)
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
	phpqt_qjsondocument_to_variant(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QJsonDocument_QJsonDocument, fromJson)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long error;
	zval *json_param = NULL, *error_param = NULL, _0;
	zval json;

	ZVAL_UNDEF(&json);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_STR(json)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(error)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 1, &json_param, &error_param);
	zephir_get_strval(&json, json_param);
	if (!error_param) {
		error = 0;
	} else {
		}
	ZVAL_LONG(&_0, error);
	RETURN_MM_LONG(phpqt_qjsondocument_from_json(&json, &_0));
}

PHP_METHOD(Qt_Core_QJsonDocument_QJsonDocument, toJson)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, *format = NULL, format_sub, __$null, result, _0;
	zend_long handle;

	ZVAL_UNDEF(&format_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(format)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 1, &handle_param, &format);
	if (!format) {
		format = &format_sub;
		format = &__$null;
	}
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	phpqt_qjsondocument_to_json(&result, &_0, format);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QJsonDocument_QJsonDocument, isEmpty)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qjsondocument_is_empty(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QJsonDocument_QJsonDocument, isArray)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qjsondocument_is_array(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QJsonDocument_QJsonDocument, isObject)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qjsondocument_is_object(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QJsonDocument_QJsonDocument, object_)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qjsondocument_object(&_0));
}

PHP_METHOD(Qt_Core_QJsonDocument_QJsonDocument, array_)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qjsondocument_array(&_0));
}

PHP_METHOD(Qt_Core_QJsonDocument_QJsonDocument, setObject)
{
	zval *handle_param = NULL, *object__param = NULL, _0, _1;
	zend_long handle, object_;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(object_)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &object__param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, object_);
	phpqt_qjsondocument_set_object(&_0, &_1);
}

PHP_METHOD(Qt_Core_QJsonDocument_QJsonDocument, setArray)
{
	zval *handle_param = NULL, *array__param = NULL, _0, _1;
	zend_long handle, array_;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(array_)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &array__param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, array_);
	phpqt_qjsondocument_set_array(&_0, &_1);
}

PHP_METHOD(Qt_Core_QJsonDocument_QJsonDocument, isNull)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qjsondocument_is_null(&_0);
	RETURN_BOOL(r == 1);
}

