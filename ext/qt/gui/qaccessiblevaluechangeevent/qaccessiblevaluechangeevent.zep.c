
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
#include "src/gui-qaccessiblevaluechangeevent.h"
#include "kernel/operators.h"
#include "kernel/memory.h"
#include "kernel/object.h"


ZEPHIR_INIT_CLASS(Qt_Gui_QAccessibleValueChangeEvent_QAccessibleValueChangeEvent)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Gui\\QAccessibleValueChangeEvent, QAccessibleValueChangeEvent, qt, gui_qaccessiblevaluechangeevent_qaccessiblevaluechangeevent, qt_gui_qaccessiblevaluechangeevent_qaccessiblevaluechangeevent_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Gui_QAccessibleValueChangeEvent_QAccessibleValueChangeEvent, new_)
{
	zval *obj_param = NULL, *val = NULL, val_sub, _0;
	zend_long obj;

	ZVAL_UNDEF(&val_sub);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(obj)
		Z_PARAM_ZVAL(val)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &obj_param, &val);
	ZVAL_LONG(&_0, obj);
	RETURN_LONG(phpqt_qaccessiblevaluechangeevent_new(&_0, val));
}

PHP_METHOD(Qt_Gui_QAccessibleValueChangeEvent_QAccessibleValueChangeEvent, newQAccessibleInterfaceQVariant)
{
	zval *iface_param = NULL, *val = NULL, val_sub, _0;
	zend_long iface;

	ZVAL_UNDEF(&val_sub);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(iface)
		Z_PARAM_ZVAL(val)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &iface_param, &val);
	ZVAL_LONG(&_0, iface);
	RETURN_LONG(phpqt_qaccessiblevaluechangeevent_new_q_accessible_interface_q_variant(&_0, val));
}

PHP_METHOD(Qt_Gui_QAccessibleValueChangeEvent_QAccessibleValueChangeEvent, setValue)
{
	zval *handle_param = NULL, *val = NULL, val_sub, _0;
	zend_long handle;

	ZVAL_UNDEF(&val_sub);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(val)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &val);
	ZVAL_LONG(&_0, handle);
	phpqt_qaccessiblevaluechangeevent_set_value(&_0, val);
}

PHP_METHOD(Qt_Gui_QAccessibleValueChangeEvent_QAccessibleValueChangeEvent, value)
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
	phpqt_qaccessiblevaluechangeevent_value(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QAccessibleValueChangeEvent_QAccessibleValueChangeEvent, m_value)
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
	phpqt_qaccessiblevaluechangeevent_m_value(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QAccessibleValueChangeEvent_QAccessibleValueChangeEvent, setM_value)
{
	zval *handle_param = NULL, *value = NULL, value_sub, _0;
	zend_long handle;

	ZVAL_UNDEF(&value_sub);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(value)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &value);
	ZVAL_LONG(&_0, handle);
	phpqt_qaccessiblevaluechangeevent_set_m_value(&_0, value);
}

