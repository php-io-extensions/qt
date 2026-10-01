
extern zend_class_entry *qt_gui_qtexttable_qtexttable_ce;

ZEPHIR_INIT_CLASS(Qt_Gui_QTextTable_QTextTable);

PHP_METHOD(Qt_Gui_QTextTable_QTextTable, staticMetaObject);
PHP_METHOD(Qt_Gui_QTextTable_QTextTable, tr);
PHP_METHOD(Qt_Gui_QTextTable_QTextTable, new_);
PHP_METHOD(Qt_Gui_QTextTable_QTextTable, resize);
PHP_METHOD(Qt_Gui_QTextTable_QTextTable, insertRows);
PHP_METHOD(Qt_Gui_QTextTable_QTextTable, insertColumns);
PHP_METHOD(Qt_Gui_QTextTable_QTextTable, appendRows);
PHP_METHOD(Qt_Gui_QTextTable_QTextTable, appendColumns);
PHP_METHOD(Qt_Gui_QTextTable_QTextTable, removeRows);
PHP_METHOD(Qt_Gui_QTextTable_QTextTable, removeColumns);
PHP_METHOD(Qt_Gui_QTextTable_QTextTable, mergeCells);
PHP_METHOD(Qt_Gui_QTextTable_QTextTable, mergeCellsQTextCursor);
PHP_METHOD(Qt_Gui_QTextTable_QTextTable, splitCell);
PHP_METHOD(Qt_Gui_QTextTable_QTextTable, rows);
PHP_METHOD(Qt_Gui_QTextTable_QTextTable, columns);
PHP_METHOD(Qt_Gui_QTextTable_QTextTable, cellAt);
PHP_METHOD(Qt_Gui_QTextTable_QTextTable, cellAtInt);
PHP_METHOD(Qt_Gui_QTextTable_QTextTable, cellAtQTextCursor);
PHP_METHOD(Qt_Gui_QTextTable_QTextTable, rowStart);
PHP_METHOD(Qt_Gui_QTextTable_QTextTable, rowEnd);
PHP_METHOD(Qt_Gui_QTextTable_QTextTable, setFormat);
PHP_METHOD(Qt_Gui_QTextTable_QTextTable, format);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtexttable_qtexttable_staticmetaobject, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtexttable_qtexttable_tr, 0, 1, IS_STRING, 0)
	ZEND_ARG_INFO(0, s)
	ZEND_ARG_INFO(0, c)
	ZEND_ARG_TYPE_INFO(0, n, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtexttable_qtexttable_new_, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, doc, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtexttable_qtexttable_resize, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rows, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, cols, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtexttable_qtexttable_insertrows, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, pos, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, num, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtexttable_qtexttable_insertcolumns, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, pos, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, num, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtexttable_qtexttable_appendrows, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, count, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtexttable_qtexttable_appendcolumns, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, count, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtexttable_qtexttable_removerows, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, pos, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, num, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtexttable_qtexttable_removecolumns, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, pos, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, num, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtexttable_qtexttable_mergecells, 0, 5, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, row, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, col, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, numRows, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, numCols, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtexttable_qtexttable_mergecellsqtextcursor, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, cursor, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtexttable_qtexttable_splitcell, 0, 5, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, row, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, col, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, numRows, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, numCols, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtexttable_qtexttable_rows, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtexttable_qtexttable_columns, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtexttable_qtexttable_cellat, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, row, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, col, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtexttable_qtexttable_cellatint, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, position, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtexttable_qtexttable_cellatqtextcursor, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, c, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtexttable_qtexttable_rowstart, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, c, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtexttable_qtexttable_rowend, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, c, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtexttable_qtexttable_setformat, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, format, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtexttable_qtexttable_format, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_gui_qtexttable_qtexttable_method_entry) {
	PHP_ME(Qt_Gui_QTextTable_QTextTable, staticMetaObject, arginfo_qt_gui_qtexttable_qtexttable_staticmetaobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextTable_QTextTable, tr, arginfo_qt_gui_qtexttable_qtexttable_tr, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextTable_QTextTable, new_, arginfo_qt_gui_qtexttable_qtexttable_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextTable_QTextTable, resize, arginfo_qt_gui_qtexttable_qtexttable_resize, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextTable_QTextTable, insertRows, arginfo_qt_gui_qtexttable_qtexttable_insertrows, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextTable_QTextTable, insertColumns, arginfo_qt_gui_qtexttable_qtexttable_insertcolumns, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextTable_QTextTable, appendRows, arginfo_qt_gui_qtexttable_qtexttable_appendrows, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextTable_QTextTable, appendColumns, arginfo_qt_gui_qtexttable_qtexttable_appendcolumns, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextTable_QTextTable, removeRows, arginfo_qt_gui_qtexttable_qtexttable_removerows, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextTable_QTextTable, removeColumns, arginfo_qt_gui_qtexttable_qtexttable_removecolumns, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextTable_QTextTable, mergeCells, arginfo_qt_gui_qtexttable_qtexttable_mergecells, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextTable_QTextTable, mergeCellsQTextCursor, arginfo_qt_gui_qtexttable_qtexttable_mergecellsqtextcursor, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextTable_QTextTable, splitCell, arginfo_qt_gui_qtexttable_qtexttable_splitcell, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextTable_QTextTable, rows, arginfo_qt_gui_qtexttable_qtexttable_rows, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextTable_QTextTable, columns, arginfo_qt_gui_qtexttable_qtexttable_columns, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextTable_QTextTable, cellAt, arginfo_qt_gui_qtexttable_qtexttable_cellat, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextTable_QTextTable, cellAtInt, arginfo_qt_gui_qtexttable_qtexttable_cellatint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextTable_QTextTable, cellAtQTextCursor, arginfo_qt_gui_qtexttable_qtexttable_cellatqtextcursor, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextTable_QTextTable, rowStart, arginfo_qt_gui_qtexttable_qtexttable_rowstart, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextTable_QTextTable, rowEnd, arginfo_qt_gui_qtexttable_qtexttable_rowend, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextTable_QTextTable, setFormat, arginfo_qt_gui_qtexttable_qtexttable_setformat, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextTable_QTextTable, format, arginfo_qt_gui_qtexttable_qtexttable_format, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
