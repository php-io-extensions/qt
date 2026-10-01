
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
#include "src/core-qabstracteventdispatchertimerinfo.h"
#include "kernel/operators.h"
#include "kernel/memory.h"
#include "kernel/object.h"


ZEPHIR_INIT_CLASS(Qt_Core_QAbstractEventDispatcherTimerInfo_QAbstractEventDispatcherTimerInfo)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Core\\QAbstractEventDispatcherTimerInfo, QAbstractEventDispatcherTimerInfo, qt, core_qabstracteventdispatchertimerinfo_qabstracteventdispatchertimerinfo, qt_core_qabstracteventdispatchertimerinfo_qabstracteventdispatchertimerinfo_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Core_QAbstractEventDispatcherTimerInfo_QAbstractEventDispatcherTimerInfo, timerId)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qabstracteventdispatchertimerinfo_timer_id(&_0));
}

PHP_METHOD(Qt_Core_QAbstractEventDispatcherTimerInfo_QAbstractEventDispatcherTimerInfo, setTimerId)
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
	phpqt_qabstracteventdispatchertimerinfo_set_timer_id(&_0, &_1);
}

PHP_METHOD(Qt_Core_QAbstractEventDispatcherTimerInfo_QAbstractEventDispatcherTimerInfo, interval)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qabstracteventdispatchertimerinfo_interval(&_0));
}

PHP_METHOD(Qt_Core_QAbstractEventDispatcherTimerInfo_QAbstractEventDispatcherTimerInfo, setInterval)
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
	phpqt_qabstracteventdispatchertimerinfo_set_interval(&_0, &_1);
}

PHP_METHOD(Qt_Core_QAbstractEventDispatcherTimerInfo_QAbstractEventDispatcherTimerInfo, timerType)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qabstracteventdispatchertimerinfo_timer_type(&_0));
}

PHP_METHOD(Qt_Core_QAbstractEventDispatcherTimerInfo_QAbstractEventDispatcherTimerInfo, setTimerType)
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
	phpqt_qabstracteventdispatchertimerinfo_set_timer_type(&_0, &_1);
}

PHP_METHOD(Qt_Core_QAbstractEventDispatcherTimerInfo_QAbstractEventDispatcherTimerInfo, new_)
{
	zval *id_param = NULL, *i_param = NULL, *t_param = NULL, _0, _1, _2;
	zend_long id, i, t;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(id)
		Z_PARAM_LONG(i)
		Z_PARAM_LONG(t)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &id_param, &i_param, &t_param);
	ZVAL_LONG(&_0, id);
	ZVAL_LONG(&_1, i);
	ZVAL_LONG(&_2, t);
	RETURN_LONG(phpqt_qabstracteventdispatchertimerinfo_new(&_0, &_1, &_2));
}

