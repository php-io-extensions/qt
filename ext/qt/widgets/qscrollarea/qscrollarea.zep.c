
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
#include "src/widgets-qscrollarea.h"
#include "kernel/object.h"
#include "kernel/string.h"
#include "kernel/memory.h"
#include "kernel/operators.h"


ZEPHIR_INIT_CLASS(Qt_Widgets_QScrollArea_QScrollArea)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Widgets\\QScrollArea, QScrollArea, qt, widgets_qscrollarea_qscrollarea, qt_widgets_qscrollarea_qscrollarea_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Widgets_QScrollArea_QScrollArea, staticMetaObject)
{

	RETURN_LONG(phpqt_qscrollarea_static_meta_object());
}

PHP_METHOD(Qt_Widgets_QScrollArea_QScrollArea, tr)
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
	phpqt_qscrollarea_tr(&result, s, c, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Widgets_QScrollArea_QScrollArea, new_)
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
	RETURN_LONG(phpqt_qscrollarea_new(&_0));
}

PHP_METHOD(Qt_Widgets_QScrollArea_QScrollArea, widget)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qscrollarea_widget(&_0));
}

PHP_METHOD(Qt_Widgets_QScrollArea_QScrollArea, setWidget)
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
	phpqt_qscrollarea_set_widget(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QScrollArea_QScrollArea, takeWidget)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qscrollarea_take_widget(&_0));
}

PHP_METHOD(Qt_Widgets_QScrollArea_QScrollArea, widgetResizable)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qscrollarea_widget_resizable(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Widgets_QScrollArea_QScrollArea, setWidgetResizable)
{
	zend_bool resizable;
	zval *handle_param = NULL, *resizable_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_BOOL(resizable)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &resizable_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_BOOL(&_1, (resizable ? 1 : 0));
	phpqt_qscrollarea_set_widget_resizable(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QScrollArea_QScrollArea, sizeHint)
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
	phpqt_qscrollarea_size_hint(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Widgets_QScrollArea_QScrollArea, focusNextPrevChild)
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
	r = phpqt_qscrollarea_focus_next_prev_child(&_0, &_1);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Widgets_QScrollArea_QScrollArea, alignment)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qscrollarea_alignment(&_0));
}

PHP_METHOD(Qt_Widgets_QScrollArea_QScrollArea, setAlignment)
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
	phpqt_qscrollarea_set_alignment(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QScrollArea_QScrollArea, ensureVisible)
{
	zval *handle_param = NULL, *x_param = NULL, *y_param = NULL, *xmargin_param = NULL, *ymargin_param = NULL, _0, _1, _2, _3, _4;
	zend_long handle, x, y, xmargin, ymargin;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZEND_PARSE_PARAMETERS_START(3, 5)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(x)
		Z_PARAM_LONG(y)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(xmargin)
		Z_PARAM_LONG(ymargin)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 2, &handle_param, &x_param, &y_param, &xmargin_param, &ymargin_param);
	if (!xmargin_param) {
		xmargin = 50;
	} else {
		}
	if (!ymargin_param) {
		ymargin = 50;
	} else {
		}
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, x);
	ZVAL_LONG(&_2, y);
	ZVAL_LONG(&_3, xmargin);
	ZVAL_LONG(&_4, ymargin);
	phpqt_qscrollarea_ensure_visible(&_0, &_1, &_2, &_3, &_4);
}

PHP_METHOD(Qt_Widgets_QScrollArea_QScrollArea, ensureWidgetVisible)
{
	zval *handle_param = NULL, *childWidget_param = NULL, *xmargin_param = NULL, *ymargin_param = NULL, _0, _1, _2, _3;
	zend_long handle, childWidget, xmargin, ymargin;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(2, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(childWidget)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(xmargin)
		Z_PARAM_LONG(ymargin)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 2, &handle_param, &childWidget_param, &xmargin_param, &ymargin_param);
	if (!xmargin_param) {
		xmargin = 50;
	} else {
		}
	if (!ymargin_param) {
		ymargin = 50;
	} else {
		}
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, childWidget);
	ZVAL_LONG(&_2, xmargin);
	ZVAL_LONG(&_3, ymargin);
	phpqt_qscrollarea_ensure_widget_visible(&_0, &_1, &_2, &_3);
}

PHP_METHOD(Qt_Widgets_QScrollArea_QScrollArea, event)
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
	r = phpqt_qscrollarea_event(&_0, &_1);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Widgets_QScrollArea_QScrollArea, eventFilter)
{
	zval *handle_param = NULL, *arg0_param = NULL, *arg1_param = NULL, _0, _1, _2;
	zend_long handle, arg0, arg1, r = 0;

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
	r = phpqt_qscrollarea_event_filter(&_0, &_1, &_2);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Widgets_QScrollArea_QScrollArea, resizeEvent)
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
	phpqt_qscrollarea_resize_event(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QScrollArea_QScrollArea, scrollContentsBy)
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
	phpqt_qscrollarea_scroll_contents_by(&_0, &_1, &_2);
}

PHP_METHOD(Qt_Widgets_QScrollArea_QScrollArea, viewportSizeHint)
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
	phpqt_qscrollarea_viewport_size_hint(&result, &_0);
	RETURN_CCTOR(&result);
}

