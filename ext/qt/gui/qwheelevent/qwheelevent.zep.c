
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
#include "src/gui-qwheelevent.h"
#include "kernel/object.h"
#include "kernel/operators.h"
#include "kernel/memory.h"


ZEPHIR_INIT_CLASS(Qt_Gui_QWheelEvent_QWheelEvent)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Gui\\QWheelEvent, QWheelEvent, qt, gui_qwheelevent_qwheelevent, qt_gui_qwheelevent_qwheelevent_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Gui_QWheelEvent_QWheelEvent, staticMetaObject)
{

	RETURN_LONG(phpqt_qwheelevent_static_meta_object());
}

PHP_METHOD(Qt_Gui_QWheelEvent_QWheelEvent, qt_check_for_QGADGET_macro)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qwheelevent_qt_check_for__q_g_a_d_g_e_t_macro(&_0);
}

PHP_METHOD(Qt_Gui_QWheelEvent_QWheelEvent, new_)
{
	zval *arg0_param = NULL, _0;
	zend_long arg0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(arg0)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &arg0_param);
	ZVAL_LONG(&_0, arg0);
	RETURN_LONG(phpqt_qwheelevent_new(&_0));
}

PHP_METHOD(Qt_Gui_QWheelEvent_QWheelEvent, clone_)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qwheelevent_clone(&_0));
}

PHP_METHOD(Qt_Gui_QWheelEvent_QWheelEvent, newQPointFQPointFQPointQPointQtMouseButtonsQtKeyboardModifiersQtScrollPhaseBoolQtMouseEventSourceQPointingDevice)
{
	zend_bool inverted;
	zend_long pixelDeltaX, pixelDeltaY, angleDeltaX, angleDeltaY, buttons, modifiers, phase;
	zval *posX_param = NULL, *posY_param = NULL, *globalPosX_param = NULL, *globalPosY_param = NULL, *pixelDeltaX_param = NULL, *pixelDeltaY_param = NULL, *angleDeltaX_param = NULL, *angleDeltaY_param = NULL, *buttons_param = NULL, *modifiers_param = NULL, *phase_param = NULL, *inverted_param = NULL, *source = NULL, source_sub, *device = NULL, device_sub, __$null, _0, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11;
	double posX, posY, globalPosX, globalPosY;

	ZVAL_UNDEF(&source_sub);
	ZVAL_UNDEF(&device_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_5);
	ZVAL_UNDEF(&_6);
	ZVAL_UNDEF(&_7);
	ZVAL_UNDEF(&_8);
	ZVAL_UNDEF(&_9);
	ZVAL_UNDEF(&_10);
	ZVAL_UNDEF(&_11);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(12, 14)
		Z_PARAM_ZVAL(posX)
		Z_PARAM_ZVAL(posY)
		Z_PARAM_ZVAL(globalPosX)
		Z_PARAM_ZVAL(globalPosY)
		Z_PARAM_LONG(pixelDeltaX)
		Z_PARAM_LONG(pixelDeltaY)
		Z_PARAM_LONG(angleDeltaX)
		Z_PARAM_LONG(angleDeltaY)
		Z_PARAM_LONG(buttons)
		Z_PARAM_LONG(modifiers)
		Z_PARAM_LONG(phase)
		Z_PARAM_BOOL(inverted)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(source)
		Z_PARAM_ZVAL_OR_NULL(device)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(12, 2, &posX_param, &posY_param, &globalPosX_param, &globalPosY_param, &pixelDeltaX_param, &pixelDeltaY_param, &angleDeltaX_param, &angleDeltaY_param, &buttons_param, &modifiers_param, &phase_param, &inverted_param, &source, &device);
	posX = zephir_get_doubleval(posX_param);
	posY = zephir_get_doubleval(posY_param);
	globalPosX = zephir_get_doubleval(globalPosX_param);
	globalPosY = zephir_get_doubleval(globalPosY_param);
	if (!source) {
		source = &source_sub;
		source = &__$null;
	}
	if (!device) {
		device = &device_sub;
		device = &__$null;
	}
	ZVAL_DOUBLE(&_0, posX);
	ZVAL_DOUBLE(&_1, posY);
	ZVAL_DOUBLE(&_2, globalPosX);
	ZVAL_DOUBLE(&_3, globalPosY);
	ZVAL_LONG(&_4, pixelDeltaX);
	ZVAL_LONG(&_5, pixelDeltaY);
	ZVAL_LONG(&_6, angleDeltaX);
	ZVAL_LONG(&_7, angleDeltaY);
	ZVAL_LONG(&_8, buttons);
	ZVAL_LONG(&_9, modifiers);
	ZVAL_LONG(&_10, phase);
	ZVAL_BOOL(&_11, (inverted ? 1 : 0));
	RETURN_LONG(phpqt_qwheelevent_new_q_point_f_q_point_f_q_point_q_point_qt_mouse_buttons_qt_keyboard_modifiers_qt_scroll_phase_bool_qt_mouse_event_source_q_pointing_device(&_0, &_1, &_2, &_3, &_4, &_5, &_6, &_7, &_8, &_9, &_10, &_11, source, device));
}

PHP_METHOD(Qt_Gui_QWheelEvent_QWheelEvent, pixelDelta)
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
	phpqt_qwheelevent_pixel_delta(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QWheelEvent_QWheelEvent, angleDelta)
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
	phpqt_qwheelevent_angle_delta(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QWheelEvent_QWheelEvent, phase)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qwheelevent_phase(&_0));
}

PHP_METHOD(Qt_Gui_QWheelEvent_QWheelEvent, inverted)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qwheelevent_inverted(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Gui_QWheelEvent_QWheelEvent, isInverted)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qwheelevent_is_inverted(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Gui_QWheelEvent_QWheelEvent, hasPixelDelta)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qwheelevent_has_pixel_delta(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Gui_QWheelEvent_QWheelEvent, isBeginEvent)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qwheelevent_is_begin_event(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Gui_QWheelEvent_QWheelEvent, isUpdateEvent)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qwheelevent_is_update_event(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Gui_QWheelEvent_QWheelEvent, isEndEvent)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qwheelevent_is_end_event(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Gui_QWheelEvent_QWheelEvent, source)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qwheelevent_source(&_0));
}

PHP_METHOD(Qt_Gui_QWheelEvent_QWheelEvent, m_pixelDelta)
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
	phpqt_qwheelevent_m_pixel_delta(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QWheelEvent_QWheelEvent, setM_pixelDelta)
{
	zval *handle_param = NULL, *valueX_param = NULL, *valueY_param = NULL, _0, _1, _2;
	zend_long handle, valueX, valueY;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(valueX)
		Z_PARAM_LONG(valueY)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &valueX_param, &valueY_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, valueX);
	ZVAL_LONG(&_2, valueY);
	phpqt_qwheelevent_set_m_pixel_delta(&_0, &_1, &_2);
}

PHP_METHOD(Qt_Gui_QWheelEvent_QWheelEvent, m_angleDelta)
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
	phpqt_qwheelevent_m_angle_delta(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QWheelEvent_QWheelEvent, setM_angleDelta)
{
	zval *handle_param = NULL, *valueX_param = NULL, *valueY_param = NULL, _0, _1, _2;
	zend_long handle, valueX, valueY;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(valueX)
		Z_PARAM_LONG(valueY)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &valueX_param, &valueY_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, valueX);
	ZVAL_LONG(&_2, valueY);
	phpqt_qwheelevent_set_m_angle_delta(&_0, &_1, &_2);
}

