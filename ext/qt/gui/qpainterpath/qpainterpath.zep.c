
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
#include "src/gui-qpainterpath.h"
#include "kernel/object.h"
#include "kernel/operators.h"
#include "kernel/memory.h"


ZEPHIR_INIT_CLASS(Qt_Gui_QPainterPath_QPainterPath)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Gui\\QPainterPath, QPainterPath, qt, gui_qpainterpath_qpainterpath, qt_gui_qpainterpath_qpainterpath_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Gui_QPainterPath_QPainterPath, new_)
{

	RETURN_LONG(phpqt_qpainterpath_new());
}

PHP_METHOD(Qt_Gui_QPainterPath_QPainterPath, newQPointF)
{
	zval *startPointX_param = NULL, *startPointY_param = NULL, _0, _1;
	double startPointX, startPointY;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_ZVAL(startPointX)
		Z_PARAM_ZVAL(startPointY)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &startPointX_param, &startPointY_param);
	startPointX = zephir_get_doubleval(startPointX_param);
	startPointY = zephir_get_doubleval(startPointY_param);
	ZVAL_DOUBLE(&_0, startPointX);
	ZVAL_DOUBLE(&_1, startPointY);
	RETURN_LONG(phpqt_qpainterpath_new_q_point_f(&_0, &_1));
}

PHP_METHOD(Qt_Gui_QPainterPath_QPainterPath, newQPainterPath)
{
	zval *other_param = NULL, _0;
	zend_long other;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(other)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &other_param);
	ZVAL_LONG(&_0, other);
	RETURN_LONG(phpqt_qpainterpath_new_q_painter_path(&_0));
}

PHP_METHOD(Qt_Gui_QPainterPath_QPainterPath, swap)
{
	zval *handle_param = NULL, *other_param = NULL, _0, _1;
	zend_long handle, other;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(other)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &other_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, other);
	phpqt_qpainterpath_swap(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QPainterPath_QPainterPath, clear)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qpainterpath_clear(&_0);
}

PHP_METHOD(Qt_Gui_QPainterPath_QPainterPath, reserve)
{
	zval *handle_param = NULL, *size_param = NULL, _0, _1;
	zend_long handle, size;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(size)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &size_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, size);
	phpqt_qpainterpath_reserve(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QPainterPath_QPainterPath, capacity)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qpainterpath_capacity(&_0));
}

PHP_METHOD(Qt_Gui_QPainterPath_QPainterPath, closeSubpath)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qpainterpath_close_subpath(&_0);
}

PHP_METHOD(Qt_Gui_QPainterPath_QPainterPath, moveTo)
{
	double pX, pY;
	zval *handle_param = NULL, *pX_param = NULL, *pY_param = NULL, _0, _1, _2;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(pX)
		Z_PARAM_ZVAL(pY)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &pX_param, &pY_param);
	pX = zephir_get_doubleval(pX_param);
	pY = zephir_get_doubleval(pY_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, pX);
	ZVAL_DOUBLE(&_2, pY);
	phpqt_qpainterpath_move_to(&_0, &_1, &_2);
}

PHP_METHOD(Qt_Gui_QPainterPath_QPainterPath, moveToQrealQreal)
{
	double x, y;
	zval *handle_param = NULL, *x_param = NULL, *y_param = NULL, _0, _1, _2;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(x)
		Z_PARAM_ZVAL(y)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &x_param, &y_param);
	x = zephir_get_doubleval(x_param);
	y = zephir_get_doubleval(y_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, x);
	ZVAL_DOUBLE(&_2, y);
	phpqt_qpainterpath_move_to_qreal_qreal(&_0, &_1, &_2);
}

PHP_METHOD(Qt_Gui_QPainterPath_QPainterPath, lineTo)
{
	double pX, pY;
	zval *handle_param = NULL, *pX_param = NULL, *pY_param = NULL, _0, _1, _2;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(pX)
		Z_PARAM_ZVAL(pY)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &pX_param, &pY_param);
	pX = zephir_get_doubleval(pX_param);
	pY = zephir_get_doubleval(pY_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, pX);
	ZVAL_DOUBLE(&_2, pY);
	phpqt_qpainterpath_line_to(&_0, &_1, &_2);
}

PHP_METHOD(Qt_Gui_QPainterPath_QPainterPath, lineToQrealQreal)
{
	double x, y;
	zval *handle_param = NULL, *x_param = NULL, *y_param = NULL, _0, _1, _2;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(x)
		Z_PARAM_ZVAL(y)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &x_param, &y_param);
	x = zephir_get_doubleval(x_param);
	y = zephir_get_doubleval(y_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, x);
	ZVAL_DOUBLE(&_2, y);
	phpqt_qpainterpath_line_to_qreal_qreal(&_0, &_1, &_2);
}

PHP_METHOD(Qt_Gui_QPainterPath_QPainterPath, arcMoveTo)
{
	double rectX, rectY, rectWidth, rectHeight, angle;
	zval *handle_param = NULL, *rectX_param = NULL, *rectY_param = NULL, *rectWidth_param = NULL, *rectHeight_param = NULL, *angle_param = NULL, _0, _1, _2, _3, _4, _5;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_5);
	ZEND_PARSE_PARAMETERS_START(6, 6)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(rectX)
		Z_PARAM_ZVAL(rectY)
		Z_PARAM_ZVAL(rectWidth)
		Z_PARAM_ZVAL(rectHeight)
		Z_PARAM_ZVAL(angle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(6, 0, &handle_param, &rectX_param, &rectY_param, &rectWidth_param, &rectHeight_param, &angle_param);
	rectX = zephir_get_doubleval(rectX_param);
	rectY = zephir_get_doubleval(rectY_param);
	rectWidth = zephir_get_doubleval(rectWidth_param);
	rectHeight = zephir_get_doubleval(rectHeight_param);
	angle = zephir_get_doubleval(angle_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, rectX);
	ZVAL_DOUBLE(&_2, rectY);
	ZVAL_DOUBLE(&_3, rectWidth);
	ZVAL_DOUBLE(&_4, rectHeight);
	ZVAL_DOUBLE(&_5, angle);
	phpqt_qpainterpath_arc_move_to(&_0, &_1, &_2, &_3, &_4, &_5);
}

PHP_METHOD(Qt_Gui_QPainterPath_QPainterPath, arcMoveToQrealQrealQrealQrealQreal)
{
	double x, y, w, h, angle;
	zval *handle_param = NULL, *x_param = NULL, *y_param = NULL, *w_param = NULL, *h_param = NULL, *angle_param = NULL, _0, _1, _2, _3, _4, _5;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_5);
	ZEND_PARSE_PARAMETERS_START(6, 6)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(x)
		Z_PARAM_ZVAL(y)
		Z_PARAM_ZVAL(w)
		Z_PARAM_ZVAL(h)
		Z_PARAM_ZVAL(angle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(6, 0, &handle_param, &x_param, &y_param, &w_param, &h_param, &angle_param);
	x = zephir_get_doubleval(x_param);
	y = zephir_get_doubleval(y_param);
	w = zephir_get_doubleval(w_param);
	h = zephir_get_doubleval(h_param);
	angle = zephir_get_doubleval(angle_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, x);
	ZVAL_DOUBLE(&_2, y);
	ZVAL_DOUBLE(&_3, w);
	ZVAL_DOUBLE(&_4, h);
	ZVAL_DOUBLE(&_5, angle);
	phpqt_qpainterpath_arc_move_to_qreal_qreal_qreal_qreal_qreal(&_0, &_1, &_2, &_3, &_4, &_5);
}

PHP_METHOD(Qt_Gui_QPainterPath_QPainterPath, arcTo)
{
	double rectX, rectY, rectWidth, rectHeight, startAngle, arcLength;
	zval *handle_param = NULL, *rectX_param = NULL, *rectY_param = NULL, *rectWidth_param = NULL, *rectHeight_param = NULL, *startAngle_param = NULL, *arcLength_param = NULL, _0, _1, _2, _3, _4, _5, _6;
	zend_long handle;

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
		Z_PARAM_ZVAL(startAngle)
		Z_PARAM_ZVAL(arcLength)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(7, 0, &handle_param, &rectX_param, &rectY_param, &rectWidth_param, &rectHeight_param, &startAngle_param, &arcLength_param);
	rectX = zephir_get_doubleval(rectX_param);
	rectY = zephir_get_doubleval(rectY_param);
	rectWidth = zephir_get_doubleval(rectWidth_param);
	rectHeight = zephir_get_doubleval(rectHeight_param);
	startAngle = zephir_get_doubleval(startAngle_param);
	arcLength = zephir_get_doubleval(arcLength_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, rectX);
	ZVAL_DOUBLE(&_2, rectY);
	ZVAL_DOUBLE(&_3, rectWidth);
	ZVAL_DOUBLE(&_4, rectHeight);
	ZVAL_DOUBLE(&_5, startAngle);
	ZVAL_DOUBLE(&_6, arcLength);
	phpqt_qpainterpath_arc_to(&_0, &_1, &_2, &_3, &_4, &_5, &_6);
}

PHP_METHOD(Qt_Gui_QPainterPath_QPainterPath, arcToQrealQrealQrealQrealQrealQreal)
{
	double x, y, w, h, startAngle, arcLength;
	zval *handle_param = NULL, *x_param = NULL, *y_param = NULL, *w_param = NULL, *h_param = NULL, *startAngle_param = NULL, *arcLength_param = NULL, _0, _1, _2, _3, _4, _5, _6;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_5);
	ZVAL_UNDEF(&_6);
	ZEND_PARSE_PARAMETERS_START(7, 7)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(x)
		Z_PARAM_ZVAL(y)
		Z_PARAM_ZVAL(w)
		Z_PARAM_ZVAL(h)
		Z_PARAM_ZVAL(startAngle)
		Z_PARAM_ZVAL(arcLength)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(7, 0, &handle_param, &x_param, &y_param, &w_param, &h_param, &startAngle_param, &arcLength_param);
	x = zephir_get_doubleval(x_param);
	y = zephir_get_doubleval(y_param);
	w = zephir_get_doubleval(w_param);
	h = zephir_get_doubleval(h_param);
	startAngle = zephir_get_doubleval(startAngle_param);
	arcLength = zephir_get_doubleval(arcLength_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, x);
	ZVAL_DOUBLE(&_2, y);
	ZVAL_DOUBLE(&_3, w);
	ZVAL_DOUBLE(&_4, h);
	ZVAL_DOUBLE(&_5, startAngle);
	ZVAL_DOUBLE(&_6, arcLength);
	phpqt_qpainterpath_arc_to_qreal_qreal_qreal_qreal_qreal_qreal(&_0, &_1, &_2, &_3, &_4, &_5, &_6);
}

PHP_METHOD(Qt_Gui_QPainterPath_QPainterPath, cubicTo)
{
	double ctrlPt1X, ctrlPt1Y, ctrlPt2X, ctrlPt2Y, endPtX, endPtY;
	zval *handle_param = NULL, *ctrlPt1X_param = NULL, *ctrlPt1Y_param = NULL, *ctrlPt2X_param = NULL, *ctrlPt2Y_param = NULL, *endPtX_param = NULL, *endPtY_param = NULL, _0, _1, _2, _3, _4, _5, _6;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_5);
	ZVAL_UNDEF(&_6);
	ZEND_PARSE_PARAMETERS_START(7, 7)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(ctrlPt1X)
		Z_PARAM_ZVAL(ctrlPt1Y)
		Z_PARAM_ZVAL(ctrlPt2X)
		Z_PARAM_ZVAL(ctrlPt2Y)
		Z_PARAM_ZVAL(endPtX)
		Z_PARAM_ZVAL(endPtY)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(7, 0, &handle_param, &ctrlPt1X_param, &ctrlPt1Y_param, &ctrlPt2X_param, &ctrlPt2Y_param, &endPtX_param, &endPtY_param);
	ctrlPt1X = zephir_get_doubleval(ctrlPt1X_param);
	ctrlPt1Y = zephir_get_doubleval(ctrlPt1Y_param);
	ctrlPt2X = zephir_get_doubleval(ctrlPt2X_param);
	ctrlPt2Y = zephir_get_doubleval(ctrlPt2Y_param);
	endPtX = zephir_get_doubleval(endPtX_param);
	endPtY = zephir_get_doubleval(endPtY_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, ctrlPt1X);
	ZVAL_DOUBLE(&_2, ctrlPt1Y);
	ZVAL_DOUBLE(&_3, ctrlPt2X);
	ZVAL_DOUBLE(&_4, ctrlPt2Y);
	ZVAL_DOUBLE(&_5, endPtX);
	ZVAL_DOUBLE(&_6, endPtY);
	phpqt_qpainterpath_cubic_to(&_0, &_1, &_2, &_3, &_4, &_5, &_6);
}

PHP_METHOD(Qt_Gui_QPainterPath_QPainterPath, cubicToQrealQrealQrealQrealQrealQreal)
{
	double ctrlPt1x, ctrlPt1y, ctrlPt2x, ctrlPt2y, endPtx, endPty;
	zval *handle_param = NULL, *ctrlPt1x_param = NULL, *ctrlPt1y_param = NULL, *ctrlPt2x_param = NULL, *ctrlPt2y_param = NULL, *endPtx_param = NULL, *endPty_param = NULL, _0, _1, _2, _3, _4, _5, _6;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_5);
	ZVAL_UNDEF(&_6);
	ZEND_PARSE_PARAMETERS_START(7, 7)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(ctrlPt1x)
		Z_PARAM_ZVAL(ctrlPt1y)
		Z_PARAM_ZVAL(ctrlPt2x)
		Z_PARAM_ZVAL(ctrlPt2y)
		Z_PARAM_ZVAL(endPtx)
		Z_PARAM_ZVAL(endPty)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(7, 0, &handle_param, &ctrlPt1x_param, &ctrlPt1y_param, &ctrlPt2x_param, &ctrlPt2y_param, &endPtx_param, &endPty_param);
	ctrlPt1x = zephir_get_doubleval(ctrlPt1x_param);
	ctrlPt1y = zephir_get_doubleval(ctrlPt1y_param);
	ctrlPt2x = zephir_get_doubleval(ctrlPt2x_param);
	ctrlPt2y = zephir_get_doubleval(ctrlPt2y_param);
	endPtx = zephir_get_doubleval(endPtx_param);
	endPty = zephir_get_doubleval(endPty_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, ctrlPt1x);
	ZVAL_DOUBLE(&_2, ctrlPt1y);
	ZVAL_DOUBLE(&_3, ctrlPt2x);
	ZVAL_DOUBLE(&_4, ctrlPt2y);
	ZVAL_DOUBLE(&_5, endPtx);
	ZVAL_DOUBLE(&_6, endPty);
	phpqt_qpainterpath_cubic_to_qreal_qreal_qreal_qreal_qreal_qreal(&_0, &_1, &_2, &_3, &_4, &_5, &_6);
}

PHP_METHOD(Qt_Gui_QPainterPath_QPainterPath, quadTo)
{
	double ctrlPtX, ctrlPtY, endPtX, endPtY;
	zval *handle_param = NULL, *ctrlPtX_param = NULL, *ctrlPtY_param = NULL, *endPtX_param = NULL, *endPtY_param = NULL, _0, _1, _2, _3, _4;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZEND_PARSE_PARAMETERS_START(5, 5)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(ctrlPtX)
		Z_PARAM_ZVAL(ctrlPtY)
		Z_PARAM_ZVAL(endPtX)
		Z_PARAM_ZVAL(endPtY)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(5, 0, &handle_param, &ctrlPtX_param, &ctrlPtY_param, &endPtX_param, &endPtY_param);
	ctrlPtX = zephir_get_doubleval(ctrlPtX_param);
	ctrlPtY = zephir_get_doubleval(ctrlPtY_param);
	endPtX = zephir_get_doubleval(endPtX_param);
	endPtY = zephir_get_doubleval(endPtY_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, ctrlPtX);
	ZVAL_DOUBLE(&_2, ctrlPtY);
	ZVAL_DOUBLE(&_3, endPtX);
	ZVAL_DOUBLE(&_4, endPtY);
	phpqt_qpainterpath_quad_to(&_0, &_1, &_2, &_3, &_4);
}

PHP_METHOD(Qt_Gui_QPainterPath_QPainterPath, quadToQrealQrealQrealQreal)
{
	double ctrlPtx, ctrlPty, endPtx, endPty;
	zval *handle_param = NULL, *ctrlPtx_param = NULL, *ctrlPty_param = NULL, *endPtx_param = NULL, *endPty_param = NULL, _0, _1, _2, _3, _4;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZEND_PARSE_PARAMETERS_START(5, 5)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(ctrlPtx)
		Z_PARAM_ZVAL(ctrlPty)
		Z_PARAM_ZVAL(endPtx)
		Z_PARAM_ZVAL(endPty)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(5, 0, &handle_param, &ctrlPtx_param, &ctrlPty_param, &endPtx_param, &endPty_param);
	ctrlPtx = zephir_get_doubleval(ctrlPtx_param);
	ctrlPty = zephir_get_doubleval(ctrlPty_param);
	endPtx = zephir_get_doubleval(endPtx_param);
	endPty = zephir_get_doubleval(endPty_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, ctrlPtx);
	ZVAL_DOUBLE(&_2, ctrlPty);
	ZVAL_DOUBLE(&_3, endPtx);
	ZVAL_DOUBLE(&_4, endPty);
	phpqt_qpainterpath_quad_to_qreal_qreal_qreal_qreal(&_0, &_1, &_2, &_3, &_4);
}

PHP_METHOD(Qt_Gui_QPainterPath_QPainterPath, currentPosition)
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
	phpqt_qpainterpath_current_position(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QPainterPath_QPainterPath, addRect)
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
	phpqt_qpainterpath_add_rect(&_0, &_1, &_2, &_3, &_4);
}

PHP_METHOD(Qt_Gui_QPainterPath_QPainterPath, addRectQrealQrealQrealQreal)
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
	phpqt_qpainterpath_add_rect_qreal_qreal_qreal_qreal(&_0, &_1, &_2, &_3, &_4);
}

PHP_METHOD(Qt_Gui_QPainterPath_QPainterPath, addEllipse)
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
	phpqt_qpainterpath_add_ellipse(&_0, &_1, &_2, &_3, &_4);
}

PHP_METHOD(Qt_Gui_QPainterPath_QPainterPath, addEllipseQrealQrealQrealQreal)
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
	phpqt_qpainterpath_add_ellipse_qreal_qreal_qreal_qreal(&_0, &_1, &_2, &_3, &_4);
}

PHP_METHOD(Qt_Gui_QPainterPath_QPainterPath, addEllipseQPointFQrealQreal)
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
	phpqt_qpainterpath_add_ellipse_q_point_f_qreal_qreal(&_0, &_1, &_2, &_3, &_4);
}

PHP_METHOD(Qt_Gui_QPainterPath_QPainterPath, addPolygon)
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
	phpqt_qpainterpath_add_polygon(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QPainterPath_QPainterPath, addText)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval text;
	double pointX, pointY;
	zval *handle_param = NULL, *pointX_param = NULL, *pointY_param = NULL, *f_param = NULL, *text_param = NULL, _0, _1, _2, _3;
	zend_long handle, f;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&text);
	ZEND_PARSE_PARAMETERS_START(5, 5)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(pointX)
		Z_PARAM_ZVAL(pointY)
		Z_PARAM_LONG(f)
		Z_PARAM_STR(text)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 5, 0, &handle_param, &pointX_param, &pointY_param, &f_param, &text_param);
	pointX = zephir_get_doubleval(pointX_param);
	pointY = zephir_get_doubleval(pointY_param);
	zephir_get_strval(&text, text_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, pointX);
	ZVAL_DOUBLE(&_2, pointY);
	ZVAL_LONG(&_3, f);
	phpqt_qpainterpath_add_text(&_0, &_1, &_2, &_3, &text);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_Gui_QPainterPath_QPainterPath, addTextQrealQrealQFontQString)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval text;
	double x, y;
	zval *handle_param = NULL, *x_param = NULL, *y_param = NULL, *f_param = NULL, *text_param = NULL, _0, _1, _2, _3;
	zend_long handle, f;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&text);
	ZEND_PARSE_PARAMETERS_START(5, 5)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(x)
		Z_PARAM_ZVAL(y)
		Z_PARAM_LONG(f)
		Z_PARAM_STR(text)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 5, 0, &handle_param, &x_param, &y_param, &f_param, &text_param);
	x = zephir_get_doubleval(x_param);
	y = zephir_get_doubleval(y_param);
	zephir_get_strval(&text, text_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, x);
	ZVAL_DOUBLE(&_2, y);
	ZVAL_LONG(&_3, f);
	phpqt_qpainterpath_add_text_qreal_qreal_q_font_q_string(&_0, &_1, &_2, &_3, &text);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_Gui_QPainterPath_QPainterPath, addPath)
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
	phpqt_qpainterpath_add_path(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QPainterPath_QPainterPath, addRegion)
{
	zval *handle_param = NULL, *region_param = NULL, _0, _1;
	zend_long handle, region;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(region)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &region_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, region);
	phpqt_qpainterpath_add_region(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QPainterPath_QPainterPath, addRoundedRect)
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
	phpqt_qpainterpath_add_rounded_rect(&_0, &_1, &_2, &_3, &_4, &_5, &_6, mode);
}

PHP_METHOD(Qt_Gui_QPainterPath_QPainterPath, addRoundedRectQrealQrealQrealQrealQrealQrealQtSizeMode)
{
	double x, y, w, h, xRadius, yRadius;
	zval *handle_param = NULL, *x_param = NULL, *y_param = NULL, *w_param = NULL, *h_param = NULL, *xRadius_param = NULL, *yRadius_param = NULL, *mode = NULL, mode_sub, __$null, _0, _1, _2, _3, _4, _5, _6;
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
		Z_PARAM_ZVAL(x)
		Z_PARAM_ZVAL(y)
		Z_PARAM_ZVAL(w)
		Z_PARAM_ZVAL(h)
		Z_PARAM_ZVAL(xRadius)
		Z_PARAM_ZVAL(yRadius)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(mode)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(7, 1, &handle_param, &x_param, &y_param, &w_param, &h_param, &xRadius_param, &yRadius_param, &mode);
	x = zephir_get_doubleval(x_param);
	y = zephir_get_doubleval(y_param);
	w = zephir_get_doubleval(w_param);
	h = zephir_get_doubleval(h_param);
	xRadius = zephir_get_doubleval(xRadius_param);
	yRadius = zephir_get_doubleval(yRadius_param);
	if (!mode) {
		mode = &mode_sub;
		mode = &__$null;
	}
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, x);
	ZVAL_DOUBLE(&_2, y);
	ZVAL_DOUBLE(&_3, w);
	ZVAL_DOUBLE(&_4, h);
	ZVAL_DOUBLE(&_5, xRadius);
	ZVAL_DOUBLE(&_6, yRadius);
	phpqt_qpainterpath_add_rounded_rect_qreal_qreal_qreal_qreal_qreal_qreal_qt_size_mode(&_0, &_1, &_2, &_3, &_4, &_5, &_6, mode);
}

PHP_METHOD(Qt_Gui_QPainterPath_QPainterPath, connectPath)
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
	phpqt_qpainterpath_connect_path(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QPainterPath_QPainterPath, contains)
{
	double ptX, ptY;
	zval *handle_param = NULL, *ptX_param = NULL, *ptY_param = NULL, _0, _1, _2;
	zend_long handle, r = 0;

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
	r = phpqt_qpainterpath_contains(&_0, &_1, &_2);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Gui_QPainterPath_QPainterPath, containsQRectF)
{
	double rectX, rectY, rectWidth, rectHeight;
	zval *handle_param = NULL, *rectX_param = NULL, *rectY_param = NULL, *rectWidth_param = NULL, *rectHeight_param = NULL, _0, _1, _2, _3, _4;
	zend_long handle, r = 0;

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
	r = phpqt_qpainterpath_contains_q_rect_f(&_0, &_1, &_2, &_3, &_4);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Gui_QPainterPath_QPainterPath, intersects)
{
	double rectX, rectY, rectWidth, rectHeight;
	zval *handle_param = NULL, *rectX_param = NULL, *rectY_param = NULL, *rectWidth_param = NULL, *rectHeight_param = NULL, _0, _1, _2, _3, _4;
	zend_long handle, r = 0;

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
	r = phpqt_qpainterpath_intersects(&_0, &_1, &_2, &_3, &_4);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Gui_QPainterPath_QPainterPath, translate)
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
	phpqt_qpainterpath_translate(&_0, &_1, &_2);
}

PHP_METHOD(Qt_Gui_QPainterPath_QPainterPath, translateQPointF)
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
	phpqt_qpainterpath_translate_q_point_f(&_0, &_1, &_2);
}

PHP_METHOD(Qt_Gui_QPainterPath_QPainterPath, translated)
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
	RETURN_LONG(phpqt_qpainterpath_translated(&_0, &_1, &_2));
}

PHP_METHOD(Qt_Gui_QPainterPath_QPainterPath, translatedQPointF)
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
	RETURN_LONG(phpqt_qpainterpath_translated_q_point_f(&_0, &_1, &_2));
}

PHP_METHOD(Qt_Gui_QPainterPath_QPainterPath, boundingRect)
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
	phpqt_qpainterpath_bounding_rect(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QPainterPath_QPainterPath, controlPointRect)
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
	phpqt_qpainterpath_control_point_rect(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QPainterPath_QPainterPath, fillRule)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qpainterpath_fill_rule(&_0));
}

PHP_METHOD(Qt_Gui_QPainterPath_QPainterPath, setFillRule)
{
	zval *handle_param = NULL, *fillRule_param = NULL, _0, _1;
	zend_long handle, fillRule;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(fillRule)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &fillRule_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, fillRule);
	phpqt_qpainterpath_set_fill_rule(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QPainterPath_QPainterPath, isEmpty)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qpainterpath_is_empty(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Gui_QPainterPath_QPainterPath, toReversed)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qpainterpath_to_reversed(&_0));
}

PHP_METHOD(Qt_Gui_QPainterPath_QPainterPath, toSubpathPolygons)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, *matrix = NULL, matrix_sub, __$null, result, _0;
	zend_long handle;

	ZVAL_UNDEF(&matrix_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(matrix)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 1, &handle_param, &matrix);
	if (!matrix) {
		matrix = &matrix_sub;
		matrix = &__$null;
	}
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	phpqt_qpainterpath_to_subpath_polygons(&result, &_0, matrix);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QPainterPath_QPainterPath, toFillPolygons)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, *matrix = NULL, matrix_sub, __$null, result, _0;
	zend_long handle;

	ZVAL_UNDEF(&matrix_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(matrix)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 1, &handle_param, &matrix);
	if (!matrix) {
		matrix = &matrix_sub;
		matrix = &__$null;
	}
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	phpqt_qpainterpath_to_fill_polygons(&result, &_0, matrix);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QPainterPath_QPainterPath, toFillPolygon)
{
	zval *handle_param = NULL, *matrix = NULL, matrix_sub, __$null, _0;
	zend_long handle;

	ZVAL_UNDEF(&matrix_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(matrix)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 1, &handle_param, &matrix);
	if (!matrix) {
		matrix = &matrix_sub;
		matrix = &__$null;
	}
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qpainterpath_to_fill_polygon(&_0, matrix));
}

PHP_METHOD(Qt_Gui_QPainterPath_QPainterPath, elementCount)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qpainterpath_element_count(&_0));
}

PHP_METHOD(Qt_Gui_QPainterPath_QPainterPath, elementAt)
{
	zval *handle_param = NULL, *i_param = NULL, _0, _1;
	zend_long handle, i;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(i)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &i_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, i);
	RETURN_LONG(phpqt_qpainterpath_element_at(&_0, &_1));
}

PHP_METHOD(Qt_Gui_QPainterPath_QPainterPath, setElementPositionAt)
{
	double x, y;
	zval *handle_param = NULL, *i_param = NULL, *x_param = NULL, *y_param = NULL, _0, _1, _2, _3;
	zend_long handle, i;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(i)
		Z_PARAM_ZVAL(x)
		Z_PARAM_ZVAL(y)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 0, &handle_param, &i_param, &x_param, &y_param);
	x = zephir_get_doubleval(x_param);
	y = zephir_get_doubleval(y_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, i);
	ZVAL_DOUBLE(&_2, x);
	ZVAL_DOUBLE(&_3, y);
	phpqt_qpainterpath_set_element_position_at(&_0, &_1, &_2, &_3);
}

PHP_METHOD(Qt_Gui_QPainterPath_QPainterPath, length)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_DOUBLE(phpqt_qpainterpath_length(&_0));
}

PHP_METHOD(Qt_Gui_QPainterPath_QPainterPath, percentAtLength)
{
	double t;
	zval *handle_param = NULL, *t_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(t)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &t_param);
	t = zephir_get_doubleval(t_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, t);
	RETURN_DOUBLE(phpqt_qpainterpath_percent_at_length(&_0, &_1));
}

PHP_METHOD(Qt_Gui_QPainterPath_QPainterPath, pointAtPercent)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	double t;
	zval *handle_param = NULL, *t_param = NULL, result, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(t)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &t_param);
	t = zephir_get_doubleval(t_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, t);
	phpqt_qpainterpath_point_at_percent(&result, &_0, &_1);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QPainterPath_QPainterPath, angleAtPercent)
{
	double t;
	zval *handle_param = NULL, *t_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(t)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &t_param);
	t = zephir_get_doubleval(t_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, t);
	RETURN_DOUBLE(phpqt_qpainterpath_angle_at_percent(&_0, &_1));
}

PHP_METHOD(Qt_Gui_QPainterPath_QPainterPath, slopeAtPercent)
{
	double t;
	zval *handle_param = NULL, *t_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(t)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &t_param);
	t = zephir_get_doubleval(t_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, t);
	RETURN_DOUBLE(phpqt_qpainterpath_slope_at_percent(&_0, &_1));
}

PHP_METHOD(Qt_Gui_QPainterPath_QPainterPath, intersectsQPainterPath)
{
	zval *handle_param = NULL, *p_param = NULL, _0, _1;
	zend_long handle, p, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(p)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &p_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, p);
	r = phpqt_qpainterpath_intersects_q_painter_path(&_0, &_1);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Gui_QPainterPath_QPainterPath, containsQPainterPath)
{
	zval *handle_param = NULL, *p_param = NULL, _0, _1;
	zend_long handle, p, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(p)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &p_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, p);
	r = phpqt_qpainterpath_contains_q_painter_path(&_0, &_1);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Gui_QPainterPath_QPainterPath, united)
{
	zval *handle_param = NULL, *r_param = NULL, _0, _1;
	zend_long handle, r;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(r)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &r_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, r);
	RETURN_LONG(phpqt_qpainterpath_united(&_0, &_1));
}

PHP_METHOD(Qt_Gui_QPainterPath_QPainterPath, intersected)
{
	zval *handle_param = NULL, *r_param = NULL, _0, _1;
	zend_long handle, r;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(r)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &r_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, r);
	RETURN_LONG(phpqt_qpainterpath_intersected(&_0, &_1));
}

PHP_METHOD(Qt_Gui_QPainterPath_QPainterPath, subtracted)
{
	zval *handle_param = NULL, *r_param = NULL, _0, _1;
	zend_long handle, r;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(r)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &r_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, r);
	RETURN_LONG(phpqt_qpainterpath_subtracted(&_0, &_1));
}

PHP_METHOD(Qt_Gui_QPainterPath_QPainterPath, simplified)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qpainterpath_simplified(&_0));
}

