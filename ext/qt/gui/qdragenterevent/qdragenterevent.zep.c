
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
#include "src/gui-qdragenterevent.h"
#include "kernel/operators.h"
#include "kernel/memory.h"
#include "kernel/object.h"


ZEPHIR_INIT_CLASS(Qt_Gui_QDragEnterEvent_QDragEnterEvent)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Gui\\QDragEnterEvent, QDragEnterEvent, qt, gui_qdragenterevent_qdragenterevent, qt_gui_qdragenterevent_qdragenterevent_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Gui_QDragEnterEvent_QDragEnterEvent, new_)
{
	zval *arg0_param = NULL, _0;
	zend_long arg0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(arg0)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &arg0_param);
	ZVAL_LONG(&_0, arg0);
	RETURN_LONG(phpqt_qdragenterevent_new(&_0));
}

PHP_METHOD(Qt_Gui_QDragEnterEvent_QDragEnterEvent, clone_)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qdragenterevent_clone(&_0));
}

PHP_METHOD(Qt_Gui_QDragEnterEvent_QDragEnterEvent, newQPointQtDropActionsQMimeDataQtMouseButtonsQtKeyboardModifiers)
{
	zval *posX_param = NULL, *posY_param = NULL, *actions_param = NULL, *data_param = NULL, *buttons_param = NULL, *modifiers_param = NULL, _0, _1, _2, _3, _4, _5;
	zend_long posX, posY, actions, data, buttons, modifiers;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_5);
	ZEND_PARSE_PARAMETERS_START(6, 6)
		Z_PARAM_LONG(posX)
		Z_PARAM_LONG(posY)
		Z_PARAM_LONG(actions)
		Z_PARAM_LONG(data)
		Z_PARAM_LONG(buttons)
		Z_PARAM_LONG(modifiers)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(6, 0, &posX_param, &posY_param, &actions_param, &data_param, &buttons_param, &modifiers_param);
	ZVAL_LONG(&_0, posX);
	ZVAL_LONG(&_1, posY);
	ZVAL_LONG(&_2, actions);
	ZVAL_LONG(&_3, data);
	ZVAL_LONG(&_4, buttons);
	ZVAL_LONG(&_5, modifiers);
	RETURN_LONG(phpqt_qdragenterevent_new_q_point_qt_drop_actions_q_mime_data_qt_mouse_buttons_qt_keyboard_modifiers(&_0, &_1, &_2, &_3, &_4, &_5));
}

