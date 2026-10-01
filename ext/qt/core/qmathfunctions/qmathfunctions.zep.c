
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
#include "src/core-qmathfunctions.h"
#include "kernel/operators.h"
#include "kernel/memory.h"
#include "kernel/object.h"


ZEPHIR_INIT_CLASS(Qt_Core_QMathFunctions_QMathFunctions)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Core\\QMathFunctions, QMathFunctions, qt, core_qmathfunctions_qmathfunctions, qt_core_qmathfunctions_qmathfunctions_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Core_QMathFunctions_QMathFunctions, qFastSin)
{
	zval *x_param = NULL, _0;
	double x;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_ZVAL(x)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &x_param);
	x = zephir_get_doubleval(x_param);
	ZVAL_DOUBLE(&_0, x);
	RETURN_DOUBLE(phpqt_qmathfunctions_q_fast_sin(&_0));
}

PHP_METHOD(Qt_Core_QMathFunctions_QMathFunctions, qFastCos)
{
	zval *x_param = NULL, _0;
	double x;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_ZVAL(x)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &x_param);
	x = zephir_get_doubleval(x_param);
	ZVAL_DOUBLE(&_0, x);
	RETURN_DOUBLE(phpqt_qmathfunctions_q_fast_cos(&_0));
}

PHP_METHOD(Qt_Core_QMathFunctions_QMathFunctions, qDegreesToRadians)
{
	zval *degrees_param = NULL, _0;
	double degrees;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_ZVAL(degrees)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &degrees_param);
	degrees = zephir_get_doubleval(degrees_param);
	ZVAL_DOUBLE(&_0, degrees);
	RETURN_DOUBLE(phpqt_qmathfunctions_q_degrees_to_radians(&_0));
}

PHP_METHOD(Qt_Core_QMathFunctions_QMathFunctions, qDegreesToRadiansDouble)
{
	zval *degrees_param = NULL, _0;
	double degrees;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_ZVAL(degrees)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &degrees_param);
	degrees = zephir_get_doubleval(degrees_param);
	ZVAL_DOUBLE(&_0, degrees);
	RETURN_DOUBLE(phpqt_qmathfunctions_q_degrees_to_radians_double(&_0));
}

PHP_METHOD(Qt_Core_QMathFunctions_QMathFunctions, qDegreesToRadiansLongDouble)
{
	zval *degrees_param = NULL, _0;
	double degrees;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_ZVAL(degrees)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &degrees_param);
	degrees = zephir_get_doubleval(degrees_param);
	ZVAL_DOUBLE(&_0, degrees);
	RETURN_DOUBLE(phpqt_qmathfunctions_q_degrees_to_radians_long_double(&_0));
}

PHP_METHOD(Qt_Core_QMathFunctions_QMathFunctions, qRadiansToDegrees)
{
	zval *radians_param = NULL, _0;
	double radians;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_ZVAL(radians)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &radians_param);
	radians = zephir_get_doubleval(radians_param);
	ZVAL_DOUBLE(&_0, radians);
	RETURN_DOUBLE(phpqt_qmathfunctions_q_radians_to_degrees(&_0));
}

PHP_METHOD(Qt_Core_QMathFunctions_QMathFunctions, qRadiansToDegreesDouble)
{
	zval *radians_param = NULL, _0;
	double radians;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_ZVAL(radians)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &radians_param);
	radians = zephir_get_doubleval(radians_param);
	ZVAL_DOUBLE(&_0, radians);
	RETURN_DOUBLE(phpqt_qmathfunctions_q_radians_to_degrees_double(&_0));
}

PHP_METHOD(Qt_Core_QMathFunctions_QMathFunctions, qRadiansToDegreesLongDouble)
{
	zval *radians_param = NULL, _0;
	double radians;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_ZVAL(radians)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &radians_param);
	radians = zephir_get_doubleval(radians_param);
	ZVAL_DOUBLE(&_0, radians);
	RETURN_DOUBLE(phpqt_qmathfunctions_q_radians_to_degrees_long_double(&_0));
}

PHP_METHOD(Qt_Core_QMathFunctions_QMathFunctions, qNextPowerOfTwo)
{
	zval *v_param = NULL, _0;
	zend_long v;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(v)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &v_param);
	ZVAL_LONG(&_0, v);
	RETURN_LONG(phpqt_qmathfunctions_q_next_power_of_two(&_0));
}

PHP_METHOD(Qt_Core_QMathFunctions_QMathFunctions, qNextPowerOfTwoQuint64)
{
	zval *v_param = NULL, _0;
	zend_long v;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(v)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &v_param);
	ZVAL_LONG(&_0, v);
	RETURN_LONG(phpqt_qmathfunctions_q_next_power_of_two_quint64(&_0));
}

PHP_METHOD(Qt_Core_QMathFunctions_QMathFunctions, qNextPowerOfTwoQint32)
{
	zval *v_param = NULL, _0;
	zend_long v;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(v)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &v_param);
	ZVAL_LONG(&_0, v);
	RETURN_LONG(phpqt_qmathfunctions_q_next_power_of_two_qint32(&_0));
}

PHP_METHOD(Qt_Core_QMathFunctions_QMathFunctions, qNextPowerOfTwoQint64)
{
	zval *v_param = NULL, _0;
	zend_long v;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(v)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &v_param);
	ZVAL_LONG(&_0, v);
	RETURN_LONG(phpqt_qmathfunctions_q_next_power_of_two_qint64(&_0));
}

PHP_METHOD(Qt_Core_QMathFunctions_QMathFunctions, qNextPowerOfTwoLongUnsignedInt)
{
	zval *v_param = NULL, _0;
	zend_long v;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(v)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &v_param);
	ZVAL_LONG(&_0, v);
	RETURN_LONG(phpqt_qmathfunctions_q_next_power_of_two_long_unsigned_int(&_0));
}

PHP_METHOD(Qt_Core_QMathFunctions_QMathFunctions, qNextPowerOfTwoLongInt)
{
	zval *v_param = NULL, _0;
	zend_long v;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(v)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &v_param);
	ZVAL_LONG(&_0, v);
	RETURN_LONG(phpqt_qmathfunctions_q_next_power_of_two_long_int(&_0));
}

