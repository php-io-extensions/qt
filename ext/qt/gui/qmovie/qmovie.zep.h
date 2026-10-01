
extern zend_class_entry *qt_gui_qmovie_qmovie_ce;

ZEPHIR_INIT_CLASS(Qt_Gui_QMovie_QMovie);

PHP_METHOD(Qt_Gui_QMovie_QMovie, staticMetaObject);
PHP_METHOD(Qt_Gui_QMovie_QMovie, tr);
PHP_METHOD(Qt_Gui_QMovie_QMovie, new_);
PHP_METHOD(Qt_Gui_QMovie_QMovie, newQIODeviceQByteArrayQObject);
PHP_METHOD(Qt_Gui_QMovie_QMovie, newQStringQByteArrayQObject);
PHP_METHOD(Qt_Gui_QMovie_QMovie, supportedFormats);
PHP_METHOD(Qt_Gui_QMovie_QMovie, setDevice);
PHP_METHOD(Qt_Gui_QMovie_QMovie, device);
PHP_METHOD(Qt_Gui_QMovie_QMovie, setFileName);
PHP_METHOD(Qt_Gui_QMovie_QMovie, fileName);
PHP_METHOD(Qt_Gui_QMovie_QMovie, setFormat);
PHP_METHOD(Qt_Gui_QMovie_QMovie, format);
PHP_METHOD(Qt_Gui_QMovie_QMovie, setBackgroundColor);
PHP_METHOD(Qt_Gui_QMovie_QMovie, backgroundColor);
PHP_METHOD(Qt_Gui_QMovie_QMovie, state);
PHP_METHOD(Qt_Gui_QMovie_QMovie, frameRect);
PHP_METHOD(Qt_Gui_QMovie_QMovie, currentImage);
PHP_METHOD(Qt_Gui_QMovie_QMovie, currentPixmap);
PHP_METHOD(Qt_Gui_QMovie_QMovie, isValid);
PHP_METHOD(Qt_Gui_QMovie_QMovie, lastError);
PHP_METHOD(Qt_Gui_QMovie_QMovie, lastErrorString);
PHP_METHOD(Qt_Gui_QMovie_QMovie, jumpToFrame);
PHP_METHOD(Qt_Gui_QMovie_QMovie, loopCount);
PHP_METHOD(Qt_Gui_QMovie_QMovie, frameCount);
PHP_METHOD(Qt_Gui_QMovie_QMovie, nextFrameDelay);
PHP_METHOD(Qt_Gui_QMovie_QMovie, currentFrameNumber);
PHP_METHOD(Qt_Gui_QMovie_QMovie, speed);
PHP_METHOD(Qt_Gui_QMovie_QMovie, scaledSize);
PHP_METHOD(Qt_Gui_QMovie_QMovie, setScaledSize);
PHP_METHOD(Qt_Gui_QMovie_QMovie, cacheMode);
PHP_METHOD(Qt_Gui_QMovie_QMovie, setCacheMode);
PHP_METHOD(Qt_Gui_QMovie_QMovie, started);
PHP_METHOD(Qt_Gui_QMovie_QMovie, resized);
PHP_METHOD(Qt_Gui_QMovie_QMovie, updated);
PHP_METHOD(Qt_Gui_QMovie_QMovie, stateChanged);
PHP_METHOD(Qt_Gui_QMovie_QMovie, error);
PHP_METHOD(Qt_Gui_QMovie_QMovie, finished);
PHP_METHOD(Qt_Gui_QMovie_QMovie, frameChanged);
PHP_METHOD(Qt_Gui_QMovie_QMovie, start);
PHP_METHOD(Qt_Gui_QMovie_QMovie, jumpToNextFrame);
PHP_METHOD(Qt_Gui_QMovie_QMovie, setPaused);
PHP_METHOD(Qt_Gui_QMovie_QMovie, stop);
PHP_METHOD(Qt_Gui_QMovie_QMovie, setSpeed);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qmovie_qmovie_staticmetaobject, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qmovie_qmovie_tr, 0, 1, IS_STRING, 0)
	ZEND_ARG_INFO(0, s)
	ZEND_ARG_INFO(0, c)
	ZEND_ARG_TYPE_INFO(0, n, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qmovie_qmovie_new_, 0, 0, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qmovie_qmovie_newqiodeviceqbytearrayqobject, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, device, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, format, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qmovie_qmovie_newqstringqbytearrayqobject, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, fileName, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, format, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qmovie_qmovie_supportedformats, 0, 0, IS_ARRAY, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qmovie_qmovie_setdevice, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, device, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qmovie_qmovie_device, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qmovie_qmovie_setfilename, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, fileName, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qmovie_qmovie_filename, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qmovie_qmovie_setformat, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, format, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qmovie_qmovie_format, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qmovie_qmovie_setbackgroundcolor, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, color, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qmovie_qmovie_backgroundcolor, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qmovie_qmovie_state, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qmovie_qmovie_framerect, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qmovie_qmovie_currentimage, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qmovie_qmovie_currentpixmap, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qmovie_qmovie_isvalid, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qmovie_qmovie_lasterror, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qmovie_qmovie_lasterrorstring, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qmovie_qmovie_jumptoframe, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, frameNumber, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qmovie_qmovie_loopcount, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qmovie_qmovie_framecount, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qmovie_qmovie_nextframedelay, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qmovie_qmovie_currentframenumber, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qmovie_qmovie_speed, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qmovie_qmovie_scaledsize, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qmovie_qmovie_setscaledsize, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sizeWidth, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sizeHeight, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qmovie_qmovie_cachemode, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qmovie_qmovie_setcachemode, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, mode, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qmovie_qmovie_started, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qmovie_qmovie_resized, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sizeWidth, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sizeHeight, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qmovie_qmovie_updated, 0, 5, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rectX, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rectY, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rectWidth, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rectHeight, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qmovie_qmovie_statechanged, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, state, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qmovie_qmovie_error, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, error, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qmovie_qmovie_finished, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qmovie_qmovie_framechanged, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, frameNumber, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qmovie_qmovie_start, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qmovie_qmovie_jumptonextframe, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qmovie_qmovie_setpaused, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, paused, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qmovie_qmovie_stop, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qmovie_qmovie_setspeed, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, percentSpeed, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_gui_qmovie_qmovie_method_entry) {
	PHP_ME(Qt_Gui_QMovie_QMovie, staticMetaObject, arginfo_qt_gui_qmovie_qmovie_staticmetaobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QMovie_QMovie, tr, arginfo_qt_gui_qmovie_qmovie_tr, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QMovie_QMovie, new_, arginfo_qt_gui_qmovie_qmovie_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QMovie_QMovie, newQIODeviceQByteArrayQObject, arginfo_qt_gui_qmovie_qmovie_newqiodeviceqbytearrayqobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QMovie_QMovie, newQStringQByteArrayQObject, arginfo_qt_gui_qmovie_qmovie_newqstringqbytearrayqobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QMovie_QMovie, supportedFormats, arginfo_qt_gui_qmovie_qmovie_supportedformats, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QMovie_QMovie, setDevice, arginfo_qt_gui_qmovie_qmovie_setdevice, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QMovie_QMovie, device, arginfo_qt_gui_qmovie_qmovie_device, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QMovie_QMovie, setFileName, arginfo_qt_gui_qmovie_qmovie_setfilename, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QMovie_QMovie, fileName, arginfo_qt_gui_qmovie_qmovie_filename, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QMovie_QMovie, setFormat, arginfo_qt_gui_qmovie_qmovie_setformat, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QMovie_QMovie, format, arginfo_qt_gui_qmovie_qmovie_format, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QMovie_QMovie, setBackgroundColor, arginfo_qt_gui_qmovie_qmovie_setbackgroundcolor, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QMovie_QMovie, backgroundColor, arginfo_qt_gui_qmovie_qmovie_backgroundcolor, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QMovie_QMovie, state, arginfo_qt_gui_qmovie_qmovie_state, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QMovie_QMovie, frameRect, arginfo_qt_gui_qmovie_qmovie_framerect, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QMovie_QMovie, currentImage, arginfo_qt_gui_qmovie_qmovie_currentimage, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QMovie_QMovie, currentPixmap, arginfo_qt_gui_qmovie_qmovie_currentpixmap, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QMovie_QMovie, isValid, arginfo_qt_gui_qmovie_qmovie_isvalid, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QMovie_QMovie, lastError, arginfo_qt_gui_qmovie_qmovie_lasterror, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QMovie_QMovie, lastErrorString, arginfo_qt_gui_qmovie_qmovie_lasterrorstring, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QMovie_QMovie, jumpToFrame, arginfo_qt_gui_qmovie_qmovie_jumptoframe, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QMovie_QMovie, loopCount, arginfo_qt_gui_qmovie_qmovie_loopcount, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QMovie_QMovie, frameCount, arginfo_qt_gui_qmovie_qmovie_framecount, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QMovie_QMovie, nextFrameDelay, arginfo_qt_gui_qmovie_qmovie_nextframedelay, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QMovie_QMovie, currentFrameNumber, arginfo_qt_gui_qmovie_qmovie_currentframenumber, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QMovie_QMovie, speed, arginfo_qt_gui_qmovie_qmovie_speed, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QMovie_QMovie, scaledSize, arginfo_qt_gui_qmovie_qmovie_scaledsize, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QMovie_QMovie, setScaledSize, arginfo_qt_gui_qmovie_qmovie_setscaledsize, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QMovie_QMovie, cacheMode, arginfo_qt_gui_qmovie_qmovie_cachemode, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QMovie_QMovie, setCacheMode, arginfo_qt_gui_qmovie_qmovie_setcachemode, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QMovie_QMovie, started, arginfo_qt_gui_qmovie_qmovie_started, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QMovie_QMovie, resized, arginfo_qt_gui_qmovie_qmovie_resized, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QMovie_QMovie, updated, arginfo_qt_gui_qmovie_qmovie_updated, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QMovie_QMovie, stateChanged, arginfo_qt_gui_qmovie_qmovie_statechanged, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QMovie_QMovie, error, arginfo_qt_gui_qmovie_qmovie_error, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QMovie_QMovie, finished, arginfo_qt_gui_qmovie_qmovie_finished, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QMovie_QMovie, frameChanged, arginfo_qt_gui_qmovie_qmovie_framechanged, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QMovie_QMovie, start, arginfo_qt_gui_qmovie_qmovie_start, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QMovie_QMovie, jumpToNextFrame, arginfo_qt_gui_qmovie_qmovie_jumptonextframe, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QMovie_QMovie, setPaused, arginfo_qt_gui_qmovie_qmovie_setpaused, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QMovie_QMovie, stop, arginfo_qt_gui_qmovie_qmovie_stop, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QMovie_QMovie, setSpeed, arginfo_qt_gui_qmovie_qmovie_setspeed, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
