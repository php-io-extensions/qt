
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
#include "src/widgets-qdialogbuttonbox.h"
#include "kernel/object.h"
#include "kernel/string.h"
#include "kernel/memory.h"
#include "kernel/operators.h"


ZEPHIR_INIT_CLASS(Qt_Widgets_QDialogButtonBox_QDialogButtonBox)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Widgets\\QDialogButtonBox, QDialogButtonBox, qt, widgets_qdialogbuttonbox_qdialogbuttonbox, qt_widgets_qdialogbuttonbox_qdialogbuttonbox_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Widgets_QDialogButtonBox_QDialogButtonBox, staticMetaObject)
{

	RETURN_LONG(phpqt_qdialogbuttonbox_static_meta_object());
}

PHP_METHOD(Qt_Widgets_QDialogButtonBox_QDialogButtonBox, tr)
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
	phpqt_qdialogbuttonbox_tr(&result, s, c, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Widgets_QDialogButtonBox_QDialogButtonBox, new_)
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
	RETURN_LONG(phpqt_qdialogbuttonbox_new(&_0));
}

PHP_METHOD(Qt_Widgets_QDialogButtonBox_QDialogButtonBox, newQtOrientationQWidget)
{
	zval *orientation_param = NULL, *parent__param = NULL, _0, _1;
	zend_long orientation, parent_;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_LONG(orientation)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(parent_)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 1, &orientation_param, &parent__param);
	if (!parent__param) {
		parent_ = 0;
	} else {
		}
	ZVAL_LONG(&_0, orientation);
	ZVAL_LONG(&_1, parent_);
	RETURN_LONG(phpqt_qdialogbuttonbox_new_qt_orientation_q_widget(&_0, &_1));
}

PHP_METHOD(Qt_Widgets_QDialogButtonBox_QDialogButtonBox, newQDialogButtonBoxStandardButtonsQWidget)
{
	zval *buttons_param = NULL, *parent__param = NULL, _0, _1;
	zend_long buttons, parent_;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_LONG(buttons)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(parent_)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 1, &buttons_param, &parent__param);
	if (!parent__param) {
		parent_ = 0;
	} else {
		}
	ZVAL_LONG(&_0, buttons);
	ZVAL_LONG(&_1, parent_);
	RETURN_LONG(phpqt_qdialogbuttonbox_new_q_dialog_button_box_standard_buttons_q_widget(&_0, &_1));
}

PHP_METHOD(Qt_Widgets_QDialogButtonBox_QDialogButtonBox, newQDialogButtonBoxStandardButtonsQtOrientationQWidget)
{
	zval *buttons_param = NULL, *orientation_param = NULL, *parent__param = NULL, _0, _1, _2;
	zend_long buttons, orientation, parent_;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(2, 3)
		Z_PARAM_LONG(buttons)
		Z_PARAM_LONG(orientation)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(parent_)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 1, &buttons_param, &orientation_param, &parent__param);
	if (!parent__param) {
		parent_ = 0;
	} else {
		}
	ZVAL_LONG(&_0, buttons);
	ZVAL_LONG(&_1, orientation);
	ZVAL_LONG(&_2, parent_);
	RETURN_LONG(phpqt_qdialogbuttonbox_new_q_dialog_button_box_standard_buttons_qt_orientation_q_widget(&_0, &_1, &_2));
}

PHP_METHOD(Qt_Widgets_QDialogButtonBox_QDialogButtonBox, setOrientation)
{
	zval *handle_param = NULL, *orientation_param = NULL, _0, _1;
	zend_long handle, orientation;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(orientation)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &orientation_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, orientation);
	phpqt_qdialogbuttonbox_set_orientation(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QDialogButtonBox_QDialogButtonBox, orientation)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qdialogbuttonbox_orientation(&_0));
}

PHP_METHOD(Qt_Widgets_QDialogButtonBox_QDialogButtonBox, addButton)
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
	phpqt_qdialogbuttonbox_add_button(&_0, &_1, &_2);
}

PHP_METHOD(Qt_Widgets_QDialogButtonBox_QDialogButtonBox, addButtonQStringQDialogButtonBoxButtonRole)
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
	RETURN_MM_LONG(phpqt_qdialogbuttonbox_add_button_q_string_q_dialog_button_box_button_role(&_0, &text, &_1));
}

PHP_METHOD(Qt_Widgets_QDialogButtonBox_QDialogButtonBox, addButtonQDialogButtonBoxStandardButton)
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
	RETURN_LONG(phpqt_qdialogbuttonbox_add_button_q_dialog_button_box_standard_button(&_0, &_1));
}

PHP_METHOD(Qt_Widgets_QDialogButtonBox_QDialogButtonBox, removeButton)
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
	phpqt_qdialogbuttonbox_remove_button(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QDialogButtonBox_QDialogButtonBox, clear)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qdialogbuttonbox_clear(&_0);
}

PHP_METHOD(Qt_Widgets_QDialogButtonBox_QDialogButtonBox, buttons)
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
	phpqt_qdialogbuttonbox_buttons(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Widgets_QDialogButtonBox_QDialogButtonBox, buttonRole)
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
	RETURN_LONG(phpqt_qdialogbuttonbox_button_role(&_0, &_1));
}

PHP_METHOD(Qt_Widgets_QDialogButtonBox_QDialogButtonBox, setStandardButtons)
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
	phpqt_qdialogbuttonbox_set_standard_buttons(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QDialogButtonBox_QDialogButtonBox, standardButtons)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qdialogbuttonbox_standard_buttons(&_0));
}

PHP_METHOD(Qt_Widgets_QDialogButtonBox_QDialogButtonBox, standardButton)
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
	RETURN_LONG(phpqt_qdialogbuttonbox_standard_button(&_0, &_1));
}

PHP_METHOD(Qt_Widgets_QDialogButtonBox_QDialogButtonBox, button)
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
	RETURN_LONG(phpqt_qdialogbuttonbox_button(&_0, &_1));
}

PHP_METHOD(Qt_Widgets_QDialogButtonBox_QDialogButtonBox, setCenterButtons)
{
	zend_bool center;
	zval *handle_param = NULL, *center_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_BOOL(center)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &center_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_BOOL(&_1, (center ? 1 : 0));
	phpqt_qdialogbuttonbox_set_center_buttons(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QDialogButtonBox_QDialogButtonBox, centerButtons)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qdialogbuttonbox_center_buttons(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Widgets_QDialogButtonBox_QDialogButtonBox, clicked)
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
	phpqt_qdialogbuttonbox_clicked(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QDialogButtonBox_QDialogButtonBox, accepted)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qdialogbuttonbox_accepted(&_0);
}

PHP_METHOD(Qt_Widgets_QDialogButtonBox_QDialogButtonBox, helpRequested)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qdialogbuttonbox_help_requested(&_0);
}

PHP_METHOD(Qt_Widgets_QDialogButtonBox_QDialogButtonBox, rejected)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qdialogbuttonbox_rejected(&_0);
}

PHP_METHOD(Qt_Widgets_QDialogButtonBox_QDialogButtonBox, changeEvent)
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
	phpqt_qdialogbuttonbox_change_event(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QDialogButtonBox_QDialogButtonBox, event)
{
	zval *handle_param = NULL, *event_param = NULL, _0, _1;
	zend_long handle, event, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(event)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &event_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, event);
	r = phpqt_qdialogbuttonbox_event(&_0, &_1);
	RETURN_BOOL(r == 1);
}

