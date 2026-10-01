
extern zend_class_entry *qt_network_qtcpsocket_qtcpsocket_ce;

ZEPHIR_INIT_CLASS(Qt_Network_QTcpSocket_QTcpSocket);

PHP_METHOD(Qt_Network_QTcpSocket_QTcpSocket, bind);
PHP_METHOD(Qt_Network_QTcpSocket_QTcpSocket, bindQuint16QAbstractSocketBindMode);
PHP_METHOD(Qt_Network_QTcpSocket_QTcpSocket, staticMetaObject);
PHP_METHOD(Qt_Network_QTcpSocket_QTcpSocket, tr);
PHP_METHOD(Qt_Network_QTcpSocket_QTcpSocket, new_);
PHP_METHOD(Qt_Network_QTcpSocket_QTcpSocket, bindQHostAddressSpecialAddressQuint16QAbstractSocketBindMode);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qtcpsocket_qtcpsocket_bind, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, address, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, port, IS_LONG, 0)
	ZEND_ARG_INFO(0, mode)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qtcpsocket_qtcpsocket_bindquint16qabstractsocketbindmode, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, port, IS_LONG, 0)
	ZEND_ARG_INFO(0, mode)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qtcpsocket_qtcpsocket_staticmetaobject, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qtcpsocket_qtcpsocket_tr, 0, 1, IS_STRING, 0)
	ZEND_ARG_INFO(0, s)
	ZEND_ARG_INFO(0, c)
	ZEND_ARG_TYPE_INFO(0, n, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qtcpsocket_qtcpsocket_new_, 0, 0, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qtcpsocket_qtcpsocket_bindqhostaddressspecialaddressquint16qabstractsocketbindmode, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, addr, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, port, IS_LONG, 0)
	ZEND_ARG_INFO(0, mode)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_network_qtcpsocket_qtcpsocket_method_entry) {
	PHP_ME(Qt_Network_QTcpSocket_QTcpSocket, bind, arginfo_qt_network_qtcpsocket_qtcpsocket_bind, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QTcpSocket_QTcpSocket, bindQuint16QAbstractSocketBindMode, arginfo_qt_network_qtcpsocket_qtcpsocket_bindquint16qabstractsocketbindmode, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QTcpSocket_QTcpSocket, staticMetaObject, arginfo_qt_network_qtcpsocket_qtcpsocket_staticmetaobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QTcpSocket_QTcpSocket, tr, arginfo_qt_network_qtcpsocket_qtcpsocket_tr, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QTcpSocket_QTcpSocket, new_, arginfo_qt_network_qtcpsocket_qtcpsocket_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QTcpSocket_QTcpSocket, bindQHostAddressSpecialAddressQuint16QAbstractSocketBindMode, arginfo_qt_network_qtcpsocket_qtcpsocket_bindqhostaddressspecialaddressquint16qabstractsocketbindmode, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
