
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
#include "src/core-qdate.h"
#include "kernel/object.h"
#include "kernel/operators.h"
#include "kernel/memory.h"
#include "kernel/string.h"


ZEPHIR_INIT_CLASS(Qt_Core_QDate_QDate)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Core\\QDate, QDate, qt, core_qdate_qdate, qt_core_qdate_qdate_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Core_QDate_QDate, new_)
{

	RETURN_LONG(phpqt_qdate_new());
}

PHP_METHOD(Qt_Core_QDate_QDate, newIntIntInt)
{
	zval *y_param = NULL, *m_param = NULL, *d_param = NULL, _0, _1, _2;
	zend_long y, m, d;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(y)
		Z_PARAM_LONG(m)
		Z_PARAM_LONG(d)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &y_param, &m_param, &d_param);
	ZVAL_LONG(&_0, y);
	ZVAL_LONG(&_1, m);
	ZVAL_LONG(&_2, d);
	RETURN_LONG(phpqt_qdate_new_int_int_int(&_0, &_1, &_2));
}

PHP_METHOD(Qt_Core_QDate_QDate, newIntIntIntQCalendar)
{
	zval *y_param = NULL, *m_param = NULL, *d_param = NULL, *cal_param = NULL, _0, _1, _2, _3;
	zend_long y, m, d, cal;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(y)
		Z_PARAM_LONG(m)
		Z_PARAM_LONG(d)
		Z_PARAM_LONG(cal)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 0, &y_param, &m_param, &d_param, &cal_param);
	ZVAL_LONG(&_0, y);
	ZVAL_LONG(&_1, m);
	ZVAL_LONG(&_2, d);
	ZVAL_LONG(&_3, cal);
	RETURN_LONG(phpqt_qdate_new_int_int_int_q_calendar(&_0, &_1, &_2, &_3));
}

PHP_METHOD(Qt_Core_QDate_QDate, isNull)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qdate_is_null(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QDate_QDate, isValid)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qdate_is_valid(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QDate_QDate, year)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qdate_year(&_0));
}

PHP_METHOD(Qt_Core_QDate_QDate, month)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qdate_month(&_0));
}

PHP_METHOD(Qt_Core_QDate_QDate, day)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qdate_day(&_0));
}

PHP_METHOD(Qt_Core_QDate_QDate, dayOfWeek)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qdate_day_of_week(&_0));
}

PHP_METHOD(Qt_Core_QDate_QDate, dayOfYear)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qdate_day_of_year(&_0));
}

PHP_METHOD(Qt_Core_QDate_QDate, daysInMonth)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qdate_days_in_month(&_0));
}

PHP_METHOD(Qt_Core_QDate_QDate, daysInYear)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qdate_days_in_year(&_0));
}

PHP_METHOD(Qt_Core_QDate_QDate, weekNumber)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, *yearNum = NULL, yearNum_sub, __$null, result, _0;
	zend_long handle;

	ZVAL_UNDEF(&yearNum_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(yearNum)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 1, &handle_param, &yearNum);
	if (!yearNum) {
		yearNum = &yearNum_sub;
		yearNum = &__$null;
	}
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	phpqt_qdate_week_number(&result, &_0, yearNum);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QDate_QDate, yearQCalendar)
{
	zval *handle_param = NULL, *cal_param = NULL, _0, _1;
	zend_long handle, cal;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(cal)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &cal_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, cal);
	RETURN_LONG(phpqt_qdate_year_q_calendar(&_0, &_1));
}

PHP_METHOD(Qt_Core_QDate_QDate, monthQCalendar)
{
	zval *handle_param = NULL, *cal_param = NULL, _0, _1;
	zend_long handle, cal;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(cal)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &cal_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, cal);
	RETURN_LONG(phpqt_qdate_month_q_calendar(&_0, &_1));
}

PHP_METHOD(Qt_Core_QDate_QDate, dayQCalendar)
{
	zval *handle_param = NULL, *cal_param = NULL, _0, _1;
	zend_long handle, cal;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(cal)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &cal_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, cal);
	RETURN_LONG(phpqt_qdate_day_q_calendar(&_0, &_1));
}

PHP_METHOD(Qt_Core_QDate_QDate, dayOfWeekQCalendar)
{
	zval *handle_param = NULL, *cal_param = NULL, _0, _1;
	zend_long handle, cal;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(cal)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &cal_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, cal);
	RETURN_LONG(phpqt_qdate_day_of_week_q_calendar(&_0, &_1));
}

PHP_METHOD(Qt_Core_QDate_QDate, dayOfYearQCalendar)
{
	zval *handle_param = NULL, *cal_param = NULL, _0, _1;
	zend_long handle, cal;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(cal)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &cal_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, cal);
	RETURN_LONG(phpqt_qdate_day_of_year_q_calendar(&_0, &_1));
}

PHP_METHOD(Qt_Core_QDate_QDate, daysInMonthQCalendar)
{
	zval *handle_param = NULL, *cal_param = NULL, _0, _1;
	zend_long handle, cal;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(cal)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &cal_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, cal);
	RETURN_LONG(phpqt_qdate_days_in_month_q_calendar(&_0, &_1));
}

PHP_METHOD(Qt_Core_QDate_QDate, daysInYearQCalendar)
{
	zval *handle_param = NULL, *cal_param = NULL, _0, _1;
	zend_long handle, cal;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(cal)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &cal_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, cal);
	RETURN_LONG(phpqt_qdate_days_in_year_q_calendar(&_0, &_1));
}

PHP_METHOD(Qt_Core_QDate_QDate, startOfDay)
{
	zval *handle_param = NULL, *zone_param = NULL, _0, _1;
	zend_long handle, zone;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(zone)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &zone_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, zone);
	RETURN_LONG(phpqt_qdate_start_of_day(&_0, &_1));
}

PHP_METHOD(Qt_Core_QDate_QDate, endOfDay)
{
	zval *handle_param = NULL, *zone_param = NULL, _0, _1;
	zend_long handle, zone;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(zone)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &zone_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, zone);
	RETURN_LONG(phpqt_qdate_end_of_day(&_0, &_1));
}

PHP_METHOD(Qt_Core_QDate_QDate, startOfDay2)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qdate_start_of_day2(&_0));
}

PHP_METHOD(Qt_Core_QDate_QDate, endOfDay2)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qdate_end_of_day2(&_0));
}

PHP_METHOD(Qt_Core_QDate_QDate, toString)
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
	phpqt_qdate_to_string(&result, &_0, format);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QDate_QDate, toStringQString)
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
	phpqt_qdate_to_string_q_string(&result, &_0, &format);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QDate_QDate, toStringQStringQCalendar)
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
	phpqt_qdate_to_string_q_string_q_calendar(&result, &_0, &format, &_1);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QDate_QDate, toStringQStringView)
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
	phpqt_qdate_to_string_q_string_view(&result, &_0, &format);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QDate_QDate, toStringQStringViewQCalendar)
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
	phpqt_qdate_to_string_q_string_view_q_calendar(&result, &_0, &format, &_1);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QDate_QDate, setDate)
{
	zval *handle_param = NULL, *year_param = NULL, *month_param = NULL, *day_param = NULL, _0, _1, _2, _3;
	zend_long handle, year, month, day, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(year)
		Z_PARAM_LONG(month)
		Z_PARAM_LONG(day)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 0, &handle_param, &year_param, &month_param, &day_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, year);
	ZVAL_LONG(&_2, month);
	ZVAL_LONG(&_3, day);
	r = phpqt_qdate_set_date(&_0, &_1, &_2, &_3);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QDate_QDate, setDateIntIntIntQCalendar)
{
	zval *handle_param = NULL, *year_param = NULL, *month_param = NULL, *day_param = NULL, *cal_param = NULL, _0, _1, _2, _3, _4;
	zend_long handle, year, month, day, cal, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZEND_PARSE_PARAMETERS_START(5, 5)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(year)
		Z_PARAM_LONG(month)
		Z_PARAM_LONG(day)
		Z_PARAM_LONG(cal)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(5, 0, &handle_param, &year_param, &month_param, &day_param, &cal_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, year);
	ZVAL_LONG(&_2, month);
	ZVAL_LONG(&_3, day);
	ZVAL_LONG(&_4, cal);
	r = phpqt_qdate_set_date_int_int_int_q_calendar(&_0, &_1, &_2, &_3, &_4);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QDate_QDate, getDate)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, *year = NULL, year_sub, *month = NULL, month_sub, *day = NULL, day_sub, result, _0;
	zend_long handle;

	ZVAL_UNDEF(&year_sub);
	ZVAL_UNDEF(&month_sub);
	ZVAL_UNDEF(&day_sub);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(year)
		Z_PARAM_ZVAL(month)
		Z_PARAM_ZVAL(day)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 4, 0, &handle_param, &year, &month, &day);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	phpqt_qdate_get_date(&result, &_0, year, month, day);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QDate_QDate, addDays)
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
	RETURN_LONG(phpqt_qdate_add_days(&_0, &_1));
}

PHP_METHOD(Qt_Core_QDate_QDate, addMonths)
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
	RETURN_LONG(phpqt_qdate_add_months(&_0, &_1));
}

PHP_METHOD(Qt_Core_QDate_QDate, addYears)
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
	RETURN_LONG(phpqt_qdate_add_years(&_0, &_1));
}

PHP_METHOD(Qt_Core_QDate_QDate, addMonthsIntQCalendar)
{
	zval *handle_param = NULL, *months_param = NULL, *cal_param = NULL, _0, _1, _2;
	zend_long handle, months, cal;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(months)
		Z_PARAM_LONG(cal)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &months_param, &cal_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, months);
	ZVAL_LONG(&_2, cal);
	RETURN_LONG(phpqt_qdate_add_months_int_q_calendar(&_0, &_1, &_2));
}

PHP_METHOD(Qt_Core_QDate_QDate, addYearsIntQCalendar)
{
	zval *handle_param = NULL, *years_param = NULL, *cal_param = NULL, _0, _1, _2;
	zend_long handle, years, cal;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(years)
		Z_PARAM_LONG(cal)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &years_param, &cal_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, years);
	ZVAL_LONG(&_2, cal);
	RETURN_LONG(phpqt_qdate_add_years_int_q_calendar(&_0, &_1, &_2));
}

PHP_METHOD(Qt_Core_QDate_QDate, daysTo)
{
	zval *handle_param = NULL, *d_param = NULL, _0, _1;
	zend_long handle, d;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(d)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &d_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, d);
	RETURN_LONG(phpqt_qdate_days_to(&_0, &_1));
}

PHP_METHOD(Qt_Core_QDate_QDate, currentDate)
{

	RETURN_LONG(phpqt_qdate_current_date());
}

PHP_METHOD(Qt_Core_QDate_QDate, fromString)
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
	RETURN_MM_LONG(phpqt_qdate_from_string(&string_, format));
}

PHP_METHOD(Qt_Core_QDate_QDate, fromStringQStringQtDateFormat)
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
	RETURN_MM_LONG(phpqt_qdate_from_string_q_string_qt_date_format(&string_, format));
}

PHP_METHOD(Qt_Core_QDate_QDate, fromStringQStringViewQStringViewQCalendar)
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
	RETURN_MM_LONG(phpqt_qdate_from_string_q_string_view_q_string_view_q_calendar(&string_, &format, &_0));
}

PHP_METHOD(Qt_Core_QDate_QDate, fromStringQStringQStringViewQCalendar)
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
	RETURN_MM_LONG(phpqt_qdate_from_string_q_string_q_string_view_q_calendar(&string_, &format, &_0));
}

PHP_METHOD(Qt_Core_QDate_QDate, fromStringQStringQStringQCalendar)
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
	RETURN_MM_LONG(phpqt_qdate_from_string_q_string_q_string_q_calendar(&string_, &format, &_0));
}

PHP_METHOD(Qt_Core_QDate_QDate, fromStringQStringViewQStringViewInt)
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
	RETURN_MM_LONG(phpqt_qdate_from_string_q_string_view_q_string_view_int(&string_, &format, baseYear));
}

PHP_METHOD(Qt_Core_QDate_QDate, fromStringQStringViewQStringViewIntQCalendar)
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
	RETURN_MM_LONG(phpqt_qdate_from_string_q_string_view_q_string_view_int_q_calendar(&string_, &format, &_0, &_1));
}

PHP_METHOD(Qt_Core_QDate_QDate, fromStringQStringQStringViewInt)
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
	RETURN_MM_LONG(phpqt_qdate_from_string_q_string_q_string_view_int(&string_, &format, baseYear));
}

PHP_METHOD(Qt_Core_QDate_QDate, fromStringQStringQStringViewIntQCalendar)
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
	RETURN_MM_LONG(phpqt_qdate_from_string_q_string_q_string_view_int_q_calendar(&string_, &format, &_0, &_1));
}

PHP_METHOD(Qt_Core_QDate_QDate, fromStringQStringQStringInt)
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
	RETURN_MM_LONG(phpqt_qdate_from_string_q_string_q_string_int(&string_, &format, baseYear));
}

PHP_METHOD(Qt_Core_QDate_QDate, fromStringQStringQStringIntQCalendar)
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
	RETURN_MM_LONG(phpqt_qdate_from_string_q_string_q_string_int_q_calendar(&string_, &format, &_0, &_1));
}

PHP_METHOD(Qt_Core_QDate_QDate, isValidIntIntInt)
{
	zval *y_param = NULL, *m_param = NULL, *d_param = NULL, _0, _1, _2;
	zend_long y, m, d, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(y)
		Z_PARAM_LONG(m)
		Z_PARAM_LONG(d)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &y_param, &m_param, &d_param);
	ZVAL_LONG(&_0, y);
	ZVAL_LONG(&_1, m);
	ZVAL_LONG(&_2, d);
	r = phpqt_qdate_is_valid_int_int_int(&_0, &_1, &_2);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QDate_QDate, isLeapYear)
{
	zval *year_param = NULL, _0;
	zend_long year, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(year)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &year_param);
	ZVAL_LONG(&_0, year);
	r = phpqt_qdate_is_leap_year(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QDate_QDate, fromJulianDay)
{
	zval *jd__param = NULL, _0;
	zend_long jd_;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(jd_)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &jd__param);
	ZVAL_LONG(&_0, jd_);
	RETURN_LONG(phpqt_qdate_from_julian_day(&_0));
}

PHP_METHOD(Qt_Core_QDate_QDate, toJulianDay)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qdate_to_julian_day(&_0));
}

