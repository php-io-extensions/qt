
extern zend_class_entry *qt_network_qsctpserver_qsctpserver_ce;

ZEPHIR_INIT_CLASS(Qt_Network_QSctpServer_QSctpServer);

PHP_METHOD(Qt_Network_QSctpServer_QSctpServer, staticMetaObject);
PHP_METHOD(Qt_Network_QSctpServer_QSctpServer, tr);
PHP_METHOD(Qt_Network_QSctpServer_QSctpServer, new_);
PHP_METHOD(Qt_Network_QSctpServer_QSctpServer, setMaximumChannelCount);
PHP_METHOD(Qt_Network_QSctpServer_QSctpServer, maximumChannelCount);
PHP_METHOD(Qt_Network_QSctpServer_QSctpServer, nextPendingDatagramConnection);
PHP_METHOD(Qt_Network_QSctpServer_QSctpServer, incomingConnection);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qsctpserver_qsctpserver_staticmetaobject, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qsctpserver_qsctpserver_tr, 0, 1, IS_STRING, 0)
	ZEND_ARG_INFO(0, s)
	ZEND_ARG_INFO(0, c)
	ZEND_ARG_TYPE_INFO(0, n, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qsctpserver_qsctpserver_new_, 0, 0, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qsctpserver_qsctpserver_setmaximumchannelcount, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, count, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qsctpserver_qsctpserver_maximumchannelcount, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qsctpserver_qsctpserver_nextpendingdatagramconnection, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qsctpserver_qsctpserver_incomingconnection, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle_, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_network_qsctpserver_qsctpserver_method_entry) {
	PHP_ME(Qt_Network_QSctpServer_QSctpServer, staticMetaObject, arginfo_qt_network_qsctpserver_qsctpserver_staticmetaobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QSctpServer_QSctpServer, tr, arginfo_qt_network_qsctpserver_qsctpserver_tr, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QSctpServer_QSctpServer, new_, arginfo_qt_network_qsctpserver_qsctpserver_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QSctpServer_QSctpServer, setMaximumChannelCount, arginfo_qt_network_qsctpserver_qsctpserver_setmaximumchannelcount, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QSctpServer_QSctpServer, maximumChannelCount, arginfo_qt_network_qsctpserver_qsctpserver_maximumchannelcount, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QSctpServer_QSctpServer, nextPendingDatagramConnection, arginfo_qt_network_qsctpserver_qsctpserver_nextpendingdatagramconnection, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QSctpServer_QSctpServer, incomingConnection, arginfo_qt_network_qsctpserver_qsctpserver_incomingconnection, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
