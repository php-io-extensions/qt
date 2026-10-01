
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
#include "src/core-qpoint.h"
#include "kernel/memory.h"
#include "kernel/object.h"
#include "kernel/operators.h"


ZEPHIR_INIT_CLASS(Qt_Core_QPoint_QPoint)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Core\\QPoint, QPoint, qt, core_qpoint_qpoint, qt_core_qpoint_qpoint_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Core_QPoint_QPoint, new_)
{
	zval result;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;

	ZVAL_UNDEF(&result);
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);

	ZEPHIR_INIT_VAR(&result);
	phpqt_qpoint_new(&result);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QPoint_QPoint, newIntInt)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *xpos_param = NULL, *ypos_param = NULL, result, _0, _1;
	zend_long xpos, ypos;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(xpos)
		Z_PARAM_LONG(ypos)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &xpos_param, &ypos_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, xpos);
	ZVAL_LONG(&_1, ypos);
	phpqt_qpoint_new_int_int(&result, &_0, &_1);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QPoint_QPoint, isNull)
{
	zval *selfX_param = NULL, *selfY_param = NULL, _0, _1;
	zend_long selfX, selfY, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(selfX)
		Z_PARAM_LONG(selfY)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &selfX_param, &selfY_param);
	ZVAL_LONG(&_0, selfX);
	ZVAL_LONG(&_1, selfY);
	r = phpqt_qpoint_is_null(&_0, &_1);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QPoint_QPoint, x)
{
	zval *selfX_param = NULL, *selfY_param = NULL, _0, _1;
	zend_long selfX, selfY;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(selfX)
		Z_PARAM_LONG(selfY)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &selfX_param, &selfY_param);
	ZVAL_LONG(&_0, selfX);
	ZVAL_LONG(&_1, selfY);
	RETURN_LONG(phpqt_qpoint_x(&_0, &_1));
}

PHP_METHOD(Qt_Core_QPoint_QPoint, y)
{
	zval *selfX_param = NULL, *selfY_param = NULL, _0, _1;
	zend_long selfX, selfY;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(selfX)
		Z_PARAM_LONG(selfY)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &selfX_param, &selfY_param);
	ZVAL_LONG(&_0, selfX);
	ZVAL_LONG(&_1, selfY);
	RETURN_LONG(phpqt_qpoint_y(&_0, &_1));
}

PHP_METHOD(Qt_Core_QPoint_QPoint, setX)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *selfX_param = NULL, *selfY_param = NULL, *x_param = NULL, result, _0, _1, _2;
	zend_long selfX, selfY, x;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(selfX)
		Z_PARAM_LONG(selfY)
		Z_PARAM_LONG(x)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 3, 0, &selfX_param, &selfY_param, &x_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, selfX);
	ZVAL_LONG(&_1, selfY);
	ZVAL_LONG(&_2, x);
	phpqt_qpoint_set_x(&result, &_0, &_1, &_2);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QPoint_QPoint, setY)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *selfX_param = NULL, *selfY_param = NULL, *y_param = NULL, result, _0, _1, _2;
	zend_long selfX, selfY, y;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(selfX)
		Z_PARAM_LONG(selfY)
		Z_PARAM_LONG(y)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 3, 0, &selfX_param, &selfY_param, &y_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, selfX);
	ZVAL_LONG(&_1, selfY);
	ZVAL_LONG(&_2, y);
	phpqt_qpoint_set_y(&result, &_0, &_1, &_2);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QPoint_QPoint, manhattanLength)
{
	zval *selfX_param = NULL, *selfY_param = NULL, _0, _1;
	zend_long selfX, selfY;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(selfX)
		Z_PARAM_LONG(selfY)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &selfX_param, &selfY_param);
	ZVAL_LONG(&_0, selfX);
	ZVAL_LONG(&_1, selfY);
	RETURN_LONG(phpqt_qpoint_manhattan_length(&_0, &_1));
}

PHP_METHOD(Qt_Core_QPoint_QPoint, transposed)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *selfX_param = NULL, *selfY_param = NULL, result, _0, _1;
	zend_long selfX, selfY;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(selfX)
		Z_PARAM_LONG(selfY)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &selfX_param, &selfY_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, selfX);
	ZVAL_LONG(&_1, selfY);
	phpqt_qpoint_transposed(&result, &_0, &_1);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QPoint_QPoint, dotProduct)
{
	zval *p1X_param = NULL, *p1Y_param = NULL, *p2X_param = NULL, *p2Y_param = NULL, _0, _1, _2, _3;
	zend_long p1X, p1Y, p2X, p2Y;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(p1X)
		Z_PARAM_LONG(p1Y)
		Z_PARAM_LONG(p2X)
		Z_PARAM_LONG(p2Y)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 0, &p1X_param, &p1Y_param, &p2X_param, &p2Y_param);
	ZVAL_LONG(&_0, p1X);
	ZVAL_LONG(&_1, p1Y);
	ZVAL_LONG(&_2, p2X);
	ZVAL_LONG(&_3, p2Y);
	RETURN_LONG(phpqt_qpoint_dot_product(&_0, &_1, &_2, &_3));
}

PHP_METHOD(Qt_Core_QPoint_QPoint, toPointF)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *selfX_param = NULL, *selfY_param = NULL, result, _0, _1;
	zend_long selfX, selfY;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(selfX)
		Z_PARAM_LONG(selfY)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &selfX_param, &selfY_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, selfX);
	ZVAL_LONG(&_1, selfY);
	phpqt_qpoint_to_point_f(&result, &_0, &_1);
	RETURN_CCTOR(&result);
}

