
extern zend_class_entry *qt_network_qformdatabuilder_qformdatabuilder_ce;

ZEPHIR_INIT_CLASS(Qt_Network_QFormDataBuilder_QFormDataBuilder);

PHP_METHOD(Qt_Network_QFormDataBuilder_QFormDataBuilder, new_);
PHP_METHOD(Qt_Network_QFormDataBuilder_QFormDataBuilder, swap);
PHP_METHOD(Qt_Network_QFormDataBuilder_QFormDataBuilder, part);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qformdatabuilder_qformdatabuilder_new_, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qformdatabuilder_qformdatabuilder_swap, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, other, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qformdatabuilder_qformdatabuilder_part, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, name, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_network_qformdatabuilder_qformdatabuilder_method_entry) {
	PHP_ME(Qt_Network_QFormDataBuilder_QFormDataBuilder, new_, arginfo_qt_network_qformdatabuilder_qformdatabuilder_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QFormDataBuilder_QFormDataBuilder, swap, arginfo_qt_network_qformdatabuilder_qformdatabuilder_swap, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QFormDataBuilder_QFormDataBuilder, part, arginfo_qt_network_qformdatabuilder_qformdatabuilder_part, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
