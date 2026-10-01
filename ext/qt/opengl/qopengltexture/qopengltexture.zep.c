
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
#include "src/opengl-qopengltexture.h"
#include "kernel/object.h"
#include "kernel/operators.h"
#include "kernel/memory.h"


ZEPHIR_INIT_CLASS(Qt_OpenGL_QOpenGLTexture_QOpenGLTexture)
{
	ZEPHIR_REGISTER_CLASS(Qt\\OpenGL\\QOpenGLTexture, QOpenGLTexture, qt, opengl_qopengltexture_qopengltexture, qt_opengl_qopengltexture_qopengltexture_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_OpenGL_QOpenGLTexture_QOpenGLTexture, staticMetaObject)
{

	RETURN_LONG(phpqt_qopengltexture_static_meta_object());
}

PHP_METHOD(Qt_OpenGL_QOpenGLTexture_QOpenGLTexture, qt_check_for_QGADGET_macro)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qopengltexture_qt_check_for__q_g_a_d_g_e_t_macro(&_0);
}

PHP_METHOD(Qt_OpenGL_QOpenGLTexture_QOpenGLTexture, new_)
{
	zval *target_param = NULL, _0;
	zend_long target;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(target)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &target_param);
	ZVAL_LONG(&_0, target);
	RETURN_LONG(phpqt_qopengltexture_new(&_0));
}

PHP_METHOD(Qt_OpenGL_QOpenGLTexture_QOpenGLTexture, newQImageQOpenGLTextureMipMapGeneration)
{
	zval *image_param = NULL, *genMipMaps = NULL, genMipMaps_sub, __$null, _0;
	zend_long image;

	ZVAL_UNDEF(&genMipMaps_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_LONG(image)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(genMipMaps)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 1, &image_param, &genMipMaps);
	if (!genMipMaps) {
		genMipMaps = &genMipMaps_sub;
		genMipMaps = &__$null;
	}
	ZVAL_LONG(&_0, image);
	RETURN_LONG(phpqt_qopengltexture_new_q_image_q_open_g_l_texture_mip_map_generation(&_0, genMipMaps));
}

PHP_METHOD(Qt_OpenGL_QOpenGLTexture_QOpenGLTexture, target)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qopengltexture_target(&_0));
}

PHP_METHOD(Qt_OpenGL_QOpenGLTexture_QOpenGLTexture, create)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qopengltexture_create(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_OpenGL_QOpenGLTexture_QOpenGLTexture, destroy)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qopengltexture_destroy(&_0);
}

PHP_METHOD(Qt_OpenGL_QOpenGLTexture_QOpenGLTexture, isCreated)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qopengltexture_is_created(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_OpenGL_QOpenGLTexture_QOpenGLTexture, textureId)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qopengltexture_texture_id(&_0));
}

PHP_METHOD(Qt_OpenGL_QOpenGLTexture_QOpenGLTexture, bind)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qopengltexture_bind(&_0);
}

PHP_METHOD(Qt_OpenGL_QOpenGLTexture_QOpenGLTexture, bindUintQOpenGLTextureTextureUnitReset)
{
	zval *handle_param = NULL, *unit_param = NULL, *reset = NULL, reset_sub, __$null, _0, _1;
	zend_long handle, unit;

	ZVAL_UNDEF(&reset_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(2, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(unit)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(reset)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 1, &handle_param, &unit_param, &reset);
	if (!reset) {
		reset = &reset_sub;
		reset = &__$null;
	}
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, unit);
	phpqt_qopengltexture_bind_uint_q_open_g_l_texture_texture_unit_reset(&_0, &_1, reset);
}

PHP_METHOD(Qt_OpenGL_QOpenGLTexture_QOpenGLTexture, release)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qopengltexture_release(&_0);
}

PHP_METHOD(Qt_OpenGL_QOpenGLTexture_QOpenGLTexture, releaseUintQOpenGLTextureTextureUnitReset)
{
	zval *handle_param = NULL, *unit_param = NULL, *reset = NULL, reset_sub, __$null, _0, _1;
	zend_long handle, unit;

	ZVAL_UNDEF(&reset_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(2, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(unit)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(reset)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 1, &handle_param, &unit_param, &reset);
	if (!reset) {
		reset = &reset_sub;
		reset = &__$null;
	}
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, unit);
	phpqt_qopengltexture_release_uint_q_open_g_l_texture_texture_unit_reset(&_0, &_1, reset);
}

PHP_METHOD(Qt_OpenGL_QOpenGLTexture_QOpenGLTexture, isBound)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qopengltexture_is_bound(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_OpenGL_QOpenGLTexture_QOpenGLTexture, isBoundUint)
{
	zval *handle_param = NULL, *unit_param = NULL, _0, _1;
	zend_long handle, unit, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(unit)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &unit_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, unit);
	r = phpqt_qopengltexture_is_bound_uint(&_0, &_1);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_OpenGL_QOpenGLTexture_QOpenGLTexture, boundTextureId)
{
	zval *target_param = NULL, _0;
	zend_long target;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(target)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &target_param);
	ZVAL_LONG(&_0, target);
	RETURN_LONG(phpqt_qopengltexture_bound_texture_id(&_0));
}

PHP_METHOD(Qt_OpenGL_QOpenGLTexture_QOpenGLTexture, boundTextureIdUintQOpenGLTextureBindingTarget)
{
	zval *unit_param = NULL, *target_param = NULL, _0, _1;
	zend_long unit, target;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(unit)
		Z_PARAM_LONG(target)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &unit_param, &target_param);
	ZVAL_LONG(&_0, unit);
	ZVAL_LONG(&_1, target);
	RETURN_LONG(phpqt_qopengltexture_bound_texture_id_uint_q_open_g_l_texture_binding_target(&_0, &_1));
}

PHP_METHOD(Qt_OpenGL_QOpenGLTexture_QOpenGLTexture, setFormat)
{
	zval *handle_param = NULL, *format_param = NULL, _0, _1;
	zend_long handle, format;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(format)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &format_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, format);
	phpqt_qopengltexture_set_format(&_0, &_1);
}

PHP_METHOD(Qt_OpenGL_QOpenGLTexture_QOpenGLTexture, format)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qopengltexture_format(&_0));
}

PHP_METHOD(Qt_OpenGL_QOpenGLTexture_QOpenGLTexture, setSize)
{
	zval *handle_param = NULL, *width_param = NULL, *height_param = NULL, *depth_param = NULL, _0, _1, _2, _3;
	zend_long handle, width, height, depth;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(2, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(width)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(height)
		Z_PARAM_LONG(depth)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 2, &handle_param, &width_param, &height_param, &depth_param);
	if (!height_param) {
		height = 1;
	} else {
		}
	if (!depth_param) {
		depth = 1;
	} else {
		}
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, width);
	ZVAL_LONG(&_2, height);
	ZVAL_LONG(&_3, depth);
	phpqt_qopengltexture_set_size(&_0, &_1, &_2, &_3);
}

PHP_METHOD(Qt_OpenGL_QOpenGLTexture_QOpenGLTexture, width)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qopengltexture_width(&_0));
}

PHP_METHOD(Qt_OpenGL_QOpenGLTexture_QOpenGLTexture, height)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qopengltexture_height(&_0));
}

PHP_METHOD(Qt_OpenGL_QOpenGLTexture_QOpenGLTexture, depth)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qopengltexture_depth(&_0));
}

PHP_METHOD(Qt_OpenGL_QOpenGLTexture_QOpenGLTexture, setMipLevels)
{
	zval *handle_param = NULL, *levels_param = NULL, _0, _1;
	zend_long handle, levels;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(levels)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &levels_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, levels);
	phpqt_qopengltexture_set_mip_levels(&_0, &_1);
}

PHP_METHOD(Qt_OpenGL_QOpenGLTexture_QOpenGLTexture, mipLevels)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qopengltexture_mip_levels(&_0));
}

PHP_METHOD(Qt_OpenGL_QOpenGLTexture_QOpenGLTexture, maximumMipLevels)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qopengltexture_maximum_mip_levels(&_0));
}

PHP_METHOD(Qt_OpenGL_QOpenGLTexture_QOpenGLTexture, setLayers)
{
	zval *handle_param = NULL, *layers_param = NULL, _0, _1;
	zend_long handle, layers;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(layers)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &layers_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, layers);
	phpqt_qopengltexture_set_layers(&_0, &_1);
}

PHP_METHOD(Qt_OpenGL_QOpenGLTexture_QOpenGLTexture, layers)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qopengltexture_layers(&_0));
}

PHP_METHOD(Qt_OpenGL_QOpenGLTexture_QOpenGLTexture, faces)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qopengltexture_faces(&_0));
}

PHP_METHOD(Qt_OpenGL_QOpenGLTexture_QOpenGLTexture, setSamples)
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
	phpqt_qopengltexture_set_samples(&_0, &_1);
}

PHP_METHOD(Qt_OpenGL_QOpenGLTexture_QOpenGLTexture, samples)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qopengltexture_samples(&_0));
}

PHP_METHOD(Qt_OpenGL_QOpenGLTexture_QOpenGLTexture, setFixedSamplePositions)
{
	zend_bool fixed;
	zval *handle_param = NULL, *fixed_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_BOOL(fixed)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &fixed_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_BOOL(&_1, (fixed ? 1 : 0));
	phpqt_qopengltexture_set_fixed_sample_positions(&_0, &_1);
}

PHP_METHOD(Qt_OpenGL_QOpenGLTexture_QOpenGLTexture, isFixedSamplePositions)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qopengltexture_is_fixed_sample_positions(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_OpenGL_QOpenGLTexture_QOpenGLTexture, allocateStorage)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qopengltexture_allocate_storage(&_0);
}

PHP_METHOD(Qt_OpenGL_QOpenGLTexture_QOpenGLTexture, allocateStorageQOpenGLTexturePixelFormatQOpenGLTexturePixelType)
{
	zval *handle_param = NULL, *pixelFormat_param = NULL, *pixelType_param = NULL, _0, _1, _2;
	zend_long handle, pixelFormat, pixelType;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(pixelFormat)
		Z_PARAM_LONG(pixelType)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &pixelFormat_param, &pixelType_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, pixelFormat);
	ZVAL_LONG(&_2, pixelType);
	phpqt_qopengltexture_allocate_storage_q_open_g_l_texture_pixel_format_q_open_g_l_texture_pixel_type(&_0, &_1, &_2);
}

PHP_METHOD(Qt_OpenGL_QOpenGLTexture_QOpenGLTexture, isStorageAllocated)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qopengltexture_is_storage_allocated(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_OpenGL_QOpenGLTexture_QOpenGLTexture, createTextureView)
{
	zval *handle_param = NULL, *target_param = NULL, *viewFormat_param = NULL, *minimumMipmapLevel_param = NULL, *maximumMipmapLevel_param = NULL, *minimumLayer_param = NULL, *maximumLayer_param = NULL, _0, _1, _2, _3, _4, _5, _6;
	zend_long handle, target, viewFormat, minimumMipmapLevel, maximumMipmapLevel, minimumLayer, maximumLayer;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_5);
	ZVAL_UNDEF(&_6);
	ZEND_PARSE_PARAMETERS_START(7, 7)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(target)
		Z_PARAM_LONG(viewFormat)
		Z_PARAM_LONG(minimumMipmapLevel)
		Z_PARAM_LONG(maximumMipmapLevel)
		Z_PARAM_LONG(minimumLayer)
		Z_PARAM_LONG(maximumLayer)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(7, 0, &handle_param, &target_param, &viewFormat_param, &minimumMipmapLevel_param, &maximumMipmapLevel_param, &minimumLayer_param, &maximumLayer_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, target);
	ZVAL_LONG(&_2, viewFormat);
	ZVAL_LONG(&_3, minimumMipmapLevel);
	ZVAL_LONG(&_4, maximumMipmapLevel);
	ZVAL_LONG(&_5, minimumLayer);
	ZVAL_LONG(&_6, maximumLayer);
	RETURN_LONG(phpqt_qopengltexture_create_texture_view(&_0, &_1, &_2, &_3, &_4, &_5, &_6));
}

PHP_METHOD(Qt_OpenGL_QOpenGLTexture_QOpenGLTexture, isTextureView)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qopengltexture_is_texture_view(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_OpenGL_QOpenGLTexture_QOpenGLTexture, setData)
{
	zval *handle_param = NULL, *image_param = NULL, *genMipMaps = NULL, genMipMaps_sub, __$null, _0, _1;
	zend_long handle, image;

	ZVAL_UNDEF(&genMipMaps_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(2, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(image)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(genMipMaps)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 1, &handle_param, &image_param, &genMipMaps);
	if (!genMipMaps) {
		genMipMaps = &genMipMaps_sub;
		genMipMaps = &__$null;
	}
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, image);
	phpqt_qopengltexture_set_data(&_0, &_1, genMipMaps);
}

PHP_METHOD(Qt_OpenGL_QOpenGLTexture_QOpenGLTexture, hasFeature)
{
	zval *feature_param = NULL, _0;
	zend_long feature, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(feature)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &feature_param);
	ZVAL_LONG(&_0, feature);
	r = phpqt_qopengltexture_has_feature(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_OpenGL_QOpenGLTexture_QOpenGLTexture, setMipBaseLevel)
{
	zval *handle_param = NULL, *baseLevel_param = NULL, _0, _1;
	zend_long handle, baseLevel;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(baseLevel)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &baseLevel_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, baseLevel);
	phpqt_qopengltexture_set_mip_base_level(&_0, &_1);
}

PHP_METHOD(Qt_OpenGL_QOpenGLTexture_QOpenGLTexture, mipBaseLevel)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qopengltexture_mip_base_level(&_0));
}

PHP_METHOD(Qt_OpenGL_QOpenGLTexture_QOpenGLTexture, setMipMaxLevel)
{
	zval *handle_param = NULL, *maxLevel_param = NULL, _0, _1;
	zend_long handle, maxLevel;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(maxLevel)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &maxLevel_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, maxLevel);
	phpqt_qopengltexture_set_mip_max_level(&_0, &_1);
}

PHP_METHOD(Qt_OpenGL_QOpenGLTexture_QOpenGLTexture, mipMaxLevel)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qopengltexture_mip_max_level(&_0));
}

PHP_METHOD(Qt_OpenGL_QOpenGLTexture_QOpenGLTexture, setMipLevelRange)
{
	zval *handle_param = NULL, *baseLevel_param = NULL, *maxLevel_param = NULL, _0, _1, _2;
	zend_long handle, baseLevel, maxLevel;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(baseLevel)
		Z_PARAM_LONG(maxLevel)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &baseLevel_param, &maxLevel_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, baseLevel);
	ZVAL_LONG(&_2, maxLevel);
	phpqt_qopengltexture_set_mip_level_range(&_0, &_1, &_2);
}

PHP_METHOD(Qt_OpenGL_QOpenGLTexture_QOpenGLTexture, mipLevelRange)
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
	phpqt_qopengltexture_mip_level_range(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_OpenGL_QOpenGLTexture_QOpenGLTexture, setAutoMipMapGenerationEnabled)
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
	phpqt_qopengltexture_set_auto_mip_map_generation_enabled(&_0, &_1);
}

PHP_METHOD(Qt_OpenGL_QOpenGLTexture_QOpenGLTexture, isAutoMipMapGenerationEnabled)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qopengltexture_is_auto_mip_map_generation_enabled(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_OpenGL_QOpenGLTexture_QOpenGLTexture, generateMipMaps)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qopengltexture_generate_mip_maps(&_0);
}

PHP_METHOD(Qt_OpenGL_QOpenGLTexture_QOpenGLTexture, generateMipMapsIntBool)
{
	zend_bool resetBaseLevel;
	zval *handle_param = NULL, *baseLevel_param = NULL, *resetBaseLevel_param = NULL, _0, _1, _2;
	zend_long handle, baseLevel;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(2, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(baseLevel)
		Z_PARAM_OPTIONAL
		Z_PARAM_BOOL(resetBaseLevel)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 1, &handle_param, &baseLevel_param, &resetBaseLevel_param);
	if (!resetBaseLevel_param) {
		resetBaseLevel = 1;
	} else {
		}
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, baseLevel);
	ZVAL_BOOL(&_2, (resetBaseLevel ? 1 : 0));
	phpqt_qopengltexture_generate_mip_maps_int_bool(&_0, &_1, &_2);
}

PHP_METHOD(Qt_OpenGL_QOpenGLTexture_QOpenGLTexture, setSwizzleMask)
{
	zval *handle_param = NULL, *component_param = NULL, *value_param = NULL, _0, _1, _2;
	zend_long handle, component, value;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(component)
		Z_PARAM_LONG(value)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &component_param, &value_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, component);
	ZVAL_LONG(&_2, value);
	phpqt_qopengltexture_set_swizzle_mask(&_0, &_1, &_2);
}

PHP_METHOD(Qt_OpenGL_QOpenGLTexture_QOpenGLTexture, setSwizzleMaskQOpenGLTextureSwizzleValueQOpenGLTextureSwizzleValueQOpenGLTextureSwizzleValueQOpenGLTextureSwizzleValue)
{
	zval *handle_param = NULL, *r_param = NULL, *g_param = NULL, *b_param = NULL, *a_param = NULL, _0, _1, _2, _3, _4;
	zend_long handle, r, g, b, a;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZEND_PARSE_PARAMETERS_START(5, 5)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(r)
		Z_PARAM_LONG(g)
		Z_PARAM_LONG(b)
		Z_PARAM_LONG(a)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(5, 0, &handle_param, &r_param, &g_param, &b_param, &a_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, r);
	ZVAL_LONG(&_2, g);
	ZVAL_LONG(&_3, b);
	ZVAL_LONG(&_4, a);
	phpqt_qopengltexture_set_swizzle_mask_q_open_g_l_texture_swizzle_value_q_open_g_l_texture_swizzle_value_q_open_g_l_texture_swizzle_value_q_open_g_l_texture_swizzle_value(&_0, &_1, &_2, &_3, &_4);
}

PHP_METHOD(Qt_OpenGL_QOpenGLTexture_QOpenGLTexture, swizzleMask)
{
	zval *handle_param = NULL, *component_param = NULL, _0, _1;
	zend_long handle, component;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(component)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &component_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, component);
	RETURN_LONG(phpqt_qopengltexture_swizzle_mask(&_0, &_1));
}

PHP_METHOD(Qt_OpenGL_QOpenGLTexture_QOpenGLTexture, setDepthStencilMode)
{
	zval *handle_param = NULL, *mode_param = NULL, _0, _1;
	zend_long handle, mode;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(mode)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &mode_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, mode);
	phpqt_qopengltexture_set_depth_stencil_mode(&_0, &_1);
}

PHP_METHOD(Qt_OpenGL_QOpenGLTexture_QOpenGLTexture, depthStencilMode)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qopengltexture_depth_stencil_mode(&_0));
}

PHP_METHOD(Qt_OpenGL_QOpenGLTexture_QOpenGLTexture, setComparisonFunction)
{
	zval *handle_param = NULL, *function__param = NULL, _0, _1;
	zend_long handle, function_;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(function_)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &function__param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, function_);
	phpqt_qopengltexture_set_comparison_function(&_0, &_1);
}

PHP_METHOD(Qt_OpenGL_QOpenGLTexture_QOpenGLTexture, comparisonFunction)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qopengltexture_comparison_function(&_0));
}

PHP_METHOD(Qt_OpenGL_QOpenGLTexture_QOpenGLTexture, setComparisonMode)
{
	zval *handle_param = NULL, *mode_param = NULL, _0, _1;
	zend_long handle, mode;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(mode)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &mode_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, mode);
	phpqt_qopengltexture_set_comparison_mode(&_0, &_1);
}

PHP_METHOD(Qt_OpenGL_QOpenGLTexture_QOpenGLTexture, comparisonMode)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qopengltexture_comparison_mode(&_0));
}

PHP_METHOD(Qt_OpenGL_QOpenGLTexture_QOpenGLTexture, setMinificationFilter)
{
	zval *handle_param = NULL, *filter_param = NULL, _0, _1;
	zend_long handle, filter;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(filter)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &filter_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, filter);
	phpqt_qopengltexture_set_minification_filter(&_0, &_1);
}

PHP_METHOD(Qt_OpenGL_QOpenGLTexture_QOpenGLTexture, minificationFilter)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qopengltexture_minification_filter(&_0));
}

PHP_METHOD(Qt_OpenGL_QOpenGLTexture_QOpenGLTexture, setMagnificationFilter)
{
	zval *handle_param = NULL, *filter_param = NULL, _0, _1;
	zend_long handle, filter;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(filter)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &filter_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, filter);
	phpqt_qopengltexture_set_magnification_filter(&_0, &_1);
}

PHP_METHOD(Qt_OpenGL_QOpenGLTexture_QOpenGLTexture, magnificationFilter)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qopengltexture_magnification_filter(&_0));
}

PHP_METHOD(Qt_OpenGL_QOpenGLTexture_QOpenGLTexture, setMinMagFilters)
{
	zval *handle_param = NULL, *minificationFilter_param = NULL, *magnificationFilter_param = NULL, _0, _1, _2;
	zend_long handle, minificationFilter, magnificationFilter;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(minificationFilter)
		Z_PARAM_LONG(magnificationFilter)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &minificationFilter_param, &magnificationFilter_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, minificationFilter);
	ZVAL_LONG(&_2, magnificationFilter);
	phpqt_qopengltexture_set_min_mag_filters(&_0, &_1, &_2);
}

PHP_METHOD(Qt_OpenGL_QOpenGLTexture_QOpenGLTexture, minMagFilters)
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
	phpqt_qopengltexture_min_mag_filters(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_OpenGL_QOpenGLTexture_QOpenGLTexture, setMaximumAnisotropy)
{
	double anisotropy;
	zval *handle_param = NULL, *anisotropy_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(anisotropy)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &anisotropy_param);
	anisotropy = zephir_get_doubleval(anisotropy_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, anisotropy);
	phpqt_qopengltexture_set_maximum_anisotropy(&_0, &_1);
}

PHP_METHOD(Qt_OpenGL_QOpenGLTexture_QOpenGLTexture, maximumAnisotropy)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_DOUBLE(phpqt_qopengltexture_maximum_anisotropy(&_0));
}

PHP_METHOD(Qt_OpenGL_QOpenGLTexture_QOpenGLTexture, setWrapMode)
{
	zval *handle_param = NULL, *mode_param = NULL, _0, _1;
	zend_long handle, mode;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(mode)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &mode_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, mode);
	phpqt_qopengltexture_set_wrap_mode(&_0, &_1);
}

PHP_METHOD(Qt_OpenGL_QOpenGLTexture_QOpenGLTexture, setWrapModeQOpenGLTextureCoordinateDirectionQOpenGLTextureWrapMode)
{
	zval *handle_param = NULL, *direction_param = NULL, *mode_param = NULL, _0, _1, _2;
	zend_long handle, direction, mode;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(direction)
		Z_PARAM_LONG(mode)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &direction_param, &mode_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, direction);
	ZVAL_LONG(&_2, mode);
	phpqt_qopengltexture_set_wrap_mode_q_open_g_l_texture_coordinate_direction_q_open_g_l_texture_wrap_mode(&_0, &_1, &_2);
}

PHP_METHOD(Qt_OpenGL_QOpenGLTexture_QOpenGLTexture, wrapMode)
{
	zval *handle_param = NULL, *direction_param = NULL, _0, _1;
	zend_long handle, direction;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(direction)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &direction_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, direction);
	RETURN_LONG(phpqt_qopengltexture_wrap_mode(&_0, &_1));
}

PHP_METHOD(Qt_OpenGL_QOpenGLTexture_QOpenGLTexture, setBorderColor)
{
	zval *handle_param = NULL, *color_param = NULL, _0, _1;
	zend_long handle, color;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(color)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &color_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, color);
	phpqt_qopengltexture_set_border_color(&_0, &_1);
}

PHP_METHOD(Qt_OpenGL_QOpenGLTexture_QOpenGLTexture, setBorderColorFloatFloatFloatFloat)
{
	double r, g, b, a;
	zval *handle_param = NULL, *r_param = NULL, *g_param = NULL, *b_param = NULL, *a_param = NULL, _0, _1, _2, _3, _4;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZEND_PARSE_PARAMETERS_START(5, 5)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(r)
		Z_PARAM_ZVAL(g)
		Z_PARAM_ZVAL(b)
		Z_PARAM_ZVAL(a)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(5, 0, &handle_param, &r_param, &g_param, &b_param, &a_param);
	r = zephir_get_doubleval(r_param);
	g = zephir_get_doubleval(g_param);
	b = zephir_get_doubleval(b_param);
	a = zephir_get_doubleval(a_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, r);
	ZVAL_DOUBLE(&_2, g);
	ZVAL_DOUBLE(&_3, b);
	ZVAL_DOUBLE(&_4, a);
	phpqt_qopengltexture_set_border_color_float_float_float_float(&_0, &_1, &_2, &_3, &_4);
}

PHP_METHOD(Qt_OpenGL_QOpenGLTexture_QOpenGLTexture, setBorderColorIntIntIntInt)
{
	zval *handle_param = NULL, *r_param = NULL, *g_param = NULL, *b_param = NULL, *a_param = NULL, _0, _1, _2, _3, _4;
	zend_long handle, r, g, b, a;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZEND_PARSE_PARAMETERS_START(5, 5)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(r)
		Z_PARAM_LONG(g)
		Z_PARAM_LONG(b)
		Z_PARAM_LONG(a)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(5, 0, &handle_param, &r_param, &g_param, &b_param, &a_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, r);
	ZVAL_LONG(&_2, g);
	ZVAL_LONG(&_3, b);
	ZVAL_LONG(&_4, a);
	phpqt_qopengltexture_set_border_color_int_int_int_int(&_0, &_1, &_2, &_3, &_4);
}

PHP_METHOD(Qt_OpenGL_QOpenGLTexture_QOpenGLTexture, setBorderColorUintUintUintUint)
{
	zval *handle_param = NULL, *r_param = NULL, *g_param = NULL, *b_param = NULL, *a_param = NULL, _0, _1, _2, _3, _4;
	zend_long handle, r, g, b, a;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZEND_PARSE_PARAMETERS_START(5, 5)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(r)
		Z_PARAM_LONG(g)
		Z_PARAM_LONG(b)
		Z_PARAM_LONG(a)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(5, 0, &handle_param, &r_param, &g_param, &b_param, &a_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, r);
	ZVAL_LONG(&_2, g);
	ZVAL_LONG(&_3, b);
	ZVAL_LONG(&_4, a);
	phpqt_qopengltexture_set_border_color_uint_uint_uint_uint(&_0, &_1, &_2, &_3, &_4);
}

PHP_METHOD(Qt_OpenGL_QOpenGLTexture_QOpenGLTexture, borderColor)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qopengltexture_border_color(&_0));
}

PHP_METHOD(Qt_OpenGL_QOpenGLTexture_QOpenGLTexture, borderColorFloat)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, *border = NULL, border_sub, result, _0;
	zend_long handle;

	ZVAL_UNDEF(&border_sub);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(border)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &border);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	phpqt_qopengltexture_border_color_float(&result, &_0, border);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_OpenGL_QOpenGLTexture_QOpenGLTexture, borderColorInt)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, *border = NULL, border_sub, result, _0;
	zend_long handle;

	ZVAL_UNDEF(&border_sub);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(border)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &border);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	phpqt_qopengltexture_border_color_int(&result, &_0, border);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_OpenGL_QOpenGLTexture_QOpenGLTexture, borderColorUnsignedInt)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, *border = NULL, border_sub, result, _0;
	zend_long handle;

	ZVAL_UNDEF(&border_sub);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(border)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &border);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	phpqt_qopengltexture_border_color_unsigned_int(&result, &_0, border);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_OpenGL_QOpenGLTexture_QOpenGLTexture, setMinimumLevelOfDetail)
{
	double value;
	zval *handle_param = NULL, *value_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(value)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &value_param);
	value = zephir_get_doubleval(value_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, value);
	phpqt_qopengltexture_set_minimum_level_of_detail(&_0, &_1);
}

PHP_METHOD(Qt_OpenGL_QOpenGLTexture_QOpenGLTexture, minimumLevelOfDetail)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_DOUBLE(phpqt_qopengltexture_minimum_level_of_detail(&_0));
}

PHP_METHOD(Qt_OpenGL_QOpenGLTexture_QOpenGLTexture, setMaximumLevelOfDetail)
{
	double value;
	zval *handle_param = NULL, *value_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(value)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &value_param);
	value = zephir_get_doubleval(value_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, value);
	phpqt_qopengltexture_set_maximum_level_of_detail(&_0, &_1);
}

PHP_METHOD(Qt_OpenGL_QOpenGLTexture_QOpenGLTexture, maximumLevelOfDetail)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_DOUBLE(phpqt_qopengltexture_maximum_level_of_detail(&_0));
}

PHP_METHOD(Qt_OpenGL_QOpenGLTexture_QOpenGLTexture, setLevelOfDetailRange)
{
	double min, max;
	zval *handle_param = NULL, *min_param = NULL, *max_param = NULL, _0, _1, _2;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(min)
		Z_PARAM_ZVAL(max)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &min_param, &max_param);
	min = zephir_get_doubleval(min_param);
	max = zephir_get_doubleval(max_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, min);
	ZVAL_DOUBLE(&_2, max);
	phpqt_qopengltexture_set_level_of_detail_range(&_0, &_1, &_2);
}

PHP_METHOD(Qt_OpenGL_QOpenGLTexture_QOpenGLTexture, levelOfDetailRange)
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
	phpqt_qopengltexture_level_of_detail_range(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_OpenGL_QOpenGLTexture_QOpenGLTexture, setLevelofDetailBias)
{
	double bias;
	zval *handle_param = NULL, *bias_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(bias)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &bias_param);
	bias = zephir_get_doubleval(bias_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, bias);
	phpqt_qopengltexture_set_levelof_detail_bias(&_0, &_1);
}

PHP_METHOD(Qt_OpenGL_QOpenGLTexture_QOpenGLTexture, levelofDetailBias)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_DOUBLE(phpqt_qopengltexture_levelof_detail_bias(&_0));
}

