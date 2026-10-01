
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
#include "src/network-qdtls.h"
#include "kernel/object.h"
#include "kernel/string.h"
#include "kernel/memory.h"
#include "kernel/operators.h"


ZEPHIR_INIT_CLASS(Qt_Network_QDtls_QDtls)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Network\\QDtls, QDtls, qt, network_qdtls_qdtls, qt_network_qdtls_qdtls_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Network_QDtls_QDtls, staticMetaObject)
{

	RETURN_LONG(phpqt_qdtls_static_meta_object());
}

PHP_METHOD(Qt_Network_QDtls_QDtls, tr)
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
	phpqt_qdtls_tr(&result, s, c, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Network_QDtls_QDtls, new_)
{
	zval *mode_param = NULL, *parent__param = NULL, _0, _1;
	zend_long mode, parent_;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_LONG(mode)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(parent_)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 1, &mode_param, &parent__param);
	if (!parent__param) {
		parent_ = 0;
	} else {
		}
	ZVAL_LONG(&_0, mode);
	ZVAL_LONG(&_1, parent_);
	RETURN_LONG(phpqt_qdtls_new(&_0, &_1));
}

PHP_METHOD(Qt_Network_QDtls_QDtls, setPeer)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval verificationName;
	zval *handle_param = NULL, *address_param = NULL, *port_param = NULL, *verificationName_param = NULL, _0, _1, _2;
	zend_long handle, address, port, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&verificationName);
	ZEND_PARSE_PARAMETERS_START(3, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(address)
		Z_PARAM_LONG(port)
		Z_PARAM_OPTIONAL
		Z_PARAM_STR(verificationName)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 3, 1, &handle_param, &address_param, &port_param, &verificationName_param);
	if (!verificationName_param) {
		ZEPHIR_INIT_VAR(&verificationName);
		ZVAL_STRING(&verificationName, "");
	} else {
		zephir_get_strval(&verificationName, verificationName_param);
	}
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, address);
	ZVAL_LONG(&_2, port);
	r = phpqt_qdtls_set_peer(&_0, &_1, &_2, &verificationName);
	RETURN_MM_BOOL(r == 1);
}

PHP_METHOD(Qt_Network_QDtls_QDtls, setPeerVerificationName)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval name;
	zval *handle_param = NULL, *name_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&name);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(name)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &name_param);
	zephir_get_strval(&name, name_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qdtls_set_peer_verification_name(&_0, &name);
	RETURN_MM_BOOL(r == 1);
}

PHP_METHOD(Qt_Network_QDtls_QDtls, peerAddress)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qdtls_peer_address(&_0));
}

PHP_METHOD(Qt_Network_QDtls_QDtls, peerPort)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qdtls_peer_port(&_0));
}

PHP_METHOD(Qt_Network_QDtls_QDtls, peerVerificationName)
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
	phpqt_qdtls_peer_verification_name(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Network_QDtls_QDtls, sslMode)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qdtls_ssl_mode(&_0));
}

PHP_METHOD(Qt_Network_QDtls_QDtls, setMtuHint)
{
	zval *handle_param = NULL, *mtuHint_param = NULL, _0, _1;
	zend_long handle, mtuHint;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(mtuHint)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &mtuHint_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, mtuHint);
	phpqt_qdtls_set_mtu_hint(&_0, &_1);
}

PHP_METHOD(Qt_Network_QDtls_QDtls, mtuHint)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qdtls_mtu_hint(&_0));
}

PHP_METHOD(Qt_Network_QDtls_QDtls, setCookieGeneratorParameters)
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
	r = phpqt_qdtls_set_cookie_generator_parameters(&_0, &_1);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Network_QDtls_QDtls, cookieGeneratorParameters)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qdtls_cookie_generator_parameters(&_0));
}

PHP_METHOD(Qt_Network_QDtls_QDtls, setDtlsConfiguration)
{
	zval *handle_param = NULL, *configuration_param = NULL, _0, _1;
	zend_long handle, configuration, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(configuration)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &configuration_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, configuration);
	r = phpqt_qdtls_set_dtls_configuration(&_0, &_1);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Network_QDtls_QDtls, dtlsConfiguration)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qdtls_dtls_configuration(&_0));
}

PHP_METHOD(Qt_Network_QDtls_QDtls, handshakeState)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qdtls_handshake_state(&_0));
}

PHP_METHOD(Qt_Network_QDtls_QDtls, doHandshake)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval dgram;
	zval *handle_param = NULL, *socket_param = NULL, *dgram_param = NULL, _0, _1;
	zend_long handle, socket, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&dgram);
	ZEND_PARSE_PARAMETERS_START(2, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(socket)
		Z_PARAM_OPTIONAL
		Z_PARAM_STR(dgram)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 1, &handle_param, &socket_param, &dgram_param);
	if (!dgram_param) {
		ZEPHIR_INIT_VAR(&dgram);
		ZVAL_STRING(&dgram, "");
	} else {
		zephir_get_strval(&dgram, dgram_param);
	}
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, socket);
	r = phpqt_qdtls_do_handshake(&_0, &_1, &dgram);
	RETURN_MM_BOOL(r == 1);
}

PHP_METHOD(Qt_Network_QDtls_QDtls, handleTimeout)
{
	zval *handle_param = NULL, *socket_param = NULL, _0, _1;
	zend_long handle, socket, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(socket)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &socket_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, socket);
	r = phpqt_qdtls_handle_timeout(&_0, &_1);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Network_QDtls_QDtls, resumeHandshake)
{
	zval *handle_param = NULL, *socket_param = NULL, _0, _1;
	zend_long handle, socket, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(socket)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &socket_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, socket);
	r = phpqt_qdtls_resume_handshake(&_0, &_1);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Network_QDtls_QDtls, abortHandshake)
{
	zval *handle_param = NULL, *socket_param = NULL, _0, _1;
	zend_long handle, socket, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(socket)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &socket_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, socket);
	r = phpqt_qdtls_abort_handshake(&_0, &_1);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Network_QDtls_QDtls, shutdown)
{
	zval *handle_param = NULL, *socket_param = NULL, _0, _1;
	zend_long handle, socket, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(socket)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &socket_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, socket);
	r = phpqt_qdtls_shutdown(&_0, &_1);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Network_QDtls_QDtls, isConnectionEncrypted)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qdtls_is_connection_encrypted(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Network_QDtls_QDtls, sessionCipher)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qdtls_session_cipher(&_0));
}

PHP_METHOD(Qt_Network_QDtls_QDtls, sessionProtocol)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qdtls_session_protocol(&_0));
}

PHP_METHOD(Qt_Network_QDtls_QDtls, writeDatagramEncrypted)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval dgram;
	zval *handle_param = NULL, *socket_param = NULL, *dgram_param = NULL, _0, _1;
	zend_long handle, socket;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&dgram);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(socket)
		Z_PARAM_STR(dgram)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 3, 0, &handle_param, &socket_param, &dgram_param);
	zephir_get_strval(&dgram, dgram_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, socket);
	RETURN_MM_LONG(phpqt_qdtls_write_datagram_encrypted(&_0, &_1, &dgram));
}

PHP_METHOD(Qt_Network_QDtls_QDtls, decryptDatagram)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval dgram;
	zval *handle_param = NULL, *socket_param = NULL, *dgram_param = NULL, result, _0, _1;
	zend_long handle, socket;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&dgram);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(socket)
		Z_PARAM_STR(dgram)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 3, 0, &handle_param, &socket_param, &dgram_param);
	zephir_get_strval(&dgram, dgram_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, socket);
	phpqt_qdtls_decrypt_datagram(&result, &_0, &_1, &dgram);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Network_QDtls_QDtls, dtlsError)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qdtls_dtls_error(&_0));
}

PHP_METHOD(Qt_Network_QDtls_QDtls, dtlsErrorString)
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
	phpqt_qdtls_dtls_error_string(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Network_QDtls_QDtls, peerVerificationErrors)
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
	phpqt_qdtls_peer_verification_errors(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Network_QDtls_QDtls, ignoreVerificationErrors)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval errorsToIgnore;
	zval *handle_param = NULL, *errorsToIgnore_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&errorsToIgnore);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ARRAY(errorsToIgnore)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &errorsToIgnore_param);
	zephir_get_arrval(&errorsToIgnore, errorsToIgnore_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qdtls_ignore_verification_errors(&_0, &errorsToIgnore);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_Network_QDtls_QDtls, pskRequired)
{
	zval *handle_param = NULL, *authenticator_param = NULL, _0, _1;
	zend_long handle, authenticator;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(authenticator)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &authenticator_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, authenticator);
	phpqt_qdtls_psk_required(&_0, &_1);
}

PHP_METHOD(Qt_Network_QDtls_QDtls, handshakeTimeout)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qdtls_handshake_timeout(&_0);
}

