
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
#include "src/gui-qsyntaxhighlighter.h"
#include "kernel/object.h"
#include "kernel/string.h"
#include "kernel/memory.h"
#include "kernel/operators.h"


ZEPHIR_INIT_CLASS(Qt_Gui_QSyntaxHighlighter_QSyntaxHighlighter)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Gui\\QSyntaxHighlighter, QSyntaxHighlighter, qt, gui_qsyntaxhighlighter_qsyntaxhighlighter, qt_gui_qsyntaxhighlighter_qsyntaxhighlighter_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Gui_QSyntaxHighlighter_QSyntaxHighlighter, staticMetaObject)
{

	RETURN_LONG(phpqt_qsyntaxhighlighter_static_meta_object());
}

PHP_METHOD(Qt_Gui_QSyntaxHighlighter_QSyntaxHighlighter, tr)
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
	phpqt_qsyntaxhighlighter_tr(&result, s, c, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QSyntaxHighlighter_QSyntaxHighlighter, new_)
{
	zval *parent__param = NULL, _0;
	zend_long parent_;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(parent_)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &parent__param);
	ZVAL_LONG(&_0, parent_);
	RETURN_LONG(phpqt_qsyntaxhighlighter_new(&_0));
}

PHP_METHOD(Qt_Gui_QSyntaxHighlighter_QSyntaxHighlighter, newQTextDocument)
{
	zval *parent__param = NULL, _0;
	zend_long parent_;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(parent_)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &parent__param);
	ZVAL_LONG(&_0, parent_);
	RETURN_LONG(phpqt_qsyntaxhighlighter_new_q_text_document(&_0));
}

PHP_METHOD(Qt_Gui_QSyntaxHighlighter_QSyntaxHighlighter, setDocument)
{
	zval *handle_param = NULL, *doc_param = NULL, _0, _1;
	zend_long handle, doc;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(doc)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &doc_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, doc);
	phpqt_qsyntaxhighlighter_set_document(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QSyntaxHighlighter_QSyntaxHighlighter, document)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qsyntaxhighlighter_document(&_0));
}

PHP_METHOD(Qt_Gui_QSyntaxHighlighter_QSyntaxHighlighter, rehighlight)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qsyntaxhighlighter_rehighlight(&_0);
}

PHP_METHOD(Qt_Gui_QSyntaxHighlighter_QSyntaxHighlighter, rehighlightBlock)
{
	zval *handle_param = NULL, *block_param = NULL, _0, _1;
	zend_long handle, block;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(block)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &block_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, block);
	phpqt_qsyntaxhighlighter_rehighlight_block(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QSyntaxHighlighter_QSyntaxHighlighter, highlightBlock)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval text;
	zval *handle_param = NULL, *text_param = NULL, _0;
	zend_long handle;

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
	ZVAL_LONG(&_0, handle);
	phpqt_qsyntaxhighlighter_highlight_block(&_0, &text);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_Gui_QSyntaxHighlighter_QSyntaxHighlighter, setFormat)
{
	zval *handle_param = NULL, *start_param = NULL, *count_param = NULL, *format_param = NULL, _0, _1, _2, _3;
	zend_long handle, start, count, format;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(start)
		Z_PARAM_LONG(count)
		Z_PARAM_LONG(format)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 0, &handle_param, &start_param, &count_param, &format_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, start);
	ZVAL_LONG(&_2, count);
	ZVAL_LONG(&_3, format);
	phpqt_qsyntaxhighlighter_set_format(&_0, &_1, &_2, &_3);
}

PHP_METHOD(Qt_Gui_QSyntaxHighlighter_QSyntaxHighlighter, setFormatIntIntQColor)
{
	zval *handle_param = NULL, *start_param = NULL, *count_param = NULL, *color_param = NULL, _0, _1, _2, _3;
	zend_long handle, start, count, color;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(start)
		Z_PARAM_LONG(count)
		Z_PARAM_LONG(color)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 0, &handle_param, &start_param, &count_param, &color_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, start);
	ZVAL_LONG(&_2, count);
	ZVAL_LONG(&_3, color);
	phpqt_qsyntaxhighlighter_set_format_int_int_q_color(&_0, &_1, &_2, &_3);
}

PHP_METHOD(Qt_Gui_QSyntaxHighlighter_QSyntaxHighlighter, setFormatIntIntQFont)
{
	zval *handle_param = NULL, *start_param = NULL, *count_param = NULL, *font_param = NULL, _0, _1, _2, _3;
	zend_long handle, start, count, font;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(start)
		Z_PARAM_LONG(count)
		Z_PARAM_LONG(font)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 0, &handle_param, &start_param, &count_param, &font_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, start);
	ZVAL_LONG(&_2, count);
	ZVAL_LONG(&_3, font);
	phpqt_qsyntaxhighlighter_set_format_int_int_q_font(&_0, &_1, &_2, &_3);
}

PHP_METHOD(Qt_Gui_QSyntaxHighlighter_QSyntaxHighlighter, format)
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
	RETURN_LONG(phpqt_qsyntaxhighlighter_format(&_0, &_1));
}

PHP_METHOD(Qt_Gui_QSyntaxHighlighter_QSyntaxHighlighter, previousBlockState)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qsyntaxhighlighter_previous_block_state(&_0));
}

PHP_METHOD(Qt_Gui_QSyntaxHighlighter_QSyntaxHighlighter, currentBlockState)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qsyntaxhighlighter_current_block_state(&_0));
}

PHP_METHOD(Qt_Gui_QSyntaxHighlighter_QSyntaxHighlighter, setCurrentBlockState)
{
	zval *handle_param = NULL, *newState_param = NULL, _0, _1;
	zend_long handle, newState;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(newState)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &newState_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, newState);
	phpqt_qsyntaxhighlighter_set_current_block_state(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QSyntaxHighlighter_QSyntaxHighlighter, setCurrentBlockUserData)
{
	zval *handle_param = NULL, *data_param = NULL, _0, _1;
	zend_long handle, data;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(data)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &data_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, data);
	phpqt_qsyntaxhighlighter_set_current_block_user_data(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QSyntaxHighlighter_QSyntaxHighlighter, currentBlockUserData)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qsyntaxhighlighter_current_block_user_data(&_0));
}

PHP_METHOD(Qt_Gui_QSyntaxHighlighter_QSyntaxHighlighter, currentBlock)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qsyntaxhighlighter_current_block(&_0));
}

