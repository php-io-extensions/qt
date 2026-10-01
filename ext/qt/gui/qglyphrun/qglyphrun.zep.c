
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
#include "src/gui-qglyphrun.h"
#include "kernel/object.h"
#include "kernel/operators.h"
#include "kernel/memory.h"
#include "kernel/string.h"


ZEPHIR_INIT_CLASS(Qt_Gui_QGlyphRun_QGlyphRun)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Gui\\QGlyphRun, QGlyphRun, qt, gui_qglyphrun_qglyphrun, qt_gui_qglyphrun_qglyphrun_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Gui_QGlyphRun_QGlyphRun, new_)
{

	RETURN_LONG(phpqt_qglyphrun_new());
}

PHP_METHOD(Qt_Gui_QGlyphRun_QGlyphRun, newQGlyphRun)
{
	zval *other_param = NULL, _0;
	zend_long other;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(other)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &other_param);
	ZVAL_LONG(&_0, other);
	RETURN_LONG(phpqt_qglyphrun_new_q_glyph_run(&_0));
}

PHP_METHOD(Qt_Gui_QGlyphRun_QGlyphRun, swap)
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
	phpqt_qglyphrun_swap(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QGlyphRun_QGlyphRun, rawFont)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qglyphrun_raw_font(&_0));
}

PHP_METHOD(Qt_Gui_QGlyphRun_QGlyphRun, setRawFont)
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
	phpqt_qglyphrun_set_raw_font(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QGlyphRun_QGlyphRun, setRawData)
{
	zval *handle_param = NULL, *glyphIndexArray = NULL, glyphIndexArray_sub, *glyphPositionArray = NULL, glyphPositionArray_sub, *size_param = NULL, _0, _1;
	zend_long handle, size;

	ZVAL_UNDEF(&glyphIndexArray_sub);
	ZVAL_UNDEF(&glyphPositionArray_sub);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(glyphIndexArray)
		Z_PARAM_ZVAL(glyphPositionArray)
		Z_PARAM_LONG(size)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 0, &handle_param, &glyphIndexArray, &glyphPositionArray, &size_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, size);
	phpqt_qglyphrun_set_raw_data(&_0, glyphIndexArray, glyphPositionArray, &_1);
}

PHP_METHOD(Qt_Gui_QGlyphRun_QGlyphRun, glyphIndexes)
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
	phpqt_qglyphrun_glyph_indexes(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QGlyphRun_QGlyphRun, setGlyphIndexes)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval glyphIndexes;
	zval *handle_param = NULL, *glyphIndexes_param = NULL, _0;
	zend_long handle;

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
	ZVAL_LONG(&_0, handle);
	phpqt_qglyphrun_set_glyph_indexes(&_0, &glyphIndexes);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_Gui_QGlyphRun_QGlyphRun, positions)
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
	phpqt_qglyphrun_positions(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QGlyphRun_QGlyphRun, setPositions)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval positions;
	zval *handle_param = NULL, *positions_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&positions);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ARRAY(positions)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &positions_param);
	zephir_get_arrval(&positions, positions_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qglyphrun_set_positions(&_0, &positions);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_Gui_QGlyphRun_QGlyphRun, clear)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qglyphrun_clear(&_0);
}

PHP_METHOD(Qt_Gui_QGlyphRun_QGlyphRun, setOverline)
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
	phpqt_qglyphrun_set_overline(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QGlyphRun_QGlyphRun, overline)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qglyphrun_overline(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Gui_QGlyphRun_QGlyphRun, setUnderline)
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
	phpqt_qglyphrun_set_underline(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QGlyphRun_QGlyphRun, underline)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qglyphrun_underline(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Gui_QGlyphRun_QGlyphRun, setStrikeOut)
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
	phpqt_qglyphrun_set_strike_out(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QGlyphRun_QGlyphRun, strikeOut)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qglyphrun_strike_out(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Gui_QGlyphRun_QGlyphRun, setRightToLeft)
{
	zend_bool on;
	zval *handle_param = NULL, *on_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_BOOL(on)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &on_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_BOOL(&_1, (on ? 1 : 0));
	phpqt_qglyphrun_set_right_to_left(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QGlyphRun_QGlyphRun, isRightToLeft)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qglyphrun_is_right_to_left(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Gui_QGlyphRun_QGlyphRun, setFlag)
{
	zend_bool enabled;
	zval *handle_param = NULL, *flag_param = NULL, *enabled_param = NULL, _0, _1, _2;
	zend_long handle, flag;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(2, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(flag)
		Z_PARAM_OPTIONAL
		Z_PARAM_BOOL(enabled)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 1, &handle_param, &flag_param, &enabled_param);
	if (!enabled_param) {
		enabled = 1;
	} else {
		}
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, flag);
	ZVAL_BOOL(&_2, (enabled ? 1 : 0));
	phpqt_qglyphrun_set_flag(&_0, &_1, &_2);
}

PHP_METHOD(Qt_Gui_QGlyphRun_QGlyphRun, setFlags)
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
	phpqt_qglyphrun_set_flags(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QGlyphRun_QGlyphRun, flags)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qglyphrun_flags(&_0));
}

PHP_METHOD(Qt_Gui_QGlyphRun_QGlyphRun, setBoundingRect)
{
	double boundingRectX, boundingRectY, boundingRectWidth, boundingRectHeight;
	zval *handle_param = NULL, *boundingRectX_param = NULL, *boundingRectY_param = NULL, *boundingRectWidth_param = NULL, *boundingRectHeight_param = NULL, _0, _1, _2, _3, _4;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZEND_PARSE_PARAMETERS_START(5, 5)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(boundingRectX)
		Z_PARAM_ZVAL(boundingRectY)
		Z_PARAM_ZVAL(boundingRectWidth)
		Z_PARAM_ZVAL(boundingRectHeight)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(5, 0, &handle_param, &boundingRectX_param, &boundingRectY_param, &boundingRectWidth_param, &boundingRectHeight_param);
	boundingRectX = zephir_get_doubleval(boundingRectX_param);
	boundingRectY = zephir_get_doubleval(boundingRectY_param);
	boundingRectWidth = zephir_get_doubleval(boundingRectWidth_param);
	boundingRectHeight = zephir_get_doubleval(boundingRectHeight_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, boundingRectX);
	ZVAL_DOUBLE(&_2, boundingRectY);
	ZVAL_DOUBLE(&_3, boundingRectWidth);
	ZVAL_DOUBLE(&_4, boundingRectHeight);
	phpqt_qglyphrun_set_bounding_rect(&_0, &_1, &_2, &_3, &_4);
}

PHP_METHOD(Qt_Gui_QGlyphRun_QGlyphRun, boundingRect)
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
	phpqt_qglyphrun_bounding_rect(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QGlyphRun_QGlyphRun, setSourceString)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval sourceString;
	zval *handle_param = NULL, *sourceString_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&sourceString);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(sourceString)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &sourceString_param);
	zephir_get_strval(&sourceString, sourceString_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qglyphrun_set_source_string(&_0, &sourceString);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_Gui_QGlyphRun_QGlyphRun, sourceString)
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
	phpqt_qglyphrun_source_string(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QGlyphRun_QGlyphRun, isEmpty)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qglyphrun_is_empty(&_0);
	RETURN_BOOL(r == 1);
}

