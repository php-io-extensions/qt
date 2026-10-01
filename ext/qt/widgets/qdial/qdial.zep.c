
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
#include "src/widgets-qdial.h"
#include "kernel/object.h"
#include "kernel/string.h"
#include "kernel/memory.h"
#include "kernel/operators.h"


ZEPHIR_INIT_CLASS(Qt_Widgets_QDial_QDial)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Widgets\\QDial, QDial, qt, widgets_qdial_qdial, qt_widgets_qdial_qdial_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Widgets_QDial_QDial, staticMetaObject)
{

	RETURN_LONG(phpqt_qdial_static_meta_object());
}

PHP_METHOD(Qt_Widgets_QDial_QDial, tr)
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
	phpqt_qdial_tr(&result, s, c, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Widgets_QDial_QDial, new_)
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
	RETURN_LONG(phpqt_qdial_new(&_0));
}

PHP_METHOD(Qt_Widgets_QDial_QDial, wrapping)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qdial_wrapping(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Widgets_QDial_QDial, notchSize)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qdial_notch_size(&_0));
}

PHP_METHOD(Qt_Widgets_QDial_QDial, setNotchTarget)
{
	double target;
	zval *handle_param = NULL, *target_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(target)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &target_param);
	target = zephir_get_doubleval(target_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, target);
	phpqt_qdial_set_notch_target(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QDial_QDial, notchTarget)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_DOUBLE(phpqt_qdial_notch_target(&_0));
}

PHP_METHOD(Qt_Widgets_QDial_QDial, notchesVisible)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qdial_notches_visible(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Widgets_QDial_QDial, sizeHint)
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
	phpqt_qdial_size_hint(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Widgets_QDial_QDial, minimumSizeHint)
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
	phpqt_qdial_minimum_size_hint(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Widgets_QDial_QDial, setNotchesVisible)
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
	phpqt_qdial_set_notches_visible(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QDial_QDial, setWrapping)
{
	zend_bool on;
	zval *handle_param = NULL, *on_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_BOOL(on)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &on_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_BOOL(&_1, (on ? 1 : 0));
	phpqt_qdial_set_wrapping(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QDial_QDial, event)
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
	r = phpqt_qdial_event(&_0, &_1);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Widgets_QDial_QDial, resizeEvent)
{
	zval *handle_param = NULL, *re_param = NULL, _0, _1;
	zend_long handle, re;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(re)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &re_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, re);
	phpqt_qdial_resize_event(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QDial_QDial, paintEvent)
{
	zval *handle_param = NULL, *pe_param = NULL, _0, _1;
	zend_long handle, pe;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(pe)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &pe_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, pe);
	phpqt_qdial_paint_event(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QDial_QDial, mousePressEvent)
{
	zval *handle_param = NULL, *me_param = NULL, _0, _1;
	zend_long handle, me;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(me)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &me_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, me);
	phpqt_qdial_mouse_press_event(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QDial_QDial, mouseReleaseEvent)
{
	zval *handle_param = NULL, *me_param = NULL, _0, _1;
	zend_long handle, me;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(me)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &me_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, me);
	phpqt_qdial_mouse_release_event(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QDial_QDial, mouseMoveEvent)
{
	zval *handle_param = NULL, *me_param = NULL, _0, _1;
	zend_long handle, me;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(me)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &me_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, me);
	phpqt_qdial_mouse_move_event(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QDial_QDial, sliderChange)
{
	zval *handle_param = NULL, *change_param = NULL, _0, _1;
	zend_long handle, change;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(change)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &change_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, change);
	phpqt_qdial_slider_change(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QDial_QDial, initStyleOption)
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
	phpqt_qdial_init_style_option(&_0, &_1);
}

