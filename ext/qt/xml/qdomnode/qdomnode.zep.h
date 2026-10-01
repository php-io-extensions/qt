
extern zend_class_entry *qt_xml_qdomnode_qdomnode_ce;

ZEPHIR_INIT_CLASS(Qt_Xml_QDomNode_QDomNode);

PHP_METHOD(Qt_Xml_QDomNode_QDomNode, new_);
PHP_METHOD(Qt_Xml_QDomNode_QDomNode, newQDomNode);
PHP_METHOD(Qt_Xml_QDomNode_QDomNode, insertBefore);
PHP_METHOD(Qt_Xml_QDomNode_QDomNode, insertAfter);
PHP_METHOD(Qt_Xml_QDomNode_QDomNode, replaceChild);
PHP_METHOD(Qt_Xml_QDomNode_QDomNode, removeChild);
PHP_METHOD(Qt_Xml_QDomNode_QDomNode, appendChild);
PHP_METHOD(Qt_Xml_QDomNode_QDomNode, hasChildNodes);
PHP_METHOD(Qt_Xml_QDomNode_QDomNode, cloneNode);
PHP_METHOD(Qt_Xml_QDomNode_QDomNode, normalize);
PHP_METHOD(Qt_Xml_QDomNode_QDomNode, isSupported);
PHP_METHOD(Qt_Xml_QDomNode_QDomNode, nodeName);
PHP_METHOD(Qt_Xml_QDomNode_QDomNode, nodeType);
PHP_METHOD(Qt_Xml_QDomNode_QDomNode, parentNode);
PHP_METHOD(Qt_Xml_QDomNode_QDomNode, childNodes);
PHP_METHOD(Qt_Xml_QDomNode_QDomNode, firstChild);
PHP_METHOD(Qt_Xml_QDomNode_QDomNode, lastChild);
PHP_METHOD(Qt_Xml_QDomNode_QDomNode, previousSibling);
PHP_METHOD(Qt_Xml_QDomNode_QDomNode, nextSibling);
PHP_METHOD(Qt_Xml_QDomNode_QDomNode, attributes);
PHP_METHOD(Qt_Xml_QDomNode_QDomNode, ownerDocument);
PHP_METHOD(Qt_Xml_QDomNode_QDomNode, namespaceURI);
PHP_METHOD(Qt_Xml_QDomNode_QDomNode, localName);
PHP_METHOD(Qt_Xml_QDomNode_QDomNode, hasAttributes);
PHP_METHOD(Qt_Xml_QDomNode_QDomNode, nodeValue);
PHP_METHOD(Qt_Xml_QDomNode_QDomNode, setNodeValue);
PHP_METHOD(Qt_Xml_QDomNode_QDomNode, prefix);
PHP_METHOD(Qt_Xml_QDomNode_QDomNode, setPrefix);
PHP_METHOD(Qt_Xml_QDomNode_QDomNode, isAttr);
PHP_METHOD(Qt_Xml_QDomNode_QDomNode, isCDATASection);
PHP_METHOD(Qt_Xml_QDomNode_QDomNode, isDocumentFragment);
PHP_METHOD(Qt_Xml_QDomNode_QDomNode, isDocument);
PHP_METHOD(Qt_Xml_QDomNode_QDomNode, isDocumentType);
PHP_METHOD(Qt_Xml_QDomNode_QDomNode, isElement);
PHP_METHOD(Qt_Xml_QDomNode_QDomNode, isEntityReference);
PHP_METHOD(Qt_Xml_QDomNode_QDomNode, isText);
PHP_METHOD(Qt_Xml_QDomNode_QDomNode, isEntity);
PHP_METHOD(Qt_Xml_QDomNode_QDomNode, isNotation);
PHP_METHOD(Qt_Xml_QDomNode_QDomNode, isProcessingInstruction);
PHP_METHOD(Qt_Xml_QDomNode_QDomNode, isCharacterData);
PHP_METHOD(Qt_Xml_QDomNode_QDomNode, isComment);
PHP_METHOD(Qt_Xml_QDomNode_QDomNode, namedItem);
PHP_METHOD(Qt_Xml_QDomNode_QDomNode, isNull);
PHP_METHOD(Qt_Xml_QDomNode_QDomNode, clear);
PHP_METHOD(Qt_Xml_QDomNode_QDomNode, toAttr);
PHP_METHOD(Qt_Xml_QDomNode_QDomNode, toCDATASection);
PHP_METHOD(Qt_Xml_QDomNode_QDomNode, toDocumentFragment);
PHP_METHOD(Qt_Xml_QDomNode_QDomNode, toDocument);
PHP_METHOD(Qt_Xml_QDomNode_QDomNode, toDocumentType);
PHP_METHOD(Qt_Xml_QDomNode_QDomNode, toElement);
PHP_METHOD(Qt_Xml_QDomNode_QDomNode, toEntityReference);
PHP_METHOD(Qt_Xml_QDomNode_QDomNode, toText);
PHP_METHOD(Qt_Xml_QDomNode_QDomNode, toEntity);
PHP_METHOD(Qt_Xml_QDomNode_QDomNode, toNotation);
PHP_METHOD(Qt_Xml_QDomNode_QDomNode, toProcessingInstruction);
PHP_METHOD(Qt_Xml_QDomNode_QDomNode, toCharacterData);
PHP_METHOD(Qt_Xml_QDomNode_QDomNode, toComment);
PHP_METHOD(Qt_Xml_QDomNode_QDomNode, save);
PHP_METHOD(Qt_Xml_QDomNode_QDomNode, firstChildElement);
PHP_METHOD(Qt_Xml_QDomNode_QDomNode, lastChildElement);
PHP_METHOD(Qt_Xml_QDomNode_QDomNode, previousSiblingElement);
PHP_METHOD(Qt_Xml_QDomNode_QDomNode, nextSiblingElement);
PHP_METHOD(Qt_Xml_QDomNode_QDomNode, lineNumber);
PHP_METHOD(Qt_Xml_QDomNode_QDomNode, columnNumber);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_xml_qdomnode_qdomnode_new_, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_xml_qdomnode_qdomnode_newqdomnode, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, node, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_xml_qdomnode_qdomnode_insertbefore, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, newChild, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, refChild, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_xml_qdomnode_qdomnode_insertafter, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, newChild, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, refChild, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_xml_qdomnode_qdomnode_replacechild, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, newChild, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, oldChild, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_xml_qdomnode_qdomnode_removechild, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, oldChild, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_xml_qdomnode_qdomnode_appendchild, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, newChild, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_xml_qdomnode_qdomnode_haschildnodes, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_xml_qdomnode_qdomnode_clonenode, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, deep, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_xml_qdomnode_qdomnode_normalize, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_xml_qdomnode_qdomnode_issupported, 0, 3, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, feature, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, version, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_xml_qdomnode_qdomnode_nodename, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_xml_qdomnode_qdomnode_nodetype, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_xml_qdomnode_qdomnode_parentnode, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_xml_qdomnode_qdomnode_childnodes, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_xml_qdomnode_qdomnode_firstchild, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_xml_qdomnode_qdomnode_lastchild, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_xml_qdomnode_qdomnode_previoussibling, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_xml_qdomnode_qdomnode_nextsibling, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_xml_qdomnode_qdomnode_attributes, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_xml_qdomnode_qdomnode_ownerdocument, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_xml_qdomnode_qdomnode_namespaceuri, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_xml_qdomnode_qdomnode_localname, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_xml_qdomnode_qdomnode_hasattributes, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_xml_qdomnode_qdomnode_nodevalue, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_xml_qdomnode_qdomnode_setnodevalue, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_xml_qdomnode_qdomnode_prefix, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_xml_qdomnode_qdomnode_setprefix, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, pre, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_xml_qdomnode_qdomnode_isattr, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_xml_qdomnode_qdomnode_iscdatasection, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_xml_qdomnode_qdomnode_isdocumentfragment, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_xml_qdomnode_qdomnode_isdocument, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_xml_qdomnode_qdomnode_isdocumenttype, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_xml_qdomnode_qdomnode_iselement, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_xml_qdomnode_qdomnode_isentityreference, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_xml_qdomnode_qdomnode_istext, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_xml_qdomnode_qdomnode_isentity, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_xml_qdomnode_qdomnode_isnotation, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_xml_qdomnode_qdomnode_isprocessinginstruction, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_xml_qdomnode_qdomnode_ischaracterdata, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_xml_qdomnode_qdomnode_iscomment, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_xml_qdomnode_qdomnode_nameditem, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, name, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_xml_qdomnode_qdomnode_isnull, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_xml_qdomnode_qdomnode_clear, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_xml_qdomnode_qdomnode_toattr, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_xml_qdomnode_qdomnode_tocdatasection, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_xml_qdomnode_qdomnode_todocumentfragment, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_xml_qdomnode_qdomnode_todocument, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_xml_qdomnode_qdomnode_todocumenttype, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_xml_qdomnode_qdomnode_toelement, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_xml_qdomnode_qdomnode_toentityreference, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_xml_qdomnode_qdomnode_totext, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_xml_qdomnode_qdomnode_toentity, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_xml_qdomnode_qdomnode_tonotation, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_xml_qdomnode_qdomnode_toprocessinginstruction, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_xml_qdomnode_qdomnode_tocharacterdata, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_xml_qdomnode_qdomnode_tocomment, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_xml_qdomnode_qdomnode_save, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg1, IS_LONG, 0)
	ZEND_ARG_INFO(0, arg2)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_xml_qdomnode_qdomnode_firstchildelement, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, tagName, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, namespaceURI, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_xml_qdomnode_qdomnode_lastchildelement, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, tagName, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, namespaceURI, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_xml_qdomnode_qdomnode_previoussiblingelement, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, tagName, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, namespaceURI, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_xml_qdomnode_qdomnode_nextsiblingelement, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, taName, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, namespaceURI, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_xml_qdomnode_qdomnode_linenumber, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_xml_qdomnode_qdomnode_columnnumber, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_xml_qdomnode_qdomnode_method_entry) {
	PHP_ME(Qt_Xml_QDomNode_QDomNode, new_, arginfo_qt_xml_qdomnode_qdomnode_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Xml_QDomNode_QDomNode, newQDomNode, arginfo_qt_xml_qdomnode_qdomnode_newqdomnode, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Xml_QDomNode_QDomNode, insertBefore, arginfo_qt_xml_qdomnode_qdomnode_insertbefore, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Xml_QDomNode_QDomNode, insertAfter, arginfo_qt_xml_qdomnode_qdomnode_insertafter, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Xml_QDomNode_QDomNode, replaceChild, arginfo_qt_xml_qdomnode_qdomnode_replacechild, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Xml_QDomNode_QDomNode, removeChild, arginfo_qt_xml_qdomnode_qdomnode_removechild, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Xml_QDomNode_QDomNode, appendChild, arginfo_qt_xml_qdomnode_qdomnode_appendchild, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Xml_QDomNode_QDomNode, hasChildNodes, arginfo_qt_xml_qdomnode_qdomnode_haschildnodes, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Xml_QDomNode_QDomNode, cloneNode, arginfo_qt_xml_qdomnode_qdomnode_clonenode, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Xml_QDomNode_QDomNode, normalize, arginfo_qt_xml_qdomnode_qdomnode_normalize, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Xml_QDomNode_QDomNode, isSupported, arginfo_qt_xml_qdomnode_qdomnode_issupported, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Xml_QDomNode_QDomNode, nodeName, arginfo_qt_xml_qdomnode_qdomnode_nodename, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Xml_QDomNode_QDomNode, nodeType, arginfo_qt_xml_qdomnode_qdomnode_nodetype, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Xml_QDomNode_QDomNode, parentNode, arginfo_qt_xml_qdomnode_qdomnode_parentnode, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Xml_QDomNode_QDomNode, childNodes, arginfo_qt_xml_qdomnode_qdomnode_childnodes, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Xml_QDomNode_QDomNode, firstChild, arginfo_qt_xml_qdomnode_qdomnode_firstchild, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Xml_QDomNode_QDomNode, lastChild, arginfo_qt_xml_qdomnode_qdomnode_lastchild, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Xml_QDomNode_QDomNode, previousSibling, arginfo_qt_xml_qdomnode_qdomnode_previoussibling, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Xml_QDomNode_QDomNode, nextSibling, arginfo_qt_xml_qdomnode_qdomnode_nextsibling, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Xml_QDomNode_QDomNode, attributes, arginfo_qt_xml_qdomnode_qdomnode_attributes, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Xml_QDomNode_QDomNode, ownerDocument, arginfo_qt_xml_qdomnode_qdomnode_ownerdocument, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Xml_QDomNode_QDomNode, namespaceURI, arginfo_qt_xml_qdomnode_qdomnode_namespaceuri, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Xml_QDomNode_QDomNode, localName, arginfo_qt_xml_qdomnode_qdomnode_localname, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Xml_QDomNode_QDomNode, hasAttributes, arginfo_qt_xml_qdomnode_qdomnode_hasattributes, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Xml_QDomNode_QDomNode, nodeValue, arginfo_qt_xml_qdomnode_qdomnode_nodevalue, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Xml_QDomNode_QDomNode, setNodeValue, arginfo_qt_xml_qdomnode_qdomnode_setnodevalue, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Xml_QDomNode_QDomNode, prefix, arginfo_qt_xml_qdomnode_qdomnode_prefix, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Xml_QDomNode_QDomNode, setPrefix, arginfo_qt_xml_qdomnode_qdomnode_setprefix, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Xml_QDomNode_QDomNode, isAttr, arginfo_qt_xml_qdomnode_qdomnode_isattr, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Xml_QDomNode_QDomNode, isCDATASection, arginfo_qt_xml_qdomnode_qdomnode_iscdatasection, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Xml_QDomNode_QDomNode, isDocumentFragment, arginfo_qt_xml_qdomnode_qdomnode_isdocumentfragment, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Xml_QDomNode_QDomNode, isDocument, arginfo_qt_xml_qdomnode_qdomnode_isdocument, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Xml_QDomNode_QDomNode, isDocumentType, arginfo_qt_xml_qdomnode_qdomnode_isdocumenttype, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Xml_QDomNode_QDomNode, isElement, arginfo_qt_xml_qdomnode_qdomnode_iselement, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Xml_QDomNode_QDomNode, isEntityReference, arginfo_qt_xml_qdomnode_qdomnode_isentityreference, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Xml_QDomNode_QDomNode, isText, arginfo_qt_xml_qdomnode_qdomnode_istext, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Xml_QDomNode_QDomNode, isEntity, arginfo_qt_xml_qdomnode_qdomnode_isentity, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Xml_QDomNode_QDomNode, isNotation, arginfo_qt_xml_qdomnode_qdomnode_isnotation, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Xml_QDomNode_QDomNode, isProcessingInstruction, arginfo_qt_xml_qdomnode_qdomnode_isprocessinginstruction, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Xml_QDomNode_QDomNode, isCharacterData, arginfo_qt_xml_qdomnode_qdomnode_ischaracterdata, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Xml_QDomNode_QDomNode, isComment, arginfo_qt_xml_qdomnode_qdomnode_iscomment, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Xml_QDomNode_QDomNode, namedItem, arginfo_qt_xml_qdomnode_qdomnode_nameditem, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Xml_QDomNode_QDomNode, isNull, arginfo_qt_xml_qdomnode_qdomnode_isnull, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Xml_QDomNode_QDomNode, clear, arginfo_qt_xml_qdomnode_qdomnode_clear, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Xml_QDomNode_QDomNode, toAttr, arginfo_qt_xml_qdomnode_qdomnode_toattr, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Xml_QDomNode_QDomNode, toCDATASection, arginfo_qt_xml_qdomnode_qdomnode_tocdatasection, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Xml_QDomNode_QDomNode, toDocumentFragment, arginfo_qt_xml_qdomnode_qdomnode_todocumentfragment, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Xml_QDomNode_QDomNode, toDocument, arginfo_qt_xml_qdomnode_qdomnode_todocument, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Xml_QDomNode_QDomNode, toDocumentType, arginfo_qt_xml_qdomnode_qdomnode_todocumenttype, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Xml_QDomNode_QDomNode, toElement, arginfo_qt_xml_qdomnode_qdomnode_toelement, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Xml_QDomNode_QDomNode, toEntityReference, arginfo_qt_xml_qdomnode_qdomnode_toentityreference, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Xml_QDomNode_QDomNode, toText, arginfo_qt_xml_qdomnode_qdomnode_totext, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Xml_QDomNode_QDomNode, toEntity, arginfo_qt_xml_qdomnode_qdomnode_toentity, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Xml_QDomNode_QDomNode, toNotation, arginfo_qt_xml_qdomnode_qdomnode_tonotation, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Xml_QDomNode_QDomNode, toProcessingInstruction, arginfo_qt_xml_qdomnode_qdomnode_toprocessinginstruction, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Xml_QDomNode_QDomNode, toCharacterData, arginfo_qt_xml_qdomnode_qdomnode_tocharacterdata, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Xml_QDomNode_QDomNode, toComment, arginfo_qt_xml_qdomnode_qdomnode_tocomment, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Xml_QDomNode_QDomNode, save, arginfo_qt_xml_qdomnode_qdomnode_save, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Xml_QDomNode_QDomNode, firstChildElement, arginfo_qt_xml_qdomnode_qdomnode_firstchildelement, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Xml_QDomNode_QDomNode, lastChildElement, arginfo_qt_xml_qdomnode_qdomnode_lastchildelement, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Xml_QDomNode_QDomNode, previousSiblingElement, arginfo_qt_xml_qdomnode_qdomnode_previoussiblingelement, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Xml_QDomNode_QDomNode, nextSiblingElement, arginfo_qt_xml_qdomnode_qdomnode_nextsiblingelement, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Xml_QDomNode_QDomNode, lineNumber, arginfo_qt_xml_qdomnode_qdomnode_linenumber, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Xml_QDomNode_QDomNode, columnNumber, arginfo_qt_xml_qdomnode_qdomnode_columnnumber, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
