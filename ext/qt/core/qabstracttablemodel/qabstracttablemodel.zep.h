
extern zend_class_entry *qt_core_qabstracttablemodel_qabstracttablemodel_ce;

ZEPHIR_INIT_CLASS(Qt_Core_QAbstractTableModel_QAbstractTableModel);

PHP_METHOD(Qt_Core_QAbstractTableModel_QAbstractTableModel, parent_);
PHP_METHOD(Qt_Core_QAbstractTableModel_QAbstractTableModel, staticMetaObject);
PHP_METHOD(Qt_Core_QAbstractTableModel_QAbstractTableModel, tr);
PHP_METHOD(Qt_Core_QAbstractTableModel_QAbstractTableModel, new_);
PHP_METHOD(Qt_Core_QAbstractTableModel_QAbstractTableModel, index);
PHP_METHOD(Qt_Core_QAbstractTableModel_QAbstractTableModel, sibling);
PHP_METHOD(Qt_Core_QAbstractTableModel_QAbstractTableModel, dropMimeData);
PHP_METHOD(Qt_Core_QAbstractTableModel_QAbstractTableModel, flags);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qabstracttablemodel_qabstracttablemodel_parent_, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qabstracttablemodel_qabstracttablemodel_staticmetaobject, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qabstracttablemodel_qabstracttablemodel_tr, 0, 1, IS_STRING, 0)
	ZEND_ARG_INFO(0, s)
	ZEND_ARG_INFO(0, c)
	ZEND_ARG_TYPE_INFO(0, n, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qabstracttablemodel_qabstracttablemodel_new_, 0, 0, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qabstracttablemodel_qabstracttablemodel_index, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, row, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, column, IS_LONG, 0)
	ZEND_ARG_INFO(0, parent_)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qabstracttablemodel_qabstracttablemodel_sibling, 0, 4, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, row, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, column, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, idx, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qabstracttablemodel_qabstracttablemodel_dropmimedata, 0, 6, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, data, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, action, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, row, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, column, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qabstracttablemodel_qabstracttablemodel_flags, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_core_qabstracttablemodel_qabstracttablemodel_method_entry) {
	PHP_ME(Qt_Core_QAbstractTableModel_QAbstractTableModel, parent_, arginfo_qt_core_qabstracttablemodel_qabstracttablemodel_parent_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QAbstractTableModel_QAbstractTableModel, staticMetaObject, arginfo_qt_core_qabstracttablemodel_qabstracttablemodel_staticmetaobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QAbstractTableModel_QAbstractTableModel, tr, arginfo_qt_core_qabstracttablemodel_qabstracttablemodel_tr, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QAbstractTableModel_QAbstractTableModel, new_, arginfo_qt_core_qabstracttablemodel_qabstracttablemodel_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QAbstractTableModel_QAbstractTableModel, index, arginfo_qt_core_qabstracttablemodel_qabstracttablemodel_index, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QAbstractTableModel_QAbstractTableModel, sibling, arginfo_qt_core_qabstracttablemodel_qabstracttablemodel_sibling, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QAbstractTableModel_QAbstractTableModel, dropMimeData, arginfo_qt_core_qabstracttablemodel_qabstracttablemodel_dropmimedata, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QAbstractTableModel_QAbstractTableModel, flags, arginfo_qt_core_qabstracttablemodel_qabstracttablemodel_flags, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
