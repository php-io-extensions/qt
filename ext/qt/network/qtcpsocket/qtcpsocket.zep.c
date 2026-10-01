
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
#include "src/network-qtcpsocket.h"
#include "kernel/operators.h"
#include "kernel/memory.h"
#include "kernel/object.h"
#include "kernel/string.h"


ZEPHIR_INIT_CLASS(Qt_Network_QTcpSocket_QTcpSocket)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Network\\QTcpSocket, QTcpSocket, qt, network_qtcpsocket_qtcpsocket, qt_network_qtcpsocket_qtcpsocket_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Network_QTcpSocket_QTcpSocket, bind)
{
	zval *handle_param = NULL, *address_param = NULL, *port_param = NULL, *mode = NULL, mode_sub, __$null, _0, _1, _2;
	zend_long handle, address, port, r = 0;

	ZVAL_UNDEF(&mode_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(2, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(address)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(port)
		Z_PARAM_ZVAL_OR_NULL(mode)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 2, &handle_param, &address_param, &port_param, &mode);
	if (!port_param) {
		port = 0;
	} else {
		}
	if (!mode) {
		mode = &mode_sub;
		mode = &__$null;
	}
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, address);
	ZVAL_LONG(&_2, port);
	r = phpqt_qtcpsocket_bind(&_0, &_1, &_2, mode);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Network_QTcpSocket_QTcpSocket, bindQuint16QAbstractSocketBindMode)
{
	zval *handle_param = NULL, *port_param = NULL, *mode = NULL, mode_sub, __$null, _0, _1;
	zend_long handle, port, r = 0;

	ZVAL_UNDEF(&mode_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(1, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(port)
		Z_PARAM_ZVAL_OR_NULL(mode)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 2, &handle_param, &port_param, &mode);
	if (!port_param) {
		port = 0;
	} else {
		}
	if (!mode) {
		mode = &mode_sub;
		mode = &__$null;
	}
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, port);
	r = phpqt_qtcpsocket_bind_quint16_q_abstract_socket_bind_mode(&_0, &_1, mode);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Network_QTcpSocket_QTcpSocket, staticMetaObject)
{

	RETURN_LONG(phpqt_qtcpsocket_static_meta_object());
}

PHP_METHOD(Qt_Network_QTcpSocket_QTcpSocket, tr)
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
	phpqt_qtcpsocket_tr(&result, s, c, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Network_QTcpSocket_QTcpSocket, new_)
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
	RETURN_LONG(phpqt_qtcpsocket_new(&_0));
}

PHP_METHOD(Qt_Network_QTcpSocket_QTcpSocket, bindQHostAddressSpecialAddressQuint16QAbstractSocketBindMode)
{
	zval *handle_param = NULL, *addr_param = NULL, *port_param = NULL, *mode = NULL, mode_sub, __$null, _0, _1, _2;
	zend_long handle, addr, port, r = 0;

	ZVAL_UNDEF(&mode_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(2, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(addr)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(port)
		Z_PARAM_ZVAL_OR_NULL(mode)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 2, &handle_param, &addr_param, &port_param, &mode);
	if (!port_param) {
		port = 0;
	} else {
		}
	if (!mode) {
		mode = &mode_sub;
		mode = &__$null;
	}
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, addr);
	ZVAL_LONG(&_2, port);
	r = phpqt_qtcpsocket_bind_q_host_address_special_address_quint16_q_abstract_socket_bind_mode(&_0, &_1, &_2, mode);
	RETURN_BOOL(r == 1);
}

