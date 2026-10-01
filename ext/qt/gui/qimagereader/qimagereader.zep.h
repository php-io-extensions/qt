
extern zend_class_entry *qt_gui_qimagereader_qimagereader_ce;

ZEPHIR_INIT_CLASS(Qt_Gui_QImageReader_QImageReader);

PHP_METHOD(Qt_Gui_QImageReader_QImageReader, tr);
PHP_METHOD(Qt_Gui_QImageReader_QImageReader, new_);
PHP_METHOD(Qt_Gui_QImageReader_QImageReader, newQIODeviceQByteArray);
PHP_METHOD(Qt_Gui_QImageReader_QImageReader, newQStringQByteArray);
PHP_METHOD(Qt_Gui_QImageReader_QImageReader, setFormat);
PHP_METHOD(Qt_Gui_QImageReader_QImageReader, format);
PHP_METHOD(Qt_Gui_QImageReader_QImageReader, setAutoDetectImageFormat);
PHP_METHOD(Qt_Gui_QImageReader_QImageReader, autoDetectImageFormat);
PHP_METHOD(Qt_Gui_QImageReader_QImageReader, setDecideFormatFromContent);
PHP_METHOD(Qt_Gui_QImageReader_QImageReader, decideFormatFromContent);
PHP_METHOD(Qt_Gui_QImageReader_QImageReader, setDevice);
PHP_METHOD(Qt_Gui_QImageReader_QImageReader, device);
PHP_METHOD(Qt_Gui_QImageReader_QImageReader, setFileName);
PHP_METHOD(Qt_Gui_QImageReader_QImageReader, fileName);
PHP_METHOD(Qt_Gui_QImageReader_QImageReader, size);
PHP_METHOD(Qt_Gui_QImageReader_QImageReader, imageFormat);
PHP_METHOD(Qt_Gui_QImageReader_QImageReader, textKeys);
PHP_METHOD(Qt_Gui_QImageReader_QImageReader, text);
PHP_METHOD(Qt_Gui_QImageReader_QImageReader, setClipRect);
PHP_METHOD(Qt_Gui_QImageReader_QImageReader, clipRect);
PHP_METHOD(Qt_Gui_QImageReader_QImageReader, setScaledSize);
PHP_METHOD(Qt_Gui_QImageReader_QImageReader, scaledSize);
PHP_METHOD(Qt_Gui_QImageReader_QImageReader, setQuality);
PHP_METHOD(Qt_Gui_QImageReader_QImageReader, quality);
PHP_METHOD(Qt_Gui_QImageReader_QImageReader, setScaledClipRect);
PHP_METHOD(Qt_Gui_QImageReader_QImageReader, scaledClipRect);
PHP_METHOD(Qt_Gui_QImageReader_QImageReader, setBackgroundColor);
PHP_METHOD(Qt_Gui_QImageReader_QImageReader, backgroundColor);
PHP_METHOD(Qt_Gui_QImageReader_QImageReader, supportsAnimation);
PHP_METHOD(Qt_Gui_QImageReader_QImageReader, transformation);
PHP_METHOD(Qt_Gui_QImageReader_QImageReader, setAutoTransform);
PHP_METHOD(Qt_Gui_QImageReader_QImageReader, autoTransform);
PHP_METHOD(Qt_Gui_QImageReader_QImageReader, subType);
PHP_METHOD(Qt_Gui_QImageReader_QImageReader, supportedSubTypes);
PHP_METHOD(Qt_Gui_QImageReader_QImageReader, canRead);
PHP_METHOD(Qt_Gui_QImageReader_QImageReader, read);
PHP_METHOD(Qt_Gui_QImageReader_QImageReader, readQImage);
PHP_METHOD(Qt_Gui_QImageReader_QImageReader, jumpToNextImage);
PHP_METHOD(Qt_Gui_QImageReader_QImageReader, jumpToImage);
PHP_METHOD(Qt_Gui_QImageReader_QImageReader, loopCount);
PHP_METHOD(Qt_Gui_QImageReader_QImageReader, imageCount);
PHP_METHOD(Qt_Gui_QImageReader_QImageReader, nextImageDelay);
PHP_METHOD(Qt_Gui_QImageReader_QImageReader, currentImageNumber);
PHP_METHOD(Qt_Gui_QImageReader_QImageReader, currentImageRect);
PHP_METHOD(Qt_Gui_QImageReader_QImageReader, error);
PHP_METHOD(Qt_Gui_QImageReader_QImageReader, errorString);
PHP_METHOD(Qt_Gui_QImageReader_QImageReader, supportsOption);
PHP_METHOD(Qt_Gui_QImageReader_QImageReader, imageFormatQString);
PHP_METHOD(Qt_Gui_QImageReader_QImageReader, imageFormatQIODevice);
PHP_METHOD(Qt_Gui_QImageReader_QImageReader, supportedImageFormats);
PHP_METHOD(Qt_Gui_QImageReader_QImageReader, supportedMimeTypes);
PHP_METHOD(Qt_Gui_QImageReader_QImageReader, imageFormatsForMimeType);
PHP_METHOD(Qt_Gui_QImageReader_QImageReader, allocationLimit);
PHP_METHOD(Qt_Gui_QImageReader_QImageReader, setAllocationLimit);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qimagereader_qimagereader_tr, 0, 1, IS_STRING, 0)
	ZEND_ARG_INFO(0, sourceText)
	ZEND_ARG_INFO(0, disambiguation)
	ZEND_ARG_TYPE_INFO(0, n, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qimagereader_qimagereader_new_, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qimagereader_qimagereader_newqiodeviceqbytearray, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, device, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, format, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qimagereader_qimagereader_newqstringqbytearray, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, fileName, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, format, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qimagereader_qimagereader_setformat, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, format, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qimagereader_qimagereader_format, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qimagereader_qimagereader_setautodetectimageformat, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, enabled, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qimagereader_qimagereader_autodetectimageformat, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qimagereader_qimagereader_setdecideformatfromcontent, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, ignored, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qimagereader_qimagereader_decideformatfromcontent, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qimagereader_qimagereader_setdevice, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, device, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qimagereader_qimagereader_device, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qimagereader_qimagereader_setfilename, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, fileName, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qimagereader_qimagereader_filename, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qimagereader_qimagereader_size, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qimagereader_qimagereader_imageformat, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qimagereader_qimagereader_textkeys, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qimagereader_qimagereader_text, 0, 2, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, key, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qimagereader_qimagereader_setcliprect, 0, 5, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rectX, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rectY, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rectWidth, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rectHeight, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qimagereader_qimagereader_cliprect, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qimagereader_qimagereader_setscaledsize, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sizeWidth, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sizeHeight, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qimagereader_qimagereader_scaledsize, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qimagereader_qimagereader_setquality, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, quality, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qimagereader_qimagereader_quality, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qimagereader_qimagereader_setscaledcliprect, 0, 5, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rectX, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rectY, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rectWidth, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rectHeight, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qimagereader_qimagereader_scaledcliprect, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qimagereader_qimagereader_setbackgroundcolor, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, color, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qimagereader_qimagereader_backgroundcolor, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qimagereader_qimagereader_supportsanimation, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qimagereader_qimagereader_transformation, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qimagereader_qimagereader_setautotransform, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, enabled, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qimagereader_qimagereader_autotransform, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qimagereader_qimagereader_subtype, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qimagereader_qimagereader_supportedsubtypes, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qimagereader_qimagereader_canread, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qimagereader_qimagereader_read, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qimagereader_qimagereader_readqimage, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, image, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qimagereader_qimagereader_jumptonextimage, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qimagereader_qimagereader_jumptoimage, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, imageNumber, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qimagereader_qimagereader_loopcount, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qimagereader_qimagereader_imagecount, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qimagereader_qimagereader_nextimagedelay, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qimagereader_qimagereader_currentimagenumber, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qimagereader_qimagereader_currentimagerect, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qimagereader_qimagereader_error, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qimagereader_qimagereader_errorstring, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qimagereader_qimagereader_supportsoption, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, option, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qimagereader_qimagereader_imageformatqstring, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, fileName, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qimagereader_qimagereader_imageformatqiodevice, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, device, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qimagereader_qimagereader_supportedimageformats, 0, 0, IS_ARRAY, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qimagereader_qimagereader_supportedmimetypes, 0, 0, IS_ARRAY, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qimagereader_qimagereader_imageformatsformimetype, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, mimeType, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qimagereader_qimagereader_allocationlimit, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qimagereader_qimagereader_setallocationlimit, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, mbLimit, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_gui_qimagereader_qimagereader_method_entry) {
	PHP_ME(Qt_Gui_QImageReader_QImageReader, tr, arginfo_qt_gui_qimagereader_qimagereader_tr, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QImageReader_QImageReader, new_, arginfo_qt_gui_qimagereader_qimagereader_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QImageReader_QImageReader, newQIODeviceQByteArray, arginfo_qt_gui_qimagereader_qimagereader_newqiodeviceqbytearray, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QImageReader_QImageReader, newQStringQByteArray, arginfo_qt_gui_qimagereader_qimagereader_newqstringqbytearray, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QImageReader_QImageReader, setFormat, arginfo_qt_gui_qimagereader_qimagereader_setformat, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QImageReader_QImageReader, format, arginfo_qt_gui_qimagereader_qimagereader_format, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QImageReader_QImageReader, setAutoDetectImageFormat, arginfo_qt_gui_qimagereader_qimagereader_setautodetectimageformat, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QImageReader_QImageReader, autoDetectImageFormat, arginfo_qt_gui_qimagereader_qimagereader_autodetectimageformat, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QImageReader_QImageReader, setDecideFormatFromContent, arginfo_qt_gui_qimagereader_qimagereader_setdecideformatfromcontent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QImageReader_QImageReader, decideFormatFromContent, arginfo_qt_gui_qimagereader_qimagereader_decideformatfromcontent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QImageReader_QImageReader, setDevice, arginfo_qt_gui_qimagereader_qimagereader_setdevice, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QImageReader_QImageReader, device, arginfo_qt_gui_qimagereader_qimagereader_device, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QImageReader_QImageReader, setFileName, arginfo_qt_gui_qimagereader_qimagereader_setfilename, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QImageReader_QImageReader, fileName, arginfo_qt_gui_qimagereader_qimagereader_filename, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QImageReader_QImageReader, size, arginfo_qt_gui_qimagereader_qimagereader_size, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QImageReader_QImageReader, imageFormat, arginfo_qt_gui_qimagereader_qimagereader_imageformat, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QImageReader_QImageReader, textKeys, arginfo_qt_gui_qimagereader_qimagereader_textkeys, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QImageReader_QImageReader, text, arginfo_qt_gui_qimagereader_qimagereader_text, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QImageReader_QImageReader, setClipRect, arginfo_qt_gui_qimagereader_qimagereader_setcliprect, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QImageReader_QImageReader, clipRect, arginfo_qt_gui_qimagereader_qimagereader_cliprect, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QImageReader_QImageReader, setScaledSize, arginfo_qt_gui_qimagereader_qimagereader_setscaledsize, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QImageReader_QImageReader, scaledSize, arginfo_qt_gui_qimagereader_qimagereader_scaledsize, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QImageReader_QImageReader, setQuality, arginfo_qt_gui_qimagereader_qimagereader_setquality, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QImageReader_QImageReader, quality, arginfo_qt_gui_qimagereader_qimagereader_quality, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QImageReader_QImageReader, setScaledClipRect, arginfo_qt_gui_qimagereader_qimagereader_setscaledcliprect, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QImageReader_QImageReader, scaledClipRect, arginfo_qt_gui_qimagereader_qimagereader_scaledcliprect, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QImageReader_QImageReader, setBackgroundColor, arginfo_qt_gui_qimagereader_qimagereader_setbackgroundcolor, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QImageReader_QImageReader, backgroundColor, arginfo_qt_gui_qimagereader_qimagereader_backgroundcolor, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QImageReader_QImageReader, supportsAnimation, arginfo_qt_gui_qimagereader_qimagereader_supportsanimation, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QImageReader_QImageReader, transformation, arginfo_qt_gui_qimagereader_qimagereader_transformation, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QImageReader_QImageReader, setAutoTransform, arginfo_qt_gui_qimagereader_qimagereader_setautotransform, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QImageReader_QImageReader, autoTransform, arginfo_qt_gui_qimagereader_qimagereader_autotransform, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QImageReader_QImageReader, subType, arginfo_qt_gui_qimagereader_qimagereader_subtype, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QImageReader_QImageReader, supportedSubTypes, arginfo_qt_gui_qimagereader_qimagereader_supportedsubtypes, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QImageReader_QImageReader, canRead, arginfo_qt_gui_qimagereader_qimagereader_canread, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QImageReader_QImageReader, read, arginfo_qt_gui_qimagereader_qimagereader_read, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QImageReader_QImageReader, readQImage, arginfo_qt_gui_qimagereader_qimagereader_readqimage, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QImageReader_QImageReader, jumpToNextImage, arginfo_qt_gui_qimagereader_qimagereader_jumptonextimage, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QImageReader_QImageReader, jumpToImage, arginfo_qt_gui_qimagereader_qimagereader_jumptoimage, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QImageReader_QImageReader, loopCount, arginfo_qt_gui_qimagereader_qimagereader_loopcount, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QImageReader_QImageReader, imageCount, arginfo_qt_gui_qimagereader_qimagereader_imagecount, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QImageReader_QImageReader, nextImageDelay, arginfo_qt_gui_qimagereader_qimagereader_nextimagedelay, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QImageReader_QImageReader, currentImageNumber, arginfo_qt_gui_qimagereader_qimagereader_currentimagenumber, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QImageReader_QImageReader, currentImageRect, arginfo_qt_gui_qimagereader_qimagereader_currentimagerect, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QImageReader_QImageReader, error, arginfo_qt_gui_qimagereader_qimagereader_error, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QImageReader_QImageReader, errorString, arginfo_qt_gui_qimagereader_qimagereader_errorstring, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QImageReader_QImageReader, supportsOption, arginfo_qt_gui_qimagereader_qimagereader_supportsoption, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QImageReader_QImageReader, imageFormatQString, arginfo_qt_gui_qimagereader_qimagereader_imageformatqstring, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QImageReader_QImageReader, imageFormatQIODevice, arginfo_qt_gui_qimagereader_qimagereader_imageformatqiodevice, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QImageReader_QImageReader, supportedImageFormats, arginfo_qt_gui_qimagereader_qimagereader_supportedimageformats, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QImageReader_QImageReader, supportedMimeTypes, arginfo_qt_gui_qimagereader_qimagereader_supportedmimetypes, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QImageReader_QImageReader, imageFormatsForMimeType, arginfo_qt_gui_qimagereader_qimagereader_imageformatsformimetype, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QImageReader_QImageReader, allocationLimit, arginfo_qt_gui_qimagereader_qimagereader_allocationlimit, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QImageReader_QImageReader, setAllocationLimit, arginfo_qt_gui_qimagereader_qimagereader_setallocationlimit, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
