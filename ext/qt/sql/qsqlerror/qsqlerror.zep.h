
extern zend_class_entry *qt_sql_qsqlerror_qsqlerror_ce;

ZEPHIR_INIT_CLASS(Qt_Sql_QSqlError_QSqlError);

PHP_METHOD(Qt_Sql_QSqlError_QSqlError, new_);
PHP_METHOD(Qt_Sql_QSqlError_QSqlError, newQSqlError);
PHP_METHOD(Qt_Sql_QSqlError_QSqlError, swap);
PHP_METHOD(Qt_Sql_QSqlError_QSqlError, driverText);
PHP_METHOD(Qt_Sql_QSqlError_QSqlError, databaseText);
PHP_METHOD(Qt_Sql_QSqlError_QSqlError, type);
PHP_METHOD(Qt_Sql_QSqlError_QSqlError, nativeErrorCode);
PHP_METHOD(Qt_Sql_QSqlError_QSqlError, text);
PHP_METHOD(Qt_Sql_QSqlError_QSqlError, isValid);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqlerror_qsqlerror_new_, 0, 0, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, driverText, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, databaseText, IS_STRING, 0)
	ZEND_ARG_INFO(0, type)
	ZEND_ARG_TYPE_INFO(0, errorCode, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqlerror_qsqlerror_newqsqlerror, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, other, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqlerror_qsqlerror_swap, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, other, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqlerror_qsqlerror_drivertext, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqlerror_qsqlerror_databasetext, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqlerror_qsqlerror_type, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqlerror_qsqlerror_nativeerrorcode, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqlerror_qsqlerror_text, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqlerror_qsqlerror_isvalid, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_sql_qsqlerror_qsqlerror_method_entry) {
	PHP_ME(Qt_Sql_QSqlError_QSqlError, new_, arginfo_qt_sql_qsqlerror_qsqlerror_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlError_QSqlError, newQSqlError, arginfo_qt_sql_qsqlerror_qsqlerror_newqsqlerror, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlError_QSqlError, swap, arginfo_qt_sql_qsqlerror_qsqlerror_swap, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlError_QSqlError, driverText, arginfo_qt_sql_qsqlerror_qsqlerror_drivertext, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlError_QSqlError, databaseText, arginfo_qt_sql_qsqlerror_qsqlerror_databasetext, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlError_QSqlError, type, arginfo_qt_sql_qsqlerror_qsqlerror_type, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlError_QSqlError, nativeErrorCode, arginfo_qt_sql_qsqlerror_qsqlerror_nativeerrorcode, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlError_QSqlError, text, arginfo_qt_sql_qsqlerror_qsqlerror_text, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlError_QSqlError, isValid, arginfo_qt_sql_qsqlerror_qsqlerror_isvalid, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
