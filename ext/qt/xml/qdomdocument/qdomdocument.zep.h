
extern zend_class_entry *qt_xml_qdomdocument_qdomdocument_ce;

ZEPHIR_INIT_CLASS(Qt_Xml_QDomDocument_QDomDocument);

PHP_METHOD(Qt_Xml_QDomDocument_QDomDocument, new_);
PHP_METHOD(Qt_Xml_QDomDocument_QDomDocument, newQString);
PHP_METHOD(Qt_Xml_QDomDocument_QDomDocument, newQDomDocumentType);
PHP_METHOD(Qt_Xml_QDomDocument_QDomDocument, newQDomDocument);
PHP_METHOD(Qt_Xml_QDomDocument_QDomDocument, createElement);
PHP_METHOD(Qt_Xml_QDomDocument_QDomDocument, createDocumentFragment);
PHP_METHOD(Qt_Xml_QDomDocument_QDomDocument, createTextNode);
PHP_METHOD(Qt_Xml_QDomDocument_QDomDocument, createComment);
PHP_METHOD(Qt_Xml_QDomDocument_QDomDocument, createCDATASection);
PHP_METHOD(Qt_Xml_QDomDocument_QDomDocument, createProcessingInstruction);
PHP_METHOD(Qt_Xml_QDomDocument_QDomDocument, createAttribute);
PHP_METHOD(Qt_Xml_QDomDocument_QDomDocument, createEntityReference);
PHP_METHOD(Qt_Xml_QDomDocument_QDomDocument, elementsByTagName);
PHP_METHOD(Qt_Xml_QDomDocument_QDomDocument, importNode);
PHP_METHOD(Qt_Xml_QDomDocument_QDomDocument, createElementNS);
PHP_METHOD(Qt_Xml_QDomDocument_QDomDocument, createAttributeNS);
PHP_METHOD(Qt_Xml_QDomDocument_QDomDocument, elementsByTagNameNS);
PHP_METHOD(Qt_Xml_QDomDocument_QDomDocument, elementById);
PHP_METHOD(Qt_Xml_QDomDocument_QDomDocument, doctype);
PHP_METHOD(Qt_Xml_QDomDocument_QDomDocument, implementation);
PHP_METHOD(Qt_Xml_QDomDocument_QDomDocument, documentElement);
PHP_METHOD(Qt_Xml_QDomDocument_QDomDocument, nodeType);
PHP_METHOD(Qt_Xml_QDomDocument_QDomDocument, setContent);
PHP_METHOD(Qt_Xml_QDomDocument_QDomDocument, setContentQIODeviceQDomDocumentParseOptions);
PHP_METHOD(Qt_Xml_QDomDocument_QDomDocument, setContentQXmlStreamReaderQDomDocumentParseOptions);
PHP_METHOD(Qt_Xml_QDomDocument_QDomDocument, toString);
PHP_METHOD(Qt_Xml_QDomDocument_QDomDocument, toByteArray);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_xml_qdomdocument_qdomdocument_new_, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_xml_qdomdocument_qdomdocument_newqstring, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, name, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_xml_qdomdocument_qdomdocument_newqdomdocumenttype, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, doctype, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_xml_qdomdocument_qdomdocument_newqdomdocument, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, document, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_xml_qdomdocument_qdomdocument_createelement, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, tagName, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_xml_qdomdocument_qdomdocument_createdocumentfragment, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_xml_qdomdocument_qdomdocument_createtextnode, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, data, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_xml_qdomdocument_qdomdocument_createcomment, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, data, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_xml_qdomdocument_qdomdocument_createcdatasection, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, data, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_xml_qdomdocument_qdomdocument_createprocessinginstruction, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, target, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, data, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_xml_qdomdocument_qdomdocument_createattribute, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, name, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_xml_qdomdocument_qdomdocument_createentityreference, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, name, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_xml_qdomdocument_qdomdocument_elementsbytagname, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, tagname, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_xml_qdomdocument_qdomdocument_importnode, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, importedNode, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, deep, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_xml_qdomdocument_qdomdocument_createelementns, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, nsURI, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, qName, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_xml_qdomdocument_qdomdocument_createattributens, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, nsURI, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, qName, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_xml_qdomdocument_qdomdocument_elementsbytagnamens, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, nsURI, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, localName, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_xml_qdomdocument_qdomdocument_elementbyid, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, elementId, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_xml_qdomdocument_qdomdocument_doctype, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_xml_qdomdocument_qdomdocument_implementation, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_xml_qdomdocument_qdomdocument_documentelement, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_xml_qdomdocument_qdomdocument_nodetype, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_xml_qdomdocument_qdomdocument_setcontent, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, data, IS_STRING, 0)
	ZEND_ARG_INFO(0, options)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_xml_qdomdocument_qdomdocument_setcontentqiodeviceqdomdocumentparseoptions, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, device, IS_LONG, 0)
	ZEND_ARG_INFO(0, options)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_xml_qdomdocument_qdomdocument_setcontentqxmlstreamreaderqdomdocumentparseoptions, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, reader, IS_LONG, 0)
	ZEND_ARG_INFO(0, options)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_xml_qdomdocument_qdomdocument_tostring, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, indent, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_xml_qdomdocument_qdomdocument_tobytearray, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, indent, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_xml_qdomdocument_qdomdocument_method_entry) {
	PHP_ME(Qt_Xml_QDomDocument_QDomDocument, new_, arginfo_qt_xml_qdomdocument_qdomdocument_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Xml_QDomDocument_QDomDocument, newQString, arginfo_qt_xml_qdomdocument_qdomdocument_newqstring, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Xml_QDomDocument_QDomDocument, newQDomDocumentType, arginfo_qt_xml_qdomdocument_qdomdocument_newqdomdocumenttype, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Xml_QDomDocument_QDomDocument, newQDomDocument, arginfo_qt_xml_qdomdocument_qdomdocument_newqdomdocument, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Xml_QDomDocument_QDomDocument, createElement, arginfo_qt_xml_qdomdocument_qdomdocument_createelement, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Xml_QDomDocument_QDomDocument, createDocumentFragment, arginfo_qt_xml_qdomdocument_qdomdocument_createdocumentfragment, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Xml_QDomDocument_QDomDocument, createTextNode, arginfo_qt_xml_qdomdocument_qdomdocument_createtextnode, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Xml_QDomDocument_QDomDocument, createComment, arginfo_qt_xml_qdomdocument_qdomdocument_createcomment, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Xml_QDomDocument_QDomDocument, createCDATASection, arginfo_qt_xml_qdomdocument_qdomdocument_createcdatasection, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Xml_QDomDocument_QDomDocument, createProcessingInstruction, arginfo_qt_xml_qdomdocument_qdomdocument_createprocessinginstruction, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Xml_QDomDocument_QDomDocument, createAttribute, arginfo_qt_xml_qdomdocument_qdomdocument_createattribute, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Xml_QDomDocument_QDomDocument, createEntityReference, arginfo_qt_xml_qdomdocument_qdomdocument_createentityreference, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Xml_QDomDocument_QDomDocument, elementsByTagName, arginfo_qt_xml_qdomdocument_qdomdocument_elementsbytagname, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Xml_QDomDocument_QDomDocument, importNode, arginfo_qt_xml_qdomdocument_qdomdocument_importnode, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Xml_QDomDocument_QDomDocument, createElementNS, arginfo_qt_xml_qdomdocument_qdomdocument_createelementns, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Xml_QDomDocument_QDomDocument, createAttributeNS, arginfo_qt_xml_qdomdocument_qdomdocument_createattributens, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Xml_QDomDocument_QDomDocument, elementsByTagNameNS, arginfo_qt_xml_qdomdocument_qdomdocument_elementsbytagnamens, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Xml_QDomDocument_QDomDocument, elementById, arginfo_qt_xml_qdomdocument_qdomdocument_elementbyid, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Xml_QDomDocument_QDomDocument, doctype, arginfo_qt_xml_qdomdocument_qdomdocument_doctype, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Xml_QDomDocument_QDomDocument, implementation, arginfo_qt_xml_qdomdocument_qdomdocument_implementation, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Xml_QDomDocument_QDomDocument, documentElement, arginfo_qt_xml_qdomdocument_qdomdocument_documentelement, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Xml_QDomDocument_QDomDocument, nodeType, arginfo_qt_xml_qdomdocument_qdomdocument_nodetype, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Xml_QDomDocument_QDomDocument, setContent, arginfo_qt_xml_qdomdocument_qdomdocument_setcontent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Xml_QDomDocument_QDomDocument, setContentQIODeviceQDomDocumentParseOptions, arginfo_qt_xml_qdomdocument_qdomdocument_setcontentqiodeviceqdomdocumentparseoptions, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Xml_QDomDocument_QDomDocument, setContentQXmlStreamReaderQDomDocumentParseOptions, arginfo_qt_xml_qdomdocument_qdomdocument_setcontentqxmlstreamreaderqdomdocumentparseoptions, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Xml_QDomDocument_QDomDocument, toString, arginfo_qt_xml_qdomdocument_qdomdocument_tostring, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Xml_QDomDocument_QDomDocument, toByteArray, arginfo_qt_xml_qdomdocument_qdomdocument_tobytearray, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
