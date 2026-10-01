
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
#include "src/gui-qpolygon.h"
#include "kernel/object.h"
#include "kernel/operators.h"
#include "kernel/memory.h"


ZEPHIR_INIT_CLASS(Qt_Gui_QPolygon_QPolygon)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Gui\\QPolygon, QPolygon, qt, gui_qpolygon_qpolygon, qt_gui_qpolygon_qpolygon_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Gui_QPolygon_QPolygon, new_)
{

	RETURN_LONG(phpqt_qpolygon_new());
}

PHP_METHOD(Qt_Gui_QPolygon_QPolygon, newQListQPoint)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *v_param = NULL;
	zval v;

	ZVAL_UNDEF(&v);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_ARRAY(v)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &v_param);
	zephir_get_arrval(&v, v_param);
	RETURN_MM_LONG(phpqt_qpolygon_new_q_list_q_point(&v));
}

PHP_METHOD(Qt_Gui_QPolygon_QPolygon, newQRectBool)
{
	zend_bool closed;
	zval *rX_param = NULL, *rY_param = NULL, *rWidth_param = NULL, *rHeight_param = NULL, *closed_param = NULL, _0, _1, _2, _3, _4;
	zend_long rX, rY, rWidth, rHeight;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZEND_PARSE_PARAMETERS_START(4, 5)
		Z_PARAM_LONG(rX)
		Z_PARAM_LONG(rY)
		Z_PARAM_LONG(rWidth)
		Z_PARAM_LONG(rHeight)
		Z_PARAM_OPTIONAL
		Z_PARAM_BOOL(closed)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 1, &rX_param, &rY_param, &rWidth_param, &rHeight_param, &closed_param);
	if (!closed_param) {
		closed = 0;
	} else {
		}
	ZVAL_LONG(&_0, rX);
	ZVAL_LONG(&_1, rY);
	ZVAL_LONG(&_2, rWidth);
	ZVAL_LONG(&_3, rHeight);
	ZVAL_BOOL(&_4, (closed ? 1 : 0));
	RETURN_LONG(phpqt_qpolygon_new_q_rect_bool(&_0, &_1, &_2, &_3, &_4));
}

PHP_METHOD(Qt_Gui_QPolygon_QPolygon, newIntInt)
{
	zval *nPoints_param = NULL, *points = NULL, points_sub, _0;
	zend_long nPoints;

	ZVAL_UNDEF(&points_sub);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(nPoints)
		Z_PARAM_ZVAL(points)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &nPoints_param, &points);
	ZVAL_LONG(&_0, nPoints);
	RETURN_LONG(phpqt_qpolygon_new_int_int(&_0, points));
}

PHP_METHOD(Qt_Gui_QPolygon_QPolygon, swap)
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
	phpqt_qpolygon_swap(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QPolygon_QPolygon, translate)
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
	phpqt_qpolygon_translate(&_0, &_1, &_2);
}

PHP_METHOD(Qt_Gui_QPolygon_QPolygon, translateQPoint)
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
	phpqt_qpolygon_translate_q_point(&_0, &_1, &_2);
}

PHP_METHOD(Qt_Gui_QPolygon_QPolygon, translated)
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
	RETURN_LONG(phpqt_qpolygon_translated(&_0, &_1, &_2));
}

PHP_METHOD(Qt_Gui_QPolygon_QPolygon, translatedQPoint)
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
	RETURN_LONG(phpqt_qpolygon_translated_q_point(&_0, &_1, &_2));
}

PHP_METHOD(Qt_Gui_QPolygon_QPolygon, boundingRect)
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
	phpqt_qpolygon_bounding_rect(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QPolygon_QPolygon, point)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, *i_param = NULL, *x = NULL, x_sub, *y = NULL, y_sub, result, _0, _1;
	zend_long handle, i;

	ZVAL_UNDEF(&x_sub);
	ZVAL_UNDEF(&y_sub);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(i)
		Z_PARAM_ZVAL(x)
		Z_PARAM_ZVAL(y)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 4, 0, &handle_param, &i_param, &x, &y);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, i);
	phpqt_qpolygon_point(&result, &_0, &_1, x, y);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QPolygon_QPolygon, pointInt)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, *i_param = NULL, result, _0, _1;
	zend_long handle, i;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(i)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &i_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, i);
	phpqt_qpolygon_point_int(&result, &_0, &_1);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QPolygon_QPolygon, setPoint)
{
	zval *handle_param = NULL, *index_param = NULL, *x_param = NULL, *y_param = NULL, _0, _1, _2, _3;
	zend_long handle, index, x, y;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(index)
		Z_PARAM_LONG(x)
		Z_PARAM_LONG(y)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 0, &handle_param, &index_param, &x_param, &y_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, index);
	ZVAL_LONG(&_2, x);
	ZVAL_LONG(&_3, y);
	phpqt_qpolygon_set_point(&_0, &_1, &_2, &_3);
}

PHP_METHOD(Qt_Gui_QPolygon_QPolygon, setPointIntQPoint)
{
	zval *handle_param = NULL, *index_param = NULL, *pX_param = NULL, *pY_param = NULL, _0, _1, _2, _3;
	zend_long handle, index, pX, pY;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(index)
		Z_PARAM_LONG(pX)
		Z_PARAM_LONG(pY)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 0, &handle_param, &index_param, &pX_param, &pY_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, index);
	ZVAL_LONG(&_2, pX);
	ZVAL_LONG(&_3, pY);
	phpqt_qpolygon_set_point_int_q_point(&_0, &_1, &_2, &_3);
}

PHP_METHOD(Qt_Gui_QPolygon_QPolygon, setPoints)
{
	zval *handle_param = NULL, *nPoints_param = NULL, *points = NULL, points_sub, _0, _1;
	zend_long handle, nPoints;

	ZVAL_UNDEF(&points_sub);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(nPoints)
		Z_PARAM_ZVAL(points)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &nPoints_param, &points);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, nPoints);
	phpqt_qpolygon_set_points(&_0, &_1, points);
}

PHP_METHOD(Qt_Gui_QPolygon_QPolygon, setPointsIntIntInt)
{
	zval *handle_param = NULL, *nPoints_param = NULL, *firstx_param = NULL, *firsty_param = NULL, _0, _1, _2, _3;
	zend_long handle, nPoints, firstx, firsty;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(nPoints)
		Z_PARAM_LONG(firstx)
		Z_PARAM_LONG(firsty)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 0, &handle_param, &nPoints_param, &firstx_param, &firsty_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, nPoints);
	ZVAL_LONG(&_2, firstx);
	ZVAL_LONG(&_3, firsty);
	phpqt_qpolygon_set_points_int_int_int(&_0, &_1, &_2, &_3);
}

PHP_METHOD(Qt_Gui_QPolygon_QPolygon, putPoints)
{
	zval *handle_param = NULL, *index_param = NULL, *nPoints_param = NULL, *points = NULL, points_sub, _0, _1, _2;
	zend_long handle, index, nPoints;

	ZVAL_UNDEF(&points_sub);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(index)
		Z_PARAM_LONG(nPoints)
		Z_PARAM_ZVAL(points)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 0, &handle_param, &index_param, &nPoints_param, &points);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, index);
	ZVAL_LONG(&_2, nPoints);
	phpqt_qpolygon_put_points(&_0, &_1, &_2, points);
}

PHP_METHOD(Qt_Gui_QPolygon_QPolygon, putPointsIntIntIntInt)
{
	zval *handle_param = NULL, *index_param = NULL, *nPoints_param = NULL, *firstx_param = NULL, *firsty_param = NULL, _0, _1, _2, _3, _4;
	zend_long handle, index, nPoints, firstx, firsty;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZEND_PARSE_PARAMETERS_START(5, 5)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(index)
		Z_PARAM_LONG(nPoints)
		Z_PARAM_LONG(firstx)
		Z_PARAM_LONG(firsty)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(5, 0, &handle_param, &index_param, &nPoints_param, &firstx_param, &firsty_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, index);
	ZVAL_LONG(&_2, nPoints);
	ZVAL_LONG(&_3, firstx);
	ZVAL_LONG(&_4, firsty);
	phpqt_qpolygon_put_points_int_int_int_int(&_0, &_1, &_2, &_3, &_4);
}

PHP_METHOD(Qt_Gui_QPolygon_QPolygon, putPointsIntIntQPolygonInt)
{
	zval *handle_param = NULL, *index_param = NULL, *nPoints_param = NULL, *from_param = NULL, *fromIndex_param = NULL, _0, _1, _2, _3, _4;
	zend_long handle, index, nPoints, from, fromIndex;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZEND_PARSE_PARAMETERS_START(4, 5)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(index)
		Z_PARAM_LONG(nPoints)
		Z_PARAM_LONG(from)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(fromIndex)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 1, &handle_param, &index_param, &nPoints_param, &from_param, &fromIndex_param);
	if (!fromIndex_param) {
		fromIndex = 0;
	} else {
		}
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, index);
	ZVAL_LONG(&_2, nPoints);
	ZVAL_LONG(&_3, from);
	ZVAL_LONG(&_4, fromIndex);
	phpqt_qpolygon_put_points_int_int_q_polygon_int(&_0, &_1, &_2, &_3, &_4);
}

PHP_METHOD(Qt_Gui_QPolygon_QPolygon, containsPoint)
{
	zval *handle_param = NULL, *ptX_param = NULL, *ptY_param = NULL, *fillRule_param = NULL, _0, _1, _2, _3;
	zend_long handle, ptX, ptY, fillRule, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(ptX)
		Z_PARAM_LONG(ptY)
		Z_PARAM_LONG(fillRule)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 0, &handle_param, &ptX_param, &ptY_param, &fillRule_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, ptX);
	ZVAL_LONG(&_2, ptY);
	ZVAL_LONG(&_3, fillRule);
	r = phpqt_qpolygon_contains_point(&_0, &_1, &_2, &_3);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Gui_QPolygon_QPolygon, united)
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
	RETURN_LONG(phpqt_qpolygon_united(&_0, &_1));
}

PHP_METHOD(Qt_Gui_QPolygon_QPolygon, intersected)
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
	RETURN_LONG(phpqt_qpolygon_intersected(&_0, &_1));
}

PHP_METHOD(Qt_Gui_QPolygon_QPolygon, subtracted)
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
	RETURN_LONG(phpqt_qpolygon_subtracted(&_0, &_1));
}

PHP_METHOD(Qt_Gui_QPolygon_QPolygon, intersects)
{
	zval *handle_param = NULL, *r_param = NULL, _0, _1;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(r)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &r_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, r);
	r = phpqt_qpolygon_intersects(&_0, &_1);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Gui_QPolygon_QPolygon, toPolygonF)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qpolygon_to_polygon_f(&_0));
}

