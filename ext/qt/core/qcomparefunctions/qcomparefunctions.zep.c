
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
#include "src/core-qcomparefunctions.h"
#include "kernel/operators.h"
#include "kernel/memory.h"
#include "kernel/object.h"


ZEPHIR_INIT_CLASS(Qt_Core_QCompareFunctions_QCompareFunctions)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Core\\QCompareFunctions, QCompareFunctions, qt, core_qcomparefunctions_qcomparefunctions, qt_core_qcomparefunctions_qcomparefunctions_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Core_QCompareFunctions_QCompareFunctions, is_gteq)
{
	zval *o_param = NULL, _0;
	zend_long o, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(o)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &o_param);
	ZVAL_LONG(&_0, o);
	r = phpqt_qcomparefunctions_is_gteq(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QCompareFunctions_QCompareFunctions, is_gt)
{
	zval *o_param = NULL, _0;
	zend_long o, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(o)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &o_param);
	ZVAL_LONG(&_0, o);
	r = phpqt_qcomparefunctions_is_gt(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QCompareFunctions_QCompareFunctions, is_lteq)
{
	zval *o_param = NULL, _0;
	zend_long o, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(o)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &o_param);
	ZVAL_LONG(&_0, o);
	r = phpqt_qcomparefunctions_is_lteq(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QCompareFunctions_QCompareFunctions, is_lt)
{
	zval *o_param = NULL, _0;
	zend_long o, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(o)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &o_param);
	ZVAL_LONG(&_0, o);
	r = phpqt_qcomparefunctions_is_lt(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QCompareFunctions_QCompareFunctions, is_neq)
{
	zval *o_param = NULL, _0;
	zend_long o, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(o)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &o_param);
	ZVAL_LONG(&_0, o);
	r = phpqt_qcomparefunctions_is_neq(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QCompareFunctions_QCompareFunctions, is_eq)
{
	zval *o_param = NULL, _0;
	zend_long o, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(o)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &o_param);
	ZVAL_LONG(&_0, o);
	r = phpqt_qcomparefunctions_is_eq(&_0);
	RETURN_BOOL(r == 1);
}

