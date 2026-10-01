
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
#include "src/core-qpointf.h"
#include "kernel/memory.h"
#include "kernel/object.h"
#include "kernel/operators.h"


ZEPHIR_INIT_CLASS(Qt_Core_QPointF_QPointF)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Core\\QPointF, QPointF, qt, core_qpointf_qpointf, qt_core_qpointf_qpointf_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Core_QPointF_QPointF, new_)
{
	zval result;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;

	ZVAL_UNDEF(&result);
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);

	ZEPHIR_INIT_VAR(&result);
	phpqt_qpointf_new(&result);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QPointF_QPointF, newQPoint)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *pX_param = NULL, *pY_param = NULL, result, _0, _1;
	zend_long pX, pY;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(pX)
		Z_PARAM_LONG(pY)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &pX_param, &pY_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, pX);
	ZVAL_LONG(&_1, pY);
	phpqt_qpointf_new_q_point(&result, &_0, &_1);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QPointF_QPointF, newQrealQreal)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *xpos_param = NULL, *ypos_param = NULL, result, _0, _1;
	double xpos, ypos;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_ZVAL(xpos)
		Z_PARAM_ZVAL(ypos)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &xpos_param, &ypos_param);
	xpos = zephir_get_doubleval(xpos_param);
	ypos = zephir_get_doubleval(ypos_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_DOUBLE(&_0, xpos);
	ZVAL_DOUBLE(&_1, ypos);
	phpqt_qpointf_new_qreal_qreal(&result, &_0, &_1);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QPointF_QPointF, manhattanLength)
{
	zval *selfX_param = NULL, *selfY_param = NULL, _0, _1;
	double selfX, selfY;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_ZVAL(selfX)
		Z_PARAM_ZVAL(selfY)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &selfX_param, &selfY_param);
	selfX = zephir_get_doubleval(selfX_param);
	selfY = zephir_get_doubleval(selfY_param);
	ZVAL_DOUBLE(&_0, selfX);
	ZVAL_DOUBLE(&_1, selfY);
	RETURN_DOUBLE(phpqt_qpointf_manhattan_length(&_0, &_1));
}

PHP_METHOD(Qt_Core_QPointF_QPointF, isNull)
{
	zend_long r = 0;
	zval *selfX_param = NULL, *selfY_param = NULL, _0, _1;
	double selfX, selfY;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_ZVAL(selfX)
		Z_PARAM_ZVAL(selfY)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &selfX_param, &selfY_param);
	selfX = zephir_get_doubleval(selfX_param);
	selfY = zephir_get_doubleval(selfY_param);
	ZVAL_DOUBLE(&_0, selfX);
	ZVAL_DOUBLE(&_1, selfY);
	r = phpqt_qpointf_is_null(&_0, &_1);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QPointF_QPointF, x)
{
	zval *selfX_param = NULL, *selfY_param = NULL, _0, _1;
	double selfX, selfY;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_ZVAL(selfX)
		Z_PARAM_ZVAL(selfY)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &selfX_param, &selfY_param);
	selfX = zephir_get_doubleval(selfX_param);
	selfY = zephir_get_doubleval(selfY_param);
	ZVAL_DOUBLE(&_0, selfX);
	ZVAL_DOUBLE(&_1, selfY);
	RETURN_DOUBLE(phpqt_qpointf_x(&_0, &_1));
}

PHP_METHOD(Qt_Core_QPointF_QPointF, y)
{
	zval *selfX_param = NULL, *selfY_param = NULL, _0, _1;
	double selfX, selfY;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_ZVAL(selfX)
		Z_PARAM_ZVAL(selfY)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &selfX_param, &selfY_param);
	selfX = zephir_get_doubleval(selfX_param);
	selfY = zephir_get_doubleval(selfY_param);
	ZVAL_DOUBLE(&_0, selfX);
	ZVAL_DOUBLE(&_1, selfY);
	RETURN_DOUBLE(phpqt_qpointf_y(&_0, &_1));
}

PHP_METHOD(Qt_Core_QPointF_QPointF, setX)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *selfX_param = NULL, *selfY_param = NULL, *x_param = NULL, result, _0, _1, _2;
	double selfX, selfY, x;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_ZVAL(selfX)
		Z_PARAM_ZVAL(selfY)
		Z_PARAM_ZVAL(x)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 3, 0, &selfX_param, &selfY_param, &x_param);
	selfX = zephir_get_doubleval(selfX_param);
	selfY = zephir_get_doubleval(selfY_param);
	x = zephir_get_doubleval(x_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_DOUBLE(&_0, selfX);
	ZVAL_DOUBLE(&_1, selfY);
	ZVAL_DOUBLE(&_2, x);
	phpqt_qpointf_set_x(&result, &_0, &_1, &_2);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QPointF_QPointF, setY)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *selfX_param = NULL, *selfY_param = NULL, *y_param = NULL, result, _0, _1, _2;
	double selfX, selfY, y;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_ZVAL(selfX)
		Z_PARAM_ZVAL(selfY)
		Z_PARAM_ZVAL(y)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 3, 0, &selfX_param, &selfY_param, &y_param);
	selfX = zephir_get_doubleval(selfX_param);
	selfY = zephir_get_doubleval(selfY_param);
	y = zephir_get_doubleval(y_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_DOUBLE(&_0, selfX);
	ZVAL_DOUBLE(&_1, selfY);
	ZVAL_DOUBLE(&_2, y);
	phpqt_qpointf_set_y(&result, &_0, &_1, &_2);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QPointF_QPointF, transposed)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *selfX_param = NULL, *selfY_param = NULL, result, _0, _1;
	double selfX, selfY;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_ZVAL(selfX)
		Z_PARAM_ZVAL(selfY)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &selfX_param, &selfY_param);
	selfX = zephir_get_doubleval(selfX_param);
	selfY = zephir_get_doubleval(selfY_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_DOUBLE(&_0, selfX);
	ZVAL_DOUBLE(&_1, selfY);
	phpqt_qpointf_transposed(&result, &_0, &_1);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QPointF_QPointF, dotProduct)
{
	zval *p1X_param = NULL, *p1Y_param = NULL, *p2X_param = NULL, *p2Y_param = NULL, _0, _1, _2, _3;
	double p1X, p1Y, p2X, p2Y;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_ZVAL(p1X)
		Z_PARAM_ZVAL(p1Y)
		Z_PARAM_ZVAL(p2X)
		Z_PARAM_ZVAL(p2Y)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 0, &p1X_param, &p1Y_param, &p2X_param, &p2Y_param);
	p1X = zephir_get_doubleval(p1X_param);
	p1Y = zephir_get_doubleval(p1Y_param);
	p2X = zephir_get_doubleval(p2X_param);
	p2Y = zephir_get_doubleval(p2Y_param);
	ZVAL_DOUBLE(&_0, p1X);
	ZVAL_DOUBLE(&_1, p1Y);
	ZVAL_DOUBLE(&_2, p2X);
	ZVAL_DOUBLE(&_3, p2Y);
	RETURN_DOUBLE(phpqt_qpointf_dot_product(&_0, &_1, &_2, &_3));
}

PHP_METHOD(Qt_Core_QPointF_QPointF, toPoint)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *selfX_param = NULL, *selfY_param = NULL, result, _0, _1;
	double selfX, selfY;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_ZVAL(selfX)
		Z_PARAM_ZVAL(selfY)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &selfX_param, &selfY_param);
	selfX = zephir_get_doubleval(selfX_param);
	selfY = zephir_get_doubleval(selfY_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_DOUBLE(&_0, selfX);
	ZVAL_DOUBLE(&_1, selfY);
	phpqt_qpointf_to_point(&result, &_0, &_1);
	RETURN_CCTOR(&result);
}

