
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
#include "src/gui-qtextline.h"
#include "kernel/object.h"
#include "kernel/operators.h"
#include "kernel/memory.h"


ZEPHIR_INIT_CLASS(Qt_Gui_QTextLine_QTextLine)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Gui\\QTextLine, QTextLine, qt, gui_qtextline_qtextline, qt_gui_qtextline_qtextline_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Gui_QTextLine_QTextLine, new_)
{

	RETURN_LONG(phpqt_qtextline_new());
}

PHP_METHOD(Qt_Gui_QTextLine_QTextLine, isValid)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qtextline_is_valid(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Gui_QTextLine_QTextLine, rect)
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
	phpqt_qtextline_rect(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QTextLine_QTextLine, x)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_DOUBLE(phpqt_qtextline_x(&_0));
}

PHP_METHOD(Qt_Gui_QTextLine_QTextLine, y)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_DOUBLE(phpqt_qtextline_y(&_0));
}

PHP_METHOD(Qt_Gui_QTextLine_QTextLine, width)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_DOUBLE(phpqt_qtextline_width(&_0));
}

PHP_METHOD(Qt_Gui_QTextLine_QTextLine, ascent)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_DOUBLE(phpqt_qtextline_ascent(&_0));
}

PHP_METHOD(Qt_Gui_QTextLine_QTextLine, descent)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_DOUBLE(phpqt_qtextline_descent(&_0));
}

PHP_METHOD(Qt_Gui_QTextLine_QTextLine, height)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_DOUBLE(phpqt_qtextline_height(&_0));
}

PHP_METHOD(Qt_Gui_QTextLine_QTextLine, leading)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_DOUBLE(phpqt_qtextline_leading(&_0));
}

PHP_METHOD(Qt_Gui_QTextLine_QTextLine, setLeadingIncluded)
{
	zend_bool included;
	zval *handle_param = NULL, *included_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_BOOL(included)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &included_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_BOOL(&_1, (included ? 1 : 0));
	phpqt_qtextline_set_leading_included(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QTextLine_QTextLine, leadingIncluded)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qtextline_leading_included(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Gui_QTextLine_QTextLine, naturalTextWidth)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_DOUBLE(phpqt_qtextline_natural_text_width(&_0));
}

PHP_METHOD(Qt_Gui_QTextLine_QTextLine, horizontalAdvance)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_DOUBLE(phpqt_qtextline_horizontal_advance(&_0));
}

PHP_METHOD(Qt_Gui_QTextLine_QTextLine, naturalTextRect)
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
	phpqt_qtextline_natural_text_rect(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QTextLine_QTextLine, cursorToX)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, *cursorPos = NULL, cursorPos_sub, *edge = NULL, edge_sub, __$null, result, _0;
	zend_long handle;

	ZVAL_UNDEF(&cursorPos_sub);
	ZVAL_UNDEF(&edge_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(2, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(cursorPos)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(edge)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 1, &handle_param, &cursorPos, &edge);
	if (!edge) {
		edge = &edge_sub;
		edge = &__$null;
	}
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	phpqt_qtextline_cursor_to_x(&result, &_0, cursorPos, edge);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QTextLine_QTextLine, cursorToXIntQTextLineEdge)
{
	zval *handle_param = NULL, *cursorPos_param = NULL, *edge = NULL, edge_sub, __$null, _0, _1;
	zend_long handle, cursorPos;

	ZVAL_UNDEF(&edge_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(2, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(cursorPos)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(edge)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 1, &handle_param, &cursorPos_param, &edge);
	if (!edge) {
		edge = &edge_sub;
		edge = &__$null;
	}
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, cursorPos);
	RETURN_DOUBLE(phpqt_qtextline_cursor_to_x_int_q_text_line_edge(&_0, &_1, edge));
}

PHP_METHOD(Qt_Gui_QTextLine_QTextLine, xToCursor)
{
	double x;
	zval *handle_param = NULL, *x_param = NULL, *arg1 = NULL, arg1_sub, __$null, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&arg1_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(2, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(x)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(arg1)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 1, &handle_param, &x_param, &arg1);
	x = zephir_get_doubleval(x_param);
	if (!arg1) {
		arg1 = &arg1_sub;
		arg1 = &__$null;
	}
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, x);
	RETURN_LONG(phpqt_qtextline_x_to_cursor(&_0, &_1, arg1));
}

PHP_METHOD(Qt_Gui_QTextLine_QTextLine, setLineWidth)
{
	double width;
	zval *handle_param = NULL, *width_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(width)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &width_param);
	width = zephir_get_doubleval(width_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, width);
	phpqt_qtextline_set_line_width(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QTextLine_QTextLine, setNumColumns)
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
	phpqt_qtextline_set_num_columns(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QTextLine_QTextLine, setNumColumnsIntQreal)
{
	double alignmentWidth;
	zval *handle_param = NULL, *columns_param = NULL, *alignmentWidth_param = NULL, _0, _1, _2;
	zend_long handle, columns;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(columns)
		Z_PARAM_ZVAL(alignmentWidth)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &columns_param, &alignmentWidth_param);
	alignmentWidth = zephir_get_doubleval(alignmentWidth_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, columns);
	ZVAL_DOUBLE(&_2, alignmentWidth);
	phpqt_qtextline_set_num_columns_int_qreal(&_0, &_1, &_2);
}

PHP_METHOD(Qt_Gui_QTextLine_QTextLine, setPosition)
{
	double posX, posY;
	zval *handle_param = NULL, *posX_param = NULL, *posY_param = NULL, _0, _1, _2;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(posX)
		Z_PARAM_ZVAL(posY)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &posX_param, &posY_param);
	posX = zephir_get_doubleval(posX_param);
	posY = zephir_get_doubleval(posY_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, posX);
	ZVAL_DOUBLE(&_2, posY);
	phpqt_qtextline_set_position(&_0, &_1, &_2);
}

PHP_METHOD(Qt_Gui_QTextLine_QTextLine, position)
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
	phpqt_qtextline_position(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QTextLine_QTextLine, textStart)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qtextline_text_start(&_0));
}

PHP_METHOD(Qt_Gui_QTextLine_QTextLine, textLength)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qtextline_text_length(&_0));
}

PHP_METHOD(Qt_Gui_QTextLine_QTextLine, lineNumber)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qtextline_line_number(&_0));
}

PHP_METHOD(Qt_Gui_QTextLine_QTextLine, draw)
{
	double positionX, positionY;
	zval *handle_param = NULL, *painter_param = NULL, *positionX_param = NULL, *positionY_param = NULL, _0, _1, _2, _3;
	zend_long handle, painter;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(painter)
		Z_PARAM_ZVAL(positionX)
		Z_PARAM_ZVAL(positionY)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 0, &handle_param, &painter_param, &positionX_param, &positionY_param);
	positionX = zephir_get_doubleval(positionX_param);
	positionY = zephir_get_doubleval(positionY_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, painter);
	ZVAL_DOUBLE(&_2, positionX);
	ZVAL_DOUBLE(&_3, positionY);
	phpqt_qtextline_draw(&_0, &_1, &_2, &_3);
}

PHP_METHOD(Qt_Gui_QTextLine_QTextLine, glyphRuns)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, *from_param = NULL, *length_param = NULL, *flags_param = NULL, result, _0, _1, _2, _3;
	zend_long handle, from, length, flags;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(from)
		Z_PARAM_LONG(length)
		Z_PARAM_LONG(flags)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 4, 0, &handle_param, &from_param, &length_param, &flags_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, from);
	ZVAL_LONG(&_2, length);
	ZVAL_LONG(&_3, flags);
	phpqt_qtextline_glyph_runs(&result, &_0, &_1, &_2, &_3);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QTextLine_QTextLine, glyphRunsIntInt)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, *from_param = NULL, *length_param = NULL, result, _0, _1, _2;
	zend_long handle, from, length;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(1, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(from)
		Z_PARAM_LONG(length)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 2, &handle_param, &from_param, &length_param);
	if (!from_param) {
		from = -1;
	} else {
		}
	if (!length_param) {
		length = -1;
	} else {
		}
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, from);
	ZVAL_LONG(&_2, length);
	phpqt_qtextline_glyph_runs_int_int(&result, &_0, &_1, &_2);
	RETURN_CCTOR(&result);
}

