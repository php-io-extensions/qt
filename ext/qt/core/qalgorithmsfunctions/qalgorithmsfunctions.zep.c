
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
#include "src/core-qalgorithmsfunctions.h"
#include "kernel/operators.h"
#include "kernel/memory.h"
#include "kernel/object.h"


ZEPHIR_INIT_CLASS(Qt_Core_QAlgorithmsFunctions_QAlgorithmsFunctions)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Core\\QAlgorithmsFunctions, QAlgorithmsFunctions, qt, core_qalgorithmsfunctions_qalgorithmsfunctions, qt_core_qalgorithmsfunctions_qalgorithmsfunctions_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Core_QAlgorithmsFunctions_QAlgorithmsFunctions, qPopulationCount)
{
	zval *v_param = NULL, _0;
	zend_long v;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(v)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &v_param);
	ZVAL_LONG(&_0, v);
	RETURN_LONG(phpqt_qalgorithmsfunctions_q_population_count(&_0));
}

PHP_METHOD(Qt_Core_QAlgorithmsFunctions_QAlgorithmsFunctions, qPopulationCountQuint8)
{
	zval *v_param = NULL, _0;
	zend_long v;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(v)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &v_param);
	ZVAL_LONG(&_0, v);
	RETURN_LONG(phpqt_qalgorithmsfunctions_q_population_count_quint8(&_0));
}

PHP_METHOD(Qt_Core_QAlgorithmsFunctions_QAlgorithmsFunctions, qPopulationCountQuint16)
{
	zval *v_param = NULL, _0;
	zend_long v;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(v)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &v_param);
	ZVAL_LONG(&_0, v);
	RETURN_LONG(phpqt_qalgorithmsfunctions_q_population_count_quint16(&_0));
}

PHP_METHOD(Qt_Core_QAlgorithmsFunctions_QAlgorithmsFunctions, qPopulationCountQuint64)
{
	zval *v_param = NULL, _0;
	zend_long v;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(v)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &v_param);
	ZVAL_LONG(&_0, v);
	RETURN_LONG(phpqt_qalgorithmsfunctions_q_population_count_quint64(&_0));
}

PHP_METHOD(Qt_Core_QAlgorithmsFunctions_QAlgorithmsFunctions, qPopulationCountLongUnsignedInt)
{
	zval *v_param = NULL, _0;
	zend_long v;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(v)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &v_param);
	ZVAL_LONG(&_0, v);
	RETURN_LONG(phpqt_qalgorithmsfunctions_q_population_count_long_unsigned_int(&_0));
}

PHP_METHOD(Qt_Core_QAlgorithmsFunctions_QAlgorithmsFunctions, qCountTrailingZeroBits)
{
	zval *v_param = NULL, _0;
	zend_long v;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(v)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &v_param);
	ZVAL_LONG(&_0, v);
	RETURN_LONG(phpqt_qalgorithmsfunctions_q_count_trailing_zero_bits(&_0));
}

PHP_METHOD(Qt_Core_QAlgorithmsFunctions_QAlgorithmsFunctions, qCountTrailingZeroBitsQuint8)
{
	zval *v_param = NULL, _0;
	zend_long v;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(v)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &v_param);
	ZVAL_LONG(&_0, v);
	RETURN_LONG(phpqt_qalgorithmsfunctions_q_count_trailing_zero_bits_quint8(&_0));
}

PHP_METHOD(Qt_Core_QAlgorithmsFunctions_QAlgorithmsFunctions, qCountTrailingZeroBitsQuint16)
{
	zval *v_param = NULL, _0;
	zend_long v;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(v)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &v_param);
	ZVAL_LONG(&_0, v);
	RETURN_LONG(phpqt_qalgorithmsfunctions_q_count_trailing_zero_bits_quint16(&_0));
}

PHP_METHOD(Qt_Core_QAlgorithmsFunctions_QAlgorithmsFunctions, qCountTrailingZeroBitsQuint64)
{
	zval *v_param = NULL, _0;
	zend_long v;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(v)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &v_param);
	ZVAL_LONG(&_0, v);
	RETURN_LONG(phpqt_qalgorithmsfunctions_q_count_trailing_zero_bits_quint64(&_0));
}

PHP_METHOD(Qt_Core_QAlgorithmsFunctions_QAlgorithmsFunctions, qCountTrailingZeroBitsLongUnsignedInt)
{
	zval *v_param = NULL, _0;
	zend_long v;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(v)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &v_param);
	ZVAL_LONG(&_0, v);
	RETURN_LONG(phpqt_qalgorithmsfunctions_q_count_trailing_zero_bits_long_unsigned_int(&_0));
}

PHP_METHOD(Qt_Core_QAlgorithmsFunctions_QAlgorithmsFunctions, qCountLeadingZeroBits)
{
	zval *v_param = NULL, _0;
	zend_long v;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(v)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &v_param);
	ZVAL_LONG(&_0, v);
	RETURN_LONG(phpqt_qalgorithmsfunctions_q_count_leading_zero_bits(&_0));
}

PHP_METHOD(Qt_Core_QAlgorithmsFunctions_QAlgorithmsFunctions, qCountLeadingZeroBitsQuint8)
{
	zval *v_param = NULL, _0;
	zend_long v;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(v)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &v_param);
	ZVAL_LONG(&_0, v);
	RETURN_LONG(phpqt_qalgorithmsfunctions_q_count_leading_zero_bits_quint8(&_0));
}

PHP_METHOD(Qt_Core_QAlgorithmsFunctions_QAlgorithmsFunctions, qCountLeadingZeroBitsQuint16)
{
	zval *v_param = NULL, _0;
	zend_long v;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(v)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &v_param);
	ZVAL_LONG(&_0, v);
	RETURN_LONG(phpqt_qalgorithmsfunctions_q_count_leading_zero_bits_quint16(&_0));
}

PHP_METHOD(Qt_Core_QAlgorithmsFunctions_QAlgorithmsFunctions, qCountLeadingZeroBitsQuint64)
{
	zval *v_param = NULL, _0;
	zend_long v;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(v)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &v_param);
	ZVAL_LONG(&_0, v);
	RETURN_LONG(phpqt_qalgorithmsfunctions_q_count_leading_zero_bits_quint64(&_0));
}

PHP_METHOD(Qt_Core_QAlgorithmsFunctions_QAlgorithmsFunctions, qCountLeadingZeroBitsLongUnsignedInt)
{
	zval *v_param = NULL, _0;
	zend_long v;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(v)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &v_param);
	ZVAL_LONG(&_0, v);
	RETURN_LONG(phpqt_qalgorithmsfunctions_q_count_leading_zero_bits_long_unsigned_int(&_0));
}

