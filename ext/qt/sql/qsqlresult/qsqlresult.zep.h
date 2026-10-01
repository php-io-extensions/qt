
extern zend_class_entry *qt_sql_qsqlresult_qsqlresult_ce;

ZEPHIR_INIT_CLASS(Qt_Sql_QSqlResult_QSqlResult);

PHP_METHOD(Qt_Sql_QSqlResult_QSqlResult, handle);
PHP_METHOD(Qt_Sql_QSqlResult_QSqlResult, new_);
PHP_METHOD(Qt_Sql_QSqlResult_QSqlResult, at);
PHP_METHOD(Qt_Sql_QSqlResult_QSqlResult, lastQuery);
PHP_METHOD(Qt_Sql_QSqlResult_QSqlResult, lastError);
PHP_METHOD(Qt_Sql_QSqlResult_QSqlResult, isValid);
PHP_METHOD(Qt_Sql_QSqlResult_QSqlResult, isActive);
PHP_METHOD(Qt_Sql_QSqlResult_QSqlResult, isSelect);
PHP_METHOD(Qt_Sql_QSqlResult_QSqlResult, isForwardOnly);
PHP_METHOD(Qt_Sql_QSqlResult_QSqlResult, driver);
PHP_METHOD(Qt_Sql_QSqlResult_QSqlResult, setAt);
PHP_METHOD(Qt_Sql_QSqlResult_QSqlResult, setActive);
PHP_METHOD(Qt_Sql_QSqlResult_QSqlResult, setLastError);
PHP_METHOD(Qt_Sql_QSqlResult_QSqlResult, setQuery);
PHP_METHOD(Qt_Sql_QSqlResult_QSqlResult, setSelect);
PHP_METHOD(Qt_Sql_QSqlResult_QSqlResult, setForwardOnly);
PHP_METHOD(Qt_Sql_QSqlResult_QSqlResult, exec);
PHP_METHOD(Qt_Sql_QSqlResult_QSqlResult, prepare);
PHP_METHOD(Qt_Sql_QSqlResult_QSqlResult, savePrepare);
PHP_METHOD(Qt_Sql_QSqlResult_QSqlResult, bindValue);
PHP_METHOD(Qt_Sql_QSqlResult_QSqlResult, bindValueQStringQVariantQSqlParamType);
PHP_METHOD(Qt_Sql_QSqlResult_QSqlResult, addBindValue);
PHP_METHOD(Qt_Sql_QSqlResult_QSqlResult, boundValue);
PHP_METHOD(Qt_Sql_QSqlResult_QSqlResult, boundValueInt);
PHP_METHOD(Qt_Sql_QSqlResult_QSqlResult, bindValueType);
PHP_METHOD(Qt_Sql_QSqlResult_QSqlResult, bindValueTypeInt);
PHP_METHOD(Qt_Sql_QSqlResult_QSqlResult, boundValueCount);
PHP_METHOD(Qt_Sql_QSqlResult_QSqlResult, boundValues);
PHP_METHOD(Qt_Sql_QSqlResult_QSqlResult, executedQuery);
PHP_METHOD(Qt_Sql_QSqlResult_QSqlResult, boundValueNames);
PHP_METHOD(Qt_Sql_QSqlResult_QSqlResult, boundValueName);
PHP_METHOD(Qt_Sql_QSqlResult_QSqlResult, clear);
PHP_METHOD(Qt_Sql_QSqlResult_QSqlResult, hasOutValues);
PHP_METHOD(Qt_Sql_QSqlResult_QSqlResult, bindingSyntax);
PHP_METHOD(Qt_Sql_QSqlResult_QSqlResult, data);
PHP_METHOD(Qt_Sql_QSqlResult_QSqlResult, isNull);
PHP_METHOD(Qt_Sql_QSqlResult_QSqlResult, reset);
PHP_METHOD(Qt_Sql_QSqlResult_QSqlResult, fetch_);
PHP_METHOD(Qt_Sql_QSqlResult_QSqlResult, fetchNext);
PHP_METHOD(Qt_Sql_QSqlResult_QSqlResult, fetchPrevious);
PHP_METHOD(Qt_Sql_QSqlResult_QSqlResult, fetchFirst);
PHP_METHOD(Qt_Sql_QSqlResult_QSqlResult, fetchLast);
PHP_METHOD(Qt_Sql_QSqlResult_QSqlResult, size);
PHP_METHOD(Qt_Sql_QSqlResult_QSqlResult, numRowsAffected);
PHP_METHOD(Qt_Sql_QSqlResult_QSqlResult, record);
PHP_METHOD(Qt_Sql_QSqlResult_QSqlResult, lastInsertId);
PHP_METHOD(Qt_Sql_QSqlResult_QSqlResult, execBatch);
PHP_METHOD(Qt_Sql_QSqlResult_QSqlResult, detachFromResultSet);
PHP_METHOD(Qt_Sql_QSqlResult_QSqlResult, setNumericalPrecisionPolicy);
PHP_METHOD(Qt_Sql_QSqlResult_QSqlResult, numericalPrecisionPolicy);
PHP_METHOD(Qt_Sql_QSqlResult_QSqlResult, setPositionalBindingEnabled);
PHP_METHOD(Qt_Sql_QSqlResult_QSqlResult, isPositionalBindingEnabled);
PHP_METHOD(Qt_Sql_QSqlResult_QSqlResult, nextResult);
PHP_METHOD(Qt_Sql_QSqlResult_QSqlResult, resetBindCount);

ZEND_BEGIN_ARG_INFO_EX(arginfo_qt_sql_qsqlresult_qsqlresult_handle, 0, 0, 1)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqlresult_qsqlresult_new_, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, db, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqlresult_qsqlresult_at, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqlresult_qsqlresult_lastquery, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqlresult_qsqlresult_lasterror, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqlresult_qsqlresult_isvalid, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqlresult_qsqlresult_isactive, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqlresult_qsqlresult_isselect, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqlresult_qsqlresult_isforwardonly, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqlresult_qsqlresult_driver, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqlresult_qsqlresult_setat, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, at, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqlresult_qsqlresult_setactive, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, a, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqlresult_qsqlresult_setlasterror, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, e, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqlresult_qsqlresult_setquery, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, query, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqlresult_qsqlresult_setselect, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, s, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqlresult_qsqlresult_setforwardonly, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, forward, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqlresult_qsqlresult_exec, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqlresult_qsqlresult_prepare, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, query, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqlresult_qsqlresult_saveprepare, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sqlquery, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqlresult_qsqlresult_bindvalue, 0, 4, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, pos, IS_LONG, 0)
	ZEND_ARG_INFO(0, val)
	ZEND_ARG_TYPE_INFO(0, type, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqlresult_qsqlresult_bindvalueqstringqvariantqsqlparamtype, 0, 4, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, placeholder, IS_STRING, 0)
	ZEND_ARG_INFO(0, val)
	ZEND_ARG_TYPE_INFO(0, type, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqlresult_qsqlresult_addbindvalue, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_INFO(0, val)
	ZEND_ARG_TYPE_INFO(0, type, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_qt_sql_qsqlresult_qsqlresult_boundvalue, 0, 0, 2)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, placeholder, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_qt_sql_qsqlresult_qsqlresult_boundvalueint, 0, 0, 2)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, pos, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqlresult_qsqlresult_bindvaluetype, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, placeholder, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqlresult_qsqlresult_bindvaluetypeint, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, pos, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqlresult_qsqlresult_boundvaluecount, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqlresult_qsqlresult_boundvalues, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_INFO(0, arg0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqlresult_qsqlresult_executedquery, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqlresult_qsqlresult_boundvaluenames, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqlresult_qsqlresult_boundvaluename, 0, 2, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, pos, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqlresult_qsqlresult_clear, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqlresult_qsqlresult_hasoutvalues, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqlresult_qsqlresult_bindingsyntax, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_qt_sql_qsqlresult_qsqlresult_data, 0, 0, 2)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, i, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqlresult_qsqlresult_isnull, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, i, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqlresult_qsqlresult_reset, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sqlquery, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqlresult_qsqlresult_fetch_, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, i, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqlresult_qsqlresult_fetchnext, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqlresult_qsqlresult_fetchprevious, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqlresult_qsqlresult_fetchfirst, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqlresult_qsqlresult_fetchlast, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqlresult_qsqlresult_size, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqlresult_qsqlresult_numrowsaffected, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqlresult_qsqlresult_record, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_qt_sql_qsqlresult_qsqlresult_lastinsertid, 0, 0, 1)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqlresult_qsqlresult_execbatch, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arrayBind, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqlresult_qsqlresult_detachfromresultset, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqlresult_qsqlresult_setnumericalprecisionpolicy, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, policy, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqlresult_qsqlresult_numericalprecisionpolicy, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqlresult_qsqlresult_setpositionalbindingenabled, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, enable, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqlresult_qsqlresult_ispositionalbindingenabled, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqlresult_qsqlresult_nextresult, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqlresult_qsqlresult_resetbindcount, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_sql_qsqlresult_qsqlresult_method_entry) {
	PHP_ME(Qt_Sql_QSqlResult_QSqlResult, handle, arginfo_qt_sql_qsqlresult_qsqlresult_handle, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlResult_QSqlResult, new_, arginfo_qt_sql_qsqlresult_qsqlresult_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlResult_QSqlResult, at, arginfo_qt_sql_qsqlresult_qsqlresult_at, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlResult_QSqlResult, lastQuery, arginfo_qt_sql_qsqlresult_qsqlresult_lastquery, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlResult_QSqlResult, lastError, arginfo_qt_sql_qsqlresult_qsqlresult_lasterror, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlResult_QSqlResult, isValid, arginfo_qt_sql_qsqlresult_qsqlresult_isvalid, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlResult_QSqlResult, isActive, arginfo_qt_sql_qsqlresult_qsqlresult_isactive, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlResult_QSqlResult, isSelect, arginfo_qt_sql_qsqlresult_qsqlresult_isselect, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlResult_QSqlResult, isForwardOnly, arginfo_qt_sql_qsqlresult_qsqlresult_isforwardonly, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlResult_QSqlResult, driver, arginfo_qt_sql_qsqlresult_qsqlresult_driver, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlResult_QSqlResult, setAt, arginfo_qt_sql_qsqlresult_qsqlresult_setat, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlResult_QSqlResult, setActive, arginfo_qt_sql_qsqlresult_qsqlresult_setactive, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlResult_QSqlResult, setLastError, arginfo_qt_sql_qsqlresult_qsqlresult_setlasterror, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlResult_QSqlResult, setQuery, arginfo_qt_sql_qsqlresult_qsqlresult_setquery, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlResult_QSqlResult, setSelect, arginfo_qt_sql_qsqlresult_qsqlresult_setselect, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlResult_QSqlResult, setForwardOnly, arginfo_qt_sql_qsqlresult_qsqlresult_setforwardonly, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlResult_QSqlResult, exec, arginfo_qt_sql_qsqlresult_qsqlresult_exec, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlResult_QSqlResult, prepare, arginfo_qt_sql_qsqlresult_qsqlresult_prepare, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlResult_QSqlResult, savePrepare, arginfo_qt_sql_qsqlresult_qsqlresult_saveprepare, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlResult_QSqlResult, bindValue, arginfo_qt_sql_qsqlresult_qsqlresult_bindvalue, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlResult_QSqlResult, bindValueQStringQVariantQSqlParamType, arginfo_qt_sql_qsqlresult_qsqlresult_bindvalueqstringqvariantqsqlparamtype, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlResult_QSqlResult, addBindValue, arginfo_qt_sql_qsqlresult_qsqlresult_addbindvalue, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlResult_QSqlResult, boundValue, arginfo_qt_sql_qsqlresult_qsqlresult_boundvalue, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlResult_QSqlResult, boundValueInt, arginfo_qt_sql_qsqlresult_qsqlresult_boundvalueint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlResult_QSqlResult, bindValueType, arginfo_qt_sql_qsqlresult_qsqlresult_bindvaluetype, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlResult_QSqlResult, bindValueTypeInt, arginfo_qt_sql_qsqlresult_qsqlresult_bindvaluetypeint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlResult_QSqlResult, boundValueCount, arginfo_qt_sql_qsqlresult_qsqlresult_boundvaluecount, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlResult_QSqlResult, boundValues, arginfo_qt_sql_qsqlresult_qsqlresult_boundvalues, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlResult_QSqlResult, executedQuery, arginfo_qt_sql_qsqlresult_qsqlresult_executedquery, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlResult_QSqlResult, boundValueNames, arginfo_qt_sql_qsqlresult_qsqlresult_boundvaluenames, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlResult_QSqlResult, boundValueName, arginfo_qt_sql_qsqlresult_qsqlresult_boundvaluename, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlResult_QSqlResult, clear, arginfo_qt_sql_qsqlresult_qsqlresult_clear, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlResult_QSqlResult, hasOutValues, arginfo_qt_sql_qsqlresult_qsqlresult_hasoutvalues, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlResult_QSqlResult, bindingSyntax, arginfo_qt_sql_qsqlresult_qsqlresult_bindingsyntax, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlResult_QSqlResult, data, arginfo_qt_sql_qsqlresult_qsqlresult_data, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlResult_QSqlResult, isNull, arginfo_qt_sql_qsqlresult_qsqlresult_isnull, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlResult_QSqlResult, reset, arginfo_qt_sql_qsqlresult_qsqlresult_reset, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlResult_QSqlResult, fetch_, arginfo_qt_sql_qsqlresult_qsqlresult_fetch_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlResult_QSqlResult, fetchNext, arginfo_qt_sql_qsqlresult_qsqlresult_fetchnext, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlResult_QSqlResult, fetchPrevious, arginfo_qt_sql_qsqlresult_qsqlresult_fetchprevious, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlResult_QSqlResult, fetchFirst, arginfo_qt_sql_qsqlresult_qsqlresult_fetchfirst, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlResult_QSqlResult, fetchLast, arginfo_qt_sql_qsqlresult_qsqlresult_fetchlast, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlResult_QSqlResult, size, arginfo_qt_sql_qsqlresult_qsqlresult_size, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlResult_QSqlResult, numRowsAffected, arginfo_qt_sql_qsqlresult_qsqlresult_numrowsaffected, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlResult_QSqlResult, record, arginfo_qt_sql_qsqlresult_qsqlresult_record, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlResult_QSqlResult, lastInsertId, arginfo_qt_sql_qsqlresult_qsqlresult_lastinsertid, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlResult_QSqlResult, execBatch, arginfo_qt_sql_qsqlresult_qsqlresult_execbatch, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlResult_QSqlResult, detachFromResultSet, arginfo_qt_sql_qsqlresult_qsqlresult_detachfromresultset, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlResult_QSqlResult, setNumericalPrecisionPolicy, arginfo_qt_sql_qsqlresult_qsqlresult_setnumericalprecisionpolicy, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlResult_QSqlResult, numericalPrecisionPolicy, arginfo_qt_sql_qsqlresult_qsqlresult_numericalprecisionpolicy, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlResult_QSqlResult, setPositionalBindingEnabled, arginfo_qt_sql_qsqlresult_qsqlresult_setpositionalbindingenabled, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlResult_QSqlResult, isPositionalBindingEnabled, arginfo_qt_sql_qsqlresult_qsqlresult_ispositionalbindingenabled, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlResult_QSqlResult, nextResult, arginfo_qt_sql_qsqlresult_qsqlresult_nextresult, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlResult_QSqlResult, resetBindCount, arginfo_qt_sql_qsqlresult_qsqlresult_resetbindcount, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
