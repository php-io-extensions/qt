
extern zend_class_entry *qt_gui_qtextlayout_qtextlayout_ce;

ZEPHIR_INIT_CLASS(Qt_Gui_QTextLayout_QTextLayout);

PHP_METHOD(Qt_Gui_QTextLayout_QTextLayout, new_);
PHP_METHOD(Qt_Gui_QTextLayout_QTextLayout, newQString);
PHP_METHOD(Qt_Gui_QTextLayout_QTextLayout, newQStringQFontQPaintDevice);
PHP_METHOD(Qt_Gui_QTextLayout_QTextLayout, newQTextBlock);
PHP_METHOD(Qt_Gui_QTextLayout_QTextLayout, setFont);
PHP_METHOD(Qt_Gui_QTextLayout_QTextLayout, font);
PHP_METHOD(Qt_Gui_QTextLayout_QTextLayout, setRawFont);
PHP_METHOD(Qt_Gui_QTextLayout_QTextLayout, setText);
PHP_METHOD(Qt_Gui_QTextLayout_QTextLayout, text);
PHP_METHOD(Qt_Gui_QTextLayout_QTextLayout, setTextOption);
PHP_METHOD(Qt_Gui_QTextLayout_QTextLayout, textOption);
PHP_METHOD(Qt_Gui_QTextLayout_QTextLayout, setPreeditArea);
PHP_METHOD(Qt_Gui_QTextLayout_QTextLayout, preeditAreaPosition);
PHP_METHOD(Qt_Gui_QTextLayout_QTextLayout, preeditAreaText);
PHP_METHOD(Qt_Gui_QTextLayout_QTextLayout, setFormats);
PHP_METHOD(Qt_Gui_QTextLayout_QTextLayout, formats);
PHP_METHOD(Qt_Gui_QTextLayout_QTextLayout, clearFormats);
PHP_METHOD(Qt_Gui_QTextLayout_QTextLayout, setCacheEnabled);
PHP_METHOD(Qt_Gui_QTextLayout_QTextLayout, cacheEnabled);
PHP_METHOD(Qt_Gui_QTextLayout_QTextLayout, setCursorMoveStyle);
PHP_METHOD(Qt_Gui_QTextLayout_QTextLayout, cursorMoveStyle);
PHP_METHOD(Qt_Gui_QTextLayout_QTextLayout, beginLayout);
PHP_METHOD(Qt_Gui_QTextLayout_QTextLayout, endLayout);
PHP_METHOD(Qt_Gui_QTextLayout_QTextLayout, clearLayout);
PHP_METHOD(Qt_Gui_QTextLayout_QTextLayout, createLine);
PHP_METHOD(Qt_Gui_QTextLayout_QTextLayout, lineCount);
PHP_METHOD(Qt_Gui_QTextLayout_QTextLayout, lineAt);
PHP_METHOD(Qt_Gui_QTextLayout_QTextLayout, lineForTextPosition);
PHP_METHOD(Qt_Gui_QTextLayout_QTextLayout, isValidCursorPosition);
PHP_METHOD(Qt_Gui_QTextLayout_QTextLayout, nextCursorPosition);
PHP_METHOD(Qt_Gui_QTextLayout_QTextLayout, previousCursorPosition);
PHP_METHOD(Qt_Gui_QTextLayout_QTextLayout, leftCursorPosition);
PHP_METHOD(Qt_Gui_QTextLayout_QTextLayout, rightCursorPosition);
PHP_METHOD(Qt_Gui_QTextLayout_QTextLayout, draw);
PHP_METHOD(Qt_Gui_QTextLayout_QTextLayout, drawCursor);
PHP_METHOD(Qt_Gui_QTextLayout_QTextLayout, drawCursorQPainterQPointFIntInt);
PHP_METHOD(Qt_Gui_QTextLayout_QTextLayout, position);
PHP_METHOD(Qt_Gui_QTextLayout_QTextLayout, setPosition);
PHP_METHOD(Qt_Gui_QTextLayout_QTextLayout, boundingRect);
PHP_METHOD(Qt_Gui_QTextLayout_QTextLayout, minimumWidth);
PHP_METHOD(Qt_Gui_QTextLayout_QTextLayout, maximumWidth);
PHP_METHOD(Qt_Gui_QTextLayout_QTextLayout, glyphRuns);
PHP_METHOD(Qt_Gui_QTextLayout_QTextLayout, glyphRunsIntInt);
PHP_METHOD(Qt_Gui_QTextLayout_QTextLayout, setFlags);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextlayout_qtextlayout_new_, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextlayout_qtextlayout_newqstring, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, text, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextlayout_qtextlayout_newqstringqfontqpaintdevice, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, text, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, font, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, paintdevice, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextlayout_qtextlayout_newqtextblock, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, b, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextlayout_qtextlayout_setfont, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, f, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextlayout_qtextlayout_font, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextlayout_qtextlayout_setrawfont, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rawFont, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextlayout_qtextlayout_settext, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, string_, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextlayout_qtextlayout_text, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextlayout_qtextlayout_settextoption, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, option, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextlayout_qtextlayout_textoption, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextlayout_qtextlayout_setpreeditarea, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, position, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, text, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextlayout_qtextlayout_preeditareaposition, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextlayout_qtextlayout_preeditareatext, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextlayout_qtextlayout_setformats, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_ARRAY_INFO(0, overrides, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextlayout_qtextlayout_formats, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextlayout_qtextlayout_clearformats, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextlayout_qtextlayout_setcacheenabled, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, enable, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextlayout_qtextlayout_cacheenabled, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextlayout_qtextlayout_setcursormovestyle, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, style, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextlayout_qtextlayout_cursormovestyle, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextlayout_qtextlayout_beginlayout, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextlayout_qtextlayout_endlayout, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextlayout_qtextlayout_clearlayout, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextlayout_qtextlayout_createline, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextlayout_qtextlayout_linecount, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextlayout_qtextlayout_lineat, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, i, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextlayout_qtextlayout_linefortextposition, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, pos, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextlayout_qtextlayout_isvalidcursorposition, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, pos, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextlayout_qtextlayout_nextcursorposition, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, oldPos, IS_LONG, 0)
	ZEND_ARG_INFO(0, mode)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextlayout_qtextlayout_previouscursorposition, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, oldPos, IS_LONG, 0)
	ZEND_ARG_INFO(0, mode)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextlayout_qtextlayout_leftcursorposition, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, oldPos, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextlayout_qtextlayout_rightcursorposition, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, oldPos, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextlayout_qtextlayout_draw, 0, 4, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, p, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, posX, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, posY, IS_DOUBLE, 0)
	ZEND_ARG_INFO(0, selections)
	ZEND_ARG_INFO(0, clipX)
	ZEND_ARG_INFO(0, clipY)
	ZEND_ARG_INFO(0, clipWidth)
	ZEND_ARG_INFO(0, clipHeight)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextlayout_qtextlayout_drawcursor, 0, 5, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, p, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, posX, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, posY, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, cursorPosition, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextlayout_qtextlayout_drawcursorqpainterqpointfintint, 0, 6, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, p, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, posX, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, posY, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, cursorPosition, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextlayout_qtextlayout_position, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextlayout_qtextlayout_setposition, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, pX, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, pY, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextlayout_qtextlayout_boundingrect, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextlayout_qtextlayout_minimumwidth, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextlayout_qtextlayout_maximumwidth, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextlayout_qtextlayout_glyphruns, 0, 4, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, from, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, length, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, flags, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextlayout_qtextlayout_glyphrunsintint, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, from, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, length, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextlayout_qtextlayout_setflags, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, flags, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_gui_qtextlayout_qtextlayout_method_entry) {
	PHP_ME(Qt_Gui_QTextLayout_QTextLayout, new_, arginfo_qt_gui_qtextlayout_qtextlayout_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextLayout_QTextLayout, newQString, arginfo_qt_gui_qtextlayout_qtextlayout_newqstring, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextLayout_QTextLayout, newQStringQFontQPaintDevice, arginfo_qt_gui_qtextlayout_qtextlayout_newqstringqfontqpaintdevice, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextLayout_QTextLayout, newQTextBlock, arginfo_qt_gui_qtextlayout_qtextlayout_newqtextblock, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextLayout_QTextLayout, setFont, arginfo_qt_gui_qtextlayout_qtextlayout_setfont, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextLayout_QTextLayout, font, arginfo_qt_gui_qtextlayout_qtextlayout_font, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextLayout_QTextLayout, setRawFont, arginfo_qt_gui_qtextlayout_qtextlayout_setrawfont, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextLayout_QTextLayout, setText, arginfo_qt_gui_qtextlayout_qtextlayout_settext, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextLayout_QTextLayout, text, arginfo_qt_gui_qtextlayout_qtextlayout_text, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextLayout_QTextLayout, setTextOption, arginfo_qt_gui_qtextlayout_qtextlayout_settextoption, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextLayout_QTextLayout, textOption, arginfo_qt_gui_qtextlayout_qtextlayout_textoption, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextLayout_QTextLayout, setPreeditArea, arginfo_qt_gui_qtextlayout_qtextlayout_setpreeditarea, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextLayout_QTextLayout, preeditAreaPosition, arginfo_qt_gui_qtextlayout_qtextlayout_preeditareaposition, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextLayout_QTextLayout, preeditAreaText, arginfo_qt_gui_qtextlayout_qtextlayout_preeditareatext, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextLayout_QTextLayout, setFormats, arginfo_qt_gui_qtextlayout_qtextlayout_setformats, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextLayout_QTextLayout, formats, arginfo_qt_gui_qtextlayout_qtextlayout_formats, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextLayout_QTextLayout, clearFormats, arginfo_qt_gui_qtextlayout_qtextlayout_clearformats, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextLayout_QTextLayout, setCacheEnabled, arginfo_qt_gui_qtextlayout_qtextlayout_setcacheenabled, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextLayout_QTextLayout, cacheEnabled, arginfo_qt_gui_qtextlayout_qtextlayout_cacheenabled, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextLayout_QTextLayout, setCursorMoveStyle, arginfo_qt_gui_qtextlayout_qtextlayout_setcursormovestyle, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextLayout_QTextLayout, cursorMoveStyle, arginfo_qt_gui_qtextlayout_qtextlayout_cursormovestyle, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextLayout_QTextLayout, beginLayout, arginfo_qt_gui_qtextlayout_qtextlayout_beginlayout, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextLayout_QTextLayout, endLayout, arginfo_qt_gui_qtextlayout_qtextlayout_endlayout, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextLayout_QTextLayout, clearLayout, arginfo_qt_gui_qtextlayout_qtextlayout_clearlayout, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextLayout_QTextLayout, createLine, arginfo_qt_gui_qtextlayout_qtextlayout_createline, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextLayout_QTextLayout, lineCount, arginfo_qt_gui_qtextlayout_qtextlayout_linecount, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextLayout_QTextLayout, lineAt, arginfo_qt_gui_qtextlayout_qtextlayout_lineat, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextLayout_QTextLayout, lineForTextPosition, arginfo_qt_gui_qtextlayout_qtextlayout_linefortextposition, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextLayout_QTextLayout, isValidCursorPosition, arginfo_qt_gui_qtextlayout_qtextlayout_isvalidcursorposition, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextLayout_QTextLayout, nextCursorPosition, arginfo_qt_gui_qtextlayout_qtextlayout_nextcursorposition, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextLayout_QTextLayout, previousCursorPosition, arginfo_qt_gui_qtextlayout_qtextlayout_previouscursorposition, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextLayout_QTextLayout, leftCursorPosition, arginfo_qt_gui_qtextlayout_qtextlayout_leftcursorposition, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextLayout_QTextLayout, rightCursorPosition, arginfo_qt_gui_qtextlayout_qtextlayout_rightcursorposition, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextLayout_QTextLayout, draw, arginfo_qt_gui_qtextlayout_qtextlayout_draw, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextLayout_QTextLayout, drawCursor, arginfo_qt_gui_qtextlayout_qtextlayout_drawcursor, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextLayout_QTextLayout, drawCursorQPainterQPointFIntInt, arginfo_qt_gui_qtextlayout_qtextlayout_drawcursorqpainterqpointfintint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextLayout_QTextLayout, position, arginfo_qt_gui_qtextlayout_qtextlayout_position, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextLayout_QTextLayout, setPosition, arginfo_qt_gui_qtextlayout_qtextlayout_setposition, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextLayout_QTextLayout, boundingRect, arginfo_qt_gui_qtextlayout_qtextlayout_boundingrect, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextLayout_QTextLayout, minimumWidth, arginfo_qt_gui_qtextlayout_qtextlayout_minimumwidth, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextLayout_QTextLayout, maximumWidth, arginfo_qt_gui_qtextlayout_qtextlayout_maximumwidth, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextLayout_QTextLayout, glyphRuns, arginfo_qt_gui_qtextlayout_qtextlayout_glyphruns, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextLayout_QTextLayout, glyphRunsIntInt, arginfo_qt_gui_qtextlayout_qtextlayout_glyphrunsintint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextLayout_QTextLayout, setFlags, arginfo_qt_gui_qtextlayout_qtextlayout_setflags, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
