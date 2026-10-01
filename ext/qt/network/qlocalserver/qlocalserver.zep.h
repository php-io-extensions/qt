
extern zend_class_entry *qt_network_qlocalserver_qlocalserver_ce;

ZEPHIR_INIT_CLASS(Qt_Network_QLocalServer_QLocalServer);

PHP_METHOD(Qt_Network_QLocalServer_QLocalServer, staticMetaObject);
PHP_METHOD(Qt_Network_QLocalServer_QLocalServer, tr);
PHP_METHOD(Qt_Network_QLocalServer_QLocalServer, newConnection);
PHP_METHOD(Qt_Network_QLocalServer_QLocalServer, new_);
PHP_METHOD(Qt_Network_QLocalServer_QLocalServer, close);
PHP_METHOD(Qt_Network_QLocalServer_QLocalServer, errorString);
PHP_METHOD(Qt_Network_QLocalServer_QLocalServer, hasPendingConnections);
PHP_METHOD(Qt_Network_QLocalServer_QLocalServer, isListening);
PHP_METHOD(Qt_Network_QLocalServer_QLocalServer, listen);
PHP_METHOD(Qt_Network_QLocalServer_QLocalServer, listenQintptr);
PHP_METHOD(Qt_Network_QLocalServer_QLocalServer, maxPendingConnections);
PHP_METHOD(Qt_Network_QLocalServer_QLocalServer, nextPendingConnection);
PHP_METHOD(Qt_Network_QLocalServer_QLocalServer, serverName);
PHP_METHOD(Qt_Network_QLocalServer_QLocalServer, fullServerName);
PHP_METHOD(Qt_Network_QLocalServer_QLocalServer, removeServer);
PHP_METHOD(Qt_Network_QLocalServer_QLocalServer, serverError);
PHP_METHOD(Qt_Network_QLocalServer_QLocalServer, setMaxPendingConnections);
PHP_METHOD(Qt_Network_QLocalServer_QLocalServer, waitForNewConnection);
PHP_METHOD(Qt_Network_QLocalServer_QLocalServer, setListenBacklogSize);
PHP_METHOD(Qt_Network_QLocalServer_QLocalServer, listenBacklogSize);
PHP_METHOD(Qt_Network_QLocalServer_QLocalServer, setSocketOptions);
PHP_METHOD(Qt_Network_QLocalServer_QLocalServer, socketOptions);
PHP_METHOD(Qt_Network_QLocalServer_QLocalServer, socketDescriptor);
PHP_METHOD(Qt_Network_QLocalServer_QLocalServer, incomingConnection);
PHP_METHOD(Qt_Network_QLocalServer_QLocalServer, addPendingConnection);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qlocalserver_qlocalserver_staticmetaobject, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qlocalserver_qlocalserver_tr, 0, 1, IS_STRING, 0)
	ZEND_ARG_INFO(0, s)
	ZEND_ARG_INFO(0, c)
	ZEND_ARG_TYPE_INFO(0, n, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qlocalserver_qlocalserver_newconnection, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qlocalserver_qlocalserver_new_, 0, 0, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qlocalserver_qlocalserver_close, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qlocalserver_qlocalserver_errorstring, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qlocalserver_qlocalserver_haspendingconnections, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qlocalserver_qlocalserver_islistening, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qlocalserver_qlocalserver_listen, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, name, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qlocalserver_qlocalserver_listenqintptr, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, socketDescriptor, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qlocalserver_qlocalserver_maxpendingconnections, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qlocalserver_qlocalserver_nextpendingconnection, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qlocalserver_qlocalserver_servername, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qlocalserver_qlocalserver_fullservername, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qlocalserver_qlocalserver_removeserver, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, name, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qlocalserver_qlocalserver_servererror, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qlocalserver_qlocalserver_setmaxpendingconnections, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, numConnections, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qlocalserver_qlocalserver_waitfornewconnection, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, msec, IS_LONG, 0)
	ZEND_ARG_INFO(0, timedOut)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qlocalserver_qlocalserver_setlistenbacklogsize, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, size, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qlocalserver_qlocalserver_listenbacklogsize, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qlocalserver_qlocalserver_setsocketoptions, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, options, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qlocalserver_qlocalserver_socketoptions, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qlocalserver_qlocalserver_socketdescriptor, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qlocalserver_qlocalserver_incomingconnection, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, socketDescriptor, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qlocalserver_qlocalserver_addpendingconnection, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, socket, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_network_qlocalserver_qlocalserver_method_entry) {
	PHP_ME(Qt_Network_QLocalServer_QLocalServer, staticMetaObject, arginfo_qt_network_qlocalserver_qlocalserver_staticmetaobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QLocalServer_QLocalServer, tr, arginfo_qt_network_qlocalserver_qlocalserver_tr, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QLocalServer_QLocalServer, newConnection, arginfo_qt_network_qlocalserver_qlocalserver_newconnection, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QLocalServer_QLocalServer, new_, arginfo_qt_network_qlocalserver_qlocalserver_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QLocalServer_QLocalServer, close, arginfo_qt_network_qlocalserver_qlocalserver_close, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QLocalServer_QLocalServer, errorString, arginfo_qt_network_qlocalserver_qlocalserver_errorstring, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QLocalServer_QLocalServer, hasPendingConnections, arginfo_qt_network_qlocalserver_qlocalserver_haspendingconnections, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QLocalServer_QLocalServer, isListening, arginfo_qt_network_qlocalserver_qlocalserver_islistening, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QLocalServer_QLocalServer, listen, arginfo_qt_network_qlocalserver_qlocalserver_listen, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QLocalServer_QLocalServer, listenQintptr, arginfo_qt_network_qlocalserver_qlocalserver_listenqintptr, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QLocalServer_QLocalServer, maxPendingConnections, arginfo_qt_network_qlocalserver_qlocalserver_maxpendingconnections, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QLocalServer_QLocalServer, nextPendingConnection, arginfo_qt_network_qlocalserver_qlocalserver_nextpendingconnection, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QLocalServer_QLocalServer, serverName, arginfo_qt_network_qlocalserver_qlocalserver_servername, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QLocalServer_QLocalServer, fullServerName, arginfo_qt_network_qlocalserver_qlocalserver_fullservername, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QLocalServer_QLocalServer, removeServer, arginfo_qt_network_qlocalserver_qlocalserver_removeserver, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QLocalServer_QLocalServer, serverError, arginfo_qt_network_qlocalserver_qlocalserver_servererror, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QLocalServer_QLocalServer, setMaxPendingConnections, arginfo_qt_network_qlocalserver_qlocalserver_setmaxpendingconnections, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QLocalServer_QLocalServer, waitForNewConnection, arginfo_qt_network_qlocalserver_qlocalserver_waitfornewconnection, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QLocalServer_QLocalServer, setListenBacklogSize, arginfo_qt_network_qlocalserver_qlocalserver_setlistenbacklogsize, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QLocalServer_QLocalServer, listenBacklogSize, arginfo_qt_network_qlocalserver_qlocalserver_listenbacklogsize, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QLocalServer_QLocalServer, setSocketOptions, arginfo_qt_network_qlocalserver_qlocalserver_setsocketoptions, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QLocalServer_QLocalServer, socketOptions, arginfo_qt_network_qlocalserver_qlocalserver_socketoptions, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QLocalServer_QLocalServer, socketDescriptor, arginfo_qt_network_qlocalserver_qlocalserver_socketdescriptor, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QLocalServer_QLocalServer, incomingConnection, arginfo_qt_network_qlocalserver_qlocalserver_incomingconnection, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QLocalServer_QLocalServer, addPendingConnection, arginfo_qt_network_qlocalserver_qlocalserver_addpendingconnection, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
