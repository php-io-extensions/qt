
extern zend_class_entry *qt_network_qhttpmultipart_qhttpmultipart_ce;

ZEPHIR_INIT_CLASS(Qt_Network_QHttpMultiPart_QHttpMultiPart);

PHP_METHOD(Qt_Network_QHttpMultiPart_QHttpMultiPart, staticMetaObject);
PHP_METHOD(Qt_Network_QHttpMultiPart_QHttpMultiPart, tr);
PHP_METHOD(Qt_Network_QHttpMultiPart_QHttpMultiPart, new_);
PHP_METHOD(Qt_Network_QHttpMultiPart_QHttpMultiPart, newQHttpMultiPartContentTypeQObject);
PHP_METHOD(Qt_Network_QHttpMultiPart_QHttpMultiPart, append);
PHP_METHOD(Qt_Network_QHttpMultiPart_QHttpMultiPart, setContentType);
PHP_METHOD(Qt_Network_QHttpMultiPart_QHttpMultiPart, boundary);
PHP_METHOD(Qt_Network_QHttpMultiPart_QHttpMultiPart, setBoundary);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qhttpmultipart_qhttpmultipart_staticmetaobject, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qhttpmultipart_qhttpmultipart_tr, 0, 1, IS_STRING, 0)
	ZEND_ARG_INFO(0, s)
	ZEND_ARG_INFO(0, c)
	ZEND_ARG_TYPE_INFO(0, n, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qhttpmultipart_qhttpmultipart_new_, 0, 0, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qhttpmultipart_qhttpmultipart_newqhttpmultipartcontenttypeqobject, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, contentType, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qhttpmultipart_qhttpmultipart_append, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, httpPart, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qhttpmultipart_qhttpmultipart_setcontenttype, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, contentType, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qhttpmultipart_qhttpmultipart_boundary, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qhttpmultipart_qhttpmultipart_setboundary, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, boundary, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_network_qhttpmultipart_qhttpmultipart_method_entry) {
	PHP_ME(Qt_Network_QHttpMultiPart_QHttpMultiPart, staticMetaObject, arginfo_qt_network_qhttpmultipart_qhttpmultipart_staticmetaobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QHttpMultiPart_QHttpMultiPart, tr, arginfo_qt_network_qhttpmultipart_qhttpmultipart_tr, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QHttpMultiPart_QHttpMultiPart, new_, arginfo_qt_network_qhttpmultipart_qhttpmultipart_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QHttpMultiPart_QHttpMultiPart, newQHttpMultiPartContentTypeQObject, arginfo_qt_network_qhttpmultipart_qhttpmultipart_newqhttpmultipartcontenttypeqobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QHttpMultiPart_QHttpMultiPart, append, arginfo_qt_network_qhttpmultipart_qhttpmultipart_append, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QHttpMultiPart_QHttpMultiPart, setContentType, arginfo_qt_network_qhttpmultipart_qhttpmultipart_setcontenttype, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QHttpMultiPart_QHttpMultiPart, boundary, arginfo_qt_network_qhttpmultipart_qhttpmultipart_boundary, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QHttpMultiPart_QHttpMultiPart, setBoundary, arginfo_qt_network_qhttpmultipart_qhttpmultipart_setboundary, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
