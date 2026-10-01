
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
#include "src/network-qdtlsclientverifiergeneratorparameters.h"
#include "kernel/object.h"
#include "kernel/operators.h"
#include "kernel/memory.h"
#include "kernel/string.h"


ZEPHIR_INIT_CLASS(Qt_Network_QDtlsClientVerifierGeneratorParameters_QDtlsClientVerifierGeneratorParameters)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Network\\QDtlsClientVerifierGeneratorParameters, QDtlsClientVerifierGeneratorParameters, qt, network_qdtlsclientverifiergeneratorparameters_qdtlsclientverifiergeneratorparameters, qt_network_qdtlsclientverifiergeneratorparameters_qdtlsclientverifiergeneratorparameters_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Network_QDtlsClientVerifierGeneratorParameters_QDtlsClientVerifierGeneratorParameters, new_)
{

	RETURN_LONG(phpqt_qdtlsclientverifiergeneratorparameters_new());
}

PHP_METHOD(Qt_Network_QDtlsClientVerifierGeneratorParameters_QDtlsClientVerifierGeneratorParameters, newQCryptographicHashAlgorithmQByteArray)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval s;
	zval *a_param = NULL, *s_param = NULL, _0;
	zend_long a;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&s);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(a)
		Z_PARAM_STR(s)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &a_param, &s_param);
	zephir_get_strval(&s, s_param);
	ZVAL_LONG(&_0, a);
	RETURN_MM_LONG(phpqt_qdtlsclientverifiergeneratorparameters_new_q_cryptographic_hash_algorithm_q_byte_array(&_0, &s));
}

PHP_METHOD(Qt_Network_QDtlsClientVerifierGeneratorParameters_QDtlsClientVerifierGeneratorParameters, hash)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qdtlsclientverifiergeneratorparameters_hash(&_0));
}

PHP_METHOD(Qt_Network_QDtlsClientVerifierGeneratorParameters_QDtlsClientVerifierGeneratorParameters, setHash)
{
	zval *handle_param = NULL, *value_param = NULL, _0, _1;
	zend_long handle, value;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(value)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &value_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, value);
	phpqt_qdtlsclientverifiergeneratorparameters_set_hash(&_0, &_1);
}

PHP_METHOD(Qt_Network_QDtlsClientVerifierGeneratorParameters_QDtlsClientVerifierGeneratorParameters, secret)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, result, _0;
	zend_long handle;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &handle_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	phpqt_qdtlsclientverifiergeneratorparameters_secret(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Network_QDtlsClientVerifierGeneratorParameters_QDtlsClientVerifierGeneratorParameters, setSecret)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval value;
	zval *handle_param = NULL, *value_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&value);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(value)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &value_param);
	zephir_get_strval(&value, value_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qdtlsclientverifiergeneratorparameters_set_secret(&_0, &value);
	ZEPHIR_MM_RESTORE();
}

