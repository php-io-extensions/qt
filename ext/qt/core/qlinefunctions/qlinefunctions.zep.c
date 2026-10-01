
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
#include "src/core-qlinefunctions.h"
#include "kernel/operators.h"
#include "kernel/memory.h"
#include "kernel/object.h"


ZEPHIR_INIT_CLASS(Qt_Core_QLineFunctions_QLineFunctions)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Core\\QLineFunctions, QLineFunctions, qt, core_qlinefunctions_qlinefunctions, qt_core_qlinefunctions_qlinefunctions_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Core_QLineFunctions_QLineFunctions, comparesEqual)
{
	zval *lhsX1_param = NULL, *lhsY1_param = NULL, *lhsX2_param = NULL, *lhsY2_param = NULL, *rhsX1_param = NULL, *rhsY1_param = NULL, *rhsX2_param = NULL, *rhsY2_param = NULL, _0, _1, _2, _3, _4, _5, _6, _7;
	zend_long lhsX1, lhsY1, lhsX2, lhsY2, rhsX1, rhsY1, rhsX2, rhsY2, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_5);
	ZVAL_UNDEF(&_6);
	ZVAL_UNDEF(&_7);
	ZEND_PARSE_PARAMETERS_START(8, 8)
		Z_PARAM_LONG(lhsX1)
		Z_PARAM_LONG(lhsY1)
		Z_PARAM_LONG(lhsX2)
		Z_PARAM_LONG(lhsY2)
		Z_PARAM_LONG(rhsX1)
		Z_PARAM_LONG(rhsY1)
		Z_PARAM_LONG(rhsX2)
		Z_PARAM_LONG(rhsY2)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(8, 0, &lhsX1_param, &lhsY1_param, &lhsX2_param, &lhsY2_param, &rhsX1_param, &rhsY1_param, &rhsX2_param, &rhsY2_param);
	ZVAL_LONG(&_0, lhsX1);
	ZVAL_LONG(&_1, lhsY1);
	ZVAL_LONG(&_2, lhsX2);
	ZVAL_LONG(&_3, lhsY2);
	ZVAL_LONG(&_4, rhsX1);
	ZVAL_LONG(&_5, rhsY1);
	ZVAL_LONG(&_6, rhsX2);
	ZVAL_LONG(&_7, rhsY2);
	r = phpqt_qlinefunctions_compares_equal(&_0, &_1, &_2, &_3, &_4, &_5, &_6, &_7);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QLineFunctions_QLineFunctions, qFuzzyIsNull)
{
	zend_long r = 0;
	zval *lineX1_param = NULL, *lineY1_param = NULL, *lineX2_param = NULL, *lineY2_param = NULL, _0, _1, _2, _3;
	double lineX1, lineY1, lineX2, lineY2;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_ZVAL(lineX1)
		Z_PARAM_ZVAL(lineY1)
		Z_PARAM_ZVAL(lineX2)
		Z_PARAM_ZVAL(lineY2)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 0, &lineX1_param, &lineY1_param, &lineX2_param, &lineY2_param);
	lineX1 = zephir_get_doubleval(lineX1_param);
	lineY1 = zephir_get_doubleval(lineY1_param);
	lineX2 = zephir_get_doubleval(lineX2_param);
	lineY2 = zephir_get_doubleval(lineY2_param);
	ZVAL_DOUBLE(&_0, lineX1);
	ZVAL_DOUBLE(&_1, lineY1);
	ZVAL_DOUBLE(&_2, lineX2);
	ZVAL_DOUBLE(&_3, lineY2);
	r = phpqt_qlinefunctions_q_fuzzy_is_null(&_0, &_1, &_2, &_3);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QLineFunctions_QLineFunctions, qFuzzyCompare)
{
	zend_long r = 0;
	zval *lhsX1_param = NULL, *lhsY1_param = NULL, *lhsX2_param = NULL, *lhsY2_param = NULL, *rhsX1_param = NULL, *rhsY1_param = NULL, *rhsX2_param = NULL, *rhsY2_param = NULL, _0, _1, _2, _3, _4, _5, _6, _7;
	double lhsX1, lhsY1, lhsX2, lhsY2, rhsX1, rhsY1, rhsX2, rhsY2;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_5);
	ZVAL_UNDEF(&_6);
	ZVAL_UNDEF(&_7);
	ZEND_PARSE_PARAMETERS_START(8, 8)
		Z_PARAM_ZVAL(lhsX1)
		Z_PARAM_ZVAL(lhsY1)
		Z_PARAM_ZVAL(lhsX2)
		Z_PARAM_ZVAL(lhsY2)
		Z_PARAM_ZVAL(rhsX1)
		Z_PARAM_ZVAL(rhsY1)
		Z_PARAM_ZVAL(rhsX2)
		Z_PARAM_ZVAL(rhsY2)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(8, 0, &lhsX1_param, &lhsY1_param, &lhsX2_param, &lhsY2_param, &rhsX1_param, &rhsY1_param, &rhsX2_param, &rhsY2_param);
	lhsX1 = zephir_get_doubleval(lhsX1_param);
	lhsY1 = zephir_get_doubleval(lhsY1_param);
	lhsX2 = zephir_get_doubleval(lhsX2_param);
	lhsY2 = zephir_get_doubleval(lhsY2_param);
	rhsX1 = zephir_get_doubleval(rhsX1_param);
	rhsY1 = zephir_get_doubleval(rhsY1_param);
	rhsX2 = zephir_get_doubleval(rhsX2_param);
	rhsY2 = zephir_get_doubleval(rhsY2_param);
	ZVAL_DOUBLE(&_0, lhsX1);
	ZVAL_DOUBLE(&_1, lhsY1);
	ZVAL_DOUBLE(&_2, lhsX2);
	ZVAL_DOUBLE(&_3, lhsY2);
	ZVAL_DOUBLE(&_4, rhsX1);
	ZVAL_DOUBLE(&_5, rhsY1);
	ZVAL_DOUBLE(&_6, rhsX2);
	ZVAL_DOUBLE(&_7, rhsY2);
	r = phpqt_qlinefunctions_q_fuzzy_compare(&_0, &_1, &_2, &_3, &_4, &_5, &_6, &_7);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QLineFunctions_QLineFunctions, comparesEqualQLineFQLine)
{
	zend_long rhsX1, rhsY1, rhsX2, rhsY2, r = 0;
	zval *lhsX1_param = NULL, *lhsY1_param = NULL, *lhsX2_param = NULL, *lhsY2_param = NULL, *rhsX1_param = NULL, *rhsY1_param = NULL, *rhsX2_param = NULL, *rhsY2_param = NULL, _0, _1, _2, _3, _4, _5, _6, _7;
	double lhsX1, lhsY1, lhsX2, lhsY2;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_5);
	ZVAL_UNDEF(&_6);
	ZVAL_UNDEF(&_7);
	ZEND_PARSE_PARAMETERS_START(8, 8)
		Z_PARAM_ZVAL(lhsX1)
		Z_PARAM_ZVAL(lhsY1)
		Z_PARAM_ZVAL(lhsX2)
		Z_PARAM_ZVAL(lhsY2)
		Z_PARAM_LONG(rhsX1)
		Z_PARAM_LONG(rhsY1)
		Z_PARAM_LONG(rhsX2)
		Z_PARAM_LONG(rhsY2)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(8, 0, &lhsX1_param, &lhsY1_param, &lhsX2_param, &lhsY2_param, &rhsX1_param, &rhsY1_param, &rhsX2_param, &rhsY2_param);
	lhsX1 = zephir_get_doubleval(lhsX1_param);
	lhsY1 = zephir_get_doubleval(lhsY1_param);
	lhsX2 = zephir_get_doubleval(lhsX2_param);
	lhsY2 = zephir_get_doubleval(lhsY2_param);
	ZVAL_DOUBLE(&_0, lhsX1);
	ZVAL_DOUBLE(&_1, lhsY1);
	ZVAL_DOUBLE(&_2, lhsX2);
	ZVAL_DOUBLE(&_3, lhsY2);
	ZVAL_LONG(&_4, rhsX1);
	ZVAL_LONG(&_5, rhsY1);
	ZVAL_LONG(&_6, rhsX2);
	ZVAL_LONG(&_7, rhsY2);
	r = phpqt_qlinefunctions_compares_equal_q_line_f_q_line(&_0, &_1, &_2, &_3, &_4, &_5, &_6, &_7);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QLineFunctions_QLineFunctions, comparesEqualQLineFQLineF)
{
	zend_long r = 0;
	zval *lhsX1_param = NULL, *lhsY1_param = NULL, *lhsX2_param = NULL, *lhsY2_param = NULL, *rhsX1_param = NULL, *rhsY1_param = NULL, *rhsX2_param = NULL, *rhsY2_param = NULL, _0, _1, _2, _3, _4, _5, _6, _7;
	double lhsX1, lhsY1, lhsX2, lhsY2, rhsX1, rhsY1, rhsX2, rhsY2;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_5);
	ZVAL_UNDEF(&_6);
	ZVAL_UNDEF(&_7);
	ZEND_PARSE_PARAMETERS_START(8, 8)
		Z_PARAM_ZVAL(lhsX1)
		Z_PARAM_ZVAL(lhsY1)
		Z_PARAM_ZVAL(lhsX2)
		Z_PARAM_ZVAL(lhsY2)
		Z_PARAM_ZVAL(rhsX1)
		Z_PARAM_ZVAL(rhsY1)
		Z_PARAM_ZVAL(rhsX2)
		Z_PARAM_ZVAL(rhsY2)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(8, 0, &lhsX1_param, &lhsY1_param, &lhsX2_param, &lhsY2_param, &rhsX1_param, &rhsY1_param, &rhsX2_param, &rhsY2_param);
	lhsX1 = zephir_get_doubleval(lhsX1_param);
	lhsY1 = zephir_get_doubleval(lhsY1_param);
	lhsX2 = zephir_get_doubleval(lhsX2_param);
	lhsY2 = zephir_get_doubleval(lhsY2_param);
	rhsX1 = zephir_get_doubleval(rhsX1_param);
	rhsY1 = zephir_get_doubleval(rhsY1_param);
	rhsX2 = zephir_get_doubleval(rhsX2_param);
	rhsY2 = zephir_get_doubleval(rhsY2_param);
	ZVAL_DOUBLE(&_0, lhsX1);
	ZVAL_DOUBLE(&_1, lhsY1);
	ZVAL_DOUBLE(&_2, lhsX2);
	ZVAL_DOUBLE(&_3, lhsY2);
	ZVAL_DOUBLE(&_4, rhsX1);
	ZVAL_DOUBLE(&_5, rhsY1);
	ZVAL_DOUBLE(&_6, rhsX2);
	ZVAL_DOUBLE(&_7, rhsY2);
	r = phpqt_qlinefunctions_compares_equal_q_line_f_q_line_f(&_0, &_1, &_2, &_3, &_4, &_5, &_6, &_7);
	RETURN_BOOL(r == 1);
}

