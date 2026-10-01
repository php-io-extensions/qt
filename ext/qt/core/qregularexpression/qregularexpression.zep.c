
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
#include "src/core-qregularexpression.h"
#include "kernel/operators.h"
#include "kernel/memory.h"
#include "kernel/object.h"
#include "kernel/string.h"


ZEPHIR_INIT_CLASS(Qt_Core_QRegularExpression_QRegularExpression)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Core\\QRegularExpression, QRegularExpression, qt, core_qregularexpression_qregularexpression, qt_core_qregularexpression_qregularexpression_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Core_QRegularExpression_QRegularExpression, patternOptions)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qregularexpression_pattern_options(&_0));
}

PHP_METHOD(Qt_Core_QRegularExpression_QRegularExpression, setPatternOptions)
{
	zval *handle_param = NULL, *options_param = NULL, _0, _1;
	zend_long handle, options;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(options)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &options_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, options);
	phpqt_qregularexpression_set_pattern_options(&_0, &_1);
}

PHP_METHOD(Qt_Core_QRegularExpression_QRegularExpression, new_)
{

	RETURN_LONG(phpqt_qregularexpression_new());
}

PHP_METHOD(Qt_Core_QRegularExpression_QRegularExpression, newQStringQRegularExpressionPatternOptions)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *pattern_param = NULL, *options = NULL, options_sub, __$null;
	zval pattern;

	ZVAL_UNDEF(&pattern);
	ZVAL_UNDEF(&options_sub);
	ZVAL_NULL(&__$null);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_STR(pattern)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(options)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 1, &pattern_param, &options);
	zephir_get_strval(&pattern, pattern_param);
	if (!options) {
		options = &options_sub;
		options = &__$null;
	}
	RETURN_MM_LONG(phpqt_qregularexpression_new_q_string_q_regular_expression_pattern_options(&pattern, options));
}

PHP_METHOD(Qt_Core_QRegularExpression_QRegularExpression, newQRegularExpression)
{
	zval *re_param = NULL, _0;
	zend_long re;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(re)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &re_param);
	ZVAL_LONG(&_0, re);
	RETURN_LONG(phpqt_qregularexpression_new_q_regular_expression(&_0));
}

PHP_METHOD(Qt_Core_QRegularExpression_QRegularExpression, swap)
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
	phpqt_qregularexpression_swap(&_0, &_1);
}

PHP_METHOD(Qt_Core_QRegularExpression_QRegularExpression, pattern)
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
	phpqt_qregularexpression_pattern(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QRegularExpression_QRegularExpression, setPattern)
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
	phpqt_qregularexpression_set_pattern(&_0, &pattern);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_Core_QRegularExpression_QRegularExpression, isValid)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qregularexpression_is_valid(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QRegularExpression_QRegularExpression, patternErrorOffset)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qregularexpression_pattern_error_offset(&_0));
}

PHP_METHOD(Qt_Core_QRegularExpression_QRegularExpression, errorString)
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
	phpqt_qregularexpression_error_string(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QRegularExpression_QRegularExpression, captureCount)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qregularexpression_capture_count(&_0));
}

PHP_METHOD(Qt_Core_QRegularExpression_QRegularExpression, namedCaptureGroups)
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
	phpqt_qregularexpression_named_capture_groups(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QRegularExpression_QRegularExpression, match_)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval subject;
	zval *handle_param = NULL, *subject_param = NULL, *offset_param = NULL, *matchType = NULL, matchType_sub, *matchOptions = NULL, matchOptions_sub, __$null, _0, _1;
	zend_long handle, offset;

	ZVAL_UNDEF(&matchType_sub);
	ZVAL_UNDEF(&matchOptions_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&subject);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(2, 5)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(subject)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(offset)
		Z_PARAM_ZVAL_OR_NULL(matchType)
		Z_PARAM_ZVAL_OR_NULL(matchOptions)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 3, &handle_param, &subject_param, &offset_param, &matchType, &matchOptions);
	zephir_get_strval(&subject, subject_param);
	if (!offset_param) {
		offset = 0;
	} else {
		}
	if (!matchType) {
		matchType = &matchType_sub;
		matchType = &__$null;
	}
	if (!matchOptions) {
		matchOptions = &matchOptions_sub;
		matchOptions = &__$null;
	}
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, offset);
	RETURN_MM_LONG(phpqt_qregularexpression_match(&_0, &subject, &_1, matchType, matchOptions));
}

PHP_METHOD(Qt_Core_QRegularExpression_QRegularExpression, matchView)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval subjectView;
	zval *handle_param = NULL, *subjectView_param = NULL, *offset_param = NULL, *matchType = NULL, matchType_sub, *matchOptions = NULL, matchOptions_sub, __$null, _0, _1;
	zend_long handle, offset;

	ZVAL_UNDEF(&matchType_sub);
	ZVAL_UNDEF(&matchOptions_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&subjectView);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(2, 5)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(subjectView)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(offset)
		Z_PARAM_ZVAL_OR_NULL(matchType)
		Z_PARAM_ZVAL_OR_NULL(matchOptions)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 3, &handle_param, &subjectView_param, &offset_param, &matchType, &matchOptions);
	zephir_get_strval(&subjectView, subjectView_param);
	if (!offset_param) {
		offset = 0;
	} else {
		}
	if (!matchType) {
		matchType = &matchType_sub;
		matchType = &__$null;
	}
	if (!matchOptions) {
		matchOptions = &matchOptions_sub;
		matchOptions = &__$null;
	}
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, offset);
	RETURN_MM_LONG(phpqt_qregularexpression_match_view(&_0, &subjectView, &_1, matchType, matchOptions));
}

PHP_METHOD(Qt_Core_QRegularExpression_QRegularExpression, optimize)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qregularexpression_optimize(&_0);
}

PHP_METHOD(Qt_Core_QRegularExpression_QRegularExpression, escape)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *str_param = NULL, result;
	zval str;

	ZVAL_UNDEF(&str);
	ZVAL_UNDEF(&result);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_STR(str)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &str_param);
	zephir_get_strval(&str, str_param);
	ZEPHIR_INIT_VAR(&result);
	phpqt_qregularexpression_escape(&result, &str);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QRegularExpression_QRegularExpression, wildcardToRegularExpression)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *str_param = NULL, *options = NULL, options_sub, __$null, result;
	zval str;

	ZVAL_UNDEF(&str);
	ZVAL_UNDEF(&options_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&result);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_STR(str)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(options)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 1, &str_param, &options);
	zephir_get_strval(&str, str_param);
	if (!options) {
		options = &options_sub;
		options = &__$null;
	}
	ZEPHIR_INIT_VAR(&result);
	phpqt_qregularexpression_wildcard_to_regular_expression(&result, &str, options);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QRegularExpression_QRegularExpression, anchoredPattern)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *expression_param = NULL, result;
	zval expression;

	ZVAL_UNDEF(&expression);
	ZVAL_UNDEF(&result);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_STR(expression)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &expression_param);
	zephir_get_strval(&expression, expression_param);
	ZEPHIR_INIT_VAR(&result);
	phpqt_qregularexpression_anchored_pattern(&result, &expression);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QRegularExpression_QRegularExpression, escapeQStringView)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *str_param = NULL, result;
	zval str;

	ZVAL_UNDEF(&str);
	ZVAL_UNDEF(&result);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_STR(str)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &str_param);
	zephir_get_strval(&str, str_param);
	ZEPHIR_INIT_VAR(&result);
	phpqt_qregularexpression_escape_q_string_view(&result, &str);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QRegularExpression_QRegularExpression, wildcardToRegularExpressionQStringViewQRegularExpressionWildcardConversionOptions)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *str_param = NULL, *options = NULL, options_sub, __$null, result;
	zval str;

	ZVAL_UNDEF(&str);
	ZVAL_UNDEF(&options_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&result);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_STR(str)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(options)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 1, &str_param, &options);
	zephir_get_strval(&str, str_param);
	if (!options) {
		options = &options_sub;
		options = &__$null;
	}
	ZEPHIR_INIT_VAR(&result);
	phpqt_qregularexpression_wildcard_to_regular_expression_q_string_view_q_regular_expression_wildcard_conversion_options(&result, &str, options);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QRegularExpression_QRegularExpression, anchoredPatternQStringView)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *expression_param = NULL, result;
	zval expression;

	ZVAL_UNDEF(&expression);
	ZVAL_UNDEF(&result);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_STR(expression)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &expression_param);
	zephir_get_strval(&expression, expression_param);
	ZEPHIR_INIT_VAR(&result);
	phpqt_qregularexpression_anchored_pattern_q_string_view(&result, &expression);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QRegularExpression_QRegularExpression, fromWildcard)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *pattern_param = NULL, *cs = NULL, cs_sub, *options = NULL, options_sub, __$null;
	zval pattern;

	ZVAL_UNDEF(&pattern);
	ZVAL_UNDEF(&cs_sub);
	ZVAL_UNDEF(&options_sub);
	ZVAL_NULL(&__$null);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(1, 3)
		Z_PARAM_STR(pattern)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(cs)
		Z_PARAM_ZVAL_OR_NULL(options)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 2, &pattern_param, &cs, &options);
	zephir_get_strval(&pattern, pattern_param);
	if (!cs) {
		cs = &cs_sub;
		cs = &__$null;
	}
	if (!options) {
		options = &options_sub;
		options = &__$null;
	}
	RETURN_MM_LONG(phpqt_qregularexpression_from_wildcard(&pattern, cs, options));
}

