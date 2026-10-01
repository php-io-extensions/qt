
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
#include "src/opengl-qopenglversionprofile.h"
#include "kernel/object.h"
#include "kernel/operators.h"
#include "kernel/memory.h"


ZEPHIR_INIT_CLASS(Qt_OpenGL_QOpenGLVersionProfile_QOpenGLVersionProfile)
{
	ZEPHIR_REGISTER_CLASS(Qt\\OpenGL\\QOpenGLVersionProfile, QOpenGLVersionProfile, qt, opengl_qopenglversionprofile_qopenglversionprofile, qt_opengl_qopenglversionprofile_qopenglversionprofile_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_OpenGL_QOpenGLVersionProfile_QOpenGLVersionProfile, new_)
{

	RETURN_LONG(phpqt_qopenglversionprofile_new());
}

PHP_METHOD(Qt_OpenGL_QOpenGLVersionProfile_QOpenGLVersionProfile, newQSurfaceFormat)
{
	zval *format_param = NULL, _0;
	zend_long format;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(format)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &format_param);
	ZVAL_LONG(&_0, format);
	RETURN_LONG(phpqt_qopenglversionprofile_new_q_surface_format(&_0));
}

PHP_METHOD(Qt_OpenGL_QOpenGLVersionProfile_QOpenGLVersionProfile, newQOpenGLVersionProfile)
{
	zval *other_param = NULL, _0;
	zend_long other;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(other)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &other_param);
	ZVAL_LONG(&_0, other);
	RETURN_LONG(phpqt_qopenglversionprofile_new_q_open_g_l_version_profile(&_0));
}

PHP_METHOD(Qt_OpenGL_QOpenGLVersionProfile_QOpenGLVersionProfile, version)
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
	phpqt_qopenglversionprofile_version(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_OpenGL_QOpenGLVersionProfile_QOpenGLVersionProfile, setVersion)
{
	zval *handle_param = NULL, *majorVersion_param = NULL, *minorVersion_param = NULL, _0, _1, _2;
	zend_long handle, majorVersion, minorVersion;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(majorVersion)
		Z_PARAM_LONG(minorVersion)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &majorVersion_param, &minorVersion_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, majorVersion);
	ZVAL_LONG(&_2, minorVersion);
	phpqt_qopenglversionprofile_set_version(&_0, &_1, &_2);
}

PHP_METHOD(Qt_OpenGL_QOpenGLVersionProfile_QOpenGLVersionProfile, profile)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qopenglversionprofile_profile(&_0));
}

PHP_METHOD(Qt_OpenGL_QOpenGLVersionProfile_QOpenGLVersionProfile, setProfile)
{
	zval *handle_param = NULL, *profile_param = NULL, _0, _1;
	zend_long handle, profile;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(profile)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &profile_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, profile);
	phpqt_qopenglversionprofile_set_profile(&_0, &_1);
}

PHP_METHOD(Qt_OpenGL_QOpenGLVersionProfile_QOpenGLVersionProfile, hasProfiles)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qopenglversionprofile_has_profiles(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_OpenGL_QOpenGLVersionProfile_QOpenGLVersionProfile, isLegacyVersion)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qopenglversionprofile_is_legacy_version(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_OpenGL_QOpenGLVersionProfile_QOpenGLVersionProfile, isValid)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qopenglversionprofile_is_valid(&_0);
	RETURN_BOOL(r == 1);
}

