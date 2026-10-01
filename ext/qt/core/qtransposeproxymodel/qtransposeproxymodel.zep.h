
extern zend_class_entry *qt_core_qtransposeproxymodel_qtransposeproxymodel_ce;

ZEPHIR_INIT_CLASS(Qt_Core_QTransposeProxyModel_QTransposeProxyModel);

PHP_METHOD(Qt_Core_QTransposeProxyModel_QTransposeProxyModel, staticMetaObject);
PHP_METHOD(Qt_Core_QTransposeProxyModel_QTransposeProxyModel, tr);
PHP_METHOD(Qt_Core_QTransposeProxyModel_QTransposeProxyModel, new_);
PHP_METHOD(Qt_Core_QTransposeProxyModel_QTransposeProxyModel, setSourceModel);
PHP_METHOD(Qt_Core_QTransposeProxyModel_QTransposeProxyModel, rowCount);
PHP_METHOD(Qt_Core_QTransposeProxyModel_QTransposeProxyModel, columnCount);
PHP_METHOD(Qt_Core_QTransposeProxyModel_QTransposeProxyModel, headerData);
PHP_METHOD(Qt_Core_QTransposeProxyModel_QTransposeProxyModel, setHeaderData);
PHP_METHOD(Qt_Core_QTransposeProxyModel_QTransposeProxyModel, setItemData);
PHP_METHOD(Qt_Core_QTransposeProxyModel_QTransposeProxyModel, span);
PHP_METHOD(Qt_Core_QTransposeProxyModel_QTransposeProxyModel, itemData);
PHP_METHOD(Qt_Core_QTransposeProxyModel_QTransposeProxyModel, mapFromSource);
PHP_METHOD(Qt_Core_QTransposeProxyModel_QTransposeProxyModel, mapToSource);
PHP_METHOD(Qt_Core_QTransposeProxyModel_QTransposeProxyModel, parent_);
PHP_METHOD(Qt_Core_QTransposeProxyModel_QTransposeProxyModel, index);
PHP_METHOD(Qt_Core_QTransposeProxyModel_QTransposeProxyModel, insertRows);
PHP_METHOD(Qt_Core_QTransposeProxyModel_QTransposeProxyModel, removeRows);
PHP_METHOD(Qt_Core_QTransposeProxyModel_QTransposeProxyModel, moveRows);
PHP_METHOD(Qt_Core_QTransposeProxyModel_QTransposeProxyModel, insertColumns);
PHP_METHOD(Qt_Core_QTransposeProxyModel_QTransposeProxyModel, removeColumns);
PHP_METHOD(Qt_Core_QTransposeProxyModel_QTransposeProxyModel, moveColumns);
PHP_METHOD(Qt_Core_QTransposeProxyModel_QTransposeProxyModel, sort);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qtransposeproxymodel_qtransposeproxymodel_staticmetaobject, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qtransposeproxymodel_qtransposeproxymodel_tr, 0, 1, IS_STRING, 0)
	ZEND_ARG_INFO(0, s)
	ZEND_ARG_INFO(0, c)
	ZEND_ARG_TYPE_INFO(0, n, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qtransposeproxymodel_qtransposeproxymodel_new_, 0, 0, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qtransposeproxymodel_qtransposeproxymodel_setsourcemodel, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, newSourceModel, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qtransposeproxymodel_qtransposeproxymodel_rowcount, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_INFO(0, parent_)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qtransposeproxymodel_qtransposeproxymodel_columncount, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_INFO(0, parent_)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_qt_core_qtransposeproxymodel_qtransposeproxymodel_headerdata, 0, 0, 3)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, section, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, orientation, IS_LONG, 0)
	ZEND_ARG_INFO(0, role)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qtransposeproxymodel_qtransposeproxymodel_setheaderdata, 0, 4, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, section, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, orientation, IS_LONG, 0)
	ZEND_ARG_INFO(0, value)
	ZEND_ARG_INFO(0, role)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qtransposeproxymodel_qtransposeproxymodel_setitemdata, 0, 3, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
	ZEND_ARG_ARRAY_INFO(0, roles, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qtransposeproxymodel_qtransposeproxymodel_span, 0, 2, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qtransposeproxymodel_qtransposeproxymodel_itemdata, 0, 2, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qtransposeproxymodel_qtransposeproxymodel_mapfromsource, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sourceIndex, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qtransposeproxymodel_qtransposeproxymodel_maptosource, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, proxyIndex, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qtransposeproxymodel_qtransposeproxymodel_parent_, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qtransposeproxymodel_qtransposeproxymodel_index, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, row, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, column, IS_LONG, 0)
	ZEND_ARG_INFO(0, parent_)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qtransposeproxymodel_qtransposeproxymodel_insertrows, 0, 3, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, row, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, count, IS_LONG, 0)
	ZEND_ARG_INFO(0, parent_)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qtransposeproxymodel_qtransposeproxymodel_removerows, 0, 3, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, row, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, count, IS_LONG, 0)
	ZEND_ARG_INFO(0, parent_)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qtransposeproxymodel_qtransposeproxymodel_moverows, 0, 6, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sourceParent, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sourceRow, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, count, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, destinationParent, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, destinationChild, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qtransposeproxymodel_qtransposeproxymodel_insertcolumns, 0, 3, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, column, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, count, IS_LONG, 0)
	ZEND_ARG_INFO(0, parent_)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qtransposeproxymodel_qtransposeproxymodel_removecolumns, 0, 3, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, column, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, count, IS_LONG, 0)
	ZEND_ARG_INFO(0, parent_)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qtransposeproxymodel_qtransposeproxymodel_movecolumns, 0, 6, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sourceParent, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sourceColumn, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, count, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, destinationParent, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, destinationChild, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qtransposeproxymodel_qtransposeproxymodel_sort, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, column, IS_LONG, 0)
	ZEND_ARG_INFO(0, order)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_core_qtransposeproxymodel_qtransposeproxymodel_method_entry) {
	PHP_ME(Qt_Core_QTransposeProxyModel_QTransposeProxyModel, staticMetaObject, arginfo_qt_core_qtransposeproxymodel_qtransposeproxymodel_staticmetaobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QTransposeProxyModel_QTransposeProxyModel, tr, arginfo_qt_core_qtransposeproxymodel_qtransposeproxymodel_tr, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QTransposeProxyModel_QTransposeProxyModel, new_, arginfo_qt_core_qtransposeproxymodel_qtransposeproxymodel_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QTransposeProxyModel_QTransposeProxyModel, setSourceModel, arginfo_qt_core_qtransposeproxymodel_qtransposeproxymodel_setsourcemodel, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QTransposeProxyModel_QTransposeProxyModel, rowCount, arginfo_qt_core_qtransposeproxymodel_qtransposeproxymodel_rowcount, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QTransposeProxyModel_QTransposeProxyModel, columnCount, arginfo_qt_core_qtransposeproxymodel_qtransposeproxymodel_columncount, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QTransposeProxyModel_QTransposeProxyModel, headerData, arginfo_qt_core_qtransposeproxymodel_qtransposeproxymodel_headerdata, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QTransposeProxyModel_QTransposeProxyModel, setHeaderData, arginfo_qt_core_qtransposeproxymodel_qtransposeproxymodel_setheaderdata, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QTransposeProxyModel_QTransposeProxyModel, setItemData, arginfo_qt_core_qtransposeproxymodel_qtransposeproxymodel_setitemdata, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QTransposeProxyModel_QTransposeProxyModel, span, arginfo_qt_core_qtransposeproxymodel_qtransposeproxymodel_span, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QTransposeProxyModel_QTransposeProxyModel, itemData, arginfo_qt_core_qtransposeproxymodel_qtransposeproxymodel_itemdata, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QTransposeProxyModel_QTransposeProxyModel, mapFromSource, arginfo_qt_core_qtransposeproxymodel_qtransposeproxymodel_mapfromsource, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QTransposeProxyModel_QTransposeProxyModel, mapToSource, arginfo_qt_core_qtransposeproxymodel_qtransposeproxymodel_maptosource, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QTransposeProxyModel_QTransposeProxyModel, parent_, arginfo_qt_core_qtransposeproxymodel_qtransposeproxymodel_parent_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QTransposeProxyModel_QTransposeProxyModel, index, arginfo_qt_core_qtransposeproxymodel_qtransposeproxymodel_index, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QTransposeProxyModel_QTransposeProxyModel, insertRows, arginfo_qt_core_qtransposeproxymodel_qtransposeproxymodel_insertrows, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QTransposeProxyModel_QTransposeProxyModel, removeRows, arginfo_qt_core_qtransposeproxymodel_qtransposeproxymodel_removerows, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QTransposeProxyModel_QTransposeProxyModel, moveRows, arginfo_qt_core_qtransposeproxymodel_qtransposeproxymodel_moverows, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QTransposeProxyModel_QTransposeProxyModel, insertColumns, arginfo_qt_core_qtransposeproxymodel_qtransposeproxymodel_insertcolumns, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QTransposeProxyModel_QTransposeProxyModel, removeColumns, arginfo_qt_core_qtransposeproxymodel_qtransposeproxymodel_removecolumns, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QTransposeProxyModel_QTransposeProxyModel, moveColumns, arginfo_qt_core_qtransposeproxymodel_qtransposeproxymodel_movecolumns, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QTransposeProxyModel_QTransposeProxyModel, sort, arginfo_qt_core_qtransposeproxymodel_qtransposeproxymodel_sort, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
