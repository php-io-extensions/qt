
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
#include "src/opengl-qabstractopenglfunctions.h"
#include "kernel/operators.h"
#include "kernel/memory.h"
#include "kernel/object.h"


ZEPHIR_INIT_CLASS(Qt_OpenGL_QAbstractOpenGLFunctions_QAbstractOpenGLFunctions)
{
	ZEPHIR_REGISTER_CLASS(Qt\\OpenGL\\QAbstractOpenGLFunctions, QAbstractOpenGLFunctions, qt, opengl_qabstractopenglfunctions_qabstractopenglfunctions, qt_opengl_qabstractopenglfunctions_qabstractopenglfunctions_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_OpenGL_QAbstractOpenGLFunctions_QAbstractOpenGLFunctions, initializeOpenGLFunctions)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qabstractopenglfunctions_initialize_open_g_l_functions(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_OpenGL_QAbstractOpenGLFunctions_QAbstractOpenGLFunctions, new_)
{

	RETURN_LONG(phpqt_qabstractopenglfunctions_new());
}

PHP_METHOD(Qt_OpenGL_QAbstractOpenGLFunctions_QAbstractOpenGLFunctions, isInitialized)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qabstractopenglfunctions_is_initialized(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_OpenGL_QAbstractOpenGLFunctions_QAbstractOpenGLFunctions, setOwningContext)
{
	zval *handle_param = NULL, *context_param = NULL, _0, _1;
	zend_long handle, context;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(context)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &context_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, context);
	phpqt_qabstractopenglfunctions_set_owning_context(&_0, &_1);
}

PHP_METHOD(Qt_OpenGL_QAbstractOpenGLFunctions_QAbstractOpenGLFunctions, owningContext)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qabstractopenglfunctions_owning_context(&_0));
}

