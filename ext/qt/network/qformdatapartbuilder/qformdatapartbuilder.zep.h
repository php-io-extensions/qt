
extern zend_class_entry *qt_network_qformdatapartbuilder_qformdatapartbuilder_ce;

ZEPHIR_INIT_CLASS(Qt_Network_QFormDataPartBuilder_QFormDataPartBuilder);

PHP_METHOD(Qt_Network_QFormDataPartBuilder_QFormDataPartBuilder, swap);
PHP_METHOD(Qt_Network_QFormDataPartBuilder_QFormDataPartBuilder, new_);
PHP_METHOD(Qt_Network_QFormDataPartBuilder_QFormDataPartBuilder, setBody);
PHP_METHOD(Qt_Network_QFormDataPartBuilder_QFormDataPartBuilder, setBodyDevice);
PHP_METHOD(Qt_Network_QFormDataPartBuilder_QFormDataPartBuilder, setHeaders);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qformdatapartbuilder_qformdatapartbuilder_swap, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, other, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qformdatapartbuilder_qformdatapartbuilder_new_, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qformdatapartbuilder_qformdatapartbuilder_setbody, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, data, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, fileName, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, mimeType, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qformdatapartbuilder_qformdatapartbuilder_setbodydevice, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, body, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, fileName, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, mimeType, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qformdatapartbuilder_qformdatapartbuilder_setheaders, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, headers, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_network_qformdatapartbuilder_qformdatapartbuilder_method_entry) {
	PHP_ME(Qt_Network_QFormDataPartBuilder_QFormDataPartBuilder, swap, arginfo_qt_network_qformdatapartbuilder_qformdatapartbuilder_swap, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QFormDataPartBuilder_QFormDataPartBuilder, new_, arginfo_qt_network_qformdatapartbuilder_qformdatapartbuilder_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QFormDataPartBuilder_QFormDataPartBuilder, setBody, arginfo_qt_network_qformdatapartbuilder_qformdatapartbuilder_setbody, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QFormDataPartBuilder_QFormDataPartBuilder, setBodyDevice, arginfo_qt_network_qformdatapartbuilder_qformdatapartbuilder_setbodydevice, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QFormDataPartBuilder_QFormDataPartBuilder, setHeaders, arginfo_qt_network_qformdatapartbuilder_qformdatapartbuilder_setheaders, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
