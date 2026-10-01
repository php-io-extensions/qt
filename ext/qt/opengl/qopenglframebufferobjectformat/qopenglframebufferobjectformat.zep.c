
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
#include "src/opengl-qopenglframebufferobjectformat.h"
#include "kernel/object.h"
#include "kernel/operators.h"
#include "kernel/memory.h"


ZEPHIR_INIT_CLASS(Qt_OpenGL_QOpenGLFramebufferObjectFormat_QOpenGLFramebufferObjectFormat)
{
	ZEPHIR_REGISTER_CLASS(Qt\\OpenGL\\QOpenGLFramebufferObjectFormat, QOpenGLFramebufferObjectFormat, qt, opengl_qopenglframebufferobjectformat_qopenglframebufferobjectformat, qt_opengl_qopenglframebufferobjectformat_qopenglframebufferobjectformat_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_OpenGL_QOpenGLFramebufferObjectFormat_QOpenGLFramebufferObjectFormat, new_)
{

	RETURN_LONG(phpqt_qopenglframebufferobjectformat_new());
}

PHP_METHOD(Qt_OpenGL_QOpenGLFramebufferObjectFormat_QOpenGLFramebufferObjectFormat, newQOpenGLFramebufferObjectFormat)
{
	zval *other_param = NULL, _0;
	zend_long other;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(other)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &other_param);
	ZVAL_LONG(&_0, other);
	RETURN_LONG(phpqt_qopenglframebufferobjectformat_new_q_open_g_l_framebuffer_object_format(&_0));
}

PHP_METHOD(Qt_OpenGL_QOpenGLFramebufferObjectFormat_QOpenGLFramebufferObjectFormat, setSamples)
{
	zval *handle_param = NULL, *samples_param = NULL, _0, _1;
	zend_long handle, samples;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(samples)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &samples_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, samples);
	phpqt_qopenglframebufferobjectformat_set_samples(&_0, &_1);
}

PHP_METHOD(Qt_OpenGL_QOpenGLFramebufferObjectFormat_QOpenGLFramebufferObjectFormat, samples)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qopenglframebufferobjectformat_samples(&_0));
}

PHP_METHOD(Qt_OpenGL_QOpenGLFramebufferObjectFormat_QOpenGLFramebufferObjectFormat, setMipmap)
{
	zend_bool enabled;
	zval *handle_param = NULL, *enabled_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_BOOL(enabled)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &enabled_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_BOOL(&_1, (enabled ? 1 : 0));
	phpqt_qopenglframebufferobjectformat_set_mipmap(&_0, &_1);
}

PHP_METHOD(Qt_OpenGL_QOpenGLFramebufferObjectFormat_QOpenGLFramebufferObjectFormat, mipmap)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qopenglframebufferobjectformat_mipmap(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_OpenGL_QOpenGLFramebufferObjectFormat_QOpenGLFramebufferObjectFormat, setAttachment)
{
	zval *handle_param = NULL, *attachment_param = NULL, _0, _1;
	zend_long handle, attachment;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(attachment)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &attachment_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, attachment);
	phpqt_qopenglframebufferobjectformat_set_attachment(&_0, &_1);
}

PHP_METHOD(Qt_OpenGL_QOpenGLFramebufferObjectFormat_QOpenGLFramebufferObjectFormat, attachment)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qopenglframebufferobjectformat_attachment(&_0));
}

PHP_METHOD(Qt_OpenGL_QOpenGLFramebufferObjectFormat_QOpenGLFramebufferObjectFormat, setTextureTarget)
{
	zval *handle_param = NULL, *target_param = NULL, _0, _1;
	zend_long handle, target;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(target)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &target_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, target);
	phpqt_qopenglframebufferobjectformat_set_texture_target(&_0, &_1);
}

PHP_METHOD(Qt_OpenGL_QOpenGLFramebufferObjectFormat_QOpenGLFramebufferObjectFormat, textureTarget)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qopenglframebufferobjectformat_texture_target(&_0));
}

PHP_METHOD(Qt_OpenGL_QOpenGLFramebufferObjectFormat_QOpenGLFramebufferObjectFormat, setInternalTextureFormat)
{
	zval *handle_param = NULL, *internalTextureFormat_param = NULL, _0, _1;
	zend_long handle, internalTextureFormat;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(internalTextureFormat)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &internalTextureFormat_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, internalTextureFormat);
	phpqt_qopenglframebufferobjectformat_set_internal_texture_format(&_0, &_1);
}

PHP_METHOD(Qt_OpenGL_QOpenGLFramebufferObjectFormat_QOpenGLFramebufferObjectFormat, internalTextureFormat)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qopenglframebufferobjectformat_internal_texture_format(&_0));
}

