
extern zend_class_entry *qt_core_qabstractproxymodel_qabstractproxymodel_ce;

ZEPHIR_INIT_CLASS(Qt_Core_QAbstractProxyModel_QAbstractProxyModel);

PHP_METHOD(Qt_Core_QAbstractProxyModel_QAbstractProxyModel, staticMetaObject);
PHP_METHOD(Qt_Core_QAbstractProxyModel_QAbstractProxyModel, tr);
PHP_METHOD(Qt_Core_QAbstractProxyModel_QAbstractProxyModel, new_);
PHP_METHOD(Qt_Core_QAbstractProxyModel_QAbstractProxyModel, setSourceModel);
PHP_METHOD(Qt_Core_QAbstractProxyModel_QAbstractProxyModel, sourceModel);
PHP_METHOD(Qt_Core_QAbstractProxyModel_QAbstractProxyModel, mapToSource);
PHP_METHOD(Qt_Core_QAbstractProxyModel_QAbstractProxyModel, mapFromSource);
PHP_METHOD(Qt_Core_QAbstractProxyModel_QAbstractProxyModel, mapSelectionToSource);
PHP_METHOD(Qt_Core_QAbstractProxyModel_QAbstractProxyModel, mapSelectionFromSource);
PHP_METHOD(Qt_Core_QAbstractProxyModel_QAbstractProxyModel, submit);
PHP_METHOD(Qt_Core_QAbstractProxyModel_QAbstractProxyModel, revert);
PHP_METHOD(Qt_Core_QAbstractProxyModel_QAbstractProxyModel, data);
PHP_METHOD(Qt_Core_QAbstractProxyModel_QAbstractProxyModel, headerData);
PHP_METHOD(Qt_Core_QAbstractProxyModel_QAbstractProxyModel, itemData);
PHP_METHOD(Qt_Core_QAbstractProxyModel_QAbstractProxyModel, flags);
PHP_METHOD(Qt_Core_QAbstractProxyModel_QAbstractProxyModel, setData);
PHP_METHOD(Qt_Core_QAbstractProxyModel_QAbstractProxyModel, setItemData);
PHP_METHOD(Qt_Core_QAbstractProxyModel_QAbstractProxyModel, setHeaderData);
PHP_METHOD(Qt_Core_QAbstractProxyModel_QAbstractProxyModel, clearItemData);
PHP_METHOD(Qt_Core_QAbstractProxyModel_QAbstractProxyModel, buddy);
PHP_METHOD(Qt_Core_QAbstractProxyModel_QAbstractProxyModel, canFetchMore);
PHP_METHOD(Qt_Core_QAbstractProxyModel_QAbstractProxyModel, fetchMore);
PHP_METHOD(Qt_Core_QAbstractProxyModel_QAbstractProxyModel, sort);
PHP_METHOD(Qt_Core_QAbstractProxyModel_QAbstractProxyModel, span);
PHP_METHOD(Qt_Core_QAbstractProxyModel_QAbstractProxyModel, hasChildren);
PHP_METHOD(Qt_Core_QAbstractProxyModel_QAbstractProxyModel, sibling);
PHP_METHOD(Qt_Core_QAbstractProxyModel_QAbstractProxyModel, mimeData);
PHP_METHOD(Qt_Core_QAbstractProxyModel_QAbstractProxyModel, canDropMimeData);
PHP_METHOD(Qt_Core_QAbstractProxyModel_QAbstractProxyModel, dropMimeData);
PHP_METHOD(Qt_Core_QAbstractProxyModel_QAbstractProxyModel, mimeTypes);
PHP_METHOD(Qt_Core_QAbstractProxyModel_QAbstractProxyModel, supportedDragActions);
PHP_METHOD(Qt_Core_QAbstractProxyModel_QAbstractProxyModel, supportedDropActions);
PHP_METHOD(Qt_Core_QAbstractProxyModel_QAbstractProxyModel, roleNames);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qabstractproxymodel_qabstractproxymodel_staticmetaobject, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qabstractproxymodel_qabstractproxymodel_tr, 0, 1, IS_STRING, 0)
	ZEND_ARG_INFO(0, s)
	ZEND_ARG_INFO(0, c)
	ZEND_ARG_TYPE_INFO(0, n, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qabstractproxymodel_qabstractproxymodel_new_, 0, 0, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qabstractproxymodel_qabstractproxymodel_setsourcemodel, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sourceModel, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qabstractproxymodel_qabstractproxymodel_sourcemodel, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qabstractproxymodel_qabstractproxymodel_maptosource, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, proxyIndex, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qabstractproxymodel_qabstractproxymodel_mapfromsource, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sourceIndex, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qabstractproxymodel_qabstractproxymodel_mapselectiontosource, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selection, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qabstractproxymodel_qabstractproxymodel_mapselectionfromsource, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selection, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qabstractproxymodel_qabstractproxymodel_submit, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qabstractproxymodel_qabstractproxymodel_revert, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_qt_core_qabstractproxymodel_qabstractproxymodel_data, 0, 0, 2)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, proxyIndex, IS_LONG, 0)
	ZEND_ARG_INFO(0, role)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_qt_core_qabstractproxymodel_qabstractproxymodel_headerdata, 0, 0, 3)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, section, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, orientation, IS_LONG, 0)
	ZEND_ARG_INFO(0, role)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qabstractproxymodel_qabstractproxymodel_itemdata, 0, 2, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qabstractproxymodel_qabstractproxymodel_flags, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qabstractproxymodel_qabstractproxymodel_setdata, 0, 3, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
	ZEND_ARG_INFO(0, value)
	ZEND_ARG_INFO(0, role)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qabstractproxymodel_qabstractproxymodel_setitemdata, 0, 3, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
	ZEND_ARG_ARRAY_INFO(0, roles, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qabstractproxymodel_qabstractproxymodel_setheaderdata, 0, 4, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, section, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, orientation, IS_LONG, 0)
	ZEND_ARG_INFO(0, value)
	ZEND_ARG_INFO(0, role)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qabstractproxymodel_qabstractproxymodel_clearitemdata, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qabstractproxymodel_qabstractproxymodel_buddy, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qabstractproxymodel_qabstractproxymodel_canfetchmore, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qabstractproxymodel_qabstractproxymodel_fetchmore, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qabstractproxymodel_qabstractproxymodel_sort, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, column, IS_LONG, 0)
	ZEND_ARG_INFO(0, order)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qabstractproxymodel_qabstractproxymodel_span, 0, 2, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qabstractproxymodel_qabstractproxymodel_haschildren, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_INFO(0, parent_)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qabstractproxymodel_qabstractproxymodel_sibling, 0, 4, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, row, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, column, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, idx, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qabstractproxymodel_qabstractproxymodel_mimedata, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_ARRAY_INFO(0, indexes, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qabstractproxymodel_qabstractproxymodel_candropmimedata, 0, 6, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, data, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, action, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, row, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, column, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qabstractproxymodel_qabstractproxymodel_dropmimedata, 0, 6, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, data, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, action, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, row, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, column, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qabstractproxymodel_qabstractproxymodel_mimetypes, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qabstractproxymodel_qabstractproxymodel_supporteddragactions, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qabstractproxymodel_qabstractproxymodel_supporteddropactions, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qabstractproxymodel_qabstractproxymodel_rolenames, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_core_qabstractproxymodel_qabstractproxymodel_method_entry) {
	PHP_ME(Qt_Core_QAbstractProxyModel_QAbstractProxyModel, staticMetaObject, arginfo_qt_core_qabstractproxymodel_qabstractproxymodel_staticmetaobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QAbstractProxyModel_QAbstractProxyModel, tr, arginfo_qt_core_qabstractproxymodel_qabstractproxymodel_tr, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QAbstractProxyModel_QAbstractProxyModel, new_, arginfo_qt_core_qabstractproxymodel_qabstractproxymodel_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QAbstractProxyModel_QAbstractProxyModel, setSourceModel, arginfo_qt_core_qabstractproxymodel_qabstractproxymodel_setsourcemodel, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QAbstractProxyModel_QAbstractProxyModel, sourceModel, arginfo_qt_core_qabstractproxymodel_qabstractproxymodel_sourcemodel, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QAbstractProxyModel_QAbstractProxyModel, mapToSource, arginfo_qt_core_qabstractproxymodel_qabstractproxymodel_maptosource, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QAbstractProxyModel_QAbstractProxyModel, mapFromSource, arginfo_qt_core_qabstractproxymodel_qabstractproxymodel_mapfromsource, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QAbstractProxyModel_QAbstractProxyModel, mapSelectionToSource, arginfo_qt_core_qabstractproxymodel_qabstractproxymodel_mapselectiontosource, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QAbstractProxyModel_QAbstractProxyModel, mapSelectionFromSource, arginfo_qt_core_qabstractproxymodel_qabstractproxymodel_mapselectionfromsource, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QAbstractProxyModel_QAbstractProxyModel, submit, arginfo_qt_core_qabstractproxymodel_qabstractproxymodel_submit, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QAbstractProxyModel_QAbstractProxyModel, revert, arginfo_qt_core_qabstractproxymodel_qabstractproxymodel_revert, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QAbstractProxyModel_QAbstractProxyModel, data, arginfo_qt_core_qabstractproxymodel_qabstractproxymodel_data, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QAbstractProxyModel_QAbstractProxyModel, headerData, arginfo_qt_core_qabstractproxymodel_qabstractproxymodel_headerdata, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QAbstractProxyModel_QAbstractProxyModel, itemData, arginfo_qt_core_qabstractproxymodel_qabstractproxymodel_itemdata, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QAbstractProxyModel_QAbstractProxyModel, flags, arginfo_qt_core_qabstractproxymodel_qabstractproxymodel_flags, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QAbstractProxyModel_QAbstractProxyModel, setData, arginfo_qt_core_qabstractproxymodel_qabstractproxymodel_setdata, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QAbstractProxyModel_QAbstractProxyModel, setItemData, arginfo_qt_core_qabstractproxymodel_qabstractproxymodel_setitemdata, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QAbstractProxyModel_QAbstractProxyModel, setHeaderData, arginfo_qt_core_qabstractproxymodel_qabstractproxymodel_setheaderdata, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QAbstractProxyModel_QAbstractProxyModel, clearItemData, arginfo_qt_core_qabstractproxymodel_qabstractproxymodel_clearitemdata, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QAbstractProxyModel_QAbstractProxyModel, buddy, arginfo_qt_core_qabstractproxymodel_qabstractproxymodel_buddy, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QAbstractProxyModel_QAbstractProxyModel, canFetchMore, arginfo_qt_core_qabstractproxymodel_qabstractproxymodel_canfetchmore, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QAbstractProxyModel_QAbstractProxyModel, fetchMore, arginfo_qt_core_qabstractproxymodel_qabstractproxymodel_fetchmore, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QAbstractProxyModel_QAbstractProxyModel, sort, arginfo_qt_core_qabstractproxymodel_qabstractproxymodel_sort, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QAbstractProxyModel_QAbstractProxyModel, span, arginfo_qt_core_qabstractproxymodel_qabstractproxymodel_span, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QAbstractProxyModel_QAbstractProxyModel, hasChildren, arginfo_qt_core_qabstractproxymodel_qabstractproxymodel_haschildren, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QAbstractProxyModel_QAbstractProxyModel, sibling, arginfo_qt_core_qabstractproxymodel_qabstractproxymodel_sibling, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QAbstractProxyModel_QAbstractProxyModel, mimeData, arginfo_qt_core_qabstractproxymodel_qabstractproxymodel_mimedata, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QAbstractProxyModel_QAbstractProxyModel, canDropMimeData, arginfo_qt_core_qabstractproxymodel_qabstractproxymodel_candropmimedata, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QAbstractProxyModel_QAbstractProxyModel, dropMimeData, arginfo_qt_core_qabstractproxymodel_qabstractproxymodel_dropmimedata, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QAbstractProxyModel_QAbstractProxyModel, mimeTypes, arginfo_qt_core_qabstractproxymodel_qabstractproxymodel_mimetypes, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QAbstractProxyModel_QAbstractProxyModel, supportedDragActions, arginfo_qt_core_qabstractproxymodel_qabstractproxymodel_supporteddragactions, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QAbstractProxyModel_QAbstractProxyModel, supportedDropActions, arginfo_qt_core_qabstractproxymodel_qabstractproxymodel_supporteddropactions, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QAbstractProxyModel_QAbstractProxyModel, roleNames, arginfo_qt_core_qabstractproxymodel_qabstractproxymodel_rolenames, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
