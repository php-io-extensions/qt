
extern zend_class_entry *qt_core_qstringlistmodel_qstringlistmodel_ce;

ZEPHIR_INIT_CLASS(Qt_Core_QStringListModel_QStringListModel);

PHP_METHOD(Qt_Core_QStringListModel_QStringListModel, staticMetaObject);
PHP_METHOD(Qt_Core_QStringListModel_QStringListModel, tr);
PHP_METHOD(Qt_Core_QStringListModel_QStringListModel, new_);
PHP_METHOD(Qt_Core_QStringListModel_QStringListModel, newQStringListQObject);
PHP_METHOD(Qt_Core_QStringListModel_QStringListModel, rowCount);
PHP_METHOD(Qt_Core_QStringListModel_QStringListModel, sibling);
PHP_METHOD(Qt_Core_QStringListModel_QStringListModel, data);
PHP_METHOD(Qt_Core_QStringListModel_QStringListModel, setData);
PHP_METHOD(Qt_Core_QStringListModel_QStringListModel, clearItemData);
PHP_METHOD(Qt_Core_QStringListModel_QStringListModel, flags);
PHP_METHOD(Qt_Core_QStringListModel_QStringListModel, insertRows);
PHP_METHOD(Qt_Core_QStringListModel_QStringListModel, removeRows);
PHP_METHOD(Qt_Core_QStringListModel_QStringListModel, moveRows);
PHP_METHOD(Qt_Core_QStringListModel_QStringListModel, itemData);
PHP_METHOD(Qt_Core_QStringListModel_QStringListModel, setItemData);
PHP_METHOD(Qt_Core_QStringListModel_QStringListModel, sort);
PHP_METHOD(Qt_Core_QStringListModel_QStringListModel, stringList);
PHP_METHOD(Qt_Core_QStringListModel_QStringListModel, setStringList);
PHP_METHOD(Qt_Core_QStringListModel_QStringListModel, supportedDropActions);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qstringlistmodel_qstringlistmodel_staticmetaobject, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qstringlistmodel_qstringlistmodel_tr, 0, 1, IS_STRING, 0)
	ZEND_ARG_INFO(0, s)
	ZEND_ARG_INFO(0, c)
	ZEND_ARG_TYPE_INFO(0, n, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qstringlistmodel_qstringlistmodel_new_, 0, 0, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qstringlistmodel_qstringlistmodel_newqstringlistqobject, 0, 1, IS_LONG, 0)
	ZEND_ARG_ARRAY_INFO(0, strings, 0)
	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qstringlistmodel_qstringlistmodel_rowcount, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_INFO(0, parent_)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qstringlistmodel_qstringlistmodel_sibling, 0, 4, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, row, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, column, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, idx, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_qt_core_qstringlistmodel_qstringlistmodel_data, 0, 0, 2)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
	ZEND_ARG_INFO(0, role)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qstringlistmodel_qstringlistmodel_setdata, 0, 3, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
	ZEND_ARG_INFO(0, value)
	ZEND_ARG_INFO(0, role)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qstringlistmodel_qstringlistmodel_clearitemdata, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qstringlistmodel_qstringlistmodel_flags, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qstringlistmodel_qstringlistmodel_insertrows, 0, 3, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, row, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, count, IS_LONG, 0)
	ZEND_ARG_INFO(0, parent_)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qstringlistmodel_qstringlistmodel_removerows, 0, 3, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, row, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, count, IS_LONG, 0)
	ZEND_ARG_INFO(0, parent_)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qstringlistmodel_qstringlistmodel_moverows, 0, 6, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sourceParent, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sourceRow, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, count, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, destinationParent, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, destinationChild, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qstringlistmodel_qstringlistmodel_itemdata, 0, 2, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qstringlistmodel_qstringlistmodel_setitemdata, 0, 3, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
	ZEND_ARG_ARRAY_INFO(0, roles, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qstringlistmodel_qstringlistmodel_sort, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, column, IS_LONG, 0)
	ZEND_ARG_INFO(0, order)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qstringlistmodel_qstringlistmodel_stringlist, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qstringlistmodel_qstringlistmodel_setstringlist, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_ARRAY_INFO(0, strings, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qstringlistmodel_qstringlistmodel_supporteddropactions, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_core_qstringlistmodel_qstringlistmodel_method_entry) {
	PHP_ME(Qt_Core_QStringListModel_QStringListModel, staticMetaObject, arginfo_qt_core_qstringlistmodel_qstringlistmodel_staticmetaobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QStringListModel_QStringListModel, tr, arginfo_qt_core_qstringlistmodel_qstringlistmodel_tr, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QStringListModel_QStringListModel, new_, arginfo_qt_core_qstringlistmodel_qstringlistmodel_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QStringListModel_QStringListModel, newQStringListQObject, arginfo_qt_core_qstringlistmodel_qstringlistmodel_newqstringlistqobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QStringListModel_QStringListModel, rowCount, arginfo_qt_core_qstringlistmodel_qstringlistmodel_rowcount, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QStringListModel_QStringListModel, sibling, arginfo_qt_core_qstringlistmodel_qstringlistmodel_sibling, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QStringListModel_QStringListModel, data, arginfo_qt_core_qstringlistmodel_qstringlistmodel_data, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QStringListModel_QStringListModel, setData, arginfo_qt_core_qstringlistmodel_qstringlistmodel_setdata, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QStringListModel_QStringListModel, clearItemData, arginfo_qt_core_qstringlistmodel_qstringlistmodel_clearitemdata, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QStringListModel_QStringListModel, flags, arginfo_qt_core_qstringlistmodel_qstringlistmodel_flags, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QStringListModel_QStringListModel, insertRows, arginfo_qt_core_qstringlistmodel_qstringlistmodel_insertrows, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QStringListModel_QStringListModel, removeRows, arginfo_qt_core_qstringlistmodel_qstringlistmodel_removerows, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QStringListModel_QStringListModel, moveRows, arginfo_qt_core_qstringlistmodel_qstringlistmodel_moverows, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QStringListModel_QStringListModel, itemData, arginfo_qt_core_qstringlistmodel_qstringlistmodel_itemdata, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QStringListModel_QStringListModel, setItemData, arginfo_qt_core_qstringlistmodel_qstringlistmodel_setitemdata, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QStringListModel_QStringListModel, sort, arginfo_qt_core_qstringlistmodel_qstringlistmodel_sort, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QStringListModel_QStringListModel, stringList, arginfo_qt_core_qstringlistmodel_qstringlistmodel_stringlist, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QStringListModel_QStringListModel, setStringList, arginfo_qt_core_qstringlistmodel_qstringlistmodel_setstringlist, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QStringListModel_QStringListModel, supportedDropActions, arginfo_qt_core_qstringlistmodel_qstringlistmodel_supporteddropactions, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
