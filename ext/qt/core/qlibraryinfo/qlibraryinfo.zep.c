
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
#include "src/core-qlibraryinfo.h"
#include "kernel/memory.h"
#include "kernel/object.h"
#include "kernel/string.h"
#include "kernel/operators.h"


ZEPHIR_INIT_CLASS(Qt_Core_QLibraryInfo_QLibraryInfo)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Core\\QLibraryInfo, QLibraryInfo, qt, core_qlibraryinfo_qlibraryinfo, qt_core_qlibraryinfo_qlibraryinfo_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Core_QLibraryInfo_QLibraryInfo, build)
{
	zval result;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;

	ZVAL_UNDEF(&result);
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);

	ZEPHIR_INIT_VAR(&result);
	phpqt_qlibraryinfo_build(&result);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QLibraryInfo_QLibraryInfo, isDebugBuild)
{
	zend_long r = 0;
	r = phpqt_qlibraryinfo_is_debug_build();
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QLibraryInfo_QLibraryInfo, isSharedBuild)
{
	zend_long r = 0;
	r = phpqt_qlibraryinfo_is_shared_build();
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QLibraryInfo_QLibraryInfo, version)
{

	RETURN_LONG(phpqt_qlibraryinfo_version());
}

PHP_METHOD(Qt_Core_QLibraryInfo_QLibraryInfo, path)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *p_param = NULL, result, _0;
	zend_long p;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(p)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &p_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, p);
	phpqt_qlibraryinfo_path(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QLibraryInfo_QLibraryInfo, paths)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *p_param = NULL, result, _0;
	zend_long p;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(p)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &p_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, p);
	phpqt_qlibraryinfo_paths(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QLibraryInfo_QLibraryInfo, platformPluginArguments)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *platformName_param = NULL, result;
	zval platformName;

	ZVAL_UNDEF(&platformName);
	ZVAL_UNDEF(&result);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_STR(platformName)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &platformName_param);
	zephir_get_strval(&platformName, platformName_param);
	ZEPHIR_INIT_VAR(&result);
	phpqt_qlibraryinfo_platform_plugin_arguments(&result, &platformName);
	RETURN_CCTOR(&result);
}

