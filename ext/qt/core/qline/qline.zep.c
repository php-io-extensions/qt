
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
#include "src/core-qline.h"
#include "kernel/memory.h"
#include "kernel/object.h"
#include "kernel/operators.h"


ZEPHIR_INIT_CLASS(Qt_Core_QLine_QLine)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Core\\QLine, QLine, qt, core_qline_qline, qt_core_qline_qline_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Core_QLine_QLine, new_)
{
	zval result;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;

	ZVAL_UNDEF(&result);
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);

	ZEPHIR_INIT_VAR(&result);
	phpqt_qline_new(&result);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QLine_QLine, newQPointQPoint)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *pt1X_param = NULL, *pt1Y_param = NULL, *pt2X_param = NULL, *pt2Y_param = NULL, result, _0, _1, _2, _3;
	zend_long pt1X, pt1Y, pt2X, pt2Y;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(pt1X)
		Z_PARAM_LONG(pt1Y)
		Z_PARAM_LONG(pt2X)
		Z_PARAM_LONG(pt2Y)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 4, 0, &pt1X_param, &pt1Y_param, &pt2X_param, &pt2Y_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, pt1X);
	ZVAL_LONG(&_1, pt1Y);
	ZVAL_LONG(&_2, pt2X);
	ZVAL_LONG(&_3, pt2Y);
	phpqt_qline_new_q_point_q_point(&result, &_0, &_1, &_2, &_3);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QLine_QLine, newIntIntIntInt)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *x1_param = NULL, *y1_param = NULL, *x2_param = NULL, *y2_param = NULL, result, _0, _1, _2, _3;
	zend_long x1, y1, x2, y2;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(x1)
		Z_PARAM_LONG(y1)
		Z_PARAM_LONG(x2)
		Z_PARAM_LONG(y2)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 4, 0, &x1_param, &y1_param, &x2_param, &y2_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, x1);
	ZVAL_LONG(&_1, y1);
	ZVAL_LONG(&_2, x2);
	ZVAL_LONG(&_3, y2);
	phpqt_qline_new_int_int_int_int(&result, &_0, &_1, &_2, &_3);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QLine_QLine, isNull)
{
	zval *selfX1_param = NULL, *selfY1_param = NULL, *selfX2_param = NULL, *selfY2_param = NULL, _0, _1, _2, _3;
	zend_long selfX1, selfY1, selfX2, selfY2, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(selfX1)
		Z_PARAM_LONG(selfY1)
		Z_PARAM_LONG(selfX2)
		Z_PARAM_LONG(selfY2)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 0, &selfX1_param, &selfY1_param, &selfX2_param, &selfY2_param);
	ZVAL_LONG(&_0, selfX1);
	ZVAL_LONG(&_1, selfY1);
	ZVAL_LONG(&_2, selfX2);
	ZVAL_LONG(&_3, selfY2);
	r = phpqt_qline_is_null(&_0, &_1, &_2, &_3);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QLine_QLine, p1)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *selfX1_param = NULL, *selfY1_param = NULL, *selfX2_param = NULL, *selfY2_param = NULL, result, _0, _1, _2, _3;
	zend_long selfX1, selfY1, selfX2, selfY2;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(selfX1)
		Z_PARAM_LONG(selfY1)
		Z_PARAM_LONG(selfX2)
		Z_PARAM_LONG(selfY2)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 4, 0, &selfX1_param, &selfY1_param, &selfX2_param, &selfY2_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, selfX1);
	ZVAL_LONG(&_1, selfY1);
	ZVAL_LONG(&_2, selfX2);
	ZVAL_LONG(&_3, selfY2);
	phpqt_qline_p1(&result, &_0, &_1, &_2, &_3);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QLine_QLine, p2)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *selfX1_param = NULL, *selfY1_param = NULL, *selfX2_param = NULL, *selfY2_param = NULL, result, _0, _1, _2, _3;
	zend_long selfX1, selfY1, selfX2, selfY2;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(selfX1)
		Z_PARAM_LONG(selfY1)
		Z_PARAM_LONG(selfX2)
		Z_PARAM_LONG(selfY2)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 4, 0, &selfX1_param, &selfY1_param, &selfX2_param, &selfY2_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, selfX1);
	ZVAL_LONG(&_1, selfY1);
	ZVAL_LONG(&_2, selfX2);
	ZVAL_LONG(&_3, selfY2);
	phpqt_qline_p2(&result, &_0, &_1, &_2, &_3);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QLine_QLine, x1)
{
	zval *selfX1_param = NULL, *selfY1_param = NULL, *selfX2_param = NULL, *selfY2_param = NULL, _0, _1, _2, _3;
	zend_long selfX1, selfY1, selfX2, selfY2;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(selfX1)
		Z_PARAM_LONG(selfY1)
		Z_PARAM_LONG(selfX2)
		Z_PARAM_LONG(selfY2)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 0, &selfX1_param, &selfY1_param, &selfX2_param, &selfY2_param);
	ZVAL_LONG(&_0, selfX1);
	ZVAL_LONG(&_1, selfY1);
	ZVAL_LONG(&_2, selfX2);
	ZVAL_LONG(&_3, selfY2);
	RETURN_LONG(phpqt_qline_x1(&_0, &_1, &_2, &_3));
}

PHP_METHOD(Qt_Core_QLine_QLine, y1)
{
	zval *selfX1_param = NULL, *selfY1_param = NULL, *selfX2_param = NULL, *selfY2_param = NULL, _0, _1, _2, _3;
	zend_long selfX1, selfY1, selfX2, selfY2;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(selfX1)
		Z_PARAM_LONG(selfY1)
		Z_PARAM_LONG(selfX2)
		Z_PARAM_LONG(selfY2)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 0, &selfX1_param, &selfY1_param, &selfX2_param, &selfY2_param);
	ZVAL_LONG(&_0, selfX1);
	ZVAL_LONG(&_1, selfY1);
	ZVAL_LONG(&_2, selfX2);
	ZVAL_LONG(&_3, selfY2);
	RETURN_LONG(phpqt_qline_y1(&_0, &_1, &_2, &_3));
}

PHP_METHOD(Qt_Core_QLine_QLine, x2)
{
	zval *selfX1_param = NULL, *selfY1_param = NULL, *selfX2_param = NULL, *selfY2_param = NULL, _0, _1, _2, _3;
	zend_long selfX1, selfY1, selfX2, selfY2;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(selfX1)
		Z_PARAM_LONG(selfY1)
		Z_PARAM_LONG(selfX2)
		Z_PARAM_LONG(selfY2)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 0, &selfX1_param, &selfY1_param, &selfX2_param, &selfY2_param);
	ZVAL_LONG(&_0, selfX1);
	ZVAL_LONG(&_1, selfY1);
	ZVAL_LONG(&_2, selfX2);
	ZVAL_LONG(&_3, selfY2);
	RETURN_LONG(phpqt_qline_x2(&_0, &_1, &_2, &_3));
}

PHP_METHOD(Qt_Core_QLine_QLine, y2)
{
	zval *selfX1_param = NULL, *selfY1_param = NULL, *selfX2_param = NULL, *selfY2_param = NULL, _0, _1, _2, _3;
	zend_long selfX1, selfY1, selfX2, selfY2;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(selfX1)
		Z_PARAM_LONG(selfY1)
		Z_PARAM_LONG(selfX2)
		Z_PARAM_LONG(selfY2)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 0, &selfX1_param, &selfY1_param, &selfX2_param, &selfY2_param);
	ZVAL_LONG(&_0, selfX1);
	ZVAL_LONG(&_1, selfY1);
	ZVAL_LONG(&_2, selfX2);
	ZVAL_LONG(&_3, selfY2);
	RETURN_LONG(phpqt_qline_y2(&_0, &_1, &_2, &_3));
}

PHP_METHOD(Qt_Core_QLine_QLine, dx)
{
	zval *selfX1_param = NULL, *selfY1_param = NULL, *selfX2_param = NULL, *selfY2_param = NULL, _0, _1, _2, _3;
	zend_long selfX1, selfY1, selfX2, selfY2;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(selfX1)
		Z_PARAM_LONG(selfY1)
		Z_PARAM_LONG(selfX2)
		Z_PARAM_LONG(selfY2)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 0, &selfX1_param, &selfY1_param, &selfX2_param, &selfY2_param);
	ZVAL_LONG(&_0, selfX1);
	ZVAL_LONG(&_1, selfY1);
	ZVAL_LONG(&_2, selfX2);
	ZVAL_LONG(&_3, selfY2);
	RETURN_LONG(phpqt_qline_dx(&_0, &_1, &_2, &_3));
}

PHP_METHOD(Qt_Core_QLine_QLine, dy)
{
	zval *selfX1_param = NULL, *selfY1_param = NULL, *selfX2_param = NULL, *selfY2_param = NULL, _0, _1, _2, _3;
	zend_long selfX1, selfY1, selfX2, selfY2;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(selfX1)
		Z_PARAM_LONG(selfY1)
		Z_PARAM_LONG(selfX2)
		Z_PARAM_LONG(selfY2)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 0, &selfX1_param, &selfY1_param, &selfX2_param, &selfY2_param);
	ZVAL_LONG(&_0, selfX1);
	ZVAL_LONG(&_1, selfY1);
	ZVAL_LONG(&_2, selfX2);
	ZVAL_LONG(&_3, selfY2);
	RETURN_LONG(phpqt_qline_dy(&_0, &_1, &_2, &_3));
}

PHP_METHOD(Qt_Core_QLine_QLine, translate)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *selfX1_param = NULL, *selfY1_param = NULL, *selfX2_param = NULL, *selfY2_param = NULL, *pX_param = NULL, *pY_param = NULL, result, _0, _1, _2, _3, _4, _5;
	zend_long selfX1, selfY1, selfX2, selfY2, pX, pY;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_5);
	ZEND_PARSE_PARAMETERS_START(6, 6)
		Z_PARAM_LONG(selfX1)
		Z_PARAM_LONG(selfY1)
		Z_PARAM_LONG(selfX2)
		Z_PARAM_LONG(selfY2)
		Z_PARAM_LONG(pX)
		Z_PARAM_LONG(pY)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 6, 0, &selfX1_param, &selfY1_param, &selfX2_param, &selfY2_param, &pX_param, &pY_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, selfX1);
	ZVAL_LONG(&_1, selfY1);
	ZVAL_LONG(&_2, selfX2);
	ZVAL_LONG(&_3, selfY2);
	ZVAL_LONG(&_4, pX);
	ZVAL_LONG(&_5, pY);
	phpqt_qline_translate(&result, &_0, &_1, &_2, &_3, &_4, &_5);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QLine_QLine, translateIntInt)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *selfX1_param = NULL, *selfY1_param = NULL, *selfX2_param = NULL, *selfY2_param = NULL, *dx_param = NULL, *dy_param = NULL, result, _0, _1, _2, _3, _4, _5;
	zend_long selfX1, selfY1, selfX2, selfY2, dx, dy;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_5);
	ZEND_PARSE_PARAMETERS_START(6, 6)
		Z_PARAM_LONG(selfX1)
		Z_PARAM_LONG(selfY1)
		Z_PARAM_LONG(selfX2)
		Z_PARAM_LONG(selfY2)
		Z_PARAM_LONG(dx)
		Z_PARAM_LONG(dy)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 6, 0, &selfX1_param, &selfY1_param, &selfX2_param, &selfY2_param, &dx_param, &dy_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, selfX1);
	ZVAL_LONG(&_1, selfY1);
	ZVAL_LONG(&_2, selfX2);
	ZVAL_LONG(&_3, selfY2);
	ZVAL_LONG(&_4, dx);
	ZVAL_LONG(&_5, dy);
	phpqt_qline_translate_int_int(&result, &_0, &_1, &_2, &_3, &_4, &_5);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QLine_QLine, translated)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *selfX1_param = NULL, *selfY1_param = NULL, *selfX2_param = NULL, *selfY2_param = NULL, *pX_param = NULL, *pY_param = NULL, result, _0, _1, _2, _3, _4, _5;
	zend_long selfX1, selfY1, selfX2, selfY2, pX, pY;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_5);
	ZEND_PARSE_PARAMETERS_START(6, 6)
		Z_PARAM_LONG(selfX1)
		Z_PARAM_LONG(selfY1)
		Z_PARAM_LONG(selfX2)
		Z_PARAM_LONG(selfY2)
		Z_PARAM_LONG(pX)
		Z_PARAM_LONG(pY)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 6, 0, &selfX1_param, &selfY1_param, &selfX2_param, &selfY2_param, &pX_param, &pY_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, selfX1);
	ZVAL_LONG(&_1, selfY1);
	ZVAL_LONG(&_2, selfX2);
	ZVAL_LONG(&_3, selfY2);
	ZVAL_LONG(&_4, pX);
	ZVAL_LONG(&_5, pY);
	phpqt_qline_translated(&result, &_0, &_1, &_2, &_3, &_4, &_5);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QLine_QLine, translatedIntInt)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *selfX1_param = NULL, *selfY1_param = NULL, *selfX2_param = NULL, *selfY2_param = NULL, *dx_param = NULL, *dy_param = NULL, result, _0, _1, _2, _3, _4, _5;
	zend_long selfX1, selfY1, selfX2, selfY2, dx, dy;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_5);
	ZEND_PARSE_PARAMETERS_START(6, 6)
		Z_PARAM_LONG(selfX1)
		Z_PARAM_LONG(selfY1)
		Z_PARAM_LONG(selfX2)
		Z_PARAM_LONG(selfY2)
		Z_PARAM_LONG(dx)
		Z_PARAM_LONG(dy)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 6, 0, &selfX1_param, &selfY1_param, &selfX2_param, &selfY2_param, &dx_param, &dy_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, selfX1);
	ZVAL_LONG(&_1, selfY1);
	ZVAL_LONG(&_2, selfX2);
	ZVAL_LONG(&_3, selfY2);
	ZVAL_LONG(&_4, dx);
	ZVAL_LONG(&_5, dy);
	phpqt_qline_translated_int_int(&result, &_0, &_1, &_2, &_3, &_4, &_5);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QLine_QLine, center)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *selfX1_param = NULL, *selfY1_param = NULL, *selfX2_param = NULL, *selfY2_param = NULL, result, _0, _1, _2, _3;
	zend_long selfX1, selfY1, selfX2, selfY2;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(selfX1)
		Z_PARAM_LONG(selfY1)
		Z_PARAM_LONG(selfX2)
		Z_PARAM_LONG(selfY2)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 4, 0, &selfX1_param, &selfY1_param, &selfX2_param, &selfY2_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, selfX1);
	ZVAL_LONG(&_1, selfY1);
	ZVAL_LONG(&_2, selfX2);
	ZVAL_LONG(&_3, selfY2);
	phpqt_qline_center(&result, &_0, &_1, &_2, &_3);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QLine_QLine, setP1)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *selfX1_param = NULL, *selfY1_param = NULL, *selfX2_param = NULL, *selfY2_param = NULL, *p1X_param = NULL, *p1Y_param = NULL, result, _0, _1, _2, _3, _4, _5;
	zend_long selfX1, selfY1, selfX2, selfY2, p1X, p1Y;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_5);
	ZEND_PARSE_PARAMETERS_START(6, 6)
		Z_PARAM_LONG(selfX1)
		Z_PARAM_LONG(selfY1)
		Z_PARAM_LONG(selfX2)
		Z_PARAM_LONG(selfY2)
		Z_PARAM_LONG(p1X)
		Z_PARAM_LONG(p1Y)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 6, 0, &selfX1_param, &selfY1_param, &selfX2_param, &selfY2_param, &p1X_param, &p1Y_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, selfX1);
	ZVAL_LONG(&_1, selfY1);
	ZVAL_LONG(&_2, selfX2);
	ZVAL_LONG(&_3, selfY2);
	ZVAL_LONG(&_4, p1X);
	ZVAL_LONG(&_5, p1Y);
	phpqt_qline_set_p1(&result, &_0, &_1, &_2, &_3, &_4, &_5);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QLine_QLine, setP2)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *selfX1_param = NULL, *selfY1_param = NULL, *selfX2_param = NULL, *selfY2_param = NULL, *p2X_param = NULL, *p2Y_param = NULL, result, _0, _1, _2, _3, _4, _5;
	zend_long selfX1, selfY1, selfX2, selfY2, p2X, p2Y;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_5);
	ZEND_PARSE_PARAMETERS_START(6, 6)
		Z_PARAM_LONG(selfX1)
		Z_PARAM_LONG(selfY1)
		Z_PARAM_LONG(selfX2)
		Z_PARAM_LONG(selfY2)
		Z_PARAM_LONG(p2X)
		Z_PARAM_LONG(p2Y)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 6, 0, &selfX1_param, &selfY1_param, &selfX2_param, &selfY2_param, &p2X_param, &p2Y_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, selfX1);
	ZVAL_LONG(&_1, selfY1);
	ZVAL_LONG(&_2, selfX2);
	ZVAL_LONG(&_3, selfY2);
	ZVAL_LONG(&_4, p2X);
	ZVAL_LONG(&_5, p2Y);
	phpqt_qline_set_p2(&result, &_0, &_1, &_2, &_3, &_4, &_5);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QLine_QLine, setPoints)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *selfX1_param = NULL, *selfY1_param = NULL, *selfX2_param = NULL, *selfY2_param = NULL, *p1X_param = NULL, *p1Y_param = NULL, *p2X_param = NULL, *p2Y_param = NULL, result, _0, _1, _2, _3, _4, _5, _6, _7;
	zend_long selfX1, selfY1, selfX2, selfY2, p1X, p1Y, p2X, p2Y;

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
		Z_PARAM_LONG(selfX1)
		Z_PARAM_LONG(selfY1)
		Z_PARAM_LONG(selfX2)
		Z_PARAM_LONG(selfY2)
		Z_PARAM_LONG(p1X)
		Z_PARAM_LONG(p1Y)
		Z_PARAM_LONG(p2X)
		Z_PARAM_LONG(p2Y)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 8, 0, &selfX1_param, &selfY1_param, &selfX2_param, &selfY2_param, &p1X_param, &p1Y_param, &p2X_param, &p2Y_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, selfX1);
	ZVAL_LONG(&_1, selfY1);
	ZVAL_LONG(&_2, selfX2);
	ZVAL_LONG(&_3, selfY2);
	ZVAL_LONG(&_4, p1X);
	ZVAL_LONG(&_5, p1Y);
	ZVAL_LONG(&_6, p2X);
	ZVAL_LONG(&_7, p2Y);
	phpqt_qline_set_points(&result, &_0, &_1, &_2, &_3, &_4, &_5, &_6, &_7);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QLine_QLine, setLine)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *selfX1_param = NULL, *selfY1_param = NULL, *selfX2_param = NULL, *selfY2_param = NULL, *x1_param = NULL, *y1_param = NULL, *x2_param = NULL, *y2_param = NULL, result, _0, _1, _2, _3, _4, _5, _6, _7;
	zend_long selfX1, selfY1, selfX2, selfY2, x1, y1, x2, y2;

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
		Z_PARAM_LONG(selfX1)
		Z_PARAM_LONG(selfY1)
		Z_PARAM_LONG(selfX2)
		Z_PARAM_LONG(selfY2)
		Z_PARAM_LONG(x1)
		Z_PARAM_LONG(y1)
		Z_PARAM_LONG(x2)
		Z_PARAM_LONG(y2)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 8, 0, &selfX1_param, &selfY1_param, &selfX2_param, &selfY2_param, &x1_param, &y1_param, &x2_param, &y2_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, selfX1);
	ZVAL_LONG(&_1, selfY1);
	ZVAL_LONG(&_2, selfX2);
	ZVAL_LONG(&_3, selfY2);
	ZVAL_LONG(&_4, x1);
	ZVAL_LONG(&_5, y1);
	ZVAL_LONG(&_6, x2);
	ZVAL_LONG(&_7, y2);
	phpqt_qline_set_line(&result, &_0, &_1, &_2, &_3, &_4, &_5, &_6, &_7);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QLine_QLine, toLineF)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *selfX1_param = NULL, *selfY1_param = NULL, *selfX2_param = NULL, *selfY2_param = NULL, result, _0, _1, _2, _3;
	zend_long selfX1, selfY1, selfX2, selfY2;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(selfX1)
		Z_PARAM_LONG(selfY1)
		Z_PARAM_LONG(selfX2)
		Z_PARAM_LONG(selfY2)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 4, 0, &selfX1_param, &selfY1_param, &selfX2_param, &selfY2_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, selfX1);
	ZVAL_LONG(&_1, selfY1);
	ZVAL_LONG(&_2, selfX2);
	ZVAL_LONG(&_3, selfY2);
	phpqt_qline_to_line_f(&result, &_0, &_1, &_2, &_3);
	RETURN_CCTOR(&result);
}

