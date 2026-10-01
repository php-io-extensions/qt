
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
#include "src/widgets-qmessagebox.h"
#include "kernel/operators.h"
#include "kernel/memory.h"
#include "kernel/object.h"
#include "kernel/string.h"


ZEPHIR_INIT_CLASS(Qt_Widgets_QMessageBox_QMessageBox)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Widgets\\QMessageBox, QMessageBox, qt, widgets_qmessagebox_qmessagebox, qt_widgets_qmessagebox_qmessagebox_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Widgets_QMessageBox_QMessageBox, open)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qmessagebox_open(&_0);
}

PHP_METHOD(Qt_Widgets_QMessageBox_QMessageBox, staticMetaObject)
{

	RETURN_LONG(phpqt_qmessagebox_static_meta_object());
}

PHP_METHOD(Qt_Widgets_QMessageBox_QMessageBox, tr)
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
	phpqt_qmessagebox_tr(&result, s, c, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Widgets_QMessageBox_QMessageBox, new_)
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
	RETURN_LONG(phpqt_qmessagebox_new(&_0));
}

PHP_METHOD(Qt_Widgets_QMessageBox_QMessageBox, newQMessageBoxIconQStringQStringQMessageBoxStandardButtonsQWidgetQtWindowFlags)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval title, text;
	zval *icon_param = NULL, *title_param = NULL, *text_param = NULL, *buttons = NULL, buttons_sub, *parent__param = NULL, *flags = NULL, flags_sub, __$null, _0, _1;
	zend_long icon, parent_;

	ZVAL_UNDEF(&buttons_sub);
	ZVAL_UNDEF(&flags_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&title);
	ZVAL_UNDEF(&text);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(3, 6)
		Z_PARAM_LONG(icon)
		Z_PARAM_STR(title)
		Z_PARAM_STR(text)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(buttons)
		Z_PARAM_LONG(parent_)
		Z_PARAM_ZVAL_OR_NULL(flags)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 3, 3, &icon_param, &title_param, &text_param, &buttons, &parent__param, &flags);
	zephir_get_strval(&title, title_param);
	zephir_get_strval(&text, text_param);
	if (!buttons) {
		buttons = &buttons_sub;
		buttons = &__$null;
	}
	if (!parent__param) {
		parent_ = 0;
	} else {
		}
	if (!flags) {
		flags = &flags_sub;
		flags = &__$null;
	}
	ZVAL_LONG(&_0, icon);
	ZVAL_LONG(&_1, parent_);
	RETURN_MM_LONG(phpqt_qmessagebox_new_q_message_box_icon_q_string_q_string_q_message_box_standard_buttons_q_widget_qt_window_flags(&_0, &title, &text, buttons, &_1, flags));
}

PHP_METHOD(Qt_Widgets_QMessageBox_QMessageBox, addButton)
{
	zval *handle_param = NULL, *button_param = NULL, *role_param = NULL, _0, _1, _2;
	zend_long handle, button, role;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(button)
		Z_PARAM_LONG(role)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &button_param, &role_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, button);
	ZVAL_LONG(&_2, role);
	phpqt_qmessagebox_add_button(&_0, &_1, &_2);
}

PHP_METHOD(Qt_Widgets_QMessageBox_QMessageBox, addButtonQStringQMessageBoxButtonRole)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval text;
	zval *handle_param = NULL, *text_param = NULL, *role_param = NULL, _0, _1;
	zend_long handle, role;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&text);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(text)
		Z_PARAM_LONG(role)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 3, 0, &handle_param, &text_param, &role_param);
	zephir_get_strval(&text, text_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, role);
	RETURN_MM_LONG(phpqt_qmessagebox_add_button_q_string_q_message_box_button_role(&_0, &text, &_1));
}

PHP_METHOD(Qt_Widgets_QMessageBox_QMessageBox, addButtonQMessageBoxStandardButton)
{
	zval *handle_param = NULL, *button_param = NULL, _0, _1;
	zend_long handle, button;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(button)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &button_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, button);
	RETURN_LONG(phpqt_qmessagebox_add_button_q_message_box_standard_button(&_0, &_1));
}

PHP_METHOD(Qt_Widgets_QMessageBox_QMessageBox, removeButton)
{
	zval *handle_param = NULL, *button_param = NULL, _0, _1;
	zend_long handle, button;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(button)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &button_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, button);
	phpqt_qmessagebox_remove_button(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QMessageBox_QMessageBox, openQObjectChar)
{
	zval *handle_param = NULL, *receiver_param = NULL, *member = NULL, member_sub, _0, _1;
	zend_long handle, receiver;

	ZVAL_UNDEF(&member_sub);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(receiver)
		Z_PARAM_ZVAL(member)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &receiver_param, &member);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, receiver);
	phpqt_qmessagebox_open_q_object_char(&_0, &_1, member);
}

PHP_METHOD(Qt_Widgets_QMessageBox_QMessageBox, buttons)
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
	phpqt_qmessagebox_buttons(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Widgets_QMessageBox_QMessageBox, buttonRole)
{
	zval *handle_param = NULL, *button_param = NULL, _0, _1;
	zend_long handle, button;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(button)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &button_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, button);
	RETURN_LONG(phpqt_qmessagebox_button_role(&_0, &_1));
}

PHP_METHOD(Qt_Widgets_QMessageBox_QMessageBox, setStandardButtons)
{
	zval *handle_param = NULL, *buttons_param = NULL, _0, _1;
	zend_long handle, buttons;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(buttons)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &buttons_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, buttons);
	phpqt_qmessagebox_set_standard_buttons(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QMessageBox_QMessageBox, standardButtons)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qmessagebox_standard_buttons(&_0));
}

PHP_METHOD(Qt_Widgets_QMessageBox_QMessageBox, standardButton)
{
	zval *handle_param = NULL, *button_param = NULL, _0, _1;
	zend_long handle, button;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(button)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &button_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, button);
	RETURN_LONG(phpqt_qmessagebox_standard_button(&_0, &_1));
}

PHP_METHOD(Qt_Widgets_QMessageBox_QMessageBox, button)
{
	zval *handle_param = NULL, *which_param = NULL, _0, _1;
	zend_long handle, which;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(which)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &which_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, which);
	RETURN_LONG(phpqt_qmessagebox_button(&_0, &_1));
}

PHP_METHOD(Qt_Widgets_QMessageBox_QMessageBox, defaultButton)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qmessagebox_default_button(&_0));
}

PHP_METHOD(Qt_Widgets_QMessageBox_QMessageBox, setDefaultButton)
{
	zval *handle_param = NULL, *button_param = NULL, _0, _1;
	zend_long handle, button;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(button)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &button_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, button);
	phpqt_qmessagebox_set_default_button(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QMessageBox_QMessageBox, setDefaultButtonQMessageBoxStandardButton)
{
	zval *handle_param = NULL, *button_param = NULL, _0, _1;
	zend_long handle, button;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(button)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &button_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, button);
	phpqt_qmessagebox_set_default_button_q_message_box_standard_button(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QMessageBox_QMessageBox, escapeButton)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qmessagebox_escape_button(&_0));
}

PHP_METHOD(Qt_Widgets_QMessageBox_QMessageBox, setEscapeButton)
{
	zval *handle_param = NULL, *button_param = NULL, _0, _1;
	zend_long handle, button;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(button)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &button_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, button);
	phpqt_qmessagebox_set_escape_button(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QMessageBox_QMessageBox, setEscapeButtonQMessageBoxStandardButton)
{
	zval *handle_param = NULL, *button_param = NULL, _0, _1;
	zend_long handle, button;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(button)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &button_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, button);
	phpqt_qmessagebox_set_escape_button_q_message_box_standard_button(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QMessageBox_QMessageBox, clickedButton)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qmessagebox_clicked_button(&_0));
}

PHP_METHOD(Qt_Widgets_QMessageBox_QMessageBox, text)
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
	phpqt_qmessagebox_text(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Widgets_QMessageBox_QMessageBox, setText)
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
	phpqt_qmessagebox_set_text(&_0, &text);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_Widgets_QMessageBox_QMessageBox, icon)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qmessagebox_icon(&_0));
}

PHP_METHOD(Qt_Widgets_QMessageBox_QMessageBox, setIcon)
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
	phpqt_qmessagebox_set_icon(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QMessageBox_QMessageBox, iconPixmap)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qmessagebox_icon_pixmap(&_0));
}

PHP_METHOD(Qt_Widgets_QMessageBox_QMessageBox, setIconPixmap)
{
	zval *handle_param = NULL, *pixmap_param = NULL, _0, _1;
	zend_long handle, pixmap;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(pixmap)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &pixmap_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, pixmap);
	phpqt_qmessagebox_set_icon_pixmap(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QMessageBox_QMessageBox, textFormat)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qmessagebox_text_format(&_0));
}

PHP_METHOD(Qt_Widgets_QMessageBox_QMessageBox, setTextFormat)
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
	phpqt_qmessagebox_set_text_format(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QMessageBox_QMessageBox, setTextInteractionFlags)
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
	phpqt_qmessagebox_set_text_interaction_flags(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QMessageBox_QMessageBox, textInteractionFlags)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qmessagebox_text_interaction_flags(&_0));
}

PHP_METHOD(Qt_Widgets_QMessageBox_QMessageBox, setCheckBox)
{
	zval *handle_param = NULL, *cb_param = NULL, _0, _1;
	zend_long handle, cb;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(cb)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &cb_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, cb);
	phpqt_qmessagebox_set_check_box(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QMessageBox_QMessageBox, checkBox)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qmessagebox_check_box(&_0));
}

PHP_METHOD(Qt_Widgets_QMessageBox_QMessageBox, setOption)
{
	zend_bool on;
	zval *handle_param = NULL, *option_param = NULL, *on_param = NULL, _0, _1, _2;
	zend_long handle, option;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(2, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(option)
		Z_PARAM_OPTIONAL
		Z_PARAM_BOOL(on)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 1, &handle_param, &option_param, &on_param);
	if (!on_param) {
		on = 1;
	} else {
		}
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, option);
	ZVAL_BOOL(&_2, (on ? 1 : 0));
	phpqt_qmessagebox_set_option(&_0, &_1, &_2);
}

PHP_METHOD(Qt_Widgets_QMessageBox_QMessageBox, testOption)
{
	zval *handle_param = NULL, *option_param = NULL, _0, _1;
	zend_long handle, option, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(option)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &option_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, option);
	r = phpqt_qmessagebox_test_option(&_0, &_1);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Widgets_QMessageBox_QMessageBox, setOptions)
{
	zval *handle_param = NULL, *options_param = NULL, _0, _1;
	zend_long handle, options;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(options)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &options_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, options);
	phpqt_qmessagebox_set_options(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QMessageBox_QMessageBox, options)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qmessagebox_options(&_0));
}

PHP_METHOD(Qt_Widgets_QMessageBox_QMessageBox, information)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval title, text;
	zval *parent__param = NULL, *title_param = NULL, *text_param = NULL, *buttons = NULL, buttons_sub, *defaultButton = NULL, defaultButton_sub, __$null, _0;
	zend_long parent_;

	ZVAL_UNDEF(&buttons_sub);
	ZVAL_UNDEF(&defaultButton_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&title);
	ZVAL_UNDEF(&text);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(3, 5)
		Z_PARAM_LONG(parent_)
		Z_PARAM_STR(title)
		Z_PARAM_STR(text)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(buttons)
		Z_PARAM_ZVAL_OR_NULL(defaultButton)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 3, 2, &parent__param, &title_param, &text_param, &buttons, &defaultButton);
	zephir_get_strval(&title, title_param);
	zephir_get_strval(&text, text_param);
	if (!buttons) {
		buttons = &buttons_sub;
		buttons = &__$null;
	}
	if (!defaultButton) {
		defaultButton = &defaultButton_sub;
		defaultButton = &__$null;
	}
	ZVAL_LONG(&_0, parent_);
	RETURN_MM_LONG(phpqt_qmessagebox_information(&_0, &title, &text, buttons, defaultButton));
}

PHP_METHOD(Qt_Widgets_QMessageBox_QMessageBox, informationQWidgetQStringQStringQMessageBoxStandardButtonQMessageBoxStandardButton)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval title, text;
	zval *parent__param = NULL, *title_param = NULL, *text_param = NULL, *button0_param = NULL, *button1 = NULL, button1_sub, __$null, _0, _1;
	zend_long parent_, button0;

	ZVAL_UNDEF(&button1_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&title);
	ZVAL_UNDEF(&text);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(4, 5)
		Z_PARAM_LONG(parent_)
		Z_PARAM_STR(title)
		Z_PARAM_STR(text)
		Z_PARAM_LONG(button0)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(button1)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 4, 1, &parent__param, &title_param, &text_param, &button0_param, &button1);
	zephir_get_strval(&title, title_param);
	zephir_get_strval(&text, text_param);
	if (!button1) {
		button1 = &button1_sub;
		button1 = &__$null;
	}
	ZVAL_LONG(&_0, parent_);
	ZVAL_LONG(&_1, button0);
	RETURN_MM_LONG(phpqt_qmessagebox_information_q_widget_q_string_q_string_q_message_box_standard_button_q_message_box_standard_button(&_0, &title, &text, &_1, button1));
}

PHP_METHOD(Qt_Widgets_QMessageBox_QMessageBox, question)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval title, text;
	zval *parent__param = NULL, *title_param = NULL, *text_param = NULL, *buttons = NULL, buttons_sub, *defaultButton = NULL, defaultButton_sub, __$null, _0;
	zend_long parent_;

	ZVAL_UNDEF(&buttons_sub);
	ZVAL_UNDEF(&defaultButton_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&title);
	ZVAL_UNDEF(&text);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(3, 5)
		Z_PARAM_LONG(parent_)
		Z_PARAM_STR(title)
		Z_PARAM_STR(text)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(buttons)
		Z_PARAM_ZVAL_OR_NULL(defaultButton)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 3, 2, &parent__param, &title_param, &text_param, &buttons, &defaultButton);
	zephir_get_strval(&title, title_param);
	zephir_get_strval(&text, text_param);
	if (!buttons) {
		buttons = &buttons_sub;
		buttons = &__$null;
	}
	if (!defaultButton) {
		defaultButton = &defaultButton_sub;
		defaultButton = &__$null;
	}
	ZVAL_LONG(&_0, parent_);
	RETURN_MM_LONG(phpqt_qmessagebox_question(&_0, &title, &text, buttons, defaultButton));
}

PHP_METHOD(Qt_Widgets_QMessageBox_QMessageBox, questionQWidgetQStringQStringQMessageBoxStandardButtonQMessageBoxStandardButton)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval title, text;
	zval *parent__param = NULL, *title_param = NULL, *text_param = NULL, *button0_param = NULL, *button1_param = NULL, _0, _1, _2;
	zend_long parent_, button0, button1;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&title);
	ZVAL_UNDEF(&text);
	ZEND_PARSE_PARAMETERS_START(5, 5)
		Z_PARAM_LONG(parent_)
		Z_PARAM_STR(title)
		Z_PARAM_STR(text)
		Z_PARAM_LONG(button0)
		Z_PARAM_LONG(button1)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 5, 0, &parent__param, &title_param, &text_param, &button0_param, &button1_param);
	zephir_get_strval(&title, title_param);
	zephir_get_strval(&text, text_param);
	ZVAL_LONG(&_0, parent_);
	ZVAL_LONG(&_1, button0);
	ZVAL_LONG(&_2, button1);
	RETURN_MM_LONG(phpqt_qmessagebox_question_q_widget_q_string_q_string_q_message_box_standard_button_q_message_box_standard_button(&_0, &title, &text, &_1, &_2));
}

PHP_METHOD(Qt_Widgets_QMessageBox_QMessageBox, warning)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval title, text;
	zval *parent__param = NULL, *title_param = NULL, *text_param = NULL, *buttons = NULL, buttons_sub, *defaultButton = NULL, defaultButton_sub, __$null, _0;
	zend_long parent_;

	ZVAL_UNDEF(&buttons_sub);
	ZVAL_UNDEF(&defaultButton_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&title);
	ZVAL_UNDEF(&text);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(3, 5)
		Z_PARAM_LONG(parent_)
		Z_PARAM_STR(title)
		Z_PARAM_STR(text)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(buttons)
		Z_PARAM_ZVAL_OR_NULL(defaultButton)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 3, 2, &parent__param, &title_param, &text_param, &buttons, &defaultButton);
	zephir_get_strval(&title, title_param);
	zephir_get_strval(&text, text_param);
	if (!buttons) {
		buttons = &buttons_sub;
		buttons = &__$null;
	}
	if (!defaultButton) {
		defaultButton = &defaultButton_sub;
		defaultButton = &__$null;
	}
	ZVAL_LONG(&_0, parent_);
	RETURN_MM_LONG(phpqt_qmessagebox_warning(&_0, &title, &text, buttons, defaultButton));
}

PHP_METHOD(Qt_Widgets_QMessageBox_QMessageBox, warningQWidgetQStringQStringQMessageBoxStandardButtonQMessageBoxStandardButton)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval title, text;
	zval *parent__param = NULL, *title_param = NULL, *text_param = NULL, *button0_param = NULL, *button1_param = NULL, _0, _1, _2;
	zend_long parent_, button0, button1;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&title);
	ZVAL_UNDEF(&text);
	ZEND_PARSE_PARAMETERS_START(5, 5)
		Z_PARAM_LONG(parent_)
		Z_PARAM_STR(title)
		Z_PARAM_STR(text)
		Z_PARAM_LONG(button0)
		Z_PARAM_LONG(button1)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 5, 0, &parent__param, &title_param, &text_param, &button0_param, &button1_param);
	zephir_get_strval(&title, title_param);
	zephir_get_strval(&text, text_param);
	ZVAL_LONG(&_0, parent_);
	ZVAL_LONG(&_1, button0);
	ZVAL_LONG(&_2, button1);
	RETURN_MM_LONG(phpqt_qmessagebox_warning_q_widget_q_string_q_string_q_message_box_standard_button_q_message_box_standard_button(&_0, &title, &text, &_1, &_2));
}

PHP_METHOD(Qt_Widgets_QMessageBox_QMessageBox, critical)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval title, text;
	zval *parent__param = NULL, *title_param = NULL, *text_param = NULL, *buttons = NULL, buttons_sub, *defaultButton = NULL, defaultButton_sub, __$null, _0;
	zend_long parent_;

	ZVAL_UNDEF(&buttons_sub);
	ZVAL_UNDEF(&defaultButton_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&title);
	ZVAL_UNDEF(&text);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(3, 5)
		Z_PARAM_LONG(parent_)
		Z_PARAM_STR(title)
		Z_PARAM_STR(text)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(buttons)
		Z_PARAM_ZVAL_OR_NULL(defaultButton)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 3, 2, &parent__param, &title_param, &text_param, &buttons, &defaultButton);
	zephir_get_strval(&title, title_param);
	zephir_get_strval(&text, text_param);
	if (!buttons) {
		buttons = &buttons_sub;
		buttons = &__$null;
	}
	if (!defaultButton) {
		defaultButton = &defaultButton_sub;
		defaultButton = &__$null;
	}
	ZVAL_LONG(&_0, parent_);
	RETURN_MM_LONG(phpqt_qmessagebox_critical(&_0, &title, &text, buttons, defaultButton));
}

PHP_METHOD(Qt_Widgets_QMessageBox_QMessageBox, criticalQWidgetQStringQStringQMessageBoxStandardButtonQMessageBoxStandardButton)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval title, text;
	zval *parent__param = NULL, *title_param = NULL, *text_param = NULL, *button0_param = NULL, *button1_param = NULL, _0, _1, _2;
	zend_long parent_, button0, button1;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&title);
	ZVAL_UNDEF(&text);
	ZEND_PARSE_PARAMETERS_START(5, 5)
		Z_PARAM_LONG(parent_)
		Z_PARAM_STR(title)
		Z_PARAM_STR(text)
		Z_PARAM_LONG(button0)
		Z_PARAM_LONG(button1)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 5, 0, &parent__param, &title_param, &text_param, &button0_param, &button1_param);
	zephir_get_strval(&title, title_param);
	zephir_get_strval(&text, text_param);
	ZVAL_LONG(&_0, parent_);
	ZVAL_LONG(&_1, button0);
	ZVAL_LONG(&_2, button1);
	RETURN_MM_LONG(phpqt_qmessagebox_critical_q_widget_q_string_q_string_q_message_box_standard_button_q_message_box_standard_button(&_0, &title, &text, &_1, &_2));
}

PHP_METHOD(Qt_Widgets_QMessageBox_QMessageBox, about)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval title, text;
	zval *parent__param = NULL, *title_param = NULL, *text_param = NULL, _0;
	zend_long parent_;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&title);
	ZVAL_UNDEF(&text);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(parent_)
		Z_PARAM_STR(title)
		Z_PARAM_STR(text)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 3, 0, &parent__param, &title_param, &text_param);
	zephir_get_strval(&title, title_param);
	zephir_get_strval(&text, text_param);
	ZVAL_LONG(&_0, parent_);
	phpqt_qmessagebox_about(&_0, &title, &text);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_Widgets_QMessageBox_QMessageBox, aboutQt)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval title;
	zval *parent__param = NULL, *title_param = NULL, _0;
	zend_long parent_;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&title);
	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_LONG(parent_)
		Z_PARAM_OPTIONAL
		Z_PARAM_STR(title)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 1, &parent__param, &title_param);
	if (!title_param) {
		ZEPHIR_INIT_VAR(&title);
		ZVAL_STRING(&title, "");
	} else {
		zephir_get_strval(&title, title_param);
	}
	ZVAL_LONG(&_0, parent_);
	phpqt_qmessagebox_about_qt(&_0, &title);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_Widgets_QMessageBox_QMessageBox, newQStringQStringQMessageBoxIconIntIntIntQWidgetQtWindowFlags)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long icon, button0, button1, button2, parent_;
	zval *title_param = NULL, *text_param = NULL, *icon_param = NULL, *button0_param = NULL, *button1_param = NULL, *button2_param = NULL, *parent__param = NULL, *f = NULL, f_sub, __$null, _0, _1, _2, _3, _4;
	zval title, text;

	ZVAL_UNDEF(&title);
	ZVAL_UNDEF(&text);
	ZVAL_UNDEF(&f_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(6, 8)
		Z_PARAM_STR(title)
		Z_PARAM_STR(text)
		Z_PARAM_LONG(icon)
		Z_PARAM_LONG(button0)
		Z_PARAM_LONG(button1)
		Z_PARAM_LONG(button2)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(parent_)
		Z_PARAM_ZVAL_OR_NULL(f)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 6, 2, &title_param, &text_param, &icon_param, &button0_param, &button1_param, &button2_param, &parent__param, &f);
	zephir_get_strval(&title, title_param);
	zephir_get_strval(&text, text_param);
	if (!parent__param) {
		parent_ = 0;
	} else {
		}
	if (!f) {
		f = &f_sub;
		f = &__$null;
	}
	ZVAL_LONG(&_0, icon);
	ZVAL_LONG(&_1, button0);
	ZVAL_LONG(&_2, button1);
	ZVAL_LONG(&_3, button2);
	ZVAL_LONG(&_4, parent_);
	RETURN_MM_LONG(phpqt_qmessagebox_new_q_string_q_string_q_message_box_icon_int_int_int_q_widget_qt_window_flags(&title, &text, &_0, &_1, &_2, &_3, &_4, f));
}

PHP_METHOD(Qt_Widgets_QMessageBox_QMessageBox, informativeText)
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
	phpqt_qmessagebox_informative_text(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Widgets_QMessageBox_QMessageBox, setInformativeText)
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
	phpqt_qmessagebox_set_informative_text(&_0, &text);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_Widgets_QMessageBox_QMessageBox, detailedText)
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
	phpqt_qmessagebox_detailed_text(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Widgets_QMessageBox_QMessageBox, setDetailedText)
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
	phpqt_qmessagebox_set_detailed_text(&_0, &text);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_Widgets_QMessageBox_QMessageBox, setWindowTitle)
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
	phpqt_qmessagebox_set_window_title(&_0, &title);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_Widgets_QMessageBox_QMessageBox, setWindowModality)
{
	zval *handle_param = NULL, *windowModality_param = NULL, _0, _1;
	zend_long handle, windowModality;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(windowModality)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &windowModality_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, windowModality);
	phpqt_qmessagebox_set_window_modality(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QMessageBox_QMessageBox, buttonClicked)
{
	zval *handle_param = NULL, *button_param = NULL, _0, _1;
	zend_long handle, button;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(button)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &button_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, button);
	phpqt_qmessagebox_button_clicked(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QMessageBox_QMessageBox, event)
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
	r = phpqt_qmessagebox_event(&_0, &_1);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Widgets_QMessageBox_QMessageBox, resizeEvent)
{
	zval *handle_param = NULL, *event_param = NULL, _0, _1;
	zend_long handle, event;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(event)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &event_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, event);
	phpqt_qmessagebox_resize_event(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QMessageBox_QMessageBox, showEvent)
{
	zval *handle_param = NULL, *event_param = NULL, _0, _1;
	zend_long handle, event;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(event)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &event_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, event);
	phpqt_qmessagebox_show_event(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QMessageBox_QMessageBox, closeEvent)
{
	zval *handle_param = NULL, *event_param = NULL, _0, _1;
	zend_long handle, event;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(event)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &event_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, event);
	phpqt_qmessagebox_close_event(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QMessageBox_QMessageBox, keyPressEvent)
{
	zval *handle_param = NULL, *event_param = NULL, _0, _1;
	zend_long handle, event;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(event)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &event_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, event);
	phpqt_qmessagebox_key_press_event(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QMessageBox_QMessageBox, changeEvent)
{
	zval *handle_param = NULL, *event_param = NULL, _0, _1;
	zend_long handle, event;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(event)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &event_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, event);
	phpqt_qmessagebox_change_event(&_0, &_1);
}

