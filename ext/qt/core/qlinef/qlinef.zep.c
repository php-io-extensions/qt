
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
#include "src/core-qlinef.h"
#include "kernel/memory.h"
#include "kernel/object.h"
#include "kernel/operators.h"


ZEPHIR_INIT_CLASS(Qt_Core_QLineF_QLineF)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Core\\QLineF, QLineF, qt, core_qlinef_qlinef, qt_core_qlinef_qlinef_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Core_QLineF_QLineF, new_)
{
	zval result;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;

	ZVAL_UNDEF(&result);
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);

	ZEPHIR_INIT_VAR(&result);
	phpqt_qlinef_new(&result);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QLineF_QLineF, newQPointFQPointF)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *pt1X_param = NULL, *pt1Y_param = NULL, *pt2X_param = NULL, *pt2Y_param = NULL, result, _0, _1, _2, _3;
	double pt1X, pt1Y, pt2X, pt2Y;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_ZVAL(pt1X)
		Z_PARAM_ZVAL(pt1Y)
		Z_PARAM_ZVAL(pt2X)
		Z_PARAM_ZVAL(pt2Y)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 4, 0, &pt1X_param, &pt1Y_param, &pt2X_param, &pt2Y_param);
	pt1X = zephir_get_doubleval(pt1X_param);
	pt1Y = zephir_get_doubleval(pt1Y_param);
	pt2X = zephir_get_doubleval(pt2X_param);
	pt2Y = zephir_get_doubleval(pt2Y_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_DOUBLE(&_0, pt1X);
	ZVAL_DOUBLE(&_1, pt1Y);
	ZVAL_DOUBLE(&_2, pt2X);
	ZVAL_DOUBLE(&_3, pt2Y);
	phpqt_qlinef_new_q_point_f_q_point_f(&result, &_0, &_1, &_2, &_3);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QLineF_QLineF, newQrealQrealQrealQreal)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *x1_param = NULL, *y1_param = NULL, *x2_param = NULL, *y2_param = NULL, result, _0, _1, _2, _3;
	double x1, y1, x2, y2;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_ZVAL(x1)
		Z_PARAM_ZVAL(y1)
		Z_PARAM_ZVAL(x2)
		Z_PARAM_ZVAL(y2)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 4, 0, &x1_param, &y1_param, &x2_param, &y2_param);
	x1 = zephir_get_doubleval(x1_param);
	y1 = zephir_get_doubleval(y1_param);
	x2 = zephir_get_doubleval(x2_param);
	y2 = zephir_get_doubleval(y2_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_DOUBLE(&_0, x1);
	ZVAL_DOUBLE(&_1, y1);
	ZVAL_DOUBLE(&_2, x2);
	ZVAL_DOUBLE(&_3, y2);
	phpqt_qlinef_new_qreal_qreal_qreal_qreal(&result, &_0, &_1, &_2, &_3);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QLineF_QLineF, newQLine)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *lineX1_param = NULL, *lineY1_param = NULL, *lineX2_param = NULL, *lineY2_param = NULL, result, _0, _1, _2, _3;
	zend_long lineX1, lineY1, lineX2, lineY2;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(lineX1)
		Z_PARAM_LONG(lineY1)
		Z_PARAM_LONG(lineX2)
		Z_PARAM_LONG(lineY2)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 4, 0, &lineX1_param, &lineY1_param, &lineX2_param, &lineY2_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, lineX1);
	ZVAL_LONG(&_1, lineY1);
	ZVAL_LONG(&_2, lineX2);
	ZVAL_LONG(&_3, lineY2);
	phpqt_qlinef_new_q_line(&result, &_0, &_1, &_2, &_3);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QLineF_QLineF, fromPolar)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *length_param = NULL, *angle_param = NULL, result, _0, _1;
	double length, angle;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_ZVAL(length)
		Z_PARAM_ZVAL(angle)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &length_param, &angle_param);
	length = zephir_get_doubleval(length_param);
	angle = zephir_get_doubleval(angle_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_DOUBLE(&_0, length);
	ZVAL_DOUBLE(&_1, angle);
	phpqt_qlinef_from_polar(&result, &_0, &_1);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QLineF_QLineF, isNull)
{
	zend_long r = 0;
	zval *selfX1_param = NULL, *selfY1_param = NULL, *selfX2_param = NULL, *selfY2_param = NULL, _0, _1, _2, _3;
	double selfX1, selfY1, selfX2, selfY2;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_ZVAL(selfX1)
		Z_PARAM_ZVAL(selfY1)
		Z_PARAM_ZVAL(selfX2)
		Z_PARAM_ZVAL(selfY2)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 0, &selfX1_param, &selfY1_param, &selfX2_param, &selfY2_param);
	selfX1 = zephir_get_doubleval(selfX1_param);
	selfY1 = zephir_get_doubleval(selfY1_param);
	selfX2 = zephir_get_doubleval(selfX2_param);
	selfY2 = zephir_get_doubleval(selfY2_param);
	ZVAL_DOUBLE(&_0, selfX1);
	ZVAL_DOUBLE(&_1, selfY1);
	ZVAL_DOUBLE(&_2, selfX2);
	ZVAL_DOUBLE(&_3, selfY2);
	r = phpqt_qlinef_is_null(&_0, &_1, &_2, &_3);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QLineF_QLineF, p1)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *selfX1_param = NULL, *selfY1_param = NULL, *selfX2_param = NULL, *selfY2_param = NULL, result, _0, _1, _2, _3;
	double selfX1, selfY1, selfX2, selfY2;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_ZVAL(selfX1)
		Z_PARAM_ZVAL(selfY1)
		Z_PARAM_ZVAL(selfX2)
		Z_PARAM_ZVAL(selfY2)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 4, 0, &selfX1_param, &selfY1_param, &selfX2_param, &selfY2_param);
	selfX1 = zephir_get_doubleval(selfX1_param);
	selfY1 = zephir_get_doubleval(selfY1_param);
	selfX2 = zephir_get_doubleval(selfX2_param);
	selfY2 = zephir_get_doubleval(selfY2_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_DOUBLE(&_0, selfX1);
	ZVAL_DOUBLE(&_1, selfY1);
	ZVAL_DOUBLE(&_2, selfX2);
	ZVAL_DOUBLE(&_3, selfY2);
	phpqt_qlinef_p1(&result, &_0, &_1, &_2, &_3);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QLineF_QLineF, p2)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *selfX1_param = NULL, *selfY1_param = NULL, *selfX2_param = NULL, *selfY2_param = NULL, result, _0, _1, _2, _3;
	double selfX1, selfY1, selfX2, selfY2;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_ZVAL(selfX1)
		Z_PARAM_ZVAL(selfY1)
		Z_PARAM_ZVAL(selfX2)
		Z_PARAM_ZVAL(selfY2)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 4, 0, &selfX1_param, &selfY1_param, &selfX2_param, &selfY2_param);
	selfX1 = zephir_get_doubleval(selfX1_param);
	selfY1 = zephir_get_doubleval(selfY1_param);
	selfX2 = zephir_get_doubleval(selfX2_param);
	selfY2 = zephir_get_doubleval(selfY2_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_DOUBLE(&_0, selfX1);
	ZVAL_DOUBLE(&_1, selfY1);
	ZVAL_DOUBLE(&_2, selfX2);
	ZVAL_DOUBLE(&_3, selfY2);
	phpqt_qlinef_p2(&result, &_0, &_1, &_2, &_3);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QLineF_QLineF, x1)
{
	zval *selfX1_param = NULL, *selfY1_param = NULL, *selfX2_param = NULL, *selfY2_param = NULL, _0, _1, _2, _3;
	double selfX1, selfY1, selfX2, selfY2;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_ZVAL(selfX1)
		Z_PARAM_ZVAL(selfY1)
		Z_PARAM_ZVAL(selfX2)
		Z_PARAM_ZVAL(selfY2)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 0, &selfX1_param, &selfY1_param, &selfX2_param, &selfY2_param);
	selfX1 = zephir_get_doubleval(selfX1_param);
	selfY1 = zephir_get_doubleval(selfY1_param);
	selfX2 = zephir_get_doubleval(selfX2_param);
	selfY2 = zephir_get_doubleval(selfY2_param);
	ZVAL_DOUBLE(&_0, selfX1);
	ZVAL_DOUBLE(&_1, selfY1);
	ZVAL_DOUBLE(&_2, selfX2);
	ZVAL_DOUBLE(&_3, selfY2);
	RETURN_DOUBLE(phpqt_qlinef_x1(&_0, &_1, &_2, &_3));
}

PHP_METHOD(Qt_Core_QLineF_QLineF, y1)
{
	zval *selfX1_param = NULL, *selfY1_param = NULL, *selfX2_param = NULL, *selfY2_param = NULL, _0, _1, _2, _3;
	double selfX1, selfY1, selfX2, selfY2;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_ZVAL(selfX1)
		Z_PARAM_ZVAL(selfY1)
		Z_PARAM_ZVAL(selfX2)
		Z_PARAM_ZVAL(selfY2)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 0, &selfX1_param, &selfY1_param, &selfX2_param, &selfY2_param);
	selfX1 = zephir_get_doubleval(selfX1_param);
	selfY1 = zephir_get_doubleval(selfY1_param);
	selfX2 = zephir_get_doubleval(selfX2_param);
	selfY2 = zephir_get_doubleval(selfY2_param);
	ZVAL_DOUBLE(&_0, selfX1);
	ZVAL_DOUBLE(&_1, selfY1);
	ZVAL_DOUBLE(&_2, selfX2);
	ZVAL_DOUBLE(&_3, selfY2);
	RETURN_DOUBLE(phpqt_qlinef_y1(&_0, &_1, &_2, &_3));
}

PHP_METHOD(Qt_Core_QLineF_QLineF, x2)
{
	zval *selfX1_param = NULL, *selfY1_param = NULL, *selfX2_param = NULL, *selfY2_param = NULL, _0, _1, _2, _3;
	double selfX1, selfY1, selfX2, selfY2;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_ZVAL(selfX1)
		Z_PARAM_ZVAL(selfY1)
		Z_PARAM_ZVAL(selfX2)
		Z_PARAM_ZVAL(selfY2)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 0, &selfX1_param, &selfY1_param, &selfX2_param, &selfY2_param);
	selfX1 = zephir_get_doubleval(selfX1_param);
	selfY1 = zephir_get_doubleval(selfY1_param);
	selfX2 = zephir_get_doubleval(selfX2_param);
	selfY2 = zephir_get_doubleval(selfY2_param);
	ZVAL_DOUBLE(&_0, selfX1);
	ZVAL_DOUBLE(&_1, selfY1);
	ZVAL_DOUBLE(&_2, selfX2);
	ZVAL_DOUBLE(&_3, selfY2);
	RETURN_DOUBLE(phpqt_qlinef_x2(&_0, &_1, &_2, &_3));
}

PHP_METHOD(Qt_Core_QLineF_QLineF, y2)
{
	zval *selfX1_param = NULL, *selfY1_param = NULL, *selfX2_param = NULL, *selfY2_param = NULL, _0, _1, _2, _3;
	double selfX1, selfY1, selfX2, selfY2;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_ZVAL(selfX1)
		Z_PARAM_ZVAL(selfY1)
		Z_PARAM_ZVAL(selfX2)
		Z_PARAM_ZVAL(selfY2)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 0, &selfX1_param, &selfY1_param, &selfX2_param, &selfY2_param);
	selfX1 = zephir_get_doubleval(selfX1_param);
	selfY1 = zephir_get_doubleval(selfY1_param);
	selfX2 = zephir_get_doubleval(selfX2_param);
	selfY2 = zephir_get_doubleval(selfY2_param);
	ZVAL_DOUBLE(&_0, selfX1);
	ZVAL_DOUBLE(&_1, selfY1);
	ZVAL_DOUBLE(&_2, selfX2);
	ZVAL_DOUBLE(&_3, selfY2);
	RETURN_DOUBLE(phpqt_qlinef_y2(&_0, &_1, &_2, &_3));
}

PHP_METHOD(Qt_Core_QLineF_QLineF, dx)
{
	zval *selfX1_param = NULL, *selfY1_param = NULL, *selfX2_param = NULL, *selfY2_param = NULL, _0, _1, _2, _3;
	double selfX1, selfY1, selfX2, selfY2;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_ZVAL(selfX1)
		Z_PARAM_ZVAL(selfY1)
		Z_PARAM_ZVAL(selfX2)
		Z_PARAM_ZVAL(selfY2)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 0, &selfX1_param, &selfY1_param, &selfX2_param, &selfY2_param);
	selfX1 = zephir_get_doubleval(selfX1_param);
	selfY1 = zephir_get_doubleval(selfY1_param);
	selfX2 = zephir_get_doubleval(selfX2_param);
	selfY2 = zephir_get_doubleval(selfY2_param);
	ZVAL_DOUBLE(&_0, selfX1);
	ZVAL_DOUBLE(&_1, selfY1);
	ZVAL_DOUBLE(&_2, selfX2);
	ZVAL_DOUBLE(&_3, selfY2);
	RETURN_DOUBLE(phpqt_qlinef_dx(&_0, &_1, &_2, &_3));
}

PHP_METHOD(Qt_Core_QLineF_QLineF, dy)
{
	zval *selfX1_param = NULL, *selfY1_param = NULL, *selfX2_param = NULL, *selfY2_param = NULL, _0, _1, _2, _3;
	double selfX1, selfY1, selfX2, selfY2;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_ZVAL(selfX1)
		Z_PARAM_ZVAL(selfY1)
		Z_PARAM_ZVAL(selfX2)
		Z_PARAM_ZVAL(selfY2)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 0, &selfX1_param, &selfY1_param, &selfX2_param, &selfY2_param);
	selfX1 = zephir_get_doubleval(selfX1_param);
	selfY1 = zephir_get_doubleval(selfY1_param);
	selfX2 = zephir_get_doubleval(selfX2_param);
	selfY2 = zephir_get_doubleval(selfY2_param);
	ZVAL_DOUBLE(&_0, selfX1);
	ZVAL_DOUBLE(&_1, selfY1);
	ZVAL_DOUBLE(&_2, selfX2);
	ZVAL_DOUBLE(&_3, selfY2);
	RETURN_DOUBLE(phpqt_qlinef_dy(&_0, &_1, &_2, &_3));
}

PHP_METHOD(Qt_Core_QLineF_QLineF, length)
{
	zval *selfX1_param = NULL, *selfY1_param = NULL, *selfX2_param = NULL, *selfY2_param = NULL, _0, _1, _2, _3;
	double selfX1, selfY1, selfX2, selfY2;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_ZVAL(selfX1)
		Z_PARAM_ZVAL(selfY1)
		Z_PARAM_ZVAL(selfX2)
		Z_PARAM_ZVAL(selfY2)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 0, &selfX1_param, &selfY1_param, &selfX2_param, &selfY2_param);
	selfX1 = zephir_get_doubleval(selfX1_param);
	selfY1 = zephir_get_doubleval(selfY1_param);
	selfX2 = zephir_get_doubleval(selfX2_param);
	selfY2 = zephir_get_doubleval(selfY2_param);
	ZVAL_DOUBLE(&_0, selfX1);
	ZVAL_DOUBLE(&_1, selfY1);
	ZVAL_DOUBLE(&_2, selfX2);
	ZVAL_DOUBLE(&_3, selfY2);
	RETURN_DOUBLE(phpqt_qlinef_length(&_0, &_1, &_2, &_3));
}

PHP_METHOD(Qt_Core_QLineF_QLineF, setLength)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *selfX1_param = NULL, *selfY1_param = NULL, *selfX2_param = NULL, *selfY2_param = NULL, *len_param = NULL, result, _0, _1, _2, _3, _4;
	double selfX1, selfY1, selfX2, selfY2, len;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZEND_PARSE_PARAMETERS_START(5, 5)
		Z_PARAM_ZVAL(selfX1)
		Z_PARAM_ZVAL(selfY1)
		Z_PARAM_ZVAL(selfX2)
		Z_PARAM_ZVAL(selfY2)
		Z_PARAM_ZVAL(len)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 5, 0, &selfX1_param, &selfY1_param, &selfX2_param, &selfY2_param, &len_param);
	selfX1 = zephir_get_doubleval(selfX1_param);
	selfY1 = zephir_get_doubleval(selfY1_param);
	selfX2 = zephir_get_doubleval(selfX2_param);
	selfY2 = zephir_get_doubleval(selfY2_param);
	len = zephir_get_doubleval(len_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_DOUBLE(&_0, selfX1);
	ZVAL_DOUBLE(&_1, selfY1);
	ZVAL_DOUBLE(&_2, selfX2);
	ZVAL_DOUBLE(&_3, selfY2);
	ZVAL_DOUBLE(&_4, len);
	phpqt_qlinef_set_length(&result, &_0, &_1, &_2, &_3, &_4);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QLineF_QLineF, angle)
{
	zval *selfX1_param = NULL, *selfY1_param = NULL, *selfX2_param = NULL, *selfY2_param = NULL, _0, _1, _2, _3;
	double selfX1, selfY1, selfX2, selfY2;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_ZVAL(selfX1)
		Z_PARAM_ZVAL(selfY1)
		Z_PARAM_ZVAL(selfX2)
		Z_PARAM_ZVAL(selfY2)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 0, &selfX1_param, &selfY1_param, &selfX2_param, &selfY2_param);
	selfX1 = zephir_get_doubleval(selfX1_param);
	selfY1 = zephir_get_doubleval(selfY1_param);
	selfX2 = zephir_get_doubleval(selfX2_param);
	selfY2 = zephir_get_doubleval(selfY2_param);
	ZVAL_DOUBLE(&_0, selfX1);
	ZVAL_DOUBLE(&_1, selfY1);
	ZVAL_DOUBLE(&_2, selfX2);
	ZVAL_DOUBLE(&_3, selfY2);
	RETURN_DOUBLE(phpqt_qlinef_angle(&_0, &_1, &_2, &_3));
}

PHP_METHOD(Qt_Core_QLineF_QLineF, setAngle)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *selfX1_param = NULL, *selfY1_param = NULL, *selfX2_param = NULL, *selfY2_param = NULL, *angle_param = NULL, result, _0, _1, _2, _3, _4;
	double selfX1, selfY1, selfX2, selfY2, angle;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZEND_PARSE_PARAMETERS_START(5, 5)
		Z_PARAM_ZVAL(selfX1)
		Z_PARAM_ZVAL(selfY1)
		Z_PARAM_ZVAL(selfX2)
		Z_PARAM_ZVAL(selfY2)
		Z_PARAM_ZVAL(angle)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 5, 0, &selfX1_param, &selfY1_param, &selfX2_param, &selfY2_param, &angle_param);
	selfX1 = zephir_get_doubleval(selfX1_param);
	selfY1 = zephir_get_doubleval(selfY1_param);
	selfX2 = zephir_get_doubleval(selfX2_param);
	selfY2 = zephir_get_doubleval(selfY2_param);
	angle = zephir_get_doubleval(angle_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_DOUBLE(&_0, selfX1);
	ZVAL_DOUBLE(&_1, selfY1);
	ZVAL_DOUBLE(&_2, selfX2);
	ZVAL_DOUBLE(&_3, selfY2);
	ZVAL_DOUBLE(&_4, angle);
	phpqt_qlinef_set_angle(&result, &_0, &_1, &_2, &_3, &_4);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QLineF_QLineF, angleTo)
{
	zval *selfX1_param = NULL, *selfY1_param = NULL, *selfX2_param = NULL, *selfY2_param = NULL, *lX1_param = NULL, *lY1_param = NULL, *lX2_param = NULL, *lY2_param = NULL, _0, _1, _2, _3, _4, _5, _6, _7;
	double selfX1, selfY1, selfX2, selfY2, lX1, lY1, lX2, lY2;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_5);
	ZVAL_UNDEF(&_6);
	ZVAL_UNDEF(&_7);
	ZEND_PARSE_PARAMETERS_START(8, 8)
		Z_PARAM_ZVAL(selfX1)
		Z_PARAM_ZVAL(selfY1)
		Z_PARAM_ZVAL(selfX2)
		Z_PARAM_ZVAL(selfY2)
		Z_PARAM_ZVAL(lX1)
		Z_PARAM_ZVAL(lY1)
		Z_PARAM_ZVAL(lX2)
		Z_PARAM_ZVAL(lY2)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(8, 0, &selfX1_param, &selfY1_param, &selfX2_param, &selfY2_param, &lX1_param, &lY1_param, &lX2_param, &lY2_param);
	selfX1 = zephir_get_doubleval(selfX1_param);
	selfY1 = zephir_get_doubleval(selfY1_param);
	selfX2 = zephir_get_doubleval(selfX2_param);
	selfY2 = zephir_get_doubleval(selfY2_param);
	lX1 = zephir_get_doubleval(lX1_param);
	lY1 = zephir_get_doubleval(lY1_param);
	lX2 = zephir_get_doubleval(lX2_param);
	lY2 = zephir_get_doubleval(lY2_param);
	ZVAL_DOUBLE(&_0, selfX1);
	ZVAL_DOUBLE(&_1, selfY1);
	ZVAL_DOUBLE(&_2, selfX2);
	ZVAL_DOUBLE(&_3, selfY2);
	ZVAL_DOUBLE(&_4, lX1);
	ZVAL_DOUBLE(&_5, lY1);
	ZVAL_DOUBLE(&_6, lX2);
	ZVAL_DOUBLE(&_7, lY2);
	RETURN_DOUBLE(phpqt_qlinef_angle_to(&_0, &_1, &_2, &_3, &_4, &_5, &_6, &_7));
}

PHP_METHOD(Qt_Core_QLineF_QLineF, unitVector)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *selfX1_param = NULL, *selfY1_param = NULL, *selfX2_param = NULL, *selfY2_param = NULL, result, _0, _1, _2, _3;
	double selfX1, selfY1, selfX2, selfY2;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_ZVAL(selfX1)
		Z_PARAM_ZVAL(selfY1)
		Z_PARAM_ZVAL(selfX2)
		Z_PARAM_ZVAL(selfY2)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 4, 0, &selfX1_param, &selfY1_param, &selfX2_param, &selfY2_param);
	selfX1 = zephir_get_doubleval(selfX1_param);
	selfY1 = zephir_get_doubleval(selfY1_param);
	selfX2 = zephir_get_doubleval(selfX2_param);
	selfY2 = zephir_get_doubleval(selfY2_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_DOUBLE(&_0, selfX1);
	ZVAL_DOUBLE(&_1, selfY1);
	ZVAL_DOUBLE(&_2, selfX2);
	ZVAL_DOUBLE(&_3, selfY2);
	phpqt_qlinef_unit_vector(&result, &_0, &_1, &_2, &_3);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QLineF_QLineF, normalVector)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *selfX1_param = NULL, *selfY1_param = NULL, *selfX2_param = NULL, *selfY2_param = NULL, result, _0, _1, _2, _3;
	double selfX1, selfY1, selfX2, selfY2;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_ZVAL(selfX1)
		Z_PARAM_ZVAL(selfY1)
		Z_PARAM_ZVAL(selfX2)
		Z_PARAM_ZVAL(selfY2)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 4, 0, &selfX1_param, &selfY1_param, &selfX2_param, &selfY2_param);
	selfX1 = zephir_get_doubleval(selfX1_param);
	selfY1 = zephir_get_doubleval(selfY1_param);
	selfX2 = zephir_get_doubleval(selfX2_param);
	selfY2 = zephir_get_doubleval(selfY2_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_DOUBLE(&_0, selfX1);
	ZVAL_DOUBLE(&_1, selfY1);
	ZVAL_DOUBLE(&_2, selfX2);
	ZVAL_DOUBLE(&_3, selfY2);
	phpqt_qlinef_normal_vector(&result, &_0, &_1, &_2, &_3);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QLineF_QLineF, intersects)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *selfX1_param = NULL, *selfY1_param = NULL, *selfX2_param = NULL, *selfY2_param = NULL, *lX1_param = NULL, *lY1_param = NULL, *lX2_param = NULL, *lY2_param = NULL, *intersectionPoint = NULL, intersectionPoint_sub, __$null, result, _0, _1, _2, _3, _4, _5, _6, _7;
	double selfX1, selfY1, selfX2, selfY2, lX1, lY1, lX2, lY2;

	ZVAL_UNDEF(&intersectionPoint_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&result);
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
		Z_PARAM_ZVAL(selfX1)
		Z_PARAM_ZVAL(selfY1)
		Z_PARAM_ZVAL(selfX2)
		Z_PARAM_ZVAL(selfY2)
		Z_PARAM_ZVAL(lX1)
		Z_PARAM_ZVAL(lY1)
		Z_PARAM_ZVAL(lX2)
		Z_PARAM_ZVAL(lY2)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(intersectionPoint)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 8, 1, &selfX1_param, &selfY1_param, &selfX2_param, &selfY2_param, &lX1_param, &lY1_param, &lX2_param, &lY2_param, &intersectionPoint);
	selfX1 = zephir_get_doubleval(selfX1_param);
	selfY1 = zephir_get_doubleval(selfY1_param);
	selfX2 = zephir_get_doubleval(selfX2_param);
	selfY2 = zephir_get_doubleval(selfY2_param);
	lX1 = zephir_get_doubleval(lX1_param);
	lY1 = zephir_get_doubleval(lY1_param);
	lX2 = zephir_get_doubleval(lX2_param);
	lY2 = zephir_get_doubleval(lY2_param);
	if (!intersectionPoint) {
		intersectionPoint = &intersectionPoint_sub;
		intersectionPoint = &__$null;
	}
	ZEPHIR_INIT_VAR(&result);
	ZVAL_DOUBLE(&_0, selfX1);
	ZVAL_DOUBLE(&_1, selfY1);
	ZVAL_DOUBLE(&_2, selfX2);
	ZVAL_DOUBLE(&_3, selfY2);
	ZVAL_DOUBLE(&_4, lX1);
	ZVAL_DOUBLE(&_5, lY1);
	ZVAL_DOUBLE(&_6, lX2);
	ZVAL_DOUBLE(&_7, lY2);
	phpqt_qlinef_intersects(&result, &_0, &_1, &_2, &_3, &_4, &_5, &_6, &_7, intersectionPoint);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QLineF_QLineF, pointAt)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *selfX1_param = NULL, *selfY1_param = NULL, *selfX2_param = NULL, *selfY2_param = NULL, *t_param = NULL, result, _0, _1, _2, _3, _4;
	double selfX1, selfY1, selfX2, selfY2, t;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZEND_PARSE_PARAMETERS_START(5, 5)
		Z_PARAM_ZVAL(selfX1)
		Z_PARAM_ZVAL(selfY1)
		Z_PARAM_ZVAL(selfX2)
		Z_PARAM_ZVAL(selfY2)
		Z_PARAM_ZVAL(t)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 5, 0, &selfX1_param, &selfY1_param, &selfX2_param, &selfY2_param, &t_param);
	selfX1 = zephir_get_doubleval(selfX1_param);
	selfY1 = zephir_get_doubleval(selfY1_param);
	selfX2 = zephir_get_doubleval(selfX2_param);
	selfY2 = zephir_get_doubleval(selfY2_param);
	t = zephir_get_doubleval(t_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_DOUBLE(&_0, selfX1);
	ZVAL_DOUBLE(&_1, selfY1);
	ZVAL_DOUBLE(&_2, selfX2);
	ZVAL_DOUBLE(&_3, selfY2);
	ZVAL_DOUBLE(&_4, t);
	phpqt_qlinef_point_at(&result, &_0, &_1, &_2, &_3, &_4);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QLineF_QLineF, translate)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *selfX1_param = NULL, *selfY1_param = NULL, *selfX2_param = NULL, *selfY2_param = NULL, *pX_param = NULL, *pY_param = NULL, result, _0, _1, _2, _3, _4, _5;
	double selfX1, selfY1, selfX2, selfY2, pX, pY;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_5);
	ZEND_PARSE_PARAMETERS_START(6, 6)
		Z_PARAM_ZVAL(selfX1)
		Z_PARAM_ZVAL(selfY1)
		Z_PARAM_ZVAL(selfX2)
		Z_PARAM_ZVAL(selfY2)
		Z_PARAM_ZVAL(pX)
		Z_PARAM_ZVAL(pY)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 6, 0, &selfX1_param, &selfY1_param, &selfX2_param, &selfY2_param, &pX_param, &pY_param);
	selfX1 = zephir_get_doubleval(selfX1_param);
	selfY1 = zephir_get_doubleval(selfY1_param);
	selfX2 = zephir_get_doubleval(selfX2_param);
	selfY2 = zephir_get_doubleval(selfY2_param);
	pX = zephir_get_doubleval(pX_param);
	pY = zephir_get_doubleval(pY_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_DOUBLE(&_0, selfX1);
	ZVAL_DOUBLE(&_1, selfY1);
	ZVAL_DOUBLE(&_2, selfX2);
	ZVAL_DOUBLE(&_3, selfY2);
	ZVAL_DOUBLE(&_4, pX);
	ZVAL_DOUBLE(&_5, pY);
	phpqt_qlinef_translate(&result, &_0, &_1, &_2, &_3, &_4, &_5);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QLineF_QLineF, translateQrealQreal)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *selfX1_param = NULL, *selfY1_param = NULL, *selfX2_param = NULL, *selfY2_param = NULL, *dx_param = NULL, *dy_param = NULL, result, _0, _1, _2, _3, _4, _5;
	double selfX1, selfY1, selfX2, selfY2, dx, dy;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_5);
	ZEND_PARSE_PARAMETERS_START(6, 6)
		Z_PARAM_ZVAL(selfX1)
		Z_PARAM_ZVAL(selfY1)
		Z_PARAM_ZVAL(selfX2)
		Z_PARAM_ZVAL(selfY2)
		Z_PARAM_ZVAL(dx)
		Z_PARAM_ZVAL(dy)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 6, 0, &selfX1_param, &selfY1_param, &selfX2_param, &selfY2_param, &dx_param, &dy_param);
	selfX1 = zephir_get_doubleval(selfX1_param);
	selfY1 = zephir_get_doubleval(selfY1_param);
	selfX2 = zephir_get_doubleval(selfX2_param);
	selfY2 = zephir_get_doubleval(selfY2_param);
	dx = zephir_get_doubleval(dx_param);
	dy = zephir_get_doubleval(dy_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_DOUBLE(&_0, selfX1);
	ZVAL_DOUBLE(&_1, selfY1);
	ZVAL_DOUBLE(&_2, selfX2);
	ZVAL_DOUBLE(&_3, selfY2);
	ZVAL_DOUBLE(&_4, dx);
	ZVAL_DOUBLE(&_5, dy);
	phpqt_qlinef_translate_qreal_qreal(&result, &_0, &_1, &_2, &_3, &_4, &_5);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QLineF_QLineF, translated)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *selfX1_param = NULL, *selfY1_param = NULL, *selfX2_param = NULL, *selfY2_param = NULL, *pX_param = NULL, *pY_param = NULL, result, _0, _1, _2, _3, _4, _5;
	double selfX1, selfY1, selfX2, selfY2, pX, pY;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_5);
	ZEND_PARSE_PARAMETERS_START(6, 6)
		Z_PARAM_ZVAL(selfX1)
		Z_PARAM_ZVAL(selfY1)
		Z_PARAM_ZVAL(selfX2)
		Z_PARAM_ZVAL(selfY2)
		Z_PARAM_ZVAL(pX)
		Z_PARAM_ZVAL(pY)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 6, 0, &selfX1_param, &selfY1_param, &selfX2_param, &selfY2_param, &pX_param, &pY_param);
	selfX1 = zephir_get_doubleval(selfX1_param);
	selfY1 = zephir_get_doubleval(selfY1_param);
	selfX2 = zephir_get_doubleval(selfX2_param);
	selfY2 = zephir_get_doubleval(selfY2_param);
	pX = zephir_get_doubleval(pX_param);
	pY = zephir_get_doubleval(pY_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_DOUBLE(&_0, selfX1);
	ZVAL_DOUBLE(&_1, selfY1);
	ZVAL_DOUBLE(&_2, selfX2);
	ZVAL_DOUBLE(&_3, selfY2);
	ZVAL_DOUBLE(&_4, pX);
	ZVAL_DOUBLE(&_5, pY);
	phpqt_qlinef_translated(&result, &_0, &_1, &_2, &_3, &_4, &_5);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QLineF_QLineF, translatedQrealQreal)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *selfX1_param = NULL, *selfY1_param = NULL, *selfX2_param = NULL, *selfY2_param = NULL, *dx_param = NULL, *dy_param = NULL, result, _0, _1, _2, _3, _4, _5;
	double selfX1, selfY1, selfX2, selfY2, dx, dy;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_5);
	ZEND_PARSE_PARAMETERS_START(6, 6)
		Z_PARAM_ZVAL(selfX1)
		Z_PARAM_ZVAL(selfY1)
		Z_PARAM_ZVAL(selfX2)
		Z_PARAM_ZVAL(selfY2)
		Z_PARAM_ZVAL(dx)
		Z_PARAM_ZVAL(dy)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 6, 0, &selfX1_param, &selfY1_param, &selfX2_param, &selfY2_param, &dx_param, &dy_param);
	selfX1 = zephir_get_doubleval(selfX1_param);
	selfY1 = zephir_get_doubleval(selfY1_param);
	selfX2 = zephir_get_doubleval(selfX2_param);
	selfY2 = zephir_get_doubleval(selfY2_param);
	dx = zephir_get_doubleval(dx_param);
	dy = zephir_get_doubleval(dy_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_DOUBLE(&_0, selfX1);
	ZVAL_DOUBLE(&_1, selfY1);
	ZVAL_DOUBLE(&_2, selfX2);
	ZVAL_DOUBLE(&_3, selfY2);
	ZVAL_DOUBLE(&_4, dx);
	ZVAL_DOUBLE(&_5, dy);
	phpqt_qlinef_translated_qreal_qreal(&result, &_0, &_1, &_2, &_3, &_4, &_5);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QLineF_QLineF, center)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *selfX1_param = NULL, *selfY1_param = NULL, *selfX2_param = NULL, *selfY2_param = NULL, result, _0, _1, _2, _3;
	double selfX1, selfY1, selfX2, selfY2;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_ZVAL(selfX1)
		Z_PARAM_ZVAL(selfY1)
		Z_PARAM_ZVAL(selfX2)
		Z_PARAM_ZVAL(selfY2)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 4, 0, &selfX1_param, &selfY1_param, &selfX2_param, &selfY2_param);
	selfX1 = zephir_get_doubleval(selfX1_param);
	selfY1 = zephir_get_doubleval(selfY1_param);
	selfX2 = zephir_get_doubleval(selfX2_param);
	selfY2 = zephir_get_doubleval(selfY2_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_DOUBLE(&_0, selfX1);
	ZVAL_DOUBLE(&_1, selfY1);
	ZVAL_DOUBLE(&_2, selfX2);
	ZVAL_DOUBLE(&_3, selfY2);
	phpqt_qlinef_center(&result, &_0, &_1, &_2, &_3);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QLineF_QLineF, setP1)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *selfX1_param = NULL, *selfY1_param = NULL, *selfX2_param = NULL, *selfY2_param = NULL, *p1X_param = NULL, *p1Y_param = NULL, result, _0, _1, _2, _3, _4, _5;
	double selfX1, selfY1, selfX2, selfY2, p1X, p1Y;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_5);
	ZEND_PARSE_PARAMETERS_START(6, 6)
		Z_PARAM_ZVAL(selfX1)
		Z_PARAM_ZVAL(selfY1)
		Z_PARAM_ZVAL(selfX2)
		Z_PARAM_ZVAL(selfY2)
		Z_PARAM_ZVAL(p1X)
		Z_PARAM_ZVAL(p1Y)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 6, 0, &selfX1_param, &selfY1_param, &selfX2_param, &selfY2_param, &p1X_param, &p1Y_param);
	selfX1 = zephir_get_doubleval(selfX1_param);
	selfY1 = zephir_get_doubleval(selfY1_param);
	selfX2 = zephir_get_doubleval(selfX2_param);
	selfY2 = zephir_get_doubleval(selfY2_param);
	p1X = zephir_get_doubleval(p1X_param);
	p1Y = zephir_get_doubleval(p1Y_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_DOUBLE(&_0, selfX1);
	ZVAL_DOUBLE(&_1, selfY1);
	ZVAL_DOUBLE(&_2, selfX2);
	ZVAL_DOUBLE(&_3, selfY2);
	ZVAL_DOUBLE(&_4, p1X);
	ZVAL_DOUBLE(&_5, p1Y);
	phpqt_qlinef_set_p1(&result, &_0, &_1, &_2, &_3, &_4, &_5);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QLineF_QLineF, setP2)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *selfX1_param = NULL, *selfY1_param = NULL, *selfX2_param = NULL, *selfY2_param = NULL, *p2X_param = NULL, *p2Y_param = NULL, result, _0, _1, _2, _3, _4, _5;
	double selfX1, selfY1, selfX2, selfY2, p2X, p2Y;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_5);
	ZEND_PARSE_PARAMETERS_START(6, 6)
		Z_PARAM_ZVAL(selfX1)
		Z_PARAM_ZVAL(selfY1)
		Z_PARAM_ZVAL(selfX2)
		Z_PARAM_ZVAL(selfY2)
		Z_PARAM_ZVAL(p2X)
		Z_PARAM_ZVAL(p2Y)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 6, 0, &selfX1_param, &selfY1_param, &selfX2_param, &selfY2_param, &p2X_param, &p2Y_param);
	selfX1 = zephir_get_doubleval(selfX1_param);
	selfY1 = zephir_get_doubleval(selfY1_param);
	selfX2 = zephir_get_doubleval(selfX2_param);
	selfY2 = zephir_get_doubleval(selfY2_param);
	p2X = zephir_get_doubleval(p2X_param);
	p2Y = zephir_get_doubleval(p2Y_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_DOUBLE(&_0, selfX1);
	ZVAL_DOUBLE(&_1, selfY1);
	ZVAL_DOUBLE(&_2, selfX2);
	ZVAL_DOUBLE(&_3, selfY2);
	ZVAL_DOUBLE(&_4, p2X);
	ZVAL_DOUBLE(&_5, p2Y);
	phpqt_qlinef_set_p2(&result, &_0, &_1, &_2, &_3, &_4, &_5);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QLineF_QLineF, setPoints)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *selfX1_param = NULL, *selfY1_param = NULL, *selfX2_param = NULL, *selfY2_param = NULL, *p1X_param = NULL, *p1Y_param = NULL, *p2X_param = NULL, *p2Y_param = NULL, result, _0, _1, _2, _3, _4, _5, _6, _7;
	double selfX1, selfY1, selfX2, selfY2, p1X, p1Y, p2X, p2Y;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_5);
	ZVAL_UNDEF(&_6);
	ZVAL_UNDEF(&_7);
	ZEND_PARSE_PARAMETERS_START(8, 8)
		Z_PARAM_ZVAL(selfX1)
		Z_PARAM_ZVAL(selfY1)
		Z_PARAM_ZVAL(selfX2)
		Z_PARAM_ZVAL(selfY2)
		Z_PARAM_ZVAL(p1X)
		Z_PARAM_ZVAL(p1Y)
		Z_PARAM_ZVAL(p2X)
		Z_PARAM_ZVAL(p2Y)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 8, 0, &selfX1_param, &selfY1_param, &selfX2_param, &selfY2_param, &p1X_param, &p1Y_param, &p2X_param, &p2Y_param);
	selfX1 = zephir_get_doubleval(selfX1_param);
	selfY1 = zephir_get_doubleval(selfY1_param);
	selfX2 = zephir_get_doubleval(selfX2_param);
	selfY2 = zephir_get_doubleval(selfY2_param);
	p1X = zephir_get_doubleval(p1X_param);
	p1Y = zephir_get_doubleval(p1Y_param);
	p2X = zephir_get_doubleval(p2X_param);
	p2Y = zephir_get_doubleval(p2Y_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_DOUBLE(&_0, selfX1);
	ZVAL_DOUBLE(&_1, selfY1);
	ZVAL_DOUBLE(&_2, selfX2);
	ZVAL_DOUBLE(&_3, selfY2);
	ZVAL_DOUBLE(&_4, p1X);
	ZVAL_DOUBLE(&_5, p1Y);
	ZVAL_DOUBLE(&_6, p2X);
	ZVAL_DOUBLE(&_7, p2Y);
	phpqt_qlinef_set_points(&result, &_0, &_1, &_2, &_3, &_4, &_5, &_6, &_7);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QLineF_QLineF, setLine)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *selfX1_param = NULL, *selfY1_param = NULL, *selfX2_param = NULL, *selfY2_param = NULL, *x1_param = NULL, *y1_param = NULL, *x2_param = NULL, *y2_param = NULL, result, _0, _1, _2, _3, _4, _5, _6, _7;
	double selfX1, selfY1, selfX2, selfY2, x1, y1, x2, y2;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_5);
	ZVAL_UNDEF(&_6);
	ZVAL_UNDEF(&_7);
	ZEND_PARSE_PARAMETERS_START(8, 8)
		Z_PARAM_ZVAL(selfX1)
		Z_PARAM_ZVAL(selfY1)
		Z_PARAM_ZVAL(selfX2)
		Z_PARAM_ZVAL(selfY2)
		Z_PARAM_ZVAL(x1)
		Z_PARAM_ZVAL(y1)
		Z_PARAM_ZVAL(x2)
		Z_PARAM_ZVAL(y2)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 8, 0, &selfX1_param, &selfY1_param, &selfX2_param, &selfY2_param, &x1_param, &y1_param, &x2_param, &y2_param);
	selfX1 = zephir_get_doubleval(selfX1_param);
	selfY1 = zephir_get_doubleval(selfY1_param);
	selfX2 = zephir_get_doubleval(selfX2_param);
	selfY2 = zephir_get_doubleval(selfY2_param);
	x1 = zephir_get_doubleval(x1_param);
	y1 = zephir_get_doubleval(y1_param);
	x2 = zephir_get_doubleval(x2_param);
	y2 = zephir_get_doubleval(y2_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_DOUBLE(&_0, selfX1);
	ZVAL_DOUBLE(&_1, selfY1);
	ZVAL_DOUBLE(&_2, selfX2);
	ZVAL_DOUBLE(&_3, selfY2);
	ZVAL_DOUBLE(&_4, x1);
	ZVAL_DOUBLE(&_5, y1);
	ZVAL_DOUBLE(&_6, x2);
	ZVAL_DOUBLE(&_7, y2);
	phpqt_qlinef_set_line(&result, &_0, &_1, &_2, &_3, &_4, &_5, &_6, &_7);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QLineF_QLineF, toLine)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *selfX1_param = NULL, *selfY1_param = NULL, *selfX2_param = NULL, *selfY2_param = NULL, result, _0, _1, _2, _3;
	double selfX1, selfY1, selfX2, selfY2;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_ZVAL(selfX1)
		Z_PARAM_ZVAL(selfY1)
		Z_PARAM_ZVAL(selfX2)
		Z_PARAM_ZVAL(selfY2)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 4, 0, &selfX1_param, &selfY1_param, &selfX2_param, &selfY2_param);
	selfX1 = zephir_get_doubleval(selfX1_param);
	selfY1 = zephir_get_doubleval(selfY1_param);
	selfX2 = zephir_get_doubleval(selfX2_param);
	selfY2 = zephir_get_doubleval(selfY2_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_DOUBLE(&_0, selfX1);
	ZVAL_DOUBLE(&_1, selfY1);
	ZVAL_DOUBLE(&_2, selfX2);
	ZVAL_DOUBLE(&_3, selfY2);
	phpqt_qlinef_to_line(&result, &_0, &_1, &_2, &_3);
	RETURN_CCTOR(&result);
}

