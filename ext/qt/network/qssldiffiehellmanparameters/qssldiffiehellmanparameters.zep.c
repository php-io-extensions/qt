
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
#include "src/network-qssldiffiehellmanparameters.h"
#include "kernel/object.h"
#include "kernel/operators.h"
#include "kernel/memory.h"
#include "kernel/string.h"


ZEPHIR_INIT_CLASS(Qt_Network_QSslDiffieHellmanParameters_QSslDiffieHellmanParameters)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Network\\QSslDiffieHellmanParameters, QSslDiffieHellmanParameters, qt, network_qssldiffiehellmanparameters_qssldiffiehellmanparameters, qt_network_qssldiffiehellmanparameters_qssldiffiehellmanparameters_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Network_QSslDiffieHellmanParameters_QSslDiffieHellmanParameters, defaultParameters)
{

	RETURN_LONG(phpqt_qssldiffiehellmanparameters_default_parameters());
}

PHP_METHOD(Qt_Network_QSslDiffieHellmanParameters_QSslDiffieHellmanParameters, new_)
{

	RETURN_LONG(phpqt_qssldiffiehellmanparameters_new());
}

PHP_METHOD(Qt_Network_QSslDiffieHellmanParameters_QSslDiffieHellmanParameters, newQSslDiffieHellmanParameters)
{
	zval *other_param = NULL, _0;
	zend_long other;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(other)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &other_param);
	ZVAL_LONG(&_0, other);
	RETURN_LONG(phpqt_qssldiffiehellmanparameters_new_q_ssl_diffie_hellman_parameters(&_0));
}

PHP_METHOD(Qt_Network_QSslDiffieHellmanParameters_QSslDiffieHellmanParameters, swap)
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
	phpqt_qssldiffiehellmanparameters_swap(&_0, &_1);
}

PHP_METHOD(Qt_Network_QSslDiffieHellmanParameters_QSslDiffieHellmanParameters, fromEncoded)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *encoded_param = NULL, *format = NULL, format_sub, __$null;
	zval encoded;

	ZVAL_UNDEF(&encoded);
	ZVAL_UNDEF(&format_sub);
	ZVAL_NULL(&__$null);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_STR(encoded)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(format)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 1, &encoded_param, &format);
	zephir_get_strval(&encoded, encoded_param);
	if (!format) {
		format = &format_sub;
		format = &__$null;
	}
	RETURN_MM_LONG(phpqt_qssldiffiehellmanparameters_from_encoded(&encoded, format));
}

PHP_METHOD(Qt_Network_QSslDiffieHellmanParameters_QSslDiffieHellmanParameters, fromEncodedQIODeviceQSslEncodingFormat)
{
	zval *device_param = NULL, *format = NULL, format_sub, __$null, _0;
	zend_long device;

	ZVAL_UNDEF(&format_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_LONG(device)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(format)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 1, &device_param, &format);
	if (!format) {
		format = &format_sub;
		format = &__$null;
	}
	ZVAL_LONG(&_0, device);
	RETURN_LONG(phpqt_qssldiffiehellmanparameters_from_encoded_q_i_o_device_q_ssl_encoding_format(&_0, format));
}

PHP_METHOD(Qt_Network_QSslDiffieHellmanParameters_QSslDiffieHellmanParameters, isEmpty)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qssldiffiehellmanparameters_is_empty(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Network_QSslDiffieHellmanParameters_QSslDiffieHellmanParameters, isValid)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qssldiffiehellmanparameters_is_valid(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Network_QSslDiffieHellmanParameters_QSslDiffieHellmanParameters, error)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qssldiffiehellmanparameters_error(&_0));
}

PHP_METHOD(Qt_Network_QSslDiffieHellmanParameters_QSslDiffieHellmanParameters, errorString)
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
	phpqt_qssldiffiehellmanparameters_error_string(&result, &_0);
	RETURN_CCTOR(&result);
}

