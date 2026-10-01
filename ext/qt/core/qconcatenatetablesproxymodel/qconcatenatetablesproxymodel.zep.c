
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
#include "src/core-qconcatenatetablesproxymodel.h"
#include "kernel/object.h"
#include "kernel/string.h"
#include "kernel/memory.h"
#include "kernel/operators.h"


ZEPHIR_INIT_CLASS(Qt_Core_QConcatenateTablesProxyModel_QConcatenateTablesProxyModel)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Core\\QConcatenateTablesProxyModel, QConcatenateTablesProxyModel, qt, core_qconcatenatetablesproxymodel_qconcatenatetablesproxymodel, qt_core_qconcatenatetablesproxymodel_qconcatenatetablesproxymodel_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Core_QConcatenateTablesProxyModel_QConcatenateTablesProxyModel, staticMetaObject)
{

	RETURN_LONG(phpqt_qconcatenatetablesproxymodel_static_meta_object());
}

PHP_METHOD(Qt_Core_QConcatenateTablesProxyModel_QConcatenateTablesProxyModel, tr)
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
	phpqt_qconcatenatetablesproxymodel_tr(&result, s, c, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QConcatenateTablesProxyModel_QConcatenateTablesProxyModel, new_)
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
	RETURN_LONG(phpqt_qconcatenatetablesproxymodel_new(&_0));
}

PHP_METHOD(Qt_Core_QConcatenateTablesProxyModel_QConcatenateTablesProxyModel, sourceModels)
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
	phpqt_qconcatenatetablesproxymodel_source_models(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QConcatenateTablesProxyModel_QConcatenateTablesProxyModel, addSourceModel)
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
	phpqt_qconcatenatetablesproxymodel_add_source_model(&_0, &_1);
}

PHP_METHOD(Qt_Core_QConcatenateTablesProxyModel_QConcatenateTablesProxyModel, removeSourceModel)
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
	phpqt_qconcatenatetablesproxymodel_remove_source_model(&_0, &_1);
}

PHP_METHOD(Qt_Core_QConcatenateTablesProxyModel_QConcatenateTablesProxyModel, mapFromSource)
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
	RETURN_LONG(phpqt_qconcatenatetablesproxymodel_map_from_source(&_0, &_1));
}

PHP_METHOD(Qt_Core_QConcatenateTablesProxyModel_QConcatenateTablesProxyModel, mapToSource)
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
	RETURN_LONG(phpqt_qconcatenatetablesproxymodel_map_to_source(&_0, &_1));
}

PHP_METHOD(Qt_Core_QConcatenateTablesProxyModel_QConcatenateTablesProxyModel, data)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, *index_param = NULL, *role = NULL, role_sub, __$null, result, _0, _1;
	zend_long handle, index;

	ZVAL_UNDEF(&role_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(2, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(index)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(role)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 1, &handle_param, &index_param, &role);
	if (!role) {
		role = &role_sub;
		role = &__$null;
	}
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, index);
	phpqt_qconcatenatetablesproxymodel_data(&result, &_0, &_1, role);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QConcatenateTablesProxyModel_QConcatenateTablesProxyModel, setData)
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
	r = phpqt_qconcatenatetablesproxymodel_set_data(&_0, &_1, value, role);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QConcatenateTablesProxyModel_QConcatenateTablesProxyModel, itemData)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, *proxyIndex_param = NULL, result, _0, _1;
	zend_long handle, proxyIndex;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(proxyIndex)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &proxyIndex_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, proxyIndex);
	phpqt_qconcatenatetablesproxymodel_item_data(&result, &_0, &_1);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QConcatenateTablesProxyModel_QConcatenateTablesProxyModel, setItemData)
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
	r = phpqt_qconcatenatetablesproxymodel_set_item_data(&_0, &_1, &roles);
	RETURN_MM_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QConcatenateTablesProxyModel_QConcatenateTablesProxyModel, flags)
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
	RETURN_LONG(phpqt_qconcatenatetablesproxymodel_flags(&_0, &_1));
}

PHP_METHOD(Qt_Core_QConcatenateTablesProxyModel_QConcatenateTablesProxyModel, index)
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
	RETURN_LONG(phpqt_qconcatenatetablesproxymodel_index(&_0, &_1, &_2, parent_));
}

PHP_METHOD(Qt_Core_QConcatenateTablesProxyModel_QConcatenateTablesProxyModel, parent_)
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
	RETURN_LONG(phpqt_qconcatenatetablesproxymodel_parent(&_0, &_1));
}

PHP_METHOD(Qt_Core_QConcatenateTablesProxyModel_QConcatenateTablesProxyModel, rowCount)
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
	RETURN_LONG(phpqt_qconcatenatetablesproxymodel_row_count(&_0, parent_));
}

PHP_METHOD(Qt_Core_QConcatenateTablesProxyModel_QConcatenateTablesProxyModel, headerData)
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
	phpqt_qconcatenatetablesproxymodel_header_data(&result, &_0, &_1, &_2, role);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QConcatenateTablesProxyModel_QConcatenateTablesProxyModel, columnCount)
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
	RETURN_LONG(phpqt_qconcatenatetablesproxymodel_column_count(&_0, parent_));
}

PHP_METHOD(Qt_Core_QConcatenateTablesProxyModel_QConcatenateTablesProxyModel, mimeTypes)
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
	phpqt_qconcatenatetablesproxymodel_mime_types(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QConcatenateTablesProxyModel_QConcatenateTablesProxyModel, mimeData)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval indexes;
	zval *handle_param = NULL, *indexes_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&indexes);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ARRAY(indexes)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &indexes_param);
	zephir_get_arrval(&indexes, indexes_param);
	ZVAL_LONG(&_0, handle);
	RETURN_MM_LONG(phpqt_qconcatenatetablesproxymodel_mime_data(&_0, &indexes));
}

PHP_METHOD(Qt_Core_QConcatenateTablesProxyModel_QConcatenateTablesProxyModel, canDropMimeData)
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
	r = phpqt_qconcatenatetablesproxymodel_can_drop_mime_data(&_0, &_1, &_2, &_3, &_4, &_5);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QConcatenateTablesProxyModel_QConcatenateTablesProxyModel, dropMimeData)
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
	r = phpqt_qconcatenatetablesproxymodel_drop_mime_data(&_0, &_1, &_2, &_3, &_4, &_5);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QConcatenateTablesProxyModel_QConcatenateTablesProxyModel, span)
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
	phpqt_qconcatenatetablesproxymodel_span(&result, &_0, &_1);
	RETURN_CCTOR(&result);
}

