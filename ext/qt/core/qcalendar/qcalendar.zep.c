
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
#include "src/core-qcalendar.h"
#include "kernel/object.h"
#include "kernel/operators.h"
#include "kernel/memory.h"
#include "kernel/string.h"


ZEPHIR_INIT_CLASS(Qt_Core_QCalendar_QCalendar)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Core\\QCalendar, QCalendar, qt, core_qcalendar_qcalendar, qt_core_qcalendar_qcalendar_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Core_QCalendar_QCalendar, staticMetaObject)
{

	RETURN_LONG(phpqt_qcalendar_static_meta_object());
}

PHP_METHOD(Qt_Core_QCalendar_QCalendar, qt_check_for_QGADGET_macro)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qcalendar_qt_check_for__q_g_a_d_g_e_t_macro(&_0);
}

PHP_METHOD(Qt_Core_QCalendar_QCalendar, new_)
{

	RETURN_LONG(phpqt_qcalendar_new());
}

PHP_METHOD(Qt_Core_QCalendar_QCalendar, newQCalendarSystem)
{
	zval *system_param = NULL, _0;
	zend_long system;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(system)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &system_param);
	ZVAL_LONG(&_0, system);
	RETURN_LONG(phpqt_qcalendar_new_q_calendar_system(&_0));
}

PHP_METHOD(Qt_Core_QCalendar_QCalendar, newQAnyStringView)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *name_param = NULL;
	zval name;

	ZVAL_UNDEF(&name);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_STR(name)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &name_param);
	zephir_get_strval(&name, name_param);
	RETURN_MM_LONG(phpqt_qcalendar_new_q_any_string_view(&name));
}

PHP_METHOD(Qt_Core_QCalendar_QCalendar, newQCalendarSystemId)
{
	zval *id_param = NULL, _0;
	zend_long id;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(id)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &id_param);
	ZVAL_LONG(&_0, id);
	RETURN_LONG(phpqt_qcalendar_new_q_calendar_system_id(&_0));
}

PHP_METHOD(Qt_Core_QCalendar_QCalendar, isValid)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qcalendar_is_valid(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QCalendar_QCalendar, daysInMonth)
{
	zval *handle_param = NULL, *month_param = NULL, *year = NULL, year_sub, __$null, _0, _1;
	zend_long handle, month;

	ZVAL_UNDEF(&year_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(2, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(month)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(year)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 1, &handle_param, &month_param, &year);
	if (!year) {
		year = &year_sub;
		year = &__$null;
	}
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, month);
	RETURN_LONG(phpqt_qcalendar_days_in_month(&_0, &_1, year));
}

PHP_METHOD(Qt_Core_QCalendar_QCalendar, daysInYear)
{
	zval *handle_param = NULL, *year_param = NULL, _0, _1;
	zend_long handle, year;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(year)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &year_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, year);
	RETURN_LONG(phpqt_qcalendar_days_in_year(&_0, &_1));
}

PHP_METHOD(Qt_Core_QCalendar_QCalendar, monthsInYear)
{
	zval *handle_param = NULL, *year_param = NULL, _0, _1;
	zend_long handle, year;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(year)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &year_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, year);
	RETURN_LONG(phpqt_qcalendar_months_in_year(&_0, &_1));
}

PHP_METHOD(Qt_Core_QCalendar_QCalendar, isDateValid)
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
	r = phpqt_qcalendar_is_date_valid(&_0, &_1, &_2, &_3);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QCalendar_QCalendar, isLeapYear)
{
	zval *handle_param = NULL, *year_param = NULL, _0, _1;
	zend_long handle, year, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(year)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &year_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, year);
	r = phpqt_qcalendar_is_leap_year(&_0, &_1);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QCalendar_QCalendar, isGregorian)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qcalendar_is_gregorian(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QCalendar_QCalendar, isLunar)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qcalendar_is_lunar(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QCalendar_QCalendar, isLuniSolar)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qcalendar_is_luni_solar(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QCalendar_QCalendar, isSolar)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qcalendar_is_solar(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QCalendar_QCalendar, isProleptic)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qcalendar_is_proleptic(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QCalendar_QCalendar, hasYearZero)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qcalendar_has_year_zero(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QCalendar_QCalendar, maximumDaysInMonth)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qcalendar_maximum_days_in_month(&_0));
}

PHP_METHOD(Qt_Core_QCalendar_QCalendar, minimumDaysInMonth)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qcalendar_minimum_days_in_month(&_0));
}

PHP_METHOD(Qt_Core_QCalendar_QCalendar, maximumMonthsInYear)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qcalendar_maximum_months_in_year(&_0));
}

PHP_METHOD(Qt_Core_QCalendar_QCalendar, name)
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
	phpqt_qcalendar_name(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QCalendar_QCalendar, dateFromParts)
{
	zval *handle_param = NULL, *year_param = NULL, *month_param = NULL, *day_param = NULL, _0, _1, _2, _3;
	zend_long handle, year, month, day;

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
	RETURN_LONG(phpqt_qcalendar_date_from_parts(&_0, &_1, &_2, &_3));
}

PHP_METHOD(Qt_Core_QCalendar_QCalendar, dateFromPartsQCalendarYearMonthDay)
{
	zval *handle_param = NULL, *parts_param = NULL, _0, _1;
	zend_long handle, parts;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(parts)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &parts_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, parts);
	RETURN_LONG(phpqt_qcalendar_date_from_parts_q_calendar_year_month_day(&_0, &_1));
}

PHP_METHOD(Qt_Core_QCalendar_QCalendar, matchCenturyToWeekday)
{
	zval *handle_param = NULL, *parts_param = NULL, *dow_param = NULL, _0, _1, _2;
	zend_long handle, parts, dow;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(parts)
		Z_PARAM_LONG(dow)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &parts_param, &dow_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, parts);
	ZVAL_LONG(&_2, dow);
	RETURN_LONG(phpqt_qcalendar_match_century_to_weekday(&_0, &_1, &_2));
}

PHP_METHOD(Qt_Core_QCalendar_QCalendar, partsFromDate)
{
	zval *handle_param = NULL, *date_param = NULL, _0, _1;
	zend_long handle, date;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(date)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &date_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, date);
	RETURN_LONG(phpqt_qcalendar_parts_from_date(&_0, &_1));
}

PHP_METHOD(Qt_Core_QCalendar_QCalendar, dayOfWeek)
{
	zval *handle_param = NULL, *date_param = NULL, _0, _1;
	zend_long handle, date;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(date)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &date_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, date);
	RETURN_LONG(phpqt_qcalendar_day_of_week(&_0, &_1));
}

PHP_METHOD(Qt_Core_QCalendar_QCalendar, monthName)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, *locale_param = NULL, *month_param = NULL, *year = NULL, year_sub, *format = NULL, format_sub, __$null, result, _0, _1, _2;
	zend_long handle, locale, month;

	ZVAL_UNDEF(&year_sub);
	ZVAL_UNDEF(&format_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(3, 5)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(locale)
		Z_PARAM_LONG(month)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(year)
		Z_PARAM_ZVAL_OR_NULL(format)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 3, 2, &handle_param, &locale_param, &month_param, &year, &format);
	if (!year) {
		year = &year_sub;
		year = &__$null;
	}
	if (!format) {
		format = &format_sub;
		format = &__$null;
	}
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, locale);
	ZVAL_LONG(&_2, month);
	phpqt_qcalendar_month_name(&result, &_0, &_1, &_2, year, format);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QCalendar_QCalendar, standaloneMonthName)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, *locale_param = NULL, *month_param = NULL, *year = NULL, year_sub, *format = NULL, format_sub, __$null, result, _0, _1, _2;
	zend_long handle, locale, month;

	ZVAL_UNDEF(&year_sub);
	ZVAL_UNDEF(&format_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(3, 5)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(locale)
		Z_PARAM_LONG(month)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(year)
		Z_PARAM_ZVAL_OR_NULL(format)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 3, 2, &handle_param, &locale_param, &month_param, &year, &format);
	if (!year) {
		year = &year_sub;
		year = &__$null;
	}
	if (!format) {
		format = &format_sub;
		format = &__$null;
	}
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, locale);
	ZVAL_LONG(&_2, month);
	phpqt_qcalendar_standalone_month_name(&result, &_0, &_1, &_2, year, format);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QCalendar_QCalendar, weekDayName)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, *locale_param = NULL, *day_param = NULL, *format = NULL, format_sub, __$null, result, _0, _1, _2;
	zend_long handle, locale, day;

	ZVAL_UNDEF(&format_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(3, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(locale)
		Z_PARAM_LONG(day)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(format)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 3, 1, &handle_param, &locale_param, &day_param, &format);
	if (!format) {
		format = &format_sub;
		format = &__$null;
	}
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, locale);
	ZVAL_LONG(&_2, day);
	phpqt_qcalendar_week_day_name(&result, &_0, &_1, &_2, format);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QCalendar_QCalendar, standaloneWeekDayName)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, *locale_param = NULL, *day_param = NULL, *format = NULL, format_sub, __$null, result, _0, _1, _2;
	zend_long handle, locale, day;

	ZVAL_UNDEF(&format_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(3, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(locale)
		Z_PARAM_LONG(day)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(format)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 3, 1, &handle_param, &locale_param, &day_param, &format);
	if (!format) {
		format = &format_sub;
		format = &__$null;
	}
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, locale);
	ZVAL_LONG(&_2, day);
	phpqt_qcalendar_standalone_week_day_name(&result, &_0, &_1, &_2, format);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QCalendar_QCalendar, dateTimeToString)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval format;
	zval *handle_param = NULL, *format_param = NULL, *datetime_param = NULL, *dateOnly_param = NULL, *timeOnly_param = NULL, *locale_param = NULL, result, _0, _1, _2, _3, _4;
	zend_long handle, datetime, dateOnly, timeOnly, locale;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&format);
	ZEND_PARSE_PARAMETERS_START(6, 6)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(format)
		Z_PARAM_LONG(datetime)
		Z_PARAM_LONG(dateOnly)
		Z_PARAM_LONG(timeOnly)
		Z_PARAM_LONG(locale)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 6, 0, &handle_param, &format_param, &datetime_param, &dateOnly_param, &timeOnly_param, &locale_param);
	zephir_get_strval(&format, format_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, datetime);
	ZVAL_LONG(&_2, dateOnly);
	ZVAL_LONG(&_3, timeOnly);
	ZVAL_LONG(&_4, locale);
	phpqt_qcalendar_date_time_to_string(&result, &_0, &format, &_1, &_2, &_3, &_4);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QCalendar_QCalendar, availableCalendars)
{
	zval result;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;

	ZVAL_UNDEF(&result);
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);

	ZEPHIR_INIT_VAR(&result);
	phpqt_qcalendar_available_calendars(&result);
	RETURN_CCTOR(&result);
}

