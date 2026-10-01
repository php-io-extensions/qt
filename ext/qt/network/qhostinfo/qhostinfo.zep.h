
extern zend_class_entry *qt_network_qhostinfo_qhostinfo_ce;

ZEPHIR_INIT_CLASS(Qt_Network_QHostInfo_QHostInfo);

PHP_METHOD(Qt_Network_QHostInfo_QHostInfo, staticMetaObject);
PHP_METHOD(Qt_Network_QHostInfo_QHostInfo, qt_check_for_QGADGET_macro);
PHP_METHOD(Qt_Network_QHostInfo_QHostInfo, new_);
PHP_METHOD(Qt_Network_QHostInfo_QHostInfo, newQHostInfo);
PHP_METHOD(Qt_Network_QHostInfo_QHostInfo, swap);
PHP_METHOD(Qt_Network_QHostInfo_QHostInfo, hostName);
PHP_METHOD(Qt_Network_QHostInfo_QHostInfo, setHostName);
PHP_METHOD(Qt_Network_QHostInfo_QHostInfo, addresses);
PHP_METHOD(Qt_Network_QHostInfo_QHostInfo, setAddresses);
PHP_METHOD(Qt_Network_QHostInfo_QHostInfo, error);
PHP_METHOD(Qt_Network_QHostInfo_QHostInfo, setError);
PHP_METHOD(Qt_Network_QHostInfo_QHostInfo, errorString);
PHP_METHOD(Qt_Network_QHostInfo_QHostInfo, setErrorString);
PHP_METHOD(Qt_Network_QHostInfo_QHostInfo, setLookupId);
PHP_METHOD(Qt_Network_QHostInfo_QHostInfo, lookupId);
PHP_METHOD(Qt_Network_QHostInfo_QHostInfo, lookupHost);
PHP_METHOD(Qt_Network_QHostInfo_QHostInfo, abortHostLookup);
PHP_METHOD(Qt_Network_QHostInfo_QHostInfo, fromName);
PHP_METHOD(Qt_Network_QHostInfo_QHostInfo, localHostName);
PHP_METHOD(Qt_Network_QHostInfo_QHostInfo, localDomainName);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qhostinfo_qhostinfo_staticmetaobject, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qhostinfo_qhostinfo_qt_check_for_qgadget_macro, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qhostinfo_qhostinfo_new_, 0, 0, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, lookupId, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qhostinfo_qhostinfo_newqhostinfo, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, d, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qhostinfo_qhostinfo_swap, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, other, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qhostinfo_qhostinfo_hostname, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qhostinfo_qhostinfo_sethostname, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, name, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qhostinfo_qhostinfo_addresses, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qhostinfo_qhostinfo_setaddresses, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_ARRAY_INFO(0, addresses, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qhostinfo_qhostinfo_error, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qhostinfo_qhostinfo_seterror, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, error, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qhostinfo_qhostinfo_errorstring, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qhostinfo_qhostinfo_seterrorstring, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, errorString, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qhostinfo_qhostinfo_setlookupid, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, id, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qhostinfo_qhostinfo_lookupid, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qhostinfo_qhostinfo_lookuphost, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, name, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, receiver, IS_LONG, 0)
	ZEND_ARG_INFO(0, member)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qhostinfo_qhostinfo_aborthostlookup, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, lookupId, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qhostinfo_qhostinfo_fromname, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, name, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qhostinfo_qhostinfo_localhostname, 0, 0, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qhostinfo_qhostinfo_localdomainname, 0, 0, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_network_qhostinfo_qhostinfo_method_entry) {
	PHP_ME(Qt_Network_QHostInfo_QHostInfo, staticMetaObject, arginfo_qt_network_qhostinfo_qhostinfo_staticmetaobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QHostInfo_QHostInfo, qt_check_for_QGADGET_macro, arginfo_qt_network_qhostinfo_qhostinfo_qt_check_for_qgadget_macro, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QHostInfo_QHostInfo, new_, arginfo_qt_network_qhostinfo_qhostinfo_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QHostInfo_QHostInfo, newQHostInfo, arginfo_qt_network_qhostinfo_qhostinfo_newqhostinfo, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QHostInfo_QHostInfo, swap, arginfo_qt_network_qhostinfo_qhostinfo_swap, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QHostInfo_QHostInfo, hostName, arginfo_qt_network_qhostinfo_qhostinfo_hostname, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QHostInfo_QHostInfo, setHostName, arginfo_qt_network_qhostinfo_qhostinfo_sethostname, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QHostInfo_QHostInfo, addresses, arginfo_qt_network_qhostinfo_qhostinfo_addresses, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QHostInfo_QHostInfo, setAddresses, arginfo_qt_network_qhostinfo_qhostinfo_setaddresses, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QHostInfo_QHostInfo, error, arginfo_qt_network_qhostinfo_qhostinfo_error, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QHostInfo_QHostInfo, setError, arginfo_qt_network_qhostinfo_qhostinfo_seterror, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QHostInfo_QHostInfo, errorString, arginfo_qt_network_qhostinfo_qhostinfo_errorstring, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QHostInfo_QHostInfo, setErrorString, arginfo_qt_network_qhostinfo_qhostinfo_seterrorstring, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QHostInfo_QHostInfo, setLookupId, arginfo_qt_network_qhostinfo_qhostinfo_setlookupid, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QHostInfo_QHostInfo, lookupId, arginfo_qt_network_qhostinfo_qhostinfo_lookupid, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QHostInfo_QHostInfo, lookupHost, arginfo_qt_network_qhostinfo_qhostinfo_lookuphost, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QHostInfo_QHostInfo, abortHostLookup, arginfo_qt_network_qhostinfo_qhostinfo_aborthostlookup, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QHostInfo_QHostInfo, fromName, arginfo_qt_network_qhostinfo_qhostinfo_fromname, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QHostInfo_QHostInfo, localHostName, arginfo_qt_network_qhostinfo_qhostinfo_localhostname, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QHostInfo_QHostInfo, localDomainName, arginfo_qt_network_qhostinfo_qhostinfo_localdomainname, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
