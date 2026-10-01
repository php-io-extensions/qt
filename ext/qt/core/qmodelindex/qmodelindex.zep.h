
extern zend_class_entry *qt_core_qmodelindex_qmodelindex_ce;

ZEPHIR_INIT_CLASS(Qt_Core_QModelIndex_QModelIndex);

PHP_METHOD(Qt_Core_QModelIndex_QModelIndex, new_);
PHP_METHOD(Qt_Core_QModelIndex_QModelIndex, row);
PHP_METHOD(Qt_Core_QModelIndex_QModelIndex, column);
PHP_METHOD(Qt_Core_QModelIndex_QModelIndex, internalId);
PHP_METHOD(Qt_Core_QModelIndex_QModelIndex, parent_);
PHP_METHOD(Qt_Core_QModelIndex_QModelIndex, sibling);
PHP_METHOD(Qt_Core_QModelIndex_QModelIndex, siblingAtColumn);
PHP_METHOD(Qt_Core_QModelIndex_QModelIndex, siblingAtRow);
PHP_METHOD(Qt_Core_QModelIndex_QModelIndex, data);
PHP_METHOD(Qt_Core_QModelIndex_QModelIndex, multiData);
PHP_METHOD(Qt_Core_QModelIndex_QModelIndex, flags);
PHP_METHOD(Qt_Core_QModelIndex_QModelIndex, model);
PHP_METHOD(Qt_Core_QModelIndex_QModelIndex, isValid);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qmodelindex_qmodelindex_new_, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qmodelindex_qmodelindex_row, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qmodelindex_qmodelindex_column, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qmodelindex_qmodelindex_internalid, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qmodelindex_qmodelindex_parent_, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qmodelindex_qmodelindex_sibling, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, row, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, column, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qmodelindex_qmodelindex_siblingatcolumn, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, column, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qmodelindex_qmodelindex_siblingatrow, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, row, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_qt_core_qmodelindex_qmodelindex_data, 0, 0, 1)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_INFO(0, role)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qmodelindex_qmodelindex_multidata, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, roleDataSpan, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qmodelindex_qmodelindex_flags, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qmodelindex_qmodelindex_model, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qmodelindex_qmodelindex_isvalid, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_core_qmodelindex_qmodelindex_method_entry) {
	PHP_ME(Qt_Core_QModelIndex_QModelIndex, new_, arginfo_qt_core_qmodelindex_qmodelindex_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QModelIndex_QModelIndex, row, arginfo_qt_core_qmodelindex_qmodelindex_row, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QModelIndex_QModelIndex, column, arginfo_qt_core_qmodelindex_qmodelindex_column, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QModelIndex_QModelIndex, internalId, arginfo_qt_core_qmodelindex_qmodelindex_internalid, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QModelIndex_QModelIndex, parent_, arginfo_qt_core_qmodelindex_qmodelindex_parent_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QModelIndex_QModelIndex, sibling, arginfo_qt_core_qmodelindex_qmodelindex_sibling, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QModelIndex_QModelIndex, siblingAtColumn, arginfo_qt_core_qmodelindex_qmodelindex_siblingatcolumn, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QModelIndex_QModelIndex, siblingAtRow, arginfo_qt_core_qmodelindex_qmodelindex_siblingatrow, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QModelIndex_QModelIndex, data, arginfo_qt_core_qmodelindex_qmodelindex_data, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QModelIndex_QModelIndex, multiData, arginfo_qt_core_qmodelindex_qmodelindex_multidata, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QModelIndex_QModelIndex, flags, arginfo_qt_core_qmodelindex_qmodelindex_flags, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QModelIndex_QModelIndex, model, arginfo_qt_core_qmodelindex_qmodelindex_model, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QModelIndex_QModelIndex, isValid, arginfo_qt_core_qmodelindex_qmodelindex_isvalid, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
