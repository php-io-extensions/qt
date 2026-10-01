
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
#include "src/core-qtransposeproxymodel.h"
#include "kernel/object.h"
#include "kernel/string.h"
#include "kernel/memory.h"
#include "kernel/operators.h"


ZEPHIR_INIT_CLASS(Qt_Core_QTransposeProxyModel_QTransposeProxyModel)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Core\\QTransposeProxyModel, QTransposeProxyModel, qt, core_qtransposeproxymodel_qtransposeproxymodel, qt_core_qtransposeproxymodel_qtransposeproxymodel_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Core_QTransposeProxyModel_QTransposeProxyModel, staticMetaObject)
{

	RETURN_LONG(phpqt_qtransposeproxymodel_static_meta_object());
}

PHP_METHOD(Qt_Core_QTransposeProxyModel_QTransposeProxyModel, tr)
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
	phpqt_qtransposeproxymodel_tr(&result, s, c, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QTransposeProxyModel_QTransposeProxyModel, new_)
{
	zval *parent__param = NULL, _0;
	zend_long parent_;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(0, 1)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(parent_)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(0, 1, &parent__param);
	if (!parent__param) {
		parent_ = 0;
	} else {
		}
	ZVAL_LONG(&_0, parent_);
	RETURN_LONG(phpqt_qtransposeproxymodel_new(&_0));
}

PHP_METHOD(Qt_Core_QTransposeProxyModel_QTransposeProxyModel, setSourceModel)
{
	zval *handle_param = NULL, *newSourceModel_param = NULL, _0, _1;
	zend_long handle, newSourceModel;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(newSourceModel)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &newSourceModel_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, newSourceModel);
	phpqt_qtransposeproxymodel_set_source_model(&_0, &_1);
}

PHP_METHOD(Qt_Core_QTransposeProxyModel_QTransposeProxyModel, rowCount)
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
	RETURN_LONG(phpqt_qtransposeproxymodel_row_count(&_0, parent_));
}

PHP_METHOD(Qt_Core_QTransposeProxyModel_QTransposeProxyModel, columnCount)
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
	RETURN_LONG(phpqt_qtransposeproxymodel_column_count(&_0, parent_));
}

PHP_METHOD(Qt_Core_QTransposeProxyModel_QTransposeProxyModel, headerData)
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
	phpqt_qtransposeproxymodel_header_data(&result, &_0, &_1, &_2, role);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QTransposeProxyModel_QTransposeProxyModel, setHeaderData)
{
	zval *handle_param = NULL, *section_param = NULL, *orientation_param = NULL, *value = NULL, value_sub, *role = NULL, role_sub, __$null, _0, _1, _2;
	zend_long handle, section, orientation, r = 0;

	ZVAL_UNDEF(&value_sub);
	ZVAL_UNDEF(&role_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(4, 5)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(section)
		Z_PARAM_LONG(orientation)
		Z_PARAM_ZVAL(value)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(role)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 1, &handle_param, &section_param, &orientation_param, &value, &role);
	if (!role) {
		role = &role_sub;
		role = &__$null;
	}
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, section);
	ZVAL_LONG(&_2, orientation);
	r = phpqt_qtransposeproxymodel_set_header_data(&_0, &_1, &_2, value, role);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QTransposeProxyModel_QTransposeProxyModel, setItemData)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval roles;
	zval *handle_param = NULL, *index_param = NULL, *roles_param = NULL, _0, _1;
	zend_long handle, index, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&roles);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(index)
		Z_PARAM_ARRAY(roles)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 3, 0, &handle_param, &index_param, &roles_param);
	zephir_get_arrval(&roles, roles_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, index);
	r = phpqt_qtransposeproxymodel_set_item_data(&_0, &_1, &roles);
	RETURN_MM_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QTransposeProxyModel_QTransposeProxyModel, span)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, *index_param = NULL, result, _0, _1;
	zend_long handle, index;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(index)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &index_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, index);
	phpqt_qtransposeproxymodel_span(&result, &_0, &_1);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QTransposeProxyModel_QTransposeProxyModel, itemData)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, *index_param = NULL, result, _0, _1;
	zend_long handle, index;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(index)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &index_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, index);
	phpqt_qtransposeproxymodel_item_data(&result, &_0, &_1);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QTransposeProxyModel_QTransposeProxyModel, mapFromSource)
{
	zval *handle_param = NULL, *sourceIndex_param = NULL, _0, _1;
	zend_long handle, sourceIndex;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(sourceIndex)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &sourceIndex_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, sourceIndex);
	RETURN_LONG(phpqt_qtransposeproxymodel_map_from_source(&_0, &_1));
}

PHP_METHOD(Qt_Core_QTransposeProxyModel_QTransposeProxyModel, mapToSource)
{
	zval *handle_param = NULL, *proxyIndex_param = NULL, _0, _1;
	zend_long handle, proxyIndex;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(proxyIndex)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &proxyIndex_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, proxyIndex);
	RETURN_LONG(phpqt_qtransposeproxymodel_map_to_source(&_0, &_1));
}

PHP_METHOD(Qt_Core_QTransposeProxyModel_QTransposeProxyModel, parent_)
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
	RETURN_LONG(phpqt_qtransposeproxymodel_parent(&_0, &_1));
}

PHP_METHOD(Qt_Core_QTransposeProxyModel_QTransposeProxyModel, index)
{
	zval *handle_param = NULL, *row_param = NULL, *column_param = NULL, *parent_ = NULL, parent__sub, __$null, _0, _1, _2;
	zend_long handle, row, column;

	ZVAL_UNDEF(&parent__sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(3, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(row)
		Z_PARAM_LONG(column)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(parent_)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 1, &handle_param, &row_param, &column_param, &parent_);
	if (!parent_) {
		parent_ = &parent__sub;
		parent_ = &__$null;
	}
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, row);
	ZVAL_LONG(&_2, column);
	RETURN_LONG(phpqt_qtransposeproxymodel_index(&_0, &_1, &_2, parent_));
}

PHP_METHOD(Qt_Core_QTransposeProxyModel_QTransposeProxyModel, insertRows)
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
	r = phpqt_qtransposeproxymodel_insert_rows(&_0, &_1, &_2, parent_);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QTransposeProxyModel_QTransposeProxyModel, removeRows)
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
	r = phpqt_qtransposeproxymodel_remove_rows(&_0, &_1, &_2, parent_);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QTransposeProxyModel_QTransposeProxyModel, moveRows)
{
	zval *handle_param = NULL, *sourceParent_param = NULL, *sourceRow_param = NULL, *count_param = NULL, *destinationParent_param = NULL, *destinationChild_param = NULL, _0, _1, _2, _3, _4, _5;
	zend_long handle, sourceParent, sourceRow, count, destinationParent, destinationChild, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_5);
	ZEND_PARSE_PARAMETERS_START(6, 6)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(sourceParent)
		Z_PARAM_LONG(sourceRow)
		Z_PARAM_LONG(count)
		Z_PARAM_LONG(destinationParent)
		Z_PARAM_LONG(destinationChild)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(6, 0, &handle_param, &sourceParent_param, &sourceRow_param, &count_param, &destinationParent_param, &destinationChild_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, sourceParent);
	ZVAL_LONG(&_2, sourceRow);
	ZVAL_LONG(&_3, count);
	ZVAL_LONG(&_4, destinationParent);
	ZVAL_LONG(&_5, destinationChild);
	r = phpqt_qtransposeproxymodel_move_rows(&_0, &_1, &_2, &_3, &_4, &_5);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QTransposeProxyModel_QTransposeProxyModel, insertColumns)
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
	r = phpqt_qtransposeproxymodel_insert_columns(&_0, &_1, &_2, parent_);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QTransposeProxyModel_QTransposeProxyModel, removeColumns)
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
	r = phpqt_qtransposeproxymodel_remove_columns(&_0, &_1, &_2, parent_);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QTransposeProxyModel_QTransposeProxyModel, moveColumns)
{
	zval *handle_param = NULL, *sourceParent_param = NULL, *sourceColumn_param = NULL, *count_param = NULL, *destinationParent_param = NULL, *destinationChild_param = NULL, _0, _1, _2, _3, _4, _5;
	zend_long handle, sourceParent, sourceColumn, count, destinationParent, destinationChild, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_5);
	ZEND_PARSE_PARAMETERS_START(6, 6)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(sourceParent)
		Z_PARAM_LONG(sourceColumn)
		Z_PARAM_LONG(count)
		Z_PARAM_LONG(destinationParent)
		Z_PARAM_LONG(destinationChild)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(6, 0, &handle_param, &sourceParent_param, &sourceColumn_param, &count_param, &destinationParent_param, &destinationChild_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, sourceParent);
	ZVAL_LONG(&_2, sourceColumn);
	ZVAL_LONG(&_3, count);
	ZVAL_LONG(&_4, destinationParent);
	ZVAL_LONG(&_5, destinationChild);
	r = phpqt_qtransposeproxymodel_move_columns(&_0, &_1, &_2, &_3, &_4, &_5);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QTransposeProxyModel_QTransposeProxyModel, sort)
{
	zval *handle_param = NULL, *column_param = NULL, *order = NULL, order_sub, __$null, _0, _1;
	zend_long handle, column;

	ZVAL_UNDEF(&order_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(2, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(column)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(order)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 1, &handle_param, &column_param, &order);
	if (!order) {
		order = &order_sub;
		order = &__$null;
	}
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, column);
	phpqt_qtransposeproxymodel_sort(&_0, &_1, order);
}

