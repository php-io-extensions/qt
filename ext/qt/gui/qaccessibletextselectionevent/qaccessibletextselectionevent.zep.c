
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
#include "src/gui-qaccessibletextselectionevent.h"
#include "kernel/operators.h"
#include "kernel/memory.h"
#include "kernel/object.h"


ZEPHIR_INIT_CLASS(Qt_Gui_QAccessibleTextSelectionEvent_QAccessibleTextSelectionEvent)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Gui\\QAccessibleTextSelectionEvent, QAccessibleTextSelectionEvent, qt, gui_qaccessibletextselectionevent_qaccessibletextselectionevent, qt_gui_qaccessibletextselectionevent_qaccessibletextselectionevent_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Gui_QAccessibleTextSelectionEvent_QAccessibleTextSelectionEvent, new_)
{
	zval *obj_param = NULL, *start_param = NULL, *end_param = NULL, _0, _1, _2;
	zend_long obj, start, end;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(obj)
		Z_PARAM_LONG(start)
		Z_PARAM_LONG(end)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &obj_param, &start_param, &end_param);
	ZVAL_LONG(&_0, obj);
	ZVAL_LONG(&_1, start);
	ZVAL_LONG(&_2, end);
	RETURN_LONG(phpqt_qaccessibletextselectionevent_new(&_0, &_1, &_2));
}

PHP_METHOD(Qt_Gui_QAccessibleTextSelectionEvent_QAccessibleTextSelectionEvent, newQAccessibleInterfaceIntInt)
{
	zval *iface_param = NULL, *start_param = NULL, *end_param = NULL, _0, _1, _2;
	zend_long iface, start, end;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(iface)
		Z_PARAM_LONG(start)
		Z_PARAM_LONG(end)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &iface_param, &start_param, &end_param);
	ZVAL_LONG(&_0, iface);
	ZVAL_LONG(&_1, start);
	ZVAL_LONG(&_2, end);
	RETURN_LONG(phpqt_qaccessibletextselectionevent_new_q_accessible_interface_int_int(&_0, &_1, &_2));
}

PHP_METHOD(Qt_Gui_QAccessibleTextSelectionEvent_QAccessibleTextSelectionEvent, setSelection)
{
	zval *handle_param = NULL, *start_param = NULL, *end_param = NULL, _0, _1, _2;
	zend_long handle, start, end;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(start)
		Z_PARAM_LONG(end)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &start_param, &end_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, start);
	ZVAL_LONG(&_2, end);
	phpqt_qaccessibletextselectionevent_set_selection(&_0, &_1, &_2);
}

PHP_METHOD(Qt_Gui_QAccessibleTextSelectionEvent_QAccessibleTextSelectionEvent, selectionStart)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qaccessibletextselectionevent_selection_start(&_0));
}

PHP_METHOD(Qt_Gui_QAccessibleTextSelectionEvent_QAccessibleTextSelectionEvent, selectionEnd)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qaccessibletextselectionevent_selection_end(&_0));
}

PHP_METHOD(Qt_Gui_QAccessibleTextSelectionEvent_QAccessibleTextSelectionEvent, m_selectionStart)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qaccessibletextselectionevent_m_selection_start(&_0));
}

PHP_METHOD(Qt_Gui_QAccessibleTextSelectionEvent_QAccessibleTextSelectionEvent, setM_selectionStart)
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
	phpqt_qaccessibletextselectionevent_set_m_selection_start(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QAccessibleTextSelectionEvent_QAccessibleTextSelectionEvent, m_selectionEnd)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qaccessibletextselectionevent_m_selection_end(&_0));
}

PHP_METHOD(Qt_Gui_QAccessibleTextSelectionEvent_QAccessibleTextSelectionEvent, setM_selectionEnd)
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
	phpqt_qaccessibletextselectionevent_set_m_selection_end(&_0, &_1);
}

