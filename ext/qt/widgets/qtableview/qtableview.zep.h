
extern zend_class_entry *qt_widgets_qtableview_qtableview_ce;

ZEPHIR_INIT_CLASS(Qt_Widgets_QTableView_QTableView);

PHP_METHOD(Qt_Widgets_QTableView_QTableView, staticMetaObject);
PHP_METHOD(Qt_Widgets_QTableView_QTableView, tr);
PHP_METHOD(Qt_Widgets_QTableView_QTableView, new_);
PHP_METHOD(Qt_Widgets_QTableView_QTableView, setModel);
PHP_METHOD(Qt_Widgets_QTableView_QTableView, setRootIndex);
PHP_METHOD(Qt_Widgets_QTableView_QTableView, setSelectionModel);
PHP_METHOD(Qt_Widgets_QTableView_QTableView, doItemsLayout);
PHP_METHOD(Qt_Widgets_QTableView_QTableView, horizontalHeader);
PHP_METHOD(Qt_Widgets_QTableView_QTableView, verticalHeader);
PHP_METHOD(Qt_Widgets_QTableView_QTableView, setHorizontalHeader);
PHP_METHOD(Qt_Widgets_QTableView_QTableView, setVerticalHeader);
PHP_METHOD(Qt_Widgets_QTableView_QTableView, rowViewportPosition);
PHP_METHOD(Qt_Widgets_QTableView_QTableView, rowAt);
PHP_METHOD(Qt_Widgets_QTableView_QTableView, setRowHeight);
PHP_METHOD(Qt_Widgets_QTableView_QTableView, rowHeight);
PHP_METHOD(Qt_Widgets_QTableView_QTableView, columnViewportPosition);
PHP_METHOD(Qt_Widgets_QTableView_QTableView, columnAt);
PHP_METHOD(Qt_Widgets_QTableView_QTableView, setColumnWidth);
PHP_METHOD(Qt_Widgets_QTableView_QTableView, columnWidth);
PHP_METHOD(Qt_Widgets_QTableView_QTableView, isRowHidden);
PHP_METHOD(Qt_Widgets_QTableView_QTableView, setRowHidden);
PHP_METHOD(Qt_Widgets_QTableView_QTableView, isColumnHidden);
PHP_METHOD(Qt_Widgets_QTableView_QTableView, setColumnHidden);
PHP_METHOD(Qt_Widgets_QTableView_QTableView, setSortingEnabled);
PHP_METHOD(Qt_Widgets_QTableView_QTableView, isSortingEnabled);
PHP_METHOD(Qt_Widgets_QTableView_QTableView, showGrid);
PHP_METHOD(Qt_Widgets_QTableView_QTableView, gridStyle);
PHP_METHOD(Qt_Widgets_QTableView_QTableView, setGridStyle);
PHP_METHOD(Qt_Widgets_QTableView_QTableView, setWordWrap);
PHP_METHOD(Qt_Widgets_QTableView_QTableView, wordWrap);
PHP_METHOD(Qt_Widgets_QTableView_QTableView, setCornerButtonEnabled);
PHP_METHOD(Qt_Widgets_QTableView_QTableView, isCornerButtonEnabled);
PHP_METHOD(Qt_Widgets_QTableView_QTableView, visualRect);
PHP_METHOD(Qt_Widgets_QTableView_QTableView, scrollTo);
PHP_METHOD(Qt_Widgets_QTableView_QTableView, indexAt);
PHP_METHOD(Qt_Widgets_QTableView_QTableView, setSpan);
PHP_METHOD(Qt_Widgets_QTableView_QTableView, rowSpan);
PHP_METHOD(Qt_Widgets_QTableView_QTableView, columnSpan);
PHP_METHOD(Qt_Widgets_QTableView_QTableView, clearSpans);
PHP_METHOD(Qt_Widgets_QTableView_QTableView, selectRow);
PHP_METHOD(Qt_Widgets_QTableView_QTableView, selectColumn);
PHP_METHOD(Qt_Widgets_QTableView_QTableView, hideRow);
PHP_METHOD(Qt_Widgets_QTableView_QTableView, hideColumn);
PHP_METHOD(Qt_Widgets_QTableView_QTableView, showRow);
PHP_METHOD(Qt_Widgets_QTableView_QTableView, showColumn);
PHP_METHOD(Qt_Widgets_QTableView_QTableView, resizeRowToContents);
PHP_METHOD(Qt_Widgets_QTableView_QTableView, resizeRowsToContents);
PHP_METHOD(Qt_Widgets_QTableView_QTableView, resizeColumnToContents);
PHP_METHOD(Qt_Widgets_QTableView_QTableView, resizeColumnsToContents);
PHP_METHOD(Qt_Widgets_QTableView_QTableView, sortByColumn);
PHP_METHOD(Qt_Widgets_QTableView_QTableView, setShowGrid);
PHP_METHOD(Qt_Widgets_QTableView_QTableView, rowMoved);
PHP_METHOD(Qt_Widgets_QTableView_QTableView, columnMoved);
PHP_METHOD(Qt_Widgets_QTableView_QTableView, rowResized);
PHP_METHOD(Qt_Widgets_QTableView_QTableView, columnResized);
PHP_METHOD(Qt_Widgets_QTableView_QTableView, rowCountChanged);
PHP_METHOD(Qt_Widgets_QTableView_QTableView, columnCountChanged);
PHP_METHOD(Qt_Widgets_QTableView_QTableView, scrollContentsBy);
PHP_METHOD(Qt_Widgets_QTableView_QTableView, initViewItemOption);
PHP_METHOD(Qt_Widgets_QTableView_QTableView, paintEvent);
PHP_METHOD(Qt_Widgets_QTableView_QTableView, timerEvent);
PHP_METHOD(Qt_Widgets_QTableView_QTableView, dropEvent);
PHP_METHOD(Qt_Widgets_QTableView_QTableView, horizontalOffset);
PHP_METHOD(Qt_Widgets_QTableView_QTableView, verticalOffset);
PHP_METHOD(Qt_Widgets_QTableView_QTableView, moveCursor);
PHP_METHOD(Qt_Widgets_QTableView_QTableView, setSelection);
PHP_METHOD(Qt_Widgets_QTableView_QTableView, visualRegionForSelection);
PHP_METHOD(Qt_Widgets_QTableView_QTableView, selectedIndexes);
PHP_METHOD(Qt_Widgets_QTableView_QTableView, updateGeometries);
PHP_METHOD(Qt_Widgets_QTableView_QTableView, viewportSizeHint);
PHP_METHOD(Qt_Widgets_QTableView_QTableView, sizeHintForRow);
PHP_METHOD(Qt_Widgets_QTableView_QTableView, sizeHintForColumn);
PHP_METHOD(Qt_Widgets_QTableView_QTableView, verticalScrollbarAction);
PHP_METHOD(Qt_Widgets_QTableView_QTableView, horizontalScrollbarAction);
PHP_METHOD(Qt_Widgets_QTableView_QTableView, isIndexHidden);
PHP_METHOD(Qt_Widgets_QTableView_QTableView, selectionChanged);
PHP_METHOD(Qt_Widgets_QTableView_QTableView, currentChanged);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtableview_qtableview_staticmetaobject, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtableview_qtableview_tr, 0, 1, IS_STRING, 0)
	ZEND_ARG_INFO(0, s)
	ZEND_ARG_INFO(0, c)
	ZEND_ARG_TYPE_INFO(0, n, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtableview_qtableview_new_, 0, 0, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtableview_qtableview_setmodel, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, model, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtableview_qtableview_setrootindex, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtableview_qtableview_setselectionmodel, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selectionModel, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtableview_qtableview_doitemslayout, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtableview_qtableview_horizontalheader, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtableview_qtableview_verticalheader, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtableview_qtableview_sethorizontalheader, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, header, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtableview_qtableview_setverticalheader, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, header, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtableview_qtableview_rowviewportposition, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, row, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtableview_qtableview_rowat, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtableview_qtableview_setrowheight, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, row, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, height, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtableview_qtableview_rowheight, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, row, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtableview_qtableview_columnviewportposition, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, column, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtableview_qtableview_columnat, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtableview_qtableview_setcolumnwidth, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, column, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtableview_qtableview_columnwidth, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, column, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtableview_qtableview_isrowhidden, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, row, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtableview_qtableview_setrowhidden, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, row, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, hide, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtableview_qtableview_iscolumnhidden, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, column, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtableview_qtableview_setcolumnhidden, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, column, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, hide, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtableview_qtableview_setsortingenabled, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, enable, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtableview_qtableview_issortingenabled, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtableview_qtableview_showgrid, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtableview_qtableview_gridstyle, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtableview_qtableview_setgridstyle, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, style, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtableview_qtableview_setwordwrap, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, on, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtableview_qtableview_wordwrap, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtableview_qtableview_setcornerbuttonenabled, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, enable, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtableview_qtableview_iscornerbuttonenabled, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtableview_qtableview_visualrect, 0, 2, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtableview_qtableview_scrollto, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
	ZEND_ARG_INFO(0, hint)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtableview_qtableview_indexat, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, pX, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, pY, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtableview_qtableview_setspan, 0, 5, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, row, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, column, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rowSpan, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, columnSpan, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtableview_qtableview_rowspan, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, row, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, column, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtableview_qtableview_columnspan, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, row, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, column, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtableview_qtableview_clearspans, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtableview_qtableview_selectrow, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, row, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtableview_qtableview_selectcolumn, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, column, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtableview_qtableview_hiderow, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, row, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtableview_qtableview_hidecolumn, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, column, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtableview_qtableview_showrow, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, row, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtableview_qtableview_showcolumn, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, column, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtableview_qtableview_resizerowtocontents, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, row, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtableview_qtableview_resizerowstocontents, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtableview_qtableview_resizecolumntocontents, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, column, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtableview_qtableview_resizecolumnstocontents, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtableview_qtableview_sortbycolumn, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, column, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, order, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtableview_qtableview_setshowgrid, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, show, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtableview_qtableview_rowmoved, 0, 4, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, row, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, oldIndex, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, newIndex, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtableview_qtableview_columnmoved, 0, 4, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, column, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, oldIndex, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, newIndex, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtableview_qtableview_rowresized, 0, 4, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, row, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, oldHeight, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, newHeight, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtableview_qtableview_columnresized, 0, 4, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, column, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, oldWidth, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, newWidth, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtableview_qtableview_rowcountchanged, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, oldCount, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, newCount, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtableview_qtableview_columncountchanged, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, oldCount, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, newCount, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtableview_qtableview_scrollcontentsby, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, dx, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, dy, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtableview_qtableview_initviewitemoption, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, option, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtableview_qtableview_paintevent, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, e, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtableview_qtableview_timerevent, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, event, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtableview_qtableview_dropevent, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, event, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtableview_qtableview_horizontaloffset, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtableview_qtableview_verticaloffset, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtableview_qtableview_movecursor, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, cursorAction, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, modifiers, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtableview_qtableview_setselection, 0, 6, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rectX, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rectY, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rectWidth, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rectHeight, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, command, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtableview_qtableview_visualregionforselection, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selection, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtableview_qtableview_selectedindexes, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtableview_qtableview_updategeometries, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtableview_qtableview_viewportsizehint, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtableview_qtableview_sizehintforrow, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, row, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtableview_qtableview_sizehintforcolumn, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, column, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtableview_qtableview_verticalscrollbaraction, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, action, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtableview_qtableview_horizontalscrollbaraction, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, action, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtableview_qtableview_isindexhidden, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtableview_qtableview_selectionchanged, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selected, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, deselected, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtableview_qtableview_currentchanged, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, current, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, previous, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_widgets_qtableview_qtableview_method_entry) {
	PHP_ME(Qt_Widgets_QTableView_QTableView, staticMetaObject, arginfo_qt_widgets_qtableview_qtableview_staticmetaobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTableView_QTableView, tr, arginfo_qt_widgets_qtableview_qtableview_tr, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTableView_QTableView, new_, arginfo_qt_widgets_qtableview_qtableview_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTableView_QTableView, setModel, arginfo_qt_widgets_qtableview_qtableview_setmodel, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTableView_QTableView, setRootIndex, arginfo_qt_widgets_qtableview_qtableview_setrootindex, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTableView_QTableView, setSelectionModel, arginfo_qt_widgets_qtableview_qtableview_setselectionmodel, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTableView_QTableView, doItemsLayout, arginfo_qt_widgets_qtableview_qtableview_doitemslayout, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTableView_QTableView, horizontalHeader, arginfo_qt_widgets_qtableview_qtableview_horizontalheader, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTableView_QTableView, verticalHeader, arginfo_qt_widgets_qtableview_qtableview_verticalheader, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTableView_QTableView, setHorizontalHeader, arginfo_qt_widgets_qtableview_qtableview_sethorizontalheader, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTableView_QTableView, setVerticalHeader, arginfo_qt_widgets_qtableview_qtableview_setverticalheader, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTableView_QTableView, rowViewportPosition, arginfo_qt_widgets_qtableview_qtableview_rowviewportposition, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTableView_QTableView, rowAt, arginfo_qt_widgets_qtableview_qtableview_rowat, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTableView_QTableView, setRowHeight, arginfo_qt_widgets_qtableview_qtableview_setrowheight, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTableView_QTableView, rowHeight, arginfo_qt_widgets_qtableview_qtableview_rowheight, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTableView_QTableView, columnViewportPosition, arginfo_qt_widgets_qtableview_qtableview_columnviewportposition, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTableView_QTableView, columnAt, arginfo_qt_widgets_qtableview_qtableview_columnat, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTableView_QTableView, setColumnWidth, arginfo_qt_widgets_qtableview_qtableview_setcolumnwidth, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTableView_QTableView, columnWidth, arginfo_qt_widgets_qtableview_qtableview_columnwidth, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTableView_QTableView, isRowHidden, arginfo_qt_widgets_qtableview_qtableview_isrowhidden, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTableView_QTableView, setRowHidden, arginfo_qt_widgets_qtableview_qtableview_setrowhidden, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTableView_QTableView, isColumnHidden, arginfo_qt_widgets_qtableview_qtableview_iscolumnhidden, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTableView_QTableView, setColumnHidden, arginfo_qt_widgets_qtableview_qtableview_setcolumnhidden, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTableView_QTableView, setSortingEnabled, arginfo_qt_widgets_qtableview_qtableview_setsortingenabled, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTableView_QTableView, isSortingEnabled, arginfo_qt_widgets_qtableview_qtableview_issortingenabled, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTableView_QTableView, showGrid, arginfo_qt_widgets_qtableview_qtableview_showgrid, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTableView_QTableView, gridStyle, arginfo_qt_widgets_qtableview_qtableview_gridstyle, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTableView_QTableView, setGridStyle, arginfo_qt_widgets_qtableview_qtableview_setgridstyle, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTableView_QTableView, setWordWrap, arginfo_qt_widgets_qtableview_qtableview_setwordwrap, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTableView_QTableView, wordWrap, arginfo_qt_widgets_qtableview_qtableview_wordwrap, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTableView_QTableView, setCornerButtonEnabled, arginfo_qt_widgets_qtableview_qtableview_setcornerbuttonenabled, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTableView_QTableView, isCornerButtonEnabled, arginfo_qt_widgets_qtableview_qtableview_iscornerbuttonenabled, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTableView_QTableView, visualRect, arginfo_qt_widgets_qtableview_qtableview_visualrect, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTableView_QTableView, scrollTo, arginfo_qt_widgets_qtableview_qtableview_scrollto, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTableView_QTableView, indexAt, arginfo_qt_widgets_qtableview_qtableview_indexat, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTableView_QTableView, setSpan, arginfo_qt_widgets_qtableview_qtableview_setspan, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTableView_QTableView, rowSpan, arginfo_qt_widgets_qtableview_qtableview_rowspan, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTableView_QTableView, columnSpan, arginfo_qt_widgets_qtableview_qtableview_columnspan, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTableView_QTableView, clearSpans, arginfo_qt_widgets_qtableview_qtableview_clearspans, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTableView_QTableView, selectRow, arginfo_qt_widgets_qtableview_qtableview_selectrow, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTableView_QTableView, selectColumn, arginfo_qt_widgets_qtableview_qtableview_selectcolumn, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTableView_QTableView, hideRow, arginfo_qt_widgets_qtableview_qtableview_hiderow, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTableView_QTableView, hideColumn, arginfo_qt_widgets_qtableview_qtableview_hidecolumn, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTableView_QTableView, showRow, arginfo_qt_widgets_qtableview_qtableview_showrow, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTableView_QTableView, showColumn, arginfo_qt_widgets_qtableview_qtableview_showcolumn, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTableView_QTableView, resizeRowToContents, arginfo_qt_widgets_qtableview_qtableview_resizerowtocontents, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTableView_QTableView, resizeRowsToContents, arginfo_qt_widgets_qtableview_qtableview_resizerowstocontents, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTableView_QTableView, resizeColumnToContents, arginfo_qt_widgets_qtableview_qtableview_resizecolumntocontents, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTableView_QTableView, resizeColumnsToContents, arginfo_qt_widgets_qtableview_qtableview_resizecolumnstocontents, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTableView_QTableView, sortByColumn, arginfo_qt_widgets_qtableview_qtableview_sortbycolumn, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTableView_QTableView, setShowGrid, arginfo_qt_widgets_qtableview_qtableview_setshowgrid, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTableView_QTableView, rowMoved, arginfo_qt_widgets_qtableview_qtableview_rowmoved, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTableView_QTableView, columnMoved, arginfo_qt_widgets_qtableview_qtableview_columnmoved, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTableView_QTableView, rowResized, arginfo_qt_widgets_qtableview_qtableview_rowresized, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTableView_QTableView, columnResized, arginfo_qt_widgets_qtableview_qtableview_columnresized, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTableView_QTableView, rowCountChanged, arginfo_qt_widgets_qtableview_qtableview_rowcountchanged, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTableView_QTableView, columnCountChanged, arginfo_qt_widgets_qtableview_qtableview_columncountchanged, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTableView_QTableView, scrollContentsBy, arginfo_qt_widgets_qtableview_qtableview_scrollcontentsby, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTableView_QTableView, initViewItemOption, arginfo_qt_widgets_qtableview_qtableview_initviewitemoption, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTableView_QTableView, paintEvent, arginfo_qt_widgets_qtableview_qtableview_paintevent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTableView_QTableView, timerEvent, arginfo_qt_widgets_qtableview_qtableview_timerevent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTableView_QTableView, dropEvent, arginfo_qt_widgets_qtableview_qtableview_dropevent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTableView_QTableView, horizontalOffset, arginfo_qt_widgets_qtableview_qtableview_horizontaloffset, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTableView_QTableView, verticalOffset, arginfo_qt_widgets_qtableview_qtableview_verticaloffset, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTableView_QTableView, moveCursor, arginfo_qt_widgets_qtableview_qtableview_movecursor, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTableView_QTableView, setSelection, arginfo_qt_widgets_qtableview_qtableview_setselection, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTableView_QTableView, visualRegionForSelection, arginfo_qt_widgets_qtableview_qtableview_visualregionforselection, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTableView_QTableView, selectedIndexes, arginfo_qt_widgets_qtableview_qtableview_selectedindexes, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTableView_QTableView, updateGeometries, arginfo_qt_widgets_qtableview_qtableview_updategeometries, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTableView_QTableView, viewportSizeHint, arginfo_qt_widgets_qtableview_qtableview_viewportsizehint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTableView_QTableView, sizeHintForRow, arginfo_qt_widgets_qtableview_qtableview_sizehintforrow, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTableView_QTableView, sizeHintForColumn, arginfo_qt_widgets_qtableview_qtableview_sizehintforcolumn, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTableView_QTableView, verticalScrollbarAction, arginfo_qt_widgets_qtableview_qtableview_verticalscrollbaraction, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTableView_QTableView, horizontalScrollbarAction, arginfo_qt_widgets_qtableview_qtableview_horizontalscrollbaraction, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTableView_QTableView, isIndexHidden, arginfo_qt_widgets_qtableview_qtableview_isindexhidden, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTableView_QTableView, selectionChanged, arginfo_qt_widgets_qtableview_qtableview_selectionchanged, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTableView_QTableView, currentChanged, arginfo_qt_widgets_qtableview_qtableview_currentchanged, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
