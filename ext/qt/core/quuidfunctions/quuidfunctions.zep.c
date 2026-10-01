
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
#include "src/core-quuidfunctions.h"
#include "kernel/operators.h"
#include "kernel/memory.h"
#include "kernel/object.h"


ZEPHIR_INIT_CLASS(Qt_Core_QUuidFunctions_QUuidFunctions)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Core\\QUuidFunctions, QUuidFunctions, qt, core_quuidfunctions_quuidfunctions, qt_core_quuidfunctions_quuidfunctions_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Core_QUuidFunctions_QUuidFunctions, qHash)
{
	zval *uuid_param = NULL, *seed_param = NULL, _0, _1;
	zend_long uuid, seed;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_LONG(uuid)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(seed)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 1, &uuid_param, &seed_param);
	if (!seed_param) {
		seed = 0;
	} else {
		}
	ZVAL_LONG(&_0, uuid);
	ZVAL_LONG(&_1, seed);
	RETURN_LONG(phpqt_quuidfunctions_q_hash(&_0, &_1));
}

PHP_METHOD(Qt_Core_QUuidFunctions_QUuidFunctions, compareThreeWay)
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
	RETURN_LONG(phpqt_quuidfunctions_compare_three_way(&_0, &_1));
}

PHP_METHOD(Qt_Core_QUuidFunctions_QUuidFunctions, comparesEqual)
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
	r = phpqt_quuidfunctions_compares_equal(&_0, &_1);
	RETURN_BOOL(r == 1);
}

