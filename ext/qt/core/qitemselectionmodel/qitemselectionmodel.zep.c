
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
#include "src/core-qitemselectionmodel.h"
#include "kernel/object.h"
#include "kernel/string.h"
#include "kernel/memory.h"
#include "kernel/operators.h"


ZEPHIR_INIT_CLASS(Qt_Core_QItemSelectionModel_QItemSelectionModel)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Core\\QItemSelectionModel, QItemSelectionModel, qt, core_qitemselectionmodel_qitemselectionmodel, qt_core_qitemselectionmodel_qitemselectionmodel_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Core_QItemSelectionModel_QItemSelectionModel, staticMetaObject)
{

	RETURN_LONG(phpqt_qitemselectionmodel_static_meta_object());
}

PHP_METHOD(Qt_Core_QItemSelectionModel_QItemSelectionModel, tr)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long n;
	zval *s = NULL, s_sub, *c = NULL, c_sub, *n_param = NULL, __$null, result, _0;

	ZVAL_UNDEF(&s_sub);
	ZVAL_UNDEF(&c_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(1, 3)
		Z_PARAM_ZVAL(s)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(c)
		Z_PARAM_LONG(n)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 2, &s, &c, &n_param);
	if (!c) {
		c = &c_sub;
		c = &__$null;
	}
	if (!n_param) {
		n = -1;
	} else {
		}
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, n);
	phpqt_qitemselectionmodel_tr(&result, s, c, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QItemSelectionModel_QItemSelectionModel, new_)
{
	zval *model_param = NULL, _0;
	zend_long model;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(0, 1)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(model)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(0, 1, &model_param);
	if (!model_param) {
		model = 0;
	} else {
		}
	ZVAL_LONG(&_0, model);
	RETURN_LONG(phpqt_qitemselectionmodel_new(&_0));
}

PHP_METHOD(Qt_Core_QItemSelectionModel_QItemSelectionModel, newQAbstractItemModelQObject)
{
	zval *model_param = NULL, *parent__param = NULL, _0, _1;
	zend_long model, parent_;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(model)
		Z_PARAM_LONG(parent_)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &model_param, &parent__param);
	ZVAL_LONG(&_0, model);
	ZVAL_LONG(&_1, parent_);
	RETURN_LONG(phpqt_qitemselectionmodel_new_q_abstract_item_model_q_object(&_0, &_1));
}

PHP_METHOD(Qt_Core_QItemSelectionModel_QItemSelectionModel, currentIndex)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qitemselectionmodel_current_index(&_0));
}

PHP_METHOD(Qt_Core_QItemSelectionModel_QItemSelectionModel, isSelected)
{
	zval *handle_param = NULL, *index_param = NULL, _0, _1;
	zend_long handle, index, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(index)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &index_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, index);
	r = phpqt_qitemselectionmodel_is_selected(&_0, &_1);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QItemSelectionModel_QItemSelectionModel, isRowSelected)
{
	zval *handle_param = NULL, *row_param = NULL, *parent_ = NULL, parent__sub, __$null, _0, _1;
	zend_long handle, row, r = 0;

	ZVAL_UNDEF(&parent__sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(2, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(row)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(parent_)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 1, &handle_param, &row_param, &parent_);
	if (!parent_) {
		parent_ = &parent__sub;
		parent_ = &__$null;
	}
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, row);
	r = phpqt_qitemselectionmodel_is_row_selected(&_0, &_1, parent_);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QItemSelectionModel_QItemSelectionModel, isColumnSelected)
{
	zval *handle_param = NULL, *column_param = NULL, *parent_ = NULL, parent__sub, __$null, _0, _1;
	zend_long handle, column, r = 0;

	ZVAL_UNDEF(&parent__sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(2, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(column)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(parent_)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 1, &handle_param, &column_param, &parent_);
	if (!parent_) {
		parent_ = &parent__sub;
		parent_ = &__$null;
	}
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, column);
	r = phpqt_qitemselectionmodel_is_column_selected(&_0, &_1, parent_);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QItemSelectionModel_QItemSelectionModel, rowIntersectsSelection)
{
	zval *handle_param = NULL, *row_param = NULL, *parent_ = NULL, parent__sub, __$null, _0, _1;
	zend_long handle, row, r = 0;

	ZVAL_UNDEF(&parent__sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(2, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(row)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(parent_)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 1, &handle_param, &row_param, &parent_);
	if (!parent_) {
		parent_ = &parent__sub;
		parent_ = &__$null;
	}
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, row);
	r = phpqt_qitemselectionmodel_row_intersects_selection(&_0, &_1, parent_);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QItemSelectionModel_QItemSelectionModel, columnIntersectsSelection)
{
	zval *handle_param = NULL, *column_param = NULL, *parent_ = NULL, parent__sub, __$null, _0, _1;
	zend_long handle, column, r = 0;

	ZVAL_UNDEF(&parent__sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(2, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(column)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(parent_)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 1, &handle_param, &column_param, &parent_);
	if (!parent_) {
		parent_ = &parent__sub;
		parent_ = &__$null;
	}
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, column);
	r = phpqt_qitemselectionmodel_column_intersects_selection(&_0, &_1, parent_);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QItemSelectionModel_QItemSelectionModel, hasSelection)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qitemselectionmodel_has_selection(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QItemSelectionModel_QItemSelectionModel, selectedIndexes)
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
	phpqt_qitemselectionmodel_selected_indexes(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QItemSelectionModel_QItemSelectionModel, selectedRows)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, *column_param = NULL, result, _0, _1;
	zend_long handle, column;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(column)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 1, &handle_param, &column_param);
	if (!column_param) {
		column = 0;
	} else {
		}
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, column);
	phpqt_qitemselectionmodel_selected_rows(&result, &_0, &_1);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QItemSelectionModel_QItemSelectionModel, selectedColumns)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, *row_param = NULL, result, _0, _1;
	zend_long handle, row;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(row)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 1, &handle_param, &row_param);
	if (!row_param) {
		row = 0;
	} else {
		}
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, row);
	phpqt_qitemselectionmodel_selected_columns(&result, &_0, &_1);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QItemSelectionModel_QItemSelectionModel, selection)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qitemselectionmodel_selection(&_0));
}

PHP_METHOD(Qt_Core_QItemSelectionModel_QItemSelectionModel, model)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qitemselectionmodel_model(&_0));
}

PHP_METHOD(Qt_Core_QItemSelectionModel_QItemSelectionModel, setModel)
{
	zval *handle_param = NULL, *model_param = NULL, _0, _1;
	zend_long handle, model;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(model)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &model_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, model);
	phpqt_qitemselectionmodel_set_model(&_0, &_1);
}

PHP_METHOD(Qt_Core_QItemSelectionModel_QItemSelectionModel, setCurrentIndex)
{
	zval *handle_param = NULL, *index_param = NULL, *command_param = NULL, _0, _1, _2;
	zend_long handle, index, command;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(index)
		Z_PARAM_LONG(command)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &index_param, &command_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, index);
	ZVAL_LONG(&_2, command);
	phpqt_qitemselectionmodel_set_current_index(&_0, &_1, &_2);
}

PHP_METHOD(Qt_Core_QItemSelectionModel_QItemSelectionModel, select)
{
	zval *handle_param = NULL, *index_param = NULL, *command_param = NULL, _0, _1, _2;
	zend_long handle, index, command;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(index)
		Z_PARAM_LONG(command)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &index_param, &command_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, index);
	ZVAL_LONG(&_2, command);
	phpqt_qitemselectionmodel_select(&_0, &_1, &_2);
}

PHP_METHOD(Qt_Core_QItemSelectionModel_QItemSelectionModel, selectQItemSelectionQItemSelectionModelSelectionFlags)
{
	zval *handle_param = NULL, *selection_param = NULL, *command_param = NULL, _0, _1, _2;
	zend_long handle, selection, command;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(selection)
		Z_PARAM_LONG(command)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &selection_param, &command_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, selection);
	ZVAL_LONG(&_2, command);
	phpqt_qitemselectionmodel_select_q_item_selection_q_item_selection_model_selection_flags(&_0, &_1, &_2);
}

PHP_METHOD(Qt_Core_QItemSelectionModel_QItemSelectionModel, clear)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qitemselectionmodel_clear(&_0);
}

PHP_METHOD(Qt_Core_QItemSelectionModel_QItemSelectionModel, reset)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qitemselectionmodel_reset(&_0);
}

PHP_METHOD(Qt_Core_QItemSelectionModel_QItemSelectionModel, clearSelection)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qitemselectionmodel_clear_selection(&_0);
}

PHP_METHOD(Qt_Core_QItemSelectionModel_QItemSelectionModel, clearCurrentIndex)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qitemselectionmodel_clear_current_index(&_0);
}

PHP_METHOD(Qt_Core_QItemSelectionModel_QItemSelectionModel, selectionChanged)
{
	zval *handle_param = NULL, *selected_param = NULL, *deselected_param = NULL, _0, _1, _2;
	zend_long handle, selected, deselected;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(selected)
		Z_PARAM_LONG(deselected)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &selected_param, &deselected_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, selected);
	ZVAL_LONG(&_2, deselected);
	phpqt_qitemselectionmodel_selection_changed(&_0, &_1, &_2);
}

PHP_METHOD(Qt_Core_QItemSelectionModel_QItemSelectionModel, currentChanged)
{
	zval *handle_param = NULL, *current_param = NULL, *previous_param = NULL, _0, _1, _2;
	zend_long handle, current, previous;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(current)
		Z_PARAM_LONG(previous)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &current_param, &previous_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, current);
	ZVAL_LONG(&_2, previous);
	phpqt_qitemselectionmodel_current_changed(&_0, &_1, &_2);
}

PHP_METHOD(Qt_Core_QItemSelectionModel_QItemSelectionModel, currentRowChanged)
{
	zval *handle_param = NULL, *current_param = NULL, *previous_param = NULL, _0, _1, _2;
	zend_long handle, current, previous;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(current)
		Z_PARAM_LONG(previous)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &current_param, &previous_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, current);
	ZVAL_LONG(&_2, previous);
	phpqt_qitemselectionmodel_current_row_changed(&_0, &_1, &_2);
}

PHP_METHOD(Qt_Core_QItemSelectionModel_QItemSelectionModel, currentColumnChanged)
{
	zval *handle_param = NULL, *current_param = NULL, *previous_param = NULL, _0, _1, _2;
	zend_long handle, current, previous;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(current)
		Z_PARAM_LONG(previous)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &current_param, &previous_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, current);
	ZVAL_LONG(&_2, previous);
	phpqt_qitemselectionmodel_current_column_changed(&_0, &_1, &_2);
}

PHP_METHOD(Qt_Core_QItemSelectionModel_QItemSelectionModel, modelChanged)
{
	zval *handle_param = NULL, *model_param = NULL, _0, _1;
	zend_long handle, model;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(model)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &model_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, model);
	phpqt_qitemselectionmodel_model_changed(&_0, &_1);
}

PHP_METHOD(Qt_Core_QItemSelectionModel_QItemSelectionModel, emitSelectionChanged)
{
	zval *handle_param = NULL, *newSelection_param = NULL, *oldSelection_param = NULL, _0, _1, _2;
	zend_long handle, newSelection, oldSelection;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(newSelection)
		Z_PARAM_LONG(oldSelection)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &newSelection_param, &oldSelection_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, newSelection);
	ZVAL_LONG(&_2, oldSelection);
	phpqt_qitemselectionmodel_emit_selection_changed(&_0, &_1, &_2);
}

