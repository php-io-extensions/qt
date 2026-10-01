
extern zend_class_entry *qt_network_qhostaddress_qhostaddress_ce;

ZEPHIR_INIT_CLASS(Qt_Network_QHostAddress_QHostAddress);

PHP_METHOD(Qt_Network_QHostAddress_QHostAddress, staticMetaObject);
PHP_METHOD(Qt_Network_QHostAddress_QHostAddress, qt_check_for_QGADGET_macro);
PHP_METHOD(Qt_Network_QHostAddress_QHostAddress, IPv4Protocol);
PHP_METHOD(Qt_Network_QHostAddress_QHostAddress, IPv6Protocol);
PHP_METHOD(Qt_Network_QHostAddress_QHostAddress, AnyIPProtocol);
PHP_METHOD(Qt_Network_QHostAddress_QHostAddress, UnknownNetworkLayerProtocol);
PHP_METHOD(Qt_Network_QHostAddress_QHostAddress, new_);
PHP_METHOD(Qt_Network_QHostAddress_QHostAddress, newQuint32);
PHP_METHOD(Qt_Network_QHostAddress_QHostAddress, newQuint8);
PHP_METHOD(Qt_Network_QHostAddress_QHostAddress, newQIPV6ADDR);
PHP_METHOD(Qt_Network_QHostAddress_QHostAddress, newQString);
PHP_METHOD(Qt_Network_QHostAddress_QHostAddress, newQHostAddress);
PHP_METHOD(Qt_Network_QHostAddress_QHostAddress, newQHostAddressSpecialAddress);
PHP_METHOD(Qt_Network_QHostAddress_QHostAddress, swap);
PHP_METHOD(Qt_Network_QHostAddress_QHostAddress, setAddress);
PHP_METHOD(Qt_Network_QHostAddress_QHostAddress, setAddressQuint8);
PHP_METHOD(Qt_Network_QHostAddress_QHostAddress, setAddressQIPV6ADDR);
PHP_METHOD(Qt_Network_QHostAddress_QHostAddress, setAddressQString);
PHP_METHOD(Qt_Network_QHostAddress_QHostAddress, setAddressQHostAddressSpecialAddress);
PHP_METHOD(Qt_Network_QHostAddress_QHostAddress, protocol);
PHP_METHOD(Qt_Network_QHostAddress_QHostAddress, toIPv4Address);
PHP_METHOD(Qt_Network_QHostAddress_QHostAddress, toIPv6Address);
PHP_METHOD(Qt_Network_QHostAddress_QHostAddress, toString);
PHP_METHOD(Qt_Network_QHostAddress_QHostAddress, scopeId);
PHP_METHOD(Qt_Network_QHostAddress_QHostAddress, setScopeId);
PHP_METHOD(Qt_Network_QHostAddress_QHostAddress, isEqual);
PHP_METHOD(Qt_Network_QHostAddress_QHostAddress, isNull);
PHP_METHOD(Qt_Network_QHostAddress_QHostAddress, clear);
PHP_METHOD(Qt_Network_QHostAddress_QHostAddress, isInSubnet);
PHP_METHOD(Qt_Network_QHostAddress_QHostAddress, isInSubnetStdPairQHostAddressInt);
PHP_METHOD(Qt_Network_QHostAddress_QHostAddress, isLoopback);
PHP_METHOD(Qt_Network_QHostAddress_QHostAddress, isGlobal);
PHP_METHOD(Qt_Network_QHostAddress_QHostAddress, isLinkLocal);
PHP_METHOD(Qt_Network_QHostAddress_QHostAddress, isSiteLocal);
PHP_METHOD(Qt_Network_QHostAddress_QHostAddress, isUniqueLocalUnicast);
PHP_METHOD(Qt_Network_QHostAddress_QHostAddress, isMulticast);
PHP_METHOD(Qt_Network_QHostAddress_QHostAddress, isBroadcast);
PHP_METHOD(Qt_Network_QHostAddress_QHostAddress, isPrivateUse);
PHP_METHOD(Qt_Network_QHostAddress_QHostAddress, parseSubnet);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qhostaddress_qhostaddress_staticmetaobject, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qhostaddress_qhostaddress_qt_check_for_qgadget_macro, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qhostaddress_qhostaddress_ipv4protocol, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qhostaddress_qhostaddress_ipv6protocol, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qhostaddress_qhostaddress_anyipprotocol, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qhostaddress_qhostaddress_unknownnetworklayerprotocol, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qhostaddress_qhostaddress_new_, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qhostaddress_qhostaddress_newquint32, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, ip4Addr, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qhostaddress_qhostaddress_newquint8, 0, 1, IS_LONG, 0)
	ZEND_ARG_INFO(0, ip6Addr)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qhostaddress_qhostaddress_newqipv6addr, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, ip6Addr, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qhostaddress_qhostaddress_newqstring, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, address, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qhostaddress_qhostaddress_newqhostaddress, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, copy, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qhostaddress_qhostaddress_newqhostaddressspecialaddress, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, address, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qhostaddress_qhostaddress_swap, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, other, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qhostaddress_qhostaddress_setaddress, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, ip4Addr, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qhostaddress_qhostaddress_setaddressquint8, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_INFO(0, ip6Addr)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qhostaddress_qhostaddress_setaddressqipv6addr, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, ip6Addr, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qhostaddress_qhostaddress_setaddressqstring, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, address, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qhostaddress_qhostaddress_setaddressqhostaddressspecialaddress, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, address, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qhostaddress_qhostaddress_protocol, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qhostaddress_qhostaddress_toipv4address, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_INFO(0, ok)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qhostaddress_qhostaddress_toipv6address, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qhostaddress_qhostaddress_tostring, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qhostaddress_qhostaddress_scopeid, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qhostaddress_qhostaddress_setscopeid, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, id, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qhostaddress_qhostaddress_isequal, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, address, IS_LONG, 0)
	ZEND_ARG_INFO(0, mode)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qhostaddress_qhostaddress_isnull, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qhostaddress_qhostaddress_clear, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qhostaddress_qhostaddress_isinsubnet, 0, 3, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, subnet, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, netmask, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qhostaddress_qhostaddress_isinsubnetstdpairqhostaddressint, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_ARRAY_INFO(0, subnet, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qhostaddress_qhostaddress_isloopback, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qhostaddress_qhostaddress_isglobal, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qhostaddress_qhostaddress_islinklocal, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qhostaddress_qhostaddress_issitelocal, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qhostaddress_qhostaddress_isuniquelocalunicast, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qhostaddress_qhostaddress_ismulticast, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qhostaddress_qhostaddress_isbroadcast, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qhostaddress_qhostaddress_isprivateuse, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qhostaddress_qhostaddress_parsesubnet, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, subnet, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_network_qhostaddress_qhostaddress_method_entry) {
	PHP_ME(Qt_Network_QHostAddress_QHostAddress, staticMetaObject, arginfo_qt_network_qhostaddress_qhostaddress_staticmetaobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QHostAddress_QHostAddress, qt_check_for_QGADGET_macro, arginfo_qt_network_qhostaddress_qhostaddress_qt_check_for_qgadget_macro, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QHostAddress_QHostAddress, IPv4Protocol, arginfo_qt_network_qhostaddress_qhostaddress_ipv4protocol, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QHostAddress_QHostAddress, IPv6Protocol, arginfo_qt_network_qhostaddress_qhostaddress_ipv6protocol, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QHostAddress_QHostAddress, AnyIPProtocol, arginfo_qt_network_qhostaddress_qhostaddress_anyipprotocol, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QHostAddress_QHostAddress, UnknownNetworkLayerProtocol, arginfo_qt_network_qhostaddress_qhostaddress_unknownnetworklayerprotocol, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QHostAddress_QHostAddress, new_, arginfo_qt_network_qhostaddress_qhostaddress_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QHostAddress_QHostAddress, newQuint32, arginfo_qt_network_qhostaddress_qhostaddress_newquint32, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QHostAddress_QHostAddress, newQuint8, arginfo_qt_network_qhostaddress_qhostaddress_newquint8, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QHostAddress_QHostAddress, newQIPV6ADDR, arginfo_qt_network_qhostaddress_qhostaddress_newqipv6addr, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QHostAddress_QHostAddress, newQString, arginfo_qt_network_qhostaddress_qhostaddress_newqstring, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QHostAddress_QHostAddress, newQHostAddress, arginfo_qt_network_qhostaddress_qhostaddress_newqhostaddress, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QHostAddress_QHostAddress, newQHostAddressSpecialAddress, arginfo_qt_network_qhostaddress_qhostaddress_newqhostaddressspecialaddress, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QHostAddress_QHostAddress, swap, arginfo_qt_network_qhostaddress_qhostaddress_swap, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QHostAddress_QHostAddress, setAddress, arginfo_qt_network_qhostaddress_qhostaddress_setaddress, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QHostAddress_QHostAddress, setAddressQuint8, arginfo_qt_network_qhostaddress_qhostaddress_setaddressquint8, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QHostAddress_QHostAddress, setAddressQIPV6ADDR, arginfo_qt_network_qhostaddress_qhostaddress_setaddressqipv6addr, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QHostAddress_QHostAddress, setAddressQString, arginfo_qt_network_qhostaddress_qhostaddress_setaddressqstring, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QHostAddress_QHostAddress, setAddressQHostAddressSpecialAddress, arginfo_qt_network_qhostaddress_qhostaddress_setaddressqhostaddressspecialaddress, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QHostAddress_QHostAddress, protocol, arginfo_qt_network_qhostaddress_qhostaddress_protocol, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QHostAddress_QHostAddress, toIPv4Address, arginfo_qt_network_qhostaddress_qhostaddress_toipv4address, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QHostAddress_QHostAddress, toIPv6Address, arginfo_qt_network_qhostaddress_qhostaddress_toipv6address, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QHostAddress_QHostAddress, toString, arginfo_qt_network_qhostaddress_qhostaddress_tostring, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QHostAddress_QHostAddress, scopeId, arginfo_qt_network_qhostaddress_qhostaddress_scopeid, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QHostAddress_QHostAddress, setScopeId, arginfo_qt_network_qhostaddress_qhostaddress_setscopeid, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QHostAddress_QHostAddress, isEqual, arginfo_qt_network_qhostaddress_qhostaddress_isequal, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QHostAddress_QHostAddress, isNull, arginfo_qt_network_qhostaddress_qhostaddress_isnull, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QHostAddress_QHostAddress, clear, arginfo_qt_network_qhostaddress_qhostaddress_clear, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QHostAddress_QHostAddress, isInSubnet, arginfo_qt_network_qhostaddress_qhostaddress_isinsubnet, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QHostAddress_QHostAddress, isInSubnetStdPairQHostAddressInt, arginfo_qt_network_qhostaddress_qhostaddress_isinsubnetstdpairqhostaddressint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QHostAddress_QHostAddress, isLoopback, arginfo_qt_network_qhostaddress_qhostaddress_isloopback, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QHostAddress_QHostAddress, isGlobal, arginfo_qt_network_qhostaddress_qhostaddress_isglobal, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QHostAddress_QHostAddress, isLinkLocal, arginfo_qt_network_qhostaddress_qhostaddress_islinklocal, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QHostAddress_QHostAddress, isSiteLocal, arginfo_qt_network_qhostaddress_qhostaddress_issitelocal, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QHostAddress_QHostAddress, isUniqueLocalUnicast, arginfo_qt_network_qhostaddress_qhostaddress_isuniquelocalunicast, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QHostAddress_QHostAddress, isMulticast, arginfo_qt_network_qhostaddress_qhostaddress_ismulticast, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QHostAddress_QHostAddress, isBroadcast, arginfo_qt_network_qhostaddress_qhostaddress_isbroadcast, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QHostAddress_QHostAddress, isPrivateUse, arginfo_qt_network_qhostaddress_qhostaddress_isprivateuse, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QHostAddress_QHostAddress, parseSubnet, arginfo_qt_network_qhostaddress_qhostaddress_parsesubnet, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
