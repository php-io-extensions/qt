
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
#include "src/gui-qaccessibleevent.h"
#include "kernel/operators.h"
#include "kernel/memory.h"
#include "kernel/object.h"


ZEPHIR_INIT_CLASS(Qt_Gui_QAccessibleEvent_QAccessibleEvent)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Gui\\QAccessibleEvent, QAccessibleEvent, qt, gui_qaccessibleevent_qaccessibleevent, qt_gui_qaccessibleevent_qaccessibleevent_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Gui_QAccessibleEvent_QAccessibleEvent, new_)
{
	zval *obj_param = NULL, *typ_param = NULL, _0, _1;
	zend_long obj, typ;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(obj)
		Z_PARAM_LONG(typ)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &obj_param, &typ_param);
	ZVAL_LONG(&_0, obj);
	ZVAL_LONG(&_1, typ);
	RETURN_LONG(phpqt_qaccessibleevent_new(&_0, &_1));
}

PHP_METHOD(Qt_Gui_QAccessibleEvent_QAccessibleEvent, newQAccessibleInterfaceQAccessibleEvent)
{
	zval *iface_param = NULL, *typ_param = NULL, _0, _1;
	zend_long iface, typ;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(iface)
		Z_PARAM_LONG(typ)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &iface_param, &typ_param);
	ZVAL_LONG(&_0, iface);
	ZVAL_LONG(&_1, typ);
	RETURN_LONG(phpqt_qaccessibleevent_new_q_accessible_interface_q_accessible_event(&_0, &_1));
}

PHP_METHOD(Qt_Gui_QAccessibleEvent_QAccessibleEvent, type)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qaccessibleevent_type(&_0));
}

PHP_METHOD(Qt_Gui_QAccessibleEvent_QAccessibleEvent, object_)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qaccessibleevent_object(&_0));
}

PHP_METHOD(Qt_Gui_QAccessibleEvent_QAccessibleEvent, uniqueId)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qaccessibleevent_unique_id(&_0));
}

PHP_METHOD(Qt_Gui_QAccessibleEvent_QAccessibleEvent, setChild)
{
	zval *handle_param = NULL, *chld_param = NULL, _0, _1;
	zend_long handle, chld;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(chld)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &chld_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, chld);
	phpqt_qaccessibleevent_set_child(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QAccessibleEvent_QAccessibleEvent, child)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qaccessibleevent_child(&_0));
}

PHP_METHOD(Qt_Gui_QAccessibleEvent_QAccessibleEvent, accessibleInterface)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qaccessibleevent_accessible_interface(&_0));
}

PHP_METHOD(Qt_Gui_QAccessibleEvent_QAccessibleEvent, m_type)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qaccessibleevent_m_type(&_0));
}

PHP_METHOD(Qt_Gui_QAccessibleEvent_QAccessibleEvent, setM_type)
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
	phpqt_qaccessibleevent_set_m_type(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QAccessibleEvent_QAccessibleEvent, m_object)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qaccessibleevent_m_object(&_0));
}

PHP_METHOD(Qt_Gui_QAccessibleEvent_QAccessibleEvent, setM_object)
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
	phpqt_qaccessibleevent_set_m_object(&_0, &_1);
}

