
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
#include "src/gui-qpaintengine.h"
#include "kernel/memory.h"
#include "kernel/object.h"
#include "kernel/operators.h"


ZEPHIR_INIT_CLASS(Qt_Gui_QPaintEngine_QPaintEngine)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Gui\\QPaintEngine, QPaintEngine, qt, gui_qpaintengine_qpaintengine, qt_gui_qpaintengine_qpaintengine_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Gui_QPaintEngine_QPaintEngine, new_)
{
	zval *features = NULL, features_sub, __$null;

	ZVAL_UNDEF(&features_sub);
	ZVAL_NULL(&__$null);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(0, 1)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(features)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(0, 1, &features);
	if (!features) {
		features = &features_sub;
		features = &__$null;
	}
	RETURN_LONG(phpqt_qpaintengine_new(features));
}

PHP_METHOD(Qt_Gui_QPaintEngine_QPaintEngine, isActive)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qpaintengine_is_active(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Gui_QPaintEngine_QPaintEngine, setActive)
{
	zend_bool newState;
	zval *handle_param = NULL, *newState_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_BOOL(newState)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &newState_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_BOOL(&_1, (newState ? 1 : 0));
	phpqt_qpaintengine_set_active(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QPaintEngine_QPaintEngine, begin)
{
	zval *handle_param = NULL, *pdev_param = NULL, _0, _1;
	zend_long handle, pdev, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(pdev)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &pdev_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, pdev);
	r = phpqt_qpaintengine_begin(&_0, &_1);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Gui_QPaintEngine_QPaintEngine, end)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qpaintengine_end(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Gui_QPaintEngine_QPaintEngine, updateState)
{
	zval *handle_param = NULL, *state_param = NULL, _0, _1;
	zend_long handle, state;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(state)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &state_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, state);
	phpqt_qpaintengine_update_state(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QPaintEngine_QPaintEngine, drawRects)
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
	phpqt_qpaintengine_draw_rects(&_0, rects, &_1);
}

PHP_METHOD(Qt_Gui_QPaintEngine_QPaintEngine, drawRectsQRectFInt)
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
	phpqt_qpaintengine_draw_rects_q_rect_f_int(&_0, rects, &_1);
}

PHP_METHOD(Qt_Gui_QPaintEngine_QPaintEngine, drawLines)
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
	phpqt_qpaintengine_draw_lines(&_0, lines, &_1);
}

PHP_METHOD(Qt_Gui_QPaintEngine_QPaintEngine, drawLinesQLineFInt)
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
	phpqt_qpaintengine_draw_lines_q_line_f_int(&_0, lines, &_1);
}

PHP_METHOD(Qt_Gui_QPaintEngine_QPaintEngine, drawEllipse)
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
	phpqt_qpaintengine_draw_ellipse(&_0, &_1, &_2, &_3, &_4);
}

PHP_METHOD(Qt_Gui_QPaintEngine_QPaintEngine, drawEllipseQRect)
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
	phpqt_qpaintengine_draw_ellipse_q_rect(&_0, &_1, &_2, &_3, &_4);
}

PHP_METHOD(Qt_Gui_QPaintEngine_QPaintEngine, drawPath)
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
	phpqt_qpaintengine_draw_path(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QPaintEngine_QPaintEngine, drawPoints)
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
	phpqt_qpaintengine_draw_points(&_0, points, &_1);
}

PHP_METHOD(Qt_Gui_QPaintEngine_QPaintEngine, drawPointsQPointInt)
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
	phpqt_qpaintengine_draw_points_q_point_int(&_0, points, &_1);
}

PHP_METHOD(Qt_Gui_QPaintEngine_QPaintEngine, drawPolygon)
{
	zval *handle_param = NULL, *points = NULL, points_sub, *pointCount_param = NULL, *mode_param = NULL, _0, _1, _2;
	zend_long handle, pointCount, mode;

	ZVAL_UNDEF(&points_sub);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(points)
		Z_PARAM_LONG(pointCount)
		Z_PARAM_LONG(mode)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 0, &handle_param, &points, &pointCount_param, &mode_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, pointCount);
	ZVAL_LONG(&_2, mode);
	phpqt_qpaintengine_draw_polygon(&_0, points, &_1, &_2);
}

PHP_METHOD(Qt_Gui_QPaintEngine_QPaintEngine, drawPolygonQPointIntQPaintEnginePolygonDrawMode)
{
	zval *handle_param = NULL, *points = NULL, points_sub, *pointCount_param = NULL, *mode_param = NULL, _0, _1, _2;
	zend_long handle, pointCount, mode;

	ZVAL_UNDEF(&points_sub);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(points)
		Z_PARAM_LONG(pointCount)
		Z_PARAM_LONG(mode)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 0, &handle_param, &points, &pointCount_param, &mode_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, pointCount);
	ZVAL_LONG(&_2, mode);
	phpqt_qpaintengine_draw_polygon_q_point_int_q_paint_engine_polygon_draw_mode(&_0, points, &_1, &_2);
}

PHP_METHOD(Qt_Gui_QPaintEngine_QPaintEngine, drawPixmap)
{
	double rX, rY, rWidth, rHeight, srX, srY, srWidth, srHeight;
	zval *handle_param = NULL, *rX_param = NULL, *rY_param = NULL, *rWidth_param = NULL, *rHeight_param = NULL, *pm_param = NULL, *srX_param = NULL, *srY_param = NULL, *srWidth_param = NULL, *srHeight_param = NULL, _0, _1, _2, _3, _4, _5, _6, _7, _8, _9;
	zend_long handle, pm;

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
		Z_PARAM_ZVAL(rX)
		Z_PARAM_ZVAL(rY)
		Z_PARAM_ZVAL(rWidth)
		Z_PARAM_ZVAL(rHeight)
		Z_PARAM_LONG(pm)
		Z_PARAM_ZVAL(srX)
		Z_PARAM_ZVAL(srY)
		Z_PARAM_ZVAL(srWidth)
		Z_PARAM_ZVAL(srHeight)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(10, 0, &handle_param, &rX_param, &rY_param, &rWidth_param, &rHeight_param, &pm_param, &srX_param, &srY_param, &srWidth_param, &srHeight_param);
	rX = zephir_get_doubleval(rX_param);
	rY = zephir_get_doubleval(rY_param);
	rWidth = zephir_get_doubleval(rWidth_param);
	rHeight = zephir_get_doubleval(rHeight_param);
	srX = zephir_get_doubleval(srX_param);
	srY = zephir_get_doubleval(srY_param);
	srWidth = zephir_get_doubleval(srWidth_param);
	srHeight = zephir_get_doubleval(srHeight_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, rX);
	ZVAL_DOUBLE(&_2, rY);
	ZVAL_DOUBLE(&_3, rWidth);
	ZVAL_DOUBLE(&_4, rHeight);
	ZVAL_LONG(&_5, pm);
	ZVAL_DOUBLE(&_6, srX);
	ZVAL_DOUBLE(&_7, srY);
	ZVAL_DOUBLE(&_8, srWidth);
	ZVAL_DOUBLE(&_9, srHeight);
	phpqt_qpaintengine_draw_pixmap(&_0, &_1, &_2, &_3, &_4, &_5, &_6, &_7, &_8, &_9);
}

PHP_METHOD(Qt_Gui_QPaintEngine_QPaintEngine, drawTextItem)
{
	double pX, pY;
	zval *handle_param = NULL, *pX_param = NULL, *pY_param = NULL, *textItem_param = NULL, _0, _1, _2, _3;
	zend_long handle, textItem;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(pX)
		Z_PARAM_ZVAL(pY)
		Z_PARAM_LONG(textItem)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 0, &handle_param, &pX_param, &pY_param, &textItem_param);
	pX = zephir_get_doubleval(pX_param);
	pY = zephir_get_doubleval(pY_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, pX);
	ZVAL_DOUBLE(&_2, pY);
	ZVAL_LONG(&_3, textItem);
	phpqt_qpaintengine_draw_text_item(&_0, &_1, &_2, &_3);
}

PHP_METHOD(Qt_Gui_QPaintEngine_QPaintEngine, drawTiledPixmap)
{
	double rX, rY, rWidth, rHeight, sX, sY;
	zval *handle_param = NULL, *rX_param = NULL, *rY_param = NULL, *rWidth_param = NULL, *rHeight_param = NULL, *pixmap_param = NULL, *sX_param = NULL, *sY_param = NULL, _0, _1, _2, _3, _4, _5, _6, _7;
	zend_long handle, pixmap;

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
		Z_PARAM_ZVAL(rX)
		Z_PARAM_ZVAL(rY)
		Z_PARAM_ZVAL(rWidth)
		Z_PARAM_ZVAL(rHeight)
		Z_PARAM_LONG(pixmap)
		Z_PARAM_ZVAL(sX)
		Z_PARAM_ZVAL(sY)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(8, 0, &handle_param, &rX_param, &rY_param, &rWidth_param, &rHeight_param, &pixmap_param, &sX_param, &sY_param);
	rX = zephir_get_doubleval(rX_param);
	rY = zephir_get_doubleval(rY_param);
	rWidth = zephir_get_doubleval(rWidth_param);
	rHeight = zephir_get_doubleval(rHeight_param);
	sX = zephir_get_doubleval(sX_param);
	sY = zephir_get_doubleval(sY_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, rX);
	ZVAL_DOUBLE(&_2, rY);
	ZVAL_DOUBLE(&_3, rWidth);
	ZVAL_DOUBLE(&_4, rHeight);
	ZVAL_LONG(&_5, pixmap);
	ZVAL_DOUBLE(&_6, sX);
	ZVAL_DOUBLE(&_7, sY);
	phpqt_qpaintengine_draw_tiled_pixmap(&_0, &_1, &_2, &_3, &_4, &_5, &_6, &_7);
}

PHP_METHOD(Qt_Gui_QPaintEngine_QPaintEngine, drawImage)
{
	double rX, rY, rWidth, rHeight, srX, srY, srWidth, srHeight;
	zval *handle_param = NULL, *rX_param = NULL, *rY_param = NULL, *rWidth_param = NULL, *rHeight_param = NULL, *pm_param = NULL, *srX_param = NULL, *srY_param = NULL, *srWidth_param = NULL, *srHeight_param = NULL, *flags = NULL, flags_sub, __$null, _0, _1, _2, _3, _4, _5, _6, _7, _8, _9;
	zend_long handle, pm;

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
		Z_PARAM_ZVAL(rX)
		Z_PARAM_ZVAL(rY)
		Z_PARAM_ZVAL(rWidth)
		Z_PARAM_ZVAL(rHeight)
		Z_PARAM_LONG(pm)
		Z_PARAM_ZVAL(srX)
		Z_PARAM_ZVAL(srY)
		Z_PARAM_ZVAL(srWidth)
		Z_PARAM_ZVAL(srHeight)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(flags)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(10, 1, &handle_param, &rX_param, &rY_param, &rWidth_param, &rHeight_param, &pm_param, &srX_param, &srY_param, &srWidth_param, &srHeight_param, &flags);
	rX = zephir_get_doubleval(rX_param);
	rY = zephir_get_doubleval(rY_param);
	rWidth = zephir_get_doubleval(rWidth_param);
	rHeight = zephir_get_doubleval(rHeight_param);
	srX = zephir_get_doubleval(srX_param);
	srY = zephir_get_doubleval(srY_param);
	srWidth = zephir_get_doubleval(srWidth_param);
	srHeight = zephir_get_doubleval(srHeight_param);
	if (!flags) {
		flags = &flags_sub;
		flags = &__$null;
	}
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, rX);
	ZVAL_DOUBLE(&_2, rY);
	ZVAL_DOUBLE(&_3, rWidth);
	ZVAL_DOUBLE(&_4, rHeight);
	ZVAL_LONG(&_5, pm);
	ZVAL_DOUBLE(&_6, srX);
	ZVAL_DOUBLE(&_7, srY);
	ZVAL_DOUBLE(&_8, srWidth);
	ZVAL_DOUBLE(&_9, srHeight);
	phpqt_qpaintengine_draw_image(&_0, &_1, &_2, &_3, &_4, &_5, &_6, &_7, &_8, &_9, flags);
}

PHP_METHOD(Qt_Gui_QPaintEngine_QPaintEngine, setPaintDevice)
{
	zval *handle_param = NULL, *device_param = NULL, _0, _1;
	zend_long handle, device;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(device)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &device_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, device);
	phpqt_qpaintengine_set_paint_device(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QPaintEngine_QPaintEngine, paintDevice)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qpaintengine_paint_device(&_0));
}

PHP_METHOD(Qt_Gui_QPaintEngine_QPaintEngine, setSystemClip)
{
	zval *handle_param = NULL, *baseClip_param = NULL, _0, _1;
	zend_long handle, baseClip;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(baseClip)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &baseClip_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, baseClip);
	phpqt_qpaintengine_set_system_clip(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QPaintEngine_QPaintEngine, systemClip)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qpaintengine_system_clip(&_0));
}

PHP_METHOD(Qt_Gui_QPaintEngine_QPaintEngine, setSystemRect)
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
	phpqt_qpaintengine_set_system_rect(&_0, &_1, &_2, &_3, &_4);
}

PHP_METHOD(Qt_Gui_QPaintEngine_QPaintEngine, systemRect)
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
	phpqt_qpaintengine_system_rect(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QPaintEngine_QPaintEngine, coordinateOffset)
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
	phpqt_qpaintengine_coordinate_offset(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QPaintEngine_QPaintEngine, type)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qpaintengine_type(&_0));
}

PHP_METHOD(Qt_Gui_QPaintEngine_QPaintEngine, fix_neg_rect)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, *x = NULL, x_sub, *y = NULL, y_sub, *w = NULL, w_sub, *h = NULL, h_sub, result, _0;
	zend_long handle;

	ZVAL_UNDEF(&x_sub);
	ZVAL_UNDEF(&y_sub);
	ZVAL_UNDEF(&w_sub);
	ZVAL_UNDEF(&h_sub);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(5, 5)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(x)
		Z_PARAM_ZVAL(y)
		Z_PARAM_ZVAL(w)
		Z_PARAM_ZVAL(h)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 5, 0, &handle_param, &x, &y, &w, &h);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	phpqt_qpaintengine_fix_neg_rect(&result, &_0, x, y, w, h);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QPaintEngine_QPaintEngine, testDirty)
{
	zval *handle_param = NULL, *df_param = NULL, _0, _1;
	zend_long handle, df, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(df)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &df_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, df);
	r = phpqt_qpaintengine_test_dirty(&_0, &_1);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Gui_QPaintEngine_QPaintEngine, setDirty)
{
	zval *handle_param = NULL, *df_param = NULL, _0, _1;
	zend_long handle, df;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(df)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &df_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, df);
	phpqt_qpaintengine_set_dirty(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QPaintEngine_QPaintEngine, clearDirty)
{
	zval *handle_param = NULL, *df_param = NULL, _0, _1;
	zend_long handle, df;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(df)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &df_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, df);
	phpqt_qpaintengine_clear_dirty(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QPaintEngine_QPaintEngine, hasFeature)
{
	zval *handle_param = NULL, *feature_param = NULL, _0, _1;
	zend_long handle, feature, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(feature)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &feature_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, feature);
	r = phpqt_qpaintengine_has_feature(&_0, &_1);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Gui_QPaintEngine_QPaintEngine, painter)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qpaintengine_painter(&_0));
}

PHP_METHOD(Qt_Gui_QPaintEngine_QPaintEngine, syncState)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qpaintengine_sync_state(&_0);
}

PHP_METHOD(Qt_Gui_QPaintEngine_QPaintEngine, isExtended)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qpaintengine_is_extended(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Gui_QPaintEngine_QPaintEngine, createPixmap)
{
	zval *handle_param = NULL, *sizeWidth_param = NULL, *sizeHeight_param = NULL, _0, _1, _2;
	zend_long handle, sizeWidth, sizeHeight;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(sizeWidth)
		Z_PARAM_LONG(sizeHeight)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &sizeWidth_param, &sizeHeight_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, sizeWidth);
	ZVAL_LONG(&_2, sizeHeight);
	RETURN_LONG(phpqt_qpaintengine_create_pixmap(&_0, &_1, &_2));
}

PHP_METHOD(Qt_Gui_QPaintEngine_QPaintEngine, createPixmapFromImage)
{
	zval *handle_param = NULL, *image_param = NULL, *flags = NULL, flags_sub, __$null, _0, _1;
	zend_long handle, image;

	ZVAL_UNDEF(&flags_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(2, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(image)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(flags)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 1, &handle_param, &image_param, &flags);
	if (!flags) {
		flags = &flags_sub;
		flags = &__$null;
	}
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, image);
	RETURN_LONG(phpqt_qpaintengine_create_pixmap_from_image(&_0, &_1, flags));
}

PHP_METHOD(Qt_Gui_QPaintEngine_QPaintEngine, state)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qpaintengine_state(&_0));
}

PHP_METHOD(Qt_Gui_QPaintEngine_QPaintEngine, setState)
{
	zval *handle_param = NULL, *value_param = NULL, _0, _1;
	zend_long handle, value;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(value)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &value_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, value);
	phpqt_qpaintengine_set_state(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QPaintEngine_QPaintEngine, gccaps)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qpaintengine_gccaps(&_0));
}

PHP_METHOD(Qt_Gui_QPaintEngine_QPaintEngine, setGccaps)
{
	zval *handle_param = NULL, *value_param = NULL, _0, _1;
	zend_long handle, value;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(value)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &value_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, value);
	phpqt_qpaintengine_set_gccaps(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QPaintEngine_QPaintEngine, active)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qpaintengine_active(&_0));
}

PHP_METHOD(Qt_Gui_QPaintEngine_QPaintEngine, setActiveUint)
{
	zval *handle_param = NULL, *value_param = NULL, _0, _1;
	zend_long handle, value;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(value)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &value_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, value);
	phpqt_qpaintengine_set_active_uint(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QPaintEngine_QPaintEngine, selfDestruct)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qpaintengine_self_destruct(&_0));
}

PHP_METHOD(Qt_Gui_QPaintEngine_QPaintEngine, setSelfDestruct)
{
	zval *handle_param = NULL, *value_param = NULL, _0, _1;
	zend_long handle, value;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(value)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &value_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, value);
	phpqt_qpaintengine_set_self_destruct(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QPaintEngine_QPaintEngine, extended)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qpaintengine_extended(&_0));
}

PHP_METHOD(Qt_Gui_QPaintEngine_QPaintEngine, setExtended)
{
	zval *handle_param = NULL, *value_param = NULL, _0, _1;
	zend_long handle, value;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(value)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &value_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, value);
	phpqt_qpaintengine_set_extended(&_0, &_1);
}

