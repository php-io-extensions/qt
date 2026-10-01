
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
#include "src/gui-qaccessibletablemodelchangeevent.h"
#include "kernel/operators.h"
#include "kernel/memory.h"
#include "kernel/object.h"


ZEPHIR_INIT_CLASS(Qt_Gui_QAccessibleTableModelChangeEvent_QAccessibleTableModelChangeEvent)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Gui\\QAccessibleTableModelChangeEvent, QAccessibleTableModelChangeEvent, qt, gui_qaccessibletablemodelchangeevent_qaccessibletablemodelchangeevent, qt_gui_qaccessibletablemodelchangeevent_qaccessibletablemodelchangeevent_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Gui_QAccessibleTableModelChangeEvent_QAccessibleTableModelChangeEvent, new_)
{
	zval *obj_param = NULL, *changeType_param = NULL, _0, _1;
	zend_long obj, changeType;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(obj)
		Z_PARAM_LONG(changeType)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &obj_param, &changeType_param);
	ZVAL_LONG(&_0, obj);
	ZVAL_LONG(&_1, changeType);
	RETURN_LONG(phpqt_qaccessibletablemodelchangeevent_new(&_0, &_1));
}

PHP_METHOD(Qt_Gui_QAccessibleTableModelChangeEvent_QAccessibleTableModelChangeEvent, newQAccessibleInterfaceQAccessibleTableModelChangeEventModelChangeType)
{
	zval *iface_param = NULL, *changeType_param = NULL, _0, _1;
	zend_long iface, changeType;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(iface)
		Z_PARAM_LONG(changeType)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &iface_param, &changeType_param);
	ZVAL_LONG(&_0, iface);
	ZVAL_LONG(&_1, changeType);
	RETURN_LONG(phpqt_qaccessibletablemodelchangeevent_new_q_accessible_interface_q_accessible_table_model_change_event_model_change_type(&_0, &_1));
}

PHP_METHOD(Qt_Gui_QAccessibleTableModelChangeEvent_QAccessibleTableModelChangeEvent, setModelChangeType)
{
	zval *handle_param = NULL, *changeType_param = NULL, _0, _1;
	zend_long handle, changeType;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(changeType)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &changeType_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, changeType);
	phpqt_qaccessibletablemodelchangeevent_set_model_change_type(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QAccessibleTableModelChangeEvent_QAccessibleTableModelChangeEvent, modelChangeType)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qaccessibletablemodelchangeevent_model_change_type(&_0));
}

PHP_METHOD(Qt_Gui_QAccessibleTableModelChangeEvent_QAccessibleTableModelChangeEvent, setFirstRow)
{
	zval *handle_param = NULL, *row_param = NULL, _0, _1;
	zend_long handle, row;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(row)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &row_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, row);
	phpqt_qaccessibletablemodelchangeevent_set_first_row(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QAccessibleTableModelChangeEvent_QAccessibleTableModelChangeEvent, setFirstColumn)
{
	zval *handle_param = NULL, *col_param = NULL, _0, _1;
	zend_long handle, col;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(col)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &col_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, col);
	phpqt_qaccessibletablemodelchangeevent_set_first_column(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QAccessibleTableModelChangeEvent_QAccessibleTableModelChangeEvent, setLastRow)
{
	zval *handle_param = NULL, *row_param = NULL, _0, _1;
	zend_long handle, row;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(row)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &row_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, row);
	phpqt_qaccessibletablemodelchangeevent_set_last_row(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QAccessibleTableModelChangeEvent_QAccessibleTableModelChangeEvent, setLastColumn)
{
	zval *handle_param = NULL, *col_param = NULL, _0, _1;
	zend_long handle, col;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(col)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &col_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, col);
	phpqt_qaccessibletablemodelchangeevent_set_last_column(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QAccessibleTableModelChangeEvent_QAccessibleTableModelChangeEvent, firstRow)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qaccessibletablemodelchangeevent_first_row(&_0));
}

PHP_METHOD(Qt_Gui_QAccessibleTableModelChangeEvent_QAccessibleTableModelChangeEvent, firstColumn)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qaccessibletablemodelchangeevent_first_column(&_0));
}

PHP_METHOD(Qt_Gui_QAccessibleTableModelChangeEvent_QAccessibleTableModelChangeEvent, lastRow)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qaccessibletablemodelchangeevent_last_row(&_0));
}

PHP_METHOD(Qt_Gui_QAccessibleTableModelChangeEvent_QAccessibleTableModelChangeEvent, lastColumn)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qaccessibletablemodelchangeevent_last_column(&_0));
}

PHP_METHOD(Qt_Gui_QAccessibleTableModelChangeEvent_QAccessibleTableModelChangeEvent, m_modelChangeType)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qaccessibletablemodelchangeevent_m_model_change_type(&_0));
}

PHP_METHOD(Qt_Gui_QAccessibleTableModelChangeEvent_QAccessibleTableModelChangeEvent, setM_modelChangeType)
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
	phpqt_qaccessibletablemodelchangeevent_set_m_model_change_type(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QAccessibleTableModelChangeEvent_QAccessibleTableModelChangeEvent, m_firstRow)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qaccessibletablemodelchangeevent_m_first_row(&_0));
}

PHP_METHOD(Qt_Gui_QAccessibleTableModelChangeEvent_QAccessibleTableModelChangeEvent, setM_firstRow)
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
	phpqt_qaccessibletablemodelchangeevent_set_m_first_row(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QAccessibleTableModelChangeEvent_QAccessibleTableModelChangeEvent, m_firstColumn)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qaccessibletablemodelchangeevent_m_first_column(&_0));
}

PHP_METHOD(Qt_Gui_QAccessibleTableModelChangeEvent_QAccessibleTableModelChangeEvent, setM_firstColumn)
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
	phpqt_qaccessibletablemodelchangeevent_set_m_first_column(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QAccessibleTableModelChangeEvent_QAccessibleTableModelChangeEvent, m_lastRow)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qaccessibletablemodelchangeevent_m_last_row(&_0));
}

PHP_METHOD(Qt_Gui_QAccessibleTableModelChangeEvent_QAccessibleTableModelChangeEvent, setM_lastRow)
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
	phpqt_qaccessibletablemodelchangeevent_set_m_last_row(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QAccessibleTableModelChangeEvent_QAccessibleTableModelChangeEvent, m_lastColumn)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qaccessibletablemodelchangeevent_m_last_column(&_0));
}

PHP_METHOD(Qt_Gui_QAccessibleTableModelChangeEvent_QAccessibleTableModelChangeEvent, setM_lastColumn)
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
	phpqt_qaccessibletablemodelchangeevent_set_m_last_column(&_0, &_1);
}

