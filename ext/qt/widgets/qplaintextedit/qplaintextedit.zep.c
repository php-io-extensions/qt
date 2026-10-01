
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
#include "src/widgets-qplaintextedit.h"
#include "kernel/object.h"
#include "kernel/string.h"
#include "kernel/memory.h"
#include "kernel/operators.h"


ZEPHIR_INIT_CLASS(Qt_Widgets_QPlainTextEdit_QPlainTextEdit)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Widgets\\QPlainTextEdit, QPlainTextEdit, qt, widgets_qplaintextedit_qplaintextedit, qt_widgets_qplaintextedit_qplaintextedit_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Widgets_QPlainTextEdit_QPlainTextEdit, staticMetaObject)
{

	RETURN_LONG(phpqt_qplaintextedit_static_meta_object());
}

PHP_METHOD(Qt_Widgets_QPlainTextEdit_QPlainTextEdit, tr)
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
	phpqt_qplaintextedit_tr(&result, s, c, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Widgets_QPlainTextEdit_QPlainTextEdit, new_)
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
	RETURN_LONG(phpqt_qplaintextedit_new(&_0));
}

PHP_METHOD(Qt_Widgets_QPlainTextEdit_QPlainTextEdit, newQStringQWidget)
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
	RETURN_MM_LONG(phpqt_qplaintextedit_new_q_string_q_widget(&text, &_0));
}

PHP_METHOD(Qt_Widgets_QPlainTextEdit_QPlainTextEdit, setDocument)
{
	zval *handle_param = NULL, *document_param = NULL, _0, _1;
	zend_long handle, document;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(document)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &document_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, document);
	phpqt_qplaintextedit_set_document(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QPlainTextEdit_QPlainTextEdit, document)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qplaintextedit_document(&_0));
}

PHP_METHOD(Qt_Widgets_QPlainTextEdit_QPlainTextEdit, setPlaceholderText)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval placeholderText;
	zval *handle_param = NULL, *placeholderText_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&placeholderText);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(placeholderText)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &placeholderText_param);
	zephir_get_strval(&placeholderText, placeholderText_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qplaintextedit_set_placeholder_text(&_0, &placeholderText);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_Widgets_QPlainTextEdit_QPlainTextEdit, placeholderText)
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
	phpqt_qplaintextedit_placeholder_text(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Widgets_QPlainTextEdit_QPlainTextEdit, setTextCursor)
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
	phpqt_qplaintextedit_set_text_cursor(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QPlainTextEdit_QPlainTextEdit, textCursor)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qplaintextedit_text_cursor(&_0));
}

PHP_METHOD(Qt_Widgets_QPlainTextEdit_QPlainTextEdit, isReadOnly)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qplaintextedit_is_read_only(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Widgets_QPlainTextEdit_QPlainTextEdit, setReadOnly)
{
	zend_bool ro;
	zval *handle_param = NULL, *ro_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_BOOL(ro)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &ro_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_BOOL(&_1, (ro ? 1 : 0));
	phpqt_qplaintextedit_set_read_only(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QPlainTextEdit_QPlainTextEdit, setTextInteractionFlags)
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
	phpqt_qplaintextedit_set_text_interaction_flags(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QPlainTextEdit_QPlainTextEdit, textInteractionFlags)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qplaintextedit_text_interaction_flags(&_0));
}

PHP_METHOD(Qt_Widgets_QPlainTextEdit_QPlainTextEdit, mergeCurrentCharFormat)
{
	zval *handle_param = NULL, *modifier_param = NULL, _0, _1;
	zend_long handle, modifier;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(modifier)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &modifier_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, modifier);
	phpqt_qplaintextedit_merge_current_char_format(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QPlainTextEdit_QPlainTextEdit, setCurrentCharFormat)
{
	zval *handle_param = NULL, *format_param = NULL, _0, _1;
	zend_long handle, format;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(format)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &format_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, format);
	phpqt_qplaintextedit_set_current_char_format(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QPlainTextEdit_QPlainTextEdit, currentCharFormat)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qplaintextedit_current_char_format(&_0));
}

PHP_METHOD(Qt_Widgets_QPlainTextEdit_QPlainTextEdit, tabChangesFocus)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qplaintextedit_tab_changes_focus(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Widgets_QPlainTextEdit_QPlainTextEdit, setTabChangesFocus)
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
	phpqt_qplaintextedit_set_tab_changes_focus(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QPlainTextEdit_QPlainTextEdit, setDocumentTitle)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval title;
	zval *handle_param = NULL, *title_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&title);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(title)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &title_param);
	zephir_get_strval(&title, title_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qplaintextedit_set_document_title(&_0, &title);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_Widgets_QPlainTextEdit_QPlainTextEdit, documentTitle)
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
	phpqt_qplaintextedit_document_title(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Widgets_QPlainTextEdit_QPlainTextEdit, isUndoRedoEnabled)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qplaintextedit_is_undo_redo_enabled(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Widgets_QPlainTextEdit_QPlainTextEdit, setUndoRedoEnabled)
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
	phpqt_qplaintextedit_set_undo_redo_enabled(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QPlainTextEdit_QPlainTextEdit, setMaximumBlockCount)
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
	phpqt_qplaintextedit_set_maximum_block_count(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QPlainTextEdit_QPlainTextEdit, maximumBlockCount)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qplaintextedit_maximum_block_count(&_0));
}

PHP_METHOD(Qt_Widgets_QPlainTextEdit_QPlainTextEdit, lineWrapMode)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qplaintextedit_line_wrap_mode(&_0));
}

PHP_METHOD(Qt_Widgets_QPlainTextEdit_QPlainTextEdit, setLineWrapMode)
{
	zval *handle_param = NULL, *mode_param = NULL, _0, _1;
	zend_long handle, mode;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(mode)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &mode_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, mode);
	phpqt_qplaintextedit_set_line_wrap_mode(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QPlainTextEdit_QPlainTextEdit, wordWrapMode)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qplaintextedit_word_wrap_mode(&_0));
}

PHP_METHOD(Qt_Widgets_QPlainTextEdit_QPlainTextEdit, setWordWrapMode)
{
	zval *handle_param = NULL, *policy_param = NULL, _0, _1;
	zend_long handle, policy;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(policy)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &policy_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, policy);
	phpqt_qplaintextedit_set_word_wrap_mode(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QPlainTextEdit_QPlainTextEdit, setBackgroundVisible)
{
	zend_bool visible;
	zval *handle_param = NULL, *visible_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_BOOL(visible)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &visible_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_BOOL(&_1, (visible ? 1 : 0));
	phpqt_qplaintextedit_set_background_visible(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QPlainTextEdit_QPlainTextEdit, backgroundVisible)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qplaintextedit_background_visible(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Widgets_QPlainTextEdit_QPlainTextEdit, setCenterOnScroll)
{
	zend_bool enabled;
	zval *handle_param = NULL, *enabled_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_BOOL(enabled)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &enabled_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_BOOL(&_1, (enabled ? 1 : 0));
	phpqt_qplaintextedit_set_center_on_scroll(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QPlainTextEdit_QPlainTextEdit, centerOnScroll)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qplaintextedit_center_on_scroll(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Widgets_QPlainTextEdit_QPlainTextEdit, find)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval exp;
	zval *handle_param = NULL, *exp_param = NULL, *options = NULL, options_sub, __$null, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&options_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&exp);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(2, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(exp)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(options)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 1, &handle_param, &exp_param, &options);
	zephir_get_strval(&exp, exp_param);
	if (!options) {
		options = &options_sub;
		options = &__$null;
	}
	ZVAL_LONG(&_0, handle);
	r = phpqt_qplaintextedit_find(&_0, &exp, options);
	RETURN_MM_BOOL(r == 1);
}

PHP_METHOD(Qt_Widgets_QPlainTextEdit_QPlainTextEdit, findQRegularExpressionQTextDocumentFindFlags)
{
	zval *handle_param = NULL, *exp_param = NULL, *options = NULL, options_sub, __$null, _0, _1;
	zend_long handle, exp, r = 0;

	ZVAL_UNDEF(&options_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(2, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(exp)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(options)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 1, &handle_param, &exp_param, &options);
	if (!options) {
		options = &options_sub;
		options = &__$null;
	}
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, exp);
	r = phpqt_qplaintextedit_find_q_regular_expression_q_text_document_find_flags(&_0, &_1, options);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Widgets_QPlainTextEdit_QPlainTextEdit, toPlainText)
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
	phpqt_qplaintextedit_to_plain_text(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Widgets_QPlainTextEdit_QPlainTextEdit, ensureCursorVisible)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qplaintextedit_ensure_cursor_visible(&_0);
}

PHP_METHOD(Qt_Widgets_QPlainTextEdit_QPlainTextEdit, loadResource)
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
	phpqt_qplaintextedit_load_resource(&result, &_0, &_1, &_2);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Widgets_QPlainTextEdit_QPlainTextEdit, createStandardContextMenu)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qplaintextedit_create_standard_context_menu(&_0));
}

PHP_METHOD(Qt_Widgets_QPlainTextEdit_QPlainTextEdit, createStandardContextMenuQPoint)
{
	zval *handle_param = NULL, *positionX_param = NULL, *positionY_param = NULL, _0, _1, _2;
	zend_long handle, positionX, positionY;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(positionX)
		Z_PARAM_LONG(positionY)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &positionX_param, &positionY_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, positionX);
	ZVAL_LONG(&_2, positionY);
	RETURN_LONG(phpqt_qplaintextedit_create_standard_context_menu_q_point(&_0, &_1, &_2));
}

PHP_METHOD(Qt_Widgets_QPlainTextEdit_QPlainTextEdit, cursorForPosition)
{
	zval *handle_param = NULL, *posX_param = NULL, *posY_param = NULL, _0, _1, _2;
	zend_long handle, posX, posY;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(posX)
		Z_PARAM_LONG(posY)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &posX_param, &posY_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, posX);
	ZVAL_LONG(&_2, posY);
	RETURN_LONG(phpqt_qplaintextedit_cursor_for_position(&_0, &_1, &_2));
}

PHP_METHOD(Qt_Widgets_QPlainTextEdit_QPlainTextEdit, cursorRect)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, *cursor_param = NULL, result, _0, _1;
	zend_long handle, cursor;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(cursor)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &cursor_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, cursor);
	phpqt_qplaintextedit_cursor_rect(&result, &_0, &_1);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Widgets_QPlainTextEdit_QPlainTextEdit, cursorRect2)
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
	phpqt_qplaintextedit_cursor_rect2(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Widgets_QPlainTextEdit_QPlainTextEdit, anchorAt)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, *posX_param = NULL, *posY_param = NULL, result, _0, _1, _2;
	zend_long handle, posX, posY;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(posX)
		Z_PARAM_LONG(posY)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 3, 0, &handle_param, &posX_param, &posY_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, posX);
	ZVAL_LONG(&_2, posY);
	phpqt_qplaintextedit_anchor_at(&result, &_0, &_1, &_2);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Widgets_QPlainTextEdit_QPlainTextEdit, overwriteMode)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qplaintextedit_overwrite_mode(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Widgets_QPlainTextEdit_QPlainTextEdit, setOverwriteMode)
{
	zend_bool overwrite;
	zval *handle_param = NULL, *overwrite_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_BOOL(overwrite)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &overwrite_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_BOOL(&_1, (overwrite ? 1 : 0));
	phpqt_qplaintextedit_set_overwrite_mode(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QPlainTextEdit_QPlainTextEdit, tabStopDistance)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_DOUBLE(phpqt_qplaintextedit_tab_stop_distance(&_0));
}

PHP_METHOD(Qt_Widgets_QPlainTextEdit_QPlainTextEdit, setTabStopDistance)
{
	double distance;
	zval *handle_param = NULL, *distance_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(distance)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &distance_param);
	distance = zephir_get_doubleval(distance_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, distance);
	phpqt_qplaintextedit_set_tab_stop_distance(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QPlainTextEdit_QPlainTextEdit, cursorWidth)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qplaintextedit_cursor_width(&_0));
}

PHP_METHOD(Qt_Widgets_QPlainTextEdit_QPlainTextEdit, setCursorWidth)
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
	phpqt_qplaintextedit_set_cursor_width(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QPlainTextEdit_QPlainTextEdit, setExtraSelections)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval selections;
	zval *handle_param = NULL, *selections_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&selections);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ARRAY(selections)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &selections_param);
	zephir_get_arrval(&selections, selections_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qplaintextedit_set_extra_selections(&_0, &selections);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_Widgets_QPlainTextEdit_QPlainTextEdit, extraSelections)
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
	phpqt_qplaintextedit_extra_selections(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Widgets_QPlainTextEdit_QPlainTextEdit, moveCursor)
{
	zval *handle_param = NULL, *operation_param = NULL, *mode = NULL, mode_sub, __$null, _0, _1;
	zend_long handle, operation;

	ZVAL_UNDEF(&mode_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(2, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(operation)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(mode)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 1, &handle_param, &operation_param, &mode);
	if (!mode) {
		mode = &mode_sub;
		mode = &__$null;
	}
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, operation);
	phpqt_qplaintextedit_move_cursor(&_0, &_1, mode);
}

PHP_METHOD(Qt_Widgets_QPlainTextEdit_QPlainTextEdit, canPaste)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qplaintextedit_can_paste(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Widgets_QPlainTextEdit_QPlainTextEdit, print_)
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
	phpqt_qplaintextedit_print(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QPlainTextEdit_QPlainTextEdit, blockCount)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qplaintextedit_block_count(&_0));
}

PHP_METHOD(Qt_Widgets_QPlainTextEdit_QPlainTextEdit, inputMethodQuery)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, *property_param = NULL, result, _0, _1;
	zend_long handle, property;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(property)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &property_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, property);
	phpqt_qplaintextedit_input_method_query(&result, &_0, &_1);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Widgets_QPlainTextEdit_QPlainTextEdit, inputMethodQueryQtInputMethodQueryQVariant)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, *query_param = NULL, *argument = NULL, argument_sub, result, _0, _1;
	zend_long handle, query;

	ZVAL_UNDEF(&argument_sub);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(query)
		Z_PARAM_ZVAL(argument)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 3, 0, &handle_param, &query_param, &argument);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, query);
	phpqt_qplaintextedit_input_method_query_qt_input_method_query_q_variant(&result, &_0, &_1, argument);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Widgets_QPlainTextEdit_QPlainTextEdit, setPlainText)
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
	phpqt_qplaintextedit_set_plain_text(&_0, &text);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_Widgets_QPlainTextEdit_QPlainTextEdit, cut)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qplaintextedit_cut(&_0);
}

PHP_METHOD(Qt_Widgets_QPlainTextEdit_QPlainTextEdit, copy)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qplaintextedit_copy(&_0);
}

PHP_METHOD(Qt_Widgets_QPlainTextEdit_QPlainTextEdit, paste)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qplaintextedit_paste(&_0);
}

PHP_METHOD(Qt_Widgets_QPlainTextEdit_QPlainTextEdit, undo)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qplaintextedit_undo(&_0);
}

PHP_METHOD(Qt_Widgets_QPlainTextEdit_QPlainTextEdit, redo)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qplaintextedit_redo(&_0);
}

PHP_METHOD(Qt_Widgets_QPlainTextEdit_QPlainTextEdit, clear)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qplaintextedit_clear(&_0);
}

PHP_METHOD(Qt_Widgets_QPlainTextEdit_QPlainTextEdit, selectAll)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qplaintextedit_select_all(&_0);
}

PHP_METHOD(Qt_Widgets_QPlainTextEdit_QPlainTextEdit, insertPlainText)
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
	phpqt_qplaintextedit_insert_plain_text(&_0, &text);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_Widgets_QPlainTextEdit_QPlainTextEdit, appendPlainText)
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
	phpqt_qplaintextedit_append_plain_text(&_0, &text);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_Widgets_QPlainTextEdit_QPlainTextEdit, appendHtml)
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
	phpqt_qplaintextedit_append_html(&_0, &html);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_Widgets_QPlainTextEdit_QPlainTextEdit, centerCursor)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qplaintextedit_center_cursor(&_0);
}

PHP_METHOD(Qt_Widgets_QPlainTextEdit_QPlainTextEdit, zoomIn)
{
	zval *handle_param = NULL, *range_param = NULL, _0, _1;
	zend_long handle, range;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(range)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 1, &handle_param, &range_param);
	if (!range_param) {
		range = 1;
	} else {
		}
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, range);
	phpqt_qplaintextedit_zoom_in(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QPlainTextEdit_QPlainTextEdit, zoomOut)
{
	zval *handle_param = NULL, *range_param = NULL, _0, _1;
	zend_long handle, range;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(range)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 1, &handle_param, &range_param);
	if (!range_param) {
		range = 1;
	} else {
		}
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, range);
	phpqt_qplaintextedit_zoom_out(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QPlainTextEdit_QPlainTextEdit, textChanged)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qplaintextedit_text_changed(&_0);
}

PHP_METHOD(Qt_Widgets_QPlainTextEdit_QPlainTextEdit, undoAvailable)
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
	phpqt_qplaintextedit_undo_available(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QPlainTextEdit_QPlainTextEdit, redoAvailable)
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
	phpqt_qplaintextedit_redo_available(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QPlainTextEdit_QPlainTextEdit, copyAvailable)
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
	phpqt_qplaintextedit_copy_available(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QPlainTextEdit_QPlainTextEdit, selectionChanged)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qplaintextedit_selection_changed(&_0);
}

PHP_METHOD(Qt_Widgets_QPlainTextEdit_QPlainTextEdit, cursorPositionChanged)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qplaintextedit_cursor_position_changed(&_0);
}

PHP_METHOD(Qt_Widgets_QPlainTextEdit_QPlainTextEdit, updateRequest)
{
	zval *handle_param = NULL, *rectX_param = NULL, *rectY_param = NULL, *rectWidth_param = NULL, *rectHeight_param = NULL, *dy_param = NULL, _0, _1, _2, _3, _4, _5;
	zend_long handle, rectX, rectY, rectWidth, rectHeight, dy;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_5);
	ZEND_PARSE_PARAMETERS_START(6, 6)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(rectX)
		Z_PARAM_LONG(rectY)
		Z_PARAM_LONG(rectWidth)
		Z_PARAM_LONG(rectHeight)
		Z_PARAM_LONG(dy)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(6, 0, &handle_param, &rectX_param, &rectY_param, &rectWidth_param, &rectHeight_param, &dy_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, rectX);
	ZVAL_LONG(&_2, rectY);
	ZVAL_LONG(&_3, rectWidth);
	ZVAL_LONG(&_4, rectHeight);
	ZVAL_LONG(&_5, dy);
	phpqt_qplaintextedit_update_request(&_0, &_1, &_2, &_3, &_4, &_5);
}

PHP_METHOD(Qt_Widgets_QPlainTextEdit_QPlainTextEdit, blockCountChanged)
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
	phpqt_qplaintextedit_block_count_changed(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QPlainTextEdit_QPlainTextEdit, modificationChanged)
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
	phpqt_qplaintextedit_modification_changed(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QPlainTextEdit_QPlainTextEdit, event)
{
	zval *handle_param = NULL, *e_param = NULL, _0, _1;
	zend_long handle, e, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(e)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &e_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, e);
	r = phpqt_qplaintextedit_event(&_0, &_1);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Widgets_QPlainTextEdit_QPlainTextEdit, timerEvent)
{
	zval *handle_param = NULL, *e_param = NULL, _0, _1;
	zend_long handle, e;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(e)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &e_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, e);
	phpqt_qplaintextedit_timer_event(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QPlainTextEdit_QPlainTextEdit, keyPressEvent)
{
	zval *handle_param = NULL, *e_param = NULL, _0, _1;
	zend_long handle, e;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(e)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &e_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, e);
	phpqt_qplaintextedit_key_press_event(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QPlainTextEdit_QPlainTextEdit, keyReleaseEvent)
{
	zval *handle_param = NULL, *e_param = NULL, _0, _1;
	zend_long handle, e;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(e)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &e_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, e);
	phpqt_qplaintextedit_key_release_event(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QPlainTextEdit_QPlainTextEdit, resizeEvent)
{
	zval *handle_param = NULL, *e_param = NULL, _0, _1;
	zend_long handle, e;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(e)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &e_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, e);
	phpqt_qplaintextedit_resize_event(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QPlainTextEdit_QPlainTextEdit, paintEvent)
{
	zval *handle_param = NULL, *e_param = NULL, _0, _1;
	zend_long handle, e;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(e)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &e_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, e);
	phpqt_qplaintextedit_paint_event(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QPlainTextEdit_QPlainTextEdit, mousePressEvent)
{
	zval *handle_param = NULL, *e_param = NULL, _0, _1;
	zend_long handle, e;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(e)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &e_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, e);
	phpqt_qplaintextedit_mouse_press_event(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QPlainTextEdit_QPlainTextEdit, mouseMoveEvent)
{
	zval *handle_param = NULL, *e_param = NULL, _0, _1;
	zend_long handle, e;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(e)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &e_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, e);
	phpqt_qplaintextedit_mouse_move_event(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QPlainTextEdit_QPlainTextEdit, mouseReleaseEvent)
{
	zval *handle_param = NULL, *e_param = NULL, _0, _1;
	zend_long handle, e;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(e)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &e_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, e);
	phpqt_qplaintextedit_mouse_release_event(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QPlainTextEdit_QPlainTextEdit, mouseDoubleClickEvent)
{
	zval *handle_param = NULL, *e_param = NULL, _0, _1;
	zend_long handle, e;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(e)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &e_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, e);
	phpqt_qplaintextedit_mouse_double_click_event(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QPlainTextEdit_QPlainTextEdit, focusNextPrevChild)
{
	zend_bool next;
	zval *handle_param = NULL, *next_param = NULL, _0, _1;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_BOOL(next)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &next_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_BOOL(&_1, (next ? 1 : 0));
	r = phpqt_qplaintextedit_focus_next_prev_child(&_0, &_1);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Widgets_QPlainTextEdit_QPlainTextEdit, contextMenuEvent)
{
	zval *handle_param = NULL, *e_param = NULL, _0, _1;
	zend_long handle, e;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(e)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &e_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, e);
	phpqt_qplaintextedit_context_menu_event(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QPlainTextEdit_QPlainTextEdit, dragEnterEvent)
{
	zval *handle_param = NULL, *e_param = NULL, _0, _1;
	zend_long handle, e;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(e)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &e_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, e);
	phpqt_qplaintextedit_drag_enter_event(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QPlainTextEdit_QPlainTextEdit, dragLeaveEvent)
{
	zval *handle_param = NULL, *e_param = NULL, _0, _1;
	zend_long handle, e;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(e)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &e_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, e);
	phpqt_qplaintextedit_drag_leave_event(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QPlainTextEdit_QPlainTextEdit, dragMoveEvent)
{
	zval *handle_param = NULL, *e_param = NULL, _0, _1;
	zend_long handle, e;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(e)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &e_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, e);
	phpqt_qplaintextedit_drag_move_event(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QPlainTextEdit_QPlainTextEdit, dropEvent)
{
	zval *handle_param = NULL, *e_param = NULL, _0, _1;
	zend_long handle, e;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(e)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &e_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, e);
	phpqt_qplaintextedit_drop_event(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QPlainTextEdit_QPlainTextEdit, focusInEvent)
{
	zval *handle_param = NULL, *e_param = NULL, _0, _1;
	zend_long handle, e;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(e)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &e_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, e);
	phpqt_qplaintextedit_focus_in_event(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QPlainTextEdit_QPlainTextEdit, focusOutEvent)
{
	zval *handle_param = NULL, *e_param = NULL, _0, _1;
	zend_long handle, e;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(e)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &e_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, e);
	phpqt_qplaintextedit_focus_out_event(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QPlainTextEdit_QPlainTextEdit, showEvent)
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
	phpqt_qplaintextedit_show_event(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QPlainTextEdit_QPlainTextEdit, changeEvent)
{
	zval *handle_param = NULL, *e_param = NULL, _0, _1;
	zend_long handle, e;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(e)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &e_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, e);
	phpqt_qplaintextedit_change_event(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QPlainTextEdit_QPlainTextEdit, wheelEvent)
{
	zval *handle_param = NULL, *e_param = NULL, _0, _1;
	zend_long handle, e;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(e)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &e_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, e);
	phpqt_qplaintextedit_wheel_event(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QPlainTextEdit_QPlainTextEdit, createMimeDataFromSelection)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qplaintextedit_create_mime_data_from_selection(&_0));
}

PHP_METHOD(Qt_Widgets_QPlainTextEdit_QPlainTextEdit, canInsertFromMimeData)
{
	zval *handle_param = NULL, *source_param = NULL, _0, _1;
	zend_long handle, source, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(source)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &source_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, source);
	r = phpqt_qplaintextedit_can_insert_from_mime_data(&_0, &_1);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Widgets_QPlainTextEdit_QPlainTextEdit, insertFromMimeData)
{
	zval *handle_param = NULL, *source_param = NULL, _0, _1;
	zend_long handle, source;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(source)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &source_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, source);
	phpqt_qplaintextedit_insert_from_mime_data(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QPlainTextEdit_QPlainTextEdit, inputMethodEvent)
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
	phpqt_qplaintextedit_input_method_event(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QPlainTextEdit_QPlainTextEdit, scrollContentsBy)
{
	zval *handle_param = NULL, *dx_param = NULL, *dy_param = NULL, _0, _1, _2;
	zend_long handle, dx, dy;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(dx)
		Z_PARAM_LONG(dy)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &dx_param, &dy_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, dx);
	ZVAL_LONG(&_2, dy);
	phpqt_qplaintextedit_scroll_contents_by(&_0, &_1, &_2);
}

PHP_METHOD(Qt_Widgets_QPlainTextEdit_QPlainTextEdit, doSetTextCursor)
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
	phpqt_qplaintextedit_do_set_text_cursor(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QPlainTextEdit_QPlainTextEdit, firstVisibleBlock)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qplaintextedit_first_visible_block(&_0));
}

PHP_METHOD(Qt_Widgets_QPlainTextEdit_QPlainTextEdit, contentOffset)
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
	phpqt_qplaintextedit_content_offset(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Widgets_QPlainTextEdit_QPlainTextEdit, blockBoundingRect)
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
	phpqt_qplaintextedit_block_bounding_rect(&result, &_0, &_1);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Widgets_QPlainTextEdit_QPlainTextEdit, blockBoundingGeometry)
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
	phpqt_qplaintextedit_block_bounding_geometry(&result, &_0, &_1);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Widgets_QPlainTextEdit_QPlainTextEdit, getPaintContext)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qplaintextedit_get_paint_context(&_0));
}

PHP_METHOD(Qt_Widgets_QPlainTextEdit_QPlainTextEdit, zoomInF)
{
	double range;
	zval *handle_param = NULL, *range_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(range)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &range_param);
	range = zephir_get_doubleval(range_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, range);
	phpqt_qplaintextedit_zoom_in_f(&_0, &_1);
}

