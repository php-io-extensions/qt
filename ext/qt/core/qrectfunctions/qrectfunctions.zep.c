
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
#include "src/core-qrectfunctions.h"
#include "kernel/operators.h"
#include "kernel/memory.h"
#include "kernel/object.h"


ZEPHIR_INIT_CLASS(Qt_Core_QRectFunctions_QRectFunctions)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Core\\QRectFunctions, QRectFunctions, qt, core_qrectfunctions_qrectfunctions, qt_core_qrectfunctions_qrectfunctions_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Core_QRectFunctions_QRectFunctions, qHash)
{
	zval *arg0X_param = NULL, *arg0Y_param = NULL, *arg0Width_param = NULL, *arg0Height_param = NULL, *arg1_param = NULL, _0, _1, _2, _3, _4;
	zend_long arg0X, arg0Y, arg0Width, arg0Height, arg1;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZEND_PARSE_PARAMETERS_START(4, 5)
		Z_PARAM_LONG(arg0X)
		Z_PARAM_LONG(arg0Y)
		Z_PARAM_LONG(arg0Width)
		Z_PARAM_LONG(arg0Height)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(arg1)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 1, &arg0X_param, &arg0Y_param, &arg0Width_param, &arg0Height_param, &arg1_param);
	if (!arg1_param) {
		arg1 = 0;
	} else {
		}
	ZVAL_LONG(&_0, arg0X);
	ZVAL_LONG(&_1, arg0Y);
	ZVAL_LONG(&_2, arg0Width);
	ZVAL_LONG(&_3, arg0Height);
	ZVAL_LONG(&_4, arg1);
	RETURN_LONG(phpqt_qrectfunctions_q_hash(&_0, &_1, &_2, &_3, &_4));
}

PHP_METHOD(Qt_Core_QRectFunctions_QRectFunctions, comparesEqual)
{
	zval *r1X_param = NULL, *r1Y_param = NULL, *r1Width_param = NULL, *r1Height_param = NULL, *r2X_param = NULL, *r2Y_param = NULL, *r2Width_param = NULL, *r2Height_param = NULL, _0, _1, _2, _3, _4, _5, _6, _7;
	zend_long r1X, r1Y, r1Width, r1Height, r2X, r2Y, r2Width, r2Height, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_5);
	ZVAL_UNDEF(&_6);
	ZVAL_UNDEF(&_7);
	ZEND_PARSE_PARAMETERS_START(8, 8)
		Z_PARAM_LONG(r1X)
		Z_PARAM_LONG(r1Y)
		Z_PARAM_LONG(r1Width)
		Z_PARAM_LONG(r1Height)
		Z_PARAM_LONG(r2X)
		Z_PARAM_LONG(r2Y)
		Z_PARAM_LONG(r2Width)
		Z_PARAM_LONG(r2Height)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(8, 0, &r1X_param, &r1Y_param, &r1Width_param, &r1Height_param, &r2X_param, &r2Y_param, &r2Width_param, &r2Height_param);
	ZVAL_LONG(&_0, r1X);
	ZVAL_LONG(&_1, r1Y);
	ZVAL_LONG(&_2, r1Width);
	ZVAL_LONG(&_3, r1Height);
	ZVAL_LONG(&_4, r2X);
	ZVAL_LONG(&_5, r2Y);
	ZVAL_LONG(&_6, r2Width);
	ZVAL_LONG(&_7, r2Height);
	r = phpqt_qrectfunctions_compares_equal(&_0, &_1, &_2, &_3, &_4, &_5, &_6, &_7);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QRectFunctions_QRectFunctions, qFuzzyIsNull)
{
	zend_long r = 0;
	zval *rectX_param = NULL, *rectY_param = NULL, *rectWidth_param = NULL, *rectHeight_param = NULL, _0, _1, _2, _3;
	double rectX, rectY, rectWidth, rectHeight;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_ZVAL(rectX)
		Z_PARAM_ZVAL(rectY)
		Z_PARAM_ZVAL(rectWidth)
		Z_PARAM_ZVAL(rectHeight)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 0, &rectX_param, &rectY_param, &rectWidth_param, &rectHeight_param);
	rectX = zephir_get_doubleval(rectX_param);
	rectY = zephir_get_doubleval(rectY_param);
	rectWidth = zephir_get_doubleval(rectWidth_param);
	rectHeight = zephir_get_doubleval(rectHeight_param);
	ZVAL_DOUBLE(&_0, rectX);
	ZVAL_DOUBLE(&_1, rectY);
	ZVAL_DOUBLE(&_2, rectWidth);
	ZVAL_DOUBLE(&_3, rectHeight);
	r = phpqt_qrectfunctions_q_fuzzy_is_null(&_0, &_1, &_2, &_3);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QRectFunctions_QRectFunctions, qFuzzyCompare)
{
	zend_long r = 0;
	zval *lhsX_param = NULL, *lhsY_param = NULL, *lhsWidth_param = NULL, *lhsHeight_param = NULL, *rhsX_param = NULL, *rhsY_param = NULL, *rhsWidth_param = NULL, *rhsHeight_param = NULL, _0, _1, _2, _3, _4, _5, _6, _7;
	double lhsX, lhsY, lhsWidth, lhsHeight, rhsX, rhsY, rhsWidth, rhsHeight;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_5);
	ZVAL_UNDEF(&_6);
	ZVAL_UNDEF(&_7);
	ZEND_PARSE_PARAMETERS_START(8, 8)
		Z_PARAM_ZVAL(lhsX)
		Z_PARAM_ZVAL(lhsY)
		Z_PARAM_ZVAL(lhsWidth)
		Z_PARAM_ZVAL(lhsHeight)
		Z_PARAM_ZVAL(rhsX)
		Z_PARAM_ZVAL(rhsY)
		Z_PARAM_ZVAL(rhsWidth)
		Z_PARAM_ZVAL(rhsHeight)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(8, 0, &lhsX_param, &lhsY_param, &lhsWidth_param, &lhsHeight_param, &rhsX_param, &rhsY_param, &rhsWidth_param, &rhsHeight_param);
	lhsX = zephir_get_doubleval(lhsX_param);
	lhsY = zephir_get_doubleval(lhsY_param);
	lhsWidth = zephir_get_doubleval(lhsWidth_param);
	lhsHeight = zephir_get_doubleval(lhsHeight_param);
	rhsX = zephir_get_doubleval(rhsX_param);
	rhsY = zephir_get_doubleval(rhsY_param);
	rhsWidth = zephir_get_doubleval(rhsWidth_param);
	rhsHeight = zephir_get_doubleval(rhsHeight_param);
	ZVAL_DOUBLE(&_0, lhsX);
	ZVAL_DOUBLE(&_1, lhsY);
	ZVAL_DOUBLE(&_2, lhsWidth);
	ZVAL_DOUBLE(&_3, lhsHeight);
	ZVAL_DOUBLE(&_4, rhsX);
	ZVAL_DOUBLE(&_5, rhsY);
	ZVAL_DOUBLE(&_6, rhsWidth);
	ZVAL_DOUBLE(&_7, rhsHeight);
	r = phpqt_qrectfunctions_q_fuzzy_compare(&_0, &_1, &_2, &_3, &_4, &_5, &_6, &_7);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QRectFunctions_QRectFunctions, comparesEqualQRectFQRect)
{
	zend_long r2X, r2Y, r2Width, r2Height, r = 0;
	zval *r1X_param = NULL, *r1Y_param = NULL, *r1Width_param = NULL, *r1Height_param = NULL, *r2X_param = NULL, *r2Y_param = NULL, *r2Width_param = NULL, *r2Height_param = NULL, _0, _1, _2, _3, _4, _5, _6, _7;
	double r1X, r1Y, r1Width, r1Height;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_5);
	ZVAL_UNDEF(&_6);
	ZVAL_UNDEF(&_7);
	ZEND_PARSE_PARAMETERS_START(8, 8)
		Z_PARAM_ZVAL(r1X)
		Z_PARAM_ZVAL(r1Y)
		Z_PARAM_ZVAL(r1Width)
		Z_PARAM_ZVAL(r1Height)
		Z_PARAM_LONG(r2X)
		Z_PARAM_LONG(r2Y)
		Z_PARAM_LONG(r2Width)
		Z_PARAM_LONG(r2Height)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(8, 0, &r1X_param, &r1Y_param, &r1Width_param, &r1Height_param, &r2X_param, &r2Y_param, &r2Width_param, &r2Height_param);
	r1X = zephir_get_doubleval(r1X_param);
	r1Y = zephir_get_doubleval(r1Y_param);
	r1Width = zephir_get_doubleval(r1Width_param);
	r1Height = zephir_get_doubleval(r1Height_param);
	ZVAL_DOUBLE(&_0, r1X);
	ZVAL_DOUBLE(&_1, r1Y);
	ZVAL_DOUBLE(&_2, r1Width);
	ZVAL_DOUBLE(&_3, r1Height);
	ZVAL_LONG(&_4, r2X);
	ZVAL_LONG(&_5, r2Y);
	ZVAL_LONG(&_6, r2Width);
	ZVAL_LONG(&_7, r2Height);
	r = phpqt_qrectfunctions_compares_equal_q_rect_f_q_rect(&_0, &_1, &_2, &_3, &_4, &_5, &_6, &_7);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QRectFunctions_QRectFunctions, comparesEqualQRectFQRectF)
{
	zend_long r = 0;
	zval *r1X_param = NULL, *r1Y_param = NULL, *r1Width_param = NULL, *r1Height_param = NULL, *r2X_param = NULL, *r2Y_param = NULL, *r2Width_param = NULL, *r2Height_param = NULL, _0, _1, _2, _3, _4, _5, _6, _7;
	double r1X, r1Y, r1Width, r1Height, r2X, r2Y, r2Width, r2Height;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_5);
	ZVAL_UNDEF(&_6);
	ZVAL_UNDEF(&_7);
	ZEND_PARSE_PARAMETERS_START(8, 8)
		Z_PARAM_ZVAL(r1X)
		Z_PARAM_ZVAL(r1Y)
		Z_PARAM_ZVAL(r1Width)
		Z_PARAM_ZVAL(r1Height)
		Z_PARAM_ZVAL(r2X)
		Z_PARAM_ZVAL(r2Y)
		Z_PARAM_ZVAL(r2Width)
		Z_PARAM_ZVAL(r2Height)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(8, 0, &r1X_param, &r1Y_param, &r1Width_param, &r1Height_param, &r2X_param, &r2Y_param, &r2Width_param, &r2Height_param);
	r1X = zephir_get_doubleval(r1X_param);
	r1Y = zephir_get_doubleval(r1Y_param);
	r1Width = zephir_get_doubleval(r1Width_param);
	r1Height = zephir_get_doubleval(r1Height_param);
	r2X = zephir_get_doubleval(r2X_param);
	r2Y = zephir_get_doubleval(r2Y_param);
	r2Width = zephir_get_doubleval(r2Width_param);
	r2Height = zephir_get_doubleval(r2Height_param);
	ZVAL_DOUBLE(&_0, r1X);
	ZVAL_DOUBLE(&_1, r1Y);
	ZVAL_DOUBLE(&_2, r1Width);
	ZVAL_DOUBLE(&_3, r1Height);
	ZVAL_DOUBLE(&_4, r2X);
	ZVAL_DOUBLE(&_5, r2Y);
	ZVAL_DOUBLE(&_6, r2Width);
	ZVAL_DOUBLE(&_7, r2Height);
	r = phpqt_qrectfunctions_compares_equal_q_rect_f_q_rect_f(&_0, &_1, &_2, &_3, &_4, &_5, &_6, &_7);
	RETURN_BOOL(r == 1);
}

