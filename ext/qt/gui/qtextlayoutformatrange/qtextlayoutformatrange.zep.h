
extern zend_class_entry *qt_gui_qtextlayoutformatrange_qtextlayoutformatrange_ce;

ZEPHIR_INIT_CLASS(Qt_Gui_QTextLayoutFormatRange_QTextLayoutFormatRange);

PHP_METHOD(Qt_Gui_QTextLayoutFormatRange_QTextLayoutFormatRange, start);
PHP_METHOD(Qt_Gui_QTextLayoutFormatRange_QTextLayoutFormatRange, setStart);
PHP_METHOD(Qt_Gui_QTextLayoutFormatRange_QTextLayoutFormatRange, length);
PHP_METHOD(Qt_Gui_QTextLayoutFormatRange_QTextLayoutFormatRange, setLength);
PHP_METHOD(Qt_Gui_QTextLayoutFormatRange_QTextLayoutFormatRange, format);
PHP_METHOD(Qt_Gui_QTextLayoutFormatRange_QTextLayoutFormatRange, setFormat);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextlayoutformatrange_qtextlayoutformatrange_start, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextlayoutformatrange_qtextlayoutformatrange_setstart, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextlayoutformatrange_qtextlayoutformatrange_length, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextlayoutformatrange_qtextlayoutformatrange_setlength, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextlayoutformatrange_qtextlayoutformatrange_format, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextlayoutformatrange_qtextlayoutformatrange_setformat, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_gui_qtextlayoutformatrange_qtextlayoutformatrange_method_entry) {
	PHP_ME(Qt_Gui_QTextLayoutFormatRange_QTextLayoutFormatRange, start, arginfo_qt_gui_qtextlayoutformatrange_qtextlayoutformatrange_start, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextLayoutFormatRange_QTextLayoutFormatRange, setStart, arginfo_qt_gui_qtextlayoutformatrange_qtextlayoutformatrange_setstart, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextLayoutFormatRange_QTextLayoutFormatRange, length, arginfo_qt_gui_qtextlayoutformatrange_qtextlayoutformatrange_length, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextLayoutFormatRange_QTextLayoutFormatRange, setLength, arginfo_qt_gui_qtextlayoutformatrange_qtextlayoutformatrange_setlength, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextLayoutFormatRange_QTextLayoutFormatRange, format, arginfo_qt_gui_qtextlayoutformatrange_qtextlayoutformatrange_format, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextLayoutFormatRange_QTextLayoutFormatRange, setFormat, arginfo_qt_gui_qtextlayoutformatrange_qtextlayoutformatrange_setformat, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
