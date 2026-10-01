
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
#include "src/gui-qhoverevent.h"
#include "kernel/operators.h"
#include "kernel/memory.h"
#include "kernel/object.h"


ZEPHIR_INIT_CLASS(Qt_Gui_QHoverEvent_QHoverEvent)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Gui\\QHoverEvent, QHoverEvent, qt, gui_qhoverevent_qhoverevent, qt_gui_qhoverevent_qhoverevent_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Gui_QHoverEvent_QHoverEvent, new_)
{
	zval *arg0_param = NULL, _0;
	zend_long arg0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(arg0)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &arg0_param);
	ZVAL_LONG(&_0, arg0);
	RETURN_LONG(phpqt_qhoverevent_new(&_0));
}

PHP_METHOD(Qt_Gui_QHoverEvent_QHoverEvent, clone_)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qhoverevent_clone(&_0));
}

PHP_METHOD(Qt_Gui_QHoverEvent_QHoverEvent, newQEventTypeQPointFQPointFQPointFQtKeyboardModifiersQPointingDevice)
{
	double scenePosX, scenePosY, globalPosX, globalPosY, oldPosX, oldPosY;
	zval *type_param = NULL, *scenePosX_param = NULL, *scenePosY_param = NULL, *globalPosX_param = NULL, *globalPosY_param = NULL, *oldPosX_param = NULL, *oldPosY_param = NULL, *modifiers = NULL, modifiers_sub, *device = NULL, device_sub, __$null, _0, _1, _2, _3, _4, _5, _6;
	zend_long type;

	ZVAL_UNDEF(&modifiers_sub);
	ZVAL_UNDEF(&device_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_5);
	ZVAL_UNDEF(&_6);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(7, 9)
		Z_PARAM_LONG(type)
		Z_PARAM_ZVAL(scenePosX)
		Z_PARAM_ZVAL(scenePosY)
		Z_PARAM_ZVAL(globalPosX)
		Z_PARAM_ZVAL(globalPosY)
		Z_PARAM_ZVAL(oldPosX)
		Z_PARAM_ZVAL(oldPosY)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(modifiers)
		Z_PARAM_ZVAL_OR_NULL(device)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(7, 2, &type_param, &scenePosX_param, &scenePosY_param, &globalPosX_param, &globalPosY_param, &oldPosX_param, &oldPosY_param, &modifiers, &device);
	scenePosX = zephir_get_doubleval(scenePosX_param);
	scenePosY = zephir_get_doubleval(scenePosY_param);
	globalPosX = zephir_get_doubleval(globalPosX_param);
	globalPosY = zephir_get_doubleval(globalPosY_param);
	oldPosX = zephir_get_doubleval(oldPosX_param);
	oldPosY = zephir_get_doubleval(oldPosY_param);
	if (!modifiers) {
		modifiers = &modifiers_sub;
		modifiers = &__$null;
	}
	if (!device) {
		device = &device_sub;
		device = &__$null;
	}
	ZVAL_LONG(&_0, type);
	ZVAL_DOUBLE(&_1, scenePosX);
	ZVAL_DOUBLE(&_2, scenePosY);
	ZVAL_DOUBLE(&_3, globalPosX);
	ZVAL_DOUBLE(&_4, globalPosY);
	ZVAL_DOUBLE(&_5, oldPosX);
	ZVAL_DOUBLE(&_6, oldPosY);
	RETURN_LONG(phpqt_qhoverevent_new_q_event_type_q_point_f_q_point_f_q_point_f_qt_keyboard_modifiers_q_pointing_device(&_0, &_1, &_2, &_3, &_4, &_5, &_6, modifiers, device));
}

PHP_METHOD(Qt_Gui_QHoverEvent_QHoverEvent, newQEventTypeQPointFQPointFQtKeyboardModifiersQPointingDevice)
{
	double posX, posY, oldPosX, oldPosY;
	zval *type_param = NULL, *posX_param = NULL, *posY_param = NULL, *oldPosX_param = NULL, *oldPosY_param = NULL, *modifiers = NULL, modifiers_sub, *device = NULL, device_sub, __$null, _0, _1, _2, _3, _4;
	zend_long type;

	ZVAL_UNDEF(&modifiers_sub);
	ZVAL_UNDEF(&device_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(5, 7)
		Z_PARAM_LONG(type)
		Z_PARAM_ZVAL(posX)
		Z_PARAM_ZVAL(posY)
		Z_PARAM_ZVAL(oldPosX)
		Z_PARAM_ZVAL(oldPosY)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(modifiers)
		Z_PARAM_ZVAL_OR_NULL(device)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(5, 2, &type_param, &posX_param, &posY_param, &oldPosX_param, &oldPosY_param, &modifiers, &device);
	posX = zephir_get_doubleval(posX_param);
	posY = zephir_get_doubleval(posY_param);
	oldPosX = zephir_get_doubleval(oldPosX_param);
	oldPosY = zephir_get_doubleval(oldPosY_param);
	if (!modifiers) {
		modifiers = &modifiers_sub;
		modifiers = &__$null;
	}
	if (!device) {
		device = &device_sub;
		device = &__$null;
	}
	ZVAL_LONG(&_0, type);
	ZVAL_DOUBLE(&_1, posX);
	ZVAL_DOUBLE(&_2, posY);
	ZVAL_DOUBLE(&_3, oldPosX);
	ZVAL_DOUBLE(&_4, oldPosY);
	RETURN_LONG(phpqt_qhoverevent_new_q_event_type_q_point_f_q_point_f_qt_keyboard_modifiers_q_pointing_device(&_0, &_1, &_2, &_3, &_4, modifiers, device));
}

PHP_METHOD(Qt_Gui_QHoverEvent_QHoverEvent, isUpdateEvent)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qhoverevent_is_update_event(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Gui_QHoverEvent_QHoverEvent, oldPos)
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
	phpqt_qhoverevent_old_pos(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QHoverEvent_QHoverEvent, oldPosF)
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
	phpqt_qhoverevent_old_pos_f(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QHoverEvent_QHoverEvent, m_oldPos)
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
	phpqt_qhoverevent_m_old_pos(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QHoverEvent_QHoverEvent, setM_oldPos)
{
	double valueX, valueY;
	zval *handle_param = NULL, *valueX_param = NULL, *valueY_param = NULL, _0, _1, _2;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(valueX)
		Z_PARAM_ZVAL(valueY)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &valueX_param, &valueY_param);
	valueX = zephir_get_doubleval(valueX_param);
	valueY = zephir_get_doubleval(valueY_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, valueX);
	ZVAL_DOUBLE(&_2, valueY);
	phpqt_qhoverevent_set_m_old_pos(&_0, &_1, &_2);
}

