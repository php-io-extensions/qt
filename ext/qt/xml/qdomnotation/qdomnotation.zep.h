
extern zend_class_entry *qt_xml_qdomnotation_qdomnotation_ce;

ZEPHIR_INIT_CLASS(Qt_Xml_QDomNotation_QDomNotation);

PHP_METHOD(Qt_Xml_QDomNotation_QDomNotation, new_);
PHP_METHOD(Qt_Xml_QDomNotation_QDomNotation, newQDomNotation);
PHP_METHOD(Qt_Xml_QDomNotation_QDomNotation, publicId);
PHP_METHOD(Qt_Xml_QDomNotation_QDomNotation, systemId);
PHP_METHOD(Qt_Xml_QDomNotation_QDomNotation, nodeType);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_xml_qdomnotation_qdomnotation_new_, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_xml_qdomnotation_qdomnotation_newqdomnotation, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, notation, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_xml_qdomnotation_qdomnotation_publicid, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_xml_qdomnotation_qdomnotation_systemid, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_xml_qdomnotation_qdomnotation_nodetype, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_xml_qdomnotation_qdomnotation_method_entry) {
	PHP_ME(Qt_Xml_QDomNotation_QDomNotation, new_, arginfo_qt_xml_qdomnotation_qdomnotation_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Xml_QDomNotation_QDomNotation, newQDomNotation, arginfo_qt_xml_qdomnotation_qdomnotation_newqdomnotation, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Xml_QDomNotation_QDomNotation, publicId, arginfo_qt_xml_qdomnotation_qdomnotation_publicid, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Xml_QDomNotation_QDomNotation, systemId, arginfo_qt_xml_qdomnotation_qdomnotation_systemid, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Xml_QDomNotation_QDomNotation, nodeType, arginfo_qt_xml_qdomnotation_qdomnotation_nodetype, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
