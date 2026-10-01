
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
#include "src/gui-qtexttable.h"
#include "kernel/object.h"
#include "kernel/string.h"
#include "kernel/memory.h"
#include "kernel/operators.h"


ZEPHIR_INIT_CLASS(Qt_Gui_QTextTable_QTextTable)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Gui\\QTextTable, QTextTable, qt, gui_qtexttable_qtexttable, qt_gui_qtexttable_qtexttable_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Gui_QTextTable_QTextTable, staticMetaObject)
{

	RETURN_LONG(phpqt_qtexttable_static_meta_object());
}

PHP_METHOD(Qt_Gui_QTextTable_QTextTable, tr)
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
	phpqt_qtexttable_tr(&result, s, c, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QTextTable_QTextTable, new_)
{
	zval *doc_param = NULL, _0;
	zend_long doc;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(doc)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &doc_param);
	ZVAL_LONG(&_0, doc);
	RETURN_LONG(phpqt_qtexttable_new(&_0));
}

PHP_METHOD(Qt_Gui_QTextTable_QTextTable, resize)
{
	zval *handle_param = NULL, *rows_param = NULL, *cols_param = NULL, _0, _1, _2;
	zend_long handle, rows, cols;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(rows)
		Z_PARAM_LONG(cols)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &rows_param, &cols_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, rows);
	ZVAL_LONG(&_2, cols);
	phpqt_qtexttable_resize(&_0, &_1, &_2);
}

PHP_METHOD(Qt_Gui_QTextTable_QTextTable, insertRows)
{
	zval *handle_param = NULL, *pos_param = NULL, *num_param = NULL, _0, _1, _2;
	zend_long handle, pos, num;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(pos)
		Z_PARAM_LONG(num)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &pos_param, &num_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, pos);
	ZVAL_LONG(&_2, num);
	phpqt_qtexttable_insert_rows(&_0, &_1, &_2);
}

PHP_METHOD(Qt_Gui_QTextTable_QTextTable, insertColumns)
{
	zval *handle_param = NULL, *pos_param = NULL, *num_param = NULL, _0, _1, _2;
	zend_long handle, pos, num;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(pos)
		Z_PARAM_LONG(num)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &pos_param, &num_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, pos);
	ZVAL_LONG(&_2, num);
	phpqt_qtexttable_insert_columns(&_0, &_1, &_2);
}

PHP_METHOD(Qt_Gui_QTextTable_QTextTable, appendRows)
{
	zval *handle_param = NULL, *count_param = NULL, _0, _1;
	zend_long handle, count;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(count)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &count_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, count);
	phpqt_qtexttable_append_rows(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QTextTable_QTextTable, appendColumns)
{
	zval *handle_param = NULL, *count_param = NULL, _0, _1;
	zend_long handle, count;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(count)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &count_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, count);
	phpqt_qtexttable_append_columns(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QTextTable_QTextTable, removeRows)
{
	zval *handle_param = NULL, *pos_param = NULL, *num_param = NULL, _0, _1, _2;
	zend_long handle, pos, num;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(pos)
		Z_PARAM_LONG(num)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &pos_param, &num_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, pos);
	ZVAL_LONG(&_2, num);
	phpqt_qtexttable_remove_rows(&_0, &_1, &_2);
}

PHP_METHOD(Qt_Gui_QTextTable_QTextTable, removeColumns)
{
	zval *handle_param = NULL, *pos_param = NULL, *num_param = NULL, _0, _1, _2;
	zend_long handle, pos, num;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(pos)
		Z_PARAM_LONG(num)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &pos_param, &num_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, pos);
	ZVAL_LONG(&_2, num);
	phpqt_qtexttable_remove_columns(&_0, &_1, &_2);
}

PHP_METHOD(Qt_Gui_QTextTable_QTextTable, mergeCells)
{
	zval *handle_param = NULL, *row_param = NULL, *col_param = NULL, *numRows_param = NULL, *numCols_param = NULL, _0, _1, _2, _3, _4;
	zend_long handle, row, col, numRows, numCols;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZEND_PARSE_PARAMETERS_START(5, 5)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(row)
		Z_PARAM_LONG(col)
		Z_PARAM_LONG(numRows)
		Z_PARAM_LONG(numCols)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(5, 0, &handle_param, &row_param, &col_param, &numRows_param, &numCols_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, row);
	ZVAL_LONG(&_2, col);
	ZVAL_LONG(&_3, numRows);
	ZVAL_LONG(&_4, numCols);
	phpqt_qtexttable_merge_cells(&_0, &_1, &_2, &_3, &_4);
}

PHP_METHOD(Qt_Gui_QTextTable_QTextTable, mergeCellsQTextCursor)
{
	zval *handle_param = NULL, *cursor_param = NULL, _0, _1;
	zend_long handle, cursor;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(cursor)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &cursor_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, cursor);
	phpqt_qtexttable_merge_cells_q_text_cursor(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QTextTable_QTextTable, splitCell)
{
	zval *handle_param = NULL, *row_param = NULL, *col_param = NULL, *numRows_param = NULL, *numCols_param = NULL, _0, _1, _2, _3, _4;
	zend_long handle, row, col, numRows, numCols;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZEND_PARSE_PARAMETERS_START(5, 5)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(row)
		Z_PARAM_LONG(col)
		Z_PARAM_LONG(numRows)
		Z_PARAM_LONG(numCols)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(5, 0, &handle_param, &row_param, &col_param, &numRows_param, &numCols_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, row);
	ZVAL_LONG(&_2, col);
	ZVAL_LONG(&_3, numRows);
	ZVAL_LONG(&_4, numCols);
	phpqt_qtexttable_split_cell(&_0, &_1, &_2, &_3, &_4);
}

PHP_METHOD(Qt_Gui_QTextTable_QTextTable, rows)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qtexttable_rows(&_0));
}

PHP_METHOD(Qt_Gui_QTextTable_QTextTable, columns)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qtexttable_columns(&_0));
}

PHP_METHOD(Qt_Gui_QTextTable_QTextTable, cellAt)
{
	zval *handle_param = NULL, *row_param = NULL, *col_param = NULL, _0, _1, _2;
	zend_long handle, row, col;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(row)
		Z_PARAM_LONG(col)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &row_param, &col_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, row);
	ZVAL_LONG(&_2, col);
	RETURN_LONG(phpqt_qtexttable_cell_at(&_0, &_1, &_2));
}

PHP_METHOD(Qt_Gui_QTextTable_QTextTable, cellAtInt)
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
	RETURN_LONG(phpqt_qtexttable_cell_at_int(&_0, &_1));
}

PHP_METHOD(Qt_Gui_QTextTable_QTextTable, cellAtQTextCursor)
{
	zval *handle_param = NULL, *c_param = NULL, _0, _1;
	zend_long handle, c;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(c)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &c_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, c);
	RETURN_LONG(phpqt_qtexttable_cell_at_q_text_cursor(&_0, &_1));
}

PHP_METHOD(Qt_Gui_QTextTable_QTextTable, rowStart)
{
	zval *handle_param = NULL, *c_param = NULL, _0, _1;
	zend_long handle, c;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(c)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &c_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, c);
	RETURN_LONG(phpqt_qtexttable_row_start(&_0, &_1));
}

PHP_METHOD(Qt_Gui_QTextTable_QTextTable, rowEnd)
{
	zval *handle_param = NULL, *c_param = NULL, _0, _1;
	zend_long handle, c;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(c)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &c_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, c);
	RETURN_LONG(phpqt_qtexttable_row_end(&_0, &_1));
}

PHP_METHOD(Qt_Gui_QTextTable_QTextTable, setFormat)
{
	zval *handle_param = NULL, *format_param = NULL, _0, _1;
	zend_long handle, format;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(format)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &format_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, format);
	phpqt_qtexttable_set_format(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QTextTable_QTextTable, format)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qtexttable_format(&_0));
}

