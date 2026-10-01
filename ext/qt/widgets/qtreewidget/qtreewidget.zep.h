
extern zend_class_entry *qt_widgets_qtreewidget_qtreewidget_ce;

ZEPHIR_INIT_CLASS(Qt_Widgets_QTreeWidget_QTreeWidget);

PHP_METHOD(Qt_Widgets_QTreeWidget_QTreeWidget, isPersistentEditorOpen);
PHP_METHOD(Qt_Widgets_QTreeWidget_QTreeWidget, staticMetaObject);
PHP_METHOD(Qt_Widgets_QTreeWidget_QTreeWidget, tr);
PHP_METHOD(Qt_Widgets_QTreeWidget_QTreeWidget, new_);
PHP_METHOD(Qt_Widgets_QTreeWidget_QTreeWidget, columnCount);
PHP_METHOD(Qt_Widgets_QTreeWidget_QTreeWidget, setColumnCount);
PHP_METHOD(Qt_Widgets_QTreeWidget_QTreeWidget, invisibleRootItem);
PHP_METHOD(Qt_Widgets_QTreeWidget_QTreeWidget, topLevelItem);
PHP_METHOD(Qt_Widgets_QTreeWidget_QTreeWidget, topLevelItemCount);
PHP_METHOD(Qt_Widgets_QTreeWidget_QTreeWidget, insertTopLevelItem);
PHP_METHOD(Qt_Widgets_QTreeWidget_QTreeWidget, addTopLevelItem);
PHP_METHOD(Qt_Widgets_QTreeWidget_QTreeWidget, takeTopLevelItem);
PHP_METHOD(Qt_Widgets_QTreeWidget_QTreeWidget, indexOfTopLevelItem);
PHP_METHOD(Qt_Widgets_QTreeWidget_QTreeWidget, insertTopLevelItems);
PHP_METHOD(Qt_Widgets_QTreeWidget_QTreeWidget, addTopLevelItems);
PHP_METHOD(Qt_Widgets_QTreeWidget_QTreeWidget, headerItem);
PHP_METHOD(Qt_Widgets_QTreeWidget_QTreeWidget, setHeaderItem);
PHP_METHOD(Qt_Widgets_QTreeWidget_QTreeWidget, setHeaderLabels);
PHP_METHOD(Qt_Widgets_QTreeWidget_QTreeWidget, setHeaderLabel);
PHP_METHOD(Qt_Widgets_QTreeWidget_QTreeWidget, currentItem);
PHP_METHOD(Qt_Widgets_QTreeWidget_QTreeWidget, currentColumn);
PHP_METHOD(Qt_Widgets_QTreeWidget_QTreeWidget, setCurrentItem);
PHP_METHOD(Qt_Widgets_QTreeWidget_QTreeWidget, setCurrentItemQTreeWidgetItemInt);
PHP_METHOD(Qt_Widgets_QTreeWidget_QTreeWidget, setCurrentItemQTreeWidgetItemIntQItemSelectionModelSelectionFlags);
PHP_METHOD(Qt_Widgets_QTreeWidget_QTreeWidget, itemAt);
PHP_METHOD(Qt_Widgets_QTreeWidget_QTreeWidget, itemAtIntInt);
PHP_METHOD(Qt_Widgets_QTreeWidget_QTreeWidget, visualItemRect);
PHP_METHOD(Qt_Widgets_QTreeWidget_QTreeWidget, sortColumn);
PHP_METHOD(Qt_Widgets_QTreeWidget_QTreeWidget, sortItems);
PHP_METHOD(Qt_Widgets_QTreeWidget_QTreeWidget, editItem);
PHP_METHOD(Qt_Widgets_QTreeWidget_QTreeWidget, openPersistentEditor);
PHP_METHOD(Qt_Widgets_QTreeWidget_QTreeWidget, closePersistentEditor);
PHP_METHOD(Qt_Widgets_QTreeWidget_QTreeWidget, isPersistentEditorOpenQTreeWidgetItemInt);
PHP_METHOD(Qt_Widgets_QTreeWidget_QTreeWidget, itemWidget);
PHP_METHOD(Qt_Widgets_QTreeWidget_QTreeWidget, setItemWidget);
PHP_METHOD(Qt_Widgets_QTreeWidget_QTreeWidget, removeItemWidget);
PHP_METHOD(Qt_Widgets_QTreeWidget_QTreeWidget, selectedItems);
PHP_METHOD(Qt_Widgets_QTreeWidget_QTreeWidget, findItems);
PHP_METHOD(Qt_Widgets_QTreeWidget_QTreeWidget, itemAbove);
PHP_METHOD(Qt_Widgets_QTreeWidget_QTreeWidget, itemBelow);
PHP_METHOD(Qt_Widgets_QTreeWidget_QTreeWidget, indexFromItem);
PHP_METHOD(Qt_Widgets_QTreeWidget_QTreeWidget, itemFromIndex);
PHP_METHOD(Qt_Widgets_QTreeWidget_QTreeWidget, setSelectionModel);
PHP_METHOD(Qt_Widgets_QTreeWidget_QTreeWidget, scrollToItem);
PHP_METHOD(Qt_Widgets_QTreeWidget_QTreeWidget, expandItem);
PHP_METHOD(Qt_Widgets_QTreeWidget_QTreeWidget, collapseItem);
PHP_METHOD(Qt_Widgets_QTreeWidget_QTreeWidget, clear);
PHP_METHOD(Qt_Widgets_QTreeWidget_QTreeWidget, itemPressed);
PHP_METHOD(Qt_Widgets_QTreeWidget_QTreeWidget, itemClicked);
PHP_METHOD(Qt_Widgets_QTreeWidget_QTreeWidget, itemDoubleClicked);
PHP_METHOD(Qt_Widgets_QTreeWidget_QTreeWidget, itemActivated);
PHP_METHOD(Qt_Widgets_QTreeWidget_QTreeWidget, itemEntered);
PHP_METHOD(Qt_Widgets_QTreeWidget_QTreeWidget, itemChanged);
PHP_METHOD(Qt_Widgets_QTreeWidget_QTreeWidget, itemExpanded);
PHP_METHOD(Qt_Widgets_QTreeWidget_QTreeWidget, itemCollapsed);
PHP_METHOD(Qt_Widgets_QTreeWidget_QTreeWidget, currentItemChanged);
PHP_METHOD(Qt_Widgets_QTreeWidget_QTreeWidget, itemSelectionChanged);
PHP_METHOD(Qt_Widgets_QTreeWidget_QTreeWidget, event);
PHP_METHOD(Qt_Widgets_QTreeWidget_QTreeWidget, mimeTypes);
PHP_METHOD(Qt_Widgets_QTreeWidget_QTreeWidget, mimeData);
PHP_METHOD(Qt_Widgets_QTreeWidget_QTreeWidget, dropMimeData);
PHP_METHOD(Qt_Widgets_QTreeWidget_QTreeWidget, supportedDropActions);
PHP_METHOD(Qt_Widgets_QTreeWidget_QTreeWidget, dropEvent);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtreewidget_qtreewidget_ispersistenteditoropen, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtreewidget_qtreewidget_staticmetaobject, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtreewidget_qtreewidget_tr, 0, 1, IS_STRING, 0)
	ZEND_ARG_INFO(0, s)
	ZEND_ARG_INFO(0, c)
	ZEND_ARG_TYPE_INFO(0, n, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtreewidget_qtreewidget_new_, 0, 0, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtreewidget_qtreewidget_columncount, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtreewidget_qtreewidget_setcolumncount, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, columns, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtreewidget_qtreewidget_invisiblerootitem, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtreewidget_qtreewidget_toplevelitem, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtreewidget_qtreewidget_toplevelitemcount, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtreewidget_qtreewidget_inserttoplevelitem, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, item, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtreewidget_qtreewidget_addtoplevelitem, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, item, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtreewidget_qtreewidget_taketoplevelitem, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtreewidget_qtreewidget_indexoftoplevelitem, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, item, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtreewidget_qtreewidget_inserttoplevelitems, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
	ZEND_ARG_ARRAY_INFO(0, items, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtreewidget_qtreewidget_addtoplevelitems, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_ARRAY_INFO(0, items, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtreewidget_qtreewidget_headeritem, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtreewidget_qtreewidget_setheaderitem, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, item, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtreewidget_qtreewidget_setheaderlabels, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_ARRAY_INFO(0, labels, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtreewidget_qtreewidget_setheaderlabel, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, label, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtreewidget_qtreewidget_currentitem, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtreewidget_qtreewidget_currentcolumn, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtreewidget_qtreewidget_setcurrentitem, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, item, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtreewidget_qtreewidget_setcurrentitemqtreewidgetitemint, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, item, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, column, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtreewidget_qtreewidget_setcurrentitemqtreewidgetitemintqitemselectionmodelselectionflags, 0, 4, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, item, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, column, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, command, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtreewidget_qtreewidget_itemat, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, pX, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, pY, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtreewidget_qtreewidget_itematintint, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtreewidget_qtreewidget_visualitemrect, 0, 2, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, item, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtreewidget_qtreewidget_sortcolumn, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtreewidget_qtreewidget_sortitems, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, column, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, order, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtreewidget_qtreewidget_edititem, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, item, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, column, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtreewidget_qtreewidget_openpersistenteditor, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, item, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, column, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtreewidget_qtreewidget_closepersistenteditor, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, item, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, column, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtreewidget_qtreewidget_ispersistenteditoropenqtreewidgetitemint, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, item, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, column, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtreewidget_qtreewidget_itemwidget, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, item, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, column, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtreewidget_qtreewidget_setitemwidget, 0, 4, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, item, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, column, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, widget, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtreewidget_qtreewidget_removeitemwidget, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, item, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, column, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtreewidget_qtreewidget_selecteditems, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtreewidget_qtreewidget_finditems, 0, 3, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, text, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, flags, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, column, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtreewidget_qtreewidget_itemabove, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, item, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtreewidget_qtreewidget_itembelow, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, item, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtreewidget_qtreewidget_indexfromitem, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, item, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, column, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtreewidget_qtreewidget_itemfromindex, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtreewidget_qtreewidget_setselectionmodel, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selectionModel, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtreewidget_qtreewidget_scrolltoitem, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, item, IS_LONG, 0)
	ZEND_ARG_INFO(0, hint)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtreewidget_qtreewidget_expanditem, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, item, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtreewidget_qtreewidget_collapseitem, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, item, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtreewidget_qtreewidget_clear, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtreewidget_qtreewidget_itempressed, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, item, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, column, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtreewidget_qtreewidget_itemclicked, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, item, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, column, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtreewidget_qtreewidget_itemdoubleclicked, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, item, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, column, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtreewidget_qtreewidget_itemactivated, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, item, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, column, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtreewidget_qtreewidget_itementered, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, item, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, column, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtreewidget_qtreewidget_itemchanged, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, item, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, column, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtreewidget_qtreewidget_itemexpanded, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, item, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtreewidget_qtreewidget_itemcollapsed, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, item, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtreewidget_qtreewidget_currentitemchanged, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, current, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, previous, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtreewidget_qtreewidget_itemselectionchanged, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtreewidget_qtreewidget_event, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, e, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtreewidget_qtreewidget_mimetypes, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtreewidget_qtreewidget_mimedata, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_ARRAY_INFO(0, items, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtreewidget_qtreewidget_dropmimedata, 0, 5, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, data, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, action, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtreewidget_qtreewidget_supporteddropactions, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtreewidget_qtreewidget_dropevent, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, event, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_widgets_qtreewidget_qtreewidget_method_entry) {
	PHP_ME(Qt_Widgets_QTreeWidget_QTreeWidget, isPersistentEditorOpen, arginfo_qt_widgets_qtreewidget_qtreewidget_ispersistenteditoropen, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTreeWidget_QTreeWidget, staticMetaObject, arginfo_qt_widgets_qtreewidget_qtreewidget_staticmetaobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTreeWidget_QTreeWidget, tr, arginfo_qt_widgets_qtreewidget_qtreewidget_tr, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTreeWidget_QTreeWidget, new_, arginfo_qt_widgets_qtreewidget_qtreewidget_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTreeWidget_QTreeWidget, columnCount, arginfo_qt_widgets_qtreewidget_qtreewidget_columncount, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTreeWidget_QTreeWidget, setColumnCount, arginfo_qt_widgets_qtreewidget_qtreewidget_setcolumncount, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTreeWidget_QTreeWidget, invisibleRootItem, arginfo_qt_widgets_qtreewidget_qtreewidget_invisiblerootitem, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTreeWidget_QTreeWidget, topLevelItem, arginfo_qt_widgets_qtreewidget_qtreewidget_toplevelitem, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTreeWidget_QTreeWidget, topLevelItemCount, arginfo_qt_widgets_qtreewidget_qtreewidget_toplevelitemcount, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTreeWidget_QTreeWidget, insertTopLevelItem, arginfo_qt_widgets_qtreewidget_qtreewidget_inserttoplevelitem, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTreeWidget_QTreeWidget, addTopLevelItem, arginfo_qt_widgets_qtreewidget_qtreewidget_addtoplevelitem, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTreeWidget_QTreeWidget, takeTopLevelItem, arginfo_qt_widgets_qtreewidget_qtreewidget_taketoplevelitem, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTreeWidget_QTreeWidget, indexOfTopLevelItem, arginfo_qt_widgets_qtreewidget_qtreewidget_indexoftoplevelitem, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTreeWidget_QTreeWidget, insertTopLevelItems, arginfo_qt_widgets_qtreewidget_qtreewidget_inserttoplevelitems, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTreeWidget_QTreeWidget, addTopLevelItems, arginfo_qt_widgets_qtreewidget_qtreewidget_addtoplevelitems, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTreeWidget_QTreeWidget, headerItem, arginfo_qt_widgets_qtreewidget_qtreewidget_headeritem, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTreeWidget_QTreeWidget, setHeaderItem, arginfo_qt_widgets_qtreewidget_qtreewidget_setheaderitem, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTreeWidget_QTreeWidget, setHeaderLabels, arginfo_qt_widgets_qtreewidget_qtreewidget_setheaderlabels, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTreeWidget_QTreeWidget, setHeaderLabel, arginfo_qt_widgets_qtreewidget_qtreewidget_setheaderlabel, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTreeWidget_QTreeWidget, currentItem, arginfo_qt_widgets_qtreewidget_qtreewidget_currentitem, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTreeWidget_QTreeWidget, currentColumn, arginfo_qt_widgets_qtreewidget_qtreewidget_currentcolumn, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTreeWidget_QTreeWidget, setCurrentItem, arginfo_qt_widgets_qtreewidget_qtreewidget_setcurrentitem, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTreeWidget_QTreeWidget, setCurrentItemQTreeWidgetItemInt, arginfo_qt_widgets_qtreewidget_qtreewidget_setcurrentitemqtreewidgetitemint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTreeWidget_QTreeWidget, setCurrentItemQTreeWidgetItemIntQItemSelectionModelSelectionFlags, arginfo_qt_widgets_qtreewidget_qtreewidget_setcurrentitemqtreewidgetitemintqitemselectionmodelselectionflags, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTreeWidget_QTreeWidget, itemAt, arginfo_qt_widgets_qtreewidget_qtreewidget_itemat, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTreeWidget_QTreeWidget, itemAtIntInt, arginfo_qt_widgets_qtreewidget_qtreewidget_itematintint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTreeWidget_QTreeWidget, visualItemRect, arginfo_qt_widgets_qtreewidget_qtreewidget_visualitemrect, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTreeWidget_QTreeWidget, sortColumn, arginfo_qt_widgets_qtreewidget_qtreewidget_sortcolumn, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTreeWidget_QTreeWidget, sortItems, arginfo_qt_widgets_qtreewidget_qtreewidget_sortitems, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTreeWidget_QTreeWidget, editItem, arginfo_qt_widgets_qtreewidget_qtreewidget_edititem, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTreeWidget_QTreeWidget, openPersistentEditor, arginfo_qt_widgets_qtreewidget_qtreewidget_openpersistenteditor, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTreeWidget_QTreeWidget, closePersistentEditor, arginfo_qt_widgets_qtreewidget_qtreewidget_closepersistenteditor, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTreeWidget_QTreeWidget, isPersistentEditorOpenQTreeWidgetItemInt, arginfo_qt_widgets_qtreewidget_qtreewidget_ispersistenteditoropenqtreewidgetitemint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTreeWidget_QTreeWidget, itemWidget, arginfo_qt_widgets_qtreewidget_qtreewidget_itemwidget, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTreeWidget_QTreeWidget, setItemWidget, arginfo_qt_widgets_qtreewidget_qtreewidget_setitemwidget, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTreeWidget_QTreeWidget, removeItemWidget, arginfo_qt_widgets_qtreewidget_qtreewidget_removeitemwidget, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTreeWidget_QTreeWidget, selectedItems, arginfo_qt_widgets_qtreewidget_qtreewidget_selecteditems, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTreeWidget_QTreeWidget, findItems, arginfo_qt_widgets_qtreewidget_qtreewidget_finditems, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTreeWidget_QTreeWidget, itemAbove, arginfo_qt_widgets_qtreewidget_qtreewidget_itemabove, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTreeWidget_QTreeWidget, itemBelow, arginfo_qt_widgets_qtreewidget_qtreewidget_itembelow, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTreeWidget_QTreeWidget, indexFromItem, arginfo_qt_widgets_qtreewidget_qtreewidget_indexfromitem, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTreeWidget_QTreeWidget, itemFromIndex, arginfo_qt_widgets_qtreewidget_qtreewidget_itemfromindex, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTreeWidget_QTreeWidget, setSelectionModel, arginfo_qt_widgets_qtreewidget_qtreewidget_setselectionmodel, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTreeWidget_QTreeWidget, scrollToItem, arginfo_qt_widgets_qtreewidget_qtreewidget_scrolltoitem, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTreeWidget_QTreeWidget, expandItem, arginfo_qt_widgets_qtreewidget_qtreewidget_expanditem, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTreeWidget_QTreeWidget, collapseItem, arginfo_qt_widgets_qtreewidget_qtreewidget_collapseitem, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTreeWidget_QTreeWidget, clear, arginfo_qt_widgets_qtreewidget_qtreewidget_clear, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTreeWidget_QTreeWidget, itemPressed, arginfo_qt_widgets_qtreewidget_qtreewidget_itempressed, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTreeWidget_QTreeWidget, itemClicked, arginfo_qt_widgets_qtreewidget_qtreewidget_itemclicked, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTreeWidget_QTreeWidget, itemDoubleClicked, arginfo_qt_widgets_qtreewidget_qtreewidget_itemdoubleclicked, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTreeWidget_QTreeWidget, itemActivated, arginfo_qt_widgets_qtreewidget_qtreewidget_itemactivated, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTreeWidget_QTreeWidget, itemEntered, arginfo_qt_widgets_qtreewidget_qtreewidget_itementered, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTreeWidget_QTreeWidget, itemChanged, arginfo_qt_widgets_qtreewidget_qtreewidget_itemchanged, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTreeWidget_QTreeWidget, itemExpanded, arginfo_qt_widgets_qtreewidget_qtreewidget_itemexpanded, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTreeWidget_QTreeWidget, itemCollapsed, arginfo_qt_widgets_qtreewidget_qtreewidget_itemcollapsed, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTreeWidget_QTreeWidget, currentItemChanged, arginfo_qt_widgets_qtreewidget_qtreewidget_currentitemchanged, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTreeWidget_QTreeWidget, itemSelectionChanged, arginfo_qt_widgets_qtreewidget_qtreewidget_itemselectionchanged, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTreeWidget_QTreeWidget, event, arginfo_qt_widgets_qtreewidget_qtreewidget_event, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTreeWidget_QTreeWidget, mimeTypes, arginfo_qt_widgets_qtreewidget_qtreewidget_mimetypes, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTreeWidget_QTreeWidget, mimeData, arginfo_qt_widgets_qtreewidget_qtreewidget_mimedata, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTreeWidget_QTreeWidget, dropMimeData, arginfo_qt_widgets_qtreewidget_qtreewidget_dropmimedata, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTreeWidget_QTreeWidget, supportedDropActions, arginfo_qt_widgets_qtreewidget_qtreewidget_supporteddropactions, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTreeWidget_QTreeWidget, dropEvent, arginfo_qt_widgets_qtreewidget_qtreewidget_dropevent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
