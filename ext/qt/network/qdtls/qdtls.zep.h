
extern zend_class_entry *qt_network_qdtls_qdtls_ce;

ZEPHIR_INIT_CLASS(Qt_Network_QDtls_QDtls);

PHP_METHOD(Qt_Network_QDtls_QDtls, staticMetaObject);
PHP_METHOD(Qt_Network_QDtls_QDtls, tr);
PHP_METHOD(Qt_Network_QDtls_QDtls, new_);
PHP_METHOD(Qt_Network_QDtls_QDtls, setPeer);
PHP_METHOD(Qt_Network_QDtls_QDtls, setPeerVerificationName);
PHP_METHOD(Qt_Network_QDtls_QDtls, peerAddress);
PHP_METHOD(Qt_Network_QDtls_QDtls, peerPort);
PHP_METHOD(Qt_Network_QDtls_QDtls, peerVerificationName);
PHP_METHOD(Qt_Network_QDtls_QDtls, sslMode);
PHP_METHOD(Qt_Network_QDtls_QDtls, setMtuHint);
PHP_METHOD(Qt_Network_QDtls_QDtls, mtuHint);
PHP_METHOD(Qt_Network_QDtls_QDtls, setCookieGeneratorParameters);
PHP_METHOD(Qt_Network_QDtls_QDtls, cookieGeneratorParameters);
PHP_METHOD(Qt_Network_QDtls_QDtls, setDtlsConfiguration);
PHP_METHOD(Qt_Network_QDtls_QDtls, dtlsConfiguration);
PHP_METHOD(Qt_Network_QDtls_QDtls, handshakeState);
PHP_METHOD(Qt_Network_QDtls_QDtls, doHandshake);
PHP_METHOD(Qt_Network_QDtls_QDtls, handleTimeout);
PHP_METHOD(Qt_Network_QDtls_QDtls, resumeHandshake);
PHP_METHOD(Qt_Network_QDtls_QDtls, abortHandshake);
PHP_METHOD(Qt_Network_QDtls_QDtls, shutdown);
PHP_METHOD(Qt_Network_QDtls_QDtls, isConnectionEncrypted);
PHP_METHOD(Qt_Network_QDtls_QDtls, sessionCipher);
PHP_METHOD(Qt_Network_QDtls_QDtls, sessionProtocol);
PHP_METHOD(Qt_Network_QDtls_QDtls, writeDatagramEncrypted);
PHP_METHOD(Qt_Network_QDtls_QDtls, decryptDatagram);
PHP_METHOD(Qt_Network_QDtls_QDtls, dtlsError);
PHP_METHOD(Qt_Network_QDtls_QDtls, dtlsErrorString);
PHP_METHOD(Qt_Network_QDtls_QDtls, peerVerificationErrors);
PHP_METHOD(Qt_Network_QDtls_QDtls, ignoreVerificationErrors);
PHP_METHOD(Qt_Network_QDtls_QDtls, pskRequired);
PHP_METHOD(Qt_Network_QDtls_QDtls, handshakeTimeout);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qdtls_qdtls_staticmetaobject, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qdtls_qdtls_tr, 0, 1, IS_STRING, 0)
	ZEND_ARG_INFO(0, s)
	ZEND_ARG_INFO(0, c)
	ZEND_ARG_TYPE_INFO(0, n, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qdtls_qdtls_new_, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, mode, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qdtls_qdtls_setpeer, 0, 3, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, address, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, port, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, verificationName, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qdtls_qdtls_setpeerverificationname, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, name, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qdtls_qdtls_peeraddress, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qdtls_qdtls_peerport, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qdtls_qdtls_peerverificationname, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qdtls_qdtls_sslmode, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qdtls_qdtls_setmtuhint, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, mtuHint, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qdtls_qdtls_mtuhint, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qdtls_qdtls_setcookiegeneratorparameters, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, params, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qdtls_qdtls_cookiegeneratorparameters, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qdtls_qdtls_setdtlsconfiguration, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, configuration, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qdtls_qdtls_dtlsconfiguration, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qdtls_qdtls_handshakestate, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qdtls_qdtls_dohandshake, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, socket, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, dgram, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qdtls_qdtls_handletimeout, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, socket, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qdtls_qdtls_resumehandshake, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, socket, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qdtls_qdtls_aborthandshake, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, socket, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qdtls_qdtls_shutdown, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, socket, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qdtls_qdtls_isconnectionencrypted, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qdtls_qdtls_sessioncipher, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qdtls_qdtls_sessionprotocol, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qdtls_qdtls_writedatagramencrypted, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, socket, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, dgram, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qdtls_qdtls_decryptdatagram, 0, 3, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, socket, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, dgram, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qdtls_qdtls_dtlserror, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qdtls_qdtls_dtlserrorstring, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qdtls_qdtls_peerverificationerrors, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qdtls_qdtls_ignoreverificationerrors, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_ARRAY_INFO(0, errorsToIgnore, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qdtls_qdtls_pskrequired, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, authenticator, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qdtls_qdtls_handshaketimeout, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_network_qdtls_qdtls_method_entry) {
	PHP_ME(Qt_Network_QDtls_QDtls, staticMetaObject, arginfo_qt_network_qdtls_qdtls_staticmetaobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QDtls_QDtls, tr, arginfo_qt_network_qdtls_qdtls_tr, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QDtls_QDtls, new_, arginfo_qt_network_qdtls_qdtls_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QDtls_QDtls, setPeer, arginfo_qt_network_qdtls_qdtls_setpeer, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QDtls_QDtls, setPeerVerificationName, arginfo_qt_network_qdtls_qdtls_setpeerverificationname, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QDtls_QDtls, peerAddress, arginfo_qt_network_qdtls_qdtls_peeraddress, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QDtls_QDtls, peerPort, arginfo_qt_network_qdtls_qdtls_peerport, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QDtls_QDtls, peerVerificationName, arginfo_qt_network_qdtls_qdtls_peerverificationname, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QDtls_QDtls, sslMode, arginfo_qt_network_qdtls_qdtls_sslmode, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QDtls_QDtls, setMtuHint, arginfo_qt_network_qdtls_qdtls_setmtuhint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QDtls_QDtls, mtuHint, arginfo_qt_network_qdtls_qdtls_mtuhint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QDtls_QDtls, setCookieGeneratorParameters, arginfo_qt_network_qdtls_qdtls_setcookiegeneratorparameters, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QDtls_QDtls, cookieGeneratorParameters, arginfo_qt_network_qdtls_qdtls_cookiegeneratorparameters, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QDtls_QDtls, setDtlsConfiguration, arginfo_qt_network_qdtls_qdtls_setdtlsconfiguration, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QDtls_QDtls, dtlsConfiguration, arginfo_qt_network_qdtls_qdtls_dtlsconfiguration, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QDtls_QDtls, handshakeState, arginfo_qt_network_qdtls_qdtls_handshakestate, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QDtls_QDtls, doHandshake, arginfo_qt_network_qdtls_qdtls_dohandshake, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QDtls_QDtls, handleTimeout, arginfo_qt_network_qdtls_qdtls_handletimeout, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QDtls_QDtls, resumeHandshake, arginfo_qt_network_qdtls_qdtls_resumehandshake, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QDtls_QDtls, abortHandshake, arginfo_qt_network_qdtls_qdtls_aborthandshake, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QDtls_QDtls, shutdown, arginfo_qt_network_qdtls_qdtls_shutdown, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QDtls_QDtls, isConnectionEncrypted, arginfo_qt_network_qdtls_qdtls_isconnectionencrypted, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QDtls_QDtls, sessionCipher, arginfo_qt_network_qdtls_qdtls_sessioncipher, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QDtls_QDtls, sessionProtocol, arginfo_qt_network_qdtls_qdtls_sessionprotocol, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QDtls_QDtls, writeDatagramEncrypted, arginfo_qt_network_qdtls_qdtls_writedatagramencrypted, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QDtls_QDtls, decryptDatagram, arginfo_qt_network_qdtls_qdtls_decryptdatagram, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QDtls_QDtls, dtlsError, arginfo_qt_network_qdtls_qdtls_dtlserror, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QDtls_QDtls, dtlsErrorString, arginfo_qt_network_qdtls_qdtls_dtlserrorstring, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QDtls_QDtls, peerVerificationErrors, arginfo_qt_network_qdtls_qdtls_peerverificationerrors, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QDtls_QDtls, ignoreVerificationErrors, arginfo_qt_network_qdtls_qdtls_ignoreverificationerrors, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QDtls_QDtls, pskRequired, arginfo_qt_network_qdtls_qdtls_pskrequired, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QDtls_QDtls, handshakeTimeout, arginfo_qt_network_qdtls_qdtls_handshaketimeout, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
