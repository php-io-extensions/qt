
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
#include "src/opengl-qopenglversionfunctionsstorage.h"
#include "kernel/object.h"
#include "kernel/operators.h"
#include "kernel/memory.h"


ZEPHIR_INIT_CLASS(Qt_OpenGL_QOpenGLVersionFunctionsStorage_QOpenGLVersionFunctionsStorage)
{
	ZEPHIR_REGISTER_CLASS(Qt\\OpenGL\\QOpenGLVersionFunctionsStorage, QOpenGLVersionFunctionsStorage, qt, opengl_qopenglversionfunctionsstorage_qopenglversionfunctionsstorage, qt_opengl_qopenglversionfunctionsstorage_qopenglversionfunctionsstorage_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_OpenGL_QOpenGLVersionFunctionsStorage_QOpenGLVersionFunctionsStorage, new_)
{

	RETURN_LONG(phpqt_qopenglversionfunctionsstorage_new());
}

PHP_METHOD(Qt_OpenGL_QOpenGLVersionFunctionsStorage_QOpenGLVersionFunctionsStorage, backend)
{
	zval *handle_param = NULL, *context_param = NULL, *v_param = NULL, _0, _1, _2;
	zend_long handle, context, v;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(context)
		Z_PARAM_LONG(v)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &context_param, &v_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, context);
	ZVAL_LONG(&_2, v);
	RETURN_LONG(phpqt_qopenglversionfunctionsstorage_backend(&_0, &_1, &_2));
}

