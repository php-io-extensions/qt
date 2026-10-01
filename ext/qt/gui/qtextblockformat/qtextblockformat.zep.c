
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
#include "src/gui-qtextblockformat.h"
#include "kernel/object.h"
#include "kernel/operators.h"
#include "kernel/memory.h"


ZEPHIR_INIT_CLASS(Qt_Gui_QTextBlockFormat_QTextBlockFormat)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Gui\\QTextBlockFormat, QTextBlockFormat, qt, gui_qtextblockformat_qtextblockformat, qt_gui_qtextblockformat_qtextblockformat_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Gui_QTextBlockFormat_QTextBlockFormat, new_)
{

	RETURN_LONG(phpqt_qtextblockformat_new());
}

PHP_METHOD(Qt_Gui_QTextBlockFormat_QTextBlockFormat, isValid)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qtextblockformat_is_valid(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Gui_QTextBlockFormat_QTextBlockFormat, setAlignment)
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
	phpqt_qtextblockformat_set_alignment(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QTextBlockFormat_QTextBlockFormat, alignment)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qtextblockformat_alignment(&_0));
}

PHP_METHOD(Qt_Gui_QTextBlockFormat_QTextBlockFormat, setTopMargin)
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
	phpqt_qtextblockformat_set_top_margin(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QTextBlockFormat_QTextBlockFormat, topMargin)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_DOUBLE(phpqt_qtextblockformat_top_margin(&_0));
}

PHP_METHOD(Qt_Gui_QTextBlockFormat_QTextBlockFormat, setBottomMargin)
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
	phpqt_qtextblockformat_set_bottom_margin(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QTextBlockFormat_QTextBlockFormat, bottomMargin)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_DOUBLE(phpqt_qtextblockformat_bottom_margin(&_0));
}

PHP_METHOD(Qt_Gui_QTextBlockFormat_QTextBlockFormat, setLeftMargin)
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
	phpqt_qtextblockformat_set_left_margin(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QTextBlockFormat_QTextBlockFormat, leftMargin)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_DOUBLE(phpqt_qtextblockformat_left_margin(&_0));
}

PHP_METHOD(Qt_Gui_QTextBlockFormat_QTextBlockFormat, setRightMargin)
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
	phpqt_qtextblockformat_set_right_margin(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QTextBlockFormat_QTextBlockFormat, rightMargin)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_DOUBLE(phpqt_qtextblockformat_right_margin(&_0));
}

PHP_METHOD(Qt_Gui_QTextBlockFormat_QTextBlockFormat, setTextIndent)
{
	double aindent;
	zval *handle_param = NULL, *aindent_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(aindent)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &aindent_param);
	aindent = zephir_get_doubleval(aindent_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, aindent);
	phpqt_qtextblockformat_set_text_indent(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QTextBlockFormat_QTextBlockFormat, textIndent)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_DOUBLE(phpqt_qtextblockformat_text_indent(&_0));
}

PHP_METHOD(Qt_Gui_QTextBlockFormat_QTextBlockFormat, setIndent)
{
	zval *handle_param = NULL, *indent_param = NULL, _0, _1;
	zend_long handle, indent;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(indent)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &indent_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, indent);
	phpqt_qtextblockformat_set_indent(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QTextBlockFormat_QTextBlockFormat, indent)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qtextblockformat_indent(&_0));
}

PHP_METHOD(Qt_Gui_QTextBlockFormat_QTextBlockFormat, setHeadingLevel)
{
	zval *handle_param = NULL, *alevel_param = NULL, _0, _1;
	zend_long handle, alevel;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(alevel)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &alevel_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, alevel);
	phpqt_qtextblockformat_set_heading_level(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QTextBlockFormat_QTextBlockFormat, headingLevel)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qtextblockformat_heading_level(&_0));
}

PHP_METHOD(Qt_Gui_QTextBlockFormat_QTextBlockFormat, setLineHeight)
{
	double height;
	zval *handle_param = NULL, *height_param = NULL, *heightType_param = NULL, _0, _1, _2;
	zend_long handle, heightType;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(height)
		Z_PARAM_LONG(heightType)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &height_param, &heightType_param);
	height = zephir_get_doubleval(height_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, height);
	ZVAL_LONG(&_2, heightType);
	phpqt_qtextblockformat_set_line_height(&_0, &_1, &_2);
}

PHP_METHOD(Qt_Gui_QTextBlockFormat_QTextBlockFormat, lineHeight)
{
	double scriptLineHeight, scaling;
	zval *handle_param = NULL, *scriptLineHeight_param = NULL, *scaling_param = NULL, _0, _1, _2;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(2, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(scriptLineHeight)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL(scaling)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 1, &handle_param, &scriptLineHeight_param, &scaling_param);
	scriptLineHeight = zephir_get_doubleval(scriptLineHeight_param);
	if (!scaling_param) {
		scaling = 1.0;
	} else {
		scaling = zephir_get_doubleval(scaling_param);
	}
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, scriptLineHeight);
	ZVAL_DOUBLE(&_2, scaling);
	RETURN_DOUBLE(phpqt_qtextblockformat_line_height(&_0, &_1, &_2));
}

PHP_METHOD(Qt_Gui_QTextBlockFormat_QTextBlockFormat, lineHeight2)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_DOUBLE(phpqt_qtextblockformat_line_height2(&_0));
}

PHP_METHOD(Qt_Gui_QTextBlockFormat_QTextBlockFormat, lineHeightType)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qtextblockformat_line_height_type(&_0));
}

PHP_METHOD(Qt_Gui_QTextBlockFormat_QTextBlockFormat, setNonBreakableLines)
{
	zend_bool b;
	zval *handle_param = NULL, *b_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_BOOL(b)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &b_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_BOOL(&_1, (b ? 1 : 0));
	phpqt_qtextblockformat_set_non_breakable_lines(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QTextBlockFormat_QTextBlockFormat, nonBreakableLines)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qtextblockformat_non_breakable_lines(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Gui_QTextBlockFormat_QTextBlockFormat, setPageBreakPolicy)
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
	phpqt_qtextblockformat_set_page_break_policy(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QTextBlockFormat_QTextBlockFormat, pageBreakPolicy)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qtextblockformat_page_break_policy(&_0));
}

PHP_METHOD(Qt_Gui_QTextBlockFormat_QTextBlockFormat, setTabPositions)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval tabs;
	zval *handle_param = NULL, *tabs_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&tabs);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ARRAY(tabs)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &tabs_param);
	zephir_get_arrval(&tabs, tabs_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qtextblockformat_set_tab_positions(&_0, &tabs);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_Gui_QTextBlockFormat_QTextBlockFormat, tabPositions)
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
	phpqt_qtextblockformat_tab_positions(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QTextBlockFormat_QTextBlockFormat, setMarker)
{
	zval *handle_param = NULL, *marker_param = NULL, _0, _1;
	zend_long handle, marker;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(marker)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &marker_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, marker);
	phpqt_qtextblockformat_set_marker(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QTextBlockFormat_QTextBlockFormat, marker)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qtextblockformat_marker(&_0));
}

