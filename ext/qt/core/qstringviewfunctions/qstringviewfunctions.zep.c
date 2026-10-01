
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
#include "src/core-qstringviewfunctions.h"
#include "kernel/operators.h"
#include "kernel/memory.h"
#include "kernel/object.h"


ZEPHIR_INIT_CLASS(Qt_Core_QStringviewFunctions_QStringviewFunctions)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Core\\QStringviewFunctions, QStringviewFunctions, qt, core_qstringviewfunctions_qstringviewfunctions, qt_core_qstringviewfunctions_qstringviewfunctions_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Core_QStringviewFunctions_QStringviewFunctions, compareThreeWay)
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
	RETURN_MM_LONG(phpqt_qstringviewfunctions_compare_three_way(&lhs, &rhs));
}

PHP_METHOD(Qt_Core_QStringviewFunctions_QStringviewFunctions, comparesEqual)
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
	r = phpqt_qstringviewfunctions_compares_equal(&lhs, &rhs);
	RETURN_MM_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QStringviewFunctions_QStringviewFunctions, compareThreeWayQStringViewQChar)
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
	RETURN_MM_LONG(phpqt_qstringviewfunctions_compare_three_way_q_string_view_q_char(&lhs, &rhs));
}

PHP_METHOD(Qt_Core_QStringviewFunctions_QStringviewFunctions, comparesEqualQStringViewQChar)
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
	r = phpqt_qstringviewfunctions_compares_equal_q_string_view_q_char(&lhs, &rhs);
	RETURN_MM_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QStringviewFunctions_QStringviewFunctions, compareThreeWayQStringViewQStringView)
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
	RETURN_MM_LONG(phpqt_qstringviewfunctions_compare_three_way_q_string_view_q_string_view(&lhs, &rhs));
}

PHP_METHOD(Qt_Core_QStringviewFunctions_QStringviewFunctions, comparesEqualQStringViewQStringView)
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
	r = phpqt_qstringviewfunctions_compares_equal_q_string_view_q_string_view(&lhs, &rhs);
	RETURN_MM_BOOL(r == 1);
}

