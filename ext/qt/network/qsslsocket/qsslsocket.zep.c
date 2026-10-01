
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
#include "src/network-qsslsocket.h"
#include "kernel/operators.h"
#include "kernel/memory.h"
#include "kernel/object.h"
#include "kernel/string.h"


ZEPHIR_INIT_CLASS(Qt_Network_QSslSocket_QSslSocket)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Network\\QSslSocket, QSslSocket, qt, network_qsslsocket_qsslsocket, qt_network_qsslsocket_qsslsocket_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Network_QSslSocket_QSslSocket, connectToHost)
{
	zval *handle_param = NULL, *address_param = NULL, *port_param = NULL, *mode = NULL, mode_sub, __$null, _0, _1, _2;
	zend_long handle, address, port;

	ZVAL_UNDEF(&mode_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(3, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(address)
		Z_PARAM_LONG(port)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(mode)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 1, &handle_param, &address_param, &port_param, &mode);
	if (!mode) {
		mode = &mode_sub;
		mode = &__$null;
	}
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, address);
	ZVAL_LONG(&_2, port);
	phpqt_qsslsocket_connect_to_host(&_0, &_1, &_2, mode);
}

PHP_METHOD(Qt_Network_QSslSocket_QSslSocket, staticMetaObject)
{

	RETURN_LONG(phpqt_qsslsocket_static_meta_object());
}

PHP_METHOD(Qt_Network_QSslSocket_QSslSocket, tr)
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
	phpqt_qsslsocket_tr(&result, s, c, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Network_QSslSocket_QSslSocket, new_)
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
	RETURN_LONG(phpqt_qsslsocket_new(&_0));
}

PHP_METHOD(Qt_Network_QSslSocket_QSslSocket, resume)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qsslsocket_resume(&_0);
}

PHP_METHOD(Qt_Network_QSslSocket_QSslSocket, connectToHostEncrypted)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval hostName;
	zval *handle_param = NULL, *hostName_param = NULL, *port_param = NULL, *mode = NULL, mode_sub, *protocol = NULL, protocol_sub, __$null, _0, _1;
	zend_long handle, port;

	ZVAL_UNDEF(&mode_sub);
	ZVAL_UNDEF(&protocol_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&hostName);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(3, 5)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(hostName)
		Z_PARAM_LONG(port)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(mode)
		Z_PARAM_ZVAL_OR_NULL(protocol)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 3, 2, &handle_param, &hostName_param, &port_param, &mode, &protocol);
	zephir_get_strval(&hostName, hostName_param);
	if (!mode) {
		mode = &mode_sub;
		mode = &__$null;
	}
	if (!protocol) {
		protocol = &protocol_sub;
		protocol = &__$null;
	}
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, port);
	phpqt_qsslsocket_connect_to_host_encrypted(&_0, &hostName, &_1, mode, protocol);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_Network_QSslSocket_QSslSocket, connectToHostEncryptedQStringQuint16QStringQIODeviceBaseOpenModeQAbstractSocketNetworkLayerProtocol)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval hostName, sslPeerName;
	zval *handle_param = NULL, *hostName_param = NULL, *port_param = NULL, *sslPeerName_param = NULL, *mode = NULL, mode_sub, *protocol = NULL, protocol_sub, __$null, _0, _1;
	zend_long handle, port;

	ZVAL_UNDEF(&mode_sub);
	ZVAL_UNDEF(&protocol_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&hostName);
	ZVAL_UNDEF(&sslPeerName);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(4, 6)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(hostName)
		Z_PARAM_LONG(port)
		Z_PARAM_STR(sslPeerName)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(mode)
		Z_PARAM_ZVAL_OR_NULL(protocol)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 4, 2, &handle_param, &hostName_param, &port_param, &sslPeerName_param, &mode, &protocol);
	zephir_get_strval(&hostName, hostName_param);
	zephir_get_strval(&sslPeerName, sslPeerName_param);
	if (!mode) {
		mode = &mode_sub;
		mode = &__$null;
	}
	if (!protocol) {
		protocol = &protocol_sub;
		protocol = &__$null;
	}
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, port);
	phpqt_qsslsocket_connect_to_host_encrypted_q_string_quint16_q_string_q_i_o_device_base_open_mode_q_abstract_socket_network_layer_protocol(&_0, &hostName, &_1, &sslPeerName, mode, protocol);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_Network_QSslSocket_QSslSocket, setSocketDescriptor)
{
	zval *handle_param = NULL, *socketDescriptor_param = NULL, *state = NULL, state_sub, *openMode = NULL, openMode_sub, __$null, _0, _1;
	zend_long handle, socketDescriptor, r = 0;

	ZVAL_UNDEF(&state_sub);
	ZVAL_UNDEF(&openMode_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(2, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(socketDescriptor)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(state)
		Z_PARAM_ZVAL_OR_NULL(openMode)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 2, &handle_param, &socketDescriptor_param, &state, &openMode);
	if (!state) {
		state = &state_sub;
		state = &__$null;
	}
	if (!openMode) {
		openMode = &openMode_sub;
		openMode = &__$null;
	}
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, socketDescriptor);
	r = phpqt_qsslsocket_set_socket_descriptor(&_0, &_1, state, openMode);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Network_QSslSocket_QSslSocket, connectToHostQStringQuint16QIODeviceBaseOpenModeQAbstractSocketNetworkLayerProtocol)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval hostName;
	zval *handle_param = NULL, *hostName_param = NULL, *port_param = NULL, *openMode = NULL, openMode_sub, *protocol = NULL, protocol_sub, __$null, _0, _1;
	zend_long handle, port;

	ZVAL_UNDEF(&openMode_sub);
	ZVAL_UNDEF(&protocol_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&hostName);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(3, 5)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(hostName)
		Z_PARAM_LONG(port)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(openMode)
		Z_PARAM_ZVAL_OR_NULL(protocol)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 3, 2, &handle_param, &hostName_param, &port_param, &openMode, &protocol);
	zephir_get_strval(&hostName, hostName_param);
	if (!openMode) {
		openMode = &openMode_sub;
		openMode = &__$null;
	}
	if (!protocol) {
		protocol = &protocol_sub;
		protocol = &__$null;
	}
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, port);
	phpqt_qsslsocket_connect_to_host_q_string_quint16_q_i_o_device_base_open_mode_q_abstract_socket_network_layer_protocol(&_0, &hostName, &_1, openMode, protocol);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_Network_QSslSocket_QSslSocket, disconnectFromHost)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qsslsocket_disconnect_from_host(&_0);
}

PHP_METHOD(Qt_Network_QSslSocket_QSslSocket, setSocketOption)
{
	zval *handle_param = NULL, *option_param = NULL, *value = NULL, value_sub, _0, _1;
	zend_long handle, option;

	ZVAL_UNDEF(&value_sub);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(option)
		Z_PARAM_ZVAL(value)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &option_param, &value);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, option);
	phpqt_qsslsocket_set_socket_option(&_0, &_1, value);
}

PHP_METHOD(Qt_Network_QSslSocket_QSslSocket, socketOption)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, *option_param = NULL, result, _0, _1;
	zend_long handle, option;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(option)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &option_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, option);
	phpqt_qsslsocket_socket_option(&result, &_0, &_1);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Network_QSslSocket_QSslSocket, mode)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qsslsocket_mode(&_0));
}

PHP_METHOD(Qt_Network_QSslSocket_QSslSocket, isEncrypted)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qsslsocket_is_encrypted(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Network_QSslSocket_QSslSocket, protocol)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qsslsocket_protocol(&_0));
}

PHP_METHOD(Qt_Network_QSslSocket_QSslSocket, setProtocol)
{
	zval *handle_param = NULL, *protocol_param = NULL, _0, _1;
	zend_long handle, protocol;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(protocol)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &protocol_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, protocol);
	phpqt_qsslsocket_set_protocol(&_0, &_1);
}

PHP_METHOD(Qt_Network_QSslSocket_QSslSocket, peerVerifyMode)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qsslsocket_peer_verify_mode(&_0));
}

PHP_METHOD(Qt_Network_QSslSocket_QSslSocket, setPeerVerifyMode)
{
	zval *handle_param = NULL, *mode_param = NULL, _0, _1;
	zend_long handle, mode;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(mode)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &mode_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, mode);
	phpqt_qsslsocket_set_peer_verify_mode(&_0, &_1);
}

PHP_METHOD(Qt_Network_QSslSocket_QSslSocket, peerVerifyDepth)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qsslsocket_peer_verify_depth(&_0));
}

PHP_METHOD(Qt_Network_QSslSocket_QSslSocket, setPeerVerifyDepth)
{
	zval *handle_param = NULL, *depth_param = NULL, _0, _1;
	zend_long handle, depth;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(depth)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &depth_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, depth);
	phpqt_qsslsocket_set_peer_verify_depth(&_0, &_1);
}

PHP_METHOD(Qt_Network_QSslSocket_QSslSocket, peerVerifyName)
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
	phpqt_qsslsocket_peer_verify_name(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Network_QSslSocket_QSslSocket, setPeerVerifyName)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval hostName;
	zval *handle_param = NULL, *hostName_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&hostName);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(hostName)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &hostName_param);
	zephir_get_strval(&hostName, hostName_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qsslsocket_set_peer_verify_name(&_0, &hostName);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_Network_QSslSocket_QSslSocket, bytesAvailable)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qsslsocket_bytes_available(&_0));
}

PHP_METHOD(Qt_Network_QSslSocket_QSslSocket, bytesToWrite)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qsslsocket_bytes_to_write(&_0));
}

PHP_METHOD(Qt_Network_QSslSocket_QSslSocket, canReadLine)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qsslsocket_can_read_line(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Network_QSslSocket_QSslSocket, close)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qsslsocket_close(&_0);
}

PHP_METHOD(Qt_Network_QSslSocket_QSslSocket, atEnd)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qsslsocket_at_end(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Network_QSslSocket_QSslSocket, setReadBufferSize)
{
	zval *handle_param = NULL, *size_param = NULL, _0, _1;
	zend_long handle, size;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(size)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &size_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, size);
	phpqt_qsslsocket_set_read_buffer_size(&_0, &_1);
}

PHP_METHOD(Qt_Network_QSslSocket_QSslSocket, encryptedBytesAvailable)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qsslsocket_encrypted_bytes_available(&_0));
}

PHP_METHOD(Qt_Network_QSslSocket_QSslSocket, encryptedBytesToWrite)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qsslsocket_encrypted_bytes_to_write(&_0));
}

PHP_METHOD(Qt_Network_QSslSocket_QSslSocket, sslConfiguration)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qsslsocket_ssl_configuration(&_0));
}

PHP_METHOD(Qt_Network_QSslSocket_QSslSocket, setSslConfiguration)
{
	zval *handle_param = NULL, *config_param = NULL, _0, _1;
	zend_long handle, config;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(config)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &config_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, config);
	phpqt_qsslsocket_set_ssl_configuration(&_0, &_1);
}

PHP_METHOD(Qt_Network_QSslSocket_QSslSocket, setLocalCertificateChain)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval localChain;
	zval *handle_param = NULL, *localChain_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&localChain);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ARRAY(localChain)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &localChain_param);
	zephir_get_arrval(&localChain, localChain_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qsslsocket_set_local_certificate_chain(&_0, &localChain);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_Network_QSslSocket_QSslSocket, localCertificateChain)
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
	phpqt_qsslsocket_local_certificate_chain(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Network_QSslSocket_QSslSocket, setLocalCertificate)
{
	zval *handle_param = NULL, *certificate_param = NULL, _0, _1;
	zend_long handle, certificate;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(certificate)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &certificate_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, certificate);
	phpqt_qsslsocket_set_local_certificate(&_0, &_1);
}

PHP_METHOD(Qt_Network_QSslSocket_QSslSocket, setLocalCertificateQStringQSslEncodingFormat)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval fileName;
	zval *handle_param = NULL, *fileName_param = NULL, *format = NULL, format_sub, __$null, _0;
	zend_long handle;

	ZVAL_UNDEF(&format_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&fileName);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(2, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(fileName)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(format)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 1, &handle_param, &fileName_param, &format);
	zephir_get_strval(&fileName, fileName_param);
	if (!format) {
		format = &format_sub;
		format = &__$null;
	}
	ZVAL_LONG(&_0, handle);
	phpqt_qsslsocket_set_local_certificate_q_string_q_ssl_encoding_format(&_0, &fileName, format);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_Network_QSslSocket_QSslSocket, localCertificate)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qsslsocket_local_certificate(&_0));
}

PHP_METHOD(Qt_Network_QSslSocket_QSslSocket, peerCertificate)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qsslsocket_peer_certificate(&_0));
}

PHP_METHOD(Qt_Network_QSslSocket_QSslSocket, peerCertificateChain)
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
	phpqt_qsslsocket_peer_certificate_chain(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Network_QSslSocket_QSslSocket, sessionCipher)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qsslsocket_session_cipher(&_0));
}

PHP_METHOD(Qt_Network_QSslSocket_QSslSocket, sessionProtocol)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qsslsocket_session_protocol(&_0));
}

PHP_METHOD(Qt_Network_QSslSocket_QSslSocket, ocspResponses)
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
	phpqt_qsslsocket_ocsp_responses(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Network_QSslSocket_QSslSocket, setPrivateKey)
{
	zval *handle_param = NULL, *key_param = NULL, _0, _1;
	zend_long handle, key;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(key)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &key_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, key);
	phpqt_qsslsocket_set_private_key(&_0, &_1);
}

PHP_METHOD(Qt_Network_QSslSocket_QSslSocket, setPrivateKeyQStringQSslKeyAlgorithmQSslEncodingFormatQByteArray)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval fileName, passPhrase;
	zval *handle_param = NULL, *fileName_param = NULL, *algorithm = NULL, algorithm_sub, *format = NULL, format_sub, *passPhrase_param = NULL, __$null, _0;
	zend_long handle;

	ZVAL_UNDEF(&algorithm_sub);
	ZVAL_UNDEF(&format_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&fileName);
	ZVAL_UNDEF(&passPhrase);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(2, 5)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(fileName)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(algorithm)
		Z_PARAM_ZVAL_OR_NULL(format)
		Z_PARAM_STR(passPhrase)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 3, &handle_param, &fileName_param, &algorithm, &format, &passPhrase_param);
	zephir_get_strval(&fileName, fileName_param);
	if (!algorithm) {
		algorithm = &algorithm_sub;
		algorithm = &__$null;
	}
	if (!format) {
		format = &format_sub;
		format = &__$null;
	}
	if (!passPhrase_param) {
		ZEPHIR_INIT_VAR(&passPhrase);
		ZVAL_STRING(&passPhrase, "");
	} else {
		zephir_get_strval(&passPhrase, passPhrase_param);
	}
	ZVAL_LONG(&_0, handle);
	phpqt_qsslsocket_set_private_key_q_string_q_ssl_key_algorithm_q_ssl_encoding_format_q_byte_array(&_0, &fileName, algorithm, format, &passPhrase);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_Network_QSslSocket_QSslSocket, privateKey)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qsslsocket_private_key(&_0));
}

PHP_METHOD(Qt_Network_QSslSocket_QSslSocket, waitForConnected)
{
	zval *handle_param = NULL, *msecs_param = NULL, _0, _1;
	zend_long handle, msecs, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(msecs)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 1, &handle_param, &msecs_param);
	if (!msecs_param) {
		msecs = 30000;
	} else {
		}
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, msecs);
	r = phpqt_qsslsocket_wait_for_connected(&_0, &_1);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Network_QSslSocket_QSslSocket, waitForEncrypted)
{
	zval *handle_param = NULL, *msecs_param = NULL, _0, _1;
	zend_long handle, msecs, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(msecs)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 1, &handle_param, &msecs_param);
	if (!msecs_param) {
		msecs = 30000;
	} else {
		}
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, msecs);
	r = phpqt_qsslsocket_wait_for_encrypted(&_0, &_1);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Network_QSslSocket_QSslSocket, waitForReadyRead)
{
	zval *handle_param = NULL, *msecs_param = NULL, _0, _1;
	zend_long handle, msecs, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(msecs)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 1, &handle_param, &msecs_param);
	if (!msecs_param) {
		msecs = 30000;
	} else {
		}
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, msecs);
	r = phpqt_qsslsocket_wait_for_ready_read(&_0, &_1);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Network_QSslSocket_QSslSocket, waitForBytesWritten)
{
	zval *handle_param = NULL, *msecs_param = NULL, _0, _1;
	zend_long handle, msecs, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(msecs)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 1, &handle_param, &msecs_param);
	if (!msecs_param) {
		msecs = 30000;
	} else {
		}
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, msecs);
	r = phpqt_qsslsocket_wait_for_bytes_written(&_0, &_1);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Network_QSslSocket_QSslSocket, waitForDisconnected)
{
	zval *handle_param = NULL, *msecs_param = NULL, _0, _1;
	zend_long handle, msecs, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(msecs)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 1, &handle_param, &msecs_param);
	if (!msecs_param) {
		msecs = 30000;
	} else {
		}
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, msecs);
	r = phpqt_qsslsocket_wait_for_disconnected(&_0, &_1);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Network_QSslSocket_QSslSocket, sslHandshakeErrors)
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
	phpqt_qsslsocket_ssl_handshake_errors(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Network_QSslSocket_QSslSocket, supportsSsl)
{
	zend_long r = 0;
	r = phpqt_qsslsocket_supports_ssl();
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Network_QSslSocket_QSslSocket, sslLibraryVersionNumber)
{

	RETURN_LONG(phpqt_qsslsocket_ssl_library_version_number());
}

PHP_METHOD(Qt_Network_QSslSocket_QSslSocket, sslLibraryVersionString)
{
	zval result;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;

	ZVAL_UNDEF(&result);
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);

	ZEPHIR_INIT_VAR(&result);
	phpqt_qsslsocket_ssl_library_version_string(&result);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Network_QSslSocket_QSslSocket, sslLibraryBuildVersionNumber)
{

	RETURN_LONG(phpqt_qsslsocket_ssl_library_build_version_number());
}

PHP_METHOD(Qt_Network_QSslSocket_QSslSocket, sslLibraryBuildVersionString)
{
	zval result;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;

	ZVAL_UNDEF(&result);
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);

	ZEPHIR_INIT_VAR(&result);
	phpqt_qsslsocket_ssl_library_build_version_string(&result);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Network_QSslSocket_QSslSocket, availableBackends)
{
	zval result;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;

	ZVAL_UNDEF(&result);
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);

	ZEPHIR_INIT_VAR(&result);
	phpqt_qsslsocket_available_backends(&result);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Network_QSslSocket_QSslSocket, activeBackend)
{
	zval result;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;

	ZVAL_UNDEF(&result);
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);

	ZEPHIR_INIT_VAR(&result);
	phpqt_qsslsocket_active_backend(&result);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Network_QSslSocket_QSslSocket, setActiveBackend)
{
	zend_long r = 0;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *backendName_param = NULL;
	zval backendName;

	ZVAL_UNDEF(&backendName);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_STR(backendName)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &backendName_param);
	zephir_get_strval(&backendName, backendName_param);
	r = phpqt_qsslsocket_set_active_backend(&backendName);
	RETURN_MM_BOOL(r == 1);
}

PHP_METHOD(Qt_Network_QSslSocket_QSslSocket, supportedProtocols)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *backendName_param = NULL, result;
	zval backendName;

	ZVAL_UNDEF(&backendName);
	ZVAL_UNDEF(&result);
	ZEND_PARSE_PARAMETERS_START(0, 1)
		Z_PARAM_OPTIONAL
		Z_PARAM_STR(backendName)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 0, 1, &backendName_param);
	if (!backendName_param) {
		ZEPHIR_INIT_VAR(&backendName);
		ZVAL_STRING(&backendName, "");
	} else {
		zephir_get_strval(&backendName, backendName_param);
	}
	ZEPHIR_INIT_VAR(&result);
	phpqt_qsslsocket_supported_protocols(&result, &backendName);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Network_QSslSocket_QSslSocket, isProtocolSupported)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval backendName;
	zval *protocol_param = NULL, *backendName_param = NULL, _0;
	zend_long protocol, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&backendName);
	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_LONG(protocol)
		Z_PARAM_OPTIONAL
		Z_PARAM_STR(backendName)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 1, &protocol_param, &backendName_param);
	if (!backendName_param) {
		ZEPHIR_INIT_VAR(&backendName);
		ZVAL_STRING(&backendName, "");
	} else {
		zephir_get_strval(&backendName, backendName_param);
	}
	ZVAL_LONG(&_0, protocol);
	r = phpqt_qsslsocket_is_protocol_supported(&_0, &backendName);
	RETURN_MM_BOOL(r == 1);
}

PHP_METHOD(Qt_Network_QSslSocket_QSslSocket, implementedClasses)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *backendName_param = NULL, result;
	zval backendName;

	ZVAL_UNDEF(&backendName);
	ZVAL_UNDEF(&result);
	ZEND_PARSE_PARAMETERS_START(0, 1)
		Z_PARAM_OPTIONAL
		Z_PARAM_STR(backendName)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 0, 1, &backendName_param);
	if (!backendName_param) {
		ZEPHIR_INIT_VAR(&backendName);
		ZVAL_STRING(&backendName, "");
	} else {
		zephir_get_strval(&backendName, backendName_param);
	}
	ZEPHIR_INIT_VAR(&result);
	phpqt_qsslsocket_implemented_classes(&result, &backendName);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Network_QSslSocket_QSslSocket, isClassImplemented)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval backendName;
	zval *cl_param = NULL, *backendName_param = NULL, _0;
	zend_long cl, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&backendName);
	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_LONG(cl)
		Z_PARAM_OPTIONAL
		Z_PARAM_STR(backendName)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 1, &cl_param, &backendName_param);
	if (!backendName_param) {
		ZEPHIR_INIT_VAR(&backendName);
		ZVAL_STRING(&backendName, "");
	} else {
		zephir_get_strval(&backendName, backendName_param);
	}
	ZVAL_LONG(&_0, cl);
	r = phpqt_qsslsocket_is_class_implemented(&_0, &backendName);
	RETURN_MM_BOOL(r == 1);
}

PHP_METHOD(Qt_Network_QSslSocket_QSslSocket, supportedFeatures)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *backendName_param = NULL, result;
	zval backendName;

	ZVAL_UNDEF(&backendName);
	ZVAL_UNDEF(&result);
	ZEND_PARSE_PARAMETERS_START(0, 1)
		Z_PARAM_OPTIONAL
		Z_PARAM_STR(backendName)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 0, 1, &backendName_param);
	if (!backendName_param) {
		ZEPHIR_INIT_VAR(&backendName);
		ZVAL_STRING(&backendName, "");
	} else {
		zephir_get_strval(&backendName, backendName_param);
	}
	ZEPHIR_INIT_VAR(&result);
	phpqt_qsslsocket_supported_features(&result, &backendName);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Network_QSslSocket_QSslSocket, isFeatureSupported)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval backendName;
	zval *feat_param = NULL, *backendName_param = NULL, _0;
	zend_long feat, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&backendName);
	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_LONG(feat)
		Z_PARAM_OPTIONAL
		Z_PARAM_STR(backendName)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 1, &feat_param, &backendName_param);
	if (!backendName_param) {
		ZEPHIR_INIT_VAR(&backendName);
		ZVAL_STRING(&backendName, "");
	} else {
		zephir_get_strval(&backendName, backendName_param);
	}
	ZVAL_LONG(&_0, feat);
	r = phpqt_qsslsocket_is_feature_supported(&_0, &backendName);
	RETURN_MM_BOOL(r == 1);
}

PHP_METHOD(Qt_Network_QSslSocket_QSslSocket, ignoreSslErrors)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval errors;
	zval *handle_param = NULL, *errors_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&errors);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ARRAY(errors)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &errors_param);
	zephir_get_arrval(&errors, errors_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qsslsocket_ignore_ssl_errors(&_0, &errors);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_Network_QSslSocket_QSslSocket, continueInterruptedHandshake)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qsslsocket_continue_interrupted_handshake(&_0);
}

PHP_METHOD(Qt_Network_QSslSocket_QSslSocket, startClientEncryption)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qsslsocket_start_client_encryption(&_0);
}

PHP_METHOD(Qt_Network_QSslSocket_QSslSocket, startServerEncryption)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qsslsocket_start_server_encryption(&_0);
}

PHP_METHOD(Qt_Network_QSslSocket_QSslSocket, ignoreSslErrors2)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qsslsocket_ignore_ssl_errors2(&_0);
}

PHP_METHOD(Qt_Network_QSslSocket_QSslSocket, encrypted)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qsslsocket_encrypted(&_0);
}

PHP_METHOD(Qt_Network_QSslSocket_QSslSocket, peerVerifyError)
{
	zval *handle_param = NULL, *error_param = NULL, _0, _1;
	zend_long handle, error;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(error)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &error_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, error);
	phpqt_qsslsocket_peer_verify_error(&_0, &_1);
}

PHP_METHOD(Qt_Network_QSslSocket_QSslSocket, sslErrors)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval errors;
	zval *handle_param = NULL, *errors_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&errors);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ARRAY(errors)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &errors_param);
	zephir_get_arrval(&errors, errors_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qsslsocket_ssl_errors(&_0, &errors);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_Network_QSslSocket_QSslSocket, modeChanged)
{
	zval *handle_param = NULL, *newMode_param = NULL, _0, _1;
	zend_long handle, newMode;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(newMode)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &newMode_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, newMode);
	phpqt_qsslsocket_mode_changed(&_0, &_1);
}

PHP_METHOD(Qt_Network_QSslSocket_QSslSocket, encryptedBytesWritten)
{
	zval *handle_param = NULL, *totalBytes_param = NULL, _0, _1;
	zend_long handle, totalBytes;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(totalBytes)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &totalBytes_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, totalBytes);
	phpqt_qsslsocket_encrypted_bytes_written(&_0, &_1);
}

PHP_METHOD(Qt_Network_QSslSocket_QSslSocket, preSharedKeyAuthenticationRequired)
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
	phpqt_qsslsocket_pre_shared_key_authentication_required(&_0, &_1);
}

PHP_METHOD(Qt_Network_QSslSocket_QSslSocket, newSessionTicketReceived)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qsslsocket_new_session_ticket_received(&_0);
}

PHP_METHOD(Qt_Network_QSslSocket_QSslSocket, alertSent)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval description;
	zval *handle_param = NULL, *level_param = NULL, *type_param = NULL, *description_param = NULL, _0, _1, _2;
	zend_long handle, level, type;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&description);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(level)
		Z_PARAM_LONG(type)
		Z_PARAM_STR(description)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 4, 0, &handle_param, &level_param, &type_param, &description_param);
	zephir_get_strval(&description, description_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, level);
	ZVAL_LONG(&_2, type);
	phpqt_qsslsocket_alert_sent(&_0, &_1, &_2, &description);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_Network_QSslSocket_QSslSocket, alertReceived)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval description;
	zval *handle_param = NULL, *level_param = NULL, *type_param = NULL, *description_param = NULL, _0, _1, _2;
	zend_long handle, level, type;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&description);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(level)
		Z_PARAM_LONG(type)
		Z_PARAM_STR(description)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 4, 0, &handle_param, &level_param, &type_param, &description_param);
	zephir_get_strval(&description, description_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, level);
	ZVAL_LONG(&_2, type);
	phpqt_qsslsocket_alert_received(&_0, &_1, &_2, &description);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_Network_QSslSocket_QSslSocket, handshakeInterruptedOnError)
{
	zval *handle_param = NULL, *error_param = NULL, _0, _1;
	zend_long handle, error;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(error)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &error_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, error);
	phpqt_qsslsocket_handshake_interrupted_on_error(&_0, &_1);
}

PHP_METHOD(Qt_Network_QSslSocket_QSslSocket, skipData)
{
	zval *handle_param = NULL, *maxSize_param = NULL, _0, _1;
	zend_long handle, maxSize;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(maxSize)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &maxSize_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, maxSize);
	RETURN_LONG(phpqt_qsslsocket_skip_data(&_0, &_1));
}

PHP_METHOD(Qt_Network_QSslSocket_QSslSocket, writeData)
{
	zval *handle_param = NULL, *data = NULL, data_sub, *len_param = NULL, _0, _1;
	zend_long handle, len;

	ZVAL_UNDEF(&data_sub);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(data)
		Z_PARAM_LONG(len)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &data, &len_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, len);
	RETURN_LONG(phpqt_qsslsocket_write_data(&_0, data, &_1));
}

