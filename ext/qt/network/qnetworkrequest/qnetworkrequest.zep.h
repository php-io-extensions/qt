
extern zend_class_entry *qt_network_qnetworkrequest_qnetworkrequest_ce;

ZEPHIR_INIT_CLASS(Qt_Network_QNetworkRequest_QNetworkRequest);

PHP_METHOD(Qt_Network_QNetworkRequest_QNetworkRequest, staticMetaObject);
PHP_METHOD(Qt_Network_QNetworkRequest_QNetworkRequest, qt_check_for_QGADGET_macro);
PHP_METHOD(Qt_Network_QNetworkRequest_QNetworkRequest, new_);
PHP_METHOD(Qt_Network_QNetworkRequest_QNetworkRequest, newQUrl);
PHP_METHOD(Qt_Network_QNetworkRequest_QNetworkRequest, newQNetworkRequest);
PHP_METHOD(Qt_Network_QNetworkRequest_QNetworkRequest, swap);
PHP_METHOD(Qt_Network_QNetworkRequest_QNetworkRequest, url);
PHP_METHOD(Qt_Network_QNetworkRequest_QNetworkRequest, setUrl);
PHP_METHOD(Qt_Network_QNetworkRequest_QNetworkRequest, headers);
PHP_METHOD(Qt_Network_QNetworkRequest_QNetworkRequest, setHeaders);
PHP_METHOD(Qt_Network_QNetworkRequest_QNetworkRequest, header);
PHP_METHOD(Qt_Network_QNetworkRequest_QNetworkRequest, setHeader);
PHP_METHOD(Qt_Network_QNetworkRequest_QNetworkRequest, hasRawHeader);
PHP_METHOD(Qt_Network_QNetworkRequest_QNetworkRequest, rawHeaderList);
PHP_METHOD(Qt_Network_QNetworkRequest_QNetworkRequest, rawHeader);
PHP_METHOD(Qt_Network_QNetworkRequest_QNetworkRequest, setRawHeader);
PHP_METHOD(Qt_Network_QNetworkRequest_QNetworkRequest, attribute);
PHP_METHOD(Qt_Network_QNetworkRequest_QNetworkRequest, setAttribute);
PHP_METHOD(Qt_Network_QNetworkRequest_QNetworkRequest, sslConfiguration);
PHP_METHOD(Qt_Network_QNetworkRequest_QNetworkRequest, setSslConfiguration);
PHP_METHOD(Qt_Network_QNetworkRequest_QNetworkRequest, setOriginatingObject);
PHP_METHOD(Qt_Network_QNetworkRequest_QNetworkRequest, originatingObject);
PHP_METHOD(Qt_Network_QNetworkRequest_QNetworkRequest, priority);
PHP_METHOD(Qt_Network_QNetworkRequest_QNetworkRequest, setPriority);
PHP_METHOD(Qt_Network_QNetworkRequest_QNetworkRequest, maximumRedirectsAllowed);
PHP_METHOD(Qt_Network_QNetworkRequest_QNetworkRequest, setMaximumRedirectsAllowed);
PHP_METHOD(Qt_Network_QNetworkRequest_QNetworkRequest, peerVerifyName);
PHP_METHOD(Qt_Network_QNetworkRequest_QNetworkRequest, setPeerVerifyName);
PHP_METHOD(Qt_Network_QNetworkRequest_QNetworkRequest, http1Configuration);
PHP_METHOD(Qt_Network_QNetworkRequest_QNetworkRequest, setHttp1Configuration);
PHP_METHOD(Qt_Network_QNetworkRequest_QNetworkRequest, http2Configuration);
PHP_METHOD(Qt_Network_QNetworkRequest_QNetworkRequest, setHttp2Configuration);
PHP_METHOD(Qt_Network_QNetworkRequest_QNetworkRequest, decompressedSafetyCheckThreshold);
PHP_METHOD(Qt_Network_QNetworkRequest_QNetworkRequest, setDecompressedSafetyCheckThreshold);
PHP_METHOD(Qt_Network_QNetworkRequest_QNetworkRequest, transferTimeout);
PHP_METHOD(Qt_Network_QNetworkRequest_QNetworkRequest, setTransferTimeout);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qnetworkrequest_qnetworkrequest_staticmetaobject, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qnetworkrequest_qnetworkrequest_qt_check_for_qgadget_macro, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qnetworkrequest_qnetworkrequest_new_, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qnetworkrequest_qnetworkrequest_newqurl, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, url, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qnetworkrequest_qnetworkrequest_newqnetworkrequest, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, other, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qnetworkrequest_qnetworkrequest_swap, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, other, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qnetworkrequest_qnetworkrequest_url, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qnetworkrequest_qnetworkrequest_seturl, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, url, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qnetworkrequest_qnetworkrequest_headers, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qnetworkrequest_qnetworkrequest_setheaders, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, newHeaders, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_qt_network_qnetworkrequest_qnetworkrequest_header, 0, 0, 2)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, header, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qnetworkrequest_qnetworkrequest_setheader, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, header, IS_LONG, 0)
	ZEND_ARG_INFO(0, value)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qnetworkrequest_qnetworkrequest_hasrawheader, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, headerName, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qnetworkrequest_qnetworkrequest_rawheaderlist, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qnetworkrequest_qnetworkrequest_rawheader, 0, 2, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, headerName, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qnetworkrequest_qnetworkrequest_setrawheader, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, headerName, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_qt_network_qnetworkrequest_qnetworkrequest_attribute, 0, 0, 2)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, code, IS_LONG, 0)
	ZEND_ARG_INFO(0, defaultValue)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qnetworkrequest_qnetworkrequest_setattribute, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, code, IS_LONG, 0)
	ZEND_ARG_INFO(0, value)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qnetworkrequest_qnetworkrequest_sslconfiguration, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qnetworkrequest_qnetworkrequest_setsslconfiguration, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, configuration, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qnetworkrequest_qnetworkrequest_setoriginatingobject, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, object_, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qnetworkrequest_qnetworkrequest_originatingobject, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qnetworkrequest_qnetworkrequest_priority, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qnetworkrequest_qnetworkrequest_setpriority, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, priority, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qnetworkrequest_qnetworkrequest_maximumredirectsallowed, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qnetworkrequest_qnetworkrequest_setmaximumredirectsallowed, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, maximumRedirectsAllowed, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qnetworkrequest_qnetworkrequest_peerverifyname, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qnetworkrequest_qnetworkrequest_setpeerverifyname, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, peerName, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qnetworkrequest_qnetworkrequest_http1configuration, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qnetworkrequest_qnetworkrequest_sethttp1configuration, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, configuration, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qnetworkrequest_qnetworkrequest_http2configuration, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qnetworkrequest_qnetworkrequest_sethttp2configuration, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, configuration, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qnetworkrequest_qnetworkrequest_decompressedsafetycheckthreshold, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qnetworkrequest_qnetworkrequest_setdecompressedsafetycheckthreshold, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, threshold, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qnetworkrequest_qnetworkrequest_transfertimeout, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qnetworkrequest_qnetworkrequest_settransfertimeout, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, timeout, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_network_qnetworkrequest_qnetworkrequest_method_entry) {
	PHP_ME(Qt_Network_QNetworkRequest_QNetworkRequest, staticMetaObject, arginfo_qt_network_qnetworkrequest_qnetworkrequest_staticmetaobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QNetworkRequest_QNetworkRequest, qt_check_for_QGADGET_macro, arginfo_qt_network_qnetworkrequest_qnetworkrequest_qt_check_for_qgadget_macro, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QNetworkRequest_QNetworkRequest, new_, arginfo_qt_network_qnetworkrequest_qnetworkrequest_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QNetworkRequest_QNetworkRequest, newQUrl, arginfo_qt_network_qnetworkrequest_qnetworkrequest_newqurl, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QNetworkRequest_QNetworkRequest, newQNetworkRequest, arginfo_qt_network_qnetworkrequest_qnetworkrequest_newqnetworkrequest, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QNetworkRequest_QNetworkRequest, swap, arginfo_qt_network_qnetworkrequest_qnetworkrequest_swap, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QNetworkRequest_QNetworkRequest, url, arginfo_qt_network_qnetworkrequest_qnetworkrequest_url, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QNetworkRequest_QNetworkRequest, setUrl, arginfo_qt_network_qnetworkrequest_qnetworkrequest_seturl, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QNetworkRequest_QNetworkRequest, headers, arginfo_qt_network_qnetworkrequest_qnetworkrequest_headers, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QNetworkRequest_QNetworkRequest, setHeaders, arginfo_qt_network_qnetworkrequest_qnetworkrequest_setheaders, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QNetworkRequest_QNetworkRequest, header, arginfo_qt_network_qnetworkrequest_qnetworkrequest_header, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QNetworkRequest_QNetworkRequest, setHeader, arginfo_qt_network_qnetworkrequest_qnetworkrequest_setheader, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QNetworkRequest_QNetworkRequest, hasRawHeader, arginfo_qt_network_qnetworkrequest_qnetworkrequest_hasrawheader, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QNetworkRequest_QNetworkRequest, rawHeaderList, arginfo_qt_network_qnetworkrequest_qnetworkrequest_rawheaderlist, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QNetworkRequest_QNetworkRequest, rawHeader, arginfo_qt_network_qnetworkrequest_qnetworkrequest_rawheader, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QNetworkRequest_QNetworkRequest, setRawHeader, arginfo_qt_network_qnetworkrequest_qnetworkrequest_setrawheader, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QNetworkRequest_QNetworkRequest, attribute, arginfo_qt_network_qnetworkrequest_qnetworkrequest_attribute, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QNetworkRequest_QNetworkRequest, setAttribute, arginfo_qt_network_qnetworkrequest_qnetworkrequest_setattribute, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QNetworkRequest_QNetworkRequest, sslConfiguration, arginfo_qt_network_qnetworkrequest_qnetworkrequest_sslconfiguration, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QNetworkRequest_QNetworkRequest, setSslConfiguration, arginfo_qt_network_qnetworkrequest_qnetworkrequest_setsslconfiguration, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QNetworkRequest_QNetworkRequest, setOriginatingObject, arginfo_qt_network_qnetworkrequest_qnetworkrequest_setoriginatingobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QNetworkRequest_QNetworkRequest, originatingObject, arginfo_qt_network_qnetworkrequest_qnetworkrequest_originatingobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QNetworkRequest_QNetworkRequest, priority, arginfo_qt_network_qnetworkrequest_qnetworkrequest_priority, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QNetworkRequest_QNetworkRequest, setPriority, arginfo_qt_network_qnetworkrequest_qnetworkrequest_setpriority, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QNetworkRequest_QNetworkRequest, maximumRedirectsAllowed, arginfo_qt_network_qnetworkrequest_qnetworkrequest_maximumredirectsallowed, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QNetworkRequest_QNetworkRequest, setMaximumRedirectsAllowed, arginfo_qt_network_qnetworkrequest_qnetworkrequest_setmaximumredirectsallowed, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QNetworkRequest_QNetworkRequest, peerVerifyName, arginfo_qt_network_qnetworkrequest_qnetworkrequest_peerverifyname, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QNetworkRequest_QNetworkRequest, setPeerVerifyName, arginfo_qt_network_qnetworkrequest_qnetworkrequest_setpeerverifyname, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QNetworkRequest_QNetworkRequest, http1Configuration, arginfo_qt_network_qnetworkrequest_qnetworkrequest_http1configuration, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QNetworkRequest_QNetworkRequest, setHttp1Configuration, arginfo_qt_network_qnetworkrequest_qnetworkrequest_sethttp1configuration, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QNetworkRequest_QNetworkRequest, http2Configuration, arginfo_qt_network_qnetworkrequest_qnetworkrequest_http2configuration, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QNetworkRequest_QNetworkRequest, setHttp2Configuration, arginfo_qt_network_qnetworkrequest_qnetworkrequest_sethttp2configuration, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QNetworkRequest_QNetworkRequest, decompressedSafetyCheckThreshold, arginfo_qt_network_qnetworkrequest_qnetworkrequest_decompressedsafetycheckthreshold, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QNetworkRequest_QNetworkRequest, setDecompressedSafetyCheckThreshold, arginfo_qt_network_qnetworkrequest_qnetworkrequest_setdecompressedsafetycheckthreshold, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QNetworkRequest_QNetworkRequest, transferTimeout, arginfo_qt_network_qnetworkrequest_qnetworkrequest_transfertimeout, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QNetworkRequest_QNetworkRequest, setTransferTimeout, arginfo_qt_network_qnetworkrequest_qnetworkrequest_settransfertimeout, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
