
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
#include "src/core-qidentityproxymodel.h"
#include "kernel/operators.h"
#include "kernel/memory.h"
#include "kernel/object.h"
#include "kernel/string.h"


ZEPHIR_INIT_CLASS(Qt_Core_QIdentityProxyModel_QIdentityProxyModel)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Core\\QIdentityProxyModel, QIdentityProxyModel, qt, core_qidentityproxymodel_qidentityproxymodel, qt_core_qidentityproxymodel_qidentityproxymodel_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Core_QIdentityProxyModel_QIdentityProxyModel, parent_)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qidentityproxymodel_parent(&_0));
}

PHP_METHOD(Qt_Core_QIdentityProxyModel_QIdentityProxyModel, staticMetaObject)
{

	RETURN_LONG(phpqt_qidentityproxymodel_static_meta_object());
}

PHP_METHOD(Qt_Core_QIdentityProxyModel_QIdentityProxyModel, tr)
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
	phpqt_qidentityproxymodel_tr(&result, s, c, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QIdentityProxyModel_QIdentityProxyModel, new_)
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
	RETURN_LONG(phpqt_qidentityproxymodel_new(&_0));
}

PHP_METHOD(Qt_Core_QIdentityProxyModel_QIdentityProxyModel, columnCount)
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
	RETURN_LONG(phpqt_qidentityproxymodel_column_count(&_0, parent_));
}

PHP_METHOD(Qt_Core_QIdentityProxyModel_QIdentityProxyModel, index)
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
	RETURN_LONG(phpqt_qidentityproxymodel_index(&_0, &_1, &_2, parent_));
}

PHP_METHOD(Qt_Core_QIdentityProxyModel_QIdentityProxyModel, mapFromSource)
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
	RETURN_LONG(phpqt_qidentityproxymodel_map_from_source(&_0, &_1));
}

PHP_METHOD(Qt_Core_QIdentityProxyModel_QIdentityProxyModel, mapToSource)
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
	RETURN_LONG(phpqt_qidentityproxymodel_map_to_source(&_0, &_1));
}

PHP_METHOD(Qt_Core_QIdentityProxyModel_QIdentityProxyModel, parentQModelIndex)
{
	zval *handle_param = NULL, *child_param = NULL, _0, _1;
	zend_long handle, child;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(child)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &child_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, child);
	RETURN_LONG(phpqt_qidentityproxymodel_parent_q_model_index(&_0, &_1));
}

PHP_METHOD(Qt_Core_QIdentityProxyModel_QIdentityProxyModel, rowCount)
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
	RETURN_LONG(phpqt_qidentityproxymodel_row_count(&_0, parent_));
}

PHP_METHOD(Qt_Core_QIdentityProxyModel_QIdentityProxyModel, headerData)
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
	phpqt_qidentityproxymodel_header_data(&result, &_0, &_1, &_2, role);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QIdentityProxyModel_QIdentityProxyModel, dropMimeData)
{
	zval *handle_param = NULL, *data_param = NULL, *action_param = NULL, *row_param = NULL, *column_param = NULL, *parent__param = NULL, _0, _1, _2, _3, _4, _5;
	zend_long handle, data, action, row, column, parent_, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_5);
	ZEND_PARSE_PARAMETERS_START(6, 6)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(data)
		Z_PARAM_LONG(action)
		Z_PARAM_LONG(row)
		Z_PARAM_LONG(column)
		Z_PARAM_LONG(parent_)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(6, 0, &handle_param, &data_param, &action_param, &row_param, &column_param, &parent__param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, data);
	ZVAL_LONG(&_2, action);
	ZVAL_LONG(&_3, row);
	ZVAL_LONG(&_4, column);
	ZVAL_LONG(&_5, parent_);
	r = phpqt_qidentityproxymodel_drop_mime_data(&_0, &_1, &_2, &_3, &_4, &_5);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QIdentityProxyModel_QIdentityProxyModel, sibling)
{
	zval *handle_param = NULL, *row_param = NULL, *column_param = NULL, *idx_param = NULL, _0, _1, _2, _3;
	zend_long handle, row, column, idx;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(row)
		Z_PARAM_LONG(column)
		Z_PARAM_LONG(idx)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 0, &handle_param, &row_param, &column_param, &idx_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, row);
	ZVAL_LONG(&_2, column);
	ZVAL_LONG(&_3, idx);
	RETURN_LONG(phpqt_qidentityproxymodel_sibling(&_0, &_1, &_2, &_3));
}

PHP_METHOD(Qt_Core_QIdentityProxyModel_QIdentityProxyModel, mapSelectionFromSource)
{
	zval *handle_param = NULL, *selection_param = NULL, _0, _1;
	zend_long handle, selection;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(selection)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &selection_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, selection);
	RETURN_LONG(phpqt_qidentityproxymodel_map_selection_from_source(&_0, &_1));
}

PHP_METHOD(Qt_Core_QIdentityProxyModel_QIdentityProxyModel, mapSelectionToSource)
{
	zval *handle_param = NULL, *selection_param = NULL, _0, _1;
	zend_long handle, selection;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(selection)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &selection_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, selection);
	RETURN_LONG(phpqt_qidentityproxymodel_map_selection_to_source(&_0, &_1));
}

PHP_METHOD(Qt_Core_QIdentityProxyModel_QIdentityProxyModel, match_)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, *start_param = NULL, *role_param = NULL, *value = NULL, value_sub, *hits_param = NULL, *flags = NULL, flags_sub, __$null, result, _0, _1, _2, _3;
	zend_long handle, start, role, hits;

	ZVAL_UNDEF(&value_sub);
	ZVAL_UNDEF(&flags_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(4, 6)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(start)
		Z_PARAM_LONG(role)
		Z_PARAM_ZVAL(value)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(hits)
		Z_PARAM_ZVAL_OR_NULL(flags)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 4, 2, &handle_param, &start_param, &role_param, &value, &hits_param, &flags);
	if (!hits_param) {
		hits = 1;
	} else {
		}
	if (!flags) {
		flags = &flags_sub;
		flags = &__$null;
	}
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, start);
	ZVAL_LONG(&_2, role);
	ZVAL_LONG(&_3, hits);
	phpqt_qidentityproxymodel_match(&result, &_0, &_1, &_2, value, &_3, flags);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QIdentityProxyModel_QIdentityProxyModel, setSourceModel)
{
	zval *handle_param = NULL, *sourceModel_param = NULL, _0, _1;
	zend_long handle, sourceModel;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(sourceModel)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &sourceModel_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, sourceModel);
	phpqt_qidentityproxymodel_set_source_model(&_0, &_1);
}

PHP_METHOD(Qt_Core_QIdentityProxyModel_QIdentityProxyModel, insertColumns)
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
	r = phpqt_qidentityproxymodel_insert_columns(&_0, &_1, &_2, parent_);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QIdentityProxyModel_QIdentityProxyModel, insertRows)
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
	r = phpqt_qidentityproxymodel_insert_rows(&_0, &_1, &_2, parent_);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QIdentityProxyModel_QIdentityProxyModel, removeColumns)
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
	r = phpqt_qidentityproxymodel_remove_columns(&_0, &_1, &_2, parent_);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QIdentityProxyModel_QIdentityProxyModel, removeRows)
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
	r = phpqt_qidentityproxymodel_remove_rows(&_0, &_1, &_2, parent_);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QIdentityProxyModel_QIdentityProxyModel, moveRows)
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
	r = phpqt_qidentityproxymodel_move_rows(&_0, &_1, &_2, &_3, &_4, &_5);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QIdentityProxyModel_QIdentityProxyModel, moveColumns)
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
	r = phpqt_qidentityproxymodel_move_columns(&_0, &_1, &_2, &_3, &_4, &_5);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QIdentityProxyModel_QIdentityProxyModel, handleSourceLayoutChanges)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qidentityproxymodel_handle_source_layout_changes(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QIdentityProxyModel_QIdentityProxyModel, handleSourceDataChanges)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qidentityproxymodel_handle_source_data_changes(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QIdentityProxyModel_QIdentityProxyModel, setHandleSourceLayoutChanges)
{
	zend_bool arg0;
	zval *handle_param = NULL, *arg0_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_BOOL(arg0)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &arg0_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_BOOL(&_1, (arg0 ? 1 : 0));
	phpqt_qidentityproxymodel_set_handle_source_layout_changes(&_0, &_1);
}

PHP_METHOD(Qt_Core_QIdentityProxyModel_QIdentityProxyModel, setHandleSourceDataChanges)
{
	zend_bool arg0;
	zval *handle_param = NULL, *arg0_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_BOOL(arg0)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &arg0_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_BOOL(&_1, (arg0 ? 1 : 0));
	phpqt_qidentityproxymodel_set_handle_source_data_changes(&_0, &_1);
}

