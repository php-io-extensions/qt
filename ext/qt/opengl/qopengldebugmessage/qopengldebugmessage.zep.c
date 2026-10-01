
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
#include "src/opengl-qopengldebugmessage.h"
#include "kernel/object.h"
#include "kernel/operators.h"
#include "kernel/memory.h"
#include "kernel/string.h"


ZEPHIR_INIT_CLASS(Qt_OpenGL_QOpenGLDebugMessage_QOpenGLDebugMessage)
{
	ZEPHIR_REGISTER_CLASS(Qt\\OpenGL\\QOpenGLDebugMessage, QOpenGLDebugMessage, qt, opengl_qopengldebugmessage_qopengldebugmessage, qt_opengl_qopengldebugmessage_qopengldebugmessage_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_OpenGL_QOpenGLDebugMessage_QOpenGLDebugMessage, new_)
{

	RETURN_LONG(phpqt_qopengldebugmessage_new());
}

PHP_METHOD(Qt_OpenGL_QOpenGLDebugMessage_QOpenGLDebugMessage, newQOpenGLDebugMessage)
{
	zval *debugMessage_param = NULL, _0;
	zend_long debugMessage;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(debugMessage)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &debugMessage_param);
	ZVAL_LONG(&_0, debugMessage);
	RETURN_LONG(phpqt_qopengldebugmessage_new_q_open_g_l_debug_message(&_0));
}

PHP_METHOD(Qt_OpenGL_QOpenGLDebugMessage_QOpenGLDebugMessage, swap)
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
	phpqt_qopengldebugmessage_swap(&_0, &_1);
}

PHP_METHOD(Qt_OpenGL_QOpenGLDebugMessage_QOpenGLDebugMessage, source)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qopengldebugmessage_source(&_0));
}

PHP_METHOD(Qt_OpenGL_QOpenGLDebugMessage_QOpenGLDebugMessage, type)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qopengldebugmessage_type(&_0));
}

PHP_METHOD(Qt_OpenGL_QOpenGLDebugMessage_QOpenGLDebugMessage, severity)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qopengldebugmessage_severity(&_0));
}

PHP_METHOD(Qt_OpenGL_QOpenGLDebugMessage_QOpenGLDebugMessage, id)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qopengldebugmessage_id(&_0));
}

PHP_METHOD(Qt_OpenGL_QOpenGLDebugMessage_QOpenGLDebugMessage, message)
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
	phpqt_qopengldebugmessage_message(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_OpenGL_QOpenGLDebugMessage_QOpenGLDebugMessage, createApplicationMessage)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long id;
	zval *text_param = NULL, *id_param = NULL, *severity = NULL, severity_sub, *type = NULL, type_sub, __$null, _0;
	zval text;

	ZVAL_UNDEF(&text);
	ZVAL_UNDEF(&severity_sub);
	ZVAL_UNDEF(&type_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(1, 4)
		Z_PARAM_STR(text)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(id)
		Z_PARAM_ZVAL_OR_NULL(severity)
		Z_PARAM_ZVAL_OR_NULL(type)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 3, &text_param, &id_param, &severity, &type);
	zephir_get_strval(&text, text_param);
	if (!id_param) {
		id = 0;
	} else {
		}
	if (!severity) {
		severity = &severity_sub;
		severity = &__$null;
	}
	if (!type) {
		type = &type_sub;
		type = &__$null;
	}
	ZVAL_LONG(&_0, id);
	RETURN_MM_LONG(phpqt_qopengldebugmessage_create_application_message(&text, &_0, severity, type));
}

PHP_METHOD(Qt_OpenGL_QOpenGLDebugMessage_QOpenGLDebugMessage, createThirdPartyMessage)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long id;
	zval *text_param = NULL, *id_param = NULL, *severity = NULL, severity_sub, *type = NULL, type_sub, __$null, _0;
	zval text;

	ZVAL_UNDEF(&text);
	ZVAL_UNDEF(&severity_sub);
	ZVAL_UNDEF(&type_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(1, 4)
		Z_PARAM_STR(text)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(id)
		Z_PARAM_ZVAL_OR_NULL(severity)
		Z_PARAM_ZVAL_OR_NULL(type)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 3, &text_param, &id_param, &severity, &type);
	zephir_get_strval(&text, text_param);
	if (!id_param) {
		id = 0;
	} else {
		}
	if (!severity) {
		severity = &severity_sub;
		severity = &__$null;
	}
	if (!type) {
		type = &type_sub;
		type = &__$null;
	}
	ZVAL_LONG(&_0, id);
	RETURN_MM_LONG(phpqt_qopengldebugmessage_create_third_party_message(&text, &_0, severity, type));
}

