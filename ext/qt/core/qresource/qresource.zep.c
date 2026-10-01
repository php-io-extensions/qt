
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
#include "src/core-qresource.h"
#include "kernel/memory.h"
#include "kernel/operators.h"
#include "kernel/object.h"
#include "kernel/string.h"


ZEPHIR_INIT_CLASS(Qt_Core_QResource_QResource)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Core\\QResource, QResource, qt, core_qresource_qresource, qt_core_qresource_qresource_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Core_QResource_QResource, new_)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *file_param = NULL, *locale = NULL, locale_sub, __$null;
	zval file;

	ZVAL_UNDEF(&file);
	ZVAL_UNDEF(&locale_sub);
	ZVAL_NULL(&__$null);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(0, 2)
		Z_PARAM_OPTIONAL
		Z_PARAM_STR(file)
		Z_PARAM_ZVAL_OR_NULL(locale)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 0, 2, &file_param, &locale);
	if (!file_param) {
		ZEPHIR_INIT_VAR(&file);
		ZVAL_STRING(&file, "");
	} else {
		zephir_get_strval(&file, file_param);
	}
	if (!locale) {
		locale = &locale_sub;
		locale = &__$null;
	}
	RETURN_MM_LONG(phpqt_qresource_new(&file, locale));
}

PHP_METHOD(Qt_Core_QResource_QResource, setFileName)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval file;
	zval *handle_param = NULL, *file_param = NULL, _0;
	zend_long handle;

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
	phpqt_qresource_set_file_name(&_0, &file);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_Core_QResource_QResource, fileName)
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
	phpqt_qresource_file_name(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QResource_QResource, absoluteFilePath)
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
	phpqt_qresource_absolute_file_path(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QResource_QResource, setLocale)
{
	zval *handle_param = NULL, *locale_param = NULL, _0, _1;
	zend_long handle, locale;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(locale)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &locale_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, locale);
	phpqt_qresource_set_locale(&_0, &_1);
}

PHP_METHOD(Qt_Core_QResource_QResource, locale)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qresource_locale(&_0));
}

PHP_METHOD(Qt_Core_QResource_QResource, isValid)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qresource_is_valid(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QResource_QResource, compressionAlgorithm)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qresource_compression_algorithm(&_0));
}

PHP_METHOD(Qt_Core_QResource_QResource, size)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qresource_size(&_0));
}

PHP_METHOD(Qt_Core_QResource_QResource, uncompressedSize)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qresource_uncompressed_size(&_0));
}

PHP_METHOD(Qt_Core_QResource_QResource, uncompressedData)
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
	phpqt_qresource_uncompressed_data(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QResource_QResource, lastModified)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qresource_last_modified(&_0));
}

PHP_METHOD(Qt_Core_QResource_QResource, registerResource)
{
	zend_long r = 0;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *rccFilename_param = NULL, *resourceRoot_param = NULL;
	zval rccFilename, resourceRoot;

	ZVAL_UNDEF(&rccFilename);
	ZVAL_UNDEF(&resourceRoot);
	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_STR(rccFilename)
		Z_PARAM_OPTIONAL
		Z_PARAM_STR(resourceRoot)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 1, &rccFilename_param, &resourceRoot_param);
	zephir_get_strval(&rccFilename, rccFilename_param);
	if (!resourceRoot_param) {
		ZEPHIR_INIT_VAR(&resourceRoot);
		ZVAL_STRING(&resourceRoot, "");
	} else {
		zephir_get_strval(&resourceRoot, resourceRoot_param);
	}
	r = phpqt_qresource_register_resource(&rccFilename, &resourceRoot);
	RETURN_MM_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QResource_QResource, unregisterResource)
{
	zend_long r = 0;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *rccFilename_param = NULL, *resourceRoot_param = NULL;
	zval rccFilename, resourceRoot;

	ZVAL_UNDEF(&rccFilename);
	ZVAL_UNDEF(&resourceRoot);
	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_STR(rccFilename)
		Z_PARAM_OPTIONAL
		Z_PARAM_STR(resourceRoot)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 1, &rccFilename_param, &resourceRoot_param);
	zephir_get_strval(&rccFilename, rccFilename_param);
	if (!resourceRoot_param) {
		ZEPHIR_INIT_VAR(&resourceRoot);
		ZVAL_STRING(&resourceRoot, "");
	} else {
		zephir_get_strval(&resourceRoot, resourceRoot_param);
	}
	r = phpqt_qresource_unregister_resource(&rccFilename, &resourceRoot);
	RETURN_MM_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QResource_QResource, registerResourceUcharQString)
{
	zend_long r = 0;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval resourceRoot;
	zval *rccData = NULL, rccData_sub, *resourceRoot_param = NULL;

	ZVAL_UNDEF(&rccData_sub);
	ZVAL_UNDEF(&resourceRoot);
	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_ZVAL(rccData)
		Z_PARAM_OPTIONAL
		Z_PARAM_STR(resourceRoot)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 1, &rccData, &resourceRoot_param);
	if (!resourceRoot_param) {
		ZEPHIR_INIT_VAR(&resourceRoot);
		ZVAL_STRING(&resourceRoot, "");
	} else {
		zephir_get_strval(&resourceRoot, resourceRoot_param);
	}
	r = phpqt_qresource_register_resource_uchar_q_string(rccData, &resourceRoot);
	RETURN_MM_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QResource_QResource, unregisterResourceUcharQString)
{
	zend_long r = 0;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval resourceRoot;
	zval *rccData = NULL, rccData_sub, *resourceRoot_param = NULL;

	ZVAL_UNDEF(&rccData_sub);
	ZVAL_UNDEF(&resourceRoot);
	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_ZVAL(rccData)
		Z_PARAM_OPTIONAL
		Z_PARAM_STR(resourceRoot)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 1, &rccData, &resourceRoot_param);
	if (!resourceRoot_param) {
		ZEPHIR_INIT_VAR(&resourceRoot);
		ZVAL_STRING(&resourceRoot, "");
	} else {
		zephir_get_strval(&resourceRoot, resourceRoot_param);
	}
	r = phpqt_qresource_unregister_resource_uchar_q_string(rccData, &resourceRoot);
	RETURN_MM_BOOL(r == 1);
}

