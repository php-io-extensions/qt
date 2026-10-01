
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
#include "src/core-qdeadlinetimer.h"
#include "kernel/object.h"
#include "kernel/operators.h"
#include "kernel/memory.h"


ZEPHIR_INIT_CLASS(Qt_Core_QDeadlineTimer_QDeadlineTimer)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Core\\QDeadlineTimer, QDeadlineTimer, qt, core_qdeadlinetimer_qdeadlinetimer, qt_core_qdeadlinetimer_qdeadlinetimer_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Core_QDeadlineTimer_QDeadlineTimer, Forever)
{

	RETURN_LONG(phpqt_qdeadlinetimer_forever());
}

PHP_METHOD(Qt_Core_QDeadlineTimer_QDeadlineTimer, new_)
{

	RETURN_LONG(phpqt_qdeadlinetimer_new());
}

PHP_METHOD(Qt_Core_QDeadlineTimer_QDeadlineTimer, newQtTimerType)
{
	zval *type__param = NULL, _0;
	zend_long type_;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(type_)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &type__param);
	ZVAL_LONG(&_0, type_);
	RETURN_LONG(phpqt_qdeadlinetimer_new_qt_timer_type(&_0));
}

PHP_METHOD(Qt_Core_QDeadlineTimer_QDeadlineTimer, newQDeadlineTimerForeverConstantQtTimerType)
{
	zval *arg0_param = NULL, *type_ = NULL, type__sub, __$null, _0;
	zend_long arg0;

	ZVAL_UNDEF(&type__sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_LONG(arg0)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(type_)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 1, &arg0_param, &type_);
	if (!type_) {
		type_ = &type__sub;
		type_ = &__$null;
	}
	ZVAL_LONG(&_0, arg0);
	RETURN_LONG(phpqt_qdeadlinetimer_new_q_deadline_timer_forever_constant_qt_timer_type(&_0, type_));
}

PHP_METHOD(Qt_Core_QDeadlineTimer_QDeadlineTimer, newQint64QtTimerType)
{
	zval *msecs_param = NULL, *type = NULL, type_sub, __$null, _0;
	zend_long msecs;

	ZVAL_UNDEF(&type_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_LONG(msecs)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(type)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 1, &msecs_param, &type);
	if (!type) {
		type = &type_sub;
		type = &__$null;
	}
	ZVAL_LONG(&_0, msecs);
	RETURN_LONG(phpqt_qdeadlinetimer_new_qint64_qt_timer_type(&_0, type));
}

PHP_METHOD(Qt_Core_QDeadlineTimer_QDeadlineTimer, swap)
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
	phpqt_qdeadlinetimer_swap(&_0, &_1);
}

PHP_METHOD(Qt_Core_QDeadlineTimer_QDeadlineTimer, isForever)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qdeadlinetimer_is_forever(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QDeadlineTimer_QDeadlineTimer, hasExpired)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qdeadlinetimer_has_expired(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QDeadlineTimer_QDeadlineTimer, timerType)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qdeadlinetimer_timer_type(&_0));
}

PHP_METHOD(Qt_Core_QDeadlineTimer_QDeadlineTimer, setTimerType)
{
	zval *handle_param = NULL, *type_param = NULL, _0, _1;
	zend_long handle, type;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(type)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &type_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, type);
	phpqt_qdeadlinetimer_set_timer_type(&_0, &_1);
}

PHP_METHOD(Qt_Core_QDeadlineTimer_QDeadlineTimer, remainingTime)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qdeadlinetimer_remaining_time(&_0));
}

PHP_METHOD(Qt_Core_QDeadlineTimer_QDeadlineTimer, remainingTimeNSecs)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qdeadlinetimer_remaining_time_n_secs(&_0));
}

PHP_METHOD(Qt_Core_QDeadlineTimer_QDeadlineTimer, setRemainingTime)
{
	zval *handle_param = NULL, *msecs_param = NULL, *type = NULL, type_sub, __$null, _0, _1;
	zend_long handle, msecs;

	ZVAL_UNDEF(&type_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(2, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(msecs)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(type)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 1, &handle_param, &msecs_param, &type);
	if (!type) {
		type = &type_sub;
		type = &__$null;
	}
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, msecs);
	phpqt_qdeadlinetimer_set_remaining_time(&_0, &_1, type);
}

PHP_METHOD(Qt_Core_QDeadlineTimer_QDeadlineTimer, setPreciseRemainingTime)
{
	zval *handle_param = NULL, *secs_param = NULL, *nsecs_param = NULL, *type = NULL, type_sub, __$null, _0, _1, _2;
	zend_long handle, secs, nsecs;

	ZVAL_UNDEF(&type_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(2, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(secs)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(nsecs)
		Z_PARAM_ZVAL_OR_NULL(type)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 2, &handle_param, &secs_param, &nsecs_param, &type);
	if (!nsecs_param) {
		nsecs = 0;
	} else {
		}
	if (!type) {
		type = &type_sub;
		type = &__$null;
	}
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, secs);
	ZVAL_LONG(&_2, nsecs);
	phpqt_qdeadlinetimer_set_precise_remaining_time(&_0, &_1, &_2, type);
}

PHP_METHOD(Qt_Core_QDeadlineTimer_QDeadlineTimer, deadline)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qdeadlinetimer_deadline(&_0));
}

PHP_METHOD(Qt_Core_QDeadlineTimer_QDeadlineTimer, deadlineNSecs)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qdeadlinetimer_deadline_n_secs(&_0));
}

PHP_METHOD(Qt_Core_QDeadlineTimer_QDeadlineTimer, setDeadline)
{
	zval *handle_param = NULL, *msecs_param = NULL, *timerType = NULL, timerType_sub, __$null, _0, _1;
	zend_long handle, msecs;

	ZVAL_UNDEF(&timerType_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(2, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(msecs)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(timerType)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 1, &handle_param, &msecs_param, &timerType);
	if (!timerType) {
		timerType = &timerType_sub;
		timerType = &__$null;
	}
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, msecs);
	phpqt_qdeadlinetimer_set_deadline(&_0, &_1, timerType);
}

PHP_METHOD(Qt_Core_QDeadlineTimer_QDeadlineTimer, setPreciseDeadline)
{
	zval *handle_param = NULL, *secs_param = NULL, *nsecs_param = NULL, *type = NULL, type_sub, __$null, _0, _1, _2;
	zend_long handle, secs, nsecs;

	ZVAL_UNDEF(&type_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(2, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(secs)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(nsecs)
		Z_PARAM_ZVAL_OR_NULL(type)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 2, &handle_param, &secs_param, &nsecs_param, &type);
	if (!nsecs_param) {
		nsecs = 0;
	} else {
		}
	if (!type) {
		type = &type_sub;
		type = &__$null;
	}
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, secs);
	ZVAL_LONG(&_2, nsecs);
	phpqt_qdeadlinetimer_set_precise_deadline(&_0, &_1, &_2, type);
}

PHP_METHOD(Qt_Core_QDeadlineTimer_QDeadlineTimer, addNSecs)
{
	zval *dt_param = NULL, *nsecs_param = NULL, _0, _1;
	zend_long dt, nsecs;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(dt)
		Z_PARAM_LONG(nsecs)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &dt_param, &nsecs_param);
	ZVAL_LONG(&_0, dt);
	ZVAL_LONG(&_1, nsecs);
	RETURN_LONG(phpqt_qdeadlinetimer_add_n_secs(&_0, &_1));
}

PHP_METHOD(Qt_Core_QDeadlineTimer_QDeadlineTimer, current)
{
	zval *timerType = NULL, timerType_sub, __$null;

	ZVAL_UNDEF(&timerType_sub);
	ZVAL_NULL(&__$null);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(0, 1)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(timerType)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(0, 1, &timerType);
	if (!timerType) {
		timerType = &timerType_sub;
		timerType = &__$null;
	}
	RETURN_LONG(phpqt_qdeadlinetimer_current(timerType));
}

