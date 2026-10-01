
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
#include "src/core-qpointfunctions.h"
#include "kernel/operators.h"
#include "kernel/memory.h"
#include "kernel/object.h"


ZEPHIR_INIT_CLASS(Qt_Core_QPointFunctions_QPointFunctions)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Core\\QPointFunctions, QPointFunctions, qt, core_qpointfunctions_qpointfunctions, qt_core_qpointfunctions_qpointfunctions_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Core_QPointFunctions_QPointFunctions, qHash)
{
	zval *keyX_param = NULL, *keyY_param = NULL, *seed_param = NULL, _0, _1, _2;
	zend_long keyX, keyY, seed;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(2, 3)
		Z_PARAM_LONG(keyX)
		Z_PARAM_LONG(keyY)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(seed)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 1, &keyX_param, &keyY_param, &seed_param);
	if (!seed_param) {
		seed = 0;
	} else {
		}
	ZVAL_LONG(&_0, keyX);
	ZVAL_LONG(&_1, keyY);
	ZVAL_LONG(&_2, seed);
	RETURN_LONG(phpqt_qpointfunctions_q_hash(&_0, &_1, &_2));
}

PHP_METHOD(Qt_Core_QPointFunctions_QPointFunctions, comparesEqual)
{
	zval *p1X_param = NULL, *p1Y_param = NULL, *p2X_param = NULL, *p2Y_param = NULL, _0, _1, _2, _3;
	zend_long p1X, p1Y, p2X, p2Y, r = 0;

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
	r = phpqt_qpointfunctions_compares_equal(&_0, &_1, &_2, &_3);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QPointFunctions_QPointFunctions, comparesEqualQPointFQPoint)
{
	zend_long p2X, p2Y, r = 0;
	zval *p1X_param = NULL, *p1Y_param = NULL, *p2X_param = NULL, *p2Y_param = NULL, _0, _1, _2, _3;
	double p1X, p1Y;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_ZVAL(p1X)
		Z_PARAM_ZVAL(p1Y)
		Z_PARAM_LONG(p2X)
		Z_PARAM_LONG(p2Y)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 0, &p1X_param, &p1Y_param, &p2X_param, &p2Y_param);
	p1X = zephir_get_doubleval(p1X_param);
	p1Y = zephir_get_doubleval(p1Y_param);
	ZVAL_DOUBLE(&_0, p1X);
	ZVAL_DOUBLE(&_1, p1Y);
	ZVAL_LONG(&_2, p2X);
	ZVAL_LONG(&_3, p2Y);
	r = phpqt_qpointfunctions_compares_equal_q_point_f_q_point(&_0, &_1, &_2, &_3);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QPointFunctions_QPointFunctions, comparesEqualQPointFQPointF)
{
	zend_long r = 0;
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
	r = phpqt_qpointfunctions_compares_equal_q_point_f_q_point_f(&_0, &_1, &_2, &_3);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QPointFunctions_QPointFunctions, qFuzzyIsNull)
{
	zend_long r = 0;
	zval *pointX_param = NULL, *pointY_param = NULL, _0, _1;
	double pointX, pointY;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_ZVAL(pointX)
		Z_PARAM_ZVAL(pointY)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &pointX_param, &pointY_param);
	pointX = zephir_get_doubleval(pointX_param);
	pointY = zephir_get_doubleval(pointY_param);
	ZVAL_DOUBLE(&_0, pointX);
	ZVAL_DOUBLE(&_1, pointY);
	r = phpqt_qpointfunctions_q_fuzzy_is_null(&_0, &_1);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QPointFunctions_QPointFunctions, qFuzzyCompare)
{
	zend_long r = 0;
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
	r = phpqt_qpointfunctions_q_fuzzy_compare(&_0, &_1, &_2, &_3);
	RETURN_BOOL(r == 1);
}

