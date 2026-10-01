
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
#include "src/core-qrectf.h"
#include "kernel/memory.h"
#include "kernel/object.h"
#include "kernel/operators.h"


ZEPHIR_INIT_CLASS(Qt_Core_QRectF_QRectF)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Core\\QRectF, QRectF, qt, core_qrectf_qrectf, qt_core_qrectf_qrectf_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Core_QRectF_QRectF, new_)
{
	zval result;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;

	ZVAL_UNDEF(&result);
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);

	ZEPHIR_INIT_VAR(&result);
	phpqt_qrectf_new(&result);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QRectF_QRectF, newQPointFQSizeF)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *topleftX_param = NULL, *topleftY_param = NULL, *sizeWidth_param = NULL, *sizeHeight_param = NULL, result, _0, _1, _2, _3;
	double topleftX, topleftY, sizeWidth, sizeHeight;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_ZVAL(topleftX)
		Z_PARAM_ZVAL(topleftY)
		Z_PARAM_ZVAL(sizeWidth)
		Z_PARAM_ZVAL(sizeHeight)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 4, 0, &topleftX_param, &topleftY_param, &sizeWidth_param, &sizeHeight_param);
	topleftX = zephir_get_doubleval(topleftX_param);
	topleftY = zephir_get_doubleval(topleftY_param);
	sizeWidth = zephir_get_doubleval(sizeWidth_param);
	sizeHeight = zephir_get_doubleval(sizeHeight_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_DOUBLE(&_0, topleftX);
	ZVAL_DOUBLE(&_1, topleftY);
	ZVAL_DOUBLE(&_2, sizeWidth);
	ZVAL_DOUBLE(&_3, sizeHeight);
	phpqt_qrectf_new_q_point_f_q_size_f(&result, &_0, &_1, &_2, &_3);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QRectF_QRectF, newQPointFQPointF)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *topleftX_param = NULL, *topleftY_param = NULL, *bottomRightX_param = NULL, *bottomRightY_param = NULL, result, _0, _1, _2, _3;
	double topleftX, topleftY, bottomRightX, bottomRightY;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_ZVAL(topleftX)
		Z_PARAM_ZVAL(topleftY)
		Z_PARAM_ZVAL(bottomRightX)
		Z_PARAM_ZVAL(bottomRightY)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 4, 0, &topleftX_param, &topleftY_param, &bottomRightX_param, &bottomRightY_param);
	topleftX = zephir_get_doubleval(topleftX_param);
	topleftY = zephir_get_doubleval(topleftY_param);
	bottomRightX = zephir_get_doubleval(bottomRightX_param);
	bottomRightY = zephir_get_doubleval(bottomRightY_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_DOUBLE(&_0, topleftX);
	ZVAL_DOUBLE(&_1, topleftY);
	ZVAL_DOUBLE(&_2, bottomRightX);
	ZVAL_DOUBLE(&_3, bottomRightY);
	phpqt_qrectf_new_q_point_f_q_point_f(&result, &_0, &_1, &_2, &_3);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QRectF_QRectF, newQrealQrealQrealQreal)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *left_param = NULL, *top_param = NULL, *width_param = NULL, *height_param = NULL, result, _0, _1, _2, _3;
	double left, top, width, height;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_ZVAL(left)
		Z_PARAM_ZVAL(top)
		Z_PARAM_ZVAL(width)
		Z_PARAM_ZVAL(height)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 4, 0, &left_param, &top_param, &width_param, &height_param);
	left = zephir_get_doubleval(left_param);
	top = zephir_get_doubleval(top_param);
	width = zephir_get_doubleval(width_param);
	height = zephir_get_doubleval(height_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_DOUBLE(&_0, left);
	ZVAL_DOUBLE(&_1, top);
	ZVAL_DOUBLE(&_2, width);
	ZVAL_DOUBLE(&_3, height);
	phpqt_qrectf_new_qreal_qreal_qreal_qreal(&result, &_0, &_1, &_2, &_3);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QRectF_QRectF, newQRect)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *rectX_param = NULL, *rectY_param = NULL, *rectWidth_param = NULL, *rectHeight_param = NULL, result, _0, _1, _2, _3;
	zend_long rectX, rectY, rectWidth, rectHeight;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(rectX)
		Z_PARAM_LONG(rectY)
		Z_PARAM_LONG(rectWidth)
		Z_PARAM_LONG(rectHeight)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 4, 0, &rectX_param, &rectY_param, &rectWidth_param, &rectHeight_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, rectX);
	ZVAL_LONG(&_1, rectY);
	ZVAL_LONG(&_2, rectWidth);
	ZVAL_LONG(&_3, rectHeight);
	phpqt_qrectf_new_q_rect(&result, &_0, &_1, &_2, &_3);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QRectF_QRectF, isNull)
{
	zend_long r = 0;
	zval *selfX_param = NULL, *selfY_param = NULL, *selfWidth_param = NULL, *selfHeight_param = NULL, _0, _1, _2, _3;
	double selfX, selfY, selfWidth, selfHeight;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_ZVAL(selfX)
		Z_PARAM_ZVAL(selfY)
		Z_PARAM_ZVAL(selfWidth)
		Z_PARAM_ZVAL(selfHeight)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 0, &selfX_param, &selfY_param, &selfWidth_param, &selfHeight_param);
	selfX = zephir_get_doubleval(selfX_param);
	selfY = zephir_get_doubleval(selfY_param);
	selfWidth = zephir_get_doubleval(selfWidth_param);
	selfHeight = zephir_get_doubleval(selfHeight_param);
	ZVAL_DOUBLE(&_0, selfX);
	ZVAL_DOUBLE(&_1, selfY);
	ZVAL_DOUBLE(&_2, selfWidth);
	ZVAL_DOUBLE(&_3, selfHeight);
	r = phpqt_qrectf_is_null(&_0, &_1, &_2, &_3);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QRectF_QRectF, isEmpty)
{
	zend_long r = 0;
	zval *selfX_param = NULL, *selfY_param = NULL, *selfWidth_param = NULL, *selfHeight_param = NULL, _0, _1, _2, _3;
	double selfX, selfY, selfWidth, selfHeight;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_ZVAL(selfX)
		Z_PARAM_ZVAL(selfY)
		Z_PARAM_ZVAL(selfWidth)
		Z_PARAM_ZVAL(selfHeight)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 0, &selfX_param, &selfY_param, &selfWidth_param, &selfHeight_param);
	selfX = zephir_get_doubleval(selfX_param);
	selfY = zephir_get_doubleval(selfY_param);
	selfWidth = zephir_get_doubleval(selfWidth_param);
	selfHeight = zephir_get_doubleval(selfHeight_param);
	ZVAL_DOUBLE(&_0, selfX);
	ZVAL_DOUBLE(&_1, selfY);
	ZVAL_DOUBLE(&_2, selfWidth);
	ZVAL_DOUBLE(&_3, selfHeight);
	r = phpqt_qrectf_is_empty(&_0, &_1, &_2, &_3);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QRectF_QRectF, isValid)
{
	zend_long r = 0;
	zval *selfX_param = NULL, *selfY_param = NULL, *selfWidth_param = NULL, *selfHeight_param = NULL, _0, _1, _2, _3;
	double selfX, selfY, selfWidth, selfHeight;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_ZVAL(selfX)
		Z_PARAM_ZVAL(selfY)
		Z_PARAM_ZVAL(selfWidth)
		Z_PARAM_ZVAL(selfHeight)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 0, &selfX_param, &selfY_param, &selfWidth_param, &selfHeight_param);
	selfX = zephir_get_doubleval(selfX_param);
	selfY = zephir_get_doubleval(selfY_param);
	selfWidth = zephir_get_doubleval(selfWidth_param);
	selfHeight = zephir_get_doubleval(selfHeight_param);
	ZVAL_DOUBLE(&_0, selfX);
	ZVAL_DOUBLE(&_1, selfY);
	ZVAL_DOUBLE(&_2, selfWidth);
	ZVAL_DOUBLE(&_3, selfHeight);
	r = phpqt_qrectf_is_valid(&_0, &_1, &_2, &_3);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QRectF_QRectF, normalized)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *selfX_param = NULL, *selfY_param = NULL, *selfWidth_param = NULL, *selfHeight_param = NULL, result, _0, _1, _2, _3;
	double selfX, selfY, selfWidth, selfHeight;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_ZVAL(selfX)
		Z_PARAM_ZVAL(selfY)
		Z_PARAM_ZVAL(selfWidth)
		Z_PARAM_ZVAL(selfHeight)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 4, 0, &selfX_param, &selfY_param, &selfWidth_param, &selfHeight_param);
	selfX = zephir_get_doubleval(selfX_param);
	selfY = zephir_get_doubleval(selfY_param);
	selfWidth = zephir_get_doubleval(selfWidth_param);
	selfHeight = zephir_get_doubleval(selfHeight_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_DOUBLE(&_0, selfX);
	ZVAL_DOUBLE(&_1, selfY);
	ZVAL_DOUBLE(&_2, selfWidth);
	ZVAL_DOUBLE(&_3, selfHeight);
	phpqt_qrectf_normalized(&result, &_0, &_1, &_2, &_3);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QRectF_QRectF, left)
{
	zval *selfX_param = NULL, *selfY_param = NULL, *selfWidth_param = NULL, *selfHeight_param = NULL, _0, _1, _2, _3;
	double selfX, selfY, selfWidth, selfHeight;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_ZVAL(selfX)
		Z_PARAM_ZVAL(selfY)
		Z_PARAM_ZVAL(selfWidth)
		Z_PARAM_ZVAL(selfHeight)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 0, &selfX_param, &selfY_param, &selfWidth_param, &selfHeight_param);
	selfX = zephir_get_doubleval(selfX_param);
	selfY = zephir_get_doubleval(selfY_param);
	selfWidth = zephir_get_doubleval(selfWidth_param);
	selfHeight = zephir_get_doubleval(selfHeight_param);
	ZVAL_DOUBLE(&_0, selfX);
	ZVAL_DOUBLE(&_1, selfY);
	ZVAL_DOUBLE(&_2, selfWidth);
	ZVAL_DOUBLE(&_3, selfHeight);
	RETURN_DOUBLE(phpqt_qrectf_left(&_0, &_1, &_2, &_3));
}

PHP_METHOD(Qt_Core_QRectF_QRectF, top)
{
	zval *selfX_param = NULL, *selfY_param = NULL, *selfWidth_param = NULL, *selfHeight_param = NULL, _0, _1, _2, _3;
	double selfX, selfY, selfWidth, selfHeight;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_ZVAL(selfX)
		Z_PARAM_ZVAL(selfY)
		Z_PARAM_ZVAL(selfWidth)
		Z_PARAM_ZVAL(selfHeight)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 0, &selfX_param, &selfY_param, &selfWidth_param, &selfHeight_param);
	selfX = zephir_get_doubleval(selfX_param);
	selfY = zephir_get_doubleval(selfY_param);
	selfWidth = zephir_get_doubleval(selfWidth_param);
	selfHeight = zephir_get_doubleval(selfHeight_param);
	ZVAL_DOUBLE(&_0, selfX);
	ZVAL_DOUBLE(&_1, selfY);
	ZVAL_DOUBLE(&_2, selfWidth);
	ZVAL_DOUBLE(&_3, selfHeight);
	RETURN_DOUBLE(phpqt_qrectf_top(&_0, &_1, &_2, &_3));
}

PHP_METHOD(Qt_Core_QRectF_QRectF, right)
{
	zval *selfX_param = NULL, *selfY_param = NULL, *selfWidth_param = NULL, *selfHeight_param = NULL, _0, _1, _2, _3;
	double selfX, selfY, selfWidth, selfHeight;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_ZVAL(selfX)
		Z_PARAM_ZVAL(selfY)
		Z_PARAM_ZVAL(selfWidth)
		Z_PARAM_ZVAL(selfHeight)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 0, &selfX_param, &selfY_param, &selfWidth_param, &selfHeight_param);
	selfX = zephir_get_doubleval(selfX_param);
	selfY = zephir_get_doubleval(selfY_param);
	selfWidth = zephir_get_doubleval(selfWidth_param);
	selfHeight = zephir_get_doubleval(selfHeight_param);
	ZVAL_DOUBLE(&_0, selfX);
	ZVAL_DOUBLE(&_1, selfY);
	ZVAL_DOUBLE(&_2, selfWidth);
	ZVAL_DOUBLE(&_3, selfHeight);
	RETURN_DOUBLE(phpqt_qrectf_right(&_0, &_1, &_2, &_3));
}

PHP_METHOD(Qt_Core_QRectF_QRectF, bottom)
{
	zval *selfX_param = NULL, *selfY_param = NULL, *selfWidth_param = NULL, *selfHeight_param = NULL, _0, _1, _2, _3;
	double selfX, selfY, selfWidth, selfHeight;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_ZVAL(selfX)
		Z_PARAM_ZVAL(selfY)
		Z_PARAM_ZVAL(selfWidth)
		Z_PARAM_ZVAL(selfHeight)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 0, &selfX_param, &selfY_param, &selfWidth_param, &selfHeight_param);
	selfX = zephir_get_doubleval(selfX_param);
	selfY = zephir_get_doubleval(selfY_param);
	selfWidth = zephir_get_doubleval(selfWidth_param);
	selfHeight = zephir_get_doubleval(selfHeight_param);
	ZVAL_DOUBLE(&_0, selfX);
	ZVAL_DOUBLE(&_1, selfY);
	ZVAL_DOUBLE(&_2, selfWidth);
	ZVAL_DOUBLE(&_3, selfHeight);
	RETURN_DOUBLE(phpqt_qrectf_bottom(&_0, &_1, &_2, &_3));
}

PHP_METHOD(Qt_Core_QRectF_QRectF, x)
{
	zval *selfX_param = NULL, *selfY_param = NULL, *selfWidth_param = NULL, *selfHeight_param = NULL, _0, _1, _2, _3;
	double selfX, selfY, selfWidth, selfHeight;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_ZVAL(selfX)
		Z_PARAM_ZVAL(selfY)
		Z_PARAM_ZVAL(selfWidth)
		Z_PARAM_ZVAL(selfHeight)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 0, &selfX_param, &selfY_param, &selfWidth_param, &selfHeight_param);
	selfX = zephir_get_doubleval(selfX_param);
	selfY = zephir_get_doubleval(selfY_param);
	selfWidth = zephir_get_doubleval(selfWidth_param);
	selfHeight = zephir_get_doubleval(selfHeight_param);
	ZVAL_DOUBLE(&_0, selfX);
	ZVAL_DOUBLE(&_1, selfY);
	ZVAL_DOUBLE(&_2, selfWidth);
	ZVAL_DOUBLE(&_3, selfHeight);
	RETURN_DOUBLE(phpqt_qrectf_x(&_0, &_1, &_2, &_3));
}

PHP_METHOD(Qt_Core_QRectF_QRectF, y)
{
	zval *selfX_param = NULL, *selfY_param = NULL, *selfWidth_param = NULL, *selfHeight_param = NULL, _0, _1, _2, _3;
	double selfX, selfY, selfWidth, selfHeight;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_ZVAL(selfX)
		Z_PARAM_ZVAL(selfY)
		Z_PARAM_ZVAL(selfWidth)
		Z_PARAM_ZVAL(selfHeight)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 0, &selfX_param, &selfY_param, &selfWidth_param, &selfHeight_param);
	selfX = zephir_get_doubleval(selfX_param);
	selfY = zephir_get_doubleval(selfY_param);
	selfWidth = zephir_get_doubleval(selfWidth_param);
	selfHeight = zephir_get_doubleval(selfHeight_param);
	ZVAL_DOUBLE(&_0, selfX);
	ZVAL_DOUBLE(&_1, selfY);
	ZVAL_DOUBLE(&_2, selfWidth);
	ZVAL_DOUBLE(&_3, selfHeight);
	RETURN_DOUBLE(phpqt_qrectf_y(&_0, &_1, &_2, &_3));
}

PHP_METHOD(Qt_Core_QRectF_QRectF, setLeft)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *selfX_param = NULL, *selfY_param = NULL, *selfWidth_param = NULL, *selfHeight_param = NULL, *pos_param = NULL, result, _0, _1, _2, _3, _4;
	double selfX, selfY, selfWidth, selfHeight, pos;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZEND_PARSE_PARAMETERS_START(5, 5)
		Z_PARAM_ZVAL(selfX)
		Z_PARAM_ZVAL(selfY)
		Z_PARAM_ZVAL(selfWidth)
		Z_PARAM_ZVAL(selfHeight)
		Z_PARAM_ZVAL(pos)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 5, 0, &selfX_param, &selfY_param, &selfWidth_param, &selfHeight_param, &pos_param);
	selfX = zephir_get_doubleval(selfX_param);
	selfY = zephir_get_doubleval(selfY_param);
	selfWidth = zephir_get_doubleval(selfWidth_param);
	selfHeight = zephir_get_doubleval(selfHeight_param);
	pos = zephir_get_doubleval(pos_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_DOUBLE(&_0, selfX);
	ZVAL_DOUBLE(&_1, selfY);
	ZVAL_DOUBLE(&_2, selfWidth);
	ZVAL_DOUBLE(&_3, selfHeight);
	ZVAL_DOUBLE(&_4, pos);
	phpqt_qrectf_set_left(&result, &_0, &_1, &_2, &_3, &_4);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QRectF_QRectF, setTop)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *selfX_param = NULL, *selfY_param = NULL, *selfWidth_param = NULL, *selfHeight_param = NULL, *pos_param = NULL, result, _0, _1, _2, _3, _4;
	double selfX, selfY, selfWidth, selfHeight, pos;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZEND_PARSE_PARAMETERS_START(5, 5)
		Z_PARAM_ZVAL(selfX)
		Z_PARAM_ZVAL(selfY)
		Z_PARAM_ZVAL(selfWidth)
		Z_PARAM_ZVAL(selfHeight)
		Z_PARAM_ZVAL(pos)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 5, 0, &selfX_param, &selfY_param, &selfWidth_param, &selfHeight_param, &pos_param);
	selfX = zephir_get_doubleval(selfX_param);
	selfY = zephir_get_doubleval(selfY_param);
	selfWidth = zephir_get_doubleval(selfWidth_param);
	selfHeight = zephir_get_doubleval(selfHeight_param);
	pos = zephir_get_doubleval(pos_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_DOUBLE(&_0, selfX);
	ZVAL_DOUBLE(&_1, selfY);
	ZVAL_DOUBLE(&_2, selfWidth);
	ZVAL_DOUBLE(&_3, selfHeight);
	ZVAL_DOUBLE(&_4, pos);
	phpqt_qrectf_set_top(&result, &_0, &_1, &_2, &_3, &_4);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QRectF_QRectF, setRight)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *selfX_param = NULL, *selfY_param = NULL, *selfWidth_param = NULL, *selfHeight_param = NULL, *pos_param = NULL, result, _0, _1, _2, _3, _4;
	double selfX, selfY, selfWidth, selfHeight, pos;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZEND_PARSE_PARAMETERS_START(5, 5)
		Z_PARAM_ZVAL(selfX)
		Z_PARAM_ZVAL(selfY)
		Z_PARAM_ZVAL(selfWidth)
		Z_PARAM_ZVAL(selfHeight)
		Z_PARAM_ZVAL(pos)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 5, 0, &selfX_param, &selfY_param, &selfWidth_param, &selfHeight_param, &pos_param);
	selfX = zephir_get_doubleval(selfX_param);
	selfY = zephir_get_doubleval(selfY_param);
	selfWidth = zephir_get_doubleval(selfWidth_param);
	selfHeight = zephir_get_doubleval(selfHeight_param);
	pos = zephir_get_doubleval(pos_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_DOUBLE(&_0, selfX);
	ZVAL_DOUBLE(&_1, selfY);
	ZVAL_DOUBLE(&_2, selfWidth);
	ZVAL_DOUBLE(&_3, selfHeight);
	ZVAL_DOUBLE(&_4, pos);
	phpqt_qrectf_set_right(&result, &_0, &_1, &_2, &_3, &_4);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QRectF_QRectF, setBottom)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *selfX_param = NULL, *selfY_param = NULL, *selfWidth_param = NULL, *selfHeight_param = NULL, *pos_param = NULL, result, _0, _1, _2, _3, _4;
	double selfX, selfY, selfWidth, selfHeight, pos;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZEND_PARSE_PARAMETERS_START(5, 5)
		Z_PARAM_ZVAL(selfX)
		Z_PARAM_ZVAL(selfY)
		Z_PARAM_ZVAL(selfWidth)
		Z_PARAM_ZVAL(selfHeight)
		Z_PARAM_ZVAL(pos)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 5, 0, &selfX_param, &selfY_param, &selfWidth_param, &selfHeight_param, &pos_param);
	selfX = zephir_get_doubleval(selfX_param);
	selfY = zephir_get_doubleval(selfY_param);
	selfWidth = zephir_get_doubleval(selfWidth_param);
	selfHeight = zephir_get_doubleval(selfHeight_param);
	pos = zephir_get_doubleval(pos_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_DOUBLE(&_0, selfX);
	ZVAL_DOUBLE(&_1, selfY);
	ZVAL_DOUBLE(&_2, selfWidth);
	ZVAL_DOUBLE(&_3, selfHeight);
	ZVAL_DOUBLE(&_4, pos);
	phpqt_qrectf_set_bottom(&result, &_0, &_1, &_2, &_3, &_4);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QRectF_QRectF, setX)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *selfX_param = NULL, *selfY_param = NULL, *selfWidth_param = NULL, *selfHeight_param = NULL, *pos_param = NULL, result, _0, _1, _2, _3, _4;
	double selfX, selfY, selfWidth, selfHeight, pos;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZEND_PARSE_PARAMETERS_START(5, 5)
		Z_PARAM_ZVAL(selfX)
		Z_PARAM_ZVAL(selfY)
		Z_PARAM_ZVAL(selfWidth)
		Z_PARAM_ZVAL(selfHeight)
		Z_PARAM_ZVAL(pos)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 5, 0, &selfX_param, &selfY_param, &selfWidth_param, &selfHeight_param, &pos_param);
	selfX = zephir_get_doubleval(selfX_param);
	selfY = zephir_get_doubleval(selfY_param);
	selfWidth = zephir_get_doubleval(selfWidth_param);
	selfHeight = zephir_get_doubleval(selfHeight_param);
	pos = zephir_get_doubleval(pos_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_DOUBLE(&_0, selfX);
	ZVAL_DOUBLE(&_1, selfY);
	ZVAL_DOUBLE(&_2, selfWidth);
	ZVAL_DOUBLE(&_3, selfHeight);
	ZVAL_DOUBLE(&_4, pos);
	phpqt_qrectf_set_x(&result, &_0, &_1, &_2, &_3, &_4);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QRectF_QRectF, setY)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *selfX_param = NULL, *selfY_param = NULL, *selfWidth_param = NULL, *selfHeight_param = NULL, *pos_param = NULL, result, _0, _1, _2, _3, _4;
	double selfX, selfY, selfWidth, selfHeight, pos;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZEND_PARSE_PARAMETERS_START(5, 5)
		Z_PARAM_ZVAL(selfX)
		Z_PARAM_ZVAL(selfY)
		Z_PARAM_ZVAL(selfWidth)
		Z_PARAM_ZVAL(selfHeight)
		Z_PARAM_ZVAL(pos)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 5, 0, &selfX_param, &selfY_param, &selfWidth_param, &selfHeight_param, &pos_param);
	selfX = zephir_get_doubleval(selfX_param);
	selfY = zephir_get_doubleval(selfY_param);
	selfWidth = zephir_get_doubleval(selfWidth_param);
	selfHeight = zephir_get_doubleval(selfHeight_param);
	pos = zephir_get_doubleval(pos_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_DOUBLE(&_0, selfX);
	ZVAL_DOUBLE(&_1, selfY);
	ZVAL_DOUBLE(&_2, selfWidth);
	ZVAL_DOUBLE(&_3, selfHeight);
	ZVAL_DOUBLE(&_4, pos);
	phpqt_qrectf_set_y(&result, &_0, &_1, &_2, &_3, &_4);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QRectF_QRectF, topLeft)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *selfX_param = NULL, *selfY_param = NULL, *selfWidth_param = NULL, *selfHeight_param = NULL, result, _0, _1, _2, _3;
	double selfX, selfY, selfWidth, selfHeight;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_ZVAL(selfX)
		Z_PARAM_ZVAL(selfY)
		Z_PARAM_ZVAL(selfWidth)
		Z_PARAM_ZVAL(selfHeight)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 4, 0, &selfX_param, &selfY_param, &selfWidth_param, &selfHeight_param);
	selfX = zephir_get_doubleval(selfX_param);
	selfY = zephir_get_doubleval(selfY_param);
	selfWidth = zephir_get_doubleval(selfWidth_param);
	selfHeight = zephir_get_doubleval(selfHeight_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_DOUBLE(&_0, selfX);
	ZVAL_DOUBLE(&_1, selfY);
	ZVAL_DOUBLE(&_2, selfWidth);
	ZVAL_DOUBLE(&_3, selfHeight);
	phpqt_qrectf_top_left(&result, &_0, &_1, &_2, &_3);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QRectF_QRectF, bottomRight)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *selfX_param = NULL, *selfY_param = NULL, *selfWidth_param = NULL, *selfHeight_param = NULL, result, _0, _1, _2, _3;
	double selfX, selfY, selfWidth, selfHeight;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_ZVAL(selfX)
		Z_PARAM_ZVAL(selfY)
		Z_PARAM_ZVAL(selfWidth)
		Z_PARAM_ZVAL(selfHeight)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 4, 0, &selfX_param, &selfY_param, &selfWidth_param, &selfHeight_param);
	selfX = zephir_get_doubleval(selfX_param);
	selfY = zephir_get_doubleval(selfY_param);
	selfWidth = zephir_get_doubleval(selfWidth_param);
	selfHeight = zephir_get_doubleval(selfHeight_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_DOUBLE(&_0, selfX);
	ZVAL_DOUBLE(&_1, selfY);
	ZVAL_DOUBLE(&_2, selfWidth);
	ZVAL_DOUBLE(&_3, selfHeight);
	phpqt_qrectf_bottom_right(&result, &_0, &_1, &_2, &_3);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QRectF_QRectF, topRight)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *selfX_param = NULL, *selfY_param = NULL, *selfWidth_param = NULL, *selfHeight_param = NULL, result, _0, _1, _2, _3;
	double selfX, selfY, selfWidth, selfHeight;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_ZVAL(selfX)
		Z_PARAM_ZVAL(selfY)
		Z_PARAM_ZVAL(selfWidth)
		Z_PARAM_ZVAL(selfHeight)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 4, 0, &selfX_param, &selfY_param, &selfWidth_param, &selfHeight_param);
	selfX = zephir_get_doubleval(selfX_param);
	selfY = zephir_get_doubleval(selfY_param);
	selfWidth = zephir_get_doubleval(selfWidth_param);
	selfHeight = zephir_get_doubleval(selfHeight_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_DOUBLE(&_0, selfX);
	ZVAL_DOUBLE(&_1, selfY);
	ZVAL_DOUBLE(&_2, selfWidth);
	ZVAL_DOUBLE(&_3, selfHeight);
	phpqt_qrectf_top_right(&result, &_0, &_1, &_2, &_3);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QRectF_QRectF, bottomLeft)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *selfX_param = NULL, *selfY_param = NULL, *selfWidth_param = NULL, *selfHeight_param = NULL, result, _0, _1, _2, _3;
	double selfX, selfY, selfWidth, selfHeight;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_ZVAL(selfX)
		Z_PARAM_ZVAL(selfY)
		Z_PARAM_ZVAL(selfWidth)
		Z_PARAM_ZVAL(selfHeight)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 4, 0, &selfX_param, &selfY_param, &selfWidth_param, &selfHeight_param);
	selfX = zephir_get_doubleval(selfX_param);
	selfY = zephir_get_doubleval(selfY_param);
	selfWidth = zephir_get_doubleval(selfWidth_param);
	selfHeight = zephir_get_doubleval(selfHeight_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_DOUBLE(&_0, selfX);
	ZVAL_DOUBLE(&_1, selfY);
	ZVAL_DOUBLE(&_2, selfWidth);
	ZVAL_DOUBLE(&_3, selfHeight);
	phpqt_qrectf_bottom_left(&result, &_0, &_1, &_2, &_3);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QRectF_QRectF, center)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *selfX_param = NULL, *selfY_param = NULL, *selfWidth_param = NULL, *selfHeight_param = NULL, result, _0, _1, _2, _3;
	double selfX, selfY, selfWidth, selfHeight;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_ZVAL(selfX)
		Z_PARAM_ZVAL(selfY)
		Z_PARAM_ZVAL(selfWidth)
		Z_PARAM_ZVAL(selfHeight)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 4, 0, &selfX_param, &selfY_param, &selfWidth_param, &selfHeight_param);
	selfX = zephir_get_doubleval(selfX_param);
	selfY = zephir_get_doubleval(selfY_param);
	selfWidth = zephir_get_doubleval(selfWidth_param);
	selfHeight = zephir_get_doubleval(selfHeight_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_DOUBLE(&_0, selfX);
	ZVAL_DOUBLE(&_1, selfY);
	ZVAL_DOUBLE(&_2, selfWidth);
	ZVAL_DOUBLE(&_3, selfHeight);
	phpqt_qrectf_center(&result, &_0, &_1, &_2, &_3);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QRectF_QRectF, setTopLeft)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *selfX_param = NULL, *selfY_param = NULL, *selfWidth_param = NULL, *selfHeight_param = NULL, *pX_param = NULL, *pY_param = NULL, result, _0, _1, _2, _3, _4, _5;
	double selfX, selfY, selfWidth, selfHeight, pX, pY;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_5);
	ZEND_PARSE_PARAMETERS_START(6, 6)
		Z_PARAM_ZVAL(selfX)
		Z_PARAM_ZVAL(selfY)
		Z_PARAM_ZVAL(selfWidth)
		Z_PARAM_ZVAL(selfHeight)
		Z_PARAM_ZVAL(pX)
		Z_PARAM_ZVAL(pY)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 6, 0, &selfX_param, &selfY_param, &selfWidth_param, &selfHeight_param, &pX_param, &pY_param);
	selfX = zephir_get_doubleval(selfX_param);
	selfY = zephir_get_doubleval(selfY_param);
	selfWidth = zephir_get_doubleval(selfWidth_param);
	selfHeight = zephir_get_doubleval(selfHeight_param);
	pX = zephir_get_doubleval(pX_param);
	pY = zephir_get_doubleval(pY_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_DOUBLE(&_0, selfX);
	ZVAL_DOUBLE(&_1, selfY);
	ZVAL_DOUBLE(&_2, selfWidth);
	ZVAL_DOUBLE(&_3, selfHeight);
	ZVAL_DOUBLE(&_4, pX);
	ZVAL_DOUBLE(&_5, pY);
	phpqt_qrectf_set_top_left(&result, &_0, &_1, &_2, &_3, &_4, &_5);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QRectF_QRectF, setBottomRight)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *selfX_param = NULL, *selfY_param = NULL, *selfWidth_param = NULL, *selfHeight_param = NULL, *pX_param = NULL, *pY_param = NULL, result, _0, _1, _2, _3, _4, _5;
	double selfX, selfY, selfWidth, selfHeight, pX, pY;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_5);
	ZEND_PARSE_PARAMETERS_START(6, 6)
		Z_PARAM_ZVAL(selfX)
		Z_PARAM_ZVAL(selfY)
		Z_PARAM_ZVAL(selfWidth)
		Z_PARAM_ZVAL(selfHeight)
		Z_PARAM_ZVAL(pX)
		Z_PARAM_ZVAL(pY)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 6, 0, &selfX_param, &selfY_param, &selfWidth_param, &selfHeight_param, &pX_param, &pY_param);
	selfX = zephir_get_doubleval(selfX_param);
	selfY = zephir_get_doubleval(selfY_param);
	selfWidth = zephir_get_doubleval(selfWidth_param);
	selfHeight = zephir_get_doubleval(selfHeight_param);
	pX = zephir_get_doubleval(pX_param);
	pY = zephir_get_doubleval(pY_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_DOUBLE(&_0, selfX);
	ZVAL_DOUBLE(&_1, selfY);
	ZVAL_DOUBLE(&_2, selfWidth);
	ZVAL_DOUBLE(&_3, selfHeight);
	ZVAL_DOUBLE(&_4, pX);
	ZVAL_DOUBLE(&_5, pY);
	phpqt_qrectf_set_bottom_right(&result, &_0, &_1, &_2, &_3, &_4, &_5);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QRectF_QRectF, setTopRight)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *selfX_param = NULL, *selfY_param = NULL, *selfWidth_param = NULL, *selfHeight_param = NULL, *pX_param = NULL, *pY_param = NULL, result, _0, _1, _2, _3, _4, _5;
	double selfX, selfY, selfWidth, selfHeight, pX, pY;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_5);
	ZEND_PARSE_PARAMETERS_START(6, 6)
		Z_PARAM_ZVAL(selfX)
		Z_PARAM_ZVAL(selfY)
		Z_PARAM_ZVAL(selfWidth)
		Z_PARAM_ZVAL(selfHeight)
		Z_PARAM_ZVAL(pX)
		Z_PARAM_ZVAL(pY)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 6, 0, &selfX_param, &selfY_param, &selfWidth_param, &selfHeight_param, &pX_param, &pY_param);
	selfX = zephir_get_doubleval(selfX_param);
	selfY = zephir_get_doubleval(selfY_param);
	selfWidth = zephir_get_doubleval(selfWidth_param);
	selfHeight = zephir_get_doubleval(selfHeight_param);
	pX = zephir_get_doubleval(pX_param);
	pY = zephir_get_doubleval(pY_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_DOUBLE(&_0, selfX);
	ZVAL_DOUBLE(&_1, selfY);
	ZVAL_DOUBLE(&_2, selfWidth);
	ZVAL_DOUBLE(&_3, selfHeight);
	ZVAL_DOUBLE(&_4, pX);
	ZVAL_DOUBLE(&_5, pY);
	phpqt_qrectf_set_top_right(&result, &_0, &_1, &_2, &_3, &_4, &_5);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QRectF_QRectF, setBottomLeft)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *selfX_param = NULL, *selfY_param = NULL, *selfWidth_param = NULL, *selfHeight_param = NULL, *pX_param = NULL, *pY_param = NULL, result, _0, _1, _2, _3, _4, _5;
	double selfX, selfY, selfWidth, selfHeight, pX, pY;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_5);
	ZEND_PARSE_PARAMETERS_START(6, 6)
		Z_PARAM_ZVAL(selfX)
		Z_PARAM_ZVAL(selfY)
		Z_PARAM_ZVAL(selfWidth)
		Z_PARAM_ZVAL(selfHeight)
		Z_PARAM_ZVAL(pX)
		Z_PARAM_ZVAL(pY)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 6, 0, &selfX_param, &selfY_param, &selfWidth_param, &selfHeight_param, &pX_param, &pY_param);
	selfX = zephir_get_doubleval(selfX_param);
	selfY = zephir_get_doubleval(selfY_param);
	selfWidth = zephir_get_doubleval(selfWidth_param);
	selfHeight = zephir_get_doubleval(selfHeight_param);
	pX = zephir_get_doubleval(pX_param);
	pY = zephir_get_doubleval(pY_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_DOUBLE(&_0, selfX);
	ZVAL_DOUBLE(&_1, selfY);
	ZVAL_DOUBLE(&_2, selfWidth);
	ZVAL_DOUBLE(&_3, selfHeight);
	ZVAL_DOUBLE(&_4, pX);
	ZVAL_DOUBLE(&_5, pY);
	phpqt_qrectf_set_bottom_left(&result, &_0, &_1, &_2, &_3, &_4, &_5);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QRectF_QRectF, moveLeft)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *selfX_param = NULL, *selfY_param = NULL, *selfWidth_param = NULL, *selfHeight_param = NULL, *pos_param = NULL, result, _0, _1, _2, _3, _4;
	double selfX, selfY, selfWidth, selfHeight, pos;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZEND_PARSE_PARAMETERS_START(5, 5)
		Z_PARAM_ZVAL(selfX)
		Z_PARAM_ZVAL(selfY)
		Z_PARAM_ZVAL(selfWidth)
		Z_PARAM_ZVAL(selfHeight)
		Z_PARAM_ZVAL(pos)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 5, 0, &selfX_param, &selfY_param, &selfWidth_param, &selfHeight_param, &pos_param);
	selfX = zephir_get_doubleval(selfX_param);
	selfY = zephir_get_doubleval(selfY_param);
	selfWidth = zephir_get_doubleval(selfWidth_param);
	selfHeight = zephir_get_doubleval(selfHeight_param);
	pos = zephir_get_doubleval(pos_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_DOUBLE(&_0, selfX);
	ZVAL_DOUBLE(&_1, selfY);
	ZVAL_DOUBLE(&_2, selfWidth);
	ZVAL_DOUBLE(&_3, selfHeight);
	ZVAL_DOUBLE(&_4, pos);
	phpqt_qrectf_move_left(&result, &_0, &_1, &_2, &_3, &_4);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QRectF_QRectF, moveTop)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *selfX_param = NULL, *selfY_param = NULL, *selfWidth_param = NULL, *selfHeight_param = NULL, *pos_param = NULL, result, _0, _1, _2, _3, _4;
	double selfX, selfY, selfWidth, selfHeight, pos;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZEND_PARSE_PARAMETERS_START(5, 5)
		Z_PARAM_ZVAL(selfX)
		Z_PARAM_ZVAL(selfY)
		Z_PARAM_ZVAL(selfWidth)
		Z_PARAM_ZVAL(selfHeight)
		Z_PARAM_ZVAL(pos)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 5, 0, &selfX_param, &selfY_param, &selfWidth_param, &selfHeight_param, &pos_param);
	selfX = zephir_get_doubleval(selfX_param);
	selfY = zephir_get_doubleval(selfY_param);
	selfWidth = zephir_get_doubleval(selfWidth_param);
	selfHeight = zephir_get_doubleval(selfHeight_param);
	pos = zephir_get_doubleval(pos_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_DOUBLE(&_0, selfX);
	ZVAL_DOUBLE(&_1, selfY);
	ZVAL_DOUBLE(&_2, selfWidth);
	ZVAL_DOUBLE(&_3, selfHeight);
	ZVAL_DOUBLE(&_4, pos);
	phpqt_qrectf_move_top(&result, &_0, &_1, &_2, &_3, &_4);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QRectF_QRectF, moveRight)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *selfX_param = NULL, *selfY_param = NULL, *selfWidth_param = NULL, *selfHeight_param = NULL, *pos_param = NULL, result, _0, _1, _2, _3, _4;
	double selfX, selfY, selfWidth, selfHeight, pos;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZEND_PARSE_PARAMETERS_START(5, 5)
		Z_PARAM_ZVAL(selfX)
		Z_PARAM_ZVAL(selfY)
		Z_PARAM_ZVAL(selfWidth)
		Z_PARAM_ZVAL(selfHeight)
		Z_PARAM_ZVAL(pos)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 5, 0, &selfX_param, &selfY_param, &selfWidth_param, &selfHeight_param, &pos_param);
	selfX = zephir_get_doubleval(selfX_param);
	selfY = zephir_get_doubleval(selfY_param);
	selfWidth = zephir_get_doubleval(selfWidth_param);
	selfHeight = zephir_get_doubleval(selfHeight_param);
	pos = zephir_get_doubleval(pos_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_DOUBLE(&_0, selfX);
	ZVAL_DOUBLE(&_1, selfY);
	ZVAL_DOUBLE(&_2, selfWidth);
	ZVAL_DOUBLE(&_3, selfHeight);
	ZVAL_DOUBLE(&_4, pos);
	phpqt_qrectf_move_right(&result, &_0, &_1, &_2, &_3, &_4);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QRectF_QRectF, moveBottom)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *selfX_param = NULL, *selfY_param = NULL, *selfWidth_param = NULL, *selfHeight_param = NULL, *pos_param = NULL, result, _0, _1, _2, _3, _4;
	double selfX, selfY, selfWidth, selfHeight, pos;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZEND_PARSE_PARAMETERS_START(5, 5)
		Z_PARAM_ZVAL(selfX)
		Z_PARAM_ZVAL(selfY)
		Z_PARAM_ZVAL(selfWidth)
		Z_PARAM_ZVAL(selfHeight)
		Z_PARAM_ZVAL(pos)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 5, 0, &selfX_param, &selfY_param, &selfWidth_param, &selfHeight_param, &pos_param);
	selfX = zephir_get_doubleval(selfX_param);
	selfY = zephir_get_doubleval(selfY_param);
	selfWidth = zephir_get_doubleval(selfWidth_param);
	selfHeight = zephir_get_doubleval(selfHeight_param);
	pos = zephir_get_doubleval(pos_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_DOUBLE(&_0, selfX);
	ZVAL_DOUBLE(&_1, selfY);
	ZVAL_DOUBLE(&_2, selfWidth);
	ZVAL_DOUBLE(&_3, selfHeight);
	ZVAL_DOUBLE(&_4, pos);
	phpqt_qrectf_move_bottom(&result, &_0, &_1, &_2, &_3, &_4);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QRectF_QRectF, moveTopLeft)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *selfX_param = NULL, *selfY_param = NULL, *selfWidth_param = NULL, *selfHeight_param = NULL, *pX_param = NULL, *pY_param = NULL, result, _0, _1, _2, _3, _4, _5;
	double selfX, selfY, selfWidth, selfHeight, pX, pY;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_5);
	ZEND_PARSE_PARAMETERS_START(6, 6)
		Z_PARAM_ZVAL(selfX)
		Z_PARAM_ZVAL(selfY)
		Z_PARAM_ZVAL(selfWidth)
		Z_PARAM_ZVAL(selfHeight)
		Z_PARAM_ZVAL(pX)
		Z_PARAM_ZVAL(pY)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 6, 0, &selfX_param, &selfY_param, &selfWidth_param, &selfHeight_param, &pX_param, &pY_param);
	selfX = zephir_get_doubleval(selfX_param);
	selfY = zephir_get_doubleval(selfY_param);
	selfWidth = zephir_get_doubleval(selfWidth_param);
	selfHeight = zephir_get_doubleval(selfHeight_param);
	pX = zephir_get_doubleval(pX_param);
	pY = zephir_get_doubleval(pY_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_DOUBLE(&_0, selfX);
	ZVAL_DOUBLE(&_1, selfY);
	ZVAL_DOUBLE(&_2, selfWidth);
	ZVAL_DOUBLE(&_3, selfHeight);
	ZVAL_DOUBLE(&_4, pX);
	ZVAL_DOUBLE(&_5, pY);
	phpqt_qrectf_move_top_left(&result, &_0, &_1, &_2, &_3, &_4, &_5);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QRectF_QRectF, moveBottomRight)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *selfX_param = NULL, *selfY_param = NULL, *selfWidth_param = NULL, *selfHeight_param = NULL, *pX_param = NULL, *pY_param = NULL, result, _0, _1, _2, _3, _4, _5;
	double selfX, selfY, selfWidth, selfHeight, pX, pY;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_5);
	ZEND_PARSE_PARAMETERS_START(6, 6)
		Z_PARAM_ZVAL(selfX)
		Z_PARAM_ZVAL(selfY)
		Z_PARAM_ZVAL(selfWidth)
		Z_PARAM_ZVAL(selfHeight)
		Z_PARAM_ZVAL(pX)
		Z_PARAM_ZVAL(pY)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 6, 0, &selfX_param, &selfY_param, &selfWidth_param, &selfHeight_param, &pX_param, &pY_param);
	selfX = zephir_get_doubleval(selfX_param);
	selfY = zephir_get_doubleval(selfY_param);
	selfWidth = zephir_get_doubleval(selfWidth_param);
	selfHeight = zephir_get_doubleval(selfHeight_param);
	pX = zephir_get_doubleval(pX_param);
	pY = zephir_get_doubleval(pY_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_DOUBLE(&_0, selfX);
	ZVAL_DOUBLE(&_1, selfY);
	ZVAL_DOUBLE(&_2, selfWidth);
	ZVAL_DOUBLE(&_3, selfHeight);
	ZVAL_DOUBLE(&_4, pX);
	ZVAL_DOUBLE(&_5, pY);
	phpqt_qrectf_move_bottom_right(&result, &_0, &_1, &_2, &_3, &_4, &_5);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QRectF_QRectF, moveTopRight)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *selfX_param = NULL, *selfY_param = NULL, *selfWidth_param = NULL, *selfHeight_param = NULL, *pX_param = NULL, *pY_param = NULL, result, _0, _1, _2, _3, _4, _5;
	double selfX, selfY, selfWidth, selfHeight, pX, pY;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_5);
	ZEND_PARSE_PARAMETERS_START(6, 6)
		Z_PARAM_ZVAL(selfX)
		Z_PARAM_ZVAL(selfY)
		Z_PARAM_ZVAL(selfWidth)
		Z_PARAM_ZVAL(selfHeight)
		Z_PARAM_ZVAL(pX)
		Z_PARAM_ZVAL(pY)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 6, 0, &selfX_param, &selfY_param, &selfWidth_param, &selfHeight_param, &pX_param, &pY_param);
	selfX = zephir_get_doubleval(selfX_param);
	selfY = zephir_get_doubleval(selfY_param);
	selfWidth = zephir_get_doubleval(selfWidth_param);
	selfHeight = zephir_get_doubleval(selfHeight_param);
	pX = zephir_get_doubleval(pX_param);
	pY = zephir_get_doubleval(pY_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_DOUBLE(&_0, selfX);
	ZVAL_DOUBLE(&_1, selfY);
	ZVAL_DOUBLE(&_2, selfWidth);
	ZVAL_DOUBLE(&_3, selfHeight);
	ZVAL_DOUBLE(&_4, pX);
	ZVAL_DOUBLE(&_5, pY);
	phpqt_qrectf_move_top_right(&result, &_0, &_1, &_2, &_3, &_4, &_5);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QRectF_QRectF, moveBottomLeft)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *selfX_param = NULL, *selfY_param = NULL, *selfWidth_param = NULL, *selfHeight_param = NULL, *pX_param = NULL, *pY_param = NULL, result, _0, _1, _2, _3, _4, _5;
	double selfX, selfY, selfWidth, selfHeight, pX, pY;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_5);
	ZEND_PARSE_PARAMETERS_START(6, 6)
		Z_PARAM_ZVAL(selfX)
		Z_PARAM_ZVAL(selfY)
		Z_PARAM_ZVAL(selfWidth)
		Z_PARAM_ZVAL(selfHeight)
		Z_PARAM_ZVAL(pX)
		Z_PARAM_ZVAL(pY)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 6, 0, &selfX_param, &selfY_param, &selfWidth_param, &selfHeight_param, &pX_param, &pY_param);
	selfX = zephir_get_doubleval(selfX_param);
	selfY = zephir_get_doubleval(selfY_param);
	selfWidth = zephir_get_doubleval(selfWidth_param);
	selfHeight = zephir_get_doubleval(selfHeight_param);
	pX = zephir_get_doubleval(pX_param);
	pY = zephir_get_doubleval(pY_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_DOUBLE(&_0, selfX);
	ZVAL_DOUBLE(&_1, selfY);
	ZVAL_DOUBLE(&_2, selfWidth);
	ZVAL_DOUBLE(&_3, selfHeight);
	ZVAL_DOUBLE(&_4, pX);
	ZVAL_DOUBLE(&_5, pY);
	phpqt_qrectf_move_bottom_left(&result, &_0, &_1, &_2, &_3, &_4, &_5);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QRectF_QRectF, moveCenter)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *selfX_param = NULL, *selfY_param = NULL, *selfWidth_param = NULL, *selfHeight_param = NULL, *pX_param = NULL, *pY_param = NULL, result, _0, _1, _2, _3, _4, _5;
	double selfX, selfY, selfWidth, selfHeight, pX, pY;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_5);
	ZEND_PARSE_PARAMETERS_START(6, 6)
		Z_PARAM_ZVAL(selfX)
		Z_PARAM_ZVAL(selfY)
		Z_PARAM_ZVAL(selfWidth)
		Z_PARAM_ZVAL(selfHeight)
		Z_PARAM_ZVAL(pX)
		Z_PARAM_ZVAL(pY)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 6, 0, &selfX_param, &selfY_param, &selfWidth_param, &selfHeight_param, &pX_param, &pY_param);
	selfX = zephir_get_doubleval(selfX_param);
	selfY = zephir_get_doubleval(selfY_param);
	selfWidth = zephir_get_doubleval(selfWidth_param);
	selfHeight = zephir_get_doubleval(selfHeight_param);
	pX = zephir_get_doubleval(pX_param);
	pY = zephir_get_doubleval(pY_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_DOUBLE(&_0, selfX);
	ZVAL_DOUBLE(&_1, selfY);
	ZVAL_DOUBLE(&_2, selfWidth);
	ZVAL_DOUBLE(&_3, selfHeight);
	ZVAL_DOUBLE(&_4, pX);
	ZVAL_DOUBLE(&_5, pY);
	phpqt_qrectf_move_center(&result, &_0, &_1, &_2, &_3, &_4, &_5);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QRectF_QRectF, translate)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *selfX_param = NULL, *selfY_param = NULL, *selfWidth_param = NULL, *selfHeight_param = NULL, *dx_param = NULL, *dy_param = NULL, result, _0, _1, _2, _3, _4, _5;
	double selfX, selfY, selfWidth, selfHeight, dx, dy;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_5);
	ZEND_PARSE_PARAMETERS_START(6, 6)
		Z_PARAM_ZVAL(selfX)
		Z_PARAM_ZVAL(selfY)
		Z_PARAM_ZVAL(selfWidth)
		Z_PARAM_ZVAL(selfHeight)
		Z_PARAM_ZVAL(dx)
		Z_PARAM_ZVAL(dy)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 6, 0, &selfX_param, &selfY_param, &selfWidth_param, &selfHeight_param, &dx_param, &dy_param);
	selfX = zephir_get_doubleval(selfX_param);
	selfY = zephir_get_doubleval(selfY_param);
	selfWidth = zephir_get_doubleval(selfWidth_param);
	selfHeight = zephir_get_doubleval(selfHeight_param);
	dx = zephir_get_doubleval(dx_param);
	dy = zephir_get_doubleval(dy_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_DOUBLE(&_0, selfX);
	ZVAL_DOUBLE(&_1, selfY);
	ZVAL_DOUBLE(&_2, selfWidth);
	ZVAL_DOUBLE(&_3, selfHeight);
	ZVAL_DOUBLE(&_4, dx);
	ZVAL_DOUBLE(&_5, dy);
	phpqt_qrectf_translate(&result, &_0, &_1, &_2, &_3, &_4, &_5);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QRectF_QRectF, translateQPointF)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *selfX_param = NULL, *selfY_param = NULL, *selfWidth_param = NULL, *selfHeight_param = NULL, *pX_param = NULL, *pY_param = NULL, result, _0, _1, _2, _3, _4, _5;
	double selfX, selfY, selfWidth, selfHeight, pX, pY;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_5);
	ZEND_PARSE_PARAMETERS_START(6, 6)
		Z_PARAM_ZVAL(selfX)
		Z_PARAM_ZVAL(selfY)
		Z_PARAM_ZVAL(selfWidth)
		Z_PARAM_ZVAL(selfHeight)
		Z_PARAM_ZVAL(pX)
		Z_PARAM_ZVAL(pY)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 6, 0, &selfX_param, &selfY_param, &selfWidth_param, &selfHeight_param, &pX_param, &pY_param);
	selfX = zephir_get_doubleval(selfX_param);
	selfY = zephir_get_doubleval(selfY_param);
	selfWidth = zephir_get_doubleval(selfWidth_param);
	selfHeight = zephir_get_doubleval(selfHeight_param);
	pX = zephir_get_doubleval(pX_param);
	pY = zephir_get_doubleval(pY_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_DOUBLE(&_0, selfX);
	ZVAL_DOUBLE(&_1, selfY);
	ZVAL_DOUBLE(&_2, selfWidth);
	ZVAL_DOUBLE(&_3, selfHeight);
	ZVAL_DOUBLE(&_4, pX);
	ZVAL_DOUBLE(&_5, pY);
	phpqt_qrectf_translate_q_point_f(&result, &_0, &_1, &_2, &_3, &_4, &_5);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QRectF_QRectF, translated)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *selfX_param = NULL, *selfY_param = NULL, *selfWidth_param = NULL, *selfHeight_param = NULL, *dx_param = NULL, *dy_param = NULL, result, _0, _1, _2, _3, _4, _5;
	double selfX, selfY, selfWidth, selfHeight, dx, dy;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_5);
	ZEND_PARSE_PARAMETERS_START(6, 6)
		Z_PARAM_ZVAL(selfX)
		Z_PARAM_ZVAL(selfY)
		Z_PARAM_ZVAL(selfWidth)
		Z_PARAM_ZVAL(selfHeight)
		Z_PARAM_ZVAL(dx)
		Z_PARAM_ZVAL(dy)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 6, 0, &selfX_param, &selfY_param, &selfWidth_param, &selfHeight_param, &dx_param, &dy_param);
	selfX = zephir_get_doubleval(selfX_param);
	selfY = zephir_get_doubleval(selfY_param);
	selfWidth = zephir_get_doubleval(selfWidth_param);
	selfHeight = zephir_get_doubleval(selfHeight_param);
	dx = zephir_get_doubleval(dx_param);
	dy = zephir_get_doubleval(dy_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_DOUBLE(&_0, selfX);
	ZVAL_DOUBLE(&_1, selfY);
	ZVAL_DOUBLE(&_2, selfWidth);
	ZVAL_DOUBLE(&_3, selfHeight);
	ZVAL_DOUBLE(&_4, dx);
	ZVAL_DOUBLE(&_5, dy);
	phpqt_qrectf_translated(&result, &_0, &_1, &_2, &_3, &_4, &_5);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QRectF_QRectF, translatedQPointF)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *selfX_param = NULL, *selfY_param = NULL, *selfWidth_param = NULL, *selfHeight_param = NULL, *pX_param = NULL, *pY_param = NULL, result, _0, _1, _2, _3, _4, _5;
	double selfX, selfY, selfWidth, selfHeight, pX, pY;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_5);
	ZEND_PARSE_PARAMETERS_START(6, 6)
		Z_PARAM_ZVAL(selfX)
		Z_PARAM_ZVAL(selfY)
		Z_PARAM_ZVAL(selfWidth)
		Z_PARAM_ZVAL(selfHeight)
		Z_PARAM_ZVAL(pX)
		Z_PARAM_ZVAL(pY)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 6, 0, &selfX_param, &selfY_param, &selfWidth_param, &selfHeight_param, &pX_param, &pY_param);
	selfX = zephir_get_doubleval(selfX_param);
	selfY = zephir_get_doubleval(selfY_param);
	selfWidth = zephir_get_doubleval(selfWidth_param);
	selfHeight = zephir_get_doubleval(selfHeight_param);
	pX = zephir_get_doubleval(pX_param);
	pY = zephir_get_doubleval(pY_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_DOUBLE(&_0, selfX);
	ZVAL_DOUBLE(&_1, selfY);
	ZVAL_DOUBLE(&_2, selfWidth);
	ZVAL_DOUBLE(&_3, selfHeight);
	ZVAL_DOUBLE(&_4, pX);
	ZVAL_DOUBLE(&_5, pY);
	phpqt_qrectf_translated_q_point_f(&result, &_0, &_1, &_2, &_3, &_4, &_5);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QRectF_QRectF, transposed)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *selfX_param = NULL, *selfY_param = NULL, *selfWidth_param = NULL, *selfHeight_param = NULL, result, _0, _1, _2, _3;
	double selfX, selfY, selfWidth, selfHeight;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_ZVAL(selfX)
		Z_PARAM_ZVAL(selfY)
		Z_PARAM_ZVAL(selfWidth)
		Z_PARAM_ZVAL(selfHeight)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 4, 0, &selfX_param, &selfY_param, &selfWidth_param, &selfHeight_param);
	selfX = zephir_get_doubleval(selfX_param);
	selfY = zephir_get_doubleval(selfY_param);
	selfWidth = zephir_get_doubleval(selfWidth_param);
	selfHeight = zephir_get_doubleval(selfHeight_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_DOUBLE(&_0, selfX);
	ZVAL_DOUBLE(&_1, selfY);
	ZVAL_DOUBLE(&_2, selfWidth);
	ZVAL_DOUBLE(&_3, selfHeight);
	phpqt_qrectf_transposed(&result, &_0, &_1, &_2, &_3);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QRectF_QRectF, moveTo)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *selfX_param = NULL, *selfY_param = NULL, *selfWidth_param = NULL, *selfHeight_param = NULL, *x_param = NULL, *y_param = NULL, result, _0, _1, _2, _3, _4, _5;
	double selfX, selfY, selfWidth, selfHeight, x, y;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_5);
	ZEND_PARSE_PARAMETERS_START(6, 6)
		Z_PARAM_ZVAL(selfX)
		Z_PARAM_ZVAL(selfY)
		Z_PARAM_ZVAL(selfWidth)
		Z_PARAM_ZVAL(selfHeight)
		Z_PARAM_ZVAL(x)
		Z_PARAM_ZVAL(y)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 6, 0, &selfX_param, &selfY_param, &selfWidth_param, &selfHeight_param, &x_param, &y_param);
	selfX = zephir_get_doubleval(selfX_param);
	selfY = zephir_get_doubleval(selfY_param);
	selfWidth = zephir_get_doubleval(selfWidth_param);
	selfHeight = zephir_get_doubleval(selfHeight_param);
	x = zephir_get_doubleval(x_param);
	y = zephir_get_doubleval(y_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_DOUBLE(&_0, selfX);
	ZVAL_DOUBLE(&_1, selfY);
	ZVAL_DOUBLE(&_2, selfWidth);
	ZVAL_DOUBLE(&_3, selfHeight);
	ZVAL_DOUBLE(&_4, x);
	ZVAL_DOUBLE(&_5, y);
	phpqt_qrectf_move_to(&result, &_0, &_1, &_2, &_3, &_4, &_5);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QRectF_QRectF, moveToQPointF)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *selfX_param = NULL, *selfY_param = NULL, *selfWidth_param = NULL, *selfHeight_param = NULL, *pX_param = NULL, *pY_param = NULL, result, _0, _1, _2, _3, _4, _5;
	double selfX, selfY, selfWidth, selfHeight, pX, pY;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_5);
	ZEND_PARSE_PARAMETERS_START(6, 6)
		Z_PARAM_ZVAL(selfX)
		Z_PARAM_ZVAL(selfY)
		Z_PARAM_ZVAL(selfWidth)
		Z_PARAM_ZVAL(selfHeight)
		Z_PARAM_ZVAL(pX)
		Z_PARAM_ZVAL(pY)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 6, 0, &selfX_param, &selfY_param, &selfWidth_param, &selfHeight_param, &pX_param, &pY_param);
	selfX = zephir_get_doubleval(selfX_param);
	selfY = zephir_get_doubleval(selfY_param);
	selfWidth = zephir_get_doubleval(selfWidth_param);
	selfHeight = zephir_get_doubleval(selfHeight_param);
	pX = zephir_get_doubleval(pX_param);
	pY = zephir_get_doubleval(pY_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_DOUBLE(&_0, selfX);
	ZVAL_DOUBLE(&_1, selfY);
	ZVAL_DOUBLE(&_2, selfWidth);
	ZVAL_DOUBLE(&_3, selfHeight);
	ZVAL_DOUBLE(&_4, pX);
	ZVAL_DOUBLE(&_5, pY);
	phpqt_qrectf_move_to_q_point_f(&result, &_0, &_1, &_2, &_3, &_4, &_5);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QRectF_QRectF, setRect)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *selfX_param = NULL, *selfY_param = NULL, *selfWidth_param = NULL, *selfHeight_param = NULL, *x_param = NULL, *y_param = NULL, *w_param = NULL, *h_param = NULL, result, _0, _1, _2, _3, _4, _5, _6, _7;
	double selfX, selfY, selfWidth, selfHeight, x, y, w, h;

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
		Z_PARAM_ZVAL(selfX)
		Z_PARAM_ZVAL(selfY)
		Z_PARAM_ZVAL(selfWidth)
		Z_PARAM_ZVAL(selfHeight)
		Z_PARAM_ZVAL(x)
		Z_PARAM_ZVAL(y)
		Z_PARAM_ZVAL(w)
		Z_PARAM_ZVAL(h)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 8, 0, &selfX_param, &selfY_param, &selfWidth_param, &selfHeight_param, &x_param, &y_param, &w_param, &h_param);
	selfX = zephir_get_doubleval(selfX_param);
	selfY = zephir_get_doubleval(selfY_param);
	selfWidth = zephir_get_doubleval(selfWidth_param);
	selfHeight = zephir_get_doubleval(selfHeight_param);
	x = zephir_get_doubleval(x_param);
	y = zephir_get_doubleval(y_param);
	w = zephir_get_doubleval(w_param);
	h = zephir_get_doubleval(h_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_DOUBLE(&_0, selfX);
	ZVAL_DOUBLE(&_1, selfY);
	ZVAL_DOUBLE(&_2, selfWidth);
	ZVAL_DOUBLE(&_3, selfHeight);
	ZVAL_DOUBLE(&_4, x);
	ZVAL_DOUBLE(&_5, y);
	ZVAL_DOUBLE(&_6, w);
	ZVAL_DOUBLE(&_7, h);
	phpqt_qrectf_set_rect(&result, &_0, &_1, &_2, &_3, &_4, &_5, &_6, &_7);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QRectF_QRectF, getRect)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *selfX_param = NULL, *selfY_param = NULL, *selfWidth_param = NULL, *selfHeight_param = NULL, *x = NULL, x_sub, *y = NULL, y_sub, *w = NULL, w_sub, *h = NULL, h_sub, result, _0, _1, _2, _3;
	double selfX, selfY, selfWidth, selfHeight;

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
		Z_PARAM_ZVAL(selfX)
		Z_PARAM_ZVAL(selfY)
		Z_PARAM_ZVAL(selfWidth)
		Z_PARAM_ZVAL(selfHeight)
		Z_PARAM_ZVAL(x)
		Z_PARAM_ZVAL(y)
		Z_PARAM_ZVAL(w)
		Z_PARAM_ZVAL(h)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 8, 0, &selfX_param, &selfY_param, &selfWidth_param, &selfHeight_param, &x, &y, &w, &h);
	selfX = zephir_get_doubleval(selfX_param);
	selfY = zephir_get_doubleval(selfY_param);
	selfWidth = zephir_get_doubleval(selfWidth_param);
	selfHeight = zephir_get_doubleval(selfHeight_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_DOUBLE(&_0, selfX);
	ZVAL_DOUBLE(&_1, selfY);
	ZVAL_DOUBLE(&_2, selfWidth);
	ZVAL_DOUBLE(&_3, selfHeight);
	phpqt_qrectf_get_rect(&result, &_0, &_1, &_2, &_3, x, y, w, h);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QRectF_QRectF, setCoords)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *selfX_param = NULL, *selfY_param = NULL, *selfWidth_param = NULL, *selfHeight_param = NULL, *x1_param = NULL, *y1_param = NULL, *x2_param = NULL, *y2_param = NULL, result, _0, _1, _2, _3, _4, _5, _6, _7;
	double selfX, selfY, selfWidth, selfHeight, x1, y1, x2, y2;

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
		Z_PARAM_ZVAL(selfX)
		Z_PARAM_ZVAL(selfY)
		Z_PARAM_ZVAL(selfWidth)
		Z_PARAM_ZVAL(selfHeight)
		Z_PARAM_ZVAL(x1)
		Z_PARAM_ZVAL(y1)
		Z_PARAM_ZVAL(x2)
		Z_PARAM_ZVAL(y2)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 8, 0, &selfX_param, &selfY_param, &selfWidth_param, &selfHeight_param, &x1_param, &y1_param, &x2_param, &y2_param);
	selfX = zephir_get_doubleval(selfX_param);
	selfY = zephir_get_doubleval(selfY_param);
	selfWidth = zephir_get_doubleval(selfWidth_param);
	selfHeight = zephir_get_doubleval(selfHeight_param);
	x1 = zephir_get_doubleval(x1_param);
	y1 = zephir_get_doubleval(y1_param);
	x2 = zephir_get_doubleval(x2_param);
	y2 = zephir_get_doubleval(y2_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_DOUBLE(&_0, selfX);
	ZVAL_DOUBLE(&_1, selfY);
	ZVAL_DOUBLE(&_2, selfWidth);
	ZVAL_DOUBLE(&_3, selfHeight);
	ZVAL_DOUBLE(&_4, x1);
	ZVAL_DOUBLE(&_5, y1);
	ZVAL_DOUBLE(&_6, x2);
	ZVAL_DOUBLE(&_7, y2);
	phpqt_qrectf_set_coords(&result, &_0, &_1, &_2, &_3, &_4, &_5, &_6, &_7);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QRectF_QRectF, getCoords)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *selfX_param = NULL, *selfY_param = NULL, *selfWidth_param = NULL, *selfHeight_param = NULL, *x1 = NULL, x1_sub, *y1 = NULL, y1_sub, *x2 = NULL, x2_sub, *y2 = NULL, y2_sub, result, _0, _1, _2, _3;
	double selfX, selfY, selfWidth, selfHeight;

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
		Z_PARAM_ZVAL(selfX)
		Z_PARAM_ZVAL(selfY)
		Z_PARAM_ZVAL(selfWidth)
		Z_PARAM_ZVAL(selfHeight)
		Z_PARAM_ZVAL(x1)
		Z_PARAM_ZVAL(y1)
		Z_PARAM_ZVAL(x2)
		Z_PARAM_ZVAL(y2)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 8, 0, &selfX_param, &selfY_param, &selfWidth_param, &selfHeight_param, &x1, &y1, &x2, &y2);
	selfX = zephir_get_doubleval(selfX_param);
	selfY = zephir_get_doubleval(selfY_param);
	selfWidth = zephir_get_doubleval(selfWidth_param);
	selfHeight = zephir_get_doubleval(selfHeight_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_DOUBLE(&_0, selfX);
	ZVAL_DOUBLE(&_1, selfY);
	ZVAL_DOUBLE(&_2, selfWidth);
	ZVAL_DOUBLE(&_3, selfHeight);
	phpqt_qrectf_get_coords(&result, &_0, &_1, &_2, &_3, x1, y1, x2, y2);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QRectF_QRectF, adjust)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *selfX_param = NULL, *selfY_param = NULL, *selfWidth_param = NULL, *selfHeight_param = NULL, *x1_param = NULL, *y1_param = NULL, *x2_param = NULL, *y2_param = NULL, result, _0, _1, _2, _3, _4, _5, _6, _7;
	double selfX, selfY, selfWidth, selfHeight, x1, y1, x2, y2;

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
		Z_PARAM_ZVAL(selfX)
		Z_PARAM_ZVAL(selfY)
		Z_PARAM_ZVAL(selfWidth)
		Z_PARAM_ZVAL(selfHeight)
		Z_PARAM_ZVAL(x1)
		Z_PARAM_ZVAL(y1)
		Z_PARAM_ZVAL(x2)
		Z_PARAM_ZVAL(y2)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 8, 0, &selfX_param, &selfY_param, &selfWidth_param, &selfHeight_param, &x1_param, &y1_param, &x2_param, &y2_param);
	selfX = zephir_get_doubleval(selfX_param);
	selfY = zephir_get_doubleval(selfY_param);
	selfWidth = zephir_get_doubleval(selfWidth_param);
	selfHeight = zephir_get_doubleval(selfHeight_param);
	x1 = zephir_get_doubleval(x1_param);
	y1 = zephir_get_doubleval(y1_param);
	x2 = zephir_get_doubleval(x2_param);
	y2 = zephir_get_doubleval(y2_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_DOUBLE(&_0, selfX);
	ZVAL_DOUBLE(&_1, selfY);
	ZVAL_DOUBLE(&_2, selfWidth);
	ZVAL_DOUBLE(&_3, selfHeight);
	ZVAL_DOUBLE(&_4, x1);
	ZVAL_DOUBLE(&_5, y1);
	ZVAL_DOUBLE(&_6, x2);
	ZVAL_DOUBLE(&_7, y2);
	phpqt_qrectf_adjust(&result, &_0, &_1, &_2, &_3, &_4, &_5, &_6, &_7);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QRectF_QRectF, adjusted)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *selfX_param = NULL, *selfY_param = NULL, *selfWidth_param = NULL, *selfHeight_param = NULL, *x1_param = NULL, *y1_param = NULL, *x2_param = NULL, *y2_param = NULL, result, _0, _1, _2, _3, _4, _5, _6, _7;
	double selfX, selfY, selfWidth, selfHeight, x1, y1, x2, y2;

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
		Z_PARAM_ZVAL(selfX)
		Z_PARAM_ZVAL(selfY)
		Z_PARAM_ZVAL(selfWidth)
		Z_PARAM_ZVAL(selfHeight)
		Z_PARAM_ZVAL(x1)
		Z_PARAM_ZVAL(y1)
		Z_PARAM_ZVAL(x2)
		Z_PARAM_ZVAL(y2)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 8, 0, &selfX_param, &selfY_param, &selfWidth_param, &selfHeight_param, &x1_param, &y1_param, &x2_param, &y2_param);
	selfX = zephir_get_doubleval(selfX_param);
	selfY = zephir_get_doubleval(selfY_param);
	selfWidth = zephir_get_doubleval(selfWidth_param);
	selfHeight = zephir_get_doubleval(selfHeight_param);
	x1 = zephir_get_doubleval(x1_param);
	y1 = zephir_get_doubleval(y1_param);
	x2 = zephir_get_doubleval(x2_param);
	y2 = zephir_get_doubleval(y2_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_DOUBLE(&_0, selfX);
	ZVAL_DOUBLE(&_1, selfY);
	ZVAL_DOUBLE(&_2, selfWidth);
	ZVAL_DOUBLE(&_3, selfHeight);
	ZVAL_DOUBLE(&_4, x1);
	ZVAL_DOUBLE(&_5, y1);
	ZVAL_DOUBLE(&_6, x2);
	ZVAL_DOUBLE(&_7, y2);
	phpqt_qrectf_adjusted(&result, &_0, &_1, &_2, &_3, &_4, &_5, &_6, &_7);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QRectF_QRectF, size)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *selfX_param = NULL, *selfY_param = NULL, *selfWidth_param = NULL, *selfHeight_param = NULL, result, _0, _1, _2, _3;
	double selfX, selfY, selfWidth, selfHeight;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_ZVAL(selfX)
		Z_PARAM_ZVAL(selfY)
		Z_PARAM_ZVAL(selfWidth)
		Z_PARAM_ZVAL(selfHeight)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 4, 0, &selfX_param, &selfY_param, &selfWidth_param, &selfHeight_param);
	selfX = zephir_get_doubleval(selfX_param);
	selfY = zephir_get_doubleval(selfY_param);
	selfWidth = zephir_get_doubleval(selfWidth_param);
	selfHeight = zephir_get_doubleval(selfHeight_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_DOUBLE(&_0, selfX);
	ZVAL_DOUBLE(&_1, selfY);
	ZVAL_DOUBLE(&_2, selfWidth);
	ZVAL_DOUBLE(&_3, selfHeight);
	phpqt_qrectf_size(&result, &_0, &_1, &_2, &_3);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QRectF_QRectF, width)
{
	zval *selfX_param = NULL, *selfY_param = NULL, *selfWidth_param = NULL, *selfHeight_param = NULL, _0, _1, _2, _3;
	double selfX, selfY, selfWidth, selfHeight;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_ZVAL(selfX)
		Z_PARAM_ZVAL(selfY)
		Z_PARAM_ZVAL(selfWidth)
		Z_PARAM_ZVAL(selfHeight)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 0, &selfX_param, &selfY_param, &selfWidth_param, &selfHeight_param);
	selfX = zephir_get_doubleval(selfX_param);
	selfY = zephir_get_doubleval(selfY_param);
	selfWidth = zephir_get_doubleval(selfWidth_param);
	selfHeight = zephir_get_doubleval(selfHeight_param);
	ZVAL_DOUBLE(&_0, selfX);
	ZVAL_DOUBLE(&_1, selfY);
	ZVAL_DOUBLE(&_2, selfWidth);
	ZVAL_DOUBLE(&_3, selfHeight);
	RETURN_DOUBLE(phpqt_qrectf_width(&_0, &_1, &_2, &_3));
}

PHP_METHOD(Qt_Core_QRectF_QRectF, height)
{
	zval *selfX_param = NULL, *selfY_param = NULL, *selfWidth_param = NULL, *selfHeight_param = NULL, _0, _1, _2, _3;
	double selfX, selfY, selfWidth, selfHeight;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_ZVAL(selfX)
		Z_PARAM_ZVAL(selfY)
		Z_PARAM_ZVAL(selfWidth)
		Z_PARAM_ZVAL(selfHeight)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 0, &selfX_param, &selfY_param, &selfWidth_param, &selfHeight_param);
	selfX = zephir_get_doubleval(selfX_param);
	selfY = zephir_get_doubleval(selfY_param);
	selfWidth = zephir_get_doubleval(selfWidth_param);
	selfHeight = zephir_get_doubleval(selfHeight_param);
	ZVAL_DOUBLE(&_0, selfX);
	ZVAL_DOUBLE(&_1, selfY);
	ZVAL_DOUBLE(&_2, selfWidth);
	ZVAL_DOUBLE(&_3, selfHeight);
	RETURN_DOUBLE(phpqt_qrectf_height(&_0, &_1, &_2, &_3));
}

PHP_METHOD(Qt_Core_QRectF_QRectF, setWidth)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *selfX_param = NULL, *selfY_param = NULL, *selfWidth_param = NULL, *selfHeight_param = NULL, *w_param = NULL, result, _0, _1, _2, _3, _4;
	double selfX, selfY, selfWidth, selfHeight, w;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZEND_PARSE_PARAMETERS_START(5, 5)
		Z_PARAM_ZVAL(selfX)
		Z_PARAM_ZVAL(selfY)
		Z_PARAM_ZVAL(selfWidth)
		Z_PARAM_ZVAL(selfHeight)
		Z_PARAM_ZVAL(w)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 5, 0, &selfX_param, &selfY_param, &selfWidth_param, &selfHeight_param, &w_param);
	selfX = zephir_get_doubleval(selfX_param);
	selfY = zephir_get_doubleval(selfY_param);
	selfWidth = zephir_get_doubleval(selfWidth_param);
	selfHeight = zephir_get_doubleval(selfHeight_param);
	w = zephir_get_doubleval(w_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_DOUBLE(&_0, selfX);
	ZVAL_DOUBLE(&_1, selfY);
	ZVAL_DOUBLE(&_2, selfWidth);
	ZVAL_DOUBLE(&_3, selfHeight);
	ZVAL_DOUBLE(&_4, w);
	phpqt_qrectf_set_width(&result, &_0, &_1, &_2, &_3, &_4);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QRectF_QRectF, setHeight)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *selfX_param = NULL, *selfY_param = NULL, *selfWidth_param = NULL, *selfHeight_param = NULL, *h_param = NULL, result, _0, _1, _2, _3, _4;
	double selfX, selfY, selfWidth, selfHeight, h;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZEND_PARSE_PARAMETERS_START(5, 5)
		Z_PARAM_ZVAL(selfX)
		Z_PARAM_ZVAL(selfY)
		Z_PARAM_ZVAL(selfWidth)
		Z_PARAM_ZVAL(selfHeight)
		Z_PARAM_ZVAL(h)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 5, 0, &selfX_param, &selfY_param, &selfWidth_param, &selfHeight_param, &h_param);
	selfX = zephir_get_doubleval(selfX_param);
	selfY = zephir_get_doubleval(selfY_param);
	selfWidth = zephir_get_doubleval(selfWidth_param);
	selfHeight = zephir_get_doubleval(selfHeight_param);
	h = zephir_get_doubleval(h_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_DOUBLE(&_0, selfX);
	ZVAL_DOUBLE(&_1, selfY);
	ZVAL_DOUBLE(&_2, selfWidth);
	ZVAL_DOUBLE(&_3, selfHeight);
	ZVAL_DOUBLE(&_4, h);
	phpqt_qrectf_set_height(&result, &_0, &_1, &_2, &_3, &_4);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QRectF_QRectF, setSize)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *selfX_param = NULL, *selfY_param = NULL, *selfWidth_param = NULL, *selfHeight_param = NULL, *sWidth_param = NULL, *sHeight_param = NULL, result, _0, _1, _2, _3, _4, _5;
	double selfX, selfY, selfWidth, selfHeight, sWidth, sHeight;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_5);
	ZEND_PARSE_PARAMETERS_START(6, 6)
		Z_PARAM_ZVAL(selfX)
		Z_PARAM_ZVAL(selfY)
		Z_PARAM_ZVAL(selfWidth)
		Z_PARAM_ZVAL(selfHeight)
		Z_PARAM_ZVAL(sWidth)
		Z_PARAM_ZVAL(sHeight)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 6, 0, &selfX_param, &selfY_param, &selfWidth_param, &selfHeight_param, &sWidth_param, &sHeight_param);
	selfX = zephir_get_doubleval(selfX_param);
	selfY = zephir_get_doubleval(selfY_param);
	selfWidth = zephir_get_doubleval(selfWidth_param);
	selfHeight = zephir_get_doubleval(selfHeight_param);
	sWidth = zephir_get_doubleval(sWidth_param);
	sHeight = zephir_get_doubleval(sHeight_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_DOUBLE(&_0, selfX);
	ZVAL_DOUBLE(&_1, selfY);
	ZVAL_DOUBLE(&_2, selfWidth);
	ZVAL_DOUBLE(&_3, selfHeight);
	ZVAL_DOUBLE(&_4, sWidth);
	ZVAL_DOUBLE(&_5, sHeight);
	phpqt_qrectf_set_size(&result, &_0, &_1, &_2, &_3, &_4, &_5);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QRectF_QRectF, contains)
{
	zend_long r = 0;
	zval *selfX_param = NULL, *selfY_param = NULL, *selfWidth_param = NULL, *selfHeight_param = NULL, *rX_param = NULL, *rY_param = NULL, *rWidth_param = NULL, *rHeight_param = NULL, _0, _1, _2, _3, _4, _5, _6, _7;
	double selfX, selfY, selfWidth, selfHeight, rX, rY, rWidth, rHeight;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_5);
	ZVAL_UNDEF(&_6);
	ZVAL_UNDEF(&_7);
	ZEND_PARSE_PARAMETERS_START(8, 8)
		Z_PARAM_ZVAL(selfX)
		Z_PARAM_ZVAL(selfY)
		Z_PARAM_ZVAL(selfWidth)
		Z_PARAM_ZVAL(selfHeight)
		Z_PARAM_ZVAL(rX)
		Z_PARAM_ZVAL(rY)
		Z_PARAM_ZVAL(rWidth)
		Z_PARAM_ZVAL(rHeight)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(8, 0, &selfX_param, &selfY_param, &selfWidth_param, &selfHeight_param, &rX_param, &rY_param, &rWidth_param, &rHeight_param);
	selfX = zephir_get_doubleval(selfX_param);
	selfY = zephir_get_doubleval(selfY_param);
	selfWidth = zephir_get_doubleval(selfWidth_param);
	selfHeight = zephir_get_doubleval(selfHeight_param);
	rX = zephir_get_doubleval(rX_param);
	rY = zephir_get_doubleval(rY_param);
	rWidth = zephir_get_doubleval(rWidth_param);
	rHeight = zephir_get_doubleval(rHeight_param);
	ZVAL_DOUBLE(&_0, selfX);
	ZVAL_DOUBLE(&_1, selfY);
	ZVAL_DOUBLE(&_2, selfWidth);
	ZVAL_DOUBLE(&_3, selfHeight);
	ZVAL_DOUBLE(&_4, rX);
	ZVAL_DOUBLE(&_5, rY);
	ZVAL_DOUBLE(&_6, rWidth);
	ZVAL_DOUBLE(&_7, rHeight);
	r = phpqt_qrectf_contains(&_0, &_1, &_2, &_3, &_4, &_5, &_6, &_7);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QRectF_QRectF, containsQPointF)
{
	zend_long r = 0;
	zval *selfX_param = NULL, *selfY_param = NULL, *selfWidth_param = NULL, *selfHeight_param = NULL, *pX_param = NULL, *pY_param = NULL, _0, _1, _2, _3, _4, _5;
	double selfX, selfY, selfWidth, selfHeight, pX, pY;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_5);
	ZEND_PARSE_PARAMETERS_START(6, 6)
		Z_PARAM_ZVAL(selfX)
		Z_PARAM_ZVAL(selfY)
		Z_PARAM_ZVAL(selfWidth)
		Z_PARAM_ZVAL(selfHeight)
		Z_PARAM_ZVAL(pX)
		Z_PARAM_ZVAL(pY)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(6, 0, &selfX_param, &selfY_param, &selfWidth_param, &selfHeight_param, &pX_param, &pY_param);
	selfX = zephir_get_doubleval(selfX_param);
	selfY = zephir_get_doubleval(selfY_param);
	selfWidth = zephir_get_doubleval(selfWidth_param);
	selfHeight = zephir_get_doubleval(selfHeight_param);
	pX = zephir_get_doubleval(pX_param);
	pY = zephir_get_doubleval(pY_param);
	ZVAL_DOUBLE(&_0, selfX);
	ZVAL_DOUBLE(&_1, selfY);
	ZVAL_DOUBLE(&_2, selfWidth);
	ZVAL_DOUBLE(&_3, selfHeight);
	ZVAL_DOUBLE(&_4, pX);
	ZVAL_DOUBLE(&_5, pY);
	r = phpqt_qrectf_contains_q_point_f(&_0, &_1, &_2, &_3, &_4, &_5);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QRectF_QRectF, containsQrealQreal)
{
	zend_long r = 0;
	zval *selfX_param = NULL, *selfY_param = NULL, *selfWidth_param = NULL, *selfHeight_param = NULL, *x_param = NULL, *y_param = NULL, _0, _1, _2, _3, _4, _5;
	double selfX, selfY, selfWidth, selfHeight, x, y;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_5);
	ZEND_PARSE_PARAMETERS_START(6, 6)
		Z_PARAM_ZVAL(selfX)
		Z_PARAM_ZVAL(selfY)
		Z_PARAM_ZVAL(selfWidth)
		Z_PARAM_ZVAL(selfHeight)
		Z_PARAM_ZVAL(x)
		Z_PARAM_ZVAL(y)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(6, 0, &selfX_param, &selfY_param, &selfWidth_param, &selfHeight_param, &x_param, &y_param);
	selfX = zephir_get_doubleval(selfX_param);
	selfY = zephir_get_doubleval(selfY_param);
	selfWidth = zephir_get_doubleval(selfWidth_param);
	selfHeight = zephir_get_doubleval(selfHeight_param);
	x = zephir_get_doubleval(x_param);
	y = zephir_get_doubleval(y_param);
	ZVAL_DOUBLE(&_0, selfX);
	ZVAL_DOUBLE(&_1, selfY);
	ZVAL_DOUBLE(&_2, selfWidth);
	ZVAL_DOUBLE(&_3, selfHeight);
	ZVAL_DOUBLE(&_4, x);
	ZVAL_DOUBLE(&_5, y);
	r = phpqt_qrectf_contains_qreal_qreal(&_0, &_1, &_2, &_3, &_4, &_5);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QRectF_QRectF, united)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *selfX_param = NULL, *selfY_param = NULL, *selfWidth_param = NULL, *selfHeight_param = NULL, *otherX_param = NULL, *otherY_param = NULL, *otherWidth_param = NULL, *otherHeight_param = NULL, result, _0, _1, _2, _3, _4, _5, _6, _7;
	double selfX, selfY, selfWidth, selfHeight, otherX, otherY, otherWidth, otherHeight;

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
		Z_PARAM_ZVAL(selfX)
		Z_PARAM_ZVAL(selfY)
		Z_PARAM_ZVAL(selfWidth)
		Z_PARAM_ZVAL(selfHeight)
		Z_PARAM_ZVAL(otherX)
		Z_PARAM_ZVAL(otherY)
		Z_PARAM_ZVAL(otherWidth)
		Z_PARAM_ZVAL(otherHeight)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 8, 0, &selfX_param, &selfY_param, &selfWidth_param, &selfHeight_param, &otherX_param, &otherY_param, &otherWidth_param, &otherHeight_param);
	selfX = zephir_get_doubleval(selfX_param);
	selfY = zephir_get_doubleval(selfY_param);
	selfWidth = zephir_get_doubleval(selfWidth_param);
	selfHeight = zephir_get_doubleval(selfHeight_param);
	otherX = zephir_get_doubleval(otherX_param);
	otherY = zephir_get_doubleval(otherY_param);
	otherWidth = zephir_get_doubleval(otherWidth_param);
	otherHeight = zephir_get_doubleval(otherHeight_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_DOUBLE(&_0, selfX);
	ZVAL_DOUBLE(&_1, selfY);
	ZVAL_DOUBLE(&_2, selfWidth);
	ZVAL_DOUBLE(&_3, selfHeight);
	ZVAL_DOUBLE(&_4, otherX);
	ZVAL_DOUBLE(&_5, otherY);
	ZVAL_DOUBLE(&_6, otherWidth);
	ZVAL_DOUBLE(&_7, otherHeight);
	phpqt_qrectf_united(&result, &_0, &_1, &_2, &_3, &_4, &_5, &_6, &_7);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QRectF_QRectF, intersected)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *selfX_param = NULL, *selfY_param = NULL, *selfWidth_param = NULL, *selfHeight_param = NULL, *otherX_param = NULL, *otherY_param = NULL, *otherWidth_param = NULL, *otherHeight_param = NULL, result, _0, _1, _2, _3, _4, _5, _6, _7;
	double selfX, selfY, selfWidth, selfHeight, otherX, otherY, otherWidth, otherHeight;

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
		Z_PARAM_ZVAL(selfX)
		Z_PARAM_ZVAL(selfY)
		Z_PARAM_ZVAL(selfWidth)
		Z_PARAM_ZVAL(selfHeight)
		Z_PARAM_ZVAL(otherX)
		Z_PARAM_ZVAL(otherY)
		Z_PARAM_ZVAL(otherWidth)
		Z_PARAM_ZVAL(otherHeight)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 8, 0, &selfX_param, &selfY_param, &selfWidth_param, &selfHeight_param, &otherX_param, &otherY_param, &otherWidth_param, &otherHeight_param);
	selfX = zephir_get_doubleval(selfX_param);
	selfY = zephir_get_doubleval(selfY_param);
	selfWidth = zephir_get_doubleval(selfWidth_param);
	selfHeight = zephir_get_doubleval(selfHeight_param);
	otherX = zephir_get_doubleval(otherX_param);
	otherY = zephir_get_doubleval(otherY_param);
	otherWidth = zephir_get_doubleval(otherWidth_param);
	otherHeight = zephir_get_doubleval(otherHeight_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_DOUBLE(&_0, selfX);
	ZVAL_DOUBLE(&_1, selfY);
	ZVAL_DOUBLE(&_2, selfWidth);
	ZVAL_DOUBLE(&_3, selfHeight);
	ZVAL_DOUBLE(&_4, otherX);
	ZVAL_DOUBLE(&_5, otherY);
	ZVAL_DOUBLE(&_6, otherWidth);
	ZVAL_DOUBLE(&_7, otherHeight);
	phpqt_qrectf_intersected(&result, &_0, &_1, &_2, &_3, &_4, &_5, &_6, &_7);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QRectF_QRectF, intersects)
{
	zend_long r = 0;
	zval *selfX_param = NULL, *selfY_param = NULL, *selfWidth_param = NULL, *selfHeight_param = NULL, *rX_param = NULL, *rY_param = NULL, *rWidth_param = NULL, *rHeight_param = NULL, _0, _1, _2, _3, _4, _5, _6, _7;
	double selfX, selfY, selfWidth, selfHeight, rX, rY, rWidth, rHeight;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_5);
	ZVAL_UNDEF(&_6);
	ZVAL_UNDEF(&_7);
	ZEND_PARSE_PARAMETERS_START(8, 8)
		Z_PARAM_ZVAL(selfX)
		Z_PARAM_ZVAL(selfY)
		Z_PARAM_ZVAL(selfWidth)
		Z_PARAM_ZVAL(selfHeight)
		Z_PARAM_ZVAL(rX)
		Z_PARAM_ZVAL(rY)
		Z_PARAM_ZVAL(rWidth)
		Z_PARAM_ZVAL(rHeight)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(8, 0, &selfX_param, &selfY_param, &selfWidth_param, &selfHeight_param, &rX_param, &rY_param, &rWidth_param, &rHeight_param);
	selfX = zephir_get_doubleval(selfX_param);
	selfY = zephir_get_doubleval(selfY_param);
	selfWidth = zephir_get_doubleval(selfWidth_param);
	selfHeight = zephir_get_doubleval(selfHeight_param);
	rX = zephir_get_doubleval(rX_param);
	rY = zephir_get_doubleval(rY_param);
	rWidth = zephir_get_doubleval(rWidth_param);
	rHeight = zephir_get_doubleval(rHeight_param);
	ZVAL_DOUBLE(&_0, selfX);
	ZVAL_DOUBLE(&_1, selfY);
	ZVAL_DOUBLE(&_2, selfWidth);
	ZVAL_DOUBLE(&_3, selfHeight);
	ZVAL_DOUBLE(&_4, rX);
	ZVAL_DOUBLE(&_5, rY);
	ZVAL_DOUBLE(&_6, rWidth);
	ZVAL_DOUBLE(&_7, rHeight);
	r = phpqt_qrectf_intersects(&_0, &_1, &_2, &_3, &_4, &_5, &_6, &_7);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QRectF_QRectF, marginsAdded)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *selfX_param = NULL, *selfY_param = NULL, *selfWidth_param = NULL, *selfHeight_param = NULL, *marginsLeft_param = NULL, *marginsTop_param = NULL, *marginsRight_param = NULL, *marginsBottom_param = NULL, result, _0, _1, _2, _3, _4, _5, _6, _7;
	double selfX, selfY, selfWidth, selfHeight, marginsLeft, marginsTop, marginsRight, marginsBottom;

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
		Z_PARAM_ZVAL(selfX)
		Z_PARAM_ZVAL(selfY)
		Z_PARAM_ZVAL(selfWidth)
		Z_PARAM_ZVAL(selfHeight)
		Z_PARAM_ZVAL(marginsLeft)
		Z_PARAM_ZVAL(marginsTop)
		Z_PARAM_ZVAL(marginsRight)
		Z_PARAM_ZVAL(marginsBottom)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 8, 0, &selfX_param, &selfY_param, &selfWidth_param, &selfHeight_param, &marginsLeft_param, &marginsTop_param, &marginsRight_param, &marginsBottom_param);
	selfX = zephir_get_doubleval(selfX_param);
	selfY = zephir_get_doubleval(selfY_param);
	selfWidth = zephir_get_doubleval(selfWidth_param);
	selfHeight = zephir_get_doubleval(selfHeight_param);
	marginsLeft = zephir_get_doubleval(marginsLeft_param);
	marginsTop = zephir_get_doubleval(marginsTop_param);
	marginsRight = zephir_get_doubleval(marginsRight_param);
	marginsBottom = zephir_get_doubleval(marginsBottom_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_DOUBLE(&_0, selfX);
	ZVAL_DOUBLE(&_1, selfY);
	ZVAL_DOUBLE(&_2, selfWidth);
	ZVAL_DOUBLE(&_3, selfHeight);
	ZVAL_DOUBLE(&_4, marginsLeft);
	ZVAL_DOUBLE(&_5, marginsTop);
	ZVAL_DOUBLE(&_6, marginsRight);
	ZVAL_DOUBLE(&_7, marginsBottom);
	phpqt_qrectf_margins_added(&result, &_0, &_1, &_2, &_3, &_4, &_5, &_6, &_7);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QRectF_QRectF, marginsRemoved)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *selfX_param = NULL, *selfY_param = NULL, *selfWidth_param = NULL, *selfHeight_param = NULL, *marginsLeft_param = NULL, *marginsTop_param = NULL, *marginsRight_param = NULL, *marginsBottom_param = NULL, result, _0, _1, _2, _3, _4, _5, _6, _7;
	double selfX, selfY, selfWidth, selfHeight, marginsLeft, marginsTop, marginsRight, marginsBottom;

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
		Z_PARAM_ZVAL(selfX)
		Z_PARAM_ZVAL(selfY)
		Z_PARAM_ZVAL(selfWidth)
		Z_PARAM_ZVAL(selfHeight)
		Z_PARAM_ZVAL(marginsLeft)
		Z_PARAM_ZVAL(marginsTop)
		Z_PARAM_ZVAL(marginsRight)
		Z_PARAM_ZVAL(marginsBottom)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 8, 0, &selfX_param, &selfY_param, &selfWidth_param, &selfHeight_param, &marginsLeft_param, &marginsTop_param, &marginsRight_param, &marginsBottom_param);
	selfX = zephir_get_doubleval(selfX_param);
	selfY = zephir_get_doubleval(selfY_param);
	selfWidth = zephir_get_doubleval(selfWidth_param);
	selfHeight = zephir_get_doubleval(selfHeight_param);
	marginsLeft = zephir_get_doubleval(marginsLeft_param);
	marginsTop = zephir_get_doubleval(marginsTop_param);
	marginsRight = zephir_get_doubleval(marginsRight_param);
	marginsBottom = zephir_get_doubleval(marginsBottom_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_DOUBLE(&_0, selfX);
	ZVAL_DOUBLE(&_1, selfY);
	ZVAL_DOUBLE(&_2, selfWidth);
	ZVAL_DOUBLE(&_3, selfHeight);
	ZVAL_DOUBLE(&_4, marginsLeft);
	ZVAL_DOUBLE(&_5, marginsTop);
	ZVAL_DOUBLE(&_6, marginsRight);
	ZVAL_DOUBLE(&_7, marginsBottom);
	phpqt_qrectf_margins_removed(&result, &_0, &_1, &_2, &_3, &_4, &_5, &_6, &_7);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QRectF_QRectF, toRect)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *selfX_param = NULL, *selfY_param = NULL, *selfWidth_param = NULL, *selfHeight_param = NULL, result, _0, _1, _2, _3;
	double selfX, selfY, selfWidth, selfHeight;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_ZVAL(selfX)
		Z_PARAM_ZVAL(selfY)
		Z_PARAM_ZVAL(selfWidth)
		Z_PARAM_ZVAL(selfHeight)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 4, 0, &selfX_param, &selfY_param, &selfWidth_param, &selfHeight_param);
	selfX = zephir_get_doubleval(selfX_param);
	selfY = zephir_get_doubleval(selfY_param);
	selfWidth = zephir_get_doubleval(selfWidth_param);
	selfHeight = zephir_get_doubleval(selfHeight_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_DOUBLE(&_0, selfX);
	ZVAL_DOUBLE(&_1, selfY);
	ZVAL_DOUBLE(&_2, selfWidth);
	ZVAL_DOUBLE(&_3, selfHeight);
	phpqt_qrectf_to_rect(&result, &_0, &_1, &_2, &_3);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QRectF_QRectF, toAlignedRect)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *selfX_param = NULL, *selfY_param = NULL, *selfWidth_param = NULL, *selfHeight_param = NULL, result, _0, _1, _2, _3;
	double selfX, selfY, selfWidth, selfHeight;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_ZVAL(selfX)
		Z_PARAM_ZVAL(selfY)
		Z_PARAM_ZVAL(selfWidth)
		Z_PARAM_ZVAL(selfHeight)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 4, 0, &selfX_param, &selfY_param, &selfWidth_param, &selfHeight_param);
	selfX = zephir_get_doubleval(selfX_param);
	selfY = zephir_get_doubleval(selfY_param);
	selfWidth = zephir_get_doubleval(selfWidth_param);
	selfHeight = zephir_get_doubleval(selfHeight_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_DOUBLE(&_0, selfX);
	ZVAL_DOUBLE(&_1, selfY);
	ZVAL_DOUBLE(&_2, selfWidth);
	ZVAL_DOUBLE(&_3, selfHeight);
	phpqt_qrectf_to_aligned_rect(&result, &_0, &_1, &_2, &_3);
	RETURN_CCTOR(&result);
}

