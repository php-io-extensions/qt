
extern zend_class_entry *qt_gui_qtextblockformat_qtextblockformat_ce;

ZEPHIR_INIT_CLASS(Qt_Gui_QTextBlockFormat_QTextBlockFormat);

PHP_METHOD(Qt_Gui_QTextBlockFormat_QTextBlockFormat, new_);
PHP_METHOD(Qt_Gui_QTextBlockFormat_QTextBlockFormat, isValid);
PHP_METHOD(Qt_Gui_QTextBlockFormat_QTextBlockFormat, setAlignment);
PHP_METHOD(Qt_Gui_QTextBlockFormat_QTextBlockFormat, alignment);
PHP_METHOD(Qt_Gui_QTextBlockFormat_QTextBlockFormat, setTopMargin);
PHP_METHOD(Qt_Gui_QTextBlockFormat_QTextBlockFormat, topMargin);
PHP_METHOD(Qt_Gui_QTextBlockFormat_QTextBlockFormat, setBottomMargin);
PHP_METHOD(Qt_Gui_QTextBlockFormat_QTextBlockFormat, bottomMargin);
PHP_METHOD(Qt_Gui_QTextBlockFormat_QTextBlockFormat, setLeftMargin);
PHP_METHOD(Qt_Gui_QTextBlockFormat_QTextBlockFormat, leftMargin);
PHP_METHOD(Qt_Gui_QTextBlockFormat_QTextBlockFormat, setRightMargin);
PHP_METHOD(Qt_Gui_QTextBlockFormat_QTextBlockFormat, rightMargin);
PHP_METHOD(Qt_Gui_QTextBlockFormat_QTextBlockFormat, setTextIndent);
PHP_METHOD(Qt_Gui_QTextBlockFormat_QTextBlockFormat, textIndent);
PHP_METHOD(Qt_Gui_QTextBlockFormat_QTextBlockFormat, setIndent);
PHP_METHOD(Qt_Gui_QTextBlockFormat_QTextBlockFormat, indent);
PHP_METHOD(Qt_Gui_QTextBlockFormat_QTextBlockFormat, setHeadingLevel);
PHP_METHOD(Qt_Gui_QTextBlockFormat_QTextBlockFormat, headingLevel);
PHP_METHOD(Qt_Gui_QTextBlockFormat_QTextBlockFormat, setLineHeight);
PHP_METHOD(Qt_Gui_QTextBlockFormat_QTextBlockFormat, lineHeight);
PHP_METHOD(Qt_Gui_QTextBlockFormat_QTextBlockFormat, lineHeight2);
PHP_METHOD(Qt_Gui_QTextBlockFormat_QTextBlockFormat, lineHeightType);
PHP_METHOD(Qt_Gui_QTextBlockFormat_QTextBlockFormat, setNonBreakableLines);
PHP_METHOD(Qt_Gui_QTextBlockFormat_QTextBlockFormat, nonBreakableLines);
PHP_METHOD(Qt_Gui_QTextBlockFormat_QTextBlockFormat, setPageBreakPolicy);
PHP_METHOD(Qt_Gui_QTextBlockFormat_QTextBlockFormat, pageBreakPolicy);
PHP_METHOD(Qt_Gui_QTextBlockFormat_QTextBlockFormat, setTabPositions);
PHP_METHOD(Qt_Gui_QTextBlockFormat_QTextBlockFormat, tabPositions);
PHP_METHOD(Qt_Gui_QTextBlockFormat_QTextBlockFormat, setMarker);
PHP_METHOD(Qt_Gui_QTextBlockFormat_QTextBlockFormat, marker);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextblockformat_qtextblockformat_new_, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextblockformat_qtextblockformat_isvalid, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextblockformat_qtextblockformat_setalignment, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, alignment, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextblockformat_qtextblockformat_alignment, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextblockformat_qtextblockformat_settopmargin, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, margin, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextblockformat_qtextblockformat_topmargin, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextblockformat_qtextblockformat_setbottommargin, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, margin, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextblockformat_qtextblockformat_bottommargin, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextblockformat_qtextblockformat_setleftmargin, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, margin, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextblockformat_qtextblockformat_leftmargin, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextblockformat_qtextblockformat_setrightmargin, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, margin, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextblockformat_qtextblockformat_rightmargin, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextblockformat_qtextblockformat_settextindent, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, aindent, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextblockformat_qtextblockformat_textindent, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextblockformat_qtextblockformat_setindent, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, indent, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextblockformat_qtextblockformat_indent, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextblockformat_qtextblockformat_setheadinglevel, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, alevel, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextblockformat_qtextblockformat_headinglevel, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextblockformat_qtextblockformat_setlineheight, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, height, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, heightType, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextblockformat_qtextblockformat_lineheight, 0, 2, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, scriptLineHeight, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, scaling, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextblockformat_qtextblockformat_lineheight2, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextblockformat_qtextblockformat_lineheighttype, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextblockformat_qtextblockformat_setnonbreakablelines, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, b, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextblockformat_qtextblockformat_nonbreakablelines, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextblockformat_qtextblockformat_setpagebreakpolicy, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, flags, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextblockformat_qtextblockformat_pagebreakpolicy, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextblockformat_qtextblockformat_settabpositions, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_ARRAY_INFO(0, tabs, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextblockformat_qtextblockformat_tabpositions, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextblockformat_qtextblockformat_setmarker, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, marker, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextblockformat_qtextblockformat_marker, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_gui_qtextblockformat_qtextblockformat_method_entry) {
	PHP_ME(Qt_Gui_QTextBlockFormat_QTextBlockFormat, new_, arginfo_qt_gui_qtextblockformat_qtextblockformat_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextBlockFormat_QTextBlockFormat, isValid, arginfo_qt_gui_qtextblockformat_qtextblockformat_isvalid, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextBlockFormat_QTextBlockFormat, setAlignment, arginfo_qt_gui_qtextblockformat_qtextblockformat_setalignment, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextBlockFormat_QTextBlockFormat, alignment, arginfo_qt_gui_qtextblockformat_qtextblockformat_alignment, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextBlockFormat_QTextBlockFormat, setTopMargin, arginfo_qt_gui_qtextblockformat_qtextblockformat_settopmargin, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextBlockFormat_QTextBlockFormat, topMargin, arginfo_qt_gui_qtextblockformat_qtextblockformat_topmargin, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextBlockFormat_QTextBlockFormat, setBottomMargin, arginfo_qt_gui_qtextblockformat_qtextblockformat_setbottommargin, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextBlockFormat_QTextBlockFormat, bottomMargin, arginfo_qt_gui_qtextblockformat_qtextblockformat_bottommargin, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextBlockFormat_QTextBlockFormat, setLeftMargin, arginfo_qt_gui_qtextblockformat_qtextblockformat_setleftmargin, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextBlockFormat_QTextBlockFormat, leftMargin, arginfo_qt_gui_qtextblockformat_qtextblockformat_leftmargin, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextBlockFormat_QTextBlockFormat, setRightMargin, arginfo_qt_gui_qtextblockformat_qtextblockformat_setrightmargin, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextBlockFormat_QTextBlockFormat, rightMargin, arginfo_qt_gui_qtextblockformat_qtextblockformat_rightmargin, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextBlockFormat_QTextBlockFormat, setTextIndent, arginfo_qt_gui_qtextblockformat_qtextblockformat_settextindent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextBlockFormat_QTextBlockFormat, textIndent, arginfo_qt_gui_qtextblockformat_qtextblockformat_textindent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextBlockFormat_QTextBlockFormat, setIndent, arginfo_qt_gui_qtextblockformat_qtextblockformat_setindent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextBlockFormat_QTextBlockFormat, indent, arginfo_qt_gui_qtextblockformat_qtextblockformat_indent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextBlockFormat_QTextBlockFormat, setHeadingLevel, arginfo_qt_gui_qtextblockformat_qtextblockformat_setheadinglevel, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextBlockFormat_QTextBlockFormat, headingLevel, arginfo_qt_gui_qtextblockformat_qtextblockformat_headinglevel, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextBlockFormat_QTextBlockFormat, setLineHeight, arginfo_qt_gui_qtextblockformat_qtextblockformat_setlineheight, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextBlockFormat_QTextBlockFormat, lineHeight, arginfo_qt_gui_qtextblockformat_qtextblockformat_lineheight, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextBlockFormat_QTextBlockFormat, lineHeight2, arginfo_qt_gui_qtextblockformat_qtextblockformat_lineheight2, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextBlockFormat_QTextBlockFormat, lineHeightType, arginfo_qt_gui_qtextblockformat_qtextblockformat_lineheighttype, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextBlockFormat_QTextBlockFormat, setNonBreakableLines, arginfo_qt_gui_qtextblockformat_qtextblockformat_setnonbreakablelines, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextBlockFormat_QTextBlockFormat, nonBreakableLines, arginfo_qt_gui_qtextblockformat_qtextblockformat_nonbreakablelines, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextBlockFormat_QTextBlockFormat, setPageBreakPolicy, arginfo_qt_gui_qtextblockformat_qtextblockformat_setpagebreakpolicy, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextBlockFormat_QTextBlockFormat, pageBreakPolicy, arginfo_qt_gui_qtextblockformat_qtextblockformat_pagebreakpolicy, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextBlockFormat_QTextBlockFormat, setTabPositions, arginfo_qt_gui_qtextblockformat_qtextblockformat_settabpositions, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextBlockFormat_QTextBlockFormat, tabPositions, arginfo_qt_gui_qtextblockformat_qtextblockformat_tabpositions, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextBlockFormat_QTextBlockFormat, setMarker, arginfo_qt_gui_qtextblockformat_qtextblockformat_setmarker, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextBlockFormat_QTextBlockFormat, marker, arginfo_qt_gui_qtextblockformat_qtextblockformat_marker, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
