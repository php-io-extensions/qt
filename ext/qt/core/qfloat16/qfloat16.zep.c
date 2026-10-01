
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
#include "src/core-qfloat16.h"
#include "kernel/object.h"
#include "kernel/operators.h"
#include "kernel/memory.h"


ZEPHIR_INIT_CLASS(Qt_Core_qfloat16_qfloat16)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Core\\qfloat16, qfloat16, qt, core_qfloat16_qfloat16, qt_core_qfloat16_qfloat16_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Core_qfloat16_qfloat16, IsNative)
{
	zend_long r = 0;
	r = phpqt_qfloat16_is_native();
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_qfloat16_qfloat16, new_)
{

	RETURN_LONG(phpqt_qfloat16_new());
}

PHP_METHOD(Qt_Core_qfloat16_qfloat16, newQtInitialization)
{
	zval *arg0_param = NULL, _0;
	zend_long arg0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(arg0)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &arg0_param);
	ZVAL_LONG(&_0, arg0);
	RETURN_LONG(phpqt_qfloat16_new_qt_initialization(&_0));
}

PHP_METHOD(Qt_Core_qfloat16_qfloat16, newFloat)
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
	RETURN_LONG(phpqt_qfloat16_new_float(&_0));
}

PHP_METHOD(Qt_Core_qfloat16_qfloat16, isInf)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qfloat16_is_inf(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_qfloat16_qfloat16, isNaN)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qfloat16_is_na_n(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_qfloat16_qfloat16, isFinite)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qfloat16_is_finite(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_qfloat16_qfloat16, fpClassify)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qfloat16_fp_classify(&_0));
}

PHP_METHOD(Qt_Core_qfloat16_qfloat16, copySign)
{
	zval *handle_param = NULL, *sign_param = NULL, _0, _1;
	zend_long handle, sign;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(sign)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &sign_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, sign);
	RETURN_LONG(phpqt_qfloat16_copy_sign(&_0, &_1));
}

PHP_METHOD(Qt_Core_qfloat16_qfloat16, _limit_epsilon)
{

	RETURN_LONG(phpqt_qfloat16__limit_epsilon());
}

PHP_METHOD(Qt_Core_qfloat16_qfloat16, _limit_min)
{

	RETURN_LONG(phpqt_qfloat16__limit_min());
}

PHP_METHOD(Qt_Core_qfloat16_qfloat16, _limit_denorm_min)
{

	RETURN_LONG(phpqt_qfloat16__limit_denorm_min());
}

PHP_METHOD(Qt_Core_qfloat16_qfloat16, _limit_max)
{

	RETURN_LONG(phpqt_qfloat16__limit_max());
}

PHP_METHOD(Qt_Core_qfloat16_qfloat16, _limit_lowest)
{

	RETURN_LONG(phpqt_qfloat16__limit_lowest());
}

PHP_METHOD(Qt_Core_qfloat16_qfloat16, _limit_infinity)
{

	RETURN_LONG(phpqt_qfloat16__limit_infinity());
}

PHP_METHOD(Qt_Core_qfloat16_qfloat16, _limit_quiet_NaN)
{

	RETURN_LONG(phpqt_qfloat16__limit_quiet__na_n());
}

PHP_METHOD(Qt_Core_qfloat16_qfloat16, _limit_signaling_NaN)
{

	RETURN_LONG(phpqt_qfloat16__limit_signaling__na_n());
}

PHP_METHOD(Qt_Core_qfloat16_qfloat16, isNormal)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qfloat16_is_normal(&_0);
	RETURN_BOOL(r == 1);
}

