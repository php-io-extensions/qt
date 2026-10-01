
extern zend_class_entry *qt_gui_qpixelformatfunctions_qpixelformatfunctions_ce;

ZEPHIR_INIT_CLASS(Qt_Gui_QPixelformatFunctions_QPixelformatFunctions);

PHP_METHOD(Qt_Gui_QPixelformatFunctions_QPixelformatFunctions, qPixelFormatRgba);
PHP_METHOD(Qt_Gui_QPixelformatFunctions_QPixelformatFunctions, qPixelFormatGrayscale);
PHP_METHOD(Qt_Gui_QPixelformatFunctions_QPixelformatFunctions, qPixelFormatAlpha);
PHP_METHOD(Qt_Gui_QPixelformatFunctions_QPixelformatFunctions, qPixelFormatCmyk);
PHP_METHOD(Qt_Gui_QPixelformatFunctions_QPixelformatFunctions, qPixelFormatHsl);
PHP_METHOD(Qt_Gui_QPixelformatFunctions_QPixelformatFunctions, qPixelFormatHsv);
PHP_METHOD(Qt_Gui_QPixelformatFunctions_QPixelformatFunctions, qPixelFormatYuv);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpixelformatfunctions_qpixelformatfunctions_qpixelformatrgba, 0, 6, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, red, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, green, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, blue, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, alfa, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, usage, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, position, IS_LONG, 0)
	ZEND_ARG_INFO(0, pmul)
	ZEND_ARG_INFO(0, typeInt)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpixelformatfunctions_qpixelformatfunctions_qpixelformatgrayscale, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, channelSize, IS_LONG, 0)
	ZEND_ARG_INFO(0, typeInt)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpixelformatfunctions_qpixelformatfunctions_qpixelformatalpha, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, channelSize, IS_LONG, 0)
	ZEND_ARG_INFO(0, typeInt)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpixelformatfunctions_qpixelformatfunctions_qpixelformatcmyk, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, channelSize, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, alfa, IS_LONG, 0)
	ZEND_ARG_INFO(0, usage)
	ZEND_ARG_INFO(0, position)
	ZEND_ARG_INFO(0, typeInt)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpixelformatfunctions_qpixelformatfunctions_qpixelformathsl, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, channelSize, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, alfa, IS_LONG, 0)
	ZEND_ARG_INFO(0, usage)
	ZEND_ARG_INFO(0, position)
	ZEND_ARG_INFO(0, typeInt)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpixelformatfunctions_qpixelformatfunctions_qpixelformathsv, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, channelSize, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, alfa, IS_LONG, 0)
	ZEND_ARG_INFO(0, usage)
	ZEND_ARG_INFO(0, position)
	ZEND_ARG_INFO(0, typeInt)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpixelformatfunctions_qpixelformatfunctions_qpixelformatyuv, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, layout, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, alfa, IS_LONG, 0)
	ZEND_ARG_INFO(0, usage)
	ZEND_ARG_INFO(0, position)
	ZEND_ARG_INFO(0, p_mul)
	ZEND_ARG_INFO(0, typeInt)
	ZEND_ARG_INFO(0, b_order)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_gui_qpixelformatfunctions_qpixelformatfunctions_method_entry) {
	PHP_ME(Qt_Gui_QPixelformatFunctions_QPixelformatFunctions, qPixelFormatRgba, arginfo_qt_gui_qpixelformatfunctions_qpixelformatfunctions_qpixelformatrgba, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPixelformatFunctions_QPixelformatFunctions, qPixelFormatGrayscale, arginfo_qt_gui_qpixelformatfunctions_qpixelformatfunctions_qpixelformatgrayscale, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPixelformatFunctions_QPixelformatFunctions, qPixelFormatAlpha, arginfo_qt_gui_qpixelformatfunctions_qpixelformatfunctions_qpixelformatalpha, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPixelformatFunctions_QPixelformatFunctions, qPixelFormatCmyk, arginfo_qt_gui_qpixelformatfunctions_qpixelformatfunctions_qpixelformatcmyk, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPixelformatFunctions_QPixelformatFunctions, qPixelFormatHsl, arginfo_qt_gui_qpixelformatfunctions_qpixelformatfunctions_qpixelformathsl, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPixelformatFunctions_QPixelformatFunctions, qPixelFormatHsv, arginfo_qt_gui_qpixelformatfunctions_qpixelformatfunctions_qpixelformathsv, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPixelformatFunctions_QPixelformatFunctions, qPixelFormatYuv, arginfo_qt_gui_qpixelformatfunctions_qpixelformatfunctions_qpixelformatyuv, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
