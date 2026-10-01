
#ifdef HAVE_CONFIG_H
#include "../../../ext_config.h"
#endif

#include <php.h>
#include "../../../php_ext.h"
#include "../../../ext.h"

#include <Zend/zend_operators.h>
#include <Zend/zend_exceptions.h>
#include <Zend/zend_interfaces.h>

#include "kernel/main.h"
#include "src/sql-qsqldatabase.h"
#include "kernel/object.h"
#include "kernel/operators.h"
#include "kernel/memory.h"
#include "kernel/string.h"


ZEPHIR_INIT_CLASS(Qt_Sql_QSqlDatabase_QSqlDatabase)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Sql\\QSqlDatabase, QSqlDatabase, qt, sql_qsqldatabase_qsqldatabase, qt_sql_qsqldatabase_qsqldatabase_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Sql_QSqlDatabase_QSqlDatabase, staticMetaObject)
{

	RETURN_LONG(phpqt_qsqldatabase_static_meta_object());
}

PHP_METHOD(Qt_Sql_QSqlDatabase_QSqlDatabase, qt_check_for_QGADGET_macro)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qsqldatabase_qt_check_for__q_g_a_d_g_e_t_macro(&_0);
}

PHP_METHOD(Qt_Sql_QSqlDatabase_QSqlDatabase, new_)
{

	RETURN_LONG(phpqt_qsqldatabase_new());
}

PHP_METHOD(Qt_Sql_QSqlDatabase_QSqlDatabase, newQSqlDatabase)
{
	zval *other_param = NULL, _0;
	zend_long other;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(other)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &other_param);
	ZVAL_LONG(&_0, other);
	RETURN_LONG(phpqt_qsqldatabase_new_q_sql_database(&_0));
}

PHP_METHOD(Qt_Sql_QSqlDatabase_QSqlDatabase, open)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qsqldatabase_open(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Sql_QSqlDatabase_QSqlDatabase, openQStringQString)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval user, password;
	zval *handle_param = NULL, *user_param = NULL, *password_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&user);
	ZVAL_UNDEF(&password);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(user)
		Z_PARAM_STR(password)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 3, 0, &handle_param, &user_param, &password_param);
	zephir_get_strval(&user, user_param);
	zephir_get_strval(&password, password_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qsqldatabase_open_q_string_q_string(&_0, &user, &password);
	RETURN_MM_BOOL(r == 1);
}

PHP_METHOD(Qt_Sql_QSqlDatabase_QSqlDatabase, close)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qsqldatabase_close(&_0);
}

PHP_METHOD(Qt_Sql_QSqlDatabase_QSqlDatabase, isOpen)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qsqldatabase_is_open(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Sql_QSqlDatabase_QSqlDatabase, isOpenError)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qsqldatabase_is_open_error(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Sql_QSqlDatabase_QSqlDatabase, tables)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, *type = NULL, type_sub, __$null, result, _0;
	zend_long handle;

	ZVAL_UNDEF(&type_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(type)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 1, &handle_param, &type);
	if (!type) {
		type = &type_sub;
		type = &__$null;
	}
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	phpqt_qsqldatabase_tables(&result, &_0, type);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Sql_QSqlDatabase_QSqlDatabase, primaryIndex)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval tablename;
	zval *handle_param = NULL, *tablename_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&tablename);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(tablename)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &tablename_param);
	zephir_get_strval(&tablename, tablename_param);
	ZVAL_LONG(&_0, handle);
	RETURN_MM_LONG(phpqt_qsqldatabase_primary_index(&_0, &tablename));
}

PHP_METHOD(Qt_Sql_QSqlDatabase_QSqlDatabase, record)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval tablename;
	zval *handle_param = NULL, *tablename_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&tablename);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(tablename)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &tablename_param);
	zephir_get_strval(&tablename, tablename_param);
	ZVAL_LONG(&_0, handle);
	RETURN_MM_LONG(phpqt_qsqldatabase_record(&_0, &tablename));
}

PHP_METHOD(Qt_Sql_QSqlDatabase_QSqlDatabase, lastError)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qsqldatabase_last_error(&_0));
}

PHP_METHOD(Qt_Sql_QSqlDatabase_QSqlDatabase, isValid)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qsqldatabase_is_valid(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Sql_QSqlDatabase_QSqlDatabase, transaction)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qsqldatabase_transaction(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Sql_QSqlDatabase_QSqlDatabase, commit)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qsqldatabase_commit(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Sql_QSqlDatabase_QSqlDatabase, rollback)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qsqldatabase_rollback(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Sql_QSqlDatabase_QSqlDatabase, setDatabaseName)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval name;
	zval *handle_param = NULL, *name_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&name);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(name)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &name_param);
	zephir_get_strval(&name, name_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qsqldatabase_set_database_name(&_0, &name);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_Sql_QSqlDatabase_QSqlDatabase, setUserName)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval name;
	zval *handle_param = NULL, *name_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&name);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(name)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &name_param);
	zephir_get_strval(&name, name_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qsqldatabase_set_user_name(&_0, &name);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_Sql_QSqlDatabase_QSqlDatabase, setPassword)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval password;
	zval *handle_param = NULL, *password_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&password);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(password)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &password_param);
	zephir_get_strval(&password, password_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qsqldatabase_set_password(&_0, &password);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_Sql_QSqlDatabase_QSqlDatabase, setHostName)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval host;
	zval *handle_param = NULL, *host_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&host);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(host)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &host_param);
	zephir_get_strval(&host, host_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qsqldatabase_set_host_name(&_0, &host);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_Sql_QSqlDatabase_QSqlDatabase, setPort)
{
	zval *handle_param = NULL, *p_param = NULL, _0, _1;
	zend_long handle, p;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(p)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &p_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, p);
	phpqt_qsqldatabase_set_port(&_0, &_1);
}

PHP_METHOD(Qt_Sql_QSqlDatabase_QSqlDatabase, setConnectOptions)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval options;
	zval *handle_param = NULL, *options_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&options);
	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_OPTIONAL
		Z_PARAM_STR(options)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 1, &handle_param, &options_param);
	if (!options_param) {
		ZEPHIR_INIT_VAR(&options);
		ZVAL_STRING(&options, "");
	} else {
		zephir_get_strval(&options, options_param);
	}
	ZVAL_LONG(&_0, handle);
	phpqt_qsqldatabase_set_connect_options(&_0, &options);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_Sql_QSqlDatabase_QSqlDatabase, databaseName)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, result, _0;
	zend_long handle;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &handle_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	phpqt_qsqldatabase_database_name(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Sql_QSqlDatabase_QSqlDatabase, userName)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, result, _0;
	zend_long handle;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &handle_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	phpqt_qsqldatabase_user_name(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Sql_QSqlDatabase_QSqlDatabase, password)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, result, _0;
	zend_long handle;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &handle_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	phpqt_qsqldatabase_password(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Sql_QSqlDatabase_QSqlDatabase, hostName)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, result, _0;
	zend_long handle;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &handle_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	phpqt_qsqldatabase_host_name(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Sql_QSqlDatabase_QSqlDatabase, driverName)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, result, _0;
	zend_long handle;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &handle_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	phpqt_qsqldatabase_driver_name(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Sql_QSqlDatabase_QSqlDatabase, port)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qsqldatabase_port(&_0));
}

PHP_METHOD(Qt_Sql_QSqlDatabase_QSqlDatabase, connectOptions)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, result, _0;
	zend_long handle;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &handle_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	phpqt_qsqldatabase_connect_options(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Sql_QSqlDatabase_QSqlDatabase, connectionName)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, result, _0;
	zend_long handle;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &handle_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	phpqt_qsqldatabase_connection_name(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Sql_QSqlDatabase_QSqlDatabase, setNumericalPrecisionPolicy)
{
	zval *handle_param = NULL, *precisionPolicy_param = NULL, _0, _1;
	zend_long handle, precisionPolicy;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(precisionPolicy)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &precisionPolicy_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, precisionPolicy);
	phpqt_qsqldatabase_set_numerical_precision_policy(&_0, &_1);
}

PHP_METHOD(Qt_Sql_QSqlDatabase_QSqlDatabase, numericalPrecisionPolicy)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qsqldatabase_numerical_precision_policy(&_0));
}

PHP_METHOD(Qt_Sql_QSqlDatabase_QSqlDatabase, moveToThread)
{
	zval *handle_param = NULL, *targetThread_param = NULL, _0, _1;
	zend_long handle, targetThread, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(targetThread)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &targetThread_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, targetThread);
	r = phpqt_qsqldatabase_move_to_thread(&_0, &_1);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Sql_QSqlDatabase_QSqlDatabase, thread)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qsqldatabase_thread(&_0));
}

PHP_METHOD(Qt_Sql_QSqlDatabase_QSqlDatabase, driver)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qsqldatabase_driver(&_0));
}

PHP_METHOD(Qt_Sql_QSqlDatabase_QSqlDatabase, defaultConnection)
{
	zval result;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;

	ZVAL_UNDEF(&result);
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);

	ZEPHIR_INIT_VAR(&result);
	phpqt_qsqldatabase_default_connection(&result);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Sql_QSqlDatabase_QSqlDatabase, addDatabase)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *type_param = NULL, *connectionName = NULL, connectionName_sub, __$null;
	zval type;

	ZVAL_UNDEF(&type);
	ZVAL_UNDEF(&connectionName_sub);
	ZVAL_NULL(&__$null);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_STR(type)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(connectionName)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 1, &type_param, &connectionName);
	zephir_get_strval(&type, type_param);
	if (!connectionName) {
		connectionName = &connectionName_sub;
		connectionName = &__$null;
	}
	RETURN_MM_LONG(phpqt_qsqldatabase_add_database(&type, connectionName));
}

PHP_METHOD(Qt_Sql_QSqlDatabase_QSqlDatabase, addDatabaseQSqlDriverQString)
{
	zval *driver_param = NULL, *connectionName = NULL, connectionName_sub, __$null, _0;
	zend_long driver;

	ZVAL_UNDEF(&connectionName_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_LONG(driver)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(connectionName)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 1, &driver_param, &connectionName);
	if (!connectionName) {
		connectionName = &connectionName_sub;
		connectionName = &__$null;
	}
	ZVAL_LONG(&_0, driver);
	RETURN_LONG(phpqt_qsqldatabase_add_database_q_sql_driver_q_string(&_0, connectionName));
}

PHP_METHOD(Qt_Sql_QSqlDatabase_QSqlDatabase, cloneDatabase)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval connectionName;
	zval *other_param = NULL, *connectionName_param = NULL, _0;
	zend_long other;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&connectionName);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(other)
		Z_PARAM_STR(connectionName)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &other_param, &connectionName_param);
	zephir_get_strval(&connectionName, connectionName_param);
	ZVAL_LONG(&_0, other);
	RETURN_MM_LONG(phpqt_qsqldatabase_clone_database(&_0, &connectionName));
}

PHP_METHOD(Qt_Sql_QSqlDatabase_QSqlDatabase, cloneDatabaseQStringQString)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *other_param = NULL, *connectionName_param = NULL;
	zval other, connectionName;

	ZVAL_UNDEF(&other);
	ZVAL_UNDEF(&connectionName);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_STR(other)
		Z_PARAM_STR(connectionName)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &other_param, &connectionName_param);
	zephir_get_strval(&other, other_param);
	zephir_get_strval(&connectionName, connectionName_param);
	RETURN_MM_LONG(phpqt_qsqldatabase_clone_database_q_string_q_string(&other, &connectionName));
}

PHP_METHOD(Qt_Sql_QSqlDatabase_QSqlDatabase, database)
{
	zend_bool open;
	zval *connectionName = NULL, connectionName_sub, *open_param = NULL, __$null, _0;

	ZVAL_UNDEF(&connectionName_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(0, 2)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(connectionName)
		Z_PARAM_BOOL(open)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(0, 2, &connectionName, &open_param);
	if (!connectionName) {
		connectionName = &connectionName_sub;
		connectionName = &__$null;
	}
	if (!open_param) {
		open = 1;
	} else {
		}
	ZVAL_BOOL(&_0, (open ? 1 : 0));
	RETURN_LONG(phpqt_qsqldatabase_database(connectionName, &_0));
}

PHP_METHOD(Qt_Sql_QSqlDatabase_QSqlDatabase, removeDatabase)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *connectionName_param = NULL;
	zval connectionName;

	ZVAL_UNDEF(&connectionName);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_STR(connectionName)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &connectionName_param);
	zephir_get_strval(&connectionName, connectionName_param);
	phpqt_qsqldatabase_remove_database(&connectionName);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_Sql_QSqlDatabase_QSqlDatabase, contains)
{
	zend_long r = 0;
	zval *connectionName = NULL, connectionName_sub, __$null;

	ZVAL_UNDEF(&connectionName_sub);
	ZVAL_NULL(&__$null);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(0, 1)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(connectionName)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(0, 1, &connectionName);
	if (!connectionName) {
		connectionName = &connectionName_sub;
		connectionName = &__$null;
	}
	r = phpqt_qsqldatabase_contains(connectionName);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Sql_QSqlDatabase_QSqlDatabase, drivers)
{
	zval result;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;

	ZVAL_UNDEF(&result);
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);

	ZEPHIR_INIT_VAR(&result);
	phpqt_qsqldatabase_drivers(&result);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Sql_QSqlDatabase_QSqlDatabase, connectionNames)
{
	zval result;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;

	ZVAL_UNDEF(&result);
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);

	ZEPHIR_INIT_VAR(&result);
	phpqt_qsqldatabase_connection_names(&result);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Sql_QSqlDatabase_QSqlDatabase, registerSqlDriver)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long creator;
	zval *name_param = NULL, *creator_param = NULL, _0;
	zval name;

	ZVAL_UNDEF(&name);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_STR(name)
		Z_PARAM_LONG(creator)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &name_param, &creator_param);
	zephir_get_strval(&name, name_param);
	ZVAL_LONG(&_0, creator);
	phpqt_qsqldatabase_register_sql_driver(&name, &_0);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_Sql_QSqlDatabase_QSqlDatabase, isDriverAvailable)
{
	zend_long r = 0;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *name_param = NULL;
	zval name;

	ZVAL_UNDEF(&name);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_STR(name)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &name_param);
	zephir_get_strval(&name, name_param);
	r = phpqt_qsqldatabase_is_driver_available(&name);
	RETURN_MM_BOOL(r == 1);
}

