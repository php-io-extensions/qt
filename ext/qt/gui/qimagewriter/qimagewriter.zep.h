
extern zend_class_entry *qt_gui_qimagewriter_qimagewriter_ce;

ZEPHIR_INIT_CLASS(Qt_Gui_QImageWriter_QImageWriter);

PHP_METHOD(Qt_Gui_QImageWriter_QImageWriter, tr);
PHP_METHOD(Qt_Gui_QImageWriter_QImageWriter, new_);
PHP_METHOD(Qt_Gui_QImageWriter_QImageWriter, newQIODeviceQByteArray);
PHP_METHOD(Qt_Gui_QImageWriter_QImageWriter, newQStringQByteArray);
PHP_METHOD(Qt_Gui_QImageWriter_QImageWriter, setFormat);
PHP_METHOD(Qt_Gui_QImageWriter_QImageWriter, format);
PHP_METHOD(Qt_Gui_QImageWriter_QImageWriter, setDevice);
PHP_METHOD(Qt_Gui_QImageWriter_QImageWriter, device);
PHP_METHOD(Qt_Gui_QImageWriter_QImageWriter, setFileName);
PHP_METHOD(Qt_Gui_QImageWriter_QImageWriter, fileName);
PHP_METHOD(Qt_Gui_QImageWriter_QImageWriter, setQuality);
PHP_METHOD(Qt_Gui_QImageWriter_QImageWriter, quality);
PHP_METHOD(Qt_Gui_QImageWriter_QImageWriter, setCompression);
PHP_METHOD(Qt_Gui_QImageWriter_QImageWriter, compression);
PHP_METHOD(Qt_Gui_QImageWriter_QImageWriter, setSubType);
PHP_METHOD(Qt_Gui_QImageWriter_QImageWriter, subType);
PHP_METHOD(Qt_Gui_QImageWriter_QImageWriter, supportedSubTypes);
PHP_METHOD(Qt_Gui_QImageWriter_QImageWriter, setOptimizedWrite);
PHP_METHOD(Qt_Gui_QImageWriter_QImageWriter, optimizedWrite);
PHP_METHOD(Qt_Gui_QImageWriter_QImageWriter, setProgressiveScanWrite);
PHP_METHOD(Qt_Gui_QImageWriter_QImageWriter, progressiveScanWrite);
PHP_METHOD(Qt_Gui_QImageWriter_QImageWriter, transformation);
PHP_METHOD(Qt_Gui_QImageWriter_QImageWriter, setTransformation);
PHP_METHOD(Qt_Gui_QImageWriter_QImageWriter, setText);
PHP_METHOD(Qt_Gui_QImageWriter_QImageWriter, canWrite);
PHP_METHOD(Qt_Gui_QImageWriter_QImageWriter, write);
PHP_METHOD(Qt_Gui_QImageWriter_QImageWriter, error);
PHP_METHOD(Qt_Gui_QImageWriter_QImageWriter, errorString);
PHP_METHOD(Qt_Gui_QImageWriter_QImageWriter, supportsOption);
PHP_METHOD(Qt_Gui_QImageWriter_QImageWriter, supportedImageFormats);
PHP_METHOD(Qt_Gui_QImageWriter_QImageWriter, supportedMimeTypes);
PHP_METHOD(Qt_Gui_QImageWriter_QImageWriter, imageFormatsForMimeType);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qimagewriter_qimagewriter_tr, 0, 1, IS_STRING, 0)
	ZEND_ARG_INFO(0, sourceText)
	ZEND_ARG_INFO(0, disambiguation)
	ZEND_ARG_TYPE_INFO(0, n, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qimagewriter_qimagewriter_new_, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qimagewriter_qimagewriter_newqiodeviceqbytearray, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, device, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, format, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qimagewriter_qimagewriter_newqstringqbytearray, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, fileName, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, format, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qimagewriter_qimagewriter_setformat, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, format, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qimagewriter_qimagewriter_format, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qimagewriter_qimagewriter_setdevice, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, device, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qimagewriter_qimagewriter_device, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qimagewriter_qimagewriter_setfilename, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, fileName, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qimagewriter_qimagewriter_filename, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qimagewriter_qimagewriter_setquality, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, quality, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qimagewriter_qimagewriter_quality, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qimagewriter_qimagewriter_setcompression, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, compression, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qimagewriter_qimagewriter_compression, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qimagewriter_qimagewriter_setsubtype, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, type, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qimagewriter_qimagewriter_subtype, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qimagewriter_qimagewriter_supportedsubtypes, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qimagewriter_qimagewriter_setoptimizedwrite, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, optimize, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qimagewriter_qimagewriter_optimizedwrite, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qimagewriter_qimagewriter_setprogressivescanwrite, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, progressive, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qimagewriter_qimagewriter_progressivescanwrite, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qimagewriter_qimagewriter_transformation, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qimagewriter_qimagewriter_settransformation, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, orientation, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qimagewriter_qimagewriter_settext, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, key, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, text, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qimagewriter_qimagewriter_canwrite, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qimagewriter_qimagewriter_write, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, image, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qimagewriter_qimagewriter_error, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qimagewriter_qimagewriter_errorstring, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qimagewriter_qimagewriter_supportsoption, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, option, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qimagewriter_qimagewriter_supportedimageformats, 0, 0, IS_ARRAY, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qimagewriter_qimagewriter_supportedmimetypes, 0, 0, IS_ARRAY, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qimagewriter_qimagewriter_imageformatsformimetype, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, mimeType, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_gui_qimagewriter_qimagewriter_method_entry) {
	PHP_ME(Qt_Gui_QImageWriter_QImageWriter, tr, arginfo_qt_gui_qimagewriter_qimagewriter_tr, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QImageWriter_QImageWriter, new_, arginfo_qt_gui_qimagewriter_qimagewriter_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QImageWriter_QImageWriter, newQIODeviceQByteArray, arginfo_qt_gui_qimagewriter_qimagewriter_newqiodeviceqbytearray, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QImageWriter_QImageWriter, newQStringQByteArray, arginfo_qt_gui_qimagewriter_qimagewriter_newqstringqbytearray, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QImageWriter_QImageWriter, setFormat, arginfo_qt_gui_qimagewriter_qimagewriter_setformat, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QImageWriter_QImageWriter, format, arginfo_qt_gui_qimagewriter_qimagewriter_format, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QImageWriter_QImageWriter, setDevice, arginfo_qt_gui_qimagewriter_qimagewriter_setdevice, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QImageWriter_QImageWriter, device, arginfo_qt_gui_qimagewriter_qimagewriter_device, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QImageWriter_QImageWriter, setFileName, arginfo_qt_gui_qimagewriter_qimagewriter_setfilename, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QImageWriter_QImageWriter, fileName, arginfo_qt_gui_qimagewriter_qimagewriter_filename, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QImageWriter_QImageWriter, setQuality, arginfo_qt_gui_qimagewriter_qimagewriter_setquality, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QImageWriter_QImageWriter, quality, arginfo_qt_gui_qimagewriter_qimagewriter_quality, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QImageWriter_QImageWriter, setCompression, arginfo_qt_gui_qimagewriter_qimagewriter_setcompression, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QImageWriter_QImageWriter, compression, arginfo_qt_gui_qimagewriter_qimagewriter_compression, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QImageWriter_QImageWriter, setSubType, arginfo_qt_gui_qimagewriter_qimagewriter_setsubtype, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QImageWriter_QImageWriter, subType, arginfo_qt_gui_qimagewriter_qimagewriter_subtype, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QImageWriter_QImageWriter, supportedSubTypes, arginfo_qt_gui_qimagewriter_qimagewriter_supportedsubtypes, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QImageWriter_QImageWriter, setOptimizedWrite, arginfo_qt_gui_qimagewriter_qimagewriter_setoptimizedwrite, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QImageWriter_QImageWriter, optimizedWrite, arginfo_qt_gui_qimagewriter_qimagewriter_optimizedwrite, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QImageWriter_QImageWriter, setProgressiveScanWrite, arginfo_qt_gui_qimagewriter_qimagewriter_setprogressivescanwrite, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QImageWriter_QImageWriter, progressiveScanWrite, arginfo_qt_gui_qimagewriter_qimagewriter_progressivescanwrite, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QImageWriter_QImageWriter, transformation, arginfo_qt_gui_qimagewriter_qimagewriter_transformation, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QImageWriter_QImageWriter, setTransformation, arginfo_qt_gui_qimagewriter_qimagewriter_settransformation, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QImageWriter_QImageWriter, setText, arginfo_qt_gui_qimagewriter_qimagewriter_settext, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QImageWriter_QImageWriter, canWrite, arginfo_qt_gui_qimagewriter_qimagewriter_canwrite, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QImageWriter_QImageWriter, write, arginfo_qt_gui_qimagewriter_qimagewriter_write, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QImageWriter_QImageWriter, error, arginfo_qt_gui_qimagewriter_qimagewriter_error, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QImageWriter_QImageWriter, errorString, arginfo_qt_gui_qimagewriter_qimagewriter_errorstring, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QImageWriter_QImageWriter, supportsOption, arginfo_qt_gui_qimagewriter_qimagewriter_supportsoption, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QImageWriter_QImageWriter, supportedImageFormats, arginfo_qt_gui_qimagewriter_qimagewriter_supportedimageformats, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QImageWriter_QImageWriter, supportedMimeTypes, arginfo_qt_gui_qimagewriter_qimagewriter_supportedmimetypes, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QImageWriter_QImageWriter, imageFormatsForMimeType, arginfo_qt_gui_qimagewriter_qimagewriter_imageformatsformimetype, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
