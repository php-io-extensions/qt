
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
#include "src/core-qdir.h"
#include "kernel/operators.h"
#include "kernel/memory.h"
#include "kernel/object.h"
#include "kernel/string.h"


ZEPHIR_INIT_CLASS(Qt_Core_QDir_QDir)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Core\\QDir, QDir, qt, core_qdir_qdir, qt_core_qdir_qdir_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Core_QDir_QDir, new_)
{
	zval *arg0_param = NULL, _0;
	zend_long arg0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(arg0)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &arg0_param);
	ZVAL_LONG(&_0, arg0);
	RETURN_LONG(phpqt_qdir_new(&_0));
}

PHP_METHOD(Qt_Core_QDir_QDir, newQString)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *path_param = NULL;
	zval path;

	ZVAL_UNDEF(&path);
	ZEND_PARSE_PARAMETERS_START(0, 1)
		Z_PARAM_OPTIONAL
		Z_PARAM_STR(path)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 0, 1, &path_param);
	if (!path_param) {
		ZEPHIR_INIT_VAR(&path);
		ZVAL_STRING(&path, "");
	} else {
		zephir_get_strval(&path, path_param);
	}
	RETURN_MM_LONG(phpqt_qdir_new_q_string(&path));
}

PHP_METHOD(Qt_Core_QDir_QDir, newQStringQStringQDirSortFlagsQDirFilters)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *path_param = NULL, *nameFilter_param = NULL, *sort = NULL, sort_sub, *filter = NULL, filter_sub, __$null;
	zval path, nameFilter;

	ZVAL_UNDEF(&path);
	ZVAL_UNDEF(&nameFilter);
	ZVAL_UNDEF(&sort_sub);
	ZVAL_UNDEF(&filter_sub);
	ZVAL_NULL(&__$null);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(2, 4)
		Z_PARAM_STR(path)
		Z_PARAM_STR(nameFilter)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(sort)
		Z_PARAM_ZVAL_OR_NULL(filter)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 2, &path_param, &nameFilter_param, &sort, &filter);
	zephir_get_strval(&path, path_param);
	zephir_get_strval(&nameFilter, nameFilter_param);
	if (!sort) {
		sort = &sort_sub;
		sort = &__$null;
	}
	if (!filter) {
		filter = &filter_sub;
		filter = &__$null;
	}
	RETURN_MM_LONG(phpqt_qdir_new_q_string_q_string_q_dir_sort_flags_q_dir_filters(&path, &nameFilter, sort, filter));
}

PHP_METHOD(Qt_Core_QDir_QDir, swap)
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
	phpqt_qdir_swap(&_0, &_1);
}

PHP_METHOD(Qt_Core_QDir_QDir, setPath)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval path;
	zval *handle_param = NULL, *path_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&path);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(path)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &path_param);
	zephir_get_strval(&path, path_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qdir_set_path(&_0, &path);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_Core_QDir_QDir, path)
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
	phpqt_qdir_path(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QDir_QDir, absolutePath)
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
	phpqt_qdir_absolute_path(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QDir_QDir, canonicalPath)
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
	phpqt_qdir_canonical_path(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QDir_QDir, setSearchPaths)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval searchPaths;
	zval *prefix_param = NULL, *searchPaths_param = NULL;
	zval prefix;

	ZVAL_UNDEF(&prefix);
	ZVAL_UNDEF(&searchPaths);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_STR(prefix)
		Z_PARAM_ARRAY(searchPaths)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &prefix_param, &searchPaths_param);
	zephir_get_strval(&prefix, prefix_param);
	zephir_get_arrval(&searchPaths, searchPaths_param);
	phpqt_qdir_set_search_paths(&prefix, &searchPaths);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_Core_QDir_QDir, addSearchPath)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *prefix_param = NULL, *path_param = NULL;
	zval prefix, path;

	ZVAL_UNDEF(&prefix);
	ZVAL_UNDEF(&path);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_STR(prefix)
		Z_PARAM_STR(path)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &prefix_param, &path_param);
	zephir_get_strval(&prefix, prefix_param);
	zephir_get_strval(&path, path_param);
	phpqt_qdir_add_search_path(&prefix, &path);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_Core_QDir_QDir, searchPaths)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *prefix_param = NULL, result;
	zval prefix;

	ZVAL_UNDEF(&prefix);
	ZVAL_UNDEF(&result);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_STR(prefix)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &prefix_param);
	zephir_get_strval(&prefix, prefix_param);
	ZEPHIR_INIT_VAR(&result);
	phpqt_qdir_search_paths(&result, &prefix);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QDir_QDir, dirName)
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
	phpqt_qdir_dir_name(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QDir_QDir, filePath)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval fileName;
	zval *handle_param = NULL, *fileName_param = NULL, result, _0;
	zend_long handle;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&fileName);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(fileName)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &fileName_param);
	zephir_get_strval(&fileName, fileName_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	phpqt_qdir_file_path(&result, &_0, &fileName);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QDir_QDir, absoluteFilePath)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval fileName;
	zval *handle_param = NULL, *fileName_param = NULL, result, _0;
	zend_long handle;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&fileName);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(fileName)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &fileName_param);
	zephir_get_strval(&fileName, fileName_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	phpqt_qdir_absolute_file_path(&result, &_0, &fileName);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QDir_QDir, relativeFilePath)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval fileName;
	zval *handle_param = NULL, *fileName_param = NULL, result, _0;
	zend_long handle;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&fileName);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(fileName)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &fileName_param);
	zephir_get_strval(&fileName, fileName_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	phpqt_qdir_relative_file_path(&result, &_0, &fileName);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QDir_QDir, toNativeSeparators)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *pathName_param = NULL, result;
	zval pathName;

	ZVAL_UNDEF(&pathName);
	ZVAL_UNDEF(&result);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_STR(pathName)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &pathName_param);
	zephir_get_strval(&pathName, pathName_param);
	ZEPHIR_INIT_VAR(&result);
	phpqt_qdir_to_native_separators(&result, &pathName);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QDir_QDir, fromNativeSeparators)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *pathName_param = NULL, result;
	zval pathName;

	ZVAL_UNDEF(&pathName);
	ZVAL_UNDEF(&result);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_STR(pathName)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &pathName_param);
	zephir_get_strval(&pathName, pathName_param);
	ZEPHIR_INIT_VAR(&result);
	phpqt_qdir_from_native_separators(&result, &pathName);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QDir_QDir, cd)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval dirName;
	zval *handle_param = NULL, *dirName_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&dirName);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(dirName)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &dirName_param);
	zephir_get_strval(&dirName, dirName_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qdir_cd(&_0, &dirName);
	RETURN_MM_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QDir_QDir, cdUp)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qdir_cd_up(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QDir_QDir, nameFilters)
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
	phpqt_qdir_name_filters(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QDir_QDir, setNameFilters)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval nameFilters;
	zval *handle_param = NULL, *nameFilters_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&nameFilters);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ARRAY(nameFilters)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &nameFilters_param);
	zephir_get_arrval(&nameFilters, nameFilters_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qdir_set_name_filters(&_0, &nameFilters);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_Core_QDir_QDir, filter)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qdir_filter(&_0));
}

PHP_METHOD(Qt_Core_QDir_QDir, setFilter)
{
	zval *handle_param = NULL, *filter_param = NULL, _0, _1;
	zend_long handle, filter;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(filter)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &filter_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, filter);
	phpqt_qdir_set_filter(&_0, &_1);
}

PHP_METHOD(Qt_Core_QDir_QDir, sorting)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qdir_sorting(&_0));
}

PHP_METHOD(Qt_Core_QDir_QDir, setSorting)
{
	zval *handle_param = NULL, *sort_param = NULL, _0, _1;
	zend_long handle, sort;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(sort)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &sort_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, sort);
	phpqt_qdir_set_sorting(&_0, &_1);
}

PHP_METHOD(Qt_Core_QDir_QDir, count)
{
	zval *handle_param = NULL, *arg0 = NULL, arg0_sub, __$null, _0;
	zend_long handle;

	ZVAL_UNDEF(&arg0_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(arg0)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 1, &handle_param, &arg0);
	if (!arg0) {
		arg0 = &arg0_sub;
		arg0 = &__$null;
	}
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qdir_count(&_0, arg0));
}

PHP_METHOD(Qt_Core_QDir_QDir, isEmpty)
{
	zval *handle_param = NULL, *filters = NULL, filters_sub, __$null, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&filters_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(filters)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 1, &handle_param, &filters);
	if (!filters) {
		filters = &filters_sub;
		filters = &__$null;
	}
	ZVAL_LONG(&_0, handle);
	r = phpqt_qdir_is_empty(&_0, filters);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QDir_QDir, nameFiltersFromString)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *nameFilter_param = NULL, result;
	zval nameFilter;

	ZVAL_UNDEF(&nameFilter);
	ZVAL_UNDEF(&result);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_STR(nameFilter)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &nameFilter_param);
	zephir_get_strval(&nameFilter, nameFilter_param);
	ZEPHIR_INIT_VAR(&result);
	phpqt_qdir_name_filters_from_string(&result, &nameFilter);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QDir_QDir, entryList)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, *filters = NULL, filters_sub, *sort = NULL, sort_sub, __$null, result, _0;
	zend_long handle;

	ZVAL_UNDEF(&filters_sub);
	ZVAL_UNDEF(&sort_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(1, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(filters)
		Z_PARAM_ZVAL_OR_NULL(sort)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 2, &handle_param, &filters, &sort);
	if (!filters) {
		filters = &filters_sub;
		filters = &__$null;
	}
	if (!sort) {
		sort = &sort_sub;
		sort = &__$null;
	}
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	phpqt_qdir_entry_list(&result, &_0, filters, sort);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QDir_QDir, entryListQStringListQDirFiltersQDirSortFlags)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval nameFilters;
	zval *handle_param = NULL, *nameFilters_param = NULL, *filters = NULL, filters_sub, *sort = NULL, sort_sub, __$null, result, _0;
	zend_long handle;

	ZVAL_UNDEF(&filters_sub);
	ZVAL_UNDEF(&sort_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&nameFilters);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(2, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_ARRAY(nameFilters)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(filters)
		Z_PARAM_ZVAL_OR_NULL(sort)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 2, &handle_param, &nameFilters_param, &filters, &sort);
	zephir_get_arrval(&nameFilters, nameFilters_param);
	if (!filters) {
		filters = &filters_sub;
		filters = &__$null;
	}
	if (!sort) {
		sort = &sort_sub;
		sort = &__$null;
	}
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	phpqt_qdir_entry_list_q_string_list_q_dir_filters_q_dir_sort_flags(&result, &_0, &nameFilters, filters, sort);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QDir_QDir, entryInfoList)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, *filters = NULL, filters_sub, *sort = NULL, sort_sub, __$null, result, _0;
	zend_long handle;

	ZVAL_UNDEF(&filters_sub);
	ZVAL_UNDEF(&sort_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(1, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(filters)
		Z_PARAM_ZVAL_OR_NULL(sort)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 2, &handle_param, &filters, &sort);
	if (!filters) {
		filters = &filters_sub;
		filters = &__$null;
	}
	if (!sort) {
		sort = &sort_sub;
		sort = &__$null;
	}
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	phpqt_qdir_entry_info_list(&result, &_0, filters, sort);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QDir_QDir, entryInfoListQStringListQDirFiltersQDirSortFlags)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval nameFilters;
	zval *handle_param = NULL, *nameFilters_param = NULL, *filters = NULL, filters_sub, *sort = NULL, sort_sub, __$null, result, _0;
	zend_long handle;

	ZVAL_UNDEF(&filters_sub);
	ZVAL_UNDEF(&sort_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&nameFilters);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(2, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_ARRAY(nameFilters)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(filters)
		Z_PARAM_ZVAL_OR_NULL(sort)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 2, &handle_param, &nameFilters_param, &filters, &sort);
	zephir_get_arrval(&nameFilters, nameFilters_param);
	if (!filters) {
		filters = &filters_sub;
		filters = &__$null;
	}
	if (!sort) {
		sort = &sort_sub;
		sort = &__$null;
	}
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	phpqt_qdir_entry_info_list_q_string_list_q_dir_filters_q_dir_sort_flags(&result, &_0, &nameFilters, filters, sort);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QDir_QDir, mkdir)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval dirName;
	zval *handle_param = NULL, *dirName_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&dirName);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(dirName)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &dirName_param);
	zephir_get_strval(&dirName, dirName_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qdir_mkdir(&_0, &dirName);
	RETURN_MM_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QDir_QDir, mkdirQStringQFileDevicePermissions)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval dirName;
	zval *handle_param = NULL, *dirName_param = NULL, *permissions_param = NULL, _0, _1;
	zend_long handle, permissions, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&dirName);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(dirName)
		Z_PARAM_LONG(permissions)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 3, 0, &handle_param, &dirName_param, &permissions_param);
	zephir_get_strval(&dirName, dirName_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, permissions);
	r = phpqt_qdir_mkdir_q_string_q_file_device_permissions(&_0, &dirName, &_1);
	RETURN_MM_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QDir_QDir, rmdir)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval dirName;
	zval *handle_param = NULL, *dirName_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&dirName);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(dirName)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &dirName_param);
	zephir_get_strval(&dirName, dirName_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qdir_rmdir(&_0, &dirName);
	RETURN_MM_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QDir_QDir, mkpath)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval dirPath;
	zval *handle_param = NULL, *dirPath_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&dirPath);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(dirPath)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &dirPath_param);
	zephir_get_strval(&dirPath, dirPath_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qdir_mkpath(&_0, &dirPath);
	RETURN_MM_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QDir_QDir, rmpath)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval dirPath;
	zval *handle_param = NULL, *dirPath_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&dirPath);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(dirPath)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &dirPath_param);
	zephir_get_strval(&dirPath, dirPath_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qdir_rmpath(&_0, &dirPath);
	RETURN_MM_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QDir_QDir, removeRecursively)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qdir_remove_recursively(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QDir_QDir, isReadable)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qdir_is_readable(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QDir_QDir, exists)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qdir_exists(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QDir_QDir, isRoot)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qdir_is_root(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QDir_QDir, isRelativePath)
{
	zend_long r = 0;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *path_param = NULL;
	zval path;

	ZVAL_UNDEF(&path);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_STR(path)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &path_param);
	zephir_get_strval(&path, path_param);
	r = phpqt_qdir_is_relative_path(&path);
	RETURN_MM_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QDir_QDir, isAbsolutePath)
{
	zend_long r = 0;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *path_param = NULL;
	zval path;

	ZVAL_UNDEF(&path);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_STR(path)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &path_param);
	zephir_get_strval(&path, path_param);
	r = phpqt_qdir_is_absolute_path(&path);
	RETURN_MM_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QDir_QDir, isRelative)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qdir_is_relative(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QDir_QDir, isAbsolute)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qdir_is_absolute(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QDir_QDir, makeAbsolute)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qdir_make_absolute(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QDir_QDir, remove)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval fileName;
	zval *handle_param = NULL, *fileName_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&fileName);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(fileName)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &fileName_param);
	zephir_get_strval(&fileName, fileName_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qdir_remove(&_0, &fileName);
	RETURN_MM_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QDir_QDir, rename)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval oldName, newName;
	zval *handle_param = NULL, *oldName_param = NULL, *newName_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&oldName);
	ZVAL_UNDEF(&newName);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(oldName)
		Z_PARAM_STR(newName)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 3, 0, &handle_param, &oldName_param, &newName_param);
	zephir_get_strval(&oldName, oldName_param);
	zephir_get_strval(&newName, newName_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qdir_rename(&_0, &oldName, &newName);
	RETURN_MM_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QDir_QDir, existsQString)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval name;
	zval *handle_param = NULL, *name_param = NULL, _0;
	zend_long handle, r = 0;

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
	r = phpqt_qdir_exists_q_string(&_0, &name);
	RETURN_MM_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QDir_QDir, drives)
{
	zval result;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;

	ZVAL_UNDEF(&result);
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);

	ZEPHIR_INIT_VAR(&result);
	phpqt_qdir_drives(&result);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QDir_QDir, listSeparator)
{
	zval result;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;

	ZVAL_UNDEF(&result);
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);

	ZEPHIR_INIT_VAR(&result);
	phpqt_qdir_list_separator(&result);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QDir_QDir, separator)
{
	zval result;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;

	ZVAL_UNDEF(&result);
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);

	ZEPHIR_INIT_VAR(&result);
	phpqt_qdir_separator(&result);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QDir_QDir, setCurrent)
{
	zend_long r = 0;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *path_param = NULL;
	zval path;

	ZVAL_UNDEF(&path);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_STR(path)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &path_param);
	zephir_get_strval(&path, path_param);
	r = phpqt_qdir_set_current(&path);
	RETURN_MM_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QDir_QDir, current)
{

	RETURN_LONG(phpqt_qdir_current());
}

PHP_METHOD(Qt_Core_QDir_QDir, currentPath)
{
	zval result;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;

	ZVAL_UNDEF(&result);
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);

	ZEPHIR_INIT_VAR(&result);
	phpqt_qdir_current_path(&result);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QDir_QDir, home)
{

	RETURN_LONG(phpqt_qdir_home());
}

PHP_METHOD(Qt_Core_QDir_QDir, homePath)
{
	zval result;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;

	ZVAL_UNDEF(&result);
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);

	ZEPHIR_INIT_VAR(&result);
	phpqt_qdir_home_path(&result);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QDir_QDir, root)
{

	RETURN_LONG(phpqt_qdir_root());
}

PHP_METHOD(Qt_Core_QDir_QDir, rootPath)
{
	zval result;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;

	ZVAL_UNDEF(&result);
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);

	ZEPHIR_INIT_VAR(&result);
	phpqt_qdir_root_path(&result);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QDir_QDir, temp)
{

	RETURN_LONG(phpqt_qdir_temp());
}

PHP_METHOD(Qt_Core_QDir_QDir, tempPath)
{
	zval result;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;

	ZVAL_UNDEF(&result);
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);

	ZEPHIR_INIT_VAR(&result);
	phpqt_qdir_temp_path(&result);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QDir_QDir, match_)
{
	zend_long r = 0;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval fileName;
	zval *filters_param = NULL, *fileName_param = NULL;
	zval filters;

	ZVAL_UNDEF(&filters);
	ZVAL_UNDEF(&fileName);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_ARRAY(filters)
		Z_PARAM_STR(fileName)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &filters_param, &fileName_param);
	zephir_get_arrval(&filters, filters_param);
	zephir_get_strval(&fileName, fileName_param);
	r = phpqt_qdir_match(&filters, &fileName);
	RETURN_MM_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QDir_QDir, matchQStringQString)
{
	zend_long r = 0;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *filter_param = NULL, *fileName_param = NULL;
	zval filter, fileName;

	ZVAL_UNDEF(&filter);
	ZVAL_UNDEF(&fileName);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_STR(filter)
		Z_PARAM_STR(fileName)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &filter_param, &fileName_param);
	zephir_get_strval(&filter, filter_param);
	zephir_get_strval(&fileName, fileName_param);
	r = phpqt_qdir_match_q_string_q_string(&filter, &fileName);
	RETURN_MM_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QDir_QDir, cleanPath)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *path_param = NULL, result;
	zval path;

	ZVAL_UNDEF(&path);
	ZVAL_UNDEF(&result);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_STR(path)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &path_param);
	zephir_get_strval(&path, path_param);
	ZEPHIR_INIT_VAR(&result);
	phpqt_qdir_clean_path(&result, &path);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QDir_QDir, refresh)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qdir_refresh(&_0);
}

