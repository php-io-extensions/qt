
extern zend_class_entry *qt_network_qnetworkproxy_qnetworkproxy_ce;

ZEPHIR_INIT_CLASS(Qt_Network_QNetworkProxy_QNetworkProxy);

PHP_METHOD(Qt_Network_QNetworkProxy_QNetworkProxy, staticMetaObject);
PHP_METHOD(Qt_Network_QNetworkProxy_QNetworkProxy, qt_check_for_QGADGET_macro);
PHP_METHOD(Qt_Network_QNetworkProxy_QNetworkProxy, new_);
PHP_METHOD(Qt_Network_QNetworkProxy_QNetworkProxy, newQNetworkProxyProxyTypeQStringQuint16QStringQString);
PHP_METHOD(Qt_Network_QNetworkProxy_QNetworkProxy, newQNetworkProxy);
PHP_METHOD(Qt_Network_QNetworkProxy_QNetworkProxy, swap);
PHP_METHOD(Qt_Network_QNetworkProxy_QNetworkProxy, setType);
PHP_METHOD(Qt_Network_QNetworkProxy_QNetworkProxy, type);
PHP_METHOD(Qt_Network_QNetworkProxy_QNetworkProxy, setCapabilities);
PHP_METHOD(Qt_Network_QNetworkProxy_QNetworkProxy, capabilities);
PHP_METHOD(Qt_Network_QNetworkProxy_QNetworkProxy, isCachingProxy);
PHP_METHOD(Qt_Network_QNetworkProxy_QNetworkProxy, isTransparentProxy);
PHP_METHOD(Qt_Network_QNetworkProxy_QNetworkProxy, setUser);
PHP_METHOD(Qt_Network_QNetworkProxy_QNetworkProxy, user);
PHP_METHOD(Qt_Network_QNetworkProxy_QNetworkProxy, setPassword);
PHP_METHOD(Qt_Network_QNetworkProxy_QNetworkProxy, password);
PHP_METHOD(Qt_Network_QNetworkProxy_QNetworkProxy, setHostName);
PHP_METHOD(Qt_Network_QNetworkProxy_QNetworkProxy, hostName);
PHP_METHOD(Qt_Network_QNetworkProxy_QNetworkProxy, setPort);
PHP_METHOD(Qt_Network_QNetworkProxy_QNetworkProxy, port);
PHP_METHOD(Qt_Network_QNetworkProxy_QNetworkProxy, setApplicationProxy);
PHP_METHOD(Qt_Network_QNetworkProxy_QNetworkProxy, applicationProxy);
PHP_METHOD(Qt_Network_QNetworkProxy_QNetworkProxy, headers);
PHP_METHOD(Qt_Network_QNetworkProxy_QNetworkProxy, setHeaders);
PHP_METHOD(Qt_Network_QNetworkProxy_QNetworkProxy, header);
PHP_METHOD(Qt_Network_QNetworkProxy_QNetworkProxy, setHeader);
PHP_METHOD(Qt_Network_QNetworkProxy_QNetworkProxy, hasRawHeader);
PHP_METHOD(Qt_Network_QNetworkProxy_QNetworkProxy, rawHeaderList);
PHP_METHOD(Qt_Network_QNetworkProxy_QNetworkProxy, rawHeader);
PHP_METHOD(Qt_Network_QNetworkProxy_QNetworkProxy, setRawHeader);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qnetworkproxy_qnetworkproxy_staticmetaobject, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qnetworkproxy_qnetworkproxy_qt_check_for_qgadget_macro, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qnetworkproxy_qnetworkproxy_new_, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qnetworkproxy_qnetworkproxy_newqnetworkproxyproxytypeqstringquint16qstringqstring, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, type, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, hostName, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, port, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, user, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, password, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qnetworkproxy_qnetworkproxy_newqnetworkproxy, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, other, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qnetworkproxy_qnetworkproxy_swap, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, other, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qnetworkproxy_qnetworkproxy_settype, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, type, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qnetworkproxy_qnetworkproxy_type, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qnetworkproxy_qnetworkproxy_setcapabilities, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, capab, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qnetworkproxy_qnetworkproxy_capabilities, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qnetworkproxy_qnetworkproxy_iscachingproxy, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qnetworkproxy_qnetworkproxy_istransparentproxy, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qnetworkproxy_qnetworkproxy_setuser, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, userName, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qnetworkproxy_qnetworkproxy_user, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qnetworkproxy_qnetworkproxy_setpassword, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, password, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qnetworkproxy_qnetworkproxy_password, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qnetworkproxy_qnetworkproxy_sethostname, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, hostName, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qnetworkproxy_qnetworkproxy_hostname, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qnetworkproxy_qnetworkproxy_setport, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, port, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qnetworkproxy_qnetworkproxy_port, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qnetworkproxy_qnetworkproxy_setapplicationproxy, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, proxy, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qnetworkproxy_qnetworkproxy_applicationproxy, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qnetworkproxy_qnetworkproxy_headers, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qnetworkproxy_qnetworkproxy_setheaders, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, newHeaders, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_qt_network_qnetworkproxy_qnetworkproxy_header, 0, 0, 2)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, header, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qnetworkproxy_qnetworkproxy_setheader, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, header, IS_LONG, 0)
	ZEND_ARG_INFO(0, value)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qnetworkproxy_qnetworkproxy_hasrawheader, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, headerName, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qnetworkproxy_qnetworkproxy_rawheaderlist, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qnetworkproxy_qnetworkproxy_rawheader, 0, 2, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, headerName, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qnetworkproxy_qnetworkproxy_setrawheader, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, headerName, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_network_qnetworkproxy_qnetworkproxy_method_entry) {
	PHP_ME(Qt_Network_QNetworkProxy_QNetworkProxy, staticMetaObject, arginfo_qt_network_qnetworkproxy_qnetworkproxy_staticmetaobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QNetworkProxy_QNetworkProxy, qt_check_for_QGADGET_macro, arginfo_qt_network_qnetworkproxy_qnetworkproxy_qt_check_for_qgadget_macro, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QNetworkProxy_QNetworkProxy, new_, arginfo_qt_network_qnetworkproxy_qnetworkproxy_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QNetworkProxy_QNetworkProxy, newQNetworkProxyProxyTypeQStringQuint16QStringQString, arginfo_qt_network_qnetworkproxy_qnetworkproxy_newqnetworkproxyproxytypeqstringquint16qstringqstring, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QNetworkProxy_QNetworkProxy, newQNetworkProxy, arginfo_qt_network_qnetworkproxy_qnetworkproxy_newqnetworkproxy, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QNetworkProxy_QNetworkProxy, swap, arginfo_qt_network_qnetworkproxy_qnetworkproxy_swap, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QNetworkProxy_QNetworkProxy, setType, arginfo_qt_network_qnetworkproxy_qnetworkproxy_settype, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QNetworkProxy_QNetworkProxy, type, arginfo_qt_network_qnetworkproxy_qnetworkproxy_type, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QNetworkProxy_QNetworkProxy, setCapabilities, arginfo_qt_network_qnetworkproxy_qnetworkproxy_setcapabilities, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QNetworkProxy_QNetworkProxy, capabilities, arginfo_qt_network_qnetworkproxy_qnetworkproxy_capabilities, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QNetworkProxy_QNetworkProxy, isCachingProxy, arginfo_qt_network_qnetworkproxy_qnetworkproxy_iscachingproxy, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QNetworkProxy_QNetworkProxy, isTransparentProxy, arginfo_qt_network_qnetworkproxy_qnetworkproxy_istransparentproxy, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QNetworkProxy_QNetworkProxy, setUser, arginfo_qt_network_qnetworkproxy_qnetworkproxy_setuser, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QNetworkProxy_QNetworkProxy, user, arginfo_qt_network_qnetworkproxy_qnetworkproxy_user, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QNetworkProxy_QNetworkProxy, setPassword, arginfo_qt_network_qnetworkproxy_qnetworkproxy_setpassword, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QNetworkProxy_QNetworkProxy, password, arginfo_qt_network_qnetworkproxy_qnetworkproxy_password, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QNetworkProxy_QNetworkProxy, setHostName, arginfo_qt_network_qnetworkproxy_qnetworkproxy_sethostname, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QNetworkProxy_QNetworkProxy, hostName, arginfo_qt_network_qnetworkproxy_qnetworkproxy_hostname, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QNetworkProxy_QNetworkProxy, setPort, arginfo_qt_network_qnetworkproxy_qnetworkproxy_setport, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QNetworkProxy_QNetworkProxy, port, arginfo_qt_network_qnetworkproxy_qnetworkproxy_port, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QNetworkProxy_QNetworkProxy, setApplicationProxy, arginfo_qt_network_qnetworkproxy_qnetworkproxy_setapplicationproxy, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QNetworkProxy_QNetworkProxy, applicationProxy, arginfo_qt_network_qnetworkproxy_qnetworkproxy_applicationproxy, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QNetworkProxy_QNetworkProxy, headers, arginfo_qt_network_qnetworkproxy_qnetworkproxy_headers, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QNetworkProxy_QNetworkProxy, setHeaders, arginfo_qt_network_qnetworkproxy_qnetworkproxy_setheaders, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QNetworkProxy_QNetworkProxy, header, arginfo_qt_network_qnetworkproxy_qnetworkproxy_header, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QNetworkProxy_QNetworkProxy, setHeader, arginfo_qt_network_qnetworkproxy_qnetworkproxy_setheader, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QNetworkProxy_QNetworkProxy, hasRawHeader, arginfo_qt_network_qnetworkproxy_qnetworkproxy_hasrawheader, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QNetworkProxy_QNetworkProxy, rawHeaderList, arginfo_qt_network_qnetworkproxy_qnetworkproxy_rawheaderlist, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QNetworkProxy_QNetworkProxy, rawHeader, arginfo_qt_network_qnetworkproxy_qnetworkproxy_rawheader, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QNetworkProxy_QNetworkProxy, setRawHeader, arginfo_qt_network_qnetworkproxy_qnetworkproxy_setrawheader, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
