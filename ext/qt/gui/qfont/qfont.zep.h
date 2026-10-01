
extern zend_class_entry *qt_gui_qfont_qfont_ce;

ZEPHIR_INIT_CLASS(Qt_Gui_QFont_QFont);

PHP_METHOD(Qt_Gui_QFont_QFont, staticMetaObject);
PHP_METHOD(Qt_Gui_QFont_QFont, qt_check_for_QGADGET_macro);
PHP_METHOD(Qt_Gui_QFont_QFont, new_);
PHP_METHOD(Qt_Gui_QFont_QFont, newQStringIntIntBool);
PHP_METHOD(Qt_Gui_QFont_QFont, newQStringListIntIntBool);
PHP_METHOD(Qt_Gui_QFont_QFont, newQFontQPaintDevice);
PHP_METHOD(Qt_Gui_QFont_QFont, newQFont);
PHP_METHOD(Qt_Gui_QFont_QFont, swap);
PHP_METHOD(Qt_Gui_QFont_QFont, family);
PHP_METHOD(Qt_Gui_QFont_QFont, setFamily);
PHP_METHOD(Qt_Gui_QFont_QFont, families);
PHP_METHOD(Qt_Gui_QFont_QFont, setFamilies);
PHP_METHOD(Qt_Gui_QFont_QFont, styleName);
PHP_METHOD(Qt_Gui_QFont_QFont, setStyleName);
PHP_METHOD(Qt_Gui_QFont_QFont, pointSize);
PHP_METHOD(Qt_Gui_QFont_QFont, setPointSize);
PHP_METHOD(Qt_Gui_QFont_QFont, pointSizeF);
PHP_METHOD(Qt_Gui_QFont_QFont, setPointSizeF);
PHP_METHOD(Qt_Gui_QFont_QFont, pixelSize);
PHP_METHOD(Qt_Gui_QFont_QFont, setPixelSize);
PHP_METHOD(Qt_Gui_QFont_QFont, weight);
PHP_METHOD(Qt_Gui_QFont_QFont, setWeight);
PHP_METHOD(Qt_Gui_QFont_QFont, bold);
PHP_METHOD(Qt_Gui_QFont_QFont, setBold);
PHP_METHOD(Qt_Gui_QFont_QFont, setStyle);
PHP_METHOD(Qt_Gui_QFont_QFont, style);
PHP_METHOD(Qt_Gui_QFont_QFont, italic);
PHP_METHOD(Qt_Gui_QFont_QFont, setItalic);
PHP_METHOD(Qt_Gui_QFont_QFont, underline);
PHP_METHOD(Qt_Gui_QFont_QFont, setUnderline);
PHP_METHOD(Qt_Gui_QFont_QFont, overline);
PHP_METHOD(Qt_Gui_QFont_QFont, setOverline);
PHP_METHOD(Qt_Gui_QFont_QFont, strikeOut);
PHP_METHOD(Qt_Gui_QFont_QFont, setStrikeOut);
PHP_METHOD(Qt_Gui_QFont_QFont, fixedPitch);
PHP_METHOD(Qt_Gui_QFont_QFont, setFixedPitch);
PHP_METHOD(Qt_Gui_QFont_QFont, kerning);
PHP_METHOD(Qt_Gui_QFont_QFont, setKerning);
PHP_METHOD(Qt_Gui_QFont_QFont, styleHint);
PHP_METHOD(Qt_Gui_QFont_QFont, styleStrategy);
PHP_METHOD(Qt_Gui_QFont_QFont, setStyleHint);
PHP_METHOD(Qt_Gui_QFont_QFont, setStyleStrategy);
PHP_METHOD(Qt_Gui_QFont_QFont, stretch);
PHP_METHOD(Qt_Gui_QFont_QFont, setStretch);
PHP_METHOD(Qt_Gui_QFont_QFont, letterSpacing);
PHP_METHOD(Qt_Gui_QFont_QFont, letterSpacingType);
PHP_METHOD(Qt_Gui_QFont_QFont, setLetterSpacing);
PHP_METHOD(Qt_Gui_QFont_QFont, wordSpacing);
PHP_METHOD(Qt_Gui_QFont_QFont, setWordSpacing);
PHP_METHOD(Qt_Gui_QFont_QFont, setCapitalization);
PHP_METHOD(Qt_Gui_QFont_QFont, capitalization);
PHP_METHOD(Qt_Gui_QFont_QFont, setHintingPreference);
PHP_METHOD(Qt_Gui_QFont_QFont, hintingPreference);
PHP_METHOD(Qt_Gui_QFont_QFont, setFeature);
PHP_METHOD(Qt_Gui_QFont_QFont, unsetFeature);
PHP_METHOD(Qt_Gui_QFont_QFont, featureValue);
PHP_METHOD(Qt_Gui_QFont_QFont, isFeatureSet);
PHP_METHOD(Qt_Gui_QFont_QFont, featureTags);
PHP_METHOD(Qt_Gui_QFont_QFont, clearFeatures);
PHP_METHOD(Qt_Gui_QFont_QFont, setVariableAxis);
PHP_METHOD(Qt_Gui_QFont_QFont, unsetVariableAxis);
PHP_METHOD(Qt_Gui_QFont_QFont, isVariableAxisSet);
PHP_METHOD(Qt_Gui_QFont_QFont, variableAxisValue);
PHP_METHOD(Qt_Gui_QFont_QFont, clearVariableAxes);
PHP_METHOD(Qt_Gui_QFont_QFont, variableAxisTags);
PHP_METHOD(Qt_Gui_QFont_QFont, exactMatch);
PHP_METHOD(Qt_Gui_QFont_QFont, isCopyOf);
PHP_METHOD(Qt_Gui_QFont_QFont, key);
PHP_METHOD(Qt_Gui_QFont_QFont, toString);
PHP_METHOD(Qt_Gui_QFont_QFont, fromString);
PHP_METHOD(Qt_Gui_QFont_QFont, substitute);
PHP_METHOD(Qt_Gui_QFont_QFont, substitutes);
PHP_METHOD(Qt_Gui_QFont_QFont, substitutions);
PHP_METHOD(Qt_Gui_QFont_QFont, insertSubstitution);
PHP_METHOD(Qt_Gui_QFont_QFont, insertSubstitutions);
PHP_METHOD(Qt_Gui_QFont_QFont, removeSubstitutions);
PHP_METHOD(Qt_Gui_QFont_QFont, initialize);
PHP_METHOD(Qt_Gui_QFont_QFont, cleanup);
PHP_METHOD(Qt_Gui_QFont_QFont, cacheStatistics);
PHP_METHOD(Qt_Gui_QFont_QFont, defaultFamily);
PHP_METHOD(Qt_Gui_QFont_QFont, resolve);
PHP_METHOD(Qt_Gui_QFont_QFont, resolveMask);
PHP_METHOD(Qt_Gui_QFont_QFont, setResolveMask);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qfont_qfont_staticmetaobject, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qfont_qfont_qt_check_for_qgadget_macro, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qfont_qfont_new_, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qfont_qfont_newqstringintintbool, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, family, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, pointSize, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, weight, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, italic, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qfont_qfont_newqstringlistintintbool, 0, 1, IS_LONG, 0)
	ZEND_ARG_ARRAY_INFO(0, families, 0)
	ZEND_ARG_TYPE_INFO(0, pointSize, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, weight, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, italic, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qfont_qfont_newqfontqpaintdevice, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, font, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, pd, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qfont_qfont_newqfont, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, font, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qfont_qfont_swap, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, other, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qfont_qfont_family, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qfont_qfont_setfamily, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qfont_qfont_families, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qfont_qfont_setfamilies, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_ARRAY_INFO(0, arg0, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qfont_qfont_stylename, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qfont_qfont_setstylename, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qfont_qfont_pointsize, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qfont_qfont_setpointsize, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qfont_qfont_pointsizef, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qfont_qfont_setpointsizef, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qfont_qfont_pixelsize, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qfont_qfont_setpixelsize, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qfont_qfont_weight, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qfont_qfont_setweight, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, weight, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qfont_qfont_bold, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qfont_qfont_setbold, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qfont_qfont_setstyle, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, style, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qfont_qfont_style, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qfont_qfont_italic, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qfont_qfont_setitalic, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, b, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qfont_qfont_underline, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qfont_qfont_setunderline, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qfont_qfont_overline, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qfont_qfont_setoverline, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qfont_qfont_strikeout, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qfont_qfont_setstrikeout, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qfont_qfont_fixedpitch, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qfont_qfont_setfixedpitch, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qfont_qfont_kerning, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qfont_qfont_setkerning, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qfont_qfont_stylehint, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qfont_qfont_stylestrategy, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qfont_qfont_setstylehint, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
	ZEND_ARG_INFO(0, arg1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qfont_qfont_setstylestrategy, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, s, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qfont_qfont_stretch, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qfont_qfont_setstretch, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qfont_qfont_letterspacing, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qfont_qfont_letterspacingtype, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qfont_qfont_setletterspacing, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, type, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, spacing, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qfont_qfont_wordspacing, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qfont_qfont_setwordspacing, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, spacing, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qfont_qfont_setcapitalization, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qfont_qfont_capitalization, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qfont_qfont_sethintingpreference, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, hintingPreference, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qfont_qfont_hintingpreference, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qfont_qfont_setfeature, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, tag, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qfont_qfont_unsetfeature, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, tag, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qfont_qfont_featurevalue, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, tag, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qfont_qfont_isfeatureset, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, tag, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qfont_qfont_featuretags, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qfont_qfont_clearfeatures, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qfont_qfont_setvariableaxis, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, tag, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qfont_qfont_unsetvariableaxis, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, tag, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qfont_qfont_isvariableaxisset, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, tag, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qfont_qfont_variableaxisvalue, 0, 2, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, tag, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qfont_qfont_clearvariableaxes, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qfont_qfont_variableaxistags, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qfont_qfont_exactmatch, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qfont_qfont_iscopyof, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qfont_qfont_key, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qfont_qfont_tostring, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qfont_qfont_fromstring, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qfont_qfont_substitute, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qfont_qfont_substitutes, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qfont_qfont_substitutions, 0, 0, IS_ARRAY, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qfont_qfont_insertsubstitution, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, arg0, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, arg1, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qfont_qfont_insertsubstitutions, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, arg0, IS_STRING, 0)
	ZEND_ARG_ARRAY_INFO(0, arg1, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qfont_qfont_removesubstitutions, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, arg0, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qfont_qfont_initialize, 0, 0, IS_VOID, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qfont_qfont_cleanup, 0, 0, IS_VOID, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qfont_qfont_cachestatistics, 0, 0, IS_VOID, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qfont_qfont_defaultfamily, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qfont_qfont_resolve, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qfont_qfont_resolvemask, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qfont_qfont_setresolvemask, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, mask, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_gui_qfont_qfont_method_entry) {
	PHP_ME(Qt_Gui_QFont_QFont, staticMetaObject, arginfo_qt_gui_qfont_qfont_staticmetaobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QFont_QFont, qt_check_for_QGADGET_macro, arginfo_qt_gui_qfont_qfont_qt_check_for_qgadget_macro, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QFont_QFont, new_, arginfo_qt_gui_qfont_qfont_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QFont_QFont, newQStringIntIntBool, arginfo_qt_gui_qfont_qfont_newqstringintintbool, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QFont_QFont, newQStringListIntIntBool, arginfo_qt_gui_qfont_qfont_newqstringlistintintbool, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QFont_QFont, newQFontQPaintDevice, arginfo_qt_gui_qfont_qfont_newqfontqpaintdevice, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QFont_QFont, newQFont, arginfo_qt_gui_qfont_qfont_newqfont, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QFont_QFont, swap, arginfo_qt_gui_qfont_qfont_swap, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QFont_QFont, family, arginfo_qt_gui_qfont_qfont_family, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QFont_QFont, setFamily, arginfo_qt_gui_qfont_qfont_setfamily, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QFont_QFont, families, arginfo_qt_gui_qfont_qfont_families, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QFont_QFont, setFamilies, arginfo_qt_gui_qfont_qfont_setfamilies, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QFont_QFont, styleName, arginfo_qt_gui_qfont_qfont_stylename, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QFont_QFont, setStyleName, arginfo_qt_gui_qfont_qfont_setstylename, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QFont_QFont, pointSize, arginfo_qt_gui_qfont_qfont_pointsize, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QFont_QFont, setPointSize, arginfo_qt_gui_qfont_qfont_setpointsize, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QFont_QFont, pointSizeF, arginfo_qt_gui_qfont_qfont_pointsizef, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QFont_QFont, setPointSizeF, arginfo_qt_gui_qfont_qfont_setpointsizef, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QFont_QFont, pixelSize, arginfo_qt_gui_qfont_qfont_pixelsize, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QFont_QFont, setPixelSize, arginfo_qt_gui_qfont_qfont_setpixelsize, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QFont_QFont, weight, arginfo_qt_gui_qfont_qfont_weight, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QFont_QFont, setWeight, arginfo_qt_gui_qfont_qfont_setweight, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QFont_QFont, bold, arginfo_qt_gui_qfont_qfont_bold, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QFont_QFont, setBold, arginfo_qt_gui_qfont_qfont_setbold, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QFont_QFont, setStyle, arginfo_qt_gui_qfont_qfont_setstyle, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QFont_QFont, style, arginfo_qt_gui_qfont_qfont_style, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QFont_QFont, italic, arginfo_qt_gui_qfont_qfont_italic, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QFont_QFont, setItalic, arginfo_qt_gui_qfont_qfont_setitalic, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QFont_QFont, underline, arginfo_qt_gui_qfont_qfont_underline, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QFont_QFont, setUnderline, arginfo_qt_gui_qfont_qfont_setunderline, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QFont_QFont, overline, arginfo_qt_gui_qfont_qfont_overline, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QFont_QFont, setOverline, arginfo_qt_gui_qfont_qfont_setoverline, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QFont_QFont, strikeOut, arginfo_qt_gui_qfont_qfont_strikeout, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QFont_QFont, setStrikeOut, arginfo_qt_gui_qfont_qfont_setstrikeout, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QFont_QFont, fixedPitch, arginfo_qt_gui_qfont_qfont_fixedpitch, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QFont_QFont, setFixedPitch, arginfo_qt_gui_qfont_qfont_setfixedpitch, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QFont_QFont, kerning, arginfo_qt_gui_qfont_qfont_kerning, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QFont_QFont, setKerning, arginfo_qt_gui_qfont_qfont_setkerning, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QFont_QFont, styleHint, arginfo_qt_gui_qfont_qfont_stylehint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QFont_QFont, styleStrategy, arginfo_qt_gui_qfont_qfont_stylestrategy, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QFont_QFont, setStyleHint, arginfo_qt_gui_qfont_qfont_setstylehint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QFont_QFont, setStyleStrategy, arginfo_qt_gui_qfont_qfont_setstylestrategy, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QFont_QFont, stretch, arginfo_qt_gui_qfont_qfont_stretch, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QFont_QFont, setStretch, arginfo_qt_gui_qfont_qfont_setstretch, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QFont_QFont, letterSpacing, arginfo_qt_gui_qfont_qfont_letterspacing, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QFont_QFont, letterSpacingType, arginfo_qt_gui_qfont_qfont_letterspacingtype, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QFont_QFont, setLetterSpacing, arginfo_qt_gui_qfont_qfont_setletterspacing, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QFont_QFont, wordSpacing, arginfo_qt_gui_qfont_qfont_wordspacing, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QFont_QFont, setWordSpacing, arginfo_qt_gui_qfont_qfont_setwordspacing, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QFont_QFont, setCapitalization, arginfo_qt_gui_qfont_qfont_setcapitalization, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QFont_QFont, capitalization, arginfo_qt_gui_qfont_qfont_capitalization, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QFont_QFont, setHintingPreference, arginfo_qt_gui_qfont_qfont_sethintingpreference, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QFont_QFont, hintingPreference, arginfo_qt_gui_qfont_qfont_hintingpreference, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QFont_QFont, setFeature, arginfo_qt_gui_qfont_qfont_setfeature, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QFont_QFont, unsetFeature, arginfo_qt_gui_qfont_qfont_unsetfeature, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QFont_QFont, featureValue, arginfo_qt_gui_qfont_qfont_featurevalue, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QFont_QFont, isFeatureSet, arginfo_qt_gui_qfont_qfont_isfeatureset, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QFont_QFont, featureTags, arginfo_qt_gui_qfont_qfont_featuretags, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QFont_QFont, clearFeatures, arginfo_qt_gui_qfont_qfont_clearfeatures, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QFont_QFont, setVariableAxis, arginfo_qt_gui_qfont_qfont_setvariableaxis, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QFont_QFont, unsetVariableAxis, arginfo_qt_gui_qfont_qfont_unsetvariableaxis, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QFont_QFont, isVariableAxisSet, arginfo_qt_gui_qfont_qfont_isvariableaxisset, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QFont_QFont, variableAxisValue, arginfo_qt_gui_qfont_qfont_variableaxisvalue, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QFont_QFont, clearVariableAxes, arginfo_qt_gui_qfont_qfont_clearvariableaxes, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QFont_QFont, variableAxisTags, arginfo_qt_gui_qfont_qfont_variableaxistags, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QFont_QFont, exactMatch, arginfo_qt_gui_qfont_qfont_exactmatch, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QFont_QFont, isCopyOf, arginfo_qt_gui_qfont_qfont_iscopyof, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QFont_QFont, key, arginfo_qt_gui_qfont_qfont_key, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QFont_QFont, toString, arginfo_qt_gui_qfont_qfont_tostring, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QFont_QFont, fromString, arginfo_qt_gui_qfont_qfont_fromstring, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QFont_QFont, substitute, arginfo_qt_gui_qfont_qfont_substitute, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QFont_QFont, substitutes, arginfo_qt_gui_qfont_qfont_substitutes, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QFont_QFont, substitutions, arginfo_qt_gui_qfont_qfont_substitutions, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QFont_QFont, insertSubstitution, arginfo_qt_gui_qfont_qfont_insertsubstitution, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QFont_QFont, insertSubstitutions, arginfo_qt_gui_qfont_qfont_insertsubstitutions, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QFont_QFont, removeSubstitutions, arginfo_qt_gui_qfont_qfont_removesubstitutions, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QFont_QFont, initialize, arginfo_qt_gui_qfont_qfont_initialize, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QFont_QFont, cleanup, arginfo_qt_gui_qfont_qfont_cleanup, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QFont_QFont, cacheStatistics, arginfo_qt_gui_qfont_qfont_cachestatistics, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QFont_QFont, defaultFamily, arginfo_qt_gui_qfont_qfont_defaultfamily, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QFont_QFont, resolve, arginfo_qt_gui_qfont_qfont_resolve, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QFont_QFont, resolveMask, arginfo_qt_gui_qfont_qfont_resolvemask, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QFont_QFont, setResolveMask, arginfo_qt_gui_qfont_qfont_setresolvemask, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
