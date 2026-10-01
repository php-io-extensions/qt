
extern zend_class_entry *qt_xml_qdomelement_qdomelement_ce;

ZEPHIR_INIT_CLASS(Qt_Xml_QDomElement_QDomElement);

PHP_METHOD(Qt_Xml_QDomElement_QDomElement, new_);
PHP_METHOD(Qt_Xml_QDomElement_QDomElement, newQDomElement);
PHP_METHOD(Qt_Xml_QDomElement_QDomElement, attribute);
PHP_METHOD(Qt_Xml_QDomElement_QDomElement, setAttribute);
PHP_METHOD(Qt_Xml_QDomElement_QDomElement, setAttributeQStringQlonglong);
PHP_METHOD(Qt_Xml_QDomElement_QDomElement, setAttributeQStringQulonglong);
PHP_METHOD(Qt_Xml_QDomElement_QDomElement, setAttributeQStringInt);
PHP_METHOD(Qt_Xml_QDomElement_QDomElement, setAttributeQStringUint);
PHP_METHOD(Qt_Xml_QDomElement_QDomElement, setAttributeQStringFloat);
PHP_METHOD(Qt_Xml_QDomElement_QDomElement, setAttributeQStringDouble);
PHP_METHOD(Qt_Xml_QDomElement_QDomElement, removeAttribute);
PHP_METHOD(Qt_Xml_QDomElement_QDomElement, attributeNode);
PHP_METHOD(Qt_Xml_QDomElement_QDomElement, setAttributeNode);
PHP_METHOD(Qt_Xml_QDomElement_QDomElement, removeAttributeNode);
PHP_METHOD(Qt_Xml_QDomElement_QDomElement, elementsByTagName);
PHP_METHOD(Qt_Xml_QDomElement_QDomElement, hasAttribute);
PHP_METHOD(Qt_Xml_QDomElement_QDomElement, attributeNS);
PHP_METHOD(Qt_Xml_QDomElement_QDomElement, setAttributeNS);
PHP_METHOD(Qt_Xml_QDomElement_QDomElement, setAttributeNSQStringQStringInt);
PHP_METHOD(Qt_Xml_QDomElement_QDomElement, setAttributeNSQStringQStringUint);
PHP_METHOD(Qt_Xml_QDomElement_QDomElement, setAttributeNSQStringQStringQlonglong);
PHP_METHOD(Qt_Xml_QDomElement_QDomElement, setAttributeNSQStringQStringQulonglong);
PHP_METHOD(Qt_Xml_QDomElement_QDomElement, setAttributeNSQStringQStringDouble);
PHP_METHOD(Qt_Xml_QDomElement_QDomElement, removeAttributeNS);
PHP_METHOD(Qt_Xml_QDomElement_QDomElement, attributeNodeNS);
PHP_METHOD(Qt_Xml_QDomElement_QDomElement, setAttributeNodeNS);
PHP_METHOD(Qt_Xml_QDomElement_QDomElement, elementsByTagNameNS);
PHP_METHOD(Qt_Xml_QDomElement_QDomElement, hasAttributeNS);
PHP_METHOD(Qt_Xml_QDomElement_QDomElement, tagName);
PHP_METHOD(Qt_Xml_QDomElement_QDomElement, setTagName);
PHP_METHOD(Qt_Xml_QDomElement_QDomElement, attributes);
PHP_METHOD(Qt_Xml_QDomElement_QDomElement, nodeType);
PHP_METHOD(Qt_Xml_QDomElement_QDomElement, text);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_xml_qdomelement_qdomelement_new_, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_xml_qdomelement_qdomelement_newqdomelement, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, element, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_xml_qdomelement_qdomelement_attribute, 0, 2, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, name, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, defValue, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_xml_qdomelement_qdomelement_setattribute, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, name, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_xml_qdomelement_qdomelement_setattributeqstringqlonglong, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, name, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_xml_qdomelement_qdomelement_setattributeqstringqulonglong, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, name, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_xml_qdomelement_qdomelement_setattributeqstringint, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, name, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_xml_qdomelement_qdomelement_setattributeqstringuint, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, name, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_xml_qdomelement_qdomelement_setattributeqstringfloat, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, name, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_xml_qdomelement_qdomelement_setattributeqstringdouble, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, name, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_xml_qdomelement_qdomelement_removeattribute, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, name, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_xml_qdomelement_qdomelement_attributenode, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, name, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_xml_qdomelement_qdomelement_setattributenode, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, newAttr, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_xml_qdomelement_qdomelement_removeattributenode, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, oldAttr, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_xml_qdomelement_qdomelement_elementsbytagname, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, tagname, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_xml_qdomelement_qdomelement_hasattribute, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, name, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_xml_qdomelement_qdomelement_attributens, 0, 3, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, nsURI, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, localName, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, defValue, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_xml_qdomelement_qdomelement_setattributens, 0, 4, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, nsURI, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, qName, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_xml_qdomelement_qdomelement_setattributensqstringqstringint, 0, 4, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, nsURI, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, qName, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_xml_qdomelement_qdomelement_setattributensqstringqstringuint, 0, 4, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, nsURI, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, qName, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_xml_qdomelement_qdomelement_setattributensqstringqstringqlonglong, 0, 4, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, nsURI, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, qName, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_xml_qdomelement_qdomelement_setattributensqstringqstringqulonglong, 0, 4, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, nsURI, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, qName, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_xml_qdomelement_qdomelement_setattributensqstringqstringdouble, 0, 4, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, nsURI, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, qName, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_xml_qdomelement_qdomelement_removeattributens, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, nsURI, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, localName, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_xml_qdomelement_qdomelement_attributenodens, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, nsURI, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, localName, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_xml_qdomelement_qdomelement_setattributenodens, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, newAttr, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_xml_qdomelement_qdomelement_elementsbytagnamens, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, nsURI, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, localName, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_xml_qdomelement_qdomelement_hasattributens, 0, 3, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, nsURI, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, localName, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_xml_qdomelement_qdomelement_tagname, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_xml_qdomelement_qdomelement_settagname, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, name, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_xml_qdomelement_qdomelement_attributes, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_xml_qdomelement_qdomelement_nodetype, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_xml_qdomelement_qdomelement_text, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_xml_qdomelement_qdomelement_method_entry) {
	PHP_ME(Qt_Xml_QDomElement_QDomElement, new_, arginfo_qt_xml_qdomelement_qdomelement_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Xml_QDomElement_QDomElement, newQDomElement, arginfo_qt_xml_qdomelement_qdomelement_newqdomelement, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Xml_QDomElement_QDomElement, attribute, arginfo_qt_xml_qdomelement_qdomelement_attribute, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Xml_QDomElement_QDomElement, setAttribute, arginfo_qt_xml_qdomelement_qdomelement_setattribute, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Xml_QDomElement_QDomElement, setAttributeQStringQlonglong, arginfo_qt_xml_qdomelement_qdomelement_setattributeqstringqlonglong, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Xml_QDomElement_QDomElement, setAttributeQStringQulonglong, arginfo_qt_xml_qdomelement_qdomelement_setattributeqstringqulonglong, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Xml_QDomElement_QDomElement, setAttributeQStringInt, arginfo_qt_xml_qdomelement_qdomelement_setattributeqstringint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Xml_QDomElement_QDomElement, setAttributeQStringUint, arginfo_qt_xml_qdomelement_qdomelement_setattributeqstringuint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Xml_QDomElement_QDomElement, setAttributeQStringFloat, arginfo_qt_xml_qdomelement_qdomelement_setattributeqstringfloat, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Xml_QDomElement_QDomElement, setAttributeQStringDouble, arginfo_qt_xml_qdomelement_qdomelement_setattributeqstringdouble, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Xml_QDomElement_QDomElement, removeAttribute, arginfo_qt_xml_qdomelement_qdomelement_removeattribute, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Xml_QDomElement_QDomElement, attributeNode, arginfo_qt_xml_qdomelement_qdomelement_attributenode, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Xml_QDomElement_QDomElement, setAttributeNode, arginfo_qt_xml_qdomelement_qdomelement_setattributenode, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Xml_QDomElement_QDomElement, removeAttributeNode, arginfo_qt_xml_qdomelement_qdomelement_removeattributenode, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Xml_QDomElement_QDomElement, elementsByTagName, arginfo_qt_xml_qdomelement_qdomelement_elementsbytagname, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Xml_QDomElement_QDomElement, hasAttribute, arginfo_qt_xml_qdomelement_qdomelement_hasattribute, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Xml_QDomElement_QDomElement, attributeNS, arginfo_qt_xml_qdomelement_qdomelement_attributens, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Xml_QDomElement_QDomElement, setAttributeNS, arginfo_qt_xml_qdomelement_qdomelement_setattributens, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Xml_QDomElement_QDomElement, setAttributeNSQStringQStringInt, arginfo_qt_xml_qdomelement_qdomelement_setattributensqstringqstringint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Xml_QDomElement_QDomElement, setAttributeNSQStringQStringUint, arginfo_qt_xml_qdomelement_qdomelement_setattributensqstringqstringuint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Xml_QDomElement_QDomElement, setAttributeNSQStringQStringQlonglong, arginfo_qt_xml_qdomelement_qdomelement_setattributensqstringqstringqlonglong, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Xml_QDomElement_QDomElement, setAttributeNSQStringQStringQulonglong, arginfo_qt_xml_qdomelement_qdomelement_setattributensqstringqstringqulonglong, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Xml_QDomElement_QDomElement, setAttributeNSQStringQStringDouble, arginfo_qt_xml_qdomelement_qdomelement_setattributensqstringqstringdouble, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Xml_QDomElement_QDomElement, removeAttributeNS, arginfo_qt_xml_qdomelement_qdomelement_removeattributens, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Xml_QDomElement_QDomElement, attributeNodeNS, arginfo_qt_xml_qdomelement_qdomelement_attributenodens, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Xml_QDomElement_QDomElement, setAttributeNodeNS, arginfo_qt_xml_qdomelement_qdomelement_setattributenodens, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Xml_QDomElement_QDomElement, elementsByTagNameNS, arginfo_qt_xml_qdomelement_qdomelement_elementsbytagnamens, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Xml_QDomElement_QDomElement, hasAttributeNS, arginfo_qt_xml_qdomelement_qdomelement_hasattributens, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Xml_QDomElement_QDomElement, tagName, arginfo_qt_xml_qdomelement_qdomelement_tagname, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Xml_QDomElement_QDomElement, setTagName, arginfo_qt_xml_qdomelement_qdomelement_settagname, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Xml_QDomElement_QDomElement, attributes, arginfo_qt_xml_qdomelement_qdomelement_attributes, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Xml_QDomElement_QDomElement, nodeType, arginfo_qt_xml_qdomelement_qdomelement_nodetype, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Xml_QDomElement_QDomElement, text, arginfo_qt_xml_qdomelement_qdomelement_text, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
