
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
#include "src/core-qendianfunctions.h"
#include "kernel/operators.h"
#include "kernel/memory.h"
#include "kernel/object.h"


ZEPHIR_INIT_CLASS(Qt_Core_QEndianFunctions_QEndianFunctions)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Core\\QEndianFunctions, QEndianFunctions, qt, core_qendianfunctions_qendianfunctions, qt_core_qendianfunctions_qendianfunctions_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Core_QEndianFunctions_QEndianFunctions, qbswap_helper)
{
	zval *source_param = NULL, _0;
	zend_long source;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(source)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &source_param);
	ZVAL_LONG(&_0, source);
	RETURN_LONG(phpqt_qendianfunctions_qbswap_helper(&_0));
}

PHP_METHOD(Qt_Core_QEndianFunctions_QEndianFunctions, qbswap_helperQuint32)
{
	zval *source_param = NULL, _0;
	zend_long source;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(source)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &source_param);
	ZVAL_LONG(&_0, source);
	RETURN_LONG(phpqt_qendianfunctions_qbswap_helper_quint32(&_0));
}

PHP_METHOD(Qt_Core_QEndianFunctions_QEndianFunctions, qbswap_helperQuint16)
{
	zval *source_param = NULL, _0;
	zend_long source;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(source)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &source_param);
	ZVAL_LONG(&_0, source);
	RETURN_LONG(phpqt_qendianfunctions_qbswap_helper_quint16(&_0));
}

PHP_METHOD(Qt_Core_QEndianFunctions_QEndianFunctions, qbswap_helperQuint8)
{
	zval *source_param = NULL, _0;
	zend_long source;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(source)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &source_param);
	ZVAL_LONG(&_0, source);
	RETURN_LONG(phpqt_qendianfunctions_qbswap_helper_quint8(&_0));
}

PHP_METHOD(Qt_Core_QEndianFunctions_QEndianFunctions, qbswap)
{
	zval *source_param = NULL, _0;
	zend_long source;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(source)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &source_param);
	ZVAL_LONG(&_0, source);
	RETURN_LONG(phpqt_qendianfunctions_qbswap(&_0));
}

PHP_METHOD(Qt_Core_QEndianFunctions_QEndianFunctions, qbswapQint128)
{
	zval *source_param = NULL, _0;
	zend_long source;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(source)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &source_param);
	ZVAL_LONG(&_0, source);
	RETURN_LONG(phpqt_qendianfunctions_qbswap_qint128(&_0));
}

PHP_METHOD(Qt_Core_QEndianFunctions_QEndianFunctions, qbswapQfloat16)
{
	zval *source_param = NULL, _0;
	zend_long source;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(source)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &source_param);
	ZVAL_LONG(&_0, source);
	RETURN_LONG(phpqt_qendianfunctions_qbswap_qfloat16(&_0));
}

PHP_METHOD(Qt_Core_QEndianFunctions_QEndianFunctions, qbswapFloat)
{
	zval *source_param = NULL, _0;
	double source;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_ZVAL(source)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &source_param);
	source = zephir_get_doubleval(source_param);
	ZVAL_DOUBLE(&_0, source);
	RETURN_DOUBLE(phpqt_qendianfunctions_qbswap_float(&_0));
}

PHP_METHOD(Qt_Core_QEndianFunctions_QEndianFunctions, qbswapDouble)
{
	zval *source_param = NULL, _0;
	double source;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_ZVAL(source)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &source_param);
	source = zephir_get_doubleval(source_param);
	ZVAL_DOUBLE(&_0, source);
	RETURN_DOUBLE(phpqt_qendianfunctions_qbswap_double(&_0));
}

