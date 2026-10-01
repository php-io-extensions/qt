
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
#include "src/gui-qtextlayout.h"
#include "kernel/object.h"
#include "kernel/operators.h"
#include "kernel/memory.h"
#include "kernel/string.h"


ZEPHIR_INIT_CLASS(Qt_Gui_QTextLayout_QTextLayout)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Gui\\QTextLayout, QTextLayout, qt, gui_qtextlayout_qtextlayout, qt_gui_qtextlayout_qtextlayout_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Gui_QTextLayout_QTextLayout, new_)
{

	RETURN_LONG(phpqt_qtextlayout_new());
}

PHP_METHOD(Qt_Gui_QTextLayout_QTextLayout, newQString)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *text_param = NULL;
	zval text;

	ZVAL_UNDEF(&text);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_STR(text)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &text_param);
	zephir_get_strval(&text, text_param);
	RETURN_MM_LONG(phpqt_qtextlayout_new_q_string(&text));
}

PHP_METHOD(Qt_Gui_QTextLayout_QTextLayout, newQStringQFontQPaintDevice)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long font, paintdevice;
	zval *text_param = NULL, *font_param = NULL, *paintdevice_param = NULL, _0, _1;
	zval text;

	ZVAL_UNDEF(&text);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 3)
		Z_PARAM_STR(text)
		Z_PARAM_LONG(font)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(paintdevice)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 1, &text_param, &font_param, &paintdevice_param);
	zephir_get_strval(&text, text_param);
	if (!paintdevice_param) {
		paintdevice = 0;
	} else {
		}
	ZVAL_LONG(&_0, font);
	ZVAL_LONG(&_1, paintdevice);
	RETURN_MM_LONG(phpqt_qtextlayout_new_q_string_q_font_q_paint_device(&text, &_0, &_1));
}

PHP_METHOD(Qt_Gui_QTextLayout_QTextLayout, newQTextBlock)
{
	zval *b_param = NULL, _0;
	zend_long b;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(b)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &b_param);
	ZVAL_LONG(&_0, b);
	RETURN_LONG(phpqt_qtextlayout_new_q_text_block(&_0));
}

PHP_METHOD(Qt_Gui_QTextLayout_QTextLayout, setFont)
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
	phpqt_qtextlayout_set_font(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QTextLayout_QTextLayout, font)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qtextlayout_font(&_0));
}

PHP_METHOD(Qt_Gui_QTextLayout_QTextLayout, setRawFont)
{
	zval *handle_param = NULL, *rawFont_param = NULL, _0, _1;
	zend_long handle, rawFont;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(rawFont)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &rawFont_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, rawFont);
	phpqt_qtextlayout_set_raw_font(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QTextLayout_QTextLayout, setText)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval string_;
	zval *handle_param = NULL, *string__param = NULL, _0;
	zend_long handle;

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
	ZVAL_LONG(&_0, handle);
	phpqt_qtextlayout_set_text(&_0, &string_);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_Gui_QTextLayout_QTextLayout, text)
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
	phpqt_qtextlayout_text(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QTextLayout_QTextLayout, setTextOption)
{
	zval *handle_param = NULL, *option_param = NULL, _0, _1;
	zend_long handle, option;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(option)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &option_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, option);
	phpqt_qtextlayout_set_text_option(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QTextLayout_QTextLayout, textOption)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qtextlayout_text_option(&_0));
}

PHP_METHOD(Qt_Gui_QTextLayout_QTextLayout, setPreeditArea)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval text;
	zval *handle_param = NULL, *position_param = NULL, *text_param = NULL, _0, _1;
	zend_long handle, position;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&text);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(position)
		Z_PARAM_STR(text)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 3, 0, &handle_param, &position_param, &text_param);
	zephir_get_strval(&text, text_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, position);
	phpqt_qtextlayout_set_preedit_area(&_0, &_1, &text);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_Gui_QTextLayout_QTextLayout, preeditAreaPosition)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qtextlayout_preedit_area_position(&_0));
}

PHP_METHOD(Qt_Gui_QTextLayout_QTextLayout, preeditAreaText)
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
	phpqt_qtextlayout_preedit_area_text(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QTextLayout_QTextLayout, setFormats)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval overrides;
	zval *handle_param = NULL, *overrides_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&overrides);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ARRAY(overrides)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &overrides_param);
	zephir_get_arrval(&overrides, overrides_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qtextlayout_set_formats(&_0, &overrides);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_Gui_QTextLayout_QTextLayout, formats)
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
	phpqt_qtextlayout_formats(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QTextLayout_QTextLayout, clearFormats)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qtextlayout_clear_formats(&_0);
}

PHP_METHOD(Qt_Gui_QTextLayout_QTextLayout, setCacheEnabled)
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
	phpqt_qtextlayout_set_cache_enabled(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QTextLayout_QTextLayout, cacheEnabled)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qtextlayout_cache_enabled(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Gui_QTextLayout_QTextLayout, setCursorMoveStyle)
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
	phpqt_qtextlayout_set_cursor_move_style(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QTextLayout_QTextLayout, cursorMoveStyle)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qtextlayout_cursor_move_style(&_0));
}

PHP_METHOD(Qt_Gui_QTextLayout_QTextLayout, beginLayout)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qtextlayout_begin_layout(&_0);
}

PHP_METHOD(Qt_Gui_QTextLayout_QTextLayout, endLayout)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qtextlayout_end_layout(&_0);
}

PHP_METHOD(Qt_Gui_QTextLayout_QTextLayout, clearLayout)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qtextlayout_clear_layout(&_0);
}

PHP_METHOD(Qt_Gui_QTextLayout_QTextLayout, createLine)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qtextlayout_create_line(&_0));
}

PHP_METHOD(Qt_Gui_QTextLayout_QTextLayout, lineCount)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qtextlayout_line_count(&_0));
}

PHP_METHOD(Qt_Gui_QTextLayout_QTextLayout, lineAt)
{
	zval *handle_param = NULL, *i_param = NULL, _0, _1;
	zend_long handle, i;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(i)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &i_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, i);
	RETURN_LONG(phpqt_qtextlayout_line_at(&_0, &_1));
}

PHP_METHOD(Qt_Gui_QTextLayout_QTextLayout, lineForTextPosition)
{
	zval *handle_param = NULL, *pos_param = NULL, _0, _1;
	zend_long handle, pos;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(pos)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &pos_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, pos);
	RETURN_LONG(phpqt_qtextlayout_line_for_text_position(&_0, &_1));
}

PHP_METHOD(Qt_Gui_QTextLayout_QTextLayout, isValidCursorPosition)
{
	zval *handle_param = NULL, *pos_param = NULL, _0, _1;
	zend_long handle, pos, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(pos)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &pos_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, pos);
	r = phpqt_qtextlayout_is_valid_cursor_position(&_0, &_1);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Gui_QTextLayout_QTextLayout, nextCursorPosition)
{
	zval *handle_param = NULL, *oldPos_param = NULL, *mode = NULL, mode_sub, __$null, _0, _1;
	zend_long handle, oldPos;

	ZVAL_UNDEF(&mode_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(2, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(oldPos)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(mode)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 1, &handle_param, &oldPos_param, &mode);
	if (!mode) {
		mode = &mode_sub;
		mode = &__$null;
	}
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, oldPos);
	RETURN_LONG(phpqt_qtextlayout_next_cursor_position(&_0, &_1, mode));
}

PHP_METHOD(Qt_Gui_QTextLayout_QTextLayout, previousCursorPosition)
{
	zval *handle_param = NULL, *oldPos_param = NULL, *mode = NULL, mode_sub, __$null, _0, _1;
	zend_long handle, oldPos;

	ZVAL_UNDEF(&mode_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(2, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(oldPos)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(mode)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 1, &handle_param, &oldPos_param, &mode);
	if (!mode) {
		mode = &mode_sub;
		mode = &__$null;
	}
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, oldPos);
	RETURN_LONG(phpqt_qtextlayout_previous_cursor_position(&_0, &_1, mode));
}

PHP_METHOD(Qt_Gui_QTextLayout_QTextLayout, leftCursorPosition)
{
	zval *handle_param = NULL, *oldPos_param = NULL, _0, _1;
	zend_long handle, oldPos;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(oldPos)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &oldPos_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, oldPos);
	RETURN_LONG(phpqt_qtextlayout_left_cursor_position(&_0, &_1));
}

PHP_METHOD(Qt_Gui_QTextLayout_QTextLayout, rightCursorPosition)
{
	zval *handle_param = NULL, *oldPos_param = NULL, _0, _1;
	zend_long handle, oldPos;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(oldPos)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &oldPos_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, oldPos);
	RETURN_LONG(phpqt_qtextlayout_right_cursor_position(&_0, &_1));
}

PHP_METHOD(Qt_Gui_QTextLayout_QTextLayout, draw)
{
	double posX, posY;
	zval *handle_param = NULL, *p_param = NULL, *posX_param = NULL, *posY_param = NULL, *selections = NULL, selections_sub, *clipX = NULL, clipX_sub, *clipY = NULL, clipY_sub, *clipWidth = NULL, clipWidth_sub, *clipHeight = NULL, clipHeight_sub, __$null, _0, _1, _2, _3;
	zend_long handle, p;

	ZVAL_UNDEF(&selections_sub);
	ZVAL_UNDEF(&clipX_sub);
	ZVAL_UNDEF(&clipY_sub);
	ZVAL_UNDEF(&clipWidth_sub);
	ZVAL_UNDEF(&clipHeight_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(4, 9)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(p)
		Z_PARAM_ZVAL(posX)
		Z_PARAM_ZVAL(posY)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(selections)
		Z_PARAM_ZVAL_OR_NULL(clipX)
		Z_PARAM_ZVAL_OR_NULL(clipY)
		Z_PARAM_ZVAL_OR_NULL(clipWidth)
		Z_PARAM_ZVAL_OR_NULL(clipHeight)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 5, &handle_param, &p_param, &posX_param, &posY_param, &selections, &clipX, &clipY, &clipWidth, &clipHeight);
	posX = zephir_get_doubleval(posX_param);
	posY = zephir_get_doubleval(posY_param);
	if (!selections) {
		selections = &selections_sub;
		selections = &__$null;
	}
	if (!clipX) {
		clipX = &clipX_sub;
		clipX = &__$null;
	}
	if (!clipY) {
		clipY = &clipY_sub;
		clipY = &__$null;
	}
	if (!clipWidth) {
		clipWidth = &clipWidth_sub;
		clipWidth = &__$null;
	}
	if (!clipHeight) {
		clipHeight = &clipHeight_sub;
		clipHeight = &__$null;
	}
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, p);
	ZVAL_DOUBLE(&_2, posX);
	ZVAL_DOUBLE(&_3, posY);
	phpqt_qtextlayout_draw(&_0, &_1, &_2, &_3, selections, clipX, clipY, clipWidth, clipHeight);
}

PHP_METHOD(Qt_Gui_QTextLayout_QTextLayout, drawCursor)
{
	double posX, posY;
	zval *handle_param = NULL, *p_param = NULL, *posX_param = NULL, *posY_param = NULL, *cursorPosition_param = NULL, _0, _1, _2, _3, _4;
	zend_long handle, p, cursorPosition;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZEND_PARSE_PARAMETERS_START(5, 5)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(p)
		Z_PARAM_ZVAL(posX)
		Z_PARAM_ZVAL(posY)
		Z_PARAM_LONG(cursorPosition)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(5, 0, &handle_param, &p_param, &posX_param, &posY_param, &cursorPosition_param);
	posX = zephir_get_doubleval(posX_param);
	posY = zephir_get_doubleval(posY_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, p);
	ZVAL_DOUBLE(&_2, posX);
	ZVAL_DOUBLE(&_3, posY);
	ZVAL_LONG(&_4, cursorPosition);
	phpqt_qtextlayout_draw_cursor(&_0, &_1, &_2, &_3, &_4);
}

PHP_METHOD(Qt_Gui_QTextLayout_QTextLayout, drawCursorQPainterQPointFIntInt)
{
	double posX, posY;
	zval *handle_param = NULL, *p_param = NULL, *posX_param = NULL, *posY_param = NULL, *cursorPosition_param = NULL, *width_param = NULL, _0, _1, _2, _3, _4, _5;
	zend_long handle, p, cursorPosition, width;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_5);
	ZEND_PARSE_PARAMETERS_START(6, 6)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(p)
		Z_PARAM_ZVAL(posX)
		Z_PARAM_ZVAL(posY)
		Z_PARAM_LONG(cursorPosition)
		Z_PARAM_LONG(width)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(6, 0, &handle_param, &p_param, &posX_param, &posY_param, &cursorPosition_param, &width_param);
	posX = zephir_get_doubleval(posX_param);
	posY = zephir_get_doubleval(posY_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, p);
	ZVAL_DOUBLE(&_2, posX);
	ZVAL_DOUBLE(&_3, posY);
	ZVAL_LONG(&_4, cursorPosition);
	ZVAL_LONG(&_5, width);
	phpqt_qtextlayout_draw_cursor_q_painter_q_point_f_int_int(&_0, &_1, &_2, &_3, &_4, &_5);
}

PHP_METHOD(Qt_Gui_QTextLayout_QTextLayout, position)
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
	phpqt_qtextlayout_position(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QTextLayout_QTextLayout, setPosition)
{
	double pX, pY;
	zval *handle_param = NULL, *pX_param = NULL, *pY_param = NULL, _0, _1, _2;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(pX)
		Z_PARAM_ZVAL(pY)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &pX_param, &pY_param);
	pX = zephir_get_doubleval(pX_param);
	pY = zephir_get_doubleval(pY_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, pX);
	ZVAL_DOUBLE(&_2, pY);
	phpqt_qtextlayout_set_position(&_0, &_1, &_2);
}

PHP_METHOD(Qt_Gui_QTextLayout_QTextLayout, boundingRect)
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
	phpqt_qtextlayout_bounding_rect(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QTextLayout_QTextLayout, minimumWidth)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_DOUBLE(phpqt_qtextlayout_minimum_width(&_0));
}

PHP_METHOD(Qt_Gui_QTextLayout_QTextLayout, maximumWidth)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_DOUBLE(phpqt_qtextlayout_maximum_width(&_0));
}

PHP_METHOD(Qt_Gui_QTextLayout_QTextLayout, glyphRuns)
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
	phpqt_qtextlayout_glyph_runs(&result, &_0, &_1, &_2, &_3);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QTextLayout_QTextLayout, glyphRunsIntInt)
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
	phpqt_qtextlayout_glyph_runs_int_int(&result, &_0, &_1, &_2);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QTextLayout_QTextLayout, setFlags)
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
	phpqt_qtextlayout_set_flags(&_0, &_1);
}

