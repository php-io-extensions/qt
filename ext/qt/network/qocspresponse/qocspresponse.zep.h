
extern zend_class_entry *qt_network_qocspresponse_qocspresponse_ce;

ZEPHIR_INIT_CLASS(Qt_Network_QOcspResponse_QOcspResponse);

PHP_METHOD(Qt_Network_QOcspResponse_QOcspResponse, new_);
PHP_METHOD(Qt_Network_QOcspResponse_QOcspResponse, newQOcspResponse);
PHP_METHOD(Qt_Network_QOcspResponse_QOcspResponse, certificateStatus);
PHP_METHOD(Qt_Network_QOcspResponse_QOcspResponse, revocationReason);
PHP_METHOD(Qt_Network_QOcspResponse_QOcspResponse, responder);
PHP_METHOD(Qt_Network_QOcspResponse_QOcspResponse, subject);
PHP_METHOD(Qt_Network_QOcspResponse_QOcspResponse, swap);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qocspresponse_qocspresponse_new_, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qocspresponse_qocspresponse_newqocspresponse, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, other, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qocspresponse_qocspresponse_certificatestatus, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qocspresponse_qocspresponse_revocationreason, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qocspresponse_qocspresponse_responder, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qocspresponse_qocspresponse_subject, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qocspresponse_qocspresponse_swap, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, other, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_network_qocspresponse_qocspresponse_method_entry) {
	PHP_ME(Qt_Network_QOcspResponse_QOcspResponse, new_, arginfo_qt_network_qocspresponse_qocspresponse_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QOcspResponse_QOcspResponse, newQOcspResponse, arginfo_qt_network_qocspresponse_qocspresponse_newqocspresponse, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QOcspResponse_QOcspResponse, certificateStatus, arginfo_qt_network_qocspresponse_qocspresponse_certificatestatus, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QOcspResponse_QOcspResponse, revocationReason, arginfo_qt_network_qocspresponse_qocspresponse_revocationreason, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QOcspResponse_QOcspResponse, responder, arginfo_qt_network_qocspresponse_qocspresponse_responder, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QOcspResponse_QOcspResponse, subject, arginfo_qt_network_qocspresponse_qocspresponse_subject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QOcspResponse_QOcspResponse, swap, arginfo_qt_network_qocspresponse_qocspresponse_swap, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
