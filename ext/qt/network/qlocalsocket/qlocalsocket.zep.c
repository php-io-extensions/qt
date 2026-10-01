
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
#include "src/network-qlocalsocket.h"
#include "kernel/object.h"
#include "kernel/string.h"
#include "kernel/memory.h"
#include "kernel/operators.h"


ZEPHIR_INIT_CLASS(Qt_Network_QLocalSocket_QLocalSocket)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Network\\QLocalSocket, QLocalSocket, qt, network_qlocalsocket_qlocalsocket, qt_network_qlocalsocket_qlocalsocket_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Network_QLocalSocket_QLocalSocket, staticMetaObject)
{

	RETURN_LONG(phpqt_qlocalsocket_static_meta_object());
}

PHP_METHOD(Qt_Network_QLocalSocket_QLocalSocket, tr)
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
	phpqt_qlocalsocket_tr(&result, s, c, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Network_QLocalSocket_QLocalSocket, new_)
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
	RETURN_LONG(phpqt_qlocalsocket_new(&_0));
}

PHP_METHOD(Qt_Network_QLocalSocket_QLocalSocket, connectToServer)
{
	zval *handle_param = NULL, *openMode = NULL, openMode_sub, __$null, _0;
	zend_long handle;

	ZVAL_UNDEF(&openMode_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(openMode)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 1, &handle_param, &openMode);
	if (!openMode) {
		openMode = &openMode_sub;
		openMode = &__$null;
	}
	ZVAL_LONG(&_0, handle);
	phpqt_qlocalsocket_connect_to_server(&_0, openMode);
}

PHP_METHOD(Qt_Network_QLocalSocket_QLocalSocket, connectToServerQStringQIODeviceBaseOpenMode)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval name;
	zval *handle_param = NULL, *name_param = NULL, *openMode = NULL, openMode_sub, __$null, _0;
	zend_long handle;

	ZVAL_UNDEF(&openMode_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&name);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(2, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(name)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(openMode)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 1, &handle_param, &name_param, &openMode);
	zephir_get_strval(&name, name_param);
	if (!openMode) {
		openMode = &openMode_sub;
		openMode = &__$null;
	}
	ZVAL_LONG(&_0, handle);
	phpqt_qlocalsocket_connect_to_server_q_string_q_i_o_device_base_open_mode(&_0, &name, openMode);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_Network_QLocalSocket_QLocalSocket, disconnectFromServer)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qlocalsocket_disconnect_from_server(&_0);
}

PHP_METHOD(Qt_Network_QLocalSocket_QLocalSocket, setServerName)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval name;
	zval *handle_param = NULL, *name_param = NULL, _0;
	zend_long handle;

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
	phpqt_qlocalsocket_set_server_name(&_0, &name);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_Network_QLocalSocket_QLocalSocket, serverName)
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
	phpqt_qlocalsocket_server_name(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Network_QLocalSocket_QLocalSocket, fullServerName)
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
	phpqt_qlocalsocket_full_server_name(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Network_QLocalSocket_QLocalSocket, abort)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qlocalsocket_abort(&_0);
}

PHP_METHOD(Qt_Network_QLocalSocket_QLocalSocket, isSequential)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qlocalsocket_is_sequential(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Network_QLocalSocket_QLocalSocket, bytesAvailable)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qlocalsocket_bytes_available(&_0));
}

PHP_METHOD(Qt_Network_QLocalSocket_QLocalSocket, bytesToWrite)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qlocalsocket_bytes_to_write(&_0));
}

PHP_METHOD(Qt_Network_QLocalSocket_QLocalSocket, canReadLine)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qlocalsocket_can_read_line(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Network_QLocalSocket_QLocalSocket, open)
{
	zval *handle_param = NULL, *openMode = NULL, openMode_sub, __$null, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&openMode_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(openMode)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 1, &handle_param, &openMode);
	if (!openMode) {
		openMode = &openMode_sub;
		openMode = &__$null;
	}
	ZVAL_LONG(&_0, handle);
	r = phpqt_qlocalsocket_open(&_0, openMode);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Network_QLocalSocket_QLocalSocket, close)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qlocalsocket_close(&_0);
}

PHP_METHOD(Qt_Network_QLocalSocket_QLocalSocket, error)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qlocalsocket_error(&_0));
}

PHP_METHOD(Qt_Network_QLocalSocket_QLocalSocket, flush)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qlocalsocket_flush(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Network_QLocalSocket_QLocalSocket, isValid)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qlocalsocket_is_valid(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Network_QLocalSocket_QLocalSocket, readBufferSize)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qlocalsocket_read_buffer_size(&_0));
}

PHP_METHOD(Qt_Network_QLocalSocket_QLocalSocket, setReadBufferSize)
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
	phpqt_qlocalsocket_set_read_buffer_size(&_0, &_1);
}

PHP_METHOD(Qt_Network_QLocalSocket_QLocalSocket, setSocketDescriptor)
{
	zval *handle_param = NULL, *socketDescriptor_param = NULL, *socketState = NULL, socketState_sub, *openMode = NULL, openMode_sub, __$null, _0, _1;
	zend_long handle, socketDescriptor, r = 0;

	ZVAL_UNDEF(&socketState_sub);
	ZVAL_UNDEF(&openMode_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(2, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(socketDescriptor)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(socketState)
		Z_PARAM_ZVAL_OR_NULL(openMode)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 2, &handle_param, &socketDescriptor_param, &socketState, &openMode);
	if (!socketState) {
		socketState = &socketState_sub;
		socketState = &__$null;
	}
	if (!openMode) {
		openMode = &openMode_sub;
		openMode = &__$null;
	}
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, socketDescriptor);
	r = phpqt_qlocalsocket_set_socket_descriptor(&_0, &_1, socketState, openMode);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Network_QLocalSocket_QLocalSocket, socketDescriptor)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qlocalsocket_socket_descriptor(&_0));
}

PHP_METHOD(Qt_Network_QLocalSocket_QLocalSocket, setSocketOptions)
{
	zval *handle_param = NULL, *option_param = NULL, _0, _1;
	zend_long handle, option;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(option)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &option_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, option);
	phpqt_qlocalsocket_set_socket_options(&_0, &_1);
}

PHP_METHOD(Qt_Network_QLocalSocket_QLocalSocket, socketOptions)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qlocalsocket_socket_options(&_0));
}

PHP_METHOD(Qt_Network_QLocalSocket_QLocalSocket, state)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qlocalsocket_state(&_0));
}

PHP_METHOD(Qt_Network_QLocalSocket_QLocalSocket, waitForBytesWritten)
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
	r = phpqt_qlocalsocket_wait_for_bytes_written(&_0, &_1);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Network_QLocalSocket_QLocalSocket, waitForConnected)
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
	r = phpqt_qlocalsocket_wait_for_connected(&_0, &_1);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Network_QLocalSocket_QLocalSocket, waitForDisconnected)
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
	r = phpqt_qlocalsocket_wait_for_disconnected(&_0, &_1);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Network_QLocalSocket_QLocalSocket, waitForReadyRead)
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
	r = phpqt_qlocalsocket_wait_for_ready_read(&_0, &_1);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Network_QLocalSocket_QLocalSocket, connected)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qlocalsocket_connected(&_0);
}

PHP_METHOD(Qt_Network_QLocalSocket_QLocalSocket, disconnected)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qlocalsocket_disconnected(&_0);
}

PHP_METHOD(Qt_Network_QLocalSocket_QLocalSocket, errorOccurred)
{
	zval *handle_param = NULL, *socketError_param = NULL, _0, _1;
	zend_long handle, socketError;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(socketError)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &socketError_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, socketError);
	phpqt_qlocalsocket_error_occurred(&_0, &_1);
}

PHP_METHOD(Qt_Network_QLocalSocket_QLocalSocket, stateChanged)
{
	zval *handle_param = NULL, *socketState_param = NULL, _0, _1;
	zend_long handle, socketState;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(socketState)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &socketState_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, socketState);
	phpqt_qlocalsocket_state_changed(&_0, &_1);
}

PHP_METHOD(Qt_Network_QLocalSocket_QLocalSocket, skipData)
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
	RETURN_LONG(phpqt_qlocalsocket_skip_data(&_0, &_1));
}

PHP_METHOD(Qt_Network_QLocalSocket_QLocalSocket, writeData)
{
	zval *handle_param = NULL, *arg0 = NULL, arg0_sub, *arg1_param = NULL, _0, _1;
	zend_long handle, arg1;

	ZVAL_UNDEF(&arg0_sub);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(arg0)
		Z_PARAM_LONG(arg1)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &arg0, &arg1_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, arg1);
	RETURN_LONG(phpqt_qlocalsocket_write_data(&_0, arg0, &_1));
}

