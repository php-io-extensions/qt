
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
#include "src/core-qbytearraymatcher.h"
#include "kernel/object.h"
#include "kernel/operators.h"
#include "kernel/memory.h"
#include "kernel/string.h"


ZEPHIR_INIT_CLASS(Qt_Core_QByteArrayMatcher_QByteArrayMatcher)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Core\\QByteArrayMatcher, QByteArrayMatcher, qt, core_qbytearraymatcher_qbytearraymatcher, qt_core_qbytearraymatcher_qbytearraymatcher_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Core_QByteArrayMatcher_QByteArrayMatcher, new_)
{

	RETURN_LONG(phpqt_qbytearraymatcher_new());
}

PHP_METHOD(Qt_Core_QByteArrayMatcher_QByteArrayMatcher, newQByteArray)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *pattern_param = NULL;
	zval pattern;

	ZVAL_UNDEF(&pattern);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_STR(pattern)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &pattern_param);
	zephir_get_strval(&pattern, pattern_param);
	RETURN_MM_LONG(phpqt_qbytearraymatcher_new_q_byte_array(&pattern));
}

PHP_METHOD(Qt_Core_QByteArrayMatcher_QByteArrayMatcher, newQByteArrayView)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *pattern_param = NULL;
	zval pattern;

	ZVAL_UNDEF(&pattern);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_STR(pattern)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &pattern_param);
	zephir_get_strval(&pattern, pattern_param);
	RETURN_MM_LONG(phpqt_qbytearraymatcher_new_q_byte_array_view(&pattern));
}

PHP_METHOD(Qt_Core_QByteArrayMatcher_QByteArrayMatcher, newCharQsizetype)
{
	zend_long length;
	zval *pattern = NULL, pattern_sub, *length_param = NULL, _0;

	ZVAL_UNDEF(&pattern_sub);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_ZVAL(pattern)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(length)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 1, &pattern, &length_param);
	if (!length_param) {
		length = -1;
	} else {
		}
	ZVAL_LONG(&_0, length);
	RETURN_LONG(phpqt_qbytearraymatcher_new_char_qsizetype(pattern, &_0));
}

PHP_METHOD(Qt_Core_QByteArrayMatcher_QByteArrayMatcher, newQByteArrayMatcher)
{
	zval *other_param = NULL, _0;
	zend_long other;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(other)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &other_param);
	ZVAL_LONG(&_0, other);
	RETURN_LONG(phpqt_qbytearraymatcher_new_q_byte_array_matcher(&_0));
}

PHP_METHOD(Qt_Core_QByteArrayMatcher_QByteArrayMatcher, setPattern)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval pattern;
	zval *handle_param = NULL, *pattern_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&pattern);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(pattern)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &pattern_param);
	zephir_get_strval(&pattern, pattern_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qbytearraymatcher_set_pattern(&_0, &pattern);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_Core_QByteArrayMatcher_QByteArrayMatcher, indexIn)
{
	zval *handle_param = NULL, *str = NULL, str_sub, *len_param = NULL, *from_param = NULL, _0, _1, _2;
	zend_long handle, len, from;

	ZVAL_UNDEF(&str_sub);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(str)
		Z_PARAM_LONG(len)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(from)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 1, &handle_param, &str, &len_param, &from_param);
	if (!from_param) {
		from = 0;
	} else {
		}
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, len);
	ZVAL_LONG(&_2, from);
	RETURN_LONG(phpqt_qbytearraymatcher_index_in(&_0, str, &_1, &_2));
}

PHP_METHOD(Qt_Core_QByteArrayMatcher_QByteArrayMatcher, indexInQByteArrayViewQsizetype)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval data;
	zval *handle_param = NULL, *data_param = NULL, *from_param = NULL, _0, _1;
	zend_long handle, from;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&data);
	ZEND_PARSE_PARAMETERS_START(2, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(data)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(from)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 1, &handle_param, &data_param, &from_param);
	zephir_get_strval(&data, data_param);
	if (!from_param) {
		from = 0;
	} else {
		}
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, from);
	RETURN_MM_LONG(phpqt_qbytearraymatcher_index_in_q_byte_array_view_qsizetype(&_0, &data, &_1));
}

PHP_METHOD(Qt_Core_QByteArrayMatcher_QByteArrayMatcher, pattern)
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
	phpqt_qbytearraymatcher_pattern(&result, &_0);
	RETURN_CCTOR(&result);
}

