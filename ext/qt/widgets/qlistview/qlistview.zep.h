
extern zend_class_entry *qt_widgets_qlistview_qlistview_ce;

ZEPHIR_INIT_CLASS(Qt_Widgets_QListView_QListView);

PHP_METHOD(Qt_Widgets_QListView_QListView, staticMetaObject);
PHP_METHOD(Qt_Widgets_QListView_QListView, tr);
PHP_METHOD(Qt_Widgets_QListView_QListView, new_);
PHP_METHOD(Qt_Widgets_QListView_QListView, setMovement);
PHP_METHOD(Qt_Widgets_QListView_QListView, movement);
PHP_METHOD(Qt_Widgets_QListView_QListView, setFlow);
PHP_METHOD(Qt_Widgets_QListView_QListView, flow);
PHP_METHOD(Qt_Widgets_QListView_QListView, setWrapping);
PHP_METHOD(Qt_Widgets_QListView_QListView, isWrapping);
PHP_METHOD(Qt_Widgets_QListView_QListView, setResizeMode);
PHP_METHOD(Qt_Widgets_QListView_QListView, resizeMode);
PHP_METHOD(Qt_Widgets_QListView_QListView, setLayoutMode);
PHP_METHOD(Qt_Widgets_QListView_QListView, layoutMode);
PHP_METHOD(Qt_Widgets_QListView_QListView, setSpacing);
PHP_METHOD(Qt_Widgets_QListView_QListView, spacing);
PHP_METHOD(Qt_Widgets_QListView_QListView, setBatchSize);
PHP_METHOD(Qt_Widgets_QListView_QListView, batchSize);
PHP_METHOD(Qt_Widgets_QListView_QListView, setGridSize);
PHP_METHOD(Qt_Widgets_QListView_QListView, gridSize);
PHP_METHOD(Qt_Widgets_QListView_QListView, setViewMode);
PHP_METHOD(Qt_Widgets_QListView_QListView, viewMode);
PHP_METHOD(Qt_Widgets_QListView_QListView, clearPropertyFlags);
PHP_METHOD(Qt_Widgets_QListView_QListView, isRowHidden);
PHP_METHOD(Qt_Widgets_QListView_QListView, setRowHidden);
PHP_METHOD(Qt_Widgets_QListView_QListView, setModelColumn);
PHP_METHOD(Qt_Widgets_QListView_QListView, modelColumn);
PHP_METHOD(Qt_Widgets_QListView_QListView, setUniformItemSizes);
PHP_METHOD(Qt_Widgets_QListView_QListView, uniformItemSizes);
PHP_METHOD(Qt_Widgets_QListView_QListView, setWordWrap);
PHP_METHOD(Qt_Widgets_QListView_QListView, wordWrap);
PHP_METHOD(Qt_Widgets_QListView_QListView, setSelectionRectVisible);
PHP_METHOD(Qt_Widgets_QListView_QListView, isSelectionRectVisible);
PHP_METHOD(Qt_Widgets_QListView_QListView, setItemAlignment);
PHP_METHOD(Qt_Widgets_QListView_QListView, itemAlignment);
PHP_METHOD(Qt_Widgets_QListView_QListView, visualRect);
PHP_METHOD(Qt_Widgets_QListView_QListView, scrollTo);
PHP_METHOD(Qt_Widgets_QListView_QListView, indexAt);
PHP_METHOD(Qt_Widgets_QListView_QListView, doItemsLayout);
PHP_METHOD(Qt_Widgets_QListView_QListView, reset);
PHP_METHOD(Qt_Widgets_QListView_QListView, setRootIndex);
PHP_METHOD(Qt_Widgets_QListView_QListView, indexesMoved);
PHP_METHOD(Qt_Widgets_QListView_QListView, event);
PHP_METHOD(Qt_Widgets_QListView_QListView, scrollContentsBy);
PHP_METHOD(Qt_Widgets_QListView_QListView, resizeContents);
PHP_METHOD(Qt_Widgets_QListView_QListView, contentsSize);
PHP_METHOD(Qt_Widgets_QListView_QListView, dataChanged);
PHP_METHOD(Qt_Widgets_QListView_QListView, rowsInserted);
PHP_METHOD(Qt_Widgets_QListView_QListView, rowsAboutToBeRemoved);
PHP_METHOD(Qt_Widgets_QListView_QListView, mouseMoveEvent);
PHP_METHOD(Qt_Widgets_QListView_QListView, mouseReleaseEvent);
PHP_METHOD(Qt_Widgets_QListView_QListView, wheelEvent);
PHP_METHOD(Qt_Widgets_QListView_QListView, timerEvent);
PHP_METHOD(Qt_Widgets_QListView_QListView, resizeEvent);
PHP_METHOD(Qt_Widgets_QListView_QListView, dragMoveEvent);
PHP_METHOD(Qt_Widgets_QListView_QListView, dragLeaveEvent);
PHP_METHOD(Qt_Widgets_QListView_QListView, dropEvent);
PHP_METHOD(Qt_Widgets_QListView_QListView, startDrag);
PHP_METHOD(Qt_Widgets_QListView_QListView, initViewItemOption);
PHP_METHOD(Qt_Widgets_QListView_QListView, paintEvent);
PHP_METHOD(Qt_Widgets_QListView_QListView, horizontalOffset);
PHP_METHOD(Qt_Widgets_QListView_QListView, verticalOffset);
PHP_METHOD(Qt_Widgets_QListView_QListView, moveCursor);
PHP_METHOD(Qt_Widgets_QListView_QListView, rectForIndex);
PHP_METHOD(Qt_Widgets_QListView_QListView, setPositionForIndex);
PHP_METHOD(Qt_Widgets_QListView_QListView, setSelection);
PHP_METHOD(Qt_Widgets_QListView_QListView, visualRegionForSelection);
PHP_METHOD(Qt_Widgets_QListView_QListView, selectedIndexes);
PHP_METHOD(Qt_Widgets_QListView_QListView, updateGeometries);
PHP_METHOD(Qt_Widgets_QListView_QListView, isIndexHidden);
PHP_METHOD(Qt_Widgets_QListView_QListView, selectionChanged);
PHP_METHOD(Qt_Widgets_QListView_QListView, currentChanged);
PHP_METHOD(Qt_Widgets_QListView_QListView, viewportSizeHint);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qlistview_qlistview_staticmetaobject, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qlistview_qlistview_tr, 0, 1, IS_STRING, 0)
	ZEND_ARG_INFO(0, s)
	ZEND_ARG_INFO(0, c)
	ZEND_ARG_TYPE_INFO(0, n, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qlistview_qlistview_new_, 0, 0, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qlistview_qlistview_setmovement, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, movement, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qlistview_qlistview_movement, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qlistview_qlistview_setflow, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, flow, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qlistview_qlistview_flow, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qlistview_qlistview_setwrapping, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, enable, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qlistview_qlistview_iswrapping, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qlistview_qlistview_setresizemode, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, mode, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qlistview_qlistview_resizemode, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qlistview_qlistview_setlayoutmode, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, mode, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qlistview_qlistview_layoutmode, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qlistview_qlistview_setspacing, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, space, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qlistview_qlistview_spacing, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qlistview_qlistview_setbatchsize, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, batchSize, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qlistview_qlistview_batchsize, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qlistview_qlistview_setgridsize, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sizeWidth, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sizeHeight, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qlistview_qlistview_gridsize, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qlistview_qlistview_setviewmode, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, mode, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qlistview_qlistview_viewmode, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qlistview_qlistview_clearpropertyflags, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qlistview_qlistview_isrowhidden, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, row, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qlistview_qlistview_setrowhidden, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, row, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, hide, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qlistview_qlistview_setmodelcolumn, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, column, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qlistview_qlistview_modelcolumn, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qlistview_qlistview_setuniformitemsizes, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, enable, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qlistview_qlistview_uniformitemsizes, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qlistview_qlistview_setwordwrap, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, on, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qlistview_qlistview_wordwrap, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qlistview_qlistview_setselectionrectvisible, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, show, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qlistview_qlistview_isselectionrectvisible, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qlistview_qlistview_setitemalignment, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, alignment, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qlistview_qlistview_itemalignment, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qlistview_qlistview_visualrect, 0, 2, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qlistview_qlistview_scrollto, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
	ZEND_ARG_INFO(0, hint)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qlistview_qlistview_indexat, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, pX, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, pY, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qlistview_qlistview_doitemslayout, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qlistview_qlistview_reset, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qlistview_qlistview_setrootindex, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qlistview_qlistview_indexesmoved, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_ARRAY_INFO(0, indexes, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qlistview_qlistview_event, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, e, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qlistview_qlistview_scrollcontentsby, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, dx, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, dy, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qlistview_qlistview_resizecontents, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, height, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qlistview_qlistview_contentssize, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qlistview_qlistview_datachanged, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, topLeft, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, bottomRight, IS_LONG, 0)
	ZEND_ARG_INFO(0, roles)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qlistview_qlistview_rowsinserted, 0, 4, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, start, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, end, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qlistview_qlistview_rowsabouttoberemoved, 0, 4, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, start, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, end, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qlistview_qlistview_mousemoveevent, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, e, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qlistview_qlistview_mousereleaseevent, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, e, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qlistview_qlistview_wheelevent, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, e, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qlistview_qlistview_timerevent, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, e, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qlistview_qlistview_resizeevent, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, e, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qlistview_qlistview_dragmoveevent, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, e, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qlistview_qlistview_dragleaveevent, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, e, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qlistview_qlistview_dropevent, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, e, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qlistview_qlistview_startdrag, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, supportedActions, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qlistview_qlistview_initviewitemoption, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, option, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qlistview_qlistview_paintevent, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, e, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qlistview_qlistview_horizontaloffset, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qlistview_qlistview_verticaloffset, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qlistview_qlistview_movecursor, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, cursorAction, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, modifiers, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qlistview_qlistview_rectforindex, 0, 2, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qlistview_qlistview_setpositionforindex, 0, 4, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, positionX, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, positionY, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qlistview_qlistview_setselection, 0, 6, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rectX, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rectY, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rectWidth, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rectHeight, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, command, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qlistview_qlistview_visualregionforselection, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selection, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qlistview_qlistview_selectedindexes, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qlistview_qlistview_updategeometries, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qlistview_qlistview_isindexhidden, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qlistview_qlistview_selectionchanged, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selected, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, deselected, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qlistview_qlistview_currentchanged, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, current, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, previous, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qlistview_qlistview_viewportsizehint, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_widgets_qlistview_qlistview_method_entry) {
	PHP_ME(Qt_Widgets_QListView_QListView, staticMetaObject, arginfo_qt_widgets_qlistview_qlistview_staticmetaobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QListView_QListView, tr, arginfo_qt_widgets_qlistview_qlistview_tr, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QListView_QListView, new_, arginfo_qt_widgets_qlistview_qlistview_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QListView_QListView, setMovement, arginfo_qt_widgets_qlistview_qlistview_setmovement, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QListView_QListView, movement, arginfo_qt_widgets_qlistview_qlistview_movement, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QListView_QListView, setFlow, arginfo_qt_widgets_qlistview_qlistview_setflow, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QListView_QListView, flow, arginfo_qt_widgets_qlistview_qlistview_flow, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QListView_QListView, setWrapping, arginfo_qt_widgets_qlistview_qlistview_setwrapping, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QListView_QListView, isWrapping, arginfo_qt_widgets_qlistview_qlistview_iswrapping, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QListView_QListView, setResizeMode, arginfo_qt_widgets_qlistview_qlistview_setresizemode, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QListView_QListView, resizeMode, arginfo_qt_widgets_qlistview_qlistview_resizemode, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QListView_QListView, setLayoutMode, arginfo_qt_widgets_qlistview_qlistview_setlayoutmode, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QListView_QListView, layoutMode, arginfo_qt_widgets_qlistview_qlistview_layoutmode, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QListView_QListView, setSpacing, arginfo_qt_widgets_qlistview_qlistview_setspacing, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QListView_QListView, spacing, arginfo_qt_widgets_qlistview_qlistview_spacing, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QListView_QListView, setBatchSize, arginfo_qt_widgets_qlistview_qlistview_setbatchsize, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QListView_QListView, batchSize, arginfo_qt_widgets_qlistview_qlistview_batchsize, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QListView_QListView, setGridSize, arginfo_qt_widgets_qlistview_qlistview_setgridsize, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QListView_QListView, gridSize, arginfo_qt_widgets_qlistview_qlistview_gridsize, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QListView_QListView, setViewMode, arginfo_qt_widgets_qlistview_qlistview_setviewmode, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QListView_QListView, viewMode, arginfo_qt_widgets_qlistview_qlistview_viewmode, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QListView_QListView, clearPropertyFlags, arginfo_qt_widgets_qlistview_qlistview_clearpropertyflags, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QListView_QListView, isRowHidden, arginfo_qt_widgets_qlistview_qlistview_isrowhidden, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QListView_QListView, setRowHidden, arginfo_qt_widgets_qlistview_qlistview_setrowhidden, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QListView_QListView, setModelColumn, arginfo_qt_widgets_qlistview_qlistview_setmodelcolumn, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QListView_QListView, modelColumn, arginfo_qt_widgets_qlistview_qlistview_modelcolumn, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QListView_QListView, setUniformItemSizes, arginfo_qt_widgets_qlistview_qlistview_setuniformitemsizes, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QListView_QListView, uniformItemSizes, arginfo_qt_widgets_qlistview_qlistview_uniformitemsizes, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QListView_QListView, setWordWrap, arginfo_qt_widgets_qlistview_qlistview_setwordwrap, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QListView_QListView, wordWrap, arginfo_qt_widgets_qlistview_qlistview_wordwrap, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QListView_QListView, setSelectionRectVisible, arginfo_qt_widgets_qlistview_qlistview_setselectionrectvisible, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QListView_QListView, isSelectionRectVisible, arginfo_qt_widgets_qlistview_qlistview_isselectionrectvisible, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QListView_QListView, setItemAlignment, arginfo_qt_widgets_qlistview_qlistview_setitemalignment, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QListView_QListView, itemAlignment, arginfo_qt_widgets_qlistview_qlistview_itemalignment, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QListView_QListView, visualRect, arginfo_qt_widgets_qlistview_qlistview_visualrect, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QListView_QListView, scrollTo, arginfo_qt_widgets_qlistview_qlistview_scrollto, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QListView_QListView, indexAt, arginfo_qt_widgets_qlistview_qlistview_indexat, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QListView_QListView, doItemsLayout, arginfo_qt_widgets_qlistview_qlistview_doitemslayout, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QListView_QListView, reset, arginfo_qt_widgets_qlistview_qlistview_reset, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QListView_QListView, setRootIndex, arginfo_qt_widgets_qlistview_qlistview_setrootindex, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QListView_QListView, indexesMoved, arginfo_qt_widgets_qlistview_qlistview_indexesmoved, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QListView_QListView, event, arginfo_qt_widgets_qlistview_qlistview_event, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QListView_QListView, scrollContentsBy, arginfo_qt_widgets_qlistview_qlistview_scrollcontentsby, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QListView_QListView, resizeContents, arginfo_qt_widgets_qlistview_qlistview_resizecontents, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QListView_QListView, contentsSize, arginfo_qt_widgets_qlistview_qlistview_contentssize, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QListView_QListView, dataChanged, arginfo_qt_widgets_qlistview_qlistview_datachanged, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QListView_QListView, rowsInserted, arginfo_qt_widgets_qlistview_qlistview_rowsinserted, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QListView_QListView, rowsAboutToBeRemoved, arginfo_qt_widgets_qlistview_qlistview_rowsabouttoberemoved, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QListView_QListView, mouseMoveEvent, arginfo_qt_widgets_qlistview_qlistview_mousemoveevent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QListView_QListView, mouseReleaseEvent, arginfo_qt_widgets_qlistview_qlistview_mousereleaseevent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QListView_QListView, wheelEvent, arginfo_qt_widgets_qlistview_qlistview_wheelevent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QListView_QListView, timerEvent, arginfo_qt_widgets_qlistview_qlistview_timerevent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QListView_QListView, resizeEvent, arginfo_qt_widgets_qlistview_qlistview_resizeevent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QListView_QListView, dragMoveEvent, arginfo_qt_widgets_qlistview_qlistview_dragmoveevent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QListView_QListView, dragLeaveEvent, arginfo_qt_widgets_qlistview_qlistview_dragleaveevent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QListView_QListView, dropEvent, arginfo_qt_widgets_qlistview_qlistview_dropevent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QListView_QListView, startDrag, arginfo_qt_widgets_qlistview_qlistview_startdrag, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QListView_QListView, initViewItemOption, arginfo_qt_widgets_qlistview_qlistview_initviewitemoption, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QListView_QListView, paintEvent, arginfo_qt_widgets_qlistview_qlistview_paintevent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QListView_QListView, horizontalOffset, arginfo_qt_widgets_qlistview_qlistview_horizontaloffset, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QListView_QListView, verticalOffset, arginfo_qt_widgets_qlistview_qlistview_verticaloffset, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QListView_QListView, moveCursor, arginfo_qt_widgets_qlistview_qlistview_movecursor, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QListView_QListView, rectForIndex, arginfo_qt_widgets_qlistview_qlistview_rectforindex, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QListView_QListView, setPositionForIndex, arginfo_qt_widgets_qlistview_qlistview_setpositionforindex, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QListView_QListView, setSelection, arginfo_qt_widgets_qlistview_qlistview_setselection, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QListView_QListView, visualRegionForSelection, arginfo_qt_widgets_qlistview_qlistview_visualregionforselection, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QListView_QListView, selectedIndexes, arginfo_qt_widgets_qlistview_qlistview_selectedindexes, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QListView_QListView, updateGeometries, arginfo_qt_widgets_qlistview_qlistview_updategeometries, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QListView_QListView, isIndexHidden, arginfo_qt_widgets_qlistview_qlistview_isindexhidden, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QListView_QListView, selectionChanged, arginfo_qt_widgets_qlistview_qlistview_selectionchanged, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QListView_QListView, currentChanged, arginfo_qt_widgets_qlistview_qlistview_currentchanged, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QListView_QListView, viewportSizeHint, arginfo_qt_widgets_qlistview_qlistview_viewportsizehint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
