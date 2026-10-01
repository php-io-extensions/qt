
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
#include "src/network-qhttpheaders.h"
#include "kernel/object.h"
#include "kernel/operators.h"
#include "kernel/memory.h"
#include "kernel/string.h"


ZEPHIR_INIT_CLASS(Qt_Network_QHttpHeaders_QHttpHeaders)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Network\\QHttpHeaders, QHttpHeaders, qt, network_qhttpheaders_qhttpheaders, qt_network_qhttpheaders_qhttpheaders_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Network_QHttpHeaders_QHttpHeaders, staticMetaObject)
{

	RETURN_LONG(phpqt_qhttpheaders_static_meta_object());
}

PHP_METHOD(Qt_Network_QHttpHeaders_QHttpHeaders, qt_check_for_QGADGET_macro)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qhttpheaders_qt_check_for__q_g_a_d_g_e_t_macro(&_0);
}

PHP_METHOD(Qt_Network_QHttpHeaders_QHttpHeaders, new_)
{

	RETURN_LONG(phpqt_qhttpheaders_new());
}

PHP_METHOD(Qt_Network_QHttpHeaders_QHttpHeaders, newQHttpHeaders)
{
	zval *other_param = NULL, _0;
	zend_long other;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(other)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &other_param);
	ZVAL_LONG(&_0, other);
	RETURN_LONG(phpqt_qhttpheaders_new_q_http_headers(&_0));
}

PHP_METHOD(Qt_Network_QHttpHeaders_QHttpHeaders, swap)
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
	phpqt_qhttpheaders_swap(&_0, &_1);
}

PHP_METHOD(Qt_Network_QHttpHeaders_QHttpHeaders, append)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval name, value;
	zval *handle_param = NULL, *name_param = NULL, *value_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&name);
	ZVAL_UNDEF(&value);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(name)
		Z_PARAM_STR(value)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 3, 0, &handle_param, &name_param, &value_param);
	zephir_get_strval(&name, name_param);
	zephir_get_strval(&value, value_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qhttpheaders_append(&_0, &name, &value);
	RETURN_MM_BOOL(r == 1);
}

PHP_METHOD(Qt_Network_QHttpHeaders_QHttpHeaders, appendQHttpHeadersWellKnownHeaderQAnyStringView)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval value;
	zval *handle_param = NULL, *name_param = NULL, *value_param = NULL, _0, _1;
	zend_long handle, name, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&value);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(name)
		Z_PARAM_STR(value)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 3, 0, &handle_param, &name_param, &value_param);
	zephir_get_strval(&value, value_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, name);
	r = phpqt_qhttpheaders_append_q_http_headers_well_known_header_q_any_string_view(&_0, &_1, &value);
	RETURN_MM_BOOL(r == 1);
}

PHP_METHOD(Qt_Network_QHttpHeaders_QHttpHeaders, insert)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval name, value;
	zval *handle_param = NULL, *i_param = NULL, *name_param = NULL, *value_param = NULL, _0, _1;
	zend_long handle, i, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&name);
	ZVAL_UNDEF(&value);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(i)
		Z_PARAM_STR(name)
		Z_PARAM_STR(value)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 4, 0, &handle_param, &i_param, &name_param, &value_param);
	zephir_get_strval(&name, name_param);
	zephir_get_strval(&value, value_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, i);
	r = phpqt_qhttpheaders_insert(&_0, &_1, &name, &value);
	RETURN_MM_BOOL(r == 1);
}

PHP_METHOD(Qt_Network_QHttpHeaders_QHttpHeaders, insertQsizetypeQHttpHeadersWellKnownHeaderQAnyStringView)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval value;
	zval *handle_param = NULL, *i_param = NULL, *name_param = NULL, *value_param = NULL, _0, _1, _2;
	zend_long handle, i, name, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&value);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(i)
		Z_PARAM_LONG(name)
		Z_PARAM_STR(value)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 4, 0, &handle_param, &i_param, &name_param, &value_param);
	zephir_get_strval(&value, value_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, i);
	ZVAL_LONG(&_2, name);
	r = phpqt_qhttpheaders_insert_qsizetype_q_http_headers_well_known_header_q_any_string_view(&_0, &_1, &_2, &value);
	RETURN_MM_BOOL(r == 1);
}

PHP_METHOD(Qt_Network_QHttpHeaders_QHttpHeaders, replace)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval name, newValue;
	zval *handle_param = NULL, *i_param = NULL, *name_param = NULL, *newValue_param = NULL, _0, _1;
	zend_long handle, i, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&name);
	ZVAL_UNDEF(&newValue);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(i)
		Z_PARAM_STR(name)
		Z_PARAM_STR(newValue)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 4, 0, &handle_param, &i_param, &name_param, &newValue_param);
	zephir_get_strval(&name, name_param);
	zephir_get_strval(&newValue, newValue_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, i);
	r = phpqt_qhttpheaders_replace(&_0, &_1, &name, &newValue);
	RETURN_MM_BOOL(r == 1);
}

PHP_METHOD(Qt_Network_QHttpHeaders_QHttpHeaders, replaceQsizetypeQHttpHeadersWellKnownHeaderQAnyStringView)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval newValue;
	zval *handle_param = NULL, *i_param = NULL, *name_param = NULL, *newValue_param = NULL, _0, _1, _2;
	zend_long handle, i, name, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&newValue);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(i)
		Z_PARAM_LONG(name)
		Z_PARAM_STR(newValue)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 4, 0, &handle_param, &i_param, &name_param, &newValue_param);
	zephir_get_strval(&newValue, newValue_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, i);
	ZVAL_LONG(&_2, name);
	r = phpqt_qhttpheaders_replace_qsizetype_q_http_headers_well_known_header_q_any_string_view(&_0, &_1, &_2, &newValue);
	RETURN_MM_BOOL(r == 1);
}

PHP_METHOD(Qt_Network_QHttpHeaders_QHttpHeaders, replaceOrAppend)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval name, newValue;
	zval *handle_param = NULL, *name_param = NULL, *newValue_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&name);
	ZVAL_UNDEF(&newValue);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(name)
		Z_PARAM_STR(newValue)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 3, 0, &handle_param, &name_param, &newValue_param);
	zephir_get_strval(&name, name_param);
	zephir_get_strval(&newValue, newValue_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qhttpheaders_replace_or_append(&_0, &name, &newValue);
	RETURN_MM_BOOL(r == 1);
}

PHP_METHOD(Qt_Network_QHttpHeaders_QHttpHeaders, replaceOrAppendQHttpHeadersWellKnownHeaderQAnyStringView)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval newValue;
	zval *handle_param = NULL, *name_param = NULL, *newValue_param = NULL, _0, _1;
	zend_long handle, name, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&newValue);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(name)
		Z_PARAM_STR(newValue)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 3, 0, &handle_param, &name_param, &newValue_param);
	zephir_get_strval(&newValue, newValue_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, name);
	r = phpqt_qhttpheaders_replace_or_append_q_http_headers_well_known_header_q_any_string_view(&_0, &_1, &newValue);
	RETURN_MM_BOOL(r == 1);
}

PHP_METHOD(Qt_Network_QHttpHeaders_QHttpHeaders, contains)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval name;
	zval *handle_param = NULL, *name_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&name);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(name)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &name_param);
	zephir_get_strval(&name, name_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qhttpheaders_contains(&_0, &name);
	RETURN_MM_BOOL(r == 1);
}

PHP_METHOD(Qt_Network_QHttpHeaders_QHttpHeaders, containsQHttpHeadersWellKnownHeader)
{
	zval *handle_param = NULL, *name_param = NULL, _0, _1;
	zend_long handle, name, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(name)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &name_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, name);
	r = phpqt_qhttpheaders_contains_q_http_headers_well_known_header(&_0, &_1);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Network_QHttpHeaders_QHttpHeaders, clear)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qhttpheaders_clear(&_0);
}

PHP_METHOD(Qt_Network_QHttpHeaders_QHttpHeaders, removeAll)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval name;
	zval *handle_param = NULL, *name_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&name);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(name)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &name_param);
	zephir_get_strval(&name, name_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qhttpheaders_remove_all(&_0, &name);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_Network_QHttpHeaders_QHttpHeaders, removeAllQHttpHeadersWellKnownHeader)
{
	zval *handle_param = NULL, *name_param = NULL, _0, _1;
	zend_long handle, name;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(name)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &name_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, name);
	phpqt_qhttpheaders_remove_all_q_http_headers_well_known_header(&_0, &_1);
}

PHP_METHOD(Qt_Network_QHttpHeaders_QHttpHeaders, removeAt)
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
	phpqt_qhttpheaders_remove_at(&_0, &_1);
}

PHP_METHOD(Qt_Network_QHttpHeaders_QHttpHeaders, value)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval name, defaultValue;
	zval *handle_param = NULL, *name_param = NULL, *defaultValue_param = NULL, result, _0;
	zend_long handle;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&name);
	ZVAL_UNDEF(&defaultValue);
	ZEND_PARSE_PARAMETERS_START(2, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(name)
		Z_PARAM_OPTIONAL
		Z_PARAM_STR(defaultValue)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 1, &handle_param, &name_param, &defaultValue_param);
	zephir_get_strval(&name, name_param);
	if (!defaultValue_param) {
		ZEPHIR_INIT_VAR(&defaultValue);
		ZVAL_STRING(&defaultValue, "");
	} else {
		zephir_get_strval(&defaultValue, defaultValue_param);
	}
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	phpqt_qhttpheaders_value(&result, &_0, &name, &defaultValue);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Network_QHttpHeaders_QHttpHeaders, valueQHttpHeadersWellKnownHeaderQByteArrayView)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval defaultValue;
	zval *handle_param = NULL, *name_param = NULL, *defaultValue_param = NULL, result, _0, _1;
	zend_long handle, name;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&defaultValue);
	ZEND_PARSE_PARAMETERS_START(2, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(name)
		Z_PARAM_OPTIONAL
		Z_PARAM_STR(defaultValue)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 1, &handle_param, &name_param, &defaultValue_param);
	if (!defaultValue_param) {
		ZEPHIR_INIT_VAR(&defaultValue);
		ZVAL_STRING(&defaultValue, "");
	} else {
		zephir_get_strval(&defaultValue, defaultValue_param);
	}
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, name);
	phpqt_qhttpheaders_value_q_http_headers_well_known_header_q_byte_array_view(&result, &_0, &_1, &defaultValue);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Network_QHttpHeaders_QHttpHeaders, values)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval name;
	zval *handle_param = NULL, *name_param = NULL, result, _0;
	zend_long handle;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&name);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(name)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &name_param);
	zephir_get_strval(&name, name_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	phpqt_qhttpheaders_values(&result, &_0, &name);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Network_QHttpHeaders_QHttpHeaders, valuesQHttpHeadersWellKnownHeader)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, *name_param = NULL, result, _0, _1;
	zend_long handle, name;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(name)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &name_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, name);
	phpqt_qhttpheaders_values_q_http_headers_well_known_header(&result, &_0, &_1);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Network_QHttpHeaders_QHttpHeaders, valueAt)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, *i_param = NULL, result, _0, _1;
	zend_long handle, i;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(i)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &i_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, i);
	phpqt_qhttpheaders_value_at(&result, &_0, &_1);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Network_QHttpHeaders_QHttpHeaders, nameAt)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, *i_param = NULL, result, _0, _1;
	zend_long handle, i;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(i)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &i_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, i);
	phpqt_qhttpheaders_name_at(&result, &_0, &_1);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Network_QHttpHeaders_QHttpHeaders, combinedValue)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval name;
	zval *handle_param = NULL, *name_param = NULL, result, _0;
	zend_long handle;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&name);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(name)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &name_param);
	zephir_get_strval(&name, name_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	phpqt_qhttpheaders_combined_value(&result, &_0, &name);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Network_QHttpHeaders_QHttpHeaders, combinedValueQHttpHeadersWellKnownHeader)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, *name_param = NULL, result, _0, _1;
	zend_long handle, name;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(name)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &name_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, name);
	phpqt_qhttpheaders_combined_value_q_http_headers_well_known_header(&result, &_0, &_1);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Network_QHttpHeaders_QHttpHeaders, size)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qhttpheaders_size(&_0));
}

PHP_METHOD(Qt_Network_QHttpHeaders_QHttpHeaders, reserve)
{
	zval *handle_param = NULL, *size_param = NULL, _0, _1;
	zend_long handle, size;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(size)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &size_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, size);
	phpqt_qhttpheaders_reserve(&_0, &_1);
}

PHP_METHOD(Qt_Network_QHttpHeaders_QHttpHeaders, isEmpty)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qhttpheaders_is_empty(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Network_QHttpHeaders_QHttpHeaders, wellKnownHeaderName)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *name_param = NULL, result, _0;
	zend_long name;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(name)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &name_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, name);
	phpqt_qhttpheaders_well_known_header_name(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Network_QHttpHeaders_QHttpHeaders, fromListOfPairs)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *headers_param = NULL;
	zval headers;

	ZVAL_UNDEF(&headers);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_ARRAY(headers)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &headers_param);
	zephir_get_arrval(&headers, headers_param);
	RETURN_MM_LONG(phpqt_qhttpheaders_from_list_of_pairs(&headers));
}

PHP_METHOD(Qt_Network_QHttpHeaders_QHttpHeaders, fromMultiMap)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *headers_param = NULL;
	zval headers;

	ZVAL_UNDEF(&headers);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_ARRAY(headers)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &headers_param);
	zephir_get_arrval(&headers, headers_param);
	RETURN_MM_LONG(phpqt_qhttpheaders_from_multi_map(&headers));
}

PHP_METHOD(Qt_Network_QHttpHeaders_QHttpHeaders, fromMultiHash)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *headers_param = NULL;
	zval headers;

	ZVAL_UNDEF(&headers);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_ARRAY(headers)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &headers_param);
	zephir_get_arrval(&headers, headers_param);
	RETURN_MM_LONG(phpqt_qhttpheaders_from_multi_hash(&headers));
}

PHP_METHOD(Qt_Network_QHttpHeaders_QHttpHeaders, toListOfPairs)
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
	phpqt_qhttpheaders_to_list_of_pairs(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Network_QHttpHeaders_QHttpHeaders, toMultiMap)
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
	phpqt_qhttpheaders_to_multi_map(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Network_QHttpHeaders_QHttpHeaders, toMultiHash)
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
	phpqt_qhttpheaders_to_multi_hash(&result, &_0);
	RETURN_CCTOR(&result);
}

