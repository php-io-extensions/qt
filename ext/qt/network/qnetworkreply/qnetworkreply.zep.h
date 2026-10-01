
extern zend_class_entry *qt_network_qnetworkreply_qnetworkreply_ce;

ZEPHIR_INIT_CLASS(Qt_Network_QNetworkReply_QNetworkReply);

PHP_METHOD(Qt_Network_QNetworkReply_QNetworkReply, staticMetaObject);
PHP_METHOD(Qt_Network_QNetworkReply_QNetworkReply, tr);
PHP_METHOD(Qt_Network_QNetworkReply_QNetworkReply, close);
PHP_METHOD(Qt_Network_QNetworkReply_QNetworkReply, isSequential);
PHP_METHOD(Qt_Network_QNetworkReply_QNetworkReply, readBufferSize);
PHP_METHOD(Qt_Network_QNetworkReply_QNetworkReply, setReadBufferSize);
PHP_METHOD(Qt_Network_QNetworkReply_QNetworkReply, manager);
PHP_METHOD(Qt_Network_QNetworkReply_QNetworkReply, operation);
PHP_METHOD(Qt_Network_QNetworkReply_QNetworkReply, request);
PHP_METHOD(Qt_Network_QNetworkReply_QNetworkReply, error);
PHP_METHOD(Qt_Network_QNetworkReply_QNetworkReply, isFinished);
PHP_METHOD(Qt_Network_QNetworkReply_QNetworkReply, isRunning);
PHP_METHOD(Qt_Network_QNetworkReply_QNetworkReply, url);
PHP_METHOD(Qt_Network_QNetworkReply_QNetworkReply, header);
PHP_METHOD(Qt_Network_QNetworkReply_QNetworkReply, hasRawHeader);
PHP_METHOD(Qt_Network_QNetworkReply_QNetworkReply, rawHeaderList);
PHP_METHOD(Qt_Network_QNetworkReply_QNetworkReply, rawHeader);
PHP_METHOD(Qt_Network_QNetworkReply_QNetworkReply, rawHeaderPairs);
PHP_METHOD(Qt_Network_QNetworkReply_QNetworkReply, headers);
PHP_METHOD(Qt_Network_QNetworkReply_QNetworkReply, attribute);
PHP_METHOD(Qt_Network_QNetworkReply_QNetworkReply, sslConfiguration);
PHP_METHOD(Qt_Network_QNetworkReply_QNetworkReply, setSslConfiguration);
PHP_METHOD(Qt_Network_QNetworkReply_QNetworkReply, ignoreSslErrors);
PHP_METHOD(Qt_Network_QNetworkReply_QNetworkReply, abort);
PHP_METHOD(Qt_Network_QNetworkReply_QNetworkReply, ignoreSslErrors2);
PHP_METHOD(Qt_Network_QNetworkReply_QNetworkReply, socketStartedConnecting);
PHP_METHOD(Qt_Network_QNetworkReply_QNetworkReply, requestSent);
PHP_METHOD(Qt_Network_QNetworkReply_QNetworkReply, metaDataChanged);
PHP_METHOD(Qt_Network_QNetworkReply_QNetworkReply, finished);
PHP_METHOD(Qt_Network_QNetworkReply_QNetworkReply, errorOccurred);
PHP_METHOD(Qt_Network_QNetworkReply_QNetworkReply, encrypted);
PHP_METHOD(Qt_Network_QNetworkReply_QNetworkReply, sslErrors);
PHP_METHOD(Qt_Network_QNetworkReply_QNetworkReply, preSharedKeyAuthenticationRequired);
PHP_METHOD(Qt_Network_QNetworkReply_QNetworkReply, redirected);
PHP_METHOD(Qt_Network_QNetworkReply_QNetworkReply, redirectAllowed);
PHP_METHOD(Qt_Network_QNetworkReply_QNetworkReply, uploadProgress);
PHP_METHOD(Qt_Network_QNetworkReply_QNetworkReply, downloadProgress);
PHP_METHOD(Qt_Network_QNetworkReply_QNetworkReply, new_);
PHP_METHOD(Qt_Network_QNetworkReply_QNetworkReply, writeData);
PHP_METHOD(Qt_Network_QNetworkReply_QNetworkReply, setOperation);
PHP_METHOD(Qt_Network_QNetworkReply_QNetworkReply, setRequest);
PHP_METHOD(Qt_Network_QNetworkReply_QNetworkReply, setError);
PHP_METHOD(Qt_Network_QNetworkReply_QNetworkReply, setFinished);
PHP_METHOD(Qt_Network_QNetworkReply_QNetworkReply, setUrl);
PHP_METHOD(Qt_Network_QNetworkReply_QNetworkReply, setHeader);
PHP_METHOD(Qt_Network_QNetworkReply_QNetworkReply, setRawHeader);
PHP_METHOD(Qt_Network_QNetworkReply_QNetworkReply, setHeaders);
PHP_METHOD(Qt_Network_QNetworkReply_QNetworkReply, setWellKnownHeader);
PHP_METHOD(Qt_Network_QNetworkReply_QNetworkReply, setAttribute);
PHP_METHOD(Qt_Network_QNetworkReply_QNetworkReply, sslConfigurationImplementation);
PHP_METHOD(Qt_Network_QNetworkReply_QNetworkReply, setSslConfigurationImplementation);
PHP_METHOD(Qt_Network_QNetworkReply_QNetworkReply, ignoreSslErrorsImplementation);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qnetworkreply_qnetworkreply_staticmetaobject, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qnetworkreply_qnetworkreply_tr, 0, 1, IS_STRING, 0)
	ZEND_ARG_INFO(0, s)
	ZEND_ARG_INFO(0, c)
	ZEND_ARG_TYPE_INFO(0, n, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qnetworkreply_qnetworkreply_close, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qnetworkreply_qnetworkreply_issequential, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qnetworkreply_qnetworkreply_readbuffersize, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qnetworkreply_qnetworkreply_setreadbuffersize, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, size, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qnetworkreply_qnetworkreply_manager, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qnetworkreply_qnetworkreply_operation, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qnetworkreply_qnetworkreply_request, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qnetworkreply_qnetworkreply_error, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qnetworkreply_qnetworkreply_isfinished, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qnetworkreply_qnetworkreply_isrunning, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qnetworkreply_qnetworkreply_url, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_qt_network_qnetworkreply_qnetworkreply_header, 0, 0, 2)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, header, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qnetworkreply_qnetworkreply_hasrawheader, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, headerName, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qnetworkreply_qnetworkreply_rawheaderlist, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qnetworkreply_qnetworkreply_rawheader, 0, 2, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, headerName, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qnetworkreply_qnetworkreply_rawheaderpairs, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qnetworkreply_qnetworkreply_headers, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_qt_network_qnetworkreply_qnetworkreply_attribute, 0, 0, 2)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, code, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qnetworkreply_qnetworkreply_sslconfiguration, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qnetworkreply_qnetworkreply_setsslconfiguration, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, configuration, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qnetworkreply_qnetworkreply_ignoresslerrors, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_ARRAY_INFO(0, errors, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qnetworkreply_qnetworkreply_abort, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qnetworkreply_qnetworkreply_ignoresslerrors2, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qnetworkreply_qnetworkreply_socketstartedconnecting, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qnetworkreply_qnetworkreply_requestsent, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qnetworkreply_qnetworkreply_metadatachanged, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qnetworkreply_qnetworkreply_finished, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qnetworkreply_qnetworkreply_erroroccurred, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qnetworkreply_qnetworkreply_encrypted, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qnetworkreply_qnetworkreply_sslerrors, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_ARRAY_INFO(0, errors, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qnetworkreply_qnetworkreply_presharedkeyauthenticationrequired, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, authenticator, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qnetworkreply_qnetworkreply_redirected, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, url, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qnetworkreply_qnetworkreply_redirectallowed, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qnetworkreply_qnetworkreply_uploadprogress, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, bytesSent, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, bytesTotal, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qnetworkreply_qnetworkreply_downloadprogress, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, bytesReceived, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, bytesTotal, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qnetworkreply_qnetworkreply_new_, 0, 0, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qnetworkreply_qnetworkreply_writedata, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_INFO(0, data)
	ZEND_ARG_TYPE_INFO(0, len, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qnetworkreply_qnetworkreply_setoperation, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, operation, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qnetworkreply_qnetworkreply_setrequest, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, request, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qnetworkreply_qnetworkreply_seterror, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, errorCode, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, errorString, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qnetworkreply_qnetworkreply_setfinished, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qnetworkreply_qnetworkreply_seturl, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, url, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qnetworkreply_qnetworkreply_setheader, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, header, IS_LONG, 0)
	ZEND_ARG_INFO(0, value)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qnetworkreply_qnetworkreply_setrawheader, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, headerName, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qnetworkreply_qnetworkreply_setheaders, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, newHeaders, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qnetworkreply_qnetworkreply_setwellknownheader, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, name, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qnetworkreply_qnetworkreply_setattribute, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, code, IS_LONG, 0)
	ZEND_ARG_INFO(0, value)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qnetworkreply_qnetworkreply_sslconfigurationimplementation, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qnetworkreply_qnetworkreply_setsslconfigurationimplementation, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qnetworkreply_qnetworkreply_ignoresslerrorsimplementation, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_ARRAY_INFO(0, arg0, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_network_qnetworkreply_qnetworkreply_method_entry) {
	PHP_ME(Qt_Network_QNetworkReply_QNetworkReply, staticMetaObject, arginfo_qt_network_qnetworkreply_qnetworkreply_staticmetaobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QNetworkReply_QNetworkReply, tr, arginfo_qt_network_qnetworkreply_qnetworkreply_tr, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QNetworkReply_QNetworkReply, close, arginfo_qt_network_qnetworkreply_qnetworkreply_close, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QNetworkReply_QNetworkReply, isSequential, arginfo_qt_network_qnetworkreply_qnetworkreply_issequential, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QNetworkReply_QNetworkReply, readBufferSize, arginfo_qt_network_qnetworkreply_qnetworkreply_readbuffersize, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QNetworkReply_QNetworkReply, setReadBufferSize, arginfo_qt_network_qnetworkreply_qnetworkreply_setreadbuffersize, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QNetworkReply_QNetworkReply, manager, arginfo_qt_network_qnetworkreply_qnetworkreply_manager, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QNetworkReply_QNetworkReply, operation, arginfo_qt_network_qnetworkreply_qnetworkreply_operation, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QNetworkReply_QNetworkReply, request, arginfo_qt_network_qnetworkreply_qnetworkreply_request, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QNetworkReply_QNetworkReply, error, arginfo_qt_network_qnetworkreply_qnetworkreply_error, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QNetworkReply_QNetworkReply, isFinished, arginfo_qt_network_qnetworkreply_qnetworkreply_isfinished, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QNetworkReply_QNetworkReply, isRunning, arginfo_qt_network_qnetworkreply_qnetworkreply_isrunning, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QNetworkReply_QNetworkReply, url, arginfo_qt_network_qnetworkreply_qnetworkreply_url, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QNetworkReply_QNetworkReply, header, arginfo_qt_network_qnetworkreply_qnetworkreply_header, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QNetworkReply_QNetworkReply, hasRawHeader, arginfo_qt_network_qnetworkreply_qnetworkreply_hasrawheader, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QNetworkReply_QNetworkReply, rawHeaderList, arginfo_qt_network_qnetworkreply_qnetworkreply_rawheaderlist, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QNetworkReply_QNetworkReply, rawHeader, arginfo_qt_network_qnetworkreply_qnetworkreply_rawheader, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QNetworkReply_QNetworkReply, rawHeaderPairs, arginfo_qt_network_qnetworkreply_qnetworkreply_rawheaderpairs, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QNetworkReply_QNetworkReply, headers, arginfo_qt_network_qnetworkreply_qnetworkreply_headers, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QNetworkReply_QNetworkReply, attribute, arginfo_qt_network_qnetworkreply_qnetworkreply_attribute, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QNetworkReply_QNetworkReply, sslConfiguration, arginfo_qt_network_qnetworkreply_qnetworkreply_sslconfiguration, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QNetworkReply_QNetworkReply, setSslConfiguration, arginfo_qt_network_qnetworkreply_qnetworkreply_setsslconfiguration, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QNetworkReply_QNetworkReply, ignoreSslErrors, arginfo_qt_network_qnetworkreply_qnetworkreply_ignoresslerrors, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QNetworkReply_QNetworkReply, abort, arginfo_qt_network_qnetworkreply_qnetworkreply_abort, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QNetworkReply_QNetworkReply, ignoreSslErrors2, arginfo_qt_network_qnetworkreply_qnetworkreply_ignoresslerrors2, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QNetworkReply_QNetworkReply, socketStartedConnecting, arginfo_qt_network_qnetworkreply_qnetworkreply_socketstartedconnecting, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QNetworkReply_QNetworkReply, requestSent, arginfo_qt_network_qnetworkreply_qnetworkreply_requestsent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QNetworkReply_QNetworkReply, metaDataChanged, arginfo_qt_network_qnetworkreply_qnetworkreply_metadatachanged, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QNetworkReply_QNetworkReply, finished, arginfo_qt_network_qnetworkreply_qnetworkreply_finished, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QNetworkReply_QNetworkReply, errorOccurred, arginfo_qt_network_qnetworkreply_qnetworkreply_erroroccurred, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QNetworkReply_QNetworkReply, encrypted, arginfo_qt_network_qnetworkreply_qnetworkreply_encrypted, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QNetworkReply_QNetworkReply, sslErrors, arginfo_qt_network_qnetworkreply_qnetworkreply_sslerrors, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QNetworkReply_QNetworkReply, preSharedKeyAuthenticationRequired, arginfo_qt_network_qnetworkreply_qnetworkreply_presharedkeyauthenticationrequired, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QNetworkReply_QNetworkReply, redirected, arginfo_qt_network_qnetworkreply_qnetworkreply_redirected, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QNetworkReply_QNetworkReply, redirectAllowed, arginfo_qt_network_qnetworkreply_qnetworkreply_redirectallowed, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QNetworkReply_QNetworkReply, uploadProgress, arginfo_qt_network_qnetworkreply_qnetworkreply_uploadprogress, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QNetworkReply_QNetworkReply, downloadProgress, arginfo_qt_network_qnetworkreply_qnetworkreply_downloadprogress, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QNetworkReply_QNetworkReply, new_, arginfo_qt_network_qnetworkreply_qnetworkreply_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QNetworkReply_QNetworkReply, writeData, arginfo_qt_network_qnetworkreply_qnetworkreply_writedata, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QNetworkReply_QNetworkReply, setOperation, arginfo_qt_network_qnetworkreply_qnetworkreply_setoperation, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QNetworkReply_QNetworkReply, setRequest, arginfo_qt_network_qnetworkreply_qnetworkreply_setrequest, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QNetworkReply_QNetworkReply, setError, arginfo_qt_network_qnetworkreply_qnetworkreply_seterror, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QNetworkReply_QNetworkReply, setFinished, arginfo_qt_network_qnetworkreply_qnetworkreply_setfinished, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QNetworkReply_QNetworkReply, setUrl, arginfo_qt_network_qnetworkreply_qnetworkreply_seturl, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QNetworkReply_QNetworkReply, setHeader, arginfo_qt_network_qnetworkreply_qnetworkreply_setheader, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QNetworkReply_QNetworkReply, setRawHeader, arginfo_qt_network_qnetworkreply_qnetworkreply_setrawheader, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QNetworkReply_QNetworkReply, setHeaders, arginfo_qt_network_qnetworkreply_qnetworkreply_setheaders, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QNetworkReply_QNetworkReply, setWellKnownHeader, arginfo_qt_network_qnetworkreply_qnetworkreply_setwellknownheader, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QNetworkReply_QNetworkReply, setAttribute, arginfo_qt_network_qnetworkreply_qnetworkreply_setattribute, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QNetworkReply_QNetworkReply, sslConfigurationImplementation, arginfo_qt_network_qnetworkreply_qnetworkreply_sslconfigurationimplementation, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QNetworkReply_QNetworkReply, setSslConfigurationImplementation, arginfo_qt_network_qnetworkreply_qnetworkreply_setsslconfigurationimplementation, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QNetworkReply_QNetworkReply, ignoreSslErrorsImplementation, arginfo_qt_network_qnetworkreply_qnetworkreply_ignoresslerrorsimplementation, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
