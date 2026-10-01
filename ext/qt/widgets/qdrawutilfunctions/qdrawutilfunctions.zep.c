
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
#include "src/widgets-qdrawutilfunctions.h"
#include "kernel/operators.h"
#include "kernel/memory.h"
#include "kernel/object.h"


ZEPHIR_INIT_CLASS(Qt_Widgets_QDrawutilFunctions_QDrawutilFunctions)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Widgets\\QDrawutilFunctions, QDrawutilFunctions, qt, widgets_qdrawutilfunctions_qdrawutilfunctions, qt_widgets_qdrawutilfunctions_qdrawutilfunctions_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Widgets_QDrawutilFunctions_QDrawutilFunctions, qDrawShadeLine)
{
	zend_bool sunken;
	zval *p_param = NULL, *x1_param = NULL, *y1_param = NULL, *x2_param = NULL, *y2_param = NULL, *pal_param = NULL, *sunken_param = NULL, *lineWidth_param = NULL, *midLineWidth_param = NULL, _0, _1, _2, _3, _4, _5, _6, _7, _8;
	zend_long p, x1, y1, x2, y2, pal, lineWidth, midLineWidth;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_5);
	ZVAL_UNDEF(&_6);
	ZVAL_UNDEF(&_7);
	ZVAL_UNDEF(&_8);
	ZEND_PARSE_PARAMETERS_START(6, 9)
		Z_PARAM_LONG(p)
		Z_PARAM_LONG(x1)
		Z_PARAM_LONG(y1)
		Z_PARAM_LONG(x2)
		Z_PARAM_LONG(y2)
		Z_PARAM_LONG(pal)
		Z_PARAM_OPTIONAL
		Z_PARAM_BOOL(sunken)
		Z_PARAM_LONG(lineWidth)
		Z_PARAM_LONG(midLineWidth)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(6, 3, &p_param, &x1_param, &y1_param, &x2_param, &y2_param, &pal_param, &sunken_param, &lineWidth_param, &midLineWidth_param);
	if (!sunken_param) {
		sunken = 1;
	} else {
		}
	if (!lineWidth_param) {
		lineWidth = 1;
	} else {
		}
	if (!midLineWidth_param) {
		midLineWidth = 0;
	} else {
		}
	ZVAL_LONG(&_0, p);
	ZVAL_LONG(&_1, x1);
	ZVAL_LONG(&_2, y1);
	ZVAL_LONG(&_3, x2);
	ZVAL_LONG(&_4, y2);
	ZVAL_LONG(&_5, pal);
	ZVAL_BOOL(&_6, (sunken ? 1 : 0));
	ZVAL_LONG(&_7, lineWidth);
	ZVAL_LONG(&_8, midLineWidth);
	phpqt_qdrawutilfunctions_q_draw_shade_line(&_0, &_1, &_2, &_3, &_4, &_5, &_6, &_7, &_8);
}

PHP_METHOD(Qt_Widgets_QDrawutilFunctions_QDrawutilFunctions, qDrawShadeLineQPainterQPointQPointQPaletteBoolIntInt)
{
	zend_bool sunken;
	zval *p_param = NULL, *p1X_param = NULL, *p1Y_param = NULL, *p2X_param = NULL, *p2Y_param = NULL, *pal_param = NULL, *sunken_param = NULL, *lineWidth_param = NULL, *midLineWidth_param = NULL, _0, _1, _2, _3, _4, _5, _6, _7, _8;
	zend_long p, p1X, p1Y, p2X, p2Y, pal, lineWidth, midLineWidth;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_5);
	ZVAL_UNDEF(&_6);
	ZVAL_UNDEF(&_7);
	ZVAL_UNDEF(&_8);
	ZEND_PARSE_PARAMETERS_START(6, 9)
		Z_PARAM_LONG(p)
		Z_PARAM_LONG(p1X)
		Z_PARAM_LONG(p1Y)
		Z_PARAM_LONG(p2X)
		Z_PARAM_LONG(p2Y)
		Z_PARAM_LONG(pal)
		Z_PARAM_OPTIONAL
		Z_PARAM_BOOL(sunken)
		Z_PARAM_LONG(lineWidth)
		Z_PARAM_LONG(midLineWidth)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(6, 3, &p_param, &p1X_param, &p1Y_param, &p2X_param, &p2Y_param, &pal_param, &sunken_param, &lineWidth_param, &midLineWidth_param);
	if (!sunken_param) {
		sunken = 1;
	} else {
		}
	if (!lineWidth_param) {
		lineWidth = 1;
	} else {
		}
	if (!midLineWidth_param) {
		midLineWidth = 0;
	} else {
		}
	ZVAL_LONG(&_0, p);
	ZVAL_LONG(&_1, p1X);
	ZVAL_LONG(&_2, p1Y);
	ZVAL_LONG(&_3, p2X);
	ZVAL_LONG(&_4, p2Y);
	ZVAL_LONG(&_5, pal);
	ZVAL_BOOL(&_6, (sunken ? 1 : 0));
	ZVAL_LONG(&_7, lineWidth);
	ZVAL_LONG(&_8, midLineWidth);
	phpqt_qdrawutilfunctions_q_draw_shade_line_q_painter_q_point_q_point_q_palette_bool_int_int(&_0, &_1, &_2, &_3, &_4, &_5, &_6, &_7, &_8);
}

PHP_METHOD(Qt_Widgets_QDrawutilFunctions_QDrawutilFunctions, qDrawShadeRect)
{
	zend_bool sunken;
	zval *p_param = NULL, *x_param = NULL, *y_param = NULL, *w_param = NULL, *h_param = NULL, *pal_param = NULL, *sunken_param = NULL, *lineWidth_param = NULL, *midLineWidth_param = NULL, *fill_param = NULL, _0, _1, _2, _3, _4, _5, _6, _7, _8, _9;
	zend_long p, x, y, w, h, pal, lineWidth, midLineWidth, fill;

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
	ZEND_PARSE_PARAMETERS_START(6, 10)
		Z_PARAM_LONG(p)
		Z_PARAM_LONG(x)
		Z_PARAM_LONG(y)
		Z_PARAM_LONG(w)
		Z_PARAM_LONG(h)
		Z_PARAM_LONG(pal)
		Z_PARAM_OPTIONAL
		Z_PARAM_BOOL(sunken)
		Z_PARAM_LONG(lineWidth)
		Z_PARAM_LONG(midLineWidth)
		Z_PARAM_LONG(fill)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(6, 4, &p_param, &x_param, &y_param, &w_param, &h_param, &pal_param, &sunken_param, &lineWidth_param, &midLineWidth_param, &fill_param);
	if (!sunken_param) {
		sunken = 0;
	} else {
		}
	if (!lineWidth_param) {
		lineWidth = 1;
	} else {
		}
	if (!midLineWidth_param) {
		midLineWidth = 0;
	} else {
		}
	if (!fill_param) {
		fill = 0;
	} else {
		}
	ZVAL_LONG(&_0, p);
	ZVAL_LONG(&_1, x);
	ZVAL_LONG(&_2, y);
	ZVAL_LONG(&_3, w);
	ZVAL_LONG(&_4, h);
	ZVAL_LONG(&_5, pal);
	ZVAL_BOOL(&_6, (sunken ? 1 : 0));
	ZVAL_LONG(&_7, lineWidth);
	ZVAL_LONG(&_8, midLineWidth);
	ZVAL_LONG(&_9, fill);
	phpqt_qdrawutilfunctions_q_draw_shade_rect(&_0, &_1, &_2, &_3, &_4, &_5, &_6, &_7, &_8, &_9);
}

PHP_METHOD(Qt_Widgets_QDrawutilFunctions_QDrawutilFunctions, qDrawShadeRectQPainterQRectQPaletteBoolIntIntQBrush)
{
	zend_bool sunken;
	zval *p_param = NULL, *rX_param = NULL, *rY_param = NULL, *rWidth_param = NULL, *rHeight_param = NULL, *pal_param = NULL, *sunken_param = NULL, *lineWidth_param = NULL, *midLineWidth_param = NULL, *fill_param = NULL, _0, _1, _2, _3, _4, _5, _6, _7, _8, _9;
	zend_long p, rX, rY, rWidth, rHeight, pal, lineWidth, midLineWidth, fill;

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
	ZEND_PARSE_PARAMETERS_START(6, 10)
		Z_PARAM_LONG(p)
		Z_PARAM_LONG(rX)
		Z_PARAM_LONG(rY)
		Z_PARAM_LONG(rWidth)
		Z_PARAM_LONG(rHeight)
		Z_PARAM_LONG(pal)
		Z_PARAM_OPTIONAL
		Z_PARAM_BOOL(sunken)
		Z_PARAM_LONG(lineWidth)
		Z_PARAM_LONG(midLineWidth)
		Z_PARAM_LONG(fill)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(6, 4, &p_param, &rX_param, &rY_param, &rWidth_param, &rHeight_param, &pal_param, &sunken_param, &lineWidth_param, &midLineWidth_param, &fill_param);
	if (!sunken_param) {
		sunken = 0;
	} else {
		}
	if (!lineWidth_param) {
		lineWidth = 1;
	} else {
		}
	if (!midLineWidth_param) {
		midLineWidth = 0;
	} else {
		}
	if (!fill_param) {
		fill = 0;
	} else {
		}
	ZVAL_LONG(&_0, p);
	ZVAL_LONG(&_1, rX);
	ZVAL_LONG(&_2, rY);
	ZVAL_LONG(&_3, rWidth);
	ZVAL_LONG(&_4, rHeight);
	ZVAL_LONG(&_5, pal);
	ZVAL_BOOL(&_6, (sunken ? 1 : 0));
	ZVAL_LONG(&_7, lineWidth);
	ZVAL_LONG(&_8, midLineWidth);
	ZVAL_LONG(&_9, fill);
	phpqt_qdrawutilfunctions_q_draw_shade_rect_q_painter_q_rect_q_palette_bool_int_int_q_brush(&_0, &_1, &_2, &_3, &_4, &_5, &_6, &_7, &_8, &_9);
}

PHP_METHOD(Qt_Widgets_QDrawutilFunctions_QDrawutilFunctions, qDrawShadePanel)
{
	zend_bool sunken;
	zval *p_param = NULL, *x_param = NULL, *y_param = NULL, *w_param = NULL, *h_param = NULL, *pal_param = NULL, *sunken_param = NULL, *lineWidth_param = NULL, *fill_param = NULL, _0, _1, _2, _3, _4, _5, _6, _7, _8;
	zend_long p, x, y, w, h, pal, lineWidth, fill;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_5);
	ZVAL_UNDEF(&_6);
	ZVAL_UNDEF(&_7);
	ZVAL_UNDEF(&_8);
	ZEND_PARSE_PARAMETERS_START(6, 9)
		Z_PARAM_LONG(p)
		Z_PARAM_LONG(x)
		Z_PARAM_LONG(y)
		Z_PARAM_LONG(w)
		Z_PARAM_LONG(h)
		Z_PARAM_LONG(pal)
		Z_PARAM_OPTIONAL
		Z_PARAM_BOOL(sunken)
		Z_PARAM_LONG(lineWidth)
		Z_PARAM_LONG(fill)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(6, 3, &p_param, &x_param, &y_param, &w_param, &h_param, &pal_param, &sunken_param, &lineWidth_param, &fill_param);
	if (!sunken_param) {
		sunken = 0;
	} else {
		}
	if (!lineWidth_param) {
		lineWidth = 1;
	} else {
		}
	if (!fill_param) {
		fill = 0;
	} else {
		}
	ZVAL_LONG(&_0, p);
	ZVAL_LONG(&_1, x);
	ZVAL_LONG(&_2, y);
	ZVAL_LONG(&_3, w);
	ZVAL_LONG(&_4, h);
	ZVAL_LONG(&_5, pal);
	ZVAL_BOOL(&_6, (sunken ? 1 : 0));
	ZVAL_LONG(&_7, lineWidth);
	ZVAL_LONG(&_8, fill);
	phpqt_qdrawutilfunctions_q_draw_shade_panel(&_0, &_1, &_2, &_3, &_4, &_5, &_6, &_7, &_8);
}

PHP_METHOD(Qt_Widgets_QDrawutilFunctions_QDrawutilFunctions, qDrawShadePanelQPainterQRectQPaletteBoolIntQBrush)
{
	zend_bool sunken;
	zval *p_param = NULL, *rX_param = NULL, *rY_param = NULL, *rWidth_param = NULL, *rHeight_param = NULL, *pal_param = NULL, *sunken_param = NULL, *lineWidth_param = NULL, *fill_param = NULL, _0, _1, _2, _3, _4, _5, _6, _7, _8;
	zend_long p, rX, rY, rWidth, rHeight, pal, lineWidth, fill;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_5);
	ZVAL_UNDEF(&_6);
	ZVAL_UNDEF(&_7);
	ZVAL_UNDEF(&_8);
	ZEND_PARSE_PARAMETERS_START(6, 9)
		Z_PARAM_LONG(p)
		Z_PARAM_LONG(rX)
		Z_PARAM_LONG(rY)
		Z_PARAM_LONG(rWidth)
		Z_PARAM_LONG(rHeight)
		Z_PARAM_LONG(pal)
		Z_PARAM_OPTIONAL
		Z_PARAM_BOOL(sunken)
		Z_PARAM_LONG(lineWidth)
		Z_PARAM_LONG(fill)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(6, 3, &p_param, &rX_param, &rY_param, &rWidth_param, &rHeight_param, &pal_param, &sunken_param, &lineWidth_param, &fill_param);
	if (!sunken_param) {
		sunken = 0;
	} else {
		}
	if (!lineWidth_param) {
		lineWidth = 1;
	} else {
		}
	if (!fill_param) {
		fill = 0;
	} else {
		}
	ZVAL_LONG(&_0, p);
	ZVAL_LONG(&_1, rX);
	ZVAL_LONG(&_2, rY);
	ZVAL_LONG(&_3, rWidth);
	ZVAL_LONG(&_4, rHeight);
	ZVAL_LONG(&_5, pal);
	ZVAL_BOOL(&_6, (sunken ? 1 : 0));
	ZVAL_LONG(&_7, lineWidth);
	ZVAL_LONG(&_8, fill);
	phpqt_qdrawutilfunctions_q_draw_shade_panel_q_painter_q_rect_q_palette_bool_int_q_brush(&_0, &_1, &_2, &_3, &_4, &_5, &_6, &_7, &_8);
}

PHP_METHOD(Qt_Widgets_QDrawutilFunctions_QDrawutilFunctions, qDrawWinButton)
{
	zend_bool sunken;
	zval *p_param = NULL, *x_param = NULL, *y_param = NULL, *w_param = NULL, *h_param = NULL, *pal_param = NULL, *sunken_param = NULL, *fill_param = NULL, _0, _1, _2, _3, _4, _5, _6, _7;
	zend_long p, x, y, w, h, pal, fill;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_5);
	ZVAL_UNDEF(&_6);
	ZVAL_UNDEF(&_7);
	ZEND_PARSE_PARAMETERS_START(6, 8)
		Z_PARAM_LONG(p)
		Z_PARAM_LONG(x)
		Z_PARAM_LONG(y)
		Z_PARAM_LONG(w)
		Z_PARAM_LONG(h)
		Z_PARAM_LONG(pal)
		Z_PARAM_OPTIONAL
		Z_PARAM_BOOL(sunken)
		Z_PARAM_LONG(fill)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(6, 2, &p_param, &x_param, &y_param, &w_param, &h_param, &pal_param, &sunken_param, &fill_param);
	if (!sunken_param) {
		sunken = 0;
	} else {
		}
	if (!fill_param) {
		fill = 0;
	} else {
		}
	ZVAL_LONG(&_0, p);
	ZVAL_LONG(&_1, x);
	ZVAL_LONG(&_2, y);
	ZVAL_LONG(&_3, w);
	ZVAL_LONG(&_4, h);
	ZVAL_LONG(&_5, pal);
	ZVAL_BOOL(&_6, (sunken ? 1 : 0));
	ZVAL_LONG(&_7, fill);
	phpqt_qdrawutilfunctions_q_draw_win_button(&_0, &_1, &_2, &_3, &_4, &_5, &_6, &_7);
}

PHP_METHOD(Qt_Widgets_QDrawutilFunctions_QDrawutilFunctions, qDrawWinButtonQPainterQRectQPaletteBoolQBrush)
{
	zend_bool sunken;
	zval *p_param = NULL, *rX_param = NULL, *rY_param = NULL, *rWidth_param = NULL, *rHeight_param = NULL, *pal_param = NULL, *sunken_param = NULL, *fill_param = NULL, _0, _1, _2, _3, _4, _5, _6, _7;
	zend_long p, rX, rY, rWidth, rHeight, pal, fill;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_5);
	ZVAL_UNDEF(&_6);
	ZVAL_UNDEF(&_7);
	ZEND_PARSE_PARAMETERS_START(6, 8)
		Z_PARAM_LONG(p)
		Z_PARAM_LONG(rX)
		Z_PARAM_LONG(rY)
		Z_PARAM_LONG(rWidth)
		Z_PARAM_LONG(rHeight)
		Z_PARAM_LONG(pal)
		Z_PARAM_OPTIONAL
		Z_PARAM_BOOL(sunken)
		Z_PARAM_LONG(fill)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(6, 2, &p_param, &rX_param, &rY_param, &rWidth_param, &rHeight_param, &pal_param, &sunken_param, &fill_param);
	if (!sunken_param) {
		sunken = 0;
	} else {
		}
	if (!fill_param) {
		fill = 0;
	} else {
		}
	ZVAL_LONG(&_0, p);
	ZVAL_LONG(&_1, rX);
	ZVAL_LONG(&_2, rY);
	ZVAL_LONG(&_3, rWidth);
	ZVAL_LONG(&_4, rHeight);
	ZVAL_LONG(&_5, pal);
	ZVAL_BOOL(&_6, (sunken ? 1 : 0));
	ZVAL_LONG(&_7, fill);
	phpqt_qdrawutilfunctions_q_draw_win_button_q_painter_q_rect_q_palette_bool_q_brush(&_0, &_1, &_2, &_3, &_4, &_5, &_6, &_7);
}

PHP_METHOD(Qt_Widgets_QDrawutilFunctions_QDrawutilFunctions, qDrawWinPanel)
{
	zend_bool sunken;
	zval *p_param = NULL, *x_param = NULL, *y_param = NULL, *w_param = NULL, *h_param = NULL, *pal_param = NULL, *sunken_param = NULL, *fill_param = NULL, _0, _1, _2, _3, _4, _5, _6, _7;
	zend_long p, x, y, w, h, pal, fill;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_5);
	ZVAL_UNDEF(&_6);
	ZVAL_UNDEF(&_7);
	ZEND_PARSE_PARAMETERS_START(6, 8)
		Z_PARAM_LONG(p)
		Z_PARAM_LONG(x)
		Z_PARAM_LONG(y)
		Z_PARAM_LONG(w)
		Z_PARAM_LONG(h)
		Z_PARAM_LONG(pal)
		Z_PARAM_OPTIONAL
		Z_PARAM_BOOL(sunken)
		Z_PARAM_LONG(fill)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(6, 2, &p_param, &x_param, &y_param, &w_param, &h_param, &pal_param, &sunken_param, &fill_param);
	if (!sunken_param) {
		sunken = 0;
	} else {
		}
	if (!fill_param) {
		fill = 0;
	} else {
		}
	ZVAL_LONG(&_0, p);
	ZVAL_LONG(&_1, x);
	ZVAL_LONG(&_2, y);
	ZVAL_LONG(&_3, w);
	ZVAL_LONG(&_4, h);
	ZVAL_LONG(&_5, pal);
	ZVAL_BOOL(&_6, (sunken ? 1 : 0));
	ZVAL_LONG(&_7, fill);
	phpqt_qdrawutilfunctions_q_draw_win_panel(&_0, &_1, &_2, &_3, &_4, &_5, &_6, &_7);
}

PHP_METHOD(Qt_Widgets_QDrawutilFunctions_QDrawutilFunctions, qDrawWinPanelQPainterQRectQPaletteBoolQBrush)
{
	zend_bool sunken;
	zval *p_param = NULL, *rX_param = NULL, *rY_param = NULL, *rWidth_param = NULL, *rHeight_param = NULL, *pal_param = NULL, *sunken_param = NULL, *fill_param = NULL, _0, _1, _2, _3, _4, _5, _6, _7;
	zend_long p, rX, rY, rWidth, rHeight, pal, fill;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_5);
	ZVAL_UNDEF(&_6);
	ZVAL_UNDEF(&_7);
	ZEND_PARSE_PARAMETERS_START(6, 8)
		Z_PARAM_LONG(p)
		Z_PARAM_LONG(rX)
		Z_PARAM_LONG(rY)
		Z_PARAM_LONG(rWidth)
		Z_PARAM_LONG(rHeight)
		Z_PARAM_LONG(pal)
		Z_PARAM_OPTIONAL
		Z_PARAM_BOOL(sunken)
		Z_PARAM_LONG(fill)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(6, 2, &p_param, &rX_param, &rY_param, &rWidth_param, &rHeight_param, &pal_param, &sunken_param, &fill_param);
	if (!sunken_param) {
		sunken = 0;
	} else {
		}
	if (!fill_param) {
		fill = 0;
	} else {
		}
	ZVAL_LONG(&_0, p);
	ZVAL_LONG(&_1, rX);
	ZVAL_LONG(&_2, rY);
	ZVAL_LONG(&_3, rWidth);
	ZVAL_LONG(&_4, rHeight);
	ZVAL_LONG(&_5, pal);
	ZVAL_BOOL(&_6, (sunken ? 1 : 0));
	ZVAL_LONG(&_7, fill);
	phpqt_qdrawutilfunctions_q_draw_win_panel_q_painter_q_rect_q_palette_bool_q_brush(&_0, &_1, &_2, &_3, &_4, &_5, &_6, &_7);
}

PHP_METHOD(Qt_Widgets_QDrawutilFunctions_QDrawutilFunctions, qDrawPlainRect)
{
	zval *p_param = NULL, *x_param = NULL, *y_param = NULL, *w_param = NULL, *h_param = NULL, *arg5_param = NULL, *lineWidth_param = NULL, *fill_param = NULL, _0, _1, _2, _3, _4, _5, _6, _7;
	zend_long p, x, y, w, h, arg5, lineWidth, fill;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_5);
	ZVAL_UNDEF(&_6);
	ZVAL_UNDEF(&_7);
	ZEND_PARSE_PARAMETERS_START(6, 8)
		Z_PARAM_LONG(p)
		Z_PARAM_LONG(x)
		Z_PARAM_LONG(y)
		Z_PARAM_LONG(w)
		Z_PARAM_LONG(h)
		Z_PARAM_LONG(arg5)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(lineWidth)
		Z_PARAM_LONG(fill)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(6, 2, &p_param, &x_param, &y_param, &w_param, &h_param, &arg5_param, &lineWidth_param, &fill_param);
	if (!lineWidth_param) {
		lineWidth = 1;
	} else {
		}
	if (!fill_param) {
		fill = 0;
	} else {
		}
	ZVAL_LONG(&_0, p);
	ZVAL_LONG(&_1, x);
	ZVAL_LONG(&_2, y);
	ZVAL_LONG(&_3, w);
	ZVAL_LONG(&_4, h);
	ZVAL_LONG(&_5, arg5);
	ZVAL_LONG(&_6, lineWidth);
	ZVAL_LONG(&_7, fill);
	phpqt_qdrawutilfunctions_q_draw_plain_rect(&_0, &_1, &_2, &_3, &_4, &_5, &_6, &_7);
}

PHP_METHOD(Qt_Widgets_QDrawutilFunctions_QDrawutilFunctions, qDrawPlainRectQPainterQRectQColorIntQBrush)
{
	zval *p_param = NULL, *rX_param = NULL, *rY_param = NULL, *rWidth_param = NULL, *rHeight_param = NULL, *arg2_param = NULL, *lineWidth_param = NULL, *fill_param = NULL, _0, _1, _2, _3, _4, _5, _6, _7;
	zend_long p, rX, rY, rWidth, rHeight, arg2, lineWidth, fill;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_5);
	ZVAL_UNDEF(&_6);
	ZVAL_UNDEF(&_7);
	ZEND_PARSE_PARAMETERS_START(6, 8)
		Z_PARAM_LONG(p)
		Z_PARAM_LONG(rX)
		Z_PARAM_LONG(rY)
		Z_PARAM_LONG(rWidth)
		Z_PARAM_LONG(rHeight)
		Z_PARAM_LONG(arg2)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(lineWidth)
		Z_PARAM_LONG(fill)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(6, 2, &p_param, &rX_param, &rY_param, &rWidth_param, &rHeight_param, &arg2_param, &lineWidth_param, &fill_param);
	if (!lineWidth_param) {
		lineWidth = 1;
	} else {
		}
	if (!fill_param) {
		fill = 0;
	} else {
		}
	ZVAL_LONG(&_0, p);
	ZVAL_LONG(&_1, rX);
	ZVAL_LONG(&_2, rY);
	ZVAL_LONG(&_3, rWidth);
	ZVAL_LONG(&_4, rHeight);
	ZVAL_LONG(&_5, arg2);
	ZVAL_LONG(&_6, lineWidth);
	ZVAL_LONG(&_7, fill);
	phpqt_qdrawutilfunctions_q_draw_plain_rect_q_painter_q_rect_q_color_int_q_brush(&_0, &_1, &_2, &_3, &_4, &_5, &_6, &_7);
}

PHP_METHOD(Qt_Widgets_QDrawutilFunctions_QDrawutilFunctions, qDrawPlainRoundedRect)
{
	double rx, ry;
	zval *p_param = NULL, *x_param = NULL, *y_param = NULL, *w_param = NULL, *h_param = NULL, *rx_param = NULL, *ry_param = NULL, *arg7_param = NULL, *lineWidth_param = NULL, *fill_param = NULL, _0, _1, _2, _3, _4, _5, _6, _7, _8, _9;
	zend_long p, x, y, w, h, arg7, lineWidth, fill;

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
	ZEND_PARSE_PARAMETERS_START(8, 10)
		Z_PARAM_LONG(p)
		Z_PARAM_LONG(x)
		Z_PARAM_LONG(y)
		Z_PARAM_LONG(w)
		Z_PARAM_LONG(h)
		Z_PARAM_ZVAL(rx)
		Z_PARAM_ZVAL(ry)
		Z_PARAM_LONG(arg7)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(lineWidth)
		Z_PARAM_LONG(fill)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(8, 2, &p_param, &x_param, &y_param, &w_param, &h_param, &rx_param, &ry_param, &arg7_param, &lineWidth_param, &fill_param);
	rx = zephir_get_doubleval(rx_param);
	ry = zephir_get_doubleval(ry_param);
	if (!lineWidth_param) {
		lineWidth = 1;
	} else {
		}
	if (!fill_param) {
		fill = 0;
	} else {
		}
	ZVAL_LONG(&_0, p);
	ZVAL_LONG(&_1, x);
	ZVAL_LONG(&_2, y);
	ZVAL_LONG(&_3, w);
	ZVAL_LONG(&_4, h);
	ZVAL_DOUBLE(&_5, rx);
	ZVAL_DOUBLE(&_6, ry);
	ZVAL_LONG(&_7, arg7);
	ZVAL_LONG(&_8, lineWidth);
	ZVAL_LONG(&_9, fill);
	phpqt_qdrawutilfunctions_q_draw_plain_rounded_rect(&_0, &_1, &_2, &_3, &_4, &_5, &_6, &_7, &_8, &_9);
}

PHP_METHOD(Qt_Widgets_QDrawutilFunctions_QDrawutilFunctions, qDrawPlainRoundedRectQPainterQRectQrealQrealQColorIntQBrush)
{
	double rx, ry;
	zval *painter_param = NULL, *rectX_param = NULL, *rectY_param = NULL, *rectWidth_param = NULL, *rectHeight_param = NULL, *rx_param = NULL, *ry_param = NULL, *lineColor_param = NULL, *lineWidth_param = NULL, *fill_param = NULL, _0, _1, _2, _3, _4, _5, _6, _7, _8, _9;
	zend_long painter, rectX, rectY, rectWidth, rectHeight, lineColor, lineWidth, fill;

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
	ZEND_PARSE_PARAMETERS_START(8, 10)
		Z_PARAM_LONG(painter)
		Z_PARAM_LONG(rectX)
		Z_PARAM_LONG(rectY)
		Z_PARAM_LONG(rectWidth)
		Z_PARAM_LONG(rectHeight)
		Z_PARAM_ZVAL(rx)
		Z_PARAM_ZVAL(ry)
		Z_PARAM_LONG(lineColor)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(lineWidth)
		Z_PARAM_LONG(fill)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(8, 2, &painter_param, &rectX_param, &rectY_param, &rectWidth_param, &rectHeight_param, &rx_param, &ry_param, &lineColor_param, &lineWidth_param, &fill_param);
	rx = zephir_get_doubleval(rx_param);
	ry = zephir_get_doubleval(ry_param);
	if (!lineWidth_param) {
		lineWidth = 1;
	} else {
		}
	if (!fill_param) {
		fill = 0;
	} else {
		}
	ZVAL_LONG(&_0, painter);
	ZVAL_LONG(&_1, rectX);
	ZVAL_LONG(&_2, rectY);
	ZVAL_LONG(&_3, rectWidth);
	ZVAL_LONG(&_4, rectHeight);
	ZVAL_DOUBLE(&_5, rx);
	ZVAL_DOUBLE(&_6, ry);
	ZVAL_LONG(&_7, lineColor);
	ZVAL_LONG(&_8, lineWidth);
	ZVAL_LONG(&_9, fill);
	phpqt_qdrawutilfunctions_q_draw_plain_rounded_rect_q_painter_q_rect_qreal_qreal_q_color_int_q_brush(&_0, &_1, &_2, &_3, &_4, &_5, &_6, &_7, &_8, &_9);
}

PHP_METHOD(Qt_Widgets_QDrawutilFunctions_QDrawutilFunctions, qDrawBorderPixmap)
{
	zval *painter_param = NULL, *targetRectX_param = NULL, *targetRectY_param = NULL, *targetRectWidth_param = NULL, *targetRectHeight_param = NULL, *targetMarginsLeft_param = NULL, *targetMarginsTop_param = NULL, *targetMarginsRight_param = NULL, *targetMarginsBottom_param = NULL, *pixmap_param = NULL, *sourceRectX_param = NULL, *sourceRectY_param = NULL, *sourceRectWidth_param = NULL, *sourceRectHeight_param = NULL, *sourceMarginsLeft_param = NULL, *sourceMarginsTop_param = NULL, *sourceMarginsRight_param = NULL, *sourceMarginsBottom_param = NULL, *rules = NULL, rules_sub, *hints = NULL, hints_sub, __$null, _0, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17;
	zend_long painter, targetRectX, targetRectY, targetRectWidth, targetRectHeight, targetMarginsLeft, targetMarginsTop, targetMarginsRight, targetMarginsBottom, pixmap, sourceRectX, sourceRectY, sourceRectWidth, sourceRectHeight, sourceMarginsLeft, sourceMarginsTop, sourceMarginsRight, sourceMarginsBottom;

	ZVAL_UNDEF(&rules_sub);
	ZVAL_UNDEF(&hints_sub);
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
	ZVAL_UNDEF(&_10);
	ZVAL_UNDEF(&_11);
	ZVAL_UNDEF(&_12);
	ZVAL_UNDEF(&_13);
	ZVAL_UNDEF(&_14);
	ZVAL_UNDEF(&_15);
	ZVAL_UNDEF(&_16);
	ZVAL_UNDEF(&_17);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(18, 20)
		Z_PARAM_LONG(painter)
		Z_PARAM_LONG(targetRectX)
		Z_PARAM_LONG(targetRectY)
		Z_PARAM_LONG(targetRectWidth)
		Z_PARAM_LONG(targetRectHeight)
		Z_PARAM_LONG(targetMarginsLeft)
		Z_PARAM_LONG(targetMarginsTop)
		Z_PARAM_LONG(targetMarginsRight)
		Z_PARAM_LONG(targetMarginsBottom)
		Z_PARAM_LONG(pixmap)
		Z_PARAM_LONG(sourceRectX)
		Z_PARAM_LONG(sourceRectY)
		Z_PARAM_LONG(sourceRectWidth)
		Z_PARAM_LONG(sourceRectHeight)
		Z_PARAM_LONG(sourceMarginsLeft)
		Z_PARAM_LONG(sourceMarginsTop)
		Z_PARAM_LONG(sourceMarginsRight)
		Z_PARAM_LONG(sourceMarginsBottom)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(rules)
		Z_PARAM_ZVAL_OR_NULL(hints)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(18, 2, &painter_param, &targetRectX_param, &targetRectY_param, &targetRectWidth_param, &targetRectHeight_param, &targetMarginsLeft_param, &targetMarginsTop_param, &targetMarginsRight_param, &targetMarginsBottom_param, &pixmap_param, &sourceRectX_param, &sourceRectY_param, &sourceRectWidth_param, &sourceRectHeight_param, &sourceMarginsLeft_param, &sourceMarginsTop_param, &sourceMarginsRight_param, &sourceMarginsBottom_param, &rules, &hints);
	if (!rules) {
		rules = &rules_sub;
		rules = &__$null;
	}
	if (!hints) {
		hints = &hints_sub;
		hints = &__$null;
	}
	ZVAL_LONG(&_0, painter);
	ZVAL_LONG(&_1, targetRectX);
	ZVAL_LONG(&_2, targetRectY);
	ZVAL_LONG(&_3, targetRectWidth);
	ZVAL_LONG(&_4, targetRectHeight);
	ZVAL_LONG(&_5, targetMarginsLeft);
	ZVAL_LONG(&_6, targetMarginsTop);
	ZVAL_LONG(&_7, targetMarginsRight);
	ZVAL_LONG(&_8, targetMarginsBottom);
	ZVAL_LONG(&_9, pixmap);
	ZVAL_LONG(&_10, sourceRectX);
	ZVAL_LONG(&_11, sourceRectY);
	ZVAL_LONG(&_12, sourceRectWidth);
	ZVAL_LONG(&_13, sourceRectHeight);
	ZVAL_LONG(&_14, sourceMarginsLeft);
	ZVAL_LONG(&_15, sourceMarginsTop);
	ZVAL_LONG(&_16, sourceMarginsRight);
	ZVAL_LONG(&_17, sourceMarginsBottom);
	phpqt_qdrawutilfunctions_q_draw_border_pixmap(&_0, &_1, &_2, &_3, &_4, &_5, &_6, &_7, &_8, &_9, &_10, &_11, &_12, &_13, &_14, &_15, &_16, &_17, rules, hints);
}

PHP_METHOD(Qt_Widgets_QDrawutilFunctions_QDrawutilFunctions, qDrawBorderPixmapQPainterQRectQMarginsQPixmap)
{
	zval *painter_param = NULL, *targetX_param = NULL, *targetY_param = NULL, *targetWidth_param = NULL, *targetHeight_param = NULL, *marginsLeft_param = NULL, *marginsTop_param = NULL, *marginsRight_param = NULL, *marginsBottom_param = NULL, *pixmap_param = NULL, _0, _1, _2, _3, _4, _5, _6, _7, _8, _9;
	zend_long painter, targetX, targetY, targetWidth, targetHeight, marginsLeft, marginsTop, marginsRight, marginsBottom, pixmap;

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
		Z_PARAM_LONG(painter)
		Z_PARAM_LONG(targetX)
		Z_PARAM_LONG(targetY)
		Z_PARAM_LONG(targetWidth)
		Z_PARAM_LONG(targetHeight)
		Z_PARAM_LONG(marginsLeft)
		Z_PARAM_LONG(marginsTop)
		Z_PARAM_LONG(marginsRight)
		Z_PARAM_LONG(marginsBottom)
		Z_PARAM_LONG(pixmap)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(10, 0, &painter_param, &targetX_param, &targetY_param, &targetWidth_param, &targetHeight_param, &marginsLeft_param, &marginsTop_param, &marginsRight_param, &marginsBottom_param, &pixmap_param);
	ZVAL_LONG(&_0, painter);
	ZVAL_LONG(&_1, targetX);
	ZVAL_LONG(&_2, targetY);
	ZVAL_LONG(&_3, targetWidth);
	ZVAL_LONG(&_4, targetHeight);
	ZVAL_LONG(&_5, marginsLeft);
	ZVAL_LONG(&_6, marginsTop);
	ZVAL_LONG(&_7, marginsRight);
	ZVAL_LONG(&_8, marginsBottom);
	ZVAL_LONG(&_9, pixmap);
	phpqt_qdrawutilfunctions_q_draw_border_pixmap_q_painter_q_rect_q_margins_q_pixmap(&_0, &_1, &_2, &_3, &_4, &_5, &_6, &_7, &_8, &_9);
}

