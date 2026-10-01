
extern zend_class_entry *qt_sql_qsqlrelationaltablemodel_qsqlrelationaltablemodel_ce;

ZEPHIR_INIT_CLASS(Qt_Sql_QSqlRelationalTableModel_QSqlRelationalTableModel);

PHP_METHOD(Qt_Sql_QSqlRelationalTableModel_QSqlRelationalTableModel, staticMetaObject);
PHP_METHOD(Qt_Sql_QSqlRelationalTableModel_QSqlRelationalTableModel, tr);
PHP_METHOD(Qt_Sql_QSqlRelationalTableModel_QSqlRelationalTableModel, new_);
PHP_METHOD(Qt_Sql_QSqlRelationalTableModel_QSqlRelationalTableModel, data);
PHP_METHOD(Qt_Sql_QSqlRelationalTableModel_QSqlRelationalTableModel, setData);
PHP_METHOD(Qt_Sql_QSqlRelationalTableModel_QSqlRelationalTableModel, removeColumns);
PHP_METHOD(Qt_Sql_QSqlRelationalTableModel_QSqlRelationalTableModel, clear);
PHP_METHOD(Qt_Sql_QSqlRelationalTableModel_QSqlRelationalTableModel, select);
PHP_METHOD(Qt_Sql_QSqlRelationalTableModel_QSqlRelationalTableModel, setTable);
PHP_METHOD(Qt_Sql_QSqlRelationalTableModel_QSqlRelationalTableModel, setRelation);
PHP_METHOD(Qt_Sql_QSqlRelationalTableModel_QSqlRelationalTableModel, relation);
PHP_METHOD(Qt_Sql_QSqlRelationalTableModel_QSqlRelationalTableModel, relationModel);
PHP_METHOD(Qt_Sql_QSqlRelationalTableModel_QSqlRelationalTableModel, setJoinMode);
PHP_METHOD(Qt_Sql_QSqlRelationalTableModel_QSqlRelationalTableModel, revertRow);
PHP_METHOD(Qt_Sql_QSqlRelationalTableModel_QSqlRelationalTableModel, selectStatement);
PHP_METHOD(Qt_Sql_QSqlRelationalTableModel_QSqlRelationalTableModel, updateRowInTable);
PHP_METHOD(Qt_Sql_QSqlRelationalTableModel_QSqlRelationalTableModel, insertRowIntoTable);
PHP_METHOD(Qt_Sql_QSqlRelationalTableModel_QSqlRelationalTableModel, orderByClause);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqlrelationaltablemodel_qsqlrelationaltablemodel_staticmetaobject, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqlrelationaltablemodel_qsqlrelationaltablemodel_tr, 0, 1, IS_STRING, 0)
	ZEND_ARG_INFO(0, s)
	ZEND_ARG_INFO(0, c)
	ZEND_ARG_TYPE_INFO(0, n, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqlrelationaltablemodel_qsqlrelationaltablemodel_new_, 0, 0, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
	ZEND_ARG_INFO(0, db)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_qt_sql_qsqlrelationaltablemodel_qsqlrelationaltablemodel_data, 0, 0, 2)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, item, IS_LONG, 0)
	ZEND_ARG_INFO(0, role)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqlrelationaltablemodel_qsqlrelationaltablemodel_setdata, 0, 3, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, item, IS_LONG, 0)
	ZEND_ARG_INFO(0, value)
	ZEND_ARG_INFO(0, role)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqlrelationaltablemodel_qsqlrelationaltablemodel_removecolumns, 0, 3, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, column, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, count, IS_LONG, 0)
	ZEND_ARG_INFO(0, parent_)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqlrelationaltablemodel_qsqlrelationaltablemodel_clear, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqlrelationaltablemodel_qsqlrelationaltablemodel_select, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqlrelationaltablemodel_qsqlrelationaltablemodel_settable, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, tableName, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqlrelationaltablemodel_qsqlrelationaltablemodel_setrelation, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, column, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, relation, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqlrelationaltablemodel_qsqlrelationaltablemodel_relation, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, column, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqlrelationaltablemodel_qsqlrelationaltablemodel_relationmodel, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, column, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqlrelationaltablemodel_qsqlrelationaltablemodel_setjoinmode, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, joinMode, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqlrelationaltablemodel_qsqlrelationaltablemodel_revertrow, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, row, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqlrelationaltablemodel_qsqlrelationaltablemodel_selectstatement, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqlrelationaltablemodel_qsqlrelationaltablemodel_updaterowintable, 0, 3, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, row, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, values, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqlrelationaltablemodel_qsqlrelationaltablemodel_insertrowintotable, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, values, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqlrelationaltablemodel_qsqlrelationaltablemodel_orderbyclause, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_sql_qsqlrelationaltablemodel_qsqlrelationaltablemodel_method_entry) {
	PHP_ME(Qt_Sql_QSqlRelationalTableModel_QSqlRelationalTableModel, staticMetaObject, arginfo_qt_sql_qsqlrelationaltablemodel_qsqlrelationaltablemodel_staticmetaobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlRelationalTableModel_QSqlRelationalTableModel, tr, arginfo_qt_sql_qsqlrelationaltablemodel_qsqlrelationaltablemodel_tr, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlRelationalTableModel_QSqlRelationalTableModel, new_, arginfo_qt_sql_qsqlrelationaltablemodel_qsqlrelationaltablemodel_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlRelationalTableModel_QSqlRelationalTableModel, data, arginfo_qt_sql_qsqlrelationaltablemodel_qsqlrelationaltablemodel_data, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlRelationalTableModel_QSqlRelationalTableModel, setData, arginfo_qt_sql_qsqlrelationaltablemodel_qsqlrelationaltablemodel_setdata, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlRelationalTableModel_QSqlRelationalTableModel, removeColumns, arginfo_qt_sql_qsqlrelationaltablemodel_qsqlrelationaltablemodel_removecolumns, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlRelationalTableModel_QSqlRelationalTableModel, clear, arginfo_qt_sql_qsqlrelationaltablemodel_qsqlrelationaltablemodel_clear, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlRelationalTableModel_QSqlRelationalTableModel, select, arginfo_qt_sql_qsqlrelationaltablemodel_qsqlrelationaltablemodel_select, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlRelationalTableModel_QSqlRelationalTableModel, setTable, arginfo_qt_sql_qsqlrelationaltablemodel_qsqlrelationaltablemodel_settable, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlRelationalTableModel_QSqlRelationalTableModel, setRelation, arginfo_qt_sql_qsqlrelationaltablemodel_qsqlrelationaltablemodel_setrelation, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlRelationalTableModel_QSqlRelationalTableModel, relation, arginfo_qt_sql_qsqlrelationaltablemodel_qsqlrelationaltablemodel_relation, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlRelationalTableModel_QSqlRelationalTableModel, relationModel, arginfo_qt_sql_qsqlrelationaltablemodel_qsqlrelationaltablemodel_relationmodel, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlRelationalTableModel_QSqlRelationalTableModel, setJoinMode, arginfo_qt_sql_qsqlrelationaltablemodel_qsqlrelationaltablemodel_setjoinmode, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlRelationalTableModel_QSqlRelationalTableModel, revertRow, arginfo_qt_sql_qsqlrelationaltablemodel_qsqlrelationaltablemodel_revertrow, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlRelationalTableModel_QSqlRelationalTableModel, selectStatement, arginfo_qt_sql_qsqlrelationaltablemodel_qsqlrelationaltablemodel_selectstatement, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlRelationalTableModel_QSqlRelationalTableModel, updateRowInTable, arginfo_qt_sql_qsqlrelationaltablemodel_qsqlrelationaltablemodel_updaterowintable, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlRelationalTableModel_QSqlRelationalTableModel, insertRowIntoTable, arginfo_qt_sql_qsqlrelationaltablemodel_qsqlrelationaltablemodel_insertrowintotable, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlRelationalTableModel_QSqlRelationalTableModel, orderByClause, arginfo_qt_sql_qsqlrelationaltablemodel_qsqlrelationaltablemodel_orderbyclause, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
