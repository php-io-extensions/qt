
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
#include "src/core-qnumericfunctions.h"
#include "kernel/operators.h"
#include "kernel/memory.h"
#include "kernel/object.h"


ZEPHIR_INIT_CLASS(Qt_Core_QNumericFunctions_QNumericFunctions)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Core\\QNumericFunctions, QNumericFunctions, qt, core_qnumericfunctions_qnumericfunctions, qt_core_qnumericfunctions_qnumericfunctions_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Core_QNumericFunctions_QNumericFunctions, qIsInf)
{
	zend_long r = 0;
	zval *d_param = NULL, _0;
	double d;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_ZVAL(d)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &d_param);
	d = zephir_get_doubleval(d_param);
	ZVAL_DOUBLE(&_0, d);
	r = phpqt_qnumericfunctions_q_is_inf(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QNumericFunctions_QNumericFunctions, qIsNaN)
{
	zend_long r = 0;
	zval *d_param = NULL, _0;
	double d;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_ZVAL(d)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &d_param);
	d = zephir_get_doubleval(d_param);
	ZVAL_DOUBLE(&_0, d);
	r = phpqt_qnumericfunctions_q_is_na_n(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QNumericFunctions_QNumericFunctions, qIsFinite)
{
	zend_long r = 0;
	zval *d_param = NULL, _0;
	double d;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_ZVAL(d)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &d_param);
	d = zephir_get_doubleval(d_param);
	ZVAL_DOUBLE(&_0, d);
	r = phpqt_qnumericfunctions_q_is_finite(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QNumericFunctions_QNumericFunctions, qFpClassify)
{
	zval *val_param = NULL, _0;
	double val;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_ZVAL(val)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &val_param);
	val = zephir_get_doubleval(val_param);
	ZVAL_DOUBLE(&_0, val);
	RETURN_LONG(phpqt_qnumericfunctions_q_fp_classify(&_0));
}

PHP_METHOD(Qt_Core_QNumericFunctions_QNumericFunctions, qIsInfFloat)
{
	zend_long r = 0;
	zval *f_param = NULL, _0;
	double f;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_ZVAL(f)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &f_param);
	f = zephir_get_doubleval(f_param);
	ZVAL_DOUBLE(&_0, f);
	r = phpqt_qnumericfunctions_q_is_inf_float(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QNumericFunctions_QNumericFunctions, qIsNaNFloat)
{
	zend_long r = 0;
	zval *f_param = NULL, _0;
	double f;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_ZVAL(f)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &f_param);
	f = zephir_get_doubleval(f_param);
	ZVAL_DOUBLE(&_0, f);
	r = phpqt_qnumericfunctions_q_is_na_n_float(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QNumericFunctions_QNumericFunctions, qIsFiniteFloat)
{
	zend_long r = 0;
	zval *f_param = NULL, _0;
	double f;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_ZVAL(f)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &f_param);
	f = zephir_get_doubleval(f_param);
	ZVAL_DOUBLE(&_0, f);
	r = phpqt_qnumericfunctions_q_is_finite_float(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QNumericFunctions_QNumericFunctions, qFpClassifyFloat)
{
	zval *val_param = NULL, _0;
	double val;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_ZVAL(val)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &val_param);
	val = zephir_get_doubleval(val_param);
	ZVAL_DOUBLE(&_0, val);
	RETURN_LONG(phpqt_qnumericfunctions_q_fp_classify_float(&_0));
}

PHP_METHOD(Qt_Core_QNumericFunctions_QNumericFunctions, qSNaN)
{

	RETURN_DOUBLE(phpqt_qnumericfunctions_q_s_na_n());
}

PHP_METHOD(Qt_Core_QNumericFunctions_QNumericFunctions, qQNaN)
{

	RETURN_DOUBLE(phpqt_qnumericfunctions_q_q_na_n());
}

PHP_METHOD(Qt_Core_QNumericFunctions_QNumericFunctions, qInf)
{

	RETURN_DOUBLE(phpqt_qnumericfunctions_q_inf());
}

PHP_METHOD(Qt_Core_QNumericFunctions_QNumericFunctions, qFloatDistance)
{
	zval *a_param = NULL, *b_param = NULL, _0, _1;
	double a, b;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_ZVAL(a)
		Z_PARAM_ZVAL(b)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &a_param, &b_param);
	a = zephir_get_doubleval(a_param);
	b = zephir_get_doubleval(b_param);
	ZVAL_DOUBLE(&_0, a);
	ZVAL_DOUBLE(&_1, b);
	RETURN_LONG(phpqt_qnumericfunctions_q_float_distance(&_0, &_1));
}

PHP_METHOD(Qt_Core_QNumericFunctions_QNumericFunctions, qFloatDistanceDoubleDouble)
{
	zval *a_param = NULL, *b_param = NULL, _0, _1;
	double a, b;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_ZVAL(a)
		Z_PARAM_ZVAL(b)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &a_param, &b_param);
	a = zephir_get_doubleval(a_param);
	b = zephir_get_doubleval(b_param);
	ZVAL_DOUBLE(&_0, a);
	ZVAL_DOUBLE(&_1, b);
	RETURN_LONG(phpqt_qnumericfunctions_q_float_distance_double_double(&_0, &_1));
}

PHP_METHOD(Qt_Core_QNumericFunctions_QNumericFunctions, qRound)
{
	zval *d_param = NULL, _0;
	double d;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_ZVAL(d)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &d_param);
	d = zephir_get_doubleval(d_param);
	ZVAL_DOUBLE(&_0, d);
	RETURN_LONG(phpqt_qnumericfunctions_q_round(&_0));
}

PHP_METHOD(Qt_Core_QNumericFunctions_QNumericFunctions, qRoundFloat)
{
	zval *d_param = NULL, _0;
	double d;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_ZVAL(d)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &d_param);
	d = zephir_get_doubleval(d_param);
	ZVAL_DOUBLE(&_0, d);
	RETURN_LONG(phpqt_qnumericfunctions_q_round_float(&_0));
}

PHP_METHOD(Qt_Core_QNumericFunctions_QNumericFunctions, qRound64)
{
	zval *d_param = NULL, _0;
	double d;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_ZVAL(d)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &d_param);
	d = zephir_get_doubleval(d_param);
	ZVAL_DOUBLE(&_0, d);
	RETURN_LONG(phpqt_qnumericfunctions_q_round64(&_0));
}

PHP_METHOD(Qt_Core_QNumericFunctions_QNumericFunctions, qRound64Float)
{
	zval *d_param = NULL, _0;
	double d;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_ZVAL(d)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &d_param);
	d = zephir_get_doubleval(d_param);
	ZVAL_DOUBLE(&_0, d);
	RETURN_LONG(phpqt_qnumericfunctions_q_round64_float(&_0));
}

PHP_METHOD(Qt_Core_QNumericFunctions_QNumericFunctions, qFuzzyCompare)
{
	zend_long r = 0;
	zval *p1_param = NULL, *p2_param = NULL, _0, _1;
	double p1, p2;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_ZVAL(p1)
		Z_PARAM_ZVAL(p2)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &p1_param, &p2_param);
	p1 = zephir_get_doubleval(p1_param);
	p2 = zephir_get_doubleval(p2_param);
	ZVAL_DOUBLE(&_0, p1);
	ZVAL_DOUBLE(&_1, p2);
	r = phpqt_qnumericfunctions_q_fuzzy_compare(&_0, &_1);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QNumericFunctions_QNumericFunctions, qFuzzyCompareFloatFloat)
{
	zend_long r = 0;
	zval *p1_param = NULL, *p2_param = NULL, _0, _1;
	double p1, p2;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_ZVAL(p1)
		Z_PARAM_ZVAL(p2)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &p1_param, &p2_param);
	p1 = zephir_get_doubleval(p1_param);
	p2 = zephir_get_doubleval(p2_param);
	ZVAL_DOUBLE(&_0, p1);
	ZVAL_DOUBLE(&_1, p2);
	r = phpqt_qnumericfunctions_q_fuzzy_compare_float_float(&_0, &_1);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QNumericFunctions_QNumericFunctions, qFuzzyIsNull)
{
	zend_long r = 0;
	zval *d_param = NULL, _0;
	double d;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_ZVAL(d)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &d_param);
	d = zephir_get_doubleval(d_param);
	ZVAL_DOUBLE(&_0, d);
	r = phpqt_qnumericfunctions_q_fuzzy_is_null(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QNumericFunctions_QNumericFunctions, qFuzzyIsNullFloat)
{
	zend_long r = 0;
	zval *f_param = NULL, _0;
	double f;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_ZVAL(f)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &f_param);
	f = zephir_get_doubleval(f_param);
	ZVAL_DOUBLE(&_0, f);
	r = phpqt_qnumericfunctions_q_fuzzy_is_null_float(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QNumericFunctions_QNumericFunctions, qIsNull)
{
	zend_long r = 0;
	zval *d_param = NULL, _0;
	double d;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_ZVAL(d)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &d_param);
	d = zephir_get_doubleval(d_param);
	ZVAL_DOUBLE(&_0, d);
	r = phpqt_qnumericfunctions_q_is_null(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QNumericFunctions_QNumericFunctions, qIsNullFloat)
{
	zend_long r = 0;
	zval *f_param = NULL, _0;
	double f;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_ZVAL(f)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &f_param);
	f = zephir_get_doubleval(f_param);
	ZVAL_DOUBLE(&_0, f);
	r = phpqt_qnumericfunctions_q_is_null_float(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QNumericFunctions_QNumericFunctions, qIntCast)
{
	zval *f_param = NULL, _0;
	double f;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_ZVAL(f)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &f_param);
	f = zephir_get_doubleval(f_param);
	ZVAL_DOUBLE(&_0, f);
	RETURN_LONG(phpqt_qnumericfunctions_q_int_cast(&_0));
}

PHP_METHOD(Qt_Core_QNumericFunctions_QNumericFunctions, qIntCastFloat)
{
	zval *f_param = NULL, _0;
	double f;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_ZVAL(f)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &f_param);
	f = zephir_get_doubleval(f_param);
	ZVAL_DOUBLE(&_0, f);
	RETURN_LONG(phpqt_qnumericfunctions_q_int_cast_float(&_0));
}

