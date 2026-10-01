
extern zend_class_entry *qt_network_qdnslookup_qdnslookup_ce;

ZEPHIR_INIT_CLASS(Qt_Network_QDnsLookup_QDnsLookup);

PHP_METHOD(Qt_Network_QDnsLookup_QDnsLookup, staticMetaObject);
PHP_METHOD(Qt_Network_QDnsLookup_QDnsLookup, tr);
PHP_METHOD(Qt_Network_QDnsLookup_QDnsLookup, new_);
PHP_METHOD(Qt_Network_QDnsLookup_QDnsLookup, newQDnsLookupTypeQStringQObject);
PHP_METHOD(Qt_Network_QDnsLookup_QDnsLookup, newQDnsLookupTypeQStringQHostAddressQObject);
PHP_METHOD(Qt_Network_QDnsLookup_QDnsLookup, newQDnsLookupTypeQStringQHostAddressQuint16QObject);
PHP_METHOD(Qt_Network_QDnsLookup_QDnsLookup, newQDnsLookupTypeQStringQDnsLookupProtocolQHostAddressQuint16QObject);
PHP_METHOD(Qt_Network_QDnsLookup_QDnsLookup, isAuthenticData);
PHP_METHOD(Qt_Network_QDnsLookup_QDnsLookup, error);
PHP_METHOD(Qt_Network_QDnsLookup_QDnsLookup, errorString);
PHP_METHOD(Qt_Network_QDnsLookup_QDnsLookup, isFinished);
PHP_METHOD(Qt_Network_QDnsLookup_QDnsLookup, name);
PHP_METHOD(Qt_Network_QDnsLookup_QDnsLookup, setName);
PHP_METHOD(Qt_Network_QDnsLookup_QDnsLookup, type);
PHP_METHOD(Qt_Network_QDnsLookup_QDnsLookup, setType);
PHP_METHOD(Qt_Network_QDnsLookup_QDnsLookup, nameserver);
PHP_METHOD(Qt_Network_QDnsLookup_QDnsLookup, setNameserver);
PHP_METHOD(Qt_Network_QDnsLookup_QDnsLookup, nameserverPort);
PHP_METHOD(Qt_Network_QDnsLookup_QDnsLookup, setNameserverPort);
PHP_METHOD(Qt_Network_QDnsLookup_QDnsLookup, nameserverProtocol);
PHP_METHOD(Qt_Network_QDnsLookup_QDnsLookup, setNameserverProtocol);
PHP_METHOD(Qt_Network_QDnsLookup_QDnsLookup, setNameserverQDnsLookupProtocolQHostAddressQuint16);
PHP_METHOD(Qt_Network_QDnsLookup_QDnsLookup, setNameserverQHostAddressQuint16);
PHP_METHOD(Qt_Network_QDnsLookup_QDnsLookup, canonicalNameRecords);
PHP_METHOD(Qt_Network_QDnsLookup_QDnsLookup, hostAddressRecords);
PHP_METHOD(Qt_Network_QDnsLookup_QDnsLookup, mailExchangeRecords);
PHP_METHOD(Qt_Network_QDnsLookup_QDnsLookup, nameServerRecords);
PHP_METHOD(Qt_Network_QDnsLookup_QDnsLookup, pointerRecords);
PHP_METHOD(Qt_Network_QDnsLookup_QDnsLookup, serviceRecords);
PHP_METHOD(Qt_Network_QDnsLookup_QDnsLookup, textRecords);
PHP_METHOD(Qt_Network_QDnsLookup_QDnsLookup, tlsAssociationRecords);
PHP_METHOD(Qt_Network_QDnsLookup_QDnsLookup, setSslConfiguration);
PHP_METHOD(Qt_Network_QDnsLookup_QDnsLookup, sslConfiguration);
PHP_METHOD(Qt_Network_QDnsLookup_QDnsLookup, isProtocolSupported);
PHP_METHOD(Qt_Network_QDnsLookup_QDnsLookup, defaultPortForProtocol);
PHP_METHOD(Qt_Network_QDnsLookup_QDnsLookup, abort);
PHP_METHOD(Qt_Network_QDnsLookup_QDnsLookup, lookup);
PHP_METHOD(Qt_Network_QDnsLookup_QDnsLookup, finished);
PHP_METHOD(Qt_Network_QDnsLookup_QDnsLookup, nameChanged);
PHP_METHOD(Qt_Network_QDnsLookup_QDnsLookup, typeChanged);
PHP_METHOD(Qt_Network_QDnsLookup_QDnsLookup, nameserverChanged);
PHP_METHOD(Qt_Network_QDnsLookup_QDnsLookup, nameserverPortChanged);
PHP_METHOD(Qt_Network_QDnsLookup_QDnsLookup, nameserverProtocolChanged);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qdnslookup_qdnslookup_staticmetaobject, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qdnslookup_qdnslookup_tr, 0, 1, IS_STRING, 0)
	ZEND_ARG_INFO(0, s)
	ZEND_ARG_INFO(0, c)
	ZEND_ARG_TYPE_INFO(0, n, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qdnslookup_qdnslookup_new_, 0, 0, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qdnslookup_qdnslookup_newqdnslookuptypeqstringqobject, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, type, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, name, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qdnslookup_qdnslookup_newqdnslookuptypeqstringqhostaddressqobject, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, type, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, name, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, nameserver, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qdnslookup_qdnslookup_newqdnslookuptypeqstringqhostaddressquint16qobject, 0, 4, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, type, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, name, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, nameserver, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, port, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qdnslookup_qdnslookup_newqdnslookuptypeqstringqdnslookupprotocolqhostaddressquint16qobject, 0, 4, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, type, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, name, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, protocol, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, nameserver, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, port, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qdnslookup_qdnslookup_isauthenticdata, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qdnslookup_qdnslookup_error, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qdnslookup_qdnslookup_errorstring, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qdnslookup_qdnslookup_isfinished, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qdnslookup_qdnslookup_name, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qdnslookup_qdnslookup_setname, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, name, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qdnslookup_qdnslookup_type, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qdnslookup_qdnslookup_settype, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qdnslookup_qdnslookup_nameserver, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qdnslookup_qdnslookup_setnameserver, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, nameserver, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qdnslookup_qdnslookup_nameserverport, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qdnslookup_qdnslookup_setnameserverport, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, port, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qdnslookup_qdnslookup_nameserverprotocol, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qdnslookup_qdnslookup_setnameserverprotocol, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, protocol, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qdnslookup_qdnslookup_setnameserverqdnslookupprotocolqhostaddressquint16, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, protocol, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, nameserver, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, port, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qdnslookup_qdnslookup_setnameserverqhostaddressquint16, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, nameserver, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, port, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qdnslookup_qdnslookup_canonicalnamerecords, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qdnslookup_qdnslookup_hostaddressrecords, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qdnslookup_qdnslookup_mailexchangerecords, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qdnslookup_qdnslookup_nameserverrecords, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qdnslookup_qdnslookup_pointerrecords, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qdnslookup_qdnslookup_servicerecords, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qdnslookup_qdnslookup_textrecords, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qdnslookup_qdnslookup_tlsassociationrecords, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qdnslookup_qdnslookup_setsslconfiguration, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sslConfiguration, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qdnslookup_qdnslookup_sslconfiguration, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qdnslookup_qdnslookup_isprotocolsupported, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, protocol, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qdnslookup_qdnslookup_defaultportforprotocol, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, protocol, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qdnslookup_qdnslookup_abort, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qdnslookup_qdnslookup_lookup, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qdnslookup_qdnslookup_finished, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qdnslookup_qdnslookup_namechanged, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, name, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qdnslookup_qdnslookup_typechanged, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, type, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qdnslookup_qdnslookup_nameserverchanged, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, nameserver, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qdnslookup_qdnslookup_nameserverportchanged, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, port, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qdnslookup_qdnslookup_nameserverprotocolchanged, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, protocol, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_network_qdnslookup_qdnslookup_method_entry) {
	PHP_ME(Qt_Network_QDnsLookup_QDnsLookup, staticMetaObject, arginfo_qt_network_qdnslookup_qdnslookup_staticmetaobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QDnsLookup_QDnsLookup, tr, arginfo_qt_network_qdnslookup_qdnslookup_tr, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QDnsLookup_QDnsLookup, new_, arginfo_qt_network_qdnslookup_qdnslookup_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QDnsLookup_QDnsLookup, newQDnsLookupTypeQStringQObject, arginfo_qt_network_qdnslookup_qdnslookup_newqdnslookuptypeqstringqobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QDnsLookup_QDnsLookup, newQDnsLookupTypeQStringQHostAddressQObject, arginfo_qt_network_qdnslookup_qdnslookup_newqdnslookuptypeqstringqhostaddressqobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QDnsLookup_QDnsLookup, newQDnsLookupTypeQStringQHostAddressQuint16QObject, arginfo_qt_network_qdnslookup_qdnslookup_newqdnslookuptypeqstringqhostaddressquint16qobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QDnsLookup_QDnsLookup, newQDnsLookupTypeQStringQDnsLookupProtocolQHostAddressQuint16QObject, arginfo_qt_network_qdnslookup_qdnslookup_newqdnslookuptypeqstringqdnslookupprotocolqhostaddressquint16qobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QDnsLookup_QDnsLookup, isAuthenticData, arginfo_qt_network_qdnslookup_qdnslookup_isauthenticdata, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QDnsLookup_QDnsLookup, error, arginfo_qt_network_qdnslookup_qdnslookup_error, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QDnsLookup_QDnsLookup, errorString, arginfo_qt_network_qdnslookup_qdnslookup_errorstring, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QDnsLookup_QDnsLookup, isFinished, arginfo_qt_network_qdnslookup_qdnslookup_isfinished, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QDnsLookup_QDnsLookup, name, arginfo_qt_network_qdnslookup_qdnslookup_name, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QDnsLookup_QDnsLookup, setName, arginfo_qt_network_qdnslookup_qdnslookup_setname, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QDnsLookup_QDnsLookup, type, arginfo_qt_network_qdnslookup_qdnslookup_type, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QDnsLookup_QDnsLookup, setType, arginfo_qt_network_qdnslookup_qdnslookup_settype, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QDnsLookup_QDnsLookup, nameserver, arginfo_qt_network_qdnslookup_qdnslookup_nameserver, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QDnsLookup_QDnsLookup, setNameserver, arginfo_qt_network_qdnslookup_qdnslookup_setnameserver, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QDnsLookup_QDnsLookup, nameserverPort, arginfo_qt_network_qdnslookup_qdnslookup_nameserverport, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QDnsLookup_QDnsLookup, setNameserverPort, arginfo_qt_network_qdnslookup_qdnslookup_setnameserverport, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QDnsLookup_QDnsLookup, nameserverProtocol, arginfo_qt_network_qdnslookup_qdnslookup_nameserverprotocol, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QDnsLookup_QDnsLookup, setNameserverProtocol, arginfo_qt_network_qdnslookup_qdnslookup_setnameserverprotocol, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QDnsLookup_QDnsLookup, setNameserverQDnsLookupProtocolQHostAddressQuint16, arginfo_qt_network_qdnslookup_qdnslookup_setnameserverqdnslookupprotocolqhostaddressquint16, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QDnsLookup_QDnsLookup, setNameserverQHostAddressQuint16, arginfo_qt_network_qdnslookup_qdnslookup_setnameserverqhostaddressquint16, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QDnsLookup_QDnsLookup, canonicalNameRecords, arginfo_qt_network_qdnslookup_qdnslookup_canonicalnamerecords, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QDnsLookup_QDnsLookup, hostAddressRecords, arginfo_qt_network_qdnslookup_qdnslookup_hostaddressrecords, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QDnsLookup_QDnsLookup, mailExchangeRecords, arginfo_qt_network_qdnslookup_qdnslookup_mailexchangerecords, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QDnsLookup_QDnsLookup, nameServerRecords, arginfo_qt_network_qdnslookup_qdnslookup_nameserverrecords, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QDnsLookup_QDnsLookup, pointerRecords, arginfo_qt_network_qdnslookup_qdnslookup_pointerrecords, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QDnsLookup_QDnsLookup, serviceRecords, arginfo_qt_network_qdnslookup_qdnslookup_servicerecords, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QDnsLookup_QDnsLookup, textRecords, arginfo_qt_network_qdnslookup_qdnslookup_textrecords, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QDnsLookup_QDnsLookup, tlsAssociationRecords, arginfo_qt_network_qdnslookup_qdnslookup_tlsassociationrecords, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QDnsLookup_QDnsLookup, setSslConfiguration, arginfo_qt_network_qdnslookup_qdnslookup_setsslconfiguration, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QDnsLookup_QDnsLookup, sslConfiguration, arginfo_qt_network_qdnslookup_qdnslookup_sslconfiguration, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QDnsLookup_QDnsLookup, isProtocolSupported, arginfo_qt_network_qdnslookup_qdnslookup_isprotocolsupported, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QDnsLookup_QDnsLookup, defaultPortForProtocol, arginfo_qt_network_qdnslookup_qdnslookup_defaultportforprotocol, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QDnsLookup_QDnsLookup, abort, arginfo_qt_network_qdnslookup_qdnslookup_abort, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QDnsLookup_QDnsLookup, lookup, arginfo_qt_network_qdnslookup_qdnslookup_lookup, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QDnsLookup_QDnsLookup, finished, arginfo_qt_network_qdnslookup_qdnslookup_finished, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QDnsLookup_QDnsLookup, nameChanged, arginfo_qt_network_qdnslookup_qdnslookup_namechanged, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QDnsLookup_QDnsLookup, typeChanged, arginfo_qt_network_qdnslookup_qdnslookup_typechanged, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QDnsLookup_QDnsLookup, nameserverChanged, arginfo_qt_network_qdnslookup_qdnslookup_nameserverchanged, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QDnsLookup_QDnsLookup, nameserverPortChanged, arginfo_qt_network_qdnslookup_qdnslookup_nameserverportchanged, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QDnsLookup_QDnsLookup, nameserverProtocolChanged, arginfo_qt_network_qdnslookup_qdnslookup_nameserverprotocolchanged, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
