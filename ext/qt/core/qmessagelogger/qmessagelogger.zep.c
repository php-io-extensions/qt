
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
#include "src/core-qmessagelogger.h"
#include "kernel/object.h"
#include "kernel/operators.h"
#include "kernel/memory.h"


ZEPHIR_INIT_CLASS(Qt_Core_QMessageLogger_QMessageLogger)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Core\\QMessageLogger, QMessageLogger, qt, core_qmessagelogger_qmessagelogger, qt_core_qmessagelogger_qmessagelogger_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Core_QMessageLogger_QMessageLogger, new_)
{

	RETURN_LONG(phpqt_qmessagelogger_new());
}

PHP_METHOD(Qt_Core_QMessageLogger_QMessageLogger, newCharIntChar)
{
	zend_long line;
	zval *file = NULL, file_sub, *line_param = NULL, *function_ = NULL, function__sub, _0;

	ZVAL_UNDEF(&file_sub);
	ZVAL_UNDEF(&function__sub);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_ZVAL(file)
		Z_PARAM_LONG(line)
		Z_PARAM_ZVAL(function_)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &file, &line_param, &function_);
	ZVAL_LONG(&_0, line);
	RETURN_LONG(phpqt_qmessagelogger_new_char_int_char(file, &_0, function_));
}

PHP_METHOD(Qt_Core_QMessageLogger_QMessageLogger, newCharIntCharChar)
{
	zend_long line;
	zval *file = NULL, file_sub, *line_param = NULL, *function_ = NULL, function__sub, *category = NULL, category_sub, _0;

	ZVAL_UNDEF(&file_sub);
	ZVAL_UNDEF(&function__sub);
	ZVAL_UNDEF(&category_sub);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_ZVAL(file)
		Z_PARAM_LONG(line)
		Z_PARAM_ZVAL(function_)
		Z_PARAM_ZVAL(category)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 0, &file, &line_param, &function_, &category);
	ZVAL_LONG(&_0, line);
	RETURN_LONG(phpqt_qmessagelogger_new_char_int_char_char(file, &_0, function_, category));
}

PHP_METHOD(Qt_Core_QMessageLogger_QMessageLogger, debug)
{
	zval *handle_param = NULL, *msg = NULL, msg_sub, _0;
	zend_long handle;

	ZVAL_UNDEF(&msg_sub);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(msg)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &msg);
	ZVAL_LONG(&_0, handle);
	phpqt_qmessagelogger_debug(&_0, msg);
}

PHP_METHOD(Qt_Core_QMessageLogger_QMessageLogger, noDebug)
{
	zval *handle_param = NULL, *arg0 = NULL, arg0_sub, _0;
	zend_long handle;

	ZVAL_UNDEF(&arg0_sub);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(arg0)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &arg0);
	ZVAL_LONG(&_0, handle);
	phpqt_qmessagelogger_no_debug(&_0, arg0);
}

PHP_METHOD(Qt_Core_QMessageLogger_QMessageLogger, info)
{
	zval *handle_param = NULL, *msg = NULL, msg_sub, _0;
	zend_long handle;

	ZVAL_UNDEF(&msg_sub);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(msg)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &msg);
	ZVAL_LONG(&_0, handle);
	phpqt_qmessagelogger_info(&_0, msg);
}

PHP_METHOD(Qt_Core_QMessageLogger_QMessageLogger, warning)
{
	zval *handle_param = NULL, *msg = NULL, msg_sub, _0;
	zend_long handle;

	ZVAL_UNDEF(&msg_sub);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(msg)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &msg);
	ZVAL_LONG(&_0, handle);
	phpqt_qmessagelogger_warning(&_0, msg);
}

PHP_METHOD(Qt_Core_QMessageLogger_QMessageLogger, critical)
{
	zval *handle_param = NULL, *msg = NULL, msg_sub, _0;
	zend_long handle;

	ZVAL_UNDEF(&msg_sub);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(msg)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &msg);
	ZVAL_LONG(&_0, handle);
	phpqt_qmessagelogger_critical(&_0, msg);
}

PHP_METHOD(Qt_Core_QMessageLogger_QMessageLogger, fatal)
{
	zval *handle_param = NULL, *msg = NULL, msg_sub, _0;
	zend_long handle;

	ZVAL_UNDEF(&msg_sub);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(msg)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &msg);
	ZVAL_LONG(&_0, handle);
	phpqt_qmessagelogger_fatal(&_0, msg);
}

PHP_METHOD(Qt_Core_QMessageLogger_QMessageLogger, debugQLoggingCategoryChar)
{
	zval *handle_param = NULL, *cat_param = NULL, *msg = NULL, msg_sub, _0, _1;
	zend_long handle, cat;

	ZVAL_UNDEF(&msg_sub);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(cat)
		Z_PARAM_ZVAL(msg)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &cat_param, &msg);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, cat);
	phpqt_qmessagelogger_debug_q_logging_category_char(&_0, &_1, msg);
}

PHP_METHOD(Qt_Core_QMessageLogger_QMessageLogger, infoQLoggingCategoryChar)
{
	zval *handle_param = NULL, *cat_param = NULL, *msg = NULL, msg_sub, _0, _1;
	zend_long handle, cat;

	ZVAL_UNDEF(&msg_sub);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(cat)
		Z_PARAM_ZVAL(msg)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &cat_param, &msg);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, cat);
	phpqt_qmessagelogger_info_q_logging_category_char(&_0, &_1, msg);
}

PHP_METHOD(Qt_Core_QMessageLogger_QMessageLogger, warningQLoggingCategoryChar)
{
	zval *handle_param = NULL, *cat_param = NULL, *msg = NULL, msg_sub, _0, _1;
	zend_long handle, cat;

	ZVAL_UNDEF(&msg_sub);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(cat)
		Z_PARAM_ZVAL(msg)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &cat_param, &msg);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, cat);
	phpqt_qmessagelogger_warning_q_logging_category_char(&_0, &_1, msg);
}

PHP_METHOD(Qt_Core_QMessageLogger_QMessageLogger, criticalQLoggingCategoryChar)
{
	zval *handle_param = NULL, *cat_param = NULL, *msg = NULL, msg_sub, _0, _1;
	zend_long handle, cat;

	ZVAL_UNDEF(&msg_sub);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(cat)
		Z_PARAM_ZVAL(msg)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &cat_param, &msg);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, cat);
	phpqt_qmessagelogger_critical_q_logging_category_char(&_0, &_1, msg);
}

PHP_METHOD(Qt_Core_QMessageLogger_QMessageLogger, fatalQLoggingCategoryChar)
{
	zval *handle_param = NULL, *cat_param = NULL, *msg = NULL, msg_sub, _0, _1;
	zend_long handle, cat;

	ZVAL_UNDEF(&msg_sub);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(cat)
		Z_PARAM_ZVAL(msg)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &cat_param, &msg);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, cat);
	phpqt_qmessagelogger_fatal_q_logging_category_char(&_0, &_1, msg);
}

PHP_METHOD(Qt_Core_QMessageLogger_QMessageLogger, debug2)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qmessagelogger_debug2(&_0));
}

PHP_METHOD(Qt_Core_QMessageLogger_QMessageLogger, debugQLoggingCategory)
{
	zval *handle_param = NULL, *cat_param = NULL, _0, _1;
	zend_long handle, cat;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(cat)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &cat_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, cat);
	RETURN_LONG(phpqt_qmessagelogger_debug_q_logging_category(&_0, &_1));
}

PHP_METHOD(Qt_Core_QMessageLogger_QMessageLogger, info2)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qmessagelogger_info2(&_0));
}

PHP_METHOD(Qt_Core_QMessageLogger_QMessageLogger, infoQLoggingCategory)
{
	zval *handle_param = NULL, *cat_param = NULL, _0, _1;
	zend_long handle, cat;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(cat)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &cat_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, cat);
	RETURN_LONG(phpqt_qmessagelogger_info_q_logging_category(&_0, &_1));
}

PHP_METHOD(Qt_Core_QMessageLogger_QMessageLogger, warning2)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qmessagelogger_warning2(&_0));
}

PHP_METHOD(Qt_Core_QMessageLogger_QMessageLogger, warningQLoggingCategory)
{
	zval *handle_param = NULL, *cat_param = NULL, _0, _1;
	zend_long handle, cat;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(cat)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &cat_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, cat);
	RETURN_LONG(phpqt_qmessagelogger_warning_q_logging_category(&_0, &_1));
}

PHP_METHOD(Qt_Core_QMessageLogger_QMessageLogger, critical2)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qmessagelogger_critical2(&_0));
}

PHP_METHOD(Qt_Core_QMessageLogger_QMessageLogger, criticalQLoggingCategory)
{
	zval *handle_param = NULL, *cat_param = NULL, _0, _1;
	zend_long handle, cat;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(cat)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &cat_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, cat);
	RETURN_LONG(phpqt_qmessagelogger_critical_q_logging_category(&_0, &_1));
}

PHP_METHOD(Qt_Core_QMessageLogger_QMessageLogger, fatal2)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qmessagelogger_fatal2(&_0));
}

PHP_METHOD(Qt_Core_QMessageLogger_QMessageLogger, fatalQLoggingCategory)
{
	zval *handle_param = NULL, *cat_param = NULL, _0, _1;
	zend_long handle, cat;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(cat)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &cat_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, cat);
	RETURN_LONG(phpqt_qmessagelogger_fatal_q_logging_category(&_0, &_1));
}

PHP_METHOD(Qt_Core_QMessageLogger_QMessageLogger, noDebug2)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qmessagelogger_no_debug2(&_0));
}

