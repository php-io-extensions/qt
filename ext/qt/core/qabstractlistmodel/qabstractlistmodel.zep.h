
extern zend_class_entry *qt_core_qabstractlistmodel_qabstractlistmodel_ce;

ZEPHIR_INIT_CLASS(Qt_Core_QAbstractListModel_QAbstractListModel);

PHP_METHOD(Qt_Core_QAbstractListModel_QAbstractListModel, parent_);
PHP_METHOD(Qt_Core_QAbstractListModel_QAbstractListModel, staticMetaObject);
PHP_METHOD(Qt_Core_QAbstractListModel_QAbstractListModel, tr);
PHP_METHOD(Qt_Core_QAbstractListModel_QAbstractListModel, new_);
PHP_METHOD(Qt_Core_QAbstractListModel_QAbstractListModel, index);
PHP_METHOD(Qt_Core_QAbstractListModel_QAbstractListModel, sibling);
PHP_METHOD(Qt_Core_QAbstractListModel_QAbstractListModel, dropMimeData);
PHP_METHOD(Qt_Core_QAbstractListModel_QAbstractListModel, flags);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qabstractlistmodel_qabstractlistmodel_parent_, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qabstractlistmodel_qabstractlistmodel_staticmetaobject, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qabstractlistmodel_qabstractlistmodel_tr, 0, 1, IS_STRING, 0)
	ZEND_ARG_INFO(0, s)
	ZEND_ARG_INFO(0, c)
	ZEND_ARG_TYPE_INFO(0, n, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qabstractlistmodel_qabstractlistmodel_new_, 0, 0, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qabstractlistmodel_qabstractlistmodel_index, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, row, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, column, IS_LONG, 0)
	ZEND_ARG_INFO(0, parent_)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qabstractlistmodel_qabstractlistmodel_sibling, 0, 4, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, row, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, column, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, idx, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qabstractlistmodel_qabstractlistmodel_dropmimedata, 0, 6, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, data, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, action, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, row, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, column, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qabstractlistmodel_qabstractlistmodel_flags, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_core_qabstractlistmodel_qabstractlistmodel_method_entry) {
	PHP_ME(Qt_Core_QAbstractListModel_QAbstractListModel, parent_, arginfo_qt_core_qabstractlistmodel_qabstractlistmodel_parent_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QAbstractListModel_QAbstractListModel, staticMetaObject, arginfo_qt_core_qabstractlistmodel_qabstractlistmodel_staticmetaobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QAbstractListModel_QAbstractListModel, tr, arginfo_qt_core_qabstractlistmodel_qabstractlistmodel_tr, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QAbstractListModel_QAbstractListModel, new_, arginfo_qt_core_qabstractlistmodel_qabstractlistmodel_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QAbstractListModel_QAbstractListModel, index, arginfo_qt_core_qabstractlistmodel_qabstractlistmodel_index, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QAbstractListModel_QAbstractListModel, sibling, arginfo_qt_core_qabstractlistmodel_qabstractlistmodel_sibling, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QAbstractListModel_QAbstractListModel, dropMimeData, arginfo_qt_core_qabstractlistmodel_qabstractlistmodel_dropmimedata, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QAbstractListModel_QAbstractListModel, flags, arginfo_qt_core_qabstractlistmodel_qabstractlistmodel_flags, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
