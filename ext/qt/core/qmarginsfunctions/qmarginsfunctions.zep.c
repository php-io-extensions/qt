
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
#include "src/core-qmarginsfunctions.h"
#include "kernel/operators.h"
#include "kernel/memory.h"
#include "kernel/object.h"


ZEPHIR_INIT_CLASS(Qt_Core_QMarginsFunctions_QMarginsFunctions)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Core\\QMarginsFunctions, QMarginsFunctions, qt, core_qmarginsfunctions_qmarginsfunctions, qt_core_qmarginsfunctions_qmarginsfunctions_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Core_QMarginsFunctions_QMarginsFunctions, comparesEqual)
{
	zend_long rhsLeft, rhsTop, rhsRight, rhsBottom, r = 0;
	zval *lhsLeft_param = NULL, *lhsTop_param = NULL, *lhsRight_param = NULL, *lhsBottom_param = NULL, *rhsLeft_param = NULL, *rhsTop_param = NULL, *rhsRight_param = NULL, *rhsBottom_param = NULL, _0, _1, _2, _3, _4, _5, _6, _7;
	double lhsLeft, lhsTop, lhsRight, lhsBottom;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_5);
	ZVAL_UNDEF(&_6);
	ZVAL_UNDEF(&_7);
	ZEND_PARSE_PARAMETERS_START(8, 8)
		Z_PARAM_ZVAL(lhsLeft)
		Z_PARAM_ZVAL(lhsTop)
		Z_PARAM_ZVAL(lhsRight)
		Z_PARAM_ZVAL(lhsBottom)
		Z_PARAM_LONG(rhsLeft)
		Z_PARAM_LONG(rhsTop)
		Z_PARAM_LONG(rhsRight)
		Z_PARAM_LONG(rhsBottom)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(8, 0, &lhsLeft_param, &lhsTop_param, &lhsRight_param, &lhsBottom_param, &rhsLeft_param, &rhsTop_param, &rhsRight_param, &rhsBottom_param);
	lhsLeft = zephir_get_doubleval(lhsLeft_param);
	lhsTop = zephir_get_doubleval(lhsTop_param);
	lhsRight = zephir_get_doubleval(lhsRight_param);
	lhsBottom = zephir_get_doubleval(lhsBottom_param);
	ZVAL_DOUBLE(&_0, lhsLeft);
	ZVAL_DOUBLE(&_1, lhsTop);
	ZVAL_DOUBLE(&_2, lhsRight);
	ZVAL_DOUBLE(&_3, lhsBottom);
	ZVAL_LONG(&_4, rhsLeft);
	ZVAL_LONG(&_5, rhsTop);
	ZVAL_LONG(&_6, rhsRight);
	ZVAL_LONG(&_7, rhsBottom);
	r = phpqt_qmarginsfunctions_compares_equal(&_0, &_1, &_2, &_3, &_4, &_5, &_6, &_7);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QMarginsFunctions_QMarginsFunctions, comparesEqualQMarginsFQMarginsF)
{
	zend_long r = 0;
	zval *lhsLeft_param = NULL, *lhsTop_param = NULL, *lhsRight_param = NULL, *lhsBottom_param = NULL, *rhsLeft_param = NULL, *rhsTop_param = NULL, *rhsRight_param = NULL, *rhsBottom_param = NULL, _0, _1, _2, _3, _4, _5, _6, _7;
	double lhsLeft, lhsTop, lhsRight, lhsBottom, rhsLeft, rhsTop, rhsRight, rhsBottom;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_5);
	ZVAL_UNDEF(&_6);
	ZVAL_UNDEF(&_7);
	ZEND_PARSE_PARAMETERS_START(8, 8)
		Z_PARAM_ZVAL(lhsLeft)
		Z_PARAM_ZVAL(lhsTop)
		Z_PARAM_ZVAL(lhsRight)
		Z_PARAM_ZVAL(lhsBottom)
		Z_PARAM_ZVAL(rhsLeft)
		Z_PARAM_ZVAL(rhsTop)
		Z_PARAM_ZVAL(rhsRight)
		Z_PARAM_ZVAL(rhsBottom)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(8, 0, &lhsLeft_param, &lhsTop_param, &lhsRight_param, &lhsBottom_param, &rhsLeft_param, &rhsTop_param, &rhsRight_param, &rhsBottom_param);
	lhsLeft = zephir_get_doubleval(lhsLeft_param);
	lhsTop = zephir_get_doubleval(lhsTop_param);
	lhsRight = zephir_get_doubleval(lhsRight_param);
	lhsBottom = zephir_get_doubleval(lhsBottom_param);
	rhsLeft = zephir_get_doubleval(rhsLeft_param);
	rhsTop = zephir_get_doubleval(rhsTop_param);
	rhsRight = zephir_get_doubleval(rhsRight_param);
	rhsBottom = zephir_get_doubleval(rhsBottom_param);
	ZVAL_DOUBLE(&_0, lhsLeft);
	ZVAL_DOUBLE(&_1, lhsTop);
	ZVAL_DOUBLE(&_2, lhsRight);
	ZVAL_DOUBLE(&_3, lhsBottom);
	ZVAL_DOUBLE(&_4, rhsLeft);
	ZVAL_DOUBLE(&_5, rhsTop);
	ZVAL_DOUBLE(&_6, rhsRight);
	ZVAL_DOUBLE(&_7, rhsBottom);
	r = phpqt_qmarginsfunctions_compares_equal_q_margins_f_q_margins_f(&_0, &_1, &_2, &_3, &_4, &_5, &_6, &_7);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QMarginsFunctions_QMarginsFunctions, qFuzzyIsNull)
{
	zend_long r = 0;
	zval *mLeft_param = NULL, *mTop_param = NULL, *mRight_param = NULL, *mBottom_param = NULL, _0, _1, _2, _3;
	double mLeft, mTop, mRight, mBottom;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_ZVAL(mLeft)
		Z_PARAM_ZVAL(mTop)
		Z_PARAM_ZVAL(mRight)
		Z_PARAM_ZVAL(mBottom)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 0, &mLeft_param, &mTop_param, &mRight_param, &mBottom_param);
	mLeft = zephir_get_doubleval(mLeft_param);
	mTop = zephir_get_doubleval(mTop_param);
	mRight = zephir_get_doubleval(mRight_param);
	mBottom = zephir_get_doubleval(mBottom_param);
	ZVAL_DOUBLE(&_0, mLeft);
	ZVAL_DOUBLE(&_1, mTop);
	ZVAL_DOUBLE(&_2, mRight);
	ZVAL_DOUBLE(&_3, mBottom);
	r = phpqt_qmarginsfunctions_q_fuzzy_is_null(&_0, &_1, &_2, &_3);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QMarginsFunctions_QMarginsFunctions, qFuzzyCompare)
{
	zend_long r = 0;
	zval *lhsLeft_param = NULL, *lhsTop_param = NULL, *lhsRight_param = NULL, *lhsBottom_param = NULL, *rhsLeft_param = NULL, *rhsTop_param = NULL, *rhsRight_param = NULL, *rhsBottom_param = NULL, _0, _1, _2, _3, _4, _5, _6, _7;
	double lhsLeft, lhsTop, lhsRight, lhsBottom, rhsLeft, rhsTop, rhsRight, rhsBottom;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_5);
	ZVAL_UNDEF(&_6);
	ZVAL_UNDEF(&_7);
	ZEND_PARSE_PARAMETERS_START(8, 8)
		Z_PARAM_ZVAL(lhsLeft)
		Z_PARAM_ZVAL(lhsTop)
		Z_PARAM_ZVAL(lhsRight)
		Z_PARAM_ZVAL(lhsBottom)
		Z_PARAM_ZVAL(rhsLeft)
		Z_PARAM_ZVAL(rhsTop)
		Z_PARAM_ZVAL(rhsRight)
		Z_PARAM_ZVAL(rhsBottom)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(8, 0, &lhsLeft_param, &lhsTop_param, &lhsRight_param, &lhsBottom_param, &rhsLeft_param, &rhsTop_param, &rhsRight_param, &rhsBottom_param);
	lhsLeft = zephir_get_doubleval(lhsLeft_param);
	lhsTop = zephir_get_doubleval(lhsTop_param);
	lhsRight = zephir_get_doubleval(lhsRight_param);
	lhsBottom = zephir_get_doubleval(lhsBottom_param);
	rhsLeft = zephir_get_doubleval(rhsLeft_param);
	rhsTop = zephir_get_doubleval(rhsTop_param);
	rhsRight = zephir_get_doubleval(rhsRight_param);
	rhsBottom = zephir_get_doubleval(rhsBottom_param);
	ZVAL_DOUBLE(&_0, lhsLeft);
	ZVAL_DOUBLE(&_1, lhsTop);
	ZVAL_DOUBLE(&_2, lhsRight);
	ZVAL_DOUBLE(&_3, lhsBottom);
	ZVAL_DOUBLE(&_4, rhsLeft);
	ZVAL_DOUBLE(&_5, rhsTop);
	ZVAL_DOUBLE(&_6, rhsRight);
	ZVAL_DOUBLE(&_7, rhsBottom);
	r = phpqt_qmarginsfunctions_q_fuzzy_compare(&_0, &_1, &_2, &_3, &_4, &_5, &_6, &_7);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QMarginsFunctions_QMarginsFunctions, comparesEqualQMarginsQMargins)
{
	zval *lhsLeft_param = NULL, *lhsTop_param = NULL, *lhsRight_param = NULL, *lhsBottom_param = NULL, *rhsLeft_param = NULL, *rhsTop_param = NULL, *rhsRight_param = NULL, *rhsBottom_param = NULL, _0, _1, _2, _3, _4, _5, _6, _7;
	zend_long lhsLeft, lhsTop, lhsRight, lhsBottom, rhsLeft, rhsTop, rhsRight, rhsBottom, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_5);
	ZVAL_UNDEF(&_6);
	ZVAL_UNDEF(&_7);
	ZEND_PARSE_PARAMETERS_START(8, 8)
		Z_PARAM_LONG(lhsLeft)
		Z_PARAM_LONG(lhsTop)
		Z_PARAM_LONG(lhsRight)
		Z_PARAM_LONG(lhsBottom)
		Z_PARAM_LONG(rhsLeft)
		Z_PARAM_LONG(rhsTop)
		Z_PARAM_LONG(rhsRight)
		Z_PARAM_LONG(rhsBottom)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(8, 0, &lhsLeft_param, &lhsTop_param, &lhsRight_param, &lhsBottom_param, &rhsLeft_param, &rhsTop_param, &rhsRight_param, &rhsBottom_param);
	ZVAL_LONG(&_0, lhsLeft);
	ZVAL_LONG(&_1, lhsTop);
	ZVAL_LONG(&_2, lhsRight);
	ZVAL_LONG(&_3, lhsBottom);
	ZVAL_LONG(&_4, rhsLeft);
	ZVAL_LONG(&_5, rhsTop);
	ZVAL_LONG(&_6, rhsRight);
	ZVAL_LONG(&_7, rhsBottom);
	r = phpqt_qmarginsfunctions_compares_equal_q_margins_q_margins(&_0, &_1, &_2, &_3, &_4, &_5, &_6, &_7);
	RETURN_BOOL(r == 1);
}

