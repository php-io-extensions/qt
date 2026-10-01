
extern zend_class_entry *qt_sql_qsqldriver_qsqldriver_ce;

ZEPHIR_INIT_CLASS(Qt_Sql_QSqlDriver_QSqlDriver);

PHP_METHOD(Qt_Sql_QSqlDriver_QSqlDriver, staticMetaObject);
PHP_METHOD(Qt_Sql_QSqlDriver_QSqlDriver, tr);
PHP_METHOD(Qt_Sql_QSqlDriver_QSqlDriver, new_);
PHP_METHOD(Qt_Sql_QSqlDriver_QSqlDriver, isOpen);
PHP_METHOD(Qt_Sql_QSqlDriver_QSqlDriver, isOpenError);
PHP_METHOD(Qt_Sql_QSqlDriver_QSqlDriver, beginTransaction);
PHP_METHOD(Qt_Sql_QSqlDriver_QSqlDriver, commitTransaction);
PHP_METHOD(Qt_Sql_QSqlDriver_QSqlDriver, rollbackTransaction);
PHP_METHOD(Qt_Sql_QSqlDriver_QSqlDriver, tables);
PHP_METHOD(Qt_Sql_QSqlDriver_QSqlDriver, primaryIndex);
PHP_METHOD(Qt_Sql_QSqlDriver_QSqlDriver, record);
PHP_METHOD(Qt_Sql_QSqlDriver_QSqlDriver, formatValue);
PHP_METHOD(Qt_Sql_QSqlDriver_QSqlDriver, escapeIdentifier);
PHP_METHOD(Qt_Sql_QSqlDriver_QSqlDriver, sqlStatement);
PHP_METHOD(Qt_Sql_QSqlDriver_QSqlDriver, lastError);
PHP_METHOD(Qt_Sql_QSqlDriver_QSqlDriver, handle);
PHP_METHOD(Qt_Sql_QSqlDriver_QSqlDriver, hasFeature);
PHP_METHOD(Qt_Sql_QSqlDriver_QSqlDriver, close);
PHP_METHOD(Qt_Sql_QSqlDriver_QSqlDriver, createResult);
PHP_METHOD(Qt_Sql_QSqlDriver_QSqlDriver, open);
PHP_METHOD(Qt_Sql_QSqlDriver_QSqlDriver, subscribeToNotification);
PHP_METHOD(Qt_Sql_QSqlDriver_QSqlDriver, unsubscribeFromNotification);
PHP_METHOD(Qt_Sql_QSqlDriver_QSqlDriver, subscribedToNotifications);
PHP_METHOD(Qt_Sql_QSqlDriver_QSqlDriver, isIdentifierEscaped);
PHP_METHOD(Qt_Sql_QSqlDriver_QSqlDriver, stripDelimiters);
PHP_METHOD(Qt_Sql_QSqlDriver_QSqlDriver, setNumericalPrecisionPolicy);
PHP_METHOD(Qt_Sql_QSqlDriver_QSqlDriver, numericalPrecisionPolicy);
PHP_METHOD(Qt_Sql_QSqlDriver_QSqlDriver, dbmsType);
PHP_METHOD(Qt_Sql_QSqlDriver_QSqlDriver, maximumIdentifierLength);
PHP_METHOD(Qt_Sql_QSqlDriver_QSqlDriver, cancelQuery);
PHP_METHOD(Qt_Sql_QSqlDriver_QSqlDriver, notification);
PHP_METHOD(Qt_Sql_QSqlDriver_QSqlDriver, setOpen);
PHP_METHOD(Qt_Sql_QSqlDriver_QSqlDriver, setOpenError);
PHP_METHOD(Qt_Sql_QSqlDriver_QSqlDriver, setLastError);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqldriver_qsqldriver_staticmetaobject, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqldriver_qsqldriver_tr, 0, 1, IS_STRING, 0)
	ZEND_ARG_INFO(0, s)
	ZEND_ARG_INFO(0, c)
	ZEND_ARG_TYPE_INFO(0, n, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqldriver_qsqldriver_new_, 0, 0, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqldriver_qsqldriver_isopen, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqldriver_qsqldriver_isopenerror, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqldriver_qsqldriver_begintransaction, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqldriver_qsqldriver_committransaction, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqldriver_qsqldriver_rollbacktransaction, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqldriver_qsqldriver_tables, 0, 2, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, tableType, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqldriver_qsqldriver_primaryindex, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, tableName, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqldriver_qsqldriver_record, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, tableName, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqldriver_qsqldriver_formatvalue, 0, 2, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, field, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, trimStrings, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqldriver_qsqldriver_escapeidentifier, 0, 3, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, identifier, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, type, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqldriver_qsqldriver_sqlstatement, 0, 5, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, type, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, tableName, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, rec, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, preparedStatement, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqldriver_qsqldriver_lasterror, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_qt_sql_qsqldriver_qsqldriver_handle, 0, 0, 1)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqldriver_qsqldriver_hasfeature, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, f, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqldriver_qsqldriver_close, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqldriver_qsqldriver_createresult, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqldriver_qsqldriver_open, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, db, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, user, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, password, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, host, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, port, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, connOpts, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqldriver_qsqldriver_subscribetonotification, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, name, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqldriver_qsqldriver_unsubscribefromnotification, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, name, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqldriver_qsqldriver_subscribedtonotifications, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqldriver_qsqldriver_isidentifierescaped, 0, 3, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, identifier, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, type, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqldriver_qsqldriver_stripdelimiters, 0, 3, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, identifier, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, type, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqldriver_qsqldriver_setnumericalprecisionpolicy, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, precisionPolicy, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqldriver_qsqldriver_numericalprecisionpolicy, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqldriver_qsqldriver_dbmstype, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqldriver_qsqldriver_maximumidentifierlength, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, type, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqldriver_qsqldriver_cancelquery, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqldriver_qsqldriver_notification, 0, 4, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, name, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, source, IS_LONG, 0)
	ZEND_ARG_INFO(0, payload)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqldriver_qsqldriver_setopen, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, o, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqldriver_qsqldriver_setopenerror, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, e, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqldriver_qsqldriver_setlasterror, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, e, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_sql_qsqldriver_qsqldriver_method_entry) {
	PHP_ME(Qt_Sql_QSqlDriver_QSqlDriver, staticMetaObject, arginfo_qt_sql_qsqldriver_qsqldriver_staticmetaobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlDriver_QSqlDriver, tr, arginfo_qt_sql_qsqldriver_qsqldriver_tr, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlDriver_QSqlDriver, new_, arginfo_qt_sql_qsqldriver_qsqldriver_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlDriver_QSqlDriver, isOpen, arginfo_qt_sql_qsqldriver_qsqldriver_isopen, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlDriver_QSqlDriver, isOpenError, arginfo_qt_sql_qsqldriver_qsqldriver_isopenerror, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlDriver_QSqlDriver, beginTransaction, arginfo_qt_sql_qsqldriver_qsqldriver_begintransaction, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlDriver_QSqlDriver, commitTransaction, arginfo_qt_sql_qsqldriver_qsqldriver_committransaction, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlDriver_QSqlDriver, rollbackTransaction, arginfo_qt_sql_qsqldriver_qsqldriver_rollbacktransaction, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlDriver_QSqlDriver, tables, arginfo_qt_sql_qsqldriver_qsqldriver_tables, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlDriver_QSqlDriver, primaryIndex, arginfo_qt_sql_qsqldriver_qsqldriver_primaryindex, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlDriver_QSqlDriver, record, arginfo_qt_sql_qsqldriver_qsqldriver_record, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlDriver_QSqlDriver, formatValue, arginfo_qt_sql_qsqldriver_qsqldriver_formatvalue, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlDriver_QSqlDriver, escapeIdentifier, arginfo_qt_sql_qsqldriver_qsqldriver_escapeidentifier, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlDriver_QSqlDriver, sqlStatement, arginfo_qt_sql_qsqldriver_qsqldriver_sqlstatement, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlDriver_QSqlDriver, lastError, arginfo_qt_sql_qsqldriver_qsqldriver_lasterror, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlDriver_QSqlDriver, handle, arginfo_qt_sql_qsqldriver_qsqldriver_handle, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlDriver_QSqlDriver, hasFeature, arginfo_qt_sql_qsqldriver_qsqldriver_hasfeature, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlDriver_QSqlDriver, close, arginfo_qt_sql_qsqldriver_qsqldriver_close, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlDriver_QSqlDriver, createResult, arginfo_qt_sql_qsqldriver_qsqldriver_createresult, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlDriver_QSqlDriver, open, arginfo_qt_sql_qsqldriver_qsqldriver_open, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlDriver_QSqlDriver, subscribeToNotification, arginfo_qt_sql_qsqldriver_qsqldriver_subscribetonotification, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlDriver_QSqlDriver, unsubscribeFromNotification, arginfo_qt_sql_qsqldriver_qsqldriver_unsubscribefromnotification, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlDriver_QSqlDriver, subscribedToNotifications, arginfo_qt_sql_qsqldriver_qsqldriver_subscribedtonotifications, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlDriver_QSqlDriver, isIdentifierEscaped, arginfo_qt_sql_qsqldriver_qsqldriver_isidentifierescaped, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlDriver_QSqlDriver, stripDelimiters, arginfo_qt_sql_qsqldriver_qsqldriver_stripdelimiters, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlDriver_QSqlDriver, setNumericalPrecisionPolicy, arginfo_qt_sql_qsqldriver_qsqldriver_setnumericalprecisionpolicy, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlDriver_QSqlDriver, numericalPrecisionPolicy, arginfo_qt_sql_qsqldriver_qsqldriver_numericalprecisionpolicy, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlDriver_QSqlDriver, dbmsType, arginfo_qt_sql_qsqldriver_qsqldriver_dbmstype, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlDriver_QSqlDriver, maximumIdentifierLength, arginfo_qt_sql_qsqldriver_qsqldriver_maximumidentifierlength, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlDriver_QSqlDriver, cancelQuery, arginfo_qt_sql_qsqldriver_qsqldriver_cancelquery, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlDriver_QSqlDriver, notification, arginfo_qt_sql_qsqldriver_qsqldriver_notification, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlDriver_QSqlDriver, setOpen, arginfo_qt_sql_qsqldriver_qsqldriver_setopen, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlDriver_QSqlDriver, setOpenError, arginfo_qt_sql_qsqldriver_qsqldriver_setopenerror, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlDriver_QSqlDriver, setLastError, arginfo_qt_sql_qsqldriver_qsqldriver_setlasterror, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
