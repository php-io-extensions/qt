
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
#include "src/core-qabstractanimation.h"
#include "kernel/object.h"
#include "kernel/string.h"
#include "kernel/memory.h"
#include "kernel/operators.h"


ZEPHIR_INIT_CLASS(Qt_Core_QAbstractAnimation_QAbstractAnimation)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Core\\QAbstractAnimation, QAbstractAnimation, qt, core_qabstractanimation_qabstractanimation, qt_core_qabstractanimation_qabstractanimation_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Core_QAbstractAnimation_QAbstractAnimation, staticMetaObject)
{

	RETURN_LONG(phpqt_qabstractanimation_static_meta_object());
}

PHP_METHOD(Qt_Core_QAbstractAnimation_QAbstractAnimation, tr)
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
	phpqt_qabstractanimation_tr(&result, s, c, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QAbstractAnimation_QAbstractAnimation, new_)
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
	RETURN_LONG(phpqt_qabstractanimation_new(&_0));
}

PHP_METHOD(Qt_Core_QAbstractAnimation_QAbstractAnimation, state)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qabstractanimation_state(&_0));
}

PHP_METHOD(Qt_Core_QAbstractAnimation_QAbstractAnimation, group)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qabstractanimation_group(&_0));
}

PHP_METHOD(Qt_Core_QAbstractAnimation_QAbstractAnimation, direction)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qabstractanimation_direction(&_0));
}

PHP_METHOD(Qt_Core_QAbstractAnimation_QAbstractAnimation, setDirection)
{
	zval *handle_param = NULL, *direction_param = NULL, _0, _1;
	zend_long handle, direction;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(direction)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &direction_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, direction);
	phpqt_qabstractanimation_set_direction(&_0, &_1);
}

PHP_METHOD(Qt_Core_QAbstractAnimation_QAbstractAnimation, currentTime)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qabstractanimation_current_time(&_0));
}

PHP_METHOD(Qt_Core_QAbstractAnimation_QAbstractAnimation, currentLoopTime)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qabstractanimation_current_loop_time(&_0));
}

PHP_METHOD(Qt_Core_QAbstractAnimation_QAbstractAnimation, loopCount)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qabstractanimation_loop_count(&_0));
}

PHP_METHOD(Qt_Core_QAbstractAnimation_QAbstractAnimation, setLoopCount)
{
	zval *handle_param = NULL, *loopCount_param = NULL, _0, _1;
	zend_long handle, loopCount;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(loopCount)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &loopCount_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, loopCount);
	phpqt_qabstractanimation_set_loop_count(&_0, &_1);
}

PHP_METHOD(Qt_Core_QAbstractAnimation_QAbstractAnimation, currentLoop)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qabstractanimation_current_loop(&_0));
}

PHP_METHOD(Qt_Core_QAbstractAnimation_QAbstractAnimation, duration)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qabstractanimation_duration(&_0));
}

PHP_METHOD(Qt_Core_QAbstractAnimation_QAbstractAnimation, totalDuration)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qabstractanimation_total_duration(&_0));
}

PHP_METHOD(Qt_Core_QAbstractAnimation_QAbstractAnimation, finished)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qabstractanimation_finished(&_0);
}

PHP_METHOD(Qt_Core_QAbstractAnimation_QAbstractAnimation, stateChanged)
{
	zval *handle_param = NULL, *newState_param = NULL, *oldState_param = NULL, _0, _1, _2;
	zend_long handle, newState, oldState;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(newState)
		Z_PARAM_LONG(oldState)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &newState_param, &oldState_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, newState);
	ZVAL_LONG(&_2, oldState);
	phpqt_qabstractanimation_state_changed(&_0, &_1, &_2);
}

PHP_METHOD(Qt_Core_QAbstractAnimation_QAbstractAnimation, currentLoopChanged)
{
	zval *handle_param = NULL, *currentLoop_param = NULL, _0, _1;
	zend_long handle, currentLoop;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(currentLoop)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &currentLoop_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, currentLoop);
	phpqt_qabstractanimation_current_loop_changed(&_0, &_1);
}

PHP_METHOD(Qt_Core_QAbstractAnimation_QAbstractAnimation, directionChanged)
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
	phpqt_qabstractanimation_direction_changed(&_0, &_1);
}

PHP_METHOD(Qt_Core_QAbstractAnimation_QAbstractAnimation, start)
{
	zval *handle_param = NULL, *policy = NULL, policy_sub, __$null, _0;
	zend_long handle;

	ZVAL_UNDEF(&policy_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(policy)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 1, &handle_param, &policy);
	if (!policy) {
		policy = &policy_sub;
		policy = &__$null;
	}
	ZVAL_LONG(&_0, handle);
	phpqt_qabstractanimation_start(&_0, policy);
}

PHP_METHOD(Qt_Core_QAbstractAnimation_QAbstractAnimation, pause)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qabstractanimation_pause(&_0);
}

PHP_METHOD(Qt_Core_QAbstractAnimation_QAbstractAnimation, resume)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qabstractanimation_resume(&_0);
}

PHP_METHOD(Qt_Core_QAbstractAnimation_QAbstractAnimation, setPaused)
{
	zend_bool arg0;
	zval *handle_param = NULL, *arg0_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_BOOL(arg0)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &arg0_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_BOOL(&_1, (arg0 ? 1 : 0));
	phpqt_qabstractanimation_set_paused(&_0, &_1);
}

PHP_METHOD(Qt_Core_QAbstractAnimation_QAbstractAnimation, stop)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qabstractanimation_stop(&_0);
}

PHP_METHOD(Qt_Core_QAbstractAnimation_QAbstractAnimation, setCurrentTime)
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
	phpqt_qabstractanimation_set_current_time(&_0, &_1);
}

PHP_METHOD(Qt_Core_QAbstractAnimation_QAbstractAnimation, event)
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
	r = phpqt_qabstractanimation_event(&_0, &_1);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QAbstractAnimation_QAbstractAnimation, updateCurrentTime)
{
	zval *handle_param = NULL, *currentTime_param = NULL, _0, _1;
	zend_long handle, currentTime;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(currentTime)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &currentTime_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, currentTime);
	phpqt_qabstractanimation_update_current_time(&_0, &_1);
}

PHP_METHOD(Qt_Core_QAbstractAnimation_QAbstractAnimation, updateState)
{
	zval *handle_param = NULL, *newState_param = NULL, *oldState_param = NULL, _0, _1, _2;
	zend_long handle, newState, oldState;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(newState)
		Z_PARAM_LONG(oldState)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &newState_param, &oldState_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, newState);
	ZVAL_LONG(&_2, oldState);
	phpqt_qabstractanimation_update_state(&_0, &_1, &_2);
}

PHP_METHOD(Qt_Core_QAbstractAnimation_QAbstractAnimation, updateDirection)
{
	zval *handle_param = NULL, *direction_param = NULL, _0, _1;
	zend_long handle, direction;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(direction)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &direction_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, direction);
	phpqt_qabstractanimation_update_direction(&_0, &_1);
}

