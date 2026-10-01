
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
#include "src/network-qdtlsclientverifier.h"
#include "kernel/object.h"
#include "kernel/string.h"
#include "kernel/memory.h"
#include "kernel/operators.h"


ZEPHIR_INIT_CLASS(Qt_Network_QDtlsClientVerifier_QDtlsClientVerifier)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Network\\QDtlsClientVerifier, QDtlsClientVerifier, qt, network_qdtlsclientverifier_qdtlsclientverifier, qt_network_qdtlsclientverifier_qdtlsclientverifier_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Network_QDtlsClientVerifier_QDtlsClientVerifier, staticMetaObject)
{

	RETURN_LONG(phpqt_qdtlsclientverifier_static_meta_object());
}

PHP_METHOD(Qt_Network_QDtlsClientVerifier_QDtlsClientVerifier, tr)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long n;
	zval *s = NULL, s_sub, *c = NULL, c_sub, *n_param = NULL, __$null, result, _0;

	ZVAL_UNDEF(&s_sub);
	ZVAL_UNDEF(&c_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(1, 3)
		Z_PARAM_ZVAL(s)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(c)
		Z_PARAM_LONG(n)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 2, &s, &c, &n_param);
	if (!c) {
		c = &c_sub;
		c = &__$null;
	}
	if (!n_param) {
		n = -1;
	} else {
		}
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, n);
	phpqt_qdtlsclientverifier_tr(&result, s, c, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Network_QDtlsClientVerifier_QDtlsClientVerifier, new_)
{
	zval *parent__param = NULL, _0;
	zend_long parent_;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(0, 1)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(parent_)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(0, 1, &parent__param);
	if (!parent__param) {
		parent_ = 0;
	} else {
		}
	ZVAL_LONG(&_0, parent_);
	RETURN_LONG(phpqt_qdtlsclientverifier_new(&_0));
}

PHP_METHOD(Qt_Network_QDtlsClientVerifier_QDtlsClientVerifier, setCookieGeneratorParameters)
{
	zval *handle_param = NULL, *params_param = NULL, _0, _1;
	zend_long handle, params, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(params)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &params_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, params);
	r = phpqt_qdtlsclientverifier_set_cookie_generator_parameters(&_0, &_1);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Network_QDtlsClientVerifier_QDtlsClientVerifier, cookieGeneratorParameters)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qdtlsclientverifier_cookie_generator_parameters(&_0));
}

PHP_METHOD(Qt_Network_QDtlsClientVerifier_QDtlsClientVerifier, verifyClient)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval dgram;
	zval *handle_param = NULL, *socket_param = NULL, *dgram_param = NULL, *address_param = NULL, *port_param = NULL, _0, _1, _2, _3;
	zend_long handle, socket, address, port, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&dgram);
	ZEND_PARSE_PARAMETERS_START(5, 5)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(socket)
		Z_PARAM_STR(dgram)
		Z_PARAM_LONG(address)
		Z_PARAM_LONG(port)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 5, 0, &handle_param, &socket_param, &dgram_param, &address_param, &port_param);
	zephir_get_strval(&dgram, dgram_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, socket);
	ZVAL_LONG(&_2, address);
	ZVAL_LONG(&_3, port);
	r = phpqt_qdtlsclientverifier_verify_client(&_0, &_1, &dgram, &_2, &_3);
	RETURN_MM_BOOL(r == 1);
}

PHP_METHOD(Qt_Network_QDtlsClientVerifier_QDtlsClientVerifier, verifiedHello)
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
	phpqt_qdtlsclientverifier_verified_hello(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Network_QDtlsClientVerifier_QDtlsClientVerifier, dtlsError)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qdtlsclientverifier_dtls_error(&_0));
}

PHP_METHOD(Qt_Network_QDtlsClientVerifier_QDtlsClientVerifier, dtlsErrorString)
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
	phpqt_qdtlsclientverifier_dtls_error_string(&result, &_0);
	RETURN_CCTOR(&result);
}

