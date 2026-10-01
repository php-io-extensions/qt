
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
#include "src/core-qcollator.h"
#include "kernel/object.h"
#include "kernel/operators.h"
#include "kernel/memory.h"


ZEPHIR_INIT_CLASS(Qt_Core_QCollator_QCollator)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Core\\QCollator, QCollator, qt, core_qcollator_qcollator, qt_core_qcollator_qcollator_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Core_QCollator_QCollator, new_)
{

	RETURN_LONG(phpqt_qcollator_new());
}

PHP_METHOD(Qt_Core_QCollator_QCollator, newQLocale)
{
	zval *locale_param = NULL, _0;
	zend_long locale;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(locale)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &locale_param);
	ZVAL_LONG(&_0, locale);
	RETURN_LONG(phpqt_qcollator_new_q_locale(&_0));
}

PHP_METHOD(Qt_Core_QCollator_QCollator, newQCollator)
{
	zval *arg0_param = NULL, _0;
	zend_long arg0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(arg0)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &arg0_param);
	ZVAL_LONG(&_0, arg0);
	RETURN_LONG(phpqt_qcollator_new_q_collator(&_0));
}

PHP_METHOD(Qt_Core_QCollator_QCollator, swap)
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
	phpqt_qcollator_swap(&_0, &_1);
}

PHP_METHOD(Qt_Core_QCollator_QCollator, setLocale)
{
	zval *handle_param = NULL, *locale_param = NULL, _0, _1;
	zend_long handle, locale;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(locale)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &locale_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, locale);
	phpqt_qcollator_set_locale(&_0, &_1);
}

PHP_METHOD(Qt_Core_QCollator_QCollator, locale)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qcollator_locale(&_0));
}

PHP_METHOD(Qt_Core_QCollator_QCollator, caseSensitivity)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qcollator_case_sensitivity(&_0));
}

PHP_METHOD(Qt_Core_QCollator_QCollator, setCaseSensitivity)
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
	phpqt_qcollator_set_case_sensitivity(&_0, &_1);
}

PHP_METHOD(Qt_Core_QCollator_QCollator, setNumericMode)
{
	zend_bool on;
	zval *handle_param = NULL, *on_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_BOOL(on)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &on_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_BOOL(&_1, (on ? 1 : 0));
	phpqt_qcollator_set_numeric_mode(&_0, &_1);
}

PHP_METHOD(Qt_Core_QCollator_QCollator, numericMode)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qcollator_numeric_mode(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QCollator_QCollator, setIgnorePunctuation)
{
	zend_bool on;
	zval *handle_param = NULL, *on_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_BOOL(on)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &on_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_BOOL(&_1, (on ? 1 : 0));
	phpqt_qcollator_set_ignore_punctuation(&_0, &_1);
}

PHP_METHOD(Qt_Core_QCollator_QCollator, ignorePunctuation)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qcollator_ignore_punctuation(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QCollator_QCollator, compare)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval s1, s2;
	zval *handle_param = NULL, *s1_param = NULL, *s2_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&s1);
	ZVAL_UNDEF(&s2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(s1)
		Z_PARAM_STR(s2)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 3, 0, &handle_param, &s1_param, &s2_param);
	zephir_get_strval(&s1, s1_param);
	zephir_get_strval(&s2, s2_param);
	ZVAL_LONG(&_0, handle);
	RETURN_MM_LONG(phpqt_qcollator_compare(&_0, &s1, &s2));
}

PHP_METHOD(Qt_Core_QCollator_QCollator, compareQCharQsizetypeQCharQsizetype)
{
	zval *handle_param = NULL, *s1 = NULL, s1_sub, *len1_param = NULL, *s2 = NULL, s2_sub, *len2_param = NULL, _0, _1, _2;
	zend_long handle, len1, len2;

	ZVAL_UNDEF(&s1_sub);
	ZVAL_UNDEF(&s2_sub);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(5, 5)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(s1)
		Z_PARAM_LONG(len1)
		Z_PARAM_ZVAL(s2)
		Z_PARAM_LONG(len2)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(5, 0, &handle_param, &s1, &len1_param, &s2, &len2_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, len1);
	ZVAL_LONG(&_2, len2);
	RETURN_LONG(phpqt_qcollator_compare_q_char_qsizetype_q_char_qsizetype(&_0, s1, &_1, s2, &_2));
}

PHP_METHOD(Qt_Core_QCollator_QCollator, compareQStringViewQStringView)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval s1, s2;
	zval *handle_param = NULL, *s1_param = NULL, *s2_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&s1);
	ZVAL_UNDEF(&s2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(s1)
		Z_PARAM_STR(s2)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 3, 0, &handle_param, &s1_param, &s2_param);
	zephir_get_strval(&s1, s1_param);
	zephir_get_strval(&s2, s2_param);
	ZVAL_LONG(&_0, handle);
	RETURN_MM_LONG(phpqt_qcollator_compare_q_string_view_q_string_view(&_0, &s1, &s2));
}

PHP_METHOD(Qt_Core_QCollator_QCollator, sortKey)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval string_;
	zval *handle_param = NULL, *string__param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&string_);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(string_)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &string__param);
	zephir_get_strval(&string_, string__param);
	ZVAL_LONG(&_0, handle);
	RETURN_MM_LONG(phpqt_qcollator_sort_key(&_0, &string_));
}

PHP_METHOD(Qt_Core_QCollator_QCollator, defaultCompare)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *s1_param = NULL, *s2_param = NULL;
	zval s1, s2;

	ZVAL_UNDEF(&s1);
	ZVAL_UNDEF(&s2);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_STR(s1)
		Z_PARAM_STR(s2)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &s1_param, &s2_param);
	zephir_get_strval(&s1, s1_param);
	zephir_get_strval(&s2, s2_param);
	RETURN_MM_LONG(phpqt_qcollator_default_compare(&s1, &s2));
}

PHP_METHOD(Qt_Core_QCollator_QCollator, defaultSortKey)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *key_param = NULL;
	zval key;

	ZVAL_UNDEF(&key);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_STR(key)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &key_param);
	zephir_get_strval(&key, key_param);
	RETURN_MM_LONG(phpqt_qcollator_default_sort_key(&key));
}

