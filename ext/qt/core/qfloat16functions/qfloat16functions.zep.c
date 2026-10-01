
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
#include "src/core-qfloat16functions.h"
#include "kernel/operators.h"
#include "kernel/memory.h"
#include "kernel/object.h"


ZEPHIR_INIT_CLASS(Qt_Core_QFloat16Functions_QFloat16Functions)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Core\\QFloat16Functions, QFloat16Functions, qt, core_qfloat16functions_qfloat16functions, qt_core_qfloat16functions_qfloat16functions_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Core_QFloat16Functions_QFloat16Functions, qFloatToFloat16)
{
	zval *arg0_param = NULL, *arg1 = NULL, arg1_sub, *length_param = NULL, _0, _1;
	zend_long arg0, length;

	ZVAL_UNDEF(&arg1_sub);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(arg0)
		Z_PARAM_ZVAL(arg1)
		Z_PARAM_LONG(length)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &arg0_param, &arg1, &length_param);
	ZVAL_LONG(&_0, arg0);
	ZVAL_LONG(&_1, length);
	phpqt_qfloat16functions_q_float_to_float16(&_0, arg1, &_1);
}

PHP_METHOD(Qt_Core_QFloat16Functions_QFloat16Functions, qFloatFromFloat16)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long arg1, length;
	zval *arg0 = NULL, arg0_sub, *arg1_param = NULL, *length_param = NULL, result, _0, _1;

	ZVAL_UNDEF(&arg0_sub);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_ZVAL(arg0)
		Z_PARAM_LONG(arg1)
		Z_PARAM_LONG(length)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 3, 0, &arg0, &arg1_param, &length_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, arg1);
	ZVAL_LONG(&_1, length);
	phpqt_qfloat16functions_q_float_from_float16(&result, arg0, &_0, &_1);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QFloat16Functions_QFloat16Functions, qIsInf)
{
	zval *f_param = NULL, _0;
	zend_long f, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(f)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &f_param);
	ZVAL_LONG(&_0, f);
	r = phpqt_qfloat16functions_q_is_inf(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QFloat16Functions_QFloat16Functions, qIsNaN)
{
	zval *f_param = NULL, _0;
	zend_long f, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(f)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &f_param);
	ZVAL_LONG(&_0, f);
	r = phpqt_qfloat16functions_q_is_na_n(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QFloat16Functions_QFloat16Functions, qIsFinite)
{
	zval *f_param = NULL, _0;
	zend_long f, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(f)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &f_param);
	ZVAL_LONG(&_0, f);
	r = phpqt_qfloat16functions_q_is_finite(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QFloat16Functions_QFloat16Functions, qFpClassify)
{
	zval *f_param = NULL, _0;
	zend_long f;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(f)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &f_param);
	ZVAL_LONG(&_0, f);
	RETURN_LONG(phpqt_qfloat16functions_q_fp_classify(&_0));
}

PHP_METHOD(Qt_Core_QFloat16Functions_QFloat16Functions, qSqrt)
{
	zval *f_param = NULL, _0;
	zend_long f;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(f)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &f_param);
	ZVAL_LONG(&_0, f);
	RETURN_LONG(phpqt_qfloat16functions_q_sqrt(&_0));
}

PHP_METHOD(Qt_Core_QFloat16Functions_QFloat16Functions, qRound)
{
	zval *d_param = NULL, _0;
	zend_long d;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(d)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &d_param);
	ZVAL_LONG(&_0, d);
	RETURN_LONG(phpqt_qfloat16functions_q_round(&_0));
}

PHP_METHOD(Qt_Core_QFloat16Functions_QFloat16Functions, qRound64)
{
	zval *d_param = NULL, _0;
	zend_long d;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(d)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &d_param);
	ZVAL_LONG(&_0, d);
	RETURN_LONG(phpqt_qfloat16functions_q_round64(&_0));
}

PHP_METHOD(Qt_Core_QFloat16Functions_QFloat16Functions, qFuzzyCompare)
{
	zval *p1_param = NULL, *p2_param = NULL, _0, _1;
	zend_long p1, p2, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(p1)
		Z_PARAM_LONG(p2)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &p1_param, &p2_param);
	ZVAL_LONG(&_0, p1);
	ZVAL_LONG(&_1, p2);
	r = phpqt_qfloat16functions_q_fuzzy_compare(&_0, &_1);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QFloat16Functions_QFloat16Functions, qFuzzyIsNull)
{
	zval *f_param = NULL, _0;
	zend_long f, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(f)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &f_param);
	ZVAL_LONG(&_0, f);
	r = phpqt_qfloat16functions_q_fuzzy_is_null(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QFloat16Functions_QFloat16Functions, qIsNull)
{
	zval *f_param = NULL, _0;
	zend_long f, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(f)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &f_param);
	ZVAL_LONG(&_0, f);
	r = phpqt_qfloat16functions_q_is_null(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QFloat16Functions_QFloat16Functions, qIntCast)
{
	zval *f_param = NULL, _0;
	zend_long f;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(f)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &f_param);
	ZVAL_LONG(&_0, f);
	RETURN_LONG(phpqt_qfloat16functions_q_int_cast(&_0));
}

PHP_METHOD(Qt_Core_QFloat16Functions_QFloat16Functions, qHypot)
{
	zval *x_param = NULL, *y_param = NULL, _0, _1;
	zend_long x, y;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(x)
		Z_PARAM_LONG(y)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &x_param, &y_param);
	ZVAL_LONG(&_0, x);
	ZVAL_LONG(&_1, y);
	RETURN_LONG(phpqt_qfloat16functions_q_hypot(&_0, &_1));
}

PHP_METHOD(Qt_Core_QFloat16Functions_QFloat16Functions, qHypotQfloat16Qfloat16Qfloat16)
{
	zval *x_param = NULL, *y_param = NULL, *z_param = NULL, _0, _1, _2;
	zend_long x, y, z;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(x)
		Z_PARAM_LONG(y)
		Z_PARAM_LONG(z)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &x_param, &y_param, &z_param);
	ZVAL_LONG(&_0, x);
	ZVAL_LONG(&_1, y);
	ZVAL_LONG(&_2, z);
	RETURN_LONG(phpqt_qfloat16functions_q_hypot_qfloat16_qfloat16_qfloat16(&_0, &_1, &_2));
}

PHP_METHOD(Qt_Core_QFloat16Functions_QFloat16Functions, compareThreeWay)
{
	double rhs;
	zval *lhs_param = NULL, *rhs_param = NULL, _0, _1;
	zend_long lhs;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(lhs)
		Z_PARAM_ZVAL(rhs)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &lhs_param, &rhs_param);
	rhs = zephir_get_doubleval(rhs_param);
	ZVAL_LONG(&_0, lhs);
	ZVAL_DOUBLE(&_1, rhs);
	RETURN_LONG(phpqt_qfloat16functions_compare_three_way(&_0, &_1));
}

PHP_METHOD(Qt_Core_QFloat16Functions_QFloat16Functions, comparesEqual)
{
	double rhs;
	zval *lhs_param = NULL, *rhs_param = NULL, _0, _1;
	zend_long lhs, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(lhs)
		Z_PARAM_ZVAL(rhs)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &lhs_param, &rhs_param);
	rhs = zephir_get_doubleval(rhs_param);
	ZVAL_LONG(&_0, lhs);
	ZVAL_DOUBLE(&_1, rhs);
	r = phpqt_qfloat16functions_compares_equal(&_0, &_1);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QFloat16Functions_QFloat16Functions, compareThreeWayQfloat16Double)
{
	double rhs;
	zval *lhs_param = NULL, *rhs_param = NULL, _0, _1;
	zend_long lhs;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(lhs)
		Z_PARAM_ZVAL(rhs)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &lhs_param, &rhs_param);
	rhs = zephir_get_doubleval(rhs_param);
	ZVAL_LONG(&_0, lhs);
	ZVAL_DOUBLE(&_1, rhs);
	RETURN_LONG(phpqt_qfloat16functions_compare_three_way_qfloat16_double(&_0, &_1));
}

PHP_METHOD(Qt_Core_QFloat16Functions_QFloat16Functions, comparesEqualQfloat16Double)
{
	double rhs;
	zval *lhs_param = NULL, *rhs_param = NULL, _0, _1;
	zend_long lhs, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(lhs)
		Z_PARAM_ZVAL(rhs)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &lhs_param, &rhs_param);
	rhs = zephir_get_doubleval(rhs_param);
	ZVAL_LONG(&_0, lhs);
	ZVAL_DOUBLE(&_1, rhs);
	r = phpqt_qfloat16functions_compares_equal_qfloat16_double(&_0, &_1);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QFloat16Functions_QFloat16Functions, compareThreeWayQfloat16LongDouble)
{
	double rhs;
	zval *lhs_param = NULL, *rhs_param = NULL, _0, _1;
	zend_long lhs;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(lhs)
		Z_PARAM_ZVAL(rhs)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &lhs_param, &rhs_param);
	rhs = zephir_get_doubleval(rhs_param);
	ZVAL_LONG(&_0, lhs);
	ZVAL_DOUBLE(&_1, rhs);
	RETURN_LONG(phpqt_qfloat16functions_compare_three_way_qfloat16_long_double(&_0, &_1));
}

PHP_METHOD(Qt_Core_QFloat16Functions_QFloat16Functions, comparesEqualQfloat16LongDouble)
{
	double rhs;
	zval *lhs_param = NULL, *rhs_param = NULL, _0, _1;
	zend_long lhs, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(lhs)
		Z_PARAM_ZVAL(rhs)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &lhs_param, &rhs_param);
	rhs = zephir_get_doubleval(rhs_param);
	ZVAL_LONG(&_0, lhs);
	ZVAL_DOUBLE(&_1, rhs);
	r = phpqt_qfloat16functions_compares_equal_qfloat16_long_double(&_0, &_1);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QFloat16Functions_QFloat16Functions, compareThreeWayQfloat16Qfloat16)
{
	zval *lhs_param = NULL, *rhs_param = NULL, _0, _1;
	zend_long lhs, rhs;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(lhs)
		Z_PARAM_LONG(rhs)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &lhs_param, &rhs_param);
	ZVAL_LONG(&_0, lhs);
	ZVAL_LONG(&_1, rhs);
	RETURN_LONG(phpqt_qfloat16functions_compare_three_way_qfloat16_qfloat16(&_0, &_1));
}

PHP_METHOD(Qt_Core_QFloat16Functions_QFloat16Functions, comparesEqualQfloat16Qfloat16)
{
	zval *lhs_param = NULL, *rhs_param = NULL, _0, _1;
	zend_long lhs, rhs, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(lhs)
		Z_PARAM_LONG(rhs)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &lhs_param, &rhs_param);
	ZVAL_LONG(&_0, lhs);
	ZVAL_LONG(&_1, rhs);
	r = phpqt_qfloat16functions_compares_equal_qfloat16_qfloat16(&_0, &_1);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QFloat16Functions_QFloat16Functions, qHash)
{
	zval *key_param = NULL, *seed_param = NULL, _0, _1;
	zend_long key, seed;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_LONG(key)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(seed)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 1, &key_param, &seed_param);
	if (!seed_param) {
		seed = 0;
	} else {
		}
	ZVAL_LONG(&_0, key);
	ZVAL_LONG(&_1, seed);
	RETURN_LONG(phpqt_qfloat16functions_q_hash(&_0, &_1));
}

