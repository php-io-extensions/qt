
extern zend_class_entry *qt_gui_qfontinfo_qfontinfo_ce;

ZEPHIR_INIT_CLASS(Qt_Gui_QFontInfo_QFontInfo);

PHP_METHOD(Qt_Gui_QFontInfo_QFontInfo, new_);
PHP_METHOD(Qt_Gui_QFontInfo_QFontInfo, newQFontInfo);
PHP_METHOD(Qt_Gui_QFontInfo_QFontInfo, swap);
PHP_METHOD(Qt_Gui_QFontInfo_QFontInfo, family);
PHP_METHOD(Qt_Gui_QFontInfo_QFontInfo, styleName);
PHP_METHOD(Qt_Gui_QFontInfo_QFontInfo, pixelSize);
PHP_METHOD(Qt_Gui_QFontInfo_QFontInfo, pointSize);
PHP_METHOD(Qt_Gui_QFontInfo_QFontInfo, pointSizeF);
PHP_METHOD(Qt_Gui_QFontInfo_QFontInfo, italic);
PHP_METHOD(Qt_Gui_QFontInfo_QFontInfo, style);
PHP_METHOD(Qt_Gui_QFontInfo_QFontInfo, weight);
PHP_METHOD(Qt_Gui_QFontInfo_QFontInfo, bold);
PHP_METHOD(Qt_Gui_QFontInfo_QFontInfo, underline);
PHP_METHOD(Qt_Gui_QFontInfo_QFontInfo, overline);
PHP_METHOD(Qt_Gui_QFontInfo_QFontInfo, strikeOut);
PHP_METHOD(Qt_Gui_QFontInfo_QFontInfo, fixedPitch);
PHP_METHOD(Qt_Gui_QFontInfo_QFontInfo, styleHint);
PHP_METHOD(Qt_Gui_QFontInfo_QFontInfo, exactMatch);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qfontinfo_qfontinfo_new_, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qfontinfo_qfontinfo_newqfontinfo, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qfontinfo_qfontinfo_swap, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, other, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qfontinfo_qfontinfo_family, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qfontinfo_qfontinfo_stylename, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qfontinfo_qfontinfo_pixelsize, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qfontinfo_qfontinfo_pointsize, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qfontinfo_qfontinfo_pointsizef, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qfontinfo_qfontinfo_italic, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qfontinfo_qfontinfo_style, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qfontinfo_qfontinfo_weight, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qfontinfo_qfontinfo_bold, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qfontinfo_qfontinfo_underline, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qfontinfo_qfontinfo_overline, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qfontinfo_qfontinfo_strikeout, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qfontinfo_qfontinfo_fixedpitch, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qfontinfo_qfontinfo_stylehint, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qfontinfo_qfontinfo_exactmatch, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_gui_qfontinfo_qfontinfo_method_entry) {
	PHP_ME(Qt_Gui_QFontInfo_QFontInfo, new_, arginfo_qt_gui_qfontinfo_qfontinfo_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QFontInfo_QFontInfo, newQFontInfo, arginfo_qt_gui_qfontinfo_qfontinfo_newqfontinfo, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QFontInfo_QFontInfo, swap, arginfo_qt_gui_qfontinfo_qfontinfo_swap, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QFontInfo_QFontInfo, family, arginfo_qt_gui_qfontinfo_qfontinfo_family, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QFontInfo_QFontInfo, styleName, arginfo_qt_gui_qfontinfo_qfontinfo_stylename, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QFontInfo_QFontInfo, pixelSize, arginfo_qt_gui_qfontinfo_qfontinfo_pixelsize, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QFontInfo_QFontInfo, pointSize, arginfo_qt_gui_qfontinfo_qfontinfo_pointsize, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QFontInfo_QFontInfo, pointSizeF, arginfo_qt_gui_qfontinfo_qfontinfo_pointsizef, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QFontInfo_QFontInfo, italic, arginfo_qt_gui_qfontinfo_qfontinfo_italic, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QFontInfo_QFontInfo, style, arginfo_qt_gui_qfontinfo_qfontinfo_style, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QFontInfo_QFontInfo, weight, arginfo_qt_gui_qfontinfo_qfontinfo_weight, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QFontInfo_QFontInfo, bold, arginfo_qt_gui_qfontinfo_qfontinfo_bold, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QFontInfo_QFontInfo, underline, arginfo_qt_gui_qfontinfo_qfontinfo_underline, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QFontInfo_QFontInfo, overline, arginfo_qt_gui_qfontinfo_qfontinfo_overline, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QFontInfo_QFontInfo, strikeOut, arginfo_qt_gui_qfontinfo_qfontinfo_strikeout, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QFontInfo_QFontInfo, fixedPitch, arginfo_qt_gui_qfontinfo_qfontinfo_fixedpitch, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QFontInfo_QFontInfo, styleHint, arginfo_qt_gui_qfontinfo_qfontinfo_stylehint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QFontInfo_QFontInfo, exactMatch, arginfo_qt_gui_qfontinfo_qfontinfo_exactmatch, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
