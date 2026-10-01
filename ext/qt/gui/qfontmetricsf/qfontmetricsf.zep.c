
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
#include "src/gui-qfontmetricsf.h"
#include "kernel/operators.h"
#include "kernel/memory.h"
#include "kernel/object.h"
#include "kernel/string.h"


ZEPHIR_INIT_CLASS(Qt_Gui_QFontMetricsF_QFontMetricsF)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Gui\\QFontMetricsF, QFontMetricsF, qt, gui_qfontmetricsf_qfontmetricsf, qt_gui_qfontmetricsf_qfontmetricsf_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Gui_QFontMetricsF_QFontMetricsF, new_)
{
	zval *font_param = NULL, _0;
	zend_long font;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(font)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &font_param);
	ZVAL_LONG(&_0, font);
	RETURN_LONG(phpqt_qfontmetricsf_new(&_0));
}

PHP_METHOD(Qt_Gui_QFontMetricsF_QFontMetricsF, newQFontQPaintDevice)
{
	zval *font_param = NULL, *pd_param = NULL, _0, _1;
	zend_long font, pd;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(font)
		Z_PARAM_LONG(pd)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &font_param, &pd_param);
	ZVAL_LONG(&_0, font);
	ZVAL_LONG(&_1, pd);
	RETURN_LONG(phpqt_qfontmetricsf_new_q_font_q_paint_device(&_0, &_1));
}

PHP_METHOD(Qt_Gui_QFontMetricsF_QFontMetricsF, newQFontMetrics)
{
	zval *arg0_param = NULL, _0;
	zend_long arg0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(arg0)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &arg0_param);
	ZVAL_LONG(&_0, arg0);
	RETURN_LONG(phpqt_qfontmetricsf_new_q_font_metrics(&_0));
}

PHP_METHOD(Qt_Gui_QFontMetricsF_QFontMetricsF, newQFontMetricsF)
{
	zval *arg0_param = NULL, _0;
	zend_long arg0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(arg0)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &arg0_param);
	ZVAL_LONG(&_0, arg0);
	RETURN_LONG(phpqt_qfontmetricsf_new_q_font_metrics_f(&_0));
}

PHP_METHOD(Qt_Gui_QFontMetricsF_QFontMetricsF, swap)
{
	zval *handle_param = NULL, *other_param = NULL, _0, _1;
	zend_long handle, other;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(other)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &other_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, other);
	phpqt_qfontmetricsf_swap(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QFontMetricsF_QFontMetricsF, ascent)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_DOUBLE(phpqt_qfontmetricsf_ascent(&_0));
}

PHP_METHOD(Qt_Gui_QFontMetricsF_QFontMetricsF, capHeight)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_DOUBLE(phpqt_qfontmetricsf_cap_height(&_0));
}

PHP_METHOD(Qt_Gui_QFontMetricsF_QFontMetricsF, descent)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_DOUBLE(phpqt_qfontmetricsf_descent(&_0));
}

PHP_METHOD(Qt_Gui_QFontMetricsF_QFontMetricsF, height)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_DOUBLE(phpqt_qfontmetricsf_height(&_0));
}

PHP_METHOD(Qt_Gui_QFontMetricsF_QFontMetricsF, leading)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_DOUBLE(phpqt_qfontmetricsf_leading(&_0));
}

PHP_METHOD(Qt_Gui_QFontMetricsF_QFontMetricsF, lineSpacing)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_DOUBLE(phpqt_qfontmetricsf_line_spacing(&_0));
}

PHP_METHOD(Qt_Gui_QFontMetricsF_QFontMetricsF, minLeftBearing)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_DOUBLE(phpqt_qfontmetricsf_min_left_bearing(&_0));
}

PHP_METHOD(Qt_Gui_QFontMetricsF_QFontMetricsF, minRightBearing)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_DOUBLE(phpqt_qfontmetricsf_min_right_bearing(&_0));
}

PHP_METHOD(Qt_Gui_QFontMetricsF_QFontMetricsF, maxWidth)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_DOUBLE(phpqt_qfontmetricsf_max_width(&_0));
}

PHP_METHOD(Qt_Gui_QFontMetricsF_QFontMetricsF, xHeight)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_DOUBLE(phpqt_qfontmetricsf_x_height(&_0));
}

PHP_METHOD(Qt_Gui_QFontMetricsF_QFontMetricsF, averageCharWidth)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_DOUBLE(phpqt_qfontmetricsf_average_char_width(&_0));
}

PHP_METHOD(Qt_Gui_QFontMetricsF_QFontMetricsF, inFont)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval arg0;
	zval *handle_param = NULL, *arg0_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&arg0);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(arg0)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &arg0_param);
	zephir_get_strval(&arg0, arg0_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qfontmetricsf_in_font(&_0, &arg0);
	RETURN_MM_BOOL(r == 1);
}

PHP_METHOD(Qt_Gui_QFontMetricsF_QFontMetricsF, inFontUcs4)
{
	zval *handle_param = NULL, *ucs4_param = NULL, _0, _1;
	zend_long handle, ucs4, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(ucs4)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &ucs4_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, ucs4);
	r = phpqt_qfontmetricsf_in_font_ucs4(&_0, &_1);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Gui_QFontMetricsF_QFontMetricsF, leftBearing)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval arg0;
	zval *handle_param = NULL, *arg0_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&arg0);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(arg0)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &arg0_param);
	zephir_get_strval(&arg0, arg0_param);
	ZVAL_LONG(&_0, handle);
	RETURN_MM_DOUBLE(phpqt_qfontmetricsf_left_bearing(&_0, &arg0));
}

PHP_METHOD(Qt_Gui_QFontMetricsF_QFontMetricsF, rightBearing)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval arg0;
	zval *handle_param = NULL, *arg0_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&arg0);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(arg0)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &arg0_param);
	zephir_get_strval(&arg0, arg0_param);
	ZVAL_LONG(&_0, handle);
	RETURN_MM_DOUBLE(phpqt_qfontmetricsf_right_bearing(&_0, &arg0));
}

PHP_METHOD(Qt_Gui_QFontMetricsF_QFontMetricsF, horizontalAdvance)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval string_;
	zval *handle_param = NULL, *string__param = NULL, *length_param = NULL, _0, _1;
	zend_long handle, length;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&string_);
	ZEND_PARSE_PARAMETERS_START(2, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(string_)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(length)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 1, &handle_param, &string__param, &length_param);
	zephir_get_strval(&string_, string__param);
	if (!length_param) {
		length = -1;
	} else {
		}
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, length);
	RETURN_MM_DOUBLE(phpqt_qfontmetricsf_horizontal_advance(&_0, &string_, &_1));
}

PHP_METHOD(Qt_Gui_QFontMetricsF_QFontMetricsF, horizontalAdvanceQChar)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval arg0;
	zval *handle_param = NULL, *arg0_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&arg0);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(arg0)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &arg0_param);
	zephir_get_strval(&arg0, arg0_param);
	ZVAL_LONG(&_0, handle);
	RETURN_MM_DOUBLE(phpqt_qfontmetricsf_horizontal_advance_q_char(&_0, &arg0));
}

PHP_METHOD(Qt_Gui_QFontMetricsF_QFontMetricsF, horizontalAdvanceQStringQTextOption)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval string_;
	zval *handle_param = NULL, *string__param = NULL, *textOption_param = NULL, _0, _1;
	zend_long handle, textOption;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&string_);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(string_)
		Z_PARAM_LONG(textOption)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 3, 0, &handle_param, &string__param, &textOption_param);
	zephir_get_strval(&string_, string__param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, textOption);
	RETURN_MM_DOUBLE(phpqt_qfontmetricsf_horizontal_advance_q_string_q_text_option(&_0, &string_, &_1));
}

PHP_METHOD(Qt_Gui_QFontMetricsF_QFontMetricsF, boundingRect)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval string_;
	zval *handle_param = NULL, *string__param = NULL, result, _0;
	zend_long handle;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&string_);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(string_)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &string__param);
	zephir_get_strval(&string_, string__param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	phpqt_qfontmetricsf_bounding_rect(&result, &_0, &string_);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QFontMetricsF_QFontMetricsF, boundingRectQStringQTextOption)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval text;
	zval *handle_param = NULL, *text_param = NULL, *textOption_param = NULL, result, _0, _1;
	zend_long handle, textOption;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&text);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(text)
		Z_PARAM_LONG(textOption)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 3, 0, &handle_param, &text_param, &textOption_param);
	zephir_get_strval(&text, text_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, textOption);
	phpqt_qfontmetricsf_bounding_rect_q_string_q_text_option(&result, &_0, &text, &_1);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QFontMetricsF_QFontMetricsF, boundingRectQChar)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval arg0;
	zval *handle_param = NULL, *arg0_param = NULL, result, _0;
	zend_long handle;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&arg0);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(arg0)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &arg0_param);
	zephir_get_strval(&arg0, arg0_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	phpqt_qfontmetricsf_bounding_rect_q_char(&result, &_0, &arg0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QFontMetricsF_QFontMetricsF, boundingRectQRectFIntQStringIntInt)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval string_;
	double rX, rY, rWidth, rHeight;
	zval *handle_param = NULL, *rX_param = NULL, *rY_param = NULL, *rWidth_param = NULL, *rHeight_param = NULL, *flags_param = NULL, *string__param = NULL, *tabstops_param = NULL, *tabarray = NULL, tabarray_sub, __$null, result, _0, _1, _2, _3, _4, _5, _6;
	zend_long handle, flags, tabstops;

	ZVAL_UNDEF(&tabarray_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_5);
	ZVAL_UNDEF(&_6);
	ZVAL_UNDEF(&string_);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(7, 9)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(rX)
		Z_PARAM_ZVAL(rY)
		Z_PARAM_ZVAL(rWidth)
		Z_PARAM_ZVAL(rHeight)
		Z_PARAM_LONG(flags)
		Z_PARAM_STR(string_)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(tabstops)
		Z_PARAM_ZVAL_OR_NULL(tabarray)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 7, 2, &handle_param, &rX_param, &rY_param, &rWidth_param, &rHeight_param, &flags_param, &string__param, &tabstops_param, &tabarray);
	rX = zephir_get_doubleval(rX_param);
	rY = zephir_get_doubleval(rY_param);
	rWidth = zephir_get_doubleval(rWidth_param);
	rHeight = zephir_get_doubleval(rHeight_param);
	zephir_get_strval(&string_, string__param);
	if (!tabstops_param) {
		tabstops = 0;
	} else {
		}
	if (!tabarray) {
		tabarray = &tabarray_sub;
		tabarray = &__$null;
	}
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, rX);
	ZVAL_DOUBLE(&_2, rY);
	ZVAL_DOUBLE(&_3, rWidth);
	ZVAL_DOUBLE(&_4, rHeight);
	ZVAL_LONG(&_5, flags);
	ZVAL_LONG(&_6, tabstops);
	phpqt_qfontmetricsf_bounding_rect_q_rect_f_int_q_string_int_int(&result, &_0, &_1, &_2, &_3, &_4, &_5, &string_, &_6, tabarray);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QFontMetricsF_QFontMetricsF, size)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval str;
	zval *handle_param = NULL, *flags_param = NULL, *str_param = NULL, *tabstops_param = NULL, *tabarray = NULL, tabarray_sub, __$null, result, _0, _1, _2;
	zend_long handle, flags, tabstops;

	ZVAL_UNDEF(&tabarray_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&str);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(3, 5)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(flags)
		Z_PARAM_STR(str)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(tabstops)
		Z_PARAM_ZVAL_OR_NULL(tabarray)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 3, 2, &handle_param, &flags_param, &str_param, &tabstops_param, &tabarray);
	zephir_get_strval(&str, str_param);
	if (!tabstops_param) {
		tabstops = 0;
	} else {
		}
	if (!tabarray) {
		tabarray = &tabarray_sub;
		tabarray = &__$null;
	}
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, flags);
	ZVAL_LONG(&_2, tabstops);
	phpqt_qfontmetricsf_size(&result, &_0, &_1, &str, &_2, tabarray);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QFontMetricsF_QFontMetricsF, tightBoundingRect)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval text;
	zval *handle_param = NULL, *text_param = NULL, result, _0;
	zend_long handle;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&text);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(text)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &text_param);
	zephir_get_strval(&text, text_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	phpqt_qfontmetricsf_tight_bounding_rect(&result, &_0, &text);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QFontMetricsF_QFontMetricsF, tightBoundingRectQStringQTextOption)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval text;
	zval *handle_param = NULL, *text_param = NULL, *textOption_param = NULL, result, _0, _1;
	zend_long handle, textOption;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&text);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(text)
		Z_PARAM_LONG(textOption)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 3, 0, &handle_param, &text_param, &textOption_param);
	zephir_get_strval(&text, text_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, textOption);
	phpqt_qfontmetricsf_tight_bounding_rect_q_string_q_text_option(&result, &_0, &text, &_1);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QFontMetricsF_QFontMetricsF, elidedText)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	double width;
	zval text;
	zval *handle_param = NULL, *text_param = NULL, *mode_param = NULL, *width_param = NULL, *flags_param = NULL, result, _0, _1, _2, _3;
	zend_long handle, mode, flags;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&text);
	ZEND_PARSE_PARAMETERS_START(4, 5)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(text)
		Z_PARAM_LONG(mode)
		Z_PARAM_ZVAL(width)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(flags)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 4, 1, &handle_param, &text_param, &mode_param, &width_param, &flags_param);
	zephir_get_strval(&text, text_param);
	width = zephir_get_doubleval(width_param);
	if (!flags_param) {
		flags = 0;
	} else {
		}
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, mode);
	ZVAL_DOUBLE(&_2, width);
	ZVAL_LONG(&_3, flags);
	phpqt_qfontmetricsf_elided_text(&result, &_0, &text, &_1, &_2, &_3);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QFontMetricsF_QFontMetricsF, underlinePos)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_DOUBLE(phpqt_qfontmetricsf_underline_pos(&_0));
}

PHP_METHOD(Qt_Gui_QFontMetricsF_QFontMetricsF, overlinePos)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_DOUBLE(phpqt_qfontmetricsf_overline_pos(&_0));
}

PHP_METHOD(Qt_Gui_QFontMetricsF_QFontMetricsF, strikeOutPos)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_DOUBLE(phpqt_qfontmetricsf_strike_out_pos(&_0));
}

PHP_METHOD(Qt_Gui_QFontMetricsF_QFontMetricsF, lineWidth)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_DOUBLE(phpqt_qfontmetricsf_line_width(&_0));
}

PHP_METHOD(Qt_Gui_QFontMetricsF_QFontMetricsF, fontDpi)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_DOUBLE(phpqt_qfontmetricsf_font_dpi(&_0));
}

