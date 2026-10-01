
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
#include "src/core-qcalendaryearmonthday.h"
#include "kernel/object.h"
#include "kernel/operators.h"
#include "kernel/memory.h"


ZEPHIR_INIT_CLASS(Qt_Core_QCalendarYearMonthDay_QCalendarYearMonthDay)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Core\\QCalendarYearMonthDay, QCalendarYearMonthDay, qt, core_qcalendaryearmonthday_qcalendaryearmonthday, qt_core_qcalendaryearmonthday_qcalendaryearmonthday_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Core_QCalendarYearMonthDay_QCalendarYearMonthDay, new_)
{

	RETURN_LONG(phpqt_qcalendaryearmonthday_new());
}

PHP_METHOD(Qt_Core_QCalendarYearMonthDay_QCalendarYearMonthDay, newIntIntInt)
{
	zval *y_param = NULL, *m_param = NULL, *d_param = NULL, _0, _1, _2;
	zend_long y, m, d;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(1, 3)
		Z_PARAM_LONG(y)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(m)
		Z_PARAM_LONG(d)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 2, &y_param, &m_param, &d_param);
	if (!m_param) {
		m = 1;
	} else {
		}
	if (!d_param) {
		d = 1;
	} else {
		}
	ZVAL_LONG(&_0, y);
	ZVAL_LONG(&_1, m);
	ZVAL_LONG(&_2, d);
	RETURN_LONG(phpqt_qcalendaryearmonthday_new_int_int_int(&_0, &_1, &_2));
}

PHP_METHOD(Qt_Core_QCalendarYearMonthDay_QCalendarYearMonthDay, isValid)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qcalendaryearmonthday_is_valid(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QCalendarYearMonthDay_QCalendarYearMonthDay, year)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qcalendaryearmonthday_year(&_0));
}

PHP_METHOD(Qt_Core_QCalendarYearMonthDay_QCalendarYearMonthDay, setYear)
{
	zval *handle_param = NULL, *value_param = NULL, _0, _1;
	zend_long handle, value;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(value)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &value_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, value);
	phpqt_qcalendaryearmonthday_set_year(&_0, &_1);
}

PHP_METHOD(Qt_Core_QCalendarYearMonthDay_QCalendarYearMonthDay, month)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qcalendaryearmonthday_month(&_0));
}

PHP_METHOD(Qt_Core_QCalendarYearMonthDay_QCalendarYearMonthDay, setMonth)
{
	zval *handle_param = NULL, *value_param = NULL, _0, _1;
	zend_long handle, value;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(value)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &value_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, value);
	phpqt_qcalendaryearmonthday_set_month(&_0, &_1);
}

PHP_METHOD(Qt_Core_QCalendarYearMonthDay_QCalendarYearMonthDay, day)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qcalendaryearmonthday_day(&_0));
}

PHP_METHOD(Qt_Core_QCalendarYearMonthDay_QCalendarYearMonthDay, setDay)
{
	zval *handle_param = NULL, *value_param = NULL, _0, _1;
	zend_long handle, value;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(value)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &value_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, value);
	phpqt_qcalendaryearmonthday_set_day(&_0, &_1);
}

