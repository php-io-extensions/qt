
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
#include "src/sql-qsqlindex.h"
#include "kernel/object.h"
#include "kernel/operators.h"
#include "kernel/memory.h"
#include "kernel/string.h"


ZEPHIR_INIT_CLASS(Qt_Sql_QSqlIndex_QSqlIndex)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Sql\\QSqlIndex, QSqlIndex, qt, sql_qsqlindex_qsqlindex, qt_sql_qsqlindex_qsqlindex_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Sql_QSqlIndex_QSqlIndex, staticMetaObject)
{

	RETURN_LONG(phpqt_qsqlindex_static_meta_object());
}

PHP_METHOD(Qt_Sql_QSqlIndex_QSqlIndex, qt_check_for_QGADGET_macro)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qsqlindex_qt_check_for__q_g_a_d_g_e_t_macro(&_0);
}

PHP_METHOD(Qt_Sql_QSqlIndex_QSqlIndex, new_)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *cursorName_param = NULL, *name_param = NULL;
	zval cursorName, name;

	ZVAL_UNDEF(&cursorName);
	ZVAL_UNDEF(&name);
	ZEND_PARSE_PARAMETERS_START(0, 2)
		Z_PARAM_OPTIONAL
		Z_PARAM_STR(cursorName)
		Z_PARAM_STR(name)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 0, 2, &cursorName_param, &name_param);
	if (!cursorName_param) {
		ZEPHIR_INIT_VAR(&cursorName);
		ZVAL_STRING(&cursorName, "");
	} else {
		zephir_get_strval(&cursorName, cursorName_param);
	}
	if (!name_param) {
		ZEPHIR_INIT_VAR(&name);
		ZVAL_STRING(&name, "");
	} else {
		zephir_get_strval(&name, name_param);
	}
	RETURN_MM_LONG(phpqt_qsqlindex_new(&cursorName, &name));
}

PHP_METHOD(Qt_Sql_QSqlIndex_QSqlIndex, newQSqlIndex)
{
	zval *other_param = NULL, _0;
	zend_long other;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(other)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &other_param);
	ZVAL_LONG(&_0, other);
	RETURN_LONG(phpqt_qsqlindex_new_q_sql_index(&_0));
}

PHP_METHOD(Qt_Sql_QSqlIndex_QSqlIndex, swap)
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
	phpqt_qsqlindex_swap(&_0, &_1);
}

PHP_METHOD(Qt_Sql_QSqlIndex_QSqlIndex, setCursorName)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval cursorName;
	zval *handle_param = NULL, *cursorName_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&cursorName);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(cursorName)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &cursorName_param);
	zephir_get_strval(&cursorName, cursorName_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qsqlindex_set_cursor_name(&_0, &cursorName);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_Sql_QSqlIndex_QSqlIndex, cursorName)
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
	phpqt_qsqlindex_cursor_name(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Sql_QSqlIndex_QSqlIndex, setName)
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
	phpqt_qsqlindex_set_name(&_0, &name);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_Sql_QSqlIndex_QSqlIndex, name)
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
	phpqt_qsqlindex_name(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Sql_QSqlIndex_QSqlIndex, append)
{
	zval *handle_param = NULL, *field_param = NULL, _0, _1;
	zend_long handle, field;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(field)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &field_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, field);
	phpqt_qsqlindex_append(&_0, &_1);
}

PHP_METHOD(Qt_Sql_QSqlIndex_QSqlIndex, appendQSqlFieldBool)
{
	zend_bool desc;
	zval *handle_param = NULL, *field_param = NULL, *desc_param = NULL, _0, _1, _2;
	zend_long handle, field;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(field)
		Z_PARAM_BOOL(desc)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &field_param, &desc_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, field);
	ZVAL_BOOL(&_2, (desc ? 1 : 0));
	phpqt_qsqlindex_append_q_sql_field_bool(&_0, &_1, &_2);
}

PHP_METHOD(Qt_Sql_QSqlIndex_QSqlIndex, isDescending)
{
	zval *handle_param = NULL, *i_param = NULL, _0, _1;
	zend_long handle, i, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(i)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &i_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, i);
	r = phpqt_qsqlindex_is_descending(&_0, &_1);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Sql_QSqlIndex_QSqlIndex, setDescending)
{
	zend_bool desc;
	zval *handle_param = NULL, *i_param = NULL, *desc_param = NULL, _0, _1, _2;
	zend_long handle, i;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(i)
		Z_PARAM_BOOL(desc)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &i_param, &desc_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, i);
	ZVAL_BOOL(&_2, (desc ? 1 : 0));
	phpqt_qsqlindex_set_descending(&_0, &_1, &_2);
}

