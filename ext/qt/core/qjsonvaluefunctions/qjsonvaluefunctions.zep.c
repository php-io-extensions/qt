
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
#include "src/core-qjsonvaluefunctions.h"
#include "kernel/operators.h"
#include "kernel/memory.h"
#include "kernel/object.h"


ZEPHIR_INIT_CLASS(Qt_Core_QJsonvalueFunctions_QJsonvalueFunctions)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Core\\QJsonvalueFunctions, QJsonvalueFunctions, qt, core_qjsonvaluefunctions_qjsonvaluefunctions, qt_core_qjsonvaluefunctions_qjsonvaluefunctions_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Core_QJsonvalueFunctions_QJsonvalueFunctions, swap)
{
	zval *value1_param = NULL, *value2_param = NULL, _0, _1;
	zend_long value1, value2;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(value1)
		Z_PARAM_LONG(value2)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &value1_param, &value2_param);
	ZVAL_LONG(&_0, value1);
	ZVAL_LONG(&_1, value2);
	phpqt_qjsonvaluefunctions_swap(&_0, &_1);
}

PHP_METHOD(Qt_Core_QJsonvalueFunctions_QJsonvalueFunctions, qHash)
{
	zval *value_param = NULL, *seed_param = NULL, _0, _1;
	zend_long value, seed;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_LONG(value)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(seed)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 1, &value_param, &seed_param);
	if (!seed_param) {
		seed = 0;
	} else {
		}
	ZVAL_LONG(&_0, value);
	ZVAL_LONG(&_1, seed);
	RETURN_LONG(phpqt_qjsonvaluefunctions_q_hash(&_0, &_1));
}

PHP_METHOD(Qt_Core_QJsonvalueFunctions_QJsonvalueFunctions, comparesEqual)
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
	r = phpqt_qjsonvaluefunctions_compares_equal(&_0, &_1);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QJsonvalueFunctions_QJsonvalueFunctions, comparesEqualQJsonValueConstRefQJsonValue)
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
	r = phpqt_qjsonvaluefunctions_compares_equal_q_json_value_const_ref_q_json_value(&_0, &_1);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QJsonvalueFunctions_QJsonvalueFunctions, comparesEqualQJsonValueConstRefQJsonValueConstRef)
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
	r = phpqt_qjsonvaluefunctions_compares_equal_q_json_value_const_ref_q_json_value_const_ref(&_0, &_1);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QJsonvalueFunctions_QJsonvalueFunctions, comparesEqualQJsonValueRefQJsonValueConstRef)
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
	r = phpqt_qjsonvaluefunctions_compares_equal_q_json_value_ref_q_json_value_const_ref(&_0, &_1);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QJsonvalueFunctions_QJsonvalueFunctions, comparesEqualQJsonValueRefQJsonValueRef)
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
	r = phpqt_qjsonvaluefunctions_compares_equal_q_json_value_ref_q_json_value_ref(&_0, &_1);
	RETURN_BOOL(r == 1);
}

