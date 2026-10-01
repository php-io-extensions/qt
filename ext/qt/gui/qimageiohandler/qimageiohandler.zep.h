
extern zend_class_entry *qt_gui_qimageiohandler_qimageiohandler_ce;

ZEPHIR_INIT_CLASS(Qt_Gui_QImageIOHandler_QImageIOHandler);

PHP_METHOD(Qt_Gui_QImageIOHandler_QImageIOHandler, new_);
PHP_METHOD(Qt_Gui_QImageIOHandler_QImageIOHandler, setDevice);
PHP_METHOD(Qt_Gui_QImageIOHandler_QImageIOHandler, device);
PHP_METHOD(Qt_Gui_QImageIOHandler_QImageIOHandler, setFormat);
PHP_METHOD(Qt_Gui_QImageIOHandler_QImageIOHandler, format);
PHP_METHOD(Qt_Gui_QImageIOHandler_QImageIOHandler, canRead);
PHP_METHOD(Qt_Gui_QImageIOHandler_QImageIOHandler, read);
PHP_METHOD(Qt_Gui_QImageIOHandler_QImageIOHandler, write);
PHP_METHOD(Qt_Gui_QImageIOHandler_QImageIOHandler, option);
PHP_METHOD(Qt_Gui_QImageIOHandler_QImageIOHandler, setOption);
PHP_METHOD(Qt_Gui_QImageIOHandler_QImageIOHandler, supportsOption);
PHP_METHOD(Qt_Gui_QImageIOHandler_QImageIOHandler, jumpToNextImage);
PHP_METHOD(Qt_Gui_QImageIOHandler_QImageIOHandler, jumpToImage);
PHP_METHOD(Qt_Gui_QImageIOHandler_QImageIOHandler, loopCount);
PHP_METHOD(Qt_Gui_QImageIOHandler_QImageIOHandler, imageCount);
PHP_METHOD(Qt_Gui_QImageIOHandler_QImageIOHandler, nextImageDelay);
PHP_METHOD(Qt_Gui_QImageIOHandler_QImageIOHandler, currentImageNumber);
PHP_METHOD(Qt_Gui_QImageIOHandler_QImageIOHandler, currentImageRect);
PHP_METHOD(Qt_Gui_QImageIOHandler_QImageIOHandler, allocateImage);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qimageiohandler_qimageiohandler_new_, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qimageiohandler_qimageiohandler_setdevice, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, device, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qimageiohandler_qimageiohandler_device, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qimageiohandler_qimageiohandler_setformat, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, format, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qimageiohandler_qimageiohandler_format, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qimageiohandler_qimageiohandler_canread, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qimageiohandler_qimageiohandler_read, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, image, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qimageiohandler_qimageiohandler_write, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, image, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_qt_gui_qimageiohandler_qimageiohandler_option, 0, 0, 2)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, option, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qimageiohandler_qimageiohandler_setoption, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, option, IS_LONG, 0)
	ZEND_ARG_INFO(0, value)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qimageiohandler_qimageiohandler_supportsoption, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, option, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qimageiohandler_qimageiohandler_jumptonextimage, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qimageiohandler_qimageiohandler_jumptoimage, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, imageNumber, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qimageiohandler_qimageiohandler_loopcount, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qimageiohandler_qimageiohandler_imagecount, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qimageiohandler_qimageiohandler_nextimagedelay, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qimageiohandler_qimageiohandler_currentimagenumber, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qimageiohandler_qimageiohandler_currentimagerect, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qimageiohandler_qimageiohandler_allocateimage, 0, 4, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, sizeWidth, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sizeHeight, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, format, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, image, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_gui_qimageiohandler_qimageiohandler_method_entry) {
	PHP_ME(Qt_Gui_QImageIOHandler_QImageIOHandler, new_, arginfo_qt_gui_qimageiohandler_qimageiohandler_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QImageIOHandler_QImageIOHandler, setDevice, arginfo_qt_gui_qimageiohandler_qimageiohandler_setdevice, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QImageIOHandler_QImageIOHandler, device, arginfo_qt_gui_qimageiohandler_qimageiohandler_device, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QImageIOHandler_QImageIOHandler, setFormat, arginfo_qt_gui_qimageiohandler_qimageiohandler_setformat, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QImageIOHandler_QImageIOHandler, format, arginfo_qt_gui_qimageiohandler_qimageiohandler_format, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QImageIOHandler_QImageIOHandler, canRead, arginfo_qt_gui_qimageiohandler_qimageiohandler_canread, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QImageIOHandler_QImageIOHandler, read, arginfo_qt_gui_qimageiohandler_qimageiohandler_read, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QImageIOHandler_QImageIOHandler, write, arginfo_qt_gui_qimageiohandler_qimageiohandler_write, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QImageIOHandler_QImageIOHandler, option, arginfo_qt_gui_qimageiohandler_qimageiohandler_option, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QImageIOHandler_QImageIOHandler, setOption, arginfo_qt_gui_qimageiohandler_qimageiohandler_setoption, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QImageIOHandler_QImageIOHandler, supportsOption, arginfo_qt_gui_qimageiohandler_qimageiohandler_supportsoption, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QImageIOHandler_QImageIOHandler, jumpToNextImage, arginfo_qt_gui_qimageiohandler_qimageiohandler_jumptonextimage, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QImageIOHandler_QImageIOHandler, jumpToImage, arginfo_qt_gui_qimageiohandler_qimageiohandler_jumptoimage, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QImageIOHandler_QImageIOHandler, loopCount, arginfo_qt_gui_qimageiohandler_qimageiohandler_loopcount, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QImageIOHandler_QImageIOHandler, imageCount, arginfo_qt_gui_qimageiohandler_qimageiohandler_imagecount, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QImageIOHandler_QImageIOHandler, nextImageDelay, arginfo_qt_gui_qimageiohandler_qimageiohandler_nextimagedelay, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QImageIOHandler_QImageIOHandler, currentImageNumber, arginfo_qt_gui_qimageiohandler_qimageiohandler_currentimagenumber, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QImageIOHandler_QImageIOHandler, currentImageRect, arginfo_qt_gui_qimageiohandler_qimageiohandler_currentimagerect, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QImageIOHandler_QImageIOHandler, allocateImage, arginfo_qt_gui_qimageiohandler_qimageiohandler_allocateimage, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
