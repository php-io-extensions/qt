
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
#include "src/core-qdebug.h"
#include "kernel/operators.h"
#include "kernel/memory.h"
#include "kernel/object.h"


ZEPHIR_INIT_CLASS(Qt_Core_QDebug_QDebug)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Core\\QDebug, QDebug, qt, core_qdebug_qdebug, qt_core_qdebug_qdebug_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Core_QDebug_QDebug, new_)
{
	zval *device_param = NULL, _0;
	zend_long device;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(device)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &device_param);
	ZVAL_LONG(&_0, device);
	RETURN_LONG(phpqt_qdebug_new(&_0));
}

PHP_METHOD(Qt_Core_QDebug_QDebug, newQString)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *string_ = NULL, string__sub, result;

	ZVAL_UNDEF(&string__sub);
	ZVAL_UNDEF(&result);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_ZVAL(string_)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &string_);
	ZEPHIR_INIT_VAR(&result);
	phpqt_qdebug_new_q_string(&result, string_);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QDebug_QDebug, newQtMsgType)
{
	zval *t_param = NULL, _0;
	zend_long t;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(t)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &t_param);
	ZVAL_LONG(&_0, t);
	RETURN_LONG(phpqt_qdebug_new_qt_msg_type(&_0));
}

PHP_METHOD(Qt_Core_QDebug_QDebug, newQDebug)
{
	zval *o_param = NULL, _0;
	zend_long o;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(o)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &o_param);
	ZVAL_LONG(&_0, o);
	RETURN_LONG(phpqt_qdebug_new_q_debug(&_0));
}

PHP_METHOD(Qt_Core_QDebug_QDebug, swap)
{
	zval *handle_param = NULL, *other_param = NULL, _0, _1;
	zend_long handle, other;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(other)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &other_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, other);
	phpqt_qdebug_swap(&_0, &_1);
}

PHP_METHOD(Qt_Core_QDebug_QDebug, resetFormat)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qdebug_reset_format(&_0));
}

PHP_METHOD(Qt_Core_QDebug_QDebug, space)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qdebug_space(&_0));
}

PHP_METHOD(Qt_Core_QDebug_QDebug, nospace)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qdebug_nospace(&_0));
}

PHP_METHOD(Qt_Core_QDebug_QDebug, maybeSpace)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qdebug_maybe_space(&_0));
}

PHP_METHOD(Qt_Core_QDebug_QDebug, verbosity)
{
	zval *handle_param = NULL, *verbosityLevel_param = NULL, _0, _1;
	zend_long handle, verbosityLevel;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(verbosityLevel)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &verbosityLevel_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, verbosityLevel);
	RETURN_LONG(phpqt_qdebug_verbosity(&_0, &_1));
}

PHP_METHOD(Qt_Core_QDebug_QDebug, verbosity2)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qdebug_verbosity2(&_0));
}

PHP_METHOD(Qt_Core_QDebug_QDebug, setVerbosity)
{
	zval *handle_param = NULL, *verbosityLevel_param = NULL, _0, _1;
	zend_long handle, verbosityLevel;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(verbosityLevel)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &verbosityLevel_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, verbosityLevel);
	phpqt_qdebug_set_verbosity(&_0, &_1);
}

PHP_METHOD(Qt_Core_QDebug_QDebug, autoInsertSpaces)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qdebug_auto_insert_spaces(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QDebug_QDebug, setAutoInsertSpaces)
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
	phpqt_qdebug_set_auto_insert_spaces(&_0, &_1);
}

PHP_METHOD(Qt_Core_QDebug_QDebug, quoteStrings)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qdebug_quote_strings(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QDebug_QDebug, setQuoteStrings)
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
	phpqt_qdebug_set_quote_strings(&_0, &_1);
}

PHP_METHOD(Qt_Core_QDebug_QDebug, quote)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qdebug_quote(&_0));
}

PHP_METHOD(Qt_Core_QDebug_QDebug, noquote)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qdebug_noquote(&_0));
}

PHP_METHOD(Qt_Core_QDebug_QDebug, maybeQuote)
{
	zval *handle_param = NULL, *c = NULL, c_sub, __$null, _0;
	zend_long handle;

	ZVAL_UNDEF(&c_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(c)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 1, &handle_param, &c);
	if (!c) {
		c = &c_sub;
		c = &__$null;
	}
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qdebug_maybe_quote(&_0, c));
}

