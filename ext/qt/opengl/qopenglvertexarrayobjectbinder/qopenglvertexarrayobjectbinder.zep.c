
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
#include "src/opengl-qopenglvertexarrayobjectbinder.h"
#include "kernel/operators.h"
#include "kernel/memory.h"
#include "kernel/object.h"


ZEPHIR_INIT_CLASS(Qt_OpenGL_QOpenGLVertexArrayObjectBinder_QOpenGLVertexArrayObjectBinder)
{
	ZEPHIR_REGISTER_CLASS(Qt\\OpenGL\\QOpenGLVertexArrayObjectBinder, QOpenGLVertexArrayObjectBinder, qt, opengl_qopenglvertexarrayobjectbinder_qopenglvertexarrayobjectbinder, qt_opengl_qopenglvertexarrayobjectbinder_qopenglvertexarrayobjectbinder_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_OpenGL_QOpenGLVertexArrayObjectBinder_QOpenGLVertexArrayObjectBinder, new_)
{
	zval *v_param = NULL, _0;
	zend_long v;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(v)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &v_param);
	ZVAL_LONG(&_0, v);
	RETURN_LONG(phpqt_qopenglvertexarrayobjectbinder_new(&_0));
}

PHP_METHOD(Qt_OpenGL_QOpenGLVertexArrayObjectBinder_QOpenGLVertexArrayObjectBinder, release)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qopenglvertexarrayobjectbinder_release(&_0);
}

PHP_METHOD(Qt_OpenGL_QOpenGLVertexArrayObjectBinder_QOpenGLVertexArrayObjectBinder, rebind)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qopenglvertexarrayobjectbinder_rebind(&_0);
}

