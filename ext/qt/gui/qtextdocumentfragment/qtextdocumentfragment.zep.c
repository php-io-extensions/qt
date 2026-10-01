
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
#include "src/gui-qtextdocumentfragment.h"
#include "kernel/object.h"
#include "kernel/operators.h"
#include "kernel/memory.h"
#include "kernel/string.h"


ZEPHIR_INIT_CLASS(Qt_Gui_QTextDocumentFragment_QTextDocumentFragment)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Gui\\QTextDocumentFragment, QTextDocumentFragment, qt, gui_qtextdocumentfragment_qtextdocumentfragment, qt_gui_qtextdocumentfragment_qtextdocumentfragment_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Gui_QTextDocumentFragment_QTextDocumentFragment, new_)
{

	RETURN_LONG(phpqt_qtextdocumentfragment_new());
}

PHP_METHOD(Qt_Gui_QTextDocumentFragment_QTextDocumentFragment, newQTextDocument)
{
	zval *document_param = NULL, _0;
	zend_long document;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(document)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &document_param);
	ZVAL_LONG(&_0, document);
	RETURN_LONG(phpqt_qtextdocumentfragment_new_q_text_document(&_0));
}

PHP_METHOD(Qt_Gui_QTextDocumentFragment_QTextDocumentFragment, newQTextCursor)
{
	zval *range_param = NULL, _0;
	zend_long range;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(range)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &range_param);
	ZVAL_LONG(&_0, range);
	RETURN_LONG(phpqt_qtextdocumentfragment_new_q_text_cursor(&_0));
}

PHP_METHOD(Qt_Gui_QTextDocumentFragment_QTextDocumentFragment, newQTextDocumentFragment)
{
	zval *rhs_param = NULL, _0;
	zend_long rhs;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(rhs)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &rhs_param);
	ZVAL_LONG(&_0, rhs);
	RETURN_LONG(phpqt_qtextdocumentfragment_new_q_text_document_fragment(&_0));
}

PHP_METHOD(Qt_Gui_QTextDocumentFragment_QTextDocumentFragment, isEmpty)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qtextdocumentfragment_is_empty(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Gui_QTextDocumentFragment_QTextDocumentFragment, toPlainText)
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
	phpqt_qtextdocumentfragment_to_plain_text(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QTextDocumentFragment_QTextDocumentFragment, toRawText)
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
	phpqt_qtextdocumentfragment_to_raw_text(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QTextDocumentFragment_QTextDocumentFragment, toHtml)
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
	phpqt_qtextdocumentfragment_to_html(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QTextDocumentFragment_QTextDocumentFragment, toMarkdown)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, *features = NULL, features_sub, __$null, result, _0;
	zend_long handle;

	ZVAL_UNDEF(&features_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(features)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 1, &handle_param, &features);
	if (!features) {
		features = &features_sub;
		features = &__$null;
	}
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	phpqt_qtextdocumentfragment_to_markdown(&result, &_0, features);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QTextDocumentFragment_QTextDocumentFragment, fromPlainText)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *plainText_param = NULL;
	zval plainText;

	ZVAL_UNDEF(&plainText);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_STR(plainText)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &plainText_param);
	zephir_get_strval(&plainText, plainText_param);
	RETURN_MM_LONG(phpqt_qtextdocumentfragment_from_plain_text(&plainText));
}

PHP_METHOD(Qt_Gui_QTextDocumentFragment_QTextDocumentFragment, fromHtml)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long resourceProvider;
	zval *html_param = NULL, *resourceProvider_param = NULL, _0;
	zval html;

	ZVAL_UNDEF(&html);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_STR(html)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(resourceProvider)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 1, &html_param, &resourceProvider_param);
	zephir_get_strval(&html, html_param);
	if (!resourceProvider_param) {
		resourceProvider = 0;
	} else {
		}
	ZVAL_LONG(&_0, resourceProvider);
	RETURN_MM_LONG(phpqt_qtextdocumentfragment_from_html(&html, &_0));
}

PHP_METHOD(Qt_Gui_QTextDocumentFragment_QTextDocumentFragment, fromMarkdown)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *markdown_param = NULL, *features = NULL, features_sub, __$null;
	zval markdown;

	ZVAL_UNDEF(&markdown);
	ZVAL_UNDEF(&features_sub);
	ZVAL_NULL(&__$null);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_STR(markdown)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(features)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 1, &markdown_param, &features);
	zephir_get_strval(&markdown, markdown_param);
	if (!features) {
		features = &features_sub;
		features = &__$null;
	}
	RETURN_MM_LONG(phpqt_qtextdocumentfragment_from_markdown(&markdown, features));
}

