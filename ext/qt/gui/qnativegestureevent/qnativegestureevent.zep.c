
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
#include "src/gui-qnativegestureevent.h"
#include "kernel/operators.h"
#include "kernel/memory.h"
#include "kernel/object.h"


ZEPHIR_INIT_CLASS(Qt_Gui_QNativeGestureEvent_QNativeGestureEvent)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Gui\\QNativeGestureEvent, QNativeGestureEvent, qt, gui_qnativegestureevent_qnativegestureevent, qt_gui_qnativegestureevent_qnativegestureevent_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Gui_QNativeGestureEvent_QNativeGestureEvent, new_)
{
	zval *arg0_param = NULL, _0;
	zend_long arg0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(arg0)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &arg0_param);
	ZVAL_LONG(&_0, arg0);
	RETURN_LONG(phpqt_qnativegestureevent_new(&_0));
}

PHP_METHOD(Qt_Gui_QNativeGestureEvent_QNativeGestureEvent, clone_)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qnativegestureevent_clone(&_0));
}

PHP_METHOD(Qt_Gui_QNativeGestureEvent_QNativeGestureEvent, newQtNativeGestureTypeQPointingDeviceQPointFQPointFQPointFQrealQuint64Quint64)
{
	double localPosX, localPosY, scenePosX, scenePosY, globalPosX, globalPosY, value;
	zval *type_param = NULL, *dev_param = NULL, *localPosX_param = NULL, *localPosY_param = NULL, *scenePosX_param = NULL, *scenePosY_param = NULL, *globalPosX_param = NULL, *globalPosY_param = NULL, *value_param = NULL, *sequenceId_param = NULL, *intArgument_param = NULL, _0, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10;
	zend_long type, dev, sequenceId, intArgument;

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
	ZEND_PARSE_PARAMETERS_START(11, 11)
		Z_PARAM_LONG(type)
		Z_PARAM_LONG(dev)
		Z_PARAM_ZVAL(localPosX)
		Z_PARAM_ZVAL(localPosY)
		Z_PARAM_ZVAL(scenePosX)
		Z_PARAM_ZVAL(scenePosY)
		Z_PARAM_ZVAL(globalPosX)
		Z_PARAM_ZVAL(globalPosY)
		Z_PARAM_ZVAL(value)
		Z_PARAM_LONG(sequenceId)
		Z_PARAM_LONG(intArgument)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(11, 0, &type_param, &dev_param, &localPosX_param, &localPosY_param, &scenePosX_param, &scenePosY_param, &globalPosX_param, &globalPosY_param, &value_param, &sequenceId_param, &intArgument_param);
	localPosX = zephir_get_doubleval(localPosX_param);
	localPosY = zephir_get_doubleval(localPosY_param);
	scenePosX = zephir_get_doubleval(scenePosX_param);
	scenePosY = zephir_get_doubleval(scenePosY_param);
	globalPosX = zephir_get_doubleval(globalPosX_param);
	globalPosY = zephir_get_doubleval(globalPosY_param);
	value = zephir_get_doubleval(value_param);
	ZVAL_LONG(&_0, type);
	ZVAL_LONG(&_1, dev);
	ZVAL_DOUBLE(&_2, localPosX);
	ZVAL_DOUBLE(&_3, localPosY);
	ZVAL_DOUBLE(&_4, scenePosX);
	ZVAL_DOUBLE(&_5, scenePosY);
	ZVAL_DOUBLE(&_6, globalPosX);
	ZVAL_DOUBLE(&_7, globalPosY);
	ZVAL_DOUBLE(&_8, value);
	ZVAL_LONG(&_9, sequenceId);
	ZVAL_LONG(&_10, intArgument);
	RETURN_LONG(phpqt_qnativegestureevent_new_qt_native_gesture_type_q_pointing_device_q_point_f_q_point_f_q_point_f_qreal_quint64_quint64(&_0, &_1, &_2, &_3, &_4, &_5, &_6, &_7, &_8, &_9, &_10));
}

PHP_METHOD(Qt_Gui_QNativeGestureEvent_QNativeGestureEvent, newQtNativeGestureTypeQPointingDeviceIntQPointFQPointFQPointFQrealQPointFQuint64)
{
	double localPosX, localPosY, scenePosX, scenePosY, globalPosX, globalPosY, value, deltaX, deltaY;
	zval *type_param = NULL, *dev_param = NULL, *fingerCount_param = NULL, *localPosX_param = NULL, *localPosY_param = NULL, *scenePosX_param = NULL, *scenePosY_param = NULL, *globalPosX_param = NULL, *globalPosY_param = NULL, *value_param = NULL, *deltaX_param = NULL, *deltaY_param = NULL, *sequenceId = NULL, sequenceId_sub, __$null, _0, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11;
	zend_long type, dev, fingerCount;

	ZVAL_UNDEF(&sequenceId_sub);
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
	ZEND_PARSE_PARAMETERS_START(12, 13)
		Z_PARAM_LONG(type)
		Z_PARAM_LONG(dev)
		Z_PARAM_LONG(fingerCount)
		Z_PARAM_ZVAL(localPosX)
		Z_PARAM_ZVAL(localPosY)
		Z_PARAM_ZVAL(scenePosX)
		Z_PARAM_ZVAL(scenePosY)
		Z_PARAM_ZVAL(globalPosX)
		Z_PARAM_ZVAL(globalPosY)
		Z_PARAM_ZVAL(value)
		Z_PARAM_ZVAL(deltaX)
		Z_PARAM_ZVAL(deltaY)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(sequenceId)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(12, 1, &type_param, &dev_param, &fingerCount_param, &localPosX_param, &localPosY_param, &scenePosX_param, &scenePosY_param, &globalPosX_param, &globalPosY_param, &value_param, &deltaX_param, &deltaY_param, &sequenceId);
	localPosX = zephir_get_doubleval(localPosX_param);
	localPosY = zephir_get_doubleval(localPosY_param);
	scenePosX = zephir_get_doubleval(scenePosX_param);
	scenePosY = zephir_get_doubleval(scenePosY_param);
	globalPosX = zephir_get_doubleval(globalPosX_param);
	globalPosY = zephir_get_doubleval(globalPosY_param);
	value = zephir_get_doubleval(value_param);
	deltaX = zephir_get_doubleval(deltaX_param);
	deltaY = zephir_get_doubleval(deltaY_param);
	if (!sequenceId) {
		sequenceId = &sequenceId_sub;
		sequenceId = &__$null;
	}
	ZVAL_LONG(&_0, type);
	ZVAL_LONG(&_1, dev);
	ZVAL_LONG(&_2, fingerCount);
	ZVAL_DOUBLE(&_3, localPosX);
	ZVAL_DOUBLE(&_4, localPosY);
	ZVAL_DOUBLE(&_5, scenePosX);
	ZVAL_DOUBLE(&_6, scenePosY);
	ZVAL_DOUBLE(&_7, globalPosX);
	ZVAL_DOUBLE(&_8, globalPosY);
	ZVAL_DOUBLE(&_9, value);
	ZVAL_DOUBLE(&_10, deltaX);
	ZVAL_DOUBLE(&_11, deltaY);
	RETURN_LONG(phpqt_qnativegestureevent_new_qt_native_gesture_type_q_pointing_device_int_q_point_f_q_point_f_q_point_f_qreal_q_point_f_quint64(&_0, &_1, &_2, &_3, &_4, &_5, &_6, &_7, &_8, &_9, &_10, &_11, sequenceId));
}

PHP_METHOD(Qt_Gui_QNativeGestureEvent_QNativeGestureEvent, gestureType)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qnativegestureevent_gesture_type(&_0));
}

PHP_METHOD(Qt_Gui_QNativeGestureEvent_QNativeGestureEvent, fingerCount)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qnativegestureevent_finger_count(&_0));
}

PHP_METHOD(Qt_Gui_QNativeGestureEvent_QNativeGestureEvent, value)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_DOUBLE(phpqt_qnativegestureevent_value(&_0));
}

PHP_METHOD(Qt_Gui_QNativeGestureEvent_QNativeGestureEvent, delta)
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
	phpqt_qnativegestureevent_delta(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QNativeGestureEvent_QNativeGestureEvent, m_sequenceId)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qnativegestureevent_m_sequence_id(&_0));
}

PHP_METHOD(Qt_Gui_QNativeGestureEvent_QNativeGestureEvent, setM_sequenceId)
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
	phpqt_qnativegestureevent_set_m_sequence_id(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QNativeGestureEvent_QNativeGestureEvent, m_delta)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qnativegestureevent_m_delta(&_0));
}

PHP_METHOD(Qt_Gui_QNativeGestureEvent_QNativeGestureEvent, setM_delta)
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
	phpqt_qnativegestureevent_set_m_delta(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QNativeGestureEvent_QNativeGestureEvent, m_realValue)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_DOUBLE(phpqt_qnativegestureevent_m_real_value(&_0));
}

PHP_METHOD(Qt_Gui_QNativeGestureEvent_QNativeGestureEvent, setM_realValue)
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
	phpqt_qnativegestureevent_set_m_real_value(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QNativeGestureEvent_QNativeGestureEvent, m_gestureType)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qnativegestureevent_m_gesture_type(&_0));
}

PHP_METHOD(Qt_Gui_QNativeGestureEvent_QNativeGestureEvent, setM_gestureType)
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
	phpqt_qnativegestureevent_set_m_gesture_type(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QNativeGestureEvent_QNativeGestureEvent, m_fingerCount)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qnativegestureevent_m_finger_count(&_0));
}

PHP_METHOD(Qt_Gui_QNativeGestureEvent_QNativeGestureEvent, setM_fingerCount)
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
	phpqt_qnativegestureevent_set_m_finger_count(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QNativeGestureEvent_QNativeGestureEvent, m_reserved)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qnativegestureevent_m_reserved(&_0));
}

PHP_METHOD(Qt_Gui_QNativeGestureEvent_QNativeGestureEvent, setM_reserved)
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
	phpqt_qnativegestureevent_set_m_reserved(&_0, &_1);
}

