
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
#include "src/core-qstringmatcher.h"
#include "kernel/object.h"
#include "kernel/operators.h"
#include "kernel/memory.h"
#include "kernel/string.h"


ZEPHIR_INIT_CLASS(Qt_Core_QStringMatcher_QStringMatcher)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Core\\QStringMatcher, QStringMatcher, qt, core_qstringmatcher_qstringmatcher, qt_core_qstringmatcher_qstringmatcher_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Core_QStringMatcher_QStringMatcher, new_)
{

	RETURN_LONG(phpqt_qstringmatcher_new());
}

PHP_METHOD(Qt_Core_QStringMatcher_QStringMatcher, newQStringQtCaseSensitivity)
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
	RETURN_MM_LONG(phpqt_qstringmatcher_new_q_string_qt_case_sensitivity(&pattern, cs));
}

PHP_METHOD(Qt_Core_QStringMatcher_QStringMatcher, newQCharQsizetypeQtCaseSensitivity)
{
	zend_long len;
	zval *uc = NULL, uc_sub, *len_param = NULL, *cs = NULL, cs_sub, __$null, _0;

	ZVAL_UNDEF(&uc_sub);
	ZVAL_UNDEF(&cs_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(2, 3)
		Z_PARAM_ZVAL(uc)
		Z_PARAM_LONG(len)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(cs)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 1, &uc, &len_param, &cs);
	if (!cs) {
		cs = &cs_sub;
		cs = &__$null;
	}
	ZVAL_LONG(&_0, len);
	RETURN_LONG(phpqt_qstringmatcher_new_q_char_qsizetype_qt_case_sensitivity(uc, &_0, cs));
}

PHP_METHOD(Qt_Core_QStringMatcher_QStringMatcher, newQStringViewQtCaseSensitivity)
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
	RETURN_MM_LONG(phpqt_qstringmatcher_new_q_string_view_qt_case_sensitivity(&pattern, cs));
}

PHP_METHOD(Qt_Core_QStringMatcher_QStringMatcher, newQStringMatcher)
{
	zval *other_param = NULL, _0;
	zend_long other;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(other)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &other_param);
	ZVAL_LONG(&_0, other);
	RETURN_LONG(phpqt_qstringmatcher_new_q_string_matcher(&_0));
}

PHP_METHOD(Qt_Core_QStringMatcher_QStringMatcher, setPattern)
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
	phpqt_qstringmatcher_set_pattern(&_0, &pattern);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_Core_QStringMatcher_QStringMatcher, setCaseSensitivity)
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
	phpqt_qstringmatcher_set_case_sensitivity(&_0, &_1);
}

PHP_METHOD(Qt_Core_QStringMatcher_QStringMatcher, indexIn)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval str;
	zval *handle_param = NULL, *str_param = NULL, *from_param = NULL, _0, _1;
	zend_long handle, from;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&str);
	ZEND_PARSE_PARAMETERS_START(2, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(str)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(from)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 1, &handle_param, &str_param, &from_param);
	zephir_get_strval(&str, str_param);
	if (!from_param) {
		from = 0;
	} else {
		}
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, from);
	RETURN_MM_LONG(phpqt_qstringmatcher_index_in(&_0, &str, &_1));
}

PHP_METHOD(Qt_Core_QStringMatcher_QStringMatcher, indexInQCharQsizetypeQsizetype)
{
	zval *handle_param = NULL, *str = NULL, str_sub, *length_param = NULL, *from_param = NULL, _0, _1, _2;
	zend_long handle, length, from;

	ZVAL_UNDEF(&str_sub);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(str)
		Z_PARAM_LONG(length)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(from)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 1, &handle_param, &str, &length_param, &from_param);
	if (!from_param) {
		from = 0;
	} else {
		}
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, length);
	ZVAL_LONG(&_2, from);
	RETURN_LONG(phpqt_qstringmatcher_index_in_q_char_qsizetype_qsizetype(&_0, str, &_1, &_2));
}

PHP_METHOD(Qt_Core_QStringMatcher_QStringMatcher, indexInQStringViewQsizetype)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval str;
	zval *handle_param = NULL, *str_param = NULL, *from_param = NULL, _0, _1;
	zend_long handle, from;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&str);
	ZEND_PARSE_PARAMETERS_START(2, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(str)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(from)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 1, &handle_param, &str_param, &from_param);
	zephir_get_strval(&str, str_param);
	if (!from_param) {
		from = 0;
	} else {
		}
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, from);
	RETURN_MM_LONG(phpqt_qstringmatcher_index_in_q_string_view_qsizetype(&_0, &str, &_1));
}

PHP_METHOD(Qt_Core_QStringMatcher_QStringMatcher, pattern)
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
	phpqt_qstringmatcher_pattern(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QStringMatcher_QStringMatcher, patternView)
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
	phpqt_qstringmatcher_pattern_view(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QStringMatcher_QStringMatcher, caseSensitivity)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qstringmatcher_case_sensitivity(&_0));
}

