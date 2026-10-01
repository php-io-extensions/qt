
extern zend_class_entry *qt_gui_qfontmetrics_qfontmetrics_ce;

ZEPHIR_INIT_CLASS(Qt_Gui_QFontMetrics_QFontMetrics);

PHP_METHOD(Qt_Gui_QFontMetrics_QFontMetrics, new_);
PHP_METHOD(Qt_Gui_QFontMetrics_QFontMetrics, newQFontQPaintDevice);
PHP_METHOD(Qt_Gui_QFontMetrics_QFontMetrics, newQFontMetrics);
PHP_METHOD(Qt_Gui_QFontMetrics_QFontMetrics, swap);
PHP_METHOD(Qt_Gui_QFontMetrics_QFontMetrics, ascent);
PHP_METHOD(Qt_Gui_QFontMetrics_QFontMetrics, capHeight);
PHP_METHOD(Qt_Gui_QFontMetrics_QFontMetrics, descent);
PHP_METHOD(Qt_Gui_QFontMetrics_QFontMetrics, height);
PHP_METHOD(Qt_Gui_QFontMetrics_QFontMetrics, leading);
PHP_METHOD(Qt_Gui_QFontMetrics_QFontMetrics, lineSpacing);
PHP_METHOD(Qt_Gui_QFontMetrics_QFontMetrics, minLeftBearing);
PHP_METHOD(Qt_Gui_QFontMetrics_QFontMetrics, minRightBearing);
PHP_METHOD(Qt_Gui_QFontMetrics_QFontMetrics, maxWidth);
PHP_METHOD(Qt_Gui_QFontMetrics_QFontMetrics, xHeight);
PHP_METHOD(Qt_Gui_QFontMetrics_QFontMetrics, averageCharWidth);
PHP_METHOD(Qt_Gui_QFontMetrics_QFontMetrics, inFont);
PHP_METHOD(Qt_Gui_QFontMetrics_QFontMetrics, inFontUcs4);
PHP_METHOD(Qt_Gui_QFontMetrics_QFontMetrics, leftBearing);
PHP_METHOD(Qt_Gui_QFontMetrics_QFontMetrics, rightBearing);
PHP_METHOD(Qt_Gui_QFontMetrics_QFontMetrics, horizontalAdvance);
PHP_METHOD(Qt_Gui_QFontMetrics_QFontMetrics, horizontalAdvanceQStringQTextOption);
PHP_METHOD(Qt_Gui_QFontMetrics_QFontMetrics, horizontalAdvanceQChar);
PHP_METHOD(Qt_Gui_QFontMetrics_QFontMetrics, boundingRect);
PHP_METHOD(Qt_Gui_QFontMetrics_QFontMetrics, boundingRectQString);
PHP_METHOD(Qt_Gui_QFontMetrics_QFontMetrics, boundingRectQStringQTextOption);
PHP_METHOD(Qt_Gui_QFontMetrics_QFontMetrics, boundingRectQRectIntQStringIntInt);
PHP_METHOD(Qt_Gui_QFontMetrics_QFontMetrics, boundingRectIntIntIntIntIntQStringIntInt);
PHP_METHOD(Qt_Gui_QFontMetrics_QFontMetrics, size);
PHP_METHOD(Qt_Gui_QFontMetrics_QFontMetrics, tightBoundingRect);
PHP_METHOD(Qt_Gui_QFontMetrics_QFontMetrics, tightBoundingRectQStringQTextOption);
PHP_METHOD(Qt_Gui_QFontMetrics_QFontMetrics, elidedText);
PHP_METHOD(Qt_Gui_QFontMetrics_QFontMetrics, underlinePos);
PHP_METHOD(Qt_Gui_QFontMetrics_QFontMetrics, overlinePos);
PHP_METHOD(Qt_Gui_QFontMetrics_QFontMetrics, strikeOutPos);
PHP_METHOD(Qt_Gui_QFontMetrics_QFontMetrics, lineWidth);
PHP_METHOD(Qt_Gui_QFontMetrics_QFontMetrics, fontDpi);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qfontmetrics_qfontmetrics_new_, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qfontmetrics_qfontmetrics_newqfontqpaintdevice, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, font, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, pd, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qfontmetrics_qfontmetrics_newqfontmetrics, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qfontmetrics_qfontmetrics_swap, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, other, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qfontmetrics_qfontmetrics_ascent, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qfontmetrics_qfontmetrics_capheight, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qfontmetrics_qfontmetrics_descent, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qfontmetrics_qfontmetrics_height, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qfontmetrics_qfontmetrics_leading, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qfontmetrics_qfontmetrics_linespacing, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qfontmetrics_qfontmetrics_minleftbearing, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qfontmetrics_qfontmetrics_minrightbearing, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qfontmetrics_qfontmetrics_maxwidth, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qfontmetrics_qfontmetrics_xheight, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qfontmetrics_qfontmetrics_averagecharwidth, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qfontmetrics_qfontmetrics_infont, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qfontmetrics_qfontmetrics_infontucs4, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, ucs4, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qfontmetrics_qfontmetrics_leftbearing, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qfontmetrics_qfontmetrics_rightbearing, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qfontmetrics_qfontmetrics_horizontaladvance, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, len, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qfontmetrics_qfontmetrics_horizontaladvanceqstringqtextoption, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, textOption, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qfontmetrics_qfontmetrics_horizontaladvanceqchar, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qfontmetrics_qfontmetrics_boundingrect, 0, 2, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qfontmetrics_qfontmetrics_boundingrectqstring, 0, 2, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, text, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qfontmetrics_qfontmetrics_boundingrectqstringqtextoption, 0, 3, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, text, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, textOption, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qfontmetrics_qfontmetrics_boundingrectqrectintqstringintint, 0, 7, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rX, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rY, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rWidth, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rHeight, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, flags, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, text, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, tabstops, IS_LONG, 0)
	ZEND_ARG_INFO(0, tabarray)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qfontmetrics_qfontmetrics_boundingrectintintintintintqstringintint, 0, 7, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, w, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, h, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, flags, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, text, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, tabstops, IS_LONG, 0)
	ZEND_ARG_INFO(0, tabarray)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qfontmetrics_qfontmetrics_size, 0, 3, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, flags, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, str, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, tabstops, IS_LONG, 0)
	ZEND_ARG_INFO(0, tabarray)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qfontmetrics_qfontmetrics_tightboundingrect, 0, 2, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, text, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qfontmetrics_qfontmetrics_tightboundingrectqstringqtextoption, 0, 3, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, text, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, textOption, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qfontmetrics_qfontmetrics_elidedtext, 0, 4, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, text, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, mode, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, flags, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qfontmetrics_qfontmetrics_underlinepos, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qfontmetrics_qfontmetrics_overlinepos, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qfontmetrics_qfontmetrics_strikeoutpos, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qfontmetrics_qfontmetrics_linewidth, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qfontmetrics_qfontmetrics_fontdpi, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_gui_qfontmetrics_qfontmetrics_method_entry) {
	PHP_ME(Qt_Gui_QFontMetrics_QFontMetrics, new_, arginfo_qt_gui_qfontmetrics_qfontmetrics_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QFontMetrics_QFontMetrics, newQFontQPaintDevice, arginfo_qt_gui_qfontmetrics_qfontmetrics_newqfontqpaintdevice, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QFontMetrics_QFontMetrics, newQFontMetrics, arginfo_qt_gui_qfontmetrics_qfontmetrics_newqfontmetrics, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QFontMetrics_QFontMetrics, swap, arginfo_qt_gui_qfontmetrics_qfontmetrics_swap, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QFontMetrics_QFontMetrics, ascent, arginfo_qt_gui_qfontmetrics_qfontmetrics_ascent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QFontMetrics_QFontMetrics, capHeight, arginfo_qt_gui_qfontmetrics_qfontmetrics_capheight, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QFontMetrics_QFontMetrics, descent, arginfo_qt_gui_qfontmetrics_qfontmetrics_descent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QFontMetrics_QFontMetrics, height, arginfo_qt_gui_qfontmetrics_qfontmetrics_height, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QFontMetrics_QFontMetrics, leading, arginfo_qt_gui_qfontmetrics_qfontmetrics_leading, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QFontMetrics_QFontMetrics, lineSpacing, arginfo_qt_gui_qfontmetrics_qfontmetrics_linespacing, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QFontMetrics_QFontMetrics, minLeftBearing, arginfo_qt_gui_qfontmetrics_qfontmetrics_minleftbearing, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QFontMetrics_QFontMetrics, minRightBearing, arginfo_qt_gui_qfontmetrics_qfontmetrics_minrightbearing, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QFontMetrics_QFontMetrics, maxWidth, arginfo_qt_gui_qfontmetrics_qfontmetrics_maxwidth, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QFontMetrics_QFontMetrics, xHeight, arginfo_qt_gui_qfontmetrics_qfontmetrics_xheight, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QFontMetrics_QFontMetrics, averageCharWidth, arginfo_qt_gui_qfontmetrics_qfontmetrics_averagecharwidth, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QFontMetrics_QFontMetrics, inFont, arginfo_qt_gui_qfontmetrics_qfontmetrics_infont, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QFontMetrics_QFontMetrics, inFontUcs4, arginfo_qt_gui_qfontmetrics_qfontmetrics_infontucs4, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QFontMetrics_QFontMetrics, leftBearing, arginfo_qt_gui_qfontmetrics_qfontmetrics_leftbearing, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QFontMetrics_QFontMetrics, rightBearing, arginfo_qt_gui_qfontmetrics_qfontmetrics_rightbearing, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QFontMetrics_QFontMetrics, horizontalAdvance, arginfo_qt_gui_qfontmetrics_qfontmetrics_horizontaladvance, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QFontMetrics_QFontMetrics, horizontalAdvanceQStringQTextOption, arginfo_qt_gui_qfontmetrics_qfontmetrics_horizontaladvanceqstringqtextoption, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QFontMetrics_QFontMetrics, horizontalAdvanceQChar, arginfo_qt_gui_qfontmetrics_qfontmetrics_horizontaladvanceqchar, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QFontMetrics_QFontMetrics, boundingRect, arginfo_qt_gui_qfontmetrics_qfontmetrics_boundingrect, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QFontMetrics_QFontMetrics, boundingRectQString, arginfo_qt_gui_qfontmetrics_qfontmetrics_boundingrectqstring, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QFontMetrics_QFontMetrics, boundingRectQStringQTextOption, arginfo_qt_gui_qfontmetrics_qfontmetrics_boundingrectqstringqtextoption, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QFontMetrics_QFontMetrics, boundingRectQRectIntQStringIntInt, arginfo_qt_gui_qfontmetrics_qfontmetrics_boundingrectqrectintqstringintint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QFontMetrics_QFontMetrics, boundingRectIntIntIntIntIntQStringIntInt, arginfo_qt_gui_qfontmetrics_qfontmetrics_boundingrectintintintintintqstringintint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QFontMetrics_QFontMetrics, size, arginfo_qt_gui_qfontmetrics_qfontmetrics_size, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QFontMetrics_QFontMetrics, tightBoundingRect, arginfo_qt_gui_qfontmetrics_qfontmetrics_tightboundingrect, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QFontMetrics_QFontMetrics, tightBoundingRectQStringQTextOption, arginfo_qt_gui_qfontmetrics_qfontmetrics_tightboundingrectqstringqtextoption, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QFontMetrics_QFontMetrics, elidedText, arginfo_qt_gui_qfontmetrics_qfontmetrics_elidedtext, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QFontMetrics_QFontMetrics, underlinePos, arginfo_qt_gui_qfontmetrics_qfontmetrics_underlinepos, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QFontMetrics_QFontMetrics, overlinePos, arginfo_qt_gui_qfontmetrics_qfontmetrics_overlinepos, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QFontMetrics_QFontMetrics, strikeOutPos, arginfo_qt_gui_qfontmetrics_qfontmetrics_strikeoutpos, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QFontMetrics_QFontMetrics, lineWidth, arginfo_qt_gui_qfontmetrics_qfontmetrics_linewidth, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QFontMetrics_QFontMetrics, fontDpi, arginfo_qt_gui_qfontmetrics_qfontmetrics_fontdpi, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
