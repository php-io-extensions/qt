
extern zend_class_entry *qt_core_qidentityproxymodel_qidentityproxymodel_ce;

ZEPHIR_INIT_CLASS(Qt_Core_QIdentityProxyModel_QIdentityProxyModel);

PHP_METHOD(Qt_Core_QIdentityProxyModel_QIdentityProxyModel, parent_);
PHP_METHOD(Qt_Core_QIdentityProxyModel_QIdentityProxyModel, staticMetaObject);
PHP_METHOD(Qt_Core_QIdentityProxyModel_QIdentityProxyModel, tr);
PHP_METHOD(Qt_Core_QIdentityProxyModel_QIdentityProxyModel, new_);
PHP_METHOD(Qt_Core_QIdentityProxyModel_QIdentityProxyModel, columnCount);
PHP_METHOD(Qt_Core_QIdentityProxyModel_QIdentityProxyModel, index);
PHP_METHOD(Qt_Core_QIdentityProxyModel_QIdentityProxyModel, mapFromSource);
PHP_METHOD(Qt_Core_QIdentityProxyModel_QIdentityProxyModel, mapToSource);
PHP_METHOD(Qt_Core_QIdentityProxyModel_QIdentityProxyModel, parentQModelIndex);
PHP_METHOD(Qt_Core_QIdentityProxyModel_QIdentityProxyModel, rowCount);
PHP_METHOD(Qt_Core_QIdentityProxyModel_QIdentityProxyModel, headerData);
PHP_METHOD(Qt_Core_QIdentityProxyModel_QIdentityProxyModel, dropMimeData);
PHP_METHOD(Qt_Core_QIdentityProxyModel_QIdentityProxyModel, sibling);
PHP_METHOD(Qt_Core_QIdentityProxyModel_QIdentityProxyModel, mapSelectionFromSource);
PHP_METHOD(Qt_Core_QIdentityProxyModel_QIdentityProxyModel, mapSelectionToSource);
PHP_METHOD(Qt_Core_QIdentityProxyModel_QIdentityProxyModel, match_);
PHP_METHOD(Qt_Core_QIdentityProxyModel_QIdentityProxyModel, setSourceModel);
PHP_METHOD(Qt_Core_QIdentityProxyModel_QIdentityProxyModel, insertColumns);
PHP_METHOD(Qt_Core_QIdentityProxyModel_QIdentityProxyModel, insertRows);
PHP_METHOD(Qt_Core_QIdentityProxyModel_QIdentityProxyModel, removeColumns);
PHP_METHOD(Qt_Core_QIdentityProxyModel_QIdentityProxyModel, removeRows);
PHP_METHOD(Qt_Core_QIdentityProxyModel_QIdentityProxyModel, moveRows);
PHP_METHOD(Qt_Core_QIdentityProxyModel_QIdentityProxyModel, moveColumns);
PHP_METHOD(Qt_Core_QIdentityProxyModel_QIdentityProxyModel, handleSourceLayoutChanges);
PHP_METHOD(Qt_Core_QIdentityProxyModel_QIdentityProxyModel, handleSourceDataChanges);
PHP_METHOD(Qt_Core_QIdentityProxyModel_QIdentityProxyModel, setHandleSourceLayoutChanges);
PHP_METHOD(Qt_Core_QIdentityProxyModel_QIdentityProxyModel, setHandleSourceDataChanges);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qidentityproxymodel_qidentityproxymodel_parent_, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qidentityproxymodel_qidentityproxymodel_staticmetaobject, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qidentityproxymodel_qidentityproxymodel_tr, 0, 1, IS_STRING, 0)
	ZEND_ARG_INFO(0, s)
	ZEND_ARG_INFO(0, c)
	ZEND_ARG_TYPE_INFO(0, n, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qidentityproxymodel_qidentityproxymodel_new_, 0, 0, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qidentityproxymodel_qidentityproxymodel_columncount, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_INFO(0, parent_)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qidentityproxymodel_qidentityproxymodel_index, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, row, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, column, IS_LONG, 0)
	ZEND_ARG_INFO(0, parent_)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qidentityproxymodel_qidentityproxymodel_mapfromsource, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sourceIndex, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qidentityproxymodel_qidentityproxymodel_maptosource, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, proxyIndex, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qidentityproxymodel_qidentityproxymodel_parentqmodelindex, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, child, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qidentityproxymodel_qidentityproxymodel_rowcount, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_INFO(0, parent_)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_qt_core_qidentityproxymodel_qidentityproxymodel_headerdata, 0, 0, 3)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, section, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, orientation, IS_LONG, 0)
	ZEND_ARG_INFO(0, role)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qidentityproxymodel_qidentityproxymodel_dropmimedata, 0, 6, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, data, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, action, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, row, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, column, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qidentityproxymodel_qidentityproxymodel_sibling, 0, 4, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, row, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, column, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, idx, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qidentityproxymodel_qidentityproxymodel_mapselectionfromsource, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selection, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qidentityproxymodel_qidentityproxymodel_mapselectiontosource, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selection, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qidentityproxymodel_qidentityproxymodel_match_, 0, 4, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, start, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, role, IS_LONG, 0)
	ZEND_ARG_INFO(0, value)
	ZEND_ARG_TYPE_INFO(0, hits, IS_LONG, 0)
	ZEND_ARG_INFO(0, flags)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qidentityproxymodel_qidentityproxymodel_setsourcemodel, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sourceModel, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qidentityproxymodel_qidentityproxymodel_insertcolumns, 0, 3, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, column, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, count, IS_LONG, 0)
	ZEND_ARG_INFO(0, parent_)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qidentityproxymodel_qidentityproxymodel_insertrows, 0, 3, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, row, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, count, IS_LONG, 0)
	ZEND_ARG_INFO(0, parent_)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qidentityproxymodel_qidentityproxymodel_removecolumns, 0, 3, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, column, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, count, IS_LONG, 0)
	ZEND_ARG_INFO(0, parent_)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qidentityproxymodel_qidentityproxymodel_removerows, 0, 3, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, row, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, count, IS_LONG, 0)
	ZEND_ARG_INFO(0, parent_)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qidentityproxymodel_qidentityproxymodel_moverows, 0, 6, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sourceParent, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sourceRow, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, count, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, destinationParent, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, destinationChild, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qidentityproxymodel_qidentityproxymodel_movecolumns, 0, 6, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sourceParent, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sourceColumn, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, count, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, destinationParent, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, destinationChild, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qidentityproxymodel_qidentityproxymodel_handlesourcelayoutchanges, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qidentityproxymodel_qidentityproxymodel_handlesourcedatachanges, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qidentityproxymodel_qidentityproxymodel_sethandlesourcelayoutchanges, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qidentityproxymodel_qidentityproxymodel_sethandlesourcedatachanges, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_core_qidentityproxymodel_qidentityproxymodel_method_entry) {
	PHP_ME(Qt_Core_QIdentityProxyModel_QIdentityProxyModel, parent_, arginfo_qt_core_qidentityproxymodel_qidentityproxymodel_parent_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QIdentityProxyModel_QIdentityProxyModel, staticMetaObject, arginfo_qt_core_qidentityproxymodel_qidentityproxymodel_staticmetaobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QIdentityProxyModel_QIdentityProxyModel, tr, arginfo_qt_core_qidentityproxymodel_qidentityproxymodel_tr, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QIdentityProxyModel_QIdentityProxyModel, new_, arginfo_qt_core_qidentityproxymodel_qidentityproxymodel_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QIdentityProxyModel_QIdentityProxyModel, columnCount, arginfo_qt_core_qidentityproxymodel_qidentityproxymodel_columncount, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QIdentityProxyModel_QIdentityProxyModel, index, arginfo_qt_core_qidentityproxymodel_qidentityproxymodel_index, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QIdentityProxyModel_QIdentityProxyModel, mapFromSource, arginfo_qt_core_qidentityproxymodel_qidentityproxymodel_mapfromsource, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QIdentityProxyModel_QIdentityProxyModel, mapToSource, arginfo_qt_core_qidentityproxymodel_qidentityproxymodel_maptosource, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QIdentityProxyModel_QIdentityProxyModel, parentQModelIndex, arginfo_qt_core_qidentityproxymodel_qidentityproxymodel_parentqmodelindex, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QIdentityProxyModel_QIdentityProxyModel, rowCount, arginfo_qt_core_qidentityproxymodel_qidentityproxymodel_rowcount, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QIdentityProxyModel_QIdentityProxyModel, headerData, arginfo_qt_core_qidentityproxymodel_qidentityproxymodel_headerdata, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QIdentityProxyModel_QIdentityProxyModel, dropMimeData, arginfo_qt_core_qidentityproxymodel_qidentityproxymodel_dropmimedata, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QIdentityProxyModel_QIdentityProxyModel, sibling, arginfo_qt_core_qidentityproxymodel_qidentityproxymodel_sibling, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QIdentityProxyModel_QIdentityProxyModel, mapSelectionFromSource, arginfo_qt_core_qidentityproxymodel_qidentityproxymodel_mapselectionfromsource, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QIdentityProxyModel_QIdentityProxyModel, mapSelectionToSource, arginfo_qt_core_qidentityproxymodel_qidentityproxymodel_mapselectiontosource, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QIdentityProxyModel_QIdentityProxyModel, match_, arginfo_qt_core_qidentityproxymodel_qidentityproxymodel_match_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QIdentityProxyModel_QIdentityProxyModel, setSourceModel, arginfo_qt_core_qidentityproxymodel_qidentityproxymodel_setsourcemodel, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QIdentityProxyModel_QIdentityProxyModel, insertColumns, arginfo_qt_core_qidentityproxymodel_qidentityproxymodel_insertcolumns, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QIdentityProxyModel_QIdentityProxyModel, insertRows, arginfo_qt_core_qidentityproxymodel_qidentityproxymodel_insertrows, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QIdentityProxyModel_QIdentityProxyModel, removeColumns, arginfo_qt_core_qidentityproxymodel_qidentityproxymodel_removecolumns, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QIdentityProxyModel_QIdentityProxyModel, removeRows, arginfo_qt_core_qidentityproxymodel_qidentityproxymodel_removerows, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QIdentityProxyModel_QIdentityProxyModel, moveRows, arginfo_qt_core_qidentityproxymodel_qidentityproxymodel_moverows, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QIdentityProxyModel_QIdentityProxyModel, moveColumns, arginfo_qt_core_qidentityproxymodel_qidentityproxymodel_movecolumns, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QIdentityProxyModel_QIdentityProxyModel, handleSourceLayoutChanges, arginfo_qt_core_qidentityproxymodel_qidentityproxymodel_handlesourcelayoutchanges, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QIdentityProxyModel_QIdentityProxyModel, handleSourceDataChanges, arginfo_qt_core_qidentityproxymodel_qidentityproxymodel_handlesourcedatachanges, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QIdentityProxyModel_QIdentityProxyModel, setHandleSourceLayoutChanges, arginfo_qt_core_qidentityproxymodel_qidentityproxymodel_sethandlesourcelayoutchanges, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QIdentityProxyModel_QIdentityProxyModel, setHandleSourceDataChanges, arginfo_qt_core_qidentityproxymodel_qidentityproxymodel_sethandlesourcedatachanges, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
