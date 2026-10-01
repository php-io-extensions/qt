
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
#include "src/gui-qsinglepointevent.h"
#include "kernel/object.h"
#include "kernel/operators.h"
#include "kernel/memory.h"


ZEPHIR_INIT_CLASS(Qt_Gui_QSinglePointEvent_QSinglePointEvent)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Gui\\QSinglePointEvent, QSinglePointEvent, qt, gui_qsinglepointevent_qsinglepointevent, qt_gui_qsinglepointevent_qsinglepointevent_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Gui_QSinglePointEvent_QSinglePointEvent, staticMetaObject)
{

	RETURN_LONG(phpqt_qsinglepointevent_static_meta_object());
}

PHP_METHOD(Qt_Gui_QSinglePointEvent_QSinglePointEvent, qt_check_for_QGADGET_macro)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qsinglepointevent_qt_check_for__q_g_a_d_g_e_t_macro(&_0);
}

PHP_METHOD(Qt_Gui_QSinglePointEvent_QSinglePointEvent, new_)
{
	zval *arg0_param = NULL, _0;
	zend_long arg0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(arg0)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &arg0_param);
	ZVAL_LONG(&_0, arg0);
	RETURN_LONG(phpqt_qsinglepointevent_new(&_0));
}

PHP_METHOD(Qt_Gui_QSinglePointEvent_QSinglePointEvent, clone_)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qsinglepointevent_clone(&_0));
}

PHP_METHOD(Qt_Gui_QSinglePointEvent_QSinglePointEvent, button)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qsinglepointevent_button(&_0));
}

PHP_METHOD(Qt_Gui_QSinglePointEvent_QSinglePointEvent, buttons)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qsinglepointevent_buttons(&_0));
}

PHP_METHOD(Qt_Gui_QSinglePointEvent_QSinglePointEvent, position)
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
	phpqt_qsinglepointevent_position(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QSinglePointEvent_QSinglePointEvent, scenePosition)
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
	phpqt_qsinglepointevent_scene_position(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QSinglePointEvent_QSinglePointEvent, globalPosition)
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
	phpqt_qsinglepointevent_global_position(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QSinglePointEvent_QSinglePointEvent, isBeginEvent)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qsinglepointevent_is_begin_event(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Gui_QSinglePointEvent_QSinglePointEvent, isUpdateEvent)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qsinglepointevent_is_update_event(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Gui_QSinglePointEvent_QSinglePointEvent, isEndEvent)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qsinglepointevent_is_end_event(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Gui_QSinglePointEvent_QSinglePointEvent, exclusivePointGrabber)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qsinglepointevent_exclusive_point_grabber(&_0));
}

PHP_METHOD(Qt_Gui_QSinglePointEvent_QSinglePointEvent, setExclusivePointGrabber)
{
	zval *handle_param = NULL, *exclusiveGrabber_param = NULL, _0, _1;
	zend_long handle, exclusiveGrabber;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(exclusiveGrabber)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &exclusiveGrabber_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, exclusiveGrabber);
	phpqt_qsinglepointevent_set_exclusive_point_grabber(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QSinglePointEvent_QSinglePointEvent, newQEventTypeQPointingDeviceQEventPointQtMouseButtonQtMouseButtonsQtKeyboardModifiersQtMouseEventSource)
{
	zval *type_param = NULL, *dev_param = NULL, *point_param = NULL, *button_param = NULL, *buttons_param = NULL, *modifiers_param = NULL, *source_param = NULL, _0, _1, _2, _3, _4, _5, _6;
	zend_long type, dev, point, button, buttons, modifiers, source;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_5);
	ZVAL_UNDEF(&_6);
	ZEND_PARSE_PARAMETERS_START(7, 7)
		Z_PARAM_LONG(type)
		Z_PARAM_LONG(dev)
		Z_PARAM_LONG(point)
		Z_PARAM_LONG(button)
		Z_PARAM_LONG(buttons)
		Z_PARAM_LONG(modifiers)
		Z_PARAM_LONG(source)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(7, 0, &type_param, &dev_param, &point_param, &button_param, &buttons_param, &modifiers_param, &source_param);
	ZVAL_LONG(&_0, type);
	ZVAL_LONG(&_1, dev);
	ZVAL_LONG(&_2, point);
	ZVAL_LONG(&_3, button);
	ZVAL_LONG(&_4, buttons);
	ZVAL_LONG(&_5, modifiers);
	ZVAL_LONG(&_6, source);
	RETURN_LONG(phpqt_qsinglepointevent_new_q_event_type_q_pointing_device_q_event_point_qt_mouse_button_qt_mouse_buttons_qt_keyboard_modifiers_qt_mouse_event_source(&_0, &_1, &_2, &_3, &_4, &_5, &_6));
}

PHP_METHOD(Qt_Gui_QSinglePointEvent_QSinglePointEvent, newQEventTypeQPointingDeviceQPointFQPointFQPointFQtMouseButtonQtMouseButtonsQtKeyboardModifiersQtMouseEventSource)
{
	double localPosX, localPosY, scenePosX, scenePosY, globalPosX, globalPosY;
	zval *type_param = NULL, *dev_param = NULL, *localPosX_param = NULL, *localPosY_param = NULL, *scenePosX_param = NULL, *scenePosY_param = NULL, *globalPosX_param = NULL, *globalPosY_param = NULL, *button_param = NULL, *buttons_param = NULL, *modifiers_param = NULL, *source = NULL, source_sub, __$null, _0, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10;
	zend_long type, dev, button, buttons, modifiers;

	ZVAL_UNDEF(&source_sub);
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
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(11, 12)
		Z_PARAM_LONG(type)
		Z_PARAM_LONG(dev)
		Z_PARAM_ZVAL(localPosX)
		Z_PARAM_ZVAL(localPosY)
		Z_PARAM_ZVAL(scenePosX)
		Z_PARAM_ZVAL(scenePosY)
		Z_PARAM_ZVAL(globalPosX)
		Z_PARAM_ZVAL(globalPosY)
		Z_PARAM_LONG(button)
		Z_PARAM_LONG(buttons)
		Z_PARAM_LONG(modifiers)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(source)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(11, 1, &type_param, &dev_param, &localPosX_param, &localPosY_param, &scenePosX_param, &scenePosY_param, &globalPosX_param, &globalPosY_param, &button_param, &buttons_param, &modifiers_param, &source);
	localPosX = zephir_get_doubleval(localPosX_param);
	localPosY = zephir_get_doubleval(localPosY_param);
	scenePosX = zephir_get_doubleval(scenePosX_param);
	scenePosY = zephir_get_doubleval(scenePosY_param);
	globalPosX = zephir_get_doubleval(globalPosX_param);
	globalPosY = zephir_get_doubleval(globalPosY_param);
	if (!source) {
		source = &source_sub;
		source = &__$null;
	}
	ZVAL_LONG(&_0, type);
	ZVAL_LONG(&_1, dev);
	ZVAL_DOUBLE(&_2, localPosX);
	ZVAL_DOUBLE(&_3, localPosY);
	ZVAL_DOUBLE(&_4, scenePosX);
	ZVAL_DOUBLE(&_5, scenePosY);
	ZVAL_DOUBLE(&_6, globalPosX);
	ZVAL_DOUBLE(&_7, globalPosY);
	ZVAL_LONG(&_8, button);
	ZVAL_LONG(&_9, buttons);
	ZVAL_LONG(&_10, modifiers);
	RETURN_LONG(phpqt_qsinglepointevent_new_q_event_type_q_pointing_device_q_point_f_q_point_f_q_point_f_qt_mouse_button_qt_mouse_buttons_qt_keyboard_modifiers_qt_mouse_event_source(&_0, &_1, &_2, &_3, &_4, &_5, &_6, &_7, &_8, &_9, &_10, source));
}

PHP_METHOD(Qt_Gui_QSinglePointEvent_QSinglePointEvent, m_button)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qsinglepointevent_m_button(&_0));
}

PHP_METHOD(Qt_Gui_QSinglePointEvent_QSinglePointEvent, setM_button)
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
	phpqt_qsinglepointevent_set_m_button(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QSinglePointEvent_QSinglePointEvent, m_mouseState)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qsinglepointevent_m_mouse_state(&_0));
}

PHP_METHOD(Qt_Gui_QSinglePointEvent_QSinglePointEvent, setM_mouseState)
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
	phpqt_qsinglepointevent_set_m_mouse_state(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QSinglePointEvent_QSinglePointEvent, m_source)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qsinglepointevent_m_source(&_0));
}

PHP_METHOD(Qt_Gui_QSinglePointEvent_QSinglePointEvent, setM_source)
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
	phpqt_qsinglepointevent_set_m_source(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QSinglePointEvent_QSinglePointEvent, m_reserved)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qsinglepointevent_m_reserved(&_0));
}

PHP_METHOD(Qt_Gui_QSinglePointEvent_QSinglePointEvent, setM_reserved)
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
	phpqt_qsinglepointevent_set_m_reserved(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QSinglePointEvent_QSinglePointEvent, m_reserved2)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qsinglepointevent_m_reserved2(&_0));
}

PHP_METHOD(Qt_Gui_QSinglePointEvent_QSinglePointEvent, setM_reserved2)
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
	phpqt_qsinglepointevent_set_m_reserved2(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QSinglePointEvent_QSinglePointEvent, m_doubleClick)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qsinglepointevent_m_double_click(&_0));
}

PHP_METHOD(Qt_Gui_QSinglePointEvent_QSinglePointEvent, setM_doubleClick)
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
	phpqt_qsinglepointevent_set_m_double_click(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QSinglePointEvent_QSinglePointEvent, m_phase)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qsinglepointevent_m_phase(&_0));
}

PHP_METHOD(Qt_Gui_QSinglePointEvent_QSinglePointEvent, setM_phase)
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
	phpqt_qsinglepointevent_set_m_phase(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QSinglePointEvent_QSinglePointEvent, m_invertedScrolling)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qsinglepointevent_m_inverted_scrolling(&_0));
}

PHP_METHOD(Qt_Gui_QSinglePointEvent_QSinglePointEvent, setM_invertedScrolling)
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
	phpqt_qsinglepointevent_set_m_inverted_scrolling(&_0, &_1);
}

