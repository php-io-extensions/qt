
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
#include "src/opengl-qopengltextureblitter.h"
#include "kernel/object.h"
#include "kernel/operators.h"
#include "kernel/memory.h"


ZEPHIR_INIT_CLASS(Qt_OpenGL_QOpenGLTextureBlitter_QOpenGLTextureBlitter)
{
	ZEPHIR_REGISTER_CLASS(Qt\\OpenGL\\QOpenGLTextureBlitter, QOpenGLTextureBlitter, qt, opengl_qopengltextureblitter_qopengltextureblitter, qt_opengl_qopengltextureblitter_qopengltextureblitter_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_OpenGL_QOpenGLTextureBlitter_QOpenGLTextureBlitter, new_)
{

	RETURN_LONG(phpqt_qopengltextureblitter_new());
}

PHP_METHOD(Qt_OpenGL_QOpenGLTextureBlitter_QOpenGLTextureBlitter, create)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qopengltextureblitter_create(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_OpenGL_QOpenGLTextureBlitter_QOpenGLTextureBlitter, isCreated)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qopengltextureblitter_is_created(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_OpenGL_QOpenGLTextureBlitter_QOpenGLTextureBlitter, destroy)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qopengltextureblitter_destroy(&_0);
}

PHP_METHOD(Qt_OpenGL_QOpenGLTextureBlitter_QOpenGLTextureBlitter, supportsExternalOESTarget)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qopengltextureblitter_supports_external_o_e_s_target(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_OpenGL_QOpenGLTextureBlitter_QOpenGLTextureBlitter, supportsRectangleTarget)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qopengltextureblitter_supports_rectangle_target(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_OpenGL_QOpenGLTextureBlitter_QOpenGLTextureBlitter, bind)
{
	zval *handle_param = NULL, *target_param = NULL, _0, _1;
	zend_long handle, target;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(target)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 1, &handle_param, &target_param);
	if (!target_param) {
		target = 3553;
	} else {
		}
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, target);
	phpqt_qopengltextureblitter_bind(&_0, &_1);
}

PHP_METHOD(Qt_OpenGL_QOpenGLTextureBlitter_QOpenGLTextureBlitter, release)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qopengltextureblitter_release(&_0);
}

PHP_METHOD(Qt_OpenGL_QOpenGLTextureBlitter_QOpenGLTextureBlitter, setRedBlueSwizzle)
{
	zend_bool swizzle;
	zval *handle_param = NULL, *swizzle_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_BOOL(swizzle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &swizzle_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_BOOL(&_1, (swizzle ? 1 : 0));
	phpqt_qopengltextureblitter_set_red_blue_swizzle(&_0, &_1);
}

PHP_METHOD(Qt_OpenGL_QOpenGLTextureBlitter_QOpenGLTextureBlitter, setOpacity)
{
	double opacity;
	zval *handle_param = NULL, *opacity_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(opacity)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &opacity_param);
	opacity = zephir_get_doubleval(opacity_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, opacity);
	phpqt_qopengltextureblitter_set_opacity(&_0, &_1);
}

PHP_METHOD(Qt_OpenGL_QOpenGLTextureBlitter_QOpenGLTextureBlitter, blit)
{
	zval *handle_param = NULL, *texture_param = NULL, *targetTransform_param = NULL, *sourceOrigin_param = NULL, _0, _1, _2, _3;
	zend_long handle, texture, targetTransform, sourceOrigin;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(texture)
		Z_PARAM_LONG(targetTransform)
		Z_PARAM_LONG(sourceOrigin)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 0, &handle_param, &texture_param, &targetTransform_param, &sourceOrigin_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, texture);
	ZVAL_LONG(&_2, targetTransform);
	ZVAL_LONG(&_3, sourceOrigin);
	phpqt_qopengltextureblitter_blit(&_0, &_1, &_2, &_3);
}

PHP_METHOD(Qt_OpenGL_QOpenGLTextureBlitter_QOpenGLTextureBlitter, targetTransform)
{
	zend_long viewportX, viewportY, viewportWidth, viewportHeight;
	zval *targetX_param = NULL, *targetY_param = NULL, *targetWidth_param = NULL, *targetHeight_param = NULL, *viewportX_param = NULL, *viewportY_param = NULL, *viewportWidth_param = NULL, *viewportHeight_param = NULL, _0, _1, _2, _3, _4, _5, _6, _7;
	double targetX, targetY, targetWidth, targetHeight;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_5);
	ZVAL_UNDEF(&_6);
	ZVAL_UNDEF(&_7);
	ZEND_PARSE_PARAMETERS_START(8, 8)
		Z_PARAM_ZVAL(targetX)
		Z_PARAM_ZVAL(targetY)
		Z_PARAM_ZVAL(targetWidth)
		Z_PARAM_ZVAL(targetHeight)
		Z_PARAM_LONG(viewportX)
		Z_PARAM_LONG(viewportY)
		Z_PARAM_LONG(viewportWidth)
		Z_PARAM_LONG(viewportHeight)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(8, 0, &targetX_param, &targetY_param, &targetWidth_param, &targetHeight_param, &viewportX_param, &viewportY_param, &viewportWidth_param, &viewportHeight_param);
	targetX = zephir_get_doubleval(targetX_param);
	targetY = zephir_get_doubleval(targetY_param);
	targetWidth = zephir_get_doubleval(targetWidth_param);
	targetHeight = zephir_get_doubleval(targetHeight_param);
	ZVAL_DOUBLE(&_0, targetX);
	ZVAL_DOUBLE(&_1, targetY);
	ZVAL_DOUBLE(&_2, targetWidth);
	ZVAL_DOUBLE(&_3, targetHeight);
	ZVAL_LONG(&_4, viewportX);
	ZVAL_LONG(&_5, viewportY);
	ZVAL_LONG(&_6, viewportWidth);
	ZVAL_LONG(&_7, viewportHeight);
	RETURN_LONG(phpqt_qopengltextureblitter_target_transform(&_0, &_1, &_2, &_3, &_4, &_5, &_6, &_7));
}

