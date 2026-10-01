
extern zend_class_entry *qt_gui_qpixelformat_qpixelformat_ce;

ZEPHIR_INIT_CLASS(Qt_Gui_QPixelFormat_QPixelFormat);

PHP_METHOD(Qt_Gui_QPixelFormat_QPixelFormat, new_);
PHP_METHOD(Qt_Gui_QPixelFormat_QPixelFormat, newQPixelFormatColorModelUcharUcharUcharUcharUcharUcharQPixelFormatAlphaUsageQPixelFormatAlphaPositionQPixelFormatAlphaPremultipliedQPixelFormatTypeInterpretationQPixelFormatByteOrderUchar);
PHP_METHOD(Qt_Gui_QPixelFormat_QPixelFormat, colorModel);
PHP_METHOD(Qt_Gui_QPixelFormat_QPixelFormat, channelCount);
PHP_METHOD(Qt_Gui_QPixelFormat_QPixelFormat, redSize);
PHP_METHOD(Qt_Gui_QPixelFormat_QPixelFormat, greenSize);
PHP_METHOD(Qt_Gui_QPixelFormat_QPixelFormat, blueSize);
PHP_METHOD(Qt_Gui_QPixelFormat_QPixelFormat, cyanSize);
PHP_METHOD(Qt_Gui_QPixelFormat_QPixelFormat, magentaSize);
PHP_METHOD(Qt_Gui_QPixelFormat_QPixelFormat, yellowSize);
PHP_METHOD(Qt_Gui_QPixelFormat_QPixelFormat, blackSize);
PHP_METHOD(Qt_Gui_QPixelFormat_QPixelFormat, hueSize);
PHP_METHOD(Qt_Gui_QPixelFormat_QPixelFormat, saturationSize);
PHP_METHOD(Qt_Gui_QPixelFormat_QPixelFormat, lightnessSize);
PHP_METHOD(Qt_Gui_QPixelFormat_QPixelFormat, brightnessSize);
PHP_METHOD(Qt_Gui_QPixelFormat_QPixelFormat, alphaSize);
PHP_METHOD(Qt_Gui_QPixelFormat_QPixelFormat, bitsPerPixel);
PHP_METHOD(Qt_Gui_QPixelFormat_QPixelFormat, alphaUsage);
PHP_METHOD(Qt_Gui_QPixelFormat_QPixelFormat, alphaPosition);
PHP_METHOD(Qt_Gui_QPixelFormat_QPixelFormat, premultiplied);
PHP_METHOD(Qt_Gui_QPixelFormat_QPixelFormat, typeInterpretation);
PHP_METHOD(Qt_Gui_QPixelFormat_QPixelFormat, byteOrder);
PHP_METHOD(Qt_Gui_QPixelFormat_QPixelFormat, yuvLayout);
PHP_METHOD(Qt_Gui_QPixelFormat_QPixelFormat, subEnum);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpixelformat_qpixelformat_new_, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpixelformat_qpixelformat_newqpixelformatcolormodelucharucharucharucharucharucharqpixelformatalphausageqpixelformatalphapositionqpixelformatalphapremultipliedqpixelformattypeinterpretationqpixelformatbyteorderuchar, 0, 11, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, colorModel, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, firstSize, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, secondSize, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, thirdSize, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, fourthSize, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, fifthSize, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, alphaSize, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, alphaUsage, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, alphaPosition, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, premultiplied, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, typeInterpretation, IS_LONG, 0)
	ZEND_ARG_INFO(0, byteOrder)
	ZEND_ARG_TYPE_INFO(0, subEnum, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpixelformat_qpixelformat_colormodel, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpixelformat_qpixelformat_channelcount, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpixelformat_qpixelformat_redsize, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpixelformat_qpixelformat_greensize, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpixelformat_qpixelformat_bluesize, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpixelformat_qpixelformat_cyansize, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpixelformat_qpixelformat_magentasize, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpixelformat_qpixelformat_yellowsize, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpixelformat_qpixelformat_blacksize, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpixelformat_qpixelformat_huesize, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpixelformat_qpixelformat_saturationsize, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpixelformat_qpixelformat_lightnesssize, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpixelformat_qpixelformat_brightnesssize, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpixelformat_qpixelformat_alphasize, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpixelformat_qpixelformat_bitsperpixel, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpixelformat_qpixelformat_alphausage, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpixelformat_qpixelformat_alphaposition, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpixelformat_qpixelformat_premultiplied, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpixelformat_qpixelformat_typeinterpretation, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpixelformat_qpixelformat_byteorder, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpixelformat_qpixelformat_yuvlayout, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpixelformat_qpixelformat_subenum, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_gui_qpixelformat_qpixelformat_method_entry) {
	PHP_ME(Qt_Gui_QPixelFormat_QPixelFormat, new_, arginfo_qt_gui_qpixelformat_qpixelformat_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPixelFormat_QPixelFormat, newQPixelFormatColorModelUcharUcharUcharUcharUcharUcharQPixelFormatAlphaUsageQPixelFormatAlphaPositionQPixelFormatAlphaPremultipliedQPixelFormatTypeInterpretationQPixelFormatByteOrderUchar, arginfo_qt_gui_qpixelformat_qpixelformat_newqpixelformatcolormodelucharucharucharucharucharucharqpixelformatalphausageqpixelformatalphapositionqpixelformatalphapremultipliedqpixelformattypeinterpretationqpixelformatbyteorderuchar, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPixelFormat_QPixelFormat, colorModel, arginfo_qt_gui_qpixelformat_qpixelformat_colormodel, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPixelFormat_QPixelFormat, channelCount, arginfo_qt_gui_qpixelformat_qpixelformat_channelcount, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPixelFormat_QPixelFormat, redSize, arginfo_qt_gui_qpixelformat_qpixelformat_redsize, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPixelFormat_QPixelFormat, greenSize, arginfo_qt_gui_qpixelformat_qpixelformat_greensize, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPixelFormat_QPixelFormat, blueSize, arginfo_qt_gui_qpixelformat_qpixelformat_bluesize, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPixelFormat_QPixelFormat, cyanSize, arginfo_qt_gui_qpixelformat_qpixelformat_cyansize, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPixelFormat_QPixelFormat, magentaSize, arginfo_qt_gui_qpixelformat_qpixelformat_magentasize, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPixelFormat_QPixelFormat, yellowSize, arginfo_qt_gui_qpixelformat_qpixelformat_yellowsize, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPixelFormat_QPixelFormat, blackSize, arginfo_qt_gui_qpixelformat_qpixelformat_blacksize, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPixelFormat_QPixelFormat, hueSize, arginfo_qt_gui_qpixelformat_qpixelformat_huesize, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPixelFormat_QPixelFormat, saturationSize, arginfo_qt_gui_qpixelformat_qpixelformat_saturationsize, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPixelFormat_QPixelFormat, lightnessSize, arginfo_qt_gui_qpixelformat_qpixelformat_lightnesssize, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPixelFormat_QPixelFormat, brightnessSize, arginfo_qt_gui_qpixelformat_qpixelformat_brightnesssize, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPixelFormat_QPixelFormat, alphaSize, arginfo_qt_gui_qpixelformat_qpixelformat_alphasize, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPixelFormat_QPixelFormat, bitsPerPixel, arginfo_qt_gui_qpixelformat_qpixelformat_bitsperpixel, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPixelFormat_QPixelFormat, alphaUsage, arginfo_qt_gui_qpixelformat_qpixelformat_alphausage, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPixelFormat_QPixelFormat, alphaPosition, arginfo_qt_gui_qpixelformat_qpixelformat_alphaposition, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPixelFormat_QPixelFormat, premultiplied, arginfo_qt_gui_qpixelformat_qpixelformat_premultiplied, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPixelFormat_QPixelFormat, typeInterpretation, arginfo_qt_gui_qpixelformat_qpixelformat_typeinterpretation, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPixelFormat_QPixelFormat, byteOrder, arginfo_qt_gui_qpixelformat_qpixelformat_byteorder, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPixelFormat_QPixelFormat, yuvLayout, arginfo_qt_gui_qpixelformat_qpixelformat_yuvlayout, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPixelFormat_QPixelFormat, subEnum, arginfo_qt_gui_qpixelformat_qpixelformat_subenum, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
