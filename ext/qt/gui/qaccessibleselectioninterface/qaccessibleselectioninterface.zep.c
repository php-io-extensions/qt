
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
#include "src/gui-qaccessibleselectioninterface.h"
#include "kernel/operators.h"
#include "kernel/memory.h"
#include "kernel/object.h"


ZEPHIR_INIT_CLASS(Qt_Gui_QAccessibleSelectionInterface_QAccessibleSelectionInterface)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Gui\\QAccessibleSelectionInterface, QAccessibleSelectionInterface, qt, gui_qaccessibleselectioninterface_qaccessibleselectioninterface, qt_gui_qaccessibleselectioninterface_qaccessibleselectioninterface_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Gui_QAccessibleSelectionInterface_QAccessibleSelectionInterface, selectedItemCount)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qaccessibleselectioninterface_selected_item_count(&_0));
}

PHP_METHOD(Qt_Gui_QAccessibleSelectionInterface_QAccessibleSelectionInterface, selectedItems)
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
	phpqt_qaccessibleselectioninterface_selected_items(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QAccessibleSelectionInterface_QAccessibleSelectionInterface, selectedItem)
{
	zval *handle_param = NULL, *selectionIndex_param = NULL, _0, _1;
	zend_long handle, selectionIndex;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(selectionIndex)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &selectionIndex_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, selectionIndex);
	RETURN_LONG(phpqt_qaccessibleselectioninterface_selected_item(&_0, &_1));
}

PHP_METHOD(Qt_Gui_QAccessibleSelectionInterface_QAccessibleSelectionInterface, isSelected)
{
	zval *handle_param = NULL, *childItem_param = NULL, _0, _1;
	zend_long handle, childItem, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(childItem)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &childItem_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, childItem);
	r = phpqt_qaccessibleselectioninterface_is_selected(&_0, &_1);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Gui_QAccessibleSelectionInterface_QAccessibleSelectionInterface, select)
{
	zval *handle_param = NULL, *childItem_param = NULL, _0, _1;
	zend_long handle, childItem, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(childItem)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &childItem_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, childItem);
	r = phpqt_qaccessibleselectioninterface_select(&_0, &_1);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Gui_QAccessibleSelectionInterface_QAccessibleSelectionInterface, unselect)
{
	zval *handle_param = NULL, *childItem_param = NULL, _0, _1;
	zend_long handle, childItem, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(childItem)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &childItem_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, childItem);
	r = phpqt_qaccessibleselectioninterface_unselect(&_0, &_1);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Gui_QAccessibleSelectionInterface_QAccessibleSelectionInterface, selectAll)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qaccessibleselectioninterface_select_all(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Gui_QAccessibleSelectionInterface_QAccessibleSelectionInterface, clear)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qaccessibleselectioninterface_clear(&_0);
	RETURN_BOOL(r == 1);
}

