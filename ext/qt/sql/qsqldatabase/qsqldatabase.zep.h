
extern zend_class_entry *qt_sql_qsqldatabase_qsqldatabase_ce;

ZEPHIR_INIT_CLASS(Qt_Sql_QSqlDatabase_QSqlDatabase);

PHP_METHOD(Qt_Sql_QSqlDatabase_QSqlDatabase, staticMetaObject);
PHP_METHOD(Qt_Sql_QSqlDatabase_QSqlDatabase, qt_check_for_QGADGET_macro);
PHP_METHOD(Qt_Sql_QSqlDatabase_QSqlDatabase, new_);
PHP_METHOD(Qt_Sql_QSqlDatabase_QSqlDatabase, newQSqlDatabase);
PHP_METHOD(Qt_Sql_QSqlDatabase_QSqlDatabase, open);
PHP_METHOD(Qt_Sql_QSqlDatabase_QSqlDatabase, openQStringQString);
PHP_METHOD(Qt_Sql_QSqlDatabase_QSqlDatabase, close);
PHP_METHOD(Qt_Sql_QSqlDatabase_QSqlDatabase, isOpen);
PHP_METHOD(Qt_Sql_QSqlDatabase_QSqlDatabase, isOpenError);
PHP_METHOD(Qt_Sql_QSqlDatabase_QSqlDatabase, tables);
PHP_METHOD(Qt_Sql_QSqlDatabase_QSqlDatabase, primaryIndex);
PHP_METHOD(Qt_Sql_QSqlDatabase_QSqlDatabase, record);
PHP_METHOD(Qt_Sql_QSqlDatabase_QSqlDatabase, lastError);
PHP_METHOD(Qt_Sql_QSqlDatabase_QSqlDatabase, isValid);
PHP_METHOD(Qt_Sql_QSqlDatabase_QSqlDatabase, transaction);
PHP_METHOD(Qt_Sql_QSqlDatabase_QSqlDatabase, commit);
PHP_METHOD(Qt_Sql_QSqlDatabase_QSqlDatabase, rollback);
PHP_METHOD(Qt_Sql_QSqlDatabase_QSqlDatabase, setDatabaseName);
PHP_METHOD(Qt_Sql_QSqlDatabase_QSqlDatabase, setUserName);
PHP_METHOD(Qt_Sql_QSqlDatabase_QSqlDatabase, setPassword);
PHP_METHOD(Qt_Sql_QSqlDatabase_QSqlDatabase, setHostName);
PHP_METHOD(Qt_Sql_QSqlDatabase_QSqlDatabase, setPort);
PHP_METHOD(Qt_Sql_QSqlDatabase_QSqlDatabase, setConnectOptions);
PHP_METHOD(Qt_Sql_QSqlDatabase_QSqlDatabase, databaseName);
PHP_METHOD(Qt_Sql_QSqlDatabase_QSqlDatabase, userName);
PHP_METHOD(Qt_Sql_QSqlDatabase_QSqlDatabase, password);
PHP_METHOD(Qt_Sql_QSqlDatabase_QSqlDatabase, hostName);
PHP_METHOD(Qt_Sql_QSqlDatabase_QSqlDatabase, driverName);
PHP_METHOD(Qt_Sql_QSqlDatabase_QSqlDatabase, port);
PHP_METHOD(Qt_Sql_QSqlDatabase_QSqlDatabase, connectOptions);
PHP_METHOD(Qt_Sql_QSqlDatabase_QSqlDatabase, connectionName);
PHP_METHOD(Qt_Sql_QSqlDatabase_QSqlDatabase, setNumericalPrecisionPolicy);
PHP_METHOD(Qt_Sql_QSqlDatabase_QSqlDatabase, numericalPrecisionPolicy);
PHP_METHOD(Qt_Sql_QSqlDatabase_QSqlDatabase, moveToThread);
PHP_METHOD(Qt_Sql_QSqlDatabase_QSqlDatabase, thread);
PHP_METHOD(Qt_Sql_QSqlDatabase_QSqlDatabase, driver);
PHP_METHOD(Qt_Sql_QSqlDatabase_QSqlDatabase, defaultConnection);
PHP_METHOD(Qt_Sql_QSqlDatabase_QSqlDatabase, addDatabase);
PHP_METHOD(Qt_Sql_QSqlDatabase_QSqlDatabase, addDatabaseQSqlDriverQString);
PHP_METHOD(Qt_Sql_QSqlDatabase_QSqlDatabase, cloneDatabase);
PHP_METHOD(Qt_Sql_QSqlDatabase_QSqlDatabase, cloneDatabaseQStringQString);
PHP_METHOD(Qt_Sql_QSqlDatabase_QSqlDatabase, database);
PHP_METHOD(Qt_Sql_QSqlDatabase_QSqlDatabase, removeDatabase);
PHP_METHOD(Qt_Sql_QSqlDatabase_QSqlDatabase, contains);
PHP_METHOD(Qt_Sql_QSqlDatabase_QSqlDatabase, drivers);
PHP_METHOD(Qt_Sql_QSqlDatabase_QSqlDatabase, connectionNames);
PHP_METHOD(Qt_Sql_QSqlDatabase_QSqlDatabase, registerSqlDriver);
PHP_METHOD(Qt_Sql_QSqlDatabase_QSqlDatabase, isDriverAvailable);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqldatabase_qsqldatabase_staticmetaobject, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqldatabase_qsqldatabase_qt_check_for_qgadget_macro, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqldatabase_qsqldatabase_new_, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqldatabase_qsqldatabase_newqsqldatabase, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, other, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqldatabase_qsqldatabase_open, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqldatabase_qsqldatabase_openqstringqstring, 0, 3, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, user, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, password, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqldatabase_qsqldatabase_close, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqldatabase_qsqldatabase_isopen, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqldatabase_qsqldatabase_isopenerror, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqldatabase_qsqldatabase_tables, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_INFO(0, type)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqldatabase_qsqldatabase_primaryindex, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, tablename, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqldatabase_qsqldatabase_record, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, tablename, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqldatabase_qsqldatabase_lasterror, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqldatabase_qsqldatabase_isvalid, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqldatabase_qsqldatabase_transaction, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqldatabase_qsqldatabase_commit, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqldatabase_qsqldatabase_rollback, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqldatabase_qsqldatabase_setdatabasename, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, name, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqldatabase_qsqldatabase_setusername, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, name, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqldatabase_qsqldatabase_setpassword, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, password, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqldatabase_qsqldatabase_sethostname, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, host, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqldatabase_qsqldatabase_setport, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, p, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqldatabase_qsqldatabase_setconnectoptions, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, options, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqldatabase_qsqldatabase_databasename, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqldatabase_qsqldatabase_username, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqldatabase_qsqldatabase_password, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqldatabase_qsqldatabase_hostname, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqldatabase_qsqldatabase_drivername, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqldatabase_qsqldatabase_port, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqldatabase_qsqldatabase_connectoptions, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqldatabase_qsqldatabase_connectionname, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqldatabase_qsqldatabase_setnumericalprecisionpolicy, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, precisionPolicy, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqldatabase_qsqldatabase_numericalprecisionpolicy, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqldatabase_qsqldatabase_movetothread, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, targetThread, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqldatabase_qsqldatabase_thread, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqldatabase_qsqldatabase_driver, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_qt_sql_qsqldatabase_qsqldatabase_defaultconnection, 0, 0, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqldatabase_qsqldatabase_adddatabase, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, type, IS_STRING, 0)
	ZEND_ARG_INFO(0, connectionName)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqldatabase_qsqldatabase_adddatabaseqsqldriverqstring, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, driver, IS_LONG, 0)
	ZEND_ARG_INFO(0, connectionName)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqldatabase_qsqldatabase_clonedatabase, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, other, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, connectionName, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqldatabase_qsqldatabase_clonedatabaseqstringqstring, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, other, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, connectionName, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqldatabase_qsqldatabase_database, 0, 0, IS_LONG, 0)
	ZEND_ARG_INFO(0, connectionName)
	ZEND_ARG_TYPE_INFO(0, open, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqldatabase_qsqldatabase_removedatabase, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, connectionName, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqldatabase_qsqldatabase_contains, 0, 0, _IS_BOOL, 0)
	ZEND_ARG_INFO(0, connectionName)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqldatabase_qsqldatabase_drivers, 0, 0, IS_ARRAY, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqldatabase_qsqldatabase_connectionnames, 0, 0, IS_ARRAY, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqldatabase_qsqldatabase_registersqldriver, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, name, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, creator, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqldatabase_qsqldatabase_isdriveravailable, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, name, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_sql_qsqldatabase_qsqldatabase_method_entry) {
	PHP_ME(Qt_Sql_QSqlDatabase_QSqlDatabase, staticMetaObject, arginfo_qt_sql_qsqldatabase_qsqldatabase_staticmetaobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlDatabase_QSqlDatabase, qt_check_for_QGADGET_macro, arginfo_qt_sql_qsqldatabase_qsqldatabase_qt_check_for_qgadget_macro, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlDatabase_QSqlDatabase, new_, arginfo_qt_sql_qsqldatabase_qsqldatabase_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlDatabase_QSqlDatabase, newQSqlDatabase, arginfo_qt_sql_qsqldatabase_qsqldatabase_newqsqldatabase, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlDatabase_QSqlDatabase, open, arginfo_qt_sql_qsqldatabase_qsqldatabase_open, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlDatabase_QSqlDatabase, openQStringQString, arginfo_qt_sql_qsqldatabase_qsqldatabase_openqstringqstring, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlDatabase_QSqlDatabase, close, arginfo_qt_sql_qsqldatabase_qsqldatabase_close, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlDatabase_QSqlDatabase, isOpen, arginfo_qt_sql_qsqldatabase_qsqldatabase_isopen, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlDatabase_QSqlDatabase, isOpenError, arginfo_qt_sql_qsqldatabase_qsqldatabase_isopenerror, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlDatabase_QSqlDatabase, tables, arginfo_qt_sql_qsqldatabase_qsqldatabase_tables, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlDatabase_QSqlDatabase, primaryIndex, arginfo_qt_sql_qsqldatabase_qsqldatabase_primaryindex, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlDatabase_QSqlDatabase, record, arginfo_qt_sql_qsqldatabase_qsqldatabase_record, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlDatabase_QSqlDatabase, lastError, arginfo_qt_sql_qsqldatabase_qsqldatabase_lasterror, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlDatabase_QSqlDatabase, isValid, arginfo_qt_sql_qsqldatabase_qsqldatabase_isvalid, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlDatabase_QSqlDatabase, transaction, arginfo_qt_sql_qsqldatabase_qsqldatabase_transaction, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlDatabase_QSqlDatabase, commit, arginfo_qt_sql_qsqldatabase_qsqldatabase_commit, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlDatabase_QSqlDatabase, rollback, arginfo_qt_sql_qsqldatabase_qsqldatabase_rollback, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlDatabase_QSqlDatabase, setDatabaseName, arginfo_qt_sql_qsqldatabase_qsqldatabase_setdatabasename, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlDatabase_QSqlDatabase, setUserName, arginfo_qt_sql_qsqldatabase_qsqldatabase_setusername, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlDatabase_QSqlDatabase, setPassword, arginfo_qt_sql_qsqldatabase_qsqldatabase_setpassword, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlDatabase_QSqlDatabase, setHostName, arginfo_qt_sql_qsqldatabase_qsqldatabase_sethostname, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlDatabase_QSqlDatabase, setPort, arginfo_qt_sql_qsqldatabase_qsqldatabase_setport, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlDatabase_QSqlDatabase, setConnectOptions, arginfo_qt_sql_qsqldatabase_qsqldatabase_setconnectoptions, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlDatabase_QSqlDatabase, databaseName, arginfo_qt_sql_qsqldatabase_qsqldatabase_databasename, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlDatabase_QSqlDatabase, userName, arginfo_qt_sql_qsqldatabase_qsqldatabase_username, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlDatabase_QSqlDatabase, password, arginfo_qt_sql_qsqldatabase_qsqldatabase_password, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlDatabase_QSqlDatabase, hostName, arginfo_qt_sql_qsqldatabase_qsqldatabase_hostname, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlDatabase_QSqlDatabase, driverName, arginfo_qt_sql_qsqldatabase_qsqldatabase_drivername, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlDatabase_QSqlDatabase, port, arginfo_qt_sql_qsqldatabase_qsqldatabase_port, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlDatabase_QSqlDatabase, connectOptions, arginfo_qt_sql_qsqldatabase_qsqldatabase_connectoptions, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlDatabase_QSqlDatabase, connectionName, arginfo_qt_sql_qsqldatabase_qsqldatabase_connectionname, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlDatabase_QSqlDatabase, setNumericalPrecisionPolicy, arginfo_qt_sql_qsqldatabase_qsqldatabase_setnumericalprecisionpolicy, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlDatabase_QSqlDatabase, numericalPrecisionPolicy, arginfo_qt_sql_qsqldatabase_qsqldatabase_numericalprecisionpolicy, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlDatabase_QSqlDatabase, moveToThread, arginfo_qt_sql_qsqldatabase_qsqldatabase_movetothread, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlDatabase_QSqlDatabase, thread, arginfo_qt_sql_qsqldatabase_qsqldatabase_thread, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlDatabase_QSqlDatabase, driver, arginfo_qt_sql_qsqldatabase_qsqldatabase_driver, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
PHP_ME(Qt_Sql_QSqlDatabase_QSqlDatabase, defaultConnection, arginfo_qt_sql_qsqldatabase_qsqldatabase_defaultconnection, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlDatabase_QSqlDatabase, addDatabase, arginfo_qt_sql_qsqldatabase_qsqldatabase_adddatabase, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlDatabase_QSqlDatabase, addDatabaseQSqlDriverQString, arginfo_qt_sql_qsqldatabase_qsqldatabase_adddatabaseqsqldriverqstring, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlDatabase_QSqlDatabase, cloneDatabase, arginfo_qt_sql_qsqldatabase_qsqldatabase_clonedatabase, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlDatabase_QSqlDatabase, cloneDatabaseQStringQString, arginfo_qt_sql_qsqldatabase_qsqldatabase_clonedatabaseqstringqstring, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlDatabase_QSqlDatabase, database, arginfo_qt_sql_qsqldatabase_qsqldatabase_database, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlDatabase_QSqlDatabase, removeDatabase, arginfo_qt_sql_qsqldatabase_qsqldatabase_removedatabase, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlDatabase_QSqlDatabase, contains, arginfo_qt_sql_qsqldatabase_qsqldatabase_contains, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlDatabase_QSqlDatabase, drivers, arginfo_qt_sql_qsqldatabase_qsqldatabase_drivers, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlDatabase_QSqlDatabase, connectionNames, arginfo_qt_sql_qsqldatabase_qsqldatabase_connectionnames, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlDatabase_QSqlDatabase, registerSqlDriver, arginfo_qt_sql_qsqldatabase_qsqldatabase_registersqldriver, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlDatabase_QSqlDatabase, isDriverAvailable, arginfo_qt_sql_qsqldatabase_qsqldatabase_isdriveravailable, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
