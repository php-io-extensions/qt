
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
#include "src/gui-qtextdocument.h"
#include "kernel/object.h"
#include "kernel/string.h"
#include "kernel/memory.h"
#include "kernel/operators.h"


ZEPHIR_INIT_CLASS(Qt_Gui_QTextDocument_QTextDocument)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Gui\\QTextDocument, QTextDocument, qt, gui_qtextdocument_qtextdocument, qt_gui_qtextdocument_qtextdocument_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Gui_QTextDocument_QTextDocument, staticMetaObject)
{

	RETURN_LONG(phpqt_qtextdocument_static_meta_object());
}

PHP_METHOD(Qt_Gui_QTextDocument_QTextDocument, tr)
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
	phpqt_qtextdocument_tr(&result, s, c, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QTextDocument_QTextDocument, new_)
{
	zval *parent__param = NULL, _0;
	zend_long parent_;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(0, 1)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(parent_)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(0, 1, &parent__param);
	if (!parent__param) {
		parent_ = 0;
	} else {
		}
	ZVAL_LONG(&_0, parent_);
	RETURN_LONG(phpqt_qtextdocument_new(&_0));
}

PHP_METHOD(Qt_Gui_QTextDocument_QTextDocument, newQStringQObject)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long parent_;
	zval *text_param = NULL, *parent__param = NULL, _0;
	zval text;

	ZVAL_UNDEF(&text);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_STR(text)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(parent_)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 1, &text_param, &parent__param);
	zephir_get_strval(&text, text_param);
	if (!parent__param) {
		parent_ = 0;
	} else {
		}
	ZVAL_LONG(&_0, parent_);
	RETURN_MM_LONG(phpqt_qtextdocument_new_q_string_q_object(&text, &_0));
}

PHP_METHOD(Qt_Gui_QTextDocument_QTextDocument, clone_)
{
	zval *handle_param = NULL, *parent__param = NULL, _0, _1;
	zend_long handle, parent_;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(parent_)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 1, &handle_param, &parent__param);
	if (!parent__param) {
		parent_ = 0;
	} else {
		}
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, parent_);
	RETURN_LONG(phpqt_qtextdocument_clone(&_0, &_1));
}

PHP_METHOD(Qt_Gui_QTextDocument_QTextDocument, isEmpty)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qtextdocument_is_empty(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Gui_QTextDocument_QTextDocument, clear)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qtextdocument_clear(&_0);
}

PHP_METHOD(Qt_Gui_QTextDocument_QTextDocument, setUndoRedoEnabled)
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
	phpqt_qtextdocument_set_undo_redo_enabled(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QTextDocument_QTextDocument, isUndoRedoEnabled)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qtextdocument_is_undo_redo_enabled(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Gui_QTextDocument_QTextDocument, isUndoAvailable)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qtextdocument_is_undo_available(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Gui_QTextDocument_QTextDocument, isRedoAvailable)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qtextdocument_is_redo_available(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Gui_QTextDocument_QTextDocument, availableUndoSteps)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qtextdocument_available_undo_steps(&_0));
}

PHP_METHOD(Qt_Gui_QTextDocument_QTextDocument, availableRedoSteps)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qtextdocument_available_redo_steps(&_0));
}

PHP_METHOD(Qt_Gui_QTextDocument_QTextDocument, revision)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qtextdocument_revision(&_0));
}

PHP_METHOD(Qt_Gui_QTextDocument_QTextDocument, setDocumentLayout)
{
	zval *handle_param = NULL, *layout_param = NULL, _0, _1;
	zend_long handle, layout;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(layout)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &layout_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, layout);
	phpqt_qtextdocument_set_document_layout(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QTextDocument_QTextDocument, documentLayout)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qtextdocument_document_layout(&_0));
}

PHP_METHOD(Qt_Gui_QTextDocument_QTextDocument, setMetaInformation)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval arg1;
	zval *handle_param = NULL, *info_param = NULL, *arg1_param = NULL, _0, _1;
	zend_long handle, info;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&arg1);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(info)
		Z_PARAM_STR(arg1)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 3, 0, &handle_param, &info_param, &arg1_param);
	zephir_get_strval(&arg1, arg1_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, info);
	phpqt_qtextdocument_set_meta_information(&_0, &_1, &arg1);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_Gui_QTextDocument_QTextDocument, metaInformation)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, *info_param = NULL, result, _0, _1;
	zend_long handle, info;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(info)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &info_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, info);
	phpqt_qtextdocument_meta_information(&result, &_0, &_1);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QTextDocument_QTextDocument, toHtml)
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
	phpqt_qtextdocument_to_html(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QTextDocument_QTextDocument, setHtml)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval html;
	zval *handle_param = NULL, *html_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&html);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(html)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &html_param);
	zephir_get_strval(&html, html_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qtextdocument_set_html(&_0, &html);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_Gui_QTextDocument_QTextDocument, toMarkdown)
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
	phpqt_qtextdocument_to_markdown(&result, &_0, features);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QTextDocument_QTextDocument, setMarkdown)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval markdown;
	zval *handle_param = NULL, *markdown_param = NULL, *features = NULL, features_sub, __$null, _0;
	zend_long handle;

	ZVAL_UNDEF(&features_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&markdown);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(2, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(markdown)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(features)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 1, &handle_param, &markdown_param, &features);
	zephir_get_strval(&markdown, markdown_param);
	if (!features) {
		features = &features_sub;
		features = &__$null;
	}
	ZVAL_LONG(&_0, handle);
	phpqt_qtextdocument_set_markdown(&_0, &markdown, features);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_Gui_QTextDocument_QTextDocument, toRawText)
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
	phpqt_qtextdocument_to_raw_text(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QTextDocument_QTextDocument, toPlainText)
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
	phpqt_qtextdocument_to_plain_text(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QTextDocument_QTextDocument, setPlainText)
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
	phpqt_qtextdocument_set_plain_text(&_0, &text);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_Gui_QTextDocument_QTextDocument, characterAt)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, *pos_param = NULL, result, _0, _1;
	zend_long handle, pos;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(pos)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &pos_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, pos);
	phpqt_qtextdocument_character_at(&result, &_0, &_1);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QTextDocument_QTextDocument, find)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval subString;
	zval *handle_param = NULL, *subString_param = NULL, *from_param = NULL, *options = NULL, options_sub, __$null, _0, _1;
	zend_long handle, from;

	ZVAL_UNDEF(&options_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&subString);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(2, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(subString)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(from)
		Z_PARAM_ZVAL_OR_NULL(options)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 2, &handle_param, &subString_param, &from_param, &options);
	zephir_get_strval(&subString, subString_param);
	if (!from_param) {
		from = 0;
	} else {
		}
	if (!options) {
		options = &options_sub;
		options = &__$null;
	}
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, from);
	RETURN_MM_LONG(phpqt_qtextdocument_find(&_0, &subString, &_1, options));
}

PHP_METHOD(Qt_Gui_QTextDocument_QTextDocument, findQStringQTextCursorQTextDocumentFindFlags)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval subString;
	zval *handle_param = NULL, *subString_param = NULL, *cursor_param = NULL, *options = NULL, options_sub, __$null, _0, _1;
	zend_long handle, cursor;

	ZVAL_UNDEF(&options_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&subString);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(3, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(subString)
		Z_PARAM_LONG(cursor)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(options)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 3, 1, &handle_param, &subString_param, &cursor_param, &options);
	zephir_get_strval(&subString, subString_param);
	if (!options) {
		options = &options_sub;
		options = &__$null;
	}
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, cursor);
	RETURN_MM_LONG(phpqt_qtextdocument_find_q_string_q_text_cursor_q_text_document_find_flags(&_0, &subString, &_1, options));
}

PHP_METHOD(Qt_Gui_QTextDocument_QTextDocument, findQRegularExpressionIntQTextDocumentFindFlags)
{
	zval *handle_param = NULL, *expr_param = NULL, *from_param = NULL, *options = NULL, options_sub, __$null, _0, _1, _2;
	zend_long handle, expr, from;

	ZVAL_UNDEF(&options_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(2, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(expr)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(from)
		Z_PARAM_ZVAL_OR_NULL(options)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 2, &handle_param, &expr_param, &from_param, &options);
	if (!from_param) {
		from = 0;
	} else {
		}
	if (!options) {
		options = &options_sub;
		options = &__$null;
	}
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, expr);
	ZVAL_LONG(&_2, from);
	RETURN_LONG(phpqt_qtextdocument_find_q_regular_expression_int_q_text_document_find_flags(&_0, &_1, &_2, options));
}

PHP_METHOD(Qt_Gui_QTextDocument_QTextDocument, findQRegularExpressionQTextCursorQTextDocumentFindFlags)
{
	zval *handle_param = NULL, *expr_param = NULL, *cursor_param = NULL, *options = NULL, options_sub, __$null, _0, _1, _2;
	zend_long handle, expr, cursor;

	ZVAL_UNDEF(&options_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(3, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(expr)
		Z_PARAM_LONG(cursor)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(options)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 1, &handle_param, &expr_param, &cursor_param, &options);
	if (!options) {
		options = &options_sub;
		options = &__$null;
	}
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, expr);
	ZVAL_LONG(&_2, cursor);
	RETURN_LONG(phpqt_qtextdocument_find_q_regular_expression_q_text_cursor_q_text_document_find_flags(&_0, &_1, &_2, options));
}

PHP_METHOD(Qt_Gui_QTextDocument_QTextDocument, frameAt)
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
	RETURN_LONG(phpqt_qtextdocument_frame_at(&_0, &_1));
}

PHP_METHOD(Qt_Gui_QTextDocument_QTextDocument, rootFrame)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qtextdocument_root_frame(&_0));
}

PHP_METHOD(Qt_Gui_QTextDocument_QTextDocument, object_)
{
	zval *handle_param = NULL, *objectIndex_param = NULL, _0, _1;
	zend_long handle, objectIndex;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(objectIndex)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &objectIndex_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, objectIndex);
	RETURN_LONG(phpqt_qtextdocument_object(&_0, &_1));
}

PHP_METHOD(Qt_Gui_QTextDocument_QTextDocument, objectForFormat)
{
	zval *handle_param = NULL, *arg0_param = NULL, _0, _1;
	zend_long handle, arg0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(arg0)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &arg0_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, arg0);
	RETURN_LONG(phpqt_qtextdocument_object_for_format(&_0, &_1));
}

PHP_METHOD(Qt_Gui_QTextDocument_QTextDocument, findBlock)
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
	RETURN_LONG(phpqt_qtextdocument_find_block(&_0, &_1));
}

PHP_METHOD(Qt_Gui_QTextDocument_QTextDocument, findBlockByNumber)
{
	zval *handle_param = NULL, *blockNumber_param = NULL, _0, _1;
	zend_long handle, blockNumber;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(blockNumber)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &blockNumber_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, blockNumber);
	RETURN_LONG(phpqt_qtextdocument_find_block_by_number(&_0, &_1));
}

PHP_METHOD(Qt_Gui_QTextDocument_QTextDocument, findBlockByLineNumber)
{
	zval *handle_param = NULL, *blockNumber_param = NULL, _0, _1;
	zend_long handle, blockNumber;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(blockNumber)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &blockNumber_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, blockNumber);
	RETURN_LONG(phpqt_qtextdocument_find_block_by_line_number(&_0, &_1));
}

PHP_METHOD(Qt_Gui_QTextDocument_QTextDocument, begin)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qtextdocument_begin(&_0));
}

PHP_METHOD(Qt_Gui_QTextDocument_QTextDocument, end)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qtextdocument_end(&_0));
}

PHP_METHOD(Qt_Gui_QTextDocument_QTextDocument, firstBlock)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qtextdocument_first_block(&_0));
}

PHP_METHOD(Qt_Gui_QTextDocument_QTextDocument, lastBlock)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qtextdocument_last_block(&_0));
}

PHP_METHOD(Qt_Gui_QTextDocument_QTextDocument, setPageSize)
{
	double sizeWidth, sizeHeight;
	zval *handle_param = NULL, *sizeWidth_param = NULL, *sizeHeight_param = NULL, _0, _1, _2;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(sizeWidth)
		Z_PARAM_ZVAL(sizeHeight)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &sizeWidth_param, &sizeHeight_param);
	sizeWidth = zephir_get_doubleval(sizeWidth_param);
	sizeHeight = zephir_get_doubleval(sizeHeight_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, sizeWidth);
	ZVAL_DOUBLE(&_2, sizeHeight);
	phpqt_qtextdocument_set_page_size(&_0, &_1, &_2);
}

PHP_METHOD(Qt_Gui_QTextDocument_QTextDocument, pageSize)
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
	phpqt_qtextdocument_page_size(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QTextDocument_QTextDocument, setDefaultFont)
{
	zval *handle_param = NULL, *font_param = NULL, _0, _1;
	zend_long handle, font;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(font)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &font_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, font);
	phpqt_qtextdocument_set_default_font(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QTextDocument_QTextDocument, defaultFont)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qtextdocument_default_font(&_0));
}

PHP_METHOD(Qt_Gui_QTextDocument_QTextDocument, setSuperScriptBaseline)
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
	phpqt_qtextdocument_set_super_script_baseline(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QTextDocument_QTextDocument, superScriptBaseline)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_DOUBLE(phpqt_qtextdocument_super_script_baseline(&_0));
}

PHP_METHOD(Qt_Gui_QTextDocument_QTextDocument, setSubScriptBaseline)
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
	phpqt_qtextdocument_set_sub_script_baseline(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QTextDocument_QTextDocument, subScriptBaseline)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_DOUBLE(phpqt_qtextdocument_sub_script_baseline(&_0));
}

PHP_METHOD(Qt_Gui_QTextDocument_QTextDocument, setBaselineOffset)
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
	phpqt_qtextdocument_set_baseline_offset(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QTextDocument_QTextDocument, baselineOffset)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_DOUBLE(phpqt_qtextdocument_baseline_offset(&_0));
}

PHP_METHOD(Qt_Gui_QTextDocument_QTextDocument, pageCount)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qtextdocument_page_count(&_0));
}

PHP_METHOD(Qt_Gui_QTextDocument_QTextDocument, isModified)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qtextdocument_is_modified(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Gui_QTextDocument_QTextDocument, print_)
{
	zval *handle_param = NULL, *printer_param = NULL, _0, _1;
	zend_long handle, printer;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(printer)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &printer_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, printer);
	phpqt_qtextdocument_print(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QTextDocument_QTextDocument, resource_)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, *type_param = NULL, *name_param = NULL, result, _0, _1, _2;
	zend_long handle, type, name;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(type)
		Z_PARAM_LONG(name)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 3, 0, &handle_param, &type_param, &name_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, type);
	ZVAL_LONG(&_2, name);
	phpqt_qtextdocument_resource(&result, &_0, &_1, &_2);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QTextDocument_QTextDocument, addResource)
{
	zval *handle_param = NULL, *type_param = NULL, *name_param = NULL, *resource_ = NULL, resource__sub, _0, _1, _2;
	zend_long handle, type, name;

	ZVAL_UNDEF(&resource__sub);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(type)
		Z_PARAM_LONG(name)
		Z_PARAM_ZVAL(resource_)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 0, &handle_param, &type_param, &name_param, &resource_);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, type);
	ZVAL_LONG(&_2, name);
	phpqt_qtextdocument_add_resource(&_0, &_1, &_2, resource_);
}

PHP_METHOD(Qt_Gui_QTextDocument_QTextDocument, allFormats)
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
	phpqt_qtextdocument_all_formats(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QTextDocument_QTextDocument, markContentsDirty)
{
	zval *handle_param = NULL, *from_param = NULL, *length_param = NULL, _0, _1, _2;
	zend_long handle, from, length;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(from)
		Z_PARAM_LONG(length)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &from_param, &length_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, from);
	ZVAL_LONG(&_2, length);
	phpqt_qtextdocument_mark_contents_dirty(&_0, &_1, &_2);
}

PHP_METHOD(Qt_Gui_QTextDocument_QTextDocument, setUseDesignMetrics)
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
	phpqt_qtextdocument_set_use_design_metrics(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QTextDocument_QTextDocument, useDesignMetrics)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qtextdocument_use_design_metrics(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Gui_QTextDocument_QTextDocument, setLayoutEnabled)
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
	phpqt_qtextdocument_set_layout_enabled(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QTextDocument_QTextDocument, isLayoutEnabled)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qtextdocument_is_layout_enabled(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Gui_QTextDocument_QTextDocument, drawContents)
{
	zval *handle_param = NULL, *painter_param = NULL, *rectX = NULL, rectX_sub, *rectY = NULL, rectY_sub, *rectWidth = NULL, rectWidth_sub, *rectHeight = NULL, rectHeight_sub, __$null, _0, _1;
	zend_long handle, painter;

	ZVAL_UNDEF(&rectX_sub);
	ZVAL_UNDEF(&rectY_sub);
	ZVAL_UNDEF(&rectWidth_sub);
	ZVAL_UNDEF(&rectHeight_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(2, 6)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(painter)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(rectX)
		Z_PARAM_ZVAL_OR_NULL(rectY)
		Z_PARAM_ZVAL_OR_NULL(rectWidth)
		Z_PARAM_ZVAL_OR_NULL(rectHeight)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 4, &handle_param, &painter_param, &rectX, &rectY, &rectWidth, &rectHeight);
	if (!rectX) {
		rectX = &rectX_sub;
		rectX = &__$null;
	}
	if (!rectY) {
		rectY = &rectY_sub;
		rectY = &__$null;
	}
	if (!rectWidth) {
		rectWidth = &rectWidth_sub;
		rectWidth = &__$null;
	}
	if (!rectHeight) {
		rectHeight = &rectHeight_sub;
		rectHeight = &__$null;
	}
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, painter);
	phpqt_qtextdocument_draw_contents(&_0, &_1, rectX, rectY, rectWidth, rectHeight);
}

PHP_METHOD(Qt_Gui_QTextDocument_QTextDocument, setTextWidth)
{
	double width;
	zval *handle_param = NULL, *width_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(width)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &width_param);
	width = zephir_get_doubleval(width_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, width);
	phpqt_qtextdocument_set_text_width(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QTextDocument_QTextDocument, textWidth)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_DOUBLE(phpqt_qtextdocument_text_width(&_0));
}

PHP_METHOD(Qt_Gui_QTextDocument_QTextDocument, idealWidth)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_DOUBLE(phpqt_qtextdocument_ideal_width(&_0));
}

PHP_METHOD(Qt_Gui_QTextDocument_QTextDocument, indentWidth)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_DOUBLE(phpqt_qtextdocument_indent_width(&_0));
}

PHP_METHOD(Qt_Gui_QTextDocument_QTextDocument, setIndentWidth)
{
	double width;
	zval *handle_param = NULL, *width_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(width)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &width_param);
	width = zephir_get_doubleval(width_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, width);
	phpqt_qtextdocument_set_indent_width(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QTextDocument_QTextDocument, documentMargin)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_DOUBLE(phpqt_qtextdocument_document_margin(&_0));
}

PHP_METHOD(Qt_Gui_QTextDocument_QTextDocument, setDocumentMargin)
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
	phpqt_qtextdocument_set_document_margin(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QTextDocument_QTextDocument, adjustSize)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qtextdocument_adjust_size(&_0);
}

PHP_METHOD(Qt_Gui_QTextDocument_QTextDocument, size)
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
	phpqt_qtextdocument_size(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QTextDocument_QTextDocument, blockCount)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qtextdocument_block_count(&_0));
}

PHP_METHOD(Qt_Gui_QTextDocument_QTextDocument, lineCount)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qtextdocument_line_count(&_0));
}

PHP_METHOD(Qt_Gui_QTextDocument_QTextDocument, characterCount)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qtextdocument_character_count(&_0));
}

PHP_METHOD(Qt_Gui_QTextDocument_QTextDocument, setDefaultStyleSheet)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval sheet;
	zval *handle_param = NULL, *sheet_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&sheet);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(sheet)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &sheet_param);
	zephir_get_strval(&sheet, sheet_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qtextdocument_set_default_style_sheet(&_0, &sheet);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_Gui_QTextDocument_QTextDocument, defaultStyleSheet)
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
	phpqt_qtextdocument_default_style_sheet(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QTextDocument_QTextDocument, undo)
{
	zval *handle_param = NULL, *cursor_param = NULL, _0, _1;
	zend_long handle, cursor;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(cursor)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &cursor_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, cursor);
	phpqt_qtextdocument_undo(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QTextDocument_QTextDocument, redo)
{
	zval *handle_param = NULL, *cursor_param = NULL, _0, _1;
	zend_long handle, cursor;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(cursor)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &cursor_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, cursor);
	phpqt_qtextdocument_redo(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QTextDocument_QTextDocument, clearUndoRedoStacks)
{
	zval *handle_param = NULL, *historyToClear = NULL, historyToClear_sub, __$null, _0;
	zend_long handle;

	ZVAL_UNDEF(&historyToClear_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(historyToClear)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 1, &handle_param, &historyToClear);
	if (!historyToClear) {
		historyToClear = &historyToClear_sub;
		historyToClear = &__$null;
	}
	ZVAL_LONG(&_0, handle);
	phpqt_qtextdocument_clear_undo_redo_stacks(&_0, historyToClear);
}

PHP_METHOD(Qt_Gui_QTextDocument_QTextDocument, maximumBlockCount)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qtextdocument_maximum_block_count(&_0));
}

PHP_METHOD(Qt_Gui_QTextDocument_QTextDocument, setMaximumBlockCount)
{
	zval *handle_param = NULL, *maximum_param = NULL, _0, _1;
	zend_long handle, maximum;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(maximum)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &maximum_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, maximum);
	phpqt_qtextdocument_set_maximum_block_count(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QTextDocument_QTextDocument, defaultTextOption)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qtextdocument_default_text_option(&_0));
}

PHP_METHOD(Qt_Gui_QTextDocument_QTextDocument, setDefaultTextOption)
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
	phpqt_qtextdocument_set_default_text_option(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QTextDocument_QTextDocument, baseUrl)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qtextdocument_base_url(&_0));
}

PHP_METHOD(Qt_Gui_QTextDocument_QTextDocument, setBaseUrl)
{
	zval *handle_param = NULL, *url_param = NULL, _0, _1;
	zend_long handle, url;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(url)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &url_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, url);
	phpqt_qtextdocument_set_base_url(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QTextDocument_QTextDocument, defaultCursorMoveStyle)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qtextdocument_default_cursor_move_style(&_0));
}

PHP_METHOD(Qt_Gui_QTextDocument_QTextDocument, setDefaultCursorMoveStyle)
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
	phpqt_qtextdocument_set_default_cursor_move_style(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QTextDocument_QTextDocument, contentsChange)
{
	zval *handle_param = NULL, *from_param = NULL, *charsRemoved_param = NULL, *charsAdded_param = NULL, _0, _1, _2, _3;
	zend_long handle, from, charsRemoved, charsAdded;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(from)
		Z_PARAM_LONG(charsRemoved)
		Z_PARAM_LONG(charsAdded)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 0, &handle_param, &from_param, &charsRemoved_param, &charsAdded_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, from);
	ZVAL_LONG(&_2, charsRemoved);
	ZVAL_LONG(&_3, charsAdded);
	phpqt_qtextdocument_contents_change(&_0, &_1, &_2, &_3);
}

PHP_METHOD(Qt_Gui_QTextDocument_QTextDocument, contentsChanged)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qtextdocument_contents_changed(&_0);
}

PHP_METHOD(Qt_Gui_QTextDocument_QTextDocument, undoAvailable)
{
	zend_bool arg0;
	zval *handle_param = NULL, *arg0_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_BOOL(arg0)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &arg0_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_BOOL(&_1, (arg0 ? 1 : 0));
	phpqt_qtextdocument_undo_available(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QTextDocument_QTextDocument, redoAvailable)
{
	zend_bool arg0;
	zval *handle_param = NULL, *arg0_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_BOOL(arg0)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &arg0_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_BOOL(&_1, (arg0 ? 1 : 0));
	phpqt_qtextdocument_redo_available(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QTextDocument_QTextDocument, undoCommandAdded)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qtextdocument_undo_command_added(&_0);
}

PHP_METHOD(Qt_Gui_QTextDocument_QTextDocument, modificationChanged)
{
	zend_bool m;
	zval *handle_param = NULL, *m_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_BOOL(m)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &m_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_BOOL(&_1, (m ? 1 : 0));
	phpqt_qtextdocument_modification_changed(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QTextDocument_QTextDocument, cursorPositionChanged)
{
	zval *handle_param = NULL, *cursor_param = NULL, _0, _1;
	zend_long handle, cursor;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(cursor)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &cursor_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, cursor);
	phpqt_qtextdocument_cursor_position_changed(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QTextDocument_QTextDocument, blockCountChanged)
{
	zval *handle_param = NULL, *newBlockCount_param = NULL, _0, _1;
	zend_long handle, newBlockCount;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(newBlockCount)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &newBlockCount_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, newBlockCount);
	phpqt_qtextdocument_block_count_changed(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QTextDocument_QTextDocument, baseUrlChanged)
{
	zval *handle_param = NULL, *url_param = NULL, _0, _1;
	zend_long handle, url;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(url)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &url_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, url);
	phpqt_qtextdocument_base_url_changed(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QTextDocument_QTextDocument, documentLayoutChanged)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qtextdocument_document_layout_changed(&_0);
}

PHP_METHOD(Qt_Gui_QTextDocument_QTextDocument, undo2)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qtextdocument_undo2(&_0);
}

PHP_METHOD(Qt_Gui_QTextDocument_QTextDocument, redo2)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qtextdocument_redo2(&_0);
}

PHP_METHOD(Qt_Gui_QTextDocument_QTextDocument, appendUndoItem)
{
	zval *handle_param = NULL, *arg0_param = NULL, _0, _1;
	zend_long handle, arg0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(arg0)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &arg0_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, arg0);
	phpqt_qtextdocument_append_undo_item(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QTextDocument_QTextDocument, setModified)
{
	zend_bool m;
	zval *handle_param = NULL, *m_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_OPTIONAL
		Z_PARAM_BOOL(m)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 1, &handle_param, &m_param);
	if (!m_param) {
		m = 1;
	} else {
		}
	ZVAL_LONG(&_0, handle);
	ZVAL_BOOL(&_1, (m ? 1 : 0));
	phpqt_qtextdocument_set_modified(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QTextDocument_QTextDocument, createObject)
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
	RETURN_LONG(phpqt_qtextdocument_create_object(&_0, &_1));
}

PHP_METHOD(Qt_Gui_QTextDocument_QTextDocument, loadResource)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, *type_param = NULL, *name_param = NULL, result, _0, _1, _2;
	zend_long handle, type, name;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(type)
		Z_PARAM_LONG(name)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 3, 0, &handle_param, &type_param, &name_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, type);
	ZVAL_LONG(&_2, name);
	phpqt_qtextdocument_load_resource(&result, &_0, &_1, &_2);
	RETURN_CCTOR(&result);
}

