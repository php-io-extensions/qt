
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
#include "src/widgets-qgraphicsdropshadoweffect.h"
#include "kernel/object.h"
#include "kernel/string.h"
#include "kernel/memory.h"
#include "kernel/operators.h"


ZEPHIR_INIT_CLASS(Qt_Widgets_QGraphicsDropShadowEffect_QGraphicsDropShadowEffect)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Widgets\\QGraphicsDropShadowEffect, QGraphicsDropShadowEffect, qt, widgets_qgraphicsdropshadoweffect_qgraphicsdropshadoweffect, qt_widgets_qgraphicsdropshadoweffect_qgraphicsdropshadoweffect_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Widgets_QGraphicsDropShadowEffect_QGraphicsDropShadowEffect, staticMetaObject)
{

	RETURN_LONG(phpqt_qgraphicsdropshadoweffect_static_meta_object());
}

PHP_METHOD(Qt_Widgets_QGraphicsDropShadowEffect_QGraphicsDropShadowEffect, tr)
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
	phpqt_qgraphicsdropshadoweffect_tr(&result, s, c, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Widgets_QGraphicsDropShadowEffect_QGraphicsDropShadowEffect, new_)
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
	RETURN_LONG(phpqt_qgraphicsdropshadoweffect_new(&_0));
}

PHP_METHOD(Qt_Widgets_QGraphicsDropShadowEffect_QGraphicsDropShadowEffect, boundingRectFor)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	double rectX, rectY, rectWidth, rectHeight;
	zval *handle_param = NULL, *rectX_param = NULL, *rectY_param = NULL, *rectWidth_param = NULL, *rectHeight_param = NULL, result, _0, _1, _2, _3, _4;
	zend_long handle;

	ZVAL_UNDEF(&result);
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
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 5, 0, &handle_param, &rectX_param, &rectY_param, &rectWidth_param, &rectHeight_param);
	rectX = zephir_get_doubleval(rectX_param);
	rectY = zephir_get_doubleval(rectY_param);
	rectWidth = zephir_get_doubleval(rectWidth_param);
	rectHeight = zephir_get_doubleval(rectHeight_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, rectX);
	ZVAL_DOUBLE(&_2, rectY);
	ZVAL_DOUBLE(&_3, rectWidth);
	ZVAL_DOUBLE(&_4, rectHeight);
	phpqt_qgraphicsdropshadoweffect_bounding_rect_for(&result, &_0, &_1, &_2, &_3, &_4);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Widgets_QGraphicsDropShadowEffect_QGraphicsDropShadowEffect, offset)
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
	phpqt_qgraphicsdropshadoweffect_offset(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Widgets_QGraphicsDropShadowEffect_QGraphicsDropShadowEffect, xOffset)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_DOUBLE(phpqt_qgraphicsdropshadoweffect_x_offset(&_0));
}

PHP_METHOD(Qt_Widgets_QGraphicsDropShadowEffect_QGraphicsDropShadowEffect, yOffset)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_DOUBLE(phpqt_qgraphicsdropshadoweffect_y_offset(&_0));
}

PHP_METHOD(Qt_Widgets_QGraphicsDropShadowEffect_QGraphicsDropShadowEffect, blurRadius)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_DOUBLE(phpqt_qgraphicsdropshadoweffect_blur_radius(&_0));
}

PHP_METHOD(Qt_Widgets_QGraphicsDropShadowEffect_QGraphicsDropShadowEffect, color)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qgraphicsdropshadoweffect_color(&_0));
}

PHP_METHOD(Qt_Widgets_QGraphicsDropShadowEffect_QGraphicsDropShadowEffect, setOffset)
{
	double ofsX, ofsY;
	zval *handle_param = NULL, *ofsX_param = NULL, *ofsY_param = NULL, _0, _1, _2;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(ofsX)
		Z_PARAM_ZVAL(ofsY)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &ofsX_param, &ofsY_param);
	ofsX = zephir_get_doubleval(ofsX_param);
	ofsY = zephir_get_doubleval(ofsY_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, ofsX);
	ZVAL_DOUBLE(&_2, ofsY);
	phpqt_qgraphicsdropshadoweffect_set_offset(&_0, &_1, &_2);
}

PHP_METHOD(Qt_Widgets_QGraphicsDropShadowEffect_QGraphicsDropShadowEffect, setOffsetQrealQreal)
{
	double dx, dy;
	zval *handle_param = NULL, *dx_param = NULL, *dy_param = NULL, _0, _1, _2;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(dx)
		Z_PARAM_ZVAL(dy)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &dx_param, &dy_param);
	dx = zephir_get_doubleval(dx_param);
	dy = zephir_get_doubleval(dy_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, dx);
	ZVAL_DOUBLE(&_2, dy);
	phpqt_qgraphicsdropshadoweffect_set_offset_qreal_qreal(&_0, &_1, &_2);
}

PHP_METHOD(Qt_Widgets_QGraphicsDropShadowEffect_QGraphicsDropShadowEffect, setOffsetQreal)
{
	double d;
	zval *handle_param = NULL, *d_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(d)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &d_param);
	d = zephir_get_doubleval(d_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, d);
	phpqt_qgraphicsdropshadoweffect_set_offset_qreal(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QGraphicsDropShadowEffect_QGraphicsDropShadowEffect, setXOffset)
{
	double dx;
	zval *handle_param = NULL, *dx_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(dx)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &dx_param);
	dx = zephir_get_doubleval(dx_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, dx);
	phpqt_qgraphicsdropshadoweffect_set_x_offset(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QGraphicsDropShadowEffect_QGraphicsDropShadowEffect, setYOffset)
{
	double dy;
	zval *handle_param = NULL, *dy_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(dy)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &dy_param);
	dy = zephir_get_doubleval(dy_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, dy);
	phpqt_qgraphicsdropshadoweffect_set_y_offset(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QGraphicsDropShadowEffect_QGraphicsDropShadowEffect, setBlurRadius)
{
	double blurRadius;
	zval *handle_param = NULL, *blurRadius_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(blurRadius)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &blurRadius_param);
	blurRadius = zephir_get_doubleval(blurRadius_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, blurRadius);
	phpqt_qgraphicsdropshadoweffect_set_blur_radius(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QGraphicsDropShadowEffect_QGraphicsDropShadowEffect, setColor)
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
	phpqt_qgraphicsdropshadoweffect_set_color(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QGraphicsDropShadowEffect_QGraphicsDropShadowEffect, offsetChanged)
{
	double offsetX, offsetY;
	zval *handle_param = NULL, *offsetX_param = NULL, *offsetY_param = NULL, _0, _1, _2;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(offsetX)
		Z_PARAM_ZVAL(offsetY)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &offsetX_param, &offsetY_param);
	offsetX = zephir_get_doubleval(offsetX_param);
	offsetY = zephir_get_doubleval(offsetY_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, offsetX);
	ZVAL_DOUBLE(&_2, offsetY);
	phpqt_qgraphicsdropshadoweffect_offset_changed(&_0, &_1, &_2);
}

PHP_METHOD(Qt_Widgets_QGraphicsDropShadowEffect_QGraphicsDropShadowEffect, blurRadiusChanged)
{
	double blurRadius;
	zval *handle_param = NULL, *blurRadius_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(blurRadius)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &blurRadius_param);
	blurRadius = zephir_get_doubleval(blurRadius_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, blurRadius);
	phpqt_qgraphicsdropshadoweffect_blur_radius_changed(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QGraphicsDropShadowEffect_QGraphicsDropShadowEffect, colorChanged)
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
	phpqt_qgraphicsdropshadoweffect_color_changed(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QGraphicsDropShadowEffect_QGraphicsDropShadowEffect, draw)
{
	zval *handle_param = NULL, *painter_param = NULL, _0, _1;
	zend_long handle, painter;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(painter)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &painter_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, painter);
	phpqt_qgraphicsdropshadoweffect_draw(&_0, &_1);
}

