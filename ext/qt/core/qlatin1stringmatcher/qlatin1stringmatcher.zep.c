
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
#include "src/core-qlatin1stringmatcher.h"
#include "kernel/object.h"
#include "kernel/operators.h"
#include "kernel/memory.h"
#include "kernel/string.h"


ZEPHIR_INIT_CLASS(Qt_Core_QLatin1StringMatcher_QLatin1StringMatcher)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Core\\QLatin1StringMatcher, QLatin1StringMatcher, qt, core_qlatin1stringmatcher_qlatin1stringmatcher, qt_core_qlatin1stringmatcher_qlatin1stringmatcher_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Core_QLatin1StringMatcher_QLatin1StringMatcher, new_)
{

	RETURN_LONG(phpqt_qlatin1stringmatcher_new());
}

PHP_METHOD(Qt_Core_QLatin1StringMatcher_QLatin1StringMatcher, newQLatin1StringViewQtCaseSensitivity)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *pattern_param = NULL, *cs = NULL, cs_sub, __$null;
	zval pattern;

	ZVAL_UNDEF(&pattern);
	ZVAL_UNDEF(&cs_sub);
	ZVAL_NULL(&__$null);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_STR(pattern)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(cs)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 1, &pattern_param, &cs);
	zephir_get_strval(&pattern, pattern_param);
	if (!cs) {
		cs = &cs_sub;
		cs = &__$null;
	}
	RETURN_MM_LONG(phpqt_qlatin1stringmatcher_new_q_latin1_string_view_qt_case_sensitivity(&pattern, cs));
}

PHP_METHOD(Qt_Core_QLatin1StringMatcher_QLatin1StringMatcher, setPattern)
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
	phpqt_qlatin1stringmatcher_set_pattern(&_0, &pattern);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_Core_QLatin1StringMatcher_QLatin1StringMatcher, pattern)
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
	phpqt_qlatin1stringmatcher_pattern(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QLatin1StringMatcher_QLatin1StringMatcher, setCaseSensitivity)
{
	zval *handle_param = NULL, *cs_param = NULL, _0, _1;
	zend_long handle, cs;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(cs)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &cs_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, cs);
	phpqt_qlatin1stringmatcher_set_case_sensitivity(&_0, &_1);
}

PHP_METHOD(Qt_Core_QLatin1StringMatcher_QLatin1StringMatcher, caseSensitivity)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qlatin1stringmatcher_case_sensitivity(&_0));
}

PHP_METHOD(Qt_Core_QLatin1StringMatcher_QLatin1StringMatcher, indexIn)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval haystack;
	zval *handle_param = NULL, *haystack_param = NULL, *from_param = NULL, _0, _1;
	zend_long handle, from;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&haystack);
	ZEND_PARSE_PARAMETERS_START(2, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(haystack)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(from)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 1, &handle_param, &haystack_param, &from_param);
	zephir_get_strval(&haystack, haystack_param);
	if (!from_param) {
		from = 0;
	} else {
		}
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, from);
	RETURN_MM_LONG(phpqt_qlatin1stringmatcher_index_in(&_0, &haystack, &_1));
}

PHP_METHOD(Qt_Core_QLatin1StringMatcher_QLatin1StringMatcher, indexInQStringViewQsizetype)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval haystack;
	zval *handle_param = NULL, *haystack_param = NULL, *from_param = NULL, _0, _1;
	zend_long handle, from;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&haystack);
	ZEND_PARSE_PARAMETERS_START(2, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(haystack)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(from)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 1, &handle_param, &haystack_param, &from_param);
	zephir_get_strval(&haystack, haystack_param);
	if (!from_param) {
		from = 0;
	} else {
		}
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, from);
	RETURN_MM_LONG(phpqt_qlatin1stringmatcher_index_in_q_string_view_qsizetype(&_0, &haystack, &_1));
}

