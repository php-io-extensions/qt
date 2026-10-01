
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
#include "src/network-qudpsocket.h"
#include "kernel/operators.h"
#include "kernel/memory.h"
#include "kernel/object.h"
#include "kernel/string.h"


ZEPHIR_INIT_CLASS(Qt_Network_QUdpSocket_QUdpSocket)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Network\\QUdpSocket, QUdpSocket, qt, network_qudpsocket_qudpsocket, qt_network_qudpsocket_qudpsocket_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Network_QUdpSocket_QUdpSocket, bind)
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
	r = phpqt_qudpsocket_bind(&_0, &_1, &_2, mode);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Network_QUdpSocket_QUdpSocket, bindQuint16QAbstractSocketBindMode)
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
	r = phpqt_qudpsocket_bind_quint16_q_abstract_socket_bind_mode(&_0, &_1, mode);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Network_QUdpSocket_QUdpSocket, staticMetaObject)
{

	RETURN_LONG(phpqt_qudpsocket_static_meta_object());
}

PHP_METHOD(Qt_Network_QUdpSocket_QUdpSocket, tr)
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
	phpqt_qudpsocket_tr(&result, s, c, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Network_QUdpSocket_QUdpSocket, new_)
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
	RETURN_LONG(phpqt_qudpsocket_new(&_0));
}

PHP_METHOD(Qt_Network_QUdpSocket_QUdpSocket, bindQHostAddressSpecialAddressQuint16QAbstractSocketBindMode)
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
	r = phpqt_qudpsocket_bind_q_host_address_special_address_quint16_q_abstract_socket_bind_mode(&_0, &_1, &_2, mode);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Network_QUdpSocket_QUdpSocket, joinMulticastGroup)
{
	zval *handle_param = NULL, *groupAddress_param = NULL, _0, _1;
	zend_long handle, groupAddress, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(groupAddress)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &groupAddress_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, groupAddress);
	r = phpqt_qudpsocket_join_multicast_group(&_0, &_1);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Network_QUdpSocket_QUdpSocket, joinMulticastGroupQHostAddressQNetworkInterface)
{
	zval *handle_param = NULL, *groupAddress_param = NULL, *iface_param = NULL, _0, _1, _2;
	zend_long handle, groupAddress, iface, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(groupAddress)
		Z_PARAM_LONG(iface)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &groupAddress_param, &iface_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, groupAddress);
	ZVAL_LONG(&_2, iface);
	r = phpqt_qudpsocket_join_multicast_group_q_host_address_q_network_interface(&_0, &_1, &_2);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Network_QUdpSocket_QUdpSocket, leaveMulticastGroup)
{
	zval *handle_param = NULL, *groupAddress_param = NULL, _0, _1;
	zend_long handle, groupAddress, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(groupAddress)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &groupAddress_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, groupAddress);
	r = phpqt_qudpsocket_leave_multicast_group(&_0, &_1);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Network_QUdpSocket_QUdpSocket, leaveMulticastGroupQHostAddressQNetworkInterface)
{
	zval *handle_param = NULL, *groupAddress_param = NULL, *iface_param = NULL, _0, _1, _2;
	zend_long handle, groupAddress, iface, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(groupAddress)
		Z_PARAM_LONG(iface)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &groupAddress_param, &iface_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, groupAddress);
	ZVAL_LONG(&_2, iface);
	r = phpqt_qudpsocket_leave_multicast_group_q_host_address_q_network_interface(&_0, &_1, &_2);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Network_QUdpSocket_QUdpSocket, multicastInterface)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qudpsocket_multicast_interface(&_0));
}

PHP_METHOD(Qt_Network_QUdpSocket_QUdpSocket, setMulticastInterface)
{
	zval *handle_param = NULL, *iface_param = NULL, _0, _1;
	zend_long handle, iface;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(iface)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &iface_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, iface);
	phpqt_qudpsocket_set_multicast_interface(&_0, &_1);
}

PHP_METHOD(Qt_Network_QUdpSocket_QUdpSocket, hasPendingDatagrams)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qudpsocket_has_pending_datagrams(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Network_QUdpSocket_QUdpSocket, pendingDatagramSize)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qudpsocket_pending_datagram_size(&_0));
}

PHP_METHOD(Qt_Network_QUdpSocket_QUdpSocket, receiveDatagram)
{
	zval *handle_param = NULL, *maxSize_param = NULL, _0, _1;
	zend_long handle, maxSize;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(maxSize)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 1, &handle_param, &maxSize_param);
	if (!maxSize_param) {
		maxSize = -1;
	} else {
		}
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, maxSize);
	RETURN_LONG(phpqt_qudpsocket_receive_datagram(&_0, &_1));
}

PHP_METHOD(Qt_Network_QUdpSocket_QUdpSocket, writeDatagram)
{
	zval *handle_param = NULL, *datagram_param = NULL, _0, _1;
	zend_long handle, datagram;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(datagram)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &datagram_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, datagram);
	RETURN_LONG(phpqt_qudpsocket_write_datagram(&_0, &_1));
}

PHP_METHOD(Qt_Network_QUdpSocket_QUdpSocket, writeDatagramCharQint64QHostAddressQuint16)
{
	zval *handle_param = NULL, *data = NULL, data_sub, *len_param = NULL, *host_param = NULL, *port_param = NULL, _0, _1, _2, _3;
	zend_long handle, len, host, port;

	ZVAL_UNDEF(&data_sub);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(5, 5)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(data)
		Z_PARAM_LONG(len)
		Z_PARAM_LONG(host)
		Z_PARAM_LONG(port)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(5, 0, &handle_param, &data, &len_param, &host_param, &port_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, len);
	ZVAL_LONG(&_2, host);
	ZVAL_LONG(&_3, port);
	RETURN_LONG(phpqt_qudpsocket_write_datagram_char_qint64_q_host_address_quint16(&_0, data, &_1, &_2, &_3));
}

PHP_METHOD(Qt_Network_QUdpSocket_QUdpSocket, writeDatagramQByteArrayQHostAddressQuint16)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval datagram;
	zval *handle_param = NULL, *datagram_param = NULL, *host_param = NULL, *port_param = NULL, _0, _1, _2;
	zend_long handle, host, port;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&datagram);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(datagram)
		Z_PARAM_LONG(host)
		Z_PARAM_LONG(port)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 4, 0, &handle_param, &datagram_param, &host_param, &port_param);
	zephir_get_strval(&datagram, datagram_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, host);
	ZVAL_LONG(&_2, port);
	RETURN_MM_LONG(phpqt_qudpsocket_write_datagram_q_byte_array_q_host_address_quint16(&_0, &datagram, &_1, &_2));
}

