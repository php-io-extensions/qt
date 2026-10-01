
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
#include "src/gui-qopenglfunctions.h"
#include "kernel/object.h"
#include "kernel/operators.h"
#include "kernel/memory.h"


ZEPHIR_INIT_CLASS(Qt_Gui_QOpenGLFunctions_QOpenGLFunctions)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Gui\\QOpenGLFunctions, QOpenGLFunctions, qt, gui_qopenglfunctions_qopenglfunctions, qt_gui_qopenglfunctions_qopenglfunctions_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Gui_QOpenGLFunctions_QOpenGLFunctions, new_)
{

	RETURN_LONG(phpqt_qopenglfunctions_new());
}

PHP_METHOD(Qt_Gui_QOpenGLFunctions_QOpenGLFunctions, newQOpenGLContext)
{
	zval *context_param = NULL, _0;
	zend_long context;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(context)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &context_param);
	ZVAL_LONG(&_0, context);
	RETURN_LONG(phpqt_qopenglfunctions_new_q_open_g_l_context(&_0));
}

PHP_METHOD(Qt_Gui_QOpenGLFunctions_QOpenGLFunctions, openGLFeatures)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qopenglfunctions_open_g_l_features(&_0));
}

PHP_METHOD(Qt_Gui_QOpenGLFunctions_QOpenGLFunctions, hasOpenGLFeature)
{
	zval *handle_param = NULL, *feature_param = NULL, _0, _1;
	zend_long handle, feature, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(feature)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &feature_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, feature);
	r = phpqt_qopenglfunctions_has_open_g_l_feature(&_0, &_1);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Gui_QOpenGLFunctions_QOpenGLFunctions, initializeOpenGLFunctions)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qopenglfunctions_initialize_open_g_l_functions(&_0);
}

PHP_METHOD(Qt_Gui_QOpenGLFunctions_QOpenGLFunctions, glBindTexture)
{
	zval *handle_param = NULL, *target_param = NULL, *texture_param = NULL, _0, _1, _2;
	zend_long handle, target, texture;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(target)
		Z_PARAM_LONG(texture)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &target_param, &texture_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, target);
	ZVAL_LONG(&_2, texture);
	phpqt_qopenglfunctions_gl_bind_texture(&_0, &_1, &_2);
}

PHP_METHOD(Qt_Gui_QOpenGLFunctions_QOpenGLFunctions, glBlendFunc)
{
	zval *handle_param = NULL, *sfactor_param = NULL, *dfactor_param = NULL, _0, _1, _2;
	zend_long handle, sfactor, dfactor;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(sfactor)
		Z_PARAM_LONG(dfactor)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &sfactor_param, &dfactor_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, sfactor);
	ZVAL_LONG(&_2, dfactor);
	phpqt_qopenglfunctions_gl_blend_func(&_0, &_1, &_2);
}

PHP_METHOD(Qt_Gui_QOpenGLFunctions_QOpenGLFunctions, glClear)
{
	zval *handle_param = NULL, *mask_param = NULL, _0, _1;
	zend_long handle, mask;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(mask)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &mask_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, mask);
	phpqt_qopenglfunctions_gl_clear(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QOpenGLFunctions_QOpenGLFunctions, glClearColor)
{
	double red, green, blue, alpha;
	zval *handle_param = NULL, *red_param = NULL, *green_param = NULL, *blue_param = NULL, *alpha_param = NULL, _0, _1, _2, _3, _4;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZEND_PARSE_PARAMETERS_START(5, 5)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(red)
		Z_PARAM_ZVAL(green)
		Z_PARAM_ZVAL(blue)
		Z_PARAM_ZVAL(alpha)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(5, 0, &handle_param, &red_param, &green_param, &blue_param, &alpha_param);
	red = zephir_get_doubleval(red_param);
	green = zephir_get_doubleval(green_param);
	blue = zephir_get_doubleval(blue_param);
	alpha = zephir_get_doubleval(alpha_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, red);
	ZVAL_DOUBLE(&_2, green);
	ZVAL_DOUBLE(&_3, blue);
	ZVAL_DOUBLE(&_4, alpha);
	phpqt_qopenglfunctions_gl_clear_color(&_0, &_1, &_2, &_3, &_4);
}

PHP_METHOD(Qt_Gui_QOpenGLFunctions_QOpenGLFunctions, glClearStencil)
{
	zval *handle_param = NULL, *s_param = NULL, _0, _1;
	zend_long handle, s;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(s)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &s_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, s);
	phpqt_qopenglfunctions_gl_clear_stencil(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QOpenGLFunctions_QOpenGLFunctions, glColorMask)
{
	zval *handle_param = NULL, *red_param = NULL, *green_param = NULL, *blue_param = NULL, *alpha_param = NULL, _0, _1, _2, _3, _4;
	zend_long handle, red, green, blue, alpha;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZEND_PARSE_PARAMETERS_START(5, 5)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(red)
		Z_PARAM_LONG(green)
		Z_PARAM_LONG(blue)
		Z_PARAM_LONG(alpha)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(5, 0, &handle_param, &red_param, &green_param, &blue_param, &alpha_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, red);
	ZVAL_LONG(&_2, green);
	ZVAL_LONG(&_3, blue);
	ZVAL_LONG(&_4, alpha);
	phpqt_qopenglfunctions_gl_color_mask(&_0, &_1, &_2, &_3, &_4);
}

PHP_METHOD(Qt_Gui_QOpenGLFunctions_QOpenGLFunctions, glCopyTexImage2D)
{
	zval *handle_param = NULL, *target_param = NULL, *level_param = NULL, *internalformat_param = NULL, *x_param = NULL, *y_param = NULL, *width_param = NULL, *height_param = NULL, *border_param = NULL, _0, _1, _2, _3, _4, _5, _6, _7, _8;
	zend_long handle, target, level, internalformat, x, y, width, height, border;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_5);
	ZVAL_UNDEF(&_6);
	ZVAL_UNDEF(&_7);
	ZVAL_UNDEF(&_8);
	ZEND_PARSE_PARAMETERS_START(9, 9)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(target)
		Z_PARAM_LONG(level)
		Z_PARAM_LONG(internalformat)
		Z_PARAM_LONG(x)
		Z_PARAM_LONG(y)
		Z_PARAM_LONG(width)
		Z_PARAM_LONG(height)
		Z_PARAM_LONG(border)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(9, 0, &handle_param, &target_param, &level_param, &internalformat_param, &x_param, &y_param, &width_param, &height_param, &border_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, target);
	ZVAL_LONG(&_2, level);
	ZVAL_LONG(&_3, internalformat);
	ZVAL_LONG(&_4, x);
	ZVAL_LONG(&_5, y);
	ZVAL_LONG(&_6, width);
	ZVAL_LONG(&_7, height);
	ZVAL_LONG(&_8, border);
	phpqt_qopenglfunctions_gl_copy_tex_image2_d(&_0, &_1, &_2, &_3, &_4, &_5, &_6, &_7, &_8);
}

PHP_METHOD(Qt_Gui_QOpenGLFunctions_QOpenGLFunctions, glCopyTexSubImage2D)
{
	zval *handle_param = NULL, *target_param = NULL, *level_param = NULL, *xoffset_param = NULL, *yoffset_param = NULL, *x_param = NULL, *y_param = NULL, *width_param = NULL, *height_param = NULL, _0, _1, _2, _3, _4, _5, _6, _7, _8;
	zend_long handle, target, level, xoffset, yoffset, x, y, width, height;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_5);
	ZVAL_UNDEF(&_6);
	ZVAL_UNDEF(&_7);
	ZVAL_UNDEF(&_8);
	ZEND_PARSE_PARAMETERS_START(9, 9)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(target)
		Z_PARAM_LONG(level)
		Z_PARAM_LONG(xoffset)
		Z_PARAM_LONG(yoffset)
		Z_PARAM_LONG(x)
		Z_PARAM_LONG(y)
		Z_PARAM_LONG(width)
		Z_PARAM_LONG(height)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(9, 0, &handle_param, &target_param, &level_param, &xoffset_param, &yoffset_param, &x_param, &y_param, &width_param, &height_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, target);
	ZVAL_LONG(&_2, level);
	ZVAL_LONG(&_3, xoffset);
	ZVAL_LONG(&_4, yoffset);
	ZVAL_LONG(&_5, x);
	ZVAL_LONG(&_6, y);
	ZVAL_LONG(&_7, width);
	ZVAL_LONG(&_8, height);
	phpqt_qopenglfunctions_gl_copy_tex_sub_image2_d(&_0, &_1, &_2, &_3, &_4, &_5, &_6, &_7, &_8);
}

PHP_METHOD(Qt_Gui_QOpenGLFunctions_QOpenGLFunctions, glCullFace)
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
	phpqt_qopenglfunctions_gl_cull_face(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QOpenGLFunctions_QOpenGLFunctions, glDeleteTextures)
{
	zval *handle_param = NULL, *n_param = NULL, *textures = NULL, textures_sub, _0, _1;
	zend_long handle, n;

	ZVAL_UNDEF(&textures_sub);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(n)
		Z_PARAM_ZVAL(textures)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &n_param, &textures);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, n);
	phpqt_qopenglfunctions_gl_delete_textures(&_0, &_1, textures);
}

PHP_METHOD(Qt_Gui_QOpenGLFunctions_QOpenGLFunctions, glDepthFunc)
{
	zval *handle_param = NULL, *func_param = NULL, _0, _1;
	zend_long handle, func;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(func)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &func_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, func);
	phpqt_qopenglfunctions_gl_depth_func(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QOpenGLFunctions_QOpenGLFunctions, glDepthMask)
{
	zval *handle_param = NULL, *flag_param = NULL, _0, _1;
	zend_long handle, flag;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(flag)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &flag_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, flag);
	phpqt_qopenglfunctions_gl_depth_mask(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QOpenGLFunctions_QOpenGLFunctions, glDisable)
{
	zval *handle_param = NULL, *cap_param = NULL, _0, _1;
	zend_long handle, cap;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(cap)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &cap_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, cap);
	phpqt_qopenglfunctions_gl_disable(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QOpenGLFunctions_QOpenGLFunctions, glDrawArrays)
{
	zval *handle_param = NULL, *mode_param = NULL, *first_param = NULL, *count_param = NULL, _0, _1, _2, _3;
	zend_long handle, mode, first, count;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(mode)
		Z_PARAM_LONG(first)
		Z_PARAM_LONG(count)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 0, &handle_param, &mode_param, &first_param, &count_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, mode);
	ZVAL_LONG(&_2, first);
	ZVAL_LONG(&_3, count);
	phpqt_qopenglfunctions_gl_draw_arrays(&_0, &_1, &_2, &_3);
}

PHP_METHOD(Qt_Gui_QOpenGLFunctions_QOpenGLFunctions, glEnable)
{
	zval *handle_param = NULL, *cap_param = NULL, _0, _1;
	zend_long handle, cap;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(cap)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &cap_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, cap);
	phpqt_qopenglfunctions_gl_enable(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QOpenGLFunctions_QOpenGLFunctions, glFinish)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qopenglfunctions_gl_finish(&_0);
}

PHP_METHOD(Qt_Gui_QOpenGLFunctions_QOpenGLFunctions, glFlush)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qopenglfunctions_gl_flush(&_0);
}

PHP_METHOD(Qt_Gui_QOpenGLFunctions_QOpenGLFunctions, glFrontFace)
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
	phpqt_qopenglfunctions_gl_front_face(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QOpenGLFunctions_QOpenGLFunctions, glGenTextures)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, *n_param = NULL, *textures = NULL, textures_sub, result, _0, _1;
	zend_long handle, n;

	ZVAL_UNDEF(&textures_sub);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(n)
		Z_PARAM_ZVAL(textures)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 3, 0, &handle_param, &n_param, &textures);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, n);
	phpqt_qopenglfunctions_gl_gen_textures(&result, &_0, &_1, textures);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QOpenGLFunctions_QOpenGLFunctions, glGetBooleanv)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, *pname_param = NULL, *params = NULL, params_sub, result, _0, _1;
	zend_long handle, pname;

	ZVAL_UNDEF(&params_sub);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(pname)
		Z_PARAM_ZVAL(params)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 3, 0, &handle_param, &pname_param, &params);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, pname);
	phpqt_qopenglfunctions_gl_get_booleanv(&result, &_0, &_1, params);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QOpenGLFunctions_QOpenGLFunctions, glGetError)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qopenglfunctions_gl_get_error(&_0));
}

PHP_METHOD(Qt_Gui_QOpenGLFunctions_QOpenGLFunctions, glGetFloatv)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, *pname_param = NULL, *params = NULL, params_sub, result, _0, _1;
	zend_long handle, pname;

	ZVAL_UNDEF(&params_sub);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(pname)
		Z_PARAM_ZVAL(params)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 3, 0, &handle_param, &pname_param, &params);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, pname);
	phpqt_qopenglfunctions_gl_get_floatv(&result, &_0, &_1, params);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QOpenGLFunctions_QOpenGLFunctions, glGetIntegerv)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, *pname_param = NULL, *params = NULL, params_sub, result, _0, _1;
	zend_long handle, pname;

	ZVAL_UNDEF(&params_sub);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(pname)
		Z_PARAM_ZVAL(params)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 3, 0, &handle_param, &pname_param, &params);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, pname);
	phpqt_qopenglfunctions_gl_get_integerv(&result, &_0, &_1, params);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QOpenGLFunctions_QOpenGLFunctions, glGetTexParameterfv)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, *target_param = NULL, *pname_param = NULL, *params = NULL, params_sub, result, _0, _1, _2;
	zend_long handle, target, pname;

	ZVAL_UNDEF(&params_sub);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(target)
		Z_PARAM_LONG(pname)
		Z_PARAM_ZVAL(params)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 4, 0, &handle_param, &target_param, &pname_param, &params);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, target);
	ZVAL_LONG(&_2, pname);
	phpqt_qopenglfunctions_gl_get_tex_parameterfv(&result, &_0, &_1, &_2, params);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QOpenGLFunctions_QOpenGLFunctions, glGetTexParameteriv)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, *target_param = NULL, *pname_param = NULL, *params = NULL, params_sub, result, _0, _1, _2;
	zend_long handle, target, pname;

	ZVAL_UNDEF(&params_sub);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(target)
		Z_PARAM_LONG(pname)
		Z_PARAM_ZVAL(params)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 4, 0, &handle_param, &target_param, &pname_param, &params);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, target);
	ZVAL_LONG(&_2, pname);
	phpqt_qopenglfunctions_gl_get_tex_parameteriv(&result, &_0, &_1, &_2, params);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QOpenGLFunctions_QOpenGLFunctions, glHint)
{
	zval *handle_param = NULL, *target_param = NULL, *mode_param = NULL, _0, _1, _2;
	zend_long handle, target, mode;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(target)
		Z_PARAM_LONG(mode)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &target_param, &mode_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, target);
	ZVAL_LONG(&_2, mode);
	phpqt_qopenglfunctions_gl_hint(&_0, &_1, &_2);
}

PHP_METHOD(Qt_Gui_QOpenGLFunctions_QOpenGLFunctions, glIsEnabled)
{
	zval *handle_param = NULL, *cap_param = NULL, _0, _1;
	zend_long handle, cap;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(cap)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &cap_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, cap);
	RETURN_LONG(phpqt_qopenglfunctions_gl_is_enabled(&_0, &_1));
}

PHP_METHOD(Qt_Gui_QOpenGLFunctions_QOpenGLFunctions, glIsTexture)
{
	zval *handle_param = NULL, *texture_param = NULL, _0, _1;
	zend_long handle, texture;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(texture)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &texture_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, texture);
	RETURN_LONG(phpqt_qopenglfunctions_gl_is_texture(&_0, &_1));
}

PHP_METHOD(Qt_Gui_QOpenGLFunctions_QOpenGLFunctions, glLineWidth)
{
	double width;
	zval *handle_param = NULL, *width_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(width)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &width_param);
	width = zephir_get_doubleval(width_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, width);
	phpqt_qopenglfunctions_gl_line_width(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QOpenGLFunctions_QOpenGLFunctions, glPixelStorei)
{
	zval *handle_param = NULL, *pname_param = NULL, *param_param = NULL, _0, _1, _2;
	zend_long handle, pname, param;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(pname)
		Z_PARAM_LONG(param)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &pname_param, &param_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, pname);
	ZVAL_LONG(&_2, param);
	phpqt_qopenglfunctions_gl_pixel_storei(&_0, &_1, &_2);
}

PHP_METHOD(Qt_Gui_QOpenGLFunctions_QOpenGLFunctions, glPolygonOffset)
{
	double factor, units;
	zval *handle_param = NULL, *factor_param = NULL, *units_param = NULL, _0, _1, _2;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(factor)
		Z_PARAM_ZVAL(units)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &factor_param, &units_param);
	factor = zephir_get_doubleval(factor_param);
	units = zephir_get_doubleval(units_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, factor);
	ZVAL_DOUBLE(&_2, units);
	phpqt_qopenglfunctions_gl_polygon_offset(&_0, &_1, &_2);
}

PHP_METHOD(Qt_Gui_QOpenGLFunctions_QOpenGLFunctions, glScissor)
{
	zval *handle_param = NULL, *x_param = NULL, *y_param = NULL, *width_param = NULL, *height_param = NULL, _0, _1, _2, _3, _4;
	zend_long handle, x, y, width, height;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZEND_PARSE_PARAMETERS_START(5, 5)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(x)
		Z_PARAM_LONG(y)
		Z_PARAM_LONG(width)
		Z_PARAM_LONG(height)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(5, 0, &handle_param, &x_param, &y_param, &width_param, &height_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, x);
	ZVAL_LONG(&_2, y);
	ZVAL_LONG(&_3, width);
	ZVAL_LONG(&_4, height);
	phpqt_qopenglfunctions_gl_scissor(&_0, &_1, &_2, &_3, &_4);
}

PHP_METHOD(Qt_Gui_QOpenGLFunctions_QOpenGLFunctions, glStencilFunc)
{
	zval *handle_param = NULL, *func_param = NULL, *ref_param = NULL, *mask_param = NULL, _0, _1, _2, _3;
	zend_long handle, func, ref, mask;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(func)
		Z_PARAM_LONG(ref)
		Z_PARAM_LONG(mask)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 0, &handle_param, &func_param, &ref_param, &mask_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, func);
	ZVAL_LONG(&_2, ref);
	ZVAL_LONG(&_3, mask);
	phpqt_qopenglfunctions_gl_stencil_func(&_0, &_1, &_2, &_3);
}

PHP_METHOD(Qt_Gui_QOpenGLFunctions_QOpenGLFunctions, glStencilMask)
{
	zval *handle_param = NULL, *mask_param = NULL, _0, _1;
	zend_long handle, mask;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(mask)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &mask_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, mask);
	phpqt_qopenglfunctions_gl_stencil_mask(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QOpenGLFunctions_QOpenGLFunctions, glStencilOp)
{
	zval *handle_param = NULL, *fail_param = NULL, *zfail_param = NULL, *zpass_param = NULL, _0, _1, _2, _3;
	zend_long handle, fail, zfail, zpass;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(fail)
		Z_PARAM_LONG(zfail)
		Z_PARAM_LONG(zpass)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 0, &handle_param, &fail_param, &zfail_param, &zpass_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, fail);
	ZVAL_LONG(&_2, zfail);
	ZVAL_LONG(&_3, zpass);
	phpqt_qopenglfunctions_gl_stencil_op(&_0, &_1, &_2, &_3);
}

PHP_METHOD(Qt_Gui_QOpenGLFunctions_QOpenGLFunctions, glTexParameterf)
{
	double param;
	zval *handle_param = NULL, *target_param = NULL, *pname_param = NULL, *param_param = NULL, _0, _1, _2, _3;
	zend_long handle, target, pname;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(target)
		Z_PARAM_LONG(pname)
		Z_PARAM_ZVAL(param)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 0, &handle_param, &target_param, &pname_param, &param_param);
	param = zephir_get_doubleval(param_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, target);
	ZVAL_LONG(&_2, pname);
	ZVAL_DOUBLE(&_3, param);
	phpqt_qopenglfunctions_gl_tex_parameterf(&_0, &_1, &_2, &_3);
}

PHP_METHOD(Qt_Gui_QOpenGLFunctions_QOpenGLFunctions, glTexParameterfv)
{
	zval *handle_param = NULL, *target_param = NULL, *pname_param = NULL, *params = NULL, params_sub, _0, _1, _2;
	zend_long handle, target, pname;

	ZVAL_UNDEF(&params_sub);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(target)
		Z_PARAM_LONG(pname)
		Z_PARAM_ZVAL(params)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 0, &handle_param, &target_param, &pname_param, &params);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, target);
	ZVAL_LONG(&_2, pname);
	phpqt_qopenglfunctions_gl_tex_parameterfv(&_0, &_1, &_2, params);
}

PHP_METHOD(Qt_Gui_QOpenGLFunctions_QOpenGLFunctions, glTexParameteri)
{
	zval *handle_param = NULL, *target_param = NULL, *pname_param = NULL, *param_param = NULL, _0, _1, _2, _3;
	zend_long handle, target, pname, param;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(target)
		Z_PARAM_LONG(pname)
		Z_PARAM_LONG(param)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 0, &handle_param, &target_param, &pname_param, &param_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, target);
	ZVAL_LONG(&_2, pname);
	ZVAL_LONG(&_3, param);
	phpqt_qopenglfunctions_gl_tex_parameteri(&_0, &_1, &_2, &_3);
}

PHP_METHOD(Qt_Gui_QOpenGLFunctions_QOpenGLFunctions, glTexParameteriv)
{
	zval *handle_param = NULL, *target_param = NULL, *pname_param = NULL, *params = NULL, params_sub, _0, _1, _2;
	zend_long handle, target, pname;

	ZVAL_UNDEF(&params_sub);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(target)
		Z_PARAM_LONG(pname)
		Z_PARAM_ZVAL(params)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 0, &handle_param, &target_param, &pname_param, &params);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, target);
	ZVAL_LONG(&_2, pname);
	phpqt_qopenglfunctions_gl_tex_parameteriv(&_0, &_1, &_2, params);
}

PHP_METHOD(Qt_Gui_QOpenGLFunctions_QOpenGLFunctions, glViewport)
{
	zval *handle_param = NULL, *x_param = NULL, *y_param = NULL, *width_param = NULL, *height_param = NULL, _0, _1, _2, _3, _4;
	zend_long handle, x, y, width, height;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZEND_PARSE_PARAMETERS_START(5, 5)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(x)
		Z_PARAM_LONG(y)
		Z_PARAM_LONG(width)
		Z_PARAM_LONG(height)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(5, 0, &handle_param, &x_param, &y_param, &width_param, &height_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, x);
	ZVAL_LONG(&_2, y);
	ZVAL_LONG(&_3, width);
	ZVAL_LONG(&_4, height);
	phpqt_qopenglfunctions_gl_viewport(&_0, &_1, &_2, &_3, &_4);
}

PHP_METHOD(Qt_Gui_QOpenGLFunctions_QOpenGLFunctions, glActiveTexture)
{
	zval *handle_param = NULL, *texture_param = NULL, _0, _1;
	zend_long handle, texture;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(texture)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &texture_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, texture);
	phpqt_qopenglfunctions_gl_active_texture(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QOpenGLFunctions_QOpenGLFunctions, glAttachShader)
{
	zval *handle_param = NULL, *program_param = NULL, *shader_param = NULL, _0, _1, _2;
	zend_long handle, program, shader;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(program)
		Z_PARAM_LONG(shader)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &program_param, &shader_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, program);
	ZVAL_LONG(&_2, shader);
	phpqt_qopenglfunctions_gl_attach_shader(&_0, &_1, &_2);
}

PHP_METHOD(Qt_Gui_QOpenGLFunctions_QOpenGLFunctions, glBindAttribLocation)
{
	zval *handle_param = NULL, *program_param = NULL, *index_param = NULL, *name = NULL, name_sub, _0, _1, _2;
	zend_long handle, program, index;

	ZVAL_UNDEF(&name_sub);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(program)
		Z_PARAM_LONG(index)
		Z_PARAM_ZVAL(name)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 0, &handle_param, &program_param, &index_param, &name);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, program);
	ZVAL_LONG(&_2, index);
	phpqt_qopenglfunctions_gl_bind_attrib_location(&_0, &_1, &_2, name);
}

PHP_METHOD(Qt_Gui_QOpenGLFunctions_QOpenGLFunctions, glBindBuffer)
{
	zval *handle_param = NULL, *target_param = NULL, *buffer_param = NULL, _0, _1, _2;
	zend_long handle, target, buffer;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(target)
		Z_PARAM_LONG(buffer)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &target_param, &buffer_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, target);
	ZVAL_LONG(&_2, buffer);
	phpqt_qopenglfunctions_gl_bind_buffer(&_0, &_1, &_2);
}

PHP_METHOD(Qt_Gui_QOpenGLFunctions_QOpenGLFunctions, glBindFramebuffer)
{
	zval *handle_param = NULL, *target_param = NULL, *framebuffer_param = NULL, _0, _1, _2;
	zend_long handle, target, framebuffer;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(target)
		Z_PARAM_LONG(framebuffer)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &target_param, &framebuffer_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, target);
	ZVAL_LONG(&_2, framebuffer);
	phpqt_qopenglfunctions_gl_bind_framebuffer(&_0, &_1, &_2);
}

PHP_METHOD(Qt_Gui_QOpenGLFunctions_QOpenGLFunctions, glBindRenderbuffer)
{
	zval *handle_param = NULL, *target_param = NULL, *renderbuffer_param = NULL, _0, _1, _2;
	zend_long handle, target, renderbuffer;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(target)
		Z_PARAM_LONG(renderbuffer)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &target_param, &renderbuffer_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, target);
	ZVAL_LONG(&_2, renderbuffer);
	phpqt_qopenglfunctions_gl_bind_renderbuffer(&_0, &_1, &_2);
}

PHP_METHOD(Qt_Gui_QOpenGLFunctions_QOpenGLFunctions, glBlendColor)
{
	double red, green, blue, alpha;
	zval *handle_param = NULL, *red_param = NULL, *green_param = NULL, *blue_param = NULL, *alpha_param = NULL, _0, _1, _2, _3, _4;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZEND_PARSE_PARAMETERS_START(5, 5)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(red)
		Z_PARAM_ZVAL(green)
		Z_PARAM_ZVAL(blue)
		Z_PARAM_ZVAL(alpha)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(5, 0, &handle_param, &red_param, &green_param, &blue_param, &alpha_param);
	red = zephir_get_doubleval(red_param);
	green = zephir_get_doubleval(green_param);
	blue = zephir_get_doubleval(blue_param);
	alpha = zephir_get_doubleval(alpha_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, red);
	ZVAL_DOUBLE(&_2, green);
	ZVAL_DOUBLE(&_3, blue);
	ZVAL_DOUBLE(&_4, alpha);
	phpqt_qopenglfunctions_gl_blend_color(&_0, &_1, &_2, &_3, &_4);
}

PHP_METHOD(Qt_Gui_QOpenGLFunctions_QOpenGLFunctions, glBlendEquation)
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
	phpqt_qopenglfunctions_gl_blend_equation(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QOpenGLFunctions_QOpenGLFunctions, glBlendEquationSeparate)
{
	zval *handle_param = NULL, *modeRGB_param = NULL, *modeAlpha_param = NULL, _0, _1, _2;
	zend_long handle, modeRGB, modeAlpha;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(modeRGB)
		Z_PARAM_LONG(modeAlpha)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &modeRGB_param, &modeAlpha_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, modeRGB);
	ZVAL_LONG(&_2, modeAlpha);
	phpqt_qopenglfunctions_gl_blend_equation_separate(&_0, &_1, &_2);
}

PHP_METHOD(Qt_Gui_QOpenGLFunctions_QOpenGLFunctions, glBlendFuncSeparate)
{
	zval *handle_param = NULL, *srcRGB_param = NULL, *dstRGB_param = NULL, *srcAlpha_param = NULL, *dstAlpha_param = NULL, _0, _1, _2, _3, _4;
	zend_long handle, srcRGB, dstRGB, srcAlpha, dstAlpha;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZEND_PARSE_PARAMETERS_START(5, 5)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(srcRGB)
		Z_PARAM_LONG(dstRGB)
		Z_PARAM_LONG(srcAlpha)
		Z_PARAM_LONG(dstAlpha)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(5, 0, &handle_param, &srcRGB_param, &dstRGB_param, &srcAlpha_param, &dstAlpha_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, srcRGB);
	ZVAL_LONG(&_2, dstRGB);
	ZVAL_LONG(&_3, srcAlpha);
	ZVAL_LONG(&_4, dstAlpha);
	phpqt_qopenglfunctions_gl_blend_func_separate(&_0, &_1, &_2, &_3, &_4);
}

PHP_METHOD(Qt_Gui_QOpenGLFunctions_QOpenGLFunctions, glCheckFramebufferStatus)
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
	RETURN_LONG(phpqt_qopenglfunctions_gl_check_framebuffer_status(&_0, &_1));
}

PHP_METHOD(Qt_Gui_QOpenGLFunctions_QOpenGLFunctions, glClearDepthf)
{
	double depth;
	zval *handle_param = NULL, *depth_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(depth)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &depth_param);
	depth = zephir_get_doubleval(depth_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, depth);
	phpqt_qopenglfunctions_gl_clear_depthf(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QOpenGLFunctions_QOpenGLFunctions, glCompileShader)
{
	zval *handle_param = NULL, *shader_param = NULL, _0, _1;
	zend_long handle, shader;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(shader)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &shader_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, shader);
	phpqt_qopenglfunctions_gl_compile_shader(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QOpenGLFunctions_QOpenGLFunctions, glCreateProgram)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qopenglfunctions_gl_create_program(&_0));
}

PHP_METHOD(Qt_Gui_QOpenGLFunctions_QOpenGLFunctions, glCreateShader)
{
	zval *handle_param = NULL, *type_param = NULL, _0, _1;
	zend_long handle, type;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(type)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &type_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, type);
	RETURN_LONG(phpqt_qopenglfunctions_gl_create_shader(&_0, &_1));
}

PHP_METHOD(Qt_Gui_QOpenGLFunctions_QOpenGLFunctions, glDeleteBuffers)
{
	zval *handle_param = NULL, *n_param = NULL, *buffers = NULL, buffers_sub, _0, _1;
	zend_long handle, n;

	ZVAL_UNDEF(&buffers_sub);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(n)
		Z_PARAM_ZVAL(buffers)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &n_param, &buffers);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, n);
	phpqt_qopenglfunctions_gl_delete_buffers(&_0, &_1, buffers);
}

PHP_METHOD(Qt_Gui_QOpenGLFunctions_QOpenGLFunctions, glDeleteFramebuffers)
{
	zval *handle_param = NULL, *n_param = NULL, *framebuffers = NULL, framebuffers_sub, _0, _1;
	zend_long handle, n;

	ZVAL_UNDEF(&framebuffers_sub);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(n)
		Z_PARAM_ZVAL(framebuffers)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &n_param, &framebuffers);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, n);
	phpqt_qopenglfunctions_gl_delete_framebuffers(&_0, &_1, framebuffers);
}

PHP_METHOD(Qt_Gui_QOpenGLFunctions_QOpenGLFunctions, glDeleteProgram)
{
	zval *handle_param = NULL, *program_param = NULL, _0, _1;
	zend_long handle, program;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(program)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &program_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, program);
	phpqt_qopenglfunctions_gl_delete_program(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QOpenGLFunctions_QOpenGLFunctions, glDeleteRenderbuffers)
{
	zval *handle_param = NULL, *n_param = NULL, *renderbuffers = NULL, renderbuffers_sub, _0, _1;
	zend_long handle, n;

	ZVAL_UNDEF(&renderbuffers_sub);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(n)
		Z_PARAM_ZVAL(renderbuffers)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &n_param, &renderbuffers);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, n);
	phpqt_qopenglfunctions_gl_delete_renderbuffers(&_0, &_1, renderbuffers);
}

PHP_METHOD(Qt_Gui_QOpenGLFunctions_QOpenGLFunctions, glDeleteShader)
{
	zval *handle_param = NULL, *shader_param = NULL, _0, _1;
	zend_long handle, shader;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(shader)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &shader_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, shader);
	phpqt_qopenglfunctions_gl_delete_shader(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QOpenGLFunctions_QOpenGLFunctions, glDepthRangef)
{
	double zNear, zFar;
	zval *handle_param = NULL, *zNear_param = NULL, *zFar_param = NULL, _0, _1, _2;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(zNear)
		Z_PARAM_ZVAL(zFar)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &zNear_param, &zFar_param);
	zNear = zephir_get_doubleval(zNear_param);
	zFar = zephir_get_doubleval(zFar_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, zNear);
	ZVAL_DOUBLE(&_2, zFar);
	phpqt_qopenglfunctions_gl_depth_rangef(&_0, &_1, &_2);
}

PHP_METHOD(Qt_Gui_QOpenGLFunctions_QOpenGLFunctions, glDetachShader)
{
	zval *handle_param = NULL, *program_param = NULL, *shader_param = NULL, _0, _1, _2;
	zend_long handle, program, shader;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(program)
		Z_PARAM_LONG(shader)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &program_param, &shader_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, program);
	ZVAL_LONG(&_2, shader);
	phpqt_qopenglfunctions_gl_detach_shader(&_0, &_1, &_2);
}

PHP_METHOD(Qt_Gui_QOpenGLFunctions_QOpenGLFunctions, glDisableVertexAttribArray)
{
	zval *handle_param = NULL, *index_param = NULL, _0, _1;
	zend_long handle, index;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(index)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &index_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, index);
	phpqt_qopenglfunctions_gl_disable_vertex_attrib_array(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QOpenGLFunctions_QOpenGLFunctions, glEnableVertexAttribArray)
{
	zval *handle_param = NULL, *index_param = NULL, _0, _1;
	zend_long handle, index;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(index)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &index_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, index);
	phpqt_qopenglfunctions_gl_enable_vertex_attrib_array(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QOpenGLFunctions_QOpenGLFunctions, glFramebufferRenderbuffer)
{
	zval *handle_param = NULL, *target_param = NULL, *attachment_param = NULL, *renderbuffertarget_param = NULL, *renderbuffer_param = NULL, _0, _1, _2, _3, _4;
	zend_long handle, target, attachment, renderbuffertarget, renderbuffer;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZEND_PARSE_PARAMETERS_START(5, 5)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(target)
		Z_PARAM_LONG(attachment)
		Z_PARAM_LONG(renderbuffertarget)
		Z_PARAM_LONG(renderbuffer)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(5, 0, &handle_param, &target_param, &attachment_param, &renderbuffertarget_param, &renderbuffer_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, target);
	ZVAL_LONG(&_2, attachment);
	ZVAL_LONG(&_3, renderbuffertarget);
	ZVAL_LONG(&_4, renderbuffer);
	phpqt_qopenglfunctions_gl_framebuffer_renderbuffer(&_0, &_1, &_2, &_3, &_4);
}

PHP_METHOD(Qt_Gui_QOpenGLFunctions_QOpenGLFunctions, glFramebufferTexture2D)
{
	zval *handle_param = NULL, *target_param = NULL, *attachment_param = NULL, *textarget_param = NULL, *texture_param = NULL, *level_param = NULL, _0, _1, _2, _3, _4, _5;
	zend_long handle, target, attachment, textarget, texture, level;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_5);
	ZEND_PARSE_PARAMETERS_START(6, 6)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(target)
		Z_PARAM_LONG(attachment)
		Z_PARAM_LONG(textarget)
		Z_PARAM_LONG(texture)
		Z_PARAM_LONG(level)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(6, 0, &handle_param, &target_param, &attachment_param, &textarget_param, &texture_param, &level_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, target);
	ZVAL_LONG(&_2, attachment);
	ZVAL_LONG(&_3, textarget);
	ZVAL_LONG(&_4, texture);
	ZVAL_LONG(&_5, level);
	phpqt_qopenglfunctions_gl_framebuffer_texture2_d(&_0, &_1, &_2, &_3, &_4, &_5);
}

PHP_METHOD(Qt_Gui_QOpenGLFunctions_QOpenGLFunctions, glGenBuffers)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, *n_param = NULL, *buffers = NULL, buffers_sub, result, _0, _1;
	zend_long handle, n;

	ZVAL_UNDEF(&buffers_sub);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(n)
		Z_PARAM_ZVAL(buffers)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 3, 0, &handle_param, &n_param, &buffers);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, n);
	phpqt_qopenglfunctions_gl_gen_buffers(&result, &_0, &_1, buffers);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QOpenGLFunctions_QOpenGLFunctions, glGenerateMipmap)
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
	phpqt_qopenglfunctions_gl_generate_mipmap(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QOpenGLFunctions_QOpenGLFunctions, glGenFramebuffers)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, *n_param = NULL, *framebuffers = NULL, framebuffers_sub, result, _0, _1;
	zend_long handle, n;

	ZVAL_UNDEF(&framebuffers_sub);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(n)
		Z_PARAM_ZVAL(framebuffers)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 3, 0, &handle_param, &n_param, &framebuffers);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, n);
	phpqt_qopenglfunctions_gl_gen_framebuffers(&result, &_0, &_1, framebuffers);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QOpenGLFunctions_QOpenGLFunctions, glGenRenderbuffers)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, *n_param = NULL, *renderbuffers = NULL, renderbuffers_sub, result, _0, _1;
	zend_long handle, n;

	ZVAL_UNDEF(&renderbuffers_sub);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(n)
		Z_PARAM_ZVAL(renderbuffers)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 3, 0, &handle_param, &n_param, &renderbuffers);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, n);
	phpqt_qopenglfunctions_gl_gen_renderbuffers(&result, &_0, &_1, renderbuffers);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QOpenGLFunctions_QOpenGLFunctions, glGetAttachedShaders)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, *program_param = NULL, *maxcount_param = NULL, *count = NULL, count_sub, *shaders = NULL, shaders_sub, result, _0, _1, _2;
	zend_long handle, program, maxcount;

	ZVAL_UNDEF(&count_sub);
	ZVAL_UNDEF(&shaders_sub);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(5, 5)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(program)
		Z_PARAM_LONG(maxcount)
		Z_PARAM_ZVAL(count)
		Z_PARAM_ZVAL(shaders)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 5, 0, &handle_param, &program_param, &maxcount_param, &count, &shaders);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, program);
	ZVAL_LONG(&_2, maxcount);
	phpqt_qopenglfunctions_gl_get_attached_shaders(&result, &_0, &_1, &_2, count, shaders);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QOpenGLFunctions_QOpenGLFunctions, glGetAttribLocation)
{
	zval *handle_param = NULL, *program_param = NULL, *name = NULL, name_sub, _0, _1;
	zend_long handle, program;

	ZVAL_UNDEF(&name_sub);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(program)
		Z_PARAM_ZVAL(name)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &program_param, &name);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, program);
	RETURN_LONG(phpqt_qopenglfunctions_gl_get_attrib_location(&_0, &_1, name));
}

PHP_METHOD(Qt_Gui_QOpenGLFunctions_QOpenGLFunctions, glGetBufferParameteriv)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, *target_param = NULL, *pname_param = NULL, *params = NULL, params_sub, result, _0, _1, _2;
	zend_long handle, target, pname;

	ZVAL_UNDEF(&params_sub);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(target)
		Z_PARAM_LONG(pname)
		Z_PARAM_ZVAL(params)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 4, 0, &handle_param, &target_param, &pname_param, &params);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, target);
	ZVAL_LONG(&_2, pname);
	phpqt_qopenglfunctions_gl_get_buffer_parameteriv(&result, &_0, &_1, &_2, params);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QOpenGLFunctions_QOpenGLFunctions, glGetFramebufferAttachmentParameteriv)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, *target_param = NULL, *attachment_param = NULL, *pname_param = NULL, *params = NULL, params_sub, result, _0, _1, _2, _3;
	zend_long handle, target, attachment, pname;

	ZVAL_UNDEF(&params_sub);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(5, 5)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(target)
		Z_PARAM_LONG(attachment)
		Z_PARAM_LONG(pname)
		Z_PARAM_ZVAL(params)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 5, 0, &handle_param, &target_param, &attachment_param, &pname_param, &params);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, target);
	ZVAL_LONG(&_2, attachment);
	ZVAL_LONG(&_3, pname);
	phpqt_qopenglfunctions_gl_get_framebuffer_attachment_parameteriv(&result, &_0, &_1, &_2, &_3, params);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QOpenGLFunctions_QOpenGLFunctions, glGetProgramiv)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, *program_param = NULL, *pname_param = NULL, *params = NULL, params_sub, result, _0, _1, _2;
	zend_long handle, program, pname;

	ZVAL_UNDEF(&params_sub);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(program)
		Z_PARAM_LONG(pname)
		Z_PARAM_ZVAL(params)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 4, 0, &handle_param, &program_param, &pname_param, &params);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, program);
	ZVAL_LONG(&_2, pname);
	phpqt_qopenglfunctions_gl_get_programiv(&result, &_0, &_1, &_2, params);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QOpenGLFunctions_QOpenGLFunctions, glGetRenderbufferParameteriv)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, *target_param = NULL, *pname_param = NULL, *params = NULL, params_sub, result, _0, _1, _2;
	zend_long handle, target, pname;

	ZVAL_UNDEF(&params_sub);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(target)
		Z_PARAM_LONG(pname)
		Z_PARAM_ZVAL(params)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 4, 0, &handle_param, &target_param, &pname_param, &params);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, target);
	ZVAL_LONG(&_2, pname);
	phpqt_qopenglfunctions_gl_get_renderbuffer_parameteriv(&result, &_0, &_1, &_2, params);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QOpenGLFunctions_QOpenGLFunctions, glGetShaderiv)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, *shader_param = NULL, *pname_param = NULL, *params = NULL, params_sub, result, _0, _1, _2;
	zend_long handle, shader, pname;

	ZVAL_UNDEF(&params_sub);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(shader)
		Z_PARAM_LONG(pname)
		Z_PARAM_ZVAL(params)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 4, 0, &handle_param, &shader_param, &pname_param, &params);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, shader);
	ZVAL_LONG(&_2, pname);
	phpqt_qopenglfunctions_gl_get_shaderiv(&result, &_0, &_1, &_2, params);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QOpenGLFunctions_QOpenGLFunctions, glGetShaderPrecisionFormat)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, *shadertype_param = NULL, *precisiontype_param = NULL, *range = NULL, range_sub, *precision = NULL, precision_sub, result, _0, _1, _2;
	zend_long handle, shadertype, precisiontype;

	ZVAL_UNDEF(&range_sub);
	ZVAL_UNDEF(&precision_sub);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(5, 5)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(shadertype)
		Z_PARAM_LONG(precisiontype)
		Z_PARAM_ZVAL(range)
		Z_PARAM_ZVAL(precision)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 5, 0, &handle_param, &shadertype_param, &precisiontype_param, &range, &precision);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, shadertype);
	ZVAL_LONG(&_2, precisiontype);
	phpqt_qopenglfunctions_gl_get_shader_precision_format(&result, &_0, &_1, &_2, range, precision);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QOpenGLFunctions_QOpenGLFunctions, glGetUniformfv)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, *program_param = NULL, *location_param = NULL, *params = NULL, params_sub, result, _0, _1, _2;
	zend_long handle, program, location;

	ZVAL_UNDEF(&params_sub);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(program)
		Z_PARAM_LONG(location)
		Z_PARAM_ZVAL(params)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 4, 0, &handle_param, &program_param, &location_param, &params);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, program);
	ZVAL_LONG(&_2, location);
	phpqt_qopenglfunctions_gl_get_uniformfv(&result, &_0, &_1, &_2, params);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QOpenGLFunctions_QOpenGLFunctions, glGetUniformiv)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, *program_param = NULL, *location_param = NULL, *params = NULL, params_sub, result, _0, _1, _2;
	zend_long handle, program, location;

	ZVAL_UNDEF(&params_sub);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(program)
		Z_PARAM_LONG(location)
		Z_PARAM_ZVAL(params)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 4, 0, &handle_param, &program_param, &location_param, &params);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, program);
	ZVAL_LONG(&_2, location);
	phpqt_qopenglfunctions_gl_get_uniformiv(&result, &_0, &_1, &_2, params);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QOpenGLFunctions_QOpenGLFunctions, glGetUniformLocation)
{
	zval *handle_param = NULL, *program_param = NULL, *name = NULL, name_sub, _0, _1;
	zend_long handle, program;

	ZVAL_UNDEF(&name_sub);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(program)
		Z_PARAM_ZVAL(name)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &program_param, &name);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, program);
	RETURN_LONG(phpqt_qopenglfunctions_gl_get_uniform_location(&_0, &_1, name));
}

PHP_METHOD(Qt_Gui_QOpenGLFunctions_QOpenGLFunctions, glGetVertexAttribfv)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, *index_param = NULL, *pname_param = NULL, *params = NULL, params_sub, result, _0, _1, _2;
	zend_long handle, index, pname;

	ZVAL_UNDEF(&params_sub);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(index)
		Z_PARAM_LONG(pname)
		Z_PARAM_ZVAL(params)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 4, 0, &handle_param, &index_param, &pname_param, &params);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, index);
	ZVAL_LONG(&_2, pname);
	phpqt_qopenglfunctions_gl_get_vertex_attribfv(&result, &_0, &_1, &_2, params);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QOpenGLFunctions_QOpenGLFunctions, glGetVertexAttribiv)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, *index_param = NULL, *pname_param = NULL, *params = NULL, params_sub, result, _0, _1, _2;
	zend_long handle, index, pname;

	ZVAL_UNDEF(&params_sub);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(index)
		Z_PARAM_LONG(pname)
		Z_PARAM_ZVAL(params)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 4, 0, &handle_param, &index_param, &pname_param, &params);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, index);
	ZVAL_LONG(&_2, pname);
	phpqt_qopenglfunctions_gl_get_vertex_attribiv(&result, &_0, &_1, &_2, params);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QOpenGLFunctions_QOpenGLFunctions, glIsBuffer)
{
	zval *handle_param = NULL, *buffer_param = NULL, _0, _1;
	zend_long handle, buffer;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(buffer)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &buffer_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, buffer);
	RETURN_LONG(phpqt_qopenglfunctions_gl_is_buffer(&_0, &_1));
}

PHP_METHOD(Qt_Gui_QOpenGLFunctions_QOpenGLFunctions, glIsFramebuffer)
{
	zval *handle_param = NULL, *framebuffer_param = NULL, _0, _1;
	zend_long handle, framebuffer;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(framebuffer)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &framebuffer_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, framebuffer);
	RETURN_LONG(phpqt_qopenglfunctions_gl_is_framebuffer(&_0, &_1));
}

PHP_METHOD(Qt_Gui_QOpenGLFunctions_QOpenGLFunctions, glIsProgram)
{
	zval *handle_param = NULL, *program_param = NULL, _0, _1;
	zend_long handle, program;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(program)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &program_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, program);
	RETURN_LONG(phpqt_qopenglfunctions_gl_is_program(&_0, &_1));
}

PHP_METHOD(Qt_Gui_QOpenGLFunctions_QOpenGLFunctions, glIsRenderbuffer)
{
	zval *handle_param = NULL, *renderbuffer_param = NULL, _0, _1;
	zend_long handle, renderbuffer;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(renderbuffer)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &renderbuffer_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, renderbuffer);
	RETURN_LONG(phpqt_qopenglfunctions_gl_is_renderbuffer(&_0, &_1));
}

PHP_METHOD(Qt_Gui_QOpenGLFunctions_QOpenGLFunctions, glIsShader)
{
	zval *handle_param = NULL, *shader_param = NULL, _0, _1;
	zend_long handle, shader;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(shader)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &shader_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, shader);
	RETURN_LONG(phpqt_qopenglfunctions_gl_is_shader(&_0, &_1));
}

PHP_METHOD(Qt_Gui_QOpenGLFunctions_QOpenGLFunctions, glLinkProgram)
{
	zval *handle_param = NULL, *program_param = NULL, _0, _1;
	zend_long handle, program;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(program)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &program_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, program);
	phpqt_qopenglfunctions_gl_link_program(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QOpenGLFunctions_QOpenGLFunctions, glReleaseShaderCompiler)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qopenglfunctions_gl_release_shader_compiler(&_0);
}

PHP_METHOD(Qt_Gui_QOpenGLFunctions_QOpenGLFunctions, glRenderbufferStorage)
{
	zval *handle_param = NULL, *target_param = NULL, *internalformat_param = NULL, *width_param = NULL, *height_param = NULL, _0, _1, _2, _3, _4;
	zend_long handle, target, internalformat, width, height;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZEND_PARSE_PARAMETERS_START(5, 5)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(target)
		Z_PARAM_LONG(internalformat)
		Z_PARAM_LONG(width)
		Z_PARAM_LONG(height)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(5, 0, &handle_param, &target_param, &internalformat_param, &width_param, &height_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, target);
	ZVAL_LONG(&_2, internalformat);
	ZVAL_LONG(&_3, width);
	ZVAL_LONG(&_4, height);
	phpqt_qopenglfunctions_gl_renderbuffer_storage(&_0, &_1, &_2, &_3, &_4);
}

PHP_METHOD(Qt_Gui_QOpenGLFunctions_QOpenGLFunctions, glSampleCoverage)
{
	double value;
	zval *handle_param = NULL, *value_param = NULL, *invert_param = NULL, _0, _1, _2;
	zend_long handle, invert;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(value)
		Z_PARAM_LONG(invert)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &value_param, &invert_param);
	value = zephir_get_doubleval(value_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, value);
	ZVAL_LONG(&_2, invert);
	phpqt_qopenglfunctions_gl_sample_coverage(&_0, &_1, &_2);
}

PHP_METHOD(Qt_Gui_QOpenGLFunctions_QOpenGLFunctions, glStencilFuncSeparate)
{
	zval *handle_param = NULL, *face_param = NULL, *func_param = NULL, *ref_param = NULL, *mask_param = NULL, _0, _1, _2, _3, _4;
	zend_long handle, face, func, ref, mask;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZEND_PARSE_PARAMETERS_START(5, 5)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(face)
		Z_PARAM_LONG(func)
		Z_PARAM_LONG(ref)
		Z_PARAM_LONG(mask)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(5, 0, &handle_param, &face_param, &func_param, &ref_param, &mask_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, face);
	ZVAL_LONG(&_2, func);
	ZVAL_LONG(&_3, ref);
	ZVAL_LONG(&_4, mask);
	phpqt_qopenglfunctions_gl_stencil_func_separate(&_0, &_1, &_2, &_3, &_4);
}

PHP_METHOD(Qt_Gui_QOpenGLFunctions_QOpenGLFunctions, glStencilMaskSeparate)
{
	zval *handle_param = NULL, *face_param = NULL, *mask_param = NULL, _0, _1, _2;
	zend_long handle, face, mask;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(face)
		Z_PARAM_LONG(mask)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &face_param, &mask_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, face);
	ZVAL_LONG(&_2, mask);
	phpqt_qopenglfunctions_gl_stencil_mask_separate(&_0, &_1, &_2);
}

PHP_METHOD(Qt_Gui_QOpenGLFunctions_QOpenGLFunctions, glStencilOpSeparate)
{
	zval *handle_param = NULL, *face_param = NULL, *fail_param = NULL, *zfail_param = NULL, *zpass_param = NULL, _0, _1, _2, _3, _4;
	zend_long handle, face, fail, zfail, zpass;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZEND_PARSE_PARAMETERS_START(5, 5)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(face)
		Z_PARAM_LONG(fail)
		Z_PARAM_LONG(zfail)
		Z_PARAM_LONG(zpass)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(5, 0, &handle_param, &face_param, &fail_param, &zfail_param, &zpass_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, face);
	ZVAL_LONG(&_2, fail);
	ZVAL_LONG(&_3, zfail);
	ZVAL_LONG(&_4, zpass);
	phpqt_qopenglfunctions_gl_stencil_op_separate(&_0, &_1, &_2, &_3, &_4);
}

PHP_METHOD(Qt_Gui_QOpenGLFunctions_QOpenGLFunctions, glUniform1f)
{
	double x;
	zval *handle_param = NULL, *location_param = NULL, *x_param = NULL, _0, _1, _2;
	zend_long handle, location;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(location)
		Z_PARAM_ZVAL(x)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &location_param, &x_param);
	x = zephir_get_doubleval(x_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, location);
	ZVAL_DOUBLE(&_2, x);
	phpqt_qopenglfunctions_gl_uniform1f(&_0, &_1, &_2);
}

PHP_METHOD(Qt_Gui_QOpenGLFunctions_QOpenGLFunctions, glUniform1fv)
{
	zval *handle_param = NULL, *location_param = NULL, *count_param = NULL, *v = NULL, v_sub, _0, _1, _2;
	zend_long handle, location, count;

	ZVAL_UNDEF(&v_sub);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(location)
		Z_PARAM_LONG(count)
		Z_PARAM_ZVAL(v)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 0, &handle_param, &location_param, &count_param, &v);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, location);
	ZVAL_LONG(&_2, count);
	phpqt_qopenglfunctions_gl_uniform1fv(&_0, &_1, &_2, v);
}

PHP_METHOD(Qt_Gui_QOpenGLFunctions_QOpenGLFunctions, glUniform1i)
{
	zval *handle_param = NULL, *location_param = NULL, *x_param = NULL, _0, _1, _2;
	zend_long handle, location, x;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(location)
		Z_PARAM_LONG(x)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &location_param, &x_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, location);
	ZVAL_LONG(&_2, x);
	phpqt_qopenglfunctions_gl_uniform1i(&_0, &_1, &_2);
}

PHP_METHOD(Qt_Gui_QOpenGLFunctions_QOpenGLFunctions, glUniform1iv)
{
	zval *handle_param = NULL, *location_param = NULL, *count_param = NULL, *v = NULL, v_sub, _0, _1, _2;
	zend_long handle, location, count;

	ZVAL_UNDEF(&v_sub);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(location)
		Z_PARAM_LONG(count)
		Z_PARAM_ZVAL(v)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 0, &handle_param, &location_param, &count_param, &v);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, location);
	ZVAL_LONG(&_2, count);
	phpqt_qopenglfunctions_gl_uniform1iv(&_0, &_1, &_2, v);
}

PHP_METHOD(Qt_Gui_QOpenGLFunctions_QOpenGLFunctions, glUniform2f)
{
	double x, y;
	zval *handle_param = NULL, *location_param = NULL, *x_param = NULL, *y_param = NULL, _0, _1, _2, _3;
	zend_long handle, location;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(location)
		Z_PARAM_ZVAL(x)
		Z_PARAM_ZVAL(y)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 0, &handle_param, &location_param, &x_param, &y_param);
	x = zephir_get_doubleval(x_param);
	y = zephir_get_doubleval(y_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, location);
	ZVAL_DOUBLE(&_2, x);
	ZVAL_DOUBLE(&_3, y);
	phpqt_qopenglfunctions_gl_uniform2f(&_0, &_1, &_2, &_3);
}

PHP_METHOD(Qt_Gui_QOpenGLFunctions_QOpenGLFunctions, glUniform2fv)
{
	zval *handle_param = NULL, *location_param = NULL, *count_param = NULL, *v = NULL, v_sub, _0, _1, _2;
	zend_long handle, location, count;

	ZVAL_UNDEF(&v_sub);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(location)
		Z_PARAM_LONG(count)
		Z_PARAM_ZVAL(v)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 0, &handle_param, &location_param, &count_param, &v);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, location);
	ZVAL_LONG(&_2, count);
	phpqt_qopenglfunctions_gl_uniform2fv(&_0, &_1, &_2, v);
}

PHP_METHOD(Qt_Gui_QOpenGLFunctions_QOpenGLFunctions, glUniform2i)
{
	zval *handle_param = NULL, *location_param = NULL, *x_param = NULL, *y_param = NULL, _0, _1, _2, _3;
	zend_long handle, location, x, y;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(location)
		Z_PARAM_LONG(x)
		Z_PARAM_LONG(y)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 0, &handle_param, &location_param, &x_param, &y_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, location);
	ZVAL_LONG(&_2, x);
	ZVAL_LONG(&_3, y);
	phpqt_qopenglfunctions_gl_uniform2i(&_0, &_1, &_2, &_3);
}

PHP_METHOD(Qt_Gui_QOpenGLFunctions_QOpenGLFunctions, glUniform2iv)
{
	zval *handle_param = NULL, *location_param = NULL, *count_param = NULL, *v = NULL, v_sub, _0, _1, _2;
	zend_long handle, location, count;

	ZVAL_UNDEF(&v_sub);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(location)
		Z_PARAM_LONG(count)
		Z_PARAM_ZVAL(v)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 0, &handle_param, &location_param, &count_param, &v);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, location);
	ZVAL_LONG(&_2, count);
	phpqt_qopenglfunctions_gl_uniform2iv(&_0, &_1, &_2, v);
}

PHP_METHOD(Qt_Gui_QOpenGLFunctions_QOpenGLFunctions, glUniform3f)
{
	double x, y, z;
	zval *handle_param = NULL, *location_param = NULL, *x_param = NULL, *y_param = NULL, *z_param = NULL, _0, _1, _2, _3, _4;
	zend_long handle, location;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZEND_PARSE_PARAMETERS_START(5, 5)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(location)
		Z_PARAM_ZVAL(x)
		Z_PARAM_ZVAL(y)
		Z_PARAM_ZVAL(z)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(5, 0, &handle_param, &location_param, &x_param, &y_param, &z_param);
	x = zephir_get_doubleval(x_param);
	y = zephir_get_doubleval(y_param);
	z = zephir_get_doubleval(z_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, location);
	ZVAL_DOUBLE(&_2, x);
	ZVAL_DOUBLE(&_3, y);
	ZVAL_DOUBLE(&_4, z);
	phpqt_qopenglfunctions_gl_uniform3f(&_0, &_1, &_2, &_3, &_4);
}

PHP_METHOD(Qt_Gui_QOpenGLFunctions_QOpenGLFunctions, glUniform3fv)
{
	zval *handle_param = NULL, *location_param = NULL, *count_param = NULL, *v = NULL, v_sub, _0, _1, _2;
	zend_long handle, location, count;

	ZVAL_UNDEF(&v_sub);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(location)
		Z_PARAM_LONG(count)
		Z_PARAM_ZVAL(v)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 0, &handle_param, &location_param, &count_param, &v);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, location);
	ZVAL_LONG(&_2, count);
	phpqt_qopenglfunctions_gl_uniform3fv(&_0, &_1, &_2, v);
}

PHP_METHOD(Qt_Gui_QOpenGLFunctions_QOpenGLFunctions, glUniform3i)
{
	zval *handle_param = NULL, *location_param = NULL, *x_param = NULL, *y_param = NULL, *z_param = NULL, _0, _1, _2, _3, _4;
	zend_long handle, location, x, y, z;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZEND_PARSE_PARAMETERS_START(5, 5)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(location)
		Z_PARAM_LONG(x)
		Z_PARAM_LONG(y)
		Z_PARAM_LONG(z)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(5, 0, &handle_param, &location_param, &x_param, &y_param, &z_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, location);
	ZVAL_LONG(&_2, x);
	ZVAL_LONG(&_3, y);
	ZVAL_LONG(&_4, z);
	phpqt_qopenglfunctions_gl_uniform3i(&_0, &_1, &_2, &_3, &_4);
}

PHP_METHOD(Qt_Gui_QOpenGLFunctions_QOpenGLFunctions, glUniform3iv)
{
	zval *handle_param = NULL, *location_param = NULL, *count_param = NULL, *v = NULL, v_sub, _0, _1, _2;
	zend_long handle, location, count;

	ZVAL_UNDEF(&v_sub);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(location)
		Z_PARAM_LONG(count)
		Z_PARAM_ZVAL(v)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 0, &handle_param, &location_param, &count_param, &v);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, location);
	ZVAL_LONG(&_2, count);
	phpqt_qopenglfunctions_gl_uniform3iv(&_0, &_1, &_2, v);
}

PHP_METHOD(Qt_Gui_QOpenGLFunctions_QOpenGLFunctions, glUniform4f)
{
	double x, y, z, w;
	zval *handle_param = NULL, *location_param = NULL, *x_param = NULL, *y_param = NULL, *z_param = NULL, *w_param = NULL, _0, _1, _2, _3, _4, _5;
	zend_long handle, location;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_5);
	ZEND_PARSE_PARAMETERS_START(6, 6)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(location)
		Z_PARAM_ZVAL(x)
		Z_PARAM_ZVAL(y)
		Z_PARAM_ZVAL(z)
		Z_PARAM_ZVAL(w)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(6, 0, &handle_param, &location_param, &x_param, &y_param, &z_param, &w_param);
	x = zephir_get_doubleval(x_param);
	y = zephir_get_doubleval(y_param);
	z = zephir_get_doubleval(z_param);
	w = zephir_get_doubleval(w_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, location);
	ZVAL_DOUBLE(&_2, x);
	ZVAL_DOUBLE(&_3, y);
	ZVAL_DOUBLE(&_4, z);
	ZVAL_DOUBLE(&_5, w);
	phpqt_qopenglfunctions_gl_uniform4f(&_0, &_1, &_2, &_3, &_4, &_5);
}

PHP_METHOD(Qt_Gui_QOpenGLFunctions_QOpenGLFunctions, glUniform4fv)
{
	zval *handle_param = NULL, *location_param = NULL, *count_param = NULL, *v = NULL, v_sub, _0, _1, _2;
	zend_long handle, location, count;

	ZVAL_UNDEF(&v_sub);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(location)
		Z_PARAM_LONG(count)
		Z_PARAM_ZVAL(v)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 0, &handle_param, &location_param, &count_param, &v);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, location);
	ZVAL_LONG(&_2, count);
	phpqt_qopenglfunctions_gl_uniform4fv(&_0, &_1, &_2, v);
}

PHP_METHOD(Qt_Gui_QOpenGLFunctions_QOpenGLFunctions, glUniform4i)
{
	zval *handle_param = NULL, *location_param = NULL, *x_param = NULL, *y_param = NULL, *z_param = NULL, *w_param = NULL, _0, _1, _2, _3, _4, _5;
	zend_long handle, location, x, y, z, w;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_5);
	ZEND_PARSE_PARAMETERS_START(6, 6)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(location)
		Z_PARAM_LONG(x)
		Z_PARAM_LONG(y)
		Z_PARAM_LONG(z)
		Z_PARAM_LONG(w)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(6, 0, &handle_param, &location_param, &x_param, &y_param, &z_param, &w_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, location);
	ZVAL_LONG(&_2, x);
	ZVAL_LONG(&_3, y);
	ZVAL_LONG(&_4, z);
	ZVAL_LONG(&_5, w);
	phpqt_qopenglfunctions_gl_uniform4i(&_0, &_1, &_2, &_3, &_4, &_5);
}

PHP_METHOD(Qt_Gui_QOpenGLFunctions_QOpenGLFunctions, glUniform4iv)
{
	zval *handle_param = NULL, *location_param = NULL, *count_param = NULL, *v = NULL, v_sub, _0, _1, _2;
	zend_long handle, location, count;

	ZVAL_UNDEF(&v_sub);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(location)
		Z_PARAM_LONG(count)
		Z_PARAM_ZVAL(v)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 0, &handle_param, &location_param, &count_param, &v);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, location);
	ZVAL_LONG(&_2, count);
	phpqt_qopenglfunctions_gl_uniform4iv(&_0, &_1, &_2, v);
}

PHP_METHOD(Qt_Gui_QOpenGLFunctions_QOpenGLFunctions, glUniformMatrix2fv)
{
	zval *handle_param = NULL, *location_param = NULL, *count_param = NULL, *transpose_param = NULL, *value = NULL, value_sub, _0, _1, _2, _3;
	zend_long handle, location, count, transpose;

	ZVAL_UNDEF(&value_sub);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(5, 5)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(location)
		Z_PARAM_LONG(count)
		Z_PARAM_LONG(transpose)
		Z_PARAM_ZVAL(value)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(5, 0, &handle_param, &location_param, &count_param, &transpose_param, &value);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, location);
	ZVAL_LONG(&_2, count);
	ZVAL_LONG(&_3, transpose);
	phpqt_qopenglfunctions_gl_uniform_matrix2fv(&_0, &_1, &_2, &_3, value);
}

PHP_METHOD(Qt_Gui_QOpenGLFunctions_QOpenGLFunctions, glUniformMatrix3fv)
{
	zval *handle_param = NULL, *location_param = NULL, *count_param = NULL, *transpose_param = NULL, *value = NULL, value_sub, _0, _1, _2, _3;
	zend_long handle, location, count, transpose;

	ZVAL_UNDEF(&value_sub);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(5, 5)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(location)
		Z_PARAM_LONG(count)
		Z_PARAM_LONG(transpose)
		Z_PARAM_ZVAL(value)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(5, 0, &handle_param, &location_param, &count_param, &transpose_param, &value);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, location);
	ZVAL_LONG(&_2, count);
	ZVAL_LONG(&_3, transpose);
	phpqt_qopenglfunctions_gl_uniform_matrix3fv(&_0, &_1, &_2, &_3, value);
}

PHP_METHOD(Qt_Gui_QOpenGLFunctions_QOpenGLFunctions, glUniformMatrix4fv)
{
	zval *handle_param = NULL, *location_param = NULL, *count_param = NULL, *transpose_param = NULL, *value = NULL, value_sub, _0, _1, _2, _3;
	zend_long handle, location, count, transpose;

	ZVAL_UNDEF(&value_sub);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(5, 5)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(location)
		Z_PARAM_LONG(count)
		Z_PARAM_LONG(transpose)
		Z_PARAM_ZVAL(value)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(5, 0, &handle_param, &location_param, &count_param, &transpose_param, &value);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, location);
	ZVAL_LONG(&_2, count);
	ZVAL_LONG(&_3, transpose);
	phpqt_qopenglfunctions_gl_uniform_matrix4fv(&_0, &_1, &_2, &_3, value);
}

PHP_METHOD(Qt_Gui_QOpenGLFunctions_QOpenGLFunctions, glUseProgram)
{
	zval *handle_param = NULL, *program_param = NULL, _0, _1;
	zend_long handle, program;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(program)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &program_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, program);
	phpqt_qopenglfunctions_gl_use_program(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QOpenGLFunctions_QOpenGLFunctions, glValidateProgram)
{
	zval *handle_param = NULL, *program_param = NULL, _0, _1;
	zend_long handle, program;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(program)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &program_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, program);
	phpqt_qopenglfunctions_gl_validate_program(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QOpenGLFunctions_QOpenGLFunctions, glVertexAttrib1f)
{
	double x;
	zval *handle_param = NULL, *indx_param = NULL, *x_param = NULL, _0, _1, _2;
	zend_long handle, indx;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(indx)
		Z_PARAM_ZVAL(x)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &indx_param, &x_param);
	x = zephir_get_doubleval(x_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, indx);
	ZVAL_DOUBLE(&_2, x);
	phpqt_qopenglfunctions_gl_vertex_attrib1f(&_0, &_1, &_2);
}

PHP_METHOD(Qt_Gui_QOpenGLFunctions_QOpenGLFunctions, glVertexAttrib1fv)
{
	zval *handle_param = NULL, *indx_param = NULL, *values = NULL, values_sub, _0, _1;
	zend_long handle, indx;

	ZVAL_UNDEF(&values_sub);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(indx)
		Z_PARAM_ZVAL(values)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &indx_param, &values);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, indx);
	phpqt_qopenglfunctions_gl_vertex_attrib1fv(&_0, &_1, values);
}

PHP_METHOD(Qt_Gui_QOpenGLFunctions_QOpenGLFunctions, glVertexAttrib2f)
{
	double x, y;
	zval *handle_param = NULL, *indx_param = NULL, *x_param = NULL, *y_param = NULL, _0, _1, _2, _3;
	zend_long handle, indx;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(indx)
		Z_PARAM_ZVAL(x)
		Z_PARAM_ZVAL(y)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 0, &handle_param, &indx_param, &x_param, &y_param);
	x = zephir_get_doubleval(x_param);
	y = zephir_get_doubleval(y_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, indx);
	ZVAL_DOUBLE(&_2, x);
	ZVAL_DOUBLE(&_3, y);
	phpqt_qopenglfunctions_gl_vertex_attrib2f(&_0, &_1, &_2, &_3);
}

PHP_METHOD(Qt_Gui_QOpenGLFunctions_QOpenGLFunctions, glVertexAttrib2fv)
{
	zval *handle_param = NULL, *indx_param = NULL, *values = NULL, values_sub, _0, _1;
	zend_long handle, indx;

	ZVAL_UNDEF(&values_sub);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(indx)
		Z_PARAM_ZVAL(values)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &indx_param, &values);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, indx);
	phpqt_qopenglfunctions_gl_vertex_attrib2fv(&_0, &_1, values);
}

PHP_METHOD(Qt_Gui_QOpenGLFunctions_QOpenGLFunctions, glVertexAttrib3f)
{
	double x, y, z;
	zval *handle_param = NULL, *indx_param = NULL, *x_param = NULL, *y_param = NULL, *z_param = NULL, _0, _1, _2, _3, _4;
	zend_long handle, indx;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZEND_PARSE_PARAMETERS_START(5, 5)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(indx)
		Z_PARAM_ZVAL(x)
		Z_PARAM_ZVAL(y)
		Z_PARAM_ZVAL(z)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(5, 0, &handle_param, &indx_param, &x_param, &y_param, &z_param);
	x = zephir_get_doubleval(x_param);
	y = zephir_get_doubleval(y_param);
	z = zephir_get_doubleval(z_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, indx);
	ZVAL_DOUBLE(&_2, x);
	ZVAL_DOUBLE(&_3, y);
	ZVAL_DOUBLE(&_4, z);
	phpqt_qopenglfunctions_gl_vertex_attrib3f(&_0, &_1, &_2, &_3, &_4);
}

PHP_METHOD(Qt_Gui_QOpenGLFunctions_QOpenGLFunctions, glVertexAttrib3fv)
{
	zval *handle_param = NULL, *indx_param = NULL, *values = NULL, values_sub, _0, _1;
	zend_long handle, indx;

	ZVAL_UNDEF(&values_sub);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(indx)
		Z_PARAM_ZVAL(values)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &indx_param, &values);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, indx);
	phpqt_qopenglfunctions_gl_vertex_attrib3fv(&_0, &_1, values);
}

PHP_METHOD(Qt_Gui_QOpenGLFunctions_QOpenGLFunctions, glVertexAttrib4f)
{
	double x, y, z, w;
	zval *handle_param = NULL, *indx_param = NULL, *x_param = NULL, *y_param = NULL, *z_param = NULL, *w_param = NULL, _0, _1, _2, _3, _4, _5;
	zend_long handle, indx;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_5);
	ZEND_PARSE_PARAMETERS_START(6, 6)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(indx)
		Z_PARAM_ZVAL(x)
		Z_PARAM_ZVAL(y)
		Z_PARAM_ZVAL(z)
		Z_PARAM_ZVAL(w)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(6, 0, &handle_param, &indx_param, &x_param, &y_param, &z_param, &w_param);
	x = zephir_get_doubleval(x_param);
	y = zephir_get_doubleval(y_param);
	z = zephir_get_doubleval(z_param);
	w = zephir_get_doubleval(w_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, indx);
	ZVAL_DOUBLE(&_2, x);
	ZVAL_DOUBLE(&_3, y);
	ZVAL_DOUBLE(&_4, z);
	ZVAL_DOUBLE(&_5, w);
	phpqt_qopenglfunctions_gl_vertex_attrib4f(&_0, &_1, &_2, &_3, &_4, &_5);
}

PHP_METHOD(Qt_Gui_QOpenGLFunctions_QOpenGLFunctions, glVertexAttrib4fv)
{
	zval *handle_param = NULL, *indx_param = NULL, *values = NULL, values_sub, _0, _1;
	zend_long handle, indx;

	ZVAL_UNDEF(&values_sub);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(indx)
		Z_PARAM_ZVAL(values)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &indx_param, &values);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, indx);
	phpqt_qopenglfunctions_gl_vertex_attrib4fv(&_0, &_1, values);
}

