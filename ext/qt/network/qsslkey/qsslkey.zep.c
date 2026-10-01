
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
#include "src/network-qsslkey.h"
#include "kernel/object.h"
#include "kernel/operators.h"
#include "kernel/memory.h"
#include "kernel/string.h"


ZEPHIR_INIT_CLASS(Qt_Network_QSslKey_QSslKey)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Network\\QSslKey, QSslKey, qt, network_qsslkey_qsslkey, qt_network_qsslkey_qsslkey_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Network_QSslKey_QSslKey, new_)
{

	RETURN_LONG(phpqt_qsslkey_new());
}

PHP_METHOD(Qt_Network_QSslKey_QSslKey, newQByteArrayQSslKeyAlgorithmQSslEncodingFormatQSslKeyTypeQByteArray)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long algorithm;
	zval *encoded_param = NULL, *algorithm_param = NULL, *format = NULL, format_sub, *type = NULL, type_sub, *passPhrase_param = NULL, __$null, _0;
	zval encoded, passPhrase;

	ZVAL_UNDEF(&encoded);
	ZVAL_UNDEF(&passPhrase);
	ZVAL_UNDEF(&format_sub);
	ZVAL_UNDEF(&type_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(2, 5)
		Z_PARAM_STR(encoded)
		Z_PARAM_LONG(algorithm)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(format)
		Z_PARAM_ZVAL_OR_NULL(type)
		Z_PARAM_STR(passPhrase)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 3, &encoded_param, &algorithm_param, &format, &type, &passPhrase_param);
	zephir_get_strval(&encoded, encoded_param);
	if (!format) {
		format = &format_sub;
		format = &__$null;
	}
	if (!type) {
		type = &type_sub;
		type = &__$null;
	}
	if (!passPhrase_param) {
		ZEPHIR_INIT_VAR(&passPhrase);
		ZVAL_STRING(&passPhrase, "");
	} else {
		zephir_get_strval(&passPhrase, passPhrase_param);
	}
	ZVAL_LONG(&_0, algorithm);
	RETURN_MM_LONG(phpqt_qsslkey_new_q_byte_array_q_ssl_key_algorithm_q_ssl_encoding_format_q_ssl_key_type_q_byte_array(&encoded, &_0, format, type, &passPhrase));
}

PHP_METHOD(Qt_Network_QSslKey_QSslKey, newQIODeviceQSslKeyAlgorithmQSslEncodingFormatQSslKeyTypeQByteArray)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval passPhrase;
	zval *device_param = NULL, *algorithm_param = NULL, *format = NULL, format_sub, *type = NULL, type_sub, *passPhrase_param = NULL, __$null, _0, _1;
	zend_long device, algorithm;

	ZVAL_UNDEF(&format_sub);
	ZVAL_UNDEF(&type_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&passPhrase);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(2, 5)
		Z_PARAM_LONG(device)
		Z_PARAM_LONG(algorithm)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(format)
		Z_PARAM_ZVAL_OR_NULL(type)
		Z_PARAM_STR(passPhrase)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 3, &device_param, &algorithm_param, &format, &type, &passPhrase_param);
	if (!format) {
		format = &format_sub;
		format = &__$null;
	}
	if (!type) {
		type = &type_sub;
		type = &__$null;
	}
	if (!passPhrase_param) {
		ZEPHIR_INIT_VAR(&passPhrase);
		ZVAL_STRING(&passPhrase, "");
	} else {
		zephir_get_strval(&passPhrase, passPhrase_param);
	}
	ZVAL_LONG(&_0, device);
	ZVAL_LONG(&_1, algorithm);
	RETURN_MM_LONG(phpqt_qsslkey_new_q_i_o_device_q_ssl_key_algorithm_q_ssl_encoding_format_q_ssl_key_type_q_byte_array(&_0, &_1, format, type, &passPhrase));
}

PHP_METHOD(Qt_Network_QSslKey_QSslKey, newQSslKey)
{
	zval *other_param = NULL, _0;
	zend_long other;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(other)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &other_param);
	ZVAL_LONG(&_0, other);
	RETURN_LONG(phpqt_qsslkey_new_q_ssl_key(&_0));
}

PHP_METHOD(Qt_Network_QSslKey_QSslKey, swap)
{
	zval *handle_param = NULL, *other_param = NULL, _0, _1;
	zend_long handle, other;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(other)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &other_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, other);
	phpqt_qsslkey_swap(&_0, &_1);
}

PHP_METHOD(Qt_Network_QSslKey_QSslKey, isNull)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qsslkey_is_null(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Network_QSslKey_QSslKey, clear)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qsslkey_clear(&_0);
}

PHP_METHOD(Qt_Network_QSslKey_QSslKey, length)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qsslkey_length(&_0));
}

PHP_METHOD(Qt_Network_QSslKey_QSslKey, type)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qsslkey_type(&_0));
}

PHP_METHOD(Qt_Network_QSslKey_QSslKey, algorithm)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qsslkey_algorithm(&_0));
}

PHP_METHOD(Qt_Network_QSslKey_QSslKey, toPem)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval passPhrase;
	zval *handle_param = NULL, *passPhrase_param = NULL, result, _0;
	zend_long handle;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&passPhrase);
	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_OPTIONAL
		Z_PARAM_STR(passPhrase)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 1, &handle_param, &passPhrase_param);
	if (!passPhrase_param) {
		ZEPHIR_INIT_VAR(&passPhrase);
		ZVAL_STRING(&passPhrase, "");
	} else {
		zephir_get_strval(&passPhrase, passPhrase_param);
	}
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	phpqt_qsslkey_to_pem(&result, &_0, &passPhrase);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Network_QSslKey_QSslKey, toDer)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval passPhrase;
	zval *handle_param = NULL, *passPhrase_param = NULL, result, _0;
	zend_long handle;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&passPhrase);
	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_OPTIONAL
		Z_PARAM_STR(passPhrase)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 1, &handle_param, &passPhrase_param);
	if (!passPhrase_param) {
		ZEPHIR_INIT_VAR(&passPhrase);
		ZVAL_STRING(&passPhrase, "");
	} else {
		zephir_get_strval(&passPhrase, passPhrase_param);
	}
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	phpqt_qsslkey_to_der(&result, &_0, &passPhrase);
	RETURN_CCTOR(&result);
}

