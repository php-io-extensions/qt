
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
#include "src/widgets-qplaintextdocumentlayout.h"
#include "kernel/object.h"
#include "kernel/string.h"
#include "kernel/memory.h"
#include "kernel/operators.h"


ZEPHIR_INIT_CLASS(Qt_Widgets_QPlainTextDocumentLayout_QPlainTextDocumentLayout)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Widgets\\QPlainTextDocumentLayout, QPlainTextDocumentLayout, qt, widgets_qplaintextdocumentlayout_qplaintextdocumentlayout, qt_widgets_qplaintextdocumentlayout_qplaintextdocumentlayout_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Widgets_QPlainTextDocumentLayout_QPlainTextDocumentLayout, staticMetaObject)
{

	RETURN_LONG(phpqt_qplaintextdocumentlayout_static_meta_object());
}

PHP_METHOD(Qt_Widgets_QPlainTextDocumentLayout_QPlainTextDocumentLayout, tr)
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
	phpqt_qplaintextdocumentlayout_tr(&result, s, c, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Widgets_QPlainTextDocumentLayout_QPlainTextDocumentLayout, new_)
{
	zval *document_param = NULL, _0;
	zend_long document;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(document)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &document_param);
	ZVAL_LONG(&_0, document);
	RETURN_LONG(phpqt_qplaintextdocumentlayout_new(&_0));
}

PHP_METHOD(Qt_Widgets_QPlainTextDocumentLayout_QPlainTextDocumentLayout, draw)
{
	zval *handle_param = NULL, *arg0_param = NULL, *arg1_param = NULL, _0, _1, _2;
	zend_long handle, arg0, arg1;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(arg0)
		Z_PARAM_LONG(arg1)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &arg0_param, &arg1_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, arg0);
	ZVAL_LONG(&_2, arg1);
	phpqt_qplaintextdocumentlayout_draw(&_0, &_1, &_2);
}

PHP_METHOD(Qt_Widgets_QPlainTextDocumentLayout_QPlainTextDocumentLayout, hitTest)
{
	double arg0X, arg0Y;
	zval *handle_param = NULL, *arg0X_param = NULL, *arg0Y_param = NULL, *arg1_param = NULL, _0, _1, _2, _3;
	zend_long handle, arg1;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(arg0X)
		Z_PARAM_ZVAL(arg0Y)
		Z_PARAM_LONG(arg1)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 0, &handle_param, &arg0X_param, &arg0Y_param, &arg1_param);
	arg0X = zephir_get_doubleval(arg0X_param);
	arg0Y = zephir_get_doubleval(arg0Y_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, arg0X);
	ZVAL_DOUBLE(&_2, arg0Y);
	ZVAL_LONG(&_3, arg1);
	RETURN_LONG(phpqt_qplaintextdocumentlayout_hit_test(&_0, &_1, &_2, &_3));
}

PHP_METHOD(Qt_Widgets_QPlainTextDocumentLayout_QPlainTextDocumentLayout, pageCount)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qplaintextdocumentlayout_page_count(&_0));
}

PHP_METHOD(Qt_Widgets_QPlainTextDocumentLayout_QPlainTextDocumentLayout, documentSize)
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
	phpqt_qplaintextdocumentlayout_document_size(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Widgets_QPlainTextDocumentLayout_QPlainTextDocumentLayout, frameBoundingRect)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, *arg0_param = NULL, result, _0, _1;
	zend_long handle, arg0;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(arg0)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &arg0_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, arg0);
	phpqt_qplaintextdocumentlayout_frame_bounding_rect(&result, &_0, &_1);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Widgets_QPlainTextDocumentLayout_QPlainTextDocumentLayout, blockBoundingRect)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, *block_param = NULL, result, _0, _1;
	zend_long handle, block;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(block)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &block_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, block);
	phpqt_qplaintextdocumentlayout_block_bounding_rect(&result, &_0, &_1);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Widgets_QPlainTextDocumentLayout_QPlainTextDocumentLayout, ensureBlockLayout)
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
	phpqt_qplaintextdocumentlayout_ensure_block_layout(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QPlainTextDocumentLayout_QPlainTextDocumentLayout, setCursorWidth)
{
	zval *handle_param = NULL, *width_param = NULL, _0, _1;
	zend_long handle, width;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(width)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &width_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, width);
	phpqt_qplaintextdocumentlayout_set_cursor_width(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QPlainTextDocumentLayout_QPlainTextDocumentLayout, cursorWidth)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qplaintextdocumentlayout_cursor_width(&_0));
}

PHP_METHOD(Qt_Widgets_QPlainTextDocumentLayout_QPlainTextDocumentLayout, requestUpdate)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qplaintextdocumentlayout_request_update(&_0);
}

PHP_METHOD(Qt_Widgets_QPlainTextDocumentLayout_QPlainTextDocumentLayout, documentChanged)
{
	zval *handle_param = NULL, *from_param = NULL, *arg1_param = NULL, *charsAdded_param = NULL, _0, _1, _2, _3;
	zend_long handle, from, arg1, charsAdded;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(from)
		Z_PARAM_LONG(arg1)
		Z_PARAM_LONG(charsAdded)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 0, &handle_param, &from_param, &arg1_param, &charsAdded_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, from);
	ZVAL_LONG(&_2, arg1);
	ZVAL_LONG(&_3, charsAdded);
	phpqt_qplaintextdocumentlayout_document_changed(&_0, &_1, &_2, &_3);
}

