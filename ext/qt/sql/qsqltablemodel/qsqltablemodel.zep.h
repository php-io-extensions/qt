
extern zend_class_entry *qt_sql_qsqltablemodel_qsqltablemodel_ce;

ZEPHIR_INIT_CLASS(Qt_Sql_QSqlTableModel_QSqlTableModel);

PHP_METHOD(Qt_Sql_QSqlTableModel_QSqlTableModel, staticMetaObject);
PHP_METHOD(Qt_Sql_QSqlTableModel_QSqlTableModel, tr);
PHP_METHOD(Qt_Sql_QSqlTableModel_QSqlTableModel, new_);
PHP_METHOD(Qt_Sql_QSqlTableModel_QSqlTableModel, setTable);
PHP_METHOD(Qt_Sql_QSqlTableModel_QSqlTableModel, tableName);
PHP_METHOD(Qt_Sql_QSqlTableModel_QSqlTableModel, flags);
PHP_METHOD(Qt_Sql_QSqlTableModel_QSqlTableModel, record);
PHP_METHOD(Qt_Sql_QSqlTableModel_QSqlTableModel, recordInt);
PHP_METHOD(Qt_Sql_QSqlTableModel_QSqlTableModel, data);
PHP_METHOD(Qt_Sql_QSqlTableModel_QSqlTableModel, setData);
PHP_METHOD(Qt_Sql_QSqlTableModel_QSqlTableModel, clearItemData);
PHP_METHOD(Qt_Sql_QSqlTableModel_QSqlTableModel, headerData);
PHP_METHOD(Qt_Sql_QSqlTableModel_QSqlTableModel, isDirty);
PHP_METHOD(Qt_Sql_QSqlTableModel_QSqlTableModel, isDirtyQModelIndex);
PHP_METHOD(Qt_Sql_QSqlTableModel_QSqlTableModel, clear);
PHP_METHOD(Qt_Sql_QSqlTableModel_QSqlTableModel, setEditStrategy);
PHP_METHOD(Qt_Sql_QSqlTableModel_QSqlTableModel, editStrategy);
PHP_METHOD(Qt_Sql_QSqlTableModel_QSqlTableModel, primaryKey);
PHP_METHOD(Qt_Sql_QSqlTableModel_QSqlTableModel, database);
PHP_METHOD(Qt_Sql_QSqlTableModel_QSqlTableModel, fieldIndex);
PHP_METHOD(Qt_Sql_QSqlTableModel_QSqlTableModel, sort);
PHP_METHOD(Qt_Sql_QSqlTableModel_QSqlTableModel, setSort);
PHP_METHOD(Qt_Sql_QSqlTableModel_QSqlTableModel, filter);
PHP_METHOD(Qt_Sql_QSqlTableModel_QSqlTableModel, setFilter);
PHP_METHOD(Qt_Sql_QSqlTableModel_QSqlTableModel, rowCount);
PHP_METHOD(Qt_Sql_QSqlTableModel_QSqlTableModel, removeColumns);
PHP_METHOD(Qt_Sql_QSqlTableModel_QSqlTableModel, removeRows);
PHP_METHOD(Qt_Sql_QSqlTableModel_QSqlTableModel, insertRows);
PHP_METHOD(Qt_Sql_QSqlTableModel_QSqlTableModel, insertRecord);
PHP_METHOD(Qt_Sql_QSqlTableModel_QSqlTableModel, setRecord);
PHP_METHOD(Qt_Sql_QSqlTableModel_QSqlTableModel, revertRow);
PHP_METHOD(Qt_Sql_QSqlTableModel_QSqlTableModel, select);
PHP_METHOD(Qt_Sql_QSqlTableModel_QSqlTableModel, selectRow);
PHP_METHOD(Qt_Sql_QSqlTableModel_QSqlTableModel, submit);
PHP_METHOD(Qt_Sql_QSqlTableModel_QSqlTableModel, revert);
PHP_METHOD(Qt_Sql_QSqlTableModel_QSqlTableModel, submitAll);
PHP_METHOD(Qt_Sql_QSqlTableModel_QSqlTableModel, revertAll);
PHP_METHOD(Qt_Sql_QSqlTableModel_QSqlTableModel, primeInsert);
PHP_METHOD(Qt_Sql_QSqlTableModel_QSqlTableModel, beforeInsert);
PHP_METHOD(Qt_Sql_QSqlTableModel_QSqlTableModel, beforeUpdate);
PHP_METHOD(Qt_Sql_QSqlTableModel_QSqlTableModel, beforeDelete);
PHP_METHOD(Qt_Sql_QSqlTableModel_QSqlTableModel, updateRowInTable);
PHP_METHOD(Qt_Sql_QSqlTableModel_QSqlTableModel, insertRowIntoTable);
PHP_METHOD(Qt_Sql_QSqlTableModel_QSqlTableModel, deleteRowFromTable);
PHP_METHOD(Qt_Sql_QSqlTableModel_QSqlTableModel, orderByClause);
PHP_METHOD(Qt_Sql_QSqlTableModel_QSqlTableModel, selectStatement);
PHP_METHOD(Qt_Sql_QSqlTableModel_QSqlTableModel, setPrimaryKey);
PHP_METHOD(Qt_Sql_QSqlTableModel_QSqlTableModel, indexInQuery);
PHP_METHOD(Qt_Sql_QSqlTableModel_QSqlTableModel, primaryValues);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqltablemodel_qsqltablemodel_staticmetaobject, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqltablemodel_qsqltablemodel_tr, 0, 1, IS_STRING, 0)
	ZEND_ARG_INFO(0, s)
	ZEND_ARG_INFO(0, c)
	ZEND_ARG_TYPE_INFO(0, n, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqltablemodel_qsqltablemodel_new_, 0, 0, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
	ZEND_ARG_INFO(0, db)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqltablemodel_qsqltablemodel_settable, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, tableName, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqltablemodel_qsqltablemodel_tablename, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqltablemodel_qsqltablemodel_flags, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqltablemodel_qsqltablemodel_record, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqltablemodel_qsqltablemodel_recordint, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, row, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_qt_sql_qsqltablemodel_qsqltablemodel_data, 0, 0, 2)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, idx, IS_LONG, 0)
	ZEND_ARG_INFO(0, role)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqltablemodel_qsqltablemodel_setdata, 0, 3, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
	ZEND_ARG_INFO(0, value)
	ZEND_ARG_INFO(0, role)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqltablemodel_qsqltablemodel_clearitemdata, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_qt_sql_qsqltablemodel_qsqltablemodel_headerdata, 0, 0, 3)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, section, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, orientation, IS_LONG, 0)
	ZEND_ARG_INFO(0, role)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqltablemodel_qsqltablemodel_isdirty, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqltablemodel_qsqltablemodel_isdirtyqmodelindex, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqltablemodel_qsqltablemodel_clear, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqltablemodel_qsqltablemodel_seteditstrategy, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, strategy, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqltablemodel_qsqltablemodel_editstrategy, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqltablemodel_qsqltablemodel_primarykey, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqltablemodel_qsqltablemodel_database, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqltablemodel_qsqltablemodel_fieldindex, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, fieldName, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqltablemodel_qsqltablemodel_sort, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, column, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, order, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqltablemodel_qsqltablemodel_setsort, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, column, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, order, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqltablemodel_qsqltablemodel_filter, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqltablemodel_qsqltablemodel_setfilter, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, filter, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqltablemodel_qsqltablemodel_rowcount, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_INFO(0, parent_)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqltablemodel_qsqltablemodel_removecolumns, 0, 3, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, column, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, count, IS_LONG, 0)
	ZEND_ARG_INFO(0, parent_)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqltablemodel_qsqltablemodel_removerows, 0, 3, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, row, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, count, IS_LONG, 0)
	ZEND_ARG_INFO(0, parent_)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqltablemodel_qsqltablemodel_insertrows, 0, 3, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, row, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, count, IS_LONG, 0)
	ZEND_ARG_INFO(0, parent_)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqltablemodel_qsqltablemodel_insertrecord, 0, 3, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, row, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, record, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqltablemodel_qsqltablemodel_setrecord, 0, 3, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, row, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, record, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqltablemodel_qsqltablemodel_revertrow, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, row, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqltablemodel_qsqltablemodel_select, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqltablemodel_qsqltablemodel_selectrow, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, row, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqltablemodel_qsqltablemodel_submit, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqltablemodel_qsqltablemodel_revert, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqltablemodel_qsqltablemodel_submitall, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqltablemodel_qsqltablemodel_revertall, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqltablemodel_qsqltablemodel_primeinsert, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, row, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, record, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqltablemodel_qsqltablemodel_beforeinsert, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, record, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqltablemodel_qsqltablemodel_beforeupdate, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, row, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, record, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqltablemodel_qsqltablemodel_beforedelete, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, row, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqltablemodel_qsqltablemodel_updaterowintable, 0, 3, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, row, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, values, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqltablemodel_qsqltablemodel_insertrowintotable, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, values, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqltablemodel_qsqltablemodel_deleterowfromtable, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, row, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqltablemodel_qsqltablemodel_orderbyclause, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqltablemodel_qsqltablemodel_selectstatement, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqltablemodel_qsqltablemodel_setprimarykey, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, key, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqltablemodel_qsqltablemodel_indexinquery, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, item, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqltablemodel_qsqltablemodel_primaryvalues, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, row, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_sql_qsqltablemodel_qsqltablemodel_method_entry) {
	PHP_ME(Qt_Sql_QSqlTableModel_QSqlTableModel, staticMetaObject, arginfo_qt_sql_qsqltablemodel_qsqltablemodel_staticmetaobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlTableModel_QSqlTableModel, tr, arginfo_qt_sql_qsqltablemodel_qsqltablemodel_tr, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlTableModel_QSqlTableModel, new_, arginfo_qt_sql_qsqltablemodel_qsqltablemodel_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlTableModel_QSqlTableModel, setTable, arginfo_qt_sql_qsqltablemodel_qsqltablemodel_settable, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlTableModel_QSqlTableModel, tableName, arginfo_qt_sql_qsqltablemodel_qsqltablemodel_tablename, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlTableModel_QSqlTableModel, flags, arginfo_qt_sql_qsqltablemodel_qsqltablemodel_flags, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlTableModel_QSqlTableModel, record, arginfo_qt_sql_qsqltablemodel_qsqltablemodel_record, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlTableModel_QSqlTableModel, recordInt, arginfo_qt_sql_qsqltablemodel_qsqltablemodel_recordint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlTableModel_QSqlTableModel, data, arginfo_qt_sql_qsqltablemodel_qsqltablemodel_data, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlTableModel_QSqlTableModel, setData, arginfo_qt_sql_qsqltablemodel_qsqltablemodel_setdata, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlTableModel_QSqlTableModel, clearItemData, arginfo_qt_sql_qsqltablemodel_qsqltablemodel_clearitemdata, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlTableModel_QSqlTableModel, headerData, arginfo_qt_sql_qsqltablemodel_qsqltablemodel_headerdata, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlTableModel_QSqlTableModel, isDirty, arginfo_qt_sql_qsqltablemodel_qsqltablemodel_isdirty, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlTableModel_QSqlTableModel, isDirtyQModelIndex, arginfo_qt_sql_qsqltablemodel_qsqltablemodel_isdirtyqmodelindex, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlTableModel_QSqlTableModel, clear, arginfo_qt_sql_qsqltablemodel_qsqltablemodel_clear, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlTableModel_QSqlTableModel, setEditStrategy, arginfo_qt_sql_qsqltablemodel_qsqltablemodel_seteditstrategy, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlTableModel_QSqlTableModel, editStrategy, arginfo_qt_sql_qsqltablemodel_qsqltablemodel_editstrategy, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlTableModel_QSqlTableModel, primaryKey, arginfo_qt_sql_qsqltablemodel_qsqltablemodel_primarykey, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlTableModel_QSqlTableModel, database, arginfo_qt_sql_qsqltablemodel_qsqltablemodel_database, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlTableModel_QSqlTableModel, fieldIndex, arginfo_qt_sql_qsqltablemodel_qsqltablemodel_fieldindex, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlTableModel_QSqlTableModel, sort, arginfo_qt_sql_qsqltablemodel_qsqltablemodel_sort, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlTableModel_QSqlTableModel, setSort, arginfo_qt_sql_qsqltablemodel_qsqltablemodel_setsort, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlTableModel_QSqlTableModel, filter, arginfo_qt_sql_qsqltablemodel_qsqltablemodel_filter, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlTableModel_QSqlTableModel, setFilter, arginfo_qt_sql_qsqltablemodel_qsqltablemodel_setfilter, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlTableModel_QSqlTableModel, rowCount, arginfo_qt_sql_qsqltablemodel_qsqltablemodel_rowcount, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlTableModel_QSqlTableModel, removeColumns, arginfo_qt_sql_qsqltablemodel_qsqltablemodel_removecolumns, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlTableModel_QSqlTableModel, removeRows, arginfo_qt_sql_qsqltablemodel_qsqltablemodel_removerows, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlTableModel_QSqlTableModel, insertRows, arginfo_qt_sql_qsqltablemodel_qsqltablemodel_insertrows, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlTableModel_QSqlTableModel, insertRecord, arginfo_qt_sql_qsqltablemodel_qsqltablemodel_insertrecord, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlTableModel_QSqlTableModel, setRecord, arginfo_qt_sql_qsqltablemodel_qsqltablemodel_setrecord, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlTableModel_QSqlTableModel, revertRow, arginfo_qt_sql_qsqltablemodel_qsqltablemodel_revertrow, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlTableModel_QSqlTableModel, select, arginfo_qt_sql_qsqltablemodel_qsqltablemodel_select, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlTableModel_QSqlTableModel, selectRow, arginfo_qt_sql_qsqltablemodel_qsqltablemodel_selectrow, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlTableModel_QSqlTableModel, submit, arginfo_qt_sql_qsqltablemodel_qsqltablemodel_submit, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlTableModel_QSqlTableModel, revert, arginfo_qt_sql_qsqltablemodel_qsqltablemodel_revert, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlTableModel_QSqlTableModel, submitAll, arginfo_qt_sql_qsqltablemodel_qsqltablemodel_submitall, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlTableModel_QSqlTableModel, revertAll, arginfo_qt_sql_qsqltablemodel_qsqltablemodel_revertall, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlTableModel_QSqlTableModel, primeInsert, arginfo_qt_sql_qsqltablemodel_qsqltablemodel_primeinsert, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlTableModel_QSqlTableModel, beforeInsert, arginfo_qt_sql_qsqltablemodel_qsqltablemodel_beforeinsert, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlTableModel_QSqlTableModel, beforeUpdate, arginfo_qt_sql_qsqltablemodel_qsqltablemodel_beforeupdate, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlTableModel_QSqlTableModel, beforeDelete, arginfo_qt_sql_qsqltablemodel_qsqltablemodel_beforedelete, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlTableModel_QSqlTableModel, updateRowInTable, arginfo_qt_sql_qsqltablemodel_qsqltablemodel_updaterowintable, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlTableModel_QSqlTableModel, insertRowIntoTable, arginfo_qt_sql_qsqltablemodel_qsqltablemodel_insertrowintotable, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlTableModel_QSqlTableModel, deleteRowFromTable, arginfo_qt_sql_qsqltablemodel_qsqltablemodel_deleterowfromtable, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlTableModel_QSqlTableModel, orderByClause, arginfo_qt_sql_qsqltablemodel_qsqltablemodel_orderbyclause, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlTableModel_QSqlTableModel, selectStatement, arginfo_qt_sql_qsqltablemodel_qsqltablemodel_selectstatement, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlTableModel_QSqlTableModel, setPrimaryKey, arginfo_qt_sql_qsqltablemodel_qsqltablemodel_setprimarykey, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlTableModel_QSqlTableModel, indexInQuery, arginfo_qt_sql_qsqltablemodel_qsqltablemodel_indexinquery, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlTableModel_QSqlTableModel, primaryValues, arginfo_qt_sql_qsqltablemodel_qsqltablemodel_primaryvalues, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
