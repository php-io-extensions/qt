
extern zend_class_entry *qt_network_qsslsocket_qsslsocket_ce;

ZEPHIR_INIT_CLASS(Qt_Network_QSslSocket_QSslSocket);

PHP_METHOD(Qt_Network_QSslSocket_QSslSocket, connectToHost);
PHP_METHOD(Qt_Network_QSslSocket_QSslSocket, staticMetaObject);
PHP_METHOD(Qt_Network_QSslSocket_QSslSocket, tr);
PHP_METHOD(Qt_Network_QSslSocket_QSslSocket, new_);
PHP_METHOD(Qt_Network_QSslSocket_QSslSocket, resume);
PHP_METHOD(Qt_Network_QSslSocket_QSslSocket, connectToHostEncrypted);
PHP_METHOD(Qt_Network_QSslSocket_QSslSocket, connectToHostEncryptedQStringQuint16QStringQIODeviceBaseOpenModeQAbstractSocketNetworkLayerProtocol);
PHP_METHOD(Qt_Network_QSslSocket_QSslSocket, setSocketDescriptor);
PHP_METHOD(Qt_Network_QSslSocket_QSslSocket, connectToHostQStringQuint16QIODeviceBaseOpenModeQAbstractSocketNetworkLayerProtocol);
PHP_METHOD(Qt_Network_QSslSocket_QSslSocket, disconnectFromHost);
PHP_METHOD(Qt_Network_QSslSocket_QSslSocket, setSocketOption);
PHP_METHOD(Qt_Network_QSslSocket_QSslSocket, socketOption);
PHP_METHOD(Qt_Network_QSslSocket_QSslSocket, mode);
PHP_METHOD(Qt_Network_QSslSocket_QSslSocket, isEncrypted);
PHP_METHOD(Qt_Network_QSslSocket_QSslSocket, protocol);
PHP_METHOD(Qt_Network_QSslSocket_QSslSocket, setProtocol);
PHP_METHOD(Qt_Network_QSslSocket_QSslSocket, peerVerifyMode);
PHP_METHOD(Qt_Network_QSslSocket_QSslSocket, setPeerVerifyMode);
PHP_METHOD(Qt_Network_QSslSocket_QSslSocket, peerVerifyDepth);
PHP_METHOD(Qt_Network_QSslSocket_QSslSocket, setPeerVerifyDepth);
PHP_METHOD(Qt_Network_QSslSocket_QSslSocket, peerVerifyName);
PHP_METHOD(Qt_Network_QSslSocket_QSslSocket, setPeerVerifyName);
PHP_METHOD(Qt_Network_QSslSocket_QSslSocket, bytesAvailable);
PHP_METHOD(Qt_Network_QSslSocket_QSslSocket, bytesToWrite);
PHP_METHOD(Qt_Network_QSslSocket_QSslSocket, canReadLine);
PHP_METHOD(Qt_Network_QSslSocket_QSslSocket, close);
PHP_METHOD(Qt_Network_QSslSocket_QSslSocket, atEnd);
PHP_METHOD(Qt_Network_QSslSocket_QSslSocket, setReadBufferSize);
PHP_METHOD(Qt_Network_QSslSocket_QSslSocket, encryptedBytesAvailable);
PHP_METHOD(Qt_Network_QSslSocket_QSslSocket, encryptedBytesToWrite);
PHP_METHOD(Qt_Network_QSslSocket_QSslSocket, sslConfiguration);
PHP_METHOD(Qt_Network_QSslSocket_QSslSocket, setSslConfiguration);
PHP_METHOD(Qt_Network_QSslSocket_QSslSocket, setLocalCertificateChain);
PHP_METHOD(Qt_Network_QSslSocket_QSslSocket, localCertificateChain);
PHP_METHOD(Qt_Network_QSslSocket_QSslSocket, setLocalCertificate);
PHP_METHOD(Qt_Network_QSslSocket_QSslSocket, setLocalCertificateQStringQSslEncodingFormat);
PHP_METHOD(Qt_Network_QSslSocket_QSslSocket, localCertificate);
PHP_METHOD(Qt_Network_QSslSocket_QSslSocket, peerCertificate);
PHP_METHOD(Qt_Network_QSslSocket_QSslSocket, peerCertificateChain);
PHP_METHOD(Qt_Network_QSslSocket_QSslSocket, sessionCipher);
PHP_METHOD(Qt_Network_QSslSocket_QSslSocket, sessionProtocol);
PHP_METHOD(Qt_Network_QSslSocket_QSslSocket, ocspResponses);
PHP_METHOD(Qt_Network_QSslSocket_QSslSocket, setPrivateKey);
PHP_METHOD(Qt_Network_QSslSocket_QSslSocket, setPrivateKeyQStringQSslKeyAlgorithmQSslEncodingFormatQByteArray);
PHP_METHOD(Qt_Network_QSslSocket_QSslSocket, privateKey);
PHP_METHOD(Qt_Network_QSslSocket_QSslSocket, waitForConnected);
PHP_METHOD(Qt_Network_QSslSocket_QSslSocket, waitForEncrypted);
PHP_METHOD(Qt_Network_QSslSocket_QSslSocket, waitForReadyRead);
PHP_METHOD(Qt_Network_QSslSocket_QSslSocket, waitForBytesWritten);
PHP_METHOD(Qt_Network_QSslSocket_QSslSocket, waitForDisconnected);
PHP_METHOD(Qt_Network_QSslSocket_QSslSocket, sslHandshakeErrors);
PHP_METHOD(Qt_Network_QSslSocket_QSslSocket, supportsSsl);
PHP_METHOD(Qt_Network_QSslSocket_QSslSocket, sslLibraryVersionNumber);
PHP_METHOD(Qt_Network_QSslSocket_QSslSocket, sslLibraryVersionString);
PHP_METHOD(Qt_Network_QSslSocket_QSslSocket, sslLibraryBuildVersionNumber);
PHP_METHOD(Qt_Network_QSslSocket_QSslSocket, sslLibraryBuildVersionString);
PHP_METHOD(Qt_Network_QSslSocket_QSslSocket, availableBackends);
PHP_METHOD(Qt_Network_QSslSocket_QSslSocket, activeBackend);
PHP_METHOD(Qt_Network_QSslSocket_QSslSocket, setActiveBackend);
PHP_METHOD(Qt_Network_QSslSocket_QSslSocket, supportedProtocols);
PHP_METHOD(Qt_Network_QSslSocket_QSslSocket, isProtocolSupported);
PHP_METHOD(Qt_Network_QSslSocket_QSslSocket, implementedClasses);
PHP_METHOD(Qt_Network_QSslSocket_QSslSocket, isClassImplemented);
PHP_METHOD(Qt_Network_QSslSocket_QSslSocket, supportedFeatures);
PHP_METHOD(Qt_Network_QSslSocket_QSslSocket, isFeatureSupported);
PHP_METHOD(Qt_Network_QSslSocket_QSslSocket, ignoreSslErrors);
PHP_METHOD(Qt_Network_QSslSocket_QSslSocket, continueInterruptedHandshake);
PHP_METHOD(Qt_Network_QSslSocket_QSslSocket, startClientEncryption);
PHP_METHOD(Qt_Network_QSslSocket_QSslSocket, startServerEncryption);
PHP_METHOD(Qt_Network_QSslSocket_QSslSocket, ignoreSslErrors2);
PHP_METHOD(Qt_Network_QSslSocket_QSslSocket, encrypted);
PHP_METHOD(Qt_Network_QSslSocket_QSslSocket, peerVerifyError);
PHP_METHOD(Qt_Network_QSslSocket_QSslSocket, sslErrors);
PHP_METHOD(Qt_Network_QSslSocket_QSslSocket, modeChanged);
PHP_METHOD(Qt_Network_QSslSocket_QSslSocket, encryptedBytesWritten);
PHP_METHOD(Qt_Network_QSslSocket_QSslSocket, preSharedKeyAuthenticationRequired);
PHP_METHOD(Qt_Network_QSslSocket_QSslSocket, newSessionTicketReceived);
PHP_METHOD(Qt_Network_QSslSocket_QSslSocket, alertSent);
PHP_METHOD(Qt_Network_QSslSocket_QSslSocket, alertReceived);
PHP_METHOD(Qt_Network_QSslSocket_QSslSocket, handshakeInterruptedOnError);
PHP_METHOD(Qt_Network_QSslSocket_QSslSocket, skipData);
PHP_METHOD(Qt_Network_QSslSocket_QSslSocket, writeData);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qsslsocket_qsslsocket_connecttohost, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, address, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, port, IS_LONG, 0)
	ZEND_ARG_INFO(0, mode)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qsslsocket_qsslsocket_staticmetaobject, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qsslsocket_qsslsocket_tr, 0, 1, IS_STRING, 0)
	ZEND_ARG_INFO(0, s)
	ZEND_ARG_INFO(0, c)
	ZEND_ARG_TYPE_INFO(0, n, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qsslsocket_qsslsocket_new_, 0, 0, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qsslsocket_qsslsocket_resume, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qsslsocket_qsslsocket_connecttohostencrypted, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, hostName, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, port, IS_LONG, 0)
	ZEND_ARG_INFO(0, mode)
	ZEND_ARG_INFO(0, protocol)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qsslsocket_qsslsocket_connecttohostencryptedqstringquint16qstringqiodevicebaseopenmodeqabstractsocketnetworklayerprotocol, 0, 4, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, hostName, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, port, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sslPeerName, IS_STRING, 0)
	ZEND_ARG_INFO(0, mode)
	ZEND_ARG_INFO(0, protocol)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qsslsocket_qsslsocket_setsocketdescriptor, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, socketDescriptor, IS_LONG, 0)
	ZEND_ARG_INFO(0, state)
	ZEND_ARG_INFO(0, openMode)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qsslsocket_qsslsocket_connecttohostqstringquint16qiodevicebaseopenmodeqabstractsocketnetworklayerprotocol, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, hostName, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, port, IS_LONG, 0)
	ZEND_ARG_INFO(0, openMode)
	ZEND_ARG_INFO(0, protocol)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qsslsocket_qsslsocket_disconnectfromhost, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qsslsocket_qsslsocket_setsocketoption, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, option, IS_LONG, 0)
	ZEND_ARG_INFO(0, value)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_qt_network_qsslsocket_qsslsocket_socketoption, 0, 0, 2)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, option, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qsslsocket_qsslsocket_mode, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qsslsocket_qsslsocket_isencrypted, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qsslsocket_qsslsocket_protocol, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qsslsocket_qsslsocket_setprotocol, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, protocol, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qsslsocket_qsslsocket_peerverifymode, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qsslsocket_qsslsocket_setpeerverifymode, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, mode, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qsslsocket_qsslsocket_peerverifydepth, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qsslsocket_qsslsocket_setpeerverifydepth, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, depth, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qsslsocket_qsslsocket_peerverifyname, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qsslsocket_qsslsocket_setpeerverifyname, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, hostName, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qsslsocket_qsslsocket_bytesavailable, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qsslsocket_qsslsocket_bytestowrite, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qsslsocket_qsslsocket_canreadline, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qsslsocket_qsslsocket_close, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qsslsocket_qsslsocket_atend, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qsslsocket_qsslsocket_setreadbuffersize, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, size, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qsslsocket_qsslsocket_encryptedbytesavailable, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qsslsocket_qsslsocket_encryptedbytestowrite, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qsslsocket_qsslsocket_sslconfiguration, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qsslsocket_qsslsocket_setsslconfiguration, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, config, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qsslsocket_qsslsocket_setlocalcertificatechain, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_ARRAY_INFO(0, localChain, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qsslsocket_qsslsocket_localcertificatechain, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qsslsocket_qsslsocket_setlocalcertificate, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, certificate, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qsslsocket_qsslsocket_setlocalcertificateqstringqsslencodingformat, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, fileName, IS_STRING, 0)
	ZEND_ARG_INFO(0, format)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qsslsocket_qsslsocket_localcertificate, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qsslsocket_qsslsocket_peercertificate, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qsslsocket_qsslsocket_peercertificatechain, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qsslsocket_qsslsocket_sessioncipher, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qsslsocket_qsslsocket_sessionprotocol, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qsslsocket_qsslsocket_ocspresponses, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qsslsocket_qsslsocket_setprivatekey, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, key, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qsslsocket_qsslsocket_setprivatekeyqstringqsslkeyalgorithmqsslencodingformatqbytearray, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, fileName, IS_STRING, 0)
	ZEND_ARG_INFO(0, algorithm)
	ZEND_ARG_INFO(0, format)
	ZEND_ARG_TYPE_INFO(0, passPhrase, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qsslsocket_qsslsocket_privatekey, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qsslsocket_qsslsocket_waitforconnected, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, msecs, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qsslsocket_qsslsocket_waitforencrypted, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, msecs, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qsslsocket_qsslsocket_waitforreadyread, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, msecs, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qsslsocket_qsslsocket_waitforbyteswritten, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, msecs, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qsslsocket_qsslsocket_waitfordisconnected, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, msecs, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qsslsocket_qsslsocket_sslhandshakeerrors, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qsslsocket_qsslsocket_supportsssl, 0, 0, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qsslsocket_qsslsocket_ssllibraryversionnumber, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qsslsocket_qsslsocket_ssllibraryversionstring, 0, 0, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qsslsocket_qsslsocket_ssllibrarybuildversionnumber, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qsslsocket_qsslsocket_ssllibrarybuildversionstring, 0, 0, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qsslsocket_qsslsocket_availablebackends, 0, 0, IS_ARRAY, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qsslsocket_qsslsocket_activebackend, 0, 0, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qsslsocket_qsslsocket_setactivebackend, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, backendName, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qsslsocket_qsslsocket_supportedprotocols, 0, 0, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, backendName, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qsslsocket_qsslsocket_isprotocolsupported, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, protocol, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, backendName, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qsslsocket_qsslsocket_implementedclasses, 0, 0, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, backendName, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qsslsocket_qsslsocket_isclassimplemented, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, cl, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, backendName, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qsslsocket_qsslsocket_supportedfeatures, 0, 0, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, backendName, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qsslsocket_qsslsocket_isfeaturesupported, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, feat, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, backendName, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qsslsocket_qsslsocket_ignoresslerrors, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_ARRAY_INFO(0, errors, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qsslsocket_qsslsocket_continueinterruptedhandshake, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qsslsocket_qsslsocket_startclientencryption, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qsslsocket_qsslsocket_startserverencryption, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qsslsocket_qsslsocket_ignoresslerrors2, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qsslsocket_qsslsocket_encrypted, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qsslsocket_qsslsocket_peerverifyerror, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, error, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qsslsocket_qsslsocket_sslerrors, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_ARRAY_INFO(0, errors, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qsslsocket_qsslsocket_modechanged, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, newMode, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qsslsocket_qsslsocket_encryptedbyteswritten, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, totalBytes, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qsslsocket_qsslsocket_presharedkeyauthenticationrequired, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, authenticator, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qsslsocket_qsslsocket_newsessionticketreceived, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qsslsocket_qsslsocket_alertsent, 0, 4, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, level, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, type, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, description, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qsslsocket_qsslsocket_alertreceived, 0, 4, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, level, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, type, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, description, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qsslsocket_qsslsocket_handshakeinterruptedonerror, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, error, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qsslsocket_qsslsocket_skipdata, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, maxSize, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qsslsocket_qsslsocket_writedata, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_INFO(0, data)
	ZEND_ARG_TYPE_INFO(0, len, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_network_qsslsocket_qsslsocket_method_entry) {
	PHP_ME(Qt_Network_QSslSocket_QSslSocket, connectToHost, arginfo_qt_network_qsslsocket_qsslsocket_connecttohost, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QSslSocket_QSslSocket, staticMetaObject, arginfo_qt_network_qsslsocket_qsslsocket_staticmetaobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QSslSocket_QSslSocket, tr, arginfo_qt_network_qsslsocket_qsslsocket_tr, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QSslSocket_QSslSocket, new_, arginfo_qt_network_qsslsocket_qsslsocket_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QSslSocket_QSslSocket, resume, arginfo_qt_network_qsslsocket_qsslsocket_resume, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QSslSocket_QSslSocket, connectToHostEncrypted, arginfo_qt_network_qsslsocket_qsslsocket_connecttohostencrypted, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QSslSocket_QSslSocket, connectToHostEncryptedQStringQuint16QStringQIODeviceBaseOpenModeQAbstractSocketNetworkLayerProtocol, arginfo_qt_network_qsslsocket_qsslsocket_connecttohostencryptedqstringquint16qstringqiodevicebaseopenmodeqabstractsocketnetworklayerprotocol, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QSslSocket_QSslSocket, setSocketDescriptor, arginfo_qt_network_qsslsocket_qsslsocket_setsocketdescriptor, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QSslSocket_QSslSocket, connectToHostQStringQuint16QIODeviceBaseOpenModeQAbstractSocketNetworkLayerProtocol, arginfo_qt_network_qsslsocket_qsslsocket_connecttohostqstringquint16qiodevicebaseopenmodeqabstractsocketnetworklayerprotocol, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QSslSocket_QSslSocket, disconnectFromHost, arginfo_qt_network_qsslsocket_qsslsocket_disconnectfromhost, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QSslSocket_QSslSocket, setSocketOption, arginfo_qt_network_qsslsocket_qsslsocket_setsocketoption, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QSslSocket_QSslSocket, socketOption, arginfo_qt_network_qsslsocket_qsslsocket_socketoption, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QSslSocket_QSslSocket, mode, arginfo_qt_network_qsslsocket_qsslsocket_mode, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QSslSocket_QSslSocket, isEncrypted, arginfo_qt_network_qsslsocket_qsslsocket_isencrypted, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QSslSocket_QSslSocket, protocol, arginfo_qt_network_qsslsocket_qsslsocket_protocol, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QSslSocket_QSslSocket, setProtocol, arginfo_qt_network_qsslsocket_qsslsocket_setprotocol, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QSslSocket_QSslSocket, peerVerifyMode, arginfo_qt_network_qsslsocket_qsslsocket_peerverifymode, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QSslSocket_QSslSocket, setPeerVerifyMode, arginfo_qt_network_qsslsocket_qsslsocket_setpeerverifymode, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QSslSocket_QSslSocket, peerVerifyDepth, arginfo_qt_network_qsslsocket_qsslsocket_peerverifydepth, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QSslSocket_QSslSocket, setPeerVerifyDepth, arginfo_qt_network_qsslsocket_qsslsocket_setpeerverifydepth, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QSslSocket_QSslSocket, peerVerifyName, arginfo_qt_network_qsslsocket_qsslsocket_peerverifyname, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QSslSocket_QSslSocket, setPeerVerifyName, arginfo_qt_network_qsslsocket_qsslsocket_setpeerverifyname, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QSslSocket_QSslSocket, bytesAvailable, arginfo_qt_network_qsslsocket_qsslsocket_bytesavailable, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QSslSocket_QSslSocket, bytesToWrite, arginfo_qt_network_qsslsocket_qsslsocket_bytestowrite, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QSslSocket_QSslSocket, canReadLine, arginfo_qt_network_qsslsocket_qsslsocket_canreadline, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QSslSocket_QSslSocket, close, arginfo_qt_network_qsslsocket_qsslsocket_close, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QSslSocket_QSslSocket, atEnd, arginfo_qt_network_qsslsocket_qsslsocket_atend, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QSslSocket_QSslSocket, setReadBufferSize, arginfo_qt_network_qsslsocket_qsslsocket_setreadbuffersize, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QSslSocket_QSslSocket, encryptedBytesAvailable, arginfo_qt_network_qsslsocket_qsslsocket_encryptedbytesavailable, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QSslSocket_QSslSocket, encryptedBytesToWrite, arginfo_qt_network_qsslsocket_qsslsocket_encryptedbytestowrite, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QSslSocket_QSslSocket, sslConfiguration, arginfo_qt_network_qsslsocket_qsslsocket_sslconfiguration, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QSslSocket_QSslSocket, setSslConfiguration, arginfo_qt_network_qsslsocket_qsslsocket_setsslconfiguration, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QSslSocket_QSslSocket, setLocalCertificateChain, arginfo_qt_network_qsslsocket_qsslsocket_setlocalcertificatechain, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QSslSocket_QSslSocket, localCertificateChain, arginfo_qt_network_qsslsocket_qsslsocket_localcertificatechain, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QSslSocket_QSslSocket, setLocalCertificate, arginfo_qt_network_qsslsocket_qsslsocket_setlocalcertificate, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QSslSocket_QSslSocket, setLocalCertificateQStringQSslEncodingFormat, arginfo_qt_network_qsslsocket_qsslsocket_setlocalcertificateqstringqsslencodingformat, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QSslSocket_QSslSocket, localCertificate, arginfo_qt_network_qsslsocket_qsslsocket_localcertificate, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QSslSocket_QSslSocket, peerCertificate, arginfo_qt_network_qsslsocket_qsslsocket_peercertificate, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QSslSocket_QSslSocket, peerCertificateChain, arginfo_qt_network_qsslsocket_qsslsocket_peercertificatechain, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QSslSocket_QSslSocket, sessionCipher, arginfo_qt_network_qsslsocket_qsslsocket_sessioncipher, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QSslSocket_QSslSocket, sessionProtocol, arginfo_qt_network_qsslsocket_qsslsocket_sessionprotocol, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QSslSocket_QSslSocket, ocspResponses, arginfo_qt_network_qsslsocket_qsslsocket_ocspresponses, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QSslSocket_QSslSocket, setPrivateKey, arginfo_qt_network_qsslsocket_qsslsocket_setprivatekey, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QSslSocket_QSslSocket, setPrivateKeyQStringQSslKeyAlgorithmQSslEncodingFormatQByteArray, arginfo_qt_network_qsslsocket_qsslsocket_setprivatekeyqstringqsslkeyalgorithmqsslencodingformatqbytearray, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QSslSocket_QSslSocket, privateKey, arginfo_qt_network_qsslsocket_qsslsocket_privatekey, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QSslSocket_QSslSocket, waitForConnected, arginfo_qt_network_qsslsocket_qsslsocket_waitforconnected, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QSslSocket_QSslSocket, waitForEncrypted, arginfo_qt_network_qsslsocket_qsslsocket_waitforencrypted, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QSslSocket_QSslSocket, waitForReadyRead, arginfo_qt_network_qsslsocket_qsslsocket_waitforreadyread, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QSslSocket_QSslSocket, waitForBytesWritten, arginfo_qt_network_qsslsocket_qsslsocket_waitforbyteswritten, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QSslSocket_QSslSocket, waitForDisconnected, arginfo_qt_network_qsslsocket_qsslsocket_waitfordisconnected, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QSslSocket_QSslSocket, sslHandshakeErrors, arginfo_qt_network_qsslsocket_qsslsocket_sslhandshakeerrors, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QSslSocket_QSslSocket, supportsSsl, arginfo_qt_network_qsslsocket_qsslsocket_supportsssl, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QSslSocket_QSslSocket, sslLibraryVersionNumber, arginfo_qt_network_qsslsocket_qsslsocket_ssllibraryversionnumber, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QSslSocket_QSslSocket, sslLibraryVersionString, arginfo_qt_network_qsslsocket_qsslsocket_ssllibraryversionstring, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QSslSocket_QSslSocket, sslLibraryBuildVersionNumber, arginfo_qt_network_qsslsocket_qsslsocket_ssllibrarybuildversionnumber, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QSslSocket_QSslSocket, sslLibraryBuildVersionString, arginfo_qt_network_qsslsocket_qsslsocket_ssllibrarybuildversionstring, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QSslSocket_QSslSocket, availableBackends, arginfo_qt_network_qsslsocket_qsslsocket_availablebackends, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QSslSocket_QSslSocket, activeBackend, arginfo_qt_network_qsslsocket_qsslsocket_activebackend, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QSslSocket_QSslSocket, setActiveBackend, arginfo_qt_network_qsslsocket_qsslsocket_setactivebackend, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QSslSocket_QSslSocket, supportedProtocols, arginfo_qt_network_qsslsocket_qsslsocket_supportedprotocols, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QSslSocket_QSslSocket, isProtocolSupported, arginfo_qt_network_qsslsocket_qsslsocket_isprotocolsupported, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QSslSocket_QSslSocket, implementedClasses, arginfo_qt_network_qsslsocket_qsslsocket_implementedclasses, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QSslSocket_QSslSocket, isClassImplemented, arginfo_qt_network_qsslsocket_qsslsocket_isclassimplemented, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QSslSocket_QSslSocket, supportedFeatures, arginfo_qt_network_qsslsocket_qsslsocket_supportedfeatures, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QSslSocket_QSslSocket, isFeatureSupported, arginfo_qt_network_qsslsocket_qsslsocket_isfeaturesupported, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QSslSocket_QSslSocket, ignoreSslErrors, arginfo_qt_network_qsslsocket_qsslsocket_ignoresslerrors, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QSslSocket_QSslSocket, continueInterruptedHandshake, arginfo_qt_network_qsslsocket_qsslsocket_continueinterruptedhandshake, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QSslSocket_QSslSocket, startClientEncryption, arginfo_qt_network_qsslsocket_qsslsocket_startclientencryption, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QSslSocket_QSslSocket, startServerEncryption, arginfo_qt_network_qsslsocket_qsslsocket_startserverencryption, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QSslSocket_QSslSocket, ignoreSslErrors2, arginfo_qt_network_qsslsocket_qsslsocket_ignoresslerrors2, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QSslSocket_QSslSocket, encrypted, arginfo_qt_network_qsslsocket_qsslsocket_encrypted, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QSslSocket_QSslSocket, peerVerifyError, arginfo_qt_network_qsslsocket_qsslsocket_peerverifyerror, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QSslSocket_QSslSocket, sslErrors, arginfo_qt_network_qsslsocket_qsslsocket_sslerrors, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QSslSocket_QSslSocket, modeChanged, arginfo_qt_network_qsslsocket_qsslsocket_modechanged, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QSslSocket_QSslSocket, encryptedBytesWritten, arginfo_qt_network_qsslsocket_qsslsocket_encryptedbyteswritten, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QSslSocket_QSslSocket, preSharedKeyAuthenticationRequired, arginfo_qt_network_qsslsocket_qsslsocket_presharedkeyauthenticationrequired, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QSslSocket_QSslSocket, newSessionTicketReceived, arginfo_qt_network_qsslsocket_qsslsocket_newsessionticketreceived, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QSslSocket_QSslSocket, alertSent, arginfo_qt_network_qsslsocket_qsslsocket_alertsent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QSslSocket_QSslSocket, alertReceived, arginfo_qt_network_qsslsocket_qsslsocket_alertreceived, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QSslSocket_QSslSocket, handshakeInterruptedOnError, arginfo_qt_network_qsslsocket_qsslsocket_handshakeinterruptedonerror, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QSslSocket_QSslSocket, skipData, arginfo_qt_network_qsslsocket_qsslsocket_skipdata, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QSslSocket_QSslSocket, writeData, arginfo_qt_network_qsslsocket_qsslsocket_writedata, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
