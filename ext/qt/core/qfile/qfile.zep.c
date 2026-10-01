
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
#include "src/core-qfile.h"
#include "kernel/object.h"
#include "kernel/string.h"
#include "kernel/memory.h"
#include "kernel/operators.h"


ZEPHIR_INIT_CLASS(Qt_Core_QFile_QFile)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Core\\QFile, QFile, qt, core_qfile_qfile, qt_core_qfile_qfile_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Core_QFile_QFile, staticMetaObject)
{

	RETURN_LONG(phpqt_qfile_static_meta_object());
}

PHP_METHOD(Qt_Core_QFile_QFile, tr)
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
	phpqt_qfile_tr(&result, s, c, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QFile_QFile, new_)
{

	RETURN_LONG(phpqt_qfile_new());
}

PHP_METHOD(Qt_Core_QFile_QFile, newQString)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *name_param = NULL;
	zval name;

	ZVAL_UNDEF(&name);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_STR(name)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &name_param);
	zephir_get_strval(&name, name_param);
	RETURN_MM_LONG(phpqt_qfile_new_q_string(&name));
}

PHP_METHOD(Qt_Core_QFile_QFile, newQObject)
{
	zval *parent__param = NULL, _0;
	zend_long parent_;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(parent_)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &parent__param);
	ZVAL_LONG(&_0, parent_);
	RETURN_LONG(phpqt_qfile_new_q_object(&_0));
}

PHP_METHOD(Qt_Core_QFile_QFile, newQStringQObject)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long parent_;
	zval *name_param = NULL, *parent__param = NULL, _0;
	zval name;

	ZVAL_UNDEF(&name);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_STR(name)
		Z_PARAM_LONG(parent_)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &name_param, &parent__param);
	zephir_get_strval(&name, name_param);
	ZVAL_LONG(&_0, parent_);
	RETURN_MM_LONG(phpqt_qfile_new_q_string_q_object(&name, &_0));
}

PHP_METHOD(Qt_Core_QFile_QFile, fileName)
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
	phpqt_qfile_file_name(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QFile_QFile, setFileName)
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
	phpqt_qfile_set_file_name(&_0, &name);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_Core_QFile_QFile, encodeName)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *fileName_param = NULL, result;
	zval fileName;

	ZVAL_UNDEF(&fileName);
	ZVAL_UNDEF(&result);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_STR(fileName)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &fileName_param);
	zephir_get_strval(&fileName, fileName_param);
	ZEPHIR_INIT_VAR(&result);
	phpqt_qfile_encode_name(&result, &fileName);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QFile_QFile, decodeName)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *localFileName_param = NULL, result;
	zval localFileName;

	ZVAL_UNDEF(&localFileName);
	ZVAL_UNDEF(&result);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_STR(localFileName)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &localFileName_param);
	zephir_get_strval(&localFileName, localFileName_param);
	ZEPHIR_INIT_VAR(&result);
	phpqt_qfile_decode_name(&result, &localFileName);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QFile_QFile, decodeNameChar)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *localFileName = NULL, localFileName_sub, result;

	ZVAL_UNDEF(&localFileName_sub);
	ZVAL_UNDEF(&result);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_ZVAL(localFileName)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &localFileName);
	ZEPHIR_INIT_VAR(&result);
	phpqt_qfile_decode_name_char(&result, localFileName);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QFile_QFile, exists)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qfile_exists(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QFile_QFile, existsQString)
{
	zend_long r = 0;
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
	r = phpqt_qfile_exists_q_string(&fileName);
	RETURN_MM_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QFile_QFile, symLinkTarget)
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
	phpqt_qfile_sym_link_target(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QFile_QFile, symLinkTargetQString)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *fileName_param = NULL, result;
	zval fileName;

	ZVAL_UNDEF(&fileName);
	ZVAL_UNDEF(&result);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_STR(fileName)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &fileName_param);
	zephir_get_strval(&fileName, fileName_param);
	ZEPHIR_INIT_VAR(&result);
	phpqt_qfile_sym_link_target_q_string(&result, &fileName);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QFile_QFile, remove)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qfile_remove(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QFile_QFile, removeQString)
{
	zend_long r = 0;
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
	r = phpqt_qfile_remove_q_string(&fileName);
	RETURN_MM_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QFile_QFile, moveToTrash)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qfile_move_to_trash(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QFile_QFile, moveToTrashQStringQString)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *fileName_param = NULL, *pathInTrash = NULL, pathInTrash_sub, __$null, result;
	zval fileName;

	ZVAL_UNDEF(&fileName);
	ZVAL_UNDEF(&pathInTrash_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&result);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_STR(fileName)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(pathInTrash)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 1, &fileName_param, &pathInTrash);
	zephir_get_strval(&fileName, fileName_param);
	if (!pathInTrash) {
		pathInTrash = &pathInTrash_sub;
		pathInTrash = &__$null;
	}
	ZEPHIR_INIT_VAR(&result);
	phpqt_qfile_move_to_trash_q_string_q_string(&result, &fileName, pathInTrash);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QFile_QFile, rename)
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
	r = phpqt_qfile_rename(&_0, &newName);
	RETURN_MM_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QFile_QFile, renameQStringQString)
{
	zend_long r = 0;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *oldName_param = NULL, *newName_param = NULL;
	zval oldName, newName;

	ZVAL_UNDEF(&oldName);
	ZVAL_UNDEF(&newName);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_STR(oldName)
		Z_PARAM_STR(newName)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &oldName_param, &newName_param);
	zephir_get_strval(&oldName, oldName_param);
	zephir_get_strval(&newName, newName_param);
	r = phpqt_qfile_rename_q_string_q_string(&oldName, &newName);
	RETURN_MM_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QFile_QFile, link)
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
	r = phpqt_qfile_link(&_0, &newName);
	RETURN_MM_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QFile_QFile, linkQStringQString)
{
	zend_long r = 0;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *fileName_param = NULL, *newName_param = NULL;
	zval fileName, newName;

	ZVAL_UNDEF(&fileName);
	ZVAL_UNDEF(&newName);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_STR(fileName)
		Z_PARAM_STR(newName)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &fileName_param, &newName_param);
	zephir_get_strval(&fileName, fileName_param);
	zephir_get_strval(&newName, newName_param);
	r = phpqt_qfile_link_q_string_q_string(&fileName, &newName);
	RETURN_MM_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QFile_QFile, copy)
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
	r = phpqt_qfile_copy(&_0, &newName);
	RETURN_MM_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QFile_QFile, copyQStringQString)
{
	zend_long r = 0;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *fileName_param = NULL, *newName_param = NULL;
	zval fileName, newName;

	ZVAL_UNDEF(&fileName);
	ZVAL_UNDEF(&newName);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_STR(fileName)
		Z_PARAM_STR(newName)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &fileName_param, &newName_param);
	zephir_get_strval(&fileName, fileName_param);
	zephir_get_strval(&newName, newName_param);
	r = phpqt_qfile_copy_q_string_q_string(&fileName, &newName);
	RETURN_MM_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QFile_QFile, open)
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
	r = phpqt_qfile_open(&_0, &_1);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QFile_QFile, openQIODeviceBaseOpenModeQFileDevicePermissions)
{
	zval *handle_param = NULL, *flags_param = NULL, *permissions_param = NULL, _0, _1, _2;
	zend_long handle, flags, permissions, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(flags)
		Z_PARAM_LONG(permissions)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &flags_param, &permissions_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, flags);
	ZVAL_LONG(&_2, permissions);
	r = phpqt_qfile_open_q_i_o_device_base_open_mode_q_file_device_permissions(&_0, &_1, &_2);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QFile_QFile, openIntQIODeviceBaseOpenModeQFileDeviceFileHandleFlags)
{
	zval *handle_param = NULL, *fd_param = NULL, *ioFlags_param = NULL, *handleFlags = NULL, handleFlags_sub, __$null, _0, _1, _2;
	zend_long handle, fd, ioFlags, r = 0;

	ZVAL_UNDEF(&handleFlags_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(3, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(fd)
		Z_PARAM_LONG(ioFlags)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(handleFlags)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 1, &handle_param, &fd_param, &ioFlags_param, &handleFlags);
	if (!handleFlags) {
		handleFlags = &handleFlags_sub;
		handleFlags = &__$null;
	}
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, fd);
	ZVAL_LONG(&_2, ioFlags);
	r = phpqt_qfile_open_int_q_i_o_device_base_open_mode_q_file_device_file_handle_flags(&_0, &_1, &_2, handleFlags);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QFile_QFile, size)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qfile_size(&_0));
}

PHP_METHOD(Qt_Core_QFile_QFile, resize)
{
	zval *handle_param = NULL, *sz_param = NULL, _0, _1;
	zend_long handle, sz, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(sz)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &sz_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, sz);
	r = phpqt_qfile_resize(&_0, &_1);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QFile_QFile, resizeQStringQint64)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long sz, r = 0;
	zval *filename_param = NULL, *sz_param = NULL, _0;
	zval filename;

	ZVAL_UNDEF(&filename);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_STR(filename)
		Z_PARAM_LONG(sz)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &filename_param, &sz_param);
	zephir_get_strval(&filename, filename_param);
	ZVAL_LONG(&_0, sz);
	r = phpqt_qfile_resize_q_string_qint64(&filename, &_0);
	RETURN_MM_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QFile_QFile, permissions)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qfile_permissions(&_0));
}

PHP_METHOD(Qt_Core_QFile_QFile, permissionsQString)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *filename_param = NULL;
	zval filename;

	ZVAL_UNDEF(&filename);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_STR(filename)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &filename_param);
	zephir_get_strval(&filename, filename_param);
	RETURN_MM_LONG(phpqt_qfile_permissions_q_string(&filename));
}

PHP_METHOD(Qt_Core_QFile_QFile, setPermissions)
{
	zval *handle_param = NULL, *permissionSpec_param = NULL, _0, _1;
	zend_long handle, permissionSpec, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(permissionSpec)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &permissionSpec_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, permissionSpec);
	r = phpqt_qfile_set_permissions(&_0, &_1);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QFile_QFile, setPermissionsQStringQFileDevicePermissions)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long permissionSpec, r = 0;
	zval *filename_param = NULL, *permissionSpec_param = NULL, _0;
	zval filename;

	ZVAL_UNDEF(&filename);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_STR(filename)
		Z_PARAM_LONG(permissionSpec)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &filename_param, &permissionSpec_param);
	zephir_get_strval(&filename, filename_param);
	ZVAL_LONG(&_0, permissionSpec);
	r = phpqt_qfile_set_permissions_q_string_q_file_device_permissions(&filename, &_0);
	RETURN_MM_BOOL(r == 1);
}

