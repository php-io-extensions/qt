
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
#include "src/core-qstandardpaths.h"
#include "kernel/object.h"
#include "kernel/operators.h"
#include "kernel/memory.h"
#include "kernel/string.h"


ZEPHIR_INIT_CLASS(Qt_Core_QStandardPaths_QStandardPaths)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Core\\QStandardPaths, QStandardPaths, qt, core_qstandardpaths_qstandardpaths, qt_core_qstandardpaths_qstandardpaths_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Core_QStandardPaths_QStandardPaths, staticMetaObject)
{

	RETURN_LONG(phpqt_qstandardpaths_static_meta_object());
}

PHP_METHOD(Qt_Core_QStandardPaths_QStandardPaths, qt_check_for_QGADGET_macro)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qstandardpaths_qt_check_for__q_g_a_d_g_e_t_macro(&_0);
}

PHP_METHOD(Qt_Core_QStandardPaths_QStandardPaths, writableLocation)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *type_param = NULL, result, _0;
	zend_long type;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(type)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &type_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, type);
	phpqt_qstandardpaths_writable_location(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QStandardPaths_QStandardPaths, standardLocations)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *type_param = NULL, result, _0;
	zend_long type;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(type)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &type_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, type);
	phpqt_qstandardpaths_standard_locations(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QStandardPaths_QStandardPaths, locate)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval fileName;
	zval *type_param = NULL, *fileName_param = NULL, *options = NULL, options_sub, __$null, result, _0;
	zend_long type;

	ZVAL_UNDEF(&options_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&fileName);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(2, 3)
		Z_PARAM_LONG(type)
		Z_PARAM_STR(fileName)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(options)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 1, &type_param, &fileName_param, &options);
	zephir_get_strval(&fileName, fileName_param);
	if (!options) {
		options = &options_sub;
		options = &__$null;
	}
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, type);
	phpqt_qstandardpaths_locate(&result, &_0, &fileName, options);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QStandardPaths_QStandardPaths, locateAll)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval fileName;
	zval *type_param = NULL, *fileName_param = NULL, *options = NULL, options_sub, __$null, result, _0;
	zend_long type;

	ZVAL_UNDEF(&options_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&fileName);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(2, 3)
		Z_PARAM_LONG(type)
		Z_PARAM_STR(fileName)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(options)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 1, &type_param, &fileName_param, &options);
	zephir_get_strval(&fileName, fileName_param);
	if (!options) {
		options = &options_sub;
		options = &__$null;
	}
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, type);
	phpqt_qstandardpaths_locate_all(&result, &_0, &fileName, options);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QStandardPaths_QStandardPaths, displayName)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *type_param = NULL, result, _0;
	zend_long type;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(type)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &type_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, type);
	phpqt_qstandardpaths_display_name(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QStandardPaths_QStandardPaths, findExecutable)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *executableName_param = NULL, *paths = NULL, paths_sub, __$null, result;
	zval executableName;

	ZVAL_UNDEF(&executableName);
	ZVAL_UNDEF(&paths_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&result);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_STR(executableName)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(paths)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 1, &executableName_param, &paths);
	zephir_get_strval(&executableName, executableName_param);
	if (!paths) {
		paths = &paths_sub;
		paths = &__$null;
	}
	ZEPHIR_INIT_VAR(&result);
	phpqt_qstandardpaths_find_executable(&result, &executableName, paths);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QStandardPaths_QStandardPaths, setTestModeEnabled)
{
	zval *testMode_param = NULL, _0;
	zend_bool testMode;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_BOOL(testMode)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &testMode_param);
	ZVAL_BOOL(&_0, (testMode ? 1 : 0));
	phpqt_qstandardpaths_set_test_mode_enabled(&_0);
}

PHP_METHOD(Qt_Core_QStandardPaths_QStandardPaths, isTestModeEnabled)
{
	zend_long r = 0;
	r = phpqt_qstandardpaths_is_test_mode_enabled();
	RETURN_BOOL(r == 1);
}

