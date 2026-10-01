
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
#include "src/gui-qmouseevent.h"
#include "kernel/operators.h"
#include "kernel/memory.h"
#include "kernel/object.h"


ZEPHIR_INIT_CLASS(Qt_Gui_QMouseEvent_QMouseEvent)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Gui\\QMouseEvent, QMouseEvent, qt, gui_qmouseevent_qmouseevent, qt_gui_qmouseevent_qmouseevent_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Gui_QMouseEvent_QMouseEvent, new_)
{
	zval *arg0_param = NULL, _0;
	zend_long arg0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(arg0)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &arg0_param);
	ZVAL_LONG(&_0, arg0);
	RETURN_LONG(phpqt_qmouseevent_new(&_0));
}

PHP_METHOD(Qt_Gui_QMouseEvent_QMouseEvent, clone_)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qmouseevent_clone(&_0));
}

PHP_METHOD(Qt_Gui_QMouseEvent_QMouseEvent, newQEventTypeQPointFQtMouseButtonQtMouseButtonsQtKeyboardModifiersQPointingDevice)
{
	double localPosX, localPosY;
	zval *type_param = NULL, *localPosX_param = NULL, *localPosY_param = NULL, *button_param = NULL, *buttons_param = NULL, *modifiers_param = NULL, *device = NULL, device_sub, __$null, _0, _1, _2, _3, _4, _5;
	zend_long type, button, buttons, modifiers;

	ZVAL_UNDEF(&device_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_5);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(6, 7)
		Z_PARAM_LONG(type)
		Z_PARAM_ZVAL(localPosX)
		Z_PARAM_ZVAL(localPosY)
		Z_PARAM_LONG(button)
		Z_PARAM_LONG(buttons)
		Z_PARAM_LONG(modifiers)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(device)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(6, 1, &type_param, &localPosX_param, &localPosY_param, &button_param, &buttons_param, &modifiers_param, &device);
	localPosX = zephir_get_doubleval(localPosX_param);
	localPosY = zephir_get_doubleval(localPosY_param);
	if (!device) {
		device = &device_sub;
		device = &__$null;
	}
	ZVAL_LONG(&_0, type);
	ZVAL_DOUBLE(&_1, localPosX);
	ZVAL_DOUBLE(&_2, localPosY);
	ZVAL_LONG(&_3, button);
	ZVAL_LONG(&_4, buttons);
	ZVAL_LONG(&_5, modifiers);
	RETURN_LONG(phpqt_qmouseevent_new_q_event_type_q_point_f_qt_mouse_button_qt_mouse_buttons_qt_keyboard_modifiers_q_pointing_device(&_0, &_1, &_2, &_3, &_4, &_5, device));
}

PHP_METHOD(Qt_Gui_QMouseEvent_QMouseEvent, newQEventTypeQPointFQPointFQtMouseButtonQtMouseButtonsQtKeyboardModifiersQPointingDevice)
{
	double localPosX, localPosY, globalPosX, globalPosY;
	zval *type_param = NULL, *localPosX_param = NULL, *localPosY_param = NULL, *globalPosX_param = NULL, *globalPosY_param = NULL, *button_param = NULL, *buttons_param = NULL, *modifiers_param = NULL, *device = NULL, device_sub, __$null, _0, _1, _2, _3, _4, _5, _6, _7;
	zend_long type, button, buttons, modifiers;

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
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(8, 9)
		Z_PARAM_LONG(type)
		Z_PARAM_ZVAL(localPosX)
		Z_PARAM_ZVAL(localPosY)
		Z_PARAM_ZVAL(globalPosX)
		Z_PARAM_ZVAL(globalPosY)
		Z_PARAM_LONG(button)
		Z_PARAM_LONG(buttons)
		Z_PARAM_LONG(modifiers)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(device)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(8, 1, &type_param, &localPosX_param, &localPosY_param, &globalPosX_param, &globalPosY_param, &button_param, &buttons_param, &modifiers_param, &device);
	localPosX = zephir_get_doubleval(localPosX_param);
	localPosY = zephir_get_doubleval(localPosY_param);
	globalPosX = zephir_get_doubleval(globalPosX_param);
	globalPosY = zephir_get_doubleval(globalPosY_param);
	if (!device) {
		device = &device_sub;
		device = &__$null;
	}
	ZVAL_LONG(&_0, type);
	ZVAL_DOUBLE(&_1, localPosX);
	ZVAL_DOUBLE(&_2, localPosY);
	ZVAL_DOUBLE(&_3, globalPosX);
	ZVAL_DOUBLE(&_4, globalPosY);
	ZVAL_LONG(&_5, button);
	ZVAL_LONG(&_6, buttons);
	ZVAL_LONG(&_7, modifiers);
	RETURN_LONG(phpqt_qmouseevent_new_q_event_type_q_point_f_q_point_f_qt_mouse_button_qt_mouse_buttons_qt_keyboard_modifiers_q_pointing_device(&_0, &_1, &_2, &_3, &_4, &_5, &_6, &_7, device));
}

PHP_METHOD(Qt_Gui_QMouseEvent_QMouseEvent, newQEventTypeQPointFQPointFQPointFQtMouseButtonQtMouseButtonsQtKeyboardModifiersQPointingDevice)
{
	double localPosX, localPosY, scenePosX, scenePosY, globalPosX, globalPosY;
	zval *type_param = NULL, *localPosX_param = NULL, *localPosY_param = NULL, *scenePosX_param = NULL, *scenePosY_param = NULL, *globalPosX_param = NULL, *globalPosY_param = NULL, *button_param = NULL, *buttons_param = NULL, *modifiers_param = NULL, *device = NULL, device_sub, __$null, _0, _1, _2, _3, _4, _5, _6, _7, _8, _9;
	zend_long type, button, buttons, modifiers;

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
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(10, 11)
		Z_PARAM_LONG(type)
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
		Z_PARAM_ZVAL_OR_NULL(device)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(10, 1, &type_param, &localPosX_param, &localPosY_param, &scenePosX_param, &scenePosY_param, &globalPosX_param, &globalPosY_param, &button_param, &buttons_param, &modifiers_param, &device);
	localPosX = zephir_get_doubleval(localPosX_param);
	localPosY = zephir_get_doubleval(localPosY_param);
	scenePosX = zephir_get_doubleval(scenePosX_param);
	scenePosY = zephir_get_doubleval(scenePosY_param);
	globalPosX = zephir_get_doubleval(globalPosX_param);
	globalPosY = zephir_get_doubleval(globalPosY_param);
	if (!device) {
		device = &device_sub;
		device = &__$null;
	}
	ZVAL_LONG(&_0, type);
	ZVAL_DOUBLE(&_1, localPosX);
	ZVAL_DOUBLE(&_2, localPosY);
	ZVAL_DOUBLE(&_3, scenePosX);
	ZVAL_DOUBLE(&_4, scenePosY);
	ZVAL_DOUBLE(&_5, globalPosX);
	ZVAL_DOUBLE(&_6, globalPosY);
	ZVAL_LONG(&_7, button);
	ZVAL_LONG(&_8, buttons);
	ZVAL_LONG(&_9, modifiers);
	RETURN_LONG(phpqt_qmouseevent_new_q_event_type_q_point_f_q_point_f_q_point_f_qt_mouse_button_qt_mouse_buttons_qt_keyboard_modifiers_q_pointing_device(&_0, &_1, &_2, &_3, &_4, &_5, &_6, &_7, &_8, &_9, device));
}

PHP_METHOD(Qt_Gui_QMouseEvent_QMouseEvent, newQEventTypeQPointFQPointFQPointFQtMouseButtonQtMouseButtonsQtKeyboardModifiersQtMouseEventSourceQPointingDevice)
{
	double localPosX, localPosY, scenePosX, scenePosY, globalPosX, globalPosY;
	zval *type_param = NULL, *localPosX_param = NULL, *localPosY_param = NULL, *scenePosX_param = NULL, *scenePosY_param = NULL, *globalPosX_param = NULL, *globalPosY_param = NULL, *button_param = NULL, *buttons_param = NULL, *modifiers_param = NULL, *source_param = NULL, *device = NULL, device_sub, __$null, _0, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10;
	zend_long type, button, buttons, modifiers, source;

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
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(11, 12)
		Z_PARAM_LONG(type)
		Z_PARAM_ZVAL(localPosX)
		Z_PARAM_ZVAL(localPosY)
		Z_PARAM_ZVAL(scenePosX)
		Z_PARAM_ZVAL(scenePosY)
		Z_PARAM_ZVAL(globalPosX)
		Z_PARAM_ZVAL(globalPosY)
		Z_PARAM_LONG(button)
		Z_PARAM_LONG(buttons)
		Z_PARAM_LONG(modifiers)
		Z_PARAM_LONG(source)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(device)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(11, 1, &type_param, &localPosX_param, &localPosY_param, &scenePosX_param, &scenePosY_param, &globalPosX_param, &globalPosY_param, &button_param, &buttons_param, &modifiers_param, &source_param, &device);
	localPosX = zephir_get_doubleval(localPosX_param);
	localPosY = zephir_get_doubleval(localPosY_param);
	scenePosX = zephir_get_doubleval(scenePosX_param);
	scenePosY = zephir_get_doubleval(scenePosY_param);
	globalPosX = zephir_get_doubleval(globalPosX_param);
	globalPosY = zephir_get_doubleval(globalPosY_param);
	if (!device) {
		device = &device_sub;
		device = &__$null;
	}
	ZVAL_LONG(&_0, type);
	ZVAL_DOUBLE(&_1, localPosX);
	ZVAL_DOUBLE(&_2, localPosY);
	ZVAL_DOUBLE(&_3, scenePosX);
	ZVAL_DOUBLE(&_4, scenePosY);
	ZVAL_DOUBLE(&_5, globalPosX);
	ZVAL_DOUBLE(&_6, globalPosY);
	ZVAL_LONG(&_7, button);
	ZVAL_LONG(&_8, buttons);
	ZVAL_LONG(&_9, modifiers);
	ZVAL_LONG(&_10, source);
	RETURN_LONG(phpqt_qmouseevent_new_q_event_type_q_point_f_q_point_f_q_point_f_qt_mouse_button_qt_mouse_buttons_qt_keyboard_modifiers_qt_mouse_event_source_q_pointing_device(&_0, &_1, &_2, &_3, &_4, &_5, &_6, &_7, &_8, &_9, &_10, device));
}

PHP_METHOD(Qt_Gui_QMouseEvent_QMouseEvent, pos)
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
	phpqt_qmouseevent_pos(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QMouseEvent_QMouseEvent, source)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qmouseevent_source(&_0));
}

PHP_METHOD(Qt_Gui_QMouseEvent_QMouseEvent, flags)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qmouseevent_flags(&_0));
}

