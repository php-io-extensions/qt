
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
#include "src/gui-qtextcharformat.h"
#include "kernel/object.h"
#include "kernel/operators.h"
#include "kernel/memory.h"
#include "kernel/string.h"


ZEPHIR_INIT_CLASS(Qt_Gui_QTextCharFormat_QTextCharFormat)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Gui\\QTextCharFormat, QTextCharFormat, qt, gui_qtextcharformat_qtextcharformat, qt_gui_qtextcharformat_qtextcharformat_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Gui_QTextCharFormat_QTextCharFormat, new_)
{

	RETURN_LONG(phpqt_qtextcharformat_new());
}

PHP_METHOD(Qt_Gui_QTextCharFormat_QTextCharFormat, isValid)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qtextcharformat_is_valid(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Gui_QTextCharFormat_QTextCharFormat, setFont)
{
	zval *handle_param = NULL, *font_param = NULL, *behavior = NULL, behavior_sub, __$null, _0, _1;
	zend_long handle, font;

	ZVAL_UNDEF(&behavior_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(2, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(font)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(behavior)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 1, &handle_param, &font_param, &behavior);
	if (!behavior) {
		behavior = &behavior_sub;
		behavior = &__$null;
	}
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, font);
	phpqt_qtextcharformat_set_font(&_0, &_1, behavior);
}

PHP_METHOD(Qt_Gui_QTextCharFormat_QTextCharFormat, font)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qtextcharformat_font(&_0));
}

PHP_METHOD(Qt_Gui_QTextCharFormat_QTextCharFormat, setFontFamilies)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval families;
	zval *handle_param = NULL, *families_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&families);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ARRAY(families)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &families_param);
	zephir_get_arrval(&families, families_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qtextcharformat_set_font_families(&_0, &families);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_Gui_QTextCharFormat_QTextCharFormat, fontFamilies)
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
	phpqt_qtextcharformat_font_families(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QTextCharFormat_QTextCharFormat, setFontStyleName)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval styleName;
	zval *handle_param = NULL, *styleName_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&styleName);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(styleName)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &styleName_param);
	zephir_get_strval(&styleName, styleName_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qtextcharformat_set_font_style_name(&_0, &styleName);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_Gui_QTextCharFormat_QTextCharFormat, fontStyleName)
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
	phpqt_qtextcharformat_font_style_name(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QTextCharFormat_QTextCharFormat, setFontPointSize)
{
	double size;
	zval *handle_param = NULL, *size_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(size)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &size_param);
	size = zephir_get_doubleval(size_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, size);
	phpqt_qtextcharformat_set_font_point_size(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QTextCharFormat_QTextCharFormat, fontPointSize)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_DOUBLE(phpqt_qtextcharformat_font_point_size(&_0));
}

PHP_METHOD(Qt_Gui_QTextCharFormat_QTextCharFormat, setFontWeight)
{
	zval *handle_param = NULL, *weight_param = NULL, _0, _1;
	zend_long handle, weight;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(weight)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &weight_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, weight);
	phpqt_qtextcharformat_set_font_weight(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QTextCharFormat_QTextCharFormat, fontWeight)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qtextcharformat_font_weight(&_0));
}

PHP_METHOD(Qt_Gui_QTextCharFormat_QTextCharFormat, setFontItalic)
{
	zend_bool italic;
	zval *handle_param = NULL, *italic_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_BOOL(italic)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &italic_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_BOOL(&_1, (italic ? 1 : 0));
	phpqt_qtextcharformat_set_font_italic(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QTextCharFormat_QTextCharFormat, fontItalic)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qtextcharformat_font_italic(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Gui_QTextCharFormat_QTextCharFormat, setFontCapitalization)
{
	zval *handle_param = NULL, *capitalization_param = NULL, _0, _1;
	zend_long handle, capitalization;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(capitalization)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &capitalization_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, capitalization);
	phpqt_qtextcharformat_set_font_capitalization(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QTextCharFormat_QTextCharFormat, fontCapitalization)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qtextcharformat_font_capitalization(&_0));
}

PHP_METHOD(Qt_Gui_QTextCharFormat_QTextCharFormat, setFontLetterSpacingType)
{
	zval *handle_param = NULL, *letterSpacingType_param = NULL, _0, _1;
	zend_long handle, letterSpacingType;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(letterSpacingType)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &letterSpacingType_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, letterSpacingType);
	phpqt_qtextcharformat_set_font_letter_spacing_type(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QTextCharFormat_QTextCharFormat, fontLetterSpacingType)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qtextcharformat_font_letter_spacing_type(&_0));
}

PHP_METHOD(Qt_Gui_QTextCharFormat_QTextCharFormat, setFontLetterSpacing)
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
	phpqt_qtextcharformat_set_font_letter_spacing(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QTextCharFormat_QTextCharFormat, fontLetterSpacing)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_DOUBLE(phpqt_qtextcharformat_font_letter_spacing(&_0));
}

PHP_METHOD(Qt_Gui_QTextCharFormat_QTextCharFormat, setFontWordSpacing)
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
	phpqt_qtextcharformat_set_font_word_spacing(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QTextCharFormat_QTextCharFormat, fontWordSpacing)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_DOUBLE(phpqt_qtextcharformat_font_word_spacing(&_0));
}

PHP_METHOD(Qt_Gui_QTextCharFormat_QTextCharFormat, setFontUnderline)
{
	zend_bool underline;
	zval *handle_param = NULL, *underline_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_BOOL(underline)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &underline_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_BOOL(&_1, (underline ? 1 : 0));
	phpqt_qtextcharformat_set_font_underline(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QTextCharFormat_QTextCharFormat, fontUnderline)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qtextcharformat_font_underline(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Gui_QTextCharFormat_QTextCharFormat, setFontOverline)
{
	zend_bool overline;
	zval *handle_param = NULL, *overline_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_BOOL(overline)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &overline_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_BOOL(&_1, (overline ? 1 : 0));
	phpqt_qtextcharformat_set_font_overline(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QTextCharFormat_QTextCharFormat, fontOverline)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qtextcharformat_font_overline(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Gui_QTextCharFormat_QTextCharFormat, setFontStrikeOut)
{
	zend_bool strikeOut;
	zval *handle_param = NULL, *strikeOut_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_BOOL(strikeOut)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &strikeOut_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_BOOL(&_1, (strikeOut ? 1 : 0));
	phpqt_qtextcharformat_set_font_strike_out(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QTextCharFormat_QTextCharFormat, fontStrikeOut)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qtextcharformat_font_strike_out(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Gui_QTextCharFormat_QTextCharFormat, setUnderlineColor)
{
	zval *handle_param = NULL, *color_param = NULL, _0, _1;
	zend_long handle, color;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(color)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &color_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, color);
	phpqt_qtextcharformat_set_underline_color(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QTextCharFormat_QTextCharFormat, underlineColor)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qtextcharformat_underline_color(&_0));
}

PHP_METHOD(Qt_Gui_QTextCharFormat_QTextCharFormat, setFontFixedPitch)
{
	zend_bool fixedPitch;
	zval *handle_param = NULL, *fixedPitch_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_BOOL(fixedPitch)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &fixedPitch_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_BOOL(&_1, (fixedPitch ? 1 : 0));
	phpqt_qtextcharformat_set_font_fixed_pitch(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QTextCharFormat_QTextCharFormat, fontFixedPitch)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qtextcharformat_font_fixed_pitch(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Gui_QTextCharFormat_QTextCharFormat, setFontStretch)
{
	zval *handle_param = NULL, *factor_param = NULL, _0, _1;
	zend_long handle, factor;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(factor)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &factor_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, factor);
	phpqt_qtextcharformat_set_font_stretch(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QTextCharFormat_QTextCharFormat, fontStretch)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qtextcharformat_font_stretch(&_0));
}

PHP_METHOD(Qt_Gui_QTextCharFormat_QTextCharFormat, setFontStyleHint)
{
	zval *handle_param = NULL, *hint_param = NULL, *strategy = NULL, strategy_sub, __$null, _0, _1;
	zend_long handle, hint;

	ZVAL_UNDEF(&strategy_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(2, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(hint)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(strategy)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 1, &handle_param, &hint_param, &strategy);
	if (!strategy) {
		strategy = &strategy_sub;
		strategy = &__$null;
	}
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, hint);
	phpqt_qtextcharformat_set_font_style_hint(&_0, &_1, strategy);
}

PHP_METHOD(Qt_Gui_QTextCharFormat_QTextCharFormat, setFontStyleStrategy)
{
	zval *handle_param = NULL, *strategy_param = NULL, _0, _1;
	zend_long handle, strategy;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(strategy)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &strategy_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, strategy);
	phpqt_qtextcharformat_set_font_style_strategy(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QTextCharFormat_QTextCharFormat, fontStyleHint)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qtextcharformat_font_style_hint(&_0));
}

PHP_METHOD(Qt_Gui_QTextCharFormat_QTextCharFormat, fontStyleStrategy)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qtextcharformat_font_style_strategy(&_0));
}

PHP_METHOD(Qt_Gui_QTextCharFormat_QTextCharFormat, setFontHintingPreference)
{
	zval *handle_param = NULL, *hintingPreference_param = NULL, _0, _1;
	zend_long handle, hintingPreference;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(hintingPreference)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &hintingPreference_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, hintingPreference);
	phpqt_qtextcharformat_set_font_hinting_preference(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QTextCharFormat_QTextCharFormat, fontHintingPreference)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qtextcharformat_font_hinting_preference(&_0));
}

PHP_METHOD(Qt_Gui_QTextCharFormat_QTextCharFormat, setFontKerning)
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
	phpqt_qtextcharformat_set_font_kerning(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QTextCharFormat_QTextCharFormat, fontKerning)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qtextcharformat_font_kerning(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Gui_QTextCharFormat_QTextCharFormat, setUnderlineStyle)
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
	phpqt_qtextcharformat_set_underline_style(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QTextCharFormat_QTextCharFormat, underlineStyle)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qtextcharformat_underline_style(&_0));
}

PHP_METHOD(Qt_Gui_QTextCharFormat_QTextCharFormat, setVerticalAlignment)
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
	phpqt_qtextcharformat_set_vertical_alignment(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QTextCharFormat_QTextCharFormat, verticalAlignment)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qtextcharformat_vertical_alignment(&_0));
}

PHP_METHOD(Qt_Gui_QTextCharFormat_QTextCharFormat, setTextOutline)
{
	zval *handle_param = NULL, *pen_param = NULL, _0, _1;
	zend_long handle, pen;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(pen)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &pen_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, pen);
	phpqt_qtextcharformat_set_text_outline(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QTextCharFormat_QTextCharFormat, textOutline)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qtextcharformat_text_outline(&_0));
}

PHP_METHOD(Qt_Gui_QTextCharFormat_QTextCharFormat, setToolTip)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval tip;
	zval *handle_param = NULL, *tip_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&tip);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(tip)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &tip_param);
	zephir_get_strval(&tip, tip_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qtextcharformat_set_tool_tip(&_0, &tip);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_Gui_QTextCharFormat_QTextCharFormat, toolTip)
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
	phpqt_qtextcharformat_tool_tip(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QTextCharFormat_QTextCharFormat, setSuperScriptBaseline)
{
	double baseline;
	zval *handle_param = NULL, *baseline_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(baseline)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &baseline_param);
	baseline = zephir_get_doubleval(baseline_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, baseline);
	phpqt_qtextcharformat_set_super_script_baseline(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QTextCharFormat_QTextCharFormat, superScriptBaseline)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_DOUBLE(phpqt_qtextcharformat_super_script_baseline(&_0));
}

PHP_METHOD(Qt_Gui_QTextCharFormat_QTextCharFormat, setSubScriptBaseline)
{
	double baseline;
	zval *handle_param = NULL, *baseline_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(baseline)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &baseline_param);
	baseline = zephir_get_doubleval(baseline_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, baseline);
	phpqt_qtextcharformat_set_sub_script_baseline(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QTextCharFormat_QTextCharFormat, subScriptBaseline)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_DOUBLE(phpqt_qtextcharformat_sub_script_baseline(&_0));
}

PHP_METHOD(Qt_Gui_QTextCharFormat_QTextCharFormat, setBaselineOffset)
{
	double baseline;
	zval *handle_param = NULL, *baseline_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(baseline)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &baseline_param);
	baseline = zephir_get_doubleval(baseline_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, baseline);
	phpqt_qtextcharformat_set_baseline_offset(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QTextCharFormat_QTextCharFormat, baselineOffset)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_DOUBLE(phpqt_qtextcharformat_baseline_offset(&_0));
}

PHP_METHOD(Qt_Gui_QTextCharFormat_QTextCharFormat, setAnchor)
{
	zend_bool anchor;
	zval *handle_param = NULL, *anchor_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_BOOL(anchor)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &anchor_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_BOOL(&_1, (anchor ? 1 : 0));
	phpqt_qtextcharformat_set_anchor(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QTextCharFormat_QTextCharFormat, isAnchor)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qtextcharformat_is_anchor(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Gui_QTextCharFormat_QTextCharFormat, setAnchorHref)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval value;
	zval *handle_param = NULL, *value_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&value);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(value)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &value_param);
	zephir_get_strval(&value, value_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qtextcharformat_set_anchor_href(&_0, &value);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_Gui_QTextCharFormat_QTextCharFormat, anchorHref)
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
	phpqt_qtextcharformat_anchor_href(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QTextCharFormat_QTextCharFormat, setAnchorNames)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval names;
	zval *handle_param = NULL, *names_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&names);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ARRAY(names)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &names_param);
	zephir_get_arrval(&names, names_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qtextcharformat_set_anchor_names(&_0, &names);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_Gui_QTextCharFormat_QTextCharFormat, anchorNames)
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
	phpqt_qtextcharformat_anchor_names(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QTextCharFormat_QTextCharFormat, setTableCellRowSpan)
{
	zval *handle_param = NULL, *tableCellRowSpan_param = NULL, _0, _1;
	zend_long handle, tableCellRowSpan;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(tableCellRowSpan)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &tableCellRowSpan_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, tableCellRowSpan);
	phpqt_qtextcharformat_set_table_cell_row_span(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QTextCharFormat_QTextCharFormat, tableCellRowSpan)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qtextcharformat_table_cell_row_span(&_0));
}

PHP_METHOD(Qt_Gui_QTextCharFormat_QTextCharFormat, setTableCellColumnSpan)
{
	zval *handle_param = NULL, *tableCellColumnSpan_param = NULL, _0, _1;
	zend_long handle, tableCellColumnSpan;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(tableCellColumnSpan)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &tableCellColumnSpan_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, tableCellColumnSpan);
	phpqt_qtextcharformat_set_table_cell_column_span(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QTextCharFormat_QTextCharFormat, tableCellColumnSpan)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qtextcharformat_table_cell_column_span(&_0));
}

