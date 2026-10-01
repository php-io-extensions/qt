
extern zend_class_entry *qt_widgets_qcolumnview_qcolumnview_ce;

ZEPHIR_INIT_CLASS(Qt_Widgets_QColumnView_QColumnView);

PHP_METHOD(Qt_Widgets_QColumnView_QColumnView, staticMetaObject);
PHP_METHOD(Qt_Widgets_QColumnView_QColumnView, tr);
PHP_METHOD(Qt_Widgets_QColumnView_QColumnView, updatePreviewWidget);
PHP_METHOD(Qt_Widgets_QColumnView_QColumnView, new_);
PHP_METHOD(Qt_Widgets_QColumnView_QColumnView, indexAt);
PHP_METHOD(Qt_Widgets_QColumnView_QColumnView, scrollTo);
PHP_METHOD(Qt_Widgets_QColumnView_QColumnView, sizeHint);
PHP_METHOD(Qt_Widgets_QColumnView_QColumnView, visualRect);
PHP_METHOD(Qt_Widgets_QColumnView_QColumnView, setModel);
PHP_METHOD(Qt_Widgets_QColumnView_QColumnView, setSelectionModel);
PHP_METHOD(Qt_Widgets_QColumnView_QColumnView, setRootIndex);
PHP_METHOD(Qt_Widgets_QColumnView_QColumnView, selectAll);
PHP_METHOD(Qt_Widgets_QColumnView_QColumnView, setResizeGripsVisible);
PHP_METHOD(Qt_Widgets_QColumnView_QColumnView, resizeGripsVisible);
PHP_METHOD(Qt_Widgets_QColumnView_QColumnView, previewWidget);
PHP_METHOD(Qt_Widgets_QColumnView_QColumnView, setPreviewWidget);
PHP_METHOD(Qt_Widgets_QColumnView_QColumnView, setColumnWidths);
PHP_METHOD(Qt_Widgets_QColumnView_QColumnView, columnWidths);
PHP_METHOD(Qt_Widgets_QColumnView_QColumnView, isIndexHidden);
PHP_METHOD(Qt_Widgets_QColumnView_QColumnView, moveCursor);
PHP_METHOD(Qt_Widgets_QColumnView_QColumnView, resizeEvent);
PHP_METHOD(Qt_Widgets_QColumnView_QColumnView, setSelection);
PHP_METHOD(Qt_Widgets_QColumnView_QColumnView, visualRegionForSelection);
PHP_METHOD(Qt_Widgets_QColumnView_QColumnView, horizontalOffset);
PHP_METHOD(Qt_Widgets_QColumnView_QColumnView, verticalOffset);
PHP_METHOD(Qt_Widgets_QColumnView_QColumnView, rowsInserted);
PHP_METHOD(Qt_Widgets_QColumnView_QColumnView, currentChanged);
PHP_METHOD(Qt_Widgets_QColumnView_QColumnView, scrollContentsBy);
PHP_METHOD(Qt_Widgets_QColumnView_QColumnView, createColumn);
PHP_METHOD(Qt_Widgets_QColumnView_QColumnView, initializeColumn);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qcolumnview_qcolumnview_staticmetaobject, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qcolumnview_qcolumnview_tr, 0, 1, IS_STRING, 0)
	ZEND_ARG_INFO(0, s)
	ZEND_ARG_INFO(0, c)
	ZEND_ARG_TYPE_INFO(0, n, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qcolumnview_qcolumnview_updatepreviewwidget, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qcolumnview_qcolumnview_new_, 0, 0, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qcolumnview_qcolumnview_indexat, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, pointX, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, pointY, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qcolumnview_qcolumnview_scrollto, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
	ZEND_ARG_INFO(0, hint)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qcolumnview_qcolumnview_sizehint, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qcolumnview_qcolumnview_visualrect, 0, 2, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qcolumnview_qcolumnview_setmodel, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, model, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qcolumnview_qcolumnview_setselectionmodel, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selectionModel, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qcolumnview_qcolumnview_setrootindex, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qcolumnview_qcolumnview_selectall, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qcolumnview_qcolumnview_setresizegripsvisible, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, visible, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qcolumnview_qcolumnview_resizegripsvisible, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qcolumnview_qcolumnview_previewwidget, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qcolumnview_qcolumnview_setpreviewwidget, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, widget, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qcolumnview_qcolumnview_setcolumnwidths, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_ARRAY_INFO(0, list_, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qcolumnview_qcolumnview_columnwidths, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qcolumnview_qcolumnview_isindexhidden, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qcolumnview_qcolumnview_movecursor, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, cursorAction, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, modifiers, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qcolumnview_qcolumnview_resizeevent, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, event, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qcolumnview_qcolumnview_setselection, 0, 6, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rectX, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rectY, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rectWidth, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rectHeight, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, command, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qcolumnview_qcolumnview_visualregionforselection, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selection, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qcolumnview_qcolumnview_horizontaloffset, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qcolumnview_qcolumnview_verticaloffset, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qcolumnview_qcolumnview_rowsinserted, 0, 4, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, start, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, end, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qcolumnview_qcolumnview_currentchanged, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, current, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, previous, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qcolumnview_qcolumnview_scrollcontentsby, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, dx, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, dy, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qcolumnview_qcolumnview_createcolumn, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rootIndex, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qcolumnview_qcolumnview_initializecolumn, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, column, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_widgets_qcolumnview_qcolumnview_method_entry) {
	PHP_ME(Qt_Widgets_QColumnView_QColumnView, staticMetaObject, arginfo_qt_widgets_qcolumnview_qcolumnview_staticmetaobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QColumnView_QColumnView, tr, arginfo_qt_widgets_qcolumnview_qcolumnview_tr, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QColumnView_QColumnView, updatePreviewWidget, arginfo_qt_widgets_qcolumnview_qcolumnview_updatepreviewwidget, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QColumnView_QColumnView, new_, arginfo_qt_widgets_qcolumnview_qcolumnview_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QColumnView_QColumnView, indexAt, arginfo_qt_widgets_qcolumnview_qcolumnview_indexat, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QColumnView_QColumnView, scrollTo, arginfo_qt_widgets_qcolumnview_qcolumnview_scrollto, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QColumnView_QColumnView, sizeHint, arginfo_qt_widgets_qcolumnview_qcolumnview_sizehint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QColumnView_QColumnView, visualRect, arginfo_qt_widgets_qcolumnview_qcolumnview_visualrect, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QColumnView_QColumnView, setModel, arginfo_qt_widgets_qcolumnview_qcolumnview_setmodel, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QColumnView_QColumnView, setSelectionModel, arginfo_qt_widgets_qcolumnview_qcolumnview_setselectionmodel, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QColumnView_QColumnView, setRootIndex, arginfo_qt_widgets_qcolumnview_qcolumnview_setrootindex, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QColumnView_QColumnView, selectAll, arginfo_qt_widgets_qcolumnview_qcolumnview_selectall, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QColumnView_QColumnView, setResizeGripsVisible, arginfo_qt_widgets_qcolumnview_qcolumnview_setresizegripsvisible, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QColumnView_QColumnView, resizeGripsVisible, arginfo_qt_widgets_qcolumnview_qcolumnview_resizegripsvisible, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QColumnView_QColumnView, previewWidget, arginfo_qt_widgets_qcolumnview_qcolumnview_previewwidget, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QColumnView_QColumnView, setPreviewWidget, arginfo_qt_widgets_qcolumnview_qcolumnview_setpreviewwidget, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QColumnView_QColumnView, setColumnWidths, arginfo_qt_widgets_qcolumnview_qcolumnview_setcolumnwidths, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QColumnView_QColumnView, columnWidths, arginfo_qt_widgets_qcolumnview_qcolumnview_columnwidths, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QColumnView_QColumnView, isIndexHidden, arginfo_qt_widgets_qcolumnview_qcolumnview_isindexhidden, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QColumnView_QColumnView, moveCursor, arginfo_qt_widgets_qcolumnview_qcolumnview_movecursor, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QColumnView_QColumnView, resizeEvent, arginfo_qt_widgets_qcolumnview_qcolumnview_resizeevent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QColumnView_QColumnView, setSelection, arginfo_qt_widgets_qcolumnview_qcolumnview_setselection, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QColumnView_QColumnView, visualRegionForSelection, arginfo_qt_widgets_qcolumnview_qcolumnview_visualregionforselection, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QColumnView_QColumnView, horizontalOffset, arginfo_qt_widgets_qcolumnview_qcolumnview_horizontaloffset, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QColumnView_QColumnView, verticalOffset, arginfo_qt_widgets_qcolumnview_qcolumnview_verticaloffset, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QColumnView_QColumnView, rowsInserted, arginfo_qt_widgets_qcolumnview_qcolumnview_rowsinserted, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QColumnView_QColumnView, currentChanged, arginfo_qt_widgets_qcolumnview_qcolumnview_currentchanged, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QColumnView_QColumnView, scrollContentsBy, arginfo_qt_widgets_qcolumnview_qcolumnview_scrollcontentsby, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QColumnView_QColumnView, createColumn, arginfo_qt_widgets_qcolumnview_qcolumnview_createcolumn, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QColumnView_QColumnView, initializeColumn, arginfo_qt_widgets_qcolumnview_qcolumnview_initializecolumn, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
