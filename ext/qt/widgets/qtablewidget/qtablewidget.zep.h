
extern zend_class_entry *qt_widgets_qtablewidget_qtablewidget_ce;

ZEPHIR_INIT_CLASS(Qt_Widgets_QTableWidget_QTableWidget);

PHP_METHOD(Qt_Widgets_QTableWidget_QTableWidget, isPersistentEditorOpen);
PHP_METHOD(Qt_Widgets_QTableWidget_QTableWidget, staticMetaObject);
PHP_METHOD(Qt_Widgets_QTableWidget_QTableWidget, tr);
PHP_METHOD(Qt_Widgets_QTableWidget_QTableWidget, new_);
PHP_METHOD(Qt_Widgets_QTableWidget_QTableWidget, newIntIntQWidget);
PHP_METHOD(Qt_Widgets_QTableWidget_QTableWidget, setRowCount);
PHP_METHOD(Qt_Widgets_QTableWidget_QTableWidget, rowCount);
PHP_METHOD(Qt_Widgets_QTableWidget_QTableWidget, setColumnCount);
PHP_METHOD(Qt_Widgets_QTableWidget_QTableWidget, columnCount);
PHP_METHOD(Qt_Widgets_QTableWidget_QTableWidget, row);
PHP_METHOD(Qt_Widgets_QTableWidget_QTableWidget, column);
PHP_METHOD(Qt_Widgets_QTableWidget_QTableWidget, item);
PHP_METHOD(Qt_Widgets_QTableWidget_QTableWidget, setItem);
PHP_METHOD(Qt_Widgets_QTableWidget_QTableWidget, takeItem);
PHP_METHOD(Qt_Widgets_QTableWidget_QTableWidget, items);
PHP_METHOD(Qt_Widgets_QTableWidget_QTableWidget, indexFromItem);
PHP_METHOD(Qt_Widgets_QTableWidget_QTableWidget, itemFromIndex);
PHP_METHOD(Qt_Widgets_QTableWidget_QTableWidget, verticalHeaderItem);
PHP_METHOD(Qt_Widgets_QTableWidget_QTableWidget, setVerticalHeaderItem);
PHP_METHOD(Qt_Widgets_QTableWidget_QTableWidget, takeVerticalHeaderItem);
PHP_METHOD(Qt_Widgets_QTableWidget_QTableWidget, horizontalHeaderItem);
PHP_METHOD(Qt_Widgets_QTableWidget_QTableWidget, setHorizontalHeaderItem);
PHP_METHOD(Qt_Widgets_QTableWidget_QTableWidget, takeHorizontalHeaderItem);
PHP_METHOD(Qt_Widgets_QTableWidget_QTableWidget, setVerticalHeaderLabels);
PHP_METHOD(Qt_Widgets_QTableWidget_QTableWidget, setHorizontalHeaderLabels);
PHP_METHOD(Qt_Widgets_QTableWidget_QTableWidget, currentRow);
PHP_METHOD(Qt_Widgets_QTableWidget_QTableWidget, currentColumn);
PHP_METHOD(Qt_Widgets_QTableWidget_QTableWidget, currentItem);
PHP_METHOD(Qt_Widgets_QTableWidget_QTableWidget, setCurrentItem);
PHP_METHOD(Qt_Widgets_QTableWidget_QTableWidget, setCurrentItemQTableWidgetItemQItemSelectionModelSelectionFlags);
PHP_METHOD(Qt_Widgets_QTableWidget_QTableWidget, setCurrentCell);
PHP_METHOD(Qt_Widgets_QTableWidget_QTableWidget, setCurrentCellIntIntQItemSelectionModelSelectionFlags);
PHP_METHOD(Qt_Widgets_QTableWidget_QTableWidget, sortItems);
PHP_METHOD(Qt_Widgets_QTableWidget_QTableWidget, setSortingEnabled);
PHP_METHOD(Qt_Widgets_QTableWidget_QTableWidget, isSortingEnabled);
PHP_METHOD(Qt_Widgets_QTableWidget_QTableWidget, editItem);
PHP_METHOD(Qt_Widgets_QTableWidget_QTableWidget, openPersistentEditor);
PHP_METHOD(Qt_Widgets_QTableWidget_QTableWidget, closePersistentEditor);
PHP_METHOD(Qt_Widgets_QTableWidget_QTableWidget, isPersistentEditorOpenQTableWidgetItem);
PHP_METHOD(Qt_Widgets_QTableWidget_QTableWidget, cellWidget);
PHP_METHOD(Qt_Widgets_QTableWidget_QTableWidget, setCellWidget);
PHP_METHOD(Qt_Widgets_QTableWidget_QTableWidget, removeCellWidget);
PHP_METHOD(Qt_Widgets_QTableWidget_QTableWidget, setRangeSelected);
PHP_METHOD(Qt_Widgets_QTableWidget_QTableWidget, selectedRanges);
PHP_METHOD(Qt_Widgets_QTableWidget_QTableWidget, selectedItems);
PHP_METHOD(Qt_Widgets_QTableWidget_QTableWidget, findItems);
PHP_METHOD(Qt_Widgets_QTableWidget_QTableWidget, visualRow);
PHP_METHOD(Qt_Widgets_QTableWidget_QTableWidget, visualColumn);
PHP_METHOD(Qt_Widgets_QTableWidget_QTableWidget, itemAt);
PHP_METHOD(Qt_Widgets_QTableWidget_QTableWidget, itemAtIntInt);
PHP_METHOD(Qt_Widgets_QTableWidget_QTableWidget, visualItemRect);
PHP_METHOD(Qt_Widgets_QTableWidget_QTableWidget, itemPrototype);
PHP_METHOD(Qt_Widgets_QTableWidget_QTableWidget, setItemPrototype);
PHP_METHOD(Qt_Widgets_QTableWidget_QTableWidget, scrollToItem);
PHP_METHOD(Qt_Widgets_QTableWidget_QTableWidget, insertRow);
PHP_METHOD(Qt_Widgets_QTableWidget_QTableWidget, insertColumn);
PHP_METHOD(Qt_Widgets_QTableWidget_QTableWidget, removeRow);
PHP_METHOD(Qt_Widgets_QTableWidget_QTableWidget, removeColumn);
PHP_METHOD(Qt_Widgets_QTableWidget_QTableWidget, clear);
PHP_METHOD(Qt_Widgets_QTableWidget_QTableWidget, clearContents);
PHP_METHOD(Qt_Widgets_QTableWidget_QTableWidget, itemPressed);
PHP_METHOD(Qt_Widgets_QTableWidget_QTableWidget, itemClicked);
PHP_METHOD(Qt_Widgets_QTableWidget_QTableWidget, itemDoubleClicked);
PHP_METHOD(Qt_Widgets_QTableWidget_QTableWidget, itemActivated);
PHP_METHOD(Qt_Widgets_QTableWidget_QTableWidget, itemEntered);
PHP_METHOD(Qt_Widgets_QTableWidget_QTableWidget, itemChanged);
PHP_METHOD(Qt_Widgets_QTableWidget_QTableWidget, currentItemChanged);
PHP_METHOD(Qt_Widgets_QTableWidget_QTableWidget, itemSelectionChanged);
PHP_METHOD(Qt_Widgets_QTableWidget_QTableWidget, cellPressed);
PHP_METHOD(Qt_Widgets_QTableWidget_QTableWidget, cellClicked);
PHP_METHOD(Qt_Widgets_QTableWidget_QTableWidget, cellDoubleClicked);
PHP_METHOD(Qt_Widgets_QTableWidget_QTableWidget, cellActivated);
PHP_METHOD(Qt_Widgets_QTableWidget_QTableWidget, cellEntered);
PHP_METHOD(Qt_Widgets_QTableWidget_QTableWidget, cellChanged);
PHP_METHOD(Qt_Widgets_QTableWidget_QTableWidget, currentCellChanged);
PHP_METHOD(Qt_Widgets_QTableWidget_QTableWidget, event);
PHP_METHOD(Qt_Widgets_QTableWidget_QTableWidget, mimeTypes);
PHP_METHOD(Qt_Widgets_QTableWidget_QTableWidget, mimeData);
PHP_METHOD(Qt_Widgets_QTableWidget_QTableWidget, dropMimeData);
PHP_METHOD(Qt_Widgets_QTableWidget_QTableWidget, supportedDropActions);
PHP_METHOD(Qt_Widgets_QTableWidget_QTableWidget, dropEvent);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtablewidget_qtablewidget_ispersistenteditoropen, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtablewidget_qtablewidget_staticmetaobject, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtablewidget_qtablewidget_tr, 0, 1, IS_STRING, 0)
	ZEND_ARG_INFO(0, s)
	ZEND_ARG_INFO(0, c)
	ZEND_ARG_TYPE_INFO(0, n, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtablewidget_qtablewidget_new_, 0, 0, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtablewidget_qtablewidget_newintintqwidget, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rows, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, columns, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtablewidget_qtablewidget_setrowcount, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rows, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtablewidget_qtablewidget_rowcount, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtablewidget_qtablewidget_setcolumncount, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, columns, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtablewidget_qtablewidget_columncount, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtablewidget_qtablewidget_row, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, item, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtablewidget_qtablewidget_column, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, item, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtablewidget_qtablewidget_item, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, row, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, column, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtablewidget_qtablewidget_setitem, 0, 4, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, row, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, column, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, item, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtablewidget_qtablewidget_takeitem, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, row, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, column, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtablewidget_qtablewidget_items, 0, 2, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, data, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtablewidget_qtablewidget_indexfromitem, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, item, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtablewidget_qtablewidget_itemfromindex, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtablewidget_qtablewidget_verticalheaderitem, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, row, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtablewidget_qtablewidget_setverticalheaderitem, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, row, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, item, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtablewidget_qtablewidget_takeverticalheaderitem, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, row, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtablewidget_qtablewidget_horizontalheaderitem, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, column, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtablewidget_qtablewidget_sethorizontalheaderitem, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, column, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, item, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtablewidget_qtablewidget_takehorizontalheaderitem, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, column, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtablewidget_qtablewidget_setverticalheaderlabels, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_ARRAY_INFO(0, labels, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtablewidget_qtablewidget_sethorizontalheaderlabels, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_ARRAY_INFO(0, labels, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtablewidget_qtablewidget_currentrow, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtablewidget_qtablewidget_currentcolumn, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtablewidget_qtablewidget_currentitem, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtablewidget_qtablewidget_setcurrentitem, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, item, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtablewidget_qtablewidget_setcurrentitemqtablewidgetitemqitemselectionmodelselectionflags, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, item, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, command, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtablewidget_qtablewidget_setcurrentcell, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, row, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, column, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtablewidget_qtablewidget_setcurrentcellintintqitemselectionmodelselectionflags, 0, 4, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, row, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, column, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, command, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtablewidget_qtablewidget_sortitems, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, column, IS_LONG, 0)
	ZEND_ARG_INFO(0, order)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtablewidget_qtablewidget_setsortingenabled, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, enable, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtablewidget_qtablewidget_issortingenabled, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtablewidget_qtablewidget_edititem, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, item, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtablewidget_qtablewidget_openpersistenteditor, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, item, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtablewidget_qtablewidget_closepersistenteditor, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, item, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtablewidget_qtablewidget_ispersistenteditoropenqtablewidgetitem, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, item, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtablewidget_qtablewidget_cellwidget, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, row, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, column, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtablewidget_qtablewidget_setcellwidget, 0, 4, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, row, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, column, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, widget, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtablewidget_qtablewidget_removecellwidget, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, row, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, column, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtablewidget_qtablewidget_setrangeselected, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, range, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, select, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtablewidget_qtablewidget_selectedranges, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtablewidget_qtablewidget_selecteditems, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtablewidget_qtablewidget_finditems, 0, 3, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, text, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, flags, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtablewidget_qtablewidget_visualrow, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, logicalRow, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtablewidget_qtablewidget_visualcolumn, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, logicalColumn, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtablewidget_qtablewidget_itemat, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, pX, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, pY, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtablewidget_qtablewidget_itematintint, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtablewidget_qtablewidget_visualitemrect, 0, 2, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, item, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtablewidget_qtablewidget_itemprototype, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtablewidget_qtablewidget_setitemprototype, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, item, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtablewidget_qtablewidget_scrolltoitem, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, item, IS_LONG, 0)
	ZEND_ARG_INFO(0, hint)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtablewidget_qtablewidget_insertrow, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, row, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtablewidget_qtablewidget_insertcolumn, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, column, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtablewidget_qtablewidget_removerow, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, row, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtablewidget_qtablewidget_removecolumn, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, column, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtablewidget_qtablewidget_clear, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtablewidget_qtablewidget_clearcontents, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtablewidget_qtablewidget_itempressed, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, item, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtablewidget_qtablewidget_itemclicked, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, item, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtablewidget_qtablewidget_itemdoubleclicked, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, item, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtablewidget_qtablewidget_itemactivated, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, item, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtablewidget_qtablewidget_itementered, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, item, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtablewidget_qtablewidget_itemchanged, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, item, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtablewidget_qtablewidget_currentitemchanged, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, current, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, previous, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtablewidget_qtablewidget_itemselectionchanged, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtablewidget_qtablewidget_cellpressed, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, row, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, column, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtablewidget_qtablewidget_cellclicked, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, row, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, column, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtablewidget_qtablewidget_celldoubleclicked, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, row, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, column, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtablewidget_qtablewidget_cellactivated, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, row, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, column, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtablewidget_qtablewidget_cellentered, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, row, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, column, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtablewidget_qtablewidget_cellchanged, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, row, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, column, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtablewidget_qtablewidget_currentcellchanged, 0, 5, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, currentRow, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, currentColumn, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, previousRow, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, previousColumn, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtablewidget_qtablewidget_event, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, e, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtablewidget_qtablewidget_mimetypes, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtablewidget_qtablewidget_mimedata, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_ARRAY_INFO(0, items, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtablewidget_qtablewidget_dropmimedata, 0, 5, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, row, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, column, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, data, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, action, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtablewidget_qtablewidget_supporteddropactions, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtablewidget_qtablewidget_dropevent, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, event, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_widgets_qtablewidget_qtablewidget_method_entry) {
	PHP_ME(Qt_Widgets_QTableWidget_QTableWidget, isPersistentEditorOpen, arginfo_qt_widgets_qtablewidget_qtablewidget_ispersistenteditoropen, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTableWidget_QTableWidget, staticMetaObject, arginfo_qt_widgets_qtablewidget_qtablewidget_staticmetaobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTableWidget_QTableWidget, tr, arginfo_qt_widgets_qtablewidget_qtablewidget_tr, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTableWidget_QTableWidget, new_, arginfo_qt_widgets_qtablewidget_qtablewidget_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTableWidget_QTableWidget, newIntIntQWidget, arginfo_qt_widgets_qtablewidget_qtablewidget_newintintqwidget, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTableWidget_QTableWidget, setRowCount, arginfo_qt_widgets_qtablewidget_qtablewidget_setrowcount, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTableWidget_QTableWidget, rowCount, arginfo_qt_widgets_qtablewidget_qtablewidget_rowcount, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTableWidget_QTableWidget, setColumnCount, arginfo_qt_widgets_qtablewidget_qtablewidget_setcolumncount, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTableWidget_QTableWidget, columnCount, arginfo_qt_widgets_qtablewidget_qtablewidget_columncount, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTableWidget_QTableWidget, row, arginfo_qt_widgets_qtablewidget_qtablewidget_row, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTableWidget_QTableWidget, column, arginfo_qt_widgets_qtablewidget_qtablewidget_column, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTableWidget_QTableWidget, item, arginfo_qt_widgets_qtablewidget_qtablewidget_item, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTableWidget_QTableWidget, setItem, arginfo_qt_widgets_qtablewidget_qtablewidget_setitem, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTableWidget_QTableWidget, takeItem, arginfo_qt_widgets_qtablewidget_qtablewidget_takeitem, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTableWidget_QTableWidget, items, arginfo_qt_widgets_qtablewidget_qtablewidget_items, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTableWidget_QTableWidget, indexFromItem, arginfo_qt_widgets_qtablewidget_qtablewidget_indexfromitem, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTableWidget_QTableWidget, itemFromIndex, arginfo_qt_widgets_qtablewidget_qtablewidget_itemfromindex, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTableWidget_QTableWidget, verticalHeaderItem, arginfo_qt_widgets_qtablewidget_qtablewidget_verticalheaderitem, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTableWidget_QTableWidget, setVerticalHeaderItem, arginfo_qt_widgets_qtablewidget_qtablewidget_setverticalheaderitem, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTableWidget_QTableWidget, takeVerticalHeaderItem, arginfo_qt_widgets_qtablewidget_qtablewidget_takeverticalheaderitem, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTableWidget_QTableWidget, horizontalHeaderItem, arginfo_qt_widgets_qtablewidget_qtablewidget_horizontalheaderitem, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTableWidget_QTableWidget, setHorizontalHeaderItem, arginfo_qt_widgets_qtablewidget_qtablewidget_sethorizontalheaderitem, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTableWidget_QTableWidget, takeHorizontalHeaderItem, arginfo_qt_widgets_qtablewidget_qtablewidget_takehorizontalheaderitem, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTableWidget_QTableWidget, setVerticalHeaderLabels, arginfo_qt_widgets_qtablewidget_qtablewidget_setverticalheaderlabels, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTableWidget_QTableWidget, setHorizontalHeaderLabels, arginfo_qt_widgets_qtablewidget_qtablewidget_sethorizontalheaderlabels, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTableWidget_QTableWidget, currentRow, arginfo_qt_widgets_qtablewidget_qtablewidget_currentrow, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTableWidget_QTableWidget, currentColumn, arginfo_qt_widgets_qtablewidget_qtablewidget_currentcolumn, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTableWidget_QTableWidget, currentItem, arginfo_qt_widgets_qtablewidget_qtablewidget_currentitem, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTableWidget_QTableWidget, setCurrentItem, arginfo_qt_widgets_qtablewidget_qtablewidget_setcurrentitem, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTableWidget_QTableWidget, setCurrentItemQTableWidgetItemQItemSelectionModelSelectionFlags, arginfo_qt_widgets_qtablewidget_qtablewidget_setcurrentitemqtablewidgetitemqitemselectionmodelselectionflags, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTableWidget_QTableWidget, setCurrentCell, arginfo_qt_widgets_qtablewidget_qtablewidget_setcurrentcell, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTableWidget_QTableWidget, setCurrentCellIntIntQItemSelectionModelSelectionFlags, arginfo_qt_widgets_qtablewidget_qtablewidget_setcurrentcellintintqitemselectionmodelselectionflags, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTableWidget_QTableWidget, sortItems, arginfo_qt_widgets_qtablewidget_qtablewidget_sortitems, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTableWidget_QTableWidget, setSortingEnabled, arginfo_qt_widgets_qtablewidget_qtablewidget_setsortingenabled, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTableWidget_QTableWidget, isSortingEnabled, arginfo_qt_widgets_qtablewidget_qtablewidget_issortingenabled, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTableWidget_QTableWidget, editItem, arginfo_qt_widgets_qtablewidget_qtablewidget_edititem, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTableWidget_QTableWidget, openPersistentEditor, arginfo_qt_widgets_qtablewidget_qtablewidget_openpersistenteditor, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTableWidget_QTableWidget, closePersistentEditor, arginfo_qt_widgets_qtablewidget_qtablewidget_closepersistenteditor, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTableWidget_QTableWidget, isPersistentEditorOpenQTableWidgetItem, arginfo_qt_widgets_qtablewidget_qtablewidget_ispersistenteditoropenqtablewidgetitem, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTableWidget_QTableWidget, cellWidget, arginfo_qt_widgets_qtablewidget_qtablewidget_cellwidget, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTableWidget_QTableWidget, setCellWidget, arginfo_qt_widgets_qtablewidget_qtablewidget_setcellwidget, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTableWidget_QTableWidget, removeCellWidget, arginfo_qt_widgets_qtablewidget_qtablewidget_removecellwidget, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTableWidget_QTableWidget, setRangeSelected, arginfo_qt_widgets_qtablewidget_qtablewidget_setrangeselected, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTableWidget_QTableWidget, selectedRanges, arginfo_qt_widgets_qtablewidget_qtablewidget_selectedranges, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTableWidget_QTableWidget, selectedItems, arginfo_qt_widgets_qtablewidget_qtablewidget_selecteditems, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTableWidget_QTableWidget, findItems, arginfo_qt_widgets_qtablewidget_qtablewidget_finditems, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTableWidget_QTableWidget, visualRow, arginfo_qt_widgets_qtablewidget_qtablewidget_visualrow, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTableWidget_QTableWidget, visualColumn, arginfo_qt_widgets_qtablewidget_qtablewidget_visualcolumn, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTableWidget_QTableWidget, itemAt, arginfo_qt_widgets_qtablewidget_qtablewidget_itemat, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTableWidget_QTableWidget, itemAtIntInt, arginfo_qt_widgets_qtablewidget_qtablewidget_itematintint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTableWidget_QTableWidget, visualItemRect, arginfo_qt_widgets_qtablewidget_qtablewidget_visualitemrect, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTableWidget_QTableWidget, itemPrototype, arginfo_qt_widgets_qtablewidget_qtablewidget_itemprototype, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTableWidget_QTableWidget, setItemPrototype, arginfo_qt_widgets_qtablewidget_qtablewidget_setitemprototype, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTableWidget_QTableWidget, scrollToItem, arginfo_qt_widgets_qtablewidget_qtablewidget_scrolltoitem, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTableWidget_QTableWidget, insertRow, arginfo_qt_widgets_qtablewidget_qtablewidget_insertrow, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTableWidget_QTableWidget, insertColumn, arginfo_qt_widgets_qtablewidget_qtablewidget_insertcolumn, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTableWidget_QTableWidget, removeRow, arginfo_qt_widgets_qtablewidget_qtablewidget_removerow, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTableWidget_QTableWidget, removeColumn, arginfo_qt_widgets_qtablewidget_qtablewidget_removecolumn, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTableWidget_QTableWidget, clear, arginfo_qt_widgets_qtablewidget_qtablewidget_clear, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTableWidget_QTableWidget, clearContents, arginfo_qt_widgets_qtablewidget_qtablewidget_clearcontents, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTableWidget_QTableWidget, itemPressed, arginfo_qt_widgets_qtablewidget_qtablewidget_itempressed, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTableWidget_QTableWidget, itemClicked, arginfo_qt_widgets_qtablewidget_qtablewidget_itemclicked, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTableWidget_QTableWidget, itemDoubleClicked, arginfo_qt_widgets_qtablewidget_qtablewidget_itemdoubleclicked, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTableWidget_QTableWidget, itemActivated, arginfo_qt_widgets_qtablewidget_qtablewidget_itemactivated, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTableWidget_QTableWidget, itemEntered, arginfo_qt_widgets_qtablewidget_qtablewidget_itementered, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTableWidget_QTableWidget, itemChanged, arginfo_qt_widgets_qtablewidget_qtablewidget_itemchanged, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTableWidget_QTableWidget, currentItemChanged, arginfo_qt_widgets_qtablewidget_qtablewidget_currentitemchanged, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTableWidget_QTableWidget, itemSelectionChanged, arginfo_qt_widgets_qtablewidget_qtablewidget_itemselectionchanged, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTableWidget_QTableWidget, cellPressed, arginfo_qt_widgets_qtablewidget_qtablewidget_cellpressed, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTableWidget_QTableWidget, cellClicked, arginfo_qt_widgets_qtablewidget_qtablewidget_cellclicked, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTableWidget_QTableWidget, cellDoubleClicked, arginfo_qt_widgets_qtablewidget_qtablewidget_celldoubleclicked, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTableWidget_QTableWidget, cellActivated, arginfo_qt_widgets_qtablewidget_qtablewidget_cellactivated, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTableWidget_QTableWidget, cellEntered, arginfo_qt_widgets_qtablewidget_qtablewidget_cellentered, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTableWidget_QTableWidget, cellChanged, arginfo_qt_widgets_qtablewidget_qtablewidget_cellchanged, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTableWidget_QTableWidget, currentCellChanged, arginfo_qt_widgets_qtablewidget_qtablewidget_currentcellchanged, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTableWidget_QTableWidget, event, arginfo_qt_widgets_qtablewidget_qtablewidget_event, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTableWidget_QTableWidget, mimeTypes, arginfo_qt_widgets_qtablewidget_qtablewidget_mimetypes, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTableWidget_QTableWidget, mimeData, arginfo_qt_widgets_qtablewidget_qtablewidget_mimedata, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTableWidget_QTableWidget, dropMimeData, arginfo_qt_widgets_qtablewidget_qtablewidget_dropmimedata, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTableWidget_QTableWidget, supportedDropActions, arginfo_qt_widgets_qtablewidget_qtablewidget_supporteddropactions, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTableWidget_QTableWidget, dropEvent, arginfo_qt_widgets_qtablewidget_qtablewidget_dropevent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
