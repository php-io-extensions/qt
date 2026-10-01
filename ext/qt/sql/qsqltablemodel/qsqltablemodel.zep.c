
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
#include "src/sql-qsqltablemodel.h"
#include "kernel/object.h"
#include "kernel/string.h"
#include "kernel/memory.h"
#include "kernel/operators.h"


ZEPHIR_INIT_CLASS(Qt_Sql_QSqlTableModel_QSqlTableModel)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Sql\\QSqlTableModel, QSqlTableModel, qt, sql_qsqltablemodel_qsqltablemodel, qt_sql_qsqltablemodel_qsqltablemodel_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Sql_QSqlTableModel_QSqlTableModel, staticMetaObject)
{

	RETURN_LONG(phpqt_qsqltablemodel_static_meta_object());
}

PHP_METHOD(Qt_Sql_QSqlTableModel_QSqlTableModel, tr)
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
	phpqt_qsqltablemodel_tr(&result, s, c, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Sql_QSqlTableModel_QSqlTableModel, new_)
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
	RETURN_LONG(phpqt_qsqltablemodel_new(&_0, db));
}

PHP_METHOD(Qt_Sql_QSqlTableModel_QSqlTableModel, setTable)
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
	phpqt_qsqltablemodel_set_table(&_0, &tableName);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_Sql_QSqlTableModel_QSqlTableModel, tableName)
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
	phpqt_qsqltablemodel_table_name(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Sql_QSqlTableModel_QSqlTableModel, flags)
{
	zval *handle_param = NULL, *index_param = NULL, _0, _1;
	zend_long handle, index;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(index)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &index_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, index);
	RETURN_LONG(phpqt_qsqltablemodel_flags(&_0, &_1));
}

PHP_METHOD(Qt_Sql_QSqlTableModel_QSqlTableModel, record)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qsqltablemodel_record(&_0));
}

PHP_METHOD(Qt_Sql_QSqlTableModel_QSqlTableModel, recordInt)
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
	RETURN_LONG(phpqt_qsqltablemodel_record_int(&_0, &_1));
}

PHP_METHOD(Qt_Sql_QSqlTableModel_QSqlTableModel, data)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, *idx_param = NULL, *role = NULL, role_sub, __$null, result, _0, _1;
	zend_long handle, idx;

	ZVAL_UNDEF(&role_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(2, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(idx)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(role)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 1, &handle_param, &idx_param, &role);
	if (!role) {
		role = &role_sub;
		role = &__$null;
	}
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, idx);
	phpqt_qsqltablemodel_data(&result, &_0, &_1, role);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Sql_QSqlTableModel_QSqlTableModel, setData)
{
	zval *handle_param = NULL, *index_param = NULL, *value = NULL, value_sub, *role = NULL, role_sub, __$null, _0, _1;
	zend_long handle, index, r = 0;

	ZVAL_UNDEF(&value_sub);
	ZVAL_UNDEF(&role_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(3, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(index)
		Z_PARAM_ZVAL(value)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(role)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 1, &handle_param, &index_param, &value, &role);
	if (!role) {
		role = &role_sub;
		role = &__$null;
	}
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, index);
	r = phpqt_qsqltablemodel_set_data(&_0, &_1, value, role);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Sql_QSqlTableModel_QSqlTableModel, clearItemData)
{
	zval *handle_param = NULL, *index_param = NULL, _0, _1;
	zend_long handle, index, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(index)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &index_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, index);
	r = phpqt_qsqltablemodel_clear_item_data(&_0, &_1);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Sql_QSqlTableModel_QSqlTableModel, headerData)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, *section_param = NULL, *orientation_param = NULL, *role = NULL, role_sub, __$null, result, _0, _1, _2;
	zend_long handle, section, orientation;

	ZVAL_UNDEF(&role_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(3, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(section)
		Z_PARAM_LONG(orientation)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(role)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 3, 1, &handle_param, &section_param, &orientation_param, &role);
	if (!role) {
		role = &role_sub;
		role = &__$null;
	}
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, section);
	ZVAL_LONG(&_2, orientation);
	phpqt_qsqltablemodel_header_data(&result, &_0, &_1, &_2, role);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Sql_QSqlTableModel_QSqlTableModel, isDirty)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qsqltablemodel_is_dirty(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Sql_QSqlTableModel_QSqlTableModel, isDirtyQModelIndex)
{
	zval *handle_param = NULL, *index_param = NULL, _0, _1;
	zend_long handle, index, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(index)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &index_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, index);
	r = phpqt_qsqltablemodel_is_dirty_q_model_index(&_0, &_1);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Sql_QSqlTableModel_QSqlTableModel, clear)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qsqltablemodel_clear(&_0);
}

PHP_METHOD(Qt_Sql_QSqlTableModel_QSqlTableModel, setEditStrategy)
{
	zval *handle_param = NULL, *strategy_param = NULL, _0, _1;
	zend_long handle, strategy;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(strategy)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &strategy_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, strategy);
	phpqt_qsqltablemodel_set_edit_strategy(&_0, &_1);
}

PHP_METHOD(Qt_Sql_QSqlTableModel_QSqlTableModel, editStrategy)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qsqltablemodel_edit_strategy(&_0));
}

PHP_METHOD(Qt_Sql_QSqlTableModel_QSqlTableModel, primaryKey)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qsqltablemodel_primary_key(&_0));
}

PHP_METHOD(Qt_Sql_QSqlTableModel_QSqlTableModel, database)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qsqltablemodel_database(&_0));
}

PHP_METHOD(Qt_Sql_QSqlTableModel_QSqlTableModel, fieldIndex)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval fieldName;
	zval *handle_param = NULL, *fieldName_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&fieldName);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(fieldName)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &fieldName_param);
	zephir_get_strval(&fieldName, fieldName_param);
	ZVAL_LONG(&_0, handle);
	RETURN_MM_LONG(phpqt_qsqltablemodel_field_index(&_0, &fieldName));
}

PHP_METHOD(Qt_Sql_QSqlTableModel_QSqlTableModel, sort)
{
	zval *handle_param = NULL, *column_param = NULL, *order_param = NULL, _0, _1, _2;
	zend_long handle, column, order;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(column)
		Z_PARAM_LONG(order)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &column_param, &order_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, column);
	ZVAL_LONG(&_2, order);
	phpqt_qsqltablemodel_sort(&_0, &_1, &_2);
}

PHP_METHOD(Qt_Sql_QSqlTableModel_QSqlTableModel, setSort)
{
	zval *handle_param = NULL, *column_param = NULL, *order_param = NULL, _0, _1, _2;
	zend_long handle, column, order;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(column)
		Z_PARAM_LONG(order)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &column_param, &order_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, column);
	ZVAL_LONG(&_2, order);
	phpqt_qsqltablemodel_set_sort(&_0, &_1, &_2);
}

PHP_METHOD(Qt_Sql_QSqlTableModel_QSqlTableModel, filter)
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
	phpqt_qsqltablemodel_filter(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Sql_QSqlTableModel_QSqlTableModel, setFilter)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval filter;
	zval *handle_param = NULL, *filter_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&filter);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(filter)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &filter_param);
	zephir_get_strval(&filter, filter_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qsqltablemodel_set_filter(&_0, &filter);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_Sql_QSqlTableModel_QSqlTableModel, rowCount)
{
	zval *handle_param = NULL, *parent_ = NULL, parent__sub, __$null, _0;
	zend_long handle;

	ZVAL_UNDEF(&parent__sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(parent_)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 1, &handle_param, &parent_);
	if (!parent_) {
		parent_ = &parent__sub;
		parent_ = &__$null;
	}
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qsqltablemodel_row_count(&_0, parent_));
}

PHP_METHOD(Qt_Sql_QSqlTableModel_QSqlTableModel, removeColumns)
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
	r = phpqt_qsqltablemodel_remove_columns(&_0, &_1, &_2, parent_);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Sql_QSqlTableModel_QSqlTableModel, removeRows)
{
	zval *handle_param = NULL, *row_param = NULL, *count_param = NULL, *parent_ = NULL, parent__sub, __$null, _0, _1, _2;
	zend_long handle, row, count, r = 0;

	ZVAL_UNDEF(&parent__sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(3, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(row)
		Z_PARAM_LONG(count)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(parent_)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 1, &handle_param, &row_param, &count_param, &parent_);
	if (!parent_) {
		parent_ = &parent__sub;
		parent_ = &__$null;
	}
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, row);
	ZVAL_LONG(&_2, count);
	r = phpqt_qsqltablemodel_remove_rows(&_0, &_1, &_2, parent_);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Sql_QSqlTableModel_QSqlTableModel, insertRows)
{
	zval *handle_param = NULL, *row_param = NULL, *count_param = NULL, *parent_ = NULL, parent__sub, __$null, _0, _1, _2;
	zend_long handle, row, count, r = 0;

	ZVAL_UNDEF(&parent__sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(3, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(row)
		Z_PARAM_LONG(count)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(parent_)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 1, &handle_param, &row_param, &count_param, &parent_);
	if (!parent_) {
		parent_ = &parent__sub;
		parent_ = &__$null;
	}
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, row);
	ZVAL_LONG(&_2, count);
	r = phpqt_qsqltablemodel_insert_rows(&_0, &_1, &_2, parent_);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Sql_QSqlTableModel_QSqlTableModel, insertRecord)
{
	zval *handle_param = NULL, *row_param = NULL, *record_param = NULL, _0, _1, _2;
	zend_long handle, row, record, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(row)
		Z_PARAM_LONG(record)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &row_param, &record_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, row);
	ZVAL_LONG(&_2, record);
	r = phpqt_qsqltablemodel_insert_record(&_0, &_1, &_2);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Sql_QSqlTableModel_QSqlTableModel, setRecord)
{
	zval *handle_param = NULL, *row_param = NULL, *record_param = NULL, _0, _1, _2;
	zend_long handle, row, record, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(row)
		Z_PARAM_LONG(record)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &row_param, &record_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, row);
	ZVAL_LONG(&_2, record);
	r = phpqt_qsqltablemodel_set_record(&_0, &_1, &_2);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Sql_QSqlTableModel_QSqlTableModel, revertRow)
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
	phpqt_qsqltablemodel_revert_row(&_0, &_1);
}

PHP_METHOD(Qt_Sql_QSqlTableModel_QSqlTableModel, select)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qsqltablemodel_select(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Sql_QSqlTableModel_QSqlTableModel, selectRow)
{
	zval *handle_param = NULL, *row_param = NULL, _0, _1;
	zend_long handle, row, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(row)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &row_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, row);
	r = phpqt_qsqltablemodel_select_row(&_0, &_1);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Sql_QSqlTableModel_QSqlTableModel, submit)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qsqltablemodel_submit(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Sql_QSqlTableModel_QSqlTableModel, revert)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qsqltablemodel_revert(&_0);
}

PHP_METHOD(Qt_Sql_QSqlTableModel_QSqlTableModel, submitAll)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qsqltablemodel_submit_all(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Sql_QSqlTableModel_QSqlTableModel, revertAll)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qsqltablemodel_revert_all(&_0);
}

PHP_METHOD(Qt_Sql_QSqlTableModel_QSqlTableModel, primeInsert)
{
	zval *handle_param = NULL, *row_param = NULL, *record_param = NULL, _0, _1, _2;
	zend_long handle, row, record;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(row)
		Z_PARAM_LONG(record)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &row_param, &record_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, row);
	ZVAL_LONG(&_2, record);
	phpqt_qsqltablemodel_prime_insert(&_0, &_1, &_2);
}

PHP_METHOD(Qt_Sql_QSqlTableModel_QSqlTableModel, beforeInsert)
{
	zval *handle_param = NULL, *record_param = NULL, _0, _1;
	zend_long handle, record;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(record)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &record_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, record);
	phpqt_qsqltablemodel_before_insert(&_0, &_1);
}

PHP_METHOD(Qt_Sql_QSqlTableModel_QSqlTableModel, beforeUpdate)
{
	zval *handle_param = NULL, *row_param = NULL, *record_param = NULL, _0, _1, _2;
	zend_long handle, row, record;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(row)
		Z_PARAM_LONG(record)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &row_param, &record_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, row);
	ZVAL_LONG(&_2, record);
	phpqt_qsqltablemodel_before_update(&_0, &_1, &_2);
}

PHP_METHOD(Qt_Sql_QSqlTableModel_QSqlTableModel, beforeDelete)
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
	phpqt_qsqltablemodel_before_delete(&_0, &_1);
}

PHP_METHOD(Qt_Sql_QSqlTableModel_QSqlTableModel, updateRowInTable)
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
	r = phpqt_qsqltablemodel_update_row_in_table(&_0, &_1, &_2);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Sql_QSqlTableModel_QSqlTableModel, insertRowIntoTable)
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
	r = phpqt_qsqltablemodel_insert_row_into_table(&_0, &_1);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Sql_QSqlTableModel_QSqlTableModel, deleteRowFromTable)
{
	zval *handle_param = NULL, *row_param = NULL, _0, _1;
	zend_long handle, row, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(row)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &row_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, row);
	r = phpqt_qsqltablemodel_delete_row_from_table(&_0, &_1);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Sql_QSqlTableModel_QSqlTableModel, orderByClause)
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
	phpqt_qsqltablemodel_order_by_clause(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Sql_QSqlTableModel_QSqlTableModel, selectStatement)
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
	phpqt_qsqltablemodel_select_statement(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Sql_QSqlTableModel_QSqlTableModel, setPrimaryKey)
{
	zval *handle_param = NULL, *key_param = NULL, _0, _1;
	zend_long handle, key;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(key)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &key_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, key);
	phpqt_qsqltablemodel_set_primary_key(&_0, &_1);
}

PHP_METHOD(Qt_Sql_QSqlTableModel_QSqlTableModel, indexInQuery)
{
	zval *handle_param = NULL, *item_param = NULL, _0, _1;
	zend_long handle, item;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(item)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &item_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, item);
	RETURN_LONG(phpqt_qsqltablemodel_index_in_query(&_0, &_1));
}

PHP_METHOD(Qt_Sql_QSqlTableModel_QSqlTableModel, primaryValues)
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
	RETURN_LONG(phpqt_qsqltablemodel_primary_values(&_0, &_1));
}

