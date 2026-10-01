
extern zend_class_entry *qt_gui_qfontmetricsf_qfontmetricsf_ce;

ZEPHIR_INIT_CLASS(Qt_Gui_QFontMetricsF_QFontMetricsF);

PHP_METHOD(Qt_Gui_QFontMetricsF_QFontMetricsF, new_);
PHP_METHOD(Qt_Gui_QFontMetricsF_QFontMetricsF, newQFontQPaintDevice);
PHP_METHOD(Qt_Gui_QFontMetricsF_QFontMetricsF, newQFontMetrics);
PHP_METHOD(Qt_Gui_QFontMetricsF_QFontMetricsF, newQFontMetricsF);
PHP_METHOD(Qt_Gui_QFontMetricsF_QFontMetricsF, swap);
PHP_METHOD(Qt_Gui_QFontMetricsF_QFontMetricsF, ascent);
PHP_METHOD(Qt_Gui_QFontMetricsF_QFontMetricsF, capHeight);
PHP_METHOD(Qt_Gui_QFontMetricsF_QFontMetricsF, descent);
PHP_METHOD(Qt_Gui_QFontMetricsF_QFontMetricsF, height);
PHP_METHOD(Qt_Gui_QFontMetricsF_QFontMetricsF, leading);
PHP_METHOD(Qt_Gui_QFontMetricsF_QFontMetricsF, lineSpacing);
PHP_METHOD(Qt_Gui_QFontMetricsF_QFontMetricsF, minLeftBearing);
PHP_METHOD(Qt_Gui_QFontMetricsF_QFontMetricsF, minRightBearing);
PHP_METHOD(Qt_Gui_QFontMetricsF_QFontMetricsF, maxWidth);
PHP_METHOD(Qt_Gui_QFontMetricsF_QFontMetricsF, xHeight);
PHP_METHOD(Qt_Gui_QFontMetricsF_QFontMetricsF, averageCharWidth);
PHP_METHOD(Qt_Gui_QFontMetricsF_QFontMetricsF, inFont);
PHP_METHOD(Qt_Gui_QFontMetricsF_QFontMetricsF, inFontUcs4);
PHP_METHOD(Qt_Gui_QFontMetricsF_QFontMetricsF, leftBearing);
PHP_METHOD(Qt_Gui_QFontMetricsF_QFontMetricsF, rightBearing);
PHP_METHOD(Qt_Gui_QFontMetricsF_QFontMetricsF, horizontalAdvance);
PHP_METHOD(Qt_Gui_QFontMetricsF_QFontMetricsF, horizontalAdvanceQChar);
PHP_METHOD(Qt_Gui_QFontMetricsF_QFontMetricsF, horizontalAdvanceQStringQTextOption);
PHP_METHOD(Qt_Gui_QFontMetricsF_QFontMetricsF, boundingRect);
PHP_METHOD(Qt_Gui_QFontMetricsF_QFontMetricsF, boundingRectQStringQTextOption);
PHP_METHOD(Qt_Gui_QFontMetricsF_QFontMetricsF, boundingRectQChar);
PHP_METHOD(Qt_Gui_QFontMetricsF_QFontMetricsF, boundingRectQRectFIntQStringIntInt);
PHP_METHOD(Qt_Gui_QFontMetricsF_QFontMetricsF, size);
PHP_METHOD(Qt_Gui_QFontMetricsF_QFontMetricsF, tightBoundingRect);
PHP_METHOD(Qt_Gui_QFontMetricsF_QFontMetricsF, tightBoundingRectQStringQTextOption);
PHP_METHOD(Qt_Gui_QFontMetricsF_QFontMetricsF, elidedText);
PHP_METHOD(Qt_Gui_QFontMetricsF_QFontMetricsF, underlinePos);
PHP_METHOD(Qt_Gui_QFontMetricsF_QFontMetricsF, overlinePos);
PHP_METHOD(Qt_Gui_QFontMetricsF_QFontMetricsF, strikeOutPos);
PHP_METHOD(Qt_Gui_QFontMetricsF_QFontMetricsF, lineWidth);
PHP_METHOD(Qt_Gui_QFontMetricsF_QFontMetricsF, fontDpi);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qfontmetricsf_qfontmetricsf_new_, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, font, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qfontmetricsf_qfontmetricsf_newqfontqpaintdevice, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, font, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, pd, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qfontmetricsf_qfontmetricsf_newqfontmetrics, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qfontmetricsf_qfontmetricsf_newqfontmetricsf, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qfontmetricsf_qfontmetricsf_swap, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, other, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qfontmetricsf_qfontmetricsf_ascent, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qfontmetricsf_qfontmetricsf_capheight, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qfontmetricsf_qfontmetricsf_descent, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qfontmetricsf_qfontmetricsf_height, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qfontmetricsf_qfontmetricsf_leading, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qfontmetricsf_qfontmetricsf_linespacing, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qfontmetricsf_qfontmetricsf_minleftbearing, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qfontmetricsf_qfontmetricsf_minrightbearing, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qfontmetricsf_qfontmetricsf_maxwidth, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qfontmetricsf_qfontmetricsf_xheight, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qfontmetricsf_qfontmetricsf_averagecharwidth, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qfontmetricsf_qfontmetricsf_infont, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qfontmetricsf_qfontmetricsf_infontucs4, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, ucs4, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qfontmetricsf_qfontmetricsf_leftbearing, 0, 2, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qfontmetricsf_qfontmetricsf_rightbearing, 0, 2, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qfontmetricsf_qfontmetricsf_horizontaladvance, 0, 2, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, string_, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, length, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qfontmetricsf_qfontmetricsf_horizontaladvanceqchar, 0, 2, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qfontmetricsf_qfontmetricsf_horizontaladvanceqstringqtextoption, 0, 3, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, string_, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, textOption, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qfontmetricsf_qfontmetricsf_boundingrect, 0, 2, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, string_, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qfontmetricsf_qfontmetricsf_boundingrectqstringqtextoption, 0, 3, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, text, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, textOption, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qfontmetricsf_qfontmetricsf_boundingrectqchar, 0, 2, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qfontmetricsf_qfontmetricsf_boundingrectqrectfintqstringintint, 0, 7, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rX, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, rY, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, rWidth, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, rHeight, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, flags, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, string_, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, tabstops, IS_LONG, 0)
	ZEND_ARG_INFO(0, tabarray)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qfontmetricsf_qfontmetricsf_size, 0, 3, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, flags, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, str, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, tabstops, IS_LONG, 0)
	ZEND_ARG_INFO(0, tabarray)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qfontmetricsf_qfontmetricsf_tightboundingrect, 0, 2, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, text, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qfontmetricsf_qfontmetricsf_tightboundingrectqstringqtextoption, 0, 3, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, text, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, textOption, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qfontmetricsf_qfontmetricsf_elidedtext, 0, 4, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, text, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, mode, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, flags, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qfontmetricsf_qfontmetricsf_underlinepos, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qfontmetricsf_qfontmetricsf_overlinepos, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qfontmetricsf_qfontmetricsf_strikeoutpos, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qfontmetricsf_qfontmetricsf_linewidth, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qfontmetricsf_qfontmetricsf_fontdpi, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_gui_qfontmetricsf_qfontmetricsf_method_entry) {
	PHP_ME(Qt_Gui_QFontMetricsF_QFontMetricsF, new_, arginfo_qt_gui_qfontmetricsf_qfontmetricsf_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QFontMetricsF_QFontMetricsF, newQFontQPaintDevice, arginfo_qt_gui_qfontmetricsf_qfontmetricsf_newqfontqpaintdevice, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QFontMetricsF_QFontMetricsF, newQFontMetrics, arginfo_qt_gui_qfontmetricsf_qfontmetricsf_newqfontmetrics, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QFontMetricsF_QFontMetricsF, newQFontMetricsF, arginfo_qt_gui_qfontmetricsf_qfontmetricsf_newqfontmetricsf, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QFontMetricsF_QFontMetricsF, swap, arginfo_qt_gui_qfontmetricsf_qfontmetricsf_swap, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QFontMetricsF_QFontMetricsF, ascent, arginfo_qt_gui_qfontmetricsf_qfontmetricsf_ascent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QFontMetricsF_QFontMetricsF, capHeight, arginfo_qt_gui_qfontmetricsf_qfontmetricsf_capheight, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QFontMetricsF_QFontMetricsF, descent, arginfo_qt_gui_qfontmetricsf_qfontmetricsf_descent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QFontMetricsF_QFontMetricsF, height, arginfo_qt_gui_qfontmetricsf_qfontmetricsf_height, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QFontMetricsF_QFontMetricsF, leading, arginfo_qt_gui_qfontmetricsf_qfontmetricsf_leading, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QFontMetricsF_QFontMetricsF, lineSpacing, arginfo_qt_gui_qfontmetricsf_qfontmetricsf_linespacing, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QFontMetricsF_QFontMetricsF, minLeftBearing, arginfo_qt_gui_qfontmetricsf_qfontmetricsf_minleftbearing, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QFontMetricsF_QFontMetricsF, minRightBearing, arginfo_qt_gui_qfontmetricsf_qfontmetricsf_minrightbearing, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QFontMetricsF_QFontMetricsF, maxWidth, arginfo_qt_gui_qfontmetricsf_qfontmetricsf_maxwidth, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QFontMetricsF_QFontMetricsF, xHeight, arginfo_qt_gui_qfontmetricsf_qfontmetricsf_xheight, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QFontMetricsF_QFontMetricsF, averageCharWidth, arginfo_qt_gui_qfontmetricsf_qfontmetricsf_averagecharwidth, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QFontMetricsF_QFontMetricsF, inFont, arginfo_qt_gui_qfontmetricsf_qfontmetricsf_infont, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QFontMetricsF_QFontMetricsF, inFontUcs4, arginfo_qt_gui_qfontmetricsf_qfontmetricsf_infontucs4, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QFontMetricsF_QFontMetricsF, leftBearing, arginfo_qt_gui_qfontmetricsf_qfontmetricsf_leftbearing, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QFontMetricsF_QFontMetricsF, rightBearing, arginfo_qt_gui_qfontmetricsf_qfontmetricsf_rightbearing, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QFontMetricsF_QFontMetricsF, horizontalAdvance, arginfo_qt_gui_qfontmetricsf_qfontmetricsf_horizontaladvance, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QFontMetricsF_QFontMetricsF, horizontalAdvanceQChar, arginfo_qt_gui_qfontmetricsf_qfontmetricsf_horizontaladvanceqchar, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QFontMetricsF_QFontMetricsF, horizontalAdvanceQStringQTextOption, arginfo_qt_gui_qfontmetricsf_qfontmetricsf_horizontaladvanceqstringqtextoption, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QFontMetricsF_QFontMetricsF, boundingRect, arginfo_qt_gui_qfontmetricsf_qfontmetricsf_boundingrect, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QFontMetricsF_QFontMetricsF, boundingRectQStringQTextOption, arginfo_qt_gui_qfontmetricsf_qfontmetricsf_boundingrectqstringqtextoption, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QFontMetricsF_QFontMetricsF, boundingRectQChar, arginfo_qt_gui_qfontmetricsf_qfontmetricsf_boundingrectqchar, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QFontMetricsF_QFontMetricsF, boundingRectQRectFIntQStringIntInt, arginfo_qt_gui_qfontmetricsf_qfontmetricsf_boundingrectqrectfintqstringintint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QFontMetricsF_QFontMetricsF, size, arginfo_qt_gui_qfontmetricsf_qfontmetricsf_size, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QFontMetricsF_QFontMetricsF, tightBoundingRect, arginfo_qt_gui_qfontmetricsf_qfontmetricsf_tightboundingrect, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QFontMetricsF_QFontMetricsF, tightBoundingRectQStringQTextOption, arginfo_qt_gui_qfontmetricsf_qfontmetricsf_tightboundingrectqstringqtextoption, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QFontMetricsF_QFontMetricsF, elidedText, arginfo_qt_gui_qfontmetricsf_qfontmetricsf_elidedtext, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QFontMetricsF_QFontMetricsF, underlinePos, arginfo_qt_gui_qfontmetricsf_qfontmetricsf_underlinepos, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QFontMetricsF_QFontMetricsF, overlinePos, arginfo_qt_gui_qfontmetricsf_qfontmetricsf_overlinepos, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QFontMetricsF_QFontMetricsF, strikeOutPos, arginfo_qt_gui_qfontmetricsf_qfontmetricsf_strikeoutpos, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QFontMetricsF_QFontMetricsF, lineWidth, arginfo_qt_gui_qfontmetricsf_qfontmetricsf_linewidth, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QFontMetricsF_QFontMetricsF, fontDpi, arginfo_qt_gui_qfontmetricsf_qfontmetricsf_fontdpi, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
