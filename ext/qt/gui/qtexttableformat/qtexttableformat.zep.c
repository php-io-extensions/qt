
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
#include "src/gui-qtexttableformat.h"
#include "kernel/object.h"
#include "kernel/operators.h"
#include "kernel/memory.h"


ZEPHIR_INIT_CLASS(Qt_Gui_QTextTableFormat_QTextTableFormat)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Gui\\QTextTableFormat, QTextTableFormat, qt, gui_qtexttableformat_qtexttableformat, qt_gui_qtexttableformat_qtexttableformat_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Gui_QTextTableFormat_QTextTableFormat, new_)
{

	RETURN_LONG(phpqt_qtexttableformat_new());
}

PHP_METHOD(Qt_Gui_QTextTableFormat_QTextTableFormat, isValid)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qtexttableformat_is_valid(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Gui_QTextTableFormat_QTextTableFormat, columns)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qtexttableformat_columns(&_0));
}

PHP_METHOD(Qt_Gui_QTextTableFormat_QTextTableFormat, setColumns)
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
	phpqt_qtexttableformat_set_columns(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QTextTableFormat_QTextTableFormat, setColumnWidthConstraints)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval constraints;
	zval *handle_param = NULL, *constraints_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&constraints);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ARRAY(constraints)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &constraints_param);
	zephir_get_arrval(&constraints, constraints_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qtexttableformat_set_column_width_constraints(&_0, &constraints);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_Gui_QTextTableFormat_QTextTableFormat, columnWidthConstraints)
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
	phpqt_qtexttableformat_column_width_constraints(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QTextTableFormat_QTextTableFormat, clearColumnWidthConstraints)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qtexttableformat_clear_column_width_constraints(&_0);
}

PHP_METHOD(Qt_Gui_QTextTableFormat_QTextTableFormat, cellSpacing)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_DOUBLE(phpqt_qtexttableformat_cell_spacing(&_0));
}

PHP_METHOD(Qt_Gui_QTextTableFormat_QTextTableFormat, setCellSpacing)
{
	double spacing;
	zval *handle_param = NULL, *spacing_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(spacing)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &spacing_param);
	spacing = zephir_get_doubleval(spacing_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, spacing);
	phpqt_qtexttableformat_set_cell_spacing(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QTextTableFormat_QTextTableFormat, cellPadding)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_DOUBLE(phpqt_qtexttableformat_cell_padding(&_0));
}

PHP_METHOD(Qt_Gui_QTextTableFormat_QTextTableFormat, setCellPadding)
{
	double padding;
	zval *handle_param = NULL, *padding_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(padding)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &padding_param);
	padding = zephir_get_doubleval(padding_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, padding);
	phpqt_qtexttableformat_set_cell_padding(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QTextTableFormat_QTextTableFormat, setAlignment)
{
	zval *handle_param = NULL, *alignment_param = NULL, _0, _1;
	zend_long handle, alignment;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(alignment)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &alignment_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, alignment);
	phpqt_qtexttableformat_set_alignment(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QTextTableFormat_QTextTableFormat, alignment)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qtexttableformat_alignment(&_0));
}

PHP_METHOD(Qt_Gui_QTextTableFormat_QTextTableFormat, setHeaderRowCount)
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
	phpqt_qtexttableformat_set_header_row_count(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QTextTableFormat_QTextTableFormat, headerRowCount)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qtexttableformat_header_row_count(&_0));
}

PHP_METHOD(Qt_Gui_QTextTableFormat_QTextTableFormat, setBorderCollapse)
{
	zend_bool borderCollapse;
	zval *handle_param = NULL, *borderCollapse_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_BOOL(borderCollapse)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &borderCollapse_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_BOOL(&_1, (borderCollapse ? 1 : 0));
	phpqt_qtexttableformat_set_border_collapse(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QTextTableFormat_QTextTableFormat, borderCollapse)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qtexttableformat_border_collapse(&_0);
	RETURN_BOOL(r == 1);
}

