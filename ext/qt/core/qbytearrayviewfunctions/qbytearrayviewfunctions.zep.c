
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
#include "src/core-qbytearrayviewfunctions.h"
#include "kernel/operators.h"
#include "kernel/memory.h"
#include "kernel/object.h"


ZEPHIR_INIT_CLASS(Qt_Core_QBytearrayviewFunctions_QBytearrayviewFunctions)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Core\\QBytearrayviewFunctions, QBytearrayviewFunctions, qt, core_qbytearrayviewfunctions_qbytearrayviewfunctions, qt_core_qbytearrayviewfunctions_qbytearrayviewfunctions_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Core_QBytearrayviewFunctions_QBytearrayviewFunctions, compareThreeWay)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long rhs;
	zval *lhs_param = NULL, *rhs_param = NULL, _0;
	zval lhs;

	ZVAL_UNDEF(&lhs);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_STR(lhs)
		Z_PARAM_LONG(rhs)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &lhs_param, &rhs_param);
	zephir_get_strval(&lhs, lhs_param);
	ZVAL_LONG(&_0, rhs);
	RETURN_MM_LONG(phpqt_qbytearrayviewfunctions_compare_three_way(&lhs, &_0));
}

PHP_METHOD(Qt_Core_QBytearrayviewFunctions_QBytearrayviewFunctions, comparesEqual)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long rhs, r = 0;
	zval *lhs_param = NULL, *rhs_param = NULL, _0;
	zval lhs;

	ZVAL_UNDEF(&lhs);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_STR(lhs)
		Z_PARAM_LONG(rhs)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &lhs_param, &rhs_param);
	zephir_get_strval(&lhs, lhs_param);
	ZVAL_LONG(&_0, rhs);
	r = phpqt_qbytearrayviewfunctions_compares_equal(&lhs, &_0);
	RETURN_MM_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QBytearrayviewFunctions_QBytearrayviewFunctions, compareThreeWayQByteArrayViewQChar)
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
	RETURN_MM_LONG(phpqt_qbytearrayviewfunctions_compare_three_way_q_byte_array_view_q_char(&lhs, &rhs));
}

PHP_METHOD(Qt_Core_QBytearrayviewFunctions_QBytearrayviewFunctions, comparesEqualQByteArrayViewQChar)
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
	r = phpqt_qbytearrayviewfunctions_compares_equal_q_byte_array_view_q_char(&lhs, &rhs);
	RETURN_MM_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QBytearrayviewFunctions_QBytearrayviewFunctions, compareThreeWayQByteArrayViewChar)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *lhs_param = NULL, *rhs = NULL, rhs_sub;
	zval lhs;

	ZVAL_UNDEF(&lhs);
	ZVAL_UNDEF(&rhs_sub);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_STR(lhs)
		Z_PARAM_ZVAL(rhs)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &lhs_param, &rhs);
	zephir_get_strval(&lhs, lhs_param);
	RETURN_MM_LONG(phpqt_qbytearrayviewfunctions_compare_three_way_q_byte_array_view_char(&lhs, rhs));
}

PHP_METHOD(Qt_Core_QBytearrayviewFunctions_QBytearrayviewFunctions, comparesEqualQByteArrayViewChar)
{
	zend_long r = 0;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *lhs_param = NULL, *rhs = NULL, rhs_sub;
	zval lhs;

	ZVAL_UNDEF(&lhs);
	ZVAL_UNDEF(&rhs_sub);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_STR(lhs)
		Z_PARAM_ZVAL(rhs)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &lhs_param, &rhs);
	zephir_get_strval(&lhs, lhs_param);
	r = phpqt_qbytearrayviewfunctions_compares_equal_q_byte_array_view_char(&lhs, rhs);
	RETURN_MM_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QBytearrayviewFunctions_QBytearrayviewFunctions, compareThreeWayQByteArrayViewQByteArrayView)
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
	RETURN_MM_LONG(phpqt_qbytearrayviewfunctions_compare_three_way_q_byte_array_view_q_byte_array_view(&lhs, &rhs));
}

PHP_METHOD(Qt_Core_QBytearrayviewFunctions_QBytearrayviewFunctions, comparesEqualQByteArrayViewQByteArrayView)
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
	r = phpqt_qbytearrayviewfunctions_compares_equal_q_byte_array_view_q_byte_array_view(&lhs, &rhs);
	RETURN_MM_BOOL(r == 1);
}

