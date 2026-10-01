
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
#include "src/widgets-qmdisubwindow.h"
#include "kernel/object.h"
#include "kernel/string.h"
#include "kernel/memory.h"
#include "kernel/operators.h"


ZEPHIR_INIT_CLASS(Qt_Widgets_QMdiSubWindow_QMdiSubWindow)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Widgets\\QMdiSubWindow, QMdiSubWindow, qt, widgets_qmdisubwindow_qmdisubwindow, qt_widgets_qmdisubwindow_qmdisubwindow_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Widgets_QMdiSubWindow_QMdiSubWindow, staticMetaObject)
{

	RETURN_LONG(phpqt_qmdisubwindow_static_meta_object());
}

PHP_METHOD(Qt_Widgets_QMdiSubWindow_QMdiSubWindow, tr)
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
	phpqt_qmdisubwindow_tr(&result, s, c, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Widgets_QMdiSubWindow_QMdiSubWindow, new_)
{
	zval *parent__param = NULL, *flags = NULL, flags_sub, __$null, _0;
	zend_long parent_;

	ZVAL_UNDEF(&flags_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(0, 2)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(parent_)
		Z_PARAM_ZVAL_OR_NULL(flags)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(0, 2, &parent__param, &flags);
	if (!parent__param) {
		parent_ = 0;
	} else {
		}
	if (!flags) {
		flags = &flags_sub;
		flags = &__$null;
	}
	ZVAL_LONG(&_0, parent_);
	RETURN_LONG(phpqt_qmdisubwindow_new(&_0, flags));
}

PHP_METHOD(Qt_Widgets_QMdiSubWindow_QMdiSubWindow, sizeHint)
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
	phpqt_qmdisubwindow_size_hint(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Widgets_QMdiSubWindow_QMdiSubWindow, minimumSizeHint)
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
	phpqt_qmdisubwindow_minimum_size_hint(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Widgets_QMdiSubWindow_QMdiSubWindow, setWidget)
{
	zval *handle_param = NULL, *widget_param = NULL, _0, _1;
	zend_long handle, widget;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(widget)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &widget_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, widget);
	phpqt_qmdisubwindow_set_widget(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QMdiSubWindow_QMdiSubWindow, widget)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qmdisubwindow_widget(&_0));
}

PHP_METHOD(Qt_Widgets_QMdiSubWindow_QMdiSubWindow, maximizedButtonsWidget)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qmdisubwindow_maximized_buttons_widget(&_0));
}

PHP_METHOD(Qt_Widgets_QMdiSubWindow_QMdiSubWindow, maximizedSystemMenuIconWidget)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qmdisubwindow_maximized_system_menu_icon_widget(&_0));
}

PHP_METHOD(Qt_Widgets_QMdiSubWindow_QMdiSubWindow, isShaded)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qmdisubwindow_is_shaded(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Widgets_QMdiSubWindow_QMdiSubWindow, setOption)
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
	phpqt_qmdisubwindow_set_option(&_0, &_1, &_2);
}

PHP_METHOD(Qt_Widgets_QMdiSubWindow_QMdiSubWindow, testOption)
{
	zval *handle_param = NULL, *arg0_param = NULL, _0, _1;
	zend_long handle, arg0, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(arg0)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &arg0_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, arg0);
	r = phpqt_qmdisubwindow_test_option(&_0, &_1);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Widgets_QMdiSubWindow_QMdiSubWindow, setKeyboardSingleStep)
{
	zval *handle_param = NULL, *step_param = NULL, _0, _1;
	zend_long handle, step;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(step)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &step_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, step);
	phpqt_qmdisubwindow_set_keyboard_single_step(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QMdiSubWindow_QMdiSubWindow, keyboardSingleStep)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qmdisubwindow_keyboard_single_step(&_0));
}

PHP_METHOD(Qt_Widgets_QMdiSubWindow_QMdiSubWindow, setKeyboardPageStep)
{
	zval *handle_param = NULL, *step_param = NULL, _0, _1;
	zend_long handle, step;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(step)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &step_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, step);
	phpqt_qmdisubwindow_set_keyboard_page_step(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QMdiSubWindow_QMdiSubWindow, keyboardPageStep)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qmdisubwindow_keyboard_page_step(&_0));
}

PHP_METHOD(Qt_Widgets_QMdiSubWindow_QMdiSubWindow, setSystemMenu)
{
	zval *handle_param = NULL, *systemMenu_param = NULL, _0, _1;
	zend_long handle, systemMenu;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(systemMenu)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &systemMenu_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, systemMenu);
	phpqt_qmdisubwindow_set_system_menu(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QMdiSubWindow_QMdiSubWindow, systemMenu)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qmdisubwindow_system_menu(&_0));
}

PHP_METHOD(Qt_Widgets_QMdiSubWindow_QMdiSubWindow, mdiArea)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qmdisubwindow_mdi_area(&_0));
}

PHP_METHOD(Qt_Widgets_QMdiSubWindow_QMdiSubWindow, windowStateChanged)
{
	zval *handle_param = NULL, *oldState_param = NULL, *newState_param = NULL, _0, _1, _2;
	zend_long handle, oldState, newState;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(oldState)
		Z_PARAM_LONG(newState)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &oldState_param, &newState_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, oldState);
	ZVAL_LONG(&_2, newState);
	phpqt_qmdisubwindow_window_state_changed(&_0, &_1, &_2);
}

PHP_METHOD(Qt_Widgets_QMdiSubWindow_QMdiSubWindow, aboutToActivate)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qmdisubwindow_about_to_activate(&_0);
}

PHP_METHOD(Qt_Widgets_QMdiSubWindow_QMdiSubWindow, showSystemMenu)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qmdisubwindow_show_system_menu(&_0);
}

PHP_METHOD(Qt_Widgets_QMdiSubWindow_QMdiSubWindow, showShaded)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qmdisubwindow_show_shaded(&_0);
}

PHP_METHOD(Qt_Widgets_QMdiSubWindow_QMdiSubWindow, eventFilter)
{
	zval *handle_param = NULL, *object__param = NULL, *event_param = NULL, _0, _1, _2;
	zend_long handle, object_, event, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(object_)
		Z_PARAM_LONG(event)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &object__param, &event_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, object_);
	ZVAL_LONG(&_2, event);
	r = phpqt_qmdisubwindow_event_filter(&_0, &_1, &_2);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Widgets_QMdiSubWindow_QMdiSubWindow, event)
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
	r = phpqt_qmdisubwindow_event(&_0, &_1);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Widgets_QMdiSubWindow_QMdiSubWindow, showEvent)
{
	zval *handle_param = NULL, *showEvent_param = NULL, _0, _1;
	zend_long handle, showEvent;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(showEvent)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &showEvent_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, showEvent);
	phpqt_qmdisubwindow_show_event(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QMdiSubWindow_QMdiSubWindow, hideEvent)
{
	zval *handle_param = NULL, *hideEvent_param = NULL, _0, _1;
	zend_long handle, hideEvent;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(hideEvent)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &hideEvent_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, hideEvent);
	phpqt_qmdisubwindow_hide_event(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QMdiSubWindow_QMdiSubWindow, changeEvent)
{
	zval *handle_param = NULL, *changeEvent_param = NULL, _0, _1;
	zend_long handle, changeEvent;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(changeEvent)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &changeEvent_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, changeEvent);
	phpqt_qmdisubwindow_change_event(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QMdiSubWindow_QMdiSubWindow, closeEvent)
{
	zval *handle_param = NULL, *closeEvent_param = NULL, _0, _1;
	zend_long handle, closeEvent;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(closeEvent)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &closeEvent_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, closeEvent);
	phpqt_qmdisubwindow_close_event(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QMdiSubWindow_QMdiSubWindow, leaveEvent)
{
	zval *handle_param = NULL, *leaveEvent_param = NULL, _0, _1;
	zend_long handle, leaveEvent;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(leaveEvent)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &leaveEvent_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, leaveEvent);
	phpqt_qmdisubwindow_leave_event(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QMdiSubWindow_QMdiSubWindow, resizeEvent)
{
	zval *handle_param = NULL, *resizeEvent_param = NULL, _0, _1;
	zend_long handle, resizeEvent;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(resizeEvent)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &resizeEvent_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, resizeEvent);
	phpqt_qmdisubwindow_resize_event(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QMdiSubWindow_QMdiSubWindow, timerEvent)
{
	zval *handle_param = NULL, *timerEvent_param = NULL, _0, _1;
	zend_long handle, timerEvent;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(timerEvent)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &timerEvent_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, timerEvent);
	phpqt_qmdisubwindow_timer_event(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QMdiSubWindow_QMdiSubWindow, moveEvent)
{
	zval *handle_param = NULL, *moveEvent_param = NULL, _0, _1;
	zend_long handle, moveEvent;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(moveEvent)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &moveEvent_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, moveEvent);
	phpqt_qmdisubwindow_move_event(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QMdiSubWindow_QMdiSubWindow, paintEvent)
{
	zval *handle_param = NULL, *paintEvent_param = NULL, _0, _1;
	zend_long handle, paintEvent;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(paintEvent)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &paintEvent_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, paintEvent);
	phpqt_qmdisubwindow_paint_event(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QMdiSubWindow_QMdiSubWindow, mousePressEvent)
{
	zval *handle_param = NULL, *mouseEvent_param = NULL, _0, _1;
	zend_long handle, mouseEvent;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(mouseEvent)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &mouseEvent_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, mouseEvent);
	phpqt_qmdisubwindow_mouse_press_event(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QMdiSubWindow_QMdiSubWindow, mouseDoubleClickEvent)
{
	zval *handle_param = NULL, *mouseEvent_param = NULL, _0, _1;
	zend_long handle, mouseEvent;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(mouseEvent)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &mouseEvent_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, mouseEvent);
	phpqt_qmdisubwindow_mouse_double_click_event(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QMdiSubWindow_QMdiSubWindow, mouseReleaseEvent)
{
	zval *handle_param = NULL, *mouseEvent_param = NULL, _0, _1;
	zend_long handle, mouseEvent;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(mouseEvent)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &mouseEvent_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, mouseEvent);
	phpqt_qmdisubwindow_mouse_release_event(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QMdiSubWindow_QMdiSubWindow, mouseMoveEvent)
{
	zval *handle_param = NULL, *mouseEvent_param = NULL, _0, _1;
	zend_long handle, mouseEvent;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(mouseEvent)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &mouseEvent_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, mouseEvent);
	phpqt_qmdisubwindow_mouse_move_event(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QMdiSubWindow_QMdiSubWindow, keyPressEvent)
{
	zval *handle_param = NULL, *keyEvent_param = NULL, _0, _1;
	zend_long handle, keyEvent;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(keyEvent)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &keyEvent_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, keyEvent);
	phpqt_qmdisubwindow_key_press_event(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QMdiSubWindow_QMdiSubWindow, contextMenuEvent)
{
	zval *handle_param = NULL, *contextMenuEvent_param = NULL, _0, _1;
	zend_long handle, contextMenuEvent;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(contextMenuEvent)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &contextMenuEvent_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, contextMenuEvent);
	phpqt_qmdisubwindow_context_menu_event(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QMdiSubWindow_QMdiSubWindow, focusInEvent)
{
	zval *handle_param = NULL, *focusInEvent_param = NULL, _0, _1;
	zend_long handle, focusInEvent;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(focusInEvent)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &focusInEvent_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, focusInEvent);
	phpqt_qmdisubwindow_focus_in_event(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QMdiSubWindow_QMdiSubWindow, focusOutEvent)
{
	zval *handle_param = NULL, *focusOutEvent_param = NULL, _0, _1;
	zend_long handle, focusOutEvent;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(focusOutEvent)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &focusOutEvent_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, focusOutEvent);
	phpqt_qmdisubwindow_focus_out_event(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QMdiSubWindow_QMdiSubWindow, childEvent)
{
	zval *handle_param = NULL, *childEvent_param = NULL, _0, _1;
	zend_long handle, childEvent;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(childEvent)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &childEvent_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, childEvent);
	phpqt_qmdisubwindow_child_event(&_0, &_1);
}

