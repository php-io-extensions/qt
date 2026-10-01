
extern zend_class_entry *qt_network_qtcpserver_qtcpserver_ce;

ZEPHIR_INIT_CLASS(Qt_Network_QTcpServer_QTcpServer);

PHP_METHOD(Qt_Network_QTcpServer_QTcpServer, staticMetaObject);
PHP_METHOD(Qt_Network_QTcpServer_QTcpServer, tr);
PHP_METHOD(Qt_Network_QTcpServer_QTcpServer, new_);
PHP_METHOD(Qt_Network_QTcpServer_QTcpServer, listen);
PHP_METHOD(Qt_Network_QTcpServer_QTcpServer, close);
PHP_METHOD(Qt_Network_QTcpServer_QTcpServer, isListening);
PHP_METHOD(Qt_Network_QTcpServer_QTcpServer, setMaxPendingConnections);
PHP_METHOD(Qt_Network_QTcpServer_QTcpServer, maxPendingConnections);
PHP_METHOD(Qt_Network_QTcpServer_QTcpServer, setListenBacklogSize);
PHP_METHOD(Qt_Network_QTcpServer_QTcpServer, listenBacklogSize);
PHP_METHOD(Qt_Network_QTcpServer_QTcpServer, serverPort);
PHP_METHOD(Qt_Network_QTcpServer_QTcpServer, serverAddress);
PHP_METHOD(Qt_Network_QTcpServer_QTcpServer, socketDescriptor);
PHP_METHOD(Qt_Network_QTcpServer_QTcpServer, setSocketDescriptor);
PHP_METHOD(Qt_Network_QTcpServer_QTcpServer, waitForNewConnection);
PHP_METHOD(Qt_Network_QTcpServer_QTcpServer, hasPendingConnections);
PHP_METHOD(Qt_Network_QTcpServer_QTcpServer, nextPendingConnection);
PHP_METHOD(Qt_Network_QTcpServer_QTcpServer, serverError);
PHP_METHOD(Qt_Network_QTcpServer_QTcpServer, errorString);
PHP_METHOD(Qt_Network_QTcpServer_QTcpServer, pauseAccepting);
PHP_METHOD(Qt_Network_QTcpServer_QTcpServer, resumeAccepting);
PHP_METHOD(Qt_Network_QTcpServer_QTcpServer, setProxy);
PHP_METHOD(Qt_Network_QTcpServer_QTcpServer, proxy);
PHP_METHOD(Qt_Network_QTcpServer_QTcpServer, incomingConnection);
PHP_METHOD(Qt_Network_QTcpServer_QTcpServer, addPendingConnection);
PHP_METHOD(Qt_Network_QTcpServer_QTcpServer, newConnection);
PHP_METHOD(Qt_Network_QTcpServer_QTcpServer, acceptError);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qtcpserver_qtcpserver_staticmetaobject, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qtcpserver_qtcpserver_tr, 0, 1, IS_STRING, 0)
	ZEND_ARG_INFO(0, s)
	ZEND_ARG_INFO(0, c)
	ZEND_ARG_TYPE_INFO(0, n, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qtcpserver_qtcpserver_new_, 0, 0, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qtcpserver_qtcpserver_listen, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_INFO(0, address)
	ZEND_ARG_TYPE_INFO(0, port, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qtcpserver_qtcpserver_close, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qtcpserver_qtcpserver_islistening, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qtcpserver_qtcpserver_setmaxpendingconnections, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, numConnections, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qtcpserver_qtcpserver_maxpendingconnections, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qtcpserver_qtcpserver_setlistenbacklogsize, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, size, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qtcpserver_qtcpserver_listenbacklogsize, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qtcpserver_qtcpserver_serverport, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qtcpserver_qtcpserver_serveraddress, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qtcpserver_qtcpserver_socketdescriptor, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qtcpserver_qtcpserver_setsocketdescriptor, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, socketDescriptor, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qtcpserver_qtcpserver_waitfornewconnection, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, msec, IS_LONG, 0)
	ZEND_ARG_INFO(0, timedOut)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qtcpserver_qtcpserver_haspendingconnections, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qtcpserver_qtcpserver_nextpendingconnection, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qtcpserver_qtcpserver_servererror, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qtcpserver_qtcpserver_errorstring, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qtcpserver_qtcpserver_pauseaccepting, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qtcpserver_qtcpserver_resumeaccepting, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qtcpserver_qtcpserver_setproxy, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, networkProxy, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qtcpserver_qtcpserver_proxy, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qtcpserver_qtcpserver_incomingconnection, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle_, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qtcpserver_qtcpserver_addpendingconnection, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, socket, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qtcpserver_qtcpserver_newconnection, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qtcpserver_qtcpserver_accepterror, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, socketError, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_network_qtcpserver_qtcpserver_method_entry) {
	PHP_ME(Qt_Network_QTcpServer_QTcpServer, staticMetaObject, arginfo_qt_network_qtcpserver_qtcpserver_staticmetaobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QTcpServer_QTcpServer, tr, arginfo_qt_network_qtcpserver_qtcpserver_tr, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QTcpServer_QTcpServer, new_, arginfo_qt_network_qtcpserver_qtcpserver_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QTcpServer_QTcpServer, listen, arginfo_qt_network_qtcpserver_qtcpserver_listen, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QTcpServer_QTcpServer, close, arginfo_qt_network_qtcpserver_qtcpserver_close, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QTcpServer_QTcpServer, isListening, arginfo_qt_network_qtcpserver_qtcpserver_islistening, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QTcpServer_QTcpServer, setMaxPendingConnections, arginfo_qt_network_qtcpserver_qtcpserver_setmaxpendingconnections, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QTcpServer_QTcpServer, maxPendingConnections, arginfo_qt_network_qtcpserver_qtcpserver_maxpendingconnections, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QTcpServer_QTcpServer, setListenBacklogSize, arginfo_qt_network_qtcpserver_qtcpserver_setlistenbacklogsize, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QTcpServer_QTcpServer, listenBacklogSize, arginfo_qt_network_qtcpserver_qtcpserver_listenbacklogsize, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QTcpServer_QTcpServer, serverPort, arginfo_qt_network_qtcpserver_qtcpserver_serverport, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QTcpServer_QTcpServer, serverAddress, arginfo_qt_network_qtcpserver_qtcpserver_serveraddress, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QTcpServer_QTcpServer, socketDescriptor, arginfo_qt_network_qtcpserver_qtcpserver_socketdescriptor, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QTcpServer_QTcpServer, setSocketDescriptor, arginfo_qt_network_qtcpserver_qtcpserver_setsocketdescriptor, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QTcpServer_QTcpServer, waitForNewConnection, arginfo_qt_network_qtcpserver_qtcpserver_waitfornewconnection, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QTcpServer_QTcpServer, hasPendingConnections, arginfo_qt_network_qtcpserver_qtcpserver_haspendingconnections, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QTcpServer_QTcpServer, nextPendingConnection, arginfo_qt_network_qtcpserver_qtcpserver_nextpendingconnection, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QTcpServer_QTcpServer, serverError, arginfo_qt_network_qtcpserver_qtcpserver_servererror, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QTcpServer_QTcpServer, errorString, arginfo_qt_network_qtcpserver_qtcpserver_errorstring, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QTcpServer_QTcpServer, pauseAccepting, arginfo_qt_network_qtcpserver_qtcpserver_pauseaccepting, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QTcpServer_QTcpServer, resumeAccepting, arginfo_qt_network_qtcpserver_qtcpserver_resumeaccepting, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QTcpServer_QTcpServer, setProxy, arginfo_qt_network_qtcpserver_qtcpserver_setproxy, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QTcpServer_QTcpServer, proxy, arginfo_qt_network_qtcpserver_qtcpserver_proxy, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QTcpServer_QTcpServer, incomingConnection, arginfo_qt_network_qtcpserver_qtcpserver_incomingconnection, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QTcpServer_QTcpServer, addPendingConnection, arginfo_qt_network_qtcpserver_qtcpserver_addpendingconnection, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QTcpServer_QTcpServer, newConnection, arginfo_qt_network_qtcpserver_qtcpserver_newconnection, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QTcpServer_QTcpServer, acceptError, arginfo_qt_network_qtcpserver_qtcpserver_accepterror, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
