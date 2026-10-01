
extern zend_class_entry *qt_gui_qrgba64_qrgba64_ce;

ZEPHIR_INIT_CLASS(Qt_Gui_QRgba64_QRgba64);

PHP_METHOD(Qt_Gui_QRgba64_QRgba64, new_);
PHP_METHOD(Qt_Gui_QRgba64_QRgba64, fromRgba64);
PHP_METHOD(Qt_Gui_QRgba64_QRgba64, fromRgba64Quint16Quint16Quint16Quint16);
PHP_METHOD(Qt_Gui_QRgba64_QRgba64, fromRgba);
PHP_METHOD(Qt_Gui_QRgba64_QRgba64, fromArgb32);
PHP_METHOD(Qt_Gui_QRgba64_QRgba64, isOpaque);
PHP_METHOD(Qt_Gui_QRgba64_QRgba64, isTransparent);
PHP_METHOD(Qt_Gui_QRgba64_QRgba64, red);
PHP_METHOD(Qt_Gui_QRgba64_QRgba64, green);
PHP_METHOD(Qt_Gui_QRgba64_QRgba64, blue);
PHP_METHOD(Qt_Gui_QRgba64_QRgba64, alpha);
PHP_METHOD(Qt_Gui_QRgba64_QRgba64, setRed);
PHP_METHOD(Qt_Gui_QRgba64_QRgba64, setGreen);
PHP_METHOD(Qt_Gui_QRgba64_QRgba64, setBlue);
PHP_METHOD(Qt_Gui_QRgba64_QRgba64, setAlpha);
PHP_METHOD(Qt_Gui_QRgba64_QRgba64, red8);
PHP_METHOD(Qt_Gui_QRgba64_QRgba64, green8);
PHP_METHOD(Qt_Gui_QRgba64_QRgba64, blue8);
PHP_METHOD(Qt_Gui_QRgba64_QRgba64, alpha8);
PHP_METHOD(Qt_Gui_QRgba64_QRgba64, toArgb32);
PHP_METHOD(Qt_Gui_QRgba64_QRgba64, toRgb16);
PHP_METHOD(Qt_Gui_QRgba64_QRgba64, premultiplied);
PHP_METHOD(Qt_Gui_QRgba64_QRgba64, unpremultiplied);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qrgba64_qrgba64_new_, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qrgba64_qrgba64_fromrgba64, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, c, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qrgba64_qrgba64_fromrgba64quint16quint16quint16quint16, 0, 4, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, red, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, green, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, blue, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, alpha, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qrgba64_qrgba64_fromrgba, 0, 4, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, red, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, green, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, blue, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, alpha, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qrgba64_qrgba64_fromargb32, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rgb, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qrgba64_qrgba64_isopaque, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qrgba64_qrgba64_istransparent, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qrgba64_qrgba64_red, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qrgba64_qrgba64_green, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qrgba64_qrgba64_blue, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qrgba64_qrgba64_alpha, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qrgba64_qrgba64_setred, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, _red, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qrgba64_qrgba64_setgreen, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, _green, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qrgba64_qrgba64_setblue, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, _blue, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qrgba64_qrgba64_setalpha, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, _alpha, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qrgba64_qrgba64_red8, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qrgba64_qrgba64_green8, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qrgba64_qrgba64_blue8, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qrgba64_qrgba64_alpha8, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qrgba64_qrgba64_toargb32, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qrgba64_qrgba64_torgb16, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qrgba64_qrgba64_premultiplied, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qrgba64_qrgba64_unpremultiplied, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_gui_qrgba64_qrgba64_method_entry) {
	PHP_ME(Qt_Gui_QRgba64_QRgba64, new_, arginfo_qt_gui_qrgba64_qrgba64_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QRgba64_QRgba64, fromRgba64, arginfo_qt_gui_qrgba64_qrgba64_fromrgba64, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QRgba64_QRgba64, fromRgba64Quint16Quint16Quint16Quint16, arginfo_qt_gui_qrgba64_qrgba64_fromrgba64quint16quint16quint16quint16, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QRgba64_QRgba64, fromRgba, arginfo_qt_gui_qrgba64_qrgba64_fromrgba, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QRgba64_QRgba64, fromArgb32, arginfo_qt_gui_qrgba64_qrgba64_fromargb32, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QRgba64_QRgba64, isOpaque, arginfo_qt_gui_qrgba64_qrgba64_isopaque, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QRgba64_QRgba64, isTransparent, arginfo_qt_gui_qrgba64_qrgba64_istransparent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QRgba64_QRgba64, red, arginfo_qt_gui_qrgba64_qrgba64_red, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QRgba64_QRgba64, green, arginfo_qt_gui_qrgba64_qrgba64_green, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QRgba64_QRgba64, blue, arginfo_qt_gui_qrgba64_qrgba64_blue, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QRgba64_QRgba64, alpha, arginfo_qt_gui_qrgba64_qrgba64_alpha, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QRgba64_QRgba64, setRed, arginfo_qt_gui_qrgba64_qrgba64_setred, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QRgba64_QRgba64, setGreen, arginfo_qt_gui_qrgba64_qrgba64_setgreen, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QRgba64_QRgba64, setBlue, arginfo_qt_gui_qrgba64_qrgba64_setblue, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QRgba64_QRgba64, setAlpha, arginfo_qt_gui_qrgba64_qrgba64_setalpha, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QRgba64_QRgba64, red8, arginfo_qt_gui_qrgba64_qrgba64_red8, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QRgba64_QRgba64, green8, arginfo_qt_gui_qrgba64_qrgba64_green8, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QRgba64_QRgba64, blue8, arginfo_qt_gui_qrgba64_qrgba64_blue8, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QRgba64_QRgba64, alpha8, arginfo_qt_gui_qrgba64_qrgba64_alpha8, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QRgba64_QRgba64, toArgb32, arginfo_qt_gui_qrgba64_qrgba64_toargb32, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QRgba64_QRgba64, toRgb16, arginfo_qt_gui_qrgba64_qrgba64_torgb16, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QRgba64_QRgba64, premultiplied, arginfo_qt_gui_qrgba64_qrgba64_premultiplied, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QRgba64_QRgba64, unpremultiplied, arginfo_qt_gui_qrgba64_qrgba64_unpremultiplied, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
