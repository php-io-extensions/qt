
extern zend_class_entry *qt_widgets_qlistwidget_qlistwidget_ce;

ZEPHIR_INIT_CLASS(Qt_Widgets_QListWidget_QListWidget);

PHP_METHOD(Qt_Widgets_QListWidget_QListWidget, isPersistentEditorOpen);
PHP_METHOD(Qt_Widgets_QListWidget_QListWidget, staticMetaObject);
PHP_METHOD(Qt_Widgets_QListWidget_QListWidget, tr);
PHP_METHOD(Qt_Widgets_QListWidget_QListWidget, new_);
PHP_METHOD(Qt_Widgets_QListWidget_QListWidget, setSelectionModel);
PHP_METHOD(Qt_Widgets_QListWidget_QListWidget, item);
PHP_METHOD(Qt_Widgets_QListWidget_QListWidget, row);
PHP_METHOD(Qt_Widgets_QListWidget_QListWidget, insertItem);
PHP_METHOD(Qt_Widgets_QListWidget_QListWidget, insertItemIntQString);
PHP_METHOD(Qt_Widgets_QListWidget_QListWidget, insertItems);
PHP_METHOD(Qt_Widgets_QListWidget_QListWidget, addItem);
PHP_METHOD(Qt_Widgets_QListWidget_QListWidget, addItemQListWidgetItem);
PHP_METHOD(Qt_Widgets_QListWidget_QListWidget, addItems);
PHP_METHOD(Qt_Widgets_QListWidget_QListWidget, takeItem);
PHP_METHOD(Qt_Widgets_QListWidget_QListWidget, count);
PHP_METHOD(Qt_Widgets_QListWidget_QListWidget, currentItem);
PHP_METHOD(Qt_Widgets_QListWidget_QListWidget, setCurrentItem);
PHP_METHOD(Qt_Widgets_QListWidget_QListWidget, setCurrentItemQListWidgetItemQItemSelectionModelSelectionFlags);
PHP_METHOD(Qt_Widgets_QListWidget_QListWidget, currentRow);
PHP_METHOD(Qt_Widgets_QListWidget_QListWidget, setCurrentRow);
PHP_METHOD(Qt_Widgets_QListWidget_QListWidget, setCurrentRowIntQItemSelectionModelSelectionFlags);
PHP_METHOD(Qt_Widgets_QListWidget_QListWidget, itemAt);
PHP_METHOD(Qt_Widgets_QListWidget_QListWidget, itemAtIntInt);
PHP_METHOD(Qt_Widgets_QListWidget_QListWidget, visualItemRect);
PHP_METHOD(Qt_Widgets_QListWidget_QListWidget, sortItems);
PHP_METHOD(Qt_Widgets_QListWidget_QListWidget, setSortingEnabled);
PHP_METHOD(Qt_Widgets_QListWidget_QListWidget, isSortingEnabled);
PHP_METHOD(Qt_Widgets_QListWidget_QListWidget, editItem);
PHP_METHOD(Qt_Widgets_QListWidget_QListWidget, openPersistentEditor);
PHP_METHOD(Qt_Widgets_QListWidget_QListWidget, closePersistentEditor);
PHP_METHOD(Qt_Widgets_QListWidget_QListWidget, isPersistentEditorOpenQListWidgetItem);
PHP_METHOD(Qt_Widgets_QListWidget_QListWidget, itemWidget);
PHP_METHOD(Qt_Widgets_QListWidget_QListWidget, setItemWidget);
PHP_METHOD(Qt_Widgets_QListWidget_QListWidget, removeItemWidget);
PHP_METHOD(Qt_Widgets_QListWidget_QListWidget, selectedItems);
PHP_METHOD(Qt_Widgets_QListWidget_QListWidget, findItems);
PHP_METHOD(Qt_Widgets_QListWidget_QListWidget, items);
PHP_METHOD(Qt_Widgets_QListWidget_QListWidget, indexFromItem);
PHP_METHOD(Qt_Widgets_QListWidget_QListWidget, itemFromIndex);
PHP_METHOD(Qt_Widgets_QListWidget_QListWidget, dropEvent);
PHP_METHOD(Qt_Widgets_QListWidget_QListWidget, scrollToItem);
PHP_METHOD(Qt_Widgets_QListWidget_QListWidget, clear);
PHP_METHOD(Qt_Widgets_QListWidget_QListWidget, itemPressed);
PHP_METHOD(Qt_Widgets_QListWidget_QListWidget, itemClicked);
PHP_METHOD(Qt_Widgets_QListWidget_QListWidget, itemDoubleClicked);
PHP_METHOD(Qt_Widgets_QListWidget_QListWidget, itemActivated);
PHP_METHOD(Qt_Widgets_QListWidget_QListWidget, itemEntered);
PHP_METHOD(Qt_Widgets_QListWidget_QListWidget, itemChanged);
PHP_METHOD(Qt_Widgets_QListWidget_QListWidget, currentItemChanged);
PHP_METHOD(Qt_Widgets_QListWidget_QListWidget, currentTextChanged);
PHP_METHOD(Qt_Widgets_QListWidget_QListWidget, currentRowChanged);
PHP_METHOD(Qt_Widgets_QListWidget_QListWidget, itemSelectionChanged);
PHP_METHOD(Qt_Widgets_QListWidget_QListWidget, event);
PHP_METHOD(Qt_Widgets_QListWidget_QListWidget, mimeTypes);
PHP_METHOD(Qt_Widgets_QListWidget_QListWidget, mimeData);
PHP_METHOD(Qt_Widgets_QListWidget_QListWidget, dropMimeData);
PHP_METHOD(Qt_Widgets_QListWidget_QListWidget, supportedDropActions);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qlistwidget_qlistwidget_ispersistenteditoropen, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qlistwidget_qlistwidget_staticmetaobject, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qlistwidget_qlistwidget_tr, 0, 1, IS_STRING, 0)
	ZEND_ARG_INFO(0, s)
	ZEND_ARG_INFO(0, c)
	ZEND_ARG_TYPE_INFO(0, n, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qlistwidget_qlistwidget_new_, 0, 0, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qlistwidget_qlistwidget_setselectionmodel, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selectionModel, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qlistwidget_qlistwidget_item, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, row, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qlistwidget_qlistwidget_row, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, item, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qlistwidget_qlistwidget_insertitem, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, row, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, item, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qlistwidget_qlistwidget_insertitemintqstring, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, row, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, label, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qlistwidget_qlistwidget_insertitems, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, row, IS_LONG, 0)
	ZEND_ARG_ARRAY_INFO(0, labels, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qlistwidget_qlistwidget_additem, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, label, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qlistwidget_qlistwidget_additemqlistwidgetitem, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, item, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qlistwidget_qlistwidget_additems, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_ARRAY_INFO(0, labels, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qlistwidget_qlistwidget_takeitem, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, row, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qlistwidget_qlistwidget_count, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qlistwidget_qlistwidget_currentitem, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qlistwidget_qlistwidget_setcurrentitem, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, item, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qlistwidget_qlistwidget_setcurrentitemqlistwidgetitemqitemselectionmodelselectionflags, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, item, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, command, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qlistwidget_qlistwidget_currentrow, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qlistwidget_qlistwidget_setcurrentrow, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, row, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qlistwidget_qlistwidget_setcurrentrowintqitemselectionmodelselectionflags, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, row, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, command, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qlistwidget_qlistwidget_itemat, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, pX, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, pY, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qlistwidget_qlistwidget_itematintint, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qlistwidget_qlistwidget_visualitemrect, 0, 2, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, item, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qlistwidget_qlistwidget_sortitems, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_INFO(0, order)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qlistwidget_qlistwidget_setsortingenabled, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, enable, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qlistwidget_qlistwidget_issortingenabled, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qlistwidget_qlistwidget_edititem, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, item, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qlistwidget_qlistwidget_openpersistenteditor, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, item, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qlistwidget_qlistwidget_closepersistenteditor, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, item, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qlistwidget_qlistwidget_ispersistenteditoropenqlistwidgetitem, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, item, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qlistwidget_qlistwidget_itemwidget, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, item, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qlistwidget_qlistwidget_setitemwidget, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, item, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, widget, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qlistwidget_qlistwidget_removeitemwidget, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, item, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qlistwidget_qlistwidget_selecteditems, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qlistwidget_qlistwidget_finditems, 0, 3, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, text, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, flags, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qlistwidget_qlistwidget_items, 0, 2, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, data, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qlistwidget_qlistwidget_indexfromitem, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, item, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qlistwidget_qlistwidget_itemfromindex, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qlistwidget_qlistwidget_dropevent, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, event, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qlistwidget_qlistwidget_scrolltoitem, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, item, IS_LONG, 0)
	ZEND_ARG_INFO(0, hint)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qlistwidget_qlistwidget_clear, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qlistwidget_qlistwidget_itempressed, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, item, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qlistwidget_qlistwidget_itemclicked, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, item, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qlistwidget_qlistwidget_itemdoubleclicked, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, item, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qlistwidget_qlistwidget_itemactivated, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, item, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qlistwidget_qlistwidget_itementered, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, item, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qlistwidget_qlistwidget_itemchanged, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, item, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qlistwidget_qlistwidget_currentitemchanged, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, current, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, previous, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qlistwidget_qlistwidget_currenttextchanged, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, currentText, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qlistwidget_qlistwidget_currentrowchanged, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, currentRow, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qlistwidget_qlistwidget_itemselectionchanged, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qlistwidget_qlistwidget_event, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, e, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qlistwidget_qlistwidget_mimetypes, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qlistwidget_qlistwidget_mimedata, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_ARRAY_INFO(0, items, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qlistwidget_qlistwidget_dropmimedata, 0, 4, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, data, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, action, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qlistwidget_qlistwidget_supporteddropactions, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_widgets_qlistwidget_qlistwidget_method_entry) {
	PHP_ME(Qt_Widgets_QListWidget_QListWidget, isPersistentEditorOpen, arginfo_qt_widgets_qlistwidget_qlistwidget_ispersistenteditoropen, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QListWidget_QListWidget, staticMetaObject, arginfo_qt_widgets_qlistwidget_qlistwidget_staticmetaobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QListWidget_QListWidget, tr, arginfo_qt_widgets_qlistwidget_qlistwidget_tr, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QListWidget_QListWidget, new_, arginfo_qt_widgets_qlistwidget_qlistwidget_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QListWidget_QListWidget, setSelectionModel, arginfo_qt_widgets_qlistwidget_qlistwidget_setselectionmodel, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QListWidget_QListWidget, item, arginfo_qt_widgets_qlistwidget_qlistwidget_item, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QListWidget_QListWidget, row, arginfo_qt_widgets_qlistwidget_qlistwidget_row, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QListWidget_QListWidget, insertItem, arginfo_qt_widgets_qlistwidget_qlistwidget_insertitem, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QListWidget_QListWidget, insertItemIntQString, arginfo_qt_widgets_qlistwidget_qlistwidget_insertitemintqstring, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QListWidget_QListWidget, insertItems, arginfo_qt_widgets_qlistwidget_qlistwidget_insertitems, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QListWidget_QListWidget, addItem, arginfo_qt_widgets_qlistwidget_qlistwidget_additem, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QListWidget_QListWidget, addItemQListWidgetItem, arginfo_qt_widgets_qlistwidget_qlistwidget_additemqlistwidgetitem, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QListWidget_QListWidget, addItems, arginfo_qt_widgets_qlistwidget_qlistwidget_additems, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QListWidget_QListWidget, takeItem, arginfo_qt_widgets_qlistwidget_qlistwidget_takeitem, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QListWidget_QListWidget, count, arginfo_qt_widgets_qlistwidget_qlistwidget_count, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QListWidget_QListWidget, currentItem, arginfo_qt_widgets_qlistwidget_qlistwidget_currentitem, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QListWidget_QListWidget, setCurrentItem, arginfo_qt_widgets_qlistwidget_qlistwidget_setcurrentitem, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QListWidget_QListWidget, setCurrentItemQListWidgetItemQItemSelectionModelSelectionFlags, arginfo_qt_widgets_qlistwidget_qlistwidget_setcurrentitemqlistwidgetitemqitemselectionmodelselectionflags, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QListWidget_QListWidget, currentRow, arginfo_qt_widgets_qlistwidget_qlistwidget_currentrow, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QListWidget_QListWidget, setCurrentRow, arginfo_qt_widgets_qlistwidget_qlistwidget_setcurrentrow, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QListWidget_QListWidget, setCurrentRowIntQItemSelectionModelSelectionFlags, arginfo_qt_widgets_qlistwidget_qlistwidget_setcurrentrowintqitemselectionmodelselectionflags, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QListWidget_QListWidget, itemAt, arginfo_qt_widgets_qlistwidget_qlistwidget_itemat, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QListWidget_QListWidget, itemAtIntInt, arginfo_qt_widgets_qlistwidget_qlistwidget_itematintint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QListWidget_QListWidget, visualItemRect, arginfo_qt_widgets_qlistwidget_qlistwidget_visualitemrect, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QListWidget_QListWidget, sortItems, arginfo_qt_widgets_qlistwidget_qlistwidget_sortitems, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QListWidget_QListWidget, setSortingEnabled, arginfo_qt_widgets_qlistwidget_qlistwidget_setsortingenabled, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QListWidget_QListWidget, isSortingEnabled, arginfo_qt_widgets_qlistwidget_qlistwidget_issortingenabled, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QListWidget_QListWidget, editItem, arginfo_qt_widgets_qlistwidget_qlistwidget_edititem, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QListWidget_QListWidget, openPersistentEditor, arginfo_qt_widgets_qlistwidget_qlistwidget_openpersistenteditor, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QListWidget_QListWidget, closePersistentEditor, arginfo_qt_widgets_qlistwidget_qlistwidget_closepersistenteditor, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QListWidget_QListWidget, isPersistentEditorOpenQListWidgetItem, arginfo_qt_widgets_qlistwidget_qlistwidget_ispersistenteditoropenqlistwidgetitem, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QListWidget_QListWidget, itemWidget, arginfo_qt_widgets_qlistwidget_qlistwidget_itemwidget, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QListWidget_QListWidget, setItemWidget, arginfo_qt_widgets_qlistwidget_qlistwidget_setitemwidget, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QListWidget_QListWidget, removeItemWidget, arginfo_qt_widgets_qlistwidget_qlistwidget_removeitemwidget, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QListWidget_QListWidget, selectedItems, arginfo_qt_widgets_qlistwidget_qlistwidget_selecteditems, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QListWidget_QListWidget, findItems, arginfo_qt_widgets_qlistwidget_qlistwidget_finditems, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QListWidget_QListWidget, items, arginfo_qt_widgets_qlistwidget_qlistwidget_items, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QListWidget_QListWidget, indexFromItem, arginfo_qt_widgets_qlistwidget_qlistwidget_indexfromitem, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QListWidget_QListWidget, itemFromIndex, arginfo_qt_widgets_qlistwidget_qlistwidget_itemfromindex, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QListWidget_QListWidget, dropEvent, arginfo_qt_widgets_qlistwidget_qlistwidget_dropevent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QListWidget_QListWidget, scrollToItem, arginfo_qt_widgets_qlistwidget_qlistwidget_scrolltoitem, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QListWidget_QListWidget, clear, arginfo_qt_widgets_qlistwidget_qlistwidget_clear, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QListWidget_QListWidget, itemPressed, arginfo_qt_widgets_qlistwidget_qlistwidget_itempressed, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QListWidget_QListWidget, itemClicked, arginfo_qt_widgets_qlistwidget_qlistwidget_itemclicked, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QListWidget_QListWidget, itemDoubleClicked, arginfo_qt_widgets_qlistwidget_qlistwidget_itemdoubleclicked, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QListWidget_QListWidget, itemActivated, arginfo_qt_widgets_qlistwidget_qlistwidget_itemactivated, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QListWidget_QListWidget, itemEntered, arginfo_qt_widgets_qlistwidget_qlistwidget_itementered, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QListWidget_QListWidget, itemChanged, arginfo_qt_widgets_qlistwidget_qlistwidget_itemchanged, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QListWidget_QListWidget, currentItemChanged, arginfo_qt_widgets_qlistwidget_qlistwidget_currentitemchanged, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QListWidget_QListWidget, currentTextChanged, arginfo_qt_widgets_qlistwidget_qlistwidget_currenttextchanged, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QListWidget_QListWidget, currentRowChanged, arginfo_qt_widgets_qlistwidget_qlistwidget_currentrowchanged, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QListWidget_QListWidget, itemSelectionChanged, arginfo_qt_widgets_qlistwidget_qlistwidget_itemselectionchanged, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QListWidget_QListWidget, event, arginfo_qt_widgets_qlistwidget_qlistwidget_event, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QListWidget_QListWidget, mimeTypes, arginfo_qt_widgets_qlistwidget_qlistwidget_mimetypes, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QListWidget_QListWidget, mimeData, arginfo_qt_widgets_qlistwidget_qlistwidget_mimedata, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QListWidget_QListWidget, dropMimeData, arginfo_qt_widgets_qlistwidget_qlistwidget_dropmimedata, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QListWidget_QListWidget, supportedDropActions, arginfo_qt_widgets_qlistwidget_qlistwidget_supporteddropactions, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
