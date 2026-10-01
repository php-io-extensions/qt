
extern zend_class_entry *qt_gui_qtextcharformat_qtextcharformat_ce;

ZEPHIR_INIT_CLASS(Qt_Gui_QTextCharFormat_QTextCharFormat);

PHP_METHOD(Qt_Gui_QTextCharFormat_QTextCharFormat, new_);
PHP_METHOD(Qt_Gui_QTextCharFormat_QTextCharFormat, isValid);
PHP_METHOD(Qt_Gui_QTextCharFormat_QTextCharFormat, setFont);
PHP_METHOD(Qt_Gui_QTextCharFormat_QTextCharFormat, font);
PHP_METHOD(Qt_Gui_QTextCharFormat_QTextCharFormat, setFontFamilies);
PHP_METHOD(Qt_Gui_QTextCharFormat_QTextCharFormat, fontFamilies);
PHP_METHOD(Qt_Gui_QTextCharFormat_QTextCharFormat, setFontStyleName);
PHP_METHOD(Qt_Gui_QTextCharFormat_QTextCharFormat, fontStyleName);
PHP_METHOD(Qt_Gui_QTextCharFormat_QTextCharFormat, setFontPointSize);
PHP_METHOD(Qt_Gui_QTextCharFormat_QTextCharFormat, fontPointSize);
PHP_METHOD(Qt_Gui_QTextCharFormat_QTextCharFormat, setFontWeight);
PHP_METHOD(Qt_Gui_QTextCharFormat_QTextCharFormat, fontWeight);
PHP_METHOD(Qt_Gui_QTextCharFormat_QTextCharFormat, setFontItalic);
PHP_METHOD(Qt_Gui_QTextCharFormat_QTextCharFormat, fontItalic);
PHP_METHOD(Qt_Gui_QTextCharFormat_QTextCharFormat, setFontCapitalization);
PHP_METHOD(Qt_Gui_QTextCharFormat_QTextCharFormat, fontCapitalization);
PHP_METHOD(Qt_Gui_QTextCharFormat_QTextCharFormat, setFontLetterSpacingType);
PHP_METHOD(Qt_Gui_QTextCharFormat_QTextCharFormat, fontLetterSpacingType);
PHP_METHOD(Qt_Gui_QTextCharFormat_QTextCharFormat, setFontLetterSpacing);
PHP_METHOD(Qt_Gui_QTextCharFormat_QTextCharFormat, fontLetterSpacing);
PHP_METHOD(Qt_Gui_QTextCharFormat_QTextCharFormat, setFontWordSpacing);
PHP_METHOD(Qt_Gui_QTextCharFormat_QTextCharFormat, fontWordSpacing);
PHP_METHOD(Qt_Gui_QTextCharFormat_QTextCharFormat, setFontUnderline);
PHP_METHOD(Qt_Gui_QTextCharFormat_QTextCharFormat, fontUnderline);
PHP_METHOD(Qt_Gui_QTextCharFormat_QTextCharFormat, setFontOverline);
PHP_METHOD(Qt_Gui_QTextCharFormat_QTextCharFormat, fontOverline);
PHP_METHOD(Qt_Gui_QTextCharFormat_QTextCharFormat, setFontStrikeOut);
PHP_METHOD(Qt_Gui_QTextCharFormat_QTextCharFormat, fontStrikeOut);
PHP_METHOD(Qt_Gui_QTextCharFormat_QTextCharFormat, setUnderlineColor);
PHP_METHOD(Qt_Gui_QTextCharFormat_QTextCharFormat, underlineColor);
PHP_METHOD(Qt_Gui_QTextCharFormat_QTextCharFormat, setFontFixedPitch);
PHP_METHOD(Qt_Gui_QTextCharFormat_QTextCharFormat, fontFixedPitch);
PHP_METHOD(Qt_Gui_QTextCharFormat_QTextCharFormat, setFontStretch);
PHP_METHOD(Qt_Gui_QTextCharFormat_QTextCharFormat, fontStretch);
PHP_METHOD(Qt_Gui_QTextCharFormat_QTextCharFormat, setFontStyleHint);
PHP_METHOD(Qt_Gui_QTextCharFormat_QTextCharFormat, setFontStyleStrategy);
PHP_METHOD(Qt_Gui_QTextCharFormat_QTextCharFormat, fontStyleHint);
PHP_METHOD(Qt_Gui_QTextCharFormat_QTextCharFormat, fontStyleStrategy);
PHP_METHOD(Qt_Gui_QTextCharFormat_QTextCharFormat, setFontHintingPreference);
PHP_METHOD(Qt_Gui_QTextCharFormat_QTextCharFormat, fontHintingPreference);
PHP_METHOD(Qt_Gui_QTextCharFormat_QTextCharFormat, setFontKerning);
PHP_METHOD(Qt_Gui_QTextCharFormat_QTextCharFormat, fontKerning);
PHP_METHOD(Qt_Gui_QTextCharFormat_QTextCharFormat, setUnderlineStyle);
PHP_METHOD(Qt_Gui_QTextCharFormat_QTextCharFormat, underlineStyle);
PHP_METHOD(Qt_Gui_QTextCharFormat_QTextCharFormat, setVerticalAlignment);
PHP_METHOD(Qt_Gui_QTextCharFormat_QTextCharFormat, verticalAlignment);
PHP_METHOD(Qt_Gui_QTextCharFormat_QTextCharFormat, setTextOutline);
PHP_METHOD(Qt_Gui_QTextCharFormat_QTextCharFormat, textOutline);
PHP_METHOD(Qt_Gui_QTextCharFormat_QTextCharFormat, setToolTip);
PHP_METHOD(Qt_Gui_QTextCharFormat_QTextCharFormat, toolTip);
PHP_METHOD(Qt_Gui_QTextCharFormat_QTextCharFormat, setSuperScriptBaseline);
PHP_METHOD(Qt_Gui_QTextCharFormat_QTextCharFormat, superScriptBaseline);
PHP_METHOD(Qt_Gui_QTextCharFormat_QTextCharFormat, setSubScriptBaseline);
PHP_METHOD(Qt_Gui_QTextCharFormat_QTextCharFormat, subScriptBaseline);
PHP_METHOD(Qt_Gui_QTextCharFormat_QTextCharFormat, setBaselineOffset);
PHP_METHOD(Qt_Gui_QTextCharFormat_QTextCharFormat, baselineOffset);
PHP_METHOD(Qt_Gui_QTextCharFormat_QTextCharFormat, setAnchor);
PHP_METHOD(Qt_Gui_QTextCharFormat_QTextCharFormat, isAnchor);
PHP_METHOD(Qt_Gui_QTextCharFormat_QTextCharFormat, setAnchorHref);
PHP_METHOD(Qt_Gui_QTextCharFormat_QTextCharFormat, anchorHref);
PHP_METHOD(Qt_Gui_QTextCharFormat_QTextCharFormat, setAnchorNames);
PHP_METHOD(Qt_Gui_QTextCharFormat_QTextCharFormat, anchorNames);
PHP_METHOD(Qt_Gui_QTextCharFormat_QTextCharFormat, setTableCellRowSpan);
PHP_METHOD(Qt_Gui_QTextCharFormat_QTextCharFormat, tableCellRowSpan);
PHP_METHOD(Qt_Gui_QTextCharFormat_QTextCharFormat, setTableCellColumnSpan);
PHP_METHOD(Qt_Gui_QTextCharFormat_QTextCharFormat, tableCellColumnSpan);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextcharformat_qtextcharformat_new_, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextcharformat_qtextcharformat_isvalid, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextcharformat_qtextcharformat_setfont, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, font, IS_LONG, 0)
	ZEND_ARG_INFO(0, behavior)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextcharformat_qtextcharformat_font, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextcharformat_qtextcharformat_setfontfamilies, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_ARRAY_INFO(0, families, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_qt_gui_qtextcharformat_qtextcharformat_fontfamilies, 0, 0, 1)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextcharformat_qtextcharformat_setfontstylename, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, styleName, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_qt_gui_qtextcharformat_qtextcharformat_fontstylename, 0, 0, 1)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextcharformat_qtextcharformat_setfontpointsize, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, size, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextcharformat_qtextcharformat_fontpointsize, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextcharformat_qtextcharformat_setfontweight, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, weight, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextcharformat_qtextcharformat_fontweight, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextcharformat_qtextcharformat_setfontitalic, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, italic, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextcharformat_qtextcharformat_fontitalic, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextcharformat_qtextcharformat_setfontcapitalization, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, capitalization, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextcharformat_qtextcharformat_fontcapitalization, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextcharformat_qtextcharformat_setfontletterspacingtype, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, letterSpacingType, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextcharformat_qtextcharformat_fontletterspacingtype, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextcharformat_qtextcharformat_setfontletterspacing, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, spacing, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextcharformat_qtextcharformat_fontletterspacing, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextcharformat_qtextcharformat_setfontwordspacing, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, spacing, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextcharformat_qtextcharformat_fontwordspacing, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextcharformat_qtextcharformat_setfontunderline, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, underline, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextcharformat_qtextcharformat_fontunderline, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextcharformat_qtextcharformat_setfontoverline, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, overline, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextcharformat_qtextcharformat_fontoverline, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextcharformat_qtextcharformat_setfontstrikeout, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, strikeOut, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextcharformat_qtextcharformat_fontstrikeout, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextcharformat_qtextcharformat_setunderlinecolor, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, color, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextcharformat_qtextcharformat_underlinecolor, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextcharformat_qtextcharformat_setfontfixedpitch, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, fixedPitch, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextcharformat_qtextcharformat_fontfixedpitch, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextcharformat_qtextcharformat_setfontstretch, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, factor, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextcharformat_qtextcharformat_fontstretch, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextcharformat_qtextcharformat_setfontstylehint, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, hint, IS_LONG, 0)
	ZEND_ARG_INFO(0, strategy)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextcharformat_qtextcharformat_setfontstylestrategy, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, strategy, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextcharformat_qtextcharformat_fontstylehint, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextcharformat_qtextcharformat_fontstylestrategy, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextcharformat_qtextcharformat_setfonthintingpreference, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, hintingPreference, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextcharformat_qtextcharformat_fonthintingpreference, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextcharformat_qtextcharformat_setfontkerning, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, enable, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextcharformat_qtextcharformat_fontkerning, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextcharformat_qtextcharformat_setunderlinestyle, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, style, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextcharformat_qtextcharformat_underlinestyle, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextcharformat_qtextcharformat_setverticalalignment, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, alignment, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextcharformat_qtextcharformat_verticalalignment, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextcharformat_qtextcharformat_settextoutline, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, pen, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextcharformat_qtextcharformat_textoutline, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextcharformat_qtextcharformat_settooltip, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, tip, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextcharformat_qtextcharformat_tooltip, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextcharformat_qtextcharformat_setsuperscriptbaseline, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, baseline, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextcharformat_qtextcharformat_superscriptbaseline, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextcharformat_qtextcharformat_setsubscriptbaseline, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, baseline, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextcharformat_qtextcharformat_subscriptbaseline, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextcharformat_qtextcharformat_setbaselineoffset, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, baseline, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextcharformat_qtextcharformat_baselineoffset, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextcharformat_qtextcharformat_setanchor, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, anchor, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextcharformat_qtextcharformat_isanchor, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextcharformat_qtextcharformat_setanchorhref, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextcharformat_qtextcharformat_anchorhref, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextcharformat_qtextcharformat_setanchornames, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_ARRAY_INFO(0, names, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextcharformat_qtextcharformat_anchornames, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextcharformat_qtextcharformat_settablecellrowspan, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, tableCellRowSpan, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextcharformat_qtextcharformat_tablecellrowspan, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextcharformat_qtextcharformat_settablecellcolumnspan, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, tableCellColumnSpan, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextcharformat_qtextcharformat_tablecellcolumnspan, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_gui_qtextcharformat_qtextcharformat_method_entry) {
	PHP_ME(Qt_Gui_QTextCharFormat_QTextCharFormat, new_, arginfo_qt_gui_qtextcharformat_qtextcharformat_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextCharFormat_QTextCharFormat, isValid, arginfo_qt_gui_qtextcharformat_qtextcharformat_isvalid, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextCharFormat_QTextCharFormat, setFont, arginfo_qt_gui_qtextcharformat_qtextcharformat_setfont, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextCharFormat_QTextCharFormat, font, arginfo_qt_gui_qtextcharformat_qtextcharformat_font, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextCharFormat_QTextCharFormat, setFontFamilies, arginfo_qt_gui_qtextcharformat_qtextcharformat_setfontfamilies, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextCharFormat_QTextCharFormat, fontFamilies, arginfo_qt_gui_qtextcharformat_qtextcharformat_fontfamilies, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextCharFormat_QTextCharFormat, setFontStyleName, arginfo_qt_gui_qtextcharformat_qtextcharformat_setfontstylename, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextCharFormat_QTextCharFormat, fontStyleName, arginfo_qt_gui_qtextcharformat_qtextcharformat_fontstylename, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextCharFormat_QTextCharFormat, setFontPointSize, arginfo_qt_gui_qtextcharformat_qtextcharformat_setfontpointsize, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextCharFormat_QTextCharFormat, fontPointSize, arginfo_qt_gui_qtextcharformat_qtextcharformat_fontpointsize, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextCharFormat_QTextCharFormat, setFontWeight, arginfo_qt_gui_qtextcharformat_qtextcharformat_setfontweight, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextCharFormat_QTextCharFormat, fontWeight, arginfo_qt_gui_qtextcharformat_qtextcharformat_fontweight, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextCharFormat_QTextCharFormat, setFontItalic, arginfo_qt_gui_qtextcharformat_qtextcharformat_setfontitalic, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextCharFormat_QTextCharFormat, fontItalic, arginfo_qt_gui_qtextcharformat_qtextcharformat_fontitalic, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextCharFormat_QTextCharFormat, setFontCapitalization, arginfo_qt_gui_qtextcharformat_qtextcharformat_setfontcapitalization, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextCharFormat_QTextCharFormat, fontCapitalization, arginfo_qt_gui_qtextcharformat_qtextcharformat_fontcapitalization, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextCharFormat_QTextCharFormat, setFontLetterSpacingType, arginfo_qt_gui_qtextcharformat_qtextcharformat_setfontletterspacingtype, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextCharFormat_QTextCharFormat, fontLetterSpacingType, arginfo_qt_gui_qtextcharformat_qtextcharformat_fontletterspacingtype, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextCharFormat_QTextCharFormat, setFontLetterSpacing, arginfo_qt_gui_qtextcharformat_qtextcharformat_setfontletterspacing, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextCharFormat_QTextCharFormat, fontLetterSpacing, arginfo_qt_gui_qtextcharformat_qtextcharformat_fontletterspacing, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextCharFormat_QTextCharFormat, setFontWordSpacing, arginfo_qt_gui_qtextcharformat_qtextcharformat_setfontwordspacing, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextCharFormat_QTextCharFormat, fontWordSpacing, arginfo_qt_gui_qtextcharformat_qtextcharformat_fontwordspacing, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextCharFormat_QTextCharFormat, setFontUnderline, arginfo_qt_gui_qtextcharformat_qtextcharformat_setfontunderline, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextCharFormat_QTextCharFormat, fontUnderline, arginfo_qt_gui_qtextcharformat_qtextcharformat_fontunderline, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextCharFormat_QTextCharFormat, setFontOverline, arginfo_qt_gui_qtextcharformat_qtextcharformat_setfontoverline, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextCharFormat_QTextCharFormat, fontOverline, arginfo_qt_gui_qtextcharformat_qtextcharformat_fontoverline, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextCharFormat_QTextCharFormat, setFontStrikeOut, arginfo_qt_gui_qtextcharformat_qtextcharformat_setfontstrikeout, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextCharFormat_QTextCharFormat, fontStrikeOut, arginfo_qt_gui_qtextcharformat_qtextcharformat_fontstrikeout, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextCharFormat_QTextCharFormat, setUnderlineColor, arginfo_qt_gui_qtextcharformat_qtextcharformat_setunderlinecolor, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextCharFormat_QTextCharFormat, underlineColor, arginfo_qt_gui_qtextcharformat_qtextcharformat_underlinecolor, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextCharFormat_QTextCharFormat, setFontFixedPitch, arginfo_qt_gui_qtextcharformat_qtextcharformat_setfontfixedpitch, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextCharFormat_QTextCharFormat, fontFixedPitch, arginfo_qt_gui_qtextcharformat_qtextcharformat_fontfixedpitch, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextCharFormat_QTextCharFormat, setFontStretch, arginfo_qt_gui_qtextcharformat_qtextcharformat_setfontstretch, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextCharFormat_QTextCharFormat, fontStretch, arginfo_qt_gui_qtextcharformat_qtextcharformat_fontstretch, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextCharFormat_QTextCharFormat, setFontStyleHint, arginfo_qt_gui_qtextcharformat_qtextcharformat_setfontstylehint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextCharFormat_QTextCharFormat, setFontStyleStrategy, arginfo_qt_gui_qtextcharformat_qtextcharformat_setfontstylestrategy, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextCharFormat_QTextCharFormat, fontStyleHint, arginfo_qt_gui_qtextcharformat_qtextcharformat_fontstylehint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextCharFormat_QTextCharFormat, fontStyleStrategy, arginfo_qt_gui_qtextcharformat_qtextcharformat_fontstylestrategy, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextCharFormat_QTextCharFormat, setFontHintingPreference, arginfo_qt_gui_qtextcharformat_qtextcharformat_setfonthintingpreference, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextCharFormat_QTextCharFormat, fontHintingPreference, arginfo_qt_gui_qtextcharformat_qtextcharformat_fonthintingpreference, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextCharFormat_QTextCharFormat, setFontKerning, arginfo_qt_gui_qtextcharformat_qtextcharformat_setfontkerning, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextCharFormat_QTextCharFormat, fontKerning, arginfo_qt_gui_qtextcharformat_qtextcharformat_fontkerning, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextCharFormat_QTextCharFormat, setUnderlineStyle, arginfo_qt_gui_qtextcharformat_qtextcharformat_setunderlinestyle, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextCharFormat_QTextCharFormat, underlineStyle, arginfo_qt_gui_qtextcharformat_qtextcharformat_underlinestyle, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextCharFormat_QTextCharFormat, setVerticalAlignment, arginfo_qt_gui_qtextcharformat_qtextcharformat_setverticalalignment, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextCharFormat_QTextCharFormat, verticalAlignment, arginfo_qt_gui_qtextcharformat_qtextcharformat_verticalalignment, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextCharFormat_QTextCharFormat, setTextOutline, arginfo_qt_gui_qtextcharformat_qtextcharformat_settextoutline, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextCharFormat_QTextCharFormat, textOutline, arginfo_qt_gui_qtextcharformat_qtextcharformat_textoutline, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextCharFormat_QTextCharFormat, setToolTip, arginfo_qt_gui_qtextcharformat_qtextcharformat_settooltip, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextCharFormat_QTextCharFormat, toolTip, arginfo_qt_gui_qtextcharformat_qtextcharformat_tooltip, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextCharFormat_QTextCharFormat, setSuperScriptBaseline, arginfo_qt_gui_qtextcharformat_qtextcharformat_setsuperscriptbaseline, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextCharFormat_QTextCharFormat, superScriptBaseline, arginfo_qt_gui_qtextcharformat_qtextcharformat_superscriptbaseline, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextCharFormat_QTextCharFormat, setSubScriptBaseline, arginfo_qt_gui_qtextcharformat_qtextcharformat_setsubscriptbaseline, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextCharFormat_QTextCharFormat, subScriptBaseline, arginfo_qt_gui_qtextcharformat_qtextcharformat_subscriptbaseline, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextCharFormat_QTextCharFormat, setBaselineOffset, arginfo_qt_gui_qtextcharformat_qtextcharformat_setbaselineoffset, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextCharFormat_QTextCharFormat, baselineOffset, arginfo_qt_gui_qtextcharformat_qtextcharformat_baselineoffset, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextCharFormat_QTextCharFormat, setAnchor, arginfo_qt_gui_qtextcharformat_qtextcharformat_setanchor, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextCharFormat_QTextCharFormat, isAnchor, arginfo_qt_gui_qtextcharformat_qtextcharformat_isanchor, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextCharFormat_QTextCharFormat, setAnchorHref, arginfo_qt_gui_qtextcharformat_qtextcharformat_setanchorhref, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextCharFormat_QTextCharFormat, anchorHref, arginfo_qt_gui_qtextcharformat_qtextcharformat_anchorhref, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextCharFormat_QTextCharFormat, setAnchorNames, arginfo_qt_gui_qtextcharformat_qtextcharformat_setanchornames, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextCharFormat_QTextCharFormat, anchorNames, arginfo_qt_gui_qtextcharformat_qtextcharformat_anchornames, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextCharFormat_QTextCharFormat, setTableCellRowSpan, arginfo_qt_gui_qtextcharformat_qtextcharformat_settablecellrowspan, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextCharFormat_QTextCharFormat, tableCellRowSpan, arginfo_qt_gui_qtextcharformat_qtextcharformat_tablecellrowspan, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextCharFormat_QTextCharFormat, setTableCellColumnSpan, arginfo_qt_gui_qtextcharformat_qtextcharformat_settablecellcolumnspan, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextCharFormat_QTextCharFormat, tableCellColumnSpan, arginfo_qt_gui_qtextcharformat_qtextcharformat_tablecellcolumnspan, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
