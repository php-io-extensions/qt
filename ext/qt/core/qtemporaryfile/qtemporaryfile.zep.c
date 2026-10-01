
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
#include "src/core-qtemporaryfile.h"
#include "kernel/object.h"
#include "kernel/string.h"
#include "kernel/memory.h"
#include "kernel/operators.h"


ZEPHIR_INIT_CLASS(Qt_Core_QTemporaryFile_QTemporaryFile)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Core\\QTemporaryFile, QTemporaryFile, qt, core_qtemporaryfile_qtemporaryfile, qt_core_qtemporaryfile_qtemporaryfile_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Core_QTemporaryFile_QTemporaryFile, staticMetaObject)
{

	RETURN_LONG(phpqt_qtemporaryfile_static_meta_object());
}

PHP_METHOD(Qt_Core_QTemporaryFile_QTemporaryFile, tr)
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
	phpqt_qtemporaryfile_tr(&result, s, c, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QTemporaryFile_QTemporaryFile, new_)
{

	RETURN_LONG(phpqt_qtemporaryfile_new());
}

PHP_METHOD(Qt_Core_QTemporaryFile_QTemporaryFile, newQString)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *templateName_param = NULL;
	zval templateName;

	ZVAL_UNDEF(&templateName);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_STR(templateName)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &templateName_param);
	zephir_get_strval(&templateName, templateName_param);
	RETURN_MM_LONG(phpqt_qtemporaryfile_new_q_string(&templateName));
}

PHP_METHOD(Qt_Core_QTemporaryFile_QTemporaryFile, newQObject)
{
	zval *parent__param = NULL, _0;
	zend_long parent_;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(parent_)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &parent__param);
	ZVAL_LONG(&_0, parent_);
	RETURN_LONG(phpqt_qtemporaryfile_new_q_object(&_0));
}

PHP_METHOD(Qt_Core_QTemporaryFile_QTemporaryFile, newQStringQObject)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long parent_;
	zval *templateName_param = NULL, *parent__param = NULL, _0;
	zval templateName;

	ZVAL_UNDEF(&templateName);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_STR(templateName)
		Z_PARAM_LONG(parent_)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &templateName_param, &parent__param);
	zephir_get_strval(&templateName, templateName_param);
	ZVAL_LONG(&_0, parent_);
	RETURN_MM_LONG(phpqt_qtemporaryfile_new_q_string_q_object(&templateName, &_0));
}

PHP_METHOD(Qt_Core_QTemporaryFile_QTemporaryFile, autoRemove)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qtemporaryfile_auto_remove(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QTemporaryFile_QTemporaryFile, setAutoRemove)
{
	zend_bool b;
	zval *handle_param = NULL, *b_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_BOOL(b)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &b_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_BOOL(&_1, (b ? 1 : 0));
	phpqt_qtemporaryfile_set_auto_remove(&_0, &_1);
}

PHP_METHOD(Qt_Core_QTemporaryFile_QTemporaryFile, open)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qtemporaryfile_open(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QTemporaryFile_QTemporaryFile, fileName)
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
	phpqt_qtemporaryfile_file_name(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QTemporaryFile_QTemporaryFile, fileTemplate)
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
	phpqt_qtemporaryfile_file_template(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QTemporaryFile_QTemporaryFile, setFileTemplate)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval name;
	zval *handle_param = NULL, *name_param = NULL, _0;
	zend_long handle;

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
	phpqt_qtemporaryfile_set_file_template(&_0, &name);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_Core_QTemporaryFile_QTemporaryFile, rename)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval newName;
	zval *handle_param = NULL, *newName_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&newName);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(newName)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &newName_param);
	zephir_get_strval(&newName, newName_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qtemporaryfile_rename(&_0, &newName);
	RETURN_MM_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QTemporaryFile_QTemporaryFile, createNativeFile)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *fileName_param = NULL;
	zval fileName;

	ZVAL_UNDEF(&fileName);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_STR(fileName)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &fileName_param);
	zephir_get_strval(&fileName, fileName_param);
	RETURN_MM_LONG(phpqt_qtemporaryfile_create_native_file(&fileName));
}

PHP_METHOD(Qt_Core_QTemporaryFile_QTemporaryFile, createNativeFileQFile)
{
	zval *file_param = NULL, _0;
	zend_long file;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(file)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &file_param);
	ZVAL_LONG(&_0, file);
	RETURN_LONG(phpqt_qtemporaryfile_create_native_file_q_file(&_0));
}

PHP_METHOD(Qt_Core_QTemporaryFile_QTemporaryFile, openQIODeviceBaseOpenMode)
{
	zval *handle_param = NULL, *flags_param = NULL, _0, _1;
	zend_long handle, flags, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(flags)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &flags_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, flags);
	r = phpqt_qtemporaryfile_open_q_i_o_device_base_open_mode(&_0, &_1);
	RETURN_BOOL(r == 1);
}

