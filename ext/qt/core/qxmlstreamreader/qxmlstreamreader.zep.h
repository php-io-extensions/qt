
extern zend_class_entry *qt_core_qxmlstreamreader_qxmlstreamreader_ce;

ZEPHIR_INIT_CLASS(Qt_Core_QXmlStreamReader_QXmlStreamReader);

PHP_METHOD(Qt_Core_QXmlStreamReader_QXmlStreamReader, new_);
PHP_METHOD(Qt_Core_QXmlStreamReader_QXmlStreamReader, newQIODevice);
PHP_METHOD(Qt_Core_QXmlStreamReader_QXmlStreamReader, newQAnyStringView);
PHP_METHOD(Qt_Core_QXmlStreamReader_QXmlStreamReader, setDevice);
PHP_METHOD(Qt_Core_QXmlStreamReader_QXmlStreamReader, device);
PHP_METHOD(Qt_Core_QXmlStreamReader_QXmlStreamReader, addData);
PHP_METHOD(Qt_Core_QXmlStreamReader_QXmlStreamReader, clear);
PHP_METHOD(Qt_Core_QXmlStreamReader_QXmlStreamReader, atEnd);
PHP_METHOD(Qt_Core_QXmlStreamReader_QXmlStreamReader, readNext);
PHP_METHOD(Qt_Core_QXmlStreamReader_QXmlStreamReader, readNextStartElement);
PHP_METHOD(Qt_Core_QXmlStreamReader_QXmlStreamReader, skipCurrentElement);
PHP_METHOD(Qt_Core_QXmlStreamReader_QXmlStreamReader, tokenType);
PHP_METHOD(Qt_Core_QXmlStreamReader_QXmlStreamReader, tokenString);
PHP_METHOD(Qt_Core_QXmlStreamReader_QXmlStreamReader, setNamespaceProcessing);
PHP_METHOD(Qt_Core_QXmlStreamReader_QXmlStreamReader, namespaceProcessing);
PHP_METHOD(Qt_Core_QXmlStreamReader_QXmlStreamReader, isStartDocument);
PHP_METHOD(Qt_Core_QXmlStreamReader_QXmlStreamReader, isEndDocument);
PHP_METHOD(Qt_Core_QXmlStreamReader_QXmlStreamReader, isStartElement);
PHP_METHOD(Qt_Core_QXmlStreamReader_QXmlStreamReader, isEndElement);
PHP_METHOD(Qt_Core_QXmlStreamReader_QXmlStreamReader, isCharacters);
PHP_METHOD(Qt_Core_QXmlStreamReader_QXmlStreamReader, isWhitespace);
PHP_METHOD(Qt_Core_QXmlStreamReader_QXmlStreamReader, isCDATA);
PHP_METHOD(Qt_Core_QXmlStreamReader_QXmlStreamReader, isComment);
PHP_METHOD(Qt_Core_QXmlStreamReader_QXmlStreamReader, isDTD);
PHP_METHOD(Qt_Core_QXmlStreamReader_QXmlStreamReader, isEntityReference);
PHP_METHOD(Qt_Core_QXmlStreamReader_QXmlStreamReader, isProcessingInstruction);
PHP_METHOD(Qt_Core_QXmlStreamReader_QXmlStreamReader, isStandaloneDocument);
PHP_METHOD(Qt_Core_QXmlStreamReader_QXmlStreamReader, hasStandaloneDeclaration);
PHP_METHOD(Qt_Core_QXmlStreamReader_QXmlStreamReader, documentVersion);
PHP_METHOD(Qt_Core_QXmlStreamReader_QXmlStreamReader, documentEncoding);
PHP_METHOD(Qt_Core_QXmlStreamReader_QXmlStreamReader, lineNumber);
PHP_METHOD(Qt_Core_QXmlStreamReader_QXmlStreamReader, columnNumber);
PHP_METHOD(Qt_Core_QXmlStreamReader_QXmlStreamReader, characterOffset);
PHP_METHOD(Qt_Core_QXmlStreamReader_QXmlStreamReader, attributes);
PHP_METHOD(Qt_Core_QXmlStreamReader_QXmlStreamReader, readElementText);
PHP_METHOD(Qt_Core_QXmlStreamReader_QXmlStreamReader, name);
PHP_METHOD(Qt_Core_QXmlStreamReader_QXmlStreamReader, namespaceUri);
PHP_METHOD(Qt_Core_QXmlStreamReader_QXmlStreamReader, qualifiedName);
PHP_METHOD(Qt_Core_QXmlStreamReader_QXmlStreamReader, prefix);
PHP_METHOD(Qt_Core_QXmlStreamReader_QXmlStreamReader, processingInstructionTarget);
PHP_METHOD(Qt_Core_QXmlStreamReader_QXmlStreamReader, processingInstructionData);
PHP_METHOD(Qt_Core_QXmlStreamReader_QXmlStreamReader, text);
PHP_METHOD(Qt_Core_QXmlStreamReader_QXmlStreamReader, namespaceDeclarations);
PHP_METHOD(Qt_Core_QXmlStreamReader_QXmlStreamReader, addExtraNamespaceDeclaration);
PHP_METHOD(Qt_Core_QXmlStreamReader_QXmlStreamReader, addExtraNamespaceDeclarations);
PHP_METHOD(Qt_Core_QXmlStreamReader_QXmlStreamReader, notationDeclarations);
PHP_METHOD(Qt_Core_QXmlStreamReader_QXmlStreamReader, entityDeclarations);
PHP_METHOD(Qt_Core_QXmlStreamReader_QXmlStreamReader, dtdName);
PHP_METHOD(Qt_Core_QXmlStreamReader_QXmlStreamReader, dtdPublicId);
PHP_METHOD(Qt_Core_QXmlStreamReader_QXmlStreamReader, dtdSystemId);
PHP_METHOD(Qt_Core_QXmlStreamReader_QXmlStreamReader, entityExpansionLimit);
PHP_METHOD(Qt_Core_QXmlStreamReader_QXmlStreamReader, setEntityExpansionLimit);
PHP_METHOD(Qt_Core_QXmlStreamReader_QXmlStreamReader, raiseError);
PHP_METHOD(Qt_Core_QXmlStreamReader_QXmlStreamReader, errorString);
PHP_METHOD(Qt_Core_QXmlStreamReader_QXmlStreamReader, error);
PHP_METHOD(Qt_Core_QXmlStreamReader_QXmlStreamReader, hasError);
PHP_METHOD(Qt_Core_QXmlStreamReader_QXmlStreamReader, setEntityResolver);
PHP_METHOD(Qt_Core_QXmlStreamReader_QXmlStreamReader, entityResolver);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qxmlstreamreader_qxmlstreamreader_new_, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qxmlstreamreader_qxmlstreamreader_newqiodevice, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, device, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qxmlstreamreader_qxmlstreamreader_newqanystringview, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, data, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qxmlstreamreader_qxmlstreamreader_setdevice, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, device, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qxmlstreamreader_qxmlstreamreader_device, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qxmlstreamreader_qxmlstreamreader_adddata, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, data, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qxmlstreamreader_qxmlstreamreader_clear, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qxmlstreamreader_qxmlstreamreader_atend, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qxmlstreamreader_qxmlstreamreader_readnext, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qxmlstreamreader_qxmlstreamreader_readnextstartelement, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qxmlstreamreader_qxmlstreamreader_skipcurrentelement, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qxmlstreamreader_qxmlstreamreader_tokentype, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qxmlstreamreader_qxmlstreamreader_tokenstring, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qxmlstreamreader_qxmlstreamreader_setnamespaceprocessing, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qxmlstreamreader_qxmlstreamreader_namespaceprocessing, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qxmlstreamreader_qxmlstreamreader_isstartdocument, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qxmlstreamreader_qxmlstreamreader_isenddocument, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qxmlstreamreader_qxmlstreamreader_isstartelement, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qxmlstreamreader_qxmlstreamreader_isendelement, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qxmlstreamreader_qxmlstreamreader_ischaracters, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qxmlstreamreader_qxmlstreamreader_iswhitespace, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qxmlstreamreader_qxmlstreamreader_iscdata, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qxmlstreamreader_qxmlstreamreader_iscomment, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qxmlstreamreader_qxmlstreamreader_isdtd, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qxmlstreamreader_qxmlstreamreader_isentityreference, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qxmlstreamreader_qxmlstreamreader_isprocessinginstruction, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qxmlstreamreader_qxmlstreamreader_isstandalonedocument, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qxmlstreamreader_qxmlstreamreader_hasstandalonedeclaration, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qxmlstreamreader_qxmlstreamreader_documentversion, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qxmlstreamreader_qxmlstreamreader_documentencoding, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qxmlstreamreader_qxmlstreamreader_linenumber, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qxmlstreamreader_qxmlstreamreader_columnnumber, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qxmlstreamreader_qxmlstreamreader_characteroffset, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qxmlstreamreader_qxmlstreamreader_attributes, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qxmlstreamreader_qxmlstreamreader_readelementtext, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_INFO(0, behaviour)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qxmlstreamreader_qxmlstreamreader_name, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qxmlstreamreader_qxmlstreamreader_namespaceuri, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qxmlstreamreader_qxmlstreamreader_qualifiedname, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qxmlstreamreader_qxmlstreamreader_prefix, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qxmlstreamreader_qxmlstreamreader_processinginstructiontarget, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qxmlstreamreader_qxmlstreamreader_processinginstructiondata, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qxmlstreamreader_qxmlstreamreader_text, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qxmlstreamreader_qxmlstreamreader_namespacedeclarations, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qxmlstreamreader_qxmlstreamreader_addextranamespacedeclaration, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, extraNamespaceDeclaraction, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qxmlstreamreader_qxmlstreamreader_addextranamespacedeclarations, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_ARRAY_INFO(0, extraNamespaceDeclaractions, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qxmlstreamreader_qxmlstreamreader_notationdeclarations, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qxmlstreamreader_qxmlstreamreader_entitydeclarations, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qxmlstreamreader_qxmlstreamreader_dtdname, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qxmlstreamreader_qxmlstreamreader_dtdpublicid, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qxmlstreamreader_qxmlstreamreader_dtdsystemid, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qxmlstreamreader_qxmlstreamreader_entityexpansionlimit, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qxmlstreamreader_qxmlstreamreader_setentityexpansionlimit, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, limit, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qxmlstreamreader_qxmlstreamreader_raiseerror, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, message, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qxmlstreamreader_qxmlstreamreader_errorstring, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qxmlstreamreader_qxmlstreamreader_error, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qxmlstreamreader_qxmlstreamreader_haserror, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qxmlstreamreader_qxmlstreamreader_setentityresolver, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, resolver, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qxmlstreamreader_qxmlstreamreader_entityresolver, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_core_qxmlstreamreader_qxmlstreamreader_method_entry) {
	PHP_ME(Qt_Core_QXmlStreamReader_QXmlStreamReader, new_, arginfo_qt_core_qxmlstreamreader_qxmlstreamreader_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QXmlStreamReader_QXmlStreamReader, newQIODevice, arginfo_qt_core_qxmlstreamreader_qxmlstreamreader_newqiodevice, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QXmlStreamReader_QXmlStreamReader, newQAnyStringView, arginfo_qt_core_qxmlstreamreader_qxmlstreamreader_newqanystringview, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QXmlStreamReader_QXmlStreamReader, setDevice, arginfo_qt_core_qxmlstreamreader_qxmlstreamreader_setdevice, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QXmlStreamReader_QXmlStreamReader, device, arginfo_qt_core_qxmlstreamreader_qxmlstreamreader_device, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QXmlStreamReader_QXmlStreamReader, addData, arginfo_qt_core_qxmlstreamreader_qxmlstreamreader_adddata, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QXmlStreamReader_QXmlStreamReader, clear, arginfo_qt_core_qxmlstreamreader_qxmlstreamreader_clear, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QXmlStreamReader_QXmlStreamReader, atEnd, arginfo_qt_core_qxmlstreamreader_qxmlstreamreader_atend, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QXmlStreamReader_QXmlStreamReader, readNext, arginfo_qt_core_qxmlstreamreader_qxmlstreamreader_readnext, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QXmlStreamReader_QXmlStreamReader, readNextStartElement, arginfo_qt_core_qxmlstreamreader_qxmlstreamreader_readnextstartelement, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QXmlStreamReader_QXmlStreamReader, skipCurrentElement, arginfo_qt_core_qxmlstreamreader_qxmlstreamreader_skipcurrentelement, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QXmlStreamReader_QXmlStreamReader, tokenType, arginfo_qt_core_qxmlstreamreader_qxmlstreamreader_tokentype, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QXmlStreamReader_QXmlStreamReader, tokenString, arginfo_qt_core_qxmlstreamreader_qxmlstreamreader_tokenstring, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QXmlStreamReader_QXmlStreamReader, setNamespaceProcessing, arginfo_qt_core_qxmlstreamreader_qxmlstreamreader_setnamespaceprocessing, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QXmlStreamReader_QXmlStreamReader, namespaceProcessing, arginfo_qt_core_qxmlstreamreader_qxmlstreamreader_namespaceprocessing, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QXmlStreamReader_QXmlStreamReader, isStartDocument, arginfo_qt_core_qxmlstreamreader_qxmlstreamreader_isstartdocument, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QXmlStreamReader_QXmlStreamReader, isEndDocument, arginfo_qt_core_qxmlstreamreader_qxmlstreamreader_isenddocument, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QXmlStreamReader_QXmlStreamReader, isStartElement, arginfo_qt_core_qxmlstreamreader_qxmlstreamreader_isstartelement, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QXmlStreamReader_QXmlStreamReader, isEndElement, arginfo_qt_core_qxmlstreamreader_qxmlstreamreader_isendelement, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QXmlStreamReader_QXmlStreamReader, isCharacters, arginfo_qt_core_qxmlstreamreader_qxmlstreamreader_ischaracters, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QXmlStreamReader_QXmlStreamReader, isWhitespace, arginfo_qt_core_qxmlstreamreader_qxmlstreamreader_iswhitespace, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QXmlStreamReader_QXmlStreamReader, isCDATA, arginfo_qt_core_qxmlstreamreader_qxmlstreamreader_iscdata, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QXmlStreamReader_QXmlStreamReader, isComment, arginfo_qt_core_qxmlstreamreader_qxmlstreamreader_iscomment, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QXmlStreamReader_QXmlStreamReader, isDTD, arginfo_qt_core_qxmlstreamreader_qxmlstreamreader_isdtd, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QXmlStreamReader_QXmlStreamReader, isEntityReference, arginfo_qt_core_qxmlstreamreader_qxmlstreamreader_isentityreference, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QXmlStreamReader_QXmlStreamReader, isProcessingInstruction, arginfo_qt_core_qxmlstreamreader_qxmlstreamreader_isprocessinginstruction, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QXmlStreamReader_QXmlStreamReader, isStandaloneDocument, arginfo_qt_core_qxmlstreamreader_qxmlstreamreader_isstandalonedocument, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QXmlStreamReader_QXmlStreamReader, hasStandaloneDeclaration, arginfo_qt_core_qxmlstreamreader_qxmlstreamreader_hasstandalonedeclaration, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QXmlStreamReader_QXmlStreamReader, documentVersion, arginfo_qt_core_qxmlstreamreader_qxmlstreamreader_documentversion, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QXmlStreamReader_QXmlStreamReader, documentEncoding, arginfo_qt_core_qxmlstreamreader_qxmlstreamreader_documentencoding, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QXmlStreamReader_QXmlStreamReader, lineNumber, arginfo_qt_core_qxmlstreamreader_qxmlstreamreader_linenumber, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QXmlStreamReader_QXmlStreamReader, columnNumber, arginfo_qt_core_qxmlstreamreader_qxmlstreamreader_columnnumber, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QXmlStreamReader_QXmlStreamReader, characterOffset, arginfo_qt_core_qxmlstreamreader_qxmlstreamreader_characteroffset, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QXmlStreamReader_QXmlStreamReader, attributes, arginfo_qt_core_qxmlstreamreader_qxmlstreamreader_attributes, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QXmlStreamReader_QXmlStreamReader, readElementText, arginfo_qt_core_qxmlstreamreader_qxmlstreamreader_readelementtext, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QXmlStreamReader_QXmlStreamReader, name, arginfo_qt_core_qxmlstreamreader_qxmlstreamreader_name, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QXmlStreamReader_QXmlStreamReader, namespaceUri, arginfo_qt_core_qxmlstreamreader_qxmlstreamreader_namespaceuri, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QXmlStreamReader_QXmlStreamReader, qualifiedName, arginfo_qt_core_qxmlstreamreader_qxmlstreamreader_qualifiedname, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QXmlStreamReader_QXmlStreamReader, prefix, arginfo_qt_core_qxmlstreamreader_qxmlstreamreader_prefix, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QXmlStreamReader_QXmlStreamReader, processingInstructionTarget, arginfo_qt_core_qxmlstreamreader_qxmlstreamreader_processinginstructiontarget, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QXmlStreamReader_QXmlStreamReader, processingInstructionData, arginfo_qt_core_qxmlstreamreader_qxmlstreamreader_processinginstructiondata, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QXmlStreamReader_QXmlStreamReader, text, arginfo_qt_core_qxmlstreamreader_qxmlstreamreader_text, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QXmlStreamReader_QXmlStreamReader, namespaceDeclarations, arginfo_qt_core_qxmlstreamreader_qxmlstreamreader_namespacedeclarations, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QXmlStreamReader_QXmlStreamReader, addExtraNamespaceDeclaration, arginfo_qt_core_qxmlstreamreader_qxmlstreamreader_addextranamespacedeclaration, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QXmlStreamReader_QXmlStreamReader, addExtraNamespaceDeclarations, arginfo_qt_core_qxmlstreamreader_qxmlstreamreader_addextranamespacedeclarations, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QXmlStreamReader_QXmlStreamReader, notationDeclarations, arginfo_qt_core_qxmlstreamreader_qxmlstreamreader_notationdeclarations, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QXmlStreamReader_QXmlStreamReader, entityDeclarations, arginfo_qt_core_qxmlstreamreader_qxmlstreamreader_entitydeclarations, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QXmlStreamReader_QXmlStreamReader, dtdName, arginfo_qt_core_qxmlstreamreader_qxmlstreamreader_dtdname, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QXmlStreamReader_QXmlStreamReader, dtdPublicId, arginfo_qt_core_qxmlstreamreader_qxmlstreamreader_dtdpublicid, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QXmlStreamReader_QXmlStreamReader, dtdSystemId, arginfo_qt_core_qxmlstreamreader_qxmlstreamreader_dtdsystemid, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QXmlStreamReader_QXmlStreamReader, entityExpansionLimit, arginfo_qt_core_qxmlstreamreader_qxmlstreamreader_entityexpansionlimit, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QXmlStreamReader_QXmlStreamReader, setEntityExpansionLimit, arginfo_qt_core_qxmlstreamreader_qxmlstreamreader_setentityexpansionlimit, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QXmlStreamReader_QXmlStreamReader, raiseError, arginfo_qt_core_qxmlstreamreader_qxmlstreamreader_raiseerror, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QXmlStreamReader_QXmlStreamReader, errorString, arginfo_qt_core_qxmlstreamreader_qxmlstreamreader_errorstring, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QXmlStreamReader_QXmlStreamReader, error, arginfo_qt_core_qxmlstreamreader_qxmlstreamreader_error, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QXmlStreamReader_QXmlStreamReader, hasError, arginfo_qt_core_qxmlstreamreader_qxmlstreamreader_haserror, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QXmlStreamReader_QXmlStreamReader, setEntityResolver, arginfo_qt_core_qxmlstreamreader_qxmlstreamreader_setentityresolver, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QXmlStreamReader_QXmlStreamReader, entityResolver, arginfo_qt_core_qxmlstreamreader_qxmlstreamreader_entityresolver, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
