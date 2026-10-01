
extern zend_class_entry *qt_gui_qtextdocumentwriter_qtextdocumentwriter_ce;

ZEPHIR_INIT_CLASS(Qt_Gui_QTextDocumentWriter_QTextDocumentWriter);

PHP_METHOD(Qt_Gui_QTextDocumentWriter_QTextDocumentWriter, new_);
PHP_METHOD(Qt_Gui_QTextDocumentWriter_QTextDocumentWriter, newQIODeviceQByteArray);
PHP_METHOD(Qt_Gui_QTextDocumentWriter_QTextDocumentWriter, newQStringQByteArray);
PHP_METHOD(Qt_Gui_QTextDocumentWriter_QTextDocumentWriter, setFormat);
PHP_METHOD(Qt_Gui_QTextDocumentWriter_QTextDocumentWriter, format);
PHP_METHOD(Qt_Gui_QTextDocumentWriter_QTextDocumentWriter, setDevice);
PHP_METHOD(Qt_Gui_QTextDocumentWriter_QTextDocumentWriter, device);
PHP_METHOD(Qt_Gui_QTextDocumentWriter_QTextDocumentWriter, setFileName);
PHP_METHOD(Qt_Gui_QTextDocumentWriter_QTextDocumentWriter, fileName);
PHP_METHOD(Qt_Gui_QTextDocumentWriter_QTextDocumentWriter, write);
PHP_METHOD(Qt_Gui_QTextDocumentWriter_QTextDocumentWriter, writeQTextDocumentFragment);
PHP_METHOD(Qt_Gui_QTextDocumentWriter_QTextDocumentWriter, supportedDocumentFormats);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextdocumentwriter_qtextdocumentwriter_new_, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextdocumentwriter_qtextdocumentwriter_newqiodeviceqbytearray, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, device, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, format, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextdocumentwriter_qtextdocumentwriter_newqstringqbytearray, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, fileName, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, format, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextdocumentwriter_qtextdocumentwriter_setformat, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, format, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextdocumentwriter_qtextdocumentwriter_format, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextdocumentwriter_qtextdocumentwriter_setdevice, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, device, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextdocumentwriter_qtextdocumentwriter_device, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextdocumentwriter_qtextdocumentwriter_setfilename, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, fileName, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextdocumentwriter_qtextdocumentwriter_filename, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextdocumentwriter_qtextdocumentwriter_write, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, document, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextdocumentwriter_qtextdocumentwriter_writeqtextdocumentfragment, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, fragment, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextdocumentwriter_qtextdocumentwriter_supporteddocumentformats, 0, 0, IS_ARRAY, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_gui_qtextdocumentwriter_qtextdocumentwriter_method_entry) {
	PHP_ME(Qt_Gui_QTextDocumentWriter_QTextDocumentWriter, new_, arginfo_qt_gui_qtextdocumentwriter_qtextdocumentwriter_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextDocumentWriter_QTextDocumentWriter, newQIODeviceQByteArray, arginfo_qt_gui_qtextdocumentwriter_qtextdocumentwriter_newqiodeviceqbytearray, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextDocumentWriter_QTextDocumentWriter, newQStringQByteArray, arginfo_qt_gui_qtextdocumentwriter_qtextdocumentwriter_newqstringqbytearray, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextDocumentWriter_QTextDocumentWriter, setFormat, arginfo_qt_gui_qtextdocumentwriter_qtextdocumentwriter_setformat, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextDocumentWriter_QTextDocumentWriter, format, arginfo_qt_gui_qtextdocumentwriter_qtextdocumentwriter_format, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextDocumentWriter_QTextDocumentWriter, setDevice, arginfo_qt_gui_qtextdocumentwriter_qtextdocumentwriter_setdevice, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextDocumentWriter_QTextDocumentWriter, device, arginfo_qt_gui_qtextdocumentwriter_qtextdocumentwriter_device, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextDocumentWriter_QTextDocumentWriter, setFileName, arginfo_qt_gui_qtextdocumentwriter_qtextdocumentwriter_setfilename, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextDocumentWriter_QTextDocumentWriter, fileName, arginfo_qt_gui_qtextdocumentwriter_qtextdocumentwriter_filename, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextDocumentWriter_QTextDocumentWriter, write, arginfo_qt_gui_qtextdocumentwriter_qtextdocumentwriter_write, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextDocumentWriter_QTextDocumentWriter, writeQTextDocumentFragment, arginfo_qt_gui_qtextdocumentwriter_qtextdocumentwriter_writeqtextdocumentfragment, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextDocumentWriter_QTextDocumentWriter, supportedDocumentFormats, arginfo_qt_gui_qtextdocumentwriter_qtextdocumentwriter_supporteddocumentformats, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
