
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
#include "src/core-qstringfunctions.h"
#include "kernel/memory.h"
#include "kernel/object.h"
#include "kernel/operators.h"


ZEPHIR_INIT_CLASS(Qt_Core_QStringFunctions_QStringFunctions)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Core\\QStringFunctions, QStringFunctions, qt, core_qstringfunctions_qstringfunctions, qt_core_qstringfunctions_qstringfunctions_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Core_QStringFunctions_QStringFunctions, swap)
{
	zval result;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;

	ZVAL_UNDEF(&result);
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);

	ZEPHIR_INIT_VAR(&result);
	phpqt_qstringfunctions_swap(&result);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QStringFunctions_QStringFunctions, compareThreeWay)
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
	RETURN_MM_LONG(phpqt_qstringfunctions_compare_three_way(&lhs, rhs));
}

PHP_METHOD(Qt_Core_QStringFunctions_QStringFunctions, comparesEqual)
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
	r = phpqt_qstringfunctions_compares_equal(&lhs, rhs);
	RETURN_MM_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QStringFunctions_QStringFunctions, compareThreeWayQStringQByteArray)
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
	RETURN_MM_LONG(phpqt_qstringfunctions_compare_three_way_q_string_q_byte_array(&lhs, &rhs));
}

PHP_METHOD(Qt_Core_QStringFunctions_QStringFunctions, comparesEqualQStringQByteArray)
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
	r = phpqt_qstringfunctions_compares_equal_q_string_q_byte_array(&lhs, &rhs);
	RETURN_MM_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QStringFunctions_QStringFunctions, compareThreeWayQStringQByteArrayView)
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
	RETURN_MM_LONG(phpqt_qstringfunctions_compare_three_way_q_string_q_byte_array_view(&lhs, &rhs));
}

PHP_METHOD(Qt_Core_QStringFunctions_QStringFunctions, comparesEqualQStringQByteArrayView)
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
	r = phpqt_qstringfunctions_compares_equal_q_string_q_byte_array_view(&lhs, &rhs);
	RETURN_MM_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QStringFunctions_QStringFunctions, compareThreeWayQStringQChar)
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
	RETURN_MM_LONG(phpqt_qstringfunctions_compare_three_way_q_string_q_char(&lhs, &rhs));
}

PHP_METHOD(Qt_Core_QStringFunctions_QStringFunctions, comparesEqualQStringQChar)
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
	r = phpqt_qstringfunctions_compares_equal_q_string_q_char(&lhs, &rhs);
	RETURN_MM_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QStringFunctions_QStringFunctions, compareThreeWayQStringChar16T)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *s1_param = NULL, *s2 = NULL, s2_sub;
	zval s1;

	ZVAL_UNDEF(&s1);
	ZVAL_UNDEF(&s2_sub);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_STR(s1)
		Z_PARAM_ZVAL(s2)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &s1_param, &s2);
	zephir_get_strval(&s1, s1_param);
	RETURN_MM_LONG(phpqt_qstringfunctions_compare_three_way_q_string_char16_t(&s1, s2));
}

PHP_METHOD(Qt_Core_QStringFunctions_QStringFunctions, comparesEqualQStringChar16T)
{
	zend_long r = 0;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *s1_param = NULL, *s2 = NULL, s2_sub;
	zval s1;

	ZVAL_UNDEF(&s1);
	ZVAL_UNDEF(&s2_sub);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_STR(s1)
		Z_PARAM_ZVAL(s2)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &s1_param, &s2);
	zephir_get_strval(&s1, s1_param);
	r = phpqt_qstringfunctions_compares_equal_q_string_char16_t(&s1, s2);
	RETURN_MM_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QStringFunctions_QStringFunctions, compareThreeWayQStringQLatin1StringView)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *s1_param = NULL, *s2_param = NULL;
	zval s1, s2;

	ZVAL_UNDEF(&s1);
	ZVAL_UNDEF(&s2);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_STR(s1)
		Z_PARAM_STR(s2)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &s1_param, &s2_param);
	zephir_get_strval(&s1, s1_param);
	zephir_get_strval(&s2, s2_param);
	RETURN_MM_LONG(phpqt_qstringfunctions_compare_three_way_q_string_q_latin1_string_view(&s1, &s2));
}

PHP_METHOD(Qt_Core_QStringFunctions_QStringFunctions, comparesEqualQStringQLatin1StringView)
{
	zend_long r = 0;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *s1_param = NULL, *s2_param = NULL;
	zval s1, s2;

	ZVAL_UNDEF(&s1);
	ZVAL_UNDEF(&s2);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_STR(s1)
		Z_PARAM_STR(s2)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &s1_param, &s2_param);
	zephir_get_strval(&s1, s1_param);
	zephir_get_strval(&s2, s2_param);
	r = phpqt_qstringfunctions_compares_equal_q_string_q_latin1_string_view(&s1, &s2);
	RETURN_MM_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QStringFunctions_QStringFunctions, compareThreeWayQStringQString)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *s1_param = NULL, *s2_param = NULL;
	zval s1, s2;

	ZVAL_UNDEF(&s1);
	ZVAL_UNDEF(&s2);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_STR(s1)
		Z_PARAM_STR(s2)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &s1_param, &s2_param);
	zephir_get_strval(&s1, s1_param);
	zephir_get_strval(&s2, s2_param);
	RETURN_MM_LONG(phpqt_qstringfunctions_compare_three_way_q_string_q_string(&s1, &s2));
}

PHP_METHOD(Qt_Core_QStringFunctions_QStringFunctions, comparesEqualQStringQString)
{
	zend_long r = 0;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *s1_param = NULL, *s2_param = NULL;
	zval s1, s2;

	ZVAL_UNDEF(&s1);
	ZVAL_UNDEF(&s2);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_STR(s1)
		Z_PARAM_STR(s2)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &s1_param, &s2_param);
	zephir_get_strval(&s1, s1_param);
	zephir_get_strval(&s2, s2_param);
	r = phpqt_qstringfunctions_compares_equal_q_string_q_string(&s1, &s2);
	RETURN_MM_BOOL(r == 1);
}

