
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
#include "src/core-qsizefunctions.h"
#include "kernel/operators.h"
#include "kernel/memory.h"
#include "kernel/object.h"


ZEPHIR_INIT_CLASS(Qt_Core_QSizeFunctions_QSizeFunctions)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Core\\QSizeFunctions, QSizeFunctions, qt, core_qsizefunctions_qsizefunctions, qt_core_qsizefunctions_qsizefunctions_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Core_QSizeFunctions_QSizeFunctions, qHash)
{
	zval *arg0Width_param = NULL, *arg0Height_param = NULL, *arg1_param = NULL, _0, _1, _2;
	zend_long arg0Width, arg0Height, arg1;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(2, 3)
		Z_PARAM_LONG(arg0Width)
		Z_PARAM_LONG(arg0Height)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(arg1)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 1, &arg0Width_param, &arg0Height_param, &arg1_param);
	if (!arg1_param) {
		arg1 = 0;
	} else {
		}
	ZVAL_LONG(&_0, arg0Width);
	ZVAL_LONG(&_1, arg0Height);
	ZVAL_LONG(&_2, arg1);
	RETURN_LONG(phpqt_qsizefunctions_q_hash(&_0, &_1, &_2));
}

PHP_METHOD(Qt_Core_QSizeFunctions_QSizeFunctions, comparesEqual)
{
	zval *s1Width_param = NULL, *s1Height_param = NULL, *s2Width_param = NULL, *s2Height_param = NULL, _0, _1, _2, _3;
	zend_long s1Width, s1Height, s2Width, s2Height, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(s1Width)
		Z_PARAM_LONG(s1Height)
		Z_PARAM_LONG(s2Width)
		Z_PARAM_LONG(s2Height)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 0, &s1Width_param, &s1Height_param, &s2Width_param, &s2Height_param);
	ZVAL_LONG(&_0, s1Width);
	ZVAL_LONG(&_1, s1Height);
	ZVAL_LONG(&_2, s2Width);
	ZVAL_LONG(&_3, s2Height);
	r = phpqt_qsizefunctions_compares_equal(&_0, &_1, &_2, &_3);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QSizeFunctions_QSizeFunctions, comparesEqualQSizeFQSize)
{
	zend_long rhsWidth, rhsHeight, r = 0;
	zval *lhsWidth_param = NULL, *lhsHeight_param = NULL, *rhsWidth_param = NULL, *rhsHeight_param = NULL, _0, _1, _2, _3;
	double lhsWidth, lhsHeight;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_ZVAL(lhsWidth)
		Z_PARAM_ZVAL(lhsHeight)
		Z_PARAM_LONG(rhsWidth)
		Z_PARAM_LONG(rhsHeight)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 0, &lhsWidth_param, &lhsHeight_param, &rhsWidth_param, &rhsHeight_param);
	lhsWidth = zephir_get_doubleval(lhsWidth_param);
	lhsHeight = zephir_get_doubleval(lhsHeight_param);
	ZVAL_DOUBLE(&_0, lhsWidth);
	ZVAL_DOUBLE(&_1, lhsHeight);
	ZVAL_LONG(&_2, rhsWidth);
	ZVAL_LONG(&_3, rhsHeight);
	r = phpqt_qsizefunctions_compares_equal_q_size_f_q_size(&_0, &_1, &_2, &_3);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QSizeFunctions_QSizeFunctions, comparesEqualQSizeFQSizeF)
{
	zend_long r = 0;
	zval *lhsWidth_param = NULL, *lhsHeight_param = NULL, *rhsWidth_param = NULL, *rhsHeight_param = NULL, _0, _1, _2, _3;
	double lhsWidth, lhsHeight, rhsWidth, rhsHeight;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_ZVAL(lhsWidth)
		Z_PARAM_ZVAL(lhsHeight)
		Z_PARAM_ZVAL(rhsWidth)
		Z_PARAM_ZVAL(rhsHeight)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 0, &lhsWidth_param, &lhsHeight_param, &rhsWidth_param, &rhsHeight_param);
	lhsWidth = zephir_get_doubleval(lhsWidth_param);
	lhsHeight = zephir_get_doubleval(lhsHeight_param);
	rhsWidth = zephir_get_doubleval(rhsWidth_param);
	rhsHeight = zephir_get_doubleval(rhsHeight_param);
	ZVAL_DOUBLE(&_0, lhsWidth);
	ZVAL_DOUBLE(&_1, lhsHeight);
	ZVAL_DOUBLE(&_2, rhsWidth);
	ZVAL_DOUBLE(&_3, rhsHeight);
	r = phpqt_qsizefunctions_compares_equal_q_size_f_q_size_f(&_0, &_1, &_2, &_3);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QSizeFunctions_QSizeFunctions, qFuzzyIsNull)
{
	zend_long r = 0;
	zval *sizeWidth_param = NULL, *sizeHeight_param = NULL, _0, _1;
	double sizeWidth, sizeHeight;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_ZVAL(sizeWidth)
		Z_PARAM_ZVAL(sizeHeight)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &sizeWidth_param, &sizeHeight_param);
	sizeWidth = zephir_get_doubleval(sizeWidth_param);
	sizeHeight = zephir_get_doubleval(sizeHeight_param);
	ZVAL_DOUBLE(&_0, sizeWidth);
	ZVAL_DOUBLE(&_1, sizeHeight);
	r = phpqt_qsizefunctions_q_fuzzy_is_null(&_0, &_1);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QSizeFunctions_QSizeFunctions, qFuzzyCompare)
{
	zend_long r = 0;
	zval *s1Width_param = NULL, *s1Height_param = NULL, *s2Width_param = NULL, *s2Height_param = NULL, _0, _1, _2, _3;
	double s1Width, s1Height, s2Width, s2Height;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_ZVAL(s1Width)
		Z_PARAM_ZVAL(s1Height)
		Z_PARAM_ZVAL(s2Width)
		Z_PARAM_ZVAL(s2Height)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 0, &s1Width_param, &s1Height_param, &s2Width_param, &s2Height_param);
	s1Width = zephir_get_doubleval(s1Width_param);
	s1Height = zephir_get_doubleval(s1Height_param);
	s2Width = zephir_get_doubleval(s2Width_param);
	s2Height = zephir_get_doubleval(s2Height_param);
	ZVAL_DOUBLE(&_0, s1Width);
	ZVAL_DOUBLE(&_1, s1Height);
	ZVAL_DOUBLE(&_2, s2Width);
	ZVAL_DOUBLE(&_3, s2Height);
	r = phpqt_qsizefunctions_q_fuzzy_compare(&_0, &_1, &_2, &_3);
	RETURN_BOOL(r == 1);
}

