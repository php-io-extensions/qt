
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
#include "src/opengl-qopenglversionstatus.h"
#include "kernel/object.h"
#include "kernel/operators.h"
#include "kernel/memory.h"


ZEPHIR_INIT_CLASS(Qt_OpenGL_QOpenGLVersionStatus_QOpenGLVersionStatus)
{
	ZEPHIR_REGISTER_CLASS(Qt\\OpenGL\\QOpenGLVersionStatus, QOpenGLVersionStatus, qt, opengl_qopenglversionstatus_qopenglversionstatus, qt_opengl_qopenglversionstatus_qopenglversionstatus_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_OpenGL_QOpenGLVersionStatus_QOpenGLVersionStatus, new_)
{

	RETURN_LONG(phpqt_qopenglversionstatus_new());
}

PHP_METHOD(Qt_OpenGL_QOpenGLVersionStatus_QOpenGLVersionStatus, newIntIntQOpenGLVersionStatusOpenGLStatus)
{
	zval *majorVersion_param = NULL, *minorVersion_param = NULL, *functionStatus_param = NULL, _0, _1, _2;
	zend_long majorVersion, minorVersion, functionStatus;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(majorVersion)
		Z_PARAM_LONG(minorVersion)
		Z_PARAM_LONG(functionStatus)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &majorVersion_param, &minorVersion_param, &functionStatus_param);
	ZVAL_LONG(&_0, majorVersion);
	ZVAL_LONG(&_1, minorVersion);
	ZVAL_LONG(&_2, functionStatus);
	RETURN_LONG(phpqt_qopenglversionstatus_new_int_int_q_open_g_l_version_status_open_g_l_status(&_0, &_1, &_2));
}

PHP_METHOD(Qt_OpenGL_QOpenGLVersionStatus_QOpenGLVersionStatus, version)
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
	phpqt_qopenglversionstatus_version(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_OpenGL_QOpenGLVersionStatus_QOpenGLVersionStatus, setVersion)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval value;
	zval *handle_param = NULL, *value_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&value);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ARRAY(value)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &value_param);
	zephir_get_arrval(&value, value_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qopenglversionstatus_set_version(&_0, &value);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_OpenGL_QOpenGLVersionStatus_QOpenGLVersionStatus, status)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qopenglversionstatus_status(&_0));
}

PHP_METHOD(Qt_OpenGL_QOpenGLVersionStatus_QOpenGLVersionStatus, setStatus)
{
	zval *handle_param = NULL, *value_param = NULL, _0, _1;
	zend_long handle, value;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(value)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &value_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, value);
	phpqt_qopenglversionstatus_set_status(&_0, &_1);
}

