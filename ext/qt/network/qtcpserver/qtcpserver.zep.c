
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
#include "src/network-qtcpserver.h"
#include "kernel/object.h"
#include "kernel/string.h"
#include "kernel/memory.h"
#include "kernel/operators.h"


ZEPHIR_INIT_CLASS(Qt_Network_QTcpServer_QTcpServer)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Network\\QTcpServer, QTcpServer, qt, network_qtcpserver_qtcpserver, qt_network_qtcpserver_qtcpserver_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Network_QTcpServer_QTcpServer, staticMetaObject)
{

	RETURN_LONG(phpqt_qtcpserver_static_meta_object());
}

PHP_METHOD(Qt_Network_QTcpServer_QTcpServer, tr)
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
	phpqt_qtcpserver_tr(&result, s, c, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Network_QTcpServer_QTcpServer, new_)
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
	RETURN_LONG(phpqt_qtcpserver_new(&_0));
}

PHP_METHOD(Qt_Network_QTcpServer_QTcpServer, listen)
{
	zval *handle_param = NULL, *address = NULL, address_sub, *port_param = NULL, __$null, _0, _1;
	zend_long handle, port, r = 0;

	ZVAL_UNDEF(&address_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(1, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(address)
		Z_PARAM_LONG(port)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 2, &handle_param, &address, &port_param);
	if (!address) {
		address = &address_sub;
		address = &__$null;
	}
	if (!port_param) {
		port = 0;
	} else {
		}
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, port);
	r = phpqt_qtcpserver_listen(&_0, address, &_1);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Network_QTcpServer_QTcpServer, close)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qtcpserver_close(&_0);
}

PHP_METHOD(Qt_Network_QTcpServer_QTcpServer, isListening)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qtcpserver_is_listening(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Network_QTcpServer_QTcpServer, setMaxPendingConnections)
{
	zval *handle_param = NULL, *numConnections_param = NULL, _0, _1;
	zend_long handle, numConnections;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(numConnections)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &numConnections_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, numConnections);
	phpqt_qtcpserver_set_max_pending_connections(&_0, &_1);
}

PHP_METHOD(Qt_Network_QTcpServer_QTcpServer, maxPendingConnections)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qtcpserver_max_pending_connections(&_0));
}

PHP_METHOD(Qt_Network_QTcpServer_QTcpServer, setListenBacklogSize)
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
	phpqt_qtcpserver_set_listen_backlog_size(&_0, &_1);
}

PHP_METHOD(Qt_Network_QTcpServer_QTcpServer, listenBacklogSize)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qtcpserver_listen_backlog_size(&_0));
}

PHP_METHOD(Qt_Network_QTcpServer_QTcpServer, serverPort)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qtcpserver_server_port(&_0));
}

PHP_METHOD(Qt_Network_QTcpServer_QTcpServer, serverAddress)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qtcpserver_server_address(&_0));
}

PHP_METHOD(Qt_Network_QTcpServer_QTcpServer, socketDescriptor)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qtcpserver_socket_descriptor(&_0));
}

PHP_METHOD(Qt_Network_QTcpServer_QTcpServer, setSocketDescriptor)
{
	zval *handle_param = NULL, *socketDescriptor_param = NULL, _0, _1;
	zend_long handle, socketDescriptor, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(socketDescriptor)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &socketDescriptor_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, socketDescriptor);
	r = phpqt_qtcpserver_set_socket_descriptor(&_0, &_1);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Network_QTcpServer_QTcpServer, waitForNewConnection)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, *msec_param = NULL, *timedOut = NULL, timedOut_sub, __$null, result, _0, _1;
	zend_long handle, msec;

	ZVAL_UNDEF(&timedOut_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(1, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(msec)
		Z_PARAM_ZVAL_OR_NULL(timedOut)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 2, &handle_param, &msec_param, &timedOut);
	if (!msec_param) {
		msec = 0;
	} else {
		}
	if (!timedOut) {
		timedOut = &timedOut_sub;
		timedOut = &__$null;
	}
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, msec);
	phpqt_qtcpserver_wait_for_new_connection(&result, &_0, &_1, timedOut);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Network_QTcpServer_QTcpServer, hasPendingConnections)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qtcpserver_has_pending_connections(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Network_QTcpServer_QTcpServer, nextPendingConnection)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qtcpserver_next_pending_connection(&_0));
}

PHP_METHOD(Qt_Network_QTcpServer_QTcpServer, serverError)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qtcpserver_server_error(&_0));
}

PHP_METHOD(Qt_Network_QTcpServer_QTcpServer, errorString)
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
	phpqt_qtcpserver_error_string(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Network_QTcpServer_QTcpServer, pauseAccepting)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qtcpserver_pause_accepting(&_0);
}

PHP_METHOD(Qt_Network_QTcpServer_QTcpServer, resumeAccepting)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qtcpserver_resume_accepting(&_0);
}

PHP_METHOD(Qt_Network_QTcpServer_QTcpServer, setProxy)
{
	zval *handle_param = NULL, *networkProxy_param = NULL, _0, _1;
	zend_long handle, networkProxy;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(networkProxy)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &networkProxy_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, networkProxy);
	phpqt_qtcpserver_set_proxy(&_0, &_1);
}

PHP_METHOD(Qt_Network_QTcpServer_QTcpServer, proxy)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qtcpserver_proxy(&_0));
}

PHP_METHOD(Qt_Network_QTcpServer_QTcpServer, incomingConnection)
{
	zval *handle_param = NULL, *handle__param = NULL, _0, _1;
	zend_long handle, handle_;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(handle_)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &handle__param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, handle_);
	phpqt_qtcpserver_incoming_connection(&_0, &_1);
}

PHP_METHOD(Qt_Network_QTcpServer_QTcpServer, addPendingConnection)
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
	phpqt_qtcpserver_add_pending_connection(&_0, &_1);
}

PHP_METHOD(Qt_Network_QTcpServer_QTcpServer, newConnection)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qtcpserver_new_connection(&_0);
}

PHP_METHOD(Qt_Network_QTcpServer_QTcpServer, acceptError)
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
	phpqt_qtcpserver_accept_error(&_0, &_1);
}

