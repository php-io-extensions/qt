
extern zend_class_entry *qt_gui_qtexttableformat_qtexttableformat_ce;

ZEPHIR_INIT_CLASS(Qt_Gui_QTextTableFormat_QTextTableFormat);

PHP_METHOD(Qt_Gui_QTextTableFormat_QTextTableFormat, new_);
PHP_METHOD(Qt_Gui_QTextTableFormat_QTextTableFormat, isValid);
PHP_METHOD(Qt_Gui_QTextTableFormat_QTextTableFormat, columns);
PHP_METHOD(Qt_Gui_QTextTableFormat_QTextTableFormat, setColumns);
PHP_METHOD(Qt_Gui_QTextTableFormat_QTextTableFormat, setColumnWidthConstraints);
PHP_METHOD(Qt_Gui_QTextTableFormat_QTextTableFormat, columnWidthConstraints);
PHP_METHOD(Qt_Gui_QTextTableFormat_QTextTableFormat, clearColumnWidthConstraints);
PHP_METHOD(Qt_Gui_QTextTableFormat_QTextTableFormat, cellSpacing);
PHP_METHOD(Qt_Gui_QTextTableFormat_QTextTableFormat, setCellSpacing);
PHP_METHOD(Qt_Gui_QTextTableFormat_QTextTableFormat, cellPadding);
PHP_METHOD(Qt_Gui_QTextTableFormat_QTextTableFormat, setCellPadding);
PHP_METHOD(Qt_Gui_QTextTableFormat_QTextTableFormat, setAlignment);
PHP_METHOD(Qt_Gui_QTextTableFormat_QTextTableFormat, alignment);
PHP_METHOD(Qt_Gui_QTextTableFormat_QTextTableFormat, setHeaderRowCount);
PHP_METHOD(Qt_Gui_QTextTableFormat_QTextTableFormat, headerRowCount);
PHP_METHOD(Qt_Gui_QTextTableFormat_QTextTableFormat, setBorderCollapse);
PHP_METHOD(Qt_Gui_QTextTableFormat_QTextTableFormat, borderCollapse);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtexttableformat_qtexttableformat_new_, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtexttableformat_qtexttableformat_isvalid, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtexttableformat_qtexttableformat_columns, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtexttableformat_qtexttableformat_setcolumns, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, columns, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtexttableformat_qtexttableformat_setcolumnwidthconstraints, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_ARRAY_INFO(0, constraints, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtexttableformat_qtexttableformat_columnwidthconstraints, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtexttableformat_qtexttableformat_clearcolumnwidthconstraints, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtexttableformat_qtexttableformat_cellspacing, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtexttableformat_qtexttableformat_setcellspacing, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, spacing, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtexttableformat_qtexttableformat_cellpadding, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtexttableformat_qtexttableformat_setcellpadding, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, padding, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtexttableformat_qtexttableformat_setalignment, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, alignment, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtexttableformat_qtexttableformat_alignment, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtexttableformat_qtexttableformat_setheaderrowcount, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, count, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtexttableformat_qtexttableformat_headerrowcount, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtexttableformat_qtexttableformat_setbordercollapse, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, borderCollapse, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtexttableformat_qtexttableformat_bordercollapse, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_gui_qtexttableformat_qtexttableformat_method_entry) {
	PHP_ME(Qt_Gui_QTextTableFormat_QTextTableFormat, new_, arginfo_qt_gui_qtexttableformat_qtexttableformat_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextTableFormat_QTextTableFormat, isValid, arginfo_qt_gui_qtexttableformat_qtexttableformat_isvalid, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextTableFormat_QTextTableFormat, columns, arginfo_qt_gui_qtexttableformat_qtexttableformat_columns, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextTableFormat_QTextTableFormat, setColumns, arginfo_qt_gui_qtexttableformat_qtexttableformat_setcolumns, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextTableFormat_QTextTableFormat, setColumnWidthConstraints, arginfo_qt_gui_qtexttableformat_qtexttableformat_setcolumnwidthconstraints, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextTableFormat_QTextTableFormat, columnWidthConstraints, arginfo_qt_gui_qtexttableformat_qtexttableformat_columnwidthconstraints, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextTableFormat_QTextTableFormat, clearColumnWidthConstraints, arginfo_qt_gui_qtexttableformat_qtexttableformat_clearcolumnwidthconstraints, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextTableFormat_QTextTableFormat, cellSpacing, arginfo_qt_gui_qtexttableformat_qtexttableformat_cellspacing, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextTableFormat_QTextTableFormat, setCellSpacing, arginfo_qt_gui_qtexttableformat_qtexttableformat_setcellspacing, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextTableFormat_QTextTableFormat, cellPadding, arginfo_qt_gui_qtexttableformat_qtexttableformat_cellpadding, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextTableFormat_QTextTableFormat, setCellPadding, arginfo_qt_gui_qtexttableformat_qtexttableformat_setcellpadding, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextTableFormat_QTextTableFormat, setAlignment, arginfo_qt_gui_qtexttableformat_qtexttableformat_setalignment, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextTableFormat_QTextTableFormat, alignment, arginfo_qt_gui_qtexttableformat_qtexttableformat_alignment, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextTableFormat_QTextTableFormat, setHeaderRowCount, arginfo_qt_gui_qtexttableformat_qtexttableformat_setheaderrowcount, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextTableFormat_QTextTableFormat, headerRowCount, arginfo_qt_gui_qtexttableformat_qtexttableformat_headerrowcount, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextTableFormat_QTextTableFormat, setBorderCollapse, arginfo_qt_gui_qtexttableformat_qtexttableformat_setbordercollapse, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextTableFormat_QTextTableFormat, borderCollapse, arginfo_qt_gui_qtexttableformat_qtexttableformat_bordercollapse, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
