
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
#include "src/network-qsslserver.h"
#include "kernel/object.h"
#include "kernel/string.h"
#include "kernel/memory.h"
#include "kernel/operators.h"


ZEPHIR_INIT_CLASS(Qt_Network_QSslServer_QSslServer)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Network\\QSslServer, QSslServer, qt, network_qsslserver_qsslserver, qt_network_qsslserver_qsslserver_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Network_QSslServer_QSslServer, staticMetaObject)
{

	RETURN_LONG(phpqt_qsslserver_static_meta_object());
}

PHP_METHOD(Qt_Network_QSslServer_QSslServer, tr)
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
	phpqt_qsslserver_tr(&result, s, c, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Network_QSslServer_QSslServer, new_)
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
	RETURN_LONG(phpqt_qsslserver_new(&_0));
}

PHP_METHOD(Qt_Network_QSslServer_QSslServer, setSslConfiguration)
{
	zval *handle_param = NULL, *sslConfiguration_param = NULL, _0, _1;
	zend_long handle, sslConfiguration;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(sslConfiguration)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &sslConfiguration_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, sslConfiguration);
	phpqt_qsslserver_set_ssl_configuration(&_0, &_1);
}

PHP_METHOD(Qt_Network_QSslServer_QSslServer, sslConfiguration)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qsslserver_ssl_configuration(&_0));
}

PHP_METHOD(Qt_Network_QSslServer_QSslServer, setHandshakeTimeout)
{
	zval *handle_param = NULL, *timeout_param = NULL, _0, _1;
	zend_long handle, timeout;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(timeout)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &timeout_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, timeout);
	phpqt_qsslserver_set_handshake_timeout(&_0, &_1);
}

PHP_METHOD(Qt_Network_QSslServer_QSslServer, handshakeTimeout)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qsslserver_handshake_timeout(&_0));
}

PHP_METHOD(Qt_Network_QSslServer_QSslServer, sslErrors)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval errors;
	zval *handle_param = NULL, *socket_param = NULL, *errors_param = NULL, _0, _1;
	zend_long handle, socket;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&errors);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(socket)
		Z_PARAM_ARRAY(errors)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 3, 0, &handle_param, &socket_param, &errors_param);
	zephir_get_arrval(&errors, errors_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, socket);
	phpqt_qsslserver_ssl_errors(&_0, &_1, &errors);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_Network_QSslServer_QSslServer, peerVerifyError)
{
	zval *handle_param = NULL, *socket_param = NULL, *error_param = NULL, _0, _1, _2;
	zend_long handle, socket, error;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(socket)
		Z_PARAM_LONG(error)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &socket_param, &error_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, socket);
	ZVAL_LONG(&_2, error);
	phpqt_qsslserver_peer_verify_error(&_0, &_1, &_2);
}

PHP_METHOD(Qt_Network_QSslServer_QSslServer, errorOccurred)
{
	zval *handle_param = NULL, *socket_param = NULL, *error_param = NULL, _0, _1, _2;
	zend_long handle, socket, error;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(socket)
		Z_PARAM_LONG(error)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &socket_param, &error_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, socket);
	ZVAL_LONG(&_2, error);
	phpqt_qsslserver_error_occurred(&_0, &_1, &_2);
}

PHP_METHOD(Qt_Network_QSslServer_QSslServer, preSharedKeyAuthenticationRequired)
{
	zval *handle_param = NULL, *socket_param = NULL, *authenticator_param = NULL, _0, _1, _2;
	zend_long handle, socket, authenticator;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(socket)
		Z_PARAM_LONG(authenticator)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &socket_param, &authenticator_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, socket);
	ZVAL_LONG(&_2, authenticator);
	phpqt_qsslserver_pre_shared_key_authentication_required(&_0, &_1, &_2);
}

PHP_METHOD(Qt_Network_QSslServer_QSslServer, alertSent)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval description;
	zval *handle_param = NULL, *socket_param = NULL, *level_param = NULL, *type_param = NULL, *description_param = NULL, _0, _1, _2, _3;
	zend_long handle, socket, level, type;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&description);
	ZEND_PARSE_PARAMETERS_START(5, 5)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(socket)
		Z_PARAM_LONG(level)
		Z_PARAM_LONG(type)
		Z_PARAM_STR(description)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 5, 0, &handle_param, &socket_param, &level_param, &type_param, &description_param);
	zephir_get_strval(&description, description_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, socket);
	ZVAL_LONG(&_2, level);
	ZVAL_LONG(&_3, type);
	phpqt_qsslserver_alert_sent(&_0, &_1, &_2, &_3, &description);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_Network_QSslServer_QSslServer, alertReceived)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval description;
	zval *handle_param = NULL, *socket_param = NULL, *level_param = NULL, *type_param = NULL, *description_param = NULL, _0, _1, _2, _3;
	zend_long handle, socket, level, type;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&description);
	ZEND_PARSE_PARAMETERS_START(5, 5)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(socket)
		Z_PARAM_LONG(level)
		Z_PARAM_LONG(type)
		Z_PARAM_STR(description)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 5, 0, &handle_param, &socket_param, &level_param, &type_param, &description_param);
	zephir_get_strval(&description, description_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, socket);
	ZVAL_LONG(&_2, level);
	ZVAL_LONG(&_3, type);
	phpqt_qsslserver_alert_received(&_0, &_1, &_2, &_3, &description);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_Network_QSslServer_QSslServer, handshakeInterruptedOnError)
{
	zval *handle_param = NULL, *socket_param = NULL, *error_param = NULL, _0, _1, _2;
	zend_long handle, socket, error;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(socket)
		Z_PARAM_LONG(error)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &socket_param, &error_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, socket);
	ZVAL_LONG(&_2, error);
	phpqt_qsslserver_handshake_interrupted_on_error(&_0, &_1, &_2);
}

PHP_METHOD(Qt_Network_QSslServer_QSslServer, startedEncryptionHandshake)
{
	zval *handle_param = NULL, *socket_param = NULL, _0, _1;
	zend_long handle, socket;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(socket)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &socket_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, socket);
	phpqt_qsslserver_started_encryption_handshake(&_0, &_1);
}

PHP_METHOD(Qt_Network_QSslServer_QSslServer, incomingConnection)
{
	zval *handle_param = NULL, *socket_param = NULL, _0, _1;
	zend_long handle, socket;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(socket)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &socket_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, socket);
	phpqt_qsslserver_incoming_connection(&_0, &_1);
}

