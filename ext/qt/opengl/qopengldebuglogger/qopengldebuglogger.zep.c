
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
#include "src/opengl-qopengldebuglogger.h"
#include "kernel/object.h"
#include "kernel/string.h"
#include "kernel/memory.h"
#include "kernel/operators.h"


ZEPHIR_INIT_CLASS(Qt_OpenGL_QOpenGLDebugLogger_QOpenGLDebugLogger)
{
	ZEPHIR_REGISTER_CLASS(Qt\\OpenGL\\QOpenGLDebugLogger, QOpenGLDebugLogger, qt, opengl_qopengldebuglogger_qopengldebuglogger, qt_opengl_qopengldebuglogger_qopengldebuglogger_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_OpenGL_QOpenGLDebugLogger_QOpenGLDebugLogger, staticMetaObject)
{

	RETURN_LONG(phpqt_qopengldebuglogger_static_meta_object());
}

PHP_METHOD(Qt_OpenGL_QOpenGLDebugLogger_QOpenGLDebugLogger, tr)
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
	phpqt_qopengldebuglogger_tr(&result, s, c, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_OpenGL_QOpenGLDebugLogger_QOpenGLDebugLogger, new_)
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
	RETURN_LONG(phpqt_qopengldebuglogger_new(&_0));
}

PHP_METHOD(Qt_OpenGL_QOpenGLDebugLogger_QOpenGLDebugLogger, initialize)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qopengldebuglogger_initialize(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_OpenGL_QOpenGLDebugLogger_QOpenGLDebugLogger, isLogging)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qopengldebuglogger_is_logging(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_OpenGL_QOpenGLDebugLogger_QOpenGLDebugLogger, loggingMode)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qopengldebuglogger_logging_mode(&_0));
}

PHP_METHOD(Qt_OpenGL_QOpenGLDebugLogger_QOpenGLDebugLogger, maximumMessageLength)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qopengldebuglogger_maximum_message_length(&_0));
}

PHP_METHOD(Qt_OpenGL_QOpenGLDebugLogger_QOpenGLDebugLogger, pushGroup)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval name;
	zval *handle_param = NULL, *name_param = NULL, *id_param = NULL, *source = NULL, source_sub, __$null, _0, _1;
	zend_long handle, id;

	ZVAL_UNDEF(&source_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&name);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(2, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(name)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(id)
		Z_PARAM_ZVAL_OR_NULL(source)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 2, &handle_param, &name_param, &id_param, &source);
	zephir_get_strval(&name, name_param);
	if (!id_param) {
		id = 0;
	} else {
		}
	if (!source) {
		source = &source_sub;
		source = &__$null;
	}
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, id);
	phpqt_qopengldebuglogger_push_group(&_0, &name, &_1, source);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_OpenGL_QOpenGLDebugLogger_QOpenGLDebugLogger, popGroup)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qopengldebuglogger_pop_group(&_0);
}

PHP_METHOD(Qt_OpenGL_QOpenGLDebugLogger_QOpenGLDebugLogger, enableMessages)
{
	zval *handle_param = NULL, *sources = NULL, sources_sub, *types = NULL, types_sub, *severities = NULL, severities_sub, __$null, _0;
	zend_long handle;

	ZVAL_UNDEF(&sources_sub);
	ZVAL_UNDEF(&types_sub);
	ZVAL_UNDEF(&severities_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(1, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(sources)
		Z_PARAM_ZVAL_OR_NULL(types)
		Z_PARAM_ZVAL_OR_NULL(severities)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 3, &handle_param, &sources, &types, &severities);
	if (!sources) {
		sources = &sources_sub;
		sources = &__$null;
	}
	if (!types) {
		types = &types_sub;
		types = &__$null;
	}
	if (!severities) {
		severities = &severities_sub;
		severities = &__$null;
	}
	ZVAL_LONG(&_0, handle);
	phpqt_qopengldebuglogger_enable_messages(&_0, sources, types, severities);
}

PHP_METHOD(Qt_OpenGL_QOpenGLDebugLogger_QOpenGLDebugLogger, enableMessagesQListUnsignedIntQOpenGLDebugMessageSourcesQOpenGLDebugMessageTypes)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval ids;
	zval *handle_param = NULL, *ids_param = NULL, *sources = NULL, sources_sub, *types = NULL, types_sub, __$null, _0;
	zend_long handle;

	ZVAL_UNDEF(&sources_sub);
	ZVAL_UNDEF(&types_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&ids);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(2, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_ARRAY(ids)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(sources)
		Z_PARAM_ZVAL_OR_NULL(types)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 2, &handle_param, &ids_param, &sources, &types);
	zephir_get_arrval(&ids, ids_param);
	if (!sources) {
		sources = &sources_sub;
		sources = &__$null;
	}
	if (!types) {
		types = &types_sub;
		types = &__$null;
	}
	ZVAL_LONG(&_0, handle);
	phpqt_qopengldebuglogger_enable_messages_q_list_unsigned_int_q_open_g_l_debug_message_sources_q_open_g_l_debug_message_types(&_0, &ids, sources, types);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_OpenGL_QOpenGLDebugLogger_QOpenGLDebugLogger, disableMessages)
{
	zval *handle_param = NULL, *sources = NULL, sources_sub, *types = NULL, types_sub, *severities = NULL, severities_sub, __$null, _0;
	zend_long handle;

	ZVAL_UNDEF(&sources_sub);
	ZVAL_UNDEF(&types_sub);
	ZVAL_UNDEF(&severities_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(1, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(sources)
		Z_PARAM_ZVAL_OR_NULL(types)
		Z_PARAM_ZVAL_OR_NULL(severities)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 3, &handle_param, &sources, &types, &severities);
	if (!sources) {
		sources = &sources_sub;
		sources = &__$null;
	}
	if (!types) {
		types = &types_sub;
		types = &__$null;
	}
	if (!severities) {
		severities = &severities_sub;
		severities = &__$null;
	}
	ZVAL_LONG(&_0, handle);
	phpqt_qopengldebuglogger_disable_messages(&_0, sources, types, severities);
}

PHP_METHOD(Qt_OpenGL_QOpenGLDebugLogger_QOpenGLDebugLogger, disableMessagesQListUnsignedIntQOpenGLDebugMessageSourcesQOpenGLDebugMessageTypes)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval ids;
	zval *handle_param = NULL, *ids_param = NULL, *sources = NULL, sources_sub, *types = NULL, types_sub, __$null, _0;
	zend_long handle;

	ZVAL_UNDEF(&sources_sub);
	ZVAL_UNDEF(&types_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&ids);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(2, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_ARRAY(ids)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(sources)
		Z_PARAM_ZVAL_OR_NULL(types)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 2, &handle_param, &ids_param, &sources, &types);
	zephir_get_arrval(&ids, ids_param);
	if (!sources) {
		sources = &sources_sub;
		sources = &__$null;
	}
	if (!types) {
		types = &types_sub;
		types = &__$null;
	}
	ZVAL_LONG(&_0, handle);
	phpqt_qopengldebuglogger_disable_messages_q_list_unsigned_int_q_open_g_l_debug_message_sources_q_open_g_l_debug_message_types(&_0, &ids, sources, types);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_OpenGL_QOpenGLDebugLogger_QOpenGLDebugLogger, loggedMessages)
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
	phpqt_qopengldebuglogger_logged_messages(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_OpenGL_QOpenGLDebugLogger_QOpenGLDebugLogger, logMessage)
{
	zval *handle_param = NULL, *debugMessage_param = NULL, _0, _1;
	zend_long handle, debugMessage;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(debugMessage)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &debugMessage_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, debugMessage);
	phpqt_qopengldebuglogger_log_message(&_0, &_1);
}

PHP_METHOD(Qt_OpenGL_QOpenGLDebugLogger_QOpenGLDebugLogger, startLogging)
{
	zval *handle_param = NULL, *loggingMode = NULL, loggingMode_sub, __$null, _0;
	zend_long handle;

	ZVAL_UNDEF(&loggingMode_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(loggingMode)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 1, &handle_param, &loggingMode);
	if (!loggingMode) {
		loggingMode = &loggingMode_sub;
		loggingMode = &__$null;
	}
	ZVAL_LONG(&_0, handle);
	phpqt_qopengldebuglogger_start_logging(&_0, loggingMode);
}

PHP_METHOD(Qt_OpenGL_QOpenGLDebugLogger_QOpenGLDebugLogger, stopLogging)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qopengldebuglogger_stop_logging(&_0);
}

PHP_METHOD(Qt_OpenGL_QOpenGLDebugLogger_QOpenGLDebugLogger, messageLogged)
{
	zval *handle_param = NULL, *debugMessage_param = NULL, _0, _1;
	zend_long handle, debugMessage;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(debugMessage)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &debugMessage_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, debugMessage);
	phpqt_qopengldebuglogger_message_logged(&_0, &_1);
}

