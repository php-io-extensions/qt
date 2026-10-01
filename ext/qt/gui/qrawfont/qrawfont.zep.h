
extern zend_class_entry *qt_gui_qrawfont_qrawfont_ce;

ZEPHIR_INIT_CLASS(Qt_Gui_QRawFont_QRawFont);

PHP_METHOD(Qt_Gui_QRawFont_QRawFont, new_);
PHP_METHOD(Qt_Gui_QRawFont_QRawFont, newQStringQrealQFontHintingPreference);
PHP_METHOD(Qt_Gui_QRawFont_QRawFont, newQByteArrayQrealQFontHintingPreference);
PHP_METHOD(Qt_Gui_QRawFont_QRawFont, newQRawFont);
PHP_METHOD(Qt_Gui_QRawFont_QRawFont, swap);
PHP_METHOD(Qt_Gui_QRawFont_QRawFont, isValid);
PHP_METHOD(Qt_Gui_QRawFont_QRawFont, familyName);
PHP_METHOD(Qt_Gui_QRawFont_QRawFont, styleName);
PHP_METHOD(Qt_Gui_QRawFont_QRawFont, style);
PHP_METHOD(Qt_Gui_QRawFont_QRawFont, weight);
PHP_METHOD(Qt_Gui_QRawFont_QRawFont, glyphIndexesForString);
PHP_METHOD(Qt_Gui_QRawFont_QRawFont, advancesForGlyphIndexes);
PHP_METHOD(Qt_Gui_QRawFont_QRawFont, advancesForGlyphIndexesQListUnsignedIntQRawFontLayoutFlags);
PHP_METHOD(Qt_Gui_QRawFont_QRawFont, glyphIndexesForChars);
PHP_METHOD(Qt_Gui_QRawFont_QRawFont, advancesForGlyphIndexesQuint32QPointFInt);
PHP_METHOD(Qt_Gui_QRawFont_QRawFont, advancesForGlyphIndexesQuint32QPointFIntQRawFontLayoutFlags);
PHP_METHOD(Qt_Gui_QRawFont_QRawFont, alphaMapForGlyph);
PHP_METHOD(Qt_Gui_QRawFont_QRawFont, pathForGlyph);
PHP_METHOD(Qt_Gui_QRawFont_QRawFont, boundingRect);
PHP_METHOD(Qt_Gui_QRawFont_QRawFont, setPixelSize);
PHP_METHOD(Qt_Gui_QRawFont_QRawFont, pixelSize);
PHP_METHOD(Qt_Gui_QRawFont_QRawFont, hintingPreference);
PHP_METHOD(Qt_Gui_QRawFont_QRawFont, ascent);
PHP_METHOD(Qt_Gui_QRawFont_QRawFont, capHeight);
PHP_METHOD(Qt_Gui_QRawFont_QRawFont, descent);
PHP_METHOD(Qt_Gui_QRawFont_QRawFont, leading);
PHP_METHOD(Qt_Gui_QRawFont_QRawFont, xHeight);
PHP_METHOD(Qt_Gui_QRawFont_QRawFont, averageCharWidth);
PHP_METHOD(Qt_Gui_QRawFont_QRawFont, maxCharWidth);
PHP_METHOD(Qt_Gui_QRawFont_QRawFont, lineThickness);
PHP_METHOD(Qt_Gui_QRawFont_QRawFont, underlinePosition);
PHP_METHOD(Qt_Gui_QRawFont_QRawFont, unitsPerEm);
PHP_METHOD(Qt_Gui_QRawFont_QRawFont, loadFromFile);
PHP_METHOD(Qt_Gui_QRawFont_QRawFont, loadFromData);
PHP_METHOD(Qt_Gui_QRawFont_QRawFont, supportsCharacter);
PHP_METHOD(Qt_Gui_QRawFont_QRawFont, supportsCharacterQChar);
PHP_METHOD(Qt_Gui_QRawFont_QRawFont, supportedWritingSystems);
PHP_METHOD(Qt_Gui_QRawFont_QRawFont, fontTable);
PHP_METHOD(Qt_Gui_QRawFont_QRawFont, fontTableQFontTag);
PHP_METHOD(Qt_Gui_QRawFont_QRawFont, fromFont);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qrawfont_qrawfont_new_, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qrawfont_qrawfont_newqstringqrealqfonthintingpreference, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, fileName, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, pixelSize, IS_DOUBLE, 0)
	ZEND_ARG_INFO(0, hintingPreference)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qrawfont_qrawfont_newqbytearrayqrealqfonthintingpreference, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, fontData, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, pixelSize, IS_DOUBLE, 0)
	ZEND_ARG_INFO(0, hintingPreference)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qrawfont_qrawfont_newqrawfont, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, other, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qrawfont_qrawfont_swap, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, other, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qrawfont_qrawfont_isvalid, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qrawfont_qrawfont_familyname, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qrawfont_qrawfont_stylename, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qrawfont_qrawfont_style, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qrawfont_qrawfont_weight, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qrawfont_qrawfont_glyphindexesforstring, 0, 2, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, text, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qrawfont_qrawfont_advancesforglyphindexes, 0, 2, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_ARRAY_INFO(0, glyphIndexes, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qrawfont_qrawfont_advancesforglyphindexesqlistunsignedintqrawfontlayoutflags, 0, 3, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_ARRAY_INFO(0, glyphIndexes, 0)
	ZEND_ARG_TYPE_INFO(0, layoutFlags, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qrawfont_qrawfont_glyphindexesforchars, 0, 5, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_INFO(0, chars)
	ZEND_ARG_TYPE_INFO(0, numChars, IS_LONG, 0)
	ZEND_ARG_INFO(0, glyphIndexes)
	ZEND_ARG_INFO(0, numGlyphs)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qrawfont_qrawfont_advancesforglyphindexesquint32qpointfint, 0, 4, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_INFO(0, glyphIndexes)
	ZEND_ARG_INFO(0, advances)
	ZEND_ARG_TYPE_INFO(0, numGlyphs, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qrawfont_qrawfont_advancesforglyphindexesquint32qpointfintqrawfontlayoutflags, 0, 5, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_INFO(0, glyphIndexes)
	ZEND_ARG_INFO(0, advances)
	ZEND_ARG_TYPE_INFO(0, numGlyphs, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, layoutFlags, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qrawfont_qrawfont_alphamapforglyph, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, glyphIndex, IS_LONG, 0)
	ZEND_ARG_INFO(0, antialiasingType)
	ZEND_ARG_INFO(0, transform)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qrawfont_qrawfont_pathforglyph, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, glyphIndex, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qrawfont_qrawfont_boundingrect, 0, 2, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, glyphIndex, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qrawfont_qrawfont_setpixelsize, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, pixelSize, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qrawfont_qrawfont_pixelsize, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qrawfont_qrawfont_hintingpreference, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qrawfont_qrawfont_ascent, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qrawfont_qrawfont_capheight, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qrawfont_qrawfont_descent, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qrawfont_qrawfont_leading, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qrawfont_qrawfont_xheight, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qrawfont_qrawfont_averagecharwidth, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qrawfont_qrawfont_maxcharwidth, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qrawfont_qrawfont_linethickness, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qrawfont_qrawfont_underlineposition, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qrawfont_qrawfont_unitsperem, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qrawfont_qrawfont_loadfromfile, 0, 4, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, fileName, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, pixelSize, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, hintingPreference, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qrawfont_qrawfont_loadfromdata, 0, 4, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, fontData, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, pixelSize, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, hintingPreference, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qrawfont_qrawfont_supportscharacter, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, ucs4, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qrawfont_qrawfont_supportscharacterqchar, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, character, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qrawfont_qrawfont_supportedwritingsystems, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qrawfont_qrawfont_fonttable, 0, 2, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_INFO(0, tagName)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qrawfont_qrawfont_fonttableqfonttag, 0, 2, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, tag, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qrawfont_qrawfont_fromfont, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, font, IS_LONG, 0)
	ZEND_ARG_INFO(0, writingSystem)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_gui_qrawfont_qrawfont_method_entry) {
	PHP_ME(Qt_Gui_QRawFont_QRawFont, new_, arginfo_qt_gui_qrawfont_qrawfont_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QRawFont_QRawFont, newQStringQrealQFontHintingPreference, arginfo_qt_gui_qrawfont_qrawfont_newqstringqrealqfonthintingpreference, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QRawFont_QRawFont, newQByteArrayQrealQFontHintingPreference, arginfo_qt_gui_qrawfont_qrawfont_newqbytearrayqrealqfonthintingpreference, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QRawFont_QRawFont, newQRawFont, arginfo_qt_gui_qrawfont_qrawfont_newqrawfont, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QRawFont_QRawFont, swap, arginfo_qt_gui_qrawfont_qrawfont_swap, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QRawFont_QRawFont, isValid, arginfo_qt_gui_qrawfont_qrawfont_isvalid, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QRawFont_QRawFont, familyName, arginfo_qt_gui_qrawfont_qrawfont_familyname, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QRawFont_QRawFont, styleName, arginfo_qt_gui_qrawfont_qrawfont_stylename, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QRawFont_QRawFont, style, arginfo_qt_gui_qrawfont_qrawfont_style, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QRawFont_QRawFont, weight, arginfo_qt_gui_qrawfont_qrawfont_weight, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QRawFont_QRawFont, glyphIndexesForString, arginfo_qt_gui_qrawfont_qrawfont_glyphindexesforstring, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QRawFont_QRawFont, advancesForGlyphIndexes, arginfo_qt_gui_qrawfont_qrawfont_advancesforglyphindexes, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QRawFont_QRawFont, advancesForGlyphIndexesQListUnsignedIntQRawFontLayoutFlags, arginfo_qt_gui_qrawfont_qrawfont_advancesforglyphindexesqlistunsignedintqrawfontlayoutflags, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QRawFont_QRawFont, glyphIndexesForChars, arginfo_qt_gui_qrawfont_qrawfont_glyphindexesforchars, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QRawFont_QRawFont, advancesForGlyphIndexesQuint32QPointFInt, arginfo_qt_gui_qrawfont_qrawfont_advancesforglyphindexesquint32qpointfint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QRawFont_QRawFont, advancesForGlyphIndexesQuint32QPointFIntQRawFontLayoutFlags, arginfo_qt_gui_qrawfont_qrawfont_advancesforglyphindexesquint32qpointfintqrawfontlayoutflags, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QRawFont_QRawFont, alphaMapForGlyph, arginfo_qt_gui_qrawfont_qrawfont_alphamapforglyph, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QRawFont_QRawFont, pathForGlyph, arginfo_qt_gui_qrawfont_qrawfont_pathforglyph, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QRawFont_QRawFont, boundingRect, arginfo_qt_gui_qrawfont_qrawfont_boundingrect, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QRawFont_QRawFont, setPixelSize, arginfo_qt_gui_qrawfont_qrawfont_setpixelsize, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QRawFont_QRawFont, pixelSize, arginfo_qt_gui_qrawfont_qrawfont_pixelsize, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QRawFont_QRawFont, hintingPreference, arginfo_qt_gui_qrawfont_qrawfont_hintingpreference, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QRawFont_QRawFont, ascent, arginfo_qt_gui_qrawfont_qrawfont_ascent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QRawFont_QRawFont, capHeight, arginfo_qt_gui_qrawfont_qrawfont_capheight, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QRawFont_QRawFont, descent, arginfo_qt_gui_qrawfont_qrawfont_descent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QRawFont_QRawFont, leading, arginfo_qt_gui_qrawfont_qrawfont_leading, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QRawFont_QRawFont, xHeight, arginfo_qt_gui_qrawfont_qrawfont_xheight, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QRawFont_QRawFont, averageCharWidth, arginfo_qt_gui_qrawfont_qrawfont_averagecharwidth, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QRawFont_QRawFont, maxCharWidth, arginfo_qt_gui_qrawfont_qrawfont_maxcharwidth, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QRawFont_QRawFont, lineThickness, arginfo_qt_gui_qrawfont_qrawfont_linethickness, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QRawFont_QRawFont, underlinePosition, arginfo_qt_gui_qrawfont_qrawfont_underlineposition, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QRawFont_QRawFont, unitsPerEm, arginfo_qt_gui_qrawfont_qrawfont_unitsperem, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QRawFont_QRawFont, loadFromFile, arginfo_qt_gui_qrawfont_qrawfont_loadfromfile, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QRawFont_QRawFont, loadFromData, arginfo_qt_gui_qrawfont_qrawfont_loadfromdata, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QRawFont_QRawFont, supportsCharacter, arginfo_qt_gui_qrawfont_qrawfont_supportscharacter, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QRawFont_QRawFont, supportsCharacterQChar, arginfo_qt_gui_qrawfont_qrawfont_supportscharacterqchar, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QRawFont_QRawFont, supportedWritingSystems, arginfo_qt_gui_qrawfont_qrawfont_supportedwritingsystems, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QRawFont_QRawFont, fontTable, arginfo_qt_gui_qrawfont_qrawfont_fonttable, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QRawFont_QRawFont, fontTableQFontTag, arginfo_qt_gui_qrawfont_qrawfont_fonttableqfonttag, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QRawFont_QRawFont, fromFont, arginfo_qt_gui_qrawfont_qrawfont_fromfont, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
