
extern zend_class_entry *qt_sql_qsqlquery_qsqlquery_ce;

ZEPHIR_INIT_CLASS(Qt_Sql_QSqlQuery_QSqlQuery);

PHP_METHOD(Qt_Sql_QSqlQuery_QSqlQuery, staticMetaObject);
PHP_METHOD(Qt_Sql_QSqlQuery_QSqlQuery, qt_check_for_QGADGET_macro);
PHP_METHOD(Qt_Sql_QSqlQuery_QSqlQuery, new_);
PHP_METHOD(Qt_Sql_QSqlQuery_QSqlQuery, newQStringQSqlDatabase);
PHP_METHOD(Qt_Sql_QSqlQuery_QSqlQuery, newQSqlDatabase);
PHP_METHOD(Qt_Sql_QSqlQuery_QSqlQuery, newQSqlQuery);
PHP_METHOD(Qt_Sql_QSqlQuery_QSqlQuery, swap);
PHP_METHOD(Qt_Sql_QSqlQuery_QSqlQuery, isValid);
PHP_METHOD(Qt_Sql_QSqlQuery_QSqlQuery, isActive);
PHP_METHOD(Qt_Sql_QSqlQuery_QSqlQuery, isNull);
PHP_METHOD(Qt_Sql_QSqlQuery_QSqlQuery, isNullQAnyStringView);
PHP_METHOD(Qt_Sql_QSqlQuery_QSqlQuery, at);
PHP_METHOD(Qt_Sql_QSqlQuery_QSqlQuery, lastQuery);
PHP_METHOD(Qt_Sql_QSqlQuery_QSqlQuery, numRowsAffected);
PHP_METHOD(Qt_Sql_QSqlQuery_QSqlQuery, lastError);
PHP_METHOD(Qt_Sql_QSqlQuery_QSqlQuery, isSelect);
PHP_METHOD(Qt_Sql_QSqlQuery_QSqlQuery, size);
PHP_METHOD(Qt_Sql_QSqlQuery_QSqlQuery, driver);
PHP_METHOD(Qt_Sql_QSqlQuery_QSqlQuery, result);
PHP_METHOD(Qt_Sql_QSqlQuery_QSqlQuery, isForwardOnly);
PHP_METHOD(Qt_Sql_QSqlQuery_QSqlQuery, record);
PHP_METHOD(Qt_Sql_QSqlQuery_QSqlQuery, setForwardOnly);
PHP_METHOD(Qt_Sql_QSqlQuery_QSqlQuery, exec);
PHP_METHOD(Qt_Sql_QSqlQuery_QSqlQuery, value);
PHP_METHOD(Qt_Sql_QSqlQuery_QSqlQuery, valueQAnyStringView);
PHP_METHOD(Qt_Sql_QSqlQuery_QSqlQuery, setNumericalPrecisionPolicy);
PHP_METHOD(Qt_Sql_QSqlQuery_QSqlQuery, numericalPrecisionPolicy);
PHP_METHOD(Qt_Sql_QSqlQuery_QSqlQuery, setPositionalBindingEnabled);
PHP_METHOD(Qt_Sql_QSqlQuery_QSqlQuery, isPositionalBindingEnabled);
PHP_METHOD(Qt_Sql_QSqlQuery_QSqlQuery, seek);
PHP_METHOD(Qt_Sql_QSqlQuery_QSqlQuery, next);
PHP_METHOD(Qt_Sql_QSqlQuery_QSqlQuery, previous);
PHP_METHOD(Qt_Sql_QSqlQuery_QSqlQuery, first);
PHP_METHOD(Qt_Sql_QSqlQuery_QSqlQuery, last);
PHP_METHOD(Qt_Sql_QSqlQuery_QSqlQuery, clear);
PHP_METHOD(Qt_Sql_QSqlQuery_QSqlQuery, exec2);
PHP_METHOD(Qt_Sql_QSqlQuery_QSqlQuery, execBatch);
PHP_METHOD(Qt_Sql_QSqlQuery_QSqlQuery, prepare);
PHP_METHOD(Qt_Sql_QSqlQuery_QSqlQuery, bindValue);
PHP_METHOD(Qt_Sql_QSqlQuery_QSqlQuery, bindValueIntQVariantQSqlParamType);
PHP_METHOD(Qt_Sql_QSqlQuery_QSqlQuery, addBindValue);
PHP_METHOD(Qt_Sql_QSqlQuery_QSqlQuery, boundValue);
PHP_METHOD(Qt_Sql_QSqlQuery_QSqlQuery, boundValueInt);
PHP_METHOD(Qt_Sql_QSqlQuery_QSqlQuery, boundValues);
PHP_METHOD(Qt_Sql_QSqlQuery_QSqlQuery, boundValueNames);
PHP_METHOD(Qt_Sql_QSqlQuery_QSqlQuery, boundValueName);
PHP_METHOD(Qt_Sql_QSqlQuery_QSqlQuery, executedQuery);
PHP_METHOD(Qt_Sql_QSqlQuery_QSqlQuery, lastInsertId);
PHP_METHOD(Qt_Sql_QSqlQuery_QSqlQuery, finish);
PHP_METHOD(Qt_Sql_QSqlQuery_QSqlQuery, nextResult);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqlquery_qsqlquery_staticmetaobject, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqlquery_qsqlquery_qt_check_for_qgadget_macro, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqlquery_qsqlquery_new_, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, r, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqlquery_qsqlquery_newqstringqsqldatabase, 0, 0, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, query, IS_STRING, 0)
	ZEND_ARG_INFO(0, db)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqlquery_qsqlquery_newqsqldatabase, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, db, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqlquery_qsqlquery_newqsqlquery, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, other, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqlquery_qsqlquery_swap, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, other, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqlquery_qsqlquery_isvalid, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqlquery_qsqlquery_isactive, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqlquery_qsqlquery_isnull, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, field, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqlquery_qsqlquery_isnullqanystringview, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, name, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqlquery_qsqlquery_at, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqlquery_qsqlquery_lastquery, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqlquery_qsqlquery_numrowsaffected, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqlquery_qsqlquery_lasterror, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqlquery_qsqlquery_isselect, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqlquery_qsqlquery_size, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqlquery_qsqlquery_driver, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqlquery_qsqlquery_result, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqlquery_qsqlquery_isforwardonly, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqlquery_qsqlquery_record, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqlquery_qsqlquery_setforwardonly, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, forward, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqlquery_qsqlquery_exec, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, query, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_qt_sql_qsqlquery_qsqlquery_value, 0, 0, 2)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, i, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_qt_sql_qsqlquery_qsqlquery_valueqanystringview, 0, 0, 2)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, name, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqlquery_qsqlquery_setnumericalprecisionpolicy, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, precisionPolicy, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqlquery_qsqlquery_numericalprecisionpolicy, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqlquery_qsqlquery_setpositionalbindingenabled, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, enable, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqlquery_qsqlquery_ispositionalbindingenabled, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqlquery_qsqlquery_seek, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, i, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, relative, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqlquery_qsqlquery_next, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqlquery_qsqlquery_previous, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqlquery_qsqlquery_first, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqlquery_qsqlquery_last, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqlquery_qsqlquery_clear, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqlquery_qsqlquery_exec2, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqlquery_qsqlquery_execbatch, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_INFO(0, mode)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqlquery_qsqlquery_prepare, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, query, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqlquery_qsqlquery_bindvalue, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, placeholder, IS_STRING, 0)
	ZEND_ARG_INFO(0, val)
	ZEND_ARG_INFO(0, type)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqlquery_qsqlquery_bindvalueintqvariantqsqlparamtype, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, pos, IS_LONG, 0)
	ZEND_ARG_INFO(0, val)
	ZEND_ARG_INFO(0, type)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqlquery_qsqlquery_addbindvalue, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_INFO(0, val)
	ZEND_ARG_INFO(0, type)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_qt_sql_qsqlquery_qsqlquery_boundvalue, 0, 0, 2)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, placeholder, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_qt_sql_qsqlquery_qsqlquery_boundvalueint, 0, 0, 2)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, pos, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqlquery_qsqlquery_boundvalues, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqlquery_qsqlquery_boundvaluenames, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqlquery_qsqlquery_boundvaluename, 0, 2, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, pos, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqlquery_qsqlquery_executedquery, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_qt_sql_qsqlquery_qsqlquery_lastinsertid, 0, 0, 1)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqlquery_qsqlquery_finish, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqlquery_qsqlquery_nextresult, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_sql_qsqlquery_qsqlquery_method_entry) {
	PHP_ME(Qt_Sql_QSqlQuery_QSqlQuery, staticMetaObject, arginfo_qt_sql_qsqlquery_qsqlquery_staticmetaobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlQuery_QSqlQuery, qt_check_for_QGADGET_macro, arginfo_qt_sql_qsqlquery_qsqlquery_qt_check_for_qgadget_macro, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlQuery_QSqlQuery, new_, arginfo_qt_sql_qsqlquery_qsqlquery_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlQuery_QSqlQuery, newQStringQSqlDatabase, arginfo_qt_sql_qsqlquery_qsqlquery_newqstringqsqldatabase, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlQuery_QSqlQuery, newQSqlDatabase, arginfo_qt_sql_qsqlquery_qsqlquery_newqsqldatabase, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlQuery_QSqlQuery, newQSqlQuery, arginfo_qt_sql_qsqlquery_qsqlquery_newqsqlquery, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlQuery_QSqlQuery, swap, arginfo_qt_sql_qsqlquery_qsqlquery_swap, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlQuery_QSqlQuery, isValid, arginfo_qt_sql_qsqlquery_qsqlquery_isvalid, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlQuery_QSqlQuery, isActive, arginfo_qt_sql_qsqlquery_qsqlquery_isactive, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlQuery_QSqlQuery, isNull, arginfo_qt_sql_qsqlquery_qsqlquery_isnull, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlQuery_QSqlQuery, isNullQAnyStringView, arginfo_qt_sql_qsqlquery_qsqlquery_isnullqanystringview, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlQuery_QSqlQuery, at, arginfo_qt_sql_qsqlquery_qsqlquery_at, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlQuery_QSqlQuery, lastQuery, arginfo_qt_sql_qsqlquery_qsqlquery_lastquery, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlQuery_QSqlQuery, numRowsAffected, arginfo_qt_sql_qsqlquery_qsqlquery_numrowsaffected, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlQuery_QSqlQuery, lastError, arginfo_qt_sql_qsqlquery_qsqlquery_lasterror, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlQuery_QSqlQuery, isSelect, arginfo_qt_sql_qsqlquery_qsqlquery_isselect, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlQuery_QSqlQuery, size, arginfo_qt_sql_qsqlquery_qsqlquery_size, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlQuery_QSqlQuery, driver, arginfo_qt_sql_qsqlquery_qsqlquery_driver, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlQuery_QSqlQuery, result, arginfo_qt_sql_qsqlquery_qsqlquery_result, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlQuery_QSqlQuery, isForwardOnly, arginfo_qt_sql_qsqlquery_qsqlquery_isforwardonly, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlQuery_QSqlQuery, record, arginfo_qt_sql_qsqlquery_qsqlquery_record, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlQuery_QSqlQuery, setForwardOnly, arginfo_qt_sql_qsqlquery_qsqlquery_setforwardonly, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlQuery_QSqlQuery, exec, arginfo_qt_sql_qsqlquery_qsqlquery_exec, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlQuery_QSqlQuery, value, arginfo_qt_sql_qsqlquery_qsqlquery_value, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlQuery_QSqlQuery, valueQAnyStringView, arginfo_qt_sql_qsqlquery_qsqlquery_valueqanystringview, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlQuery_QSqlQuery, setNumericalPrecisionPolicy, arginfo_qt_sql_qsqlquery_qsqlquery_setnumericalprecisionpolicy, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlQuery_QSqlQuery, numericalPrecisionPolicy, arginfo_qt_sql_qsqlquery_qsqlquery_numericalprecisionpolicy, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlQuery_QSqlQuery, setPositionalBindingEnabled, arginfo_qt_sql_qsqlquery_qsqlquery_setpositionalbindingenabled, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlQuery_QSqlQuery, isPositionalBindingEnabled, arginfo_qt_sql_qsqlquery_qsqlquery_ispositionalbindingenabled, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlQuery_QSqlQuery, seek, arginfo_qt_sql_qsqlquery_qsqlquery_seek, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlQuery_QSqlQuery, next, arginfo_qt_sql_qsqlquery_qsqlquery_next, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlQuery_QSqlQuery, previous, arginfo_qt_sql_qsqlquery_qsqlquery_previous, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlQuery_QSqlQuery, first, arginfo_qt_sql_qsqlquery_qsqlquery_first, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlQuery_QSqlQuery, last, arginfo_qt_sql_qsqlquery_qsqlquery_last, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlQuery_QSqlQuery, clear, arginfo_qt_sql_qsqlquery_qsqlquery_clear, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlQuery_QSqlQuery, exec2, arginfo_qt_sql_qsqlquery_qsqlquery_exec2, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlQuery_QSqlQuery, execBatch, arginfo_qt_sql_qsqlquery_qsqlquery_execbatch, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlQuery_QSqlQuery, prepare, arginfo_qt_sql_qsqlquery_qsqlquery_prepare, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlQuery_QSqlQuery, bindValue, arginfo_qt_sql_qsqlquery_qsqlquery_bindvalue, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlQuery_QSqlQuery, bindValueIntQVariantQSqlParamType, arginfo_qt_sql_qsqlquery_qsqlquery_bindvalueintqvariantqsqlparamtype, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlQuery_QSqlQuery, addBindValue, arginfo_qt_sql_qsqlquery_qsqlquery_addbindvalue, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlQuery_QSqlQuery, boundValue, arginfo_qt_sql_qsqlquery_qsqlquery_boundvalue, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlQuery_QSqlQuery, boundValueInt, arginfo_qt_sql_qsqlquery_qsqlquery_boundvalueint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlQuery_QSqlQuery, boundValues, arginfo_qt_sql_qsqlquery_qsqlquery_boundvalues, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlQuery_QSqlQuery, boundValueNames, arginfo_qt_sql_qsqlquery_qsqlquery_boundvaluenames, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlQuery_QSqlQuery, boundValueName, arginfo_qt_sql_qsqlquery_qsqlquery_boundvaluename, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlQuery_QSqlQuery, executedQuery, arginfo_qt_sql_qsqlquery_qsqlquery_executedquery, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlQuery_QSqlQuery, lastInsertId, arginfo_qt_sql_qsqlquery_qsqlquery_lastinsertid, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlQuery_QSqlQuery, finish, arginfo_qt_sql_qsqlquery_qsqlquery_finish, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlQuery_QSqlQuery, nextResult, arginfo_qt_sql_qsqlquery_qsqlquery_nextresult, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
