
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
#include "src/core-qjsonobjectfunctions.h"
#include "kernel/operators.h"
#include "kernel/memory.h"
#include "kernel/object.h"


ZEPHIR_INIT_CLASS(Qt_Core_QJsonobjectFunctions_QJsonobjectFunctions)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Core\\QJsonobjectFunctions, QJsonobjectFunctions, qt, core_qjsonobjectfunctions_qjsonobjectfunctions, qt_core_qjsonobjectfunctions_qjsonobjectfunctions_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Core_QJsonobjectFunctions_QJsonobjectFunctions, swap)
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
	phpqt_qjsonobjectfunctions_swap(&_0, &_1);
}

PHP_METHOD(Qt_Core_QJsonobjectFunctions_QJsonobjectFunctions, qHash)
{
	zval *object__param = NULL, *seed_param = NULL, _0, _1;
	zend_long object_, seed;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_LONG(object_)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(seed)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 1, &object__param, &seed_param);
	if (!seed_param) {
		seed = 0;
	} else {
		}
	ZVAL_LONG(&_0, object_);
	ZVAL_LONG(&_1, seed);
	RETURN_LONG(phpqt_qjsonobjectfunctions_q_hash(&_0, &_1));
}

PHP_METHOD(Qt_Core_QJsonobjectFunctions_QJsonobjectFunctions, comparesEqual)
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
	r = phpqt_qjsonobjectfunctions_compares_equal(&_0, &_1);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QJsonobjectFunctions_QJsonobjectFunctions, comparesEqualQJsonObjectQJsonValue)
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
	r = phpqt_qjsonobjectfunctions_compares_equal_q_json_object_q_json_value(&_0, &_1);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QJsonobjectFunctions_QJsonobjectFunctions, comparesEqualQJsonObjectQJsonObject)
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
	r = phpqt_qjsonobjectfunctions_compares_equal_q_json_object_q_json_object(&_0, &_1);
	RETURN_BOOL(r == 1);
}

