
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
#include "src/gui-qpolygonf.h"
#include "kernel/object.h"
#include "kernel/operators.h"
#include "kernel/memory.h"


ZEPHIR_INIT_CLASS(Qt_Gui_QPolygonF_QPolygonF)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Gui\\QPolygonF, QPolygonF, qt, gui_qpolygonf_qpolygonf, qt_gui_qpolygonf_qpolygonf_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Gui_QPolygonF_QPolygonF, new_)
{

	RETURN_LONG(phpqt_qpolygonf_new());
}

PHP_METHOD(Qt_Gui_QPolygonF_QPolygonF, newQListQPointF)
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
	RETURN_MM_LONG(phpqt_qpolygonf_new_q_list_q_point_f(&v));
}

PHP_METHOD(Qt_Gui_QPolygonF_QPolygonF, newQRectF)
{
	zval *rX_param = NULL, *rY_param = NULL, *rWidth_param = NULL, *rHeight_param = NULL, _0, _1, _2, _3;
	double rX, rY, rWidth, rHeight;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_ZVAL(rX)
		Z_PARAM_ZVAL(rY)
		Z_PARAM_ZVAL(rWidth)
		Z_PARAM_ZVAL(rHeight)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 0, &rX_param, &rY_param, &rWidth_param, &rHeight_param);
	rX = zephir_get_doubleval(rX_param);
	rY = zephir_get_doubleval(rY_param);
	rWidth = zephir_get_doubleval(rWidth_param);
	rHeight = zephir_get_doubleval(rHeight_param);
	ZVAL_DOUBLE(&_0, rX);
	ZVAL_DOUBLE(&_1, rY);
	ZVAL_DOUBLE(&_2, rWidth);
	ZVAL_DOUBLE(&_3, rHeight);
	RETURN_LONG(phpqt_qpolygonf_new_q_rect_f(&_0, &_1, &_2, &_3));
}

PHP_METHOD(Qt_Gui_QPolygonF_QPolygonF, newQPolygon)
{
	zval *a_param = NULL, _0;
	zend_long a;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(a)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &a_param);
	ZVAL_LONG(&_0, a);
	RETURN_LONG(phpqt_qpolygonf_new_q_polygon(&_0));
}

PHP_METHOD(Qt_Gui_QPolygonF_QPolygonF, swap)
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
	phpqt_qpolygonf_swap(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QPolygonF_QPolygonF, translate)
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
	phpqt_qpolygonf_translate(&_0, &_1, &_2);
}

PHP_METHOD(Qt_Gui_QPolygonF_QPolygonF, translateQPointF)
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
	phpqt_qpolygonf_translate_q_point_f(&_0, &_1, &_2);
}

PHP_METHOD(Qt_Gui_QPolygonF_QPolygonF, translated)
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
	RETURN_LONG(phpqt_qpolygonf_translated(&_0, &_1, &_2));
}

PHP_METHOD(Qt_Gui_QPolygonF_QPolygonF, translatedQPointF)
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
	RETURN_LONG(phpqt_qpolygonf_translated_q_point_f(&_0, &_1, &_2));
}

PHP_METHOD(Qt_Gui_QPolygonF_QPolygonF, toPolygon)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qpolygonf_to_polygon(&_0));
}

PHP_METHOD(Qt_Gui_QPolygonF_QPolygonF, isClosed)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qpolygonf_is_closed(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Gui_QPolygonF_QPolygonF, boundingRect)
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
	phpqt_qpolygonf_bounding_rect(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QPolygonF_QPolygonF, containsPoint)
{
	double ptX, ptY;
	zval *handle_param = NULL, *ptX_param = NULL, *ptY_param = NULL, *fillRule_param = NULL, _0, _1, _2, _3;
	zend_long handle, fillRule, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(ptX)
		Z_PARAM_ZVAL(ptY)
		Z_PARAM_LONG(fillRule)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 0, &handle_param, &ptX_param, &ptY_param, &fillRule_param);
	ptX = zephir_get_doubleval(ptX_param);
	ptY = zephir_get_doubleval(ptY_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, ptX);
	ZVAL_DOUBLE(&_2, ptY);
	ZVAL_LONG(&_3, fillRule);
	r = phpqt_qpolygonf_contains_point(&_0, &_1, &_2, &_3);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Gui_QPolygonF_QPolygonF, united)
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
	RETURN_LONG(phpqt_qpolygonf_united(&_0, &_1));
}

PHP_METHOD(Qt_Gui_QPolygonF_QPolygonF, intersected)
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
	RETURN_LONG(phpqt_qpolygonf_intersected(&_0, &_1));
}

PHP_METHOD(Qt_Gui_QPolygonF_QPolygonF, subtracted)
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
	RETURN_LONG(phpqt_qpolygonf_subtracted(&_0, &_1));
}

PHP_METHOD(Qt_Gui_QPolygonF_QPolygonF, intersects)
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
	r = phpqt_qpolygonf_intersects(&_0, &_1);
	RETURN_BOOL(r == 1);
}

