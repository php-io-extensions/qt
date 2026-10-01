
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
#include "src/core-qjsonvalueconstref.h"
#include "kernel/operators.h"
#include "kernel/memory.h"
#include "kernel/object.h"
#include "kernel/string.h"


ZEPHIR_INIT_CLASS(Qt_Core_QJsonValueConstRef_QJsonValueConstRef)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Core\\QJsonValueConstRef, QJsonValueConstRef, qt, core_qjsonvalueconstref_qjsonvalueconstref, qt_core_qjsonvalueconstref_qjsonvalueconstref_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Core_QJsonValueConstRef_QJsonValueConstRef, new_)
{
	zval *arg0_param = NULL, _0;
	zend_long arg0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(arg0)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &arg0_param);
	ZVAL_LONG(&_0, arg0);
	RETURN_LONG(phpqt_qjsonvalueconstref_new(&_0));
}

PHP_METHOD(Qt_Core_QJsonValueConstRef_QJsonValueConstRef, toVariant)
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
	phpqt_qjsonvalueconstref_to_variant(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QJsonValueConstRef_QJsonValueConstRef, type)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qjsonvalueconstref_type(&_0));
}

PHP_METHOD(Qt_Core_QJsonValueConstRef_QJsonValueConstRef, isNull)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qjsonvalueconstref_is_null(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QJsonValueConstRef_QJsonValueConstRef, isBool)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qjsonvalueconstref_is_bool(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QJsonValueConstRef_QJsonValueConstRef, isDouble)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qjsonvalueconstref_is_double(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QJsonValueConstRef_QJsonValueConstRef, isString)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qjsonvalueconstref_is_string(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QJsonValueConstRef_QJsonValueConstRef, isArray)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qjsonvalueconstref_is_array(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QJsonValueConstRef_QJsonValueConstRef, isObject)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qjsonvalueconstref_is_object(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QJsonValueConstRef_QJsonValueConstRef, isUndefined)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qjsonvalueconstref_is_undefined(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QJsonValueConstRef_QJsonValueConstRef, toBool)
{
	zend_bool defaultValue;
	zval *handle_param = NULL, *defaultValue_param = NULL, _0, _1;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_OPTIONAL
		Z_PARAM_BOOL(defaultValue)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 1, &handle_param, &defaultValue_param);
	if (!defaultValue_param) {
		defaultValue = 0;
	} else {
		}
	ZVAL_LONG(&_0, handle);
	ZVAL_BOOL(&_1, (defaultValue ? 1 : 0));
	r = phpqt_qjsonvalueconstref_to_bool(&_0, &_1);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QJsonValueConstRef_QJsonValueConstRef, toInt)
{
	zval *handle_param = NULL, *defaultValue_param = NULL, _0, _1;
	zend_long handle, defaultValue;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(defaultValue)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 1, &handle_param, &defaultValue_param);
	if (!defaultValue_param) {
		defaultValue = 0;
	} else {
		}
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, defaultValue);
	RETURN_LONG(phpqt_qjsonvalueconstref_to_int(&_0, &_1));
}

PHP_METHOD(Qt_Core_QJsonValueConstRef_QJsonValueConstRef, toInteger)
{
	zval *handle_param = NULL, *defaultValue_param = NULL, _0, _1;
	zend_long handle, defaultValue;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(defaultValue)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 1, &handle_param, &defaultValue_param);
	if (!defaultValue_param) {
		defaultValue = 0;
	} else {
		}
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, defaultValue);
	RETURN_LONG(phpqt_qjsonvalueconstref_to_integer(&_0, &_1));
}

PHP_METHOD(Qt_Core_QJsonValueConstRef_QJsonValueConstRef, toDouble)
{
	double defaultValue;
	zval *handle_param = NULL, *defaultValue_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL(defaultValue)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 1, &handle_param, &defaultValue_param);
	if (!defaultValue_param) {
		defaultValue = 0.0;
	} else {
		defaultValue = zephir_get_doubleval(defaultValue_param);
	}
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, defaultValue);
	RETURN_DOUBLE(phpqt_qjsonvalueconstref_to_double(&_0, &_1));
}

PHP_METHOD(Qt_Core_QJsonValueConstRef_QJsonValueConstRef, toString)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval defaultValue;
	zval *handle_param = NULL, *defaultValue_param = NULL, result, _0;
	zend_long handle;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&defaultValue);
	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_OPTIONAL
		Z_PARAM_STR(defaultValue)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 1, &handle_param, &defaultValue_param);
	if (!defaultValue_param) {
		ZEPHIR_INIT_VAR(&defaultValue);
		ZVAL_STRING(&defaultValue, "");
	} else {
		zephir_get_strval(&defaultValue, defaultValue_param);
	}
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	phpqt_qjsonvalueconstref_to_string(&result, &_0, &defaultValue);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QJsonValueConstRef_QJsonValueConstRef, toArray)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qjsonvalueconstref_to_array(&_0));
}

PHP_METHOD(Qt_Core_QJsonValueConstRef_QJsonValueConstRef, toObject)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qjsonvalueconstref_to_object(&_0));
}

