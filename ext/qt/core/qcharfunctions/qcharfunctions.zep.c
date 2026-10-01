
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
#include "src/core-qcharfunctions.h"
#include "kernel/operators.h"
#include "kernel/memory.h"
#include "kernel/object.h"


ZEPHIR_INIT_CLASS(Qt_Core_QCharFunctions_QCharFunctions)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Core\\QCharFunctions, QCharFunctions, qt, core_qcharfunctions_qcharfunctions, qt_core_qcharfunctions_qcharfunctions_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Core_QCharFunctions_QCharFunctions, compareThreeWay)
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
	RETURN_LONG(phpqt_qcharfunctions_compare_three_way(&_0, &_1));
}

PHP_METHOD(Qt_Core_QCharFunctions_QCharFunctions, comparesEqual)
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
	r = phpqt_qcharfunctions_compares_equal(&_0, &_1);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QCharFunctions_QCharFunctions, compareThreeWayQLatin1CharQLatin1Char)
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
	RETURN_LONG(phpqt_qcharfunctions_compare_three_way_q_latin1_char_q_latin1_char(&_0, &_1));
}

PHP_METHOD(Qt_Core_QCharFunctions_QCharFunctions, comparesEqualQLatin1CharQLatin1Char)
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
	r = phpqt_qcharfunctions_compares_equal_q_latin1_char_q_latin1_char(&_0, &_1);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QCharFunctions_QCharFunctions, compareThreeWayQCharQChar)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *lhs_param = NULL, *rhs_param = NULL;
	zval lhs, rhs;

	ZVAL_UNDEF(&lhs);
	ZVAL_UNDEF(&rhs);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_STR(lhs)
		Z_PARAM_STR(rhs)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &lhs_param, &rhs_param);
	zephir_get_strval(&lhs, lhs_param);
	zephir_get_strval(&rhs, rhs_param);
	RETURN_MM_LONG(phpqt_qcharfunctions_compare_three_way_q_char_q_char(&lhs, &rhs));
}

PHP_METHOD(Qt_Core_QCharFunctions_QCharFunctions, comparesEqualQCharQChar)
{
	zend_long r = 0;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *lhs_param = NULL, *rhs_param = NULL;
	zval lhs, rhs;

	ZVAL_UNDEF(&lhs);
	ZVAL_UNDEF(&rhs);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_STR(lhs)
		Z_PARAM_STR(rhs)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &lhs_param, &rhs_param);
	zephir_get_strval(&lhs, lhs_param);
	zephir_get_strval(&rhs, rhs_param);
	r = phpqt_qcharfunctions_compares_equal_q_char_q_char(&lhs, &rhs);
	RETURN_MM_BOOL(r == 1);
}

