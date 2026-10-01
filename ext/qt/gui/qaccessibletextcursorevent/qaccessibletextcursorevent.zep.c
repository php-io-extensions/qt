
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
#include "src/gui-qaccessibletextcursorevent.h"
#include "kernel/operators.h"
#include "kernel/memory.h"
#include "kernel/object.h"


ZEPHIR_INIT_CLASS(Qt_Gui_QAccessibleTextCursorEvent_QAccessibleTextCursorEvent)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Gui\\QAccessibleTextCursorEvent, QAccessibleTextCursorEvent, qt, gui_qaccessibletextcursorevent_qaccessibletextcursorevent, qt_gui_qaccessibletextcursorevent_qaccessibletextcursorevent_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Gui_QAccessibleTextCursorEvent_QAccessibleTextCursorEvent, new_)
{
	zval *obj_param = NULL, *cursorPos_param = NULL, _0, _1;
	zend_long obj, cursorPos;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(obj)
		Z_PARAM_LONG(cursorPos)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &obj_param, &cursorPos_param);
	ZVAL_LONG(&_0, obj);
	ZVAL_LONG(&_1, cursorPos);
	RETURN_LONG(phpqt_qaccessibletextcursorevent_new(&_0, &_1));
}

PHP_METHOD(Qt_Gui_QAccessibleTextCursorEvent_QAccessibleTextCursorEvent, newQAccessibleInterfaceInt)
{
	zval *iface_param = NULL, *cursorPos_param = NULL, _0, _1;
	zend_long iface, cursorPos;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(iface)
		Z_PARAM_LONG(cursorPos)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &iface_param, &cursorPos_param);
	ZVAL_LONG(&_0, iface);
	ZVAL_LONG(&_1, cursorPos);
	RETURN_LONG(phpqt_qaccessibletextcursorevent_new_q_accessible_interface_int(&_0, &_1));
}

PHP_METHOD(Qt_Gui_QAccessibleTextCursorEvent_QAccessibleTextCursorEvent, setCursorPosition)
{
	zval *handle_param = NULL, *position_param = NULL, _0, _1;
	zend_long handle, position;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(position)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &position_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, position);
	phpqt_qaccessibletextcursorevent_set_cursor_position(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QAccessibleTextCursorEvent_QAccessibleTextCursorEvent, cursorPosition)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qaccessibletextcursorevent_cursor_position(&_0));
}

PHP_METHOD(Qt_Gui_QAccessibleTextCursorEvent_QAccessibleTextCursorEvent, m_cursorPosition)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qaccessibletextcursorevent_m_cursor_position(&_0));
}

PHP_METHOD(Qt_Gui_QAccessibleTextCursorEvent_QAccessibleTextCursorEvent, setM_cursorPosition)
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
	phpqt_qaccessibletextcursorevent_set_m_cursor_position(&_0, &_1);
}

