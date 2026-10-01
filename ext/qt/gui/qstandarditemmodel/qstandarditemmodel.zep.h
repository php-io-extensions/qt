
extern zend_class_entry *qt_gui_qstandarditemmodel_qstandarditemmodel_ce;

ZEPHIR_INIT_CLASS(Qt_Gui_QStandardItemModel_QStandardItemModel);

PHP_METHOD(Qt_Gui_QStandardItemModel_QStandardItemModel, parent_);
PHP_METHOD(Qt_Gui_QStandardItemModel_QStandardItemModel, staticMetaObject);
PHP_METHOD(Qt_Gui_QStandardItemModel_QStandardItemModel, tr);
PHP_METHOD(Qt_Gui_QStandardItemModel_QStandardItemModel, new_);
PHP_METHOD(Qt_Gui_QStandardItemModel_QStandardItemModel, newIntIntQObject);
PHP_METHOD(Qt_Gui_QStandardItemModel_QStandardItemModel, setItemRoleNames);
PHP_METHOD(Qt_Gui_QStandardItemModel_QStandardItemModel, roleNames);
PHP_METHOD(Qt_Gui_QStandardItemModel_QStandardItemModel, index);
PHP_METHOD(Qt_Gui_QStandardItemModel_QStandardItemModel, parentQModelIndex);
PHP_METHOD(Qt_Gui_QStandardItemModel_QStandardItemModel, rowCount);
PHP_METHOD(Qt_Gui_QStandardItemModel_QStandardItemModel, columnCount);
PHP_METHOD(Qt_Gui_QStandardItemModel_QStandardItemModel, hasChildren);
PHP_METHOD(Qt_Gui_QStandardItemModel_QStandardItemModel, data);
PHP_METHOD(Qt_Gui_QStandardItemModel_QStandardItemModel, multiData);
PHP_METHOD(Qt_Gui_QStandardItemModel_QStandardItemModel, setData);
PHP_METHOD(Qt_Gui_QStandardItemModel_QStandardItemModel, clearItemData);
PHP_METHOD(Qt_Gui_QStandardItemModel_QStandardItemModel, headerData);
PHP_METHOD(Qt_Gui_QStandardItemModel_QStandardItemModel, setHeaderData);
PHP_METHOD(Qt_Gui_QStandardItemModel_QStandardItemModel, insertRows);
PHP_METHOD(Qt_Gui_QStandardItemModel_QStandardItemModel, insertColumns);
PHP_METHOD(Qt_Gui_QStandardItemModel_QStandardItemModel, removeRows);
PHP_METHOD(Qt_Gui_QStandardItemModel_QStandardItemModel, removeColumns);
PHP_METHOD(Qt_Gui_QStandardItemModel_QStandardItemModel, flags);
PHP_METHOD(Qt_Gui_QStandardItemModel_QStandardItemModel, supportedDropActions);
PHP_METHOD(Qt_Gui_QStandardItemModel_QStandardItemModel, itemData);
PHP_METHOD(Qt_Gui_QStandardItemModel_QStandardItemModel, setItemData);
PHP_METHOD(Qt_Gui_QStandardItemModel_QStandardItemModel, clear);
PHP_METHOD(Qt_Gui_QStandardItemModel_QStandardItemModel, sort);
PHP_METHOD(Qt_Gui_QStandardItemModel_QStandardItemModel, itemFromIndex);
PHP_METHOD(Qt_Gui_QStandardItemModel_QStandardItemModel, indexFromItem);
PHP_METHOD(Qt_Gui_QStandardItemModel_QStandardItemModel, item);
PHP_METHOD(Qt_Gui_QStandardItemModel_QStandardItemModel, setItem);
PHP_METHOD(Qt_Gui_QStandardItemModel_QStandardItemModel, setItemIntQStandardItem);
PHP_METHOD(Qt_Gui_QStandardItemModel_QStandardItemModel, invisibleRootItem);
PHP_METHOD(Qt_Gui_QStandardItemModel_QStandardItemModel, horizontalHeaderItem);
PHP_METHOD(Qt_Gui_QStandardItemModel_QStandardItemModel, setHorizontalHeaderItem);
PHP_METHOD(Qt_Gui_QStandardItemModel_QStandardItemModel, verticalHeaderItem);
PHP_METHOD(Qt_Gui_QStandardItemModel_QStandardItemModel, setVerticalHeaderItem);
PHP_METHOD(Qt_Gui_QStandardItemModel_QStandardItemModel, setHorizontalHeaderLabels);
PHP_METHOD(Qt_Gui_QStandardItemModel_QStandardItemModel, setVerticalHeaderLabels);
PHP_METHOD(Qt_Gui_QStandardItemModel_QStandardItemModel, setRowCount);
PHP_METHOD(Qt_Gui_QStandardItemModel_QStandardItemModel, setColumnCount);
PHP_METHOD(Qt_Gui_QStandardItemModel_QStandardItemModel, appendRow);
PHP_METHOD(Qt_Gui_QStandardItemModel_QStandardItemModel, appendColumn);
PHP_METHOD(Qt_Gui_QStandardItemModel_QStandardItemModel, appendRowQStandardItem);
PHP_METHOD(Qt_Gui_QStandardItemModel_QStandardItemModel, insertRow);
PHP_METHOD(Qt_Gui_QStandardItemModel_QStandardItemModel, insertColumn);
PHP_METHOD(Qt_Gui_QStandardItemModel_QStandardItemModel, insertRowIntQStandardItem);
PHP_METHOD(Qt_Gui_QStandardItemModel_QStandardItemModel, insertRowIntQModelIndex);
PHP_METHOD(Qt_Gui_QStandardItemModel_QStandardItemModel, insertColumnIntQModelIndex);
PHP_METHOD(Qt_Gui_QStandardItemModel_QStandardItemModel, takeItem);
PHP_METHOD(Qt_Gui_QStandardItemModel_QStandardItemModel, takeRow);
PHP_METHOD(Qt_Gui_QStandardItemModel_QStandardItemModel, takeColumn);
PHP_METHOD(Qt_Gui_QStandardItemModel_QStandardItemModel, takeHorizontalHeaderItem);
PHP_METHOD(Qt_Gui_QStandardItemModel_QStandardItemModel, takeVerticalHeaderItem);
PHP_METHOD(Qt_Gui_QStandardItemModel_QStandardItemModel, itemPrototype);
PHP_METHOD(Qt_Gui_QStandardItemModel_QStandardItemModel, setItemPrototype);
PHP_METHOD(Qt_Gui_QStandardItemModel_QStandardItemModel, findItems);
PHP_METHOD(Qt_Gui_QStandardItemModel_QStandardItemModel, sortRole);
PHP_METHOD(Qt_Gui_QStandardItemModel_QStandardItemModel, setSortRole);
PHP_METHOD(Qt_Gui_QStandardItemModel_QStandardItemModel, mimeTypes);
PHP_METHOD(Qt_Gui_QStandardItemModel_QStandardItemModel, mimeData);
PHP_METHOD(Qt_Gui_QStandardItemModel_QStandardItemModel, dropMimeData);
PHP_METHOD(Qt_Gui_QStandardItemModel_QStandardItemModel, itemChanged);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qstandarditemmodel_qstandarditemmodel_parent_, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qstandarditemmodel_qstandarditemmodel_staticmetaobject, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qstandarditemmodel_qstandarditemmodel_tr, 0, 1, IS_STRING, 0)
	ZEND_ARG_INFO(0, s)
	ZEND_ARG_INFO(0, c)
	ZEND_ARG_TYPE_INFO(0, n, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qstandarditemmodel_qstandarditemmodel_new_, 0, 0, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qstandarditemmodel_qstandarditemmodel_newintintqobject, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rows, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, columns, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qstandarditemmodel_qstandarditemmodel_setitemrolenames, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_ARRAY_INFO(0, roleNames, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qstandarditemmodel_qstandarditemmodel_rolenames, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qstandarditemmodel_qstandarditemmodel_index, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, row, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, column, IS_LONG, 0)
	ZEND_ARG_INFO(0, parent_)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qstandarditemmodel_qstandarditemmodel_parentqmodelindex, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, child, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qstandarditemmodel_qstandarditemmodel_rowcount, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_INFO(0, parent_)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qstandarditemmodel_qstandarditemmodel_columncount, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_INFO(0, parent_)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qstandarditemmodel_qstandarditemmodel_haschildren, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_INFO(0, parent_)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_qt_gui_qstandarditemmodel_qstandarditemmodel_data, 0, 0, 2)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
	ZEND_ARG_INFO(0, role)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qstandarditemmodel_qstandarditemmodel_multidata, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, roleDataSpan, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qstandarditemmodel_qstandarditemmodel_setdata, 0, 3, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
	ZEND_ARG_INFO(0, value)
	ZEND_ARG_INFO(0, role)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qstandarditemmodel_qstandarditemmodel_clearitemdata, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_qt_gui_qstandarditemmodel_qstandarditemmodel_headerdata, 0, 0, 3)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, section, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, orientation, IS_LONG, 0)
	ZEND_ARG_INFO(0, role)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qstandarditemmodel_qstandarditemmodel_setheaderdata, 0, 4, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, section, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, orientation, IS_LONG, 0)
	ZEND_ARG_INFO(0, value)
	ZEND_ARG_INFO(0, role)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qstandarditemmodel_qstandarditemmodel_insertrows, 0, 3, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, row, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, count, IS_LONG, 0)
	ZEND_ARG_INFO(0, parent_)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qstandarditemmodel_qstandarditemmodel_insertcolumns, 0, 3, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, column, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, count, IS_LONG, 0)
	ZEND_ARG_INFO(0, parent_)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qstandarditemmodel_qstandarditemmodel_removerows, 0, 3, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, row, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, count, IS_LONG, 0)
	ZEND_ARG_INFO(0, parent_)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qstandarditemmodel_qstandarditemmodel_removecolumns, 0, 3, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, column, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, count, IS_LONG, 0)
	ZEND_ARG_INFO(0, parent_)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qstandarditemmodel_qstandarditemmodel_flags, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qstandarditemmodel_qstandarditemmodel_supporteddropactions, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qstandarditemmodel_qstandarditemmodel_itemdata, 0, 2, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qstandarditemmodel_qstandarditemmodel_setitemdata, 0, 3, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
	ZEND_ARG_ARRAY_INFO(0, roles, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qstandarditemmodel_qstandarditemmodel_clear, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qstandarditemmodel_qstandarditemmodel_sort, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, column, IS_LONG, 0)
	ZEND_ARG_INFO(0, order)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qstandarditemmodel_qstandarditemmodel_itemfromindex, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qstandarditemmodel_qstandarditemmodel_indexfromitem, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, item, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qstandarditemmodel_qstandarditemmodel_item, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, row, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, column, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qstandarditemmodel_qstandarditemmodel_setitem, 0, 4, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, row, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, column, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, item, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qstandarditemmodel_qstandarditemmodel_setitemintqstandarditem, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, row, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, item, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qstandarditemmodel_qstandarditemmodel_invisiblerootitem, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qstandarditemmodel_qstandarditemmodel_horizontalheaderitem, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, column, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qstandarditemmodel_qstandarditemmodel_sethorizontalheaderitem, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, column, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, item, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qstandarditemmodel_qstandarditemmodel_verticalheaderitem, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, row, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qstandarditemmodel_qstandarditemmodel_setverticalheaderitem, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, row, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, item, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qstandarditemmodel_qstandarditemmodel_sethorizontalheaderlabels, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_ARRAY_INFO(0, labels, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qstandarditemmodel_qstandarditemmodel_setverticalheaderlabels, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_ARRAY_INFO(0, labels, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qstandarditemmodel_qstandarditemmodel_setrowcount, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rows, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qstandarditemmodel_qstandarditemmodel_setcolumncount, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, columns, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qstandarditemmodel_qstandarditemmodel_appendrow, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_ARRAY_INFO(0, items, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qstandarditemmodel_qstandarditemmodel_appendcolumn, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_ARRAY_INFO(0, items, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qstandarditemmodel_qstandarditemmodel_appendrowqstandarditem, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, item, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qstandarditemmodel_qstandarditemmodel_insertrow, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, row, IS_LONG, 0)
	ZEND_ARG_ARRAY_INFO(0, items, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qstandarditemmodel_qstandarditemmodel_insertcolumn, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, column, IS_LONG, 0)
	ZEND_ARG_ARRAY_INFO(0, items, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qstandarditemmodel_qstandarditemmodel_insertrowintqstandarditem, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, row, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, item, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qstandarditemmodel_qstandarditemmodel_insertrowintqmodelindex, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, row, IS_LONG, 0)
	ZEND_ARG_INFO(0, parent_)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qstandarditemmodel_qstandarditemmodel_insertcolumnintqmodelindex, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, column, IS_LONG, 0)
	ZEND_ARG_INFO(0, parent_)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qstandarditemmodel_qstandarditemmodel_takeitem, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, row, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, column, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qstandarditemmodel_qstandarditemmodel_takerow, 0, 2, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, row, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qstandarditemmodel_qstandarditemmodel_takecolumn, 0, 2, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, column, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qstandarditemmodel_qstandarditemmodel_takehorizontalheaderitem, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, column, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qstandarditemmodel_qstandarditemmodel_takeverticalheaderitem, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, row, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qstandarditemmodel_qstandarditemmodel_itemprototype, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qstandarditemmodel_qstandarditemmodel_setitemprototype, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, item, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qstandarditemmodel_qstandarditemmodel_finditems, 0, 2, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, text, IS_STRING, 0)
	ZEND_ARG_INFO(0, flags)
	ZEND_ARG_TYPE_INFO(0, column, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qstandarditemmodel_qstandarditemmodel_sortrole, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qstandarditemmodel_qstandarditemmodel_setsortrole, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, role, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qstandarditemmodel_qstandarditemmodel_mimetypes, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qstandarditemmodel_qstandarditemmodel_mimedata, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_ARRAY_INFO(0, indexes, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qstandarditemmodel_qstandarditemmodel_dropmimedata, 0, 6, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, data, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, action, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, row, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, column, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qstandarditemmodel_qstandarditemmodel_itemchanged, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, item, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_gui_qstandarditemmodel_qstandarditemmodel_method_entry) {
	PHP_ME(Qt_Gui_QStandardItemModel_QStandardItemModel, parent_, arginfo_qt_gui_qstandarditemmodel_qstandarditemmodel_parent_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QStandardItemModel_QStandardItemModel, staticMetaObject, arginfo_qt_gui_qstandarditemmodel_qstandarditemmodel_staticmetaobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QStandardItemModel_QStandardItemModel, tr, arginfo_qt_gui_qstandarditemmodel_qstandarditemmodel_tr, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QStandardItemModel_QStandardItemModel, new_, arginfo_qt_gui_qstandarditemmodel_qstandarditemmodel_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QStandardItemModel_QStandardItemModel, newIntIntQObject, arginfo_qt_gui_qstandarditemmodel_qstandarditemmodel_newintintqobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QStandardItemModel_QStandardItemModel, setItemRoleNames, arginfo_qt_gui_qstandarditemmodel_qstandarditemmodel_setitemrolenames, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QStandardItemModel_QStandardItemModel, roleNames, arginfo_qt_gui_qstandarditemmodel_qstandarditemmodel_rolenames, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QStandardItemModel_QStandardItemModel, index, arginfo_qt_gui_qstandarditemmodel_qstandarditemmodel_index, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QStandardItemModel_QStandardItemModel, parentQModelIndex, arginfo_qt_gui_qstandarditemmodel_qstandarditemmodel_parentqmodelindex, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QStandardItemModel_QStandardItemModel, rowCount, arginfo_qt_gui_qstandarditemmodel_qstandarditemmodel_rowcount, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QStandardItemModel_QStandardItemModel, columnCount, arginfo_qt_gui_qstandarditemmodel_qstandarditemmodel_columncount, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QStandardItemModel_QStandardItemModel, hasChildren, arginfo_qt_gui_qstandarditemmodel_qstandarditemmodel_haschildren, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QStandardItemModel_QStandardItemModel, data, arginfo_qt_gui_qstandarditemmodel_qstandarditemmodel_data, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QStandardItemModel_QStandardItemModel, multiData, arginfo_qt_gui_qstandarditemmodel_qstandarditemmodel_multidata, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QStandardItemModel_QStandardItemModel, setData, arginfo_qt_gui_qstandarditemmodel_qstandarditemmodel_setdata, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QStandardItemModel_QStandardItemModel, clearItemData, arginfo_qt_gui_qstandarditemmodel_qstandarditemmodel_clearitemdata, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QStandardItemModel_QStandardItemModel, headerData, arginfo_qt_gui_qstandarditemmodel_qstandarditemmodel_headerdata, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QStandardItemModel_QStandardItemModel, setHeaderData, arginfo_qt_gui_qstandarditemmodel_qstandarditemmodel_setheaderdata, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QStandardItemModel_QStandardItemModel, insertRows, arginfo_qt_gui_qstandarditemmodel_qstandarditemmodel_insertrows, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QStandardItemModel_QStandardItemModel, insertColumns, arginfo_qt_gui_qstandarditemmodel_qstandarditemmodel_insertcolumns, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QStandardItemModel_QStandardItemModel, removeRows, arginfo_qt_gui_qstandarditemmodel_qstandarditemmodel_removerows, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QStandardItemModel_QStandardItemModel, removeColumns, arginfo_qt_gui_qstandarditemmodel_qstandarditemmodel_removecolumns, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QStandardItemModel_QStandardItemModel, flags, arginfo_qt_gui_qstandarditemmodel_qstandarditemmodel_flags, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QStandardItemModel_QStandardItemModel, supportedDropActions, arginfo_qt_gui_qstandarditemmodel_qstandarditemmodel_supporteddropactions, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QStandardItemModel_QStandardItemModel, itemData, arginfo_qt_gui_qstandarditemmodel_qstandarditemmodel_itemdata, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QStandardItemModel_QStandardItemModel, setItemData, arginfo_qt_gui_qstandarditemmodel_qstandarditemmodel_setitemdata, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QStandardItemModel_QStandardItemModel, clear, arginfo_qt_gui_qstandarditemmodel_qstandarditemmodel_clear, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QStandardItemModel_QStandardItemModel, sort, arginfo_qt_gui_qstandarditemmodel_qstandarditemmodel_sort, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QStandardItemModel_QStandardItemModel, itemFromIndex, arginfo_qt_gui_qstandarditemmodel_qstandarditemmodel_itemfromindex, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QStandardItemModel_QStandardItemModel, indexFromItem, arginfo_qt_gui_qstandarditemmodel_qstandarditemmodel_indexfromitem, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QStandardItemModel_QStandardItemModel, item, arginfo_qt_gui_qstandarditemmodel_qstandarditemmodel_item, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QStandardItemModel_QStandardItemModel, setItem, arginfo_qt_gui_qstandarditemmodel_qstandarditemmodel_setitem, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QStandardItemModel_QStandardItemModel, setItemIntQStandardItem, arginfo_qt_gui_qstandarditemmodel_qstandarditemmodel_setitemintqstandarditem, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QStandardItemModel_QStandardItemModel, invisibleRootItem, arginfo_qt_gui_qstandarditemmodel_qstandarditemmodel_invisiblerootitem, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QStandardItemModel_QStandardItemModel, horizontalHeaderItem, arginfo_qt_gui_qstandarditemmodel_qstandarditemmodel_horizontalheaderitem, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QStandardItemModel_QStandardItemModel, setHorizontalHeaderItem, arginfo_qt_gui_qstandarditemmodel_qstandarditemmodel_sethorizontalheaderitem, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QStandardItemModel_QStandardItemModel, verticalHeaderItem, arginfo_qt_gui_qstandarditemmodel_qstandarditemmodel_verticalheaderitem, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QStandardItemModel_QStandardItemModel, setVerticalHeaderItem, arginfo_qt_gui_qstandarditemmodel_qstandarditemmodel_setverticalheaderitem, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QStandardItemModel_QStandardItemModel, setHorizontalHeaderLabels, arginfo_qt_gui_qstandarditemmodel_qstandarditemmodel_sethorizontalheaderlabels, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QStandardItemModel_QStandardItemModel, setVerticalHeaderLabels, arginfo_qt_gui_qstandarditemmodel_qstandarditemmodel_setverticalheaderlabels, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QStandardItemModel_QStandardItemModel, setRowCount, arginfo_qt_gui_qstandarditemmodel_qstandarditemmodel_setrowcount, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QStandardItemModel_QStandardItemModel, setColumnCount, arginfo_qt_gui_qstandarditemmodel_qstandarditemmodel_setcolumncount, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QStandardItemModel_QStandardItemModel, appendRow, arginfo_qt_gui_qstandarditemmodel_qstandarditemmodel_appendrow, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QStandardItemModel_QStandardItemModel, appendColumn, arginfo_qt_gui_qstandarditemmodel_qstandarditemmodel_appendcolumn, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QStandardItemModel_QStandardItemModel, appendRowQStandardItem, arginfo_qt_gui_qstandarditemmodel_qstandarditemmodel_appendrowqstandarditem, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QStandardItemModel_QStandardItemModel, insertRow, arginfo_qt_gui_qstandarditemmodel_qstandarditemmodel_insertrow, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QStandardItemModel_QStandardItemModel, insertColumn, arginfo_qt_gui_qstandarditemmodel_qstandarditemmodel_insertcolumn, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QStandardItemModel_QStandardItemModel, insertRowIntQStandardItem, arginfo_qt_gui_qstandarditemmodel_qstandarditemmodel_insertrowintqstandarditem, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QStandardItemModel_QStandardItemModel, insertRowIntQModelIndex, arginfo_qt_gui_qstandarditemmodel_qstandarditemmodel_insertrowintqmodelindex, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QStandardItemModel_QStandardItemModel, insertColumnIntQModelIndex, arginfo_qt_gui_qstandarditemmodel_qstandarditemmodel_insertcolumnintqmodelindex, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QStandardItemModel_QStandardItemModel, takeItem, arginfo_qt_gui_qstandarditemmodel_qstandarditemmodel_takeitem, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QStandardItemModel_QStandardItemModel, takeRow, arginfo_qt_gui_qstandarditemmodel_qstandarditemmodel_takerow, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QStandardItemModel_QStandardItemModel, takeColumn, arginfo_qt_gui_qstandarditemmodel_qstandarditemmodel_takecolumn, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QStandardItemModel_QStandardItemModel, takeHorizontalHeaderItem, arginfo_qt_gui_qstandarditemmodel_qstandarditemmodel_takehorizontalheaderitem, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QStandardItemModel_QStandardItemModel, takeVerticalHeaderItem, arginfo_qt_gui_qstandarditemmodel_qstandarditemmodel_takeverticalheaderitem, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QStandardItemModel_QStandardItemModel, itemPrototype, arginfo_qt_gui_qstandarditemmodel_qstandarditemmodel_itemprototype, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QStandardItemModel_QStandardItemModel, setItemPrototype, arginfo_qt_gui_qstandarditemmodel_qstandarditemmodel_setitemprototype, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QStandardItemModel_QStandardItemModel, findItems, arginfo_qt_gui_qstandarditemmodel_qstandarditemmodel_finditems, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QStandardItemModel_QStandardItemModel, sortRole, arginfo_qt_gui_qstandarditemmodel_qstandarditemmodel_sortrole, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QStandardItemModel_QStandardItemModel, setSortRole, arginfo_qt_gui_qstandarditemmodel_qstandarditemmodel_setsortrole, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QStandardItemModel_QStandardItemModel, mimeTypes, arginfo_qt_gui_qstandarditemmodel_qstandarditemmodel_mimetypes, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QStandardItemModel_QStandardItemModel, mimeData, arginfo_qt_gui_qstandarditemmodel_qstandarditemmodel_mimedata, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QStandardItemModel_QStandardItemModel, dropMimeData, arginfo_qt_gui_qstandarditemmodel_qstandarditemmodel_dropmimedata, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QStandardItemModel_QStandardItemModel, itemChanged, arginfo_qt_gui_qstandarditemmodel_qstandarditemmodel_itemchanged, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
