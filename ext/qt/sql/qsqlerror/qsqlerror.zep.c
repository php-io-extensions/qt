
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
#include "src/sql-qsqlerror.h"
#include "kernel/memory.h"
#include "kernel/operators.h"
#include "kernel/object.h"
#include "kernel/string.h"


ZEPHIR_INIT_CLASS(Qt_Sql_QSqlError_QSqlError)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Sql\\QSqlError, QSqlError, qt, sql_qsqlerror_qsqlerror, qt_sql_qsqlerror_qsqlerror_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Sql_QSqlError_QSqlError, new_)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *driverText_param = NULL, *databaseText_param = NULL, *type = NULL, type_sub, *errorCode_param = NULL, __$null;
	zval driverText, databaseText, errorCode;

	ZVAL_UNDEF(&driverText);
	ZVAL_UNDEF(&databaseText);
	ZVAL_UNDEF(&errorCode);
	ZVAL_UNDEF(&type_sub);
	ZVAL_NULL(&__$null);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(0, 4)
		Z_PARAM_OPTIONAL
		Z_PARAM_STR(driverText)
		Z_PARAM_STR(databaseText)
		Z_PARAM_ZVAL_OR_NULL(type)
		Z_PARAM_STR(errorCode)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 0, 4, &driverText_param, &databaseText_param, &type, &errorCode_param);
	if (!driverText_param) {
		ZEPHIR_INIT_VAR(&driverText);
		ZVAL_STRING(&driverText, "");
	} else {
		zephir_get_strval(&driverText, driverText_param);
	}
	if (!databaseText_param) {
		ZEPHIR_INIT_VAR(&databaseText);
		ZVAL_STRING(&databaseText, "");
	} else {
		zephir_get_strval(&databaseText, databaseText_param);
	}
	if (!type) {
		type = &type_sub;
		type = &__$null;
	}
	if (!errorCode_param) {
		ZEPHIR_INIT_VAR(&errorCode);
		ZVAL_STRING(&errorCode, "");
	} else {
		zephir_get_strval(&errorCode, errorCode_param);
	}
	RETURN_MM_LONG(phpqt_qsqlerror_new(&driverText, &databaseText, type, &errorCode));
}

PHP_METHOD(Qt_Sql_QSqlError_QSqlError, newQSqlError)
{
	zval *other_param = NULL, _0;
	zend_long other;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(other)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &other_param);
	ZVAL_LONG(&_0, other);
	RETURN_LONG(phpqt_qsqlerror_new_q_sql_error(&_0));
}

PHP_METHOD(Qt_Sql_QSqlError_QSqlError, swap)
{
	zval *handle_param = NULL, *other_param = NULL, _0, _1;
	zend_long handle, other;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(other)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &other_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, other);
	phpqt_qsqlerror_swap(&_0, &_1);
}

PHP_METHOD(Qt_Sql_QSqlError_QSqlError, driverText)
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
	phpqt_qsqlerror_driver_text(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Sql_QSqlError_QSqlError, databaseText)
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
	phpqt_qsqlerror_database_text(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Sql_QSqlError_QSqlError, type)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qsqlerror_type(&_0));
}

PHP_METHOD(Qt_Sql_QSqlError_QSqlError, nativeErrorCode)
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
	phpqt_qsqlerror_native_error_code(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Sql_QSqlError_QSqlError, text)
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
	phpqt_qsqlerror_text(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Sql_QSqlError_QSqlError, isValid)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qsqlerror_is_valid(&_0);
	RETURN_BOOL(r == 1);
}

