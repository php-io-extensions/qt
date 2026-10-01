
extern zend_class_entry *qt_network_qsctpsocket_qsctpsocket_ce;

ZEPHIR_INIT_CLASS(Qt_Network_QSctpSocket_QSctpSocket);

PHP_METHOD(Qt_Network_QSctpSocket_QSctpSocket, staticMetaObject);
PHP_METHOD(Qt_Network_QSctpSocket_QSctpSocket, tr);
PHP_METHOD(Qt_Network_QSctpSocket_QSctpSocket, new_);
PHP_METHOD(Qt_Network_QSctpSocket_QSctpSocket, close);
PHP_METHOD(Qt_Network_QSctpSocket_QSctpSocket, disconnectFromHost);
PHP_METHOD(Qt_Network_QSctpSocket_QSctpSocket, setMaximumChannelCount);
PHP_METHOD(Qt_Network_QSctpSocket_QSctpSocket, maximumChannelCount);
PHP_METHOD(Qt_Network_QSctpSocket_QSctpSocket, isInDatagramMode);
PHP_METHOD(Qt_Network_QSctpSocket_QSctpSocket, readDatagram);
PHP_METHOD(Qt_Network_QSctpSocket_QSctpSocket, writeDatagram);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qsctpsocket_qsctpsocket_staticmetaobject, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qsctpsocket_qsctpsocket_tr, 0, 1, IS_STRING, 0)
	ZEND_ARG_INFO(0, s)
	ZEND_ARG_INFO(0, c)
	ZEND_ARG_TYPE_INFO(0, n, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qsctpsocket_qsctpsocket_new_, 0, 0, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qsctpsocket_qsctpsocket_close, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qsctpsocket_qsctpsocket_disconnectfromhost, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qsctpsocket_qsctpsocket_setmaximumchannelcount, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, count, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qsctpsocket_qsctpsocket_maximumchannelcount, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qsctpsocket_qsctpsocket_isindatagrammode, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qsctpsocket_qsctpsocket_readdatagram, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qsctpsocket_qsctpsocket_writedatagram, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, datagram, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_network_qsctpsocket_qsctpsocket_method_entry) {
	PHP_ME(Qt_Network_QSctpSocket_QSctpSocket, staticMetaObject, arginfo_qt_network_qsctpsocket_qsctpsocket_staticmetaobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QSctpSocket_QSctpSocket, tr, arginfo_qt_network_qsctpsocket_qsctpsocket_tr, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QSctpSocket_QSctpSocket, new_, arginfo_qt_network_qsctpsocket_qsctpsocket_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QSctpSocket_QSctpSocket, close, arginfo_qt_network_qsctpsocket_qsctpsocket_close, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QSctpSocket_QSctpSocket, disconnectFromHost, arginfo_qt_network_qsctpsocket_qsctpsocket_disconnectfromhost, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QSctpSocket_QSctpSocket, setMaximumChannelCount, arginfo_qt_network_qsctpsocket_qsctpsocket_setmaximumchannelcount, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QSctpSocket_QSctpSocket, maximumChannelCount, arginfo_qt_network_qsctpsocket_qsctpsocket_maximumchannelcount, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QSctpSocket_QSctpSocket, isInDatagramMode, arginfo_qt_network_qsctpsocket_qsctpsocket_isindatagrammode, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QSctpSocket_QSctpSocket, readDatagram, arginfo_qt_network_qsctpsocket_qsctpsocket_readdatagram, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QSctpSocket_QSctpSocket, writeDatagram, arginfo_qt_network_qsctpsocket_qsctpsocket_writedatagram, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
