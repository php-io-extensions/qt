
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
#include "src/core-qtimeline.h"
#include "kernel/object.h"
#include "kernel/string.h"
#include "kernel/memory.h"
#include "kernel/operators.h"


ZEPHIR_INIT_CLASS(Qt_Core_QTimeLine_QTimeLine)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Core\\QTimeLine, QTimeLine, qt, core_qtimeline_qtimeline, qt_core_qtimeline_qtimeline_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Core_QTimeLine_QTimeLine, staticMetaObject)
{

	RETURN_LONG(phpqt_qtimeline_static_meta_object());
}

PHP_METHOD(Qt_Core_QTimeLine_QTimeLine, tr)
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
	phpqt_qtimeline_tr(&result, s, c, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QTimeLine_QTimeLine, new_)
{
	zval *duration_param = NULL, *parent__param = NULL, _0, _1;
	zend_long duration, parent_;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(0, 2)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(duration)
		Z_PARAM_LONG(parent_)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(0, 2, &duration_param, &parent__param);
	if (!duration_param) {
		duration = 1000;
	} else {
		}
	if (!parent__param) {
		parent_ = 0;
	} else {
		}
	ZVAL_LONG(&_0, duration);
	ZVAL_LONG(&_1, parent_);
	RETURN_LONG(phpqt_qtimeline_new(&_0, &_1));
}

PHP_METHOD(Qt_Core_QTimeLine_QTimeLine, state)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qtimeline_state(&_0));
}

PHP_METHOD(Qt_Core_QTimeLine_QTimeLine, loopCount)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qtimeline_loop_count(&_0));
}

PHP_METHOD(Qt_Core_QTimeLine_QTimeLine, setLoopCount)
{
	zval *handle_param = NULL, *count_param = NULL, _0, _1;
	zend_long handle, count;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(count)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &count_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, count);
	phpqt_qtimeline_set_loop_count(&_0, &_1);
}

PHP_METHOD(Qt_Core_QTimeLine_QTimeLine, direction)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qtimeline_direction(&_0));
}

PHP_METHOD(Qt_Core_QTimeLine_QTimeLine, setDirection)
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
	phpqt_qtimeline_set_direction(&_0, &_1);
}

PHP_METHOD(Qt_Core_QTimeLine_QTimeLine, duration)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qtimeline_duration(&_0));
}

PHP_METHOD(Qt_Core_QTimeLine_QTimeLine, setDuration)
{
	zval *handle_param = NULL, *duration_param = NULL, _0, _1;
	zend_long handle, duration;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(duration)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &duration_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, duration);
	phpqt_qtimeline_set_duration(&_0, &_1);
}

PHP_METHOD(Qt_Core_QTimeLine_QTimeLine, startFrame)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qtimeline_start_frame(&_0));
}

PHP_METHOD(Qt_Core_QTimeLine_QTimeLine, setStartFrame)
{
	zval *handle_param = NULL, *frame_param = NULL, _0, _1;
	zend_long handle, frame;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(frame)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &frame_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, frame);
	phpqt_qtimeline_set_start_frame(&_0, &_1);
}

PHP_METHOD(Qt_Core_QTimeLine_QTimeLine, endFrame)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qtimeline_end_frame(&_0));
}

PHP_METHOD(Qt_Core_QTimeLine_QTimeLine, setEndFrame)
{
	zval *handle_param = NULL, *frame_param = NULL, _0, _1;
	zend_long handle, frame;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(frame)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &frame_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, frame);
	phpqt_qtimeline_set_end_frame(&_0, &_1);
}

PHP_METHOD(Qt_Core_QTimeLine_QTimeLine, setFrameRange)
{
	zval *handle_param = NULL, *startFrame_param = NULL, *endFrame_param = NULL, _0, _1, _2;
	zend_long handle, startFrame, endFrame;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(startFrame)
		Z_PARAM_LONG(endFrame)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &startFrame_param, &endFrame_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, startFrame);
	ZVAL_LONG(&_2, endFrame);
	phpqt_qtimeline_set_frame_range(&_0, &_1, &_2);
}

PHP_METHOD(Qt_Core_QTimeLine_QTimeLine, updateInterval)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qtimeline_update_interval(&_0));
}

PHP_METHOD(Qt_Core_QTimeLine_QTimeLine, setUpdateInterval)
{
	zval *handle_param = NULL, *interval_param = NULL, _0, _1;
	zend_long handle, interval;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(interval)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &interval_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, interval);
	phpqt_qtimeline_set_update_interval(&_0, &_1);
}

PHP_METHOD(Qt_Core_QTimeLine_QTimeLine, easingCurve)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qtimeline_easing_curve(&_0));
}

PHP_METHOD(Qt_Core_QTimeLine_QTimeLine, setEasingCurve)
{
	zval *handle_param = NULL, *curve_param = NULL, _0, _1;
	zend_long handle, curve;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(curve)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &curve_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, curve);
	phpqt_qtimeline_set_easing_curve(&_0, &_1);
}

PHP_METHOD(Qt_Core_QTimeLine_QTimeLine, currentTime)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qtimeline_current_time(&_0));
}

PHP_METHOD(Qt_Core_QTimeLine_QTimeLine, currentFrame)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qtimeline_current_frame(&_0));
}

PHP_METHOD(Qt_Core_QTimeLine_QTimeLine, currentValue)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_DOUBLE(phpqt_qtimeline_current_value(&_0));
}

PHP_METHOD(Qt_Core_QTimeLine_QTimeLine, frameForTime)
{
	zval *handle_param = NULL, *msec_param = NULL, _0, _1;
	zend_long handle, msec;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(msec)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &msec_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, msec);
	RETURN_LONG(phpqt_qtimeline_frame_for_time(&_0, &_1));
}

PHP_METHOD(Qt_Core_QTimeLine_QTimeLine, valueForTime)
{
	zval *handle_param = NULL, *msec_param = NULL, _0, _1;
	zend_long handle, msec;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(msec)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &msec_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, msec);
	RETURN_DOUBLE(phpqt_qtimeline_value_for_time(&_0, &_1));
}

PHP_METHOD(Qt_Core_QTimeLine_QTimeLine, start)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qtimeline_start(&_0);
}

PHP_METHOD(Qt_Core_QTimeLine_QTimeLine, resume)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qtimeline_resume(&_0);
}

PHP_METHOD(Qt_Core_QTimeLine_QTimeLine, stop)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qtimeline_stop(&_0);
}

PHP_METHOD(Qt_Core_QTimeLine_QTimeLine, setPaused)
{
	zend_bool paused;
	zval *handle_param = NULL, *paused_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_BOOL(paused)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &paused_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_BOOL(&_1, (paused ? 1 : 0));
	phpqt_qtimeline_set_paused(&_0, &_1);
}

PHP_METHOD(Qt_Core_QTimeLine_QTimeLine, setCurrentTime)
{
	zval *handle_param = NULL, *msec_param = NULL, _0, _1;
	zend_long handle, msec;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(msec)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &msec_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, msec);
	phpqt_qtimeline_set_current_time(&_0, &_1);
}

PHP_METHOD(Qt_Core_QTimeLine_QTimeLine, toggleDirection)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qtimeline_toggle_direction(&_0);
}

PHP_METHOD(Qt_Core_QTimeLine_QTimeLine, timerEvent)
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
	phpqt_qtimeline_timer_event(&_0, &_1);
}

