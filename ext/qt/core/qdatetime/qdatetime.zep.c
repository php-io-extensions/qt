
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
#include "src/core-qdatetime.h"
#include "kernel/object.h"
#include "kernel/operators.h"
#include "kernel/memory.h"
#include "kernel/string.h"


ZEPHIR_INIT_CLASS(Qt_Core_QDateTime_QDateTime)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Core\\QDateTime, QDateTime, qt, core_qdatetime_qdatetime, qt_core_qdatetime_qdatetime_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Core_QDateTime_QDateTime, new_)
{

	RETURN_LONG(phpqt_qdatetime_new());
}

PHP_METHOD(Qt_Core_QDateTime_QDateTime, newQDateQTimeQtTimeSpecInt)
{
	zval *date_param = NULL, *time_param = NULL, *spec_param = NULL, *offsetSeconds_param = NULL, _0, _1, _2, _3;
	zend_long date, time, spec, offsetSeconds;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(3, 4)
		Z_PARAM_LONG(date)
		Z_PARAM_LONG(time)
		Z_PARAM_LONG(spec)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(offsetSeconds)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 1, &date_param, &time_param, &spec_param, &offsetSeconds_param);
	if (!offsetSeconds_param) {
		offsetSeconds = 0;
	} else {
		}
	ZVAL_LONG(&_0, date);
	ZVAL_LONG(&_1, time);
	ZVAL_LONG(&_2, spec);
	ZVAL_LONG(&_3, offsetSeconds);
	RETURN_LONG(phpqt_qdatetime_new_q_date_q_time_qt_time_spec_int(&_0, &_1, &_2, &_3));
}

PHP_METHOD(Qt_Core_QDateTime_QDateTime, newQDateQTimeQTimeZoneQDateTimeTransitionResolution)
{
	zval *date_param = NULL, *time_param = NULL, *timeZone_param = NULL, *resolve = NULL, resolve_sub, __$null, _0, _1, _2;
	zend_long date, time, timeZone;

	ZVAL_UNDEF(&resolve_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(3, 4)
		Z_PARAM_LONG(date)
		Z_PARAM_LONG(time)
		Z_PARAM_LONG(timeZone)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(resolve)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 1, &date_param, &time_param, &timeZone_param, &resolve);
	if (!resolve) {
		resolve = &resolve_sub;
		resolve = &__$null;
	}
	ZVAL_LONG(&_0, date);
	ZVAL_LONG(&_1, time);
	ZVAL_LONG(&_2, timeZone);
	RETURN_LONG(phpqt_qdatetime_new_q_date_q_time_q_time_zone_q_date_time_transition_resolution(&_0, &_1, &_2, resolve));
}

PHP_METHOD(Qt_Core_QDateTime_QDateTime, newQDateQTimeQDateTimeTransitionResolution)
{
	zval *date_param = NULL, *time_param = NULL, *resolve = NULL, resolve_sub, __$null, _0, _1;
	zend_long date, time;

	ZVAL_UNDEF(&resolve_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(2, 3)
		Z_PARAM_LONG(date)
		Z_PARAM_LONG(time)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(resolve)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 1, &date_param, &time_param, &resolve);
	if (!resolve) {
		resolve = &resolve_sub;
		resolve = &__$null;
	}
	ZVAL_LONG(&_0, date);
	ZVAL_LONG(&_1, time);
	RETURN_LONG(phpqt_qdatetime_new_q_date_q_time_q_date_time_transition_resolution(&_0, &_1, resolve));
}

PHP_METHOD(Qt_Core_QDateTime_QDateTime, newQDateTime)
{
	zval *other_param = NULL, _0;
	zend_long other;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(other)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &other_param);
	ZVAL_LONG(&_0, other);
	RETURN_LONG(phpqt_qdatetime_new_q_date_time(&_0));
}

PHP_METHOD(Qt_Core_QDateTime_QDateTime, swap)
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
	phpqt_qdatetime_swap(&_0, &_1);
}

PHP_METHOD(Qt_Core_QDateTime_QDateTime, isNull)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qdatetime_is_null(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QDateTime_QDateTime, isValid)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qdatetime_is_valid(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QDateTime_QDateTime, date)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qdatetime_date(&_0));
}

PHP_METHOD(Qt_Core_QDateTime_QDateTime, time)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qdatetime_time(&_0));
}

PHP_METHOD(Qt_Core_QDateTime_QDateTime, timeSpec)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qdatetime_time_spec(&_0));
}

PHP_METHOD(Qt_Core_QDateTime_QDateTime, offsetFromUtc)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qdatetime_offset_from_utc(&_0));
}

PHP_METHOD(Qt_Core_QDateTime_QDateTime, timeRepresentation)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qdatetime_time_representation(&_0));
}

PHP_METHOD(Qt_Core_QDateTime_QDateTime, timeZone)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qdatetime_time_zone(&_0));
}

PHP_METHOD(Qt_Core_QDateTime_QDateTime, timeZoneAbbreviation)
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
	phpqt_qdatetime_time_zone_abbreviation(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QDateTime_QDateTime, isDaylightTime)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qdatetime_is_daylight_time(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QDateTime_QDateTime, toMSecsSinceEpoch)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qdatetime_to_m_secs_since_epoch(&_0));
}

PHP_METHOD(Qt_Core_QDateTime_QDateTime, toSecsSinceEpoch)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qdatetime_to_secs_since_epoch(&_0));
}

PHP_METHOD(Qt_Core_QDateTime_QDateTime, setDate)
{
	zval *handle_param = NULL, *date_param = NULL, *resolve = NULL, resolve_sub, __$null, _0, _1;
	zend_long handle, date;

	ZVAL_UNDEF(&resolve_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(2, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(date)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(resolve)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 1, &handle_param, &date_param, &resolve);
	if (!resolve) {
		resolve = &resolve_sub;
		resolve = &__$null;
	}
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, date);
	phpqt_qdatetime_set_date(&_0, &_1, resolve);
}

PHP_METHOD(Qt_Core_QDateTime_QDateTime, setTime)
{
	zval *handle_param = NULL, *time_param = NULL, *resolve = NULL, resolve_sub, __$null, _0, _1;
	zend_long handle, time;

	ZVAL_UNDEF(&resolve_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(2, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(time)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(resolve)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 1, &handle_param, &time_param, &resolve);
	if (!resolve) {
		resolve = &resolve_sub;
		resolve = &__$null;
	}
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, time);
	phpqt_qdatetime_set_time(&_0, &_1, resolve);
}

PHP_METHOD(Qt_Core_QDateTime_QDateTime, setTimeZone)
{
	zval *handle_param = NULL, *toZone_param = NULL, *resolve = NULL, resolve_sub, __$null, _0, _1;
	zend_long handle, toZone;

	ZVAL_UNDEF(&resolve_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(2, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(toZone)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(resolve)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 1, &handle_param, &toZone_param, &resolve);
	if (!resolve) {
		resolve = &resolve_sub;
		resolve = &__$null;
	}
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, toZone);
	phpqt_qdatetime_set_time_zone(&_0, &_1, resolve);
}

PHP_METHOD(Qt_Core_QDateTime_QDateTime, setMSecsSinceEpoch)
{
	zval *handle_param = NULL, *msecs_param = NULL, _0, _1;
	zend_long handle, msecs;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(msecs)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &msecs_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, msecs);
	phpqt_qdatetime_set_m_secs_since_epoch(&_0, &_1);
}

PHP_METHOD(Qt_Core_QDateTime_QDateTime, setSecsSinceEpoch)
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
	phpqt_qdatetime_set_secs_since_epoch(&_0, &_1);
}

PHP_METHOD(Qt_Core_QDateTime_QDateTime, toString)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, *format = NULL, format_sub, __$null, result, _0;
	zend_long handle;

	ZVAL_UNDEF(&format_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(format)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 1, &handle_param, &format);
	if (!format) {
		format = &format_sub;
		format = &__$null;
	}
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	phpqt_qdatetime_to_string(&result, &_0, format);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QDateTime_QDateTime, toStringQString)
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
	phpqt_qdatetime_to_string_q_string(&result, &_0, &format);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QDateTime_QDateTime, toStringQStringQCalendar)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval format;
	zval *handle_param = NULL, *format_param = NULL, *cal_param = NULL, result, _0, _1;
	zend_long handle, cal;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&format);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(format)
		Z_PARAM_LONG(cal)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 3, 0, &handle_param, &format_param, &cal_param);
	zephir_get_strval(&format, format_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, cal);
	phpqt_qdatetime_to_string_q_string_q_calendar(&result, &_0, &format, &_1);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QDateTime_QDateTime, toStringQStringView)
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
	phpqt_qdatetime_to_string_q_string_view(&result, &_0, &format);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QDateTime_QDateTime, toStringQStringViewQCalendar)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval format;
	zval *handle_param = NULL, *format_param = NULL, *cal_param = NULL, result, _0, _1;
	zend_long handle, cal;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&format);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(format)
		Z_PARAM_LONG(cal)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 3, 0, &handle_param, &format_param, &cal_param);
	zephir_get_strval(&format, format_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, cal);
	phpqt_qdatetime_to_string_q_string_view_q_calendar(&result, &_0, &format, &_1);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QDateTime_QDateTime, addDays)
{
	zval *handle_param = NULL, *days_param = NULL, _0, _1;
	zend_long handle, days;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(days)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &days_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, days);
	RETURN_LONG(phpqt_qdatetime_add_days(&_0, &_1));
}

PHP_METHOD(Qt_Core_QDateTime_QDateTime, addMonths)
{
	zval *handle_param = NULL, *months_param = NULL, _0, _1;
	zend_long handle, months;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(months)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &months_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, months);
	RETURN_LONG(phpqt_qdatetime_add_months(&_0, &_1));
}

PHP_METHOD(Qt_Core_QDateTime_QDateTime, addYears)
{
	zval *handle_param = NULL, *years_param = NULL, _0, _1;
	zend_long handle, years;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(years)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &years_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, years);
	RETURN_LONG(phpqt_qdatetime_add_years(&_0, &_1));
}

PHP_METHOD(Qt_Core_QDateTime_QDateTime, addSecs)
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
	RETURN_LONG(phpqt_qdatetime_add_secs(&_0, &_1));
}

PHP_METHOD(Qt_Core_QDateTime_QDateTime, addMSecs)
{
	zval *handle_param = NULL, *msecs_param = NULL, _0, _1;
	zend_long handle, msecs;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(msecs)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &msecs_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, msecs);
	RETURN_LONG(phpqt_qdatetime_add_m_secs(&_0, &_1));
}

PHP_METHOD(Qt_Core_QDateTime_QDateTime, toLocalTime)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qdatetime_to_local_time(&_0));
}

PHP_METHOD(Qt_Core_QDateTime_QDateTime, toUTC)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qdatetime_to_u_t_c(&_0));
}

PHP_METHOD(Qt_Core_QDateTime_QDateTime, toOffsetFromUtc)
{
	zval *handle_param = NULL, *offsetSeconds_param = NULL, _0, _1;
	zend_long handle, offsetSeconds;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(offsetSeconds)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &offsetSeconds_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, offsetSeconds);
	RETURN_LONG(phpqt_qdatetime_to_offset_from_utc(&_0, &_1));
}

PHP_METHOD(Qt_Core_QDateTime_QDateTime, toTimeZone)
{
	zval *handle_param = NULL, *toZone_param = NULL, _0, _1;
	zend_long handle, toZone;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(toZone)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &toZone_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, toZone);
	RETURN_LONG(phpqt_qdatetime_to_time_zone(&_0, &_1));
}

PHP_METHOD(Qt_Core_QDateTime_QDateTime, daysTo)
{
	zval *handle_param = NULL, *arg0_param = NULL, _0, _1;
	zend_long handle, arg0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(arg0)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &arg0_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, arg0);
	RETURN_LONG(phpqt_qdatetime_days_to(&_0, &_1));
}

PHP_METHOD(Qt_Core_QDateTime_QDateTime, secsTo)
{
	zval *handle_param = NULL, *arg0_param = NULL, _0, _1;
	zend_long handle, arg0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(arg0)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &arg0_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, arg0);
	RETURN_LONG(phpqt_qdatetime_secs_to(&_0, &_1));
}

PHP_METHOD(Qt_Core_QDateTime_QDateTime, msecsTo)
{
	zval *handle_param = NULL, *arg0_param = NULL, _0, _1;
	zend_long handle, arg0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(arg0)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &arg0_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, arg0);
	RETURN_LONG(phpqt_qdatetime_msecs_to(&_0, &_1));
}

PHP_METHOD(Qt_Core_QDateTime_QDateTime, currentDateTime)
{
	zval *zone_param = NULL, _0;
	zend_long zone;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(zone)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &zone_param);
	ZVAL_LONG(&_0, zone);
	RETURN_LONG(phpqt_qdatetime_current_date_time(&_0));
}

PHP_METHOD(Qt_Core_QDateTime_QDateTime, currentDateTime2)
{

	RETURN_LONG(phpqt_qdatetime_current_date_time2());
}

PHP_METHOD(Qt_Core_QDateTime_QDateTime, currentDateTimeUtc)
{

	RETURN_LONG(phpqt_qdatetime_current_date_time_utc());
}

PHP_METHOD(Qt_Core_QDateTime_QDateTime, fromString)
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
	RETURN_MM_LONG(phpqt_qdatetime_from_string(&string_, format));
}

PHP_METHOD(Qt_Core_QDateTime_QDateTime, fromStringQStringQtDateFormat)
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
	RETURN_MM_LONG(phpqt_qdatetime_from_string_q_string_qt_date_format(&string_, format));
}

PHP_METHOD(Qt_Core_QDateTime_QDateTime, fromStringQStringViewQStringViewQCalendar)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long cal;
	zval *string__param = NULL, *format_param = NULL, *cal_param = NULL, _0;
	zval string_, format;

	ZVAL_UNDEF(&string_);
	ZVAL_UNDEF(&format);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_STR(string_)
		Z_PARAM_STR(format)
		Z_PARAM_LONG(cal)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 3, 0, &string__param, &format_param, &cal_param);
	zephir_get_strval(&string_, string__param);
	zephir_get_strval(&format, format_param);
	ZVAL_LONG(&_0, cal);
	RETURN_MM_LONG(phpqt_qdatetime_from_string_q_string_view_q_string_view_q_calendar(&string_, &format, &_0));
}

PHP_METHOD(Qt_Core_QDateTime_QDateTime, fromStringQStringQStringViewQCalendar)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long cal;
	zval *string__param = NULL, *format_param = NULL, *cal_param = NULL, _0;
	zval string_, format;

	ZVAL_UNDEF(&string_);
	ZVAL_UNDEF(&format);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_STR(string_)
		Z_PARAM_STR(format)
		Z_PARAM_LONG(cal)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 3, 0, &string__param, &format_param, &cal_param);
	zephir_get_strval(&string_, string__param);
	zephir_get_strval(&format, format_param);
	ZVAL_LONG(&_0, cal);
	RETURN_MM_LONG(phpqt_qdatetime_from_string_q_string_q_string_view_q_calendar(&string_, &format, &_0));
}

PHP_METHOD(Qt_Core_QDateTime_QDateTime, fromStringQStringQStringQCalendar)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long cal;
	zval *string__param = NULL, *format_param = NULL, *cal_param = NULL, _0;
	zval string_, format;

	ZVAL_UNDEF(&string_);
	ZVAL_UNDEF(&format);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_STR(string_)
		Z_PARAM_STR(format)
		Z_PARAM_LONG(cal)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 3, 0, &string__param, &format_param, &cal_param);
	zephir_get_strval(&string_, string__param);
	zephir_get_strval(&format, format_param);
	ZVAL_LONG(&_0, cal);
	RETURN_MM_LONG(phpqt_qdatetime_from_string_q_string_q_string_q_calendar(&string_, &format, &_0));
}

PHP_METHOD(Qt_Core_QDateTime_QDateTime, fromStringQStringViewQStringViewInt)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *string__param = NULL, *format_param = NULL, *baseYear = NULL, baseYear_sub, __$null;
	zval string_, format;

	ZVAL_UNDEF(&string_);
	ZVAL_UNDEF(&format);
	ZVAL_UNDEF(&baseYear_sub);
	ZVAL_NULL(&__$null);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(2, 3)
		Z_PARAM_STR(string_)
		Z_PARAM_STR(format)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(baseYear)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 1, &string__param, &format_param, &baseYear);
	zephir_get_strval(&string_, string__param);
	zephir_get_strval(&format, format_param);
	if (!baseYear) {
		baseYear = &baseYear_sub;
		baseYear = &__$null;
	}
	RETURN_MM_LONG(phpqt_qdatetime_from_string_q_string_view_q_string_view_int(&string_, &format, baseYear));
}

PHP_METHOD(Qt_Core_QDateTime_QDateTime, fromStringQStringViewQStringViewIntQCalendar)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long baseYear, cal;
	zval *string__param = NULL, *format_param = NULL, *baseYear_param = NULL, *cal_param = NULL, _0, _1;
	zval string_, format;

	ZVAL_UNDEF(&string_);
	ZVAL_UNDEF(&format);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_STR(string_)
		Z_PARAM_STR(format)
		Z_PARAM_LONG(baseYear)
		Z_PARAM_LONG(cal)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 4, 0, &string__param, &format_param, &baseYear_param, &cal_param);
	zephir_get_strval(&string_, string__param);
	zephir_get_strval(&format, format_param);
	ZVAL_LONG(&_0, baseYear);
	ZVAL_LONG(&_1, cal);
	RETURN_MM_LONG(phpqt_qdatetime_from_string_q_string_view_q_string_view_int_q_calendar(&string_, &format, &_0, &_1));
}

PHP_METHOD(Qt_Core_QDateTime_QDateTime, fromStringQStringQStringViewInt)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *string__param = NULL, *format_param = NULL, *baseYear = NULL, baseYear_sub, __$null;
	zval string_, format;

	ZVAL_UNDEF(&string_);
	ZVAL_UNDEF(&format);
	ZVAL_UNDEF(&baseYear_sub);
	ZVAL_NULL(&__$null);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(2, 3)
		Z_PARAM_STR(string_)
		Z_PARAM_STR(format)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(baseYear)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 1, &string__param, &format_param, &baseYear);
	zephir_get_strval(&string_, string__param);
	zephir_get_strval(&format, format_param);
	if (!baseYear) {
		baseYear = &baseYear_sub;
		baseYear = &__$null;
	}
	RETURN_MM_LONG(phpqt_qdatetime_from_string_q_string_q_string_view_int(&string_, &format, baseYear));
}

PHP_METHOD(Qt_Core_QDateTime_QDateTime, fromStringQStringQStringViewIntQCalendar)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long baseYear, cal;
	zval *string__param = NULL, *format_param = NULL, *baseYear_param = NULL, *cal_param = NULL, _0, _1;
	zval string_, format;

	ZVAL_UNDEF(&string_);
	ZVAL_UNDEF(&format);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_STR(string_)
		Z_PARAM_STR(format)
		Z_PARAM_LONG(baseYear)
		Z_PARAM_LONG(cal)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 4, 0, &string__param, &format_param, &baseYear_param, &cal_param);
	zephir_get_strval(&string_, string__param);
	zephir_get_strval(&format, format_param);
	ZVAL_LONG(&_0, baseYear);
	ZVAL_LONG(&_1, cal);
	RETURN_MM_LONG(phpqt_qdatetime_from_string_q_string_q_string_view_int_q_calendar(&string_, &format, &_0, &_1));
}

PHP_METHOD(Qt_Core_QDateTime_QDateTime, fromStringQStringQStringInt)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *string__param = NULL, *format_param = NULL, *baseYear = NULL, baseYear_sub, __$null;
	zval string_, format;

	ZVAL_UNDEF(&string_);
	ZVAL_UNDEF(&format);
	ZVAL_UNDEF(&baseYear_sub);
	ZVAL_NULL(&__$null);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(2, 3)
		Z_PARAM_STR(string_)
		Z_PARAM_STR(format)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(baseYear)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 1, &string__param, &format_param, &baseYear);
	zephir_get_strval(&string_, string__param);
	zephir_get_strval(&format, format_param);
	if (!baseYear) {
		baseYear = &baseYear_sub;
		baseYear = &__$null;
	}
	RETURN_MM_LONG(phpqt_qdatetime_from_string_q_string_q_string_int(&string_, &format, baseYear));
}

PHP_METHOD(Qt_Core_QDateTime_QDateTime, fromStringQStringQStringIntQCalendar)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long baseYear, cal;
	zval *string__param = NULL, *format_param = NULL, *baseYear_param = NULL, *cal_param = NULL, _0, _1;
	zval string_, format;

	ZVAL_UNDEF(&string_);
	ZVAL_UNDEF(&format);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_STR(string_)
		Z_PARAM_STR(format)
		Z_PARAM_LONG(baseYear)
		Z_PARAM_LONG(cal)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 4, 0, &string__param, &format_param, &baseYear_param, &cal_param);
	zephir_get_strval(&string_, string__param);
	zephir_get_strval(&format, format_param);
	ZVAL_LONG(&_0, baseYear);
	ZVAL_LONG(&_1, cal);
	RETURN_MM_LONG(phpqt_qdatetime_from_string_q_string_q_string_int_q_calendar(&string_, &format, &_0, &_1));
}

PHP_METHOD(Qt_Core_QDateTime_QDateTime, fromMSecsSinceEpoch)
{
	zval *msecs_param = NULL, *timeZone_param = NULL, _0, _1;
	zend_long msecs, timeZone;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(msecs)
		Z_PARAM_LONG(timeZone)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &msecs_param, &timeZone_param);
	ZVAL_LONG(&_0, msecs);
	ZVAL_LONG(&_1, timeZone);
	RETURN_LONG(phpqt_qdatetime_from_m_secs_since_epoch(&_0, &_1));
}

PHP_METHOD(Qt_Core_QDateTime_QDateTime, fromSecsSinceEpoch)
{
	zval *secs_param = NULL, *timeZone_param = NULL, _0, _1;
	zend_long secs, timeZone;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(secs)
		Z_PARAM_LONG(timeZone)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &secs_param, &timeZone_param);
	ZVAL_LONG(&_0, secs);
	ZVAL_LONG(&_1, timeZone);
	RETURN_LONG(phpqt_qdatetime_from_secs_since_epoch(&_0, &_1));
}

PHP_METHOD(Qt_Core_QDateTime_QDateTime, fromMSecsSinceEpochQint64)
{
	zval *msecs_param = NULL, _0;
	zend_long msecs;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(msecs)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &msecs_param);
	ZVAL_LONG(&_0, msecs);
	RETURN_LONG(phpqt_qdatetime_from_m_secs_since_epoch_qint64(&_0));
}

PHP_METHOD(Qt_Core_QDateTime_QDateTime, fromSecsSinceEpochQint64)
{
	zval *secs_param = NULL, _0;
	zend_long secs;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(secs)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &secs_param);
	ZVAL_LONG(&_0, secs);
	RETURN_LONG(phpqt_qdatetime_from_secs_since_epoch_qint64(&_0));
}

PHP_METHOD(Qt_Core_QDateTime_QDateTime, currentMSecsSinceEpoch)
{

	RETURN_LONG(phpqt_qdatetime_current_m_secs_since_epoch());
}

PHP_METHOD(Qt_Core_QDateTime_QDateTime, currentSecsSinceEpoch)
{

	RETURN_LONG(phpqt_qdatetime_current_secs_since_epoch());
}

