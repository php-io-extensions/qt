
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
#include "src/gui-qaccessiblestatechangeevent.h"
#include "kernel/operators.h"
#include "kernel/memory.h"
#include "kernel/object.h"


ZEPHIR_INIT_CLASS(Qt_Gui_QAccessibleStateChangeEvent_QAccessibleStateChangeEvent)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Gui\\QAccessibleStateChangeEvent, QAccessibleStateChangeEvent, qt, gui_qaccessiblestatechangeevent_qaccessiblestatechangeevent, qt_gui_qaccessiblestatechangeevent_qaccessiblestatechangeevent_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Gui_QAccessibleStateChangeEvent_QAccessibleStateChangeEvent, new_)
{
	zval *obj_param = NULL, *state_param = NULL, _0, _1;
	zend_long obj, state;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(obj)
		Z_PARAM_LONG(state)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &obj_param, &state_param);
	ZVAL_LONG(&_0, obj);
	ZVAL_LONG(&_1, state);
	RETURN_LONG(phpqt_qaccessiblestatechangeevent_new(&_0, &_1));
}

PHP_METHOD(Qt_Gui_QAccessibleStateChangeEvent_QAccessibleStateChangeEvent, newQAccessibleInterfaceQAccessibleState)
{
	zval *iface_param = NULL, *state_param = NULL, _0, _1;
	zend_long iface, state;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(iface)
		Z_PARAM_LONG(state)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &iface_param, &state_param);
	ZVAL_LONG(&_0, iface);
	ZVAL_LONG(&_1, state);
	RETURN_LONG(phpqt_qaccessiblestatechangeevent_new_q_accessible_interface_q_accessible_state(&_0, &_1));
}

PHP_METHOD(Qt_Gui_QAccessibleStateChangeEvent_QAccessibleStateChangeEvent, changedStates)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qaccessiblestatechangeevent_changed_states(&_0));
}

PHP_METHOD(Qt_Gui_QAccessibleStateChangeEvent_QAccessibleStateChangeEvent, m_changedStates)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qaccessiblestatechangeevent_m_changed_states(&_0));
}

PHP_METHOD(Qt_Gui_QAccessibleStateChangeEvent_QAccessibleStateChangeEvent, setM_changedStates)
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
	phpqt_qaccessiblestatechangeevent_set_m_changed_states(&_0, &_1);
}

