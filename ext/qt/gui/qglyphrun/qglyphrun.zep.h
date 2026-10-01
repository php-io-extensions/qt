
extern zend_class_entry *qt_gui_qglyphrun_qglyphrun_ce;

ZEPHIR_INIT_CLASS(Qt_Gui_QGlyphRun_QGlyphRun);

PHP_METHOD(Qt_Gui_QGlyphRun_QGlyphRun, new_);
PHP_METHOD(Qt_Gui_QGlyphRun_QGlyphRun, newQGlyphRun);
PHP_METHOD(Qt_Gui_QGlyphRun_QGlyphRun, swap);
PHP_METHOD(Qt_Gui_QGlyphRun_QGlyphRun, rawFont);
PHP_METHOD(Qt_Gui_QGlyphRun_QGlyphRun, setRawFont);
PHP_METHOD(Qt_Gui_QGlyphRun_QGlyphRun, setRawData);
PHP_METHOD(Qt_Gui_QGlyphRun_QGlyphRun, glyphIndexes);
PHP_METHOD(Qt_Gui_QGlyphRun_QGlyphRun, setGlyphIndexes);
PHP_METHOD(Qt_Gui_QGlyphRun_QGlyphRun, positions);
PHP_METHOD(Qt_Gui_QGlyphRun_QGlyphRun, setPositions);
PHP_METHOD(Qt_Gui_QGlyphRun_QGlyphRun, clear);
PHP_METHOD(Qt_Gui_QGlyphRun_QGlyphRun, setOverline);
PHP_METHOD(Qt_Gui_QGlyphRun_QGlyphRun, overline);
PHP_METHOD(Qt_Gui_QGlyphRun_QGlyphRun, setUnderline);
PHP_METHOD(Qt_Gui_QGlyphRun_QGlyphRun, underline);
PHP_METHOD(Qt_Gui_QGlyphRun_QGlyphRun, setStrikeOut);
PHP_METHOD(Qt_Gui_QGlyphRun_QGlyphRun, strikeOut);
PHP_METHOD(Qt_Gui_QGlyphRun_QGlyphRun, setRightToLeft);
PHP_METHOD(Qt_Gui_QGlyphRun_QGlyphRun, isRightToLeft);
PHP_METHOD(Qt_Gui_QGlyphRun_QGlyphRun, setFlag);
PHP_METHOD(Qt_Gui_QGlyphRun_QGlyphRun, setFlags);
PHP_METHOD(Qt_Gui_QGlyphRun_QGlyphRun, flags);
PHP_METHOD(Qt_Gui_QGlyphRun_QGlyphRun, setBoundingRect);
PHP_METHOD(Qt_Gui_QGlyphRun_QGlyphRun, boundingRect);
PHP_METHOD(Qt_Gui_QGlyphRun_QGlyphRun, setSourceString);
PHP_METHOD(Qt_Gui_QGlyphRun_QGlyphRun, sourceString);
PHP_METHOD(Qt_Gui_QGlyphRun_QGlyphRun, isEmpty);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qglyphrun_qglyphrun_new_, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qglyphrun_qglyphrun_newqglyphrun, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, other, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qglyphrun_qglyphrun_swap, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, other, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qglyphrun_qglyphrun_rawfont, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qglyphrun_qglyphrun_setrawfont, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rawFont, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qglyphrun_qglyphrun_setrawdata, 0, 4, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_INFO(0, glyphIndexArray)
	ZEND_ARG_INFO(0, glyphPositionArray)
	ZEND_ARG_TYPE_INFO(0, size, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qglyphrun_qglyphrun_glyphindexes, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qglyphrun_qglyphrun_setglyphindexes, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_ARRAY_INFO(0, glyphIndexes, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qglyphrun_qglyphrun_positions, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qglyphrun_qglyphrun_setpositions, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_ARRAY_INFO(0, positions, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qglyphrun_qglyphrun_clear, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qglyphrun_qglyphrun_setoverline, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, overline, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qglyphrun_qglyphrun_overline, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qglyphrun_qglyphrun_setunderline, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, underline, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qglyphrun_qglyphrun_underline, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qglyphrun_qglyphrun_setstrikeout, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, strikeOut, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qglyphrun_qglyphrun_strikeout, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qglyphrun_qglyphrun_setrighttoleft, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, on, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qglyphrun_qglyphrun_isrighttoleft, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qglyphrun_qglyphrun_setflag, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, flag, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, enabled, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qglyphrun_qglyphrun_setflags, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, flags, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qglyphrun_qglyphrun_flags, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qglyphrun_qglyphrun_setboundingrect, 0, 5, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, boundingRectX, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, boundingRectY, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, boundingRectWidth, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, boundingRectHeight, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qglyphrun_qglyphrun_boundingrect, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qglyphrun_qglyphrun_setsourcestring, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sourceString, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qglyphrun_qglyphrun_sourcestring, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qglyphrun_qglyphrun_isempty, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_gui_qglyphrun_qglyphrun_method_entry) {
	PHP_ME(Qt_Gui_QGlyphRun_QGlyphRun, new_, arginfo_qt_gui_qglyphrun_qglyphrun_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QGlyphRun_QGlyphRun, newQGlyphRun, arginfo_qt_gui_qglyphrun_qglyphrun_newqglyphrun, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QGlyphRun_QGlyphRun, swap, arginfo_qt_gui_qglyphrun_qglyphrun_swap, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QGlyphRun_QGlyphRun, rawFont, arginfo_qt_gui_qglyphrun_qglyphrun_rawfont, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QGlyphRun_QGlyphRun, setRawFont, arginfo_qt_gui_qglyphrun_qglyphrun_setrawfont, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QGlyphRun_QGlyphRun, setRawData, arginfo_qt_gui_qglyphrun_qglyphrun_setrawdata, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QGlyphRun_QGlyphRun, glyphIndexes, arginfo_qt_gui_qglyphrun_qglyphrun_glyphindexes, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QGlyphRun_QGlyphRun, setGlyphIndexes, arginfo_qt_gui_qglyphrun_qglyphrun_setglyphindexes, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QGlyphRun_QGlyphRun, positions, arginfo_qt_gui_qglyphrun_qglyphrun_positions, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QGlyphRun_QGlyphRun, setPositions, arginfo_qt_gui_qglyphrun_qglyphrun_setpositions, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QGlyphRun_QGlyphRun, clear, arginfo_qt_gui_qglyphrun_qglyphrun_clear, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QGlyphRun_QGlyphRun, setOverline, arginfo_qt_gui_qglyphrun_qglyphrun_setoverline, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QGlyphRun_QGlyphRun, overline, arginfo_qt_gui_qglyphrun_qglyphrun_overline, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QGlyphRun_QGlyphRun, setUnderline, arginfo_qt_gui_qglyphrun_qglyphrun_setunderline, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QGlyphRun_QGlyphRun, underline, arginfo_qt_gui_qglyphrun_qglyphrun_underline, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QGlyphRun_QGlyphRun, setStrikeOut, arginfo_qt_gui_qglyphrun_qglyphrun_setstrikeout, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QGlyphRun_QGlyphRun, strikeOut, arginfo_qt_gui_qglyphrun_qglyphrun_strikeout, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QGlyphRun_QGlyphRun, setRightToLeft, arginfo_qt_gui_qglyphrun_qglyphrun_setrighttoleft, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QGlyphRun_QGlyphRun, isRightToLeft, arginfo_qt_gui_qglyphrun_qglyphrun_isrighttoleft, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QGlyphRun_QGlyphRun, setFlag, arginfo_qt_gui_qglyphrun_qglyphrun_setflag, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QGlyphRun_QGlyphRun, setFlags, arginfo_qt_gui_qglyphrun_qglyphrun_setflags, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QGlyphRun_QGlyphRun, flags, arginfo_qt_gui_qglyphrun_qglyphrun_flags, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QGlyphRun_QGlyphRun, setBoundingRect, arginfo_qt_gui_qglyphrun_qglyphrun_setboundingrect, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QGlyphRun_QGlyphRun, boundingRect, arginfo_qt_gui_qglyphrun_qglyphrun_boundingrect, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QGlyphRun_QGlyphRun, setSourceString, arginfo_qt_gui_qglyphrun_qglyphrun_setsourcestring, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QGlyphRun_QGlyphRun, sourceString, arginfo_qt_gui_qglyphrun_qglyphrun_sourcestring, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QGlyphRun_QGlyphRun, isEmpty, arginfo_qt_gui_qglyphrun_qglyphrun_isempty, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
