
extern zend_class_entry *qt_network_qnetworkdatagram_qnetworkdatagram_ce;

ZEPHIR_INIT_CLASS(Qt_Network_QNetworkDatagram_QNetworkDatagram);

PHP_METHOD(Qt_Network_QNetworkDatagram_QNetworkDatagram, new_);
PHP_METHOD(Qt_Network_QNetworkDatagram_QNetworkDatagram, newQByteArrayQHostAddressQuint16);
PHP_METHOD(Qt_Network_QNetworkDatagram_QNetworkDatagram, newQNetworkDatagram);
PHP_METHOD(Qt_Network_QNetworkDatagram_QNetworkDatagram, swap);
PHP_METHOD(Qt_Network_QNetworkDatagram_QNetworkDatagram, clear);
PHP_METHOD(Qt_Network_QNetworkDatagram_QNetworkDatagram, isValid);
PHP_METHOD(Qt_Network_QNetworkDatagram_QNetworkDatagram, isNull);
PHP_METHOD(Qt_Network_QNetworkDatagram_QNetworkDatagram, interfaceIndex);
PHP_METHOD(Qt_Network_QNetworkDatagram_QNetworkDatagram, setInterfaceIndex);
PHP_METHOD(Qt_Network_QNetworkDatagram_QNetworkDatagram, senderAddress);
PHP_METHOD(Qt_Network_QNetworkDatagram_QNetworkDatagram, destinationAddress);
PHP_METHOD(Qt_Network_QNetworkDatagram_QNetworkDatagram, senderPort);
PHP_METHOD(Qt_Network_QNetworkDatagram_QNetworkDatagram, destinationPort);
PHP_METHOD(Qt_Network_QNetworkDatagram_QNetworkDatagram, setSender);
PHP_METHOD(Qt_Network_QNetworkDatagram_QNetworkDatagram, setDestination);
PHP_METHOD(Qt_Network_QNetworkDatagram_QNetworkDatagram, hopLimit);
PHP_METHOD(Qt_Network_QNetworkDatagram_QNetworkDatagram, setHopLimit);
PHP_METHOD(Qt_Network_QNetworkDatagram_QNetworkDatagram, data);
PHP_METHOD(Qt_Network_QNetworkDatagram_QNetworkDatagram, setData);
PHP_METHOD(Qt_Network_QNetworkDatagram_QNetworkDatagram, makeReply);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qnetworkdatagram_qnetworkdatagram_new_, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qnetworkdatagram_qnetworkdatagram_newqbytearrayqhostaddressquint16, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, data, IS_STRING, 0)
	ZEND_ARG_INFO(0, destinationAddress)
	ZEND_ARG_TYPE_INFO(0, port, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qnetworkdatagram_qnetworkdatagram_newqnetworkdatagram, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, other, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qnetworkdatagram_qnetworkdatagram_swap, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, other, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qnetworkdatagram_qnetworkdatagram_clear, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qnetworkdatagram_qnetworkdatagram_isvalid, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qnetworkdatagram_qnetworkdatagram_isnull, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qnetworkdatagram_qnetworkdatagram_interfaceindex, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qnetworkdatagram_qnetworkdatagram_setinterfaceindex, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qnetworkdatagram_qnetworkdatagram_senderaddress, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qnetworkdatagram_qnetworkdatagram_destinationaddress, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qnetworkdatagram_qnetworkdatagram_senderport, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qnetworkdatagram_qnetworkdatagram_destinationport, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qnetworkdatagram_qnetworkdatagram_setsender, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, address, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, port, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qnetworkdatagram_qnetworkdatagram_setdestination, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, address, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, port, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qnetworkdatagram_qnetworkdatagram_hoplimit, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qnetworkdatagram_qnetworkdatagram_sethoplimit, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, count, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qnetworkdatagram_qnetworkdatagram_data, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qnetworkdatagram_qnetworkdatagram_setdata, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, data, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qnetworkdatagram_qnetworkdatagram_makereply, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, payload, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_network_qnetworkdatagram_qnetworkdatagram_method_entry) {
	PHP_ME(Qt_Network_QNetworkDatagram_QNetworkDatagram, new_, arginfo_qt_network_qnetworkdatagram_qnetworkdatagram_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QNetworkDatagram_QNetworkDatagram, newQByteArrayQHostAddressQuint16, arginfo_qt_network_qnetworkdatagram_qnetworkdatagram_newqbytearrayqhostaddressquint16, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QNetworkDatagram_QNetworkDatagram, newQNetworkDatagram, arginfo_qt_network_qnetworkdatagram_qnetworkdatagram_newqnetworkdatagram, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QNetworkDatagram_QNetworkDatagram, swap, arginfo_qt_network_qnetworkdatagram_qnetworkdatagram_swap, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QNetworkDatagram_QNetworkDatagram, clear, arginfo_qt_network_qnetworkdatagram_qnetworkdatagram_clear, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QNetworkDatagram_QNetworkDatagram, isValid, arginfo_qt_network_qnetworkdatagram_qnetworkdatagram_isvalid, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QNetworkDatagram_QNetworkDatagram, isNull, arginfo_qt_network_qnetworkdatagram_qnetworkdatagram_isnull, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QNetworkDatagram_QNetworkDatagram, interfaceIndex, arginfo_qt_network_qnetworkdatagram_qnetworkdatagram_interfaceindex, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QNetworkDatagram_QNetworkDatagram, setInterfaceIndex, arginfo_qt_network_qnetworkdatagram_qnetworkdatagram_setinterfaceindex, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QNetworkDatagram_QNetworkDatagram, senderAddress, arginfo_qt_network_qnetworkdatagram_qnetworkdatagram_senderaddress, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QNetworkDatagram_QNetworkDatagram, destinationAddress, arginfo_qt_network_qnetworkdatagram_qnetworkdatagram_destinationaddress, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QNetworkDatagram_QNetworkDatagram, senderPort, arginfo_qt_network_qnetworkdatagram_qnetworkdatagram_senderport, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QNetworkDatagram_QNetworkDatagram, destinationPort, arginfo_qt_network_qnetworkdatagram_qnetworkdatagram_destinationport, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QNetworkDatagram_QNetworkDatagram, setSender, arginfo_qt_network_qnetworkdatagram_qnetworkdatagram_setsender, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QNetworkDatagram_QNetworkDatagram, setDestination, arginfo_qt_network_qnetworkdatagram_qnetworkdatagram_setdestination, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QNetworkDatagram_QNetworkDatagram, hopLimit, arginfo_qt_network_qnetworkdatagram_qnetworkdatagram_hoplimit, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QNetworkDatagram_QNetworkDatagram, setHopLimit, arginfo_qt_network_qnetworkdatagram_qnetworkdatagram_sethoplimit, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QNetworkDatagram_QNetworkDatagram, data, arginfo_qt_network_qnetworkdatagram_qnetworkdatagram_data, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QNetworkDatagram_QNetworkDatagram, setData, arginfo_qt_network_qnetworkdatagram_qnetworkdatagram_setdata, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QNetworkDatagram_QNetworkDatagram, makeReply, arginfo_qt_network_qnetworkdatagram_qnetworkdatagram_makereply, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
