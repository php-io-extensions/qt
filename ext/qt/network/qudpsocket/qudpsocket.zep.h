
extern zend_class_entry *qt_network_qudpsocket_qudpsocket_ce;

ZEPHIR_INIT_CLASS(Qt_Network_QUdpSocket_QUdpSocket);

PHP_METHOD(Qt_Network_QUdpSocket_QUdpSocket, bind);
PHP_METHOD(Qt_Network_QUdpSocket_QUdpSocket, bindQuint16QAbstractSocketBindMode);
PHP_METHOD(Qt_Network_QUdpSocket_QUdpSocket, staticMetaObject);
PHP_METHOD(Qt_Network_QUdpSocket_QUdpSocket, tr);
PHP_METHOD(Qt_Network_QUdpSocket_QUdpSocket, new_);
PHP_METHOD(Qt_Network_QUdpSocket_QUdpSocket, bindQHostAddressSpecialAddressQuint16QAbstractSocketBindMode);
PHP_METHOD(Qt_Network_QUdpSocket_QUdpSocket, joinMulticastGroup);
PHP_METHOD(Qt_Network_QUdpSocket_QUdpSocket, joinMulticastGroupQHostAddressQNetworkInterface);
PHP_METHOD(Qt_Network_QUdpSocket_QUdpSocket, leaveMulticastGroup);
PHP_METHOD(Qt_Network_QUdpSocket_QUdpSocket, leaveMulticastGroupQHostAddressQNetworkInterface);
PHP_METHOD(Qt_Network_QUdpSocket_QUdpSocket, multicastInterface);
PHP_METHOD(Qt_Network_QUdpSocket_QUdpSocket, setMulticastInterface);
PHP_METHOD(Qt_Network_QUdpSocket_QUdpSocket, hasPendingDatagrams);
PHP_METHOD(Qt_Network_QUdpSocket_QUdpSocket, pendingDatagramSize);
PHP_METHOD(Qt_Network_QUdpSocket_QUdpSocket, receiveDatagram);
PHP_METHOD(Qt_Network_QUdpSocket_QUdpSocket, writeDatagram);
PHP_METHOD(Qt_Network_QUdpSocket_QUdpSocket, writeDatagramCharQint64QHostAddressQuint16);
PHP_METHOD(Qt_Network_QUdpSocket_QUdpSocket, writeDatagramQByteArrayQHostAddressQuint16);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qudpsocket_qudpsocket_bind, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, address, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, port, IS_LONG, 0)
	ZEND_ARG_INFO(0, mode)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qudpsocket_qudpsocket_bindquint16qabstractsocketbindmode, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, port, IS_LONG, 0)
	ZEND_ARG_INFO(0, mode)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qudpsocket_qudpsocket_staticmetaobject, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qudpsocket_qudpsocket_tr, 0, 1, IS_STRING, 0)
	ZEND_ARG_INFO(0, s)
	ZEND_ARG_INFO(0, c)
	ZEND_ARG_TYPE_INFO(0, n, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qudpsocket_qudpsocket_new_, 0, 0, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qudpsocket_qudpsocket_bindqhostaddressspecialaddressquint16qabstractsocketbindmode, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, addr, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, port, IS_LONG, 0)
	ZEND_ARG_INFO(0, mode)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qudpsocket_qudpsocket_joinmulticastgroup, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, groupAddress, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qudpsocket_qudpsocket_joinmulticastgroupqhostaddressqnetworkinterface, 0, 3, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, groupAddress, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, iface, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qudpsocket_qudpsocket_leavemulticastgroup, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, groupAddress, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qudpsocket_qudpsocket_leavemulticastgroupqhostaddressqnetworkinterface, 0, 3, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, groupAddress, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, iface, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qudpsocket_qudpsocket_multicastinterface, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qudpsocket_qudpsocket_setmulticastinterface, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, iface, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qudpsocket_qudpsocket_haspendingdatagrams, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qudpsocket_qudpsocket_pendingdatagramsize, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qudpsocket_qudpsocket_receivedatagram, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, maxSize, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qudpsocket_qudpsocket_writedatagram, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, datagram, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qudpsocket_qudpsocket_writedatagramcharqint64qhostaddressquint16, 0, 5, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_INFO(0, data)
	ZEND_ARG_TYPE_INFO(0, len, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, host, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, port, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qudpsocket_qudpsocket_writedatagramqbytearrayqhostaddressquint16, 0, 4, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, datagram, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, host, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, port, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_network_qudpsocket_qudpsocket_method_entry) {
	PHP_ME(Qt_Network_QUdpSocket_QUdpSocket, bind, arginfo_qt_network_qudpsocket_qudpsocket_bind, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QUdpSocket_QUdpSocket, bindQuint16QAbstractSocketBindMode, arginfo_qt_network_qudpsocket_qudpsocket_bindquint16qabstractsocketbindmode, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QUdpSocket_QUdpSocket, staticMetaObject, arginfo_qt_network_qudpsocket_qudpsocket_staticmetaobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QUdpSocket_QUdpSocket, tr, arginfo_qt_network_qudpsocket_qudpsocket_tr, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QUdpSocket_QUdpSocket, new_, arginfo_qt_network_qudpsocket_qudpsocket_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QUdpSocket_QUdpSocket, bindQHostAddressSpecialAddressQuint16QAbstractSocketBindMode, arginfo_qt_network_qudpsocket_qudpsocket_bindqhostaddressspecialaddressquint16qabstractsocketbindmode, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QUdpSocket_QUdpSocket, joinMulticastGroup, arginfo_qt_network_qudpsocket_qudpsocket_joinmulticastgroup, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QUdpSocket_QUdpSocket, joinMulticastGroupQHostAddressQNetworkInterface, arginfo_qt_network_qudpsocket_qudpsocket_joinmulticastgroupqhostaddressqnetworkinterface, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QUdpSocket_QUdpSocket, leaveMulticastGroup, arginfo_qt_network_qudpsocket_qudpsocket_leavemulticastgroup, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QUdpSocket_QUdpSocket, leaveMulticastGroupQHostAddressQNetworkInterface, arginfo_qt_network_qudpsocket_qudpsocket_leavemulticastgroupqhostaddressqnetworkinterface, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QUdpSocket_QUdpSocket, multicastInterface, arginfo_qt_network_qudpsocket_qudpsocket_multicastinterface, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QUdpSocket_QUdpSocket, setMulticastInterface, arginfo_qt_network_qudpsocket_qudpsocket_setmulticastinterface, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QUdpSocket_QUdpSocket, hasPendingDatagrams, arginfo_qt_network_qudpsocket_qudpsocket_haspendingdatagrams, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QUdpSocket_QUdpSocket, pendingDatagramSize, arginfo_qt_network_qudpsocket_qudpsocket_pendingdatagramsize, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QUdpSocket_QUdpSocket, receiveDatagram, arginfo_qt_network_qudpsocket_qudpsocket_receivedatagram, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QUdpSocket_QUdpSocket, writeDatagram, arginfo_qt_network_qudpsocket_qudpsocket_writedatagram, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QUdpSocket_QUdpSocket, writeDatagramCharQint64QHostAddressQuint16, arginfo_qt_network_qudpsocket_qudpsocket_writedatagramcharqint64qhostaddressquint16, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QUdpSocket_QUdpSocket, writeDatagramQByteArrayQHostAddressQuint16, arginfo_qt_network_qudpsocket_qudpsocket_writedatagramqbytearrayqhostaddressquint16, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
