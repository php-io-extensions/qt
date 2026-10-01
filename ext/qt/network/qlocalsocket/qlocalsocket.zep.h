
extern zend_class_entry *qt_network_qlocalsocket_qlocalsocket_ce;

ZEPHIR_INIT_CLASS(Qt_Network_QLocalSocket_QLocalSocket);

PHP_METHOD(Qt_Network_QLocalSocket_QLocalSocket, staticMetaObject);
PHP_METHOD(Qt_Network_QLocalSocket_QLocalSocket, tr);
PHP_METHOD(Qt_Network_QLocalSocket_QLocalSocket, new_);
PHP_METHOD(Qt_Network_QLocalSocket_QLocalSocket, connectToServer);
PHP_METHOD(Qt_Network_QLocalSocket_QLocalSocket, connectToServerQStringQIODeviceBaseOpenMode);
PHP_METHOD(Qt_Network_QLocalSocket_QLocalSocket, disconnectFromServer);
PHP_METHOD(Qt_Network_QLocalSocket_QLocalSocket, setServerName);
PHP_METHOD(Qt_Network_QLocalSocket_QLocalSocket, serverName);
PHP_METHOD(Qt_Network_QLocalSocket_QLocalSocket, fullServerName);
PHP_METHOD(Qt_Network_QLocalSocket_QLocalSocket, abort);
PHP_METHOD(Qt_Network_QLocalSocket_QLocalSocket, isSequential);
PHP_METHOD(Qt_Network_QLocalSocket_QLocalSocket, bytesAvailable);
PHP_METHOD(Qt_Network_QLocalSocket_QLocalSocket, bytesToWrite);
PHP_METHOD(Qt_Network_QLocalSocket_QLocalSocket, canReadLine);
PHP_METHOD(Qt_Network_QLocalSocket_QLocalSocket, open);
PHP_METHOD(Qt_Network_QLocalSocket_QLocalSocket, close);
PHP_METHOD(Qt_Network_QLocalSocket_QLocalSocket, error);
PHP_METHOD(Qt_Network_QLocalSocket_QLocalSocket, flush);
PHP_METHOD(Qt_Network_QLocalSocket_QLocalSocket, isValid);
PHP_METHOD(Qt_Network_QLocalSocket_QLocalSocket, readBufferSize);
PHP_METHOD(Qt_Network_QLocalSocket_QLocalSocket, setReadBufferSize);
PHP_METHOD(Qt_Network_QLocalSocket_QLocalSocket, setSocketDescriptor);
PHP_METHOD(Qt_Network_QLocalSocket_QLocalSocket, socketDescriptor);
PHP_METHOD(Qt_Network_QLocalSocket_QLocalSocket, setSocketOptions);
PHP_METHOD(Qt_Network_QLocalSocket_QLocalSocket, socketOptions);
PHP_METHOD(Qt_Network_QLocalSocket_QLocalSocket, state);
PHP_METHOD(Qt_Network_QLocalSocket_QLocalSocket, waitForBytesWritten);
PHP_METHOD(Qt_Network_QLocalSocket_QLocalSocket, waitForConnected);
PHP_METHOD(Qt_Network_QLocalSocket_QLocalSocket, waitForDisconnected);
PHP_METHOD(Qt_Network_QLocalSocket_QLocalSocket, waitForReadyRead);
PHP_METHOD(Qt_Network_QLocalSocket_QLocalSocket, connected);
PHP_METHOD(Qt_Network_QLocalSocket_QLocalSocket, disconnected);
PHP_METHOD(Qt_Network_QLocalSocket_QLocalSocket, errorOccurred);
PHP_METHOD(Qt_Network_QLocalSocket_QLocalSocket, stateChanged);
PHP_METHOD(Qt_Network_QLocalSocket_QLocalSocket, skipData);
PHP_METHOD(Qt_Network_QLocalSocket_QLocalSocket, writeData);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qlocalsocket_qlocalsocket_staticmetaobject, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qlocalsocket_qlocalsocket_tr, 0, 1, IS_STRING, 0)
	ZEND_ARG_INFO(0, s)
	ZEND_ARG_INFO(0, c)
	ZEND_ARG_TYPE_INFO(0, n, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qlocalsocket_qlocalsocket_new_, 0, 0, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qlocalsocket_qlocalsocket_connecttoserver, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_INFO(0, openMode)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qlocalsocket_qlocalsocket_connecttoserverqstringqiodevicebaseopenmode, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, name, IS_STRING, 0)
	ZEND_ARG_INFO(0, openMode)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qlocalsocket_qlocalsocket_disconnectfromserver, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qlocalsocket_qlocalsocket_setservername, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, name, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qlocalsocket_qlocalsocket_servername, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qlocalsocket_qlocalsocket_fullservername, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qlocalsocket_qlocalsocket_abort, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qlocalsocket_qlocalsocket_issequential, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qlocalsocket_qlocalsocket_bytesavailable, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qlocalsocket_qlocalsocket_bytestowrite, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qlocalsocket_qlocalsocket_canreadline, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qlocalsocket_qlocalsocket_open, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_INFO(0, openMode)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qlocalsocket_qlocalsocket_close, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qlocalsocket_qlocalsocket_error, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qlocalsocket_qlocalsocket_flush, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qlocalsocket_qlocalsocket_isvalid, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qlocalsocket_qlocalsocket_readbuffersize, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qlocalsocket_qlocalsocket_setreadbuffersize, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, size, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qlocalsocket_qlocalsocket_setsocketdescriptor, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, socketDescriptor, IS_LONG, 0)
	ZEND_ARG_INFO(0, socketState)
	ZEND_ARG_INFO(0, openMode)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qlocalsocket_qlocalsocket_socketdescriptor, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qlocalsocket_qlocalsocket_setsocketoptions, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, option, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qlocalsocket_qlocalsocket_socketoptions, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qlocalsocket_qlocalsocket_state, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qlocalsocket_qlocalsocket_waitforbyteswritten, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, msecs, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qlocalsocket_qlocalsocket_waitforconnected, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, msecs, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qlocalsocket_qlocalsocket_waitfordisconnected, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, msecs, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qlocalsocket_qlocalsocket_waitforreadyread, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, msecs, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qlocalsocket_qlocalsocket_connected, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qlocalsocket_qlocalsocket_disconnected, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qlocalsocket_qlocalsocket_erroroccurred, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, socketError, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qlocalsocket_qlocalsocket_statechanged, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, socketState, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qlocalsocket_qlocalsocket_skipdata, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, maxSize, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qlocalsocket_qlocalsocket_writedata, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_INFO(0, arg0)
	ZEND_ARG_TYPE_INFO(0, arg1, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_network_qlocalsocket_qlocalsocket_method_entry) {
	PHP_ME(Qt_Network_QLocalSocket_QLocalSocket, staticMetaObject, arginfo_qt_network_qlocalsocket_qlocalsocket_staticmetaobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QLocalSocket_QLocalSocket, tr, arginfo_qt_network_qlocalsocket_qlocalsocket_tr, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QLocalSocket_QLocalSocket, new_, arginfo_qt_network_qlocalsocket_qlocalsocket_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QLocalSocket_QLocalSocket, connectToServer, arginfo_qt_network_qlocalsocket_qlocalsocket_connecttoserver, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QLocalSocket_QLocalSocket, connectToServerQStringQIODeviceBaseOpenMode, arginfo_qt_network_qlocalsocket_qlocalsocket_connecttoserverqstringqiodevicebaseopenmode, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QLocalSocket_QLocalSocket, disconnectFromServer, arginfo_qt_network_qlocalsocket_qlocalsocket_disconnectfromserver, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QLocalSocket_QLocalSocket, setServerName, arginfo_qt_network_qlocalsocket_qlocalsocket_setservername, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QLocalSocket_QLocalSocket, serverName, arginfo_qt_network_qlocalsocket_qlocalsocket_servername, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QLocalSocket_QLocalSocket, fullServerName, arginfo_qt_network_qlocalsocket_qlocalsocket_fullservername, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QLocalSocket_QLocalSocket, abort, arginfo_qt_network_qlocalsocket_qlocalsocket_abort, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QLocalSocket_QLocalSocket, isSequential, arginfo_qt_network_qlocalsocket_qlocalsocket_issequential, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QLocalSocket_QLocalSocket, bytesAvailable, arginfo_qt_network_qlocalsocket_qlocalsocket_bytesavailable, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QLocalSocket_QLocalSocket, bytesToWrite, arginfo_qt_network_qlocalsocket_qlocalsocket_bytestowrite, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QLocalSocket_QLocalSocket, canReadLine, arginfo_qt_network_qlocalsocket_qlocalsocket_canreadline, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QLocalSocket_QLocalSocket, open, arginfo_qt_network_qlocalsocket_qlocalsocket_open, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QLocalSocket_QLocalSocket, close, arginfo_qt_network_qlocalsocket_qlocalsocket_close, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QLocalSocket_QLocalSocket, error, arginfo_qt_network_qlocalsocket_qlocalsocket_error, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QLocalSocket_QLocalSocket, flush, arginfo_qt_network_qlocalsocket_qlocalsocket_flush, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QLocalSocket_QLocalSocket, isValid, arginfo_qt_network_qlocalsocket_qlocalsocket_isvalid, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QLocalSocket_QLocalSocket, readBufferSize, arginfo_qt_network_qlocalsocket_qlocalsocket_readbuffersize, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QLocalSocket_QLocalSocket, setReadBufferSize, arginfo_qt_network_qlocalsocket_qlocalsocket_setreadbuffersize, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QLocalSocket_QLocalSocket, setSocketDescriptor, arginfo_qt_network_qlocalsocket_qlocalsocket_setsocketdescriptor, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QLocalSocket_QLocalSocket, socketDescriptor, arginfo_qt_network_qlocalsocket_qlocalsocket_socketdescriptor, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QLocalSocket_QLocalSocket, setSocketOptions, arginfo_qt_network_qlocalsocket_qlocalsocket_setsocketoptions, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QLocalSocket_QLocalSocket, socketOptions, arginfo_qt_network_qlocalsocket_qlocalsocket_socketoptions, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QLocalSocket_QLocalSocket, state, arginfo_qt_network_qlocalsocket_qlocalsocket_state, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QLocalSocket_QLocalSocket, waitForBytesWritten, arginfo_qt_network_qlocalsocket_qlocalsocket_waitforbyteswritten, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QLocalSocket_QLocalSocket, waitForConnected, arginfo_qt_network_qlocalsocket_qlocalsocket_waitforconnected, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QLocalSocket_QLocalSocket, waitForDisconnected, arginfo_qt_network_qlocalsocket_qlocalsocket_waitfordisconnected, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QLocalSocket_QLocalSocket, waitForReadyRead, arginfo_qt_network_qlocalsocket_qlocalsocket_waitforreadyread, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QLocalSocket_QLocalSocket, connected, arginfo_qt_network_qlocalsocket_qlocalsocket_connected, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QLocalSocket_QLocalSocket, disconnected, arginfo_qt_network_qlocalsocket_qlocalsocket_disconnected, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QLocalSocket_QLocalSocket, errorOccurred, arginfo_qt_network_qlocalsocket_qlocalsocket_erroroccurred, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QLocalSocket_QLocalSocket, stateChanged, arginfo_qt_network_qlocalsocket_qlocalsocket_statechanged, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QLocalSocket_QLocalSocket, skipData, arginfo_qt_network_qlocalsocket_qlocalsocket_skipdata, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QLocalSocket_QLocalSocket, writeData, arginfo_qt_network_qlocalsocket_qlocalsocket_writedata, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
