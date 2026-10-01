
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
#include "src/core-qrect.h"
#include "kernel/memory.h"
#include "kernel/object.h"
#include "kernel/operators.h"


ZEPHIR_INIT_CLASS(Qt_Core_QRect_QRect)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Core\\QRect, QRect, qt, core_qrect_qrect, qt_core_qrect_qrect_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Core_QRect_QRect, new_)
{
	zval result;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;

	ZVAL_UNDEF(&result);
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);

	ZEPHIR_INIT_VAR(&result);
	phpqt_qrect_new(&result);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QRect_QRect, newQPointQPoint)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *topleftX_param = NULL, *topleftY_param = NULL, *bottomrightX_param = NULL, *bottomrightY_param = NULL, result, _0, _1, _2, _3;
	zend_long topleftX, topleftY, bottomrightX, bottomrightY;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(topleftX)
		Z_PARAM_LONG(topleftY)
		Z_PARAM_LONG(bottomrightX)
		Z_PARAM_LONG(bottomrightY)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 4, 0, &topleftX_param, &topleftY_param, &bottomrightX_param, &bottomrightY_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, topleftX);
	ZVAL_LONG(&_1, topleftY);
	ZVAL_LONG(&_2, bottomrightX);
	ZVAL_LONG(&_3, bottomrightY);
	phpqt_qrect_new_q_point_q_point(&result, &_0, &_1, &_2, &_3);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QRect_QRect, newQPointQSize)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *topleftX_param = NULL, *topleftY_param = NULL, *sizeWidth_param = NULL, *sizeHeight_param = NULL, result, _0, _1, _2, _3;
	zend_long topleftX, topleftY, sizeWidth, sizeHeight;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(topleftX)
		Z_PARAM_LONG(topleftY)
		Z_PARAM_LONG(sizeWidth)
		Z_PARAM_LONG(sizeHeight)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 4, 0, &topleftX_param, &topleftY_param, &sizeWidth_param, &sizeHeight_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, topleftX);
	ZVAL_LONG(&_1, topleftY);
	ZVAL_LONG(&_2, sizeWidth);
	ZVAL_LONG(&_3, sizeHeight);
	phpqt_qrect_new_q_point_q_size(&result, &_0, &_1, &_2, &_3);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QRect_QRect, newIntIntIntInt)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *left_param = NULL, *top_param = NULL, *width_param = NULL, *height_param = NULL, result, _0, _1, _2, _3;
	zend_long left, top, width, height;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(left)
		Z_PARAM_LONG(top)
		Z_PARAM_LONG(width)
		Z_PARAM_LONG(height)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 4, 0, &left_param, &top_param, &width_param, &height_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, left);
	ZVAL_LONG(&_1, top);
	ZVAL_LONG(&_2, width);
	ZVAL_LONG(&_3, height);
	phpqt_qrect_new_int_int_int_int(&result, &_0, &_1, &_2, &_3);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QRect_QRect, isNull)
{
	zval *selfX_param = NULL, *selfY_param = NULL, *selfWidth_param = NULL, *selfHeight_param = NULL, _0, _1, _2, _3;
	zend_long selfX, selfY, selfWidth, selfHeight, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(selfX)
		Z_PARAM_LONG(selfY)
		Z_PARAM_LONG(selfWidth)
		Z_PARAM_LONG(selfHeight)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 0, &selfX_param, &selfY_param, &selfWidth_param, &selfHeight_param);
	ZVAL_LONG(&_0, selfX);
	ZVAL_LONG(&_1, selfY);
	ZVAL_LONG(&_2, selfWidth);
	ZVAL_LONG(&_3, selfHeight);
	r = phpqt_qrect_is_null(&_0, &_1, &_2, &_3);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QRect_QRect, isEmpty)
{
	zval *selfX_param = NULL, *selfY_param = NULL, *selfWidth_param = NULL, *selfHeight_param = NULL, _0, _1, _2, _3;
	zend_long selfX, selfY, selfWidth, selfHeight, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(selfX)
		Z_PARAM_LONG(selfY)
		Z_PARAM_LONG(selfWidth)
		Z_PARAM_LONG(selfHeight)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 0, &selfX_param, &selfY_param, &selfWidth_param, &selfHeight_param);
	ZVAL_LONG(&_0, selfX);
	ZVAL_LONG(&_1, selfY);
	ZVAL_LONG(&_2, selfWidth);
	ZVAL_LONG(&_3, selfHeight);
	r = phpqt_qrect_is_empty(&_0, &_1, &_2, &_3);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QRect_QRect, isValid)
{
	zval *selfX_param = NULL, *selfY_param = NULL, *selfWidth_param = NULL, *selfHeight_param = NULL, _0, _1, _2, _3;
	zend_long selfX, selfY, selfWidth, selfHeight, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(selfX)
		Z_PARAM_LONG(selfY)
		Z_PARAM_LONG(selfWidth)
		Z_PARAM_LONG(selfHeight)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 0, &selfX_param, &selfY_param, &selfWidth_param, &selfHeight_param);
	ZVAL_LONG(&_0, selfX);
	ZVAL_LONG(&_1, selfY);
	ZVAL_LONG(&_2, selfWidth);
	ZVAL_LONG(&_3, selfHeight);
	r = phpqt_qrect_is_valid(&_0, &_1, &_2, &_3);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QRect_QRect, left)
{
	zval *selfX_param = NULL, *selfY_param = NULL, *selfWidth_param = NULL, *selfHeight_param = NULL, _0, _1, _2, _3;
	zend_long selfX, selfY, selfWidth, selfHeight;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(selfX)
		Z_PARAM_LONG(selfY)
		Z_PARAM_LONG(selfWidth)
		Z_PARAM_LONG(selfHeight)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 0, &selfX_param, &selfY_param, &selfWidth_param, &selfHeight_param);
	ZVAL_LONG(&_0, selfX);
	ZVAL_LONG(&_1, selfY);
	ZVAL_LONG(&_2, selfWidth);
	ZVAL_LONG(&_3, selfHeight);
	RETURN_LONG(phpqt_qrect_left(&_0, &_1, &_2, &_3));
}

PHP_METHOD(Qt_Core_QRect_QRect, top)
{
	zval *selfX_param = NULL, *selfY_param = NULL, *selfWidth_param = NULL, *selfHeight_param = NULL, _0, _1, _2, _3;
	zend_long selfX, selfY, selfWidth, selfHeight;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(selfX)
		Z_PARAM_LONG(selfY)
		Z_PARAM_LONG(selfWidth)
		Z_PARAM_LONG(selfHeight)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 0, &selfX_param, &selfY_param, &selfWidth_param, &selfHeight_param);
	ZVAL_LONG(&_0, selfX);
	ZVAL_LONG(&_1, selfY);
	ZVAL_LONG(&_2, selfWidth);
	ZVAL_LONG(&_3, selfHeight);
	RETURN_LONG(phpqt_qrect_top(&_0, &_1, &_2, &_3));
}

PHP_METHOD(Qt_Core_QRect_QRect, right)
{
	zval *selfX_param = NULL, *selfY_param = NULL, *selfWidth_param = NULL, *selfHeight_param = NULL, _0, _1, _2, _3;
	zend_long selfX, selfY, selfWidth, selfHeight;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(selfX)
		Z_PARAM_LONG(selfY)
		Z_PARAM_LONG(selfWidth)
		Z_PARAM_LONG(selfHeight)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 0, &selfX_param, &selfY_param, &selfWidth_param, &selfHeight_param);
	ZVAL_LONG(&_0, selfX);
	ZVAL_LONG(&_1, selfY);
	ZVAL_LONG(&_2, selfWidth);
	ZVAL_LONG(&_3, selfHeight);
	RETURN_LONG(phpqt_qrect_right(&_0, &_1, &_2, &_3));
}

PHP_METHOD(Qt_Core_QRect_QRect, bottom)
{
	zval *selfX_param = NULL, *selfY_param = NULL, *selfWidth_param = NULL, *selfHeight_param = NULL, _0, _1, _2, _3;
	zend_long selfX, selfY, selfWidth, selfHeight;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(selfX)
		Z_PARAM_LONG(selfY)
		Z_PARAM_LONG(selfWidth)
		Z_PARAM_LONG(selfHeight)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 0, &selfX_param, &selfY_param, &selfWidth_param, &selfHeight_param);
	ZVAL_LONG(&_0, selfX);
	ZVAL_LONG(&_1, selfY);
	ZVAL_LONG(&_2, selfWidth);
	ZVAL_LONG(&_3, selfHeight);
	RETURN_LONG(phpqt_qrect_bottom(&_0, &_1, &_2, &_3));
}

PHP_METHOD(Qt_Core_QRect_QRect, normalized)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *selfX_param = NULL, *selfY_param = NULL, *selfWidth_param = NULL, *selfHeight_param = NULL, result, _0, _1, _2, _3;
	zend_long selfX, selfY, selfWidth, selfHeight;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(selfX)
		Z_PARAM_LONG(selfY)
		Z_PARAM_LONG(selfWidth)
		Z_PARAM_LONG(selfHeight)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 4, 0, &selfX_param, &selfY_param, &selfWidth_param, &selfHeight_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, selfX);
	ZVAL_LONG(&_1, selfY);
	ZVAL_LONG(&_2, selfWidth);
	ZVAL_LONG(&_3, selfHeight);
	phpqt_qrect_normalized(&result, &_0, &_1, &_2, &_3);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QRect_QRect, x)
{
	zval *selfX_param = NULL, *selfY_param = NULL, *selfWidth_param = NULL, *selfHeight_param = NULL, _0, _1, _2, _3;
	zend_long selfX, selfY, selfWidth, selfHeight;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(selfX)
		Z_PARAM_LONG(selfY)
		Z_PARAM_LONG(selfWidth)
		Z_PARAM_LONG(selfHeight)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 0, &selfX_param, &selfY_param, &selfWidth_param, &selfHeight_param);
	ZVAL_LONG(&_0, selfX);
	ZVAL_LONG(&_1, selfY);
	ZVAL_LONG(&_2, selfWidth);
	ZVAL_LONG(&_3, selfHeight);
	RETURN_LONG(phpqt_qrect_x(&_0, &_1, &_2, &_3));
}

PHP_METHOD(Qt_Core_QRect_QRect, y)
{
	zval *selfX_param = NULL, *selfY_param = NULL, *selfWidth_param = NULL, *selfHeight_param = NULL, _0, _1, _2, _3;
	zend_long selfX, selfY, selfWidth, selfHeight;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(selfX)
		Z_PARAM_LONG(selfY)
		Z_PARAM_LONG(selfWidth)
		Z_PARAM_LONG(selfHeight)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 0, &selfX_param, &selfY_param, &selfWidth_param, &selfHeight_param);
	ZVAL_LONG(&_0, selfX);
	ZVAL_LONG(&_1, selfY);
	ZVAL_LONG(&_2, selfWidth);
	ZVAL_LONG(&_3, selfHeight);
	RETURN_LONG(phpqt_qrect_y(&_0, &_1, &_2, &_3));
}

PHP_METHOD(Qt_Core_QRect_QRect, setLeft)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *selfX_param = NULL, *selfY_param = NULL, *selfWidth_param = NULL, *selfHeight_param = NULL, *pos_param = NULL, result, _0, _1, _2, _3, _4;
	zend_long selfX, selfY, selfWidth, selfHeight, pos;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZEND_PARSE_PARAMETERS_START(5, 5)
		Z_PARAM_LONG(selfX)
		Z_PARAM_LONG(selfY)
		Z_PARAM_LONG(selfWidth)
		Z_PARAM_LONG(selfHeight)
		Z_PARAM_LONG(pos)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 5, 0, &selfX_param, &selfY_param, &selfWidth_param, &selfHeight_param, &pos_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, selfX);
	ZVAL_LONG(&_1, selfY);
	ZVAL_LONG(&_2, selfWidth);
	ZVAL_LONG(&_3, selfHeight);
	ZVAL_LONG(&_4, pos);
	phpqt_qrect_set_left(&result, &_0, &_1, &_2, &_3, &_4);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QRect_QRect, setTop)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *selfX_param = NULL, *selfY_param = NULL, *selfWidth_param = NULL, *selfHeight_param = NULL, *pos_param = NULL, result, _0, _1, _2, _3, _4;
	zend_long selfX, selfY, selfWidth, selfHeight, pos;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZEND_PARSE_PARAMETERS_START(5, 5)
		Z_PARAM_LONG(selfX)
		Z_PARAM_LONG(selfY)
		Z_PARAM_LONG(selfWidth)
		Z_PARAM_LONG(selfHeight)
		Z_PARAM_LONG(pos)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 5, 0, &selfX_param, &selfY_param, &selfWidth_param, &selfHeight_param, &pos_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, selfX);
	ZVAL_LONG(&_1, selfY);
	ZVAL_LONG(&_2, selfWidth);
	ZVAL_LONG(&_3, selfHeight);
	ZVAL_LONG(&_4, pos);
	phpqt_qrect_set_top(&result, &_0, &_1, &_2, &_3, &_4);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QRect_QRect, setRight)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *selfX_param = NULL, *selfY_param = NULL, *selfWidth_param = NULL, *selfHeight_param = NULL, *pos_param = NULL, result, _0, _1, _2, _3, _4;
	zend_long selfX, selfY, selfWidth, selfHeight, pos;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZEND_PARSE_PARAMETERS_START(5, 5)
		Z_PARAM_LONG(selfX)
		Z_PARAM_LONG(selfY)
		Z_PARAM_LONG(selfWidth)
		Z_PARAM_LONG(selfHeight)
		Z_PARAM_LONG(pos)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 5, 0, &selfX_param, &selfY_param, &selfWidth_param, &selfHeight_param, &pos_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, selfX);
	ZVAL_LONG(&_1, selfY);
	ZVAL_LONG(&_2, selfWidth);
	ZVAL_LONG(&_3, selfHeight);
	ZVAL_LONG(&_4, pos);
	phpqt_qrect_set_right(&result, &_0, &_1, &_2, &_3, &_4);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QRect_QRect, setBottom)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *selfX_param = NULL, *selfY_param = NULL, *selfWidth_param = NULL, *selfHeight_param = NULL, *pos_param = NULL, result, _0, _1, _2, _3, _4;
	zend_long selfX, selfY, selfWidth, selfHeight, pos;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZEND_PARSE_PARAMETERS_START(5, 5)
		Z_PARAM_LONG(selfX)
		Z_PARAM_LONG(selfY)
		Z_PARAM_LONG(selfWidth)
		Z_PARAM_LONG(selfHeight)
		Z_PARAM_LONG(pos)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 5, 0, &selfX_param, &selfY_param, &selfWidth_param, &selfHeight_param, &pos_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, selfX);
	ZVAL_LONG(&_1, selfY);
	ZVAL_LONG(&_2, selfWidth);
	ZVAL_LONG(&_3, selfHeight);
	ZVAL_LONG(&_4, pos);
	phpqt_qrect_set_bottom(&result, &_0, &_1, &_2, &_3, &_4);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QRect_QRect, setX)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *selfX_param = NULL, *selfY_param = NULL, *selfWidth_param = NULL, *selfHeight_param = NULL, *x_param = NULL, result, _0, _1, _2, _3, _4;
	zend_long selfX, selfY, selfWidth, selfHeight, x;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZEND_PARSE_PARAMETERS_START(5, 5)
		Z_PARAM_LONG(selfX)
		Z_PARAM_LONG(selfY)
		Z_PARAM_LONG(selfWidth)
		Z_PARAM_LONG(selfHeight)
		Z_PARAM_LONG(x)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 5, 0, &selfX_param, &selfY_param, &selfWidth_param, &selfHeight_param, &x_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, selfX);
	ZVAL_LONG(&_1, selfY);
	ZVAL_LONG(&_2, selfWidth);
	ZVAL_LONG(&_3, selfHeight);
	ZVAL_LONG(&_4, x);
	phpqt_qrect_set_x(&result, &_0, &_1, &_2, &_3, &_4);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QRect_QRect, setY)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *selfX_param = NULL, *selfY_param = NULL, *selfWidth_param = NULL, *selfHeight_param = NULL, *y_param = NULL, result, _0, _1, _2, _3, _4;
	zend_long selfX, selfY, selfWidth, selfHeight, y;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZEND_PARSE_PARAMETERS_START(5, 5)
		Z_PARAM_LONG(selfX)
		Z_PARAM_LONG(selfY)
		Z_PARAM_LONG(selfWidth)
		Z_PARAM_LONG(selfHeight)
		Z_PARAM_LONG(y)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 5, 0, &selfX_param, &selfY_param, &selfWidth_param, &selfHeight_param, &y_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, selfX);
	ZVAL_LONG(&_1, selfY);
	ZVAL_LONG(&_2, selfWidth);
	ZVAL_LONG(&_3, selfHeight);
	ZVAL_LONG(&_4, y);
	phpqt_qrect_set_y(&result, &_0, &_1, &_2, &_3, &_4);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QRect_QRect, setTopLeft)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *selfX_param = NULL, *selfY_param = NULL, *selfWidth_param = NULL, *selfHeight_param = NULL, *pX_param = NULL, *pY_param = NULL, result, _0, _1, _2, _3, _4, _5;
	zend_long selfX, selfY, selfWidth, selfHeight, pX, pY;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_5);
	ZEND_PARSE_PARAMETERS_START(6, 6)
		Z_PARAM_LONG(selfX)
		Z_PARAM_LONG(selfY)
		Z_PARAM_LONG(selfWidth)
		Z_PARAM_LONG(selfHeight)
		Z_PARAM_LONG(pX)
		Z_PARAM_LONG(pY)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 6, 0, &selfX_param, &selfY_param, &selfWidth_param, &selfHeight_param, &pX_param, &pY_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, selfX);
	ZVAL_LONG(&_1, selfY);
	ZVAL_LONG(&_2, selfWidth);
	ZVAL_LONG(&_3, selfHeight);
	ZVAL_LONG(&_4, pX);
	ZVAL_LONG(&_5, pY);
	phpqt_qrect_set_top_left(&result, &_0, &_1, &_2, &_3, &_4, &_5);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QRect_QRect, setBottomRight)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *selfX_param = NULL, *selfY_param = NULL, *selfWidth_param = NULL, *selfHeight_param = NULL, *pX_param = NULL, *pY_param = NULL, result, _0, _1, _2, _3, _4, _5;
	zend_long selfX, selfY, selfWidth, selfHeight, pX, pY;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_5);
	ZEND_PARSE_PARAMETERS_START(6, 6)
		Z_PARAM_LONG(selfX)
		Z_PARAM_LONG(selfY)
		Z_PARAM_LONG(selfWidth)
		Z_PARAM_LONG(selfHeight)
		Z_PARAM_LONG(pX)
		Z_PARAM_LONG(pY)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 6, 0, &selfX_param, &selfY_param, &selfWidth_param, &selfHeight_param, &pX_param, &pY_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, selfX);
	ZVAL_LONG(&_1, selfY);
	ZVAL_LONG(&_2, selfWidth);
	ZVAL_LONG(&_3, selfHeight);
	ZVAL_LONG(&_4, pX);
	ZVAL_LONG(&_5, pY);
	phpqt_qrect_set_bottom_right(&result, &_0, &_1, &_2, &_3, &_4, &_5);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QRect_QRect, setTopRight)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *selfX_param = NULL, *selfY_param = NULL, *selfWidth_param = NULL, *selfHeight_param = NULL, *pX_param = NULL, *pY_param = NULL, result, _0, _1, _2, _3, _4, _5;
	zend_long selfX, selfY, selfWidth, selfHeight, pX, pY;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_5);
	ZEND_PARSE_PARAMETERS_START(6, 6)
		Z_PARAM_LONG(selfX)
		Z_PARAM_LONG(selfY)
		Z_PARAM_LONG(selfWidth)
		Z_PARAM_LONG(selfHeight)
		Z_PARAM_LONG(pX)
		Z_PARAM_LONG(pY)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 6, 0, &selfX_param, &selfY_param, &selfWidth_param, &selfHeight_param, &pX_param, &pY_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, selfX);
	ZVAL_LONG(&_1, selfY);
	ZVAL_LONG(&_2, selfWidth);
	ZVAL_LONG(&_3, selfHeight);
	ZVAL_LONG(&_4, pX);
	ZVAL_LONG(&_5, pY);
	phpqt_qrect_set_top_right(&result, &_0, &_1, &_2, &_3, &_4, &_5);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QRect_QRect, setBottomLeft)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *selfX_param = NULL, *selfY_param = NULL, *selfWidth_param = NULL, *selfHeight_param = NULL, *pX_param = NULL, *pY_param = NULL, result, _0, _1, _2, _3, _4, _5;
	zend_long selfX, selfY, selfWidth, selfHeight, pX, pY;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_5);
	ZEND_PARSE_PARAMETERS_START(6, 6)
		Z_PARAM_LONG(selfX)
		Z_PARAM_LONG(selfY)
		Z_PARAM_LONG(selfWidth)
		Z_PARAM_LONG(selfHeight)
		Z_PARAM_LONG(pX)
		Z_PARAM_LONG(pY)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 6, 0, &selfX_param, &selfY_param, &selfWidth_param, &selfHeight_param, &pX_param, &pY_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, selfX);
	ZVAL_LONG(&_1, selfY);
	ZVAL_LONG(&_2, selfWidth);
	ZVAL_LONG(&_3, selfHeight);
	ZVAL_LONG(&_4, pX);
	ZVAL_LONG(&_5, pY);
	phpqt_qrect_set_bottom_left(&result, &_0, &_1, &_2, &_3, &_4, &_5);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QRect_QRect, topLeft)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *selfX_param = NULL, *selfY_param = NULL, *selfWidth_param = NULL, *selfHeight_param = NULL, result, _0, _1, _2, _3;
	zend_long selfX, selfY, selfWidth, selfHeight;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(selfX)
		Z_PARAM_LONG(selfY)
		Z_PARAM_LONG(selfWidth)
		Z_PARAM_LONG(selfHeight)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 4, 0, &selfX_param, &selfY_param, &selfWidth_param, &selfHeight_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, selfX);
	ZVAL_LONG(&_1, selfY);
	ZVAL_LONG(&_2, selfWidth);
	ZVAL_LONG(&_3, selfHeight);
	phpqt_qrect_top_left(&result, &_0, &_1, &_2, &_3);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QRect_QRect, bottomRight)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *selfX_param = NULL, *selfY_param = NULL, *selfWidth_param = NULL, *selfHeight_param = NULL, result, _0, _1, _2, _3;
	zend_long selfX, selfY, selfWidth, selfHeight;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(selfX)
		Z_PARAM_LONG(selfY)
		Z_PARAM_LONG(selfWidth)
		Z_PARAM_LONG(selfHeight)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 4, 0, &selfX_param, &selfY_param, &selfWidth_param, &selfHeight_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, selfX);
	ZVAL_LONG(&_1, selfY);
	ZVAL_LONG(&_2, selfWidth);
	ZVAL_LONG(&_3, selfHeight);
	phpqt_qrect_bottom_right(&result, &_0, &_1, &_2, &_3);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QRect_QRect, topRight)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *selfX_param = NULL, *selfY_param = NULL, *selfWidth_param = NULL, *selfHeight_param = NULL, result, _0, _1, _2, _3;
	zend_long selfX, selfY, selfWidth, selfHeight;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(selfX)
		Z_PARAM_LONG(selfY)
		Z_PARAM_LONG(selfWidth)
		Z_PARAM_LONG(selfHeight)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 4, 0, &selfX_param, &selfY_param, &selfWidth_param, &selfHeight_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, selfX);
	ZVAL_LONG(&_1, selfY);
	ZVAL_LONG(&_2, selfWidth);
	ZVAL_LONG(&_3, selfHeight);
	phpqt_qrect_top_right(&result, &_0, &_1, &_2, &_3);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QRect_QRect, bottomLeft)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *selfX_param = NULL, *selfY_param = NULL, *selfWidth_param = NULL, *selfHeight_param = NULL, result, _0, _1, _2, _3;
	zend_long selfX, selfY, selfWidth, selfHeight;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(selfX)
		Z_PARAM_LONG(selfY)
		Z_PARAM_LONG(selfWidth)
		Z_PARAM_LONG(selfHeight)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 4, 0, &selfX_param, &selfY_param, &selfWidth_param, &selfHeight_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, selfX);
	ZVAL_LONG(&_1, selfY);
	ZVAL_LONG(&_2, selfWidth);
	ZVAL_LONG(&_3, selfHeight);
	phpqt_qrect_bottom_left(&result, &_0, &_1, &_2, &_3);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QRect_QRect, center)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *selfX_param = NULL, *selfY_param = NULL, *selfWidth_param = NULL, *selfHeight_param = NULL, result, _0, _1, _2, _3;
	zend_long selfX, selfY, selfWidth, selfHeight;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(selfX)
		Z_PARAM_LONG(selfY)
		Z_PARAM_LONG(selfWidth)
		Z_PARAM_LONG(selfHeight)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 4, 0, &selfX_param, &selfY_param, &selfWidth_param, &selfHeight_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, selfX);
	ZVAL_LONG(&_1, selfY);
	ZVAL_LONG(&_2, selfWidth);
	ZVAL_LONG(&_3, selfHeight);
	phpqt_qrect_center(&result, &_0, &_1, &_2, &_3);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QRect_QRect, moveLeft)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *selfX_param = NULL, *selfY_param = NULL, *selfWidth_param = NULL, *selfHeight_param = NULL, *pos_param = NULL, result, _0, _1, _2, _3, _4;
	zend_long selfX, selfY, selfWidth, selfHeight, pos;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZEND_PARSE_PARAMETERS_START(5, 5)
		Z_PARAM_LONG(selfX)
		Z_PARAM_LONG(selfY)
		Z_PARAM_LONG(selfWidth)
		Z_PARAM_LONG(selfHeight)
		Z_PARAM_LONG(pos)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 5, 0, &selfX_param, &selfY_param, &selfWidth_param, &selfHeight_param, &pos_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, selfX);
	ZVAL_LONG(&_1, selfY);
	ZVAL_LONG(&_2, selfWidth);
	ZVAL_LONG(&_3, selfHeight);
	ZVAL_LONG(&_4, pos);
	phpqt_qrect_move_left(&result, &_0, &_1, &_2, &_3, &_4);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QRect_QRect, moveTop)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *selfX_param = NULL, *selfY_param = NULL, *selfWidth_param = NULL, *selfHeight_param = NULL, *pos_param = NULL, result, _0, _1, _2, _3, _4;
	zend_long selfX, selfY, selfWidth, selfHeight, pos;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZEND_PARSE_PARAMETERS_START(5, 5)
		Z_PARAM_LONG(selfX)
		Z_PARAM_LONG(selfY)
		Z_PARAM_LONG(selfWidth)
		Z_PARAM_LONG(selfHeight)
		Z_PARAM_LONG(pos)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 5, 0, &selfX_param, &selfY_param, &selfWidth_param, &selfHeight_param, &pos_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, selfX);
	ZVAL_LONG(&_1, selfY);
	ZVAL_LONG(&_2, selfWidth);
	ZVAL_LONG(&_3, selfHeight);
	ZVAL_LONG(&_4, pos);
	phpqt_qrect_move_top(&result, &_0, &_1, &_2, &_3, &_4);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QRect_QRect, moveRight)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *selfX_param = NULL, *selfY_param = NULL, *selfWidth_param = NULL, *selfHeight_param = NULL, *pos_param = NULL, result, _0, _1, _2, _3, _4;
	zend_long selfX, selfY, selfWidth, selfHeight, pos;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZEND_PARSE_PARAMETERS_START(5, 5)
		Z_PARAM_LONG(selfX)
		Z_PARAM_LONG(selfY)
		Z_PARAM_LONG(selfWidth)
		Z_PARAM_LONG(selfHeight)
		Z_PARAM_LONG(pos)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 5, 0, &selfX_param, &selfY_param, &selfWidth_param, &selfHeight_param, &pos_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, selfX);
	ZVAL_LONG(&_1, selfY);
	ZVAL_LONG(&_2, selfWidth);
	ZVAL_LONG(&_3, selfHeight);
	ZVAL_LONG(&_4, pos);
	phpqt_qrect_move_right(&result, &_0, &_1, &_2, &_3, &_4);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QRect_QRect, moveBottom)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *selfX_param = NULL, *selfY_param = NULL, *selfWidth_param = NULL, *selfHeight_param = NULL, *pos_param = NULL, result, _0, _1, _2, _3, _4;
	zend_long selfX, selfY, selfWidth, selfHeight, pos;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZEND_PARSE_PARAMETERS_START(5, 5)
		Z_PARAM_LONG(selfX)
		Z_PARAM_LONG(selfY)
		Z_PARAM_LONG(selfWidth)
		Z_PARAM_LONG(selfHeight)
		Z_PARAM_LONG(pos)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 5, 0, &selfX_param, &selfY_param, &selfWidth_param, &selfHeight_param, &pos_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, selfX);
	ZVAL_LONG(&_1, selfY);
	ZVAL_LONG(&_2, selfWidth);
	ZVAL_LONG(&_3, selfHeight);
	ZVAL_LONG(&_4, pos);
	phpqt_qrect_move_bottom(&result, &_0, &_1, &_2, &_3, &_4);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QRect_QRect, moveTopLeft)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *selfX_param = NULL, *selfY_param = NULL, *selfWidth_param = NULL, *selfHeight_param = NULL, *pX_param = NULL, *pY_param = NULL, result, _0, _1, _2, _3, _4, _5;
	zend_long selfX, selfY, selfWidth, selfHeight, pX, pY;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_5);
	ZEND_PARSE_PARAMETERS_START(6, 6)
		Z_PARAM_LONG(selfX)
		Z_PARAM_LONG(selfY)
		Z_PARAM_LONG(selfWidth)
		Z_PARAM_LONG(selfHeight)
		Z_PARAM_LONG(pX)
		Z_PARAM_LONG(pY)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 6, 0, &selfX_param, &selfY_param, &selfWidth_param, &selfHeight_param, &pX_param, &pY_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, selfX);
	ZVAL_LONG(&_1, selfY);
	ZVAL_LONG(&_2, selfWidth);
	ZVAL_LONG(&_3, selfHeight);
	ZVAL_LONG(&_4, pX);
	ZVAL_LONG(&_5, pY);
	phpqt_qrect_move_top_left(&result, &_0, &_1, &_2, &_3, &_4, &_5);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QRect_QRect, moveBottomRight)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *selfX_param = NULL, *selfY_param = NULL, *selfWidth_param = NULL, *selfHeight_param = NULL, *pX_param = NULL, *pY_param = NULL, result, _0, _1, _2, _3, _4, _5;
	zend_long selfX, selfY, selfWidth, selfHeight, pX, pY;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_5);
	ZEND_PARSE_PARAMETERS_START(6, 6)
		Z_PARAM_LONG(selfX)
		Z_PARAM_LONG(selfY)
		Z_PARAM_LONG(selfWidth)
		Z_PARAM_LONG(selfHeight)
		Z_PARAM_LONG(pX)
		Z_PARAM_LONG(pY)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 6, 0, &selfX_param, &selfY_param, &selfWidth_param, &selfHeight_param, &pX_param, &pY_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, selfX);
	ZVAL_LONG(&_1, selfY);
	ZVAL_LONG(&_2, selfWidth);
	ZVAL_LONG(&_3, selfHeight);
	ZVAL_LONG(&_4, pX);
	ZVAL_LONG(&_5, pY);
	phpqt_qrect_move_bottom_right(&result, &_0, &_1, &_2, &_3, &_4, &_5);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QRect_QRect, moveTopRight)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *selfX_param = NULL, *selfY_param = NULL, *selfWidth_param = NULL, *selfHeight_param = NULL, *pX_param = NULL, *pY_param = NULL, result, _0, _1, _2, _3, _4, _5;
	zend_long selfX, selfY, selfWidth, selfHeight, pX, pY;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_5);
	ZEND_PARSE_PARAMETERS_START(6, 6)
		Z_PARAM_LONG(selfX)
		Z_PARAM_LONG(selfY)
		Z_PARAM_LONG(selfWidth)
		Z_PARAM_LONG(selfHeight)
		Z_PARAM_LONG(pX)
		Z_PARAM_LONG(pY)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 6, 0, &selfX_param, &selfY_param, &selfWidth_param, &selfHeight_param, &pX_param, &pY_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, selfX);
	ZVAL_LONG(&_1, selfY);
	ZVAL_LONG(&_2, selfWidth);
	ZVAL_LONG(&_3, selfHeight);
	ZVAL_LONG(&_4, pX);
	ZVAL_LONG(&_5, pY);
	phpqt_qrect_move_top_right(&result, &_0, &_1, &_2, &_3, &_4, &_5);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QRect_QRect, moveBottomLeft)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *selfX_param = NULL, *selfY_param = NULL, *selfWidth_param = NULL, *selfHeight_param = NULL, *pX_param = NULL, *pY_param = NULL, result, _0, _1, _2, _3, _4, _5;
	zend_long selfX, selfY, selfWidth, selfHeight, pX, pY;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_5);
	ZEND_PARSE_PARAMETERS_START(6, 6)
		Z_PARAM_LONG(selfX)
		Z_PARAM_LONG(selfY)
		Z_PARAM_LONG(selfWidth)
		Z_PARAM_LONG(selfHeight)
		Z_PARAM_LONG(pX)
		Z_PARAM_LONG(pY)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 6, 0, &selfX_param, &selfY_param, &selfWidth_param, &selfHeight_param, &pX_param, &pY_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, selfX);
	ZVAL_LONG(&_1, selfY);
	ZVAL_LONG(&_2, selfWidth);
	ZVAL_LONG(&_3, selfHeight);
	ZVAL_LONG(&_4, pX);
	ZVAL_LONG(&_5, pY);
	phpqt_qrect_move_bottom_left(&result, &_0, &_1, &_2, &_3, &_4, &_5);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QRect_QRect, moveCenter)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *selfX_param = NULL, *selfY_param = NULL, *selfWidth_param = NULL, *selfHeight_param = NULL, *pX_param = NULL, *pY_param = NULL, result, _0, _1, _2, _3, _4, _5;
	zend_long selfX, selfY, selfWidth, selfHeight, pX, pY;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_5);
	ZEND_PARSE_PARAMETERS_START(6, 6)
		Z_PARAM_LONG(selfX)
		Z_PARAM_LONG(selfY)
		Z_PARAM_LONG(selfWidth)
		Z_PARAM_LONG(selfHeight)
		Z_PARAM_LONG(pX)
		Z_PARAM_LONG(pY)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 6, 0, &selfX_param, &selfY_param, &selfWidth_param, &selfHeight_param, &pX_param, &pY_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, selfX);
	ZVAL_LONG(&_1, selfY);
	ZVAL_LONG(&_2, selfWidth);
	ZVAL_LONG(&_3, selfHeight);
	ZVAL_LONG(&_4, pX);
	ZVAL_LONG(&_5, pY);
	phpqt_qrect_move_center(&result, &_0, &_1, &_2, &_3, &_4, &_5);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QRect_QRect, translate)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *selfX_param = NULL, *selfY_param = NULL, *selfWidth_param = NULL, *selfHeight_param = NULL, *dx_param = NULL, *dy_param = NULL, result, _0, _1, _2, _3, _4, _5;
	zend_long selfX, selfY, selfWidth, selfHeight, dx, dy;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_5);
	ZEND_PARSE_PARAMETERS_START(6, 6)
		Z_PARAM_LONG(selfX)
		Z_PARAM_LONG(selfY)
		Z_PARAM_LONG(selfWidth)
		Z_PARAM_LONG(selfHeight)
		Z_PARAM_LONG(dx)
		Z_PARAM_LONG(dy)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 6, 0, &selfX_param, &selfY_param, &selfWidth_param, &selfHeight_param, &dx_param, &dy_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, selfX);
	ZVAL_LONG(&_1, selfY);
	ZVAL_LONG(&_2, selfWidth);
	ZVAL_LONG(&_3, selfHeight);
	ZVAL_LONG(&_4, dx);
	ZVAL_LONG(&_5, dy);
	phpqt_qrect_translate(&result, &_0, &_1, &_2, &_3, &_4, &_5);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QRect_QRect, translateQPoint)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *selfX_param = NULL, *selfY_param = NULL, *selfWidth_param = NULL, *selfHeight_param = NULL, *pX_param = NULL, *pY_param = NULL, result, _0, _1, _2, _3, _4, _5;
	zend_long selfX, selfY, selfWidth, selfHeight, pX, pY;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_5);
	ZEND_PARSE_PARAMETERS_START(6, 6)
		Z_PARAM_LONG(selfX)
		Z_PARAM_LONG(selfY)
		Z_PARAM_LONG(selfWidth)
		Z_PARAM_LONG(selfHeight)
		Z_PARAM_LONG(pX)
		Z_PARAM_LONG(pY)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 6, 0, &selfX_param, &selfY_param, &selfWidth_param, &selfHeight_param, &pX_param, &pY_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, selfX);
	ZVAL_LONG(&_1, selfY);
	ZVAL_LONG(&_2, selfWidth);
	ZVAL_LONG(&_3, selfHeight);
	ZVAL_LONG(&_4, pX);
	ZVAL_LONG(&_5, pY);
	phpqt_qrect_translate_q_point(&result, &_0, &_1, &_2, &_3, &_4, &_5);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QRect_QRect, translated)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *selfX_param = NULL, *selfY_param = NULL, *selfWidth_param = NULL, *selfHeight_param = NULL, *dx_param = NULL, *dy_param = NULL, result, _0, _1, _2, _3, _4, _5;
	zend_long selfX, selfY, selfWidth, selfHeight, dx, dy;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_5);
	ZEND_PARSE_PARAMETERS_START(6, 6)
		Z_PARAM_LONG(selfX)
		Z_PARAM_LONG(selfY)
		Z_PARAM_LONG(selfWidth)
		Z_PARAM_LONG(selfHeight)
		Z_PARAM_LONG(dx)
		Z_PARAM_LONG(dy)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 6, 0, &selfX_param, &selfY_param, &selfWidth_param, &selfHeight_param, &dx_param, &dy_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, selfX);
	ZVAL_LONG(&_1, selfY);
	ZVAL_LONG(&_2, selfWidth);
	ZVAL_LONG(&_3, selfHeight);
	ZVAL_LONG(&_4, dx);
	ZVAL_LONG(&_5, dy);
	phpqt_qrect_translated(&result, &_0, &_1, &_2, &_3, &_4, &_5);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QRect_QRect, translatedQPoint)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *selfX_param = NULL, *selfY_param = NULL, *selfWidth_param = NULL, *selfHeight_param = NULL, *pX_param = NULL, *pY_param = NULL, result, _0, _1, _2, _3, _4, _5;
	zend_long selfX, selfY, selfWidth, selfHeight, pX, pY;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_5);
	ZEND_PARSE_PARAMETERS_START(6, 6)
		Z_PARAM_LONG(selfX)
		Z_PARAM_LONG(selfY)
		Z_PARAM_LONG(selfWidth)
		Z_PARAM_LONG(selfHeight)
		Z_PARAM_LONG(pX)
		Z_PARAM_LONG(pY)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 6, 0, &selfX_param, &selfY_param, &selfWidth_param, &selfHeight_param, &pX_param, &pY_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, selfX);
	ZVAL_LONG(&_1, selfY);
	ZVAL_LONG(&_2, selfWidth);
	ZVAL_LONG(&_3, selfHeight);
	ZVAL_LONG(&_4, pX);
	ZVAL_LONG(&_5, pY);
	phpqt_qrect_translated_q_point(&result, &_0, &_1, &_2, &_3, &_4, &_5);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QRect_QRect, transposed)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *selfX_param = NULL, *selfY_param = NULL, *selfWidth_param = NULL, *selfHeight_param = NULL, result, _0, _1, _2, _3;
	zend_long selfX, selfY, selfWidth, selfHeight;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(selfX)
		Z_PARAM_LONG(selfY)
		Z_PARAM_LONG(selfWidth)
		Z_PARAM_LONG(selfHeight)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 4, 0, &selfX_param, &selfY_param, &selfWidth_param, &selfHeight_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, selfX);
	ZVAL_LONG(&_1, selfY);
	ZVAL_LONG(&_2, selfWidth);
	ZVAL_LONG(&_3, selfHeight);
	phpqt_qrect_transposed(&result, &_0, &_1, &_2, &_3);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QRect_QRect, moveTo)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *selfX_param = NULL, *selfY_param = NULL, *selfWidth_param = NULL, *selfHeight_param = NULL, *x_param = NULL, *t_param = NULL, result, _0, _1, _2, _3, _4, _5;
	zend_long selfX, selfY, selfWidth, selfHeight, x, t;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_5);
	ZEND_PARSE_PARAMETERS_START(6, 6)
		Z_PARAM_LONG(selfX)
		Z_PARAM_LONG(selfY)
		Z_PARAM_LONG(selfWidth)
		Z_PARAM_LONG(selfHeight)
		Z_PARAM_LONG(x)
		Z_PARAM_LONG(t)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 6, 0, &selfX_param, &selfY_param, &selfWidth_param, &selfHeight_param, &x_param, &t_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, selfX);
	ZVAL_LONG(&_1, selfY);
	ZVAL_LONG(&_2, selfWidth);
	ZVAL_LONG(&_3, selfHeight);
	ZVAL_LONG(&_4, x);
	ZVAL_LONG(&_5, t);
	phpqt_qrect_move_to(&result, &_0, &_1, &_2, &_3, &_4, &_5);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QRect_QRect, moveToQPoint)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *selfX_param = NULL, *selfY_param = NULL, *selfWidth_param = NULL, *selfHeight_param = NULL, *pX_param = NULL, *pY_param = NULL, result, _0, _1, _2, _3, _4, _5;
	zend_long selfX, selfY, selfWidth, selfHeight, pX, pY;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_5);
	ZEND_PARSE_PARAMETERS_START(6, 6)
		Z_PARAM_LONG(selfX)
		Z_PARAM_LONG(selfY)
		Z_PARAM_LONG(selfWidth)
		Z_PARAM_LONG(selfHeight)
		Z_PARAM_LONG(pX)
		Z_PARAM_LONG(pY)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 6, 0, &selfX_param, &selfY_param, &selfWidth_param, &selfHeight_param, &pX_param, &pY_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, selfX);
	ZVAL_LONG(&_1, selfY);
	ZVAL_LONG(&_2, selfWidth);
	ZVAL_LONG(&_3, selfHeight);
	ZVAL_LONG(&_4, pX);
	ZVAL_LONG(&_5, pY);
	phpqt_qrect_move_to_q_point(&result, &_0, &_1, &_2, &_3, &_4, &_5);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QRect_QRect, setRect)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *selfX_param = NULL, *selfY_param = NULL, *selfWidth_param = NULL, *selfHeight_param = NULL, *x_param = NULL, *y_param = NULL, *w_param = NULL, *h_param = NULL, result, _0, _1, _2, _3, _4, _5, _6, _7;
	zend_long selfX, selfY, selfWidth, selfHeight, x, y, w, h;

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
		Z_PARAM_LONG(selfX)
		Z_PARAM_LONG(selfY)
		Z_PARAM_LONG(selfWidth)
		Z_PARAM_LONG(selfHeight)
		Z_PARAM_LONG(x)
		Z_PARAM_LONG(y)
		Z_PARAM_LONG(w)
		Z_PARAM_LONG(h)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 8, 0, &selfX_param, &selfY_param, &selfWidth_param, &selfHeight_param, &x_param, &y_param, &w_param, &h_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, selfX);
	ZVAL_LONG(&_1, selfY);
	ZVAL_LONG(&_2, selfWidth);
	ZVAL_LONG(&_3, selfHeight);
	ZVAL_LONG(&_4, x);
	ZVAL_LONG(&_5, y);
	ZVAL_LONG(&_6, w);
	ZVAL_LONG(&_7, h);
	phpqt_qrect_set_rect(&result, &_0, &_1, &_2, &_3, &_4, &_5, &_6, &_7);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QRect_QRect, getRect)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *selfX_param = NULL, *selfY_param = NULL, *selfWidth_param = NULL, *selfHeight_param = NULL, *x = NULL, x_sub, *y = NULL, y_sub, *w = NULL, w_sub, *h = NULL, h_sub, result, _0, _1, _2, _3;
	zend_long selfX, selfY, selfWidth, selfHeight;

	ZVAL_UNDEF(&x_sub);
	ZVAL_UNDEF(&y_sub);
	ZVAL_UNDEF(&w_sub);
	ZVAL_UNDEF(&h_sub);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(8, 8)
		Z_PARAM_LONG(selfX)
		Z_PARAM_LONG(selfY)
		Z_PARAM_LONG(selfWidth)
		Z_PARAM_LONG(selfHeight)
		Z_PARAM_ZVAL(x)
		Z_PARAM_ZVAL(y)
		Z_PARAM_ZVAL(w)
		Z_PARAM_ZVAL(h)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 8, 0, &selfX_param, &selfY_param, &selfWidth_param, &selfHeight_param, &x, &y, &w, &h);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, selfX);
	ZVAL_LONG(&_1, selfY);
	ZVAL_LONG(&_2, selfWidth);
	ZVAL_LONG(&_3, selfHeight);
	phpqt_qrect_get_rect(&result, &_0, &_1, &_2, &_3, x, y, w, h);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QRect_QRect, setCoords)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *selfX_param = NULL, *selfY_param = NULL, *selfWidth_param = NULL, *selfHeight_param = NULL, *x1_param = NULL, *y1_param = NULL, *x2_param = NULL, *y2_param = NULL, result, _0, _1, _2, _3, _4, _5, _6, _7;
	zend_long selfX, selfY, selfWidth, selfHeight, x1, y1, x2, y2;

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
		Z_PARAM_LONG(selfX)
		Z_PARAM_LONG(selfY)
		Z_PARAM_LONG(selfWidth)
		Z_PARAM_LONG(selfHeight)
		Z_PARAM_LONG(x1)
		Z_PARAM_LONG(y1)
		Z_PARAM_LONG(x2)
		Z_PARAM_LONG(y2)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 8, 0, &selfX_param, &selfY_param, &selfWidth_param, &selfHeight_param, &x1_param, &y1_param, &x2_param, &y2_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, selfX);
	ZVAL_LONG(&_1, selfY);
	ZVAL_LONG(&_2, selfWidth);
	ZVAL_LONG(&_3, selfHeight);
	ZVAL_LONG(&_4, x1);
	ZVAL_LONG(&_5, y1);
	ZVAL_LONG(&_6, x2);
	ZVAL_LONG(&_7, y2);
	phpqt_qrect_set_coords(&result, &_0, &_1, &_2, &_3, &_4, &_5, &_6, &_7);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QRect_QRect, getCoords)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *selfX_param = NULL, *selfY_param = NULL, *selfWidth_param = NULL, *selfHeight_param = NULL, *x1 = NULL, x1_sub, *y1 = NULL, y1_sub, *x2 = NULL, x2_sub, *y2 = NULL, y2_sub, result, _0, _1, _2, _3;
	zend_long selfX, selfY, selfWidth, selfHeight;

	ZVAL_UNDEF(&x1_sub);
	ZVAL_UNDEF(&y1_sub);
	ZVAL_UNDEF(&x2_sub);
	ZVAL_UNDEF(&y2_sub);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(8, 8)
		Z_PARAM_LONG(selfX)
		Z_PARAM_LONG(selfY)
		Z_PARAM_LONG(selfWidth)
		Z_PARAM_LONG(selfHeight)
		Z_PARAM_ZVAL(x1)
		Z_PARAM_ZVAL(y1)
		Z_PARAM_ZVAL(x2)
		Z_PARAM_ZVAL(y2)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 8, 0, &selfX_param, &selfY_param, &selfWidth_param, &selfHeight_param, &x1, &y1, &x2, &y2);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, selfX);
	ZVAL_LONG(&_1, selfY);
	ZVAL_LONG(&_2, selfWidth);
	ZVAL_LONG(&_3, selfHeight);
	phpqt_qrect_get_coords(&result, &_0, &_1, &_2, &_3, x1, y1, x2, y2);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QRect_QRect, adjust)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *selfX_param = NULL, *selfY_param = NULL, *selfWidth_param = NULL, *selfHeight_param = NULL, *x1_param = NULL, *y1_param = NULL, *x2_param = NULL, *y2_param = NULL, result, _0, _1, _2, _3, _4, _5, _6, _7;
	zend_long selfX, selfY, selfWidth, selfHeight, x1, y1, x2, y2;

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
		Z_PARAM_LONG(selfX)
		Z_PARAM_LONG(selfY)
		Z_PARAM_LONG(selfWidth)
		Z_PARAM_LONG(selfHeight)
		Z_PARAM_LONG(x1)
		Z_PARAM_LONG(y1)
		Z_PARAM_LONG(x2)
		Z_PARAM_LONG(y2)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 8, 0, &selfX_param, &selfY_param, &selfWidth_param, &selfHeight_param, &x1_param, &y1_param, &x2_param, &y2_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, selfX);
	ZVAL_LONG(&_1, selfY);
	ZVAL_LONG(&_2, selfWidth);
	ZVAL_LONG(&_3, selfHeight);
	ZVAL_LONG(&_4, x1);
	ZVAL_LONG(&_5, y1);
	ZVAL_LONG(&_6, x2);
	ZVAL_LONG(&_7, y2);
	phpqt_qrect_adjust(&result, &_0, &_1, &_2, &_3, &_4, &_5, &_6, &_7);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QRect_QRect, adjusted)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *selfX_param = NULL, *selfY_param = NULL, *selfWidth_param = NULL, *selfHeight_param = NULL, *x1_param = NULL, *y1_param = NULL, *x2_param = NULL, *y2_param = NULL, result, _0, _1, _2, _3, _4, _5, _6, _7;
	zend_long selfX, selfY, selfWidth, selfHeight, x1, y1, x2, y2;

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
		Z_PARAM_LONG(selfX)
		Z_PARAM_LONG(selfY)
		Z_PARAM_LONG(selfWidth)
		Z_PARAM_LONG(selfHeight)
		Z_PARAM_LONG(x1)
		Z_PARAM_LONG(y1)
		Z_PARAM_LONG(x2)
		Z_PARAM_LONG(y2)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 8, 0, &selfX_param, &selfY_param, &selfWidth_param, &selfHeight_param, &x1_param, &y1_param, &x2_param, &y2_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, selfX);
	ZVAL_LONG(&_1, selfY);
	ZVAL_LONG(&_2, selfWidth);
	ZVAL_LONG(&_3, selfHeight);
	ZVAL_LONG(&_4, x1);
	ZVAL_LONG(&_5, y1);
	ZVAL_LONG(&_6, x2);
	ZVAL_LONG(&_7, y2);
	phpqt_qrect_adjusted(&result, &_0, &_1, &_2, &_3, &_4, &_5, &_6, &_7);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QRect_QRect, size)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *selfX_param = NULL, *selfY_param = NULL, *selfWidth_param = NULL, *selfHeight_param = NULL, result, _0, _1, _2, _3;
	zend_long selfX, selfY, selfWidth, selfHeight;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(selfX)
		Z_PARAM_LONG(selfY)
		Z_PARAM_LONG(selfWidth)
		Z_PARAM_LONG(selfHeight)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 4, 0, &selfX_param, &selfY_param, &selfWidth_param, &selfHeight_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, selfX);
	ZVAL_LONG(&_1, selfY);
	ZVAL_LONG(&_2, selfWidth);
	ZVAL_LONG(&_3, selfHeight);
	phpqt_qrect_size(&result, &_0, &_1, &_2, &_3);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QRect_QRect, width)
{
	zval *selfX_param = NULL, *selfY_param = NULL, *selfWidth_param = NULL, *selfHeight_param = NULL, _0, _1, _2, _3;
	zend_long selfX, selfY, selfWidth, selfHeight;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(selfX)
		Z_PARAM_LONG(selfY)
		Z_PARAM_LONG(selfWidth)
		Z_PARAM_LONG(selfHeight)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 0, &selfX_param, &selfY_param, &selfWidth_param, &selfHeight_param);
	ZVAL_LONG(&_0, selfX);
	ZVAL_LONG(&_1, selfY);
	ZVAL_LONG(&_2, selfWidth);
	ZVAL_LONG(&_3, selfHeight);
	RETURN_LONG(phpqt_qrect_width(&_0, &_1, &_2, &_3));
}

PHP_METHOD(Qt_Core_QRect_QRect, height)
{
	zval *selfX_param = NULL, *selfY_param = NULL, *selfWidth_param = NULL, *selfHeight_param = NULL, _0, _1, _2, _3;
	zend_long selfX, selfY, selfWidth, selfHeight;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(selfX)
		Z_PARAM_LONG(selfY)
		Z_PARAM_LONG(selfWidth)
		Z_PARAM_LONG(selfHeight)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 0, &selfX_param, &selfY_param, &selfWidth_param, &selfHeight_param);
	ZVAL_LONG(&_0, selfX);
	ZVAL_LONG(&_1, selfY);
	ZVAL_LONG(&_2, selfWidth);
	ZVAL_LONG(&_3, selfHeight);
	RETURN_LONG(phpqt_qrect_height(&_0, &_1, &_2, &_3));
}

PHP_METHOD(Qt_Core_QRect_QRect, setWidth)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *selfX_param = NULL, *selfY_param = NULL, *selfWidth_param = NULL, *selfHeight_param = NULL, *w_param = NULL, result, _0, _1, _2, _3, _4;
	zend_long selfX, selfY, selfWidth, selfHeight, w;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZEND_PARSE_PARAMETERS_START(5, 5)
		Z_PARAM_LONG(selfX)
		Z_PARAM_LONG(selfY)
		Z_PARAM_LONG(selfWidth)
		Z_PARAM_LONG(selfHeight)
		Z_PARAM_LONG(w)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 5, 0, &selfX_param, &selfY_param, &selfWidth_param, &selfHeight_param, &w_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, selfX);
	ZVAL_LONG(&_1, selfY);
	ZVAL_LONG(&_2, selfWidth);
	ZVAL_LONG(&_3, selfHeight);
	ZVAL_LONG(&_4, w);
	phpqt_qrect_set_width(&result, &_0, &_1, &_2, &_3, &_4);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QRect_QRect, setHeight)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *selfX_param = NULL, *selfY_param = NULL, *selfWidth_param = NULL, *selfHeight_param = NULL, *h_param = NULL, result, _0, _1, _2, _3, _4;
	zend_long selfX, selfY, selfWidth, selfHeight, h;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZEND_PARSE_PARAMETERS_START(5, 5)
		Z_PARAM_LONG(selfX)
		Z_PARAM_LONG(selfY)
		Z_PARAM_LONG(selfWidth)
		Z_PARAM_LONG(selfHeight)
		Z_PARAM_LONG(h)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 5, 0, &selfX_param, &selfY_param, &selfWidth_param, &selfHeight_param, &h_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, selfX);
	ZVAL_LONG(&_1, selfY);
	ZVAL_LONG(&_2, selfWidth);
	ZVAL_LONG(&_3, selfHeight);
	ZVAL_LONG(&_4, h);
	phpqt_qrect_set_height(&result, &_0, &_1, &_2, &_3, &_4);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QRect_QRect, setSize)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *selfX_param = NULL, *selfY_param = NULL, *selfWidth_param = NULL, *selfHeight_param = NULL, *sWidth_param = NULL, *sHeight_param = NULL, result, _0, _1, _2, _3, _4, _5;
	zend_long selfX, selfY, selfWidth, selfHeight, sWidth, sHeight;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_5);
	ZEND_PARSE_PARAMETERS_START(6, 6)
		Z_PARAM_LONG(selfX)
		Z_PARAM_LONG(selfY)
		Z_PARAM_LONG(selfWidth)
		Z_PARAM_LONG(selfHeight)
		Z_PARAM_LONG(sWidth)
		Z_PARAM_LONG(sHeight)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 6, 0, &selfX_param, &selfY_param, &selfWidth_param, &selfHeight_param, &sWidth_param, &sHeight_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, selfX);
	ZVAL_LONG(&_1, selfY);
	ZVAL_LONG(&_2, selfWidth);
	ZVAL_LONG(&_3, selfHeight);
	ZVAL_LONG(&_4, sWidth);
	ZVAL_LONG(&_5, sHeight);
	phpqt_qrect_set_size(&result, &_0, &_1, &_2, &_3, &_4, &_5);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QRect_QRect, contains)
{
	zend_bool proper;
	zval *selfX_param = NULL, *selfY_param = NULL, *selfWidth_param = NULL, *selfHeight_param = NULL, *rX_param = NULL, *rY_param = NULL, *rWidth_param = NULL, *rHeight_param = NULL, *proper_param = NULL, _0, _1, _2, _3, _4, _5, _6, _7, _8;
	zend_long selfX, selfY, selfWidth, selfHeight, rX, rY, rWidth, rHeight, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_5);
	ZVAL_UNDEF(&_6);
	ZVAL_UNDEF(&_7);
	ZVAL_UNDEF(&_8);
	ZEND_PARSE_PARAMETERS_START(8, 9)
		Z_PARAM_LONG(selfX)
		Z_PARAM_LONG(selfY)
		Z_PARAM_LONG(selfWidth)
		Z_PARAM_LONG(selfHeight)
		Z_PARAM_LONG(rX)
		Z_PARAM_LONG(rY)
		Z_PARAM_LONG(rWidth)
		Z_PARAM_LONG(rHeight)
		Z_PARAM_OPTIONAL
		Z_PARAM_BOOL(proper)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(8, 1, &selfX_param, &selfY_param, &selfWidth_param, &selfHeight_param, &rX_param, &rY_param, &rWidth_param, &rHeight_param, &proper_param);
	if (!proper_param) {
		proper = 0;
	} else {
		}
	ZVAL_LONG(&_0, selfX);
	ZVAL_LONG(&_1, selfY);
	ZVAL_LONG(&_2, selfWidth);
	ZVAL_LONG(&_3, selfHeight);
	ZVAL_LONG(&_4, rX);
	ZVAL_LONG(&_5, rY);
	ZVAL_LONG(&_6, rWidth);
	ZVAL_LONG(&_7, rHeight);
	ZVAL_BOOL(&_8, (proper ? 1 : 0));
	r = phpqt_qrect_contains(&_0, &_1, &_2, &_3, &_4, &_5, &_6, &_7, &_8);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QRect_QRect, containsQPointBool)
{
	zend_bool proper;
	zval *selfX_param = NULL, *selfY_param = NULL, *selfWidth_param = NULL, *selfHeight_param = NULL, *pX_param = NULL, *pY_param = NULL, *proper_param = NULL, _0, _1, _2, _3, _4, _5, _6;
	zend_long selfX, selfY, selfWidth, selfHeight, pX, pY, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_5);
	ZVAL_UNDEF(&_6);
	ZEND_PARSE_PARAMETERS_START(6, 7)
		Z_PARAM_LONG(selfX)
		Z_PARAM_LONG(selfY)
		Z_PARAM_LONG(selfWidth)
		Z_PARAM_LONG(selfHeight)
		Z_PARAM_LONG(pX)
		Z_PARAM_LONG(pY)
		Z_PARAM_OPTIONAL
		Z_PARAM_BOOL(proper)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(6, 1, &selfX_param, &selfY_param, &selfWidth_param, &selfHeight_param, &pX_param, &pY_param, &proper_param);
	if (!proper_param) {
		proper = 0;
	} else {
		}
	ZVAL_LONG(&_0, selfX);
	ZVAL_LONG(&_1, selfY);
	ZVAL_LONG(&_2, selfWidth);
	ZVAL_LONG(&_3, selfHeight);
	ZVAL_LONG(&_4, pX);
	ZVAL_LONG(&_5, pY);
	ZVAL_BOOL(&_6, (proper ? 1 : 0));
	r = phpqt_qrect_contains_q_point_bool(&_0, &_1, &_2, &_3, &_4, &_5, &_6);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QRect_QRect, containsIntInt)
{
	zval *selfX_param = NULL, *selfY_param = NULL, *selfWidth_param = NULL, *selfHeight_param = NULL, *x_param = NULL, *y_param = NULL, _0, _1, _2, _3, _4, _5;
	zend_long selfX, selfY, selfWidth, selfHeight, x, y, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_5);
	ZEND_PARSE_PARAMETERS_START(6, 6)
		Z_PARAM_LONG(selfX)
		Z_PARAM_LONG(selfY)
		Z_PARAM_LONG(selfWidth)
		Z_PARAM_LONG(selfHeight)
		Z_PARAM_LONG(x)
		Z_PARAM_LONG(y)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(6, 0, &selfX_param, &selfY_param, &selfWidth_param, &selfHeight_param, &x_param, &y_param);
	ZVAL_LONG(&_0, selfX);
	ZVAL_LONG(&_1, selfY);
	ZVAL_LONG(&_2, selfWidth);
	ZVAL_LONG(&_3, selfHeight);
	ZVAL_LONG(&_4, x);
	ZVAL_LONG(&_5, y);
	r = phpqt_qrect_contains_int_int(&_0, &_1, &_2, &_3, &_4, &_5);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QRect_QRect, containsIntIntBool)
{
	zend_bool proper;
	zval *selfX_param = NULL, *selfY_param = NULL, *selfWidth_param = NULL, *selfHeight_param = NULL, *x_param = NULL, *y_param = NULL, *proper_param = NULL, _0, _1, _2, _3, _4, _5, _6;
	zend_long selfX, selfY, selfWidth, selfHeight, x, y, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_5);
	ZVAL_UNDEF(&_6);
	ZEND_PARSE_PARAMETERS_START(7, 7)
		Z_PARAM_LONG(selfX)
		Z_PARAM_LONG(selfY)
		Z_PARAM_LONG(selfWidth)
		Z_PARAM_LONG(selfHeight)
		Z_PARAM_LONG(x)
		Z_PARAM_LONG(y)
		Z_PARAM_BOOL(proper)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(7, 0, &selfX_param, &selfY_param, &selfWidth_param, &selfHeight_param, &x_param, &y_param, &proper_param);
	ZVAL_LONG(&_0, selfX);
	ZVAL_LONG(&_1, selfY);
	ZVAL_LONG(&_2, selfWidth);
	ZVAL_LONG(&_3, selfHeight);
	ZVAL_LONG(&_4, x);
	ZVAL_LONG(&_5, y);
	ZVAL_BOOL(&_6, (proper ? 1 : 0));
	r = phpqt_qrect_contains_int_int_bool(&_0, &_1, &_2, &_3, &_4, &_5, &_6);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QRect_QRect, united)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *selfX_param = NULL, *selfY_param = NULL, *selfWidth_param = NULL, *selfHeight_param = NULL, *otherX_param = NULL, *otherY_param = NULL, *otherWidth_param = NULL, *otherHeight_param = NULL, result, _0, _1, _2, _3, _4, _5, _6, _7;
	zend_long selfX, selfY, selfWidth, selfHeight, otherX, otherY, otherWidth, otherHeight;

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
		Z_PARAM_LONG(selfX)
		Z_PARAM_LONG(selfY)
		Z_PARAM_LONG(selfWidth)
		Z_PARAM_LONG(selfHeight)
		Z_PARAM_LONG(otherX)
		Z_PARAM_LONG(otherY)
		Z_PARAM_LONG(otherWidth)
		Z_PARAM_LONG(otherHeight)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 8, 0, &selfX_param, &selfY_param, &selfWidth_param, &selfHeight_param, &otherX_param, &otherY_param, &otherWidth_param, &otherHeight_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, selfX);
	ZVAL_LONG(&_1, selfY);
	ZVAL_LONG(&_2, selfWidth);
	ZVAL_LONG(&_3, selfHeight);
	ZVAL_LONG(&_4, otherX);
	ZVAL_LONG(&_5, otherY);
	ZVAL_LONG(&_6, otherWidth);
	ZVAL_LONG(&_7, otherHeight);
	phpqt_qrect_united(&result, &_0, &_1, &_2, &_3, &_4, &_5, &_6, &_7);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QRect_QRect, intersected)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *selfX_param = NULL, *selfY_param = NULL, *selfWidth_param = NULL, *selfHeight_param = NULL, *otherX_param = NULL, *otherY_param = NULL, *otherWidth_param = NULL, *otherHeight_param = NULL, result, _0, _1, _2, _3, _4, _5, _6, _7;
	zend_long selfX, selfY, selfWidth, selfHeight, otherX, otherY, otherWidth, otherHeight;

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
		Z_PARAM_LONG(selfX)
		Z_PARAM_LONG(selfY)
		Z_PARAM_LONG(selfWidth)
		Z_PARAM_LONG(selfHeight)
		Z_PARAM_LONG(otherX)
		Z_PARAM_LONG(otherY)
		Z_PARAM_LONG(otherWidth)
		Z_PARAM_LONG(otherHeight)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 8, 0, &selfX_param, &selfY_param, &selfWidth_param, &selfHeight_param, &otherX_param, &otherY_param, &otherWidth_param, &otherHeight_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, selfX);
	ZVAL_LONG(&_1, selfY);
	ZVAL_LONG(&_2, selfWidth);
	ZVAL_LONG(&_3, selfHeight);
	ZVAL_LONG(&_4, otherX);
	ZVAL_LONG(&_5, otherY);
	ZVAL_LONG(&_6, otherWidth);
	ZVAL_LONG(&_7, otherHeight);
	phpqt_qrect_intersected(&result, &_0, &_1, &_2, &_3, &_4, &_5, &_6, &_7);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QRect_QRect, intersects)
{
	zval *selfX_param = NULL, *selfY_param = NULL, *selfWidth_param = NULL, *selfHeight_param = NULL, *rX_param = NULL, *rY_param = NULL, *rWidth_param = NULL, *rHeight_param = NULL, _0, _1, _2, _3, _4, _5, _6, _7;
	zend_long selfX, selfY, selfWidth, selfHeight, rX, rY, rWidth, rHeight, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_5);
	ZVAL_UNDEF(&_6);
	ZVAL_UNDEF(&_7);
	ZEND_PARSE_PARAMETERS_START(8, 8)
		Z_PARAM_LONG(selfX)
		Z_PARAM_LONG(selfY)
		Z_PARAM_LONG(selfWidth)
		Z_PARAM_LONG(selfHeight)
		Z_PARAM_LONG(rX)
		Z_PARAM_LONG(rY)
		Z_PARAM_LONG(rWidth)
		Z_PARAM_LONG(rHeight)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(8, 0, &selfX_param, &selfY_param, &selfWidth_param, &selfHeight_param, &rX_param, &rY_param, &rWidth_param, &rHeight_param);
	ZVAL_LONG(&_0, selfX);
	ZVAL_LONG(&_1, selfY);
	ZVAL_LONG(&_2, selfWidth);
	ZVAL_LONG(&_3, selfHeight);
	ZVAL_LONG(&_4, rX);
	ZVAL_LONG(&_5, rY);
	ZVAL_LONG(&_6, rWidth);
	ZVAL_LONG(&_7, rHeight);
	r = phpqt_qrect_intersects(&_0, &_1, &_2, &_3, &_4, &_5, &_6, &_7);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QRect_QRect, marginsAdded)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *selfX_param = NULL, *selfY_param = NULL, *selfWidth_param = NULL, *selfHeight_param = NULL, *marginsLeft_param = NULL, *marginsTop_param = NULL, *marginsRight_param = NULL, *marginsBottom_param = NULL, result, _0, _1, _2, _3, _4, _5, _6, _7;
	zend_long selfX, selfY, selfWidth, selfHeight, marginsLeft, marginsTop, marginsRight, marginsBottom;

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
		Z_PARAM_LONG(selfX)
		Z_PARAM_LONG(selfY)
		Z_PARAM_LONG(selfWidth)
		Z_PARAM_LONG(selfHeight)
		Z_PARAM_LONG(marginsLeft)
		Z_PARAM_LONG(marginsTop)
		Z_PARAM_LONG(marginsRight)
		Z_PARAM_LONG(marginsBottom)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 8, 0, &selfX_param, &selfY_param, &selfWidth_param, &selfHeight_param, &marginsLeft_param, &marginsTop_param, &marginsRight_param, &marginsBottom_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, selfX);
	ZVAL_LONG(&_1, selfY);
	ZVAL_LONG(&_2, selfWidth);
	ZVAL_LONG(&_3, selfHeight);
	ZVAL_LONG(&_4, marginsLeft);
	ZVAL_LONG(&_5, marginsTop);
	ZVAL_LONG(&_6, marginsRight);
	ZVAL_LONG(&_7, marginsBottom);
	phpqt_qrect_margins_added(&result, &_0, &_1, &_2, &_3, &_4, &_5, &_6, &_7);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QRect_QRect, marginsRemoved)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *selfX_param = NULL, *selfY_param = NULL, *selfWidth_param = NULL, *selfHeight_param = NULL, *marginsLeft_param = NULL, *marginsTop_param = NULL, *marginsRight_param = NULL, *marginsBottom_param = NULL, result, _0, _1, _2, _3, _4, _5, _6, _7;
	zend_long selfX, selfY, selfWidth, selfHeight, marginsLeft, marginsTop, marginsRight, marginsBottom;

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
		Z_PARAM_LONG(selfX)
		Z_PARAM_LONG(selfY)
		Z_PARAM_LONG(selfWidth)
		Z_PARAM_LONG(selfHeight)
		Z_PARAM_LONG(marginsLeft)
		Z_PARAM_LONG(marginsTop)
		Z_PARAM_LONG(marginsRight)
		Z_PARAM_LONG(marginsBottom)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 8, 0, &selfX_param, &selfY_param, &selfWidth_param, &selfHeight_param, &marginsLeft_param, &marginsTop_param, &marginsRight_param, &marginsBottom_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, selfX);
	ZVAL_LONG(&_1, selfY);
	ZVAL_LONG(&_2, selfWidth);
	ZVAL_LONG(&_3, selfHeight);
	ZVAL_LONG(&_4, marginsLeft);
	ZVAL_LONG(&_5, marginsTop);
	ZVAL_LONG(&_6, marginsRight);
	ZVAL_LONG(&_7, marginsBottom);
	phpqt_qrect_margins_removed(&result, &_0, &_1, &_2, &_3, &_4, &_5, &_6, &_7);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QRect_QRect, span)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *p1X_param = NULL, *p1Y_param = NULL, *p2X_param = NULL, *p2Y_param = NULL, result, _0, _1, _2, _3;
	zend_long p1X, p1Y, p2X, p2Y;

	ZVAL_UNDEF(&result);
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
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 4, 0, &p1X_param, &p1Y_param, &p2X_param, &p2Y_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, p1X);
	ZVAL_LONG(&_1, p1Y);
	ZVAL_LONG(&_2, p2X);
	ZVAL_LONG(&_3, p2Y);
	phpqt_qrect_span(&result, &_0, &_1, &_2, &_3);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QRect_QRect, toRectF)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *selfX_param = NULL, *selfY_param = NULL, *selfWidth_param = NULL, *selfHeight_param = NULL, result, _0, _1, _2, _3;
	zend_long selfX, selfY, selfWidth, selfHeight;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(selfX)
		Z_PARAM_LONG(selfY)
		Z_PARAM_LONG(selfWidth)
		Z_PARAM_LONG(selfHeight)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 4, 0, &selfX_param, &selfY_param, &selfWidth_param, &selfHeight_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, selfX);
	ZVAL_LONG(&_1, selfY);
	ZVAL_LONG(&_2, selfWidth);
	ZVAL_LONG(&_3, selfHeight);
	phpqt_qrect_to_rect_f(&result, &_0, &_1, &_2, &_3);
	RETURN_CCTOR(&result);
}

