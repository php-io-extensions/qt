
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
#include "src/sql-qsqlrelationaltablemodel.h"
#include "kernel/object.h"
#include "kernel/string.h"
#include "kernel/memory.h"
#include "kernel/operators.h"


ZEPHIR_INIT_CLASS(Qt_Sql_QSqlRelationalTableModel_QSqlRelationalTableModel)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Sql\\QSqlRelationalTableModel, QSqlRelationalTableModel, qt, sql_qsqlrelationaltablemodel_qsqlrelationaltablemodel, qt_sql_qsqlrelationaltablemodel_qsqlrelationaltablemodel_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Sql_QSqlRelationalTableModel_QSqlRelationalTableModel, staticMetaObject)
{

	RETURN_LONG(phpqt_qsqlrelationaltablemodel_static_meta_object());
}

PHP_METHOD(Qt_Sql_QSqlRelationalTableModel_QSqlRelationalTableModel, tr)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long n;
	zval *s = NULL, s_sub, *c = NULL, c_sub, *n_param = NULL, __$null, result, _0;

	ZVAL_UNDEF(&s_sub);
	ZVAL_UNDEF(&c_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(1, 3)
		Z_PARAM_ZVAL(s)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(c)
		Z_PARAM_LONG(n)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 2, &s, &c, &n_param);
	if (!c) {
		c = &c_sub;
		c = &__$null;
	}
	if (!n_param) {
		n = -1;
	} else {
		}
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, n);
	phpqt_qsqlrelationaltablemodel_tr(&result, s, c, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Sql_QSqlRelationalTableModel_QSqlRelationalTableModel, new_)
{
	zval *parent__param = NULL, *db = NULL, db_sub, __$null, _0;
	zend_long parent_;

	ZVAL_UNDEF(&db_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(0, 2)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(parent_)
		Z_PARAM_ZVAL_OR_NULL(db)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(0, 2, &parent__param, &db);
	if (!parent__param) {
		parent_ = 0;
	} else {
		}
	if (!db) {
		db = &db_sub;
		db = &__$null;
	}
	ZVAL_LONG(&_0, parent_);
	RETURN_LONG(phpqt_qsqlrelationaltablemodel_new(&_0, db));
}

PHP_METHOD(Qt_Sql_QSqlRelationalTableModel_QSqlRelationalTableModel, data)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, *item_param = NULL, *role = NULL, role_sub, __$null, result, _0, _1;
	zend_long handle, item;

	ZVAL_UNDEF(&role_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(2, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(item)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(role)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 1, &handle_param, &item_param, &role);
	if (!role) {
		role = &role_sub;
		role = &__$null;
	}
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, item);
	phpqt_qsqlrelationaltablemodel_data(&result, &_0, &_1, role);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Sql_QSqlRelationalTableModel_QSqlRelationalTableModel, setData)
{
	zval *handle_param = NULL, *item_param = NULL, *value = NULL, value_sub, *role = NULL, role_sub, __$null, _0, _1;
	zend_long handle, item, r = 0;

	ZVAL_UNDEF(&value_sub);
	ZVAL_UNDEF(&role_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(3, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(item)
		Z_PARAM_ZVAL(value)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(role)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 1, &handle_param, &item_param, &value, &role);
	if (!role) {
		role = &role_sub;
		role = &__$null;
	}
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, item);
	r = phpqt_qsqlrelationaltablemodel_set_data(&_0, &_1, value, role);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Sql_QSqlRelationalTableModel_QSqlRelationalTableModel, removeColumns)
{
	zval *handle_param = NULL, *column_param = NULL, *count_param = NULL, *parent_ = NULL, parent__sub, __$null, _0, _1, _2;
	zend_long handle, column, count, r = 0;

	ZVAL_UNDEF(&parent__sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(3, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(column)
		Z_PARAM_LONG(count)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(parent_)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 1, &handle_param, &column_param, &count_param, &parent_);
	if (!parent_) {
		parent_ = &parent__sub;
		parent_ = &__$null;
	}
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, column);
	ZVAL_LONG(&_2, count);
	r = phpqt_qsqlrelationaltablemodel_remove_columns(&_0, &_1, &_2, parent_);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Sql_QSqlRelationalTableModel_QSqlRelationalTableModel, clear)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qsqlrelationaltablemodel_clear(&_0);
}

PHP_METHOD(Qt_Sql_QSqlRelationalTableModel_QSqlRelationalTableModel, select)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qsqlrelationaltablemodel_select(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Sql_QSqlRelationalTableModel_QSqlRelationalTableModel, setTable)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval tableName;
	zval *handle_param = NULL, *tableName_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&tableName);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(tableName)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &tableName_param);
	zephir_get_strval(&tableName, tableName_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qsqlrelationaltablemodel_set_table(&_0, &tableName);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_Sql_QSqlRelationalTableModel_QSqlRelationalTableModel, setRelation)
{
	zval *handle_param = NULL, *column_param = NULL, *relation_param = NULL, _0, _1, _2;
	zend_long handle, column, relation;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(column)
		Z_PARAM_LONG(relation)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &column_param, &relation_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, column);
	ZVAL_LONG(&_2, relation);
	phpqt_qsqlrelationaltablemodel_set_relation(&_0, &_1, &_2);
}

PHP_METHOD(Qt_Sql_QSqlRelationalTableModel_QSqlRelationalTableModel, relation)
{
	zval *handle_param = NULL, *column_param = NULL, _0, _1;
	zend_long handle, column;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(column)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &column_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, column);
	RETURN_LONG(phpqt_qsqlrelationaltablemodel_relation(&_0, &_1));
}

PHP_METHOD(Qt_Sql_QSqlRelationalTableModel_QSqlRelationalTableModel, relationModel)
{
	zval *handle_param = NULL, *column_param = NULL, _0, _1;
	zend_long handle, column;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(column)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &column_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, column);
	RETURN_LONG(phpqt_qsqlrelationaltablemodel_relation_model(&_0, &_1));
}

PHP_METHOD(Qt_Sql_QSqlRelationalTableModel_QSqlRelationalTableModel, setJoinMode)
{
	zval *handle_param = NULL, *joinMode_param = NULL, _0, _1;
	zend_long handle, joinMode;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(joinMode)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &joinMode_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, joinMode);
	phpqt_qsqlrelationaltablemodel_set_join_mode(&_0, &_1);
}

PHP_METHOD(Qt_Sql_QSqlRelationalTableModel_QSqlRelationalTableModel, revertRow)
{
	zval *handle_param = NULL, *row_param = NULL, _0, _1;
	zend_long handle, row;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(row)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &row_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, row);
	phpqt_qsqlrelationaltablemodel_revert_row(&_0, &_1);
}

PHP_METHOD(Qt_Sql_QSqlRelationalTableModel_QSqlRelationalTableModel, selectStatement)
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
	phpqt_qsqlrelationaltablemodel_select_statement(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Sql_QSqlRelationalTableModel_QSqlRelationalTableModel, updateRowInTable)
{
	zval *handle_param = NULL, *row_param = NULL, *values_param = NULL, _0, _1, _2;
	zend_long handle, row, values, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(row)
		Z_PARAM_LONG(values)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &row_param, &values_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, row);
	ZVAL_LONG(&_2, values);
	r = phpqt_qsqlrelationaltablemodel_update_row_in_table(&_0, &_1, &_2);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Sql_QSqlRelationalTableModel_QSqlRelationalTableModel, insertRowIntoTable)
{
	zval *handle_param = NULL, *values_param = NULL, _0, _1;
	zend_long handle, values, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(values)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &values_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, values);
	r = phpqt_qsqlrelationaltablemodel_insert_row_into_table(&_0, &_1);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Sql_QSqlRelationalTableModel_QSqlRelationalTableModel, orderByClause)
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
	phpqt_qsqlrelationaltablemodel_order_by_clause(&result, &_0);
	RETURN_CCTOR(&result);
}

