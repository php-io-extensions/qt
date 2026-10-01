
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
#include "src/widgets-qgraphicswidget.h"
#include "kernel/memory.h"
#include "kernel/operators.h"
#include "kernel/object.h"
#include "kernel/string.h"


ZEPHIR_INIT_CLASS(Qt_Widgets_QGraphicsWidget_QGraphicsWidget)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Widgets\\QGraphicsWidget, QGraphicsWidget, qt, widgets_qgraphicswidget_qgraphicswidget, qt_widgets_qgraphicswidget_qgraphicswidget_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Widgets_QGraphicsWidget_QGraphicsWidget, children)
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
	phpqt_qgraphicswidget_children(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Widgets_QGraphicsWidget_QGraphicsWidget, staticMetaObject)
{

	RETURN_LONG(phpqt_qgraphicswidget_static_meta_object());
}

PHP_METHOD(Qt_Widgets_QGraphicsWidget_QGraphicsWidget, tr)
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
	phpqt_qgraphicswidget_tr(&result, s, c, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Widgets_QGraphicsWidget_QGraphicsWidget, new_)
{
	zval *parent__param = NULL, *wFlags = NULL, wFlags_sub, __$null, _0;
	zend_long parent_;

	ZVAL_UNDEF(&wFlags_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(0, 2)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(parent_)
		Z_PARAM_ZVAL_OR_NULL(wFlags)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(0, 2, &parent__param, &wFlags);
	if (!parent__param) {
		parent_ = 0;
	} else {
		}
	if (!wFlags) {
		wFlags = &wFlags_sub;
		wFlags = &__$null;
	}
	ZVAL_LONG(&_0, parent_);
	RETURN_LONG(phpqt_qgraphicswidget_new(&_0, wFlags));
}

PHP_METHOD(Qt_Widgets_QGraphicsWidget_QGraphicsWidget, layout)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qgraphicswidget_layout(&_0));
}

PHP_METHOD(Qt_Widgets_QGraphicsWidget_QGraphicsWidget, setLayout)
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
	phpqt_qgraphicswidget_set_layout(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QGraphicsWidget_QGraphicsWidget, adjustSize)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qgraphicswidget_adjust_size(&_0);
}

PHP_METHOD(Qt_Widgets_QGraphicsWidget_QGraphicsWidget, layoutDirection)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qgraphicswidget_layout_direction(&_0));
}

PHP_METHOD(Qt_Widgets_QGraphicsWidget_QGraphicsWidget, setLayoutDirection)
{
	zval *handle_param = NULL, *direction_param = NULL, _0, _1;
	zend_long handle, direction;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(direction)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &direction_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, direction);
	phpqt_qgraphicswidget_set_layout_direction(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QGraphicsWidget_QGraphicsWidget, unsetLayoutDirection)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qgraphicswidget_unset_layout_direction(&_0);
}

PHP_METHOD(Qt_Widgets_QGraphicsWidget_QGraphicsWidget, style)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qgraphicswidget_style(&_0));
}

PHP_METHOD(Qt_Widgets_QGraphicsWidget_QGraphicsWidget, setStyle)
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
	phpqt_qgraphicswidget_set_style(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QGraphicsWidget_QGraphicsWidget, font)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qgraphicswidget_font(&_0));
}

PHP_METHOD(Qt_Widgets_QGraphicsWidget_QGraphicsWidget, setFont)
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
	phpqt_qgraphicswidget_set_font(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QGraphicsWidget_QGraphicsWidget, palette)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qgraphicswidget_palette(&_0));
}

PHP_METHOD(Qt_Widgets_QGraphicsWidget_QGraphicsWidget, setPalette)
{
	zval *handle_param = NULL, *palette_param = NULL, _0, _1;
	zend_long handle, palette;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(palette)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &palette_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, palette);
	phpqt_qgraphicswidget_set_palette(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QGraphicsWidget_QGraphicsWidget, autoFillBackground)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qgraphicswidget_auto_fill_background(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Widgets_QGraphicsWidget_QGraphicsWidget, setAutoFillBackground)
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
	phpqt_qgraphicswidget_set_auto_fill_background(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QGraphicsWidget_QGraphicsWidget, resize)
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
	phpqt_qgraphicswidget_resize(&_0, &_1, &_2);
}

PHP_METHOD(Qt_Widgets_QGraphicsWidget_QGraphicsWidget, resizeQrealQreal)
{
	double w, h;
	zval *handle_param = NULL, *w_param = NULL, *h_param = NULL, _0, _1, _2;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(w)
		Z_PARAM_ZVAL(h)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &w_param, &h_param);
	w = zephir_get_doubleval(w_param);
	h = zephir_get_doubleval(h_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, w);
	ZVAL_DOUBLE(&_2, h);
	phpqt_qgraphicswidget_resize_qreal_qreal(&_0, &_1, &_2);
}

PHP_METHOD(Qt_Widgets_QGraphicsWidget_QGraphicsWidget, size)
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
	phpqt_qgraphicswidget_size(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Widgets_QGraphicsWidget_QGraphicsWidget, setGeometry)
{
	double rectX, rectY, rectWidth, rectHeight;
	zval *handle_param = NULL, *rectX_param = NULL, *rectY_param = NULL, *rectWidth_param = NULL, *rectHeight_param = NULL, _0, _1, _2, _3, _4;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZEND_PARSE_PARAMETERS_START(5, 5)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(rectX)
		Z_PARAM_ZVAL(rectY)
		Z_PARAM_ZVAL(rectWidth)
		Z_PARAM_ZVAL(rectHeight)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(5, 0, &handle_param, &rectX_param, &rectY_param, &rectWidth_param, &rectHeight_param);
	rectX = zephir_get_doubleval(rectX_param);
	rectY = zephir_get_doubleval(rectY_param);
	rectWidth = zephir_get_doubleval(rectWidth_param);
	rectHeight = zephir_get_doubleval(rectHeight_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, rectX);
	ZVAL_DOUBLE(&_2, rectY);
	ZVAL_DOUBLE(&_3, rectWidth);
	ZVAL_DOUBLE(&_4, rectHeight);
	phpqt_qgraphicswidget_set_geometry(&_0, &_1, &_2, &_3, &_4);
}

PHP_METHOD(Qt_Widgets_QGraphicsWidget_QGraphicsWidget, setGeometryQrealQrealQrealQreal)
{
	double x, y, w, h;
	zval *handle_param = NULL, *x_param = NULL, *y_param = NULL, *w_param = NULL, *h_param = NULL, _0, _1, _2, _3, _4;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZEND_PARSE_PARAMETERS_START(5, 5)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(x)
		Z_PARAM_ZVAL(y)
		Z_PARAM_ZVAL(w)
		Z_PARAM_ZVAL(h)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(5, 0, &handle_param, &x_param, &y_param, &w_param, &h_param);
	x = zephir_get_doubleval(x_param);
	y = zephir_get_doubleval(y_param);
	w = zephir_get_doubleval(w_param);
	h = zephir_get_doubleval(h_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, x);
	ZVAL_DOUBLE(&_2, y);
	ZVAL_DOUBLE(&_3, w);
	ZVAL_DOUBLE(&_4, h);
	phpqt_qgraphicswidget_set_geometry_qreal_qreal_qreal_qreal(&_0, &_1, &_2, &_3, &_4);
}

PHP_METHOD(Qt_Widgets_QGraphicsWidget_QGraphicsWidget, rect)
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
	phpqt_qgraphicswidget_rect(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Widgets_QGraphicsWidget_QGraphicsWidget, setContentsMargins)
{
	double left, top, right, bottom;
	zval *handle_param = NULL, *left_param = NULL, *top_param = NULL, *right_param = NULL, *bottom_param = NULL, _0, _1, _2, _3, _4;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZEND_PARSE_PARAMETERS_START(5, 5)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(left)
		Z_PARAM_ZVAL(top)
		Z_PARAM_ZVAL(right)
		Z_PARAM_ZVAL(bottom)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(5, 0, &handle_param, &left_param, &top_param, &right_param, &bottom_param);
	left = zephir_get_doubleval(left_param);
	top = zephir_get_doubleval(top_param);
	right = zephir_get_doubleval(right_param);
	bottom = zephir_get_doubleval(bottom_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, left);
	ZVAL_DOUBLE(&_2, top);
	ZVAL_DOUBLE(&_3, right);
	ZVAL_DOUBLE(&_4, bottom);
	phpqt_qgraphicswidget_set_contents_margins(&_0, &_1, &_2, &_3, &_4);
}

PHP_METHOD(Qt_Widgets_QGraphicsWidget_QGraphicsWidget, setContentsMarginsQMarginsF)
{
	double marginsLeft, marginsTop, marginsRight, marginsBottom;
	zval *handle_param = NULL, *marginsLeft_param = NULL, *marginsTop_param = NULL, *marginsRight_param = NULL, *marginsBottom_param = NULL, _0, _1, _2, _3, _4;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZEND_PARSE_PARAMETERS_START(5, 5)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(marginsLeft)
		Z_PARAM_ZVAL(marginsTop)
		Z_PARAM_ZVAL(marginsRight)
		Z_PARAM_ZVAL(marginsBottom)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(5, 0, &handle_param, &marginsLeft_param, &marginsTop_param, &marginsRight_param, &marginsBottom_param);
	marginsLeft = zephir_get_doubleval(marginsLeft_param);
	marginsTop = zephir_get_doubleval(marginsTop_param);
	marginsRight = zephir_get_doubleval(marginsRight_param);
	marginsBottom = zephir_get_doubleval(marginsBottom_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, marginsLeft);
	ZVAL_DOUBLE(&_2, marginsTop);
	ZVAL_DOUBLE(&_3, marginsRight);
	ZVAL_DOUBLE(&_4, marginsBottom);
	phpqt_qgraphicswidget_set_contents_margins_q_margins_f(&_0, &_1, &_2, &_3, &_4);
}

PHP_METHOD(Qt_Widgets_QGraphicsWidget_QGraphicsWidget, getContentsMargins)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, *left = NULL, left_sub, *top = NULL, top_sub, *right = NULL, right_sub, *bottom = NULL, bottom_sub, result, _0;
	zend_long handle;

	ZVAL_UNDEF(&left_sub);
	ZVAL_UNDEF(&top_sub);
	ZVAL_UNDEF(&right_sub);
	ZVAL_UNDEF(&bottom_sub);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(5, 5)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(left)
		Z_PARAM_ZVAL(top)
		Z_PARAM_ZVAL(right)
		Z_PARAM_ZVAL(bottom)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 5, 0, &handle_param, &left, &top, &right, &bottom);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	phpqt_qgraphicswidget_get_contents_margins(&result, &_0, left, top, right, bottom);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Widgets_QGraphicsWidget_QGraphicsWidget, setWindowFrameMargins)
{
	double left, top, right, bottom;
	zval *handle_param = NULL, *left_param = NULL, *top_param = NULL, *right_param = NULL, *bottom_param = NULL, _0, _1, _2, _3, _4;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZEND_PARSE_PARAMETERS_START(5, 5)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(left)
		Z_PARAM_ZVAL(top)
		Z_PARAM_ZVAL(right)
		Z_PARAM_ZVAL(bottom)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(5, 0, &handle_param, &left_param, &top_param, &right_param, &bottom_param);
	left = zephir_get_doubleval(left_param);
	top = zephir_get_doubleval(top_param);
	right = zephir_get_doubleval(right_param);
	bottom = zephir_get_doubleval(bottom_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, left);
	ZVAL_DOUBLE(&_2, top);
	ZVAL_DOUBLE(&_3, right);
	ZVAL_DOUBLE(&_4, bottom);
	phpqt_qgraphicswidget_set_window_frame_margins(&_0, &_1, &_2, &_3, &_4);
}

PHP_METHOD(Qt_Widgets_QGraphicsWidget_QGraphicsWidget, setWindowFrameMarginsQMarginsF)
{
	double marginsLeft, marginsTop, marginsRight, marginsBottom;
	zval *handle_param = NULL, *marginsLeft_param = NULL, *marginsTop_param = NULL, *marginsRight_param = NULL, *marginsBottom_param = NULL, _0, _1, _2, _3, _4;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZEND_PARSE_PARAMETERS_START(5, 5)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(marginsLeft)
		Z_PARAM_ZVAL(marginsTop)
		Z_PARAM_ZVAL(marginsRight)
		Z_PARAM_ZVAL(marginsBottom)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(5, 0, &handle_param, &marginsLeft_param, &marginsTop_param, &marginsRight_param, &marginsBottom_param);
	marginsLeft = zephir_get_doubleval(marginsLeft_param);
	marginsTop = zephir_get_doubleval(marginsTop_param);
	marginsRight = zephir_get_doubleval(marginsRight_param);
	marginsBottom = zephir_get_doubleval(marginsBottom_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, marginsLeft);
	ZVAL_DOUBLE(&_2, marginsTop);
	ZVAL_DOUBLE(&_3, marginsRight);
	ZVAL_DOUBLE(&_4, marginsBottom);
	phpqt_qgraphicswidget_set_window_frame_margins_q_margins_f(&_0, &_1, &_2, &_3, &_4);
}

PHP_METHOD(Qt_Widgets_QGraphicsWidget_QGraphicsWidget, getWindowFrameMargins)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, *left = NULL, left_sub, *top = NULL, top_sub, *right = NULL, right_sub, *bottom = NULL, bottom_sub, result, _0;
	zend_long handle;

	ZVAL_UNDEF(&left_sub);
	ZVAL_UNDEF(&top_sub);
	ZVAL_UNDEF(&right_sub);
	ZVAL_UNDEF(&bottom_sub);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(5, 5)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(left)
		Z_PARAM_ZVAL(top)
		Z_PARAM_ZVAL(right)
		Z_PARAM_ZVAL(bottom)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 5, 0, &handle_param, &left, &top, &right, &bottom);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	phpqt_qgraphicswidget_get_window_frame_margins(&result, &_0, left, top, right, bottom);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Widgets_QGraphicsWidget_QGraphicsWidget, unsetWindowFrameMargins)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qgraphicswidget_unset_window_frame_margins(&_0);
}

PHP_METHOD(Qt_Widgets_QGraphicsWidget_QGraphicsWidget, windowFrameGeometry)
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
	phpqt_qgraphicswidget_window_frame_geometry(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Widgets_QGraphicsWidget_QGraphicsWidget, windowFrameRect)
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
	phpqt_qgraphicswidget_window_frame_rect(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Widgets_QGraphicsWidget_QGraphicsWidget, windowFlags)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qgraphicswidget_window_flags(&_0));
}

PHP_METHOD(Qt_Widgets_QGraphicsWidget_QGraphicsWidget, windowType)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qgraphicswidget_window_type(&_0));
}

PHP_METHOD(Qt_Widgets_QGraphicsWidget_QGraphicsWidget, setWindowFlags)
{
	zval *handle_param = NULL, *wFlags_param = NULL, _0, _1;
	zend_long handle, wFlags;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(wFlags)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &wFlags_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, wFlags);
	phpqt_qgraphicswidget_set_window_flags(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QGraphicsWidget_QGraphicsWidget, isActiveWindow)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qgraphicswidget_is_active_window(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Widgets_QGraphicsWidget_QGraphicsWidget, setWindowTitle)
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
	phpqt_qgraphicswidget_set_window_title(&_0, &title);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_Widgets_QGraphicsWidget_QGraphicsWidget, windowTitle)
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
	phpqt_qgraphicswidget_window_title(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Widgets_QGraphicsWidget_QGraphicsWidget, focusPolicy)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qgraphicswidget_focus_policy(&_0));
}

PHP_METHOD(Qt_Widgets_QGraphicsWidget_QGraphicsWidget, setFocusPolicy)
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
	phpqt_qgraphicswidget_set_focus_policy(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QGraphicsWidget_QGraphicsWidget, setTabOrder)
{
	zval *first_param = NULL, *second_param = NULL, _0, _1;
	zend_long first, second;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(first)
		Z_PARAM_LONG(second)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &first_param, &second_param);
	ZVAL_LONG(&_0, first);
	ZVAL_LONG(&_1, second);
	phpqt_qgraphicswidget_set_tab_order(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QGraphicsWidget_QGraphicsWidget, focusWidget)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qgraphicswidget_focus_widget(&_0));
}

PHP_METHOD(Qt_Widgets_QGraphicsWidget_QGraphicsWidget, grabShortcut)
{
	zval *handle_param = NULL, *sequence_param = NULL, *context = NULL, context_sub, __$null, _0, _1;
	zend_long handle, sequence;

	ZVAL_UNDEF(&context_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(2, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(sequence)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(context)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 1, &handle_param, &sequence_param, &context);
	if (!context) {
		context = &context_sub;
		context = &__$null;
	}
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, sequence);
	RETURN_LONG(phpqt_qgraphicswidget_grab_shortcut(&_0, &_1, context));
}

PHP_METHOD(Qt_Widgets_QGraphicsWidget_QGraphicsWidget, releaseShortcut)
{
	zval *handle_param = NULL, *id_param = NULL, _0, _1;
	zend_long handle, id;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(id)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &id_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, id);
	phpqt_qgraphicswidget_release_shortcut(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QGraphicsWidget_QGraphicsWidget, setShortcutEnabled)
{
	zend_bool enabled;
	zval *handle_param = NULL, *id_param = NULL, *enabled_param = NULL, _0, _1, _2;
	zend_long handle, id;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(2, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(id)
		Z_PARAM_OPTIONAL
		Z_PARAM_BOOL(enabled)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 1, &handle_param, &id_param, &enabled_param);
	if (!enabled_param) {
		enabled = 1;
	} else {
		}
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, id);
	ZVAL_BOOL(&_2, (enabled ? 1 : 0));
	phpqt_qgraphicswidget_set_shortcut_enabled(&_0, &_1, &_2);
}

PHP_METHOD(Qt_Widgets_QGraphicsWidget_QGraphicsWidget, setShortcutAutoRepeat)
{
	zend_bool enabled;
	zval *handle_param = NULL, *id_param = NULL, *enabled_param = NULL, _0, _1, _2;
	zend_long handle, id;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(2, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(id)
		Z_PARAM_OPTIONAL
		Z_PARAM_BOOL(enabled)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 1, &handle_param, &id_param, &enabled_param);
	if (!enabled_param) {
		enabled = 1;
	} else {
		}
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, id);
	ZVAL_BOOL(&_2, (enabled ? 1 : 0));
	phpqt_qgraphicswidget_set_shortcut_auto_repeat(&_0, &_1, &_2);
}

PHP_METHOD(Qt_Widgets_QGraphicsWidget_QGraphicsWidget, addAction)
{
	zval *handle_param = NULL, *action_param = NULL, _0, _1;
	zend_long handle, action;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(action)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &action_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, action);
	phpqt_qgraphicswidget_add_action(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QGraphicsWidget_QGraphicsWidget, addActions)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval actions;
	zval *handle_param = NULL, *actions_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&actions);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ARRAY(actions)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &actions_param);
	zephir_get_arrval(&actions, actions_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qgraphicswidget_add_actions(&_0, &actions);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_Widgets_QGraphicsWidget_QGraphicsWidget, insertActions)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval actions;
	zval *handle_param = NULL, *before_param = NULL, *actions_param = NULL, _0, _1;
	zend_long handle, before;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&actions);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(before)
		Z_PARAM_ARRAY(actions)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 3, 0, &handle_param, &before_param, &actions_param);
	zephir_get_arrval(&actions, actions_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, before);
	phpqt_qgraphicswidget_insert_actions(&_0, &_1, &actions);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_Widgets_QGraphicsWidget_QGraphicsWidget, insertAction)
{
	zval *handle_param = NULL, *before_param = NULL, *action_param = NULL, _0, _1, _2;
	zend_long handle, before, action;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(before)
		Z_PARAM_LONG(action)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &before_param, &action_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, before);
	ZVAL_LONG(&_2, action);
	phpqt_qgraphicswidget_insert_action(&_0, &_1, &_2);
}

PHP_METHOD(Qt_Widgets_QGraphicsWidget_QGraphicsWidget, removeAction)
{
	zval *handle_param = NULL, *action_param = NULL, _0, _1;
	zend_long handle, action;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(action)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &action_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, action);
	phpqt_qgraphicswidget_remove_action(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QGraphicsWidget_QGraphicsWidget, actions)
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
	phpqt_qgraphicswidget_actions(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Widgets_QGraphicsWidget_QGraphicsWidget, setAttribute)
{
	zend_bool on;
	zval *handle_param = NULL, *attribute_param = NULL, *on_param = NULL, _0, _1, _2;
	zend_long handle, attribute;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(2, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(attribute)
		Z_PARAM_OPTIONAL
		Z_PARAM_BOOL(on)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 1, &handle_param, &attribute_param, &on_param);
	if (!on_param) {
		on = 1;
	} else {
		}
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, attribute);
	ZVAL_BOOL(&_2, (on ? 1 : 0));
	phpqt_qgraphicswidget_set_attribute(&_0, &_1, &_2);
}

PHP_METHOD(Qt_Widgets_QGraphicsWidget_QGraphicsWidget, testAttribute)
{
	zval *handle_param = NULL, *attribute_param = NULL, _0, _1;
	zend_long handle, attribute, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(attribute)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &attribute_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, attribute);
	r = phpqt_qgraphicswidget_test_attribute(&_0, &_1);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Widgets_QGraphicsWidget_QGraphicsWidget, type)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qgraphicswidget_type(&_0));
}

PHP_METHOD(Qt_Widgets_QGraphicsWidget_QGraphicsWidget, paint)
{
	zval *handle_param = NULL, *painter_param = NULL, *option_param = NULL, *widget_param = NULL, _0, _1, _2, _3;
	zend_long handle, painter, option, widget;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(3, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(painter)
		Z_PARAM_LONG(option)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(widget)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 1, &handle_param, &painter_param, &option_param, &widget_param);
	if (!widget_param) {
		widget = 0;
	} else {
		}
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, painter);
	ZVAL_LONG(&_2, option);
	ZVAL_LONG(&_3, widget);
	phpqt_qgraphicswidget_paint(&_0, &_1, &_2, &_3);
}

PHP_METHOD(Qt_Widgets_QGraphicsWidget_QGraphicsWidget, paintWindowFrame)
{
	zval *handle_param = NULL, *painter_param = NULL, *option_param = NULL, *widget_param = NULL, _0, _1, _2, _3;
	zend_long handle, painter, option, widget;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(3, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(painter)
		Z_PARAM_LONG(option)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(widget)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 1, &handle_param, &painter_param, &option_param, &widget_param);
	if (!widget_param) {
		widget = 0;
	} else {
		}
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, painter);
	ZVAL_LONG(&_2, option);
	ZVAL_LONG(&_3, widget);
	phpqt_qgraphicswidget_paint_window_frame(&_0, &_1, &_2, &_3);
}

PHP_METHOD(Qt_Widgets_QGraphicsWidget_QGraphicsWidget, boundingRect)
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
	phpqt_qgraphicswidget_bounding_rect(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Widgets_QGraphicsWidget_QGraphicsWidget, shape)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qgraphicswidget_shape(&_0));
}

PHP_METHOD(Qt_Widgets_QGraphicsWidget_QGraphicsWidget, geometryChanged)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qgraphicswidget_geometry_changed(&_0);
}

PHP_METHOD(Qt_Widgets_QGraphicsWidget_QGraphicsWidget, layoutChanged)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qgraphicswidget_layout_changed(&_0);
}

PHP_METHOD(Qt_Widgets_QGraphicsWidget_QGraphicsWidget, close)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qgraphicswidget_close(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Widgets_QGraphicsWidget_QGraphicsWidget, initStyleOption)
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
	phpqt_qgraphicswidget_init_style_option(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QGraphicsWidget_QGraphicsWidget, sizeHint)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, *which_param = NULL, *constraintWidth = NULL, constraintWidth_sub, *constraintHeight = NULL, constraintHeight_sub, __$null, result, _0, _1;
	zend_long handle, which;

	ZVAL_UNDEF(&constraintWidth_sub);
	ZVAL_UNDEF(&constraintHeight_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(2, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(which)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(constraintWidth)
		Z_PARAM_ZVAL_OR_NULL(constraintHeight)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 2, &handle_param, &which_param, &constraintWidth, &constraintHeight);
	if (!constraintWidth) {
		constraintWidth = &constraintWidth_sub;
		constraintWidth = &__$null;
	}
	if (!constraintHeight) {
		constraintHeight = &constraintHeight_sub;
		constraintHeight = &__$null;
	}
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, which);
	phpqt_qgraphicswidget_size_hint(&result, &_0, &_1, constraintWidth, constraintHeight);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Widgets_QGraphicsWidget_QGraphicsWidget, updateGeometry)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qgraphicswidget_update_geometry(&_0);
}

PHP_METHOD(Qt_Widgets_QGraphicsWidget_QGraphicsWidget, itemChange)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, *change_param = NULL, *value = NULL, value_sub, result, _0, _1;
	zend_long handle, change;

	ZVAL_UNDEF(&value_sub);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(change)
		Z_PARAM_ZVAL(value)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 3, 0, &handle_param, &change_param, &value);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, change);
	phpqt_qgraphicswidget_item_change(&result, &_0, &_1, value);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Widgets_QGraphicsWidget_QGraphicsWidget, propertyChange)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval propertyName;
	zval *handle_param = NULL, *propertyName_param = NULL, *value = NULL, value_sub, result, _0;
	zend_long handle;

	ZVAL_UNDEF(&value_sub);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&propertyName);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(propertyName)
		Z_PARAM_ZVAL(value)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 3, 0, &handle_param, &propertyName_param, &value);
	zephir_get_strval(&propertyName, propertyName_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	phpqt_qgraphicswidget_property_change(&result, &_0, &propertyName, value);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Widgets_QGraphicsWidget_QGraphicsWidget, sceneEvent)
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
	r = phpqt_qgraphicswidget_scene_event(&_0, &_1);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Widgets_QGraphicsWidget_QGraphicsWidget, windowFrameEvent)
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
	r = phpqt_qgraphicswidget_window_frame_event(&_0, &_1);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Widgets_QGraphicsWidget_QGraphicsWidget, windowFrameSectionAt)
{
	double posX, posY;
	zval *handle_param = NULL, *posX_param = NULL, *posY_param = NULL, _0, _1, _2;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(posX)
		Z_PARAM_ZVAL(posY)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &posX_param, &posY_param);
	posX = zephir_get_doubleval(posX_param);
	posY = zephir_get_doubleval(posY_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, posX);
	ZVAL_DOUBLE(&_2, posY);
	RETURN_LONG(phpqt_qgraphicswidget_window_frame_section_at(&_0, &_1, &_2));
}

PHP_METHOD(Qt_Widgets_QGraphicsWidget_QGraphicsWidget, event)
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
	r = phpqt_qgraphicswidget_event(&_0, &_1);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Widgets_QGraphicsWidget_QGraphicsWidget, changeEvent)
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
	phpqt_qgraphicswidget_change_event(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QGraphicsWidget_QGraphicsWidget, closeEvent)
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
	phpqt_qgraphicswidget_close_event(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QGraphicsWidget_QGraphicsWidget, focusInEvent)
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
	phpqt_qgraphicswidget_focus_in_event(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QGraphicsWidget_QGraphicsWidget, focusNextPrevChild)
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
	r = phpqt_qgraphicswidget_focus_next_prev_child(&_0, &_1);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Widgets_QGraphicsWidget_QGraphicsWidget, focusOutEvent)
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
	phpqt_qgraphicswidget_focus_out_event(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QGraphicsWidget_QGraphicsWidget, hideEvent)
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
	phpqt_qgraphicswidget_hide_event(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QGraphicsWidget_QGraphicsWidget, moveEvent)
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
	phpqt_qgraphicswidget_move_event(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QGraphicsWidget_QGraphicsWidget, polishEvent)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qgraphicswidget_polish_event(&_0);
}

PHP_METHOD(Qt_Widgets_QGraphicsWidget_QGraphicsWidget, resizeEvent)
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
	phpqt_qgraphicswidget_resize_event(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QGraphicsWidget_QGraphicsWidget, showEvent)
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
	phpqt_qgraphicswidget_show_event(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QGraphicsWidget_QGraphicsWidget, hoverMoveEvent)
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
	phpqt_qgraphicswidget_hover_move_event(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QGraphicsWidget_QGraphicsWidget, hoverLeaveEvent)
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
	phpqt_qgraphicswidget_hover_leave_event(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QGraphicsWidget_QGraphicsWidget, grabMouseEvent)
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
	phpqt_qgraphicswidget_grab_mouse_event(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QGraphicsWidget_QGraphicsWidget, ungrabMouseEvent)
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
	phpqt_qgraphicswidget_ungrab_mouse_event(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QGraphicsWidget_QGraphicsWidget, grabKeyboardEvent)
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
	phpqt_qgraphicswidget_grab_keyboard_event(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QGraphicsWidget_QGraphicsWidget, ungrabKeyboardEvent)
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
	phpqt_qgraphicswidget_ungrab_keyboard_event(&_0, &_1);
}

