
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
#include "src/widgets-qtablewidget.h"
#include "kernel/operators.h"
#include "kernel/memory.h"
#include "kernel/object.h"
#include "kernel/string.h"


ZEPHIR_INIT_CLASS(Qt_Widgets_QTableWidget_QTableWidget)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Widgets\\QTableWidget, QTableWidget, qt, widgets_qtablewidget_qtablewidget, qt_widgets_qtablewidget_qtablewidget_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Widgets_QTableWidget_QTableWidget, isPersistentEditorOpen)
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
	r = phpqt_qtablewidget_is_persistent_editor_open(&_0, &_1);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Widgets_QTableWidget_QTableWidget, staticMetaObject)
{

	RETURN_LONG(phpqt_qtablewidget_static_meta_object());
}

PHP_METHOD(Qt_Widgets_QTableWidget_QTableWidget, tr)
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
	phpqt_qtablewidget_tr(&result, s, c, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Widgets_QTableWidget_QTableWidget, new_)
{
	zval *parent__param = NULL, _0;
	zend_long parent_;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(0, 1)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(parent_)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(0, 1, &parent__param);
	if (!parent__param) {
		parent_ = 0;
	} else {
		}
	ZVAL_LONG(&_0, parent_);
	RETURN_LONG(phpqt_qtablewidget_new(&_0));
}

PHP_METHOD(Qt_Widgets_QTableWidget_QTableWidget, newIntIntQWidget)
{
	zval *rows_param = NULL, *columns_param = NULL, *parent__param = NULL, _0, _1, _2;
	zend_long rows, columns, parent_;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(2, 3)
		Z_PARAM_LONG(rows)
		Z_PARAM_LONG(columns)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(parent_)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 1, &rows_param, &columns_param, &parent__param);
	if (!parent__param) {
		parent_ = 0;
	} else {
		}
	ZVAL_LONG(&_0, rows);
	ZVAL_LONG(&_1, columns);
	ZVAL_LONG(&_2, parent_);
	RETURN_LONG(phpqt_qtablewidget_new_int_int_q_widget(&_0, &_1, &_2));
}

PHP_METHOD(Qt_Widgets_QTableWidget_QTableWidget, setRowCount)
{
	zval *handle_param = NULL, *rows_param = NULL, _0, _1;
	zend_long handle, rows;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(rows)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &rows_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, rows);
	phpqt_qtablewidget_set_row_count(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QTableWidget_QTableWidget, rowCount)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qtablewidget_row_count(&_0));
}

PHP_METHOD(Qt_Widgets_QTableWidget_QTableWidget, setColumnCount)
{
	zval *handle_param = NULL, *columns_param = NULL, _0, _1;
	zend_long handle, columns;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(columns)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &columns_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, columns);
	phpqt_qtablewidget_set_column_count(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QTableWidget_QTableWidget, columnCount)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qtablewidget_column_count(&_0));
}

PHP_METHOD(Qt_Widgets_QTableWidget_QTableWidget, row)
{
	zval *handle_param = NULL, *item_param = NULL, _0, _1;
	zend_long handle, item;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(item)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &item_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, item);
	RETURN_LONG(phpqt_qtablewidget_row(&_0, &_1));
}

PHP_METHOD(Qt_Widgets_QTableWidget_QTableWidget, column)
{
	zval *handle_param = NULL, *item_param = NULL, _0, _1;
	zend_long handle, item;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(item)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &item_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, item);
	RETURN_LONG(phpqt_qtablewidget_column(&_0, &_1));
}

PHP_METHOD(Qt_Widgets_QTableWidget_QTableWidget, item)
{
	zval *handle_param = NULL, *row_param = NULL, *column_param = NULL, _0, _1, _2;
	zend_long handle, row, column;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(row)
		Z_PARAM_LONG(column)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &row_param, &column_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, row);
	ZVAL_LONG(&_2, column);
	RETURN_LONG(phpqt_qtablewidget_item(&_0, &_1, &_2));
}

PHP_METHOD(Qt_Widgets_QTableWidget_QTableWidget, setItem)
{
	zval *handle_param = NULL, *row_param = NULL, *column_param = NULL, *item_param = NULL, _0, _1, _2, _3;
	zend_long handle, row, column, item;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(row)
		Z_PARAM_LONG(column)
		Z_PARAM_LONG(item)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 0, &handle_param, &row_param, &column_param, &item_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, row);
	ZVAL_LONG(&_2, column);
	ZVAL_LONG(&_3, item);
	phpqt_qtablewidget_set_item(&_0, &_1, &_2, &_3);
}

PHP_METHOD(Qt_Widgets_QTableWidget_QTableWidget, takeItem)
{
	zval *handle_param = NULL, *row_param = NULL, *column_param = NULL, _0, _1, _2;
	zend_long handle, row, column;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(row)
		Z_PARAM_LONG(column)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &row_param, &column_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, row);
	ZVAL_LONG(&_2, column);
	RETURN_LONG(phpqt_qtablewidget_take_item(&_0, &_1, &_2));
}

PHP_METHOD(Qt_Widgets_QTableWidget_QTableWidget, items)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, *data_param = NULL, result, _0, _1;
	zend_long handle, data;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(data)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &data_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, data);
	phpqt_qtablewidget_items(&result, &_0, &_1);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Widgets_QTableWidget_QTableWidget, indexFromItem)
{
	zval *handle_param = NULL, *item_param = NULL, _0, _1;
	zend_long handle, item;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(item)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &item_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, item);
	RETURN_LONG(phpqt_qtablewidget_index_from_item(&_0, &_1));
}

PHP_METHOD(Qt_Widgets_QTableWidget_QTableWidget, itemFromIndex)
{
	zval *handle_param = NULL, *index_param = NULL, _0, _1;
	zend_long handle, index;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(index)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &index_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, index);
	RETURN_LONG(phpqt_qtablewidget_item_from_index(&_0, &_1));
}

PHP_METHOD(Qt_Widgets_QTableWidget_QTableWidget, verticalHeaderItem)
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
	RETURN_LONG(phpqt_qtablewidget_vertical_header_item(&_0, &_1));
}

PHP_METHOD(Qt_Widgets_QTableWidget_QTableWidget, setVerticalHeaderItem)
{
	zval *handle_param = NULL, *row_param = NULL, *item_param = NULL, _0, _1, _2;
	zend_long handle, row, item;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(row)
		Z_PARAM_LONG(item)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &row_param, &item_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, row);
	ZVAL_LONG(&_2, item);
	phpqt_qtablewidget_set_vertical_header_item(&_0, &_1, &_2);
}

PHP_METHOD(Qt_Widgets_QTableWidget_QTableWidget, takeVerticalHeaderItem)
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
	RETURN_LONG(phpqt_qtablewidget_take_vertical_header_item(&_0, &_1));
}

PHP_METHOD(Qt_Widgets_QTableWidget_QTableWidget, horizontalHeaderItem)
{
	zval *handle_param = NULL, *column_param = NULL, _0, _1;
	zend_long handle, column;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(column)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &column_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, column);
	RETURN_LONG(phpqt_qtablewidget_horizontal_header_item(&_0, &_1));
}

PHP_METHOD(Qt_Widgets_QTableWidget_QTableWidget, setHorizontalHeaderItem)
{
	zval *handle_param = NULL, *column_param = NULL, *item_param = NULL, _0, _1, _2;
	zend_long handle, column, item;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(column)
		Z_PARAM_LONG(item)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &column_param, &item_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, column);
	ZVAL_LONG(&_2, item);
	phpqt_qtablewidget_set_horizontal_header_item(&_0, &_1, &_2);
}

PHP_METHOD(Qt_Widgets_QTableWidget_QTableWidget, takeHorizontalHeaderItem)
{
	zval *handle_param = NULL, *column_param = NULL, _0, _1;
	zend_long handle, column;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(column)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &column_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, column);
	RETURN_LONG(phpqt_qtablewidget_take_horizontal_header_item(&_0, &_1));
}

PHP_METHOD(Qt_Widgets_QTableWidget_QTableWidget, setVerticalHeaderLabels)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval labels;
	zval *handle_param = NULL, *labels_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&labels);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ARRAY(labels)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &labels_param);
	zephir_get_arrval(&labels, labels_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qtablewidget_set_vertical_header_labels(&_0, &labels);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_Widgets_QTableWidget_QTableWidget, setHorizontalHeaderLabels)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval labels;
	zval *handle_param = NULL, *labels_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&labels);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ARRAY(labels)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &labels_param);
	zephir_get_arrval(&labels, labels_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qtablewidget_set_horizontal_header_labels(&_0, &labels);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_Widgets_QTableWidget_QTableWidget, currentRow)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qtablewidget_current_row(&_0));
}

PHP_METHOD(Qt_Widgets_QTableWidget_QTableWidget, currentColumn)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qtablewidget_current_column(&_0));
}

PHP_METHOD(Qt_Widgets_QTableWidget_QTableWidget, currentItem)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qtablewidget_current_item(&_0));
}

PHP_METHOD(Qt_Widgets_QTableWidget_QTableWidget, setCurrentItem)
{
	zval *handle_param = NULL, *item_param = NULL, _0, _1;
	zend_long handle, item;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(item)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &item_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, item);
	phpqt_qtablewidget_set_current_item(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QTableWidget_QTableWidget, setCurrentItemQTableWidgetItemQItemSelectionModelSelectionFlags)
{
	zval *handle_param = NULL, *item_param = NULL, *command_param = NULL, _0, _1, _2;
	zend_long handle, item, command;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(item)
		Z_PARAM_LONG(command)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &item_param, &command_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, item);
	ZVAL_LONG(&_2, command);
	phpqt_qtablewidget_set_current_item_q_table_widget_item_q_item_selection_model_selection_flags(&_0, &_1, &_2);
}

PHP_METHOD(Qt_Widgets_QTableWidget_QTableWidget, setCurrentCell)
{
	zval *handle_param = NULL, *row_param = NULL, *column_param = NULL, _0, _1, _2;
	zend_long handle, row, column;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(row)
		Z_PARAM_LONG(column)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &row_param, &column_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, row);
	ZVAL_LONG(&_2, column);
	phpqt_qtablewidget_set_current_cell(&_0, &_1, &_2);
}

PHP_METHOD(Qt_Widgets_QTableWidget_QTableWidget, setCurrentCellIntIntQItemSelectionModelSelectionFlags)
{
	zval *handle_param = NULL, *row_param = NULL, *column_param = NULL, *command_param = NULL, _0, _1, _2, _3;
	zend_long handle, row, column, command;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(row)
		Z_PARAM_LONG(column)
		Z_PARAM_LONG(command)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 0, &handle_param, &row_param, &column_param, &command_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, row);
	ZVAL_LONG(&_2, column);
	ZVAL_LONG(&_3, command);
	phpqt_qtablewidget_set_current_cell_int_int_q_item_selection_model_selection_flags(&_0, &_1, &_2, &_3);
}

PHP_METHOD(Qt_Widgets_QTableWidget_QTableWidget, sortItems)
{
	zval *handle_param = NULL, *column_param = NULL, *order = NULL, order_sub, __$null, _0, _1;
	zend_long handle, column;

	ZVAL_UNDEF(&order_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(2, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(column)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(order)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 1, &handle_param, &column_param, &order);
	if (!order) {
		order = &order_sub;
		order = &__$null;
	}
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, column);
	phpqt_qtablewidget_sort_items(&_0, &_1, order);
}

PHP_METHOD(Qt_Widgets_QTableWidget_QTableWidget, setSortingEnabled)
{
	zend_bool enable;
	zval *handle_param = NULL, *enable_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_BOOL(enable)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &enable_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_BOOL(&_1, (enable ? 1 : 0));
	phpqt_qtablewidget_set_sorting_enabled(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QTableWidget_QTableWidget, isSortingEnabled)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qtablewidget_is_sorting_enabled(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Widgets_QTableWidget_QTableWidget, editItem)
{
	zval *handle_param = NULL, *item_param = NULL, _0, _1;
	zend_long handle, item;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(item)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &item_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, item);
	phpqt_qtablewidget_edit_item(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QTableWidget_QTableWidget, openPersistentEditor)
{
	zval *handle_param = NULL, *item_param = NULL, _0, _1;
	zend_long handle, item;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(item)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &item_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, item);
	phpqt_qtablewidget_open_persistent_editor(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QTableWidget_QTableWidget, closePersistentEditor)
{
	zval *handle_param = NULL, *item_param = NULL, _0, _1;
	zend_long handle, item;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(item)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &item_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, item);
	phpqt_qtablewidget_close_persistent_editor(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QTableWidget_QTableWidget, isPersistentEditorOpenQTableWidgetItem)
{
	zval *handle_param = NULL, *item_param = NULL, _0, _1;
	zend_long handle, item, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(item)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &item_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, item);
	r = phpqt_qtablewidget_is_persistent_editor_open_q_table_widget_item(&_0, &_1);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Widgets_QTableWidget_QTableWidget, cellWidget)
{
	zval *handle_param = NULL, *row_param = NULL, *column_param = NULL, _0, _1, _2;
	zend_long handle, row, column;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(row)
		Z_PARAM_LONG(column)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &row_param, &column_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, row);
	ZVAL_LONG(&_2, column);
	RETURN_LONG(phpqt_qtablewidget_cell_widget(&_0, &_1, &_2));
}

PHP_METHOD(Qt_Widgets_QTableWidget_QTableWidget, setCellWidget)
{
	zval *handle_param = NULL, *row_param = NULL, *column_param = NULL, *widget_param = NULL, _0, _1, _2, _3;
	zend_long handle, row, column, widget;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(row)
		Z_PARAM_LONG(column)
		Z_PARAM_LONG(widget)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 0, &handle_param, &row_param, &column_param, &widget_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, row);
	ZVAL_LONG(&_2, column);
	ZVAL_LONG(&_3, widget);
	phpqt_qtablewidget_set_cell_widget(&_0, &_1, &_2, &_3);
}

PHP_METHOD(Qt_Widgets_QTableWidget_QTableWidget, removeCellWidget)
{
	zval *handle_param = NULL, *row_param = NULL, *column_param = NULL, _0, _1, _2;
	zend_long handle, row, column;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(row)
		Z_PARAM_LONG(column)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &row_param, &column_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, row);
	ZVAL_LONG(&_2, column);
	phpqt_qtablewidget_remove_cell_widget(&_0, &_1, &_2);
}

PHP_METHOD(Qt_Widgets_QTableWidget_QTableWidget, setRangeSelected)
{
	zend_bool select;
	zval *handle_param = NULL, *range_param = NULL, *select_param = NULL, _0, _1, _2;
	zend_long handle, range;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(range)
		Z_PARAM_BOOL(select)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &range_param, &select_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, range);
	ZVAL_BOOL(&_2, (select ? 1 : 0));
	phpqt_qtablewidget_set_range_selected(&_0, &_1, &_2);
}

PHP_METHOD(Qt_Widgets_QTableWidget_QTableWidget, selectedRanges)
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
	phpqt_qtablewidget_selected_ranges(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Widgets_QTableWidget_QTableWidget, selectedItems)
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
	phpqt_qtablewidget_selected_items(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Widgets_QTableWidget_QTableWidget, findItems)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval text;
	zval *handle_param = NULL, *text_param = NULL, *flags_param = NULL, result, _0, _1;
	zend_long handle, flags;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&text);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(text)
		Z_PARAM_LONG(flags)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 3, 0, &handle_param, &text_param, &flags_param);
	zephir_get_strval(&text, text_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, flags);
	phpqt_qtablewidget_find_items(&result, &_0, &text, &_1);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Widgets_QTableWidget_QTableWidget, visualRow)
{
	zval *handle_param = NULL, *logicalRow_param = NULL, _0, _1;
	zend_long handle, logicalRow;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(logicalRow)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &logicalRow_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, logicalRow);
	RETURN_LONG(phpqt_qtablewidget_visual_row(&_0, &_1));
}

PHP_METHOD(Qt_Widgets_QTableWidget_QTableWidget, visualColumn)
{
	zval *handle_param = NULL, *logicalColumn_param = NULL, _0, _1;
	zend_long handle, logicalColumn;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(logicalColumn)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &logicalColumn_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, logicalColumn);
	RETURN_LONG(phpqt_qtablewidget_visual_column(&_0, &_1));
}

PHP_METHOD(Qt_Widgets_QTableWidget_QTableWidget, itemAt)
{
	zval *handle_param = NULL, *pX_param = NULL, *pY_param = NULL, _0, _1, _2;
	zend_long handle, pX, pY;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(pX)
		Z_PARAM_LONG(pY)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &pX_param, &pY_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, pX);
	ZVAL_LONG(&_2, pY);
	RETURN_LONG(phpqt_qtablewidget_item_at(&_0, &_1, &_2));
}

PHP_METHOD(Qt_Widgets_QTableWidget_QTableWidget, itemAtIntInt)
{
	zval *handle_param = NULL, *x_param = NULL, *y_param = NULL, _0, _1, _2;
	zend_long handle, x, y;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(x)
		Z_PARAM_LONG(y)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &x_param, &y_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, x);
	ZVAL_LONG(&_2, y);
	RETURN_LONG(phpqt_qtablewidget_item_at_int_int(&_0, &_1, &_2));
}

PHP_METHOD(Qt_Widgets_QTableWidget_QTableWidget, visualItemRect)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, *item_param = NULL, result, _0, _1;
	zend_long handle, item;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(item)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &item_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, item);
	phpqt_qtablewidget_visual_item_rect(&result, &_0, &_1);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Widgets_QTableWidget_QTableWidget, itemPrototype)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qtablewidget_item_prototype(&_0));
}

PHP_METHOD(Qt_Widgets_QTableWidget_QTableWidget, setItemPrototype)
{
	zval *handle_param = NULL, *item_param = NULL, _0, _1;
	zend_long handle, item;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(item)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &item_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, item);
	phpqt_qtablewidget_set_item_prototype(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QTableWidget_QTableWidget, scrollToItem)
{
	zval *handle_param = NULL, *item_param = NULL, *hint = NULL, hint_sub, __$null, _0, _1;
	zend_long handle, item;

	ZVAL_UNDEF(&hint_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(2, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(item)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(hint)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 1, &handle_param, &item_param, &hint);
	if (!hint) {
		hint = &hint_sub;
		hint = &__$null;
	}
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, item);
	phpqt_qtablewidget_scroll_to_item(&_0, &_1, hint);
}

PHP_METHOD(Qt_Widgets_QTableWidget_QTableWidget, insertRow)
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
	phpqt_qtablewidget_insert_row(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QTableWidget_QTableWidget, insertColumn)
{
	zval *handle_param = NULL, *column_param = NULL, _0, _1;
	zend_long handle, column;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(column)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &column_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, column);
	phpqt_qtablewidget_insert_column(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QTableWidget_QTableWidget, removeRow)
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
	phpqt_qtablewidget_remove_row(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QTableWidget_QTableWidget, removeColumn)
{
	zval *handle_param = NULL, *column_param = NULL, _0, _1;
	zend_long handle, column;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(column)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &column_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, column);
	phpqt_qtablewidget_remove_column(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QTableWidget_QTableWidget, clear)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qtablewidget_clear(&_0);
}

PHP_METHOD(Qt_Widgets_QTableWidget_QTableWidget, clearContents)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qtablewidget_clear_contents(&_0);
}

PHP_METHOD(Qt_Widgets_QTableWidget_QTableWidget, itemPressed)
{
	zval *handle_param = NULL, *item_param = NULL, _0, _1;
	zend_long handle, item;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(item)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &item_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, item);
	phpqt_qtablewidget_item_pressed(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QTableWidget_QTableWidget, itemClicked)
{
	zval *handle_param = NULL, *item_param = NULL, _0, _1;
	zend_long handle, item;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(item)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &item_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, item);
	phpqt_qtablewidget_item_clicked(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QTableWidget_QTableWidget, itemDoubleClicked)
{
	zval *handle_param = NULL, *item_param = NULL, _0, _1;
	zend_long handle, item;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(item)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &item_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, item);
	phpqt_qtablewidget_item_double_clicked(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QTableWidget_QTableWidget, itemActivated)
{
	zval *handle_param = NULL, *item_param = NULL, _0, _1;
	zend_long handle, item;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(item)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &item_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, item);
	phpqt_qtablewidget_item_activated(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QTableWidget_QTableWidget, itemEntered)
{
	zval *handle_param = NULL, *item_param = NULL, _0, _1;
	zend_long handle, item;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(item)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &item_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, item);
	phpqt_qtablewidget_item_entered(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QTableWidget_QTableWidget, itemChanged)
{
	zval *handle_param = NULL, *item_param = NULL, _0, _1;
	zend_long handle, item;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(item)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &item_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, item);
	phpqt_qtablewidget_item_changed(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QTableWidget_QTableWidget, currentItemChanged)
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
	phpqt_qtablewidget_current_item_changed(&_0, &_1, &_2);
}

PHP_METHOD(Qt_Widgets_QTableWidget_QTableWidget, itemSelectionChanged)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qtablewidget_item_selection_changed(&_0);
}

PHP_METHOD(Qt_Widgets_QTableWidget_QTableWidget, cellPressed)
{
	zval *handle_param = NULL, *row_param = NULL, *column_param = NULL, _0, _1, _2;
	zend_long handle, row, column;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(row)
		Z_PARAM_LONG(column)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &row_param, &column_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, row);
	ZVAL_LONG(&_2, column);
	phpqt_qtablewidget_cell_pressed(&_0, &_1, &_2);
}

PHP_METHOD(Qt_Widgets_QTableWidget_QTableWidget, cellClicked)
{
	zval *handle_param = NULL, *row_param = NULL, *column_param = NULL, _0, _1, _2;
	zend_long handle, row, column;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(row)
		Z_PARAM_LONG(column)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &row_param, &column_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, row);
	ZVAL_LONG(&_2, column);
	phpqt_qtablewidget_cell_clicked(&_0, &_1, &_2);
}

PHP_METHOD(Qt_Widgets_QTableWidget_QTableWidget, cellDoubleClicked)
{
	zval *handle_param = NULL, *row_param = NULL, *column_param = NULL, _0, _1, _2;
	zend_long handle, row, column;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(row)
		Z_PARAM_LONG(column)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &row_param, &column_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, row);
	ZVAL_LONG(&_2, column);
	phpqt_qtablewidget_cell_double_clicked(&_0, &_1, &_2);
}

PHP_METHOD(Qt_Widgets_QTableWidget_QTableWidget, cellActivated)
{
	zval *handle_param = NULL, *row_param = NULL, *column_param = NULL, _0, _1, _2;
	zend_long handle, row, column;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(row)
		Z_PARAM_LONG(column)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &row_param, &column_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, row);
	ZVAL_LONG(&_2, column);
	phpqt_qtablewidget_cell_activated(&_0, &_1, &_2);
}

PHP_METHOD(Qt_Widgets_QTableWidget_QTableWidget, cellEntered)
{
	zval *handle_param = NULL, *row_param = NULL, *column_param = NULL, _0, _1, _2;
	zend_long handle, row, column;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(row)
		Z_PARAM_LONG(column)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &row_param, &column_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, row);
	ZVAL_LONG(&_2, column);
	phpqt_qtablewidget_cell_entered(&_0, &_1, &_2);
}

PHP_METHOD(Qt_Widgets_QTableWidget_QTableWidget, cellChanged)
{
	zval *handle_param = NULL, *row_param = NULL, *column_param = NULL, _0, _1, _2;
	zend_long handle, row, column;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(row)
		Z_PARAM_LONG(column)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &row_param, &column_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, row);
	ZVAL_LONG(&_2, column);
	phpqt_qtablewidget_cell_changed(&_0, &_1, &_2);
}

PHP_METHOD(Qt_Widgets_QTableWidget_QTableWidget, currentCellChanged)
{
	zval *handle_param = NULL, *currentRow_param = NULL, *currentColumn_param = NULL, *previousRow_param = NULL, *previousColumn_param = NULL, _0, _1, _2, _3, _4;
	zend_long handle, currentRow, currentColumn, previousRow, previousColumn;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZEND_PARSE_PARAMETERS_START(5, 5)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(currentRow)
		Z_PARAM_LONG(currentColumn)
		Z_PARAM_LONG(previousRow)
		Z_PARAM_LONG(previousColumn)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(5, 0, &handle_param, &currentRow_param, &currentColumn_param, &previousRow_param, &previousColumn_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, currentRow);
	ZVAL_LONG(&_2, currentColumn);
	ZVAL_LONG(&_3, previousRow);
	ZVAL_LONG(&_4, previousColumn);
	phpqt_qtablewidget_current_cell_changed(&_0, &_1, &_2, &_3, &_4);
}

PHP_METHOD(Qt_Widgets_QTableWidget_QTableWidget, event)
{
	zval *handle_param = NULL, *e_param = NULL, _0, _1;
	zend_long handle, e, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(e)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &e_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, e);
	r = phpqt_qtablewidget_event(&_0, &_1);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Widgets_QTableWidget_QTableWidget, mimeTypes)
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
	phpqt_qtablewidget_mime_types(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Widgets_QTableWidget_QTableWidget, mimeData)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval items;
	zval *handle_param = NULL, *items_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&items);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ARRAY(items)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &items_param);
	zephir_get_arrval(&items, items_param);
	ZVAL_LONG(&_0, handle);
	RETURN_MM_LONG(phpqt_qtablewidget_mime_data(&_0, &items));
}

PHP_METHOD(Qt_Widgets_QTableWidget_QTableWidget, dropMimeData)
{
	zval *handle_param = NULL, *row_param = NULL, *column_param = NULL, *data_param = NULL, *action_param = NULL, _0, _1, _2, _3, _4;
	zend_long handle, row, column, data, action, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZEND_PARSE_PARAMETERS_START(5, 5)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(row)
		Z_PARAM_LONG(column)
		Z_PARAM_LONG(data)
		Z_PARAM_LONG(action)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(5, 0, &handle_param, &row_param, &column_param, &data_param, &action_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, row);
	ZVAL_LONG(&_2, column);
	ZVAL_LONG(&_3, data);
	ZVAL_LONG(&_4, action);
	r = phpqt_qtablewidget_drop_mime_data(&_0, &_1, &_2, &_3, &_4);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Widgets_QTableWidget_QTableWidget, supportedDropActions)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qtablewidget_supported_drop_actions(&_0));
}

PHP_METHOD(Qt_Widgets_QTableWidget_QTableWidget, dropEvent)
{
	zval *handle_param = NULL, *event_param = NULL, _0, _1;
	zend_long handle, event;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(event)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &event_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, event);
	phpqt_qtablewidget_drop_event(&_0, &_1);
}

