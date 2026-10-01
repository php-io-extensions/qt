
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
#include "src/widgets-qscroller.h"
#include "kernel/object.h"
#include "kernel/string.h"
#include "kernel/memory.h"
#include "kernel/operators.h"


ZEPHIR_INIT_CLASS(Qt_Widgets_QScroller_QScroller)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Widgets\\QScroller, QScroller, qt, widgets_qscroller_qscroller, qt_widgets_qscroller_qscroller_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Widgets_QScroller_QScroller, staticMetaObject)
{

	RETURN_LONG(phpqt_qscroller_static_meta_object());
}

PHP_METHOD(Qt_Widgets_QScroller_QScroller, tr)
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
	phpqt_qscroller_tr(&result, s, c, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Widgets_QScroller_QScroller, hasScroller)
{
	zval *target_param = NULL, _0;
	zend_long target, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(target)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &target_param);
	ZVAL_LONG(&_0, target);
	r = phpqt_qscroller_has_scroller(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Widgets_QScroller_QScroller, scroller)
{
	zval *target_param = NULL, _0;
	zend_long target;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(target)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &target_param);
	ZVAL_LONG(&_0, target);
	RETURN_LONG(phpqt_qscroller_scroller(&_0));
}

PHP_METHOD(Qt_Widgets_QScroller_QScroller, grabGesture)
{
	zval *target_param = NULL, *gestureType = NULL, gestureType_sub, __$null, _0;
	zend_long target;

	ZVAL_UNDEF(&gestureType_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_LONG(target)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(gestureType)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 1, &target_param, &gestureType);
	if (!gestureType) {
		gestureType = &gestureType_sub;
		gestureType = &__$null;
	}
	ZVAL_LONG(&_0, target);
	RETURN_LONG(phpqt_qscroller_grab_gesture(&_0, gestureType));
}

PHP_METHOD(Qt_Widgets_QScroller_QScroller, grabbedGesture)
{
	zval *target_param = NULL, _0;
	zend_long target;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(target)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &target_param);
	ZVAL_LONG(&_0, target);
	RETURN_LONG(phpqt_qscroller_grabbed_gesture(&_0));
}

PHP_METHOD(Qt_Widgets_QScroller_QScroller, ungrabGesture)
{
	zval *target_param = NULL, _0;
	zend_long target;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(target)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &target_param);
	ZVAL_LONG(&_0, target);
	phpqt_qscroller_ungrab_gesture(&_0);
}

PHP_METHOD(Qt_Widgets_QScroller_QScroller, activeScrollers)
{
	zval result;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;

	ZVAL_UNDEF(&result);
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);

	ZEPHIR_INIT_VAR(&result);
	phpqt_qscroller_active_scrollers(&result);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Widgets_QScroller_QScroller, target)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qscroller_target(&_0));
}

PHP_METHOD(Qt_Widgets_QScroller_QScroller, state)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qscroller_state(&_0));
}

PHP_METHOD(Qt_Widgets_QScroller_QScroller, handleInput)
{
	double positionX, positionY;
	zval *handle_param = NULL, *input_param = NULL, *positionX_param = NULL, *positionY_param = NULL, *timestamp_param = NULL, _0, _1, _2, _3, _4;
	zend_long handle, input, timestamp, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZEND_PARSE_PARAMETERS_START(4, 5)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(input)
		Z_PARAM_ZVAL(positionX)
		Z_PARAM_ZVAL(positionY)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(timestamp)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 1, &handle_param, &input_param, &positionX_param, &positionY_param, &timestamp_param);
	positionX = zephir_get_doubleval(positionX_param);
	positionY = zephir_get_doubleval(positionY_param);
	if (!timestamp_param) {
		timestamp = 0;
	} else {
		}
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, input);
	ZVAL_DOUBLE(&_2, positionX);
	ZVAL_DOUBLE(&_3, positionY);
	ZVAL_LONG(&_4, timestamp);
	r = phpqt_qscroller_handle_input(&_0, &_1, &_2, &_3, &_4);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Widgets_QScroller_QScroller, stop)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qscroller_stop(&_0);
}

PHP_METHOD(Qt_Widgets_QScroller_QScroller, velocity)
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
	phpqt_qscroller_velocity(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Widgets_QScroller_QScroller, finalPosition)
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
	phpqt_qscroller_final_position(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Widgets_QScroller_QScroller, pixelPerMeter)
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
	phpqt_qscroller_pixel_per_meter(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Widgets_QScroller_QScroller, scrollerProperties)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qscroller_scroller_properties(&_0));
}

PHP_METHOD(Qt_Widgets_QScroller_QScroller, setSnapPositionsX)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval positions;
	zval *handle_param = NULL, *positions_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&positions);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ARRAY(positions)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &positions_param);
	zephir_get_arrval(&positions, positions_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qscroller_set_snap_positions_x(&_0, &positions);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_Widgets_QScroller_QScroller, setSnapPositionsXQrealQreal)
{
	double first, interval;
	zval *handle_param = NULL, *first_param = NULL, *interval_param = NULL, _0, _1, _2;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(first)
		Z_PARAM_ZVAL(interval)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &first_param, &interval_param);
	first = zephir_get_doubleval(first_param);
	interval = zephir_get_doubleval(interval_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, first);
	ZVAL_DOUBLE(&_2, interval);
	phpqt_qscroller_set_snap_positions_x_qreal_qreal(&_0, &_1, &_2);
}

PHP_METHOD(Qt_Widgets_QScroller_QScroller, setSnapPositionsY)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval positions;
	zval *handle_param = NULL, *positions_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&positions);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ARRAY(positions)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &positions_param);
	zephir_get_arrval(&positions, positions_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qscroller_set_snap_positions_y(&_0, &positions);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_Widgets_QScroller_QScroller, setSnapPositionsYQrealQreal)
{
	double first, interval;
	zval *handle_param = NULL, *first_param = NULL, *interval_param = NULL, _0, _1, _2;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(first)
		Z_PARAM_ZVAL(interval)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &first_param, &interval_param);
	first = zephir_get_doubleval(first_param);
	interval = zephir_get_doubleval(interval_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, first);
	ZVAL_DOUBLE(&_2, interval);
	phpqt_qscroller_set_snap_positions_y_qreal_qreal(&_0, &_1, &_2);
}

PHP_METHOD(Qt_Widgets_QScroller_QScroller, setScrollerProperties)
{
	zval *handle_param = NULL, *prop_param = NULL, _0, _1;
	zend_long handle, prop;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(prop)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &prop_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, prop);
	phpqt_qscroller_set_scroller_properties(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QScroller_QScroller, scrollTo)
{
	double posX, posY;
	zval *handle_param = NULL, *posX_param = NULL, *posY_param = NULL, _0, _1, _2;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(posX)
		Z_PARAM_ZVAL(posY)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &posX_param, &posY_param);
	posX = zephir_get_doubleval(posX_param);
	posY = zephir_get_doubleval(posY_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, posX);
	ZVAL_DOUBLE(&_2, posY);
	phpqt_qscroller_scroll_to(&_0, &_1, &_2);
}

PHP_METHOD(Qt_Widgets_QScroller_QScroller, scrollToQPointFInt)
{
	double posX, posY;
	zval *handle_param = NULL, *posX_param = NULL, *posY_param = NULL, *scrollTime_param = NULL, _0, _1, _2, _3;
	zend_long handle, scrollTime;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(posX)
		Z_PARAM_ZVAL(posY)
		Z_PARAM_LONG(scrollTime)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 0, &handle_param, &posX_param, &posY_param, &scrollTime_param);
	posX = zephir_get_doubleval(posX_param);
	posY = zephir_get_doubleval(posY_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, posX);
	ZVAL_DOUBLE(&_2, posY);
	ZVAL_LONG(&_3, scrollTime);
	phpqt_qscroller_scroll_to_q_point_f_int(&_0, &_1, &_2, &_3);
}

PHP_METHOD(Qt_Widgets_QScroller_QScroller, ensureVisible)
{
	double rectX, rectY, rectWidth, rectHeight, xmargin, ymargin;
	zval *handle_param = NULL, *rectX_param = NULL, *rectY_param = NULL, *rectWidth_param = NULL, *rectHeight_param = NULL, *xmargin_param = NULL, *ymargin_param = NULL, _0, _1, _2, _3, _4, _5, _6;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_5);
	ZVAL_UNDEF(&_6);
	ZEND_PARSE_PARAMETERS_START(7, 7)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(rectX)
		Z_PARAM_ZVAL(rectY)
		Z_PARAM_ZVAL(rectWidth)
		Z_PARAM_ZVAL(rectHeight)
		Z_PARAM_ZVAL(xmargin)
		Z_PARAM_ZVAL(ymargin)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(7, 0, &handle_param, &rectX_param, &rectY_param, &rectWidth_param, &rectHeight_param, &xmargin_param, &ymargin_param);
	rectX = zephir_get_doubleval(rectX_param);
	rectY = zephir_get_doubleval(rectY_param);
	rectWidth = zephir_get_doubleval(rectWidth_param);
	rectHeight = zephir_get_doubleval(rectHeight_param);
	xmargin = zephir_get_doubleval(xmargin_param);
	ymargin = zephir_get_doubleval(ymargin_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, rectX);
	ZVAL_DOUBLE(&_2, rectY);
	ZVAL_DOUBLE(&_3, rectWidth);
	ZVAL_DOUBLE(&_4, rectHeight);
	ZVAL_DOUBLE(&_5, xmargin);
	ZVAL_DOUBLE(&_6, ymargin);
	phpqt_qscroller_ensure_visible(&_0, &_1, &_2, &_3, &_4, &_5, &_6);
}

PHP_METHOD(Qt_Widgets_QScroller_QScroller, ensureVisibleQRectFQrealQrealInt)
{
	double rectX, rectY, rectWidth, rectHeight, xmargin, ymargin;
	zval *handle_param = NULL, *rectX_param = NULL, *rectY_param = NULL, *rectWidth_param = NULL, *rectHeight_param = NULL, *xmargin_param = NULL, *ymargin_param = NULL, *scrollTime_param = NULL, _0, _1, _2, _3, _4, _5, _6, _7;
	zend_long handle, scrollTime;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_5);
	ZVAL_UNDEF(&_6);
	ZVAL_UNDEF(&_7);
	ZEND_PARSE_PARAMETERS_START(8, 8)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(rectX)
		Z_PARAM_ZVAL(rectY)
		Z_PARAM_ZVAL(rectWidth)
		Z_PARAM_ZVAL(rectHeight)
		Z_PARAM_ZVAL(xmargin)
		Z_PARAM_ZVAL(ymargin)
		Z_PARAM_LONG(scrollTime)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(8, 0, &handle_param, &rectX_param, &rectY_param, &rectWidth_param, &rectHeight_param, &xmargin_param, &ymargin_param, &scrollTime_param);
	rectX = zephir_get_doubleval(rectX_param);
	rectY = zephir_get_doubleval(rectY_param);
	rectWidth = zephir_get_doubleval(rectWidth_param);
	rectHeight = zephir_get_doubleval(rectHeight_param);
	xmargin = zephir_get_doubleval(xmargin_param);
	ymargin = zephir_get_doubleval(ymargin_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, rectX);
	ZVAL_DOUBLE(&_2, rectY);
	ZVAL_DOUBLE(&_3, rectWidth);
	ZVAL_DOUBLE(&_4, rectHeight);
	ZVAL_DOUBLE(&_5, xmargin);
	ZVAL_DOUBLE(&_6, ymargin);
	ZVAL_LONG(&_7, scrollTime);
	phpqt_qscroller_ensure_visible_q_rect_f_qreal_qreal_int(&_0, &_1, &_2, &_3, &_4, &_5, &_6, &_7);
}

PHP_METHOD(Qt_Widgets_QScroller_QScroller, resendPrepareEvent)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qscroller_resend_prepare_event(&_0);
}

PHP_METHOD(Qt_Widgets_QScroller_QScroller, stateChanged)
{
	zval *handle_param = NULL, *newstate_param = NULL, _0, _1;
	zend_long handle, newstate;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(newstate)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &newstate_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, newstate);
	phpqt_qscroller_state_changed(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QScroller_QScroller, scrollerPropertiesChanged)
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
	phpqt_qscroller_scroller_properties_changed(&_0, &_1);
}

