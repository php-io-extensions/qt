
extern zend_class_entry *qt_core_qxmlstreamwriter_qxmlstreamwriter_ce;

ZEPHIR_INIT_CLASS(Qt_Core_QXmlStreamWriter_QXmlStreamWriter);

PHP_METHOD(Qt_Core_QXmlStreamWriter_QXmlStreamWriter, new_);
PHP_METHOD(Qt_Core_QXmlStreamWriter_QXmlStreamWriter, newQIODevice);
PHP_METHOD(Qt_Core_QXmlStreamWriter_QXmlStreamWriter, newQByteArray);
PHP_METHOD(Qt_Core_QXmlStreamWriter_QXmlStreamWriter, newQString);
PHP_METHOD(Qt_Core_QXmlStreamWriter_QXmlStreamWriter, setDevice);
PHP_METHOD(Qt_Core_QXmlStreamWriter_QXmlStreamWriter, device);
PHP_METHOD(Qt_Core_QXmlStreamWriter_QXmlStreamWriter, setAutoFormatting);
PHP_METHOD(Qt_Core_QXmlStreamWriter_QXmlStreamWriter, autoFormatting);
PHP_METHOD(Qt_Core_QXmlStreamWriter_QXmlStreamWriter, setAutoFormattingIndent);
PHP_METHOD(Qt_Core_QXmlStreamWriter_QXmlStreamWriter, autoFormattingIndent);
PHP_METHOD(Qt_Core_QXmlStreamWriter_QXmlStreamWriter, writeAttribute);
PHP_METHOD(Qt_Core_QXmlStreamWriter_QXmlStreamWriter, writeAttributeQAnyStringViewQAnyStringViewQAnyStringView);
PHP_METHOD(Qt_Core_QXmlStreamWriter_QXmlStreamWriter, writeAttributeQXmlStreamAttribute);
PHP_METHOD(Qt_Core_QXmlStreamWriter_QXmlStreamWriter, writeAttributes);
PHP_METHOD(Qt_Core_QXmlStreamWriter_QXmlStreamWriter, writeCDATA);
PHP_METHOD(Qt_Core_QXmlStreamWriter_QXmlStreamWriter, writeCharacters);
PHP_METHOD(Qt_Core_QXmlStreamWriter_QXmlStreamWriter, writeComment);
PHP_METHOD(Qt_Core_QXmlStreamWriter_QXmlStreamWriter, writeDTD);
PHP_METHOD(Qt_Core_QXmlStreamWriter_QXmlStreamWriter, writeEmptyElement);
PHP_METHOD(Qt_Core_QXmlStreamWriter_QXmlStreamWriter, writeEmptyElementQAnyStringViewQAnyStringView);
PHP_METHOD(Qt_Core_QXmlStreamWriter_QXmlStreamWriter, writeTextElement);
PHP_METHOD(Qt_Core_QXmlStreamWriter_QXmlStreamWriter, writeTextElementQAnyStringViewQAnyStringViewQAnyStringView);
PHP_METHOD(Qt_Core_QXmlStreamWriter_QXmlStreamWriter, writeEndDocument);
PHP_METHOD(Qt_Core_QXmlStreamWriter_QXmlStreamWriter, writeEndElement);
PHP_METHOD(Qt_Core_QXmlStreamWriter_QXmlStreamWriter, writeEntityReference);
PHP_METHOD(Qt_Core_QXmlStreamWriter_QXmlStreamWriter, writeNamespace);
PHP_METHOD(Qt_Core_QXmlStreamWriter_QXmlStreamWriter, writeDefaultNamespace);
PHP_METHOD(Qt_Core_QXmlStreamWriter_QXmlStreamWriter, writeProcessingInstruction);
PHP_METHOD(Qt_Core_QXmlStreamWriter_QXmlStreamWriter, writeStartDocument);
PHP_METHOD(Qt_Core_QXmlStreamWriter_QXmlStreamWriter, writeStartDocumentQAnyStringView);
PHP_METHOD(Qt_Core_QXmlStreamWriter_QXmlStreamWriter, writeStartDocumentQAnyStringViewBool);
PHP_METHOD(Qt_Core_QXmlStreamWriter_QXmlStreamWriter, writeStartElement);
PHP_METHOD(Qt_Core_QXmlStreamWriter_QXmlStreamWriter, writeStartElementQAnyStringViewQAnyStringView);
PHP_METHOD(Qt_Core_QXmlStreamWriter_QXmlStreamWriter, writeCurrentToken);
PHP_METHOD(Qt_Core_QXmlStreamWriter_QXmlStreamWriter, hasError);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qxmlstreamwriter_qxmlstreamwriter_new_, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qxmlstreamwriter_qxmlstreamwriter_newqiodevice, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, device, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qxmlstreamwriter_qxmlstreamwriter_newqbytearray, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_INFO(0, array_)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qxmlstreamwriter_qxmlstreamwriter_newqstring, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_INFO(0, string_)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qxmlstreamwriter_qxmlstreamwriter_setdevice, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, device, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qxmlstreamwriter_qxmlstreamwriter_device, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qxmlstreamwriter_qxmlstreamwriter_setautoformatting, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qxmlstreamwriter_qxmlstreamwriter_autoformatting, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qxmlstreamwriter_qxmlstreamwriter_setautoformattingindent, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, spacesOrTabs, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qxmlstreamwriter_qxmlstreamwriter_autoformattingindent, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qxmlstreamwriter_qxmlstreamwriter_writeattribute, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, qualifiedName, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qxmlstreamwriter_qxmlstreamwriter_writeattributeqanystringviewqanystringviewqanystringview, 0, 4, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, namespaceUri, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, name, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qxmlstreamwriter_qxmlstreamwriter_writeattributeqxmlstreamattribute, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, attribute, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qxmlstreamwriter_qxmlstreamwriter_writeattributes, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, attributes, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qxmlstreamwriter_qxmlstreamwriter_writecdata, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, text, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qxmlstreamwriter_qxmlstreamwriter_writecharacters, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, text, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qxmlstreamwriter_qxmlstreamwriter_writecomment, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, text, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qxmlstreamwriter_qxmlstreamwriter_writedtd, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, dtd, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qxmlstreamwriter_qxmlstreamwriter_writeemptyelement, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, qualifiedName, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qxmlstreamwriter_qxmlstreamwriter_writeemptyelementqanystringviewqanystringview, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, namespaceUri, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, name, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qxmlstreamwriter_qxmlstreamwriter_writetextelement, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, qualifiedName, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, text, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qxmlstreamwriter_qxmlstreamwriter_writetextelementqanystringviewqanystringviewqanystringview, 0, 4, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, namespaceUri, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, name, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, text, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qxmlstreamwriter_qxmlstreamwriter_writeenddocument, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qxmlstreamwriter_qxmlstreamwriter_writeendelement, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qxmlstreamwriter_qxmlstreamwriter_writeentityreference, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, name, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qxmlstreamwriter_qxmlstreamwriter_writenamespace, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, namespaceUri, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, prefix, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qxmlstreamwriter_qxmlstreamwriter_writedefaultnamespace, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, namespaceUri, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qxmlstreamwriter_qxmlstreamwriter_writeprocessinginstruction, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, target, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, data, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qxmlstreamwriter_qxmlstreamwriter_writestartdocument, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qxmlstreamwriter_qxmlstreamwriter_writestartdocumentqanystringview, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, version, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qxmlstreamwriter_qxmlstreamwriter_writestartdocumentqanystringviewbool, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, version, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, standalone, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qxmlstreamwriter_qxmlstreamwriter_writestartelement, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, qualifiedName, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qxmlstreamwriter_qxmlstreamwriter_writestartelementqanystringviewqanystringview, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, namespaceUri, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, name, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qxmlstreamwriter_qxmlstreamwriter_writecurrenttoken, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, reader, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qxmlstreamwriter_qxmlstreamwriter_haserror, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_core_qxmlstreamwriter_qxmlstreamwriter_method_entry) {
	PHP_ME(Qt_Core_QXmlStreamWriter_QXmlStreamWriter, new_, arginfo_qt_core_qxmlstreamwriter_qxmlstreamwriter_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QXmlStreamWriter_QXmlStreamWriter, newQIODevice, arginfo_qt_core_qxmlstreamwriter_qxmlstreamwriter_newqiodevice, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QXmlStreamWriter_QXmlStreamWriter, newQByteArray, arginfo_qt_core_qxmlstreamwriter_qxmlstreamwriter_newqbytearray, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QXmlStreamWriter_QXmlStreamWriter, newQString, arginfo_qt_core_qxmlstreamwriter_qxmlstreamwriter_newqstring, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QXmlStreamWriter_QXmlStreamWriter, setDevice, arginfo_qt_core_qxmlstreamwriter_qxmlstreamwriter_setdevice, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QXmlStreamWriter_QXmlStreamWriter, device, arginfo_qt_core_qxmlstreamwriter_qxmlstreamwriter_device, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QXmlStreamWriter_QXmlStreamWriter, setAutoFormatting, arginfo_qt_core_qxmlstreamwriter_qxmlstreamwriter_setautoformatting, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QXmlStreamWriter_QXmlStreamWriter, autoFormatting, arginfo_qt_core_qxmlstreamwriter_qxmlstreamwriter_autoformatting, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QXmlStreamWriter_QXmlStreamWriter, setAutoFormattingIndent, arginfo_qt_core_qxmlstreamwriter_qxmlstreamwriter_setautoformattingindent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QXmlStreamWriter_QXmlStreamWriter, autoFormattingIndent, arginfo_qt_core_qxmlstreamwriter_qxmlstreamwriter_autoformattingindent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QXmlStreamWriter_QXmlStreamWriter, writeAttribute, arginfo_qt_core_qxmlstreamwriter_qxmlstreamwriter_writeattribute, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QXmlStreamWriter_QXmlStreamWriter, writeAttributeQAnyStringViewQAnyStringViewQAnyStringView, arginfo_qt_core_qxmlstreamwriter_qxmlstreamwriter_writeattributeqanystringviewqanystringviewqanystringview, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QXmlStreamWriter_QXmlStreamWriter, writeAttributeQXmlStreamAttribute, arginfo_qt_core_qxmlstreamwriter_qxmlstreamwriter_writeattributeqxmlstreamattribute, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QXmlStreamWriter_QXmlStreamWriter, writeAttributes, arginfo_qt_core_qxmlstreamwriter_qxmlstreamwriter_writeattributes, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QXmlStreamWriter_QXmlStreamWriter, writeCDATA, arginfo_qt_core_qxmlstreamwriter_qxmlstreamwriter_writecdata, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QXmlStreamWriter_QXmlStreamWriter, writeCharacters, arginfo_qt_core_qxmlstreamwriter_qxmlstreamwriter_writecharacters, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QXmlStreamWriter_QXmlStreamWriter, writeComment, arginfo_qt_core_qxmlstreamwriter_qxmlstreamwriter_writecomment, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QXmlStreamWriter_QXmlStreamWriter, writeDTD, arginfo_qt_core_qxmlstreamwriter_qxmlstreamwriter_writedtd, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QXmlStreamWriter_QXmlStreamWriter, writeEmptyElement, arginfo_qt_core_qxmlstreamwriter_qxmlstreamwriter_writeemptyelement, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QXmlStreamWriter_QXmlStreamWriter, writeEmptyElementQAnyStringViewQAnyStringView, arginfo_qt_core_qxmlstreamwriter_qxmlstreamwriter_writeemptyelementqanystringviewqanystringview, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QXmlStreamWriter_QXmlStreamWriter, writeTextElement, arginfo_qt_core_qxmlstreamwriter_qxmlstreamwriter_writetextelement, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QXmlStreamWriter_QXmlStreamWriter, writeTextElementQAnyStringViewQAnyStringViewQAnyStringView, arginfo_qt_core_qxmlstreamwriter_qxmlstreamwriter_writetextelementqanystringviewqanystringviewqanystringview, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QXmlStreamWriter_QXmlStreamWriter, writeEndDocument, arginfo_qt_core_qxmlstreamwriter_qxmlstreamwriter_writeenddocument, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QXmlStreamWriter_QXmlStreamWriter, writeEndElement, arginfo_qt_core_qxmlstreamwriter_qxmlstreamwriter_writeendelement, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QXmlStreamWriter_QXmlStreamWriter, writeEntityReference, arginfo_qt_core_qxmlstreamwriter_qxmlstreamwriter_writeentityreference, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QXmlStreamWriter_QXmlStreamWriter, writeNamespace, arginfo_qt_core_qxmlstreamwriter_qxmlstreamwriter_writenamespace, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QXmlStreamWriter_QXmlStreamWriter, writeDefaultNamespace, arginfo_qt_core_qxmlstreamwriter_qxmlstreamwriter_writedefaultnamespace, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QXmlStreamWriter_QXmlStreamWriter, writeProcessingInstruction, arginfo_qt_core_qxmlstreamwriter_qxmlstreamwriter_writeprocessinginstruction, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QXmlStreamWriter_QXmlStreamWriter, writeStartDocument, arginfo_qt_core_qxmlstreamwriter_qxmlstreamwriter_writestartdocument, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QXmlStreamWriter_QXmlStreamWriter, writeStartDocumentQAnyStringView, arginfo_qt_core_qxmlstreamwriter_qxmlstreamwriter_writestartdocumentqanystringview, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QXmlStreamWriter_QXmlStreamWriter, writeStartDocumentQAnyStringViewBool, arginfo_qt_core_qxmlstreamwriter_qxmlstreamwriter_writestartdocumentqanystringviewbool, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QXmlStreamWriter_QXmlStreamWriter, writeStartElement, arginfo_qt_core_qxmlstreamwriter_qxmlstreamwriter_writestartelement, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QXmlStreamWriter_QXmlStreamWriter, writeStartElementQAnyStringViewQAnyStringView, arginfo_qt_core_qxmlstreamwriter_qxmlstreamwriter_writestartelementqanystringviewqanystringview, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QXmlStreamWriter_QXmlStreamWriter, writeCurrentToken, arginfo_qt_core_qxmlstreamwriter_qxmlstreamwriter_writecurrenttoken, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QXmlStreamWriter_QXmlStreamWriter, hasError, arginfo_qt_core_qxmlstreamwriter_qxmlstreamwriter_haserror, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
