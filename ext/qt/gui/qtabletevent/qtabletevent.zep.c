
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
#include "src/gui-qtabletevent.h"
#include "kernel/operators.h"
#include "kernel/memory.h"
#include "kernel/object.h"


ZEPHIR_INIT_CLASS(Qt_Gui_QTabletEvent_QTabletEvent)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Gui\\QTabletEvent, QTabletEvent, qt, gui_qtabletevent_qtabletevent, qt_gui_qtabletevent_qtabletevent_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Gui_QTabletEvent_QTabletEvent, new_)
{
	zval *arg0_param = NULL, _0;
	zend_long arg0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(arg0)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &arg0_param);
	ZVAL_LONG(&_0, arg0);
	RETURN_LONG(phpqt_qtabletevent_new(&_0));
}

PHP_METHOD(Qt_Gui_QTabletEvent_QTabletEvent, clone_)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qtabletevent_clone(&_0));
}

PHP_METHOD(Qt_Gui_QTabletEvent_QTabletEvent, newQEventTypeQPointingDeviceQPointFQPointFQrealFloatFloatFloatQrealFloatQtKeyboardModifiersQtMouseButtonQtMouseButtons)
{
	double posX, posY, globalPosX, globalPosY, pressure, xTilt, yTilt, tangentialPressure, rotation, z;
	zval *t_param = NULL, *device_param = NULL, *posX_param = NULL, *posY_param = NULL, *globalPosX_param = NULL, *globalPosY_param = NULL, *pressure_param = NULL, *xTilt_param = NULL, *yTilt_param = NULL, *tangentialPressure_param = NULL, *rotation_param = NULL, *z_param = NULL, *keyState_param = NULL, *button_param = NULL, *buttons_param = NULL, _0, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14;
	zend_long t, device, keyState, button, buttons;

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
	ZVAL_UNDEF(&_12);
	ZVAL_UNDEF(&_13);
	ZVAL_UNDEF(&_14);
	ZEND_PARSE_PARAMETERS_START(15, 15)
		Z_PARAM_LONG(t)
		Z_PARAM_LONG(device)
		Z_PARAM_ZVAL(posX)
		Z_PARAM_ZVAL(posY)
		Z_PARAM_ZVAL(globalPosX)
		Z_PARAM_ZVAL(globalPosY)
		Z_PARAM_ZVAL(pressure)
		Z_PARAM_ZVAL(xTilt)
		Z_PARAM_ZVAL(yTilt)
		Z_PARAM_ZVAL(tangentialPressure)
		Z_PARAM_ZVAL(rotation)
		Z_PARAM_ZVAL(z)
		Z_PARAM_LONG(keyState)
		Z_PARAM_LONG(button)
		Z_PARAM_LONG(buttons)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(15, 0, &t_param, &device_param, &posX_param, &posY_param, &globalPosX_param, &globalPosY_param, &pressure_param, &xTilt_param, &yTilt_param, &tangentialPressure_param, &rotation_param, &z_param, &keyState_param, &button_param, &buttons_param);
	posX = zephir_get_doubleval(posX_param);
	posY = zephir_get_doubleval(posY_param);
	globalPosX = zephir_get_doubleval(globalPosX_param);
	globalPosY = zephir_get_doubleval(globalPosY_param);
	pressure = zephir_get_doubleval(pressure_param);
	xTilt = zephir_get_doubleval(xTilt_param);
	yTilt = zephir_get_doubleval(yTilt_param);
	tangentialPressure = zephir_get_doubleval(tangentialPressure_param);
	rotation = zephir_get_doubleval(rotation_param);
	z = zephir_get_doubleval(z_param);
	ZVAL_LONG(&_0, t);
	ZVAL_LONG(&_1, device);
	ZVAL_DOUBLE(&_2, posX);
	ZVAL_DOUBLE(&_3, posY);
	ZVAL_DOUBLE(&_4, globalPosX);
	ZVAL_DOUBLE(&_5, globalPosY);
	ZVAL_DOUBLE(&_6, pressure);
	ZVAL_DOUBLE(&_7, xTilt);
	ZVAL_DOUBLE(&_8, yTilt);
	ZVAL_DOUBLE(&_9, tangentialPressure);
	ZVAL_DOUBLE(&_10, rotation);
	ZVAL_DOUBLE(&_11, z);
	ZVAL_LONG(&_12, keyState);
	ZVAL_LONG(&_13, button);
	ZVAL_LONG(&_14, buttons);
	RETURN_LONG(phpqt_qtabletevent_new_q_event_type_q_pointing_device_q_point_f_q_point_f_qreal_float_float_float_qreal_float_qt_keyboard_modifiers_qt_mouse_button_qt_mouse_buttons(&_0, &_1, &_2, &_3, &_4, &_5, &_6, &_7, &_8, &_9, &_10, &_11, &_12, &_13, &_14));
}

PHP_METHOD(Qt_Gui_QTabletEvent_QTabletEvent, pressure)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_DOUBLE(phpqt_qtabletevent_pressure(&_0));
}

PHP_METHOD(Qt_Gui_QTabletEvent_QTabletEvent, rotation)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_DOUBLE(phpqt_qtabletevent_rotation(&_0));
}

PHP_METHOD(Qt_Gui_QTabletEvent_QTabletEvent, z)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_DOUBLE(phpqt_qtabletevent_z(&_0));
}

PHP_METHOD(Qt_Gui_QTabletEvent_QTabletEvent, tangentialPressure)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_DOUBLE(phpqt_qtabletevent_tangential_pressure(&_0));
}

PHP_METHOD(Qt_Gui_QTabletEvent_QTabletEvent, xTilt)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_DOUBLE(phpqt_qtabletevent_x_tilt(&_0));
}

PHP_METHOD(Qt_Gui_QTabletEvent_QTabletEvent, yTilt)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_DOUBLE(phpqt_qtabletevent_y_tilt(&_0));
}

PHP_METHOD(Qt_Gui_QTabletEvent_QTabletEvent, m_tangential)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_DOUBLE(phpqt_qtabletevent_m_tangential(&_0));
}

PHP_METHOD(Qt_Gui_QTabletEvent_QTabletEvent, setM_tangential)
{
	double value;
	zval *handle_param = NULL, *value_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(value)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &value_param);
	value = zephir_get_doubleval(value_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, value);
	phpqt_qtabletevent_set_m_tangential(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QTabletEvent_QTabletEvent, m_xTilt)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_DOUBLE(phpqt_qtabletevent_m_x_tilt(&_0));
}

PHP_METHOD(Qt_Gui_QTabletEvent_QTabletEvent, setM_xTilt)
{
	double value;
	zval *handle_param = NULL, *value_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(value)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &value_param);
	value = zephir_get_doubleval(value_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, value);
	phpqt_qtabletevent_set_m_x_tilt(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QTabletEvent_QTabletEvent, m_yTilt)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_DOUBLE(phpqt_qtabletevent_m_y_tilt(&_0));
}

PHP_METHOD(Qt_Gui_QTabletEvent_QTabletEvent, setM_yTilt)
{
	double value;
	zval *handle_param = NULL, *value_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(value)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &value_param);
	value = zephir_get_doubleval(value_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, value);
	phpqt_qtabletevent_set_m_y_tilt(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QTabletEvent_QTabletEvent, m_z)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_DOUBLE(phpqt_qtabletevent_m_z(&_0));
}

PHP_METHOD(Qt_Gui_QTabletEvent_QTabletEvent, setM_z)
{
	double value;
	zval *handle_param = NULL, *value_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(value)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &value_param);
	value = zephir_get_doubleval(value_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, value);
	phpqt_qtabletevent_set_m_z(&_0, &_1);
}

