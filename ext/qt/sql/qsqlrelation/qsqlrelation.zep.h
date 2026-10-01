
extern zend_class_entry *qt_sql_qsqlrelation_qsqlrelation_ce;

ZEPHIR_INIT_CLASS(Qt_Sql_QSqlRelation_QSqlRelation);

PHP_METHOD(Qt_Sql_QSqlRelation_QSqlRelation, new_);
PHP_METHOD(Qt_Sql_QSqlRelation_QSqlRelation, newQStringQStringQString);
PHP_METHOD(Qt_Sql_QSqlRelation_QSqlRelation, swap);
PHP_METHOD(Qt_Sql_QSqlRelation_QSqlRelation, tableName);
PHP_METHOD(Qt_Sql_QSqlRelation_QSqlRelation, indexColumn);
PHP_METHOD(Qt_Sql_QSqlRelation_QSqlRelation, displayColumn);
PHP_METHOD(Qt_Sql_QSqlRelation_QSqlRelation, isValid);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqlrelation_qsqlrelation_new_, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqlrelation_qsqlrelation_newqstringqstringqstring, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, aTableName, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, indexCol, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, displayCol, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqlrelation_qsqlrelation_swap, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, other, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqlrelation_qsqlrelation_tablename, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqlrelation_qsqlrelation_indexcolumn, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqlrelation_qsqlrelation_displaycolumn, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqlrelation_qsqlrelation_isvalid, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_sql_qsqlrelation_qsqlrelation_method_entry) {
	PHP_ME(Qt_Sql_QSqlRelation_QSqlRelation, new_, arginfo_qt_sql_qsqlrelation_qsqlrelation_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlRelation_QSqlRelation, newQStringQStringQString, arginfo_qt_sql_qsqlrelation_qsqlrelation_newqstringqstringqstring, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlRelation_QSqlRelation, swap, arginfo_qt_sql_qsqlrelation_qsqlrelation_swap, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlRelation_QSqlRelation, tableName, arginfo_qt_sql_qsqlrelation_qsqlrelation_tablename, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlRelation_QSqlRelation, indexColumn, arginfo_qt_sql_qsqlrelation_qsqlrelation_indexcolumn, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlRelation_QSqlRelation, displayColumn, arginfo_qt_sql_qsqlrelation_qsqlrelation_displaycolumn, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlRelation_QSqlRelation, isValid, arginfo_qt_sql_qsqlrelation_qsqlrelation_isvalid, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
