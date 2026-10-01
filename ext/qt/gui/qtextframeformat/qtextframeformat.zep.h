
extern zend_class_entry *qt_gui_qtextframeformat_qtextframeformat_ce;

ZEPHIR_INIT_CLASS(Qt_Gui_QTextFrameFormat_QTextFrameFormat);

PHP_METHOD(Qt_Gui_QTextFrameFormat_QTextFrameFormat, new_);
PHP_METHOD(Qt_Gui_QTextFrameFormat_QTextFrameFormat, isValid);
PHP_METHOD(Qt_Gui_QTextFrameFormat_QTextFrameFormat, setPosition);
PHP_METHOD(Qt_Gui_QTextFrameFormat_QTextFrameFormat, position);
PHP_METHOD(Qt_Gui_QTextFrameFormat_QTextFrameFormat, setBorder);
PHP_METHOD(Qt_Gui_QTextFrameFormat_QTextFrameFormat, border);
PHP_METHOD(Qt_Gui_QTextFrameFormat_QTextFrameFormat, setBorderBrush);
PHP_METHOD(Qt_Gui_QTextFrameFormat_QTextFrameFormat, borderBrush);
PHP_METHOD(Qt_Gui_QTextFrameFormat_QTextFrameFormat, setBorderStyle);
PHP_METHOD(Qt_Gui_QTextFrameFormat_QTextFrameFormat, borderStyle);
PHP_METHOD(Qt_Gui_QTextFrameFormat_QTextFrameFormat, setMargin);
PHP_METHOD(Qt_Gui_QTextFrameFormat_QTextFrameFormat, margin);
PHP_METHOD(Qt_Gui_QTextFrameFormat_QTextFrameFormat, setTopMargin);
PHP_METHOD(Qt_Gui_QTextFrameFormat_QTextFrameFormat, topMargin);
PHP_METHOD(Qt_Gui_QTextFrameFormat_QTextFrameFormat, setBottomMargin);
PHP_METHOD(Qt_Gui_QTextFrameFormat_QTextFrameFormat, bottomMargin);
PHP_METHOD(Qt_Gui_QTextFrameFormat_QTextFrameFormat, setLeftMargin);
PHP_METHOD(Qt_Gui_QTextFrameFormat_QTextFrameFormat, leftMargin);
PHP_METHOD(Qt_Gui_QTextFrameFormat_QTextFrameFormat, setRightMargin);
PHP_METHOD(Qt_Gui_QTextFrameFormat_QTextFrameFormat, rightMargin);
PHP_METHOD(Qt_Gui_QTextFrameFormat_QTextFrameFormat, setPadding);
PHP_METHOD(Qt_Gui_QTextFrameFormat_QTextFrameFormat, padding);
PHP_METHOD(Qt_Gui_QTextFrameFormat_QTextFrameFormat, setWidth);
PHP_METHOD(Qt_Gui_QTextFrameFormat_QTextFrameFormat, setWidthQTextLength);
PHP_METHOD(Qt_Gui_QTextFrameFormat_QTextFrameFormat, width);
PHP_METHOD(Qt_Gui_QTextFrameFormat_QTextFrameFormat, setHeight);
PHP_METHOD(Qt_Gui_QTextFrameFormat_QTextFrameFormat, setHeightQTextLength);
PHP_METHOD(Qt_Gui_QTextFrameFormat_QTextFrameFormat, height);
PHP_METHOD(Qt_Gui_QTextFrameFormat_QTextFrameFormat, setPageBreakPolicy);
PHP_METHOD(Qt_Gui_QTextFrameFormat_QTextFrameFormat, pageBreakPolicy);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextframeformat_qtextframeformat_new_, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextframeformat_qtextframeformat_isvalid, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextframeformat_qtextframeformat_setposition, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, f, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextframeformat_qtextframeformat_position, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextframeformat_qtextframeformat_setborder, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, border, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextframeformat_qtextframeformat_border, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextframeformat_qtextframeformat_setborderbrush, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, brush, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextframeformat_qtextframeformat_borderbrush, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextframeformat_qtextframeformat_setborderstyle, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, style, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextframeformat_qtextframeformat_borderstyle, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextframeformat_qtextframeformat_setmargin, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, margin, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextframeformat_qtextframeformat_margin, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextframeformat_qtextframeformat_settopmargin, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, margin, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextframeformat_qtextframeformat_topmargin, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextframeformat_qtextframeformat_setbottommargin, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, margin, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextframeformat_qtextframeformat_bottommargin, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextframeformat_qtextframeformat_setleftmargin, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, margin, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextframeformat_qtextframeformat_leftmargin, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextframeformat_qtextframeformat_setrightmargin, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, margin, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextframeformat_qtextframeformat_rightmargin, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextframeformat_qtextframeformat_setpadding, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, padding, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextframeformat_qtextframeformat_padding, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextframeformat_qtextframeformat_setwidth, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextframeformat_qtextframeformat_setwidthqtextlength, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, length, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextframeformat_qtextframeformat_width, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextframeformat_qtextframeformat_setheight, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, height, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextframeformat_qtextframeformat_setheightqtextlength, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, height, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextframeformat_qtextframeformat_height, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextframeformat_qtextframeformat_setpagebreakpolicy, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, flags, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextframeformat_qtextframeformat_pagebreakpolicy, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_gui_qtextframeformat_qtextframeformat_method_entry) {
	PHP_ME(Qt_Gui_QTextFrameFormat_QTextFrameFormat, new_, arginfo_qt_gui_qtextframeformat_qtextframeformat_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextFrameFormat_QTextFrameFormat, isValid, arginfo_qt_gui_qtextframeformat_qtextframeformat_isvalid, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextFrameFormat_QTextFrameFormat, setPosition, arginfo_qt_gui_qtextframeformat_qtextframeformat_setposition, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextFrameFormat_QTextFrameFormat, position, arginfo_qt_gui_qtextframeformat_qtextframeformat_position, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextFrameFormat_QTextFrameFormat, setBorder, arginfo_qt_gui_qtextframeformat_qtextframeformat_setborder, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextFrameFormat_QTextFrameFormat, border, arginfo_qt_gui_qtextframeformat_qtextframeformat_border, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextFrameFormat_QTextFrameFormat, setBorderBrush, arginfo_qt_gui_qtextframeformat_qtextframeformat_setborderbrush, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextFrameFormat_QTextFrameFormat, borderBrush, arginfo_qt_gui_qtextframeformat_qtextframeformat_borderbrush, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextFrameFormat_QTextFrameFormat, setBorderStyle, arginfo_qt_gui_qtextframeformat_qtextframeformat_setborderstyle, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextFrameFormat_QTextFrameFormat, borderStyle, arginfo_qt_gui_qtextframeformat_qtextframeformat_borderstyle, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextFrameFormat_QTextFrameFormat, setMargin, arginfo_qt_gui_qtextframeformat_qtextframeformat_setmargin, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextFrameFormat_QTextFrameFormat, margin, arginfo_qt_gui_qtextframeformat_qtextframeformat_margin, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextFrameFormat_QTextFrameFormat, setTopMargin, arginfo_qt_gui_qtextframeformat_qtextframeformat_settopmargin, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextFrameFormat_QTextFrameFormat, topMargin, arginfo_qt_gui_qtextframeformat_qtextframeformat_topmargin, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextFrameFormat_QTextFrameFormat, setBottomMargin, arginfo_qt_gui_qtextframeformat_qtextframeformat_setbottommargin, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextFrameFormat_QTextFrameFormat, bottomMargin, arginfo_qt_gui_qtextframeformat_qtextframeformat_bottommargin, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextFrameFormat_QTextFrameFormat, setLeftMargin, arginfo_qt_gui_qtextframeformat_qtextframeformat_setleftmargin, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextFrameFormat_QTextFrameFormat, leftMargin, arginfo_qt_gui_qtextframeformat_qtextframeformat_leftmargin, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextFrameFormat_QTextFrameFormat, setRightMargin, arginfo_qt_gui_qtextframeformat_qtextframeformat_setrightmargin, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextFrameFormat_QTextFrameFormat, rightMargin, arginfo_qt_gui_qtextframeformat_qtextframeformat_rightmargin, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextFrameFormat_QTextFrameFormat, setPadding, arginfo_qt_gui_qtextframeformat_qtextframeformat_setpadding, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextFrameFormat_QTextFrameFormat, padding, arginfo_qt_gui_qtextframeformat_qtextframeformat_padding, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextFrameFormat_QTextFrameFormat, setWidth, arginfo_qt_gui_qtextframeformat_qtextframeformat_setwidth, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextFrameFormat_QTextFrameFormat, setWidthQTextLength, arginfo_qt_gui_qtextframeformat_qtextframeformat_setwidthqtextlength, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextFrameFormat_QTextFrameFormat, width, arginfo_qt_gui_qtextframeformat_qtextframeformat_width, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextFrameFormat_QTextFrameFormat, setHeight, arginfo_qt_gui_qtextframeformat_qtextframeformat_setheight, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextFrameFormat_QTextFrameFormat, setHeightQTextLength, arginfo_qt_gui_qtextframeformat_qtextframeformat_setheightqtextlength, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextFrameFormat_QTextFrameFormat, height, arginfo_qt_gui_qtextframeformat_qtextframeformat_height, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextFrameFormat_QTextFrameFormat, setPageBreakPolicy, arginfo_qt_gui_qtextframeformat_qtextframeformat_setpagebreakpolicy, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextFrameFormat_QTextFrameFormat, pageBreakPolicy, arginfo_qt_gui_qtextframeformat_qtextframeformat_pagebreakpolicy, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
