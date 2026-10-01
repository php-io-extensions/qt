
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
#include "src/core-qloggingfunctions.h"
#include "kernel/operators.h"
#include "kernel/memory.h"
#include "kernel/object.h"
#include "kernel/string.h"


ZEPHIR_INIT_CLASS(Qt_Core_QLoggingFunctions_QLoggingFunctions)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Core\\QLoggingFunctions, QLoggingFunctions, qt, core_qloggingfunctions_qloggingfunctions, qt_core_qloggingfunctions_qloggingfunctions_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Core_QLoggingFunctions_QLoggingFunctions, qt_message_output)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval message;
	zval *arg0_param = NULL, *context_param = NULL, *message_param = NULL, _0, _1;
	zend_long arg0, context;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&message);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(arg0)
		Z_PARAM_LONG(context)
		Z_PARAM_STR(message)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 3, 0, &arg0_param, &context_param, &message_param);
	zephir_get_strval(&message, message_param);
	ZVAL_LONG(&_0, arg0);
	ZVAL_LONG(&_1, context);
	phpqt_qloggingfunctions_qt_message_output(&_0, &_1, &message);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_Core_QLoggingFunctions_QLoggingFunctions, qErrnoWarning)
{
	zval *code_param = NULL, *msg = NULL, msg_sub, _0;
	zend_long code;

	ZVAL_UNDEF(&msg_sub);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(code)
		Z_PARAM_ZVAL(msg)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &code_param, &msg);
	ZVAL_LONG(&_0, code);
	phpqt_qloggingfunctions_q_errno_warning(&_0, msg);
}

PHP_METHOD(Qt_Core_QLoggingFunctions_QLoggingFunctions, qErrnoWarningChar)
{
	zval *msg = NULL, msg_sub;

	ZVAL_UNDEF(&msg_sub);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_ZVAL(msg)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &msg);
	phpqt_qloggingfunctions_q_errno_warning_char(msg);
}

PHP_METHOD(Qt_Core_QLoggingFunctions_QLoggingFunctions, qSetMessagePattern)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *messagePattern_param = NULL;
	zval messagePattern;

	ZVAL_UNDEF(&messagePattern);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_STR(messagePattern)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &messagePattern_param);
	zephir_get_strval(&messagePattern, messagePattern_param);
	phpqt_qloggingfunctions_q_set_message_pattern(&messagePattern);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_Core_QLoggingFunctions_QLoggingFunctions, qFormatLogMessage)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval buf;
	zval *type_param = NULL, *context_param = NULL, *buf_param = NULL, result, _0, _1;
	zend_long type, context;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&buf);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(type)
		Z_PARAM_LONG(context)
		Z_PARAM_STR(buf)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 3, 0, &type_param, &context_param, &buf_param);
	zephir_get_strval(&buf, buf_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, type);
	ZVAL_LONG(&_1, context);
	phpqt_qloggingfunctions_q_format_log_message(&result, &_0, &_1, &buf);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QLoggingFunctions_QLoggingFunctions, qt_error_string)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *errorCode_param = NULL, result, _0;
	zend_long errorCode;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(0, 1)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(errorCode)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 0, 1, &errorCode_param);
	if (!errorCode_param) {
		errorCode = -1;
	} else {
		}
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, errorCode);
	phpqt_qloggingfunctions_qt_error_string(&result, &_0);
	RETURN_CCTOR(&result);
}

