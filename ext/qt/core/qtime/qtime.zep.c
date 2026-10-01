
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
#include "src/core-qtime.h"
#include "kernel/object.h"
#include "kernel/operators.h"
#include "kernel/memory.h"
#include "kernel/string.h"


ZEPHIR_INIT_CLASS(Qt_Core_QTime_QTime)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Core\\QTime, QTime, qt, core_qtime_qtime, qt_core_qtime_qtime_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Core_QTime_QTime, new_)
{

	RETURN_LONG(phpqt_qtime_new());
}

PHP_METHOD(Qt_Core_QTime_QTime, newIntIntIntInt)
{
	zval *h_param = NULL, *m_param = NULL, *s_param = NULL, *ms_param = NULL, _0, _1, _2, _3;
	zend_long h, m, s, ms;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(2, 4)
		Z_PARAM_LONG(h)
		Z_PARAM_LONG(m)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(s)
		Z_PARAM_LONG(ms)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 2, &h_param, &m_param, &s_param, &ms_param);
	if (!s_param) {
		s = 0;
	} else {
		}
	if (!ms_param) {
		ms = 0;
	} else {
		}
	ZVAL_LONG(&_0, h);
	ZVAL_LONG(&_1, m);
	ZVAL_LONG(&_2, s);
	ZVAL_LONG(&_3, ms);
	RETURN_LONG(phpqt_qtime_new_int_int_int_int(&_0, &_1, &_2, &_3));
}

PHP_METHOD(Qt_Core_QTime_QTime, isNull)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qtime_is_null(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QTime_QTime, isValid)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qtime_is_valid(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QTime_QTime, hour)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qtime_hour(&_0));
}

PHP_METHOD(Qt_Core_QTime_QTime, minute)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qtime_minute(&_0));
}

PHP_METHOD(Qt_Core_QTime_QTime, second)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qtime_second(&_0));
}

PHP_METHOD(Qt_Core_QTime_QTime, msec)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qtime_msec(&_0));
}

PHP_METHOD(Qt_Core_QTime_QTime, toString)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, *f = NULL, f_sub, __$null, result, _0;
	zend_long handle;

	ZVAL_UNDEF(&f_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(f)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 1, &handle_param, &f);
	if (!f) {
		f = &f_sub;
		f = &__$null;
	}
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	phpqt_qtime_to_string(&result, &_0, f);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QTime_QTime, toStringQString)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval format;
	zval *handle_param = NULL, *format_param = NULL, result, _0;
	zend_long handle;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&format);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(format)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &format_param);
	zephir_get_strval(&format, format_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	phpqt_qtime_to_string_q_string(&result, &_0, &format);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QTime_QTime, toStringQStringView)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval format;
	zval *handle_param = NULL, *format_param = NULL, result, _0;
	zend_long handle;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&format);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(format)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &format_param);
	zephir_get_strval(&format, format_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	phpqt_qtime_to_string_q_string_view(&result, &_0, &format);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QTime_QTime, setHMS)
{
	zval *handle_param = NULL, *h_param = NULL, *m_param = NULL, *s_param = NULL, *ms_param = NULL, _0, _1, _2, _3, _4;
	zend_long handle, h, m, s, ms, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZEND_PARSE_PARAMETERS_START(4, 5)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(h)
		Z_PARAM_LONG(m)
		Z_PARAM_LONG(s)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(ms)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 1, &handle_param, &h_param, &m_param, &s_param, &ms_param);
	if (!ms_param) {
		ms = 0;
	} else {
		}
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, h);
	ZVAL_LONG(&_2, m);
	ZVAL_LONG(&_3, s);
	ZVAL_LONG(&_4, ms);
	r = phpqt_qtime_set_h_m_s(&_0, &_1, &_2, &_3, &_4);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QTime_QTime, addSecs)
{
	zval *handle_param = NULL, *secs_param = NULL, _0, _1;
	zend_long handle, secs;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(secs)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &secs_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, secs);
	RETURN_LONG(phpqt_qtime_add_secs(&_0, &_1));
}

PHP_METHOD(Qt_Core_QTime_QTime, secsTo)
{
	zval *handle_param = NULL, *t_param = NULL, _0, _1;
	zend_long handle, t;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(t)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &t_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, t);
	RETURN_LONG(phpqt_qtime_secs_to(&_0, &_1));
}

PHP_METHOD(Qt_Core_QTime_QTime, addMSecs)
{
	zval *handle_param = NULL, *ms_param = NULL, _0, _1;
	zend_long handle, ms;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(ms)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &ms_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, ms);
	RETURN_LONG(phpqt_qtime_add_m_secs(&_0, &_1));
}

PHP_METHOD(Qt_Core_QTime_QTime, msecsTo)
{
	zval *handle_param = NULL, *t_param = NULL, _0, _1;
	zend_long handle, t;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(t)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &t_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, t);
	RETURN_LONG(phpqt_qtime_msecs_to(&_0, &_1));
}

PHP_METHOD(Qt_Core_QTime_QTime, fromMSecsSinceStartOfDay)
{
	zval *msecs_param = NULL, _0;
	zend_long msecs;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(msecs)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &msecs_param);
	ZVAL_LONG(&_0, msecs);
	RETURN_LONG(phpqt_qtime_from_m_secs_since_start_of_day(&_0));
}

PHP_METHOD(Qt_Core_QTime_QTime, msecsSinceStartOfDay)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qtime_msecs_since_start_of_day(&_0));
}

PHP_METHOD(Qt_Core_QTime_QTime, currentTime)
{

	RETURN_LONG(phpqt_qtime_current_time());
}

PHP_METHOD(Qt_Core_QTime_QTime, fromString)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *string__param = NULL, *format = NULL, format_sub, __$null;
	zval string_;

	ZVAL_UNDEF(&string_);
	ZVAL_UNDEF(&format_sub);
	ZVAL_NULL(&__$null);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_STR(string_)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(format)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 1, &string__param, &format);
	zephir_get_strval(&string_, string__param);
	if (!format) {
		format = &format_sub;
		format = &__$null;
	}
	RETURN_MM_LONG(phpqt_qtime_from_string(&string_, format));
}

PHP_METHOD(Qt_Core_QTime_QTime, fromStringQStringViewQStringView)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *string__param = NULL, *format_param = NULL;
	zval string_, format;

	ZVAL_UNDEF(&string_);
	ZVAL_UNDEF(&format);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_STR(string_)
		Z_PARAM_STR(format)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &string__param, &format_param);
	zephir_get_strval(&string_, string__param);
	zephir_get_strval(&format, format_param);
	RETURN_MM_LONG(phpqt_qtime_from_string_q_string_view_q_string_view(&string_, &format));
}

PHP_METHOD(Qt_Core_QTime_QTime, fromStringQStringQStringView)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *string__param = NULL, *format_param = NULL;
	zval string_, format;

	ZVAL_UNDEF(&string_);
	ZVAL_UNDEF(&format);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_STR(string_)
		Z_PARAM_STR(format)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &string__param, &format_param);
	zephir_get_strval(&string_, string__param);
	zephir_get_strval(&format, format_param);
	RETURN_MM_LONG(phpqt_qtime_from_string_q_string_q_string_view(&string_, &format));
}

PHP_METHOD(Qt_Core_QTime_QTime, fromStringQStringQtDateFormat)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *string__param = NULL, *format = NULL, format_sub, __$null;
	zval string_;

	ZVAL_UNDEF(&string_);
	ZVAL_UNDEF(&format_sub);
	ZVAL_NULL(&__$null);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_STR(string_)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(format)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 1, &string__param, &format);
	zephir_get_strval(&string_, string__param);
	if (!format) {
		format = &format_sub;
		format = &__$null;
	}
	RETURN_MM_LONG(phpqt_qtime_from_string_q_string_qt_date_format(&string_, format));
}

PHP_METHOD(Qt_Core_QTime_QTime, fromStringQStringQString)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *string__param = NULL, *format_param = NULL;
	zval string_, format;

	ZVAL_UNDEF(&string_);
	ZVAL_UNDEF(&format);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_STR(string_)
		Z_PARAM_STR(format)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &string__param, &format_param);
	zephir_get_strval(&string_, string__param);
	zephir_get_strval(&format, format_param);
	RETURN_MM_LONG(phpqt_qtime_from_string_q_string_q_string(&string_, &format));
}

PHP_METHOD(Qt_Core_QTime_QTime, isValidIntIntIntInt)
{
	zval *h_param = NULL, *m_param = NULL, *s_param = NULL, *ms_param = NULL, _0, _1, _2, _3;
	zend_long h, m, s, ms, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(3, 4)
		Z_PARAM_LONG(h)
		Z_PARAM_LONG(m)
		Z_PARAM_LONG(s)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(ms)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 1, &h_param, &m_param, &s_param, &ms_param);
	if (!ms_param) {
		ms = 0;
	} else {
		}
	ZVAL_LONG(&_0, h);
	ZVAL_LONG(&_1, m);
	ZVAL_LONG(&_2, s);
	ZVAL_LONG(&_3, ms);
	r = phpqt_qtime_is_valid_int_int_int_int(&_0, &_1, &_2, &_3);
	RETURN_BOOL(r == 1);
}

