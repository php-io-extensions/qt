
extern zend_class_entry *qt_sql_qsqlquerymodel_qsqlquerymodel_ce;

ZEPHIR_INIT_CLASS(Qt_Sql_QSqlQueryModel_QSqlQueryModel);

PHP_METHOD(Qt_Sql_QSqlQueryModel_QSqlQueryModel, staticMetaObject);
PHP_METHOD(Qt_Sql_QSqlQueryModel_QSqlQueryModel, tr);
PHP_METHOD(Qt_Sql_QSqlQueryModel_QSqlQueryModel, new_);
PHP_METHOD(Qt_Sql_QSqlQueryModel_QSqlQueryModel, rowCount);
PHP_METHOD(Qt_Sql_QSqlQueryModel_QSqlQueryModel, columnCount);
PHP_METHOD(Qt_Sql_QSqlQueryModel_QSqlQueryModel, record);
PHP_METHOD(Qt_Sql_QSqlQueryModel_QSqlQueryModel, record2);
PHP_METHOD(Qt_Sql_QSqlQueryModel_QSqlQueryModel, data);
PHP_METHOD(Qt_Sql_QSqlQueryModel_QSqlQueryModel, headerData);
PHP_METHOD(Qt_Sql_QSqlQueryModel_QSqlQueryModel, setHeaderData);
PHP_METHOD(Qt_Sql_QSqlQueryModel_QSqlQueryModel, insertColumns);
PHP_METHOD(Qt_Sql_QSqlQueryModel_QSqlQueryModel, removeColumns);
PHP_METHOD(Qt_Sql_QSqlQueryModel_QSqlQueryModel, setQuery);
PHP_METHOD(Qt_Sql_QSqlQueryModel_QSqlQueryModel, query);
PHP_METHOD(Qt_Sql_QSqlQueryModel_QSqlQueryModel, clear);
PHP_METHOD(Qt_Sql_QSqlQueryModel_QSqlQueryModel, lastError);
PHP_METHOD(Qt_Sql_QSqlQueryModel_QSqlQueryModel, fetchMore);
PHP_METHOD(Qt_Sql_QSqlQueryModel_QSqlQueryModel, canFetchMore);
PHP_METHOD(Qt_Sql_QSqlQueryModel_QSqlQueryModel, roleNames);
PHP_METHOD(Qt_Sql_QSqlQueryModel_QSqlQueryModel, beginInsertRows);
PHP_METHOD(Qt_Sql_QSqlQueryModel_QSqlQueryModel, endInsertRows);
PHP_METHOD(Qt_Sql_QSqlQueryModel_QSqlQueryModel, beginRemoveRows);
PHP_METHOD(Qt_Sql_QSqlQueryModel_QSqlQueryModel, endRemoveRows);
PHP_METHOD(Qt_Sql_QSqlQueryModel_QSqlQueryModel, beginInsertColumns);
PHP_METHOD(Qt_Sql_QSqlQueryModel_QSqlQueryModel, endInsertColumns);
PHP_METHOD(Qt_Sql_QSqlQueryModel_QSqlQueryModel, beginRemoveColumns);
PHP_METHOD(Qt_Sql_QSqlQueryModel_QSqlQueryModel, endRemoveColumns);
PHP_METHOD(Qt_Sql_QSqlQueryModel_QSqlQueryModel, beginResetModel);
PHP_METHOD(Qt_Sql_QSqlQueryModel_QSqlQueryModel, endResetModel);
PHP_METHOD(Qt_Sql_QSqlQueryModel_QSqlQueryModel, queryChange);
PHP_METHOD(Qt_Sql_QSqlQueryModel_QSqlQueryModel, indexInQuery);
PHP_METHOD(Qt_Sql_QSqlQueryModel_QSqlQueryModel, setLastError);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqlquerymodel_qsqlquerymodel_staticmetaobject, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqlquerymodel_qsqlquerymodel_tr, 0, 1, IS_STRING, 0)
	ZEND_ARG_INFO(0, s)
	ZEND_ARG_INFO(0, c)
	ZEND_ARG_TYPE_INFO(0, n, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqlquerymodel_qsqlquerymodel_new_, 0, 0, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqlquerymodel_qsqlquerymodel_rowcount, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_INFO(0, parent_)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqlquerymodel_qsqlquerymodel_columncount, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_INFO(0, parent_)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqlquerymodel_qsqlquerymodel_record, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, row, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqlquerymodel_qsqlquerymodel_record2, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_qt_sql_qsqlquerymodel_qsqlquerymodel_data, 0, 0, 2)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, item, IS_LONG, 0)
	ZEND_ARG_INFO(0, role)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_qt_sql_qsqlquerymodel_qsqlquerymodel_headerdata, 0, 0, 3)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, section, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, orientation, IS_LONG, 0)
	ZEND_ARG_INFO(0, role)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqlquerymodel_qsqlquerymodel_setheaderdata, 0, 4, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, section, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, orientation, IS_LONG, 0)
	ZEND_ARG_INFO(0, value)
	ZEND_ARG_INFO(0, role)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqlquerymodel_qsqlquerymodel_insertcolumns, 0, 3, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, column, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, count, IS_LONG, 0)
	ZEND_ARG_INFO(0, parent_)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqlquerymodel_qsqlquerymodel_removecolumns, 0, 3, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, column, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, count, IS_LONG, 0)
	ZEND_ARG_INFO(0, parent_)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqlquerymodel_qsqlquerymodel_setquery, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, query, IS_STRING, 0)
	ZEND_ARG_INFO(0, db)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqlquerymodel_qsqlquerymodel_query, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_INFO(0, arg0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqlquerymodel_qsqlquerymodel_clear, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqlquerymodel_qsqlquerymodel_lasterror, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqlquerymodel_qsqlquerymodel_fetchmore, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_INFO(0, parent_)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqlquerymodel_qsqlquerymodel_canfetchmore, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_INFO(0, parent_)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqlquerymodel_qsqlquerymodel_rolenames, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqlquerymodel_qsqlquerymodel_begininsertrows, 0, 4, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, first, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, last, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqlquerymodel_qsqlquerymodel_endinsertrows, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqlquerymodel_qsqlquerymodel_beginremoverows, 0, 4, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, first, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, last, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqlquerymodel_qsqlquerymodel_endremoverows, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqlquerymodel_qsqlquerymodel_begininsertcolumns, 0, 4, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, first, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, last, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqlquerymodel_qsqlquerymodel_endinsertcolumns, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqlquerymodel_qsqlquerymodel_beginremovecolumns, 0, 4, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, first, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, last, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqlquerymodel_qsqlquerymodel_endremovecolumns, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqlquerymodel_qsqlquerymodel_beginresetmodel, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqlquerymodel_qsqlquerymodel_endresetmodel, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqlquerymodel_qsqlquerymodel_querychange, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqlquerymodel_qsqlquerymodel_indexinquery, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, item, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqlquerymodel_qsqlquerymodel_setlasterror, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, error, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_sql_qsqlquerymodel_qsqlquerymodel_method_entry) {
	PHP_ME(Qt_Sql_QSqlQueryModel_QSqlQueryModel, staticMetaObject, arginfo_qt_sql_qsqlquerymodel_qsqlquerymodel_staticmetaobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlQueryModel_QSqlQueryModel, tr, arginfo_qt_sql_qsqlquerymodel_qsqlquerymodel_tr, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlQueryModel_QSqlQueryModel, new_, arginfo_qt_sql_qsqlquerymodel_qsqlquerymodel_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlQueryModel_QSqlQueryModel, rowCount, arginfo_qt_sql_qsqlquerymodel_qsqlquerymodel_rowcount, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlQueryModel_QSqlQueryModel, columnCount, arginfo_qt_sql_qsqlquerymodel_qsqlquerymodel_columncount, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlQueryModel_QSqlQueryModel, record, arginfo_qt_sql_qsqlquerymodel_qsqlquerymodel_record, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlQueryModel_QSqlQueryModel, record2, arginfo_qt_sql_qsqlquerymodel_qsqlquerymodel_record2, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlQueryModel_QSqlQueryModel, data, arginfo_qt_sql_qsqlquerymodel_qsqlquerymodel_data, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlQueryModel_QSqlQueryModel, headerData, arginfo_qt_sql_qsqlquerymodel_qsqlquerymodel_headerdata, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlQueryModel_QSqlQueryModel, setHeaderData, arginfo_qt_sql_qsqlquerymodel_qsqlquerymodel_setheaderdata, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlQueryModel_QSqlQueryModel, insertColumns, arginfo_qt_sql_qsqlquerymodel_qsqlquerymodel_insertcolumns, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlQueryModel_QSqlQueryModel, removeColumns, arginfo_qt_sql_qsqlquerymodel_qsqlquerymodel_removecolumns, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlQueryModel_QSqlQueryModel, setQuery, arginfo_qt_sql_qsqlquerymodel_qsqlquerymodel_setquery, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlQueryModel_QSqlQueryModel, query, arginfo_qt_sql_qsqlquerymodel_qsqlquerymodel_query, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlQueryModel_QSqlQueryModel, clear, arginfo_qt_sql_qsqlquerymodel_qsqlquerymodel_clear, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlQueryModel_QSqlQueryModel, lastError, arginfo_qt_sql_qsqlquerymodel_qsqlquerymodel_lasterror, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlQueryModel_QSqlQueryModel, fetchMore, arginfo_qt_sql_qsqlquerymodel_qsqlquerymodel_fetchmore, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlQueryModel_QSqlQueryModel, canFetchMore, arginfo_qt_sql_qsqlquerymodel_qsqlquerymodel_canfetchmore, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlQueryModel_QSqlQueryModel, roleNames, arginfo_qt_sql_qsqlquerymodel_qsqlquerymodel_rolenames, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlQueryModel_QSqlQueryModel, beginInsertRows, arginfo_qt_sql_qsqlquerymodel_qsqlquerymodel_begininsertrows, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlQueryModel_QSqlQueryModel, endInsertRows, arginfo_qt_sql_qsqlquerymodel_qsqlquerymodel_endinsertrows, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlQueryModel_QSqlQueryModel, beginRemoveRows, arginfo_qt_sql_qsqlquerymodel_qsqlquerymodel_beginremoverows, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlQueryModel_QSqlQueryModel, endRemoveRows, arginfo_qt_sql_qsqlquerymodel_qsqlquerymodel_endremoverows, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlQueryModel_QSqlQueryModel, beginInsertColumns, arginfo_qt_sql_qsqlquerymodel_qsqlquerymodel_begininsertcolumns, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlQueryModel_QSqlQueryModel, endInsertColumns, arginfo_qt_sql_qsqlquerymodel_qsqlquerymodel_endinsertcolumns, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlQueryModel_QSqlQueryModel, beginRemoveColumns, arginfo_qt_sql_qsqlquerymodel_qsqlquerymodel_beginremovecolumns, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlQueryModel_QSqlQueryModel, endRemoveColumns, arginfo_qt_sql_qsqlquerymodel_qsqlquerymodel_endremovecolumns, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlQueryModel_QSqlQueryModel, beginResetModel, arginfo_qt_sql_qsqlquerymodel_qsqlquerymodel_beginresetmodel, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlQueryModel_QSqlQueryModel, endResetModel, arginfo_qt_sql_qsqlquerymodel_qsqlquerymodel_endresetmodel, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlQueryModel_QSqlQueryModel, queryChange, arginfo_qt_sql_qsqlquerymodel_qsqlquerymodel_querychange, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlQueryModel_QSqlQueryModel, indexInQuery, arginfo_qt_sql_qsqlquerymodel_qsqlquerymodel_indexinquery, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlQueryModel_QSqlQueryModel, setLastError, arginfo_qt_sql_qsqlquerymodel_qsqlquerymodel_setlasterror, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
