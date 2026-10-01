
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
#include "src/core-qfilesystemwatcher.h"
#include "kernel/object.h"
#include "kernel/string.h"
#include "kernel/memory.h"
#include "kernel/operators.h"


ZEPHIR_INIT_CLASS(Qt_Core_QFileSystemWatcher_QFileSystemWatcher)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Core\\QFileSystemWatcher, QFileSystemWatcher, qt, core_qfilesystemwatcher_qfilesystemwatcher, qt_core_qfilesystemwatcher_qfilesystemwatcher_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Core_QFileSystemWatcher_QFileSystemWatcher, staticMetaObject)
{

	RETURN_LONG(phpqt_qfilesystemwatcher_static_meta_object());
}

PHP_METHOD(Qt_Core_QFileSystemWatcher_QFileSystemWatcher, tr)
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
	phpqt_qfilesystemwatcher_tr(&result, s, c, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QFileSystemWatcher_QFileSystemWatcher, new_)
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
	RETURN_LONG(phpqt_qfilesystemwatcher_new(&_0));
}

PHP_METHOD(Qt_Core_QFileSystemWatcher_QFileSystemWatcher, newQStringListQObject)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long parent_;
	zval *paths_param = NULL, *parent__param = NULL, _0;
	zval paths;

	ZVAL_UNDEF(&paths);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_ARRAY(paths)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(parent_)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 1, &paths_param, &parent__param);
	zephir_get_arrval(&paths, paths_param);
	if (!parent__param) {
		parent_ = 0;
	} else {
		}
	ZVAL_LONG(&_0, parent_);
	RETURN_MM_LONG(phpqt_qfilesystemwatcher_new_q_string_list_q_object(&paths, &_0));
}

PHP_METHOD(Qt_Core_QFileSystemWatcher_QFileSystemWatcher, addPath)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval file;
	zval *handle_param = NULL, *file_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&file);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(file)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &file_param);
	zephir_get_strval(&file, file_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qfilesystemwatcher_add_path(&_0, &file);
	RETURN_MM_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QFileSystemWatcher_QFileSystemWatcher, addPaths)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval files;
	zval *handle_param = NULL, *files_param = NULL, result, _0;
	zend_long handle;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&files);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ARRAY(files)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &files_param);
	zephir_get_arrval(&files, files_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	phpqt_qfilesystemwatcher_add_paths(&result, &_0, &files);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QFileSystemWatcher_QFileSystemWatcher, removePath)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval file;
	zval *handle_param = NULL, *file_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&file);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(file)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &file_param);
	zephir_get_strval(&file, file_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qfilesystemwatcher_remove_path(&_0, &file);
	RETURN_MM_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QFileSystemWatcher_QFileSystemWatcher, removePaths)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval files;
	zval *handle_param = NULL, *files_param = NULL, result, _0;
	zend_long handle;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&files);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ARRAY(files)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &files_param);
	zephir_get_arrval(&files, files_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	phpqt_qfilesystemwatcher_remove_paths(&result, &_0, &files);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QFileSystemWatcher_QFileSystemWatcher, files)
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
	phpqt_qfilesystemwatcher_files(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QFileSystemWatcher_QFileSystemWatcher, directories)
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
	phpqt_qfilesystemwatcher_directories(&result, &_0);
	RETURN_CCTOR(&result);
}

