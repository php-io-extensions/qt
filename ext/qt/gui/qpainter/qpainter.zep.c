
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
#include "src/gui-qpainter.h"
#include "kernel/object.h"
#include "kernel/operators.h"
#include "kernel/memory.h"


ZEPHIR_INIT_CLASS(Qt_Gui_QPainter_QPainter)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Gui\\QPainter, QPainter, qt, gui_qpainter_qpainter, qt_gui_qpainter_qpainter_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Gui_QPainter_QPainter, staticMetaObject)
{

	RETURN_LONG(phpqt_qpainter_static_meta_object());
}

PHP_METHOD(Qt_Gui_QPainter_QPainter, qt_check_for_QGADGET_macro)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qpainter_qt_check_for__q_g_a_d_g_e_t_macro(&_0);
}

PHP_METHOD(Qt_Gui_QPainter_QPainter, new_)
{

	RETURN_LONG(phpqt_qpainter_new());
}

PHP_METHOD(Qt_Gui_QPainter_QPainter, newQPaintDevice)
{
	zval *arg0_param = NULL, _0;
	zend_long arg0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(arg0)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &arg0_param);
	ZVAL_LONG(&_0, arg0);
	RETURN_LONG(phpqt_qpainter_new_q_paint_device(&_0));
}

PHP_METHOD(Qt_Gui_QPainter_QPainter, device)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qpainter_device(&_0));
}

PHP_METHOD(Qt_Gui_QPainter_QPainter, begin)
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
	r = phpqt_qpainter_begin(&_0, &_1);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Gui_QPainter_QPainter, end)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qpainter_end(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Gui_QPainter_QPainter, isActive)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qpainter_is_active(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Gui_QPainter_QPainter, setCompositionMode)
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
	phpqt_qpainter_set_composition_mode(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QPainter_QPainter, compositionMode)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qpainter_composition_mode(&_0));
}

PHP_METHOD(Qt_Gui_QPainter_QPainter, font)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qpainter_font(&_0));
}

PHP_METHOD(Qt_Gui_QPainter_QPainter, setFont)
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
	phpqt_qpainter_set_font(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QPainter_QPainter, fontMetrics)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qpainter_font_metrics(&_0));
}

PHP_METHOD(Qt_Gui_QPainter_QPainter, fontInfo)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qpainter_font_info(&_0));
}

PHP_METHOD(Qt_Gui_QPainter_QPainter, setPen)
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
	phpqt_qpainter_set_pen(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QPainter_QPainter, setPenQPen)
{
	zval *handle_param = NULL, *pen_param = NULL, _0, _1;
	zend_long handle, pen;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(pen)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &pen_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, pen);
	phpqt_qpainter_set_pen_q_pen(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QPainter_QPainter, setPenQtPenStyle)
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
	phpqt_qpainter_set_pen_qt_pen_style(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QPainter_QPainter, pen)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qpainter_pen(&_0));
}

PHP_METHOD(Qt_Gui_QPainter_QPainter, setBrush)
{
	zval *handle_param = NULL, *brush_param = NULL, _0, _1;
	zend_long handle, brush;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(brush)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &brush_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, brush);
	phpqt_qpainter_set_brush(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QPainter_QPainter, setBrushQtBrushStyle)
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
	phpqt_qpainter_set_brush_qt_brush_style(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QPainter_QPainter, brush)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qpainter_brush(&_0));
}

PHP_METHOD(Qt_Gui_QPainter_QPainter, setBackgroundMode)
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
	phpqt_qpainter_set_background_mode(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QPainter_QPainter, backgroundMode)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qpainter_background_mode(&_0));
}

PHP_METHOD(Qt_Gui_QPainter_QPainter, brushOrigin)
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
	phpqt_qpainter_brush_origin(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QPainter_QPainter, setBrushOrigin)
{
	zval *handle_param = NULL, *x_param = NULL, *y_param = NULL, _0, _1, _2;
	zend_long handle, x, y;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(x)
		Z_PARAM_LONG(y)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &x_param, &y_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, x);
	ZVAL_LONG(&_2, y);
	phpqt_qpainter_set_brush_origin(&_0, &_1, &_2);
}

PHP_METHOD(Qt_Gui_QPainter_QPainter, setBrushOriginQPoint)
{
	zval *handle_param = NULL, *arg0X_param = NULL, *arg0Y_param = NULL, _0, _1, _2;
	zend_long handle, arg0X, arg0Y;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(arg0X)
		Z_PARAM_LONG(arg0Y)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &arg0X_param, &arg0Y_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, arg0X);
	ZVAL_LONG(&_2, arg0Y);
	phpqt_qpainter_set_brush_origin_q_point(&_0, &_1, &_2);
}

PHP_METHOD(Qt_Gui_QPainter_QPainter, setBrushOriginQPointF)
{
	double arg0X, arg0Y;
	zval *handle_param = NULL, *arg0X_param = NULL, *arg0Y_param = NULL, _0, _1, _2;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(arg0X)
		Z_PARAM_ZVAL(arg0Y)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &arg0X_param, &arg0Y_param);
	arg0X = zephir_get_doubleval(arg0X_param);
	arg0Y = zephir_get_doubleval(arg0Y_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, arg0X);
	ZVAL_DOUBLE(&_2, arg0Y);
	phpqt_qpainter_set_brush_origin_q_point_f(&_0, &_1, &_2);
}

PHP_METHOD(Qt_Gui_QPainter_QPainter, setBackground)
{
	zval *handle_param = NULL, *bg_param = NULL, _0, _1;
	zend_long handle, bg;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(bg)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &bg_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, bg);
	phpqt_qpainter_set_background(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QPainter_QPainter, background)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qpainter_background(&_0));
}

PHP_METHOD(Qt_Gui_QPainter_QPainter, opacity)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_DOUBLE(phpqt_qpainter_opacity(&_0));
}

PHP_METHOD(Qt_Gui_QPainter_QPainter, setOpacity)
{
	double opacity;
	zval *handle_param = NULL, *opacity_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(opacity)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &opacity_param);
	opacity = zephir_get_doubleval(opacity_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, opacity);
	phpqt_qpainter_set_opacity(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QPainter_QPainter, clipRegion)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qpainter_clip_region(&_0));
}

PHP_METHOD(Qt_Gui_QPainter_QPainter, clipPath)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qpainter_clip_path(&_0));
}

PHP_METHOD(Qt_Gui_QPainter_QPainter, setClipRect)
{
	double arg0X, arg0Y, arg0Width, arg0Height;
	zval *handle_param = NULL, *arg0X_param = NULL, *arg0Y_param = NULL, *arg0Width_param = NULL, *arg0Height_param = NULL, *op = NULL, op_sub, __$null, _0, _1, _2, _3, _4;
	zend_long handle;

	ZVAL_UNDEF(&op_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(5, 6)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(arg0X)
		Z_PARAM_ZVAL(arg0Y)
		Z_PARAM_ZVAL(arg0Width)
		Z_PARAM_ZVAL(arg0Height)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(op)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(5, 1, &handle_param, &arg0X_param, &arg0Y_param, &arg0Width_param, &arg0Height_param, &op);
	arg0X = zephir_get_doubleval(arg0X_param);
	arg0Y = zephir_get_doubleval(arg0Y_param);
	arg0Width = zephir_get_doubleval(arg0Width_param);
	arg0Height = zephir_get_doubleval(arg0Height_param);
	if (!op) {
		op = &op_sub;
		op = &__$null;
	}
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, arg0X);
	ZVAL_DOUBLE(&_2, arg0Y);
	ZVAL_DOUBLE(&_3, arg0Width);
	ZVAL_DOUBLE(&_4, arg0Height);
	phpqt_qpainter_set_clip_rect(&_0, &_1, &_2, &_3, &_4, op);
}

PHP_METHOD(Qt_Gui_QPainter_QPainter, setClipRectQRectQtClipOperation)
{
	zval *handle_param = NULL, *arg0X_param = NULL, *arg0Y_param = NULL, *arg0Width_param = NULL, *arg0Height_param = NULL, *op = NULL, op_sub, __$null, _0, _1, _2, _3, _4;
	zend_long handle, arg0X, arg0Y, arg0Width, arg0Height;

	ZVAL_UNDEF(&op_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(5, 6)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(arg0X)
		Z_PARAM_LONG(arg0Y)
		Z_PARAM_LONG(arg0Width)
		Z_PARAM_LONG(arg0Height)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(op)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(5, 1, &handle_param, &arg0X_param, &arg0Y_param, &arg0Width_param, &arg0Height_param, &op);
	if (!op) {
		op = &op_sub;
		op = &__$null;
	}
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, arg0X);
	ZVAL_LONG(&_2, arg0Y);
	ZVAL_LONG(&_3, arg0Width);
	ZVAL_LONG(&_4, arg0Height);
	phpqt_qpainter_set_clip_rect_q_rect_qt_clip_operation(&_0, &_1, &_2, &_3, &_4, op);
}

PHP_METHOD(Qt_Gui_QPainter_QPainter, setClipRectIntIntIntIntQtClipOperation)
{
	zval *handle_param = NULL, *x_param = NULL, *y_param = NULL, *w_param = NULL, *h_param = NULL, *op = NULL, op_sub, __$null, _0, _1, _2, _3, _4;
	zend_long handle, x, y, w, h;

	ZVAL_UNDEF(&op_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(5, 6)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(x)
		Z_PARAM_LONG(y)
		Z_PARAM_LONG(w)
		Z_PARAM_LONG(h)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(op)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(5, 1, &handle_param, &x_param, &y_param, &w_param, &h_param, &op);
	if (!op) {
		op = &op_sub;
		op = &__$null;
	}
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, x);
	ZVAL_LONG(&_2, y);
	ZVAL_LONG(&_3, w);
	ZVAL_LONG(&_4, h);
	phpqt_qpainter_set_clip_rect_int_int_int_int_qt_clip_operation(&_0, &_1, &_2, &_3, &_4, op);
}

PHP_METHOD(Qt_Gui_QPainter_QPainter, setClipRegion)
{
	zval *handle_param = NULL, *arg0_param = NULL, *op = NULL, op_sub, __$null, _0, _1;
	zend_long handle, arg0;

	ZVAL_UNDEF(&op_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(2, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(arg0)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(op)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 1, &handle_param, &arg0_param, &op);
	if (!op) {
		op = &op_sub;
		op = &__$null;
	}
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, arg0);
	phpqt_qpainter_set_clip_region(&_0, &_1, op);
}

PHP_METHOD(Qt_Gui_QPainter_QPainter, setClipPath)
{
	zval *handle_param = NULL, *path_param = NULL, *op = NULL, op_sub, __$null, _0, _1;
	zend_long handle, path;

	ZVAL_UNDEF(&op_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(2, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(path)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(op)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 1, &handle_param, &path_param, &op);
	if (!op) {
		op = &op_sub;
		op = &__$null;
	}
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, path);
	phpqt_qpainter_set_clip_path(&_0, &_1, op);
}

PHP_METHOD(Qt_Gui_QPainter_QPainter, setClipping)
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
	phpqt_qpainter_set_clipping(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QPainter_QPainter, hasClipping)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qpainter_has_clipping(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Gui_QPainter_QPainter, clipBoundingRect)
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
	phpqt_qpainter_clip_bounding_rect(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QPainter_QPainter, save)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qpainter_save(&_0);
}

PHP_METHOD(Qt_Gui_QPainter_QPainter, restore)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qpainter_restore(&_0);
}

PHP_METHOD(Qt_Gui_QPainter_QPainter, setTransform)
{
	zend_bool combine;
	zval *handle_param = NULL, *transform_param = NULL, *combine_param = NULL, _0, _1, _2;
	zend_long handle, transform;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(2, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(transform)
		Z_PARAM_OPTIONAL
		Z_PARAM_BOOL(combine)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 1, &handle_param, &transform_param, &combine_param);
	if (!combine_param) {
		combine = 0;
	} else {
		}
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, transform);
	ZVAL_BOOL(&_2, (combine ? 1 : 0));
	phpqt_qpainter_set_transform(&_0, &_1, &_2);
}

PHP_METHOD(Qt_Gui_QPainter_QPainter, transform)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qpainter_transform(&_0));
}

PHP_METHOD(Qt_Gui_QPainter_QPainter, deviceTransform)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qpainter_device_transform(&_0));
}

PHP_METHOD(Qt_Gui_QPainter_QPainter, resetTransform)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qpainter_reset_transform(&_0);
}

PHP_METHOD(Qt_Gui_QPainter_QPainter, setWorldTransform)
{
	zend_bool combine;
	zval *handle_param = NULL, *matrix_param = NULL, *combine_param = NULL, _0, _1, _2;
	zend_long handle, matrix;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(2, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(matrix)
		Z_PARAM_OPTIONAL
		Z_PARAM_BOOL(combine)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 1, &handle_param, &matrix_param, &combine_param);
	if (!combine_param) {
		combine = 0;
	} else {
		}
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, matrix);
	ZVAL_BOOL(&_2, (combine ? 1 : 0));
	phpqt_qpainter_set_world_transform(&_0, &_1, &_2);
}

PHP_METHOD(Qt_Gui_QPainter_QPainter, worldTransform)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qpainter_world_transform(&_0));
}

PHP_METHOD(Qt_Gui_QPainter_QPainter, combinedTransform)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qpainter_combined_transform(&_0));
}

PHP_METHOD(Qt_Gui_QPainter_QPainter, setWorldMatrixEnabled)
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
	phpqt_qpainter_set_world_matrix_enabled(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QPainter_QPainter, worldMatrixEnabled)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qpainter_world_matrix_enabled(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Gui_QPainter_QPainter, scale)
{
	double sx, sy;
	zval *handle_param = NULL, *sx_param = NULL, *sy_param = NULL, _0, _1, _2;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(sx)
		Z_PARAM_ZVAL(sy)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &sx_param, &sy_param);
	sx = zephir_get_doubleval(sx_param);
	sy = zephir_get_doubleval(sy_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, sx);
	ZVAL_DOUBLE(&_2, sy);
	phpqt_qpainter_scale(&_0, &_1, &_2);
}

PHP_METHOD(Qt_Gui_QPainter_QPainter, shear)
{
	double sh, sv;
	zval *handle_param = NULL, *sh_param = NULL, *sv_param = NULL, _0, _1, _2;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(sh)
		Z_PARAM_ZVAL(sv)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &sh_param, &sv_param);
	sh = zephir_get_doubleval(sh_param);
	sv = zephir_get_doubleval(sv_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, sh);
	ZVAL_DOUBLE(&_2, sv);
	phpqt_qpainter_shear(&_0, &_1, &_2);
}

PHP_METHOD(Qt_Gui_QPainter_QPainter, rotate)
{
	double a;
	zval *handle_param = NULL, *a_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(a)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &a_param);
	a = zephir_get_doubleval(a_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, a);
	phpqt_qpainter_rotate(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QPainter_QPainter, translate)
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
	phpqt_qpainter_translate(&_0, &_1, &_2);
}

PHP_METHOD(Qt_Gui_QPainter_QPainter, translateQPoint)
{
	zval *handle_param = NULL, *offsetX_param = NULL, *offsetY_param = NULL, _0, _1, _2;
	zend_long handle, offsetX, offsetY;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(offsetX)
		Z_PARAM_LONG(offsetY)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &offsetX_param, &offsetY_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, offsetX);
	ZVAL_LONG(&_2, offsetY);
	phpqt_qpainter_translate_q_point(&_0, &_1, &_2);
}

PHP_METHOD(Qt_Gui_QPainter_QPainter, translateQrealQreal)
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
	phpqt_qpainter_translate_qreal_qreal(&_0, &_1, &_2);
}

PHP_METHOD(Qt_Gui_QPainter_QPainter, window)
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
	phpqt_qpainter_window(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QPainter_QPainter, setWindow)
{
	zval *handle_param = NULL, *windowX_param = NULL, *windowY_param = NULL, *windowWidth_param = NULL, *windowHeight_param = NULL, _0, _1, _2, _3, _4;
	zend_long handle, windowX, windowY, windowWidth, windowHeight;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZEND_PARSE_PARAMETERS_START(5, 5)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(windowX)
		Z_PARAM_LONG(windowY)
		Z_PARAM_LONG(windowWidth)
		Z_PARAM_LONG(windowHeight)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(5, 0, &handle_param, &windowX_param, &windowY_param, &windowWidth_param, &windowHeight_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, windowX);
	ZVAL_LONG(&_2, windowY);
	ZVAL_LONG(&_3, windowWidth);
	ZVAL_LONG(&_4, windowHeight);
	phpqt_qpainter_set_window(&_0, &_1, &_2, &_3, &_4);
}

PHP_METHOD(Qt_Gui_QPainter_QPainter, setWindowIntIntIntInt)
{
	zval *handle_param = NULL, *x_param = NULL, *y_param = NULL, *w_param = NULL, *h_param = NULL, _0, _1, _2, _3, _4;
	zend_long handle, x, y, w, h;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZEND_PARSE_PARAMETERS_START(5, 5)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(x)
		Z_PARAM_LONG(y)
		Z_PARAM_LONG(w)
		Z_PARAM_LONG(h)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(5, 0, &handle_param, &x_param, &y_param, &w_param, &h_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, x);
	ZVAL_LONG(&_2, y);
	ZVAL_LONG(&_3, w);
	ZVAL_LONG(&_4, h);
	phpqt_qpainter_set_window_int_int_int_int(&_0, &_1, &_2, &_3, &_4);
}

PHP_METHOD(Qt_Gui_QPainter_QPainter, viewport)
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
	phpqt_qpainter_viewport(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QPainter_QPainter, setViewport)
{
	zval *handle_param = NULL, *viewportX_param = NULL, *viewportY_param = NULL, *viewportWidth_param = NULL, *viewportHeight_param = NULL, _0, _1, _2, _3, _4;
	zend_long handle, viewportX, viewportY, viewportWidth, viewportHeight;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZEND_PARSE_PARAMETERS_START(5, 5)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(viewportX)
		Z_PARAM_LONG(viewportY)
		Z_PARAM_LONG(viewportWidth)
		Z_PARAM_LONG(viewportHeight)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(5, 0, &handle_param, &viewportX_param, &viewportY_param, &viewportWidth_param, &viewportHeight_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, viewportX);
	ZVAL_LONG(&_2, viewportY);
	ZVAL_LONG(&_3, viewportWidth);
	ZVAL_LONG(&_4, viewportHeight);
	phpqt_qpainter_set_viewport(&_0, &_1, &_2, &_3, &_4);
}

PHP_METHOD(Qt_Gui_QPainter_QPainter, setViewportIntIntIntInt)
{
	zval *handle_param = NULL, *x_param = NULL, *y_param = NULL, *w_param = NULL, *h_param = NULL, _0, _1, _2, _3, _4;
	zend_long handle, x, y, w, h;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZEND_PARSE_PARAMETERS_START(5, 5)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(x)
		Z_PARAM_LONG(y)
		Z_PARAM_LONG(w)
		Z_PARAM_LONG(h)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(5, 0, &handle_param, &x_param, &y_param, &w_param, &h_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, x);
	ZVAL_LONG(&_2, y);
	ZVAL_LONG(&_3, w);
	ZVAL_LONG(&_4, h);
	phpqt_qpainter_set_viewport_int_int_int_int(&_0, &_1, &_2, &_3, &_4);
}

PHP_METHOD(Qt_Gui_QPainter_QPainter, setViewTransformEnabled)
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
	phpqt_qpainter_set_view_transform_enabled(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QPainter_QPainter, viewTransformEnabled)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qpainter_view_transform_enabled(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Gui_QPainter_QPainter, strokePath)
{
	zval *handle_param = NULL, *path_param = NULL, *pen_param = NULL, _0, _1, _2;
	zend_long handle, path, pen;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(path)
		Z_PARAM_LONG(pen)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &path_param, &pen_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, path);
	ZVAL_LONG(&_2, pen);
	phpqt_qpainter_stroke_path(&_0, &_1, &_2);
}

PHP_METHOD(Qt_Gui_QPainter_QPainter, fillPath)
{
	zval *handle_param = NULL, *path_param = NULL, *brush_param = NULL, _0, _1, _2;
	zend_long handle, path, brush;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(path)
		Z_PARAM_LONG(brush)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &path_param, &brush_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, path);
	ZVAL_LONG(&_2, brush);
	phpqt_qpainter_fill_path(&_0, &_1, &_2);
}

PHP_METHOD(Qt_Gui_QPainter_QPainter, drawPath)
{
	zval *handle_param = NULL, *path_param = NULL, _0, _1;
	zend_long handle, path;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(path)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &path_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, path);
	phpqt_qpainter_draw_path(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QPainter_QPainter, drawPoint)
{
	double ptX, ptY;
	zval *handle_param = NULL, *ptX_param = NULL, *ptY_param = NULL, _0, _1, _2;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(ptX)
		Z_PARAM_ZVAL(ptY)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &ptX_param, &ptY_param);
	ptX = zephir_get_doubleval(ptX_param);
	ptY = zephir_get_doubleval(ptY_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, ptX);
	ZVAL_DOUBLE(&_2, ptY);
	phpqt_qpainter_draw_point(&_0, &_1, &_2);
}

PHP_METHOD(Qt_Gui_QPainter_QPainter, drawPointQPoint)
{
	zval *handle_param = NULL, *pX_param = NULL, *pY_param = NULL, _0, _1, _2;
	zend_long handle, pX, pY;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(pX)
		Z_PARAM_LONG(pY)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &pX_param, &pY_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, pX);
	ZVAL_LONG(&_2, pY);
	phpqt_qpainter_draw_point_q_point(&_0, &_1, &_2);
}

PHP_METHOD(Qt_Gui_QPainter_QPainter, drawPointIntInt)
{
	zval *handle_param = NULL, *x_param = NULL, *y_param = NULL, _0, _1, _2;
	zend_long handle, x, y;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(x)
		Z_PARAM_LONG(y)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &x_param, &y_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, x);
	ZVAL_LONG(&_2, y);
	phpqt_qpainter_draw_point_int_int(&_0, &_1, &_2);
}

PHP_METHOD(Qt_Gui_QPainter_QPainter, drawPoints)
{
	zval *handle_param = NULL, *points = NULL, points_sub, *pointCount_param = NULL, _0, _1;
	zend_long handle, pointCount;

	ZVAL_UNDEF(&points_sub);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(points)
		Z_PARAM_LONG(pointCount)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &points, &pointCount_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, pointCount);
	phpqt_qpainter_draw_points(&_0, points, &_1);
}

PHP_METHOD(Qt_Gui_QPainter_QPainter, drawPointsQPolygonF)
{
	zval *handle_param = NULL, *points_param = NULL, _0, _1;
	zend_long handle, points;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(points)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &points_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, points);
	phpqt_qpainter_draw_points_q_polygon_f(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QPainter_QPainter, drawPointsQPointInt)
{
	zval *handle_param = NULL, *points = NULL, points_sub, *pointCount_param = NULL, _0, _1;
	zend_long handle, pointCount;

	ZVAL_UNDEF(&points_sub);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(points)
		Z_PARAM_LONG(pointCount)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &points, &pointCount_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, pointCount);
	phpqt_qpainter_draw_points_q_point_int(&_0, points, &_1);
}

PHP_METHOD(Qt_Gui_QPainter_QPainter, drawPointsQPolygon)
{
	zval *handle_param = NULL, *points_param = NULL, _0, _1;
	zend_long handle, points;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(points)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &points_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, points);
	phpqt_qpainter_draw_points_q_polygon(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QPainter_QPainter, drawLine)
{
	double lineX1, lineY1, lineX2, lineY2;
	zval *handle_param = NULL, *lineX1_param = NULL, *lineY1_param = NULL, *lineX2_param = NULL, *lineY2_param = NULL, _0, _1, _2, _3, _4;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZEND_PARSE_PARAMETERS_START(5, 5)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(lineX1)
		Z_PARAM_ZVAL(lineY1)
		Z_PARAM_ZVAL(lineX2)
		Z_PARAM_ZVAL(lineY2)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(5, 0, &handle_param, &lineX1_param, &lineY1_param, &lineX2_param, &lineY2_param);
	lineX1 = zephir_get_doubleval(lineX1_param);
	lineY1 = zephir_get_doubleval(lineY1_param);
	lineX2 = zephir_get_doubleval(lineX2_param);
	lineY2 = zephir_get_doubleval(lineY2_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, lineX1);
	ZVAL_DOUBLE(&_2, lineY1);
	ZVAL_DOUBLE(&_3, lineX2);
	ZVAL_DOUBLE(&_4, lineY2);
	phpqt_qpainter_draw_line(&_0, &_1, &_2, &_3, &_4);
}

PHP_METHOD(Qt_Gui_QPainter_QPainter, drawLineQLine)
{
	zval *handle_param = NULL, *lineX1_param = NULL, *lineY1_param = NULL, *lineX2_param = NULL, *lineY2_param = NULL, _0, _1, _2, _3, _4;
	zend_long handle, lineX1, lineY1, lineX2, lineY2;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZEND_PARSE_PARAMETERS_START(5, 5)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(lineX1)
		Z_PARAM_LONG(lineY1)
		Z_PARAM_LONG(lineX2)
		Z_PARAM_LONG(lineY2)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(5, 0, &handle_param, &lineX1_param, &lineY1_param, &lineX2_param, &lineY2_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, lineX1);
	ZVAL_LONG(&_2, lineY1);
	ZVAL_LONG(&_3, lineX2);
	ZVAL_LONG(&_4, lineY2);
	phpqt_qpainter_draw_line_q_line(&_0, &_1, &_2, &_3, &_4);
}

PHP_METHOD(Qt_Gui_QPainter_QPainter, drawLineIntIntIntInt)
{
	zval *handle_param = NULL, *x1_param = NULL, *y1_param = NULL, *x2_param = NULL, *y2_param = NULL, _0, _1, _2, _3, _4;
	zend_long handle, x1, y1, x2, y2;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZEND_PARSE_PARAMETERS_START(5, 5)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(x1)
		Z_PARAM_LONG(y1)
		Z_PARAM_LONG(x2)
		Z_PARAM_LONG(y2)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(5, 0, &handle_param, &x1_param, &y1_param, &x2_param, &y2_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, x1);
	ZVAL_LONG(&_2, y1);
	ZVAL_LONG(&_3, x2);
	ZVAL_LONG(&_4, y2);
	phpqt_qpainter_draw_line_int_int_int_int(&_0, &_1, &_2, &_3, &_4);
}

PHP_METHOD(Qt_Gui_QPainter_QPainter, drawLineQPointQPoint)
{
	zval *handle_param = NULL, *p1X_param = NULL, *p1Y_param = NULL, *p2X_param = NULL, *p2Y_param = NULL, _0, _1, _2, _3, _4;
	zend_long handle, p1X, p1Y, p2X, p2Y;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZEND_PARSE_PARAMETERS_START(5, 5)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(p1X)
		Z_PARAM_LONG(p1Y)
		Z_PARAM_LONG(p2X)
		Z_PARAM_LONG(p2Y)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(5, 0, &handle_param, &p1X_param, &p1Y_param, &p2X_param, &p2Y_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, p1X);
	ZVAL_LONG(&_2, p1Y);
	ZVAL_LONG(&_3, p2X);
	ZVAL_LONG(&_4, p2Y);
	phpqt_qpainter_draw_line_q_point_q_point(&_0, &_1, &_2, &_3, &_4);
}

PHP_METHOD(Qt_Gui_QPainter_QPainter, drawLineQPointFQPointF)
{
	double p1X, p1Y, p2X, p2Y;
	zval *handle_param = NULL, *p1X_param = NULL, *p1Y_param = NULL, *p2X_param = NULL, *p2Y_param = NULL, _0, _1, _2, _3, _4;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZEND_PARSE_PARAMETERS_START(5, 5)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(p1X)
		Z_PARAM_ZVAL(p1Y)
		Z_PARAM_ZVAL(p2X)
		Z_PARAM_ZVAL(p2Y)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(5, 0, &handle_param, &p1X_param, &p1Y_param, &p2X_param, &p2Y_param);
	p1X = zephir_get_doubleval(p1X_param);
	p1Y = zephir_get_doubleval(p1Y_param);
	p2X = zephir_get_doubleval(p2X_param);
	p2Y = zephir_get_doubleval(p2Y_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, p1X);
	ZVAL_DOUBLE(&_2, p1Y);
	ZVAL_DOUBLE(&_3, p2X);
	ZVAL_DOUBLE(&_4, p2Y);
	phpqt_qpainter_draw_line_q_point_f_q_point_f(&_0, &_1, &_2, &_3, &_4);
}

PHP_METHOD(Qt_Gui_QPainter_QPainter, drawLines)
{
	zval *handle_param = NULL, *lines = NULL, lines_sub, *lineCount_param = NULL, _0, _1;
	zend_long handle, lineCount;

	ZVAL_UNDEF(&lines_sub);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(lines)
		Z_PARAM_LONG(lineCount)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &lines, &lineCount_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, lineCount);
	phpqt_qpainter_draw_lines(&_0, lines, &_1);
}

PHP_METHOD(Qt_Gui_QPainter_QPainter, drawLinesQListQLineF)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval lines;
	zval *handle_param = NULL, *lines_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&lines);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ARRAY(lines)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &lines_param);
	zephir_get_arrval(&lines, lines_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qpainter_draw_lines_q_list_q_line_f(&_0, &lines);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_Gui_QPainter_QPainter, drawLinesQPointFInt)
{
	zval *handle_param = NULL, *pointPairs = NULL, pointPairs_sub, *lineCount_param = NULL, _0, _1;
	zend_long handle, lineCount;

	ZVAL_UNDEF(&pointPairs_sub);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(pointPairs)
		Z_PARAM_LONG(lineCount)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &pointPairs, &lineCount_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, lineCount);
	phpqt_qpainter_draw_lines_q_point_f_int(&_0, pointPairs, &_1);
}

PHP_METHOD(Qt_Gui_QPainter_QPainter, drawLinesQListQPointF)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval pointPairs;
	zval *handle_param = NULL, *pointPairs_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&pointPairs);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ARRAY(pointPairs)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &pointPairs_param);
	zephir_get_arrval(&pointPairs, pointPairs_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qpainter_draw_lines_q_list_q_point_f(&_0, &pointPairs);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_Gui_QPainter_QPainter, drawLinesQLineInt)
{
	zval *handle_param = NULL, *lines = NULL, lines_sub, *lineCount_param = NULL, _0, _1;
	zend_long handle, lineCount;

	ZVAL_UNDEF(&lines_sub);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(lines)
		Z_PARAM_LONG(lineCount)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &lines, &lineCount_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, lineCount);
	phpqt_qpainter_draw_lines_q_line_int(&_0, lines, &_1);
}

PHP_METHOD(Qt_Gui_QPainter_QPainter, drawLinesQListQLine)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval lines;
	zval *handle_param = NULL, *lines_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&lines);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ARRAY(lines)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &lines_param);
	zephir_get_arrval(&lines, lines_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qpainter_draw_lines_q_list_q_line(&_0, &lines);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_Gui_QPainter_QPainter, drawLinesQPointInt)
{
	zval *handle_param = NULL, *pointPairs = NULL, pointPairs_sub, *lineCount_param = NULL, _0, _1;
	zend_long handle, lineCount;

	ZVAL_UNDEF(&pointPairs_sub);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(pointPairs)
		Z_PARAM_LONG(lineCount)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &pointPairs, &lineCount_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, lineCount);
	phpqt_qpainter_draw_lines_q_point_int(&_0, pointPairs, &_1);
}

PHP_METHOD(Qt_Gui_QPainter_QPainter, drawLinesQListQPoint)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval pointPairs;
	zval *handle_param = NULL, *pointPairs_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&pointPairs);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ARRAY(pointPairs)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &pointPairs_param);
	zephir_get_arrval(&pointPairs, pointPairs_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qpainter_draw_lines_q_list_q_point(&_0, &pointPairs);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_Gui_QPainter_QPainter, drawRect)
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
	phpqt_qpainter_draw_rect(&_0, &_1, &_2, &_3, &_4);
}

PHP_METHOD(Qt_Gui_QPainter_QPainter, drawRectIntIntIntInt)
{
	zval *handle_param = NULL, *x1_param = NULL, *y1_param = NULL, *w_param = NULL, *h_param = NULL, _0, _1, _2, _3, _4;
	zend_long handle, x1, y1, w, h;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZEND_PARSE_PARAMETERS_START(5, 5)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(x1)
		Z_PARAM_LONG(y1)
		Z_PARAM_LONG(w)
		Z_PARAM_LONG(h)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(5, 0, &handle_param, &x1_param, &y1_param, &w_param, &h_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, x1);
	ZVAL_LONG(&_2, y1);
	ZVAL_LONG(&_3, w);
	ZVAL_LONG(&_4, h);
	phpqt_qpainter_draw_rect_int_int_int_int(&_0, &_1, &_2, &_3, &_4);
}

PHP_METHOD(Qt_Gui_QPainter_QPainter, drawRectQRect)
{
	zval *handle_param = NULL, *rectX_param = NULL, *rectY_param = NULL, *rectWidth_param = NULL, *rectHeight_param = NULL, _0, _1, _2, _3, _4;
	zend_long handle, rectX, rectY, rectWidth, rectHeight;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZEND_PARSE_PARAMETERS_START(5, 5)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(rectX)
		Z_PARAM_LONG(rectY)
		Z_PARAM_LONG(rectWidth)
		Z_PARAM_LONG(rectHeight)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(5, 0, &handle_param, &rectX_param, &rectY_param, &rectWidth_param, &rectHeight_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, rectX);
	ZVAL_LONG(&_2, rectY);
	ZVAL_LONG(&_3, rectWidth);
	ZVAL_LONG(&_4, rectHeight);
	phpqt_qpainter_draw_rect_q_rect(&_0, &_1, &_2, &_3, &_4);
}

PHP_METHOD(Qt_Gui_QPainter_QPainter, drawRects)
{
	zval *handle_param = NULL, *rects = NULL, rects_sub, *rectCount_param = NULL, _0, _1;
	zend_long handle, rectCount;

	ZVAL_UNDEF(&rects_sub);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(rects)
		Z_PARAM_LONG(rectCount)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &rects, &rectCount_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, rectCount);
	phpqt_qpainter_draw_rects(&_0, rects, &_1);
}

PHP_METHOD(Qt_Gui_QPainter_QPainter, drawRectsQListQRectF)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval rectangles;
	zval *handle_param = NULL, *rectangles_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&rectangles);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ARRAY(rectangles)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &rectangles_param);
	zephir_get_arrval(&rectangles, rectangles_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qpainter_draw_rects_q_list_q_rect_f(&_0, &rectangles);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_Gui_QPainter_QPainter, drawRectsQRectInt)
{
	zval *handle_param = NULL, *rects = NULL, rects_sub, *rectCount_param = NULL, _0, _1;
	zend_long handle, rectCount;

	ZVAL_UNDEF(&rects_sub);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(rects)
		Z_PARAM_LONG(rectCount)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &rects, &rectCount_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, rectCount);
	phpqt_qpainter_draw_rects_q_rect_int(&_0, rects, &_1);
}

PHP_METHOD(Qt_Gui_QPainter_QPainter, drawRectsQListQRect)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval rectangles;
	zval *handle_param = NULL, *rectangles_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&rectangles);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ARRAY(rectangles)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &rectangles_param);
	zephir_get_arrval(&rectangles, rectangles_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qpainter_draw_rects_q_list_q_rect(&_0, &rectangles);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_Gui_QPainter_QPainter, drawEllipse)
{
	double rX, rY, rWidth, rHeight;
	zval *handle_param = NULL, *rX_param = NULL, *rY_param = NULL, *rWidth_param = NULL, *rHeight_param = NULL, _0, _1, _2, _3, _4;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZEND_PARSE_PARAMETERS_START(5, 5)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(rX)
		Z_PARAM_ZVAL(rY)
		Z_PARAM_ZVAL(rWidth)
		Z_PARAM_ZVAL(rHeight)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(5, 0, &handle_param, &rX_param, &rY_param, &rWidth_param, &rHeight_param);
	rX = zephir_get_doubleval(rX_param);
	rY = zephir_get_doubleval(rY_param);
	rWidth = zephir_get_doubleval(rWidth_param);
	rHeight = zephir_get_doubleval(rHeight_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, rX);
	ZVAL_DOUBLE(&_2, rY);
	ZVAL_DOUBLE(&_3, rWidth);
	ZVAL_DOUBLE(&_4, rHeight);
	phpqt_qpainter_draw_ellipse(&_0, &_1, &_2, &_3, &_4);
}

PHP_METHOD(Qt_Gui_QPainter_QPainter, drawEllipseQRect)
{
	zval *handle_param = NULL, *rX_param = NULL, *rY_param = NULL, *rWidth_param = NULL, *rHeight_param = NULL, _0, _1, _2, _3, _4;
	zend_long handle, rX, rY, rWidth, rHeight;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZEND_PARSE_PARAMETERS_START(5, 5)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(rX)
		Z_PARAM_LONG(rY)
		Z_PARAM_LONG(rWidth)
		Z_PARAM_LONG(rHeight)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(5, 0, &handle_param, &rX_param, &rY_param, &rWidth_param, &rHeight_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, rX);
	ZVAL_LONG(&_2, rY);
	ZVAL_LONG(&_3, rWidth);
	ZVAL_LONG(&_4, rHeight);
	phpqt_qpainter_draw_ellipse_q_rect(&_0, &_1, &_2, &_3, &_4);
}

PHP_METHOD(Qt_Gui_QPainter_QPainter, drawEllipseIntIntIntInt)
{
	zval *handle_param = NULL, *x_param = NULL, *y_param = NULL, *w_param = NULL, *h_param = NULL, _0, _1, _2, _3, _4;
	zend_long handle, x, y, w, h;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZEND_PARSE_PARAMETERS_START(5, 5)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(x)
		Z_PARAM_LONG(y)
		Z_PARAM_LONG(w)
		Z_PARAM_LONG(h)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(5, 0, &handle_param, &x_param, &y_param, &w_param, &h_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, x);
	ZVAL_LONG(&_2, y);
	ZVAL_LONG(&_3, w);
	ZVAL_LONG(&_4, h);
	phpqt_qpainter_draw_ellipse_int_int_int_int(&_0, &_1, &_2, &_3, &_4);
}

PHP_METHOD(Qt_Gui_QPainter_QPainter, drawEllipseQPointFQrealQreal)
{
	double centerX, centerY, rx, ry;
	zval *handle_param = NULL, *centerX_param = NULL, *centerY_param = NULL, *rx_param = NULL, *ry_param = NULL, _0, _1, _2, _3, _4;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZEND_PARSE_PARAMETERS_START(5, 5)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(centerX)
		Z_PARAM_ZVAL(centerY)
		Z_PARAM_ZVAL(rx)
		Z_PARAM_ZVAL(ry)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(5, 0, &handle_param, &centerX_param, &centerY_param, &rx_param, &ry_param);
	centerX = zephir_get_doubleval(centerX_param);
	centerY = zephir_get_doubleval(centerY_param);
	rx = zephir_get_doubleval(rx_param);
	ry = zephir_get_doubleval(ry_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, centerX);
	ZVAL_DOUBLE(&_2, centerY);
	ZVAL_DOUBLE(&_3, rx);
	ZVAL_DOUBLE(&_4, ry);
	phpqt_qpainter_draw_ellipse_q_point_f_qreal_qreal(&_0, &_1, &_2, &_3, &_4);
}

PHP_METHOD(Qt_Gui_QPainter_QPainter, drawEllipseQPointIntInt)
{
	zval *handle_param = NULL, *centerX_param = NULL, *centerY_param = NULL, *rx_param = NULL, *ry_param = NULL, _0, _1, _2, _3, _4;
	zend_long handle, centerX, centerY, rx, ry;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZEND_PARSE_PARAMETERS_START(5, 5)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(centerX)
		Z_PARAM_LONG(centerY)
		Z_PARAM_LONG(rx)
		Z_PARAM_LONG(ry)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(5, 0, &handle_param, &centerX_param, &centerY_param, &rx_param, &ry_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, centerX);
	ZVAL_LONG(&_2, centerY);
	ZVAL_LONG(&_3, rx);
	ZVAL_LONG(&_4, ry);
	phpqt_qpainter_draw_ellipse_q_point_int_int(&_0, &_1, &_2, &_3, &_4);
}

PHP_METHOD(Qt_Gui_QPainter_QPainter, drawPolyline)
{
	zval *handle_param = NULL, *points = NULL, points_sub, *pointCount_param = NULL, _0, _1;
	zend_long handle, pointCount;

	ZVAL_UNDEF(&points_sub);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(points)
		Z_PARAM_LONG(pointCount)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &points, &pointCount_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, pointCount);
	phpqt_qpainter_draw_polyline(&_0, points, &_1);
}

PHP_METHOD(Qt_Gui_QPainter_QPainter, drawPolylineQPolygonF)
{
	zval *handle_param = NULL, *polyline_param = NULL, _0, _1;
	zend_long handle, polyline;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(polyline)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &polyline_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, polyline);
	phpqt_qpainter_draw_polyline_q_polygon_f(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QPainter_QPainter, drawPolylineQPointInt)
{
	zval *handle_param = NULL, *points = NULL, points_sub, *pointCount_param = NULL, _0, _1;
	zend_long handle, pointCount;

	ZVAL_UNDEF(&points_sub);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(points)
		Z_PARAM_LONG(pointCount)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &points, &pointCount_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, pointCount);
	phpqt_qpainter_draw_polyline_q_point_int(&_0, points, &_1);
}

PHP_METHOD(Qt_Gui_QPainter_QPainter, drawPolylineQPolygon)
{
	zval *handle_param = NULL, *polygon_param = NULL, _0, _1;
	zend_long handle, polygon;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(polygon)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &polygon_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, polygon);
	phpqt_qpainter_draw_polyline_q_polygon(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QPainter_QPainter, drawPolygon)
{
	zval *handle_param = NULL, *points = NULL, points_sub, *pointCount_param = NULL, *fillRule = NULL, fillRule_sub, __$null, _0, _1;
	zend_long handle, pointCount;

	ZVAL_UNDEF(&points_sub);
	ZVAL_UNDEF(&fillRule_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(3, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(points)
		Z_PARAM_LONG(pointCount)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(fillRule)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 1, &handle_param, &points, &pointCount_param, &fillRule);
	if (!fillRule) {
		fillRule = &fillRule_sub;
		fillRule = &__$null;
	}
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, pointCount);
	phpqt_qpainter_draw_polygon(&_0, points, &_1, fillRule);
}

PHP_METHOD(Qt_Gui_QPainter_QPainter, drawPolygonQPolygonFQtFillRule)
{
	zval *handle_param = NULL, *polygon_param = NULL, *fillRule = NULL, fillRule_sub, __$null, _0, _1;
	zend_long handle, polygon;

	ZVAL_UNDEF(&fillRule_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(2, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(polygon)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(fillRule)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 1, &handle_param, &polygon_param, &fillRule);
	if (!fillRule) {
		fillRule = &fillRule_sub;
		fillRule = &__$null;
	}
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, polygon);
	phpqt_qpainter_draw_polygon_q_polygon_f_qt_fill_rule(&_0, &_1, fillRule);
}

PHP_METHOD(Qt_Gui_QPainter_QPainter, drawPolygonQPointIntQtFillRule)
{
	zval *handle_param = NULL, *points = NULL, points_sub, *pointCount_param = NULL, *fillRule = NULL, fillRule_sub, __$null, _0, _1;
	zend_long handle, pointCount;

	ZVAL_UNDEF(&points_sub);
	ZVAL_UNDEF(&fillRule_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(3, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(points)
		Z_PARAM_LONG(pointCount)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(fillRule)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 1, &handle_param, &points, &pointCount_param, &fillRule);
	if (!fillRule) {
		fillRule = &fillRule_sub;
		fillRule = &__$null;
	}
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, pointCount);
	phpqt_qpainter_draw_polygon_q_point_int_qt_fill_rule(&_0, points, &_1, fillRule);
}

PHP_METHOD(Qt_Gui_QPainter_QPainter, drawPolygonQPolygonQtFillRule)
{
	zval *handle_param = NULL, *polygon_param = NULL, *fillRule = NULL, fillRule_sub, __$null, _0, _1;
	zend_long handle, polygon;

	ZVAL_UNDEF(&fillRule_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(2, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(polygon)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(fillRule)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 1, &handle_param, &polygon_param, &fillRule);
	if (!fillRule) {
		fillRule = &fillRule_sub;
		fillRule = &__$null;
	}
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, polygon);
	phpqt_qpainter_draw_polygon_q_polygon_qt_fill_rule(&_0, &_1, fillRule);
}

PHP_METHOD(Qt_Gui_QPainter_QPainter, drawConvexPolygon)
{
	zval *handle_param = NULL, *points = NULL, points_sub, *pointCount_param = NULL, _0, _1;
	zend_long handle, pointCount;

	ZVAL_UNDEF(&points_sub);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(points)
		Z_PARAM_LONG(pointCount)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &points, &pointCount_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, pointCount);
	phpqt_qpainter_draw_convex_polygon(&_0, points, &_1);
}

PHP_METHOD(Qt_Gui_QPainter_QPainter, drawConvexPolygonQPolygonF)
{
	zval *handle_param = NULL, *polygon_param = NULL, _0, _1;
	zend_long handle, polygon;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(polygon)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &polygon_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, polygon);
	phpqt_qpainter_draw_convex_polygon_q_polygon_f(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QPainter_QPainter, drawConvexPolygonQPointInt)
{
	zval *handle_param = NULL, *points = NULL, points_sub, *pointCount_param = NULL, _0, _1;
	zend_long handle, pointCount;

	ZVAL_UNDEF(&points_sub);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(points)
		Z_PARAM_LONG(pointCount)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &points, &pointCount_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, pointCount);
	phpqt_qpainter_draw_convex_polygon_q_point_int(&_0, points, &_1);
}

PHP_METHOD(Qt_Gui_QPainter_QPainter, drawConvexPolygonQPolygon)
{
	zval *handle_param = NULL, *polygon_param = NULL, _0, _1;
	zend_long handle, polygon;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(polygon)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &polygon_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, polygon);
	phpqt_qpainter_draw_convex_polygon_q_polygon(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QPainter_QPainter, drawArc)
{
	double rectX, rectY, rectWidth, rectHeight;
	zval *handle_param = NULL, *rectX_param = NULL, *rectY_param = NULL, *rectWidth_param = NULL, *rectHeight_param = NULL, *a_param = NULL, *alen_param = NULL, _0, _1, _2, _3, _4, _5, _6;
	zend_long handle, a, alen;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_5);
	ZVAL_UNDEF(&_6);
	ZEND_PARSE_PARAMETERS_START(7, 7)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(rectX)
		Z_PARAM_ZVAL(rectY)
		Z_PARAM_ZVAL(rectWidth)
		Z_PARAM_ZVAL(rectHeight)
		Z_PARAM_LONG(a)
		Z_PARAM_LONG(alen)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(7, 0, &handle_param, &rectX_param, &rectY_param, &rectWidth_param, &rectHeight_param, &a_param, &alen_param);
	rectX = zephir_get_doubleval(rectX_param);
	rectY = zephir_get_doubleval(rectY_param);
	rectWidth = zephir_get_doubleval(rectWidth_param);
	rectHeight = zephir_get_doubleval(rectHeight_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, rectX);
	ZVAL_DOUBLE(&_2, rectY);
	ZVAL_DOUBLE(&_3, rectWidth);
	ZVAL_DOUBLE(&_4, rectHeight);
	ZVAL_LONG(&_5, a);
	ZVAL_LONG(&_6, alen);
	phpqt_qpainter_draw_arc(&_0, &_1, &_2, &_3, &_4, &_5, &_6);
}

PHP_METHOD(Qt_Gui_QPainter_QPainter, drawArcQRectIntInt)
{
	zval *handle_param = NULL, *arg0X_param = NULL, *arg0Y_param = NULL, *arg0Width_param = NULL, *arg0Height_param = NULL, *a_param = NULL, *alen_param = NULL, _0, _1, _2, _3, _4, _5, _6;
	zend_long handle, arg0X, arg0Y, arg0Width, arg0Height, a, alen;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_5);
	ZVAL_UNDEF(&_6);
	ZEND_PARSE_PARAMETERS_START(7, 7)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(arg0X)
		Z_PARAM_LONG(arg0Y)
		Z_PARAM_LONG(arg0Width)
		Z_PARAM_LONG(arg0Height)
		Z_PARAM_LONG(a)
		Z_PARAM_LONG(alen)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(7, 0, &handle_param, &arg0X_param, &arg0Y_param, &arg0Width_param, &arg0Height_param, &a_param, &alen_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, arg0X);
	ZVAL_LONG(&_2, arg0Y);
	ZVAL_LONG(&_3, arg0Width);
	ZVAL_LONG(&_4, arg0Height);
	ZVAL_LONG(&_5, a);
	ZVAL_LONG(&_6, alen);
	phpqt_qpainter_draw_arc_q_rect_int_int(&_0, &_1, &_2, &_3, &_4, &_5, &_6);
}

PHP_METHOD(Qt_Gui_QPainter_QPainter, drawArcIntIntIntIntIntInt)
{
	zval *handle_param = NULL, *x_param = NULL, *y_param = NULL, *w_param = NULL, *h_param = NULL, *a_param = NULL, *alen_param = NULL, _0, _1, _2, _3, _4, _5, _6;
	zend_long handle, x, y, w, h, a, alen;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_5);
	ZVAL_UNDEF(&_6);
	ZEND_PARSE_PARAMETERS_START(7, 7)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(x)
		Z_PARAM_LONG(y)
		Z_PARAM_LONG(w)
		Z_PARAM_LONG(h)
		Z_PARAM_LONG(a)
		Z_PARAM_LONG(alen)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(7, 0, &handle_param, &x_param, &y_param, &w_param, &h_param, &a_param, &alen_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, x);
	ZVAL_LONG(&_2, y);
	ZVAL_LONG(&_3, w);
	ZVAL_LONG(&_4, h);
	ZVAL_LONG(&_5, a);
	ZVAL_LONG(&_6, alen);
	phpqt_qpainter_draw_arc_int_int_int_int_int_int(&_0, &_1, &_2, &_3, &_4, &_5, &_6);
}

PHP_METHOD(Qt_Gui_QPainter_QPainter, drawPie)
{
	double rectX, rectY, rectWidth, rectHeight;
	zval *handle_param = NULL, *rectX_param = NULL, *rectY_param = NULL, *rectWidth_param = NULL, *rectHeight_param = NULL, *a_param = NULL, *alen_param = NULL, _0, _1, _2, _3, _4, _5, _6;
	zend_long handle, a, alen;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_5);
	ZVAL_UNDEF(&_6);
	ZEND_PARSE_PARAMETERS_START(7, 7)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(rectX)
		Z_PARAM_ZVAL(rectY)
		Z_PARAM_ZVAL(rectWidth)
		Z_PARAM_ZVAL(rectHeight)
		Z_PARAM_LONG(a)
		Z_PARAM_LONG(alen)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(7, 0, &handle_param, &rectX_param, &rectY_param, &rectWidth_param, &rectHeight_param, &a_param, &alen_param);
	rectX = zephir_get_doubleval(rectX_param);
	rectY = zephir_get_doubleval(rectY_param);
	rectWidth = zephir_get_doubleval(rectWidth_param);
	rectHeight = zephir_get_doubleval(rectHeight_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, rectX);
	ZVAL_DOUBLE(&_2, rectY);
	ZVAL_DOUBLE(&_3, rectWidth);
	ZVAL_DOUBLE(&_4, rectHeight);
	ZVAL_LONG(&_5, a);
	ZVAL_LONG(&_6, alen);
	phpqt_qpainter_draw_pie(&_0, &_1, &_2, &_3, &_4, &_5, &_6);
}

PHP_METHOD(Qt_Gui_QPainter_QPainter, drawPieIntIntIntIntIntInt)
{
	zval *handle_param = NULL, *x_param = NULL, *y_param = NULL, *w_param = NULL, *h_param = NULL, *a_param = NULL, *alen_param = NULL, _0, _1, _2, _3, _4, _5, _6;
	zend_long handle, x, y, w, h, a, alen;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_5);
	ZVAL_UNDEF(&_6);
	ZEND_PARSE_PARAMETERS_START(7, 7)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(x)
		Z_PARAM_LONG(y)
		Z_PARAM_LONG(w)
		Z_PARAM_LONG(h)
		Z_PARAM_LONG(a)
		Z_PARAM_LONG(alen)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(7, 0, &handle_param, &x_param, &y_param, &w_param, &h_param, &a_param, &alen_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, x);
	ZVAL_LONG(&_2, y);
	ZVAL_LONG(&_3, w);
	ZVAL_LONG(&_4, h);
	ZVAL_LONG(&_5, a);
	ZVAL_LONG(&_6, alen);
	phpqt_qpainter_draw_pie_int_int_int_int_int_int(&_0, &_1, &_2, &_3, &_4, &_5, &_6);
}

PHP_METHOD(Qt_Gui_QPainter_QPainter, drawPieQRectIntInt)
{
	zval *handle_param = NULL, *arg0X_param = NULL, *arg0Y_param = NULL, *arg0Width_param = NULL, *arg0Height_param = NULL, *a_param = NULL, *alen_param = NULL, _0, _1, _2, _3, _4, _5, _6;
	zend_long handle, arg0X, arg0Y, arg0Width, arg0Height, a, alen;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_5);
	ZVAL_UNDEF(&_6);
	ZEND_PARSE_PARAMETERS_START(7, 7)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(arg0X)
		Z_PARAM_LONG(arg0Y)
		Z_PARAM_LONG(arg0Width)
		Z_PARAM_LONG(arg0Height)
		Z_PARAM_LONG(a)
		Z_PARAM_LONG(alen)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(7, 0, &handle_param, &arg0X_param, &arg0Y_param, &arg0Width_param, &arg0Height_param, &a_param, &alen_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, arg0X);
	ZVAL_LONG(&_2, arg0Y);
	ZVAL_LONG(&_3, arg0Width);
	ZVAL_LONG(&_4, arg0Height);
	ZVAL_LONG(&_5, a);
	ZVAL_LONG(&_6, alen);
	phpqt_qpainter_draw_pie_q_rect_int_int(&_0, &_1, &_2, &_3, &_4, &_5, &_6);
}

PHP_METHOD(Qt_Gui_QPainter_QPainter, drawChord)
{
	double rectX, rectY, rectWidth, rectHeight;
	zval *handle_param = NULL, *rectX_param = NULL, *rectY_param = NULL, *rectWidth_param = NULL, *rectHeight_param = NULL, *a_param = NULL, *alen_param = NULL, _0, _1, _2, _3, _4, _5, _6;
	zend_long handle, a, alen;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_5);
	ZVAL_UNDEF(&_6);
	ZEND_PARSE_PARAMETERS_START(7, 7)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(rectX)
		Z_PARAM_ZVAL(rectY)
		Z_PARAM_ZVAL(rectWidth)
		Z_PARAM_ZVAL(rectHeight)
		Z_PARAM_LONG(a)
		Z_PARAM_LONG(alen)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(7, 0, &handle_param, &rectX_param, &rectY_param, &rectWidth_param, &rectHeight_param, &a_param, &alen_param);
	rectX = zephir_get_doubleval(rectX_param);
	rectY = zephir_get_doubleval(rectY_param);
	rectWidth = zephir_get_doubleval(rectWidth_param);
	rectHeight = zephir_get_doubleval(rectHeight_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, rectX);
	ZVAL_DOUBLE(&_2, rectY);
	ZVAL_DOUBLE(&_3, rectWidth);
	ZVAL_DOUBLE(&_4, rectHeight);
	ZVAL_LONG(&_5, a);
	ZVAL_LONG(&_6, alen);
	phpqt_qpainter_draw_chord(&_0, &_1, &_2, &_3, &_4, &_5, &_6);
}

PHP_METHOD(Qt_Gui_QPainter_QPainter, drawChordIntIntIntIntIntInt)
{
	zval *handle_param = NULL, *x_param = NULL, *y_param = NULL, *w_param = NULL, *h_param = NULL, *a_param = NULL, *alen_param = NULL, _0, _1, _2, _3, _4, _5, _6;
	zend_long handle, x, y, w, h, a, alen;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_5);
	ZVAL_UNDEF(&_6);
	ZEND_PARSE_PARAMETERS_START(7, 7)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(x)
		Z_PARAM_LONG(y)
		Z_PARAM_LONG(w)
		Z_PARAM_LONG(h)
		Z_PARAM_LONG(a)
		Z_PARAM_LONG(alen)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(7, 0, &handle_param, &x_param, &y_param, &w_param, &h_param, &a_param, &alen_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, x);
	ZVAL_LONG(&_2, y);
	ZVAL_LONG(&_3, w);
	ZVAL_LONG(&_4, h);
	ZVAL_LONG(&_5, a);
	ZVAL_LONG(&_6, alen);
	phpqt_qpainter_draw_chord_int_int_int_int_int_int(&_0, &_1, &_2, &_3, &_4, &_5, &_6);
}

PHP_METHOD(Qt_Gui_QPainter_QPainter, drawChordQRectIntInt)
{
	zval *handle_param = NULL, *arg0X_param = NULL, *arg0Y_param = NULL, *arg0Width_param = NULL, *arg0Height_param = NULL, *a_param = NULL, *alen_param = NULL, _0, _1, _2, _3, _4, _5, _6;
	zend_long handle, arg0X, arg0Y, arg0Width, arg0Height, a, alen;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_5);
	ZVAL_UNDEF(&_6);
	ZEND_PARSE_PARAMETERS_START(7, 7)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(arg0X)
		Z_PARAM_LONG(arg0Y)
		Z_PARAM_LONG(arg0Width)
		Z_PARAM_LONG(arg0Height)
		Z_PARAM_LONG(a)
		Z_PARAM_LONG(alen)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(7, 0, &handle_param, &arg0X_param, &arg0Y_param, &arg0Width_param, &arg0Height_param, &a_param, &alen_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, arg0X);
	ZVAL_LONG(&_2, arg0Y);
	ZVAL_LONG(&_3, arg0Width);
	ZVAL_LONG(&_4, arg0Height);
	ZVAL_LONG(&_5, a);
	ZVAL_LONG(&_6, alen);
	phpqt_qpainter_draw_chord_q_rect_int_int(&_0, &_1, &_2, &_3, &_4, &_5, &_6);
}

PHP_METHOD(Qt_Gui_QPainter_QPainter, drawRoundedRect)
{
	double rectX, rectY, rectWidth, rectHeight, xRadius, yRadius;
	zval *handle_param = NULL, *rectX_param = NULL, *rectY_param = NULL, *rectWidth_param = NULL, *rectHeight_param = NULL, *xRadius_param = NULL, *yRadius_param = NULL, *mode = NULL, mode_sub, __$null, _0, _1, _2, _3, _4, _5, _6;
	zend_long handle;

	ZVAL_UNDEF(&mode_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_5);
	ZVAL_UNDEF(&_6);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(7, 8)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(rectX)
		Z_PARAM_ZVAL(rectY)
		Z_PARAM_ZVAL(rectWidth)
		Z_PARAM_ZVAL(rectHeight)
		Z_PARAM_ZVAL(xRadius)
		Z_PARAM_ZVAL(yRadius)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(mode)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(7, 1, &handle_param, &rectX_param, &rectY_param, &rectWidth_param, &rectHeight_param, &xRadius_param, &yRadius_param, &mode);
	rectX = zephir_get_doubleval(rectX_param);
	rectY = zephir_get_doubleval(rectY_param);
	rectWidth = zephir_get_doubleval(rectWidth_param);
	rectHeight = zephir_get_doubleval(rectHeight_param);
	xRadius = zephir_get_doubleval(xRadius_param);
	yRadius = zephir_get_doubleval(yRadius_param);
	if (!mode) {
		mode = &mode_sub;
		mode = &__$null;
	}
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, rectX);
	ZVAL_DOUBLE(&_2, rectY);
	ZVAL_DOUBLE(&_3, rectWidth);
	ZVAL_DOUBLE(&_4, rectHeight);
	ZVAL_DOUBLE(&_5, xRadius);
	ZVAL_DOUBLE(&_6, yRadius);
	phpqt_qpainter_draw_rounded_rect(&_0, &_1, &_2, &_3, &_4, &_5, &_6, mode);
}

PHP_METHOD(Qt_Gui_QPainter_QPainter, drawRoundedRectIntIntIntIntQrealQrealQtSizeMode)
{
	double xRadius, yRadius;
	zval *handle_param = NULL, *x_param = NULL, *y_param = NULL, *w_param = NULL, *h_param = NULL, *xRadius_param = NULL, *yRadius_param = NULL, *mode = NULL, mode_sub, __$null, _0, _1, _2, _3, _4, _5, _6;
	zend_long handle, x, y, w, h;

	ZVAL_UNDEF(&mode_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_5);
	ZVAL_UNDEF(&_6);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(7, 8)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(x)
		Z_PARAM_LONG(y)
		Z_PARAM_LONG(w)
		Z_PARAM_LONG(h)
		Z_PARAM_ZVAL(xRadius)
		Z_PARAM_ZVAL(yRadius)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(mode)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(7, 1, &handle_param, &x_param, &y_param, &w_param, &h_param, &xRadius_param, &yRadius_param, &mode);
	xRadius = zephir_get_doubleval(xRadius_param);
	yRadius = zephir_get_doubleval(yRadius_param);
	if (!mode) {
		mode = &mode_sub;
		mode = &__$null;
	}
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, x);
	ZVAL_LONG(&_2, y);
	ZVAL_LONG(&_3, w);
	ZVAL_LONG(&_4, h);
	ZVAL_DOUBLE(&_5, xRadius);
	ZVAL_DOUBLE(&_6, yRadius);
	phpqt_qpainter_draw_rounded_rect_int_int_int_int_qreal_qreal_qt_size_mode(&_0, &_1, &_2, &_3, &_4, &_5, &_6, mode);
}

PHP_METHOD(Qt_Gui_QPainter_QPainter, drawRoundedRectQRectQrealQrealQtSizeMode)
{
	double xRadius, yRadius;
	zval *handle_param = NULL, *rectX_param = NULL, *rectY_param = NULL, *rectWidth_param = NULL, *rectHeight_param = NULL, *xRadius_param = NULL, *yRadius_param = NULL, *mode = NULL, mode_sub, __$null, _0, _1, _2, _3, _4, _5, _6;
	zend_long handle, rectX, rectY, rectWidth, rectHeight;

	ZVAL_UNDEF(&mode_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_5);
	ZVAL_UNDEF(&_6);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(7, 8)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(rectX)
		Z_PARAM_LONG(rectY)
		Z_PARAM_LONG(rectWidth)
		Z_PARAM_LONG(rectHeight)
		Z_PARAM_ZVAL(xRadius)
		Z_PARAM_ZVAL(yRadius)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(mode)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(7, 1, &handle_param, &rectX_param, &rectY_param, &rectWidth_param, &rectHeight_param, &xRadius_param, &yRadius_param, &mode);
	xRadius = zephir_get_doubleval(xRadius_param);
	yRadius = zephir_get_doubleval(yRadius_param);
	if (!mode) {
		mode = &mode_sub;
		mode = &__$null;
	}
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, rectX);
	ZVAL_LONG(&_2, rectY);
	ZVAL_LONG(&_3, rectWidth);
	ZVAL_LONG(&_4, rectHeight);
	ZVAL_DOUBLE(&_5, xRadius);
	ZVAL_DOUBLE(&_6, yRadius);
	phpqt_qpainter_draw_rounded_rect_q_rect_qreal_qreal_qt_size_mode(&_0, &_1, &_2, &_3, &_4, &_5, &_6, mode);
}

PHP_METHOD(Qt_Gui_QPainter_QPainter, drawTiledPixmap)
{
	double rectX, rectY, rectWidth, rectHeight;
	zval *handle_param = NULL, *rectX_param = NULL, *rectY_param = NULL, *rectWidth_param = NULL, *rectHeight_param = NULL, *pm_param = NULL, *offsetX = NULL, offsetX_sub, *offsetY = NULL, offsetY_sub, __$null, _0, _1, _2, _3, _4, _5;
	zend_long handle, pm;

	ZVAL_UNDEF(&offsetX_sub);
	ZVAL_UNDEF(&offsetY_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_5);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(6, 8)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(rectX)
		Z_PARAM_ZVAL(rectY)
		Z_PARAM_ZVAL(rectWidth)
		Z_PARAM_ZVAL(rectHeight)
		Z_PARAM_LONG(pm)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(offsetX)
		Z_PARAM_ZVAL_OR_NULL(offsetY)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(6, 2, &handle_param, &rectX_param, &rectY_param, &rectWidth_param, &rectHeight_param, &pm_param, &offsetX, &offsetY);
	rectX = zephir_get_doubleval(rectX_param);
	rectY = zephir_get_doubleval(rectY_param);
	rectWidth = zephir_get_doubleval(rectWidth_param);
	rectHeight = zephir_get_doubleval(rectHeight_param);
	if (!offsetX) {
		offsetX = &offsetX_sub;
		offsetX = &__$null;
	}
	if (!offsetY) {
		offsetY = &offsetY_sub;
		offsetY = &__$null;
	}
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, rectX);
	ZVAL_DOUBLE(&_2, rectY);
	ZVAL_DOUBLE(&_3, rectWidth);
	ZVAL_DOUBLE(&_4, rectHeight);
	ZVAL_LONG(&_5, pm);
	phpqt_qpainter_draw_tiled_pixmap(&_0, &_1, &_2, &_3, &_4, &_5, offsetX, offsetY);
}

PHP_METHOD(Qt_Gui_QPainter_QPainter, drawTiledPixmapIntIntIntIntQPixmapIntInt)
{
	zval *handle_param = NULL, *x_param = NULL, *y_param = NULL, *w_param = NULL, *h_param = NULL, *arg4_param = NULL, *sx_param = NULL, *sy_param = NULL, _0, _1, _2, _3, _4, _5, _6, _7;
	zend_long handle, x, y, w, h, arg4, sx, sy;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_5);
	ZVAL_UNDEF(&_6);
	ZVAL_UNDEF(&_7);
	ZEND_PARSE_PARAMETERS_START(6, 8)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(x)
		Z_PARAM_LONG(y)
		Z_PARAM_LONG(w)
		Z_PARAM_LONG(h)
		Z_PARAM_LONG(arg4)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(sx)
		Z_PARAM_LONG(sy)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(6, 2, &handle_param, &x_param, &y_param, &w_param, &h_param, &arg4_param, &sx_param, &sy_param);
	if (!sx_param) {
		sx = 0;
	} else {
		}
	if (!sy_param) {
		sy = 0;
	} else {
		}
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, x);
	ZVAL_LONG(&_2, y);
	ZVAL_LONG(&_3, w);
	ZVAL_LONG(&_4, h);
	ZVAL_LONG(&_5, arg4);
	ZVAL_LONG(&_6, sx);
	ZVAL_LONG(&_7, sy);
	phpqt_qpainter_draw_tiled_pixmap_int_int_int_int_q_pixmap_int_int(&_0, &_1, &_2, &_3, &_4, &_5, &_6, &_7);
}

PHP_METHOD(Qt_Gui_QPainter_QPainter, drawTiledPixmapQRectQPixmapQPoint)
{
	zval *handle_param = NULL, *arg0X_param = NULL, *arg0Y_param = NULL, *arg0Width_param = NULL, *arg0Height_param = NULL, *arg1_param = NULL, *arg2X = NULL, arg2X_sub, *arg2Y = NULL, arg2Y_sub, __$null, _0, _1, _2, _3, _4, _5;
	zend_long handle, arg0X, arg0Y, arg0Width, arg0Height, arg1;

	ZVAL_UNDEF(&arg2X_sub);
	ZVAL_UNDEF(&arg2Y_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_5);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(6, 8)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(arg0X)
		Z_PARAM_LONG(arg0Y)
		Z_PARAM_LONG(arg0Width)
		Z_PARAM_LONG(arg0Height)
		Z_PARAM_LONG(arg1)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(arg2X)
		Z_PARAM_ZVAL_OR_NULL(arg2Y)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(6, 2, &handle_param, &arg0X_param, &arg0Y_param, &arg0Width_param, &arg0Height_param, &arg1_param, &arg2X, &arg2Y);
	if (!arg2X) {
		arg2X = &arg2X_sub;
		arg2X = &__$null;
	}
	if (!arg2Y) {
		arg2Y = &arg2Y_sub;
		arg2Y = &__$null;
	}
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, arg0X);
	ZVAL_LONG(&_2, arg0Y);
	ZVAL_LONG(&_3, arg0Width);
	ZVAL_LONG(&_4, arg0Height);
	ZVAL_LONG(&_5, arg1);
	phpqt_qpainter_draw_tiled_pixmap_q_rect_q_pixmap_q_point(&_0, &_1, &_2, &_3, &_4, &_5, arg2X, arg2Y);
}

PHP_METHOD(Qt_Gui_QPainter_QPainter, drawPicture)
{
	double pX, pY;
	zval *handle_param = NULL, *pX_param = NULL, *pY_param = NULL, *picture_param = NULL, _0, _1, _2, _3;
	zend_long handle, picture;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(pX)
		Z_PARAM_ZVAL(pY)
		Z_PARAM_LONG(picture)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 0, &handle_param, &pX_param, &pY_param, &picture_param);
	pX = zephir_get_doubleval(pX_param);
	pY = zephir_get_doubleval(pY_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, pX);
	ZVAL_DOUBLE(&_2, pY);
	ZVAL_LONG(&_3, picture);
	phpqt_qpainter_draw_picture(&_0, &_1, &_2, &_3);
}

PHP_METHOD(Qt_Gui_QPainter_QPainter, drawPictureIntIntQPicture)
{
	zval *handle_param = NULL, *x_param = NULL, *y_param = NULL, *picture_param = NULL, _0, _1, _2, _3;
	zend_long handle, x, y, picture;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(x)
		Z_PARAM_LONG(y)
		Z_PARAM_LONG(picture)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 0, &handle_param, &x_param, &y_param, &picture_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, x);
	ZVAL_LONG(&_2, y);
	ZVAL_LONG(&_3, picture);
	phpqt_qpainter_draw_picture_int_int_q_picture(&_0, &_1, &_2, &_3);
}

PHP_METHOD(Qt_Gui_QPainter_QPainter, drawPictureQPointQPicture)
{
	zval *handle_param = NULL, *pX_param = NULL, *pY_param = NULL, *picture_param = NULL, _0, _1, _2, _3;
	zend_long handle, pX, pY, picture;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(pX)
		Z_PARAM_LONG(pY)
		Z_PARAM_LONG(picture)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 0, &handle_param, &pX_param, &pY_param, &picture_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, pX);
	ZVAL_LONG(&_2, pY);
	ZVAL_LONG(&_3, picture);
	phpqt_qpainter_draw_picture_q_point_q_picture(&_0, &_1, &_2, &_3);
}

PHP_METHOD(Qt_Gui_QPainter_QPainter, drawPixmap)
{
	double targetRectX, targetRectY, targetRectWidth, targetRectHeight, sourceRectX, sourceRectY, sourceRectWidth, sourceRectHeight;
	zval *handle_param = NULL, *targetRectX_param = NULL, *targetRectY_param = NULL, *targetRectWidth_param = NULL, *targetRectHeight_param = NULL, *pixmap_param = NULL, *sourceRectX_param = NULL, *sourceRectY_param = NULL, *sourceRectWidth_param = NULL, *sourceRectHeight_param = NULL, _0, _1, _2, _3, _4, _5, _6, _7, _8, _9;
	zend_long handle, pixmap;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_5);
	ZVAL_UNDEF(&_6);
	ZVAL_UNDEF(&_7);
	ZVAL_UNDEF(&_8);
	ZVAL_UNDEF(&_9);
	ZEND_PARSE_PARAMETERS_START(10, 10)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(targetRectX)
		Z_PARAM_ZVAL(targetRectY)
		Z_PARAM_ZVAL(targetRectWidth)
		Z_PARAM_ZVAL(targetRectHeight)
		Z_PARAM_LONG(pixmap)
		Z_PARAM_ZVAL(sourceRectX)
		Z_PARAM_ZVAL(sourceRectY)
		Z_PARAM_ZVAL(sourceRectWidth)
		Z_PARAM_ZVAL(sourceRectHeight)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(10, 0, &handle_param, &targetRectX_param, &targetRectY_param, &targetRectWidth_param, &targetRectHeight_param, &pixmap_param, &sourceRectX_param, &sourceRectY_param, &sourceRectWidth_param, &sourceRectHeight_param);
	targetRectX = zephir_get_doubleval(targetRectX_param);
	targetRectY = zephir_get_doubleval(targetRectY_param);
	targetRectWidth = zephir_get_doubleval(targetRectWidth_param);
	targetRectHeight = zephir_get_doubleval(targetRectHeight_param);
	sourceRectX = zephir_get_doubleval(sourceRectX_param);
	sourceRectY = zephir_get_doubleval(sourceRectY_param);
	sourceRectWidth = zephir_get_doubleval(sourceRectWidth_param);
	sourceRectHeight = zephir_get_doubleval(sourceRectHeight_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, targetRectX);
	ZVAL_DOUBLE(&_2, targetRectY);
	ZVAL_DOUBLE(&_3, targetRectWidth);
	ZVAL_DOUBLE(&_4, targetRectHeight);
	ZVAL_LONG(&_5, pixmap);
	ZVAL_DOUBLE(&_6, sourceRectX);
	ZVAL_DOUBLE(&_7, sourceRectY);
	ZVAL_DOUBLE(&_8, sourceRectWidth);
	ZVAL_DOUBLE(&_9, sourceRectHeight);
	phpqt_qpainter_draw_pixmap(&_0, &_1, &_2, &_3, &_4, &_5, &_6, &_7, &_8, &_9);
}

PHP_METHOD(Qt_Gui_QPainter_QPainter, drawPixmapQRectQPixmapQRect)
{
	zval *handle_param = NULL, *targetRectX_param = NULL, *targetRectY_param = NULL, *targetRectWidth_param = NULL, *targetRectHeight_param = NULL, *pixmap_param = NULL, *sourceRectX_param = NULL, *sourceRectY_param = NULL, *sourceRectWidth_param = NULL, *sourceRectHeight_param = NULL, _0, _1, _2, _3, _4, _5, _6, _7, _8, _9;
	zend_long handle, targetRectX, targetRectY, targetRectWidth, targetRectHeight, pixmap, sourceRectX, sourceRectY, sourceRectWidth, sourceRectHeight;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_5);
	ZVAL_UNDEF(&_6);
	ZVAL_UNDEF(&_7);
	ZVAL_UNDEF(&_8);
	ZVAL_UNDEF(&_9);
	ZEND_PARSE_PARAMETERS_START(10, 10)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(targetRectX)
		Z_PARAM_LONG(targetRectY)
		Z_PARAM_LONG(targetRectWidth)
		Z_PARAM_LONG(targetRectHeight)
		Z_PARAM_LONG(pixmap)
		Z_PARAM_LONG(sourceRectX)
		Z_PARAM_LONG(sourceRectY)
		Z_PARAM_LONG(sourceRectWidth)
		Z_PARAM_LONG(sourceRectHeight)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(10, 0, &handle_param, &targetRectX_param, &targetRectY_param, &targetRectWidth_param, &targetRectHeight_param, &pixmap_param, &sourceRectX_param, &sourceRectY_param, &sourceRectWidth_param, &sourceRectHeight_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, targetRectX);
	ZVAL_LONG(&_2, targetRectY);
	ZVAL_LONG(&_3, targetRectWidth);
	ZVAL_LONG(&_4, targetRectHeight);
	ZVAL_LONG(&_5, pixmap);
	ZVAL_LONG(&_6, sourceRectX);
	ZVAL_LONG(&_7, sourceRectY);
	ZVAL_LONG(&_8, sourceRectWidth);
	ZVAL_LONG(&_9, sourceRectHeight);
	phpqt_qpainter_draw_pixmap_q_rect_q_pixmap_q_rect(&_0, &_1, &_2, &_3, &_4, &_5, &_6, &_7, &_8, &_9);
}

PHP_METHOD(Qt_Gui_QPainter_QPainter, drawPixmapIntIntIntIntQPixmapIntIntIntInt)
{
	zval *handle_param = NULL, *x_param = NULL, *y_param = NULL, *w_param = NULL, *h_param = NULL, *pm_param = NULL, *sx_param = NULL, *sy_param = NULL, *sw_param = NULL, *sh_param = NULL, _0, _1, _2, _3, _4, _5, _6, _7, _8, _9;
	zend_long handle, x, y, w, h, pm, sx, sy, sw, sh;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_5);
	ZVAL_UNDEF(&_6);
	ZVAL_UNDEF(&_7);
	ZVAL_UNDEF(&_8);
	ZVAL_UNDEF(&_9);
	ZEND_PARSE_PARAMETERS_START(10, 10)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(x)
		Z_PARAM_LONG(y)
		Z_PARAM_LONG(w)
		Z_PARAM_LONG(h)
		Z_PARAM_LONG(pm)
		Z_PARAM_LONG(sx)
		Z_PARAM_LONG(sy)
		Z_PARAM_LONG(sw)
		Z_PARAM_LONG(sh)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(10, 0, &handle_param, &x_param, &y_param, &w_param, &h_param, &pm_param, &sx_param, &sy_param, &sw_param, &sh_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, x);
	ZVAL_LONG(&_2, y);
	ZVAL_LONG(&_3, w);
	ZVAL_LONG(&_4, h);
	ZVAL_LONG(&_5, pm);
	ZVAL_LONG(&_6, sx);
	ZVAL_LONG(&_7, sy);
	ZVAL_LONG(&_8, sw);
	ZVAL_LONG(&_9, sh);
	phpqt_qpainter_draw_pixmap_int_int_int_int_q_pixmap_int_int_int_int(&_0, &_1, &_2, &_3, &_4, &_5, &_6, &_7, &_8, &_9);
}

PHP_METHOD(Qt_Gui_QPainter_QPainter, drawPixmapIntIntQPixmapIntIntIntInt)
{
	zval *handle_param = NULL, *x_param = NULL, *y_param = NULL, *pm_param = NULL, *sx_param = NULL, *sy_param = NULL, *sw_param = NULL, *sh_param = NULL, _0, _1, _2, _3, _4, _5, _6, _7;
	zend_long handle, x, y, pm, sx, sy, sw, sh;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_5);
	ZVAL_UNDEF(&_6);
	ZVAL_UNDEF(&_7);
	ZEND_PARSE_PARAMETERS_START(8, 8)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(x)
		Z_PARAM_LONG(y)
		Z_PARAM_LONG(pm)
		Z_PARAM_LONG(sx)
		Z_PARAM_LONG(sy)
		Z_PARAM_LONG(sw)
		Z_PARAM_LONG(sh)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(8, 0, &handle_param, &x_param, &y_param, &pm_param, &sx_param, &sy_param, &sw_param, &sh_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, x);
	ZVAL_LONG(&_2, y);
	ZVAL_LONG(&_3, pm);
	ZVAL_LONG(&_4, sx);
	ZVAL_LONG(&_5, sy);
	ZVAL_LONG(&_6, sw);
	ZVAL_LONG(&_7, sh);
	phpqt_qpainter_draw_pixmap_int_int_q_pixmap_int_int_int_int(&_0, &_1, &_2, &_3, &_4, &_5, &_6, &_7);
}

PHP_METHOD(Qt_Gui_QPainter_QPainter, drawPixmapQPointFQPixmapQRectF)
{
	double pX, pY, srX, srY, srWidth, srHeight;
	zval *handle_param = NULL, *pX_param = NULL, *pY_param = NULL, *pm_param = NULL, *srX_param = NULL, *srY_param = NULL, *srWidth_param = NULL, *srHeight_param = NULL, _0, _1, _2, _3, _4, _5, _6, _7;
	zend_long handle, pm;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_5);
	ZVAL_UNDEF(&_6);
	ZVAL_UNDEF(&_7);
	ZEND_PARSE_PARAMETERS_START(8, 8)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(pX)
		Z_PARAM_ZVAL(pY)
		Z_PARAM_LONG(pm)
		Z_PARAM_ZVAL(srX)
		Z_PARAM_ZVAL(srY)
		Z_PARAM_ZVAL(srWidth)
		Z_PARAM_ZVAL(srHeight)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(8, 0, &handle_param, &pX_param, &pY_param, &pm_param, &srX_param, &srY_param, &srWidth_param, &srHeight_param);
	pX = zephir_get_doubleval(pX_param);
	pY = zephir_get_doubleval(pY_param);
	srX = zephir_get_doubleval(srX_param);
	srY = zephir_get_doubleval(srY_param);
	srWidth = zephir_get_doubleval(srWidth_param);
	srHeight = zephir_get_doubleval(srHeight_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, pX);
	ZVAL_DOUBLE(&_2, pY);
	ZVAL_LONG(&_3, pm);
	ZVAL_DOUBLE(&_4, srX);
	ZVAL_DOUBLE(&_5, srY);
	ZVAL_DOUBLE(&_6, srWidth);
	ZVAL_DOUBLE(&_7, srHeight);
	phpqt_qpainter_draw_pixmap_q_point_f_q_pixmap_q_rect_f(&_0, &_1, &_2, &_3, &_4, &_5, &_6, &_7);
}

PHP_METHOD(Qt_Gui_QPainter_QPainter, drawPixmapQPointQPixmapQRect)
{
	zval *handle_param = NULL, *pX_param = NULL, *pY_param = NULL, *pm_param = NULL, *srX_param = NULL, *srY_param = NULL, *srWidth_param = NULL, *srHeight_param = NULL, _0, _1, _2, _3, _4, _5, _6, _7;
	zend_long handle, pX, pY, pm, srX, srY, srWidth, srHeight;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_5);
	ZVAL_UNDEF(&_6);
	ZVAL_UNDEF(&_7);
	ZEND_PARSE_PARAMETERS_START(8, 8)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(pX)
		Z_PARAM_LONG(pY)
		Z_PARAM_LONG(pm)
		Z_PARAM_LONG(srX)
		Z_PARAM_LONG(srY)
		Z_PARAM_LONG(srWidth)
		Z_PARAM_LONG(srHeight)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(8, 0, &handle_param, &pX_param, &pY_param, &pm_param, &srX_param, &srY_param, &srWidth_param, &srHeight_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, pX);
	ZVAL_LONG(&_2, pY);
	ZVAL_LONG(&_3, pm);
	ZVAL_LONG(&_4, srX);
	ZVAL_LONG(&_5, srY);
	ZVAL_LONG(&_6, srWidth);
	ZVAL_LONG(&_7, srHeight);
	phpqt_qpainter_draw_pixmap_q_point_q_pixmap_q_rect(&_0, &_1, &_2, &_3, &_4, &_5, &_6, &_7);
}

PHP_METHOD(Qt_Gui_QPainter_QPainter, drawPixmapQPointFQPixmap)
{
	double pX, pY;
	zval *handle_param = NULL, *pX_param = NULL, *pY_param = NULL, *pm_param = NULL, _0, _1, _2, _3;
	zend_long handle, pm;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(pX)
		Z_PARAM_ZVAL(pY)
		Z_PARAM_LONG(pm)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 0, &handle_param, &pX_param, &pY_param, &pm_param);
	pX = zephir_get_doubleval(pX_param);
	pY = zephir_get_doubleval(pY_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, pX);
	ZVAL_DOUBLE(&_2, pY);
	ZVAL_LONG(&_3, pm);
	phpqt_qpainter_draw_pixmap_q_point_f_q_pixmap(&_0, &_1, &_2, &_3);
}

PHP_METHOD(Qt_Gui_QPainter_QPainter, drawPixmapQPointQPixmap)
{
	zval *handle_param = NULL, *pX_param = NULL, *pY_param = NULL, *pm_param = NULL, _0, _1, _2, _3;
	zend_long handle, pX, pY, pm;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(pX)
		Z_PARAM_LONG(pY)
		Z_PARAM_LONG(pm)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 0, &handle_param, &pX_param, &pY_param, &pm_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, pX);
	ZVAL_LONG(&_2, pY);
	ZVAL_LONG(&_3, pm);
	phpqt_qpainter_draw_pixmap_q_point_q_pixmap(&_0, &_1, &_2, &_3);
}

PHP_METHOD(Qt_Gui_QPainter_QPainter, drawPixmapIntIntQPixmap)
{
	zval *handle_param = NULL, *x_param = NULL, *y_param = NULL, *pm_param = NULL, _0, _1, _2, _3;
	zend_long handle, x, y, pm;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(x)
		Z_PARAM_LONG(y)
		Z_PARAM_LONG(pm)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 0, &handle_param, &x_param, &y_param, &pm_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, x);
	ZVAL_LONG(&_2, y);
	ZVAL_LONG(&_3, pm);
	phpqt_qpainter_draw_pixmap_int_int_q_pixmap(&_0, &_1, &_2, &_3);
}

PHP_METHOD(Qt_Gui_QPainter_QPainter, drawPixmapQRectQPixmap)
{
	zval *handle_param = NULL, *rX_param = NULL, *rY_param = NULL, *rWidth_param = NULL, *rHeight_param = NULL, *pm_param = NULL, _0, _1, _2, _3, _4, _5;
	zend_long handle, rX, rY, rWidth, rHeight, pm;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_5);
	ZEND_PARSE_PARAMETERS_START(6, 6)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(rX)
		Z_PARAM_LONG(rY)
		Z_PARAM_LONG(rWidth)
		Z_PARAM_LONG(rHeight)
		Z_PARAM_LONG(pm)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(6, 0, &handle_param, &rX_param, &rY_param, &rWidth_param, &rHeight_param, &pm_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, rX);
	ZVAL_LONG(&_2, rY);
	ZVAL_LONG(&_3, rWidth);
	ZVAL_LONG(&_4, rHeight);
	ZVAL_LONG(&_5, pm);
	phpqt_qpainter_draw_pixmap_q_rect_q_pixmap(&_0, &_1, &_2, &_3, &_4, &_5);
}

PHP_METHOD(Qt_Gui_QPainter_QPainter, drawPixmapIntIntIntIntQPixmap)
{
	zval *handle_param = NULL, *x_param = NULL, *y_param = NULL, *w_param = NULL, *h_param = NULL, *pm_param = NULL, _0, _1, _2, _3, _4, _5;
	zend_long handle, x, y, w, h, pm;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_5);
	ZEND_PARSE_PARAMETERS_START(6, 6)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(x)
		Z_PARAM_LONG(y)
		Z_PARAM_LONG(w)
		Z_PARAM_LONG(h)
		Z_PARAM_LONG(pm)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(6, 0, &handle_param, &x_param, &y_param, &w_param, &h_param, &pm_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, x);
	ZVAL_LONG(&_2, y);
	ZVAL_LONG(&_3, w);
	ZVAL_LONG(&_4, h);
	ZVAL_LONG(&_5, pm);
	phpqt_qpainter_draw_pixmap_int_int_int_int_q_pixmap(&_0, &_1, &_2, &_3, &_4, &_5);
}

PHP_METHOD(Qt_Gui_QPainter_QPainter, drawPixmapFragments)
{
	zval *handle_param = NULL, *fragments_param = NULL, *fragmentCount_param = NULL, *pixmap_param = NULL, *hints = NULL, hints_sub, __$null, _0, _1, _2, _3;
	zend_long handle, fragments, fragmentCount, pixmap;

	ZVAL_UNDEF(&hints_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(4, 5)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(fragments)
		Z_PARAM_LONG(fragmentCount)
		Z_PARAM_LONG(pixmap)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(hints)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 1, &handle_param, &fragments_param, &fragmentCount_param, &pixmap_param, &hints);
	if (!hints) {
		hints = &hints_sub;
		hints = &__$null;
	}
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, fragments);
	ZVAL_LONG(&_2, fragmentCount);
	ZVAL_LONG(&_3, pixmap);
	phpqt_qpainter_draw_pixmap_fragments(&_0, &_1, &_2, &_3, hints);
}

PHP_METHOD(Qt_Gui_QPainter_QPainter, drawImage)
{
	double targetRectX, targetRectY, targetRectWidth, targetRectHeight, sourceRectX, sourceRectY, sourceRectWidth, sourceRectHeight;
	zval *handle_param = NULL, *targetRectX_param = NULL, *targetRectY_param = NULL, *targetRectWidth_param = NULL, *targetRectHeight_param = NULL, *image_param = NULL, *sourceRectX_param = NULL, *sourceRectY_param = NULL, *sourceRectWidth_param = NULL, *sourceRectHeight_param = NULL, *flags = NULL, flags_sub, __$null, _0, _1, _2, _3, _4, _5, _6, _7, _8, _9;
	zend_long handle, image;

	ZVAL_UNDEF(&flags_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_5);
	ZVAL_UNDEF(&_6);
	ZVAL_UNDEF(&_7);
	ZVAL_UNDEF(&_8);
	ZVAL_UNDEF(&_9);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(10, 11)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(targetRectX)
		Z_PARAM_ZVAL(targetRectY)
		Z_PARAM_ZVAL(targetRectWidth)
		Z_PARAM_ZVAL(targetRectHeight)
		Z_PARAM_LONG(image)
		Z_PARAM_ZVAL(sourceRectX)
		Z_PARAM_ZVAL(sourceRectY)
		Z_PARAM_ZVAL(sourceRectWidth)
		Z_PARAM_ZVAL(sourceRectHeight)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(flags)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(10, 1, &handle_param, &targetRectX_param, &targetRectY_param, &targetRectWidth_param, &targetRectHeight_param, &image_param, &sourceRectX_param, &sourceRectY_param, &sourceRectWidth_param, &sourceRectHeight_param, &flags);
	targetRectX = zephir_get_doubleval(targetRectX_param);
	targetRectY = zephir_get_doubleval(targetRectY_param);
	targetRectWidth = zephir_get_doubleval(targetRectWidth_param);
	targetRectHeight = zephir_get_doubleval(targetRectHeight_param);
	sourceRectX = zephir_get_doubleval(sourceRectX_param);
	sourceRectY = zephir_get_doubleval(sourceRectY_param);
	sourceRectWidth = zephir_get_doubleval(sourceRectWidth_param);
	sourceRectHeight = zephir_get_doubleval(sourceRectHeight_param);
	if (!flags) {
		flags = &flags_sub;
		flags = &__$null;
	}
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, targetRectX);
	ZVAL_DOUBLE(&_2, targetRectY);
	ZVAL_DOUBLE(&_3, targetRectWidth);
	ZVAL_DOUBLE(&_4, targetRectHeight);
	ZVAL_LONG(&_5, image);
	ZVAL_DOUBLE(&_6, sourceRectX);
	ZVAL_DOUBLE(&_7, sourceRectY);
	ZVAL_DOUBLE(&_8, sourceRectWidth);
	ZVAL_DOUBLE(&_9, sourceRectHeight);
	phpqt_qpainter_draw_image(&_0, &_1, &_2, &_3, &_4, &_5, &_6, &_7, &_8, &_9, flags);
}

PHP_METHOD(Qt_Gui_QPainter_QPainter, drawImageQRectQImageQRectQtImageConversionFlags)
{
	zval *handle_param = NULL, *targetRectX_param = NULL, *targetRectY_param = NULL, *targetRectWidth_param = NULL, *targetRectHeight_param = NULL, *image_param = NULL, *sourceRectX_param = NULL, *sourceRectY_param = NULL, *sourceRectWidth_param = NULL, *sourceRectHeight_param = NULL, *flags = NULL, flags_sub, __$null, _0, _1, _2, _3, _4, _5, _6, _7, _8, _9;
	zend_long handle, targetRectX, targetRectY, targetRectWidth, targetRectHeight, image, sourceRectX, sourceRectY, sourceRectWidth, sourceRectHeight;

	ZVAL_UNDEF(&flags_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_5);
	ZVAL_UNDEF(&_6);
	ZVAL_UNDEF(&_7);
	ZVAL_UNDEF(&_8);
	ZVAL_UNDEF(&_9);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(10, 11)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(targetRectX)
		Z_PARAM_LONG(targetRectY)
		Z_PARAM_LONG(targetRectWidth)
		Z_PARAM_LONG(targetRectHeight)
		Z_PARAM_LONG(image)
		Z_PARAM_LONG(sourceRectX)
		Z_PARAM_LONG(sourceRectY)
		Z_PARAM_LONG(sourceRectWidth)
		Z_PARAM_LONG(sourceRectHeight)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(flags)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(10, 1, &handle_param, &targetRectX_param, &targetRectY_param, &targetRectWidth_param, &targetRectHeight_param, &image_param, &sourceRectX_param, &sourceRectY_param, &sourceRectWidth_param, &sourceRectHeight_param, &flags);
	if (!flags) {
		flags = &flags_sub;
		flags = &__$null;
	}
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, targetRectX);
	ZVAL_LONG(&_2, targetRectY);
	ZVAL_LONG(&_3, targetRectWidth);
	ZVAL_LONG(&_4, targetRectHeight);
	ZVAL_LONG(&_5, image);
	ZVAL_LONG(&_6, sourceRectX);
	ZVAL_LONG(&_7, sourceRectY);
	ZVAL_LONG(&_8, sourceRectWidth);
	ZVAL_LONG(&_9, sourceRectHeight);
	phpqt_qpainter_draw_image_q_rect_q_image_q_rect_qt_image_conversion_flags(&_0, &_1, &_2, &_3, &_4, &_5, &_6, &_7, &_8, &_9, flags);
}

PHP_METHOD(Qt_Gui_QPainter_QPainter, drawImageQPointFQImageQRectFQtImageConversionFlags)
{
	double pX, pY, srX, srY, srWidth, srHeight;
	zval *handle_param = NULL, *pX_param = NULL, *pY_param = NULL, *image_param = NULL, *srX_param = NULL, *srY_param = NULL, *srWidth_param = NULL, *srHeight_param = NULL, *flags = NULL, flags_sub, __$null, _0, _1, _2, _3, _4, _5, _6, _7;
	zend_long handle, image;

	ZVAL_UNDEF(&flags_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_5);
	ZVAL_UNDEF(&_6);
	ZVAL_UNDEF(&_7);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(8, 9)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(pX)
		Z_PARAM_ZVAL(pY)
		Z_PARAM_LONG(image)
		Z_PARAM_ZVAL(srX)
		Z_PARAM_ZVAL(srY)
		Z_PARAM_ZVAL(srWidth)
		Z_PARAM_ZVAL(srHeight)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(flags)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(8, 1, &handle_param, &pX_param, &pY_param, &image_param, &srX_param, &srY_param, &srWidth_param, &srHeight_param, &flags);
	pX = zephir_get_doubleval(pX_param);
	pY = zephir_get_doubleval(pY_param);
	srX = zephir_get_doubleval(srX_param);
	srY = zephir_get_doubleval(srY_param);
	srWidth = zephir_get_doubleval(srWidth_param);
	srHeight = zephir_get_doubleval(srHeight_param);
	if (!flags) {
		flags = &flags_sub;
		flags = &__$null;
	}
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, pX);
	ZVAL_DOUBLE(&_2, pY);
	ZVAL_LONG(&_3, image);
	ZVAL_DOUBLE(&_4, srX);
	ZVAL_DOUBLE(&_5, srY);
	ZVAL_DOUBLE(&_6, srWidth);
	ZVAL_DOUBLE(&_7, srHeight);
	phpqt_qpainter_draw_image_q_point_f_q_image_q_rect_f_qt_image_conversion_flags(&_0, &_1, &_2, &_3, &_4, &_5, &_6, &_7, flags);
}

PHP_METHOD(Qt_Gui_QPainter_QPainter, drawImageQPointQImageQRectQtImageConversionFlags)
{
	zval *handle_param = NULL, *pX_param = NULL, *pY_param = NULL, *image_param = NULL, *srX_param = NULL, *srY_param = NULL, *srWidth_param = NULL, *srHeight_param = NULL, *flags = NULL, flags_sub, __$null, _0, _1, _2, _3, _4, _5, _6, _7;
	zend_long handle, pX, pY, image, srX, srY, srWidth, srHeight;

	ZVAL_UNDEF(&flags_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_5);
	ZVAL_UNDEF(&_6);
	ZVAL_UNDEF(&_7);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(8, 9)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(pX)
		Z_PARAM_LONG(pY)
		Z_PARAM_LONG(image)
		Z_PARAM_LONG(srX)
		Z_PARAM_LONG(srY)
		Z_PARAM_LONG(srWidth)
		Z_PARAM_LONG(srHeight)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(flags)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(8, 1, &handle_param, &pX_param, &pY_param, &image_param, &srX_param, &srY_param, &srWidth_param, &srHeight_param, &flags);
	if (!flags) {
		flags = &flags_sub;
		flags = &__$null;
	}
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, pX);
	ZVAL_LONG(&_2, pY);
	ZVAL_LONG(&_3, image);
	ZVAL_LONG(&_4, srX);
	ZVAL_LONG(&_5, srY);
	ZVAL_LONG(&_6, srWidth);
	ZVAL_LONG(&_7, srHeight);
	phpqt_qpainter_draw_image_q_point_q_image_q_rect_qt_image_conversion_flags(&_0, &_1, &_2, &_3, &_4, &_5, &_6, &_7, flags);
}

PHP_METHOD(Qt_Gui_QPainter_QPainter, drawImageQRectFQImage)
{
	double rX, rY, rWidth, rHeight;
	zval *handle_param = NULL, *rX_param = NULL, *rY_param = NULL, *rWidth_param = NULL, *rHeight_param = NULL, *image_param = NULL, _0, _1, _2, _3, _4, _5;
	zend_long handle, image;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_5);
	ZEND_PARSE_PARAMETERS_START(6, 6)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(rX)
		Z_PARAM_ZVAL(rY)
		Z_PARAM_ZVAL(rWidth)
		Z_PARAM_ZVAL(rHeight)
		Z_PARAM_LONG(image)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(6, 0, &handle_param, &rX_param, &rY_param, &rWidth_param, &rHeight_param, &image_param);
	rX = zephir_get_doubleval(rX_param);
	rY = zephir_get_doubleval(rY_param);
	rWidth = zephir_get_doubleval(rWidth_param);
	rHeight = zephir_get_doubleval(rHeight_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, rX);
	ZVAL_DOUBLE(&_2, rY);
	ZVAL_DOUBLE(&_3, rWidth);
	ZVAL_DOUBLE(&_4, rHeight);
	ZVAL_LONG(&_5, image);
	phpqt_qpainter_draw_image_q_rect_f_q_image(&_0, &_1, &_2, &_3, &_4, &_5);
}

PHP_METHOD(Qt_Gui_QPainter_QPainter, drawImageQRectQImage)
{
	zval *handle_param = NULL, *rX_param = NULL, *rY_param = NULL, *rWidth_param = NULL, *rHeight_param = NULL, *image_param = NULL, _0, _1, _2, _3, _4, _5;
	zend_long handle, rX, rY, rWidth, rHeight, image;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_5);
	ZEND_PARSE_PARAMETERS_START(6, 6)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(rX)
		Z_PARAM_LONG(rY)
		Z_PARAM_LONG(rWidth)
		Z_PARAM_LONG(rHeight)
		Z_PARAM_LONG(image)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(6, 0, &handle_param, &rX_param, &rY_param, &rWidth_param, &rHeight_param, &image_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, rX);
	ZVAL_LONG(&_2, rY);
	ZVAL_LONG(&_3, rWidth);
	ZVAL_LONG(&_4, rHeight);
	ZVAL_LONG(&_5, image);
	phpqt_qpainter_draw_image_q_rect_q_image(&_0, &_1, &_2, &_3, &_4, &_5);
}

PHP_METHOD(Qt_Gui_QPainter_QPainter, drawImageQPointFQImage)
{
	double pX, pY;
	zval *handle_param = NULL, *pX_param = NULL, *pY_param = NULL, *image_param = NULL, _0, _1, _2, _3;
	zend_long handle, image;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(pX)
		Z_PARAM_ZVAL(pY)
		Z_PARAM_LONG(image)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 0, &handle_param, &pX_param, &pY_param, &image_param);
	pX = zephir_get_doubleval(pX_param);
	pY = zephir_get_doubleval(pY_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, pX);
	ZVAL_DOUBLE(&_2, pY);
	ZVAL_LONG(&_3, image);
	phpqt_qpainter_draw_image_q_point_f_q_image(&_0, &_1, &_2, &_3);
}

PHP_METHOD(Qt_Gui_QPainter_QPainter, drawImageQPointQImage)
{
	zval *handle_param = NULL, *pX_param = NULL, *pY_param = NULL, *image_param = NULL, _0, _1, _2, _3;
	zend_long handle, pX, pY, image;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(pX)
		Z_PARAM_LONG(pY)
		Z_PARAM_LONG(image)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 0, &handle_param, &pX_param, &pY_param, &image_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, pX);
	ZVAL_LONG(&_2, pY);
	ZVAL_LONG(&_3, image);
	phpqt_qpainter_draw_image_q_point_q_image(&_0, &_1, &_2, &_3);
}

PHP_METHOD(Qt_Gui_QPainter_QPainter, drawImageIntIntQImageIntIntIntIntQtImageConversionFlags)
{
	zval *handle_param = NULL, *x_param = NULL, *y_param = NULL, *image_param = NULL, *sx_param = NULL, *sy_param = NULL, *sw_param = NULL, *sh_param = NULL, *flags = NULL, flags_sub, __$null, _0, _1, _2, _3, _4, _5, _6, _7;
	zend_long handle, x, y, image, sx, sy, sw, sh;

	ZVAL_UNDEF(&flags_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_5);
	ZVAL_UNDEF(&_6);
	ZVAL_UNDEF(&_7);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(4, 9)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(x)
		Z_PARAM_LONG(y)
		Z_PARAM_LONG(image)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(sx)
		Z_PARAM_LONG(sy)
		Z_PARAM_LONG(sw)
		Z_PARAM_LONG(sh)
		Z_PARAM_ZVAL_OR_NULL(flags)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 5, &handle_param, &x_param, &y_param, &image_param, &sx_param, &sy_param, &sw_param, &sh_param, &flags);
	if (!sx_param) {
		sx = 0;
	} else {
		}
	if (!sy_param) {
		sy = 0;
	} else {
		}
	if (!sw_param) {
		sw = -1;
	} else {
		}
	if (!sh_param) {
		sh = -1;
	} else {
		}
	if (!flags) {
		flags = &flags_sub;
		flags = &__$null;
	}
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, x);
	ZVAL_LONG(&_2, y);
	ZVAL_LONG(&_3, image);
	ZVAL_LONG(&_4, sx);
	ZVAL_LONG(&_5, sy);
	ZVAL_LONG(&_6, sw);
	ZVAL_LONG(&_7, sh);
	phpqt_qpainter_draw_image_int_int_q_image_int_int_int_int_qt_image_conversion_flags(&_0, &_1, &_2, &_3, &_4, &_5, &_6, &_7, flags);
}

PHP_METHOD(Qt_Gui_QPainter_QPainter, setLayoutDirection)
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
	phpqt_qpainter_set_layout_direction(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QPainter_QPainter, layoutDirection)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qpainter_layout_direction(&_0));
}

PHP_METHOD(Qt_Gui_QPainter_QPainter, drawGlyphRun)
{
	double positionX, positionY;
	zval *handle_param = NULL, *positionX_param = NULL, *positionY_param = NULL, *glyphRun_param = NULL, _0, _1, _2, _3;
	zend_long handle, glyphRun;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(positionX)
		Z_PARAM_ZVAL(positionY)
		Z_PARAM_LONG(glyphRun)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 0, &handle_param, &positionX_param, &positionY_param, &glyphRun_param);
	positionX = zephir_get_doubleval(positionX_param);
	positionY = zephir_get_doubleval(positionY_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, positionX);
	ZVAL_DOUBLE(&_2, positionY);
	ZVAL_LONG(&_3, glyphRun);
	phpqt_qpainter_draw_glyph_run(&_0, &_1, &_2, &_3);
}

PHP_METHOD(Qt_Gui_QPainter_QPainter, drawStaticText)
{
	double topLeftPositionX, topLeftPositionY;
	zval *handle_param = NULL, *topLeftPositionX_param = NULL, *topLeftPositionY_param = NULL, *staticText_param = NULL, _0, _1, _2, _3;
	zend_long handle, staticText;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(topLeftPositionX)
		Z_PARAM_ZVAL(topLeftPositionY)
		Z_PARAM_LONG(staticText)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 0, &handle_param, &topLeftPositionX_param, &topLeftPositionY_param, &staticText_param);
	topLeftPositionX = zephir_get_doubleval(topLeftPositionX_param);
	topLeftPositionY = zephir_get_doubleval(topLeftPositionY_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, topLeftPositionX);
	ZVAL_DOUBLE(&_2, topLeftPositionY);
	ZVAL_LONG(&_3, staticText);
	phpqt_qpainter_draw_static_text(&_0, &_1, &_2, &_3);
}

PHP_METHOD(Qt_Gui_QPainter_QPainter, drawStaticTextQPointQStaticText)
{
	zval *handle_param = NULL, *topLeftPositionX_param = NULL, *topLeftPositionY_param = NULL, *staticText_param = NULL, _0, _1, _2, _3;
	zend_long handle, topLeftPositionX, topLeftPositionY, staticText;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(topLeftPositionX)
		Z_PARAM_LONG(topLeftPositionY)
		Z_PARAM_LONG(staticText)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 0, &handle_param, &topLeftPositionX_param, &topLeftPositionY_param, &staticText_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, topLeftPositionX);
	ZVAL_LONG(&_2, topLeftPositionY);
	ZVAL_LONG(&_3, staticText);
	phpqt_qpainter_draw_static_text_q_point_q_static_text(&_0, &_1, &_2, &_3);
}

PHP_METHOD(Qt_Gui_QPainter_QPainter, drawStaticTextIntIntQStaticText)
{
	zval *handle_param = NULL, *left_param = NULL, *top_param = NULL, *staticText_param = NULL, _0, _1, _2, _3;
	zend_long handle, left, top, staticText;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(left)
		Z_PARAM_LONG(top)
		Z_PARAM_LONG(staticText)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 0, &handle_param, &left_param, &top_param, &staticText_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, left);
	ZVAL_LONG(&_2, top);
	ZVAL_LONG(&_3, staticText);
	phpqt_qpainter_draw_static_text_int_int_q_static_text(&_0, &_1, &_2, &_3);
}

PHP_METHOD(Qt_Gui_QPainter_QPainter, drawText)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval s;
	double pX, pY;
	zval *handle_param = NULL, *pX_param = NULL, *pY_param = NULL, *s_param = NULL, _0, _1, _2;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&s);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(pX)
		Z_PARAM_ZVAL(pY)
		Z_PARAM_STR(s)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 4, 0, &handle_param, &pX_param, &pY_param, &s_param);
	pX = zephir_get_doubleval(pX_param);
	pY = zephir_get_doubleval(pY_param);
	zephir_get_strval(&s, s_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, pX);
	ZVAL_DOUBLE(&_2, pY);
	phpqt_qpainter_draw_text(&_0, &_1, &_2, &s);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_Gui_QPainter_QPainter, drawTextQPointQString)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval s;
	zval *handle_param = NULL, *pX_param = NULL, *pY_param = NULL, *s_param = NULL, _0, _1, _2;
	zend_long handle, pX, pY;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&s);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(pX)
		Z_PARAM_LONG(pY)
		Z_PARAM_STR(s)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 4, 0, &handle_param, &pX_param, &pY_param, &s_param);
	zephir_get_strval(&s, s_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, pX);
	ZVAL_LONG(&_2, pY);
	phpqt_qpainter_draw_text_q_point_q_string(&_0, &_1, &_2, &s);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_Gui_QPainter_QPainter, drawTextIntIntQString)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval s;
	zval *handle_param = NULL, *x_param = NULL, *y_param = NULL, *s_param = NULL, _0, _1, _2;
	zend_long handle, x, y;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&s);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(x)
		Z_PARAM_LONG(y)
		Z_PARAM_STR(s)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 4, 0, &handle_param, &x_param, &y_param, &s_param);
	zephir_get_strval(&s, s_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, x);
	ZVAL_LONG(&_2, y);
	phpqt_qpainter_draw_text_int_int_q_string(&_0, &_1, &_2, &s);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_Gui_QPainter_QPainter, drawTextQPointFQStringIntInt)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval str;
	double pX, pY;
	zval *handle_param = NULL, *pX_param = NULL, *pY_param = NULL, *str_param = NULL, *tf_param = NULL, *justificationPadding_param = NULL, _0, _1, _2, _3, _4;
	zend_long handle, tf, justificationPadding;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&str);
	ZEND_PARSE_PARAMETERS_START(6, 6)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(pX)
		Z_PARAM_ZVAL(pY)
		Z_PARAM_STR(str)
		Z_PARAM_LONG(tf)
		Z_PARAM_LONG(justificationPadding)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 6, 0, &handle_param, &pX_param, &pY_param, &str_param, &tf_param, &justificationPadding_param);
	pX = zephir_get_doubleval(pX_param);
	pY = zephir_get_doubleval(pY_param);
	zephir_get_strval(&str, str_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, pX);
	ZVAL_DOUBLE(&_2, pY);
	ZVAL_LONG(&_3, tf);
	ZVAL_LONG(&_4, justificationPadding);
	phpqt_qpainter_draw_text_q_point_f_q_string_int_int(&_0, &_1, &_2, &str, &_3, &_4);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_Gui_QPainter_QPainter, drawTextQRectFIntQStringQRectF)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval text;
	double rX, rY, rWidth, rHeight;
	zval *handle_param = NULL, *rX_param = NULL, *rY_param = NULL, *rWidth_param = NULL, *rHeight_param = NULL, *flags_param = NULL, *text_param = NULL, *br = NULL, br_sub, __$null, result, _0, _1, _2, _3, _4, _5;
	zend_long handle, flags;

	ZVAL_UNDEF(&br_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_5);
	ZVAL_UNDEF(&text);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(7, 8)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(rX)
		Z_PARAM_ZVAL(rY)
		Z_PARAM_ZVAL(rWidth)
		Z_PARAM_ZVAL(rHeight)
		Z_PARAM_LONG(flags)
		Z_PARAM_STR(text)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(br)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 7, 1, &handle_param, &rX_param, &rY_param, &rWidth_param, &rHeight_param, &flags_param, &text_param, &br);
	rX = zephir_get_doubleval(rX_param);
	rY = zephir_get_doubleval(rY_param);
	rWidth = zephir_get_doubleval(rWidth_param);
	rHeight = zephir_get_doubleval(rHeight_param);
	zephir_get_strval(&text, text_param);
	if (!br) {
		br = &br_sub;
		br = &__$null;
	}
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, rX);
	ZVAL_DOUBLE(&_2, rY);
	ZVAL_DOUBLE(&_3, rWidth);
	ZVAL_DOUBLE(&_4, rHeight);
	ZVAL_LONG(&_5, flags);
	phpqt_qpainter_draw_text_q_rect_f_int_q_string_q_rect_f(&result, &_0, &_1, &_2, &_3, &_4, &_5, &text, br);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QPainter_QPainter, drawTextQRectIntQStringQRect)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval text;
	zval *handle_param = NULL, *rX_param = NULL, *rY_param = NULL, *rWidth_param = NULL, *rHeight_param = NULL, *flags_param = NULL, *text_param = NULL, *br = NULL, br_sub, __$null, result, _0, _1, _2, _3, _4, _5;
	zend_long handle, rX, rY, rWidth, rHeight, flags;

	ZVAL_UNDEF(&br_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_5);
	ZVAL_UNDEF(&text);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(7, 8)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(rX)
		Z_PARAM_LONG(rY)
		Z_PARAM_LONG(rWidth)
		Z_PARAM_LONG(rHeight)
		Z_PARAM_LONG(flags)
		Z_PARAM_STR(text)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(br)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 7, 1, &handle_param, &rX_param, &rY_param, &rWidth_param, &rHeight_param, &flags_param, &text_param, &br);
	zephir_get_strval(&text, text_param);
	if (!br) {
		br = &br_sub;
		br = &__$null;
	}
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, rX);
	ZVAL_LONG(&_2, rY);
	ZVAL_LONG(&_3, rWidth);
	ZVAL_LONG(&_4, rHeight);
	ZVAL_LONG(&_5, flags);
	phpqt_qpainter_draw_text_q_rect_int_q_string_q_rect(&result, &_0, &_1, &_2, &_3, &_4, &_5, &text, br);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QPainter_QPainter, drawTextIntIntIntIntIntQStringQRect)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval text;
	zval *handle_param = NULL, *x_param = NULL, *y_param = NULL, *w_param = NULL, *h_param = NULL, *flags_param = NULL, *text_param = NULL, *br = NULL, br_sub, __$null, result, _0, _1, _2, _3, _4, _5;
	zend_long handle, x, y, w, h, flags;

	ZVAL_UNDEF(&br_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_5);
	ZVAL_UNDEF(&text);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(7, 8)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(x)
		Z_PARAM_LONG(y)
		Z_PARAM_LONG(w)
		Z_PARAM_LONG(h)
		Z_PARAM_LONG(flags)
		Z_PARAM_STR(text)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(br)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 7, 1, &handle_param, &x_param, &y_param, &w_param, &h_param, &flags_param, &text_param, &br);
	zephir_get_strval(&text, text_param);
	if (!br) {
		br = &br_sub;
		br = &__$null;
	}
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, x);
	ZVAL_LONG(&_2, y);
	ZVAL_LONG(&_3, w);
	ZVAL_LONG(&_4, h);
	ZVAL_LONG(&_5, flags);
	phpqt_qpainter_draw_text_int_int_int_int_int_q_string_q_rect(&result, &_0, &_1, &_2, &_3, &_4, &_5, &text, br);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QPainter_QPainter, drawTextQRectFQStringQTextOption)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval text;
	double rX, rY, rWidth, rHeight;
	zval *handle_param = NULL, *rX_param = NULL, *rY_param = NULL, *rWidth_param = NULL, *rHeight_param = NULL, *text_param = NULL, *o = NULL, o_sub, __$null, _0, _1, _2, _3, _4;
	zend_long handle;

	ZVAL_UNDEF(&o_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&text);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(6, 7)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(rX)
		Z_PARAM_ZVAL(rY)
		Z_PARAM_ZVAL(rWidth)
		Z_PARAM_ZVAL(rHeight)
		Z_PARAM_STR(text)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(o)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 6, 1, &handle_param, &rX_param, &rY_param, &rWidth_param, &rHeight_param, &text_param, &o);
	rX = zephir_get_doubleval(rX_param);
	rY = zephir_get_doubleval(rY_param);
	rWidth = zephir_get_doubleval(rWidth_param);
	rHeight = zephir_get_doubleval(rHeight_param);
	zephir_get_strval(&text, text_param);
	if (!o) {
		o = &o_sub;
		o = &__$null;
	}
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, rX);
	ZVAL_DOUBLE(&_2, rY);
	ZVAL_DOUBLE(&_3, rWidth);
	ZVAL_DOUBLE(&_4, rHeight);
	phpqt_qpainter_draw_text_q_rect_f_q_string_q_text_option(&_0, &_1, &_2, &_3, &_4, &text, o);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_Gui_QPainter_QPainter, boundingRect)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval text;
	double rectX, rectY, rectWidth, rectHeight;
	zval *handle_param = NULL, *rectX_param = NULL, *rectY_param = NULL, *rectWidth_param = NULL, *rectHeight_param = NULL, *flags_param = NULL, *text_param = NULL, result, _0, _1, _2, _3, _4, _5;
	zend_long handle, flags;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_5);
	ZVAL_UNDEF(&text);
	ZEND_PARSE_PARAMETERS_START(7, 7)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(rectX)
		Z_PARAM_ZVAL(rectY)
		Z_PARAM_ZVAL(rectWidth)
		Z_PARAM_ZVAL(rectHeight)
		Z_PARAM_LONG(flags)
		Z_PARAM_STR(text)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 7, 0, &handle_param, &rectX_param, &rectY_param, &rectWidth_param, &rectHeight_param, &flags_param, &text_param);
	rectX = zephir_get_doubleval(rectX_param);
	rectY = zephir_get_doubleval(rectY_param);
	rectWidth = zephir_get_doubleval(rectWidth_param);
	rectHeight = zephir_get_doubleval(rectHeight_param);
	zephir_get_strval(&text, text_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, rectX);
	ZVAL_DOUBLE(&_2, rectY);
	ZVAL_DOUBLE(&_3, rectWidth);
	ZVAL_DOUBLE(&_4, rectHeight);
	ZVAL_LONG(&_5, flags);
	phpqt_qpainter_bounding_rect(&result, &_0, &_1, &_2, &_3, &_4, &_5, &text);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QPainter_QPainter, boundingRectQRectIntQString)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval text;
	zval *handle_param = NULL, *rectX_param = NULL, *rectY_param = NULL, *rectWidth_param = NULL, *rectHeight_param = NULL, *flags_param = NULL, *text_param = NULL, result, _0, _1, _2, _3, _4, _5;
	zend_long handle, rectX, rectY, rectWidth, rectHeight, flags;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_5);
	ZVAL_UNDEF(&text);
	ZEND_PARSE_PARAMETERS_START(7, 7)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(rectX)
		Z_PARAM_LONG(rectY)
		Z_PARAM_LONG(rectWidth)
		Z_PARAM_LONG(rectHeight)
		Z_PARAM_LONG(flags)
		Z_PARAM_STR(text)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 7, 0, &handle_param, &rectX_param, &rectY_param, &rectWidth_param, &rectHeight_param, &flags_param, &text_param);
	zephir_get_strval(&text, text_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, rectX);
	ZVAL_LONG(&_2, rectY);
	ZVAL_LONG(&_3, rectWidth);
	ZVAL_LONG(&_4, rectHeight);
	ZVAL_LONG(&_5, flags);
	phpqt_qpainter_bounding_rect_q_rect_int_q_string(&result, &_0, &_1, &_2, &_3, &_4, &_5, &text);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QPainter_QPainter, boundingRectIntIntIntIntIntQString)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval text;
	zval *handle_param = NULL, *x_param = NULL, *y_param = NULL, *w_param = NULL, *h_param = NULL, *flags_param = NULL, *text_param = NULL, result, _0, _1, _2, _3, _4, _5;
	zend_long handle, x, y, w, h, flags;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_5);
	ZVAL_UNDEF(&text);
	ZEND_PARSE_PARAMETERS_START(7, 7)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(x)
		Z_PARAM_LONG(y)
		Z_PARAM_LONG(w)
		Z_PARAM_LONG(h)
		Z_PARAM_LONG(flags)
		Z_PARAM_STR(text)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 7, 0, &handle_param, &x_param, &y_param, &w_param, &h_param, &flags_param, &text_param);
	zephir_get_strval(&text, text_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, x);
	ZVAL_LONG(&_2, y);
	ZVAL_LONG(&_3, w);
	ZVAL_LONG(&_4, h);
	ZVAL_LONG(&_5, flags);
	phpqt_qpainter_bounding_rect_int_int_int_int_int_q_string(&result, &_0, &_1, &_2, &_3, &_4, &_5, &text);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QPainter_QPainter, boundingRectQRectFQStringQTextOption)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval text;
	double rectX, rectY, rectWidth, rectHeight;
	zval *handle_param = NULL, *rectX_param = NULL, *rectY_param = NULL, *rectWidth_param = NULL, *rectHeight_param = NULL, *text_param = NULL, *o = NULL, o_sub, __$null, result, _0, _1, _2, _3, _4;
	zend_long handle;

	ZVAL_UNDEF(&o_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&text);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(6, 7)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(rectX)
		Z_PARAM_ZVAL(rectY)
		Z_PARAM_ZVAL(rectWidth)
		Z_PARAM_ZVAL(rectHeight)
		Z_PARAM_STR(text)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(o)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 6, 1, &handle_param, &rectX_param, &rectY_param, &rectWidth_param, &rectHeight_param, &text_param, &o);
	rectX = zephir_get_doubleval(rectX_param);
	rectY = zephir_get_doubleval(rectY_param);
	rectWidth = zephir_get_doubleval(rectWidth_param);
	rectHeight = zephir_get_doubleval(rectHeight_param);
	zephir_get_strval(&text, text_param);
	if (!o) {
		o = &o_sub;
		o = &__$null;
	}
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, rectX);
	ZVAL_DOUBLE(&_2, rectY);
	ZVAL_DOUBLE(&_3, rectWidth);
	ZVAL_DOUBLE(&_4, rectHeight);
	phpqt_qpainter_bounding_rect_q_rect_f_q_string_q_text_option(&result, &_0, &_1, &_2, &_3, &_4, &text, o);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QPainter_QPainter, drawTextItem)
{
	double pX, pY;
	zval *handle_param = NULL, *pX_param = NULL, *pY_param = NULL, *ti_param = NULL, _0, _1, _2, _3;
	zend_long handle, ti;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(pX)
		Z_PARAM_ZVAL(pY)
		Z_PARAM_LONG(ti)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 0, &handle_param, &pX_param, &pY_param, &ti_param);
	pX = zephir_get_doubleval(pX_param);
	pY = zephir_get_doubleval(pY_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, pX);
	ZVAL_DOUBLE(&_2, pY);
	ZVAL_LONG(&_3, ti);
	phpqt_qpainter_draw_text_item(&_0, &_1, &_2, &_3);
}

PHP_METHOD(Qt_Gui_QPainter_QPainter, drawTextItemIntIntQTextItem)
{
	zval *handle_param = NULL, *x_param = NULL, *y_param = NULL, *ti_param = NULL, _0, _1, _2, _3;
	zend_long handle, x, y, ti;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(x)
		Z_PARAM_LONG(y)
		Z_PARAM_LONG(ti)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 0, &handle_param, &x_param, &y_param, &ti_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, x);
	ZVAL_LONG(&_2, y);
	ZVAL_LONG(&_3, ti);
	phpqt_qpainter_draw_text_item_int_int_q_text_item(&_0, &_1, &_2, &_3);
}

PHP_METHOD(Qt_Gui_QPainter_QPainter, drawTextItemQPointQTextItem)
{
	zval *handle_param = NULL, *pX_param = NULL, *pY_param = NULL, *ti_param = NULL, _0, _1, _2, _3;
	zend_long handle, pX, pY, ti;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(pX)
		Z_PARAM_LONG(pY)
		Z_PARAM_LONG(ti)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 0, &handle_param, &pX_param, &pY_param, &ti_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, pX);
	ZVAL_LONG(&_2, pY);
	ZVAL_LONG(&_3, ti);
	phpqt_qpainter_draw_text_item_q_point_q_text_item(&_0, &_1, &_2, &_3);
}

PHP_METHOD(Qt_Gui_QPainter_QPainter, fillRect)
{
	double arg0X, arg0Y, arg0Width, arg0Height;
	zval *handle_param = NULL, *arg0X_param = NULL, *arg0Y_param = NULL, *arg0Width_param = NULL, *arg0Height_param = NULL, *arg1_param = NULL, _0, _1, _2, _3, _4, _5;
	zend_long handle, arg1;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_5);
	ZEND_PARSE_PARAMETERS_START(6, 6)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(arg0X)
		Z_PARAM_ZVAL(arg0Y)
		Z_PARAM_ZVAL(arg0Width)
		Z_PARAM_ZVAL(arg0Height)
		Z_PARAM_LONG(arg1)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(6, 0, &handle_param, &arg0X_param, &arg0Y_param, &arg0Width_param, &arg0Height_param, &arg1_param);
	arg0X = zephir_get_doubleval(arg0X_param);
	arg0Y = zephir_get_doubleval(arg0Y_param);
	arg0Width = zephir_get_doubleval(arg0Width_param);
	arg0Height = zephir_get_doubleval(arg0Height_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, arg0X);
	ZVAL_DOUBLE(&_2, arg0Y);
	ZVAL_DOUBLE(&_3, arg0Width);
	ZVAL_DOUBLE(&_4, arg0Height);
	ZVAL_LONG(&_5, arg1);
	phpqt_qpainter_fill_rect(&_0, &_1, &_2, &_3, &_4, &_5);
}

PHP_METHOD(Qt_Gui_QPainter_QPainter, fillRectIntIntIntIntQBrush)
{
	zval *handle_param = NULL, *x_param = NULL, *y_param = NULL, *w_param = NULL, *h_param = NULL, *arg4_param = NULL, _0, _1, _2, _3, _4, _5;
	zend_long handle, x, y, w, h, arg4;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_5);
	ZEND_PARSE_PARAMETERS_START(6, 6)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(x)
		Z_PARAM_LONG(y)
		Z_PARAM_LONG(w)
		Z_PARAM_LONG(h)
		Z_PARAM_LONG(arg4)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(6, 0, &handle_param, &x_param, &y_param, &w_param, &h_param, &arg4_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, x);
	ZVAL_LONG(&_2, y);
	ZVAL_LONG(&_3, w);
	ZVAL_LONG(&_4, h);
	ZVAL_LONG(&_5, arg4);
	phpqt_qpainter_fill_rect_int_int_int_int_q_brush(&_0, &_1, &_2, &_3, &_4, &_5);
}

PHP_METHOD(Qt_Gui_QPainter_QPainter, fillRectQRectQBrush)
{
	zval *handle_param = NULL, *arg0X_param = NULL, *arg0Y_param = NULL, *arg0Width_param = NULL, *arg0Height_param = NULL, *arg1_param = NULL, _0, _1, _2, _3, _4, _5;
	zend_long handle, arg0X, arg0Y, arg0Width, arg0Height, arg1;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_5);
	ZEND_PARSE_PARAMETERS_START(6, 6)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(arg0X)
		Z_PARAM_LONG(arg0Y)
		Z_PARAM_LONG(arg0Width)
		Z_PARAM_LONG(arg0Height)
		Z_PARAM_LONG(arg1)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(6, 0, &handle_param, &arg0X_param, &arg0Y_param, &arg0Width_param, &arg0Height_param, &arg1_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, arg0X);
	ZVAL_LONG(&_2, arg0Y);
	ZVAL_LONG(&_3, arg0Width);
	ZVAL_LONG(&_4, arg0Height);
	ZVAL_LONG(&_5, arg1);
	phpqt_qpainter_fill_rect_q_rect_q_brush(&_0, &_1, &_2, &_3, &_4, &_5);
}

PHP_METHOD(Qt_Gui_QPainter_QPainter, fillRectQRectFQColor)
{
	double arg0X, arg0Y, arg0Width, arg0Height;
	zval *handle_param = NULL, *arg0X_param = NULL, *arg0Y_param = NULL, *arg0Width_param = NULL, *arg0Height_param = NULL, *color_param = NULL, _0, _1, _2, _3, _4, _5;
	zend_long handle, color;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_5);
	ZEND_PARSE_PARAMETERS_START(6, 6)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(arg0X)
		Z_PARAM_ZVAL(arg0Y)
		Z_PARAM_ZVAL(arg0Width)
		Z_PARAM_ZVAL(arg0Height)
		Z_PARAM_LONG(color)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(6, 0, &handle_param, &arg0X_param, &arg0Y_param, &arg0Width_param, &arg0Height_param, &color_param);
	arg0X = zephir_get_doubleval(arg0X_param);
	arg0Y = zephir_get_doubleval(arg0Y_param);
	arg0Width = zephir_get_doubleval(arg0Width_param);
	arg0Height = zephir_get_doubleval(arg0Height_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, arg0X);
	ZVAL_DOUBLE(&_2, arg0Y);
	ZVAL_DOUBLE(&_3, arg0Width);
	ZVAL_DOUBLE(&_4, arg0Height);
	ZVAL_LONG(&_5, color);
	phpqt_qpainter_fill_rect_q_rect_f_q_color(&_0, &_1, &_2, &_3, &_4, &_5);
}

PHP_METHOD(Qt_Gui_QPainter_QPainter, fillRectIntIntIntIntQColor)
{
	zval *handle_param = NULL, *x_param = NULL, *y_param = NULL, *w_param = NULL, *h_param = NULL, *color_param = NULL, _0, _1, _2, _3, _4, _5;
	zend_long handle, x, y, w, h, color;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_5);
	ZEND_PARSE_PARAMETERS_START(6, 6)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(x)
		Z_PARAM_LONG(y)
		Z_PARAM_LONG(w)
		Z_PARAM_LONG(h)
		Z_PARAM_LONG(color)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(6, 0, &handle_param, &x_param, &y_param, &w_param, &h_param, &color_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, x);
	ZVAL_LONG(&_2, y);
	ZVAL_LONG(&_3, w);
	ZVAL_LONG(&_4, h);
	ZVAL_LONG(&_5, color);
	phpqt_qpainter_fill_rect_int_int_int_int_q_color(&_0, &_1, &_2, &_3, &_4, &_5);
}

PHP_METHOD(Qt_Gui_QPainter_QPainter, fillRectQRectQColor)
{
	zval *handle_param = NULL, *arg0X_param = NULL, *arg0Y_param = NULL, *arg0Width_param = NULL, *arg0Height_param = NULL, *color_param = NULL, _0, _1, _2, _3, _4, _5;
	zend_long handle, arg0X, arg0Y, arg0Width, arg0Height, color;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_5);
	ZEND_PARSE_PARAMETERS_START(6, 6)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(arg0X)
		Z_PARAM_LONG(arg0Y)
		Z_PARAM_LONG(arg0Width)
		Z_PARAM_LONG(arg0Height)
		Z_PARAM_LONG(color)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(6, 0, &handle_param, &arg0X_param, &arg0Y_param, &arg0Width_param, &arg0Height_param, &color_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, arg0X);
	ZVAL_LONG(&_2, arg0Y);
	ZVAL_LONG(&_3, arg0Width);
	ZVAL_LONG(&_4, arg0Height);
	ZVAL_LONG(&_5, color);
	phpqt_qpainter_fill_rect_q_rect_q_color(&_0, &_1, &_2, &_3, &_4, &_5);
}

PHP_METHOD(Qt_Gui_QPainter_QPainter, fillRectIntIntIntIntQtGlobalColor)
{
	zval *handle_param = NULL, *x_param = NULL, *y_param = NULL, *w_param = NULL, *h_param = NULL, *c_param = NULL, _0, _1, _2, _3, _4, _5;
	zend_long handle, x, y, w, h, c;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_5);
	ZEND_PARSE_PARAMETERS_START(6, 6)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(x)
		Z_PARAM_LONG(y)
		Z_PARAM_LONG(w)
		Z_PARAM_LONG(h)
		Z_PARAM_LONG(c)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(6, 0, &handle_param, &x_param, &y_param, &w_param, &h_param, &c_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, x);
	ZVAL_LONG(&_2, y);
	ZVAL_LONG(&_3, w);
	ZVAL_LONG(&_4, h);
	ZVAL_LONG(&_5, c);
	phpqt_qpainter_fill_rect_int_int_int_int_qt_global_color(&_0, &_1, &_2, &_3, &_4, &_5);
}

PHP_METHOD(Qt_Gui_QPainter_QPainter, fillRectQRectQtGlobalColor)
{
	zval *handle_param = NULL, *rX_param = NULL, *rY_param = NULL, *rWidth_param = NULL, *rHeight_param = NULL, *c_param = NULL, _0, _1, _2, _3, _4, _5;
	zend_long handle, rX, rY, rWidth, rHeight, c;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_5);
	ZEND_PARSE_PARAMETERS_START(6, 6)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(rX)
		Z_PARAM_LONG(rY)
		Z_PARAM_LONG(rWidth)
		Z_PARAM_LONG(rHeight)
		Z_PARAM_LONG(c)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(6, 0, &handle_param, &rX_param, &rY_param, &rWidth_param, &rHeight_param, &c_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, rX);
	ZVAL_LONG(&_2, rY);
	ZVAL_LONG(&_3, rWidth);
	ZVAL_LONG(&_4, rHeight);
	ZVAL_LONG(&_5, c);
	phpqt_qpainter_fill_rect_q_rect_qt_global_color(&_0, &_1, &_2, &_3, &_4, &_5);
}

PHP_METHOD(Qt_Gui_QPainter_QPainter, fillRectQRectFQtGlobalColor)
{
	double rX, rY, rWidth, rHeight;
	zval *handle_param = NULL, *rX_param = NULL, *rY_param = NULL, *rWidth_param = NULL, *rHeight_param = NULL, *c_param = NULL, _0, _1, _2, _3, _4, _5;
	zend_long handle, c;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_5);
	ZEND_PARSE_PARAMETERS_START(6, 6)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(rX)
		Z_PARAM_ZVAL(rY)
		Z_PARAM_ZVAL(rWidth)
		Z_PARAM_ZVAL(rHeight)
		Z_PARAM_LONG(c)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(6, 0, &handle_param, &rX_param, &rY_param, &rWidth_param, &rHeight_param, &c_param);
	rX = zephir_get_doubleval(rX_param);
	rY = zephir_get_doubleval(rY_param);
	rWidth = zephir_get_doubleval(rWidth_param);
	rHeight = zephir_get_doubleval(rHeight_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, rX);
	ZVAL_DOUBLE(&_2, rY);
	ZVAL_DOUBLE(&_3, rWidth);
	ZVAL_DOUBLE(&_4, rHeight);
	ZVAL_LONG(&_5, c);
	phpqt_qpainter_fill_rect_q_rect_f_qt_global_color(&_0, &_1, &_2, &_3, &_4, &_5);
}

PHP_METHOD(Qt_Gui_QPainter_QPainter, fillRectIntIntIntIntQtBrushStyle)
{
	zval *handle_param = NULL, *x_param = NULL, *y_param = NULL, *w_param = NULL, *h_param = NULL, *style_param = NULL, _0, _1, _2, _3, _4, _5;
	zend_long handle, x, y, w, h, style;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_5);
	ZEND_PARSE_PARAMETERS_START(6, 6)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(x)
		Z_PARAM_LONG(y)
		Z_PARAM_LONG(w)
		Z_PARAM_LONG(h)
		Z_PARAM_LONG(style)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(6, 0, &handle_param, &x_param, &y_param, &w_param, &h_param, &style_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, x);
	ZVAL_LONG(&_2, y);
	ZVAL_LONG(&_3, w);
	ZVAL_LONG(&_4, h);
	ZVAL_LONG(&_5, style);
	phpqt_qpainter_fill_rect_int_int_int_int_qt_brush_style(&_0, &_1, &_2, &_3, &_4, &_5);
}

PHP_METHOD(Qt_Gui_QPainter_QPainter, fillRectQRectQtBrushStyle)
{
	zval *handle_param = NULL, *rX_param = NULL, *rY_param = NULL, *rWidth_param = NULL, *rHeight_param = NULL, *style_param = NULL, _0, _1, _2, _3, _4, _5;
	zend_long handle, rX, rY, rWidth, rHeight, style;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_5);
	ZEND_PARSE_PARAMETERS_START(6, 6)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(rX)
		Z_PARAM_LONG(rY)
		Z_PARAM_LONG(rWidth)
		Z_PARAM_LONG(rHeight)
		Z_PARAM_LONG(style)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(6, 0, &handle_param, &rX_param, &rY_param, &rWidth_param, &rHeight_param, &style_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, rX);
	ZVAL_LONG(&_2, rY);
	ZVAL_LONG(&_3, rWidth);
	ZVAL_LONG(&_4, rHeight);
	ZVAL_LONG(&_5, style);
	phpqt_qpainter_fill_rect_q_rect_qt_brush_style(&_0, &_1, &_2, &_3, &_4, &_5);
}

PHP_METHOD(Qt_Gui_QPainter_QPainter, fillRectQRectFQtBrushStyle)
{
	double rX, rY, rWidth, rHeight;
	zval *handle_param = NULL, *rX_param = NULL, *rY_param = NULL, *rWidth_param = NULL, *rHeight_param = NULL, *style_param = NULL, _0, _1, _2, _3, _4, _5;
	zend_long handle, style;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_5);
	ZEND_PARSE_PARAMETERS_START(6, 6)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(rX)
		Z_PARAM_ZVAL(rY)
		Z_PARAM_ZVAL(rWidth)
		Z_PARAM_ZVAL(rHeight)
		Z_PARAM_LONG(style)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(6, 0, &handle_param, &rX_param, &rY_param, &rWidth_param, &rHeight_param, &style_param);
	rX = zephir_get_doubleval(rX_param);
	rY = zephir_get_doubleval(rY_param);
	rWidth = zephir_get_doubleval(rWidth_param);
	rHeight = zephir_get_doubleval(rHeight_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, rX);
	ZVAL_DOUBLE(&_2, rY);
	ZVAL_DOUBLE(&_3, rWidth);
	ZVAL_DOUBLE(&_4, rHeight);
	ZVAL_LONG(&_5, style);
	phpqt_qpainter_fill_rect_q_rect_f_qt_brush_style(&_0, &_1, &_2, &_3, &_4, &_5);
}

PHP_METHOD(Qt_Gui_QPainter_QPainter, fillRectIntIntIntIntQGradientPreset)
{
	zval *handle_param = NULL, *x_param = NULL, *y_param = NULL, *w_param = NULL, *h_param = NULL, *preset_param = NULL, _0, _1, _2, _3, _4, _5;
	zend_long handle, x, y, w, h, preset;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_5);
	ZEND_PARSE_PARAMETERS_START(6, 6)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(x)
		Z_PARAM_LONG(y)
		Z_PARAM_LONG(w)
		Z_PARAM_LONG(h)
		Z_PARAM_LONG(preset)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(6, 0, &handle_param, &x_param, &y_param, &w_param, &h_param, &preset_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, x);
	ZVAL_LONG(&_2, y);
	ZVAL_LONG(&_3, w);
	ZVAL_LONG(&_4, h);
	ZVAL_LONG(&_5, preset);
	phpqt_qpainter_fill_rect_int_int_int_int_q_gradient_preset(&_0, &_1, &_2, &_3, &_4, &_5);
}

PHP_METHOD(Qt_Gui_QPainter_QPainter, fillRectQRectQGradientPreset)
{
	zval *handle_param = NULL, *rX_param = NULL, *rY_param = NULL, *rWidth_param = NULL, *rHeight_param = NULL, *preset_param = NULL, _0, _1, _2, _3, _4, _5;
	zend_long handle, rX, rY, rWidth, rHeight, preset;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_5);
	ZEND_PARSE_PARAMETERS_START(6, 6)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(rX)
		Z_PARAM_LONG(rY)
		Z_PARAM_LONG(rWidth)
		Z_PARAM_LONG(rHeight)
		Z_PARAM_LONG(preset)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(6, 0, &handle_param, &rX_param, &rY_param, &rWidth_param, &rHeight_param, &preset_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, rX);
	ZVAL_LONG(&_2, rY);
	ZVAL_LONG(&_3, rWidth);
	ZVAL_LONG(&_4, rHeight);
	ZVAL_LONG(&_5, preset);
	phpqt_qpainter_fill_rect_q_rect_q_gradient_preset(&_0, &_1, &_2, &_3, &_4, &_5);
}

PHP_METHOD(Qt_Gui_QPainter_QPainter, fillRectQRectFQGradientPreset)
{
	double rX, rY, rWidth, rHeight;
	zval *handle_param = NULL, *rX_param = NULL, *rY_param = NULL, *rWidth_param = NULL, *rHeight_param = NULL, *preset_param = NULL, _0, _1, _2, _3, _4, _5;
	zend_long handle, preset;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_5);
	ZEND_PARSE_PARAMETERS_START(6, 6)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(rX)
		Z_PARAM_ZVAL(rY)
		Z_PARAM_ZVAL(rWidth)
		Z_PARAM_ZVAL(rHeight)
		Z_PARAM_LONG(preset)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(6, 0, &handle_param, &rX_param, &rY_param, &rWidth_param, &rHeight_param, &preset_param);
	rX = zephir_get_doubleval(rX_param);
	rY = zephir_get_doubleval(rY_param);
	rWidth = zephir_get_doubleval(rWidth_param);
	rHeight = zephir_get_doubleval(rHeight_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, rX);
	ZVAL_DOUBLE(&_2, rY);
	ZVAL_DOUBLE(&_3, rWidth);
	ZVAL_DOUBLE(&_4, rHeight);
	ZVAL_LONG(&_5, preset);
	phpqt_qpainter_fill_rect_q_rect_f_q_gradient_preset(&_0, &_1, &_2, &_3, &_4, &_5);
}

PHP_METHOD(Qt_Gui_QPainter_QPainter, eraseRect)
{
	double arg0X, arg0Y, arg0Width, arg0Height;
	zval *handle_param = NULL, *arg0X_param = NULL, *arg0Y_param = NULL, *arg0Width_param = NULL, *arg0Height_param = NULL, _0, _1, _2, _3, _4;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZEND_PARSE_PARAMETERS_START(5, 5)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(arg0X)
		Z_PARAM_ZVAL(arg0Y)
		Z_PARAM_ZVAL(arg0Width)
		Z_PARAM_ZVAL(arg0Height)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(5, 0, &handle_param, &arg0X_param, &arg0Y_param, &arg0Width_param, &arg0Height_param);
	arg0X = zephir_get_doubleval(arg0X_param);
	arg0Y = zephir_get_doubleval(arg0Y_param);
	arg0Width = zephir_get_doubleval(arg0Width_param);
	arg0Height = zephir_get_doubleval(arg0Height_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, arg0X);
	ZVAL_DOUBLE(&_2, arg0Y);
	ZVAL_DOUBLE(&_3, arg0Width);
	ZVAL_DOUBLE(&_4, arg0Height);
	phpqt_qpainter_erase_rect(&_0, &_1, &_2, &_3, &_4);
}

PHP_METHOD(Qt_Gui_QPainter_QPainter, eraseRectIntIntIntInt)
{
	zval *handle_param = NULL, *x_param = NULL, *y_param = NULL, *w_param = NULL, *h_param = NULL, _0, _1, _2, _3, _4;
	zend_long handle, x, y, w, h;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZEND_PARSE_PARAMETERS_START(5, 5)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(x)
		Z_PARAM_LONG(y)
		Z_PARAM_LONG(w)
		Z_PARAM_LONG(h)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(5, 0, &handle_param, &x_param, &y_param, &w_param, &h_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, x);
	ZVAL_LONG(&_2, y);
	ZVAL_LONG(&_3, w);
	ZVAL_LONG(&_4, h);
	phpqt_qpainter_erase_rect_int_int_int_int(&_0, &_1, &_2, &_3, &_4);
}

PHP_METHOD(Qt_Gui_QPainter_QPainter, eraseRectQRect)
{
	zval *handle_param = NULL, *arg0X_param = NULL, *arg0Y_param = NULL, *arg0Width_param = NULL, *arg0Height_param = NULL, _0, _1, _2, _3, _4;
	zend_long handle, arg0X, arg0Y, arg0Width, arg0Height;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZEND_PARSE_PARAMETERS_START(5, 5)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(arg0X)
		Z_PARAM_LONG(arg0Y)
		Z_PARAM_LONG(arg0Width)
		Z_PARAM_LONG(arg0Height)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(5, 0, &handle_param, &arg0X_param, &arg0Y_param, &arg0Width_param, &arg0Height_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, arg0X);
	ZVAL_LONG(&_2, arg0Y);
	ZVAL_LONG(&_3, arg0Width);
	ZVAL_LONG(&_4, arg0Height);
	phpqt_qpainter_erase_rect_q_rect(&_0, &_1, &_2, &_3, &_4);
}

PHP_METHOD(Qt_Gui_QPainter_QPainter, setRenderHint)
{
	zend_bool on;
	zval *handle_param = NULL, *hint_param = NULL, *on_param = NULL, _0, _1, _2;
	zend_long handle, hint;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(2, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(hint)
		Z_PARAM_OPTIONAL
		Z_PARAM_BOOL(on)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 1, &handle_param, &hint_param, &on_param);
	if (!on_param) {
		on = 1;
	} else {
		}
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, hint);
	ZVAL_BOOL(&_2, (on ? 1 : 0));
	phpqt_qpainter_set_render_hint(&_0, &_1, &_2);
}

PHP_METHOD(Qt_Gui_QPainter_QPainter, setRenderHints)
{
	zend_bool on;
	zval *handle_param = NULL, *hints_param = NULL, *on_param = NULL, _0, _1, _2;
	zend_long handle, hints;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(2, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(hints)
		Z_PARAM_OPTIONAL
		Z_PARAM_BOOL(on)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 1, &handle_param, &hints_param, &on_param);
	if (!on_param) {
		on = 1;
	} else {
		}
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, hints);
	ZVAL_BOOL(&_2, (on ? 1 : 0));
	phpqt_qpainter_set_render_hints(&_0, &_1, &_2);
}

PHP_METHOD(Qt_Gui_QPainter_QPainter, renderHints)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qpainter_render_hints(&_0));
}

PHP_METHOD(Qt_Gui_QPainter_QPainter, testRenderHint)
{
	zval *handle_param = NULL, *hint_param = NULL, _0, _1;
	zend_long handle, hint, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(hint)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &hint_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, hint);
	r = phpqt_qpainter_test_render_hint(&_0, &_1);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Gui_QPainter_QPainter, paintEngine)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qpainter_paint_engine(&_0));
}

PHP_METHOD(Qt_Gui_QPainter_QPainter, beginNativePainting)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qpainter_begin_native_painting(&_0);
}

PHP_METHOD(Qt_Gui_QPainter_QPainter, endNativePainting)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qpainter_end_native_painting(&_0);
}

