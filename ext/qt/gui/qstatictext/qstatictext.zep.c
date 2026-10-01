
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
#include "src/gui-qstatictext.h"
#include "kernel/object.h"
#include "kernel/operators.h"
#include "kernel/memory.h"
#include "kernel/string.h"


ZEPHIR_INIT_CLASS(Qt_Gui_QStaticText_QStaticText)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Gui\\QStaticText, QStaticText, qt, gui_qstatictext_qstatictext, qt_gui_qstatictext_qstatictext_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Gui_QStaticText_QStaticText, new_)
{

	RETURN_LONG(phpqt_qstatictext_new());
}

PHP_METHOD(Qt_Gui_QStaticText_QStaticText, newQString)
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
	RETURN_MM_LONG(phpqt_qstatictext_new_q_string(&text));
}

PHP_METHOD(Qt_Gui_QStaticText_QStaticText, newQStaticText)
{
	zval *other_param = NULL, _0;
	zend_long other;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(other)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &other_param);
	ZVAL_LONG(&_0, other);
	RETURN_LONG(phpqt_qstatictext_new_q_static_text(&_0));
}

PHP_METHOD(Qt_Gui_QStaticText_QStaticText, swap)
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
	phpqt_qstatictext_swap(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QStaticText_QStaticText, setText)
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
	phpqt_qstatictext_set_text(&_0, &text);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_Gui_QStaticText_QStaticText, text)
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
	phpqt_qstatictext_text(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QStaticText_QStaticText, setTextFormat)
{
	zval *handle_param = NULL, *textFormat_param = NULL, _0, _1;
	zend_long handle, textFormat;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(textFormat)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &textFormat_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, textFormat);
	phpqt_qstatictext_set_text_format(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QStaticText_QStaticText, textFormat)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qstatictext_text_format(&_0));
}

PHP_METHOD(Qt_Gui_QStaticText_QStaticText, setTextWidth)
{
	double textWidth;
	zval *handle_param = NULL, *textWidth_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(textWidth)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &textWidth_param);
	textWidth = zephir_get_doubleval(textWidth_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, textWidth);
	phpqt_qstatictext_set_text_width(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QStaticText_QStaticText, textWidth)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_DOUBLE(phpqt_qstatictext_text_width(&_0));
}

PHP_METHOD(Qt_Gui_QStaticText_QStaticText, setTextOption)
{
	zval *handle_param = NULL, *textOption_param = NULL, _0, _1;
	zend_long handle, textOption;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(textOption)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &textOption_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, textOption);
	phpqt_qstatictext_set_text_option(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QStaticText_QStaticText, textOption)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qstatictext_text_option(&_0));
}

PHP_METHOD(Qt_Gui_QStaticText_QStaticText, size)
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
	phpqt_qstatictext_size(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QStaticText_QStaticText, prepare)
{
	zval *handle_param = NULL, *matrix = NULL, matrix_sub, *font = NULL, font_sub, __$null, _0;
	zend_long handle;

	ZVAL_UNDEF(&matrix_sub);
	ZVAL_UNDEF(&font_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(1, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(matrix)
		Z_PARAM_ZVAL_OR_NULL(font)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 2, &handle_param, &matrix, &font);
	if (!matrix) {
		matrix = &matrix_sub;
		matrix = &__$null;
	}
	if (!font) {
		font = &font_sub;
		font = &__$null;
	}
	ZVAL_LONG(&_0, handle);
	phpqt_qstatictext_prepare(&_0, matrix, font);
}

PHP_METHOD(Qt_Gui_QStaticText_QStaticText, setPerformanceHint)
{
	zval *handle_param = NULL, *performanceHint_param = NULL, _0, _1;
	zend_long handle, performanceHint;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(performanceHint)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &performanceHint_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, performanceHint);
	phpqt_qstatictext_set_performance_hint(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QStaticText_QStaticText, performanceHint)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qstatictext_performance_hint(&_0));
}

