
extern zend_class_entry *qt_network_qsslserver_qsslserver_ce;

ZEPHIR_INIT_CLASS(Qt_Network_QSslServer_QSslServer);

PHP_METHOD(Qt_Network_QSslServer_QSslServer, staticMetaObject);
PHP_METHOD(Qt_Network_QSslServer_QSslServer, tr);
PHP_METHOD(Qt_Network_QSslServer_QSslServer, new_);
PHP_METHOD(Qt_Network_QSslServer_QSslServer, setSslConfiguration);
PHP_METHOD(Qt_Network_QSslServer_QSslServer, sslConfiguration);
PHP_METHOD(Qt_Network_QSslServer_QSslServer, setHandshakeTimeout);
PHP_METHOD(Qt_Network_QSslServer_QSslServer, handshakeTimeout);
PHP_METHOD(Qt_Network_QSslServer_QSslServer, sslErrors);
PHP_METHOD(Qt_Network_QSslServer_QSslServer, peerVerifyError);
PHP_METHOD(Qt_Network_QSslServer_QSslServer, errorOccurred);
PHP_METHOD(Qt_Network_QSslServer_QSslServer, preSharedKeyAuthenticationRequired);
PHP_METHOD(Qt_Network_QSslServer_QSslServer, alertSent);
PHP_METHOD(Qt_Network_QSslServer_QSslServer, alertReceived);
PHP_METHOD(Qt_Network_QSslServer_QSslServer, handshakeInterruptedOnError);
PHP_METHOD(Qt_Network_QSslServer_QSslServer, startedEncryptionHandshake);
PHP_METHOD(Qt_Network_QSslServer_QSslServer, incomingConnection);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qsslserver_qsslserver_staticmetaobject, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qsslserver_qsslserver_tr, 0, 1, IS_STRING, 0)
	ZEND_ARG_INFO(0, s)
	ZEND_ARG_INFO(0, c)
	ZEND_ARG_TYPE_INFO(0, n, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qsslserver_qsslserver_new_, 0, 0, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qsslserver_qsslserver_setsslconfiguration, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sslConfiguration, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qsslserver_qsslserver_sslconfiguration, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qsslserver_qsslserver_sethandshaketimeout, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, timeout, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qsslserver_qsslserver_handshaketimeout, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qsslserver_qsslserver_sslerrors, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, socket, IS_LONG, 0)
	ZEND_ARG_ARRAY_INFO(0, errors, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qsslserver_qsslserver_peerverifyerror, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, socket, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, error, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qsslserver_qsslserver_erroroccurred, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, socket, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, error, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qsslserver_qsslserver_presharedkeyauthenticationrequired, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, socket, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, authenticator, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qsslserver_qsslserver_alertsent, 0, 5, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, socket, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, level, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, type, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, description, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qsslserver_qsslserver_alertreceived, 0, 5, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, socket, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, level, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, type, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, description, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qsslserver_qsslserver_handshakeinterruptedonerror, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, socket, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, error, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qsslserver_qsslserver_startedencryptionhandshake, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, socket, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qsslserver_qsslserver_incomingconnection, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, socket, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_network_qsslserver_qsslserver_method_entry) {
	PHP_ME(Qt_Network_QSslServer_QSslServer, staticMetaObject, arginfo_qt_network_qsslserver_qsslserver_staticmetaobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QSslServer_QSslServer, tr, arginfo_qt_network_qsslserver_qsslserver_tr, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QSslServer_QSslServer, new_, arginfo_qt_network_qsslserver_qsslserver_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QSslServer_QSslServer, setSslConfiguration, arginfo_qt_network_qsslserver_qsslserver_setsslconfiguration, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QSslServer_QSslServer, sslConfiguration, arginfo_qt_network_qsslserver_qsslserver_sslconfiguration, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QSslServer_QSslServer, setHandshakeTimeout, arginfo_qt_network_qsslserver_qsslserver_sethandshaketimeout, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QSslServer_QSslServer, handshakeTimeout, arginfo_qt_network_qsslserver_qsslserver_handshaketimeout, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QSslServer_QSslServer, sslErrors, arginfo_qt_network_qsslserver_qsslserver_sslerrors, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QSslServer_QSslServer, peerVerifyError, arginfo_qt_network_qsslserver_qsslserver_peerverifyerror, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QSslServer_QSslServer, errorOccurred, arginfo_qt_network_qsslserver_qsslserver_erroroccurred, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QSslServer_QSslServer, preSharedKeyAuthenticationRequired, arginfo_qt_network_qsslserver_qsslserver_presharedkeyauthenticationrequired, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QSslServer_QSslServer, alertSent, arginfo_qt_network_qsslserver_qsslserver_alertsent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QSslServer_QSslServer, alertReceived, arginfo_qt_network_qsslserver_qsslserver_alertreceived, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QSslServer_QSslServer, handshakeInterruptedOnError, arginfo_qt_network_qsslserver_qsslserver_handshakeinterruptedonerror, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QSslServer_QSslServer, startedEncryptionHandshake, arginfo_qt_network_qsslserver_qsslserver_startedencryptionhandshake, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QSslServer_QSslServer, incomingConnection, arginfo_qt_network_qsslserver_qsslserver_incomingconnection, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
