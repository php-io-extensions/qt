
extern zend_class_entry *qt_xml_qdomdocumenttype_qdomdocumenttype_ce;

ZEPHIR_INIT_CLASS(Qt_Xml_QDomDocumentType_QDomDocumentType);

PHP_METHOD(Qt_Xml_QDomDocumentType_QDomDocumentType, new_);
PHP_METHOD(Qt_Xml_QDomDocumentType_QDomDocumentType, newQDomDocumentType);
PHP_METHOD(Qt_Xml_QDomDocumentType_QDomDocumentType, name);
PHP_METHOD(Qt_Xml_QDomDocumentType_QDomDocumentType, entities);
PHP_METHOD(Qt_Xml_QDomDocumentType_QDomDocumentType, notations);
PHP_METHOD(Qt_Xml_QDomDocumentType_QDomDocumentType, publicId);
PHP_METHOD(Qt_Xml_QDomDocumentType_QDomDocumentType, systemId);
PHP_METHOD(Qt_Xml_QDomDocumentType_QDomDocumentType, internalSubset);
PHP_METHOD(Qt_Xml_QDomDocumentType_QDomDocumentType, nodeType);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_xml_qdomdocumenttype_qdomdocumenttype_new_, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_xml_qdomdocumenttype_qdomdocumenttype_newqdomdocumenttype, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, documentType, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_xml_qdomdocumenttype_qdomdocumenttype_name, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_xml_qdomdocumenttype_qdomdocumenttype_entities, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_xml_qdomdocumenttype_qdomdocumenttype_notations, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_xml_qdomdocumenttype_qdomdocumenttype_publicid, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_xml_qdomdocumenttype_qdomdocumenttype_systemid, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_xml_qdomdocumenttype_qdomdocumenttype_internalsubset, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_xml_qdomdocumenttype_qdomdocumenttype_nodetype, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_xml_qdomdocumenttype_qdomdocumenttype_method_entry) {
	PHP_ME(Qt_Xml_QDomDocumentType_QDomDocumentType, new_, arginfo_qt_xml_qdomdocumenttype_qdomdocumenttype_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Xml_QDomDocumentType_QDomDocumentType, newQDomDocumentType, arginfo_qt_xml_qdomdocumenttype_qdomdocumenttype_newqdomdocumenttype, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Xml_QDomDocumentType_QDomDocumentType, name, arginfo_qt_xml_qdomdocumenttype_qdomdocumenttype_name, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Xml_QDomDocumentType_QDomDocumentType, entities, arginfo_qt_xml_qdomdocumenttype_qdomdocumenttype_entities, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Xml_QDomDocumentType_QDomDocumentType, notations, arginfo_qt_xml_qdomdocumenttype_qdomdocumenttype_notations, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Xml_QDomDocumentType_QDomDocumentType, publicId, arginfo_qt_xml_qdomdocumenttype_qdomdocumenttype_publicid, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Xml_QDomDocumentType_QDomDocumentType, systemId, arginfo_qt_xml_qdomdocumenttype_qdomdocumenttype_systemid, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Xml_QDomDocumentType_QDomDocumentType, internalSubset, arginfo_qt_xml_qdomdocumenttype_qdomdocumenttype_internalsubset, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Xml_QDomDocumentType_QDomDocumentType, nodeType, arginfo_qt_xml_qdomdocumenttype_qdomdocumenttype_nodetype, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
