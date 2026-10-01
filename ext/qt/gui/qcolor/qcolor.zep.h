
extern zend_class_entry *qt_gui_qcolor_qcolor_ce;

ZEPHIR_INIT_CLASS(Qt_Gui_QColor_QColor);

PHP_METHOD(Qt_Gui_QColor_QColor, new_);
PHP_METHOD(Qt_Gui_QColor_QColor, newQtGlobalColor);
PHP_METHOD(Qt_Gui_QColor_QColor, newIntIntIntInt);
PHP_METHOD(Qt_Gui_QColor_QColor, newQRgb);
PHP_METHOD(Qt_Gui_QColor_QColor, newQRgba64);
PHP_METHOD(Qt_Gui_QColor_QColor, newQString);
PHP_METHOD(Qt_Gui_QColor_QColor, newQStringView);
PHP_METHOD(Qt_Gui_QColor_QColor, newChar);
PHP_METHOD(Qt_Gui_QColor_QColor, newQLatin1StringView);
PHP_METHOD(Qt_Gui_QColor_QColor, newQColorSpec);
PHP_METHOD(Qt_Gui_QColor_QColor, fromString);
PHP_METHOD(Qt_Gui_QColor_QColor, isValid);
PHP_METHOD(Qt_Gui_QColor_QColor, name);
PHP_METHOD(Qt_Gui_QColor_QColor, colorNames);
PHP_METHOD(Qt_Gui_QColor_QColor, spec);
PHP_METHOD(Qt_Gui_QColor_QColor, alpha);
PHP_METHOD(Qt_Gui_QColor_QColor, setAlpha);
PHP_METHOD(Qt_Gui_QColor_QColor, alphaF);
PHP_METHOD(Qt_Gui_QColor_QColor, setAlphaF);
PHP_METHOD(Qt_Gui_QColor_QColor, red);
PHP_METHOD(Qt_Gui_QColor_QColor, green);
PHP_METHOD(Qt_Gui_QColor_QColor, blue);
PHP_METHOD(Qt_Gui_QColor_QColor, setRed);
PHP_METHOD(Qt_Gui_QColor_QColor, setGreen);
PHP_METHOD(Qt_Gui_QColor_QColor, setBlue);
PHP_METHOD(Qt_Gui_QColor_QColor, redF);
PHP_METHOD(Qt_Gui_QColor_QColor, greenF);
PHP_METHOD(Qt_Gui_QColor_QColor, blueF);
PHP_METHOD(Qt_Gui_QColor_QColor, setRedF);
PHP_METHOD(Qt_Gui_QColor_QColor, setGreenF);
PHP_METHOD(Qt_Gui_QColor_QColor, setBlueF);
PHP_METHOD(Qt_Gui_QColor_QColor, getRgb);
PHP_METHOD(Qt_Gui_QColor_QColor, setRgb);
PHP_METHOD(Qt_Gui_QColor_QColor, getRgbF);
PHP_METHOD(Qt_Gui_QColor_QColor, setRgbF);
PHP_METHOD(Qt_Gui_QColor_QColor, rgba64);
PHP_METHOD(Qt_Gui_QColor_QColor, setRgba64);
PHP_METHOD(Qt_Gui_QColor_QColor, rgba);
PHP_METHOD(Qt_Gui_QColor_QColor, setRgba);
PHP_METHOD(Qt_Gui_QColor_QColor, rgb);
PHP_METHOD(Qt_Gui_QColor_QColor, setRgbQRgb);
PHP_METHOD(Qt_Gui_QColor_QColor, hue);
PHP_METHOD(Qt_Gui_QColor_QColor, saturation);
PHP_METHOD(Qt_Gui_QColor_QColor, hsvHue);
PHP_METHOD(Qt_Gui_QColor_QColor, hsvSaturation);
PHP_METHOD(Qt_Gui_QColor_QColor, value);
PHP_METHOD(Qt_Gui_QColor_QColor, hueF);
PHP_METHOD(Qt_Gui_QColor_QColor, saturationF);
PHP_METHOD(Qt_Gui_QColor_QColor, hsvHueF);
PHP_METHOD(Qt_Gui_QColor_QColor, hsvSaturationF);
PHP_METHOD(Qt_Gui_QColor_QColor, valueF);
PHP_METHOD(Qt_Gui_QColor_QColor, getHsv);
PHP_METHOD(Qt_Gui_QColor_QColor, setHsv);
PHP_METHOD(Qt_Gui_QColor_QColor, getHsvF);
PHP_METHOD(Qt_Gui_QColor_QColor, setHsvF);
PHP_METHOD(Qt_Gui_QColor_QColor, cyan);
PHP_METHOD(Qt_Gui_QColor_QColor, magenta);
PHP_METHOD(Qt_Gui_QColor_QColor, yellow);
PHP_METHOD(Qt_Gui_QColor_QColor, black);
PHP_METHOD(Qt_Gui_QColor_QColor, cyanF);
PHP_METHOD(Qt_Gui_QColor_QColor, magentaF);
PHP_METHOD(Qt_Gui_QColor_QColor, yellowF);
PHP_METHOD(Qt_Gui_QColor_QColor, blackF);
PHP_METHOD(Qt_Gui_QColor_QColor, getCmyk);
PHP_METHOD(Qt_Gui_QColor_QColor, setCmyk);
PHP_METHOD(Qt_Gui_QColor_QColor, getCmykF);
PHP_METHOD(Qt_Gui_QColor_QColor, setCmykF);
PHP_METHOD(Qt_Gui_QColor_QColor, hslHue);
PHP_METHOD(Qt_Gui_QColor_QColor, hslSaturation);
PHP_METHOD(Qt_Gui_QColor_QColor, lightness);
PHP_METHOD(Qt_Gui_QColor_QColor, hslHueF);
PHP_METHOD(Qt_Gui_QColor_QColor, hslSaturationF);
PHP_METHOD(Qt_Gui_QColor_QColor, lightnessF);
PHP_METHOD(Qt_Gui_QColor_QColor, getHsl);
PHP_METHOD(Qt_Gui_QColor_QColor, setHsl);
PHP_METHOD(Qt_Gui_QColor_QColor, getHslF);
PHP_METHOD(Qt_Gui_QColor_QColor, setHslF);
PHP_METHOD(Qt_Gui_QColor_QColor, toRgb);
PHP_METHOD(Qt_Gui_QColor_QColor, toHsv);
PHP_METHOD(Qt_Gui_QColor_QColor, toCmyk);
PHP_METHOD(Qt_Gui_QColor_QColor, toHsl);
PHP_METHOD(Qt_Gui_QColor_QColor, toExtendedRgb);
PHP_METHOD(Qt_Gui_QColor_QColor, convertTo);
PHP_METHOD(Qt_Gui_QColor_QColor, fromRgb);
PHP_METHOD(Qt_Gui_QColor_QColor, fromRgba);
PHP_METHOD(Qt_Gui_QColor_QColor, fromRgbIntIntIntInt);
PHP_METHOD(Qt_Gui_QColor_QColor, fromRgbF);
PHP_METHOD(Qt_Gui_QColor_QColor, fromRgba64);
PHP_METHOD(Qt_Gui_QColor_QColor, fromRgba64QRgba64);
PHP_METHOD(Qt_Gui_QColor_QColor, fromHsv);
PHP_METHOD(Qt_Gui_QColor_QColor, fromHsvF);
PHP_METHOD(Qt_Gui_QColor_QColor, fromCmyk);
PHP_METHOD(Qt_Gui_QColor_QColor, fromCmykF);
PHP_METHOD(Qt_Gui_QColor_QColor, fromHsl);
PHP_METHOD(Qt_Gui_QColor_QColor, fromHslF);
PHP_METHOD(Qt_Gui_QColor_QColor, lighter);
PHP_METHOD(Qt_Gui_QColor_QColor, darker);
PHP_METHOD(Qt_Gui_QColor_QColor, isValidColorName);
PHP_METHOD(Qt_Gui_QColor_QColor, newQColorSpecUshortUshortUshortUshortUshort);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qcolor_qcolor_new_, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qcolor_qcolor_newqtglobalcolor, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, color, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qcolor_qcolor_newintintintint, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, r, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, g, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, b, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, a, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qcolor_qcolor_newqrgb, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rgb, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qcolor_qcolor_newqrgba64, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rgba64, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qcolor_qcolor_newqstring, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, name, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qcolor_qcolor_newqstringview, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, name, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qcolor_qcolor_newchar, 0, 1, IS_LONG, 0)
	ZEND_ARG_INFO(0, aname)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qcolor_qcolor_newqlatin1stringview, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, name, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qcolor_qcolor_newqcolorspec, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, spec, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qcolor_qcolor_fromstring, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, name, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qcolor_qcolor_isvalid, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qcolor_qcolor_name, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_INFO(0, format)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qcolor_qcolor_colornames, 0, 0, IS_ARRAY, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qcolor_qcolor_spec, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qcolor_qcolor_alpha, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qcolor_qcolor_setalpha, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, alpha, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qcolor_qcolor_alphaf, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qcolor_qcolor_setalphaf, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, alpha, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qcolor_qcolor_red, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qcolor_qcolor_green, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qcolor_qcolor_blue, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qcolor_qcolor_setred, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, red, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qcolor_qcolor_setgreen, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, green, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qcolor_qcolor_setblue, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, blue, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qcolor_qcolor_redf, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qcolor_qcolor_greenf, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qcolor_qcolor_bluef, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qcolor_qcolor_setredf, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, red, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qcolor_qcolor_setgreenf, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, green, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qcolor_qcolor_setbluef, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, blue, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qcolor_qcolor_getrgb, 0, 4, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_INFO(0, r)
	ZEND_ARG_INFO(0, g)
	ZEND_ARG_INFO(0, b)
	ZEND_ARG_INFO(0, a)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qcolor_qcolor_setrgb, 0, 4, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, r, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, g, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, b, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, a, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qcolor_qcolor_getrgbf, 0, 4, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_INFO(0, r)
	ZEND_ARG_INFO(0, g)
	ZEND_ARG_INFO(0, b)
	ZEND_ARG_INFO(0, a)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qcolor_qcolor_setrgbf, 0, 4, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, r, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, g, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, b, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, a, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qcolor_qcolor_rgba64, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qcolor_qcolor_setrgba64, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rgba, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qcolor_qcolor_rgba, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qcolor_qcolor_setrgba, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rgba, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qcolor_qcolor_rgb, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qcolor_qcolor_setrgbqrgb, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rgb, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qcolor_qcolor_hue, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qcolor_qcolor_saturation, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qcolor_qcolor_hsvhue, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qcolor_qcolor_hsvsaturation, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qcolor_qcolor_value, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qcolor_qcolor_huef, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qcolor_qcolor_saturationf, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qcolor_qcolor_hsvhuef, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qcolor_qcolor_hsvsaturationf, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qcolor_qcolor_valuef, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qcolor_qcolor_gethsv, 0, 4, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_INFO(0, h)
	ZEND_ARG_INFO(0, s)
	ZEND_ARG_INFO(0, v)
	ZEND_ARG_INFO(0, a)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qcolor_qcolor_sethsv, 0, 4, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, h, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, s, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, v, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, a, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qcolor_qcolor_gethsvf, 0, 4, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_INFO(0, h)
	ZEND_ARG_INFO(0, s)
	ZEND_ARG_INFO(0, v)
	ZEND_ARG_INFO(0, a)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qcolor_qcolor_sethsvf, 0, 4, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, h, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, s, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, v, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, a, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qcolor_qcolor_cyan, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qcolor_qcolor_magenta, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qcolor_qcolor_yellow, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qcolor_qcolor_black, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qcolor_qcolor_cyanf, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qcolor_qcolor_magentaf, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qcolor_qcolor_yellowf, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qcolor_qcolor_blackf, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qcolor_qcolor_getcmyk, 0, 5, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_INFO(0, c)
	ZEND_ARG_INFO(0, m)
	ZEND_ARG_INFO(0, y)
	ZEND_ARG_INFO(0, k)
	ZEND_ARG_INFO(0, a)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qcolor_qcolor_setcmyk, 0, 5, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, c, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, m, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, k, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, a, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qcolor_qcolor_getcmykf, 0, 5, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_INFO(0, c)
	ZEND_ARG_INFO(0, m)
	ZEND_ARG_INFO(0, y)
	ZEND_ARG_INFO(0, k)
	ZEND_ARG_INFO(0, a)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qcolor_qcolor_setcmykf, 0, 5, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, c, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, m, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, k, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, a, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qcolor_qcolor_hslhue, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qcolor_qcolor_hslsaturation, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qcolor_qcolor_lightness, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qcolor_qcolor_hslhuef, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qcolor_qcolor_hslsaturationf, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qcolor_qcolor_lightnessf, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qcolor_qcolor_gethsl, 0, 4, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_INFO(0, h)
	ZEND_ARG_INFO(0, s)
	ZEND_ARG_INFO(0, l)
	ZEND_ARG_INFO(0, a)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qcolor_qcolor_sethsl, 0, 4, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, h, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, s, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, l, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, a, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qcolor_qcolor_gethslf, 0, 4, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_INFO(0, h)
	ZEND_ARG_INFO(0, s)
	ZEND_ARG_INFO(0, l)
	ZEND_ARG_INFO(0, a)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qcolor_qcolor_sethslf, 0, 4, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, h, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, s, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, l, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, a, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qcolor_qcolor_torgb, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qcolor_qcolor_tohsv, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qcolor_qcolor_tocmyk, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qcolor_qcolor_tohsl, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qcolor_qcolor_toextendedrgb, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qcolor_qcolor_convertto, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, colorSpec, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qcolor_qcolor_fromrgb, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rgb, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qcolor_qcolor_fromrgba, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rgba, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qcolor_qcolor_fromrgbintintintint, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, r, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, g, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, b, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, a, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qcolor_qcolor_fromrgbf, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, r, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, g, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, b, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, a, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qcolor_qcolor_fromrgba64, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, r, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, g, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, b, IS_LONG, 0)
	ZEND_ARG_INFO(0, a)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qcolor_qcolor_fromrgba64qrgba64, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rgba, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qcolor_qcolor_fromhsv, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, h, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, s, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, v, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, a, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qcolor_qcolor_fromhsvf, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, h, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, s, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, v, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, a, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qcolor_qcolor_fromcmyk, 0, 4, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, c, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, m, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, k, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, a, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qcolor_qcolor_fromcmykf, 0, 4, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, c, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, m, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, k, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, a, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qcolor_qcolor_fromhsl, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, h, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, s, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, l, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, a, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qcolor_qcolor_fromhslf, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, h, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, s, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, l, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, a, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qcolor_qcolor_lighter, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, f, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qcolor_qcolor_darker, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, f, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qcolor_qcolor_isvalidcolorname, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qcolor_qcolor_newqcolorspecushortushortushortushortushort, 0, 5, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, spec, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, a1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, a2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, a3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, a4, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, a5, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_gui_qcolor_qcolor_method_entry) {
	PHP_ME(Qt_Gui_QColor_QColor, new_, arginfo_qt_gui_qcolor_qcolor_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QColor_QColor, newQtGlobalColor, arginfo_qt_gui_qcolor_qcolor_newqtglobalcolor, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QColor_QColor, newIntIntIntInt, arginfo_qt_gui_qcolor_qcolor_newintintintint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QColor_QColor, newQRgb, arginfo_qt_gui_qcolor_qcolor_newqrgb, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QColor_QColor, newQRgba64, arginfo_qt_gui_qcolor_qcolor_newqrgba64, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QColor_QColor, newQString, arginfo_qt_gui_qcolor_qcolor_newqstring, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QColor_QColor, newQStringView, arginfo_qt_gui_qcolor_qcolor_newqstringview, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QColor_QColor, newChar, arginfo_qt_gui_qcolor_qcolor_newchar, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QColor_QColor, newQLatin1StringView, arginfo_qt_gui_qcolor_qcolor_newqlatin1stringview, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QColor_QColor, newQColorSpec, arginfo_qt_gui_qcolor_qcolor_newqcolorspec, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QColor_QColor, fromString, arginfo_qt_gui_qcolor_qcolor_fromstring, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QColor_QColor, isValid, arginfo_qt_gui_qcolor_qcolor_isvalid, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QColor_QColor, name, arginfo_qt_gui_qcolor_qcolor_name, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QColor_QColor, colorNames, arginfo_qt_gui_qcolor_qcolor_colornames, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QColor_QColor, spec, arginfo_qt_gui_qcolor_qcolor_spec, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QColor_QColor, alpha, arginfo_qt_gui_qcolor_qcolor_alpha, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QColor_QColor, setAlpha, arginfo_qt_gui_qcolor_qcolor_setalpha, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QColor_QColor, alphaF, arginfo_qt_gui_qcolor_qcolor_alphaf, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QColor_QColor, setAlphaF, arginfo_qt_gui_qcolor_qcolor_setalphaf, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QColor_QColor, red, arginfo_qt_gui_qcolor_qcolor_red, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QColor_QColor, green, arginfo_qt_gui_qcolor_qcolor_green, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QColor_QColor, blue, arginfo_qt_gui_qcolor_qcolor_blue, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QColor_QColor, setRed, arginfo_qt_gui_qcolor_qcolor_setred, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QColor_QColor, setGreen, arginfo_qt_gui_qcolor_qcolor_setgreen, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QColor_QColor, setBlue, arginfo_qt_gui_qcolor_qcolor_setblue, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QColor_QColor, redF, arginfo_qt_gui_qcolor_qcolor_redf, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QColor_QColor, greenF, arginfo_qt_gui_qcolor_qcolor_greenf, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QColor_QColor, blueF, arginfo_qt_gui_qcolor_qcolor_bluef, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QColor_QColor, setRedF, arginfo_qt_gui_qcolor_qcolor_setredf, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QColor_QColor, setGreenF, arginfo_qt_gui_qcolor_qcolor_setgreenf, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QColor_QColor, setBlueF, arginfo_qt_gui_qcolor_qcolor_setbluef, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QColor_QColor, getRgb, arginfo_qt_gui_qcolor_qcolor_getrgb, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QColor_QColor, setRgb, arginfo_qt_gui_qcolor_qcolor_setrgb, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QColor_QColor, getRgbF, arginfo_qt_gui_qcolor_qcolor_getrgbf, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QColor_QColor, setRgbF, arginfo_qt_gui_qcolor_qcolor_setrgbf, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QColor_QColor, rgba64, arginfo_qt_gui_qcolor_qcolor_rgba64, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QColor_QColor, setRgba64, arginfo_qt_gui_qcolor_qcolor_setrgba64, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QColor_QColor, rgba, arginfo_qt_gui_qcolor_qcolor_rgba, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QColor_QColor, setRgba, arginfo_qt_gui_qcolor_qcolor_setrgba, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QColor_QColor, rgb, arginfo_qt_gui_qcolor_qcolor_rgb, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QColor_QColor, setRgbQRgb, arginfo_qt_gui_qcolor_qcolor_setrgbqrgb, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QColor_QColor, hue, arginfo_qt_gui_qcolor_qcolor_hue, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QColor_QColor, saturation, arginfo_qt_gui_qcolor_qcolor_saturation, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QColor_QColor, hsvHue, arginfo_qt_gui_qcolor_qcolor_hsvhue, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QColor_QColor, hsvSaturation, arginfo_qt_gui_qcolor_qcolor_hsvsaturation, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QColor_QColor, value, arginfo_qt_gui_qcolor_qcolor_value, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QColor_QColor, hueF, arginfo_qt_gui_qcolor_qcolor_huef, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QColor_QColor, saturationF, arginfo_qt_gui_qcolor_qcolor_saturationf, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QColor_QColor, hsvHueF, arginfo_qt_gui_qcolor_qcolor_hsvhuef, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QColor_QColor, hsvSaturationF, arginfo_qt_gui_qcolor_qcolor_hsvsaturationf, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QColor_QColor, valueF, arginfo_qt_gui_qcolor_qcolor_valuef, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QColor_QColor, getHsv, arginfo_qt_gui_qcolor_qcolor_gethsv, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QColor_QColor, setHsv, arginfo_qt_gui_qcolor_qcolor_sethsv, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QColor_QColor, getHsvF, arginfo_qt_gui_qcolor_qcolor_gethsvf, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QColor_QColor, setHsvF, arginfo_qt_gui_qcolor_qcolor_sethsvf, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QColor_QColor, cyan, arginfo_qt_gui_qcolor_qcolor_cyan, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QColor_QColor, magenta, arginfo_qt_gui_qcolor_qcolor_magenta, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QColor_QColor, yellow, arginfo_qt_gui_qcolor_qcolor_yellow, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QColor_QColor, black, arginfo_qt_gui_qcolor_qcolor_black, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QColor_QColor, cyanF, arginfo_qt_gui_qcolor_qcolor_cyanf, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QColor_QColor, magentaF, arginfo_qt_gui_qcolor_qcolor_magentaf, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QColor_QColor, yellowF, arginfo_qt_gui_qcolor_qcolor_yellowf, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QColor_QColor, blackF, arginfo_qt_gui_qcolor_qcolor_blackf, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QColor_QColor, getCmyk, arginfo_qt_gui_qcolor_qcolor_getcmyk, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QColor_QColor, setCmyk, arginfo_qt_gui_qcolor_qcolor_setcmyk, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QColor_QColor, getCmykF, arginfo_qt_gui_qcolor_qcolor_getcmykf, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QColor_QColor, setCmykF, arginfo_qt_gui_qcolor_qcolor_setcmykf, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QColor_QColor, hslHue, arginfo_qt_gui_qcolor_qcolor_hslhue, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QColor_QColor, hslSaturation, arginfo_qt_gui_qcolor_qcolor_hslsaturation, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QColor_QColor, lightness, arginfo_qt_gui_qcolor_qcolor_lightness, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QColor_QColor, hslHueF, arginfo_qt_gui_qcolor_qcolor_hslhuef, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QColor_QColor, hslSaturationF, arginfo_qt_gui_qcolor_qcolor_hslsaturationf, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QColor_QColor, lightnessF, arginfo_qt_gui_qcolor_qcolor_lightnessf, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QColor_QColor, getHsl, arginfo_qt_gui_qcolor_qcolor_gethsl, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QColor_QColor, setHsl, arginfo_qt_gui_qcolor_qcolor_sethsl, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QColor_QColor, getHslF, arginfo_qt_gui_qcolor_qcolor_gethslf, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QColor_QColor, setHslF, arginfo_qt_gui_qcolor_qcolor_sethslf, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QColor_QColor, toRgb, arginfo_qt_gui_qcolor_qcolor_torgb, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QColor_QColor, toHsv, arginfo_qt_gui_qcolor_qcolor_tohsv, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QColor_QColor, toCmyk, arginfo_qt_gui_qcolor_qcolor_tocmyk, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QColor_QColor, toHsl, arginfo_qt_gui_qcolor_qcolor_tohsl, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QColor_QColor, toExtendedRgb, arginfo_qt_gui_qcolor_qcolor_toextendedrgb, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QColor_QColor, convertTo, arginfo_qt_gui_qcolor_qcolor_convertto, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QColor_QColor, fromRgb, arginfo_qt_gui_qcolor_qcolor_fromrgb, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QColor_QColor, fromRgba, arginfo_qt_gui_qcolor_qcolor_fromrgba, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QColor_QColor, fromRgbIntIntIntInt, arginfo_qt_gui_qcolor_qcolor_fromrgbintintintint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QColor_QColor, fromRgbF, arginfo_qt_gui_qcolor_qcolor_fromrgbf, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QColor_QColor, fromRgba64, arginfo_qt_gui_qcolor_qcolor_fromrgba64, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QColor_QColor, fromRgba64QRgba64, arginfo_qt_gui_qcolor_qcolor_fromrgba64qrgba64, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QColor_QColor, fromHsv, arginfo_qt_gui_qcolor_qcolor_fromhsv, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QColor_QColor, fromHsvF, arginfo_qt_gui_qcolor_qcolor_fromhsvf, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QColor_QColor, fromCmyk, arginfo_qt_gui_qcolor_qcolor_fromcmyk, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QColor_QColor, fromCmykF, arginfo_qt_gui_qcolor_qcolor_fromcmykf, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QColor_QColor, fromHsl, arginfo_qt_gui_qcolor_qcolor_fromhsl, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QColor_QColor, fromHslF, arginfo_qt_gui_qcolor_qcolor_fromhslf, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QColor_QColor, lighter, arginfo_qt_gui_qcolor_qcolor_lighter, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QColor_QColor, darker, arginfo_qt_gui_qcolor_qcolor_darker, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QColor_QColor, isValidColorName, arginfo_qt_gui_qcolor_qcolor_isvalidcolorname, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QColor_QColor, newQColorSpecUshortUshortUshortUshortUshort, arginfo_qt_gui_qcolor_qcolor_newqcolorspecushortushortushortushortushort, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
