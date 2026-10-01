
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
#include "src/opengl-qopenglfunctions_4_1_corebackend.h"
#include "kernel/operators.h"
#include "kernel/memory.h"
#include "kernel/object.h"


ZEPHIR_INIT_CLASS(Qt_OpenGL_QOpenGLFunctions_4_1_CoreBackend_QOpenGLFunctions_4_1_CoreBackend)
{
	ZEPHIR_REGISTER_CLASS(Qt\\OpenGL\\QOpenGLFunctions_4_1_CoreBackend, QOpenGLFunctions_4_1_CoreBackend, qt, opengl_qopenglfunctions_4_1_corebackend_qopenglfunctions_4_1_corebackend, qt_opengl_qopenglfunctions_4_1_corebackend_qopenglfunctions_4_1_corebackend_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_OpenGL_QOpenGLFunctions_4_1_CoreBackend_QOpenGLFunctions_4_1_CoreBackend, new_)
{
	zval *c_param = NULL, _0;
	zend_long c;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(c)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &c_param);
	ZVAL_LONG(&_0, c);
	RETURN_LONG(phpqt_qopenglfunctions_4_1_corebackend_new(&_0));
}

PHP_METHOD(Qt_OpenGL_QOpenGLFunctions_4_1_CoreBackend_QOpenGLFunctions_4_1_CoreBackend, versionStatus)
{

	RETURN_LONG(phpqt_qopenglfunctions_4_1_corebackend_version_status());
}

