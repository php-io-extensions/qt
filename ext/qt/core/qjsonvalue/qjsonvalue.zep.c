
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
#include "src/core-qjsonvalue.h"
#include "kernel/memory.h"
#include "kernel/object.h"
#include "kernel/operators.h"
#include "kernel/string.h"


ZEPHIR_INIT_CLASS(Qt_Core_QJsonValue_QJsonValue)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Core\\QJsonValue, QJsonValue, qt, core_qjsonvalue_qjsonvalue, qt_core_qjsonvalue_qjsonvalue_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Core_QJsonValue_QJsonValue, new_)
{
	zval *arg0 = NULL, arg0_sub, __$null;

	ZVAL_UNDEF(&arg0_sub);
	ZVAL_NULL(&__$null);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(0, 1)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(arg0)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(0, 1, &arg0);
	if (!arg0) {
		arg0 = &arg0_sub;
		arg0 = &__$null;
	}
	RETURN_LONG(phpqt_qjsonvalue_new(arg0));
}

PHP_METHOD(Qt_Core_QJsonValue_QJsonValue, newBool)
{
	zval *b_param = NULL, _0;
	zend_bool b;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_BOOL(b)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &b_param);
	ZVAL_BOOL(&_0, (b ? 1 : 0));
	RETURN_LONG(phpqt_qjsonvalue_new_bool(&_0));
}

PHP_METHOD(Qt_Core_QJsonValue_QJsonValue, newDouble)
{
	zval *n_param = NULL, _0;
	double n;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_ZVAL(n)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &n_param);
	n = zephir_get_doubleval(n_param);
	ZVAL_DOUBLE(&_0, n);
	RETURN_LONG(phpqt_qjsonvalue_new_double(&_0));
}

PHP_METHOD(Qt_Core_QJsonValue_QJsonValue, newInt)
{
	zval *n_param = NULL, _0;
	zend_long n;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(n)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &n_param);
	ZVAL_LONG(&_0, n);
	RETURN_LONG(phpqt_qjsonvalue_new_int(&_0));
}

PHP_METHOD(Qt_Core_QJsonValue_QJsonValue, newQint64)
{
	zval *v_param = NULL, _0;
	zend_long v;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(v)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &v_param);
	ZVAL_LONG(&_0, v);
	RETURN_LONG(phpqt_qjsonvalue_new_qint64(&_0));
}

PHP_METHOD(Qt_Core_QJsonValue_QJsonValue, newQString)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *s_param = NULL;
	zval s;

	ZVAL_UNDEF(&s);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_STR(s)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &s_param);
	zephir_get_strval(&s, s_param);
	RETURN_MM_LONG(phpqt_qjsonvalue_new_q_string(&s));
}

PHP_METHOD(Qt_Core_QJsonValue_QJsonValue, newQLatin1StringView)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *s_param = NULL;
	zval s;

	ZVAL_UNDEF(&s);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_STR(s)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &s_param);
	zephir_get_strval(&s, s_param);
	RETURN_MM_LONG(phpqt_qjsonvalue_new_q_latin1_string_view(&s));
}

PHP_METHOD(Qt_Core_QJsonValue_QJsonValue, newChar)
{
	zval *s = NULL, s_sub;

	ZVAL_UNDEF(&s_sub);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_ZVAL(s)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &s);
	RETURN_LONG(phpqt_qjsonvalue_new_char(s));
}

PHP_METHOD(Qt_Core_QJsonValue_QJsonValue, newQJsonArray)
{
	zval *a_param = NULL, _0;
	zend_long a;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(a)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &a_param);
	ZVAL_LONG(&_0, a);
	RETURN_LONG(phpqt_qjsonvalue_new_q_json_array(&_0));
}

PHP_METHOD(Qt_Core_QJsonValue_QJsonValue, newQJsonObject)
{
	zval *o_param = NULL, _0;
	zend_long o;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(o)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &o_param);
	ZVAL_LONG(&_0, o);
	RETURN_LONG(phpqt_qjsonvalue_new_q_json_object(&_0));
}

PHP_METHOD(Qt_Core_QJsonValue_QJsonValue, newQJsonValue)
{
	zval *other_param = NULL, _0;
	zend_long other;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(other)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &other_param);
	ZVAL_LONG(&_0, other);
	RETURN_LONG(phpqt_qjsonvalue_new_q_json_value(&_0));
}

PHP_METHOD(Qt_Core_QJsonValue_QJsonValue, swap)
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
	phpqt_qjsonvalue_swap(&_0, &_1);
}

PHP_METHOD(Qt_Core_QJsonValue_QJsonValue, fromVariant)
{
	zval *variant = NULL, variant_sub;

	ZVAL_UNDEF(&variant_sub);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_ZVAL(variant)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &variant);
	RETURN_LONG(phpqt_qjsonvalue_from_variant(variant));
}

PHP_METHOD(Qt_Core_QJsonValue_QJsonValue, toVariant)
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
	phpqt_qjsonvalue_to_variant(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QJsonValue_QJsonValue, type)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qjsonvalue_type(&_0));
}

PHP_METHOD(Qt_Core_QJsonValue_QJsonValue, isNull)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qjsonvalue_is_null(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QJsonValue_QJsonValue, isBool)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qjsonvalue_is_bool(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QJsonValue_QJsonValue, isDouble)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qjsonvalue_is_double(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QJsonValue_QJsonValue, isString)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qjsonvalue_is_string(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QJsonValue_QJsonValue, isArray)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qjsonvalue_is_array(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QJsonValue_QJsonValue, isObject)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qjsonvalue_is_object(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QJsonValue_QJsonValue, isUndefined)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qjsonvalue_is_undefined(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QJsonValue_QJsonValue, toBool)
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
	r = phpqt_qjsonvalue_to_bool(&_0, &_1);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QJsonValue_QJsonValue, toInt)
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
	RETURN_LONG(phpqt_qjsonvalue_to_int(&_0, &_1));
}

PHP_METHOD(Qt_Core_QJsonValue_QJsonValue, toInteger)
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
	RETURN_LONG(phpqt_qjsonvalue_to_integer(&_0, &_1));
}

PHP_METHOD(Qt_Core_QJsonValue_QJsonValue, toDouble)
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
	RETURN_DOUBLE(phpqt_qjsonvalue_to_double(&_0, &_1));
}

PHP_METHOD(Qt_Core_QJsonValue_QJsonValue, toString)
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
	phpqt_qjsonvalue_to_string(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QJsonValue_QJsonValue, toStringQString)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval defaultValue;
	zval *handle_param = NULL, *defaultValue_param = NULL, result, _0;
	zend_long handle;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&defaultValue);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(defaultValue)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &defaultValue_param);
	zephir_get_strval(&defaultValue, defaultValue_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	phpqt_qjsonvalue_to_string_q_string(&result, &_0, &defaultValue);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QJsonValue_QJsonValue, toArray)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qjsonvalue_to_array(&_0));
}

PHP_METHOD(Qt_Core_QJsonValue_QJsonValue, toArrayQJsonArray)
{
	zval *handle_param = NULL, *defaultValue_param = NULL, _0, _1;
	zend_long handle, defaultValue;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(defaultValue)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &defaultValue_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, defaultValue);
	RETURN_LONG(phpqt_qjsonvalue_to_array_q_json_array(&_0, &_1));
}

PHP_METHOD(Qt_Core_QJsonValue_QJsonValue, toObject)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qjsonvalue_to_object(&_0));
}

PHP_METHOD(Qt_Core_QJsonValue_QJsonValue, toObjectQJsonObject)
{
	zval *handle_param = NULL, *defaultValue_param = NULL, _0, _1;
	zend_long handle, defaultValue;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(defaultValue)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &defaultValue_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, defaultValue);
	RETURN_LONG(phpqt_qjsonvalue_to_object_q_json_object(&_0, &_1));
}

