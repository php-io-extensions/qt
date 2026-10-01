
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
#include "src/core-qsortfilterproxymodel.h"
#include "kernel/operators.h"
#include "kernel/memory.h"
#include "kernel/object.h"
#include "kernel/string.h"


ZEPHIR_INIT_CLASS(Qt_Core_QSortFilterProxyModel_QSortFilterProxyModel)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Core\\QSortFilterProxyModel, QSortFilterProxyModel, qt, core_qsortfilterproxymodel_qsortfilterproxymodel, qt_core_qsortfilterproxymodel_qsortfilterproxymodel_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Core_QSortFilterProxyModel_QSortFilterProxyModel, parent_)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qsortfilterproxymodel_parent(&_0));
}

PHP_METHOD(Qt_Core_QSortFilterProxyModel_QSortFilterProxyModel, staticMetaObject)
{

	RETURN_LONG(phpqt_qsortfilterproxymodel_static_meta_object());
}

PHP_METHOD(Qt_Core_QSortFilterProxyModel_QSortFilterProxyModel, tr)
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
	phpqt_qsortfilterproxymodel_tr(&result, s, c, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QSortFilterProxyModel_QSortFilterProxyModel, new_)
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
	RETURN_LONG(phpqt_qsortfilterproxymodel_new(&_0));
}

PHP_METHOD(Qt_Core_QSortFilterProxyModel_QSortFilterProxyModel, setSourceModel)
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
	phpqt_qsortfilterproxymodel_set_source_model(&_0, &_1);
}

PHP_METHOD(Qt_Core_QSortFilterProxyModel_QSortFilterProxyModel, mapToSource)
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
	RETURN_LONG(phpqt_qsortfilterproxymodel_map_to_source(&_0, &_1));
}

PHP_METHOD(Qt_Core_QSortFilterProxyModel_QSortFilterProxyModel, mapFromSource)
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
	RETURN_LONG(phpqt_qsortfilterproxymodel_map_from_source(&_0, &_1));
}

PHP_METHOD(Qt_Core_QSortFilterProxyModel_QSortFilterProxyModel, mapSelectionToSource)
{
	zval *handle_param = NULL, *proxySelection_param = NULL, _0, _1;
	zend_long handle, proxySelection;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(proxySelection)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &proxySelection_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, proxySelection);
	RETURN_LONG(phpqt_qsortfilterproxymodel_map_selection_to_source(&_0, &_1));
}

PHP_METHOD(Qt_Core_QSortFilterProxyModel_QSortFilterProxyModel, mapSelectionFromSource)
{
	zval *handle_param = NULL, *sourceSelection_param = NULL, _0, _1;
	zend_long handle, sourceSelection;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(sourceSelection)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &sourceSelection_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, sourceSelection);
	RETURN_LONG(phpqt_qsortfilterproxymodel_map_selection_from_source(&_0, &_1));
}

PHP_METHOD(Qt_Core_QSortFilterProxyModel_QSortFilterProxyModel, filterRegularExpression)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qsortfilterproxymodel_filter_regular_expression(&_0));
}

PHP_METHOD(Qt_Core_QSortFilterProxyModel_QSortFilterProxyModel, filterKeyColumn)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qsortfilterproxymodel_filter_key_column(&_0));
}

PHP_METHOD(Qt_Core_QSortFilterProxyModel_QSortFilterProxyModel, setFilterKeyColumn)
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
	phpqt_qsortfilterproxymodel_set_filter_key_column(&_0, &_1);
}

PHP_METHOD(Qt_Core_QSortFilterProxyModel_QSortFilterProxyModel, filterCaseSensitivity)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qsortfilterproxymodel_filter_case_sensitivity(&_0));
}

PHP_METHOD(Qt_Core_QSortFilterProxyModel_QSortFilterProxyModel, setFilterCaseSensitivity)
{
	zval *handle_param = NULL, *cs_param = NULL, _0, _1;
	zend_long handle, cs;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(cs)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &cs_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, cs);
	phpqt_qsortfilterproxymodel_set_filter_case_sensitivity(&_0, &_1);
}

PHP_METHOD(Qt_Core_QSortFilterProxyModel_QSortFilterProxyModel, sortCaseSensitivity)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qsortfilterproxymodel_sort_case_sensitivity(&_0));
}

PHP_METHOD(Qt_Core_QSortFilterProxyModel_QSortFilterProxyModel, setSortCaseSensitivity)
{
	zval *handle_param = NULL, *cs_param = NULL, _0, _1;
	zend_long handle, cs;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(cs)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &cs_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, cs);
	phpqt_qsortfilterproxymodel_set_sort_case_sensitivity(&_0, &_1);
}

PHP_METHOD(Qt_Core_QSortFilterProxyModel_QSortFilterProxyModel, isSortLocaleAware)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qsortfilterproxymodel_is_sort_locale_aware(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QSortFilterProxyModel_QSortFilterProxyModel, setSortLocaleAware)
{
	zend_bool on;
	zval *handle_param = NULL, *on_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_BOOL(on)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &on_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_BOOL(&_1, (on ? 1 : 0));
	phpqt_qsortfilterproxymodel_set_sort_locale_aware(&_0, &_1);
}

PHP_METHOD(Qt_Core_QSortFilterProxyModel_QSortFilterProxyModel, sortColumn)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qsortfilterproxymodel_sort_column(&_0));
}

PHP_METHOD(Qt_Core_QSortFilterProxyModel_QSortFilterProxyModel, sortOrder)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qsortfilterproxymodel_sort_order(&_0));
}

PHP_METHOD(Qt_Core_QSortFilterProxyModel_QSortFilterProxyModel, dynamicSortFilter)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qsortfilterproxymodel_dynamic_sort_filter(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QSortFilterProxyModel_QSortFilterProxyModel, setDynamicSortFilter)
{
	zend_bool enable;
	zval *handle_param = NULL, *enable_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_BOOL(enable)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &enable_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_BOOL(&_1, (enable ? 1 : 0));
	phpqt_qsortfilterproxymodel_set_dynamic_sort_filter(&_0, &_1);
}

PHP_METHOD(Qt_Core_QSortFilterProxyModel_QSortFilterProxyModel, sortRole)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qsortfilterproxymodel_sort_role(&_0));
}

PHP_METHOD(Qt_Core_QSortFilterProxyModel_QSortFilterProxyModel, setSortRole)
{
	zval *handle_param = NULL, *role_param = NULL, _0, _1;
	zend_long handle, role;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(role)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &role_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, role);
	phpqt_qsortfilterproxymodel_set_sort_role(&_0, &_1);
}

PHP_METHOD(Qt_Core_QSortFilterProxyModel_QSortFilterProxyModel, filterRole)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qsortfilterproxymodel_filter_role(&_0));
}

PHP_METHOD(Qt_Core_QSortFilterProxyModel_QSortFilterProxyModel, setFilterRole)
{
	zval *handle_param = NULL, *role_param = NULL, _0, _1;
	zend_long handle, role;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(role)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &role_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, role);
	phpqt_qsortfilterproxymodel_set_filter_role(&_0, &_1);
}

PHP_METHOD(Qt_Core_QSortFilterProxyModel_QSortFilterProxyModel, isRecursiveFilteringEnabled)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qsortfilterproxymodel_is_recursive_filtering_enabled(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QSortFilterProxyModel_QSortFilterProxyModel, setRecursiveFilteringEnabled)
{
	zend_bool recursive;
	zval *handle_param = NULL, *recursive_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_BOOL(recursive)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &recursive_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_BOOL(&_1, (recursive ? 1 : 0));
	phpqt_qsortfilterproxymodel_set_recursive_filtering_enabled(&_0, &_1);
}

PHP_METHOD(Qt_Core_QSortFilterProxyModel_QSortFilterProxyModel, autoAcceptChildRows)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qsortfilterproxymodel_auto_accept_child_rows(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QSortFilterProxyModel_QSortFilterProxyModel, setAutoAcceptChildRows)
{
	zend_bool accept;
	zval *handle_param = NULL, *accept_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_BOOL(accept)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &accept_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_BOOL(&_1, (accept ? 1 : 0));
	phpqt_qsortfilterproxymodel_set_auto_accept_child_rows(&_0, &_1);
}

PHP_METHOD(Qt_Core_QSortFilterProxyModel_QSortFilterProxyModel, setFilterRegularExpression)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval pattern;
	zval *handle_param = NULL, *pattern_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&pattern);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(pattern)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &pattern_param);
	zephir_get_strval(&pattern, pattern_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qsortfilterproxymodel_set_filter_regular_expression(&_0, &pattern);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_Core_QSortFilterProxyModel_QSortFilterProxyModel, setFilterRegularExpressionQRegularExpression)
{
	zval *handle_param = NULL, *regularExpression_param = NULL, _0, _1;
	zend_long handle, regularExpression;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(regularExpression)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &regularExpression_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, regularExpression);
	phpqt_qsortfilterproxymodel_set_filter_regular_expression_q_regular_expression(&_0, &_1);
}

PHP_METHOD(Qt_Core_QSortFilterProxyModel_QSortFilterProxyModel, setFilterWildcard)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval pattern;
	zval *handle_param = NULL, *pattern_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&pattern);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(pattern)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &pattern_param);
	zephir_get_strval(&pattern, pattern_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qsortfilterproxymodel_set_filter_wildcard(&_0, &pattern);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_Core_QSortFilterProxyModel_QSortFilterProxyModel, setFilterFixedString)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval pattern;
	zval *handle_param = NULL, *pattern_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&pattern);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(pattern)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &pattern_param);
	zephir_get_strval(&pattern, pattern_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qsortfilterproxymodel_set_filter_fixed_string(&_0, &pattern);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_Core_QSortFilterProxyModel_QSortFilterProxyModel, invalidate)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qsortfilterproxymodel_invalidate(&_0);
}

PHP_METHOD(Qt_Core_QSortFilterProxyModel_QSortFilterProxyModel, filterAcceptsRow)
{
	zval *handle_param = NULL, *source_row_param = NULL, *source_parent_param = NULL, _0, _1, _2;
	zend_long handle, source_row, source_parent, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(source_row)
		Z_PARAM_LONG(source_parent)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &source_row_param, &source_parent_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, source_row);
	ZVAL_LONG(&_2, source_parent);
	r = phpqt_qsortfilterproxymodel_filter_accepts_row(&_0, &_1, &_2);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QSortFilterProxyModel_QSortFilterProxyModel, filterAcceptsColumn)
{
	zval *handle_param = NULL, *source_column_param = NULL, *source_parent_param = NULL, _0, _1, _2;
	zend_long handle, source_column, source_parent, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(source_column)
		Z_PARAM_LONG(source_parent)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &source_column_param, &source_parent_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, source_column);
	ZVAL_LONG(&_2, source_parent);
	r = phpqt_qsortfilterproxymodel_filter_accepts_column(&_0, &_1, &_2);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QSortFilterProxyModel_QSortFilterProxyModel, lessThan)
{
	zval *handle_param = NULL, *source_left_param = NULL, *source_right_param = NULL, _0, _1, _2;
	zend_long handle, source_left, source_right, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(source_left)
		Z_PARAM_LONG(source_right)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &source_left_param, &source_right_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, source_left);
	ZVAL_LONG(&_2, source_right);
	r = phpqt_qsortfilterproxymodel_less_than(&_0, &_1, &_2);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QSortFilterProxyModel_QSortFilterProxyModel, invalidateFilter)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qsortfilterproxymodel_invalidate_filter(&_0);
}

PHP_METHOD(Qt_Core_QSortFilterProxyModel_QSortFilterProxyModel, invalidateRowsFilter)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qsortfilterproxymodel_invalidate_rows_filter(&_0);
}

PHP_METHOD(Qt_Core_QSortFilterProxyModel_QSortFilterProxyModel, invalidateColumnsFilter)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qsortfilterproxymodel_invalidate_columns_filter(&_0);
}

PHP_METHOD(Qt_Core_QSortFilterProxyModel_QSortFilterProxyModel, index)
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
	RETURN_LONG(phpqt_qsortfilterproxymodel_index(&_0, &_1, &_2, parent_));
}

PHP_METHOD(Qt_Core_QSortFilterProxyModel_QSortFilterProxyModel, parentQModelIndex)
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
	RETURN_LONG(phpqt_qsortfilterproxymodel_parent_q_model_index(&_0, &_1));
}

PHP_METHOD(Qt_Core_QSortFilterProxyModel_QSortFilterProxyModel, sibling)
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
	RETURN_LONG(phpqt_qsortfilterproxymodel_sibling(&_0, &_1, &_2, &_3));
}

PHP_METHOD(Qt_Core_QSortFilterProxyModel_QSortFilterProxyModel, rowCount)
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
	RETURN_LONG(phpqt_qsortfilterproxymodel_row_count(&_0, parent_));
}

PHP_METHOD(Qt_Core_QSortFilterProxyModel_QSortFilterProxyModel, columnCount)
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
	RETURN_LONG(phpqt_qsortfilterproxymodel_column_count(&_0, parent_));
}

PHP_METHOD(Qt_Core_QSortFilterProxyModel_QSortFilterProxyModel, hasChildren)
{
	zval *handle_param = NULL, *parent_ = NULL, parent__sub, __$null, _0;
	zend_long handle, r = 0;

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
	r = phpqt_qsortfilterproxymodel_has_children(&_0, parent_);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QSortFilterProxyModel_QSortFilterProxyModel, data)
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
	phpqt_qsortfilterproxymodel_data(&result, &_0, &_1, role);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QSortFilterProxyModel_QSortFilterProxyModel, setData)
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
	r = phpqt_qsortfilterproxymodel_set_data(&_0, &_1, value, role);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QSortFilterProxyModel_QSortFilterProxyModel, headerData)
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
	phpqt_qsortfilterproxymodel_header_data(&result, &_0, &_1, &_2, role);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QSortFilterProxyModel_QSortFilterProxyModel, setHeaderData)
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
	r = phpqt_qsortfilterproxymodel_set_header_data(&_0, &_1, &_2, value, role);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QSortFilterProxyModel_QSortFilterProxyModel, mimeData)
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
	RETURN_MM_LONG(phpqt_qsortfilterproxymodel_mime_data(&_0, &indexes));
}

PHP_METHOD(Qt_Core_QSortFilterProxyModel_QSortFilterProxyModel, dropMimeData)
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
	r = phpqt_qsortfilterproxymodel_drop_mime_data(&_0, &_1, &_2, &_3, &_4, &_5);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QSortFilterProxyModel_QSortFilterProxyModel, insertRows)
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
	r = phpqt_qsortfilterproxymodel_insert_rows(&_0, &_1, &_2, parent_);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QSortFilterProxyModel_QSortFilterProxyModel, insertColumns)
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
	r = phpqt_qsortfilterproxymodel_insert_columns(&_0, &_1, &_2, parent_);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QSortFilterProxyModel_QSortFilterProxyModel, removeRows)
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
	r = phpqt_qsortfilterproxymodel_remove_rows(&_0, &_1, &_2, parent_);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QSortFilterProxyModel_QSortFilterProxyModel, removeColumns)
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
	r = phpqt_qsortfilterproxymodel_remove_columns(&_0, &_1, &_2, parent_);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QSortFilterProxyModel_QSortFilterProxyModel, fetchMore)
{
	zval *handle_param = NULL, *parent__param = NULL, _0, _1;
	zend_long handle, parent_;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(parent_)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &parent__param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, parent_);
	phpqt_qsortfilterproxymodel_fetch_more(&_0, &_1);
}

PHP_METHOD(Qt_Core_QSortFilterProxyModel_QSortFilterProxyModel, canFetchMore)
{
	zval *handle_param = NULL, *parent__param = NULL, _0, _1;
	zend_long handle, parent_, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(parent_)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &parent__param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, parent_);
	r = phpqt_qsortfilterproxymodel_can_fetch_more(&_0, &_1);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QSortFilterProxyModel_QSortFilterProxyModel, flags)
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
	RETURN_LONG(phpqt_qsortfilterproxymodel_flags(&_0, &_1));
}

PHP_METHOD(Qt_Core_QSortFilterProxyModel_QSortFilterProxyModel, buddy)
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
	RETURN_LONG(phpqt_qsortfilterproxymodel_buddy(&_0, &_1));
}

PHP_METHOD(Qt_Core_QSortFilterProxyModel_QSortFilterProxyModel, match_)
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
	phpqt_qsortfilterproxymodel_match(&result, &_0, &_1, &_2, value, &_3, flags);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QSortFilterProxyModel_QSortFilterProxyModel, span)
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
	phpqt_qsortfilterproxymodel_span(&result, &_0, &_1);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QSortFilterProxyModel_QSortFilterProxyModel, sort)
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
	phpqt_qsortfilterproxymodel_sort(&_0, &_1, order);
}

PHP_METHOD(Qt_Core_QSortFilterProxyModel_QSortFilterProxyModel, mimeTypes)
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
	phpqt_qsortfilterproxymodel_mime_types(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QSortFilterProxyModel_QSortFilterProxyModel, supportedDropActions)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qsortfilterproxymodel_supported_drop_actions(&_0));
}

PHP_METHOD(Qt_Core_QSortFilterProxyModel_QSortFilterProxyModel, dynamicSortFilterChanged)
{
	zend_bool dynamicSortFilter;
	zval *handle_param = NULL, *dynamicSortFilter_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_BOOL(dynamicSortFilter)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &dynamicSortFilter_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_BOOL(&_1, (dynamicSortFilter ? 1 : 0));
	phpqt_qsortfilterproxymodel_dynamic_sort_filter_changed(&_0, &_1);
}

PHP_METHOD(Qt_Core_QSortFilterProxyModel_QSortFilterProxyModel, filterCaseSensitivityChanged)
{
	zval *handle_param = NULL, *filterCaseSensitivity_param = NULL, _0, _1;
	zend_long handle, filterCaseSensitivity;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(filterCaseSensitivity)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &filterCaseSensitivity_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, filterCaseSensitivity);
	phpqt_qsortfilterproxymodel_filter_case_sensitivity_changed(&_0, &_1);
}

PHP_METHOD(Qt_Core_QSortFilterProxyModel_QSortFilterProxyModel, sortCaseSensitivityChanged)
{
	zval *handle_param = NULL, *sortCaseSensitivity_param = NULL, _0, _1;
	zend_long handle, sortCaseSensitivity;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(sortCaseSensitivity)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &sortCaseSensitivity_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, sortCaseSensitivity);
	phpqt_qsortfilterproxymodel_sort_case_sensitivity_changed(&_0, &_1);
}

PHP_METHOD(Qt_Core_QSortFilterProxyModel_QSortFilterProxyModel, sortLocaleAwareChanged)
{
	zend_bool sortLocaleAware;
	zval *handle_param = NULL, *sortLocaleAware_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_BOOL(sortLocaleAware)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &sortLocaleAware_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_BOOL(&_1, (sortLocaleAware ? 1 : 0));
	phpqt_qsortfilterproxymodel_sort_locale_aware_changed(&_0, &_1);
}

PHP_METHOD(Qt_Core_QSortFilterProxyModel_QSortFilterProxyModel, sortRoleChanged)
{
	zval *handle_param = NULL, *sortRole_param = NULL, _0, _1;
	zend_long handle, sortRole;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(sortRole)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &sortRole_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, sortRole);
	phpqt_qsortfilterproxymodel_sort_role_changed(&_0, &_1);
}

PHP_METHOD(Qt_Core_QSortFilterProxyModel_QSortFilterProxyModel, filterRoleChanged)
{
	zval *handle_param = NULL, *filterRole_param = NULL, _0, _1;
	zend_long handle, filterRole;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(filterRole)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &filterRole_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, filterRole);
	phpqt_qsortfilterproxymodel_filter_role_changed(&_0, &_1);
}

PHP_METHOD(Qt_Core_QSortFilterProxyModel_QSortFilterProxyModel, recursiveFilteringEnabledChanged)
{
	zend_bool recursiveFilteringEnabled;
	zval *handle_param = NULL, *recursiveFilteringEnabled_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_BOOL(recursiveFilteringEnabled)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &recursiveFilteringEnabled_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_BOOL(&_1, (recursiveFilteringEnabled ? 1 : 0));
	phpqt_qsortfilterproxymodel_recursive_filtering_enabled_changed(&_0, &_1);
}

PHP_METHOD(Qt_Core_QSortFilterProxyModel_QSortFilterProxyModel, autoAcceptChildRowsChanged)
{
	zend_bool autoAcceptChildRows;
	zval *handle_param = NULL, *autoAcceptChildRows_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_BOOL(autoAcceptChildRows)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &autoAcceptChildRows_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_BOOL(&_1, (autoAcceptChildRows ? 1 : 0));
	phpqt_qsortfilterproxymodel_auto_accept_child_rows_changed(&_0, &_1);
}

