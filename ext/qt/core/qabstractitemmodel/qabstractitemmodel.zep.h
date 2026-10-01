
extern zend_class_entry *qt_core_qabstractitemmodel_qabstractitemmodel_ce;

ZEPHIR_INIT_CLASS(Qt_Core_QAbstractItemModel_QAbstractItemModel);

PHP_METHOD(Qt_Core_QAbstractItemModel_QAbstractItemModel, parent_);
PHP_METHOD(Qt_Core_QAbstractItemModel_QAbstractItemModel, staticMetaObject);
PHP_METHOD(Qt_Core_QAbstractItemModel_QAbstractItemModel, tr);
PHP_METHOD(Qt_Core_QAbstractItemModel_QAbstractItemModel, new_);
PHP_METHOD(Qt_Core_QAbstractItemModel_QAbstractItemModel, hasIndex);
PHP_METHOD(Qt_Core_QAbstractItemModel_QAbstractItemModel, index);
PHP_METHOD(Qt_Core_QAbstractItemModel_QAbstractItemModel, parentQModelIndex);
PHP_METHOD(Qt_Core_QAbstractItemModel_QAbstractItemModel, sibling);
PHP_METHOD(Qt_Core_QAbstractItemModel_QAbstractItemModel, rowCount);
PHP_METHOD(Qt_Core_QAbstractItemModel_QAbstractItemModel, columnCount);
PHP_METHOD(Qt_Core_QAbstractItemModel_QAbstractItemModel, hasChildren);
PHP_METHOD(Qt_Core_QAbstractItemModel_QAbstractItemModel, data);
PHP_METHOD(Qt_Core_QAbstractItemModel_QAbstractItemModel, setData);
PHP_METHOD(Qt_Core_QAbstractItemModel_QAbstractItemModel, headerData);
PHP_METHOD(Qt_Core_QAbstractItemModel_QAbstractItemModel, setHeaderData);
PHP_METHOD(Qt_Core_QAbstractItemModel_QAbstractItemModel, itemData);
PHP_METHOD(Qt_Core_QAbstractItemModel_QAbstractItemModel, setItemData);
PHP_METHOD(Qt_Core_QAbstractItemModel_QAbstractItemModel, clearItemData);
PHP_METHOD(Qt_Core_QAbstractItemModel_QAbstractItemModel, mimeTypes);
PHP_METHOD(Qt_Core_QAbstractItemModel_QAbstractItemModel, mimeData);
PHP_METHOD(Qt_Core_QAbstractItemModel_QAbstractItemModel, canDropMimeData);
PHP_METHOD(Qt_Core_QAbstractItemModel_QAbstractItemModel, dropMimeData);
PHP_METHOD(Qt_Core_QAbstractItemModel_QAbstractItemModel, supportedDropActions);
PHP_METHOD(Qt_Core_QAbstractItemModel_QAbstractItemModel, supportedDragActions);
PHP_METHOD(Qt_Core_QAbstractItemModel_QAbstractItemModel, insertRows);
PHP_METHOD(Qt_Core_QAbstractItemModel_QAbstractItemModel, insertColumns);
PHP_METHOD(Qt_Core_QAbstractItemModel_QAbstractItemModel, removeRows);
PHP_METHOD(Qt_Core_QAbstractItemModel_QAbstractItemModel, removeColumns);
PHP_METHOD(Qt_Core_QAbstractItemModel_QAbstractItemModel, moveRows);
PHP_METHOD(Qt_Core_QAbstractItemModel_QAbstractItemModel, moveColumns);
PHP_METHOD(Qt_Core_QAbstractItemModel_QAbstractItemModel, insertRow);
PHP_METHOD(Qt_Core_QAbstractItemModel_QAbstractItemModel, insertColumn);
PHP_METHOD(Qt_Core_QAbstractItemModel_QAbstractItemModel, removeRow);
PHP_METHOD(Qt_Core_QAbstractItemModel_QAbstractItemModel, removeColumn);
PHP_METHOD(Qt_Core_QAbstractItemModel_QAbstractItemModel, moveRow);
PHP_METHOD(Qt_Core_QAbstractItemModel_QAbstractItemModel, moveColumn);
PHP_METHOD(Qt_Core_QAbstractItemModel_QAbstractItemModel, fetchMore);
PHP_METHOD(Qt_Core_QAbstractItemModel_QAbstractItemModel, canFetchMore);
PHP_METHOD(Qt_Core_QAbstractItemModel_QAbstractItemModel, flags);
PHP_METHOD(Qt_Core_QAbstractItemModel_QAbstractItemModel, sort);
PHP_METHOD(Qt_Core_QAbstractItemModel_QAbstractItemModel, buddy);
PHP_METHOD(Qt_Core_QAbstractItemModel_QAbstractItemModel, match_);
PHP_METHOD(Qt_Core_QAbstractItemModel_QAbstractItemModel, span);
PHP_METHOD(Qt_Core_QAbstractItemModel_QAbstractItemModel, roleNames);
PHP_METHOD(Qt_Core_QAbstractItemModel_QAbstractItemModel, checkIndex);
PHP_METHOD(Qt_Core_QAbstractItemModel_QAbstractItemModel, multiData);
PHP_METHOD(Qt_Core_QAbstractItemModel_QAbstractItemModel, dataChanged);
PHP_METHOD(Qt_Core_QAbstractItemModel_QAbstractItemModel, headerDataChanged);
PHP_METHOD(Qt_Core_QAbstractItemModel_QAbstractItemModel, layoutChanged);
PHP_METHOD(Qt_Core_QAbstractItemModel_QAbstractItemModel, layoutAboutToBeChanged);
PHP_METHOD(Qt_Core_QAbstractItemModel_QAbstractItemModel, submit);
PHP_METHOD(Qt_Core_QAbstractItemModel_QAbstractItemModel, revert);
PHP_METHOD(Qt_Core_QAbstractItemModel_QAbstractItemModel, resetInternalData);
PHP_METHOD(Qt_Core_QAbstractItemModel_QAbstractItemModel, createIndex);
PHP_METHOD(Qt_Core_QAbstractItemModel_QAbstractItemModel, encodeData);
PHP_METHOD(Qt_Core_QAbstractItemModel_QAbstractItemModel, decodeData);
PHP_METHOD(Qt_Core_QAbstractItemModel_QAbstractItemModel, beginInsertRows);
PHP_METHOD(Qt_Core_QAbstractItemModel_QAbstractItemModel, endInsertRows);
PHP_METHOD(Qt_Core_QAbstractItemModel_QAbstractItemModel, beginRemoveRows);
PHP_METHOD(Qt_Core_QAbstractItemModel_QAbstractItemModel, endRemoveRows);
PHP_METHOD(Qt_Core_QAbstractItemModel_QAbstractItemModel, beginMoveRows);
PHP_METHOD(Qt_Core_QAbstractItemModel_QAbstractItemModel, endMoveRows);
PHP_METHOD(Qt_Core_QAbstractItemModel_QAbstractItemModel, beginInsertColumns);
PHP_METHOD(Qt_Core_QAbstractItemModel_QAbstractItemModel, endInsertColumns);
PHP_METHOD(Qt_Core_QAbstractItemModel_QAbstractItemModel, beginRemoveColumns);
PHP_METHOD(Qt_Core_QAbstractItemModel_QAbstractItemModel, endRemoveColumns);
PHP_METHOD(Qt_Core_QAbstractItemModel_QAbstractItemModel, beginMoveColumns);
PHP_METHOD(Qt_Core_QAbstractItemModel_QAbstractItemModel, endMoveColumns);
PHP_METHOD(Qt_Core_QAbstractItemModel_QAbstractItemModel, beginResetModel);
PHP_METHOD(Qt_Core_QAbstractItemModel_QAbstractItemModel, endResetModel);
PHP_METHOD(Qt_Core_QAbstractItemModel_QAbstractItemModel, changePersistentIndex);
PHP_METHOD(Qt_Core_QAbstractItemModel_QAbstractItemModel, changePersistentIndexList);
PHP_METHOD(Qt_Core_QAbstractItemModel_QAbstractItemModel, persistentIndexList);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qabstractitemmodel_qabstractitemmodel_parent_, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qabstractitemmodel_qabstractitemmodel_staticmetaobject, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qabstractitemmodel_qabstractitemmodel_tr, 0, 1, IS_STRING, 0)
	ZEND_ARG_INFO(0, s)
	ZEND_ARG_INFO(0, c)
	ZEND_ARG_TYPE_INFO(0, n, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qabstractitemmodel_qabstractitemmodel_new_, 0, 0, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qabstractitemmodel_qabstractitemmodel_hasindex, 0, 3, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, row, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, column, IS_LONG, 0)
	ZEND_ARG_INFO(0, parent_)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qabstractitemmodel_qabstractitemmodel_index, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, row, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, column, IS_LONG, 0)
	ZEND_ARG_INFO(0, parent_)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qabstractitemmodel_qabstractitemmodel_parentqmodelindex, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, child, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qabstractitemmodel_qabstractitemmodel_sibling, 0, 4, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, row, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, column, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, idx, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qabstractitemmodel_qabstractitemmodel_rowcount, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_INFO(0, parent_)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qabstractitemmodel_qabstractitemmodel_columncount, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_INFO(0, parent_)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qabstractitemmodel_qabstractitemmodel_haschildren, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_INFO(0, parent_)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_qt_core_qabstractitemmodel_qabstractitemmodel_data, 0, 0, 2)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
	ZEND_ARG_INFO(0, role)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qabstractitemmodel_qabstractitemmodel_setdata, 0, 3, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
	ZEND_ARG_INFO(0, value)
	ZEND_ARG_INFO(0, role)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_qt_core_qabstractitemmodel_qabstractitemmodel_headerdata, 0, 0, 3)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, section, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, orientation, IS_LONG, 0)
	ZEND_ARG_INFO(0, role)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qabstractitemmodel_qabstractitemmodel_setheaderdata, 0, 4, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, section, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, orientation, IS_LONG, 0)
	ZEND_ARG_INFO(0, value)
	ZEND_ARG_INFO(0, role)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qabstractitemmodel_qabstractitemmodel_itemdata, 0, 2, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qabstractitemmodel_qabstractitemmodel_setitemdata, 0, 3, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
	ZEND_ARG_ARRAY_INFO(0, roles, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qabstractitemmodel_qabstractitemmodel_clearitemdata, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qabstractitemmodel_qabstractitemmodel_mimetypes, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qabstractitemmodel_qabstractitemmodel_mimedata, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_ARRAY_INFO(0, indexes, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qabstractitemmodel_qabstractitemmodel_candropmimedata, 0, 6, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, data, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, action, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, row, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, column, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qabstractitemmodel_qabstractitemmodel_dropmimedata, 0, 6, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, data, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, action, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, row, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, column, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qabstractitemmodel_qabstractitemmodel_supporteddropactions, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qabstractitemmodel_qabstractitemmodel_supporteddragactions, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qabstractitemmodel_qabstractitemmodel_insertrows, 0, 3, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, row, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, count, IS_LONG, 0)
	ZEND_ARG_INFO(0, parent_)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qabstractitemmodel_qabstractitemmodel_insertcolumns, 0, 3, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, column, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, count, IS_LONG, 0)
	ZEND_ARG_INFO(0, parent_)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qabstractitemmodel_qabstractitemmodel_removerows, 0, 3, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, row, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, count, IS_LONG, 0)
	ZEND_ARG_INFO(0, parent_)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qabstractitemmodel_qabstractitemmodel_removecolumns, 0, 3, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, column, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, count, IS_LONG, 0)
	ZEND_ARG_INFO(0, parent_)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qabstractitemmodel_qabstractitemmodel_moverows, 0, 6, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sourceParent, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sourceRow, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, count, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, destinationParent, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, destinationChild, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qabstractitemmodel_qabstractitemmodel_movecolumns, 0, 6, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sourceParent, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sourceColumn, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, count, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, destinationParent, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, destinationChild, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qabstractitemmodel_qabstractitemmodel_insertrow, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, row, IS_LONG, 0)
	ZEND_ARG_INFO(0, parent_)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qabstractitemmodel_qabstractitemmodel_insertcolumn, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, column, IS_LONG, 0)
	ZEND_ARG_INFO(0, parent_)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qabstractitemmodel_qabstractitemmodel_removerow, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, row, IS_LONG, 0)
	ZEND_ARG_INFO(0, parent_)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qabstractitemmodel_qabstractitemmodel_removecolumn, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, column, IS_LONG, 0)
	ZEND_ARG_INFO(0, parent_)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qabstractitemmodel_qabstractitemmodel_moverow, 0, 5, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sourceParent, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sourceRow, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, destinationParent, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, destinationChild, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qabstractitemmodel_qabstractitemmodel_movecolumn, 0, 5, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sourceParent, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sourceColumn, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, destinationParent, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, destinationChild, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qabstractitemmodel_qabstractitemmodel_fetchmore, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qabstractitemmodel_qabstractitemmodel_canfetchmore, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qabstractitemmodel_qabstractitemmodel_flags, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qabstractitemmodel_qabstractitemmodel_sort, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, column, IS_LONG, 0)
	ZEND_ARG_INFO(0, order)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qabstractitemmodel_qabstractitemmodel_buddy, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qabstractitemmodel_qabstractitemmodel_match_, 0, 4, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, start, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, role, IS_LONG, 0)
	ZEND_ARG_INFO(0, value)
	ZEND_ARG_TYPE_INFO(0, hits, IS_LONG, 0)
	ZEND_ARG_INFO(0, flags)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qabstractitemmodel_qabstractitemmodel_span, 0, 2, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qabstractitemmodel_qabstractitemmodel_rolenames, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qabstractitemmodel_qabstractitemmodel_checkindex, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
	ZEND_ARG_INFO(0, options)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qabstractitemmodel_qabstractitemmodel_multidata, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, roleDataSpan, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qabstractitemmodel_qabstractitemmodel_datachanged, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, topLeft, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, bottomRight, IS_LONG, 0)
	ZEND_ARG_INFO(0, roles)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qabstractitemmodel_qabstractitemmodel_headerdatachanged, 0, 4, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, orientation, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, first, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, last, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qabstractitemmodel_qabstractitemmodel_layoutchanged, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_INFO(0, parents)
	ZEND_ARG_INFO(0, hint)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qabstractitemmodel_qabstractitemmodel_layoutabouttobechanged, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_INFO(0, parents)
	ZEND_ARG_INFO(0, hint)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qabstractitemmodel_qabstractitemmodel_submit, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qabstractitemmodel_qabstractitemmodel_revert, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qabstractitemmodel_qabstractitemmodel_resetinternaldata, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qabstractitemmodel_qabstractitemmodel_createindex, 0, 4, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, row, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, column, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, id, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qabstractitemmodel_qabstractitemmodel_encodedata, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_ARRAY_INFO(0, indexes, 0)
	ZEND_ARG_TYPE_INFO(0, stream, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qabstractitemmodel_qabstractitemmodel_decodedata, 0, 5, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, row, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, column, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, stream, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qabstractitemmodel_qabstractitemmodel_begininsertrows, 0, 4, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, first, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, last, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qabstractitemmodel_qabstractitemmodel_endinsertrows, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qabstractitemmodel_qabstractitemmodel_beginremoverows, 0, 4, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, first, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, last, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qabstractitemmodel_qabstractitemmodel_endremoverows, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qabstractitemmodel_qabstractitemmodel_beginmoverows, 0, 6, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sourceParent, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sourceFirst, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sourceLast, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, destinationParent, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, destinationRow, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qabstractitemmodel_qabstractitemmodel_endmoverows, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qabstractitemmodel_qabstractitemmodel_begininsertcolumns, 0, 4, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, first, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, last, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qabstractitemmodel_qabstractitemmodel_endinsertcolumns, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qabstractitemmodel_qabstractitemmodel_beginremovecolumns, 0, 4, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, first, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, last, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qabstractitemmodel_qabstractitemmodel_endremovecolumns, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qabstractitemmodel_qabstractitemmodel_beginmovecolumns, 0, 6, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sourceParent, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sourceFirst, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sourceLast, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, destinationParent, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, destinationColumn, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qabstractitemmodel_qabstractitemmodel_endmovecolumns, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qabstractitemmodel_qabstractitemmodel_beginresetmodel, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qabstractitemmodel_qabstractitemmodel_endresetmodel, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qabstractitemmodel_qabstractitemmodel_changepersistentindex, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, from, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, to, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qabstractitemmodel_qabstractitemmodel_changepersistentindexlist, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_ARRAY_INFO(0, from, 0)
	ZEND_ARG_ARRAY_INFO(0, to, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qabstractitemmodel_qabstractitemmodel_persistentindexlist, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_core_qabstractitemmodel_qabstractitemmodel_method_entry) {
	PHP_ME(Qt_Core_QAbstractItemModel_QAbstractItemModel, parent_, arginfo_qt_core_qabstractitemmodel_qabstractitemmodel_parent_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QAbstractItemModel_QAbstractItemModel, staticMetaObject, arginfo_qt_core_qabstractitemmodel_qabstractitemmodel_staticmetaobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QAbstractItemModel_QAbstractItemModel, tr, arginfo_qt_core_qabstractitemmodel_qabstractitemmodel_tr, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QAbstractItemModel_QAbstractItemModel, new_, arginfo_qt_core_qabstractitemmodel_qabstractitemmodel_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QAbstractItemModel_QAbstractItemModel, hasIndex, arginfo_qt_core_qabstractitemmodel_qabstractitemmodel_hasindex, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QAbstractItemModel_QAbstractItemModel, index, arginfo_qt_core_qabstractitemmodel_qabstractitemmodel_index, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QAbstractItemModel_QAbstractItemModel, parentQModelIndex, arginfo_qt_core_qabstractitemmodel_qabstractitemmodel_parentqmodelindex, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QAbstractItemModel_QAbstractItemModel, sibling, arginfo_qt_core_qabstractitemmodel_qabstractitemmodel_sibling, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QAbstractItemModel_QAbstractItemModel, rowCount, arginfo_qt_core_qabstractitemmodel_qabstractitemmodel_rowcount, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QAbstractItemModel_QAbstractItemModel, columnCount, arginfo_qt_core_qabstractitemmodel_qabstractitemmodel_columncount, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QAbstractItemModel_QAbstractItemModel, hasChildren, arginfo_qt_core_qabstractitemmodel_qabstractitemmodel_haschildren, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QAbstractItemModel_QAbstractItemModel, data, arginfo_qt_core_qabstractitemmodel_qabstractitemmodel_data, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QAbstractItemModel_QAbstractItemModel, setData, arginfo_qt_core_qabstractitemmodel_qabstractitemmodel_setdata, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QAbstractItemModel_QAbstractItemModel, headerData, arginfo_qt_core_qabstractitemmodel_qabstractitemmodel_headerdata, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QAbstractItemModel_QAbstractItemModel, setHeaderData, arginfo_qt_core_qabstractitemmodel_qabstractitemmodel_setheaderdata, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QAbstractItemModel_QAbstractItemModel, itemData, arginfo_qt_core_qabstractitemmodel_qabstractitemmodel_itemdata, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QAbstractItemModel_QAbstractItemModel, setItemData, arginfo_qt_core_qabstractitemmodel_qabstractitemmodel_setitemdata, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QAbstractItemModel_QAbstractItemModel, clearItemData, arginfo_qt_core_qabstractitemmodel_qabstractitemmodel_clearitemdata, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QAbstractItemModel_QAbstractItemModel, mimeTypes, arginfo_qt_core_qabstractitemmodel_qabstractitemmodel_mimetypes, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QAbstractItemModel_QAbstractItemModel, mimeData, arginfo_qt_core_qabstractitemmodel_qabstractitemmodel_mimedata, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QAbstractItemModel_QAbstractItemModel, canDropMimeData, arginfo_qt_core_qabstractitemmodel_qabstractitemmodel_candropmimedata, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QAbstractItemModel_QAbstractItemModel, dropMimeData, arginfo_qt_core_qabstractitemmodel_qabstractitemmodel_dropmimedata, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QAbstractItemModel_QAbstractItemModel, supportedDropActions, arginfo_qt_core_qabstractitemmodel_qabstractitemmodel_supporteddropactions, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QAbstractItemModel_QAbstractItemModel, supportedDragActions, arginfo_qt_core_qabstractitemmodel_qabstractitemmodel_supporteddragactions, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QAbstractItemModel_QAbstractItemModel, insertRows, arginfo_qt_core_qabstractitemmodel_qabstractitemmodel_insertrows, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QAbstractItemModel_QAbstractItemModel, insertColumns, arginfo_qt_core_qabstractitemmodel_qabstractitemmodel_insertcolumns, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QAbstractItemModel_QAbstractItemModel, removeRows, arginfo_qt_core_qabstractitemmodel_qabstractitemmodel_removerows, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QAbstractItemModel_QAbstractItemModel, removeColumns, arginfo_qt_core_qabstractitemmodel_qabstractitemmodel_removecolumns, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QAbstractItemModel_QAbstractItemModel, moveRows, arginfo_qt_core_qabstractitemmodel_qabstractitemmodel_moverows, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QAbstractItemModel_QAbstractItemModel, moveColumns, arginfo_qt_core_qabstractitemmodel_qabstractitemmodel_movecolumns, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QAbstractItemModel_QAbstractItemModel, insertRow, arginfo_qt_core_qabstractitemmodel_qabstractitemmodel_insertrow, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QAbstractItemModel_QAbstractItemModel, insertColumn, arginfo_qt_core_qabstractitemmodel_qabstractitemmodel_insertcolumn, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QAbstractItemModel_QAbstractItemModel, removeRow, arginfo_qt_core_qabstractitemmodel_qabstractitemmodel_removerow, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QAbstractItemModel_QAbstractItemModel, removeColumn, arginfo_qt_core_qabstractitemmodel_qabstractitemmodel_removecolumn, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QAbstractItemModel_QAbstractItemModel, moveRow, arginfo_qt_core_qabstractitemmodel_qabstractitemmodel_moverow, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QAbstractItemModel_QAbstractItemModel, moveColumn, arginfo_qt_core_qabstractitemmodel_qabstractitemmodel_movecolumn, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QAbstractItemModel_QAbstractItemModel, fetchMore, arginfo_qt_core_qabstractitemmodel_qabstractitemmodel_fetchmore, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QAbstractItemModel_QAbstractItemModel, canFetchMore, arginfo_qt_core_qabstractitemmodel_qabstractitemmodel_canfetchmore, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QAbstractItemModel_QAbstractItemModel, flags, arginfo_qt_core_qabstractitemmodel_qabstractitemmodel_flags, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QAbstractItemModel_QAbstractItemModel, sort, arginfo_qt_core_qabstractitemmodel_qabstractitemmodel_sort, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QAbstractItemModel_QAbstractItemModel, buddy, arginfo_qt_core_qabstractitemmodel_qabstractitemmodel_buddy, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QAbstractItemModel_QAbstractItemModel, match_, arginfo_qt_core_qabstractitemmodel_qabstractitemmodel_match_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QAbstractItemModel_QAbstractItemModel, span, arginfo_qt_core_qabstractitemmodel_qabstractitemmodel_span, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QAbstractItemModel_QAbstractItemModel, roleNames, arginfo_qt_core_qabstractitemmodel_qabstractitemmodel_rolenames, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QAbstractItemModel_QAbstractItemModel, checkIndex, arginfo_qt_core_qabstractitemmodel_qabstractitemmodel_checkindex, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QAbstractItemModel_QAbstractItemModel, multiData, arginfo_qt_core_qabstractitemmodel_qabstractitemmodel_multidata, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QAbstractItemModel_QAbstractItemModel, dataChanged, arginfo_qt_core_qabstractitemmodel_qabstractitemmodel_datachanged, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QAbstractItemModel_QAbstractItemModel, headerDataChanged, arginfo_qt_core_qabstractitemmodel_qabstractitemmodel_headerdatachanged, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QAbstractItemModel_QAbstractItemModel, layoutChanged, arginfo_qt_core_qabstractitemmodel_qabstractitemmodel_layoutchanged, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QAbstractItemModel_QAbstractItemModel, layoutAboutToBeChanged, arginfo_qt_core_qabstractitemmodel_qabstractitemmodel_layoutabouttobechanged, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QAbstractItemModel_QAbstractItemModel, submit, arginfo_qt_core_qabstractitemmodel_qabstractitemmodel_submit, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QAbstractItemModel_QAbstractItemModel, revert, arginfo_qt_core_qabstractitemmodel_qabstractitemmodel_revert, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QAbstractItemModel_QAbstractItemModel, resetInternalData, arginfo_qt_core_qabstractitemmodel_qabstractitemmodel_resetinternaldata, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QAbstractItemModel_QAbstractItemModel, createIndex, arginfo_qt_core_qabstractitemmodel_qabstractitemmodel_createindex, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QAbstractItemModel_QAbstractItemModel, encodeData, arginfo_qt_core_qabstractitemmodel_qabstractitemmodel_encodedata, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QAbstractItemModel_QAbstractItemModel, decodeData, arginfo_qt_core_qabstractitemmodel_qabstractitemmodel_decodedata, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QAbstractItemModel_QAbstractItemModel, beginInsertRows, arginfo_qt_core_qabstractitemmodel_qabstractitemmodel_begininsertrows, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QAbstractItemModel_QAbstractItemModel, endInsertRows, arginfo_qt_core_qabstractitemmodel_qabstractitemmodel_endinsertrows, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QAbstractItemModel_QAbstractItemModel, beginRemoveRows, arginfo_qt_core_qabstractitemmodel_qabstractitemmodel_beginremoverows, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QAbstractItemModel_QAbstractItemModel, endRemoveRows, arginfo_qt_core_qabstractitemmodel_qabstractitemmodel_endremoverows, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QAbstractItemModel_QAbstractItemModel, beginMoveRows, arginfo_qt_core_qabstractitemmodel_qabstractitemmodel_beginmoverows, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QAbstractItemModel_QAbstractItemModel, endMoveRows, arginfo_qt_core_qabstractitemmodel_qabstractitemmodel_endmoverows, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QAbstractItemModel_QAbstractItemModel, beginInsertColumns, arginfo_qt_core_qabstractitemmodel_qabstractitemmodel_begininsertcolumns, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QAbstractItemModel_QAbstractItemModel, endInsertColumns, arginfo_qt_core_qabstractitemmodel_qabstractitemmodel_endinsertcolumns, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QAbstractItemModel_QAbstractItemModel, beginRemoveColumns, arginfo_qt_core_qabstractitemmodel_qabstractitemmodel_beginremovecolumns, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QAbstractItemModel_QAbstractItemModel, endRemoveColumns, arginfo_qt_core_qabstractitemmodel_qabstractitemmodel_endremovecolumns, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QAbstractItemModel_QAbstractItemModel, beginMoveColumns, arginfo_qt_core_qabstractitemmodel_qabstractitemmodel_beginmovecolumns, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QAbstractItemModel_QAbstractItemModel, endMoveColumns, arginfo_qt_core_qabstractitemmodel_qabstractitemmodel_endmovecolumns, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QAbstractItemModel_QAbstractItemModel, beginResetModel, arginfo_qt_core_qabstractitemmodel_qabstractitemmodel_beginresetmodel, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QAbstractItemModel_QAbstractItemModel, endResetModel, arginfo_qt_core_qabstractitemmodel_qabstractitemmodel_endresetmodel, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QAbstractItemModel_QAbstractItemModel, changePersistentIndex, arginfo_qt_core_qabstractitemmodel_qabstractitemmodel_changepersistentindex, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QAbstractItemModel_QAbstractItemModel, changePersistentIndexList, arginfo_qt_core_qabstractitemmodel_qabstractitemmodel_changepersistentindexlist, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QAbstractItemModel_QAbstractItemModel, persistentIndexList, arginfo_qt_core_qabstractitemmodel_qabstractitemmodel_persistentindexlist, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
