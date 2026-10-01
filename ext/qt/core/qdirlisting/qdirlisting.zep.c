
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
#include "src/core-qdirlisting.h"
#include "kernel/operators.h"
#include "kernel/memory.h"
#include "kernel/object.h"
#include "kernel/string.h"


ZEPHIR_INIT_CLASS(Qt_Core_QDirListing_QDirListing)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Core\\QDirListing, QDirListing, qt, core_qdirlisting_qdirlisting, qt_core_qdirlisting_qdirlisting_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Core_QDirListing_QDirListing, new_)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *path_param = NULL, *flags = NULL, flags_sub, __$null;
	zval path;

	ZVAL_UNDEF(&path);
	ZVAL_UNDEF(&flags_sub);
	ZVAL_NULL(&__$null);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_STR(path)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(flags)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 1, &path_param, &flags);
	zephir_get_strval(&path, path_param);
	if (!flags) {
		flags = &flags_sub;
		flags = &__$null;
	}
	RETURN_MM_LONG(phpqt_qdirlisting_new(&path, flags));
}

PHP_METHOD(Qt_Core_QDirListing_QDirListing, newQStringQStringListQDirListingIteratorFlags)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval nameFilters;
	zval *path_param = NULL, *nameFilters_param = NULL, *flags = NULL, flags_sub, __$null;
	zval path;

	ZVAL_UNDEF(&path);
	ZVAL_UNDEF(&flags_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&nameFilters);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(2, 3)
		Z_PARAM_STR(path)
		Z_PARAM_ARRAY(nameFilters)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(flags)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 1, &path_param, &nameFilters_param, &flags);
	zephir_get_strval(&path, path_param);
	zephir_get_arrval(&nameFilters, nameFilters_param);
	if (!flags) {
		flags = &flags_sub;
		flags = &__$null;
	}
	RETURN_MM_LONG(phpqt_qdirlisting_new_q_string_q_string_list_q_dir_listing_iterator_flags(&path, &nameFilters, flags));
}

PHP_METHOD(Qt_Core_QDirListing_QDirListing, swap)
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
	phpqt_qdirlisting_swap(&_0, &_1);
}

PHP_METHOD(Qt_Core_QDirListing_QDirListing, iteratorPath)
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
	phpqt_qdirlisting_iterator_path(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QDirListing_QDirListing, iteratorFlags)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qdirlisting_iterator_flags(&_0));
}

PHP_METHOD(Qt_Core_QDirListing_QDirListing, nameFilters)
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
	phpqt_qdirlisting_name_filters(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QDirListing_QDirListing, end)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qdirlisting_end(&_0));
}

PHP_METHOD(Qt_Core_QDirListing_QDirListing, cend)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qdirlisting_cend(&_0));
}

PHP_METHOD(Qt_Core_QDirListing_QDirListing, constEnd)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qdirlisting_const_end(&_0));
}

