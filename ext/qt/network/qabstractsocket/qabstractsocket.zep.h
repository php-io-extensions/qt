
extern zend_class_entry *qt_network_qabstractsocket_qabstractsocket_ce;

ZEPHIR_INIT_CLASS(Qt_Network_QAbstractSocket_QAbstractSocket);

PHP_METHOD(Qt_Network_QAbstractSocket_QAbstractSocket, staticMetaObject);
PHP_METHOD(Qt_Network_QAbstractSocket_QAbstractSocket, tr);
PHP_METHOD(Qt_Network_QAbstractSocket_QAbstractSocket, new_);
PHP_METHOD(Qt_Network_QAbstractSocket_QAbstractSocket, resume);
PHP_METHOD(Qt_Network_QAbstractSocket_QAbstractSocket, pauseMode);
PHP_METHOD(Qt_Network_QAbstractSocket_QAbstractSocket, setPauseMode);
PHP_METHOD(Qt_Network_QAbstractSocket_QAbstractSocket, bind);
PHP_METHOD(Qt_Network_QAbstractSocket_QAbstractSocket, bindQuint16QAbstractSocketBindMode);
PHP_METHOD(Qt_Network_QAbstractSocket_QAbstractSocket, connectToHost);
PHP_METHOD(Qt_Network_QAbstractSocket_QAbstractSocket, connectToHostQHostAddressQuint16QIODeviceBaseOpenMode);
PHP_METHOD(Qt_Network_QAbstractSocket_QAbstractSocket, disconnectFromHost);
PHP_METHOD(Qt_Network_QAbstractSocket_QAbstractSocket, isValid);
PHP_METHOD(Qt_Network_QAbstractSocket_QAbstractSocket, bytesAvailable);
PHP_METHOD(Qt_Network_QAbstractSocket_QAbstractSocket, bytesToWrite);
PHP_METHOD(Qt_Network_QAbstractSocket_QAbstractSocket, localPort);
PHP_METHOD(Qt_Network_QAbstractSocket_QAbstractSocket, localAddress);
PHP_METHOD(Qt_Network_QAbstractSocket_QAbstractSocket, peerPort);
PHP_METHOD(Qt_Network_QAbstractSocket_QAbstractSocket, peerAddress);
PHP_METHOD(Qt_Network_QAbstractSocket_QAbstractSocket, peerName);
PHP_METHOD(Qt_Network_QAbstractSocket_QAbstractSocket, readBufferSize);
PHP_METHOD(Qt_Network_QAbstractSocket_QAbstractSocket, setReadBufferSize);
PHP_METHOD(Qt_Network_QAbstractSocket_QAbstractSocket, abort);
PHP_METHOD(Qt_Network_QAbstractSocket_QAbstractSocket, socketDescriptor);
PHP_METHOD(Qt_Network_QAbstractSocket_QAbstractSocket, setSocketDescriptor);
PHP_METHOD(Qt_Network_QAbstractSocket_QAbstractSocket, setSocketOption);
PHP_METHOD(Qt_Network_QAbstractSocket_QAbstractSocket, socketOption);
PHP_METHOD(Qt_Network_QAbstractSocket_QAbstractSocket, socketType);
PHP_METHOD(Qt_Network_QAbstractSocket_QAbstractSocket, state);
PHP_METHOD(Qt_Network_QAbstractSocket_QAbstractSocket, error);
PHP_METHOD(Qt_Network_QAbstractSocket_QAbstractSocket, close);
PHP_METHOD(Qt_Network_QAbstractSocket_QAbstractSocket, isSequential);
PHP_METHOD(Qt_Network_QAbstractSocket_QAbstractSocket, flush);
PHP_METHOD(Qt_Network_QAbstractSocket_QAbstractSocket, waitForConnected);
PHP_METHOD(Qt_Network_QAbstractSocket_QAbstractSocket, waitForReadyRead);
PHP_METHOD(Qt_Network_QAbstractSocket_QAbstractSocket, waitForBytesWritten);
PHP_METHOD(Qt_Network_QAbstractSocket_QAbstractSocket, waitForDisconnected);
PHP_METHOD(Qt_Network_QAbstractSocket_QAbstractSocket, setProxy);
PHP_METHOD(Qt_Network_QAbstractSocket_QAbstractSocket, proxy);
PHP_METHOD(Qt_Network_QAbstractSocket_QAbstractSocket, protocolTag);
PHP_METHOD(Qt_Network_QAbstractSocket_QAbstractSocket, setProtocolTag);
PHP_METHOD(Qt_Network_QAbstractSocket_QAbstractSocket, hostFound);
PHP_METHOD(Qt_Network_QAbstractSocket_QAbstractSocket, connected);
PHP_METHOD(Qt_Network_QAbstractSocket_QAbstractSocket, disconnected);
PHP_METHOD(Qt_Network_QAbstractSocket_QAbstractSocket, stateChanged);
PHP_METHOD(Qt_Network_QAbstractSocket_QAbstractSocket, errorOccurred);
PHP_METHOD(Qt_Network_QAbstractSocket_QAbstractSocket, proxyAuthenticationRequired);
PHP_METHOD(Qt_Network_QAbstractSocket_QAbstractSocket, skipData);
PHP_METHOD(Qt_Network_QAbstractSocket_QAbstractSocket, writeData);
PHP_METHOD(Qt_Network_QAbstractSocket_QAbstractSocket, setSocketState);
PHP_METHOD(Qt_Network_QAbstractSocket_QAbstractSocket, setSocketError);
PHP_METHOD(Qt_Network_QAbstractSocket_QAbstractSocket, setLocalPort);
PHP_METHOD(Qt_Network_QAbstractSocket_QAbstractSocket, setLocalAddress);
PHP_METHOD(Qt_Network_QAbstractSocket_QAbstractSocket, setPeerPort);
PHP_METHOD(Qt_Network_QAbstractSocket_QAbstractSocket, setPeerAddress);
PHP_METHOD(Qt_Network_QAbstractSocket_QAbstractSocket, setPeerName);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qabstractsocket_qabstractsocket_staticmetaobject, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qabstractsocket_qabstractsocket_tr, 0, 1, IS_STRING, 0)
	ZEND_ARG_INFO(0, s)
	ZEND_ARG_INFO(0, c)
	ZEND_ARG_TYPE_INFO(0, n, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qabstractsocket_qabstractsocket_new_, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, socketType, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qabstractsocket_qabstractsocket_resume, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qabstractsocket_qabstractsocket_pausemode, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qabstractsocket_qabstractsocket_setpausemode, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, pauseMode, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qabstractsocket_qabstractsocket_bind, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, address, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, port, IS_LONG, 0)
	ZEND_ARG_INFO(0, mode)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qabstractsocket_qabstractsocket_bindquint16qabstractsocketbindmode, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, port, IS_LONG, 0)
	ZEND_ARG_INFO(0, mode)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qabstractsocket_qabstractsocket_connecttohost, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, hostName, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, port, IS_LONG, 0)
	ZEND_ARG_INFO(0, mode)
	ZEND_ARG_INFO(0, protocol)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qabstractsocket_qabstractsocket_connecttohostqhostaddressquint16qiodevicebaseopenmode, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, address, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, port, IS_LONG, 0)
	ZEND_ARG_INFO(0, mode)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qabstractsocket_qabstractsocket_disconnectfromhost, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qabstractsocket_qabstractsocket_isvalid, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qabstractsocket_qabstractsocket_bytesavailable, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qabstractsocket_qabstractsocket_bytestowrite, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qabstractsocket_qabstractsocket_localport, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qabstractsocket_qabstractsocket_localaddress, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qabstractsocket_qabstractsocket_peerport, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qabstractsocket_qabstractsocket_peeraddress, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qabstractsocket_qabstractsocket_peername, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qabstractsocket_qabstractsocket_readbuffersize, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qabstractsocket_qabstractsocket_setreadbuffersize, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, size, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qabstractsocket_qabstractsocket_abort, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qabstractsocket_qabstractsocket_socketdescriptor, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qabstractsocket_qabstractsocket_setsocketdescriptor, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, socketDescriptor, IS_LONG, 0)
	ZEND_ARG_INFO(0, state)
	ZEND_ARG_INFO(0, openMode)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qabstractsocket_qabstractsocket_setsocketoption, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, option, IS_LONG, 0)
	ZEND_ARG_INFO(0, value)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_qt_network_qabstractsocket_qabstractsocket_socketoption, 0, 0, 2)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, option, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qabstractsocket_qabstractsocket_sockettype, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qabstractsocket_qabstractsocket_state, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qabstractsocket_qabstractsocket_error, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qabstractsocket_qabstractsocket_close, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qabstractsocket_qabstractsocket_issequential, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qabstractsocket_qabstractsocket_flush, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qabstractsocket_qabstractsocket_waitforconnected, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, msecs, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qabstractsocket_qabstractsocket_waitforreadyread, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, msecs, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qabstractsocket_qabstractsocket_waitforbyteswritten, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, msecs, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qabstractsocket_qabstractsocket_waitfordisconnected, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, msecs, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qabstractsocket_qabstractsocket_setproxy, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, networkProxy, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qabstractsocket_qabstractsocket_proxy, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qabstractsocket_qabstractsocket_protocoltag, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qabstractsocket_qabstractsocket_setprotocoltag, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, tag, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qabstractsocket_qabstractsocket_hostfound, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qabstractsocket_qabstractsocket_connected, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qabstractsocket_qabstractsocket_disconnected, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qabstractsocket_qabstractsocket_statechanged, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qabstractsocket_qabstractsocket_erroroccurred, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qabstractsocket_qabstractsocket_proxyauthenticationrequired, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, proxy, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, authenticator, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qabstractsocket_qabstractsocket_skipdata, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, maxSize, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qabstractsocket_qabstractsocket_writedata, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_INFO(0, data)
	ZEND_ARG_TYPE_INFO(0, len, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qabstractsocket_qabstractsocket_setsocketstate, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, state, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qabstractsocket_qabstractsocket_setsocketerror, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, socketError, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qabstractsocket_qabstractsocket_setlocalport, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, port, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qabstractsocket_qabstractsocket_setlocaladdress, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, address, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qabstractsocket_qabstractsocket_setpeerport, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, port, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qabstractsocket_qabstractsocket_setpeeraddress, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, address, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qabstractsocket_qabstractsocket_setpeername, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, name, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_network_qabstractsocket_qabstractsocket_method_entry) {
	PHP_ME(Qt_Network_QAbstractSocket_QAbstractSocket, staticMetaObject, arginfo_qt_network_qabstractsocket_qabstractsocket_staticmetaobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QAbstractSocket_QAbstractSocket, tr, arginfo_qt_network_qabstractsocket_qabstractsocket_tr, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QAbstractSocket_QAbstractSocket, new_, arginfo_qt_network_qabstractsocket_qabstractsocket_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QAbstractSocket_QAbstractSocket, resume, arginfo_qt_network_qabstractsocket_qabstractsocket_resume, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QAbstractSocket_QAbstractSocket, pauseMode, arginfo_qt_network_qabstractsocket_qabstractsocket_pausemode, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QAbstractSocket_QAbstractSocket, setPauseMode, arginfo_qt_network_qabstractsocket_qabstractsocket_setpausemode, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QAbstractSocket_QAbstractSocket, bind, arginfo_qt_network_qabstractsocket_qabstractsocket_bind, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QAbstractSocket_QAbstractSocket, bindQuint16QAbstractSocketBindMode, arginfo_qt_network_qabstractsocket_qabstractsocket_bindquint16qabstractsocketbindmode, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QAbstractSocket_QAbstractSocket, connectToHost, arginfo_qt_network_qabstractsocket_qabstractsocket_connecttohost, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QAbstractSocket_QAbstractSocket, connectToHostQHostAddressQuint16QIODeviceBaseOpenMode, arginfo_qt_network_qabstractsocket_qabstractsocket_connecttohostqhostaddressquint16qiodevicebaseopenmode, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QAbstractSocket_QAbstractSocket, disconnectFromHost, arginfo_qt_network_qabstractsocket_qabstractsocket_disconnectfromhost, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QAbstractSocket_QAbstractSocket, isValid, arginfo_qt_network_qabstractsocket_qabstractsocket_isvalid, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QAbstractSocket_QAbstractSocket, bytesAvailable, arginfo_qt_network_qabstractsocket_qabstractsocket_bytesavailable, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QAbstractSocket_QAbstractSocket, bytesToWrite, arginfo_qt_network_qabstractsocket_qabstractsocket_bytestowrite, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QAbstractSocket_QAbstractSocket, localPort, arginfo_qt_network_qabstractsocket_qabstractsocket_localport, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QAbstractSocket_QAbstractSocket, localAddress, arginfo_qt_network_qabstractsocket_qabstractsocket_localaddress, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QAbstractSocket_QAbstractSocket, peerPort, arginfo_qt_network_qabstractsocket_qabstractsocket_peerport, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QAbstractSocket_QAbstractSocket, peerAddress, arginfo_qt_network_qabstractsocket_qabstractsocket_peeraddress, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QAbstractSocket_QAbstractSocket, peerName, arginfo_qt_network_qabstractsocket_qabstractsocket_peername, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QAbstractSocket_QAbstractSocket, readBufferSize, arginfo_qt_network_qabstractsocket_qabstractsocket_readbuffersize, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QAbstractSocket_QAbstractSocket, setReadBufferSize, arginfo_qt_network_qabstractsocket_qabstractsocket_setreadbuffersize, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QAbstractSocket_QAbstractSocket, abort, arginfo_qt_network_qabstractsocket_qabstractsocket_abort, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QAbstractSocket_QAbstractSocket, socketDescriptor, arginfo_qt_network_qabstractsocket_qabstractsocket_socketdescriptor, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QAbstractSocket_QAbstractSocket, setSocketDescriptor, arginfo_qt_network_qabstractsocket_qabstractsocket_setsocketdescriptor, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QAbstractSocket_QAbstractSocket, setSocketOption, arginfo_qt_network_qabstractsocket_qabstractsocket_setsocketoption, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QAbstractSocket_QAbstractSocket, socketOption, arginfo_qt_network_qabstractsocket_qabstractsocket_socketoption, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QAbstractSocket_QAbstractSocket, socketType, arginfo_qt_network_qabstractsocket_qabstractsocket_sockettype, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QAbstractSocket_QAbstractSocket, state, arginfo_qt_network_qabstractsocket_qabstractsocket_state, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QAbstractSocket_QAbstractSocket, error, arginfo_qt_network_qabstractsocket_qabstractsocket_error, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QAbstractSocket_QAbstractSocket, close, arginfo_qt_network_qabstractsocket_qabstractsocket_close, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QAbstractSocket_QAbstractSocket, isSequential, arginfo_qt_network_qabstractsocket_qabstractsocket_issequential, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QAbstractSocket_QAbstractSocket, flush, arginfo_qt_network_qabstractsocket_qabstractsocket_flush, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QAbstractSocket_QAbstractSocket, waitForConnected, arginfo_qt_network_qabstractsocket_qabstractsocket_waitforconnected, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QAbstractSocket_QAbstractSocket, waitForReadyRead, arginfo_qt_network_qabstractsocket_qabstractsocket_waitforreadyread, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QAbstractSocket_QAbstractSocket, waitForBytesWritten, arginfo_qt_network_qabstractsocket_qabstractsocket_waitforbyteswritten, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QAbstractSocket_QAbstractSocket, waitForDisconnected, arginfo_qt_network_qabstractsocket_qabstractsocket_waitfordisconnected, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QAbstractSocket_QAbstractSocket, setProxy, arginfo_qt_network_qabstractsocket_qabstractsocket_setproxy, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QAbstractSocket_QAbstractSocket, proxy, arginfo_qt_network_qabstractsocket_qabstractsocket_proxy, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QAbstractSocket_QAbstractSocket, protocolTag, arginfo_qt_network_qabstractsocket_qabstractsocket_protocoltag, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QAbstractSocket_QAbstractSocket, setProtocolTag, arginfo_qt_network_qabstractsocket_qabstractsocket_setprotocoltag, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QAbstractSocket_QAbstractSocket, hostFound, arginfo_qt_network_qabstractsocket_qabstractsocket_hostfound, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QAbstractSocket_QAbstractSocket, connected, arginfo_qt_network_qabstractsocket_qabstractsocket_connected, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QAbstractSocket_QAbstractSocket, disconnected, arginfo_qt_network_qabstractsocket_qabstractsocket_disconnected, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QAbstractSocket_QAbstractSocket, stateChanged, arginfo_qt_network_qabstractsocket_qabstractsocket_statechanged, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QAbstractSocket_QAbstractSocket, errorOccurred, arginfo_qt_network_qabstractsocket_qabstractsocket_erroroccurred, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QAbstractSocket_QAbstractSocket, proxyAuthenticationRequired, arginfo_qt_network_qabstractsocket_qabstractsocket_proxyauthenticationrequired, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QAbstractSocket_QAbstractSocket, skipData, arginfo_qt_network_qabstractsocket_qabstractsocket_skipdata, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QAbstractSocket_QAbstractSocket, writeData, arginfo_qt_network_qabstractsocket_qabstractsocket_writedata, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QAbstractSocket_QAbstractSocket, setSocketState, arginfo_qt_network_qabstractsocket_qabstractsocket_setsocketstate, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QAbstractSocket_QAbstractSocket, setSocketError, arginfo_qt_network_qabstractsocket_qabstractsocket_setsocketerror, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QAbstractSocket_QAbstractSocket, setLocalPort, arginfo_qt_network_qabstractsocket_qabstractsocket_setlocalport, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QAbstractSocket_QAbstractSocket, setLocalAddress, arginfo_qt_network_qabstractsocket_qabstractsocket_setlocaladdress, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QAbstractSocket_QAbstractSocket, setPeerPort, arginfo_qt_network_qabstractsocket_qabstractsocket_setpeerport, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QAbstractSocket_QAbstractSocket, setPeerAddress, arginfo_qt_network_qabstractsocket_qabstractsocket_setpeeraddress, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QAbstractSocket_QAbstractSocket, setPeerName, arginfo_qt_network_qabstractsocket_qabstractsocket_setpeername, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
