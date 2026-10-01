
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
#include "src/gui-qtextframeformat.h"
#include "kernel/object.h"
#include "kernel/operators.h"
#include "kernel/memory.h"


ZEPHIR_INIT_CLASS(Qt_Gui_QTextFrameFormat_QTextFrameFormat)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Gui\\QTextFrameFormat, QTextFrameFormat, qt, gui_qtextframeformat_qtextframeformat, qt_gui_qtextframeformat_qtextframeformat_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Gui_QTextFrameFormat_QTextFrameFormat, new_)
{

	RETURN_LONG(phpqt_qtextframeformat_new());
}

PHP_METHOD(Qt_Gui_QTextFrameFormat_QTextFrameFormat, isValid)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qtextframeformat_is_valid(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Gui_QTextFrameFormat_QTextFrameFormat, setPosition)
{
	zval *handle_param = NULL, *f_param = NULL, _0, _1;
	zend_long handle, f;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(f)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &f_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, f);
	phpqt_qtextframeformat_set_position(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QTextFrameFormat_QTextFrameFormat, position)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qtextframeformat_position(&_0));
}

PHP_METHOD(Qt_Gui_QTextFrameFormat_QTextFrameFormat, setBorder)
{
	double border;
	zval *handle_param = NULL, *border_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(border)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &border_param);
	border = zephir_get_doubleval(border_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, border);
	phpqt_qtextframeformat_set_border(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QTextFrameFormat_QTextFrameFormat, border)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_DOUBLE(phpqt_qtextframeformat_border(&_0));
}

PHP_METHOD(Qt_Gui_QTextFrameFormat_QTextFrameFormat, setBorderBrush)
{
	zval *handle_param = NULL, *brush_param = NULL, _0, _1;
	zend_long handle, brush;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(brush)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &brush_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, brush);
	phpqt_qtextframeformat_set_border_brush(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QTextFrameFormat_QTextFrameFormat, borderBrush)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qtextframeformat_border_brush(&_0));
}

PHP_METHOD(Qt_Gui_QTextFrameFormat_QTextFrameFormat, setBorderStyle)
{
	zval *handle_param = NULL, *style_param = NULL, _0, _1;
	zend_long handle, style;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(style)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &style_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, style);
	phpqt_qtextframeformat_set_border_style(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QTextFrameFormat_QTextFrameFormat, borderStyle)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qtextframeformat_border_style(&_0));
}

PHP_METHOD(Qt_Gui_QTextFrameFormat_QTextFrameFormat, setMargin)
{
	double margin;
	zval *handle_param = NULL, *margin_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(margin)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &margin_param);
	margin = zephir_get_doubleval(margin_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, margin);
	phpqt_qtextframeformat_set_margin(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QTextFrameFormat_QTextFrameFormat, margin)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_DOUBLE(phpqt_qtextframeformat_margin(&_0));
}

PHP_METHOD(Qt_Gui_QTextFrameFormat_QTextFrameFormat, setTopMargin)
{
	double margin;
	zval *handle_param = NULL, *margin_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(margin)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &margin_param);
	margin = zephir_get_doubleval(margin_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, margin);
	phpqt_qtextframeformat_set_top_margin(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QTextFrameFormat_QTextFrameFormat, topMargin)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_DOUBLE(phpqt_qtextframeformat_top_margin(&_0));
}

PHP_METHOD(Qt_Gui_QTextFrameFormat_QTextFrameFormat, setBottomMargin)
{
	double margin;
	zval *handle_param = NULL, *margin_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(margin)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &margin_param);
	margin = zephir_get_doubleval(margin_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, margin);
	phpqt_qtextframeformat_set_bottom_margin(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QTextFrameFormat_QTextFrameFormat, bottomMargin)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_DOUBLE(phpqt_qtextframeformat_bottom_margin(&_0));
}

PHP_METHOD(Qt_Gui_QTextFrameFormat_QTextFrameFormat, setLeftMargin)
{
	double margin;
	zval *handle_param = NULL, *margin_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(margin)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &margin_param);
	margin = zephir_get_doubleval(margin_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, margin);
	phpqt_qtextframeformat_set_left_margin(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QTextFrameFormat_QTextFrameFormat, leftMargin)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_DOUBLE(phpqt_qtextframeformat_left_margin(&_0));
}

PHP_METHOD(Qt_Gui_QTextFrameFormat_QTextFrameFormat, setRightMargin)
{
	double margin;
	zval *handle_param = NULL, *margin_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(margin)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &margin_param);
	margin = zephir_get_doubleval(margin_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, margin);
	phpqt_qtextframeformat_set_right_margin(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QTextFrameFormat_QTextFrameFormat, rightMargin)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_DOUBLE(phpqt_qtextframeformat_right_margin(&_0));
}

PHP_METHOD(Qt_Gui_QTextFrameFormat_QTextFrameFormat, setPadding)
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
	phpqt_qtextframeformat_set_padding(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QTextFrameFormat_QTextFrameFormat, padding)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_DOUBLE(phpqt_qtextframeformat_padding(&_0));
}

PHP_METHOD(Qt_Gui_QTextFrameFormat_QTextFrameFormat, setWidth)
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
	phpqt_qtextframeformat_set_width(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QTextFrameFormat_QTextFrameFormat, setWidthQTextLength)
{
	zval *handle_param = NULL, *length_param = NULL, _0, _1;
	zend_long handle, length;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(length)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &length_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, length);
	phpqt_qtextframeformat_set_width_q_text_length(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QTextFrameFormat_QTextFrameFormat, width)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qtextframeformat_width(&_0));
}

PHP_METHOD(Qt_Gui_QTextFrameFormat_QTextFrameFormat, setHeight)
{
	double height;
	zval *handle_param = NULL, *height_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(height)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &height_param);
	height = zephir_get_doubleval(height_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, height);
	phpqt_qtextframeformat_set_height(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QTextFrameFormat_QTextFrameFormat, setHeightQTextLength)
{
	zval *handle_param = NULL, *height_param = NULL, _0, _1;
	zend_long handle, height;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(height)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &height_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, height);
	phpqt_qtextframeformat_set_height_q_text_length(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QTextFrameFormat_QTextFrameFormat, height)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qtextframeformat_height(&_0));
}

PHP_METHOD(Qt_Gui_QTextFrameFormat_QTextFrameFormat, setPageBreakPolicy)
{
	zval *handle_param = NULL, *flags_param = NULL, _0, _1;
	zend_long handle, flags;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(flags)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &flags_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, flags);
	phpqt_qtextframeformat_set_page_break_policy(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QTextFrameFormat_QTextFrameFormat, pageBreakPolicy)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qtextframeformat_page_break_policy(&_0));
}

