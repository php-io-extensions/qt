
extern zend_class_entry *qt_network_qsslerror_qsslerror_ce;

ZEPHIR_INIT_CLASS(Qt_Network_QSslError_QSslError);

PHP_METHOD(Qt_Network_QSslError_QSslError, staticMetaObject);
PHP_METHOD(Qt_Network_QSslError_QSslError, qt_check_for_QGADGET_macro);
PHP_METHOD(Qt_Network_QSslError_QSslError, new_);
PHP_METHOD(Qt_Network_QSslError_QSslError, newQSslErrorSslError);
PHP_METHOD(Qt_Network_QSslError_QSslError, newQSslErrorSslErrorQSslCertificate);
PHP_METHOD(Qt_Network_QSslError_QSslError, newQSslError);
PHP_METHOD(Qt_Network_QSslError_QSslError, swap);
PHP_METHOD(Qt_Network_QSslError_QSslError, error);
PHP_METHOD(Qt_Network_QSslError_QSslError, errorString);
PHP_METHOD(Qt_Network_QSslError_QSslError, certificate);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qsslerror_qsslerror_staticmetaobject, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qsslerror_qsslerror_qt_check_for_qgadget_macro, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qsslerror_qsslerror_new_, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qsslerror_qsslerror_newqsslerrorsslerror, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, error, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qsslerror_qsslerror_newqsslerrorsslerrorqsslcertificate, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, error, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, certificate, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qsslerror_qsslerror_newqsslerror, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, other, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qsslerror_qsslerror_swap, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, other, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qsslerror_qsslerror_error, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qsslerror_qsslerror_errorstring, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qsslerror_qsslerror_certificate, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_network_qsslerror_qsslerror_method_entry) {
	PHP_ME(Qt_Network_QSslError_QSslError, staticMetaObject, arginfo_qt_network_qsslerror_qsslerror_staticmetaobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QSslError_QSslError, qt_check_for_QGADGET_macro, arginfo_qt_network_qsslerror_qsslerror_qt_check_for_qgadget_macro, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QSslError_QSslError, new_, arginfo_qt_network_qsslerror_qsslerror_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QSslError_QSslError, newQSslErrorSslError, arginfo_qt_network_qsslerror_qsslerror_newqsslerrorsslerror, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QSslError_QSslError, newQSslErrorSslErrorQSslCertificate, arginfo_qt_network_qsslerror_qsslerror_newqsslerrorsslerrorqsslcertificate, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QSslError_QSslError, newQSslError, arginfo_qt_network_qsslerror_qsslerror_newqsslerror, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QSslError_QSslError, swap, arginfo_qt_network_qsslerror_qsslerror_swap, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QSslError_QSslError, error, arginfo_qt_network_qsslerror_qsslerror_error, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QSslError_QSslError, errorString, arginfo_qt_network_qsslerror_qsslerror_errorstring, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QSslError_QSslError, certificate, arginfo_qt_network_qsslerror_qsslerror_certificate, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
