
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
#include "src/widgets-qcolordialog.h"
#include "kernel/operators.h"
#include "kernel/memory.h"
#include "kernel/object.h"
#include "kernel/string.h"


ZEPHIR_INIT_CLASS(Qt_Widgets_QColorDialog_QColorDialog)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Widgets\\QColorDialog, QColorDialog, qt, widgets_qcolordialog_qcolordialog, qt_widgets_qcolordialog_qcolordialog_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Widgets_QColorDialog_QColorDialog, open)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qcolordialog_open(&_0);
}

PHP_METHOD(Qt_Widgets_QColorDialog_QColorDialog, staticMetaObject)
{

	RETURN_LONG(phpqt_qcolordialog_static_meta_object());
}

PHP_METHOD(Qt_Widgets_QColorDialog_QColorDialog, tr)
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
	phpqt_qcolordialog_tr(&result, s, c, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Widgets_QColorDialog_QColorDialog, new_)
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
	RETURN_LONG(phpqt_qcolordialog_new(&_0));
}

PHP_METHOD(Qt_Widgets_QColorDialog_QColorDialog, newQColorQWidget)
{
	zval *initial_param = NULL, *parent__param = NULL, _0, _1;
	zend_long initial, parent_;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_LONG(initial)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(parent_)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 1, &initial_param, &parent__param);
	if (!parent__param) {
		parent_ = 0;
	} else {
		}
	ZVAL_LONG(&_0, initial);
	ZVAL_LONG(&_1, parent_);
	RETURN_LONG(phpqt_qcolordialog_new_q_color_q_widget(&_0, &_1));
}

PHP_METHOD(Qt_Widgets_QColorDialog_QColorDialog, setCurrentColor)
{
	zval *handle_param = NULL, *color_param = NULL, _0, _1;
	zend_long handle, color;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(color)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &color_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, color);
	phpqt_qcolordialog_set_current_color(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QColorDialog_QColorDialog, currentColor)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qcolordialog_current_color(&_0));
}

PHP_METHOD(Qt_Widgets_QColorDialog_QColorDialog, selectedColor)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qcolordialog_selected_color(&_0));
}

PHP_METHOD(Qt_Widgets_QColorDialog_QColorDialog, setOption)
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
	phpqt_qcolordialog_set_option(&_0, &_1, &_2);
}

PHP_METHOD(Qt_Widgets_QColorDialog_QColorDialog, testOption)
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
	r = phpqt_qcolordialog_test_option(&_0, &_1);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Widgets_QColorDialog_QColorDialog, setOptions)
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
	phpqt_qcolordialog_set_options(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QColorDialog_QColorDialog, options)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qcolordialog_options(&_0));
}

PHP_METHOD(Qt_Widgets_QColorDialog_QColorDialog, openQObjectChar)
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
	phpqt_qcolordialog_open_q_object_char(&_0, &_1, member);
}

PHP_METHOD(Qt_Widgets_QColorDialog_QColorDialog, setVisible)
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
	phpqt_qcolordialog_set_visible(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QColorDialog_QColorDialog, getColor)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval title;
	zend_long parent_;
	zval *initial = NULL, initial_sub, *parent__param = NULL, *title_param = NULL, *options = NULL, options_sub, __$null, _0;

	ZVAL_UNDEF(&initial_sub);
	ZVAL_UNDEF(&options_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&title);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(0, 4)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(initial)
		Z_PARAM_LONG(parent_)
		Z_PARAM_STR(title)
		Z_PARAM_ZVAL_OR_NULL(options)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 0, 4, &initial, &parent__param, &title_param, &options);
	if (!initial) {
		initial = &initial_sub;
		initial = &__$null;
	}
	if (!parent__param) {
		parent_ = 0;
	} else {
		}
	if (!title_param) {
		ZEPHIR_INIT_VAR(&title);
		ZVAL_STRING(&title, "");
	} else {
		zephir_get_strval(&title, title_param);
	}
	if (!options) {
		options = &options_sub;
		options = &__$null;
	}
	ZVAL_LONG(&_0, parent_);
	RETURN_MM_LONG(phpqt_qcolordialog_get_color(initial, &_0, &title, options));
}

PHP_METHOD(Qt_Widgets_QColorDialog_QColorDialog, customCount)
{

	RETURN_LONG(phpqt_qcolordialog_custom_count());
}

PHP_METHOD(Qt_Widgets_QColorDialog_QColorDialog, customColor)
{
	zval *index_param = NULL, _0;
	zend_long index;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(index)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &index_param);
	ZVAL_LONG(&_0, index);
	RETURN_LONG(phpqt_qcolordialog_custom_color(&_0));
}

PHP_METHOD(Qt_Widgets_QColorDialog_QColorDialog, setCustomColor)
{
	zval *index_param = NULL, *color_param = NULL, _0, _1;
	zend_long index, color;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(index)
		Z_PARAM_LONG(color)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &index_param, &color_param);
	ZVAL_LONG(&_0, index);
	ZVAL_LONG(&_1, color);
	phpqt_qcolordialog_set_custom_color(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QColorDialog_QColorDialog, standardColor)
{
	zval *index_param = NULL, _0;
	zend_long index;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(index)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &index_param);
	ZVAL_LONG(&_0, index);
	RETURN_LONG(phpqt_qcolordialog_standard_color(&_0));
}

PHP_METHOD(Qt_Widgets_QColorDialog_QColorDialog, setStandardColor)
{
	zval *index_param = NULL, *color_param = NULL, _0, _1;
	zend_long index, color;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(index)
		Z_PARAM_LONG(color)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &index_param, &color_param);
	ZVAL_LONG(&_0, index);
	ZVAL_LONG(&_1, color);
	phpqt_qcolordialog_set_standard_color(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QColorDialog_QColorDialog, currentColorChanged)
{
	zval *handle_param = NULL, *color_param = NULL, _0, _1;
	zend_long handle, color;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(color)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &color_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, color);
	phpqt_qcolordialog_current_color_changed(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QColorDialog_QColorDialog, colorSelected)
{
	zval *handle_param = NULL, *color_param = NULL, _0, _1;
	zend_long handle, color;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(color)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &color_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, color);
	phpqt_qcolordialog_color_selected(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QColorDialog_QColorDialog, changeEvent)
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
	phpqt_qcolordialog_change_event(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QColorDialog_QColorDialog, done)
{
	zval *handle_param = NULL, *result_param = NULL, _0, _1;
	zend_long handle, result;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(result)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &result_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, result);
	phpqt_qcolordialog_done(&_0, &_1);
}

