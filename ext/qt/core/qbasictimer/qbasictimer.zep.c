
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
#include "src/core-qbasictimer.h"
#include "kernel/object.h"
#include "kernel/operators.h"
#include "kernel/memory.h"


ZEPHIR_INIT_CLASS(Qt_Core_QBasicTimer_QBasicTimer)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Core\\QBasicTimer, QBasicTimer, qt, core_qbasictimer_qbasictimer, qt_core_qbasictimer_qbasictimer_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Core_QBasicTimer_QBasicTimer, new_)
{

	RETURN_LONG(phpqt_qbasictimer_new());
}

PHP_METHOD(Qt_Core_QBasicTimer_QBasicTimer, swap)
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
	phpqt_qbasictimer_swap(&_0, &_1);
}

PHP_METHOD(Qt_Core_QBasicTimer_QBasicTimer, isActive)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qbasictimer_is_active(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QBasicTimer_QBasicTimer, timerId)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qbasictimer_timer_id(&_0));
}

PHP_METHOD(Qt_Core_QBasicTimer_QBasicTimer, id)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qbasictimer_id(&_0));
}

PHP_METHOD(Qt_Core_QBasicTimer_QBasicTimer, start)
{
	zval *handle_param = NULL, *msec_param = NULL, *obj_param = NULL, _0, _1, _2;
	zend_long handle, msec, obj;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(msec)
		Z_PARAM_LONG(obj)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &msec_param, &obj_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, msec);
	ZVAL_LONG(&_2, obj);
	phpqt_qbasictimer_start(&_0, &_1, &_2);
}

PHP_METHOD(Qt_Core_QBasicTimer_QBasicTimer, startIntQtTimerTypeQObject)
{
	zval *handle_param = NULL, *msec_param = NULL, *timerType_param = NULL, *obj_param = NULL, _0, _1, _2, _3;
	zend_long handle, msec, timerType, obj;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(msec)
		Z_PARAM_LONG(timerType)
		Z_PARAM_LONG(obj)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 0, &handle_param, &msec_param, &timerType_param, &obj_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, msec);
	ZVAL_LONG(&_2, timerType);
	ZVAL_LONG(&_3, obj);
	phpqt_qbasictimer_start_int_qt_timer_type_q_object(&_0, &_1, &_2, &_3);
}

PHP_METHOD(Qt_Core_QBasicTimer_QBasicTimer, stop)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qbasictimer_stop(&_0);
}

