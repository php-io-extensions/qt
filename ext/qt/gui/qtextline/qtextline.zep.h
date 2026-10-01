
extern zend_class_entry *qt_gui_qtextline_qtextline_ce;

ZEPHIR_INIT_CLASS(Qt_Gui_QTextLine_QTextLine);

PHP_METHOD(Qt_Gui_QTextLine_QTextLine, new_);
PHP_METHOD(Qt_Gui_QTextLine_QTextLine, isValid);
PHP_METHOD(Qt_Gui_QTextLine_QTextLine, rect);
PHP_METHOD(Qt_Gui_QTextLine_QTextLine, x);
PHP_METHOD(Qt_Gui_QTextLine_QTextLine, y);
PHP_METHOD(Qt_Gui_QTextLine_QTextLine, width);
PHP_METHOD(Qt_Gui_QTextLine_QTextLine, ascent);
PHP_METHOD(Qt_Gui_QTextLine_QTextLine, descent);
PHP_METHOD(Qt_Gui_QTextLine_QTextLine, height);
PHP_METHOD(Qt_Gui_QTextLine_QTextLine, leading);
PHP_METHOD(Qt_Gui_QTextLine_QTextLine, setLeadingIncluded);
PHP_METHOD(Qt_Gui_QTextLine_QTextLine, leadingIncluded);
PHP_METHOD(Qt_Gui_QTextLine_QTextLine, naturalTextWidth);
PHP_METHOD(Qt_Gui_QTextLine_QTextLine, horizontalAdvance);
PHP_METHOD(Qt_Gui_QTextLine_QTextLine, naturalTextRect);
PHP_METHOD(Qt_Gui_QTextLine_QTextLine, cursorToX);
PHP_METHOD(Qt_Gui_QTextLine_QTextLine, cursorToXIntQTextLineEdge);
PHP_METHOD(Qt_Gui_QTextLine_QTextLine, xToCursor);
PHP_METHOD(Qt_Gui_QTextLine_QTextLine, setLineWidth);
PHP_METHOD(Qt_Gui_QTextLine_QTextLine, setNumColumns);
PHP_METHOD(Qt_Gui_QTextLine_QTextLine, setNumColumnsIntQreal);
PHP_METHOD(Qt_Gui_QTextLine_QTextLine, setPosition);
PHP_METHOD(Qt_Gui_QTextLine_QTextLine, position);
PHP_METHOD(Qt_Gui_QTextLine_QTextLine, textStart);
PHP_METHOD(Qt_Gui_QTextLine_QTextLine, textLength);
PHP_METHOD(Qt_Gui_QTextLine_QTextLine, lineNumber);
PHP_METHOD(Qt_Gui_QTextLine_QTextLine, draw);
PHP_METHOD(Qt_Gui_QTextLine_QTextLine, glyphRuns);
PHP_METHOD(Qt_Gui_QTextLine_QTextLine, glyphRunsIntInt);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextline_qtextline_new_, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextline_qtextline_isvalid, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextline_qtextline_rect, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextline_qtextline_x, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextline_qtextline_y, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextline_qtextline_width, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextline_qtextline_ascent, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextline_qtextline_descent, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextline_qtextline_height, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextline_qtextline_leading, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextline_qtextline_setleadingincluded, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, included, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextline_qtextline_leadingincluded, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextline_qtextline_naturaltextwidth, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextline_qtextline_horizontaladvance, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextline_qtextline_naturaltextrect, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextline_qtextline_cursortox, 0, 2, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_INFO(0, cursorPos)
	ZEND_ARG_INFO(0, edge)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextline_qtextline_cursortoxintqtextlineedge, 0, 2, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, cursorPos, IS_LONG, 0)
	ZEND_ARG_INFO(0, edge)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextline_qtextline_xtocursor, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_DOUBLE, 0)
	ZEND_ARG_INFO(0, arg1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextline_qtextline_setlinewidth, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextline_qtextline_setnumcolumns, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, columns, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextline_qtextline_setnumcolumnsintqreal, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, columns, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, alignmentWidth, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextline_qtextline_setposition, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, posX, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, posY, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextline_qtextline_position, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextline_qtextline_textstart, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextline_qtextline_textlength, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextline_qtextline_linenumber, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextline_qtextline_draw, 0, 4, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, painter, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, positionX, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, positionY, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextline_qtextline_glyphruns, 0, 4, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, from, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, length, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, flags, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextline_qtextline_glyphrunsintint, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, from, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, length, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_gui_qtextline_qtextline_method_entry) {
	PHP_ME(Qt_Gui_QTextLine_QTextLine, new_, arginfo_qt_gui_qtextline_qtextline_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextLine_QTextLine, isValid, arginfo_qt_gui_qtextline_qtextline_isvalid, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextLine_QTextLine, rect, arginfo_qt_gui_qtextline_qtextline_rect, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextLine_QTextLine, x, arginfo_qt_gui_qtextline_qtextline_x, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextLine_QTextLine, y, arginfo_qt_gui_qtextline_qtextline_y, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextLine_QTextLine, width, arginfo_qt_gui_qtextline_qtextline_width, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextLine_QTextLine, ascent, arginfo_qt_gui_qtextline_qtextline_ascent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextLine_QTextLine, descent, arginfo_qt_gui_qtextline_qtextline_descent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextLine_QTextLine, height, arginfo_qt_gui_qtextline_qtextline_height, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextLine_QTextLine, leading, arginfo_qt_gui_qtextline_qtextline_leading, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextLine_QTextLine, setLeadingIncluded, arginfo_qt_gui_qtextline_qtextline_setleadingincluded, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextLine_QTextLine, leadingIncluded, arginfo_qt_gui_qtextline_qtextline_leadingincluded, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextLine_QTextLine, naturalTextWidth, arginfo_qt_gui_qtextline_qtextline_naturaltextwidth, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextLine_QTextLine, horizontalAdvance, arginfo_qt_gui_qtextline_qtextline_horizontaladvance, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextLine_QTextLine, naturalTextRect, arginfo_qt_gui_qtextline_qtextline_naturaltextrect, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextLine_QTextLine, cursorToX, arginfo_qt_gui_qtextline_qtextline_cursortox, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextLine_QTextLine, cursorToXIntQTextLineEdge, arginfo_qt_gui_qtextline_qtextline_cursortoxintqtextlineedge, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextLine_QTextLine, xToCursor, arginfo_qt_gui_qtextline_qtextline_xtocursor, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextLine_QTextLine, setLineWidth, arginfo_qt_gui_qtextline_qtextline_setlinewidth, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextLine_QTextLine, setNumColumns, arginfo_qt_gui_qtextline_qtextline_setnumcolumns, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextLine_QTextLine, setNumColumnsIntQreal, arginfo_qt_gui_qtextline_qtextline_setnumcolumnsintqreal, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextLine_QTextLine, setPosition, arginfo_qt_gui_qtextline_qtextline_setposition, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextLine_QTextLine, position, arginfo_qt_gui_qtextline_qtextline_position, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextLine_QTextLine, textStart, arginfo_qt_gui_qtextline_qtextline_textstart, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextLine_QTextLine, textLength, arginfo_qt_gui_qtextline_qtextline_textlength, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextLine_QTextLine, lineNumber, arginfo_qt_gui_qtextline_qtextline_linenumber, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextLine_QTextLine, draw, arginfo_qt_gui_qtextline_qtextline_draw, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextLine_QTextLine, glyphRuns, arginfo_qt_gui_qtextline_qtextline_glyphruns, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextLine_QTextLine, glyphRunsIntInt, arginfo_qt_gui_qtextline_qtextline_glyphrunsintint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
