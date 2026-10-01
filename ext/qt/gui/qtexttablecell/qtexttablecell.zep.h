
extern zend_class_entry *qt_gui_qtexttablecell_qtexttablecell_ce;

ZEPHIR_INIT_CLASS(Qt_Gui_QTextTableCell_QTextTableCell);

PHP_METHOD(Qt_Gui_QTextTableCell_QTextTableCell, new_);
PHP_METHOD(Qt_Gui_QTextTableCell_QTextTableCell, newQTextTableCell);
PHP_METHOD(Qt_Gui_QTextTableCell_QTextTableCell, setFormat);
PHP_METHOD(Qt_Gui_QTextTableCell_QTextTableCell, format);
PHP_METHOD(Qt_Gui_QTextTableCell_QTextTableCell, row);
PHP_METHOD(Qt_Gui_QTextTableCell_QTextTableCell, column);
PHP_METHOD(Qt_Gui_QTextTableCell_QTextTableCell, rowSpan);
PHP_METHOD(Qt_Gui_QTextTableCell_QTextTableCell, columnSpan);
PHP_METHOD(Qt_Gui_QTextTableCell_QTextTableCell, isValid);
PHP_METHOD(Qt_Gui_QTextTableCell_QTextTableCell, firstCursorPosition);
PHP_METHOD(Qt_Gui_QTextTableCell_QTextTableCell, lastCursorPosition);
PHP_METHOD(Qt_Gui_QTextTableCell_QTextTableCell, firstPosition);
PHP_METHOD(Qt_Gui_QTextTableCell_QTextTableCell, lastPosition);
PHP_METHOD(Qt_Gui_QTextTableCell_QTextTableCell, tableCellFormatIndex);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtexttablecell_qtexttablecell_new_, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtexttablecell_qtexttablecell_newqtexttablecell, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, o, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtexttablecell_qtexttablecell_setformat, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, format, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtexttablecell_qtexttablecell_format, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtexttablecell_qtexttablecell_row, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtexttablecell_qtexttablecell_column, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtexttablecell_qtexttablecell_rowspan, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtexttablecell_qtexttablecell_columnspan, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtexttablecell_qtexttablecell_isvalid, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtexttablecell_qtexttablecell_firstcursorposition, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtexttablecell_qtexttablecell_lastcursorposition, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtexttablecell_qtexttablecell_firstposition, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtexttablecell_qtexttablecell_lastposition, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtexttablecell_qtexttablecell_tablecellformatindex, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_gui_qtexttablecell_qtexttablecell_method_entry) {
	PHP_ME(Qt_Gui_QTextTableCell_QTextTableCell, new_, arginfo_qt_gui_qtexttablecell_qtexttablecell_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextTableCell_QTextTableCell, newQTextTableCell, arginfo_qt_gui_qtexttablecell_qtexttablecell_newqtexttablecell, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextTableCell_QTextTableCell, setFormat, arginfo_qt_gui_qtexttablecell_qtexttablecell_setformat, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextTableCell_QTextTableCell, format, arginfo_qt_gui_qtexttablecell_qtexttablecell_format, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextTableCell_QTextTableCell, row, arginfo_qt_gui_qtexttablecell_qtexttablecell_row, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextTableCell_QTextTableCell, column, arginfo_qt_gui_qtexttablecell_qtexttablecell_column, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextTableCell_QTextTableCell, rowSpan, arginfo_qt_gui_qtexttablecell_qtexttablecell_rowspan, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextTableCell_QTextTableCell, columnSpan, arginfo_qt_gui_qtexttablecell_qtexttablecell_columnspan, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextTableCell_QTextTableCell, isValid, arginfo_qt_gui_qtexttablecell_qtexttablecell_isvalid, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextTableCell_QTextTableCell, firstCursorPosition, arginfo_qt_gui_qtexttablecell_qtexttablecell_firstcursorposition, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextTableCell_QTextTableCell, lastCursorPosition, arginfo_qt_gui_qtexttablecell_qtexttablecell_lastcursorposition, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextTableCell_QTextTableCell, firstPosition, arginfo_qt_gui_qtexttablecell_qtexttablecell_firstposition, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextTableCell_QTextTableCell, lastPosition, arginfo_qt_gui_qtexttablecell_qtexttablecell_lastposition, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextTableCell_QTextTableCell, tableCellFormatIndex, arginfo_qt_gui_qtexttablecell_qtexttablecell_tablecellformatindex, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
