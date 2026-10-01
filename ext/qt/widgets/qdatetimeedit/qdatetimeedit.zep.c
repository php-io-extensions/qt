
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
#include "src/widgets-qdatetimeedit.h"
#include "kernel/object.h"
#include "kernel/string.h"
#include "kernel/memory.h"
#include "kernel/operators.h"


ZEPHIR_INIT_CLASS(Qt_Widgets_QDateTimeEdit_QDateTimeEdit)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Widgets\\QDateTimeEdit, QDateTimeEdit, qt, widgets_qdatetimeedit_qdatetimeedit, qt_widgets_qdatetimeedit_qdatetimeedit_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Widgets_QDateTimeEdit_QDateTimeEdit, staticMetaObject)
{

	RETURN_LONG(phpqt_qdatetimeedit_static_meta_object());
}

PHP_METHOD(Qt_Widgets_QDateTimeEdit_QDateTimeEdit, tr)
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
	phpqt_qdatetimeedit_tr(&result, s, c, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Widgets_QDateTimeEdit_QDateTimeEdit, new_)
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
	RETURN_LONG(phpqt_qdatetimeedit_new(&_0));
}

PHP_METHOD(Qt_Widgets_QDateTimeEdit_QDateTimeEdit, newQDateTimeQWidget)
{
	zval *dt_param = NULL, *parent__param = NULL, _0, _1;
	zend_long dt, parent_;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_LONG(dt)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(parent_)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 1, &dt_param, &parent__param);
	if (!parent__param) {
		parent_ = 0;
	} else {
		}
	ZVAL_LONG(&_0, dt);
	ZVAL_LONG(&_1, parent_);
	RETURN_LONG(phpqt_qdatetimeedit_new_q_date_time_q_widget(&_0, &_1));
}

PHP_METHOD(Qt_Widgets_QDateTimeEdit_QDateTimeEdit, newQDateQWidget)
{
	zval *d_param = NULL, *parent__param = NULL, _0, _1;
	zend_long d, parent_;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_LONG(d)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(parent_)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 1, &d_param, &parent__param);
	if (!parent__param) {
		parent_ = 0;
	} else {
		}
	ZVAL_LONG(&_0, d);
	ZVAL_LONG(&_1, parent_);
	RETURN_LONG(phpqt_qdatetimeedit_new_q_date_q_widget(&_0, &_1));
}

PHP_METHOD(Qt_Widgets_QDateTimeEdit_QDateTimeEdit, newQTimeQWidget)
{
	zval *t_param = NULL, *parent__param = NULL, _0, _1;
	zend_long t, parent_;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_LONG(t)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(parent_)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 1, &t_param, &parent__param);
	if (!parent__param) {
		parent_ = 0;
	} else {
		}
	ZVAL_LONG(&_0, t);
	ZVAL_LONG(&_1, parent_);
	RETURN_LONG(phpqt_qdatetimeedit_new_q_time_q_widget(&_0, &_1));
}

PHP_METHOD(Qt_Widgets_QDateTimeEdit_QDateTimeEdit, dateTime)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qdatetimeedit_date_time(&_0));
}

PHP_METHOD(Qt_Widgets_QDateTimeEdit_QDateTimeEdit, date)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qdatetimeedit_date(&_0));
}

PHP_METHOD(Qt_Widgets_QDateTimeEdit_QDateTimeEdit, time)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qdatetimeedit_time(&_0));
}

PHP_METHOD(Qt_Widgets_QDateTimeEdit_QDateTimeEdit, calendar)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qdatetimeedit_calendar(&_0));
}

PHP_METHOD(Qt_Widgets_QDateTimeEdit_QDateTimeEdit, setCalendar)
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
	phpqt_qdatetimeedit_set_calendar(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QDateTimeEdit_QDateTimeEdit, minimumDateTime)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qdatetimeedit_minimum_date_time(&_0));
}

PHP_METHOD(Qt_Widgets_QDateTimeEdit_QDateTimeEdit, clearMinimumDateTime)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qdatetimeedit_clear_minimum_date_time(&_0);
}

PHP_METHOD(Qt_Widgets_QDateTimeEdit_QDateTimeEdit, setMinimumDateTime)
{
	zval *handle_param = NULL, *dt_param = NULL, _0, _1;
	zend_long handle, dt;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(dt)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &dt_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, dt);
	phpqt_qdatetimeedit_set_minimum_date_time(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QDateTimeEdit_QDateTimeEdit, maximumDateTime)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qdatetimeedit_maximum_date_time(&_0));
}

PHP_METHOD(Qt_Widgets_QDateTimeEdit_QDateTimeEdit, clearMaximumDateTime)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qdatetimeedit_clear_maximum_date_time(&_0);
}

PHP_METHOD(Qt_Widgets_QDateTimeEdit_QDateTimeEdit, setMaximumDateTime)
{
	zval *handle_param = NULL, *dt_param = NULL, _0, _1;
	zend_long handle, dt;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(dt)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &dt_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, dt);
	phpqt_qdatetimeedit_set_maximum_date_time(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QDateTimeEdit_QDateTimeEdit, setDateTimeRange)
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
	phpqt_qdatetimeedit_set_date_time_range(&_0, &_1, &_2);
}

PHP_METHOD(Qt_Widgets_QDateTimeEdit_QDateTimeEdit, minimumDate)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qdatetimeedit_minimum_date(&_0));
}

PHP_METHOD(Qt_Widgets_QDateTimeEdit_QDateTimeEdit, setMinimumDate)
{
	zval *handle_param = NULL, *min_param = NULL, _0, _1;
	zend_long handle, min;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(min)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &min_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, min);
	phpqt_qdatetimeedit_set_minimum_date(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QDateTimeEdit_QDateTimeEdit, clearMinimumDate)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qdatetimeedit_clear_minimum_date(&_0);
}

PHP_METHOD(Qt_Widgets_QDateTimeEdit_QDateTimeEdit, maximumDate)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qdatetimeedit_maximum_date(&_0));
}

PHP_METHOD(Qt_Widgets_QDateTimeEdit_QDateTimeEdit, setMaximumDate)
{
	zval *handle_param = NULL, *max_param = NULL, _0, _1;
	zend_long handle, max;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(max)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &max_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, max);
	phpqt_qdatetimeedit_set_maximum_date(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QDateTimeEdit_QDateTimeEdit, clearMaximumDate)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qdatetimeedit_clear_maximum_date(&_0);
}

PHP_METHOD(Qt_Widgets_QDateTimeEdit_QDateTimeEdit, setDateRange)
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
	phpqt_qdatetimeedit_set_date_range(&_0, &_1, &_2);
}

PHP_METHOD(Qt_Widgets_QDateTimeEdit_QDateTimeEdit, minimumTime)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qdatetimeedit_minimum_time(&_0));
}

PHP_METHOD(Qt_Widgets_QDateTimeEdit_QDateTimeEdit, setMinimumTime)
{
	zval *handle_param = NULL, *min_param = NULL, _0, _1;
	zend_long handle, min;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(min)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &min_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, min);
	phpqt_qdatetimeedit_set_minimum_time(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QDateTimeEdit_QDateTimeEdit, clearMinimumTime)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qdatetimeedit_clear_minimum_time(&_0);
}

PHP_METHOD(Qt_Widgets_QDateTimeEdit_QDateTimeEdit, maximumTime)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qdatetimeedit_maximum_time(&_0));
}

PHP_METHOD(Qt_Widgets_QDateTimeEdit_QDateTimeEdit, setMaximumTime)
{
	zval *handle_param = NULL, *max_param = NULL, _0, _1;
	zend_long handle, max;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(max)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &max_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, max);
	phpqt_qdatetimeedit_set_maximum_time(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QDateTimeEdit_QDateTimeEdit, clearMaximumTime)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qdatetimeedit_clear_maximum_time(&_0);
}

PHP_METHOD(Qt_Widgets_QDateTimeEdit_QDateTimeEdit, setTimeRange)
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
	phpqt_qdatetimeedit_set_time_range(&_0, &_1, &_2);
}

PHP_METHOD(Qt_Widgets_QDateTimeEdit_QDateTimeEdit, displayedSections)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qdatetimeedit_displayed_sections(&_0));
}

PHP_METHOD(Qt_Widgets_QDateTimeEdit_QDateTimeEdit, currentSection)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qdatetimeedit_current_section(&_0));
}

PHP_METHOD(Qt_Widgets_QDateTimeEdit_QDateTimeEdit, sectionAt)
{
	zval *handle_param = NULL, *index_param = NULL, _0, _1;
	zend_long handle, index;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(index)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &index_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, index);
	RETURN_LONG(phpqt_qdatetimeedit_section_at(&_0, &_1));
}

PHP_METHOD(Qt_Widgets_QDateTimeEdit_QDateTimeEdit, setCurrentSection)
{
	zval *handle_param = NULL, *section_param = NULL, _0, _1;
	zend_long handle, section;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(section)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &section_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, section);
	phpqt_qdatetimeedit_set_current_section(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QDateTimeEdit_QDateTimeEdit, currentSectionIndex)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qdatetimeedit_current_section_index(&_0));
}

PHP_METHOD(Qt_Widgets_QDateTimeEdit_QDateTimeEdit, setCurrentSectionIndex)
{
	zval *handle_param = NULL, *index_param = NULL, _0, _1;
	zend_long handle, index;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(index)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &index_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, index);
	phpqt_qdatetimeedit_set_current_section_index(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QDateTimeEdit_QDateTimeEdit, calendarWidget)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qdatetimeedit_calendar_widget(&_0));
}

PHP_METHOD(Qt_Widgets_QDateTimeEdit_QDateTimeEdit, setCalendarWidget)
{
	zval *handle_param = NULL, *calendarWidget_param = NULL, _0, _1;
	zend_long handle, calendarWidget;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(calendarWidget)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &calendarWidget_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, calendarWidget);
	phpqt_qdatetimeedit_set_calendar_widget(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QDateTimeEdit_QDateTimeEdit, sectionCount)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qdatetimeedit_section_count(&_0));
}

PHP_METHOD(Qt_Widgets_QDateTimeEdit_QDateTimeEdit, setSelectedSection)
{
	zval *handle_param = NULL, *section_param = NULL, _0, _1;
	zend_long handle, section;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(section)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &section_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, section);
	phpqt_qdatetimeedit_set_selected_section(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QDateTimeEdit_QDateTimeEdit, sectionText)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, *section_param = NULL, result, _0, _1;
	zend_long handle, section;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(section)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &section_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, section);
	phpqt_qdatetimeedit_section_text(&result, &_0, &_1);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Widgets_QDateTimeEdit_QDateTimeEdit, displayFormat)
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
	phpqt_qdatetimeedit_display_format(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Widgets_QDateTimeEdit_QDateTimeEdit, setDisplayFormat)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval format;
	zval *handle_param = NULL, *format_param = NULL, _0;
	zend_long handle;

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
	ZVAL_LONG(&_0, handle);
	phpqt_qdatetimeedit_set_display_format(&_0, &format);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_Widgets_QDateTimeEdit_QDateTimeEdit, calendarPopup)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qdatetimeedit_calendar_popup(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Widgets_QDateTimeEdit_QDateTimeEdit, setCalendarPopup)
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
	phpqt_qdatetimeedit_set_calendar_popup(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QDateTimeEdit_QDateTimeEdit, timeZone)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qdatetimeedit_time_zone(&_0));
}

PHP_METHOD(Qt_Widgets_QDateTimeEdit_QDateTimeEdit, setTimeZone)
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
	phpqt_qdatetimeedit_set_time_zone(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QDateTimeEdit_QDateTimeEdit, sizeHint)
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
	phpqt_qdatetimeedit_size_hint(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Widgets_QDateTimeEdit_QDateTimeEdit, clear)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qdatetimeedit_clear(&_0);
}

PHP_METHOD(Qt_Widgets_QDateTimeEdit_QDateTimeEdit, stepBy)
{
	zval *handle_param = NULL, *steps_param = NULL, _0, _1;
	zend_long handle, steps;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(steps)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &steps_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, steps);
	phpqt_qdatetimeedit_step_by(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QDateTimeEdit_QDateTimeEdit, event)
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
	r = phpqt_qdatetimeedit_event(&_0, &_1);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Widgets_QDateTimeEdit_QDateTimeEdit, dateTimeChanged)
{
	zval *handle_param = NULL, *dateTime_param = NULL, _0, _1;
	zend_long handle, dateTime;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(dateTime)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &dateTime_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, dateTime);
	phpqt_qdatetimeedit_date_time_changed(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QDateTimeEdit_QDateTimeEdit, timeChanged)
{
	zval *handle_param = NULL, *time_param = NULL, _0, _1;
	zend_long handle, time;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(time)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &time_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, time);
	phpqt_qdatetimeedit_time_changed(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QDateTimeEdit_QDateTimeEdit, dateChanged)
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
	phpqt_qdatetimeedit_date_changed(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QDateTimeEdit_QDateTimeEdit, setDateTime)
{
	zval *handle_param = NULL, *dateTime_param = NULL, _0, _1;
	zend_long handle, dateTime;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(dateTime)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &dateTime_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, dateTime);
	phpqt_qdatetimeedit_set_date_time(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QDateTimeEdit_QDateTimeEdit, setDate)
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
	phpqt_qdatetimeedit_set_date(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QDateTimeEdit_QDateTimeEdit, setTime)
{
	zval *handle_param = NULL, *time_param = NULL, _0, _1;
	zend_long handle, time;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(time)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &time_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, time);
	phpqt_qdatetimeedit_set_time(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QDateTimeEdit_QDateTimeEdit, keyPressEvent)
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
	phpqt_qdatetimeedit_key_press_event(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QDateTimeEdit_QDateTimeEdit, wheelEvent)
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
	phpqt_qdatetimeedit_wheel_event(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QDateTimeEdit_QDateTimeEdit, focusInEvent)
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
	phpqt_qdatetimeedit_focus_in_event(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QDateTimeEdit_QDateTimeEdit, focusNextPrevChild)
{
	zend_bool next;
	zval *handle_param = NULL, *next_param = NULL, _0, _1;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_BOOL(next)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &next_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_BOOL(&_1, (next ? 1 : 0));
	r = phpqt_qdatetimeedit_focus_next_prev_child(&_0, &_1);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Widgets_QDateTimeEdit_QDateTimeEdit, validate)
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
	phpqt_qdatetimeedit_validate(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Widgets_QDateTimeEdit_QDateTimeEdit, fixup)
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
	phpqt_qdatetimeedit_fixup(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Widgets_QDateTimeEdit_QDateTimeEdit, dateTimeFromText)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval text;
	zval *handle_param = NULL, *text_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&text);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(text)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &text_param);
	zephir_get_strval(&text, text_param);
	ZVAL_LONG(&_0, handle);
	RETURN_MM_LONG(phpqt_qdatetimeedit_date_time_from_text(&_0, &text));
}

PHP_METHOD(Qt_Widgets_QDateTimeEdit_QDateTimeEdit, textFromDateTime)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, *dt_param = NULL, result, _0, _1;
	zend_long handle, dt;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(dt)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &dt_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, dt);
	phpqt_qdatetimeedit_text_from_date_time(&result, &_0, &_1);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Widgets_QDateTimeEdit_QDateTimeEdit, stepEnabled)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qdatetimeedit_step_enabled(&_0));
}

PHP_METHOD(Qt_Widgets_QDateTimeEdit_QDateTimeEdit, mousePressEvent)
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
	phpqt_qdatetimeedit_mouse_press_event(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QDateTimeEdit_QDateTimeEdit, paintEvent)
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
	phpqt_qdatetimeedit_paint_event(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QDateTimeEdit_QDateTimeEdit, initStyleOption)
{
	zval *handle_param = NULL, *option_param = NULL, _0, _1;
	zend_long handle, option;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(option)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &option_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, option);
	phpqt_qdatetimeedit_init_style_option(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QDateTimeEdit_QDateTimeEdit, newQVariantQMetaTypeTypeQWidget)
{
	zend_long parserType, parent_;
	zval *val = NULL, val_sub, *parserType_param = NULL, *parent__param = NULL, _0, _1;

	ZVAL_UNDEF(&val_sub);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 3)
		Z_PARAM_ZVAL(val)
		Z_PARAM_LONG(parserType)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(parent_)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 1, &val, &parserType_param, &parent__param);
	if (!parent__param) {
		parent_ = 0;
	} else {
		}
	ZVAL_LONG(&_0, parserType);
	ZVAL_LONG(&_1, parent_);
	RETURN_LONG(phpqt_qdatetimeedit_new_q_variant_q_meta_type_type_q_widget(val, &_0, &_1));
}

