
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
#include "src/gui-qrawfont.h"
#include "kernel/object.h"
#include "kernel/operators.h"
#include "kernel/memory.h"
#include "kernel/string.h"


ZEPHIR_INIT_CLASS(Qt_Gui_QRawFont_QRawFont)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Gui\\QRawFont, QRawFont, qt, gui_qrawfont_qrawfont, qt_gui_qrawfont_qrawfont_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Gui_QRawFont_QRawFont, new_)
{

	RETURN_LONG(phpqt_qrawfont_new());
}

PHP_METHOD(Qt_Gui_QRawFont_QRawFont, newQStringQrealQFontHintingPreference)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	double pixelSize;
	zval *fileName_param = NULL, *pixelSize_param = NULL, *hintingPreference = NULL, hintingPreference_sub, __$null, _0;
	zval fileName;

	ZVAL_UNDEF(&fileName);
	ZVAL_UNDEF(&hintingPreference_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(2, 3)
		Z_PARAM_STR(fileName)
		Z_PARAM_ZVAL(pixelSize)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(hintingPreference)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 1, &fileName_param, &pixelSize_param, &hintingPreference);
	zephir_get_strval(&fileName, fileName_param);
	pixelSize = zephir_get_doubleval(pixelSize_param);
	if (!hintingPreference) {
		hintingPreference = &hintingPreference_sub;
		hintingPreference = &__$null;
	}
	ZVAL_DOUBLE(&_0, pixelSize);
	RETURN_MM_LONG(phpqt_qrawfont_new_q_string_qreal_q_font_hinting_preference(&fileName, &_0, hintingPreference));
}

PHP_METHOD(Qt_Gui_QRawFont_QRawFont, newQByteArrayQrealQFontHintingPreference)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	double pixelSize;
	zval *fontData_param = NULL, *pixelSize_param = NULL, *hintingPreference = NULL, hintingPreference_sub, __$null, _0;
	zval fontData;

	ZVAL_UNDEF(&fontData);
	ZVAL_UNDEF(&hintingPreference_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(2, 3)
		Z_PARAM_STR(fontData)
		Z_PARAM_ZVAL(pixelSize)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(hintingPreference)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 1, &fontData_param, &pixelSize_param, &hintingPreference);
	zephir_get_strval(&fontData, fontData_param);
	pixelSize = zephir_get_doubleval(pixelSize_param);
	if (!hintingPreference) {
		hintingPreference = &hintingPreference_sub;
		hintingPreference = &__$null;
	}
	ZVAL_DOUBLE(&_0, pixelSize);
	RETURN_MM_LONG(phpqt_qrawfont_new_q_byte_array_qreal_q_font_hinting_preference(&fontData, &_0, hintingPreference));
}

PHP_METHOD(Qt_Gui_QRawFont_QRawFont, newQRawFont)
{
	zval *other_param = NULL, _0;
	zend_long other;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(other)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &other_param);
	ZVAL_LONG(&_0, other);
	RETURN_LONG(phpqt_qrawfont_new_q_raw_font(&_0));
}

PHP_METHOD(Qt_Gui_QRawFont_QRawFont, swap)
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
	phpqt_qrawfont_swap(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QRawFont_QRawFont, isValid)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qrawfont_is_valid(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Gui_QRawFont_QRawFont, familyName)
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
	phpqt_qrawfont_family_name(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QRawFont_QRawFont, styleName)
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
	phpqt_qrawfont_style_name(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QRawFont_QRawFont, style)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qrawfont_style(&_0));
}

PHP_METHOD(Qt_Gui_QRawFont_QRawFont, weight)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qrawfont_weight(&_0));
}

PHP_METHOD(Qt_Gui_QRawFont_QRawFont, glyphIndexesForString)
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
	phpqt_qrawfont_glyph_indexes_for_string(&result, &_0, &text);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QRawFont_QRawFont, advancesForGlyphIndexes)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval glyphIndexes;
	zval *handle_param = NULL, *glyphIndexes_param = NULL, result, _0;
	zend_long handle;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&glyphIndexes);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ARRAY(glyphIndexes)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &glyphIndexes_param);
	zephir_get_arrval(&glyphIndexes, glyphIndexes_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	phpqt_qrawfont_advances_for_glyph_indexes(&result, &_0, &glyphIndexes);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QRawFont_QRawFont, advancesForGlyphIndexesQListUnsignedIntQRawFontLayoutFlags)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval glyphIndexes;
	zval *handle_param = NULL, *glyphIndexes_param = NULL, *layoutFlags_param = NULL, result, _0, _1;
	zend_long handle, layoutFlags;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&glyphIndexes);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_ARRAY(glyphIndexes)
		Z_PARAM_LONG(layoutFlags)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 3, 0, &handle_param, &glyphIndexes_param, &layoutFlags_param);
	zephir_get_arrval(&glyphIndexes, glyphIndexes_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, layoutFlags);
	phpqt_qrawfont_advances_for_glyph_indexes_q_list_unsigned_int_q_raw_font_layout_flags(&result, &_0, &glyphIndexes, &_1);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QRawFont_QRawFont, glyphIndexesForChars)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, *chars = NULL, chars_sub, *numChars_param = NULL, *glyphIndexes = NULL, glyphIndexes_sub, *numGlyphs = NULL, numGlyphs_sub, result, _0, _1;
	zend_long handle, numChars;

	ZVAL_UNDEF(&chars_sub);
	ZVAL_UNDEF(&glyphIndexes_sub);
	ZVAL_UNDEF(&numGlyphs_sub);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(5, 5)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(chars)
		Z_PARAM_LONG(numChars)
		Z_PARAM_ZVAL(glyphIndexes)
		Z_PARAM_ZVAL(numGlyphs)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 5, 0, &handle_param, &chars, &numChars_param, &glyphIndexes, &numGlyphs);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, numChars);
	phpqt_qrawfont_glyph_indexes_for_chars(&result, &_0, chars, &_1, glyphIndexes, numGlyphs);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QRawFont_QRawFont, advancesForGlyphIndexesQuint32QPointFInt)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, *glyphIndexes = NULL, glyphIndexes_sub, *advances = NULL, advances_sub, *numGlyphs_param = NULL, result, _0, _1;
	zend_long handle, numGlyphs;

	ZVAL_UNDEF(&glyphIndexes_sub);
	ZVAL_UNDEF(&advances_sub);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(glyphIndexes)
		Z_PARAM_ZVAL(advances)
		Z_PARAM_LONG(numGlyphs)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 4, 0, &handle_param, &glyphIndexes, &advances, &numGlyphs_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, numGlyphs);
	phpqt_qrawfont_advances_for_glyph_indexes_quint32_q_point_f_int(&result, &_0, glyphIndexes, advances, &_1);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QRawFont_QRawFont, advancesForGlyphIndexesQuint32QPointFIntQRawFontLayoutFlags)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, *glyphIndexes = NULL, glyphIndexes_sub, *advances = NULL, advances_sub, *numGlyphs_param = NULL, *layoutFlags_param = NULL, result, _0, _1, _2;
	zend_long handle, numGlyphs, layoutFlags;

	ZVAL_UNDEF(&glyphIndexes_sub);
	ZVAL_UNDEF(&advances_sub);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(5, 5)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(glyphIndexes)
		Z_PARAM_ZVAL(advances)
		Z_PARAM_LONG(numGlyphs)
		Z_PARAM_LONG(layoutFlags)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 5, 0, &handle_param, &glyphIndexes, &advances, &numGlyphs_param, &layoutFlags_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, numGlyphs);
	ZVAL_LONG(&_2, layoutFlags);
	phpqt_qrawfont_advances_for_glyph_indexes_quint32_q_point_f_int_q_raw_font_layout_flags(&result, &_0, glyphIndexes, advances, &_1, &_2);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QRawFont_QRawFont, alphaMapForGlyph)
{
	zval *handle_param = NULL, *glyphIndex_param = NULL, *antialiasingType = NULL, antialiasingType_sub, *transform = NULL, transform_sub, __$null, _0, _1;
	zend_long handle, glyphIndex;

	ZVAL_UNDEF(&antialiasingType_sub);
	ZVAL_UNDEF(&transform_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(2, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(glyphIndex)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(antialiasingType)
		Z_PARAM_ZVAL_OR_NULL(transform)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 2, &handle_param, &glyphIndex_param, &antialiasingType, &transform);
	if (!antialiasingType) {
		antialiasingType = &antialiasingType_sub;
		antialiasingType = &__$null;
	}
	if (!transform) {
		transform = &transform_sub;
		transform = &__$null;
	}
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, glyphIndex);
	RETURN_LONG(phpqt_qrawfont_alpha_map_for_glyph(&_0, &_1, antialiasingType, transform));
}

PHP_METHOD(Qt_Gui_QRawFont_QRawFont, pathForGlyph)
{
	zval *handle_param = NULL, *glyphIndex_param = NULL, _0, _1;
	zend_long handle, glyphIndex;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(glyphIndex)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &glyphIndex_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, glyphIndex);
	RETURN_LONG(phpqt_qrawfont_path_for_glyph(&_0, &_1));
}

PHP_METHOD(Qt_Gui_QRawFont_QRawFont, boundingRect)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, *glyphIndex_param = NULL, result, _0, _1;
	zend_long handle, glyphIndex;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(glyphIndex)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &glyphIndex_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, glyphIndex);
	phpqt_qrawfont_bounding_rect(&result, &_0, &_1);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QRawFont_QRawFont, setPixelSize)
{
	double pixelSize;
	zval *handle_param = NULL, *pixelSize_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(pixelSize)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &pixelSize_param);
	pixelSize = zephir_get_doubleval(pixelSize_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, pixelSize);
	phpqt_qrawfont_set_pixel_size(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QRawFont_QRawFont, pixelSize)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_DOUBLE(phpqt_qrawfont_pixel_size(&_0));
}

PHP_METHOD(Qt_Gui_QRawFont_QRawFont, hintingPreference)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qrawfont_hinting_preference(&_0));
}

PHP_METHOD(Qt_Gui_QRawFont_QRawFont, ascent)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_DOUBLE(phpqt_qrawfont_ascent(&_0));
}

PHP_METHOD(Qt_Gui_QRawFont_QRawFont, capHeight)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_DOUBLE(phpqt_qrawfont_cap_height(&_0));
}

PHP_METHOD(Qt_Gui_QRawFont_QRawFont, descent)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_DOUBLE(phpqt_qrawfont_descent(&_0));
}

PHP_METHOD(Qt_Gui_QRawFont_QRawFont, leading)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_DOUBLE(phpqt_qrawfont_leading(&_0));
}

PHP_METHOD(Qt_Gui_QRawFont_QRawFont, xHeight)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_DOUBLE(phpqt_qrawfont_x_height(&_0));
}

PHP_METHOD(Qt_Gui_QRawFont_QRawFont, averageCharWidth)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_DOUBLE(phpqt_qrawfont_average_char_width(&_0));
}

PHP_METHOD(Qt_Gui_QRawFont_QRawFont, maxCharWidth)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_DOUBLE(phpqt_qrawfont_max_char_width(&_0));
}

PHP_METHOD(Qt_Gui_QRawFont_QRawFont, lineThickness)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_DOUBLE(phpqt_qrawfont_line_thickness(&_0));
}

PHP_METHOD(Qt_Gui_QRawFont_QRawFont, underlinePosition)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_DOUBLE(phpqt_qrawfont_underline_position(&_0));
}

PHP_METHOD(Qt_Gui_QRawFont_QRawFont, unitsPerEm)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_DOUBLE(phpqt_qrawfont_units_per_em(&_0));
}

PHP_METHOD(Qt_Gui_QRawFont_QRawFont, loadFromFile)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	double pixelSize;
	zval fileName;
	zval *handle_param = NULL, *fileName_param = NULL, *pixelSize_param = NULL, *hintingPreference_param = NULL, _0, _1, _2;
	zend_long handle, hintingPreference;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&fileName);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(fileName)
		Z_PARAM_ZVAL(pixelSize)
		Z_PARAM_LONG(hintingPreference)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 4, 0, &handle_param, &fileName_param, &pixelSize_param, &hintingPreference_param);
	zephir_get_strval(&fileName, fileName_param);
	pixelSize = zephir_get_doubleval(pixelSize_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, pixelSize);
	ZVAL_LONG(&_2, hintingPreference);
	phpqt_qrawfont_load_from_file(&_0, &fileName, &_1, &_2);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_Gui_QRawFont_QRawFont, loadFromData)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	double pixelSize;
	zval fontData;
	zval *handle_param = NULL, *fontData_param = NULL, *pixelSize_param = NULL, *hintingPreference_param = NULL, _0, _1, _2;
	zend_long handle, hintingPreference;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&fontData);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(fontData)
		Z_PARAM_ZVAL(pixelSize)
		Z_PARAM_LONG(hintingPreference)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 4, 0, &handle_param, &fontData_param, &pixelSize_param, &hintingPreference_param);
	zephir_get_strval(&fontData, fontData_param);
	pixelSize = zephir_get_doubleval(pixelSize_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, pixelSize);
	ZVAL_LONG(&_2, hintingPreference);
	phpqt_qrawfont_load_from_data(&_0, &fontData, &_1, &_2);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_Gui_QRawFont_QRawFont, supportsCharacter)
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
	r = phpqt_qrawfont_supports_character(&_0, &_1);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Gui_QRawFont_QRawFont, supportsCharacterQChar)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval character;
	zval *handle_param = NULL, *character_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&character);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(character)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &character_param);
	zephir_get_strval(&character, character_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qrawfont_supports_character_q_char(&_0, &character);
	RETURN_MM_BOOL(r == 1);
}

PHP_METHOD(Qt_Gui_QRawFont_QRawFont, supportedWritingSystems)
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
	phpqt_qrawfont_supported_writing_systems(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QRawFont_QRawFont, fontTable)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, *tagName = NULL, tagName_sub, result, _0;
	zend_long handle;

	ZVAL_UNDEF(&tagName_sub);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(tagName)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &tagName);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	phpqt_qrawfont_font_table(&result, &_0, tagName);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QRawFont_QRawFont, fontTableQFontTag)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, *tag_param = NULL, result, _0, _1;
	zend_long handle, tag;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(tag)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &tag_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, tag);
	phpqt_qrawfont_font_table_q_font_tag(&result, &_0, &_1);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QRawFont_QRawFont, fromFont)
{
	zval *font_param = NULL, *writingSystem = NULL, writingSystem_sub, __$null, _0;
	zend_long font;

	ZVAL_UNDEF(&writingSystem_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_LONG(font)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(writingSystem)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 1, &font_param, &writingSystem);
	if (!writingSystem) {
		writingSystem = &writingSystem_sub;
		writingSystem = &__$null;
	}
	ZVAL_LONG(&_0, font);
	RETURN_LONG(phpqt_qrawfont_from_font(&_0, writingSystem));
}

