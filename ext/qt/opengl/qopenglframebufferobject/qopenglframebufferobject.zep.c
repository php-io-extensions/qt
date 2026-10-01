
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
#include "src/opengl-qopenglframebufferobject.h"
#include "kernel/operators.h"
#include "kernel/memory.h"
#include "kernel/object.h"


ZEPHIR_INIT_CLASS(Qt_OpenGL_QOpenGLFramebufferObject_QOpenGLFramebufferObject)
{
	ZEPHIR_REGISTER_CLASS(Qt\\OpenGL\\QOpenGLFramebufferObject, QOpenGLFramebufferObject, qt, opengl_qopenglframebufferobject_qopenglframebufferobject, qt_opengl_qopenglframebufferobject_qopenglframebufferobject_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_OpenGL_QOpenGLFramebufferObject_QOpenGLFramebufferObject, new_)
{
	zval *sizeWidth_param = NULL, *sizeHeight_param = NULL, *target_param = NULL, _0, _1, _2;
	zend_long sizeWidth, sizeHeight, target;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(2, 3)
		Z_PARAM_LONG(sizeWidth)
		Z_PARAM_LONG(sizeHeight)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(target)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 1, &sizeWidth_param, &sizeHeight_param, &target_param);
	if (!target_param) {
		target = 3553;
	} else {
		}
	ZVAL_LONG(&_0, sizeWidth);
	ZVAL_LONG(&_1, sizeHeight);
	ZVAL_LONG(&_2, target);
	RETURN_LONG(phpqt_qopenglframebufferobject_new(&_0, &_1, &_2));
}

PHP_METHOD(Qt_OpenGL_QOpenGLFramebufferObject_QOpenGLFramebufferObject, newIntIntGLenum)
{
	zval *width_param = NULL, *height_param = NULL, *target_param = NULL, _0, _1, _2;
	zend_long width, height, target;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(2, 3)
		Z_PARAM_LONG(width)
		Z_PARAM_LONG(height)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(target)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 1, &width_param, &height_param, &target_param);
	if (!target_param) {
		target = 3553;
	} else {
		}
	ZVAL_LONG(&_0, width);
	ZVAL_LONG(&_1, height);
	ZVAL_LONG(&_2, target);
	RETURN_LONG(phpqt_qopenglframebufferobject_new_int_int_g_lenum(&_0, &_1, &_2));
}

PHP_METHOD(Qt_OpenGL_QOpenGLFramebufferObject_QOpenGLFramebufferObject, newQSizeQOpenGLFramebufferObjectAttachmentGLenumGLenum)
{
	zval *sizeWidth_param = NULL, *sizeHeight_param = NULL, *attachment_param = NULL, *target_param = NULL, *internalFormat_param = NULL, _0, _1, _2, _3, _4;
	zend_long sizeWidth, sizeHeight, attachment, target, internalFormat;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZEND_PARSE_PARAMETERS_START(3, 5)
		Z_PARAM_LONG(sizeWidth)
		Z_PARAM_LONG(sizeHeight)
		Z_PARAM_LONG(attachment)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(target)
		Z_PARAM_LONG(internalFormat)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 2, &sizeWidth_param, &sizeHeight_param, &attachment_param, &target_param, &internalFormat_param);
	if (!target_param) {
		target = 3553;
	} else {
		}
	if (!internalFormat_param) {
		internalFormat = 0;
	} else {
		}
	ZVAL_LONG(&_0, sizeWidth);
	ZVAL_LONG(&_1, sizeHeight);
	ZVAL_LONG(&_2, attachment);
	ZVAL_LONG(&_3, target);
	ZVAL_LONG(&_4, internalFormat);
	RETURN_LONG(phpqt_qopenglframebufferobject_new_q_size_q_open_g_l_framebuffer_object_attachment_g_lenum_g_lenum(&_0, &_1, &_2, &_3, &_4));
}

PHP_METHOD(Qt_OpenGL_QOpenGLFramebufferObject_QOpenGLFramebufferObject, newIntIntQOpenGLFramebufferObjectAttachmentGLenumGLenum)
{
	zval *width_param = NULL, *height_param = NULL, *attachment_param = NULL, *target_param = NULL, *internalFormat_param = NULL, _0, _1, _2, _3, _4;
	zend_long width, height, attachment, target, internalFormat;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZEND_PARSE_PARAMETERS_START(3, 5)
		Z_PARAM_LONG(width)
		Z_PARAM_LONG(height)
		Z_PARAM_LONG(attachment)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(target)
		Z_PARAM_LONG(internalFormat)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 2, &width_param, &height_param, &attachment_param, &target_param, &internalFormat_param);
	if (!target_param) {
		target = 3553;
	} else {
		}
	if (!internalFormat_param) {
		internalFormat = 0;
	} else {
		}
	ZVAL_LONG(&_0, width);
	ZVAL_LONG(&_1, height);
	ZVAL_LONG(&_2, attachment);
	ZVAL_LONG(&_3, target);
	ZVAL_LONG(&_4, internalFormat);
	RETURN_LONG(phpqt_qopenglframebufferobject_new_int_int_q_open_g_l_framebuffer_object_attachment_g_lenum_g_lenum(&_0, &_1, &_2, &_3, &_4));
}

PHP_METHOD(Qt_OpenGL_QOpenGLFramebufferObject_QOpenGLFramebufferObject, newQSizeQOpenGLFramebufferObjectFormat)
{
	zval *sizeWidth_param = NULL, *sizeHeight_param = NULL, *format_param = NULL, _0, _1, _2;
	zend_long sizeWidth, sizeHeight, format;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(sizeWidth)
		Z_PARAM_LONG(sizeHeight)
		Z_PARAM_LONG(format)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &sizeWidth_param, &sizeHeight_param, &format_param);
	ZVAL_LONG(&_0, sizeWidth);
	ZVAL_LONG(&_1, sizeHeight);
	ZVAL_LONG(&_2, format);
	RETURN_LONG(phpqt_qopenglframebufferobject_new_q_size_q_open_g_l_framebuffer_object_format(&_0, &_1, &_2));
}

PHP_METHOD(Qt_OpenGL_QOpenGLFramebufferObject_QOpenGLFramebufferObject, newIntIntQOpenGLFramebufferObjectFormat)
{
	zval *width_param = NULL, *height_param = NULL, *format_param = NULL, _0, _1, _2;
	zend_long width, height, format;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(width)
		Z_PARAM_LONG(height)
		Z_PARAM_LONG(format)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &width_param, &height_param, &format_param);
	ZVAL_LONG(&_0, width);
	ZVAL_LONG(&_1, height);
	ZVAL_LONG(&_2, format);
	RETURN_LONG(phpqt_qopenglframebufferobject_new_int_int_q_open_g_l_framebuffer_object_format(&_0, &_1, &_2));
}

PHP_METHOD(Qt_OpenGL_QOpenGLFramebufferObject_QOpenGLFramebufferObject, addColorAttachment)
{
	zval *handle_param = NULL, *sizeWidth_param = NULL, *sizeHeight_param = NULL, *internalFormat_param = NULL, _0, _1, _2, _3;
	zend_long handle, sizeWidth, sizeHeight, internalFormat;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(3, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(sizeWidth)
		Z_PARAM_LONG(sizeHeight)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(internalFormat)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 1, &handle_param, &sizeWidth_param, &sizeHeight_param, &internalFormat_param);
	if (!internalFormat_param) {
		internalFormat = 0;
	} else {
		}
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, sizeWidth);
	ZVAL_LONG(&_2, sizeHeight);
	ZVAL_LONG(&_3, internalFormat);
	phpqt_qopenglframebufferobject_add_color_attachment(&_0, &_1, &_2, &_3);
}

PHP_METHOD(Qt_OpenGL_QOpenGLFramebufferObject_QOpenGLFramebufferObject, addColorAttachmentIntIntGLenum)
{
	zval *handle_param = NULL, *width_param = NULL, *height_param = NULL, *internalFormat_param = NULL, _0, _1, _2, _3;
	zend_long handle, width, height, internalFormat;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(3, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(width)
		Z_PARAM_LONG(height)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(internalFormat)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 1, &handle_param, &width_param, &height_param, &internalFormat_param);
	if (!internalFormat_param) {
		internalFormat = 0;
	} else {
		}
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, width);
	ZVAL_LONG(&_2, height);
	ZVAL_LONG(&_3, internalFormat);
	phpqt_qopenglframebufferobject_add_color_attachment_int_int_g_lenum(&_0, &_1, &_2, &_3);
}

PHP_METHOD(Qt_OpenGL_QOpenGLFramebufferObject_QOpenGLFramebufferObject, format)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qopenglframebufferobject_format(&_0));
}

PHP_METHOD(Qt_OpenGL_QOpenGLFramebufferObject_QOpenGLFramebufferObject, isValid)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qopenglframebufferobject_is_valid(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_OpenGL_QOpenGLFramebufferObject_QOpenGLFramebufferObject, isBound)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qopenglframebufferobject_is_bound(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_OpenGL_QOpenGLFramebufferObject_QOpenGLFramebufferObject, bind)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qopenglframebufferobject_bind(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_OpenGL_QOpenGLFramebufferObject_QOpenGLFramebufferObject, release)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qopenglframebufferobject_release(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_OpenGL_QOpenGLFramebufferObject_QOpenGLFramebufferObject, width)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qopenglframebufferobject_width(&_0));
}

PHP_METHOD(Qt_OpenGL_QOpenGLFramebufferObject_QOpenGLFramebufferObject, height)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qopenglframebufferobject_height(&_0));
}

PHP_METHOD(Qt_OpenGL_QOpenGLFramebufferObject_QOpenGLFramebufferObject, texture)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qopenglframebufferobject_texture(&_0));
}

PHP_METHOD(Qt_OpenGL_QOpenGLFramebufferObject_QOpenGLFramebufferObject, textures)
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
	phpqt_qopenglframebufferobject_textures(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_OpenGL_QOpenGLFramebufferObject_QOpenGLFramebufferObject, takeTexture)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qopenglframebufferobject_take_texture(&_0));
}

PHP_METHOD(Qt_OpenGL_QOpenGLFramebufferObject_QOpenGLFramebufferObject, takeTextureInt)
{
	zval *handle_param = NULL, *colorAttachmentIndex_param = NULL, _0, _1;
	zend_long handle, colorAttachmentIndex;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(colorAttachmentIndex)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &colorAttachmentIndex_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, colorAttachmentIndex);
	RETURN_LONG(phpqt_qopenglframebufferobject_take_texture_int(&_0, &_1));
}

PHP_METHOD(Qt_OpenGL_QOpenGLFramebufferObject_QOpenGLFramebufferObject, size)
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
	phpqt_qopenglframebufferobject_size(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_OpenGL_QOpenGLFramebufferObject_QOpenGLFramebufferObject, sizes)
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
	phpqt_qopenglframebufferobject_sizes(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_OpenGL_QOpenGLFramebufferObject_QOpenGLFramebufferObject, toImage)
{
	zend_bool flipped;
	zval *handle_param = NULL, *flipped_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_OPTIONAL
		Z_PARAM_BOOL(flipped)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 1, &handle_param, &flipped_param);
	if (!flipped_param) {
		flipped = 1;
	} else {
		}
	ZVAL_LONG(&_0, handle);
	ZVAL_BOOL(&_1, (flipped ? 1 : 0));
	RETURN_LONG(phpqt_qopenglframebufferobject_to_image(&_0, &_1));
}

PHP_METHOD(Qt_OpenGL_QOpenGLFramebufferObject_QOpenGLFramebufferObject, toImageBoolInt)
{
	zend_bool flipped;
	zval *handle_param = NULL, *flipped_param = NULL, *colorAttachmentIndex_param = NULL, _0, _1, _2;
	zend_long handle, colorAttachmentIndex;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_BOOL(flipped)
		Z_PARAM_LONG(colorAttachmentIndex)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &flipped_param, &colorAttachmentIndex_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_BOOL(&_1, (flipped ? 1 : 0));
	ZVAL_LONG(&_2, colorAttachmentIndex);
	RETURN_LONG(phpqt_qopenglframebufferobject_to_image_bool_int(&_0, &_1, &_2));
}

PHP_METHOD(Qt_OpenGL_QOpenGLFramebufferObject_QOpenGLFramebufferObject, attachment)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qopenglframebufferobject_attachment(&_0));
}

PHP_METHOD(Qt_OpenGL_QOpenGLFramebufferObject_QOpenGLFramebufferObject, setAttachment)
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
	phpqt_qopenglframebufferobject_set_attachment(&_0, &_1);
}

PHP_METHOD(Qt_OpenGL_QOpenGLFramebufferObject_QOpenGLFramebufferObject, handle)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qopenglframebufferobject_handle(&_0));
}

PHP_METHOD(Qt_OpenGL_QOpenGLFramebufferObject_QOpenGLFramebufferObject, bindDefault)
{
	zend_long r = 0;
	r = phpqt_qopenglframebufferobject_bind_default();
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_OpenGL_QOpenGLFramebufferObject_QOpenGLFramebufferObject, hasOpenGLFramebufferObjects)
{
	zend_long r = 0;
	r = phpqt_qopenglframebufferobject_has_open_g_l_framebuffer_objects();
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_OpenGL_QOpenGLFramebufferObject_QOpenGLFramebufferObject, hasOpenGLFramebufferBlit)
{
	zend_long r = 0;
	r = phpqt_qopenglframebufferobject_has_open_g_l_framebuffer_blit();
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_OpenGL_QOpenGLFramebufferObject_QOpenGLFramebufferObject, blitFramebuffer)
{
	zval *target_param = NULL, *targetRectX_param = NULL, *targetRectY_param = NULL, *targetRectWidth_param = NULL, *targetRectHeight_param = NULL, *source_param = NULL, *sourceRectX_param = NULL, *sourceRectY_param = NULL, *sourceRectWidth_param = NULL, *sourceRectHeight_param = NULL, *buffers_param = NULL, *filter_param = NULL, *readColorAttachmentIndex_param = NULL, *drawColorAttachmentIndex_param = NULL, *restorePolicy_param = NULL, _0, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14;
	zend_long target, targetRectX, targetRectY, targetRectWidth, targetRectHeight, source, sourceRectX, sourceRectY, sourceRectWidth, sourceRectHeight, buffers, filter, readColorAttachmentIndex, drawColorAttachmentIndex, restorePolicy;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_5);
	ZVAL_UNDEF(&_6);
	ZVAL_UNDEF(&_7);
	ZVAL_UNDEF(&_8);
	ZVAL_UNDEF(&_9);
	ZVAL_UNDEF(&_10);
	ZVAL_UNDEF(&_11);
	ZVAL_UNDEF(&_12);
	ZVAL_UNDEF(&_13);
	ZVAL_UNDEF(&_14);
	ZEND_PARSE_PARAMETERS_START(15, 15)
		Z_PARAM_LONG(target)
		Z_PARAM_LONG(targetRectX)
		Z_PARAM_LONG(targetRectY)
		Z_PARAM_LONG(targetRectWidth)
		Z_PARAM_LONG(targetRectHeight)
		Z_PARAM_LONG(source)
		Z_PARAM_LONG(sourceRectX)
		Z_PARAM_LONG(sourceRectY)
		Z_PARAM_LONG(sourceRectWidth)
		Z_PARAM_LONG(sourceRectHeight)
		Z_PARAM_LONG(buffers)
		Z_PARAM_LONG(filter)
		Z_PARAM_LONG(readColorAttachmentIndex)
		Z_PARAM_LONG(drawColorAttachmentIndex)
		Z_PARAM_LONG(restorePolicy)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(15, 0, &target_param, &targetRectX_param, &targetRectY_param, &targetRectWidth_param, &targetRectHeight_param, &source_param, &sourceRectX_param, &sourceRectY_param, &sourceRectWidth_param, &sourceRectHeight_param, &buffers_param, &filter_param, &readColorAttachmentIndex_param, &drawColorAttachmentIndex_param, &restorePolicy_param);
	ZVAL_LONG(&_0, target);
	ZVAL_LONG(&_1, targetRectX);
	ZVAL_LONG(&_2, targetRectY);
	ZVAL_LONG(&_3, targetRectWidth);
	ZVAL_LONG(&_4, targetRectHeight);
	ZVAL_LONG(&_5, source);
	ZVAL_LONG(&_6, sourceRectX);
	ZVAL_LONG(&_7, sourceRectY);
	ZVAL_LONG(&_8, sourceRectWidth);
	ZVAL_LONG(&_9, sourceRectHeight);
	ZVAL_LONG(&_10, buffers);
	ZVAL_LONG(&_11, filter);
	ZVAL_LONG(&_12, readColorAttachmentIndex);
	ZVAL_LONG(&_13, drawColorAttachmentIndex);
	ZVAL_LONG(&_14, restorePolicy);
	phpqt_qopenglframebufferobject_blit_framebuffer(&_0, &_1, &_2, &_3, &_4, &_5, &_6, &_7, &_8, &_9, &_10, &_11, &_12, &_13, &_14);
}

PHP_METHOD(Qt_OpenGL_QOpenGLFramebufferObject_QOpenGLFramebufferObject, blitFramebufferQOpenGLFramebufferObjectQRectQOpenGLFramebufferObjectQRectGLbitfieldGLenumIntInt)
{
	zval *target_param = NULL, *targetRectX_param = NULL, *targetRectY_param = NULL, *targetRectWidth_param = NULL, *targetRectHeight_param = NULL, *source_param = NULL, *sourceRectX_param = NULL, *sourceRectY_param = NULL, *sourceRectWidth_param = NULL, *sourceRectHeight_param = NULL, *buffers_param = NULL, *filter_param = NULL, *readColorAttachmentIndex_param = NULL, *drawColorAttachmentIndex_param = NULL, _0, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13;
	zend_long target, targetRectX, targetRectY, targetRectWidth, targetRectHeight, source, sourceRectX, sourceRectY, sourceRectWidth, sourceRectHeight, buffers, filter, readColorAttachmentIndex, drawColorAttachmentIndex;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_5);
	ZVAL_UNDEF(&_6);
	ZVAL_UNDEF(&_7);
	ZVAL_UNDEF(&_8);
	ZVAL_UNDEF(&_9);
	ZVAL_UNDEF(&_10);
	ZVAL_UNDEF(&_11);
	ZVAL_UNDEF(&_12);
	ZVAL_UNDEF(&_13);
	ZEND_PARSE_PARAMETERS_START(14, 14)
		Z_PARAM_LONG(target)
		Z_PARAM_LONG(targetRectX)
		Z_PARAM_LONG(targetRectY)
		Z_PARAM_LONG(targetRectWidth)
		Z_PARAM_LONG(targetRectHeight)
		Z_PARAM_LONG(source)
		Z_PARAM_LONG(sourceRectX)
		Z_PARAM_LONG(sourceRectY)
		Z_PARAM_LONG(sourceRectWidth)
		Z_PARAM_LONG(sourceRectHeight)
		Z_PARAM_LONG(buffers)
		Z_PARAM_LONG(filter)
		Z_PARAM_LONG(readColorAttachmentIndex)
		Z_PARAM_LONG(drawColorAttachmentIndex)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(14, 0, &target_param, &targetRectX_param, &targetRectY_param, &targetRectWidth_param, &targetRectHeight_param, &source_param, &sourceRectX_param, &sourceRectY_param, &sourceRectWidth_param, &sourceRectHeight_param, &buffers_param, &filter_param, &readColorAttachmentIndex_param, &drawColorAttachmentIndex_param);
	ZVAL_LONG(&_0, target);
	ZVAL_LONG(&_1, targetRectX);
	ZVAL_LONG(&_2, targetRectY);
	ZVAL_LONG(&_3, targetRectWidth);
	ZVAL_LONG(&_4, targetRectHeight);
	ZVAL_LONG(&_5, source);
	ZVAL_LONG(&_6, sourceRectX);
	ZVAL_LONG(&_7, sourceRectY);
	ZVAL_LONG(&_8, sourceRectWidth);
	ZVAL_LONG(&_9, sourceRectHeight);
	ZVAL_LONG(&_10, buffers);
	ZVAL_LONG(&_11, filter);
	ZVAL_LONG(&_12, readColorAttachmentIndex);
	ZVAL_LONG(&_13, drawColorAttachmentIndex);
	phpqt_qopenglframebufferobject_blit_framebuffer_q_open_g_l_framebuffer_object_q_rect_q_open_g_l_framebuffer_object_q_rect_g_lbitfield_g_lenum_int_int(&_0, &_1, &_2, &_3, &_4, &_5, &_6, &_7, &_8, &_9, &_10, &_11, &_12, &_13);
}

PHP_METHOD(Qt_OpenGL_QOpenGLFramebufferObject_QOpenGLFramebufferObject, blitFramebufferQOpenGLFramebufferObjectQRectQOpenGLFramebufferObjectQRectGLbitfieldGLenum)
{
	zval *target_param = NULL, *targetRectX_param = NULL, *targetRectY_param = NULL, *targetRectWidth_param = NULL, *targetRectHeight_param = NULL, *source_param = NULL, *sourceRectX_param = NULL, *sourceRectY_param = NULL, *sourceRectWidth_param = NULL, *sourceRectHeight_param = NULL, *buffers_param = NULL, *filter_param = NULL, _0, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11;
	zend_long target, targetRectX, targetRectY, targetRectWidth, targetRectHeight, source, sourceRectX, sourceRectY, sourceRectWidth, sourceRectHeight, buffers, filter;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_5);
	ZVAL_UNDEF(&_6);
	ZVAL_UNDEF(&_7);
	ZVAL_UNDEF(&_8);
	ZVAL_UNDEF(&_9);
	ZVAL_UNDEF(&_10);
	ZVAL_UNDEF(&_11);
	ZEND_PARSE_PARAMETERS_START(10, 12)
		Z_PARAM_LONG(target)
		Z_PARAM_LONG(targetRectX)
		Z_PARAM_LONG(targetRectY)
		Z_PARAM_LONG(targetRectWidth)
		Z_PARAM_LONG(targetRectHeight)
		Z_PARAM_LONG(source)
		Z_PARAM_LONG(sourceRectX)
		Z_PARAM_LONG(sourceRectY)
		Z_PARAM_LONG(sourceRectWidth)
		Z_PARAM_LONG(sourceRectHeight)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(buffers)
		Z_PARAM_LONG(filter)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(10, 2, &target_param, &targetRectX_param, &targetRectY_param, &targetRectWidth_param, &targetRectHeight_param, &source_param, &sourceRectX_param, &sourceRectY_param, &sourceRectWidth_param, &sourceRectHeight_param, &buffers_param, &filter_param);
	if (!buffers_param) {
		buffers = 16384;
	} else {
		}
	if (!filter_param) {
		filter = 9728;
	} else {
		}
	ZVAL_LONG(&_0, target);
	ZVAL_LONG(&_1, targetRectX);
	ZVAL_LONG(&_2, targetRectY);
	ZVAL_LONG(&_3, targetRectWidth);
	ZVAL_LONG(&_4, targetRectHeight);
	ZVAL_LONG(&_5, source);
	ZVAL_LONG(&_6, sourceRectX);
	ZVAL_LONG(&_7, sourceRectY);
	ZVAL_LONG(&_8, sourceRectWidth);
	ZVAL_LONG(&_9, sourceRectHeight);
	ZVAL_LONG(&_10, buffers);
	ZVAL_LONG(&_11, filter);
	phpqt_qopenglframebufferobject_blit_framebuffer_q_open_g_l_framebuffer_object_q_rect_q_open_g_l_framebuffer_object_q_rect_g_lbitfield_g_lenum(&_0, &_1, &_2, &_3, &_4, &_5, &_6, &_7, &_8, &_9, &_10, &_11);
}

PHP_METHOD(Qt_OpenGL_QOpenGLFramebufferObject_QOpenGLFramebufferObject, blitFramebufferQOpenGLFramebufferObjectQOpenGLFramebufferObjectGLbitfieldGLenum)
{
	zval *target_param = NULL, *source_param = NULL, *buffers_param = NULL, *filter_param = NULL, _0, _1, _2, _3;
	zend_long target, source, buffers, filter;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(2, 4)
		Z_PARAM_LONG(target)
		Z_PARAM_LONG(source)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(buffers)
		Z_PARAM_LONG(filter)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 2, &target_param, &source_param, &buffers_param, &filter_param);
	if (!buffers_param) {
		buffers = 16384;
	} else {
		}
	if (!filter_param) {
		filter = 9728;
	} else {
		}
	ZVAL_LONG(&_0, target);
	ZVAL_LONG(&_1, source);
	ZVAL_LONG(&_2, buffers);
	ZVAL_LONG(&_3, filter);
	phpqt_qopenglframebufferobject_blit_framebuffer_q_open_g_l_framebuffer_object_q_open_g_l_framebuffer_object_g_lbitfield_g_lenum(&_0, &_1, &_2, &_3);
}

