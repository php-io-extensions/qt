
extern zend_class_entry *qt_gui_qpdfwriter_qpdfwriter_ce;

ZEPHIR_INIT_CLASS(Qt_Gui_QPdfWriter_QPdfWriter);

PHP_METHOD(Qt_Gui_QPdfWriter_QPdfWriter, staticMetaObject);
PHP_METHOD(Qt_Gui_QPdfWriter_QPdfWriter, tr);
PHP_METHOD(Qt_Gui_QPdfWriter_QPdfWriter, new_);
PHP_METHOD(Qt_Gui_QPdfWriter_QPdfWriter, newQIODevice);
PHP_METHOD(Qt_Gui_QPdfWriter_QPdfWriter, setPdfVersion);
PHP_METHOD(Qt_Gui_QPdfWriter_QPdfWriter, pdfVersion);
PHP_METHOD(Qt_Gui_QPdfWriter_QPdfWriter, title);
PHP_METHOD(Qt_Gui_QPdfWriter_QPdfWriter, setTitle);
PHP_METHOD(Qt_Gui_QPdfWriter_QPdfWriter, creator);
PHP_METHOD(Qt_Gui_QPdfWriter_QPdfWriter, setCreator);
PHP_METHOD(Qt_Gui_QPdfWriter_QPdfWriter, documentId);
PHP_METHOD(Qt_Gui_QPdfWriter_QPdfWriter, setDocumentId);
PHP_METHOD(Qt_Gui_QPdfWriter_QPdfWriter, newPage);
PHP_METHOD(Qt_Gui_QPdfWriter_QPdfWriter, setResolution);
PHP_METHOD(Qt_Gui_QPdfWriter_QPdfWriter, resolution);
PHP_METHOD(Qt_Gui_QPdfWriter_QPdfWriter, setDocumentXmpMetadata);
PHP_METHOD(Qt_Gui_QPdfWriter_QPdfWriter, documentXmpMetadata);
PHP_METHOD(Qt_Gui_QPdfWriter_QPdfWriter, addFileAttachment);
PHP_METHOD(Qt_Gui_QPdfWriter_QPdfWriter, colorModel);
PHP_METHOD(Qt_Gui_QPdfWriter_QPdfWriter, setColorModel);
PHP_METHOD(Qt_Gui_QPdfWriter_QPdfWriter, outputIntent);
PHP_METHOD(Qt_Gui_QPdfWriter_QPdfWriter, setOutputIntent);
PHP_METHOD(Qt_Gui_QPdfWriter_QPdfWriter, paintEngine);
PHP_METHOD(Qt_Gui_QPdfWriter_QPdfWriter, metric);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpdfwriter_qpdfwriter_staticmetaobject, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpdfwriter_qpdfwriter_tr, 0, 1, IS_STRING, 0)
	ZEND_ARG_INFO(0, s)
	ZEND_ARG_INFO(0, c)
	ZEND_ARG_TYPE_INFO(0, n, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpdfwriter_qpdfwriter_new_, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, filename, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpdfwriter_qpdfwriter_newqiodevice, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, device, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpdfwriter_qpdfwriter_setpdfversion, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, version, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpdfwriter_qpdfwriter_pdfversion, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpdfwriter_qpdfwriter_title, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpdfwriter_qpdfwriter_settitle, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, title, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpdfwriter_qpdfwriter_creator, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpdfwriter_qpdfwriter_setcreator, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, creator, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpdfwriter_qpdfwriter_documentid, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpdfwriter_qpdfwriter_setdocumentid, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, documentId, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpdfwriter_qpdfwriter_newpage, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpdfwriter_qpdfwriter_setresolution, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, resolution, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpdfwriter_qpdfwriter_resolution, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpdfwriter_qpdfwriter_setdocumentxmpmetadata, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, xmpMetadata, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpdfwriter_qpdfwriter_documentxmpmetadata, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpdfwriter_qpdfwriter_addfileattachment, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, fileName, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, data, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, mimeType, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpdfwriter_qpdfwriter_colormodel, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpdfwriter_qpdfwriter_setcolormodel, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, model, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpdfwriter_qpdfwriter_outputintent, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpdfwriter_qpdfwriter_setoutputintent, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, intent, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpdfwriter_qpdfwriter_paintengine, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpdfwriter_qpdfwriter_metric, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, id, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_gui_qpdfwriter_qpdfwriter_method_entry) {
	PHP_ME(Qt_Gui_QPdfWriter_QPdfWriter, staticMetaObject, arginfo_qt_gui_qpdfwriter_qpdfwriter_staticmetaobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPdfWriter_QPdfWriter, tr, arginfo_qt_gui_qpdfwriter_qpdfwriter_tr, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPdfWriter_QPdfWriter, new_, arginfo_qt_gui_qpdfwriter_qpdfwriter_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPdfWriter_QPdfWriter, newQIODevice, arginfo_qt_gui_qpdfwriter_qpdfwriter_newqiodevice, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPdfWriter_QPdfWriter, setPdfVersion, arginfo_qt_gui_qpdfwriter_qpdfwriter_setpdfversion, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPdfWriter_QPdfWriter, pdfVersion, arginfo_qt_gui_qpdfwriter_qpdfwriter_pdfversion, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPdfWriter_QPdfWriter, title, arginfo_qt_gui_qpdfwriter_qpdfwriter_title, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPdfWriter_QPdfWriter, setTitle, arginfo_qt_gui_qpdfwriter_qpdfwriter_settitle, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPdfWriter_QPdfWriter, creator, arginfo_qt_gui_qpdfwriter_qpdfwriter_creator, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPdfWriter_QPdfWriter, setCreator, arginfo_qt_gui_qpdfwriter_qpdfwriter_setcreator, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPdfWriter_QPdfWriter, documentId, arginfo_qt_gui_qpdfwriter_qpdfwriter_documentid, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPdfWriter_QPdfWriter, setDocumentId, arginfo_qt_gui_qpdfwriter_qpdfwriter_setdocumentid, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPdfWriter_QPdfWriter, newPage, arginfo_qt_gui_qpdfwriter_qpdfwriter_newpage, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPdfWriter_QPdfWriter, setResolution, arginfo_qt_gui_qpdfwriter_qpdfwriter_setresolution, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPdfWriter_QPdfWriter, resolution, arginfo_qt_gui_qpdfwriter_qpdfwriter_resolution, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPdfWriter_QPdfWriter, setDocumentXmpMetadata, arginfo_qt_gui_qpdfwriter_qpdfwriter_setdocumentxmpmetadata, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPdfWriter_QPdfWriter, documentXmpMetadata, arginfo_qt_gui_qpdfwriter_qpdfwriter_documentxmpmetadata, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPdfWriter_QPdfWriter, addFileAttachment, arginfo_qt_gui_qpdfwriter_qpdfwriter_addfileattachment, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPdfWriter_QPdfWriter, colorModel, arginfo_qt_gui_qpdfwriter_qpdfwriter_colormodel, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPdfWriter_QPdfWriter, setColorModel, arginfo_qt_gui_qpdfwriter_qpdfwriter_setcolormodel, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPdfWriter_QPdfWriter, outputIntent, arginfo_qt_gui_qpdfwriter_qpdfwriter_outputintent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPdfWriter_QPdfWriter, setOutputIntent, arginfo_qt_gui_qpdfwriter_qpdfwriter_setoutputintent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPdfWriter_QPdfWriter, paintEngine, arginfo_qt_gui_qpdfwriter_qpdfwriter_paintengine, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPdfWriter_QPdfWriter, metric, arginfo_qt_gui_qpdfwriter_qpdfwriter_metric, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
