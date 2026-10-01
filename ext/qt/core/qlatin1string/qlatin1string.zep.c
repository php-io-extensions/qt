
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
#include "src/core-qlatin1string.h"
#include "kernel/string.h"
#include "kernel/memory.h"
#include "kernel/object.h"
#include "kernel/operators.h"


ZEPHIR_INIT_CLASS(Qt_Core_QLatin1String_QLatin1String)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Core\\QLatin1String, QLatin1String, qt, core_qlatin1string_qlatin1string, qt_core_qlatin1string_qlatin1string_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Core_QLatin1String_QLatin1String, new_)
{
	zval result;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;

	ZVAL_UNDEF(&result);
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);

	ZEPHIR_INIT_VAR(&result);
	phpqt_qlatin1string_new(&result);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QLatin1String_QLatin1String, newChar)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *s = NULL, s_sub, result;

	ZVAL_UNDEF(&s_sub);
	ZVAL_UNDEF(&result);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_ZVAL(s)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &s);
	ZEPHIR_INIT_VAR(&result);
	phpqt_qlatin1string_new_char(&result, s);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QLatin1String_QLatin1String, newCharChar)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *f = NULL, f_sub, *l = NULL, l_sub, result;

	ZVAL_UNDEF(&f_sub);
	ZVAL_UNDEF(&l_sub);
	ZVAL_UNDEF(&result);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_ZVAL(f)
		Z_PARAM_ZVAL(l)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &f, &l);
	ZEPHIR_INIT_VAR(&result);
	phpqt_qlatin1string_new_char_char(&result, f, l);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QLatin1String_QLatin1String, newCharQsizetype)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long sz;
	zval *s = NULL, s_sub, *sz_param = NULL, result, _0;

	ZVAL_UNDEF(&s_sub);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_ZVAL(s)
		Z_PARAM_LONG(sz)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &s, &sz_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, sz);
	phpqt_qlatin1string_new_char_qsizetype(&result, s, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QLatin1String_QLatin1String, newQByteArray)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *s_param = NULL, result;
	zval s;

	ZVAL_UNDEF(&s);
	ZVAL_UNDEF(&result);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_STR(s)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &s_param);
	zephir_get_strval(&s, s_param);
	ZEPHIR_INIT_VAR(&result);
	phpqt_qlatin1string_new_q_byte_array(&result, &s);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QLatin1String_QLatin1String, newQByteArrayView)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *s_param = NULL, result;
	zval s;

	ZVAL_UNDEF(&s);
	ZVAL_UNDEF(&result);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_STR(s)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &s_param);
	zephir_get_strval(&s, s_param);
	ZEPHIR_INIT_VAR(&result);
	phpqt_qlatin1string_new_q_byte_array_view(&result, &s);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QLatin1String_QLatin1String, toString)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *self__param = NULL, result;
	zval self_;

	ZVAL_UNDEF(&self_);
	ZVAL_UNDEF(&result);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_STR(self_)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &self__param);
	zephir_get_strval(&self_, self__param);
	ZEPHIR_INIT_VAR(&result);
	phpqt_qlatin1string_to_string(&result, &self_);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QLatin1String_QLatin1String, latin1)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *self__param = NULL, result;
	zval self_;

	ZVAL_UNDEF(&self_);
	ZVAL_UNDEF(&result);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_STR(self_)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &self__param);
	zephir_get_strval(&self_, self__param);
	ZEPHIR_INIT_VAR(&result);
	phpqt_qlatin1string_latin1(&result, &self_);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QLatin1String_QLatin1String, size)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *self__param = NULL;
	zval self_;

	ZVAL_UNDEF(&self_);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_STR(self_)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &self__param);
	zephir_get_strval(&self_, self__param);
	RETURN_MM_LONG(phpqt_qlatin1string_size(&self_));
}

PHP_METHOD(Qt_Core_QLatin1String_QLatin1String, data)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *self__param = NULL, result;
	zval self_;

	ZVAL_UNDEF(&self_);
	ZVAL_UNDEF(&result);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_STR(self_)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &self__param);
	zephir_get_strval(&self_, self__param);
	ZEPHIR_INIT_VAR(&result);
	phpqt_qlatin1string_data(&result, &self_);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QLatin1String_QLatin1String, constData)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *self__param = NULL, result;
	zval self_;

	ZVAL_UNDEF(&self_);
	ZVAL_UNDEF(&result);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_STR(self_)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &self__param);
	zephir_get_strval(&self_, self__param);
	ZEPHIR_INIT_VAR(&result);
	phpqt_qlatin1string_const_data(&result, &self_);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QLatin1String_QLatin1String, constBegin)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *self__param = NULL, result;
	zval self_;

	ZVAL_UNDEF(&self_);
	ZVAL_UNDEF(&result);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_STR(self_)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &self__param);
	zephir_get_strval(&self_, self__param);
	ZEPHIR_INIT_VAR(&result);
	phpqt_qlatin1string_const_begin(&result, &self_);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QLatin1String_QLatin1String, constEnd)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *self__param = NULL, result;
	zval self_;

	ZVAL_UNDEF(&self_);
	ZVAL_UNDEF(&result);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_STR(self_)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &self__param);
	zephir_get_strval(&self_, self__param);
	ZEPHIR_INIT_VAR(&result);
	phpqt_qlatin1string_const_end(&result, &self_);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QLatin1String_QLatin1String, first)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *self__param = NULL;
	zval self_;

	ZVAL_UNDEF(&self_);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_STR(self_)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &self__param);
	zephir_get_strval(&self_, self__param);
	RETURN_MM_LONG(phpqt_qlatin1string_first(&self_));
}

PHP_METHOD(Qt_Core_QLatin1String_QLatin1String, last)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *self__param = NULL;
	zval self_;

	ZVAL_UNDEF(&self_);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_STR(self_)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &self__param);
	zephir_get_strval(&self_, self__param);
	RETURN_MM_LONG(phpqt_qlatin1string_last(&self_));
}

PHP_METHOD(Qt_Core_QLatin1String_QLatin1String, length)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *self__param = NULL;
	zval self_;

	ZVAL_UNDEF(&self_);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_STR(self_)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &self__param);
	zephir_get_strval(&self_, self__param);
	RETURN_MM_LONG(phpqt_qlatin1string_length(&self_));
}

PHP_METHOD(Qt_Core_QLatin1String_QLatin1String, isNull)
{
	zend_long r = 0;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *self__param = NULL;
	zval self_;

	ZVAL_UNDEF(&self_);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_STR(self_)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &self__param);
	zephir_get_strval(&self_, self__param);
	r = phpqt_qlatin1string_is_null(&self_);
	RETURN_MM_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QLatin1String_QLatin1String, isEmpty)
{
	zend_long r = 0;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *self__param = NULL;
	zval self_;

	ZVAL_UNDEF(&self_);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_STR(self_)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &self__param);
	zephir_get_strval(&self_, self__param);
	r = phpqt_qlatin1string_is_empty(&self_);
	RETURN_MM_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QLatin1String_QLatin1String, empty_)
{
	zend_long r = 0;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *self__param = NULL;
	zval self_;

	ZVAL_UNDEF(&self_);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_STR(self_)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &self__param);
	zephir_get_strval(&self_, self__param);
	r = phpqt_qlatin1string_empty(&self_);
	RETURN_MM_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QLatin1String_QLatin1String, at)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long i;
	zval *self__param = NULL, *i_param = NULL, _0;
	zval self_;

	ZVAL_UNDEF(&self_);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_STR(self_)
		Z_PARAM_LONG(i)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &self__param, &i_param);
	zephir_get_strval(&self_, self__param);
	ZVAL_LONG(&_0, i);
	RETURN_MM_LONG(phpqt_qlatin1string_at(&self_, &_0));
}

PHP_METHOD(Qt_Core_QLatin1String_QLatin1String, front)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *self__param = NULL;
	zval self_;

	ZVAL_UNDEF(&self_);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_STR(self_)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &self__param);
	zephir_get_strval(&self_, self__param);
	RETURN_MM_LONG(phpqt_qlatin1string_front(&self_));
}

PHP_METHOD(Qt_Core_QLatin1String_QLatin1String, back)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *self__param = NULL;
	zval self_;

	ZVAL_UNDEF(&self_);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_STR(self_)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &self__param);
	zephir_get_strval(&self_, self__param);
	RETURN_MM_LONG(phpqt_qlatin1string_back(&self_));
}

PHP_METHOD(Qt_Core_QLatin1String_QLatin1String, compare)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *self__param = NULL, *other_param = NULL, *cs = NULL, cs_sub, __$null;
	zval self_, other;

	ZVAL_UNDEF(&self_);
	ZVAL_UNDEF(&other);
	ZVAL_UNDEF(&cs_sub);
	ZVAL_NULL(&__$null);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(2, 3)
		Z_PARAM_STR(self_)
		Z_PARAM_STR(other)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(cs)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 1, &self__param, &other_param, &cs);
	zephir_get_strval(&self_, self__param);
	zephir_get_strval(&other, other_param);
	if (!cs) {
		cs = &cs_sub;
		cs = &__$null;
	}
	RETURN_MM_LONG(phpqt_qlatin1string_compare(&self_, &other, cs));
}

PHP_METHOD(Qt_Core_QLatin1String_QLatin1String, compareQLatin1StringViewQtCaseSensitivity)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *self__param = NULL, *other_param = NULL, *cs = NULL, cs_sub, __$null;
	zval self_, other;

	ZVAL_UNDEF(&self_);
	ZVAL_UNDEF(&other);
	ZVAL_UNDEF(&cs_sub);
	ZVAL_NULL(&__$null);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(2, 3)
		Z_PARAM_STR(self_)
		Z_PARAM_STR(other)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(cs)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 1, &self__param, &other_param, &cs);
	zephir_get_strval(&self_, self__param);
	zephir_get_strval(&other, other_param);
	if (!cs) {
		cs = &cs_sub;
		cs = &__$null;
	}
	RETURN_MM_LONG(phpqt_qlatin1string_compare_q_latin1_string_view_qt_case_sensitivity(&self_, &other, cs));
}

PHP_METHOD(Qt_Core_QLatin1String_QLatin1String, compareQChar)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *self__param = NULL, *c_param = NULL;
	zval self_, c;

	ZVAL_UNDEF(&self_);
	ZVAL_UNDEF(&c);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_STR(self_)
		Z_PARAM_STR(c)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &self__param, &c_param);
	zephir_get_strval(&self_, self__param);
	zephir_get_strval(&c, c_param);
	RETURN_MM_LONG(phpqt_qlatin1string_compare_q_char(&self_, &c));
}

PHP_METHOD(Qt_Core_QLatin1String_QLatin1String, compareQCharQtCaseSensitivity)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long cs;
	zval *self__param = NULL, *c_param = NULL, *cs_param = NULL, _0;
	zval self_, c;

	ZVAL_UNDEF(&self_);
	ZVAL_UNDEF(&c);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_STR(self_)
		Z_PARAM_STR(c)
		Z_PARAM_LONG(cs)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 3, 0, &self__param, &c_param, &cs_param);
	zephir_get_strval(&self_, self__param);
	zephir_get_strval(&c, c_param);
	ZVAL_LONG(&_0, cs);
	RETURN_MM_LONG(phpqt_qlatin1string_compare_q_char_qt_case_sensitivity(&self_, &c, &_0));
}

PHP_METHOD(Qt_Core_QLatin1String_QLatin1String, startsWith)
{
	zend_long r = 0;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *self__param = NULL, *s_param = NULL, *cs = NULL, cs_sub, __$null;
	zval self_, s;

	ZVAL_UNDEF(&self_);
	ZVAL_UNDEF(&s);
	ZVAL_UNDEF(&cs_sub);
	ZVAL_NULL(&__$null);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(2, 3)
		Z_PARAM_STR(self_)
		Z_PARAM_STR(s)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(cs)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 1, &self__param, &s_param, &cs);
	zephir_get_strval(&self_, self__param);
	zephir_get_strval(&s, s_param);
	if (!cs) {
		cs = &cs_sub;
		cs = &__$null;
	}
	r = phpqt_qlatin1string_starts_with(&self_, &s, cs);
	RETURN_MM_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QLatin1String_QLatin1String, startsWithQLatin1StringViewQtCaseSensitivity)
{
	zend_long r = 0;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *self__param = NULL, *s_param = NULL, *cs = NULL, cs_sub, __$null;
	zval self_, s;

	ZVAL_UNDEF(&self_);
	ZVAL_UNDEF(&s);
	ZVAL_UNDEF(&cs_sub);
	ZVAL_NULL(&__$null);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(2, 3)
		Z_PARAM_STR(self_)
		Z_PARAM_STR(s)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(cs)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 1, &self__param, &s_param, &cs);
	zephir_get_strval(&self_, self__param);
	zephir_get_strval(&s, s_param);
	if (!cs) {
		cs = &cs_sub;
		cs = &__$null;
	}
	r = phpqt_qlatin1string_starts_with_q_latin1_string_view_qt_case_sensitivity(&self_, &s, cs);
	RETURN_MM_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QLatin1String_QLatin1String, startsWithQChar)
{
	zend_long r = 0;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *self__param = NULL, *c_param = NULL;
	zval self_, c;

	ZVAL_UNDEF(&self_);
	ZVAL_UNDEF(&c);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_STR(self_)
		Z_PARAM_STR(c)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &self__param, &c_param);
	zephir_get_strval(&self_, self__param);
	zephir_get_strval(&c, c_param);
	r = phpqt_qlatin1string_starts_with_q_char(&self_, &c);
	RETURN_MM_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QLatin1String_QLatin1String, startsWithQCharQtCaseSensitivity)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long cs, r = 0;
	zval *self__param = NULL, *c_param = NULL, *cs_param = NULL, _0;
	zval self_, c;

	ZVAL_UNDEF(&self_);
	ZVAL_UNDEF(&c);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_STR(self_)
		Z_PARAM_STR(c)
		Z_PARAM_LONG(cs)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 3, 0, &self__param, &c_param, &cs_param);
	zephir_get_strval(&self_, self__param);
	zephir_get_strval(&c, c_param);
	ZVAL_LONG(&_0, cs);
	r = phpqt_qlatin1string_starts_with_q_char_qt_case_sensitivity(&self_, &c, &_0);
	RETURN_MM_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QLatin1String_QLatin1String, endsWith)
{
	zend_long r = 0;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *self__param = NULL, *s_param = NULL, *cs = NULL, cs_sub, __$null;
	zval self_, s;

	ZVAL_UNDEF(&self_);
	ZVAL_UNDEF(&s);
	ZVAL_UNDEF(&cs_sub);
	ZVAL_NULL(&__$null);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(2, 3)
		Z_PARAM_STR(self_)
		Z_PARAM_STR(s)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(cs)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 1, &self__param, &s_param, &cs);
	zephir_get_strval(&self_, self__param);
	zephir_get_strval(&s, s_param);
	if (!cs) {
		cs = &cs_sub;
		cs = &__$null;
	}
	r = phpqt_qlatin1string_ends_with(&self_, &s, cs);
	RETURN_MM_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QLatin1String_QLatin1String, endsWithQLatin1StringViewQtCaseSensitivity)
{
	zend_long r = 0;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *self__param = NULL, *s_param = NULL, *cs = NULL, cs_sub, __$null;
	zval self_, s;

	ZVAL_UNDEF(&self_);
	ZVAL_UNDEF(&s);
	ZVAL_UNDEF(&cs_sub);
	ZVAL_NULL(&__$null);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(2, 3)
		Z_PARAM_STR(self_)
		Z_PARAM_STR(s)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(cs)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 1, &self__param, &s_param, &cs);
	zephir_get_strval(&self_, self__param);
	zephir_get_strval(&s, s_param);
	if (!cs) {
		cs = &cs_sub;
		cs = &__$null;
	}
	r = phpqt_qlatin1string_ends_with_q_latin1_string_view_qt_case_sensitivity(&self_, &s, cs);
	RETURN_MM_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QLatin1String_QLatin1String, endsWithQChar)
{
	zend_long r = 0;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *self__param = NULL, *c_param = NULL;
	zval self_, c;

	ZVAL_UNDEF(&self_);
	ZVAL_UNDEF(&c);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_STR(self_)
		Z_PARAM_STR(c)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &self__param, &c_param);
	zephir_get_strval(&self_, self__param);
	zephir_get_strval(&c, c_param);
	r = phpqt_qlatin1string_ends_with_q_char(&self_, &c);
	RETURN_MM_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QLatin1String_QLatin1String, endsWithQCharQtCaseSensitivity)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long cs, r = 0;
	zval *self__param = NULL, *c_param = NULL, *cs_param = NULL, _0;
	zval self_, c;

	ZVAL_UNDEF(&self_);
	ZVAL_UNDEF(&c);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_STR(self_)
		Z_PARAM_STR(c)
		Z_PARAM_LONG(cs)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 3, 0, &self__param, &c_param, &cs_param);
	zephir_get_strval(&self_, self__param);
	zephir_get_strval(&c, c_param);
	ZVAL_LONG(&_0, cs);
	r = phpqt_qlatin1string_ends_with_q_char_qt_case_sensitivity(&self_, &c, &_0);
	RETURN_MM_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QLatin1String_QLatin1String, indexOf)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long from;
	zval *self__param = NULL, *s_param = NULL, *from_param = NULL, *cs = NULL, cs_sub, __$null, _0;
	zval self_, s;

	ZVAL_UNDEF(&self_);
	ZVAL_UNDEF(&s);
	ZVAL_UNDEF(&cs_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(2, 4)
		Z_PARAM_STR(self_)
		Z_PARAM_STR(s)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(from)
		Z_PARAM_ZVAL_OR_NULL(cs)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 2, &self__param, &s_param, &from_param, &cs);
	zephir_get_strval(&self_, self__param);
	zephir_get_strval(&s, s_param);
	if (!from_param) {
		from = 0;
	} else {
		}
	if (!cs) {
		cs = &cs_sub;
		cs = &__$null;
	}
	ZVAL_LONG(&_0, from);
	RETURN_MM_LONG(phpqt_qlatin1string_index_of(&self_, &s, &_0, cs));
}

PHP_METHOD(Qt_Core_QLatin1String_QLatin1String, indexOfQLatin1StringViewQsizetypeQtCaseSensitivity)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long from;
	zval *self__param = NULL, *s_param = NULL, *from_param = NULL, *cs = NULL, cs_sub, __$null, _0;
	zval self_, s;

	ZVAL_UNDEF(&self_);
	ZVAL_UNDEF(&s);
	ZVAL_UNDEF(&cs_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(2, 4)
		Z_PARAM_STR(self_)
		Z_PARAM_STR(s)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(from)
		Z_PARAM_ZVAL_OR_NULL(cs)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 2, &self__param, &s_param, &from_param, &cs);
	zephir_get_strval(&self_, self__param);
	zephir_get_strval(&s, s_param);
	if (!from_param) {
		from = 0;
	} else {
		}
	if (!cs) {
		cs = &cs_sub;
		cs = &__$null;
	}
	ZVAL_LONG(&_0, from);
	RETURN_MM_LONG(phpqt_qlatin1string_index_of_q_latin1_string_view_qsizetype_qt_case_sensitivity(&self_, &s, &_0, cs));
}

PHP_METHOD(Qt_Core_QLatin1String_QLatin1String, indexOfQCharQsizetypeQtCaseSensitivity)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long from;
	zval *self__param = NULL, *c_param = NULL, *from_param = NULL, *cs = NULL, cs_sub, __$null, _0;
	zval self_, c;

	ZVAL_UNDEF(&self_);
	ZVAL_UNDEF(&c);
	ZVAL_UNDEF(&cs_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(2, 4)
		Z_PARAM_STR(self_)
		Z_PARAM_STR(c)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(from)
		Z_PARAM_ZVAL_OR_NULL(cs)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 2, &self__param, &c_param, &from_param, &cs);
	zephir_get_strval(&self_, self__param);
	zephir_get_strval(&c, c_param);
	if (!from_param) {
		from = 0;
	} else {
		}
	if (!cs) {
		cs = &cs_sub;
		cs = &__$null;
	}
	ZVAL_LONG(&_0, from);
	RETURN_MM_LONG(phpqt_qlatin1string_index_of_q_char_qsizetype_qt_case_sensitivity(&self_, &c, &_0, cs));
}

PHP_METHOD(Qt_Core_QLatin1String_QLatin1String, contains)
{
	zend_long r = 0;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *self__param = NULL, *s_param = NULL, *cs = NULL, cs_sub, __$null;
	zval self_, s;

	ZVAL_UNDEF(&self_);
	ZVAL_UNDEF(&s);
	ZVAL_UNDEF(&cs_sub);
	ZVAL_NULL(&__$null);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(2, 3)
		Z_PARAM_STR(self_)
		Z_PARAM_STR(s)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(cs)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 1, &self__param, &s_param, &cs);
	zephir_get_strval(&self_, self__param);
	zephir_get_strval(&s, s_param);
	if (!cs) {
		cs = &cs_sub;
		cs = &__$null;
	}
	r = phpqt_qlatin1string_contains(&self_, &s, cs);
	RETURN_MM_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QLatin1String_QLatin1String, containsQLatin1StringViewQtCaseSensitivity)
{
	zend_long r = 0;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *self__param = NULL, *s_param = NULL, *cs = NULL, cs_sub, __$null;
	zval self_, s;

	ZVAL_UNDEF(&self_);
	ZVAL_UNDEF(&s);
	ZVAL_UNDEF(&cs_sub);
	ZVAL_NULL(&__$null);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(2, 3)
		Z_PARAM_STR(self_)
		Z_PARAM_STR(s)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(cs)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 1, &self__param, &s_param, &cs);
	zephir_get_strval(&self_, self__param);
	zephir_get_strval(&s, s_param);
	if (!cs) {
		cs = &cs_sub;
		cs = &__$null;
	}
	r = phpqt_qlatin1string_contains_q_latin1_string_view_qt_case_sensitivity(&self_, &s, cs);
	RETURN_MM_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QLatin1String_QLatin1String, containsQCharQtCaseSensitivity)
{
	zend_long r = 0;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *self__param = NULL, *c_param = NULL, *cs = NULL, cs_sub, __$null;
	zval self_, c;

	ZVAL_UNDEF(&self_);
	ZVAL_UNDEF(&c);
	ZVAL_UNDEF(&cs_sub);
	ZVAL_NULL(&__$null);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(2, 3)
		Z_PARAM_STR(self_)
		Z_PARAM_STR(c)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(cs)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 1, &self__param, &c_param, &cs);
	zephir_get_strval(&self_, self__param);
	zephir_get_strval(&c, c_param);
	if (!cs) {
		cs = &cs_sub;
		cs = &__$null;
	}
	r = phpqt_qlatin1string_contains_q_char_qt_case_sensitivity(&self_, &c, cs);
	RETURN_MM_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QLatin1String_QLatin1String, lastIndexOf)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *self__param = NULL, *s_param = NULL, *cs = NULL, cs_sub, __$null;
	zval self_, s;

	ZVAL_UNDEF(&self_);
	ZVAL_UNDEF(&s);
	ZVAL_UNDEF(&cs_sub);
	ZVAL_NULL(&__$null);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(2, 3)
		Z_PARAM_STR(self_)
		Z_PARAM_STR(s)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(cs)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 1, &self__param, &s_param, &cs);
	zephir_get_strval(&self_, self__param);
	zephir_get_strval(&s, s_param);
	if (!cs) {
		cs = &cs_sub;
		cs = &__$null;
	}
	RETURN_MM_LONG(phpqt_qlatin1string_last_index_of(&self_, &s, cs));
}

PHP_METHOD(Qt_Core_QLatin1String_QLatin1String, lastIndexOfQStringViewQsizetypeQtCaseSensitivity)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long from;
	zval *self__param = NULL, *s_param = NULL, *from_param = NULL, *cs = NULL, cs_sub, __$null, _0;
	zval self_, s;

	ZVAL_UNDEF(&self_);
	ZVAL_UNDEF(&s);
	ZVAL_UNDEF(&cs_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(3, 4)
		Z_PARAM_STR(self_)
		Z_PARAM_STR(s)
		Z_PARAM_LONG(from)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(cs)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 3, 1, &self__param, &s_param, &from_param, &cs);
	zephir_get_strval(&self_, self__param);
	zephir_get_strval(&s, s_param);
	if (!cs) {
		cs = &cs_sub;
		cs = &__$null;
	}
	ZVAL_LONG(&_0, from);
	RETURN_MM_LONG(phpqt_qlatin1string_last_index_of_q_string_view_qsizetype_qt_case_sensitivity(&self_, &s, &_0, cs));
}

PHP_METHOD(Qt_Core_QLatin1String_QLatin1String, lastIndexOfQLatin1StringViewQtCaseSensitivity)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *self__param = NULL, *s_param = NULL, *cs = NULL, cs_sub, __$null;
	zval self_, s;

	ZVAL_UNDEF(&self_);
	ZVAL_UNDEF(&s);
	ZVAL_UNDEF(&cs_sub);
	ZVAL_NULL(&__$null);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(2, 3)
		Z_PARAM_STR(self_)
		Z_PARAM_STR(s)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(cs)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 1, &self__param, &s_param, &cs);
	zephir_get_strval(&self_, self__param);
	zephir_get_strval(&s, s_param);
	if (!cs) {
		cs = &cs_sub;
		cs = &__$null;
	}
	RETURN_MM_LONG(phpqt_qlatin1string_last_index_of_q_latin1_string_view_qt_case_sensitivity(&self_, &s, cs));
}

PHP_METHOD(Qt_Core_QLatin1String_QLatin1String, lastIndexOfQLatin1StringViewQsizetypeQtCaseSensitivity)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long from;
	zval *self__param = NULL, *s_param = NULL, *from_param = NULL, *cs = NULL, cs_sub, __$null, _0;
	zval self_, s;

	ZVAL_UNDEF(&self_);
	ZVAL_UNDEF(&s);
	ZVAL_UNDEF(&cs_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(3, 4)
		Z_PARAM_STR(self_)
		Z_PARAM_STR(s)
		Z_PARAM_LONG(from)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(cs)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 3, 1, &self__param, &s_param, &from_param, &cs);
	zephir_get_strval(&self_, self__param);
	zephir_get_strval(&s, s_param);
	if (!cs) {
		cs = &cs_sub;
		cs = &__$null;
	}
	ZVAL_LONG(&_0, from);
	RETURN_MM_LONG(phpqt_qlatin1string_last_index_of_q_latin1_string_view_qsizetype_qt_case_sensitivity(&self_, &s, &_0, cs));
}

PHP_METHOD(Qt_Core_QLatin1String_QLatin1String, lastIndexOfQCharQtCaseSensitivity)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *self__param = NULL, *c_param = NULL, *cs = NULL, cs_sub, __$null;
	zval self_, c;

	ZVAL_UNDEF(&self_);
	ZVAL_UNDEF(&c);
	ZVAL_UNDEF(&cs_sub);
	ZVAL_NULL(&__$null);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(2, 3)
		Z_PARAM_STR(self_)
		Z_PARAM_STR(c)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(cs)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 1, &self__param, &c_param, &cs);
	zephir_get_strval(&self_, self__param);
	zephir_get_strval(&c, c_param);
	if (!cs) {
		cs = &cs_sub;
		cs = &__$null;
	}
	RETURN_MM_LONG(phpqt_qlatin1string_last_index_of_q_char_qt_case_sensitivity(&self_, &c, cs));
}

PHP_METHOD(Qt_Core_QLatin1String_QLatin1String, lastIndexOfQCharQsizetypeQtCaseSensitivity)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long from;
	zval *self__param = NULL, *c_param = NULL, *from_param = NULL, *cs = NULL, cs_sub, __$null, _0;
	zval self_, c;

	ZVAL_UNDEF(&self_);
	ZVAL_UNDEF(&c);
	ZVAL_UNDEF(&cs_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(3, 4)
		Z_PARAM_STR(self_)
		Z_PARAM_STR(c)
		Z_PARAM_LONG(from)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(cs)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 3, 1, &self__param, &c_param, &from_param, &cs);
	zephir_get_strval(&self_, self__param);
	zephir_get_strval(&c, c_param);
	if (!cs) {
		cs = &cs_sub;
		cs = &__$null;
	}
	ZVAL_LONG(&_0, from);
	RETURN_MM_LONG(phpqt_qlatin1string_last_index_of_q_char_qsizetype_qt_case_sensitivity(&self_, &c, &_0, cs));
}

PHP_METHOD(Qt_Core_QLatin1String_QLatin1String, count)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *self__param = NULL, *str_param = NULL, *cs = NULL, cs_sub, __$null;
	zval self_, str;

	ZVAL_UNDEF(&self_);
	ZVAL_UNDEF(&str);
	ZVAL_UNDEF(&cs_sub);
	ZVAL_NULL(&__$null);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(2, 3)
		Z_PARAM_STR(self_)
		Z_PARAM_STR(str)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(cs)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 1, &self__param, &str_param, &cs);
	zephir_get_strval(&self_, self__param);
	zephir_get_strval(&str, str_param);
	if (!cs) {
		cs = &cs_sub;
		cs = &__$null;
	}
	RETURN_MM_LONG(phpqt_qlatin1string_count(&self_, &str, cs));
}

PHP_METHOD(Qt_Core_QLatin1String_QLatin1String, countQLatin1StringViewQtCaseSensitivity)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *self__param = NULL, *str_param = NULL, *cs = NULL, cs_sub, __$null;
	zval self_, str;

	ZVAL_UNDEF(&self_);
	ZVAL_UNDEF(&str);
	ZVAL_UNDEF(&cs_sub);
	ZVAL_NULL(&__$null);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(2, 3)
		Z_PARAM_STR(self_)
		Z_PARAM_STR(str)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(cs)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 1, &self__param, &str_param, &cs);
	zephir_get_strval(&self_, self__param);
	zephir_get_strval(&str, str_param);
	if (!cs) {
		cs = &cs_sub;
		cs = &__$null;
	}
	RETURN_MM_LONG(phpqt_qlatin1string_count_q_latin1_string_view_qt_case_sensitivity(&self_, &str, cs));
}

PHP_METHOD(Qt_Core_QLatin1String_QLatin1String, countQCharQtCaseSensitivity)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *self__param = NULL, *ch_param = NULL, *cs = NULL, cs_sub, __$null;
	zval self_, ch;

	ZVAL_UNDEF(&self_);
	ZVAL_UNDEF(&ch);
	ZVAL_UNDEF(&cs_sub);
	ZVAL_NULL(&__$null);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(2, 3)
		Z_PARAM_STR(self_)
		Z_PARAM_STR(ch)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(cs)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 1, &self__param, &ch_param, &cs);
	zephir_get_strval(&self_, self__param);
	zephir_get_strval(&ch, ch_param);
	if (!cs) {
		cs = &cs_sub;
		cs = &__$null;
	}
	RETURN_MM_LONG(phpqt_qlatin1string_count_q_char_qt_case_sensitivity(&self_, &ch, cs));
}

PHP_METHOD(Qt_Core_QLatin1String_QLatin1String, toShort)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long base;
	zval *self__param = NULL, *ok = NULL, ok_sub, *base_param = NULL, __$null, result, _0;
	zval self_;

	ZVAL_UNDEF(&self_);
	ZVAL_UNDEF(&ok_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(1, 3)
		Z_PARAM_STR(self_)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(ok)
		Z_PARAM_LONG(base)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 2, &self__param, &ok, &base_param);
	zephir_get_strval(&self_, self__param);
	if (!ok) {
		ok = &ok_sub;
		ok = &__$null;
	}
	if (!base_param) {
		base = 10;
	} else {
		}
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, base);
	phpqt_qlatin1string_to_short(&result, &self_, ok, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QLatin1String_QLatin1String, toUShort)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long base;
	zval *self__param = NULL, *ok = NULL, ok_sub, *base_param = NULL, __$null, result, _0;
	zval self_;

	ZVAL_UNDEF(&self_);
	ZVAL_UNDEF(&ok_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(1, 3)
		Z_PARAM_STR(self_)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(ok)
		Z_PARAM_LONG(base)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 2, &self__param, &ok, &base_param);
	zephir_get_strval(&self_, self__param);
	if (!ok) {
		ok = &ok_sub;
		ok = &__$null;
	}
	if (!base_param) {
		base = 10;
	} else {
		}
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, base);
	phpqt_qlatin1string_to_u_short(&result, &self_, ok, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QLatin1String_QLatin1String, toInt)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long base;
	zval *self__param = NULL, *ok = NULL, ok_sub, *base_param = NULL, __$null, result, _0;
	zval self_;

	ZVAL_UNDEF(&self_);
	ZVAL_UNDEF(&ok_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(1, 3)
		Z_PARAM_STR(self_)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(ok)
		Z_PARAM_LONG(base)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 2, &self__param, &ok, &base_param);
	zephir_get_strval(&self_, self__param);
	if (!ok) {
		ok = &ok_sub;
		ok = &__$null;
	}
	if (!base_param) {
		base = 10;
	} else {
		}
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, base);
	phpqt_qlatin1string_to_int(&result, &self_, ok, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QLatin1String_QLatin1String, toUInt)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long base;
	zval *self__param = NULL, *ok = NULL, ok_sub, *base_param = NULL, __$null, result, _0;
	zval self_;

	ZVAL_UNDEF(&self_);
	ZVAL_UNDEF(&ok_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(1, 3)
		Z_PARAM_STR(self_)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(ok)
		Z_PARAM_LONG(base)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 2, &self__param, &ok, &base_param);
	zephir_get_strval(&self_, self__param);
	if (!ok) {
		ok = &ok_sub;
		ok = &__$null;
	}
	if (!base_param) {
		base = 10;
	} else {
		}
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, base);
	phpqt_qlatin1string_to_u_int(&result, &self_, ok, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QLatin1String_QLatin1String, toLong)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long base;
	zval *self__param = NULL, *ok = NULL, ok_sub, *base_param = NULL, __$null, result, _0;
	zval self_;

	ZVAL_UNDEF(&self_);
	ZVAL_UNDEF(&ok_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(1, 3)
		Z_PARAM_STR(self_)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(ok)
		Z_PARAM_LONG(base)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 2, &self__param, &ok, &base_param);
	zephir_get_strval(&self_, self__param);
	if (!ok) {
		ok = &ok_sub;
		ok = &__$null;
	}
	if (!base_param) {
		base = 10;
	} else {
		}
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, base);
	phpqt_qlatin1string_to_long(&result, &self_, ok, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QLatin1String_QLatin1String, toULong)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long base;
	zval *self__param = NULL, *ok = NULL, ok_sub, *base_param = NULL, __$null, result, _0;
	zval self_;

	ZVAL_UNDEF(&self_);
	ZVAL_UNDEF(&ok_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(1, 3)
		Z_PARAM_STR(self_)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(ok)
		Z_PARAM_LONG(base)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 2, &self__param, &ok, &base_param);
	zephir_get_strval(&self_, self__param);
	if (!ok) {
		ok = &ok_sub;
		ok = &__$null;
	}
	if (!base_param) {
		base = 10;
	} else {
		}
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, base);
	phpqt_qlatin1string_to_u_long(&result, &self_, ok, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QLatin1String_QLatin1String, toLongLong)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long base;
	zval *self__param = NULL, *ok = NULL, ok_sub, *base_param = NULL, __$null, result, _0;
	zval self_;

	ZVAL_UNDEF(&self_);
	ZVAL_UNDEF(&ok_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(1, 3)
		Z_PARAM_STR(self_)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(ok)
		Z_PARAM_LONG(base)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 2, &self__param, &ok, &base_param);
	zephir_get_strval(&self_, self__param);
	if (!ok) {
		ok = &ok_sub;
		ok = &__$null;
	}
	if (!base_param) {
		base = 10;
	} else {
		}
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, base);
	phpqt_qlatin1string_to_long_long(&result, &self_, ok, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QLatin1String_QLatin1String, toULongLong)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long base;
	zval *self__param = NULL, *ok = NULL, ok_sub, *base_param = NULL, __$null, result, _0;
	zval self_;

	ZVAL_UNDEF(&self_);
	ZVAL_UNDEF(&ok_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(1, 3)
		Z_PARAM_STR(self_)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(ok)
		Z_PARAM_LONG(base)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 2, &self__param, &ok, &base_param);
	zephir_get_strval(&self_, self__param);
	if (!ok) {
		ok = &ok_sub;
		ok = &__$null;
	}
	if (!base_param) {
		base = 10;
	} else {
		}
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, base);
	phpqt_qlatin1string_to_u_long_long(&result, &self_, ok, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QLatin1String_QLatin1String, toFloat)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *self__param = NULL, *ok = NULL, ok_sub, __$null, result;
	zval self_;

	ZVAL_UNDEF(&self_);
	ZVAL_UNDEF(&ok_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&result);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_STR(self_)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(ok)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 1, &self__param, &ok);
	zephir_get_strval(&self_, self__param);
	if (!ok) {
		ok = &ok_sub;
		ok = &__$null;
	}
	ZEPHIR_INIT_VAR(&result);
	phpqt_qlatin1string_to_float(&result, &self_, ok);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QLatin1String_QLatin1String, toDouble)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *self__param = NULL, *ok = NULL, ok_sub, __$null, result;
	zval self_;

	ZVAL_UNDEF(&self_);
	ZVAL_UNDEF(&ok_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&result);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_STR(self_)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(ok)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 1, &self__param, &ok);
	zephir_get_strval(&self_, self__param);
	if (!ok) {
		ok = &ok_sub;
		ok = &__$null;
	}
	ZEPHIR_INIT_VAR(&result);
	phpqt_qlatin1string_to_double(&result, &self_, ok);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QLatin1String_QLatin1String, begin)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *self__param = NULL, result;
	zval self_;

	ZVAL_UNDEF(&self_);
	ZVAL_UNDEF(&result);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_STR(self_)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &self__param);
	zephir_get_strval(&self_, self__param);
	ZEPHIR_INIT_VAR(&result);
	phpqt_qlatin1string_begin(&result, &self_);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QLatin1String_QLatin1String, cbegin)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *self__param = NULL, result;
	zval self_;

	ZVAL_UNDEF(&self_);
	ZVAL_UNDEF(&result);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_STR(self_)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &self__param);
	zephir_get_strval(&self_, self__param);
	ZEPHIR_INIT_VAR(&result);
	phpqt_qlatin1string_cbegin(&result, &self_);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QLatin1String_QLatin1String, end)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *self__param = NULL, result;
	zval self_;

	ZVAL_UNDEF(&self_);
	ZVAL_UNDEF(&result);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_STR(self_)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &self__param);
	zephir_get_strval(&self_, self__param);
	ZEPHIR_INIT_VAR(&result);
	phpqt_qlatin1string_end(&result, &self_);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QLatin1String_QLatin1String, cend)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *self__param = NULL, result;
	zval self_;

	ZVAL_UNDEF(&self_);
	ZVAL_UNDEF(&result);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_STR(self_)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &self__param);
	zephir_get_strval(&self_, self__param);
	ZEPHIR_INIT_VAR(&result);
	phpqt_qlatin1string_cend(&result, &self_);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QLatin1String_QLatin1String, max_size)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *self__param = NULL;
	zval self_;

	ZVAL_UNDEF(&self_);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_STR(self_)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &self__param);
	zephir_get_strval(&self_, self__param);
	RETURN_MM_LONG(phpqt_qlatin1string_max_size(&self_));
}

PHP_METHOD(Qt_Core_QLatin1String_QLatin1String, maxSize)
{

	RETURN_LONG(phpqt_qlatin1string_max_size_2());
}

PHP_METHOD(Qt_Core_QLatin1String_QLatin1String, mid)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long pos, n;
	zval *self__param = NULL, *pos_param = NULL, *n_param = NULL, result, _0, _1;
	zval self_;

	ZVAL_UNDEF(&self_);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 3)
		Z_PARAM_STR(self_)
		Z_PARAM_LONG(pos)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(n)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 1, &self__param, &pos_param, &n_param);
	zephir_get_strval(&self_, self__param);
	if (!n_param) {
		n = -1;
	} else {
		}
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, pos);
	ZVAL_LONG(&_1, n);
	phpqt_qlatin1string_mid(&result, &self_, &_0, &_1);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QLatin1String_QLatin1String, left)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long n;
	zval *self__param = NULL, *n_param = NULL, result, _0;
	zval self_;

	ZVAL_UNDEF(&self_);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_STR(self_)
		Z_PARAM_LONG(n)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &self__param, &n_param);
	zephir_get_strval(&self_, self__param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, n);
	phpqt_qlatin1string_left(&result, &self_, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QLatin1String_QLatin1String, right)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long n;
	zval *self__param = NULL, *n_param = NULL, result, _0;
	zval self_;

	ZVAL_UNDEF(&self_);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_STR(self_)
		Z_PARAM_LONG(n)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &self__param, &n_param);
	zephir_get_strval(&self_, self__param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, n);
	phpqt_qlatin1string_right(&result, &self_, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QLatin1String_QLatin1String, sliced)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long pos;
	zval *self__param = NULL, *pos_param = NULL, result, _0;
	zval self_;

	ZVAL_UNDEF(&self_);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_STR(self_)
		Z_PARAM_LONG(pos)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &self__param, &pos_param);
	zephir_get_strval(&self_, self__param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, pos);
	phpqt_qlatin1string_sliced(&result, &self_, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QLatin1String_QLatin1String, slicedQsizetypeQsizetype)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long pos, n;
	zval *self__param = NULL, *pos_param = NULL, *n_param = NULL, result, _0, _1;
	zval self_;

	ZVAL_UNDEF(&self_);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_STR(self_)
		Z_PARAM_LONG(pos)
		Z_PARAM_LONG(n)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 3, 0, &self__param, &pos_param, &n_param);
	zephir_get_strval(&self_, self__param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, pos);
	ZVAL_LONG(&_1, n);
	phpqt_qlatin1string_sliced_qsizetype_qsizetype(&result, &self_, &_0, &_1);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QLatin1String_QLatin1String, firstQsizetype)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long n;
	zval *self__param = NULL, *n_param = NULL, result, _0;
	zval self_;

	ZVAL_UNDEF(&self_);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_STR(self_)
		Z_PARAM_LONG(n)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &self__param, &n_param);
	zephir_get_strval(&self_, self__param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, n);
	phpqt_qlatin1string_first_qsizetype(&result, &self_, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QLatin1String_QLatin1String, lastQsizetype)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long n;
	zval *self__param = NULL, *n_param = NULL, result, _0;
	zval self_;

	ZVAL_UNDEF(&self_);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_STR(self_)
		Z_PARAM_LONG(n)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &self__param, &n_param);
	zephir_get_strval(&self_, self__param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, n);
	phpqt_qlatin1string_last_qsizetype(&result, &self_, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QLatin1String_QLatin1String, chopped)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long n;
	zval *self__param = NULL, *n_param = NULL, result, _0;
	zval self_;

	ZVAL_UNDEF(&self_);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_STR(self_)
		Z_PARAM_LONG(n)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &self__param, &n_param);
	zephir_get_strval(&self_, self__param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, n);
	phpqt_qlatin1string_chopped(&result, &self_, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QLatin1String_QLatin1String, chop)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long n;
	zval *self__param = NULL, *n_param = NULL, result, _0;
	zval self_;

	ZVAL_UNDEF(&self_);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_STR(self_)
		Z_PARAM_LONG(n)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &self__param, &n_param);
	zephir_get_strval(&self_, self__param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, n);
	phpqt_qlatin1string_chop(&result, &self_, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QLatin1String_QLatin1String, truncate)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long n;
	zval *self__param = NULL, *n_param = NULL, result, _0;
	zval self_;

	ZVAL_UNDEF(&self_);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_STR(self_)
		Z_PARAM_LONG(n)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &self__param, &n_param);
	zephir_get_strval(&self_, self__param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, n);
	phpqt_qlatin1string_truncate(&result, &self_, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QLatin1String_QLatin1String, trimmed)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *self__param = NULL, result;
	zval self_;

	ZVAL_UNDEF(&self_);
	ZVAL_UNDEF(&result);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_STR(self_)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &self__param);
	zephir_get_strval(&self_, self__param);
	ZEPHIR_INIT_VAR(&result);
	phpqt_qlatin1string_trimmed(&result, &self_);
	RETURN_CCTOR(&result);
}

