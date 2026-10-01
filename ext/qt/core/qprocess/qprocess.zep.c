
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
#include "src/core-qprocess.h"
#include "kernel/object.h"
#include "kernel/string.h"
#include "kernel/memory.h"
#include "kernel/operators.h"


ZEPHIR_INIT_CLASS(Qt_Core_QProcess_QProcess)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Core\\QProcess, QProcess, qt, core_qprocess_qprocess, qt_core_qprocess_qprocess_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Core_QProcess_QProcess, staticMetaObject)
{

	RETURN_LONG(phpqt_qprocess_static_meta_object());
}

PHP_METHOD(Qt_Core_QProcess_QProcess, tr)
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
	phpqt_qprocess_tr(&result, s, c, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QProcess_QProcess, new_)
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
	RETURN_LONG(phpqt_qprocess_new(&_0));
}

PHP_METHOD(Qt_Core_QProcess_QProcess, start)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval program;
	zval *handle_param = NULL, *program_param = NULL, *arguments = NULL, arguments_sub, *mode = NULL, mode_sub, __$null, _0;
	zend_long handle;

	ZVAL_UNDEF(&arguments_sub);
	ZVAL_UNDEF(&mode_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&program);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(2, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(program)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(arguments)
		Z_PARAM_ZVAL_OR_NULL(mode)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 2, &handle_param, &program_param, &arguments, &mode);
	zephir_get_strval(&program, program_param);
	if (!arguments) {
		arguments = &arguments_sub;
		arguments = &__$null;
	}
	if (!mode) {
		mode = &mode_sub;
		mode = &__$null;
	}
	ZVAL_LONG(&_0, handle);
	phpqt_qprocess_start(&_0, &program, arguments, mode);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_Core_QProcess_QProcess, startQIODeviceBaseOpenMode)
{
	zval *handle_param = NULL, *mode = NULL, mode_sub, __$null, _0;
	zend_long handle;

	ZVAL_UNDEF(&mode_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(mode)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 1, &handle_param, &mode);
	if (!mode) {
		mode = &mode_sub;
		mode = &__$null;
	}
	ZVAL_LONG(&_0, handle);
	phpqt_qprocess_start_q_i_o_device_base_open_mode(&_0, mode);
}

PHP_METHOD(Qt_Core_QProcess_QProcess, startCommand)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval command;
	zval *handle_param = NULL, *command_param = NULL, *mode = NULL, mode_sub, __$null, _0;
	zend_long handle;

	ZVAL_UNDEF(&mode_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&command);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(2, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(command)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(mode)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 1, &handle_param, &command_param, &mode);
	zephir_get_strval(&command, command_param);
	if (!mode) {
		mode = &mode_sub;
		mode = &__$null;
	}
	ZVAL_LONG(&_0, handle);
	phpqt_qprocess_start_command(&_0, &command, mode);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_Core_QProcess_QProcess, startDetached)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, *pid = NULL, pid_sub, __$null, result, _0;
	zend_long handle;

	ZVAL_UNDEF(&pid_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(pid)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 1, &handle_param, &pid);
	if (!pid) {
		pid = &pid_sub;
		pid = &__$null;
	}
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	phpqt_qprocess_start_detached(&result, &_0, pid);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QProcess_QProcess, open)
{
	zval *handle_param = NULL, *mode = NULL, mode_sub, __$null, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&mode_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(mode)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 1, &handle_param, &mode);
	if (!mode) {
		mode = &mode_sub;
		mode = &__$null;
	}
	ZVAL_LONG(&_0, handle);
	r = phpqt_qprocess_open(&_0, mode);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QProcess_QProcess, program)
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
	phpqt_qprocess_program(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QProcess_QProcess, setProgram)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval program;
	zval *handle_param = NULL, *program_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&program);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(program)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &program_param);
	zephir_get_strval(&program, program_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qprocess_set_program(&_0, &program);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_Core_QProcess_QProcess, arguments)
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
	phpqt_qprocess_arguments(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QProcess_QProcess, setArguments)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval arguments;
	zval *handle_param = NULL, *arguments_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&arguments);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ARRAY(arguments)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &arguments_param);
	zephir_get_arrval(&arguments, arguments_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qprocess_set_arguments(&_0, &arguments);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_Core_QProcess_QProcess, processChannelMode)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qprocess_process_channel_mode(&_0));
}

PHP_METHOD(Qt_Core_QProcess_QProcess, setProcessChannelMode)
{
	zval *handle_param = NULL, *mode_param = NULL, _0, _1;
	zend_long handle, mode;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(mode)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &mode_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, mode);
	phpqt_qprocess_set_process_channel_mode(&_0, &_1);
}

PHP_METHOD(Qt_Core_QProcess_QProcess, inputChannelMode)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qprocess_input_channel_mode(&_0));
}

PHP_METHOD(Qt_Core_QProcess_QProcess, setInputChannelMode)
{
	zval *handle_param = NULL, *mode_param = NULL, _0, _1;
	zend_long handle, mode;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(mode)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &mode_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, mode);
	phpqt_qprocess_set_input_channel_mode(&_0, &_1);
}

PHP_METHOD(Qt_Core_QProcess_QProcess, readChannel)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qprocess_read_channel(&_0));
}

PHP_METHOD(Qt_Core_QProcess_QProcess, setReadChannel)
{
	zval *handle_param = NULL, *channel_param = NULL, _0, _1;
	zend_long handle, channel;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(channel)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &channel_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, channel);
	phpqt_qprocess_set_read_channel(&_0, &_1);
}

PHP_METHOD(Qt_Core_QProcess_QProcess, closeReadChannel)
{
	zval *handle_param = NULL, *channel_param = NULL, _0, _1;
	zend_long handle, channel;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(channel)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &channel_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, channel);
	phpqt_qprocess_close_read_channel(&_0, &_1);
}

PHP_METHOD(Qt_Core_QProcess_QProcess, closeWriteChannel)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qprocess_close_write_channel(&_0);
}

PHP_METHOD(Qt_Core_QProcess_QProcess, setStandardInputFile)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval fileName;
	zval *handle_param = NULL, *fileName_param = NULL, _0;
	zend_long handle;

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
	phpqt_qprocess_set_standard_input_file(&_0, &fileName);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_Core_QProcess_QProcess, setStandardOutputFile)
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
	phpqt_qprocess_set_standard_output_file(&_0, &fileName, mode);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_Core_QProcess_QProcess, setStandardErrorFile)
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
	phpqt_qprocess_set_standard_error_file(&_0, &fileName, mode);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_Core_QProcess_QProcess, setStandardOutputProcess)
{
	zval *handle_param = NULL, *destination_param = NULL, _0, _1;
	zend_long handle, destination;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(destination)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &destination_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, destination);
	phpqt_qprocess_set_standard_output_process(&_0, &_1);
}

PHP_METHOD(Qt_Core_QProcess_QProcess, failChildProcessModifier)
{
	zval *handle_param = NULL, *description = NULL, description_sub, *error_param = NULL, _0, _1;
	zend_long handle, error;

	ZVAL_UNDEF(&description_sub);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(description)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(error)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 1, &handle_param, &description, &error_param);
	if (!error_param) {
		error = 0;
	} else {
		}
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, error);
	phpqt_qprocess_fail_child_process_modifier(&_0, description, &_1);
}

PHP_METHOD(Qt_Core_QProcess_QProcess, unixProcessParameters)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qprocess_unix_process_parameters(&_0));
}

PHP_METHOD(Qt_Core_QProcess_QProcess, setUnixProcessParameters)
{
	zval *handle_param = NULL, *params_param = NULL, _0, _1;
	zend_long handle, params;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(params)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &params_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, params);
	phpqt_qprocess_set_unix_process_parameters(&_0, &_1);
}

PHP_METHOD(Qt_Core_QProcess_QProcess, setUnixProcessParametersQProcessUnixProcessFlags)
{
	zval *handle_param = NULL, *flagsOnly_param = NULL, _0, _1;
	zend_long handle, flagsOnly;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(flagsOnly)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &flagsOnly_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, flagsOnly);
	phpqt_qprocess_set_unix_process_parameters_q_process_unix_process_flags(&_0, &_1);
}

PHP_METHOD(Qt_Core_QProcess_QProcess, workingDirectory)
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
	phpqt_qprocess_working_directory(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QProcess_QProcess, setWorkingDirectory)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval dir;
	zval *handle_param = NULL, *dir_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&dir);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(dir)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &dir_param);
	zephir_get_strval(&dir, dir_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qprocess_set_working_directory(&_0, &dir);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_Core_QProcess_QProcess, setEnvironment)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval environment;
	zval *handle_param = NULL, *environment_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&environment);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ARRAY(environment)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &environment_param);
	zephir_get_arrval(&environment, environment_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qprocess_set_environment(&_0, &environment);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_Core_QProcess_QProcess, environment)
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
	phpqt_qprocess_environment(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QProcess_QProcess, setProcessEnvironment)
{
	zval *handle_param = NULL, *environment_param = NULL, _0, _1;
	zend_long handle, environment;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(environment)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &environment_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, environment);
	phpqt_qprocess_set_process_environment(&_0, &_1);
}

PHP_METHOD(Qt_Core_QProcess_QProcess, processEnvironment)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qprocess_process_environment(&_0));
}

PHP_METHOD(Qt_Core_QProcess_QProcess, error)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qprocess_error(&_0));
}

PHP_METHOD(Qt_Core_QProcess_QProcess, state)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qprocess_state(&_0));
}

PHP_METHOD(Qt_Core_QProcess_QProcess, processId)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qprocess_process_id(&_0));
}

PHP_METHOD(Qt_Core_QProcess_QProcess, waitForStarted)
{
	zval *handle_param = NULL, *msecs_param = NULL, _0, _1;
	zend_long handle, msecs, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(msecs)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 1, &handle_param, &msecs_param);
	if (!msecs_param) {
		msecs = 30000;
	} else {
		}
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, msecs);
	r = phpqt_qprocess_wait_for_started(&_0, &_1);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QProcess_QProcess, waitForReadyRead)
{
	zval *handle_param = NULL, *msecs_param = NULL, _0, _1;
	zend_long handle, msecs, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(msecs)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 1, &handle_param, &msecs_param);
	if (!msecs_param) {
		msecs = 30000;
	} else {
		}
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, msecs);
	r = phpqt_qprocess_wait_for_ready_read(&_0, &_1);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QProcess_QProcess, waitForBytesWritten)
{
	zval *handle_param = NULL, *msecs_param = NULL, _0, _1;
	zend_long handle, msecs, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(msecs)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 1, &handle_param, &msecs_param);
	if (!msecs_param) {
		msecs = 30000;
	} else {
		}
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, msecs);
	r = phpqt_qprocess_wait_for_bytes_written(&_0, &_1);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QProcess_QProcess, waitForFinished)
{
	zval *handle_param = NULL, *msecs_param = NULL, _0, _1;
	zend_long handle, msecs, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(msecs)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 1, &handle_param, &msecs_param);
	if (!msecs_param) {
		msecs = 30000;
	} else {
		}
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, msecs);
	r = phpqt_qprocess_wait_for_finished(&_0, &_1);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QProcess_QProcess, readAllStandardOutput)
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
	phpqt_qprocess_read_all_standard_output(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QProcess_QProcess, readAllStandardError)
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
	phpqt_qprocess_read_all_standard_error(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QProcess_QProcess, exitCode)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qprocess_exit_code(&_0));
}

PHP_METHOD(Qt_Core_QProcess_QProcess, exitStatus)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qprocess_exit_status(&_0));
}

PHP_METHOD(Qt_Core_QProcess_QProcess, bytesToWrite)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qprocess_bytes_to_write(&_0));
}

PHP_METHOD(Qt_Core_QProcess_QProcess, isSequential)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qprocess_is_sequential(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QProcess_QProcess, close)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qprocess_close(&_0);
}

PHP_METHOD(Qt_Core_QProcess_QProcess, execute)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *program_param = NULL, *arguments = NULL, arguments_sub, __$null;
	zval program;

	ZVAL_UNDEF(&program);
	ZVAL_UNDEF(&arguments_sub);
	ZVAL_NULL(&__$null);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_STR(program)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(arguments)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 1, &program_param, &arguments);
	zephir_get_strval(&program, program_param);
	if (!arguments) {
		arguments = &arguments_sub;
		arguments = &__$null;
	}
	RETURN_MM_LONG(phpqt_qprocess_execute(&program, arguments));
}

PHP_METHOD(Qt_Core_QProcess_QProcess, startDetachedQStringQStringListQStringQint64)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *program_param = NULL, *arguments = NULL, arguments_sub, *workingDirectory_param = NULL, *pid = NULL, pid_sub, __$null, result;
	zval program, workingDirectory;

	ZVAL_UNDEF(&program);
	ZVAL_UNDEF(&workingDirectory);
	ZVAL_UNDEF(&arguments_sub);
	ZVAL_UNDEF(&pid_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&result);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(1, 4)
		Z_PARAM_STR(program)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(arguments)
		Z_PARAM_STR(workingDirectory)
		Z_PARAM_ZVAL_OR_NULL(pid)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 3, &program_param, &arguments, &workingDirectory_param, &pid);
	zephir_get_strval(&program, program_param);
	if (!arguments) {
		arguments = &arguments_sub;
		arguments = &__$null;
	}
	if (!workingDirectory_param) {
		ZEPHIR_INIT_VAR(&workingDirectory);
		ZVAL_STRING(&workingDirectory, "");
	} else {
		zephir_get_strval(&workingDirectory, workingDirectory_param);
	}
	if (!pid) {
		pid = &pid_sub;
		pid = &__$null;
	}
	ZEPHIR_INIT_VAR(&result);
	phpqt_qprocess_start_detached_q_string_q_string_list_q_string_qint64(&result, &program, arguments, &workingDirectory, pid);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QProcess_QProcess, systemEnvironment)
{
	zval result;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;

	ZVAL_UNDEF(&result);
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);

	ZEPHIR_INIT_VAR(&result);
	phpqt_qprocess_system_environment(&result);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QProcess_QProcess, nullDevice)
{
	zval result;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;

	ZVAL_UNDEF(&result);
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);

	ZEPHIR_INIT_VAR(&result);
	phpqt_qprocess_null_device(&result);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QProcess_QProcess, splitCommand)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *command_param = NULL, result;
	zval command;

	ZVAL_UNDEF(&command);
	ZVAL_UNDEF(&result);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_STR(command)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &command_param);
	zephir_get_strval(&command, command_param);
	ZEPHIR_INIT_VAR(&result);
	phpqt_qprocess_split_command(&result, &command);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QProcess_QProcess, terminate)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qprocess_terminate(&_0);
}

PHP_METHOD(Qt_Core_QProcess_QProcess, kill)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qprocess_kill(&_0);
}

PHP_METHOD(Qt_Core_QProcess_QProcess, finished)
{
	zval *handle_param = NULL, *exitCode_param = NULL, *exitStatus = NULL, exitStatus_sub, __$null, _0, _1;
	zend_long handle, exitCode;

	ZVAL_UNDEF(&exitStatus_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(2, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(exitCode)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(exitStatus)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 1, &handle_param, &exitCode_param, &exitStatus);
	if (!exitStatus) {
		exitStatus = &exitStatus_sub;
		exitStatus = &__$null;
	}
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, exitCode);
	phpqt_qprocess_finished(&_0, &_1, exitStatus);
}

PHP_METHOD(Qt_Core_QProcess_QProcess, errorOccurred)
{
	zval *handle_param = NULL, *error_param = NULL, _0, _1;
	zend_long handle, error;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(error)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &error_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, error);
	phpqt_qprocess_error_occurred(&_0, &_1);
}

PHP_METHOD(Qt_Core_QProcess_QProcess, setProcessState)
{
	zval *handle_param = NULL, *state_param = NULL, _0, _1;
	zend_long handle, state;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(state)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &state_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, state);
	phpqt_qprocess_set_process_state(&_0, &_1);
}

PHP_METHOD(Qt_Core_QProcess_QProcess, writeData)
{
	zval *handle_param = NULL, *data = NULL, data_sub, *len_param = NULL, _0, _1;
	zend_long handle, len;

	ZVAL_UNDEF(&data_sub);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(data)
		Z_PARAM_LONG(len)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &data, &len_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, len);
	RETURN_LONG(phpqt_qprocess_write_data(&_0, data, &_1));
}

