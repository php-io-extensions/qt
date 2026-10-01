
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
#include "src/gui-qtouchevent.h"
#include "kernel/operators.h"
#include "kernel/memory.h"
#include "kernel/object.h"


ZEPHIR_INIT_CLASS(Qt_Gui_QTouchEvent_QTouchEvent)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Gui\\QTouchEvent, QTouchEvent, qt, gui_qtouchevent_qtouchevent, qt_gui_qtouchevent_qtouchevent_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Gui_QTouchEvent_QTouchEvent, new_)
{
	zval *arg0_param = NULL, _0;
	zend_long arg0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(arg0)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &arg0_param);
	ZVAL_LONG(&_0, arg0);
	RETURN_LONG(phpqt_qtouchevent_new(&_0));
}

PHP_METHOD(Qt_Gui_QTouchEvent_QTouchEvent, clone_)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qtouchevent_clone(&_0));
}

PHP_METHOD(Qt_Gui_QTouchEvent_QTouchEvent, newQEventTypeQPointingDeviceQtKeyboardModifiersQListQEventPoint)
{
	zval *eventType_param = NULL, *device_param = NULL, *modifiers = NULL, modifiers_sub, *touchPoints = NULL, touchPoints_sub, __$null, _0, _1;
	zend_long eventType, device;

	ZVAL_UNDEF(&modifiers_sub);
	ZVAL_UNDEF(&touchPoints_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(1, 4)
		Z_PARAM_LONG(eventType)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(device)
		Z_PARAM_ZVAL_OR_NULL(modifiers)
		Z_PARAM_ZVAL_OR_NULL(touchPoints)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 3, &eventType_param, &device_param, &modifiers, &touchPoints);
	if (!device_param) {
		device = 0;
	} else {
		}
	if (!modifiers) {
		modifiers = &modifiers_sub;
		modifiers = &__$null;
	}
	if (!touchPoints) {
		touchPoints = &touchPoints_sub;
		touchPoints = &__$null;
	}
	ZVAL_LONG(&_0, eventType);
	ZVAL_LONG(&_1, device);
	RETURN_LONG(phpqt_qtouchevent_new_q_event_type_q_pointing_device_qt_keyboard_modifiers_q_list_q_event_point(&_0, &_1, modifiers, touchPoints));
}

PHP_METHOD(Qt_Gui_QTouchEvent_QTouchEvent, newQEventTypeQPointingDeviceQtKeyboardModifiersQEventPointStatesQListQEventPoint)
{
	zval *eventType_param = NULL, *device_param = NULL, *modifiers_param = NULL, *touchPointStates_param = NULL, *touchPoints = NULL, touchPoints_sub, __$null, _0, _1, _2, _3;
	zend_long eventType, device, modifiers, touchPointStates;

	ZVAL_UNDEF(&touchPoints_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(4, 5)
		Z_PARAM_LONG(eventType)
		Z_PARAM_LONG(device)
		Z_PARAM_LONG(modifiers)
		Z_PARAM_LONG(touchPointStates)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(touchPoints)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 1, &eventType_param, &device_param, &modifiers_param, &touchPointStates_param, &touchPoints);
	if (!touchPoints) {
		touchPoints = &touchPoints_sub;
		touchPoints = &__$null;
	}
	ZVAL_LONG(&_0, eventType);
	ZVAL_LONG(&_1, device);
	ZVAL_LONG(&_2, modifiers);
	ZVAL_LONG(&_3, touchPointStates);
	RETURN_LONG(phpqt_qtouchevent_new_q_event_type_q_pointing_device_qt_keyboard_modifiers_q_event_point_states_q_list_q_event_point(&_0, &_1, &_2, &_3, touchPoints));
}

PHP_METHOD(Qt_Gui_QTouchEvent_QTouchEvent, target)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qtouchevent_target(&_0));
}

PHP_METHOD(Qt_Gui_QTouchEvent_QTouchEvent, touchPointStates)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qtouchevent_touch_point_states(&_0));
}

PHP_METHOD(Qt_Gui_QTouchEvent_QTouchEvent, isBeginEvent)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qtouchevent_is_begin_event(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Gui_QTouchEvent_QTouchEvent, isUpdateEvent)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qtouchevent_is_update_event(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Gui_QTouchEvent_QTouchEvent, isEndEvent)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qtouchevent_is_end_event(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Gui_QTouchEvent_QTouchEvent, m_target)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qtouchevent_m_target(&_0));
}

PHP_METHOD(Qt_Gui_QTouchEvent_QTouchEvent, setM_target)
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
	phpqt_qtouchevent_set_m_target(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QTouchEvent_QTouchEvent, m_touchPointStates)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qtouchevent_m_touch_point_states(&_0));
}

PHP_METHOD(Qt_Gui_QTouchEvent_QTouchEvent, setM_touchPointStates)
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
	phpqt_qtouchevent_set_m_touch_point_states(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QTouchEvent_QTouchEvent, m_reserved)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qtouchevent_m_reserved(&_0));
}

PHP_METHOD(Qt_Gui_QTouchEvent_QTouchEvent, setM_reserved)
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
	phpqt_qtouchevent_set_m_reserved(&_0, &_1);
}

