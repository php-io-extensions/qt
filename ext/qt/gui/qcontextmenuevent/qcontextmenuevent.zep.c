
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
#include "src/gui-qcontextmenuevent.h"
#include "kernel/operators.h"
#include "kernel/memory.h"
#include "kernel/object.h"


ZEPHIR_INIT_CLASS(Qt_Gui_QContextMenuEvent_QContextMenuEvent)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Gui\\QContextMenuEvent, QContextMenuEvent, qt, gui_qcontextmenuevent_qcontextmenuevent, qt_gui_qcontextmenuevent_qcontextmenuevent_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Gui_QContextMenuEvent_QContextMenuEvent, new_)
{
	zval *arg0_param = NULL, _0;
	zend_long arg0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(arg0)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &arg0_param);
	ZVAL_LONG(&_0, arg0);
	RETURN_LONG(phpqt_qcontextmenuevent_new(&_0));
}

PHP_METHOD(Qt_Gui_QContextMenuEvent_QContextMenuEvent, clone_)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qcontextmenuevent_clone(&_0));
}

PHP_METHOD(Qt_Gui_QContextMenuEvent_QContextMenuEvent, newQContextMenuEventReasonQPointQPointQtKeyboardModifiers)
{
	zval *reason_param = NULL, *posX_param = NULL, *posY_param = NULL, *globalPosX_param = NULL, *globalPosY_param = NULL, *modifiers = NULL, modifiers_sub, __$null, _0, _1, _2, _3, _4;
	zend_long reason, posX, posY, globalPosX, globalPosY;

	ZVAL_UNDEF(&modifiers_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(5, 6)
		Z_PARAM_LONG(reason)
		Z_PARAM_LONG(posX)
		Z_PARAM_LONG(posY)
		Z_PARAM_LONG(globalPosX)
		Z_PARAM_LONG(globalPosY)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(modifiers)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(5, 1, &reason_param, &posX_param, &posY_param, &globalPosX_param, &globalPosY_param, &modifiers);
	if (!modifiers) {
		modifiers = &modifiers_sub;
		modifiers = &__$null;
	}
	ZVAL_LONG(&_0, reason);
	ZVAL_LONG(&_1, posX);
	ZVAL_LONG(&_2, posY);
	ZVAL_LONG(&_3, globalPosX);
	ZVAL_LONG(&_4, globalPosY);
	RETURN_LONG(phpqt_qcontextmenuevent_new_q_context_menu_event_reason_q_point_q_point_qt_keyboard_modifiers(&_0, &_1, &_2, &_3, &_4, modifiers));
}

PHP_METHOD(Qt_Gui_QContextMenuEvent_QContextMenuEvent, newQContextMenuEventReasonQPoint)
{
	zval *reason_param = NULL, *posX_param = NULL, *posY_param = NULL, _0, _1, _2;
	zend_long reason, posX, posY;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(reason)
		Z_PARAM_LONG(posX)
		Z_PARAM_LONG(posY)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &reason_param, &posX_param, &posY_param);
	ZVAL_LONG(&_0, reason);
	ZVAL_LONG(&_1, posX);
	ZVAL_LONG(&_2, posY);
	RETURN_LONG(phpqt_qcontextmenuevent_new_q_context_menu_event_reason_q_point(&_0, &_1, &_2));
}

PHP_METHOD(Qt_Gui_QContextMenuEvent_QContextMenuEvent, x)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qcontextmenuevent_x(&_0));
}

PHP_METHOD(Qt_Gui_QContextMenuEvent_QContextMenuEvent, y)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qcontextmenuevent_y(&_0));
}

PHP_METHOD(Qt_Gui_QContextMenuEvent_QContextMenuEvent, globalX)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qcontextmenuevent_global_x(&_0));
}

PHP_METHOD(Qt_Gui_QContextMenuEvent_QContextMenuEvent, globalY)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qcontextmenuevent_global_y(&_0));
}

PHP_METHOD(Qt_Gui_QContextMenuEvent_QContextMenuEvent, pos)
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
	phpqt_qcontextmenuevent_pos(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QContextMenuEvent_QContextMenuEvent, globalPos)
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
	phpqt_qcontextmenuevent_global_pos(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QContextMenuEvent_QContextMenuEvent, reason)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qcontextmenuevent_reason(&_0));
}

PHP_METHOD(Qt_Gui_QContextMenuEvent_QContextMenuEvent, m_pos)
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
	phpqt_qcontextmenuevent_m_pos(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QContextMenuEvent_QContextMenuEvent, setM_pos)
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
	phpqt_qcontextmenuevent_set_m_pos(&_0, &_1, &_2);
}

PHP_METHOD(Qt_Gui_QContextMenuEvent_QContextMenuEvent, m_globalPos)
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
	phpqt_qcontextmenuevent_m_global_pos(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QContextMenuEvent_QContextMenuEvent, setM_globalPos)
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
	phpqt_qcontextmenuevent_set_m_global_pos(&_0, &_1, &_2);
}

PHP_METHOD(Qt_Gui_QContextMenuEvent_QContextMenuEvent, m_reason)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qcontextmenuevent_m_reason(&_0));
}

PHP_METHOD(Qt_Gui_QContextMenuEvent_QContextMenuEvent, setM_reason)
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
	phpqt_qcontextmenuevent_set_m_reason(&_0, &_1);
}

