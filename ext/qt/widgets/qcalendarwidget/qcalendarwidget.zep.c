
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
#include "src/widgets-qcalendarwidget.h"
#include "kernel/object.h"
#include "kernel/string.h"
#include "kernel/memory.h"
#include "kernel/operators.h"


ZEPHIR_INIT_CLASS(Qt_Widgets_QCalendarWidget_QCalendarWidget)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Widgets\\QCalendarWidget, QCalendarWidget, qt, widgets_qcalendarwidget_qcalendarwidget, qt_widgets_qcalendarwidget_qcalendarwidget_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Widgets_QCalendarWidget_QCalendarWidget, staticMetaObject)
{

	RETURN_LONG(phpqt_qcalendarwidget_static_meta_object());
}

PHP_METHOD(Qt_Widgets_QCalendarWidget_QCalendarWidget, tr)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long n;
	zval *s = NULL, s_sub, *c = NULL, c_sub, *n_param = NULL, __$null, result, _0;

	ZVAL_UNDEF(&s_sub);
	ZVAL_UNDEF(&c_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(1, 3)
		Z_PARAM_ZVAL(s)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(c)
		Z_PARAM_LONG(n)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 2, &s, &c, &n_param);
	if (!c) {
		c = &c_sub;
		c = &__$null;
	}
	if (!n_param) {
		n = -1;
	} else {
		}
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, n);
	phpqt_qcalendarwidget_tr(&result, s, c, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Widgets_QCalendarWidget_QCalendarWidget, new_)
{
	zval *parent__param = NULL, _0;
	zend_long parent_;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(0, 1)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(parent_)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(0, 1, &parent__param);
	if (!parent__param) {
		parent_ = 0;
	} else {
		}
	ZVAL_LONG(&_0, parent_);
	RETURN_LONG(phpqt_qcalendarwidget_new(&_0));
}

PHP_METHOD(Qt_Widgets_QCalendarWidget_QCalendarWidget, sizeHint)
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
	phpqt_qcalendarwidget_size_hint(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Widgets_QCalendarWidget_QCalendarWidget, minimumSizeHint)
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
	phpqt_qcalendarwidget_minimum_size_hint(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Widgets_QCalendarWidget_QCalendarWidget, selectedDate)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qcalendarwidget_selected_date(&_0));
}

PHP_METHOD(Qt_Widgets_QCalendarWidget_QCalendarWidget, yearShown)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qcalendarwidget_year_shown(&_0));
}

PHP_METHOD(Qt_Widgets_QCalendarWidget_QCalendarWidget, monthShown)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qcalendarwidget_month_shown(&_0));
}

PHP_METHOD(Qt_Widgets_QCalendarWidget_QCalendarWidget, minimumDate)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qcalendarwidget_minimum_date(&_0));
}

PHP_METHOD(Qt_Widgets_QCalendarWidget_QCalendarWidget, setMinimumDate)
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
	phpqt_qcalendarwidget_set_minimum_date(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QCalendarWidget_QCalendarWidget, clearMinimumDate)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qcalendarwidget_clear_minimum_date(&_0);
}

PHP_METHOD(Qt_Widgets_QCalendarWidget_QCalendarWidget, maximumDate)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qcalendarwidget_maximum_date(&_0));
}

PHP_METHOD(Qt_Widgets_QCalendarWidget_QCalendarWidget, setMaximumDate)
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
	phpqt_qcalendarwidget_set_maximum_date(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QCalendarWidget_QCalendarWidget, clearMaximumDate)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qcalendarwidget_clear_maximum_date(&_0);
}

PHP_METHOD(Qt_Widgets_QCalendarWidget_QCalendarWidget, firstDayOfWeek)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qcalendarwidget_first_day_of_week(&_0));
}

PHP_METHOD(Qt_Widgets_QCalendarWidget_QCalendarWidget, setFirstDayOfWeek)
{
	zval *handle_param = NULL, *dayOfWeek_param = NULL, _0, _1;
	zend_long handle, dayOfWeek;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(dayOfWeek)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &dayOfWeek_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, dayOfWeek);
	phpqt_qcalendarwidget_set_first_day_of_week(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QCalendarWidget_QCalendarWidget, isNavigationBarVisible)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qcalendarwidget_is_navigation_bar_visible(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Widgets_QCalendarWidget_QCalendarWidget, isGridVisible)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qcalendarwidget_is_grid_visible(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Widgets_QCalendarWidget_QCalendarWidget, calendar)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qcalendarwidget_calendar(&_0));
}

PHP_METHOD(Qt_Widgets_QCalendarWidget_QCalendarWidget, setCalendar)
{
	zval *handle_param = NULL, *calendar_param = NULL, _0, _1;
	zend_long handle, calendar;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(calendar)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &calendar_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, calendar);
	phpqt_qcalendarwidget_set_calendar(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QCalendarWidget_QCalendarWidget, selectionMode)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qcalendarwidget_selection_mode(&_0));
}

PHP_METHOD(Qt_Widgets_QCalendarWidget_QCalendarWidget, setSelectionMode)
{
	zval *handle_param = NULL, *mode_param = NULL, _0, _1;
	zend_long handle, mode;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(mode)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &mode_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, mode);
	phpqt_qcalendarwidget_set_selection_mode(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QCalendarWidget_QCalendarWidget, horizontalHeaderFormat)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qcalendarwidget_horizontal_header_format(&_0));
}

PHP_METHOD(Qt_Widgets_QCalendarWidget_QCalendarWidget, setHorizontalHeaderFormat)
{
	zval *handle_param = NULL, *format_param = NULL, _0, _1;
	zend_long handle, format;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(format)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &format_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, format);
	phpqt_qcalendarwidget_set_horizontal_header_format(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QCalendarWidget_QCalendarWidget, verticalHeaderFormat)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qcalendarwidget_vertical_header_format(&_0));
}

PHP_METHOD(Qt_Widgets_QCalendarWidget_QCalendarWidget, setVerticalHeaderFormat)
{
	zval *handle_param = NULL, *format_param = NULL, _0, _1;
	zend_long handle, format;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(format)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &format_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, format);
	phpqt_qcalendarwidget_set_vertical_header_format(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QCalendarWidget_QCalendarWidget, headerTextFormat)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qcalendarwidget_header_text_format(&_0));
}

PHP_METHOD(Qt_Widgets_QCalendarWidget_QCalendarWidget, setHeaderTextFormat)
{
	zval *handle_param = NULL, *format_param = NULL, _0, _1;
	zend_long handle, format;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(format)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &format_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, format);
	phpqt_qcalendarwidget_set_header_text_format(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QCalendarWidget_QCalendarWidget, weekdayTextFormat)
{
	zval *handle_param = NULL, *dayOfWeek_param = NULL, _0, _1;
	zend_long handle, dayOfWeek;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(dayOfWeek)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &dayOfWeek_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, dayOfWeek);
	RETURN_LONG(phpqt_qcalendarwidget_weekday_text_format(&_0, &_1));
}

PHP_METHOD(Qt_Widgets_QCalendarWidget_QCalendarWidget, setWeekdayTextFormat)
{
	zval *handle_param = NULL, *dayOfWeek_param = NULL, *format_param = NULL, _0, _1, _2;
	zend_long handle, dayOfWeek, format;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(dayOfWeek)
		Z_PARAM_LONG(format)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &dayOfWeek_param, &format_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, dayOfWeek);
	ZVAL_LONG(&_2, format);
	phpqt_qcalendarwidget_set_weekday_text_format(&_0, &_1, &_2);
}

PHP_METHOD(Qt_Widgets_QCalendarWidget_QCalendarWidget, dateTextFormat)
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
	RETURN_LONG(phpqt_qcalendarwidget_date_text_format(&_0, &_1));
}

PHP_METHOD(Qt_Widgets_QCalendarWidget_QCalendarWidget, setDateTextFormat)
{
	zval *handle_param = NULL, *date_param = NULL, *format_param = NULL, _0, _1, _2;
	zend_long handle, date, format;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(date)
		Z_PARAM_LONG(format)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &date_param, &format_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, date);
	ZVAL_LONG(&_2, format);
	phpqt_qcalendarwidget_set_date_text_format(&_0, &_1, &_2);
}

PHP_METHOD(Qt_Widgets_QCalendarWidget_QCalendarWidget, isDateEditEnabled)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qcalendarwidget_is_date_edit_enabled(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Widgets_QCalendarWidget_QCalendarWidget, setDateEditEnabled)
{
	zend_bool enable;
	zval *handle_param = NULL, *enable_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_BOOL(enable)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &enable_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_BOOL(&_1, (enable ? 1 : 0));
	phpqt_qcalendarwidget_set_date_edit_enabled(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QCalendarWidget_QCalendarWidget, dateEditAcceptDelay)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qcalendarwidget_date_edit_accept_delay(&_0));
}

PHP_METHOD(Qt_Widgets_QCalendarWidget_QCalendarWidget, setDateEditAcceptDelay)
{
	zval *handle_param = NULL, *delay_param = NULL, _0, _1;
	zend_long handle, delay;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(delay)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &delay_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, delay);
	phpqt_qcalendarwidget_set_date_edit_accept_delay(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QCalendarWidget_QCalendarWidget, event)
{
	zval *handle_param = NULL, *event_param = NULL, _0, _1;
	zend_long handle, event, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(event)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &event_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, event);
	r = phpqt_qcalendarwidget_event(&_0, &_1);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Widgets_QCalendarWidget_QCalendarWidget, eventFilter)
{
	zval *handle_param = NULL, *watched_param = NULL, *event_param = NULL, _0, _1, _2;
	zend_long handle, watched, event, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(watched)
		Z_PARAM_LONG(event)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &watched_param, &event_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, watched);
	ZVAL_LONG(&_2, event);
	r = phpqt_qcalendarwidget_event_filter(&_0, &_1, &_2);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Widgets_QCalendarWidget_QCalendarWidget, mousePressEvent)
{
	zval *handle_param = NULL, *event_param = NULL, _0, _1;
	zend_long handle, event;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(event)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &event_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, event);
	phpqt_qcalendarwidget_mouse_press_event(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QCalendarWidget_QCalendarWidget, resizeEvent)
{
	zval *handle_param = NULL, *event_param = NULL, _0, _1;
	zend_long handle, event;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(event)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &event_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, event);
	phpqt_qcalendarwidget_resize_event(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QCalendarWidget_QCalendarWidget, keyPressEvent)
{
	zval *handle_param = NULL, *event_param = NULL, _0, _1;
	zend_long handle, event;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(event)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &event_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, event);
	phpqt_qcalendarwidget_key_press_event(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QCalendarWidget_QCalendarWidget, paintCell)
{
	zval *handle_param = NULL, *painter_param = NULL, *rectX_param = NULL, *rectY_param = NULL, *rectWidth_param = NULL, *rectHeight_param = NULL, *date_param = NULL, _0, _1, _2, _3, _4, _5, _6;
	zend_long handle, painter, rectX, rectY, rectWidth, rectHeight, date;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_5);
	ZVAL_UNDEF(&_6);
	ZEND_PARSE_PARAMETERS_START(7, 7)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(painter)
		Z_PARAM_LONG(rectX)
		Z_PARAM_LONG(rectY)
		Z_PARAM_LONG(rectWidth)
		Z_PARAM_LONG(rectHeight)
		Z_PARAM_LONG(date)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(7, 0, &handle_param, &painter_param, &rectX_param, &rectY_param, &rectWidth_param, &rectHeight_param, &date_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, painter);
	ZVAL_LONG(&_2, rectX);
	ZVAL_LONG(&_3, rectY);
	ZVAL_LONG(&_4, rectWidth);
	ZVAL_LONG(&_5, rectHeight);
	ZVAL_LONG(&_6, date);
	phpqt_qcalendarwidget_paint_cell(&_0, &_1, &_2, &_3, &_4, &_5, &_6);
}

PHP_METHOD(Qt_Widgets_QCalendarWidget_QCalendarWidget, updateCell)
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
	phpqt_qcalendarwidget_update_cell(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QCalendarWidget_QCalendarWidget, updateCells)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qcalendarwidget_update_cells(&_0);
}

PHP_METHOD(Qt_Widgets_QCalendarWidget_QCalendarWidget, setSelectedDate)
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
	phpqt_qcalendarwidget_set_selected_date(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QCalendarWidget_QCalendarWidget, setDateRange)
{
	zval *handle_param = NULL, *min_param = NULL, *max_param = NULL, _0, _1, _2;
	zend_long handle, min, max;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(min)
		Z_PARAM_LONG(max)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &min_param, &max_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, min);
	ZVAL_LONG(&_2, max);
	phpqt_qcalendarwidget_set_date_range(&_0, &_1, &_2);
}

PHP_METHOD(Qt_Widgets_QCalendarWidget_QCalendarWidget, setCurrentPage)
{
	zval *handle_param = NULL, *year_param = NULL, *month_param = NULL, _0, _1, _2;
	zend_long handle, year, month;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(year)
		Z_PARAM_LONG(month)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &year_param, &month_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, year);
	ZVAL_LONG(&_2, month);
	phpqt_qcalendarwidget_set_current_page(&_0, &_1, &_2);
}

PHP_METHOD(Qt_Widgets_QCalendarWidget_QCalendarWidget, setGridVisible)
{
	zend_bool show;
	zval *handle_param = NULL, *show_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_BOOL(show)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &show_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_BOOL(&_1, (show ? 1 : 0));
	phpqt_qcalendarwidget_set_grid_visible(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QCalendarWidget_QCalendarWidget, setNavigationBarVisible)
{
	zend_bool visible;
	zval *handle_param = NULL, *visible_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_BOOL(visible)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &visible_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_BOOL(&_1, (visible ? 1 : 0));
	phpqt_qcalendarwidget_set_navigation_bar_visible(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QCalendarWidget_QCalendarWidget, showNextMonth)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qcalendarwidget_show_next_month(&_0);
}

PHP_METHOD(Qt_Widgets_QCalendarWidget_QCalendarWidget, showPreviousMonth)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qcalendarwidget_show_previous_month(&_0);
}

PHP_METHOD(Qt_Widgets_QCalendarWidget_QCalendarWidget, showNextYear)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qcalendarwidget_show_next_year(&_0);
}

PHP_METHOD(Qt_Widgets_QCalendarWidget_QCalendarWidget, showPreviousYear)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qcalendarwidget_show_previous_year(&_0);
}

PHP_METHOD(Qt_Widgets_QCalendarWidget_QCalendarWidget, showSelectedDate)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qcalendarwidget_show_selected_date(&_0);
}

PHP_METHOD(Qt_Widgets_QCalendarWidget_QCalendarWidget, showToday)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qcalendarwidget_show_today(&_0);
}

PHP_METHOD(Qt_Widgets_QCalendarWidget_QCalendarWidget, selectionChanged)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qcalendarwidget_selection_changed(&_0);
}

PHP_METHOD(Qt_Widgets_QCalendarWidget_QCalendarWidget, clicked)
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
	phpqt_qcalendarwidget_clicked(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QCalendarWidget_QCalendarWidget, activated)
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
	phpqt_qcalendarwidget_activated(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QCalendarWidget_QCalendarWidget, currentPageChanged)
{
	zval *handle_param = NULL, *year_param = NULL, *month_param = NULL, _0, _1, _2;
	zend_long handle, year, month;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(year)
		Z_PARAM_LONG(month)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &year_param, &month_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, year);
	ZVAL_LONG(&_2, month);
	phpqt_qcalendarwidget_current_page_changed(&_0, &_1, &_2);
}

