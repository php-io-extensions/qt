
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
#include "src/core-qmimedatabase.h"
#include "kernel/object.h"
#include "kernel/operators.h"
#include "kernel/memory.h"
#include "kernel/string.h"


ZEPHIR_INIT_CLASS(Qt_Core_QMimeDatabase_QMimeDatabase)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Core\\QMimeDatabase, QMimeDatabase, qt, core_qmimedatabase_qmimedatabase, qt_core_qmimedatabase_qmimedatabase_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Core_QMimeDatabase_QMimeDatabase, new_)
{

	RETURN_LONG(phpqt_qmimedatabase_new());
}

PHP_METHOD(Qt_Core_QMimeDatabase_QMimeDatabase, mimeTypeForName)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval nameOrAlias;
	zval *handle_param = NULL, *nameOrAlias_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&nameOrAlias);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(nameOrAlias)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &nameOrAlias_param);
	zephir_get_strval(&nameOrAlias, nameOrAlias_param);
	ZVAL_LONG(&_0, handle);
	RETURN_MM_LONG(phpqt_qmimedatabase_mime_type_for_name(&_0, &nameOrAlias));
}

PHP_METHOD(Qt_Core_QMimeDatabase_QMimeDatabase, mimeTypeForFile)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval fileName;
	zval *handle_param = NULL, *fileName_param = NULL, *mode = NULL, mode_sub, __$null, _0;
	zend_long handle;

	ZVAL_UNDEF(&mode_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&fileName);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(2, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(fileName)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(mode)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 1, &handle_param, &fileName_param, &mode);
	zephir_get_strval(&fileName, fileName_param);
	if (!mode) {
		mode = &mode_sub;
		mode = &__$null;
	}
	ZVAL_LONG(&_0, handle);
	RETURN_MM_LONG(phpqt_qmimedatabase_mime_type_for_file(&_0, &fileName, mode));
}

PHP_METHOD(Qt_Core_QMimeDatabase_QMimeDatabase, mimeTypeForFileQFileInfoQMimeDatabaseMatchMode)
{
	zval *handle_param = NULL, *fileInfo_param = NULL, *mode = NULL, mode_sub, __$null, _0, _1;
	zend_long handle, fileInfo;

	ZVAL_UNDEF(&mode_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(2, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(fileInfo)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(mode)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 1, &handle_param, &fileInfo_param, &mode);
	if (!mode) {
		mode = &mode_sub;
		mode = &__$null;
	}
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, fileInfo);
	RETURN_LONG(phpqt_qmimedatabase_mime_type_for_file_q_file_info_q_mime_database_match_mode(&_0, &_1, mode));
}

PHP_METHOD(Qt_Core_QMimeDatabase_QMimeDatabase, mimeTypesForFileName)
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
	phpqt_qmimedatabase_mime_types_for_file_name(&result, &_0, &fileName);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QMimeDatabase_QMimeDatabase, mimeTypeForData)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval data;
	zval *handle_param = NULL, *data_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&data);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(data)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &data_param);
	zephir_get_strval(&data, data_param);
	ZVAL_LONG(&_0, handle);
	RETURN_MM_LONG(phpqt_qmimedatabase_mime_type_for_data(&_0, &data));
}

PHP_METHOD(Qt_Core_QMimeDatabase_QMimeDatabase, mimeTypeForDataQIODevice)
{
	zval *handle_param = NULL, *device_param = NULL, _0, _1;
	zend_long handle, device;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(device)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &device_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, device);
	RETURN_LONG(phpqt_qmimedatabase_mime_type_for_data_q_i_o_device(&_0, &_1));
}

PHP_METHOD(Qt_Core_QMimeDatabase_QMimeDatabase, mimeTypeForUrl)
{
	zval *handle_param = NULL, *url_param = NULL, _0, _1;
	zend_long handle, url;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(url)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &url_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, url);
	RETURN_LONG(phpqt_qmimedatabase_mime_type_for_url(&_0, &_1));
}

PHP_METHOD(Qt_Core_QMimeDatabase_QMimeDatabase, mimeTypeForFileNameAndData)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval fileName;
	zval *handle_param = NULL, *fileName_param = NULL, *device_param = NULL, _0, _1;
	zend_long handle, device;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&fileName);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(fileName)
		Z_PARAM_LONG(device)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 3, 0, &handle_param, &fileName_param, &device_param);
	zephir_get_strval(&fileName, fileName_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, device);
	RETURN_MM_LONG(phpqt_qmimedatabase_mime_type_for_file_name_and_data(&_0, &fileName, &_1));
}

PHP_METHOD(Qt_Core_QMimeDatabase_QMimeDatabase, mimeTypeForFileNameAndDataQStringQByteArray)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval fileName, data;
	zval *handle_param = NULL, *fileName_param = NULL, *data_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&fileName);
	ZVAL_UNDEF(&data);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(fileName)
		Z_PARAM_STR(data)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 3, 0, &handle_param, &fileName_param, &data_param);
	zephir_get_strval(&fileName, fileName_param);
	zephir_get_strval(&data, data_param);
	ZVAL_LONG(&_0, handle);
	RETURN_MM_LONG(phpqt_qmimedatabase_mime_type_for_file_name_and_data_q_string_q_byte_array(&_0, &fileName, &data));
}

PHP_METHOD(Qt_Core_QMimeDatabase_QMimeDatabase, suffixForFileName)
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
	phpqt_qmimedatabase_suffix_for_file_name(&result, &_0, &fileName);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QMimeDatabase_QMimeDatabase, allMimeTypes)
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
	phpqt_qmimedatabase_all_mime_types(&result, &_0);
	RETURN_CCTOR(&result);
}

