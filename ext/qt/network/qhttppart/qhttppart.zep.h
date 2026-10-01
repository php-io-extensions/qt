
extern zend_class_entry *qt_network_qhttppart_qhttppart_ce;

ZEPHIR_INIT_CLASS(Qt_Network_QHttpPart_QHttpPart);

PHP_METHOD(Qt_Network_QHttpPart_QHttpPart, new_);
PHP_METHOD(Qt_Network_QHttpPart_QHttpPart, newQHttpPart);
PHP_METHOD(Qt_Network_QHttpPart_QHttpPart, swap);
PHP_METHOD(Qt_Network_QHttpPart_QHttpPart, setHeader);
PHP_METHOD(Qt_Network_QHttpPart_QHttpPart, setRawHeader);
PHP_METHOD(Qt_Network_QHttpPart_QHttpPart, setBody);
PHP_METHOD(Qt_Network_QHttpPart_QHttpPart, setBodyDevice);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qhttppart_qhttppart_new_, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qhttppart_qhttppart_newqhttppart, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, other, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qhttppart_qhttppart_swap, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, other, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qhttppart_qhttppart_setheader, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, header, IS_LONG, 0)
	ZEND_ARG_INFO(0, value)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qhttppart_qhttppart_setrawheader, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, headerName, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, headerValue, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qhttppart_qhttppart_setbody, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, body, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qhttppart_qhttppart_setbodydevice, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, device, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_network_qhttppart_qhttppart_method_entry) {
	PHP_ME(Qt_Network_QHttpPart_QHttpPart, new_, arginfo_qt_network_qhttppart_qhttppart_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QHttpPart_QHttpPart, newQHttpPart, arginfo_qt_network_qhttppart_qhttppart_newqhttppart, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QHttpPart_QHttpPart, swap, arginfo_qt_network_qhttppart_qhttppart_swap, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QHttpPart_QHttpPart, setHeader, arginfo_qt_network_qhttppart_qhttppart_setheader, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QHttpPart_QHttpPart, setRawHeader, arginfo_qt_network_qhttppart_qhttppart_setrawheader, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QHttpPart_QHttpPart, setBody, arginfo_qt_network_qhttppart_qhttppart_setbody, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QHttpPart_QHttpPart, setBodyDevice, arginfo_qt_network_qhttppart_qhttppart_setbodydevice, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
