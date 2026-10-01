
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
#include "src/gui-qopenglextrafunctions.h"
#include "kernel/object.h"
#include "kernel/operators.h"
#include "kernel/memory.h"


ZEPHIR_INIT_CLASS(Qt_Gui_QOpenGLExtraFunctions_QOpenGLExtraFunctions)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Gui\\QOpenGLExtraFunctions, QOpenGLExtraFunctions, qt, gui_qopenglextrafunctions_qopenglextrafunctions, qt_gui_qopenglextrafunctions_qopenglextrafunctions_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Gui_QOpenGLExtraFunctions_QOpenGLExtraFunctions, new_)
{

	RETURN_LONG(phpqt_qopenglextrafunctions_new());
}

PHP_METHOD(Qt_Gui_QOpenGLExtraFunctions_QOpenGLExtraFunctions, newQOpenGLContext)
{
	zval *context_param = NULL, _0;
	zend_long context;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(context)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &context_param);
	ZVAL_LONG(&_0, context);
	RETURN_LONG(phpqt_qopenglextrafunctions_new_q_open_g_l_context(&_0));
}

PHP_METHOD(Qt_Gui_QOpenGLExtraFunctions_QOpenGLExtraFunctions, glReadBuffer)
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
	phpqt_qopenglextrafunctions_gl_read_buffer(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QOpenGLExtraFunctions_QOpenGLExtraFunctions, glCopyTexSubImage3D)
{
	zval *handle_param = NULL, *target_param = NULL, *level_param = NULL, *xoffset_param = NULL, *yoffset_param = NULL, *zoffset_param = NULL, *x_param = NULL, *y_param = NULL, *width_param = NULL, *height_param = NULL, _0, _1, _2, _3, _4, _5, _6, _7, _8, _9;
	zend_long handle, target, level, xoffset, yoffset, zoffset, x, y, width, height;

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
	ZEND_PARSE_PARAMETERS_START(10, 10)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(target)
		Z_PARAM_LONG(level)
		Z_PARAM_LONG(xoffset)
		Z_PARAM_LONG(yoffset)
		Z_PARAM_LONG(zoffset)
		Z_PARAM_LONG(x)
		Z_PARAM_LONG(y)
		Z_PARAM_LONG(width)
		Z_PARAM_LONG(height)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(10, 0, &handle_param, &target_param, &level_param, &xoffset_param, &yoffset_param, &zoffset_param, &x_param, &y_param, &width_param, &height_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, target);
	ZVAL_LONG(&_2, level);
	ZVAL_LONG(&_3, xoffset);
	ZVAL_LONG(&_4, yoffset);
	ZVAL_LONG(&_5, zoffset);
	ZVAL_LONG(&_6, x);
	ZVAL_LONG(&_7, y);
	ZVAL_LONG(&_8, width);
	ZVAL_LONG(&_9, height);
	phpqt_qopenglextrafunctions_gl_copy_tex_sub_image3_d(&_0, &_1, &_2, &_3, &_4, &_5, &_6, &_7, &_8, &_9);
}

PHP_METHOD(Qt_Gui_QOpenGLExtraFunctions_QOpenGLExtraFunctions, glGenQueries)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, *n_param = NULL, *ids = NULL, ids_sub, result, _0, _1;
	zend_long handle, n;

	ZVAL_UNDEF(&ids_sub);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(n)
		Z_PARAM_ZVAL(ids)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 3, 0, &handle_param, &n_param, &ids);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, n);
	phpqt_qopenglextrafunctions_gl_gen_queries(&result, &_0, &_1, ids);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QOpenGLExtraFunctions_QOpenGLExtraFunctions, glDeleteQueries)
{
	zval *handle_param = NULL, *n_param = NULL, *ids = NULL, ids_sub, _0, _1;
	zend_long handle, n;

	ZVAL_UNDEF(&ids_sub);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(n)
		Z_PARAM_ZVAL(ids)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &n_param, &ids);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, n);
	phpqt_qopenglextrafunctions_gl_delete_queries(&_0, &_1, ids);
}

PHP_METHOD(Qt_Gui_QOpenGLExtraFunctions_QOpenGLExtraFunctions, glIsQuery)
{
	zval *handle_param = NULL, *id_param = NULL, _0, _1;
	zend_long handle, id;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(id)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &id_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, id);
	RETURN_LONG(phpqt_qopenglextrafunctions_gl_is_query(&_0, &_1));
}

PHP_METHOD(Qt_Gui_QOpenGLExtraFunctions_QOpenGLExtraFunctions, glBeginQuery)
{
	zval *handle_param = NULL, *target_param = NULL, *id_param = NULL, _0, _1, _2;
	zend_long handle, target, id;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(target)
		Z_PARAM_LONG(id)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &target_param, &id_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, target);
	ZVAL_LONG(&_2, id);
	phpqt_qopenglextrafunctions_gl_begin_query(&_0, &_1, &_2);
}

PHP_METHOD(Qt_Gui_QOpenGLExtraFunctions_QOpenGLExtraFunctions, glEndQuery)
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
	phpqt_qopenglextrafunctions_gl_end_query(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QOpenGLExtraFunctions_QOpenGLExtraFunctions, glGetQueryiv)
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
	phpqt_qopenglextrafunctions_gl_get_queryiv(&result, &_0, &_1, &_2, params);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QOpenGLExtraFunctions_QOpenGLExtraFunctions, glGetQueryObjectuiv)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, *id_param = NULL, *pname_param = NULL, *params = NULL, params_sub, result, _0, _1, _2;
	zend_long handle, id, pname;

	ZVAL_UNDEF(&params_sub);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(id)
		Z_PARAM_LONG(pname)
		Z_PARAM_ZVAL(params)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 4, 0, &handle_param, &id_param, &pname_param, &params);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, id);
	ZVAL_LONG(&_2, pname);
	phpqt_qopenglextrafunctions_gl_get_query_objectuiv(&result, &_0, &_1, &_2, params);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QOpenGLExtraFunctions_QOpenGLExtraFunctions, glUnmapBuffer)
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
	RETURN_LONG(phpqt_qopenglextrafunctions_gl_unmap_buffer(&_0, &_1));
}

PHP_METHOD(Qt_Gui_QOpenGLExtraFunctions_QOpenGLExtraFunctions, glDrawBuffers)
{
	zval *handle_param = NULL, *n_param = NULL, *bufs = NULL, bufs_sub, _0, _1;
	zend_long handle, n;

	ZVAL_UNDEF(&bufs_sub);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(n)
		Z_PARAM_ZVAL(bufs)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &n_param, &bufs);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, n);
	phpqt_qopenglextrafunctions_gl_draw_buffers(&_0, &_1, bufs);
}

PHP_METHOD(Qt_Gui_QOpenGLExtraFunctions_QOpenGLExtraFunctions, glUniformMatrix2x3fv)
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
	phpqt_qopenglextrafunctions_gl_uniform_matrix2x3fv(&_0, &_1, &_2, &_3, value);
}

PHP_METHOD(Qt_Gui_QOpenGLExtraFunctions_QOpenGLExtraFunctions, glUniformMatrix3x2fv)
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
	phpqt_qopenglextrafunctions_gl_uniform_matrix3x2fv(&_0, &_1, &_2, &_3, value);
}

PHP_METHOD(Qt_Gui_QOpenGLExtraFunctions_QOpenGLExtraFunctions, glUniformMatrix2x4fv)
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
	phpqt_qopenglextrafunctions_gl_uniform_matrix2x4fv(&_0, &_1, &_2, &_3, value);
}

PHP_METHOD(Qt_Gui_QOpenGLExtraFunctions_QOpenGLExtraFunctions, glUniformMatrix4x2fv)
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
	phpqt_qopenglextrafunctions_gl_uniform_matrix4x2fv(&_0, &_1, &_2, &_3, value);
}

PHP_METHOD(Qt_Gui_QOpenGLExtraFunctions_QOpenGLExtraFunctions, glUniformMatrix3x4fv)
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
	phpqt_qopenglextrafunctions_gl_uniform_matrix3x4fv(&_0, &_1, &_2, &_3, value);
}

PHP_METHOD(Qt_Gui_QOpenGLExtraFunctions_QOpenGLExtraFunctions, glUniformMatrix4x3fv)
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
	phpqt_qopenglextrafunctions_gl_uniform_matrix4x3fv(&_0, &_1, &_2, &_3, value);
}

PHP_METHOD(Qt_Gui_QOpenGLExtraFunctions_QOpenGLExtraFunctions, glBlitFramebuffer)
{
	zval *handle_param = NULL, *srcX0_param = NULL, *srcY0_param = NULL, *srcX1_param = NULL, *srcY1_param = NULL, *dstX0_param = NULL, *dstY0_param = NULL, *dstX1_param = NULL, *dstY1_param = NULL, *mask_param = NULL, *filter_param = NULL, _0, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10;
	zend_long handle, srcX0, srcY0, srcX1, srcY1, dstX0, dstY0, dstX1, dstY1, mask, filter;

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
	ZEND_PARSE_PARAMETERS_START(11, 11)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(srcX0)
		Z_PARAM_LONG(srcY0)
		Z_PARAM_LONG(srcX1)
		Z_PARAM_LONG(srcY1)
		Z_PARAM_LONG(dstX0)
		Z_PARAM_LONG(dstY0)
		Z_PARAM_LONG(dstX1)
		Z_PARAM_LONG(dstY1)
		Z_PARAM_LONG(mask)
		Z_PARAM_LONG(filter)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(11, 0, &handle_param, &srcX0_param, &srcY0_param, &srcX1_param, &srcY1_param, &dstX0_param, &dstY0_param, &dstX1_param, &dstY1_param, &mask_param, &filter_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, srcX0);
	ZVAL_LONG(&_2, srcY0);
	ZVAL_LONG(&_3, srcX1);
	ZVAL_LONG(&_4, srcY1);
	ZVAL_LONG(&_5, dstX0);
	ZVAL_LONG(&_6, dstY0);
	ZVAL_LONG(&_7, dstX1);
	ZVAL_LONG(&_8, dstY1);
	ZVAL_LONG(&_9, mask);
	ZVAL_LONG(&_10, filter);
	phpqt_qopenglextrafunctions_gl_blit_framebuffer(&_0, &_1, &_2, &_3, &_4, &_5, &_6, &_7, &_8, &_9, &_10);
}

PHP_METHOD(Qt_Gui_QOpenGLExtraFunctions_QOpenGLExtraFunctions, glRenderbufferStorageMultisample)
{
	zval *handle_param = NULL, *target_param = NULL, *samples_param = NULL, *internalformat_param = NULL, *width_param = NULL, *height_param = NULL, _0, _1, _2, _3, _4, _5;
	zend_long handle, target, samples, internalformat, width, height;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_5);
	ZEND_PARSE_PARAMETERS_START(6, 6)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(target)
		Z_PARAM_LONG(samples)
		Z_PARAM_LONG(internalformat)
		Z_PARAM_LONG(width)
		Z_PARAM_LONG(height)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(6, 0, &handle_param, &target_param, &samples_param, &internalformat_param, &width_param, &height_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, target);
	ZVAL_LONG(&_2, samples);
	ZVAL_LONG(&_3, internalformat);
	ZVAL_LONG(&_4, width);
	ZVAL_LONG(&_5, height);
	phpqt_qopenglextrafunctions_gl_renderbuffer_storage_multisample(&_0, &_1, &_2, &_3, &_4, &_5);
}

PHP_METHOD(Qt_Gui_QOpenGLExtraFunctions_QOpenGLExtraFunctions, glFramebufferTextureLayer)
{
	zval *handle_param = NULL, *target_param = NULL, *attachment_param = NULL, *texture_param = NULL, *level_param = NULL, *layer_param = NULL, _0, _1, _2, _3, _4, _5;
	zend_long handle, target, attachment, texture, level, layer;

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
		Z_PARAM_LONG(texture)
		Z_PARAM_LONG(level)
		Z_PARAM_LONG(layer)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(6, 0, &handle_param, &target_param, &attachment_param, &texture_param, &level_param, &layer_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, target);
	ZVAL_LONG(&_2, attachment);
	ZVAL_LONG(&_3, texture);
	ZVAL_LONG(&_4, level);
	ZVAL_LONG(&_5, layer);
	phpqt_qopenglextrafunctions_gl_framebuffer_texture_layer(&_0, &_1, &_2, &_3, &_4, &_5);
}

PHP_METHOD(Qt_Gui_QOpenGLExtraFunctions_QOpenGLExtraFunctions, glFlushMappedBufferRange)
{
	zval *handle_param = NULL, *target_param = NULL, *offset_param = NULL, *length_param = NULL, _0, _1, _2, _3;
	zend_long handle, target, offset, length;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(target)
		Z_PARAM_LONG(offset)
		Z_PARAM_LONG(length)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 0, &handle_param, &target_param, &offset_param, &length_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, target);
	ZVAL_LONG(&_2, offset);
	ZVAL_LONG(&_3, length);
	phpqt_qopenglextrafunctions_gl_flush_mapped_buffer_range(&_0, &_1, &_2, &_3);
}

PHP_METHOD(Qt_Gui_QOpenGLExtraFunctions_QOpenGLExtraFunctions, glBindVertexArray)
{
	zval *handle_param = NULL, *array__param = NULL, _0, _1;
	zend_long handle, array_;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(array_)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &array__param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, array_);
	phpqt_qopenglextrafunctions_gl_bind_vertex_array(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QOpenGLExtraFunctions_QOpenGLExtraFunctions, glDeleteVertexArrays)
{
	zval *handle_param = NULL, *n_param = NULL, *arrays = NULL, arrays_sub, _0, _1;
	zend_long handle, n;

	ZVAL_UNDEF(&arrays_sub);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(n)
		Z_PARAM_ZVAL(arrays)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &n_param, &arrays);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, n);
	phpqt_qopenglextrafunctions_gl_delete_vertex_arrays(&_0, &_1, arrays);
}

PHP_METHOD(Qt_Gui_QOpenGLExtraFunctions_QOpenGLExtraFunctions, glGenVertexArrays)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, *n_param = NULL, *arrays = NULL, arrays_sub, result, _0, _1;
	zend_long handle, n;

	ZVAL_UNDEF(&arrays_sub);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(n)
		Z_PARAM_ZVAL(arrays)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 3, 0, &handle_param, &n_param, &arrays);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, n);
	phpqt_qopenglextrafunctions_gl_gen_vertex_arrays(&result, &_0, &_1, arrays);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QOpenGLExtraFunctions_QOpenGLExtraFunctions, glIsVertexArray)
{
	zval *handle_param = NULL, *array__param = NULL, _0, _1;
	zend_long handle, array_;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(array_)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &array__param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, array_);
	RETURN_LONG(phpqt_qopenglextrafunctions_gl_is_vertex_array(&_0, &_1));
}

PHP_METHOD(Qt_Gui_QOpenGLExtraFunctions_QOpenGLExtraFunctions, glGetIntegeri_v)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, *target_param = NULL, *index_param = NULL, *data = NULL, data_sub, result, _0, _1, _2;
	zend_long handle, target, index;

	ZVAL_UNDEF(&data_sub);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(target)
		Z_PARAM_LONG(index)
		Z_PARAM_ZVAL(data)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 4, 0, &handle_param, &target_param, &index_param, &data);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, target);
	ZVAL_LONG(&_2, index);
	phpqt_qopenglextrafunctions_gl_get_integeri_v(&result, &_0, &_1, &_2, data);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QOpenGLExtraFunctions_QOpenGLExtraFunctions, glBeginTransformFeedback)
{
	zval *handle_param = NULL, *primitiveMode_param = NULL, _0, _1;
	zend_long handle, primitiveMode;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(primitiveMode)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &primitiveMode_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, primitiveMode);
	phpqt_qopenglextrafunctions_gl_begin_transform_feedback(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QOpenGLExtraFunctions_QOpenGLExtraFunctions, glEndTransformFeedback)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qopenglextrafunctions_gl_end_transform_feedback(&_0);
}

PHP_METHOD(Qt_Gui_QOpenGLExtraFunctions_QOpenGLExtraFunctions, glBindBufferRange)
{
	zval *handle_param = NULL, *target_param = NULL, *index_param = NULL, *buffer_param = NULL, *offset_param = NULL, *size_param = NULL, _0, _1, _2, _3, _4, _5;
	zend_long handle, target, index, buffer, offset, size;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_5);
	ZEND_PARSE_PARAMETERS_START(6, 6)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(target)
		Z_PARAM_LONG(index)
		Z_PARAM_LONG(buffer)
		Z_PARAM_LONG(offset)
		Z_PARAM_LONG(size)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(6, 0, &handle_param, &target_param, &index_param, &buffer_param, &offset_param, &size_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, target);
	ZVAL_LONG(&_2, index);
	ZVAL_LONG(&_3, buffer);
	ZVAL_LONG(&_4, offset);
	ZVAL_LONG(&_5, size);
	phpqt_qopenglextrafunctions_gl_bind_buffer_range(&_0, &_1, &_2, &_3, &_4, &_5);
}

PHP_METHOD(Qt_Gui_QOpenGLExtraFunctions_QOpenGLExtraFunctions, glBindBufferBase)
{
	zval *handle_param = NULL, *target_param = NULL, *index_param = NULL, *buffer_param = NULL, _0, _1, _2, _3;
	zend_long handle, target, index, buffer;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(target)
		Z_PARAM_LONG(index)
		Z_PARAM_LONG(buffer)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 0, &handle_param, &target_param, &index_param, &buffer_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, target);
	ZVAL_LONG(&_2, index);
	ZVAL_LONG(&_3, buffer);
	phpqt_qopenglextrafunctions_gl_bind_buffer_base(&_0, &_1, &_2, &_3);
}

PHP_METHOD(Qt_Gui_QOpenGLExtraFunctions_QOpenGLExtraFunctions, glGetVertexAttribIiv)
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
	phpqt_qopenglextrafunctions_gl_get_vertex_attrib_iiv(&result, &_0, &_1, &_2, params);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QOpenGLExtraFunctions_QOpenGLExtraFunctions, glGetVertexAttribIuiv)
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
	phpqt_qopenglextrafunctions_gl_get_vertex_attrib_iuiv(&result, &_0, &_1, &_2, params);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QOpenGLExtraFunctions_QOpenGLExtraFunctions, glVertexAttribI4i)
{
	zval *handle_param = NULL, *index_param = NULL, *x_param = NULL, *y_param = NULL, *z_param = NULL, *w_param = NULL, _0, _1, _2, _3, _4, _5;
	zend_long handle, index, x, y, z, w;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_5);
	ZEND_PARSE_PARAMETERS_START(6, 6)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(index)
		Z_PARAM_LONG(x)
		Z_PARAM_LONG(y)
		Z_PARAM_LONG(z)
		Z_PARAM_LONG(w)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(6, 0, &handle_param, &index_param, &x_param, &y_param, &z_param, &w_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, index);
	ZVAL_LONG(&_2, x);
	ZVAL_LONG(&_3, y);
	ZVAL_LONG(&_4, z);
	ZVAL_LONG(&_5, w);
	phpqt_qopenglextrafunctions_gl_vertex_attrib_i4i(&_0, &_1, &_2, &_3, &_4, &_5);
}

PHP_METHOD(Qt_Gui_QOpenGLExtraFunctions_QOpenGLExtraFunctions, glVertexAttribI4ui)
{
	zval *handle_param = NULL, *index_param = NULL, *x_param = NULL, *y_param = NULL, *z_param = NULL, *w_param = NULL, _0, _1, _2, _3, _4, _5;
	zend_long handle, index, x, y, z, w;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_5);
	ZEND_PARSE_PARAMETERS_START(6, 6)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(index)
		Z_PARAM_LONG(x)
		Z_PARAM_LONG(y)
		Z_PARAM_LONG(z)
		Z_PARAM_LONG(w)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(6, 0, &handle_param, &index_param, &x_param, &y_param, &z_param, &w_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, index);
	ZVAL_LONG(&_2, x);
	ZVAL_LONG(&_3, y);
	ZVAL_LONG(&_4, z);
	ZVAL_LONG(&_5, w);
	phpqt_qopenglextrafunctions_gl_vertex_attrib_i4ui(&_0, &_1, &_2, &_3, &_4, &_5);
}

PHP_METHOD(Qt_Gui_QOpenGLExtraFunctions_QOpenGLExtraFunctions, glVertexAttribI4iv)
{
	zval *handle_param = NULL, *index_param = NULL, *v = NULL, v_sub, _0, _1;
	zend_long handle, index;

	ZVAL_UNDEF(&v_sub);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(index)
		Z_PARAM_ZVAL(v)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &index_param, &v);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, index);
	phpqt_qopenglextrafunctions_gl_vertex_attrib_i4iv(&_0, &_1, v);
}

PHP_METHOD(Qt_Gui_QOpenGLExtraFunctions_QOpenGLExtraFunctions, glVertexAttribI4uiv)
{
	zval *handle_param = NULL, *index_param = NULL, *v = NULL, v_sub, _0, _1;
	zend_long handle, index;

	ZVAL_UNDEF(&v_sub);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(index)
		Z_PARAM_ZVAL(v)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &index_param, &v);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, index);
	phpqt_qopenglextrafunctions_gl_vertex_attrib_i4uiv(&_0, &_1, v);
}

PHP_METHOD(Qt_Gui_QOpenGLExtraFunctions_QOpenGLExtraFunctions, glGetUniformuiv)
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
	phpqt_qopenglextrafunctions_gl_get_uniformuiv(&result, &_0, &_1, &_2, params);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QOpenGLExtraFunctions_QOpenGLExtraFunctions, glGetFragDataLocation)
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
	RETURN_LONG(phpqt_qopenglextrafunctions_gl_get_frag_data_location(&_0, &_1, name));
}

PHP_METHOD(Qt_Gui_QOpenGLExtraFunctions_QOpenGLExtraFunctions, glUniform1ui)
{
	zval *handle_param = NULL, *location_param = NULL, *v0_param = NULL, _0, _1, _2;
	zend_long handle, location, v0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(location)
		Z_PARAM_LONG(v0)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &location_param, &v0_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, location);
	ZVAL_LONG(&_2, v0);
	phpqt_qopenglextrafunctions_gl_uniform1ui(&_0, &_1, &_2);
}

PHP_METHOD(Qt_Gui_QOpenGLExtraFunctions_QOpenGLExtraFunctions, glUniform2ui)
{
	zval *handle_param = NULL, *location_param = NULL, *v0_param = NULL, *v1_param = NULL, _0, _1, _2, _3;
	zend_long handle, location, v0, v1;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(location)
		Z_PARAM_LONG(v0)
		Z_PARAM_LONG(v1)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 0, &handle_param, &location_param, &v0_param, &v1_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, location);
	ZVAL_LONG(&_2, v0);
	ZVAL_LONG(&_3, v1);
	phpqt_qopenglextrafunctions_gl_uniform2ui(&_0, &_1, &_2, &_3);
}

PHP_METHOD(Qt_Gui_QOpenGLExtraFunctions_QOpenGLExtraFunctions, glUniform3ui)
{
	zval *handle_param = NULL, *location_param = NULL, *v0_param = NULL, *v1_param = NULL, *v2_param = NULL, _0, _1, _2, _3, _4;
	zend_long handle, location, v0, v1, v2;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZEND_PARSE_PARAMETERS_START(5, 5)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(location)
		Z_PARAM_LONG(v0)
		Z_PARAM_LONG(v1)
		Z_PARAM_LONG(v2)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(5, 0, &handle_param, &location_param, &v0_param, &v1_param, &v2_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, location);
	ZVAL_LONG(&_2, v0);
	ZVAL_LONG(&_3, v1);
	ZVAL_LONG(&_4, v2);
	phpqt_qopenglextrafunctions_gl_uniform3ui(&_0, &_1, &_2, &_3, &_4);
}

PHP_METHOD(Qt_Gui_QOpenGLExtraFunctions_QOpenGLExtraFunctions, glUniform4ui)
{
	zval *handle_param = NULL, *location_param = NULL, *v0_param = NULL, *v1_param = NULL, *v2_param = NULL, *v3_param = NULL, _0, _1, _2, _3, _4, _5;
	zend_long handle, location, v0, v1, v2, v3;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_5);
	ZEND_PARSE_PARAMETERS_START(6, 6)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(location)
		Z_PARAM_LONG(v0)
		Z_PARAM_LONG(v1)
		Z_PARAM_LONG(v2)
		Z_PARAM_LONG(v3)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(6, 0, &handle_param, &location_param, &v0_param, &v1_param, &v2_param, &v3_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, location);
	ZVAL_LONG(&_2, v0);
	ZVAL_LONG(&_3, v1);
	ZVAL_LONG(&_4, v2);
	ZVAL_LONG(&_5, v3);
	phpqt_qopenglextrafunctions_gl_uniform4ui(&_0, &_1, &_2, &_3, &_4, &_5);
}

PHP_METHOD(Qt_Gui_QOpenGLExtraFunctions_QOpenGLExtraFunctions, glUniform1uiv)
{
	zval *handle_param = NULL, *location_param = NULL, *count_param = NULL, *value = NULL, value_sub, _0, _1, _2;
	zend_long handle, location, count;

	ZVAL_UNDEF(&value_sub);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(location)
		Z_PARAM_LONG(count)
		Z_PARAM_ZVAL(value)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 0, &handle_param, &location_param, &count_param, &value);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, location);
	ZVAL_LONG(&_2, count);
	phpqt_qopenglextrafunctions_gl_uniform1uiv(&_0, &_1, &_2, value);
}

PHP_METHOD(Qt_Gui_QOpenGLExtraFunctions_QOpenGLExtraFunctions, glUniform2uiv)
{
	zval *handle_param = NULL, *location_param = NULL, *count_param = NULL, *value = NULL, value_sub, _0, _1, _2;
	zend_long handle, location, count;

	ZVAL_UNDEF(&value_sub);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(location)
		Z_PARAM_LONG(count)
		Z_PARAM_ZVAL(value)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 0, &handle_param, &location_param, &count_param, &value);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, location);
	ZVAL_LONG(&_2, count);
	phpqt_qopenglextrafunctions_gl_uniform2uiv(&_0, &_1, &_2, value);
}

PHP_METHOD(Qt_Gui_QOpenGLExtraFunctions_QOpenGLExtraFunctions, glUniform3uiv)
{
	zval *handle_param = NULL, *location_param = NULL, *count_param = NULL, *value = NULL, value_sub, _0, _1, _2;
	zend_long handle, location, count;

	ZVAL_UNDEF(&value_sub);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(location)
		Z_PARAM_LONG(count)
		Z_PARAM_ZVAL(value)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 0, &handle_param, &location_param, &count_param, &value);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, location);
	ZVAL_LONG(&_2, count);
	phpqt_qopenglextrafunctions_gl_uniform3uiv(&_0, &_1, &_2, value);
}

PHP_METHOD(Qt_Gui_QOpenGLExtraFunctions_QOpenGLExtraFunctions, glUniform4uiv)
{
	zval *handle_param = NULL, *location_param = NULL, *count_param = NULL, *value = NULL, value_sub, _0, _1, _2;
	zend_long handle, location, count;

	ZVAL_UNDEF(&value_sub);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(location)
		Z_PARAM_LONG(count)
		Z_PARAM_ZVAL(value)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 0, &handle_param, &location_param, &count_param, &value);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, location);
	ZVAL_LONG(&_2, count);
	phpqt_qopenglextrafunctions_gl_uniform4uiv(&_0, &_1, &_2, value);
}

PHP_METHOD(Qt_Gui_QOpenGLExtraFunctions_QOpenGLExtraFunctions, glClearBufferiv)
{
	zval *handle_param = NULL, *buffer_param = NULL, *drawbuffer_param = NULL, *value = NULL, value_sub, _0, _1, _2;
	zend_long handle, buffer, drawbuffer;

	ZVAL_UNDEF(&value_sub);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(buffer)
		Z_PARAM_LONG(drawbuffer)
		Z_PARAM_ZVAL(value)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 0, &handle_param, &buffer_param, &drawbuffer_param, &value);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, buffer);
	ZVAL_LONG(&_2, drawbuffer);
	phpqt_qopenglextrafunctions_gl_clear_bufferiv(&_0, &_1, &_2, value);
}

PHP_METHOD(Qt_Gui_QOpenGLExtraFunctions_QOpenGLExtraFunctions, glClearBufferuiv)
{
	zval *handle_param = NULL, *buffer_param = NULL, *drawbuffer_param = NULL, *value = NULL, value_sub, _0, _1, _2;
	zend_long handle, buffer, drawbuffer;

	ZVAL_UNDEF(&value_sub);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(buffer)
		Z_PARAM_LONG(drawbuffer)
		Z_PARAM_ZVAL(value)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 0, &handle_param, &buffer_param, &drawbuffer_param, &value);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, buffer);
	ZVAL_LONG(&_2, drawbuffer);
	phpqt_qopenglextrafunctions_gl_clear_bufferuiv(&_0, &_1, &_2, value);
}

PHP_METHOD(Qt_Gui_QOpenGLExtraFunctions_QOpenGLExtraFunctions, glClearBufferfv)
{
	zval *handle_param = NULL, *buffer_param = NULL, *drawbuffer_param = NULL, *value = NULL, value_sub, _0, _1, _2;
	zend_long handle, buffer, drawbuffer;

	ZVAL_UNDEF(&value_sub);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(buffer)
		Z_PARAM_LONG(drawbuffer)
		Z_PARAM_ZVAL(value)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 0, &handle_param, &buffer_param, &drawbuffer_param, &value);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, buffer);
	ZVAL_LONG(&_2, drawbuffer);
	phpqt_qopenglextrafunctions_gl_clear_bufferfv(&_0, &_1, &_2, value);
}

PHP_METHOD(Qt_Gui_QOpenGLExtraFunctions_QOpenGLExtraFunctions, glClearBufferfi)
{
	double depth;
	zval *handle_param = NULL, *buffer_param = NULL, *drawbuffer_param = NULL, *depth_param = NULL, *stencil_param = NULL, _0, _1, _2, _3, _4;
	zend_long handle, buffer, drawbuffer, stencil;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZEND_PARSE_PARAMETERS_START(5, 5)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(buffer)
		Z_PARAM_LONG(drawbuffer)
		Z_PARAM_ZVAL(depth)
		Z_PARAM_LONG(stencil)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(5, 0, &handle_param, &buffer_param, &drawbuffer_param, &depth_param, &stencil_param);
	depth = zephir_get_doubleval(depth_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, buffer);
	ZVAL_LONG(&_2, drawbuffer);
	ZVAL_DOUBLE(&_3, depth);
	ZVAL_LONG(&_4, stencil);
	phpqt_qopenglextrafunctions_gl_clear_bufferfi(&_0, &_1, &_2, &_3, &_4);
}

PHP_METHOD(Qt_Gui_QOpenGLExtraFunctions_QOpenGLExtraFunctions, glCopyBufferSubData)
{
	zval *handle_param = NULL, *readTarget_param = NULL, *writeTarget_param = NULL, *readOffset_param = NULL, *writeOffset_param = NULL, *size_param = NULL, _0, _1, _2, _3, _4, _5;
	zend_long handle, readTarget, writeTarget, readOffset, writeOffset, size;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_5);
	ZEND_PARSE_PARAMETERS_START(6, 6)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(readTarget)
		Z_PARAM_LONG(writeTarget)
		Z_PARAM_LONG(readOffset)
		Z_PARAM_LONG(writeOffset)
		Z_PARAM_LONG(size)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(6, 0, &handle_param, &readTarget_param, &writeTarget_param, &readOffset_param, &writeOffset_param, &size_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, readTarget);
	ZVAL_LONG(&_2, writeTarget);
	ZVAL_LONG(&_3, readOffset);
	ZVAL_LONG(&_4, writeOffset);
	ZVAL_LONG(&_5, size);
	phpqt_qopenglextrafunctions_gl_copy_buffer_sub_data(&_0, &_1, &_2, &_3, &_4, &_5);
}

PHP_METHOD(Qt_Gui_QOpenGLExtraFunctions_QOpenGLExtraFunctions, glGetActiveUniformsiv)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, *program_param = NULL, *uniformCount_param = NULL, *uniformIndices = NULL, uniformIndices_sub, *pname_param = NULL, *params = NULL, params_sub, result, _0, _1, _2, _3;
	zend_long handle, program, uniformCount, pname;

	ZVAL_UNDEF(&uniformIndices_sub);
	ZVAL_UNDEF(&params_sub);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(6, 6)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(program)
		Z_PARAM_LONG(uniformCount)
		Z_PARAM_ZVAL(uniformIndices)
		Z_PARAM_LONG(pname)
		Z_PARAM_ZVAL(params)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 6, 0, &handle_param, &program_param, &uniformCount_param, &uniformIndices, &pname_param, &params);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, program);
	ZVAL_LONG(&_2, uniformCount);
	ZVAL_LONG(&_3, pname);
	phpqt_qopenglextrafunctions_gl_get_active_uniformsiv(&result, &_0, &_1, &_2, uniformIndices, &_3, params);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QOpenGLExtraFunctions_QOpenGLExtraFunctions, glGetUniformBlockIndex)
{
	zval *handle_param = NULL, *program_param = NULL, *uniformBlockName = NULL, uniformBlockName_sub, _0, _1;
	zend_long handle, program;

	ZVAL_UNDEF(&uniformBlockName_sub);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(program)
		Z_PARAM_ZVAL(uniformBlockName)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &program_param, &uniformBlockName);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, program);
	RETURN_LONG(phpqt_qopenglextrafunctions_gl_get_uniform_block_index(&_0, &_1, uniformBlockName));
}

PHP_METHOD(Qt_Gui_QOpenGLExtraFunctions_QOpenGLExtraFunctions, glGetActiveUniformBlockiv)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, *program_param = NULL, *uniformBlockIndex_param = NULL, *pname_param = NULL, *params = NULL, params_sub, result, _0, _1, _2, _3;
	zend_long handle, program, uniformBlockIndex, pname;

	ZVAL_UNDEF(&params_sub);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(5, 5)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(program)
		Z_PARAM_LONG(uniformBlockIndex)
		Z_PARAM_LONG(pname)
		Z_PARAM_ZVAL(params)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 5, 0, &handle_param, &program_param, &uniformBlockIndex_param, &pname_param, &params);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, program);
	ZVAL_LONG(&_2, uniformBlockIndex);
	ZVAL_LONG(&_3, pname);
	phpqt_qopenglextrafunctions_gl_get_active_uniform_blockiv(&result, &_0, &_1, &_2, &_3, params);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QOpenGLExtraFunctions_QOpenGLExtraFunctions, glUniformBlockBinding)
{
	zval *handle_param = NULL, *program_param = NULL, *uniformBlockIndex_param = NULL, *uniformBlockBinding_param = NULL, _0, _1, _2, _3;
	zend_long handle, program, uniformBlockIndex, uniformBlockBinding;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(program)
		Z_PARAM_LONG(uniformBlockIndex)
		Z_PARAM_LONG(uniformBlockBinding)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 0, &handle_param, &program_param, &uniformBlockIndex_param, &uniformBlockBinding_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, program);
	ZVAL_LONG(&_2, uniformBlockIndex);
	ZVAL_LONG(&_3, uniformBlockBinding);
	phpqt_qopenglextrafunctions_gl_uniform_block_binding(&_0, &_1, &_2, &_3);
}

PHP_METHOD(Qt_Gui_QOpenGLExtraFunctions_QOpenGLExtraFunctions, glDrawArraysInstanced)
{
	zval *handle_param = NULL, *mode_param = NULL, *first_param = NULL, *count_param = NULL, *instancecount_param = NULL, _0, _1, _2, _3, _4;
	zend_long handle, mode, first, count, instancecount;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZEND_PARSE_PARAMETERS_START(5, 5)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(mode)
		Z_PARAM_LONG(first)
		Z_PARAM_LONG(count)
		Z_PARAM_LONG(instancecount)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(5, 0, &handle_param, &mode_param, &first_param, &count_param, &instancecount_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, mode);
	ZVAL_LONG(&_2, first);
	ZVAL_LONG(&_3, count);
	ZVAL_LONG(&_4, instancecount);
	phpqt_qopenglextrafunctions_gl_draw_arrays_instanced(&_0, &_1, &_2, &_3, &_4);
}

PHP_METHOD(Qt_Gui_QOpenGLExtraFunctions_QOpenGLExtraFunctions, glGetInteger64v)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, *pname_param = NULL, *data = NULL, data_sub, result, _0, _1;
	zend_long handle, pname;

	ZVAL_UNDEF(&data_sub);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(pname)
		Z_PARAM_ZVAL(data)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 3, 0, &handle_param, &pname_param, &data);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, pname);
	phpqt_qopenglextrafunctions_gl_get_integer64v(&result, &_0, &_1, data);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QOpenGLExtraFunctions_QOpenGLExtraFunctions, glGetInteger64i_v)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, *target_param = NULL, *index_param = NULL, *data = NULL, data_sub, result, _0, _1, _2;
	zend_long handle, target, index;

	ZVAL_UNDEF(&data_sub);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(target)
		Z_PARAM_LONG(index)
		Z_PARAM_ZVAL(data)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 4, 0, &handle_param, &target_param, &index_param, &data);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, target);
	ZVAL_LONG(&_2, index);
	phpqt_qopenglextrafunctions_gl_get_integer64i_v(&result, &_0, &_1, &_2, data);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QOpenGLExtraFunctions_QOpenGLExtraFunctions, glGetBufferParameteri64v)
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
	phpqt_qopenglextrafunctions_gl_get_buffer_parameteri64v(&result, &_0, &_1, &_2, params);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QOpenGLExtraFunctions_QOpenGLExtraFunctions, glGenSamplers)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, *count_param = NULL, *samplers = NULL, samplers_sub, result, _0, _1;
	zend_long handle, count;

	ZVAL_UNDEF(&samplers_sub);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(count)
		Z_PARAM_ZVAL(samplers)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 3, 0, &handle_param, &count_param, &samplers);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, count);
	phpqt_qopenglextrafunctions_gl_gen_samplers(&result, &_0, &_1, samplers);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QOpenGLExtraFunctions_QOpenGLExtraFunctions, glDeleteSamplers)
{
	zval *handle_param = NULL, *count_param = NULL, *samplers = NULL, samplers_sub, _0, _1;
	zend_long handle, count;

	ZVAL_UNDEF(&samplers_sub);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(count)
		Z_PARAM_ZVAL(samplers)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &count_param, &samplers);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, count);
	phpqt_qopenglextrafunctions_gl_delete_samplers(&_0, &_1, samplers);
}

PHP_METHOD(Qt_Gui_QOpenGLExtraFunctions_QOpenGLExtraFunctions, glIsSampler)
{
	zval *handle_param = NULL, *sampler_param = NULL, _0, _1;
	zend_long handle, sampler;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(sampler)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &sampler_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, sampler);
	RETURN_LONG(phpqt_qopenglextrafunctions_gl_is_sampler(&_0, &_1));
}

PHP_METHOD(Qt_Gui_QOpenGLExtraFunctions_QOpenGLExtraFunctions, glBindSampler)
{
	zval *handle_param = NULL, *unit_param = NULL, *sampler_param = NULL, _0, _1, _2;
	zend_long handle, unit, sampler;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(unit)
		Z_PARAM_LONG(sampler)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &unit_param, &sampler_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, unit);
	ZVAL_LONG(&_2, sampler);
	phpqt_qopenglextrafunctions_gl_bind_sampler(&_0, &_1, &_2);
}

PHP_METHOD(Qt_Gui_QOpenGLExtraFunctions_QOpenGLExtraFunctions, glSamplerParameteri)
{
	zval *handle_param = NULL, *sampler_param = NULL, *pname_param = NULL, *param_param = NULL, _0, _1, _2, _3;
	zend_long handle, sampler, pname, param;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(sampler)
		Z_PARAM_LONG(pname)
		Z_PARAM_LONG(param)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 0, &handle_param, &sampler_param, &pname_param, &param_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, sampler);
	ZVAL_LONG(&_2, pname);
	ZVAL_LONG(&_3, param);
	phpqt_qopenglextrafunctions_gl_sampler_parameteri(&_0, &_1, &_2, &_3);
}

PHP_METHOD(Qt_Gui_QOpenGLExtraFunctions_QOpenGLExtraFunctions, glSamplerParameteriv)
{
	zval *handle_param = NULL, *sampler_param = NULL, *pname_param = NULL, *param = NULL, param_sub, _0, _1, _2;
	zend_long handle, sampler, pname;

	ZVAL_UNDEF(&param_sub);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(sampler)
		Z_PARAM_LONG(pname)
		Z_PARAM_ZVAL(param)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 0, &handle_param, &sampler_param, &pname_param, &param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, sampler);
	ZVAL_LONG(&_2, pname);
	phpqt_qopenglextrafunctions_gl_sampler_parameteriv(&_0, &_1, &_2, param);
}

PHP_METHOD(Qt_Gui_QOpenGLExtraFunctions_QOpenGLExtraFunctions, glSamplerParameterf)
{
	double param;
	zval *handle_param = NULL, *sampler_param = NULL, *pname_param = NULL, *param_param = NULL, _0, _1, _2, _3;
	zend_long handle, sampler, pname;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(sampler)
		Z_PARAM_LONG(pname)
		Z_PARAM_ZVAL(param)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 0, &handle_param, &sampler_param, &pname_param, &param_param);
	param = zephir_get_doubleval(param_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, sampler);
	ZVAL_LONG(&_2, pname);
	ZVAL_DOUBLE(&_3, param);
	phpqt_qopenglextrafunctions_gl_sampler_parameterf(&_0, &_1, &_2, &_3);
}

PHP_METHOD(Qt_Gui_QOpenGLExtraFunctions_QOpenGLExtraFunctions, glSamplerParameterfv)
{
	zval *handle_param = NULL, *sampler_param = NULL, *pname_param = NULL, *param = NULL, param_sub, _0, _1, _2;
	zend_long handle, sampler, pname;

	ZVAL_UNDEF(&param_sub);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(sampler)
		Z_PARAM_LONG(pname)
		Z_PARAM_ZVAL(param)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 0, &handle_param, &sampler_param, &pname_param, &param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, sampler);
	ZVAL_LONG(&_2, pname);
	phpqt_qopenglextrafunctions_gl_sampler_parameterfv(&_0, &_1, &_2, param);
}

PHP_METHOD(Qt_Gui_QOpenGLExtraFunctions_QOpenGLExtraFunctions, glGetSamplerParameteriv)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, *sampler_param = NULL, *pname_param = NULL, *params = NULL, params_sub, result, _0, _1, _2;
	zend_long handle, sampler, pname;

	ZVAL_UNDEF(&params_sub);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(sampler)
		Z_PARAM_LONG(pname)
		Z_PARAM_ZVAL(params)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 4, 0, &handle_param, &sampler_param, &pname_param, &params);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, sampler);
	ZVAL_LONG(&_2, pname);
	phpqt_qopenglextrafunctions_gl_get_sampler_parameteriv(&result, &_0, &_1, &_2, params);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QOpenGLExtraFunctions_QOpenGLExtraFunctions, glGetSamplerParameterfv)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, *sampler_param = NULL, *pname_param = NULL, *params = NULL, params_sub, result, _0, _1, _2;
	zend_long handle, sampler, pname;

	ZVAL_UNDEF(&params_sub);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(sampler)
		Z_PARAM_LONG(pname)
		Z_PARAM_ZVAL(params)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 4, 0, &handle_param, &sampler_param, &pname_param, &params);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, sampler);
	ZVAL_LONG(&_2, pname);
	phpqt_qopenglextrafunctions_gl_get_sampler_parameterfv(&result, &_0, &_1, &_2, params);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QOpenGLExtraFunctions_QOpenGLExtraFunctions, glVertexAttribDivisor)
{
	zval *handle_param = NULL, *index_param = NULL, *divisor_param = NULL, _0, _1, _2;
	zend_long handle, index, divisor;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(index)
		Z_PARAM_LONG(divisor)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &index_param, &divisor_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, index);
	ZVAL_LONG(&_2, divisor);
	phpqt_qopenglextrafunctions_gl_vertex_attrib_divisor(&_0, &_1, &_2);
}

PHP_METHOD(Qt_Gui_QOpenGLExtraFunctions_QOpenGLExtraFunctions, glBindTransformFeedback)
{
	zval *handle_param = NULL, *target_param = NULL, *id_param = NULL, _0, _1, _2;
	zend_long handle, target, id;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(target)
		Z_PARAM_LONG(id)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &target_param, &id_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, target);
	ZVAL_LONG(&_2, id);
	phpqt_qopenglextrafunctions_gl_bind_transform_feedback(&_0, &_1, &_2);
}

PHP_METHOD(Qt_Gui_QOpenGLExtraFunctions_QOpenGLExtraFunctions, glDeleteTransformFeedbacks)
{
	zval *handle_param = NULL, *n_param = NULL, *ids = NULL, ids_sub, _0, _1;
	zend_long handle, n;

	ZVAL_UNDEF(&ids_sub);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(n)
		Z_PARAM_ZVAL(ids)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &n_param, &ids);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, n);
	phpqt_qopenglextrafunctions_gl_delete_transform_feedbacks(&_0, &_1, ids);
}

PHP_METHOD(Qt_Gui_QOpenGLExtraFunctions_QOpenGLExtraFunctions, glGenTransformFeedbacks)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, *n_param = NULL, *ids = NULL, ids_sub, result, _0, _1;
	zend_long handle, n;

	ZVAL_UNDEF(&ids_sub);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(n)
		Z_PARAM_ZVAL(ids)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 3, 0, &handle_param, &n_param, &ids);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, n);
	phpqt_qopenglextrafunctions_gl_gen_transform_feedbacks(&result, &_0, &_1, ids);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QOpenGLExtraFunctions_QOpenGLExtraFunctions, glIsTransformFeedback)
{
	zval *handle_param = NULL, *id_param = NULL, _0, _1;
	zend_long handle, id;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(id)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &id_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, id);
	RETURN_LONG(phpqt_qopenglextrafunctions_gl_is_transform_feedback(&_0, &_1));
}

PHP_METHOD(Qt_Gui_QOpenGLExtraFunctions_QOpenGLExtraFunctions, glPauseTransformFeedback)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qopenglextrafunctions_gl_pause_transform_feedback(&_0);
}

PHP_METHOD(Qt_Gui_QOpenGLExtraFunctions_QOpenGLExtraFunctions, glResumeTransformFeedback)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qopenglextrafunctions_gl_resume_transform_feedback(&_0);
}

PHP_METHOD(Qt_Gui_QOpenGLExtraFunctions_QOpenGLExtraFunctions, glProgramParameteri)
{
	zval *handle_param = NULL, *program_param = NULL, *pname_param = NULL, *value_param = NULL, _0, _1, _2, _3;
	zend_long handle, program, pname, value;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(program)
		Z_PARAM_LONG(pname)
		Z_PARAM_LONG(value)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 0, &handle_param, &program_param, &pname_param, &value_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, program);
	ZVAL_LONG(&_2, pname);
	ZVAL_LONG(&_3, value);
	phpqt_qopenglextrafunctions_gl_program_parameteri(&_0, &_1, &_2, &_3);
}

PHP_METHOD(Qt_Gui_QOpenGLExtraFunctions_QOpenGLExtraFunctions, glInvalidateFramebuffer)
{
	zval *handle_param = NULL, *target_param = NULL, *numAttachments_param = NULL, *attachments = NULL, attachments_sub, _0, _1, _2;
	zend_long handle, target, numAttachments;

	ZVAL_UNDEF(&attachments_sub);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(target)
		Z_PARAM_LONG(numAttachments)
		Z_PARAM_ZVAL(attachments)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 0, &handle_param, &target_param, &numAttachments_param, &attachments);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, target);
	ZVAL_LONG(&_2, numAttachments);
	phpqt_qopenglextrafunctions_gl_invalidate_framebuffer(&_0, &_1, &_2, attachments);
}

PHP_METHOD(Qt_Gui_QOpenGLExtraFunctions_QOpenGLExtraFunctions, glInvalidateSubFramebuffer)
{
	zval *handle_param = NULL, *target_param = NULL, *numAttachments_param = NULL, *attachments = NULL, attachments_sub, *x_param = NULL, *y_param = NULL, *width_param = NULL, *height_param = NULL, _0, _1, _2, _3, _4, _5, _6;
	zend_long handle, target, numAttachments, x, y, width, height;

	ZVAL_UNDEF(&attachments_sub);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_5);
	ZVAL_UNDEF(&_6);
	ZEND_PARSE_PARAMETERS_START(8, 8)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(target)
		Z_PARAM_LONG(numAttachments)
		Z_PARAM_ZVAL(attachments)
		Z_PARAM_LONG(x)
		Z_PARAM_LONG(y)
		Z_PARAM_LONG(width)
		Z_PARAM_LONG(height)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(8, 0, &handle_param, &target_param, &numAttachments_param, &attachments, &x_param, &y_param, &width_param, &height_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, target);
	ZVAL_LONG(&_2, numAttachments);
	ZVAL_LONG(&_3, x);
	ZVAL_LONG(&_4, y);
	ZVAL_LONG(&_5, width);
	ZVAL_LONG(&_6, height);
	phpqt_qopenglextrafunctions_gl_invalidate_sub_framebuffer(&_0, &_1, &_2, attachments, &_3, &_4, &_5, &_6);
}

PHP_METHOD(Qt_Gui_QOpenGLExtraFunctions_QOpenGLExtraFunctions, glTexStorage2D)
{
	zval *handle_param = NULL, *target_param = NULL, *levels_param = NULL, *internalformat_param = NULL, *width_param = NULL, *height_param = NULL, _0, _1, _2, _3, _4, _5;
	zend_long handle, target, levels, internalformat, width, height;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_5);
	ZEND_PARSE_PARAMETERS_START(6, 6)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(target)
		Z_PARAM_LONG(levels)
		Z_PARAM_LONG(internalformat)
		Z_PARAM_LONG(width)
		Z_PARAM_LONG(height)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(6, 0, &handle_param, &target_param, &levels_param, &internalformat_param, &width_param, &height_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, target);
	ZVAL_LONG(&_2, levels);
	ZVAL_LONG(&_3, internalformat);
	ZVAL_LONG(&_4, width);
	ZVAL_LONG(&_5, height);
	phpqt_qopenglextrafunctions_gl_tex_storage2_d(&_0, &_1, &_2, &_3, &_4, &_5);
}

PHP_METHOD(Qt_Gui_QOpenGLExtraFunctions_QOpenGLExtraFunctions, glTexStorage3D)
{
	zval *handle_param = NULL, *target_param = NULL, *levels_param = NULL, *internalformat_param = NULL, *width_param = NULL, *height_param = NULL, *depth_param = NULL, _0, _1, _2, _3, _4, _5, _6;
	zend_long handle, target, levels, internalformat, width, height, depth;

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
		Z_PARAM_LONG(levels)
		Z_PARAM_LONG(internalformat)
		Z_PARAM_LONG(width)
		Z_PARAM_LONG(height)
		Z_PARAM_LONG(depth)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(7, 0, &handle_param, &target_param, &levels_param, &internalformat_param, &width_param, &height_param, &depth_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, target);
	ZVAL_LONG(&_2, levels);
	ZVAL_LONG(&_3, internalformat);
	ZVAL_LONG(&_4, width);
	ZVAL_LONG(&_5, height);
	ZVAL_LONG(&_6, depth);
	phpqt_qopenglextrafunctions_gl_tex_storage3_d(&_0, &_1, &_2, &_3, &_4, &_5, &_6);
}

PHP_METHOD(Qt_Gui_QOpenGLExtraFunctions_QOpenGLExtraFunctions, glGetInternalformativ)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, *target_param = NULL, *internalformat_param = NULL, *pname_param = NULL, *bufSize_param = NULL, *params = NULL, params_sub, result, _0, _1, _2, _3, _4;
	zend_long handle, target, internalformat, pname, bufSize;

	ZVAL_UNDEF(&params_sub);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZEND_PARSE_PARAMETERS_START(6, 6)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(target)
		Z_PARAM_LONG(internalformat)
		Z_PARAM_LONG(pname)
		Z_PARAM_LONG(bufSize)
		Z_PARAM_ZVAL(params)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 6, 0, &handle_param, &target_param, &internalformat_param, &pname_param, &bufSize_param, &params);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, target);
	ZVAL_LONG(&_2, internalformat);
	ZVAL_LONG(&_3, pname);
	ZVAL_LONG(&_4, bufSize);
	phpqt_qopenglextrafunctions_gl_get_internalformativ(&result, &_0, &_1, &_2, &_3, &_4, params);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QOpenGLExtraFunctions_QOpenGLExtraFunctions, glDispatchCompute)
{
	zval *handle_param = NULL, *num_groups_x_param = NULL, *num_groups_y_param = NULL, *num_groups_z_param = NULL, _0, _1, _2, _3;
	zend_long handle, num_groups_x, num_groups_y, num_groups_z;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(num_groups_x)
		Z_PARAM_LONG(num_groups_y)
		Z_PARAM_LONG(num_groups_z)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 0, &handle_param, &num_groups_x_param, &num_groups_y_param, &num_groups_z_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, num_groups_x);
	ZVAL_LONG(&_2, num_groups_y);
	ZVAL_LONG(&_3, num_groups_z);
	phpqt_qopenglextrafunctions_gl_dispatch_compute(&_0, &_1, &_2, &_3);
}

PHP_METHOD(Qt_Gui_QOpenGLExtraFunctions_QOpenGLExtraFunctions, glDispatchComputeIndirect)
{
	zval *handle_param = NULL, *indirect_param = NULL, _0, _1;
	zend_long handle, indirect;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(indirect)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &indirect_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, indirect);
	phpqt_qopenglextrafunctions_gl_dispatch_compute_indirect(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QOpenGLExtraFunctions_QOpenGLExtraFunctions, glFramebufferParameteri)
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
	phpqt_qopenglextrafunctions_gl_framebuffer_parameteri(&_0, &_1, &_2, &_3);
}

PHP_METHOD(Qt_Gui_QOpenGLExtraFunctions_QOpenGLExtraFunctions, glGetFramebufferParameteriv)
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
	phpqt_qopenglextrafunctions_gl_get_framebuffer_parameteriv(&result, &_0, &_1, &_2, params);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QOpenGLExtraFunctions_QOpenGLExtraFunctions, glGetProgramInterfaceiv)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, *program_param = NULL, *programInterface_param = NULL, *pname_param = NULL, *params = NULL, params_sub, result, _0, _1, _2, _3;
	zend_long handle, program, programInterface, pname;

	ZVAL_UNDEF(&params_sub);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(5, 5)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(program)
		Z_PARAM_LONG(programInterface)
		Z_PARAM_LONG(pname)
		Z_PARAM_ZVAL(params)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 5, 0, &handle_param, &program_param, &programInterface_param, &pname_param, &params);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, program);
	ZVAL_LONG(&_2, programInterface);
	ZVAL_LONG(&_3, pname);
	phpqt_qopenglextrafunctions_gl_get_program_interfaceiv(&result, &_0, &_1, &_2, &_3, params);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QOpenGLExtraFunctions_QOpenGLExtraFunctions, glGetProgramResourceIndex)
{
	zval *handle_param = NULL, *program_param = NULL, *programInterface_param = NULL, *name = NULL, name_sub, _0, _1, _2;
	zend_long handle, program, programInterface;

	ZVAL_UNDEF(&name_sub);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(program)
		Z_PARAM_LONG(programInterface)
		Z_PARAM_ZVAL(name)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 0, &handle_param, &program_param, &programInterface_param, &name);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, program);
	ZVAL_LONG(&_2, programInterface);
	RETURN_LONG(phpqt_qopenglextrafunctions_gl_get_program_resource_index(&_0, &_1, &_2, name));
}

PHP_METHOD(Qt_Gui_QOpenGLExtraFunctions_QOpenGLExtraFunctions, glGetProgramResourceiv)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, *program_param = NULL, *programInterface_param = NULL, *index_param = NULL, *propCount_param = NULL, *props = NULL, props_sub, *bufSize_param = NULL, *length = NULL, length_sub, *params = NULL, params_sub, result, _0, _1, _2, _3, _4, _5;
	zend_long handle, program, programInterface, index, propCount, bufSize;

	ZVAL_UNDEF(&props_sub);
	ZVAL_UNDEF(&length_sub);
	ZVAL_UNDEF(&params_sub);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_5);
	ZEND_PARSE_PARAMETERS_START(9, 9)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(program)
		Z_PARAM_LONG(programInterface)
		Z_PARAM_LONG(index)
		Z_PARAM_LONG(propCount)
		Z_PARAM_ZVAL(props)
		Z_PARAM_LONG(bufSize)
		Z_PARAM_ZVAL(length)
		Z_PARAM_ZVAL(params)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 9, 0, &handle_param, &program_param, &programInterface_param, &index_param, &propCount_param, &props, &bufSize_param, &length, &params);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, program);
	ZVAL_LONG(&_2, programInterface);
	ZVAL_LONG(&_3, index);
	ZVAL_LONG(&_4, propCount);
	ZVAL_LONG(&_5, bufSize);
	phpqt_qopenglextrafunctions_gl_get_program_resourceiv(&result, &_0, &_1, &_2, &_3, &_4, props, &_5, length, params);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QOpenGLExtraFunctions_QOpenGLExtraFunctions, glGetProgramResourceLocation)
{
	zval *handle_param = NULL, *program_param = NULL, *programInterface_param = NULL, *name = NULL, name_sub, _0, _1, _2;
	zend_long handle, program, programInterface;

	ZVAL_UNDEF(&name_sub);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(program)
		Z_PARAM_LONG(programInterface)
		Z_PARAM_ZVAL(name)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 0, &handle_param, &program_param, &programInterface_param, &name);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, program);
	ZVAL_LONG(&_2, programInterface);
	RETURN_LONG(phpqt_qopenglextrafunctions_gl_get_program_resource_location(&_0, &_1, &_2, name));
}

PHP_METHOD(Qt_Gui_QOpenGLExtraFunctions_QOpenGLExtraFunctions, glUseProgramStages)
{
	zval *handle_param = NULL, *pipeline_param = NULL, *stages_param = NULL, *program_param = NULL, _0, _1, _2, _3;
	zend_long handle, pipeline, stages, program;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(pipeline)
		Z_PARAM_LONG(stages)
		Z_PARAM_LONG(program)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 0, &handle_param, &pipeline_param, &stages_param, &program_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, pipeline);
	ZVAL_LONG(&_2, stages);
	ZVAL_LONG(&_3, program);
	phpqt_qopenglextrafunctions_gl_use_program_stages(&_0, &_1, &_2, &_3);
}

PHP_METHOD(Qt_Gui_QOpenGLExtraFunctions_QOpenGLExtraFunctions, glActiveShaderProgram)
{
	zval *handle_param = NULL, *pipeline_param = NULL, *program_param = NULL, _0, _1, _2;
	zend_long handle, pipeline, program;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(pipeline)
		Z_PARAM_LONG(program)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &pipeline_param, &program_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, pipeline);
	ZVAL_LONG(&_2, program);
	phpqt_qopenglextrafunctions_gl_active_shader_program(&_0, &_1, &_2);
}

PHP_METHOD(Qt_Gui_QOpenGLExtraFunctions_QOpenGLExtraFunctions, glBindProgramPipeline)
{
	zval *handle_param = NULL, *pipeline_param = NULL, _0, _1;
	zend_long handle, pipeline;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(pipeline)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &pipeline_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, pipeline);
	phpqt_qopenglextrafunctions_gl_bind_program_pipeline(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QOpenGLExtraFunctions_QOpenGLExtraFunctions, glDeleteProgramPipelines)
{
	zval *handle_param = NULL, *n_param = NULL, *pipelines = NULL, pipelines_sub, _0, _1;
	zend_long handle, n;

	ZVAL_UNDEF(&pipelines_sub);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(n)
		Z_PARAM_ZVAL(pipelines)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &n_param, &pipelines);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, n);
	phpqt_qopenglextrafunctions_gl_delete_program_pipelines(&_0, &_1, pipelines);
}

PHP_METHOD(Qt_Gui_QOpenGLExtraFunctions_QOpenGLExtraFunctions, glGenProgramPipelines)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, *n_param = NULL, *pipelines = NULL, pipelines_sub, result, _0, _1;
	zend_long handle, n;

	ZVAL_UNDEF(&pipelines_sub);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(n)
		Z_PARAM_ZVAL(pipelines)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 3, 0, &handle_param, &n_param, &pipelines);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, n);
	phpqt_qopenglextrafunctions_gl_gen_program_pipelines(&result, &_0, &_1, pipelines);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QOpenGLExtraFunctions_QOpenGLExtraFunctions, glIsProgramPipeline)
{
	zval *handle_param = NULL, *pipeline_param = NULL, _0, _1;
	zend_long handle, pipeline;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(pipeline)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &pipeline_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, pipeline);
	RETURN_LONG(phpqt_qopenglextrafunctions_gl_is_program_pipeline(&_0, &_1));
}

PHP_METHOD(Qt_Gui_QOpenGLExtraFunctions_QOpenGLExtraFunctions, glGetProgramPipelineiv)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, *pipeline_param = NULL, *pname_param = NULL, *params = NULL, params_sub, result, _0, _1, _2;
	zend_long handle, pipeline, pname;

	ZVAL_UNDEF(&params_sub);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(pipeline)
		Z_PARAM_LONG(pname)
		Z_PARAM_ZVAL(params)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 4, 0, &handle_param, &pipeline_param, &pname_param, &params);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, pipeline);
	ZVAL_LONG(&_2, pname);
	phpqt_qopenglextrafunctions_gl_get_program_pipelineiv(&result, &_0, &_1, &_2, params);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QOpenGLExtraFunctions_QOpenGLExtraFunctions, glProgramUniform1i)
{
	zval *handle_param = NULL, *program_param = NULL, *location_param = NULL, *v0_param = NULL, _0, _1, _2, _3;
	zend_long handle, program, location, v0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(program)
		Z_PARAM_LONG(location)
		Z_PARAM_LONG(v0)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 0, &handle_param, &program_param, &location_param, &v0_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, program);
	ZVAL_LONG(&_2, location);
	ZVAL_LONG(&_3, v0);
	phpqt_qopenglextrafunctions_gl_program_uniform1i(&_0, &_1, &_2, &_3);
}

PHP_METHOD(Qt_Gui_QOpenGLExtraFunctions_QOpenGLExtraFunctions, glProgramUniform2i)
{
	zval *handle_param = NULL, *program_param = NULL, *location_param = NULL, *v0_param = NULL, *v1_param = NULL, _0, _1, _2, _3, _4;
	zend_long handle, program, location, v0, v1;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZEND_PARSE_PARAMETERS_START(5, 5)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(program)
		Z_PARAM_LONG(location)
		Z_PARAM_LONG(v0)
		Z_PARAM_LONG(v1)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(5, 0, &handle_param, &program_param, &location_param, &v0_param, &v1_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, program);
	ZVAL_LONG(&_2, location);
	ZVAL_LONG(&_3, v0);
	ZVAL_LONG(&_4, v1);
	phpqt_qopenglextrafunctions_gl_program_uniform2i(&_0, &_1, &_2, &_3, &_4);
}

PHP_METHOD(Qt_Gui_QOpenGLExtraFunctions_QOpenGLExtraFunctions, glProgramUniform3i)
{
	zval *handle_param = NULL, *program_param = NULL, *location_param = NULL, *v0_param = NULL, *v1_param = NULL, *v2_param = NULL, _0, _1, _2, _3, _4, _5;
	zend_long handle, program, location, v0, v1, v2;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_5);
	ZEND_PARSE_PARAMETERS_START(6, 6)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(program)
		Z_PARAM_LONG(location)
		Z_PARAM_LONG(v0)
		Z_PARAM_LONG(v1)
		Z_PARAM_LONG(v2)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(6, 0, &handle_param, &program_param, &location_param, &v0_param, &v1_param, &v2_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, program);
	ZVAL_LONG(&_2, location);
	ZVAL_LONG(&_3, v0);
	ZVAL_LONG(&_4, v1);
	ZVAL_LONG(&_5, v2);
	phpqt_qopenglextrafunctions_gl_program_uniform3i(&_0, &_1, &_2, &_3, &_4, &_5);
}

PHP_METHOD(Qt_Gui_QOpenGLExtraFunctions_QOpenGLExtraFunctions, glProgramUniform4i)
{
	zval *handle_param = NULL, *program_param = NULL, *location_param = NULL, *v0_param = NULL, *v1_param = NULL, *v2_param = NULL, *v3_param = NULL, _0, _1, _2, _3, _4, _5, _6;
	zend_long handle, program, location, v0, v1, v2, v3;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_5);
	ZVAL_UNDEF(&_6);
	ZEND_PARSE_PARAMETERS_START(7, 7)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(program)
		Z_PARAM_LONG(location)
		Z_PARAM_LONG(v0)
		Z_PARAM_LONG(v1)
		Z_PARAM_LONG(v2)
		Z_PARAM_LONG(v3)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(7, 0, &handle_param, &program_param, &location_param, &v0_param, &v1_param, &v2_param, &v3_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, program);
	ZVAL_LONG(&_2, location);
	ZVAL_LONG(&_3, v0);
	ZVAL_LONG(&_4, v1);
	ZVAL_LONG(&_5, v2);
	ZVAL_LONG(&_6, v3);
	phpqt_qopenglextrafunctions_gl_program_uniform4i(&_0, &_1, &_2, &_3, &_4, &_5, &_6);
}

PHP_METHOD(Qt_Gui_QOpenGLExtraFunctions_QOpenGLExtraFunctions, glProgramUniform1ui)
{
	zval *handle_param = NULL, *program_param = NULL, *location_param = NULL, *v0_param = NULL, _0, _1, _2, _3;
	zend_long handle, program, location, v0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(program)
		Z_PARAM_LONG(location)
		Z_PARAM_LONG(v0)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 0, &handle_param, &program_param, &location_param, &v0_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, program);
	ZVAL_LONG(&_2, location);
	ZVAL_LONG(&_3, v0);
	phpqt_qopenglextrafunctions_gl_program_uniform1ui(&_0, &_1, &_2, &_3);
}

PHP_METHOD(Qt_Gui_QOpenGLExtraFunctions_QOpenGLExtraFunctions, glProgramUniform2ui)
{
	zval *handle_param = NULL, *program_param = NULL, *location_param = NULL, *v0_param = NULL, *v1_param = NULL, _0, _1, _2, _3, _4;
	zend_long handle, program, location, v0, v1;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZEND_PARSE_PARAMETERS_START(5, 5)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(program)
		Z_PARAM_LONG(location)
		Z_PARAM_LONG(v0)
		Z_PARAM_LONG(v1)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(5, 0, &handle_param, &program_param, &location_param, &v0_param, &v1_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, program);
	ZVAL_LONG(&_2, location);
	ZVAL_LONG(&_3, v0);
	ZVAL_LONG(&_4, v1);
	phpqt_qopenglextrafunctions_gl_program_uniform2ui(&_0, &_1, &_2, &_3, &_4);
}

PHP_METHOD(Qt_Gui_QOpenGLExtraFunctions_QOpenGLExtraFunctions, glProgramUniform3ui)
{
	zval *handle_param = NULL, *program_param = NULL, *location_param = NULL, *v0_param = NULL, *v1_param = NULL, *v2_param = NULL, _0, _1, _2, _3, _4, _5;
	zend_long handle, program, location, v0, v1, v2;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_5);
	ZEND_PARSE_PARAMETERS_START(6, 6)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(program)
		Z_PARAM_LONG(location)
		Z_PARAM_LONG(v0)
		Z_PARAM_LONG(v1)
		Z_PARAM_LONG(v2)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(6, 0, &handle_param, &program_param, &location_param, &v0_param, &v1_param, &v2_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, program);
	ZVAL_LONG(&_2, location);
	ZVAL_LONG(&_3, v0);
	ZVAL_LONG(&_4, v1);
	ZVAL_LONG(&_5, v2);
	phpqt_qopenglextrafunctions_gl_program_uniform3ui(&_0, &_1, &_2, &_3, &_4, &_5);
}

PHP_METHOD(Qt_Gui_QOpenGLExtraFunctions_QOpenGLExtraFunctions, glProgramUniform4ui)
{
	zval *handle_param = NULL, *program_param = NULL, *location_param = NULL, *v0_param = NULL, *v1_param = NULL, *v2_param = NULL, *v3_param = NULL, _0, _1, _2, _3, _4, _5, _6;
	zend_long handle, program, location, v0, v1, v2, v3;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_5);
	ZVAL_UNDEF(&_6);
	ZEND_PARSE_PARAMETERS_START(7, 7)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(program)
		Z_PARAM_LONG(location)
		Z_PARAM_LONG(v0)
		Z_PARAM_LONG(v1)
		Z_PARAM_LONG(v2)
		Z_PARAM_LONG(v3)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(7, 0, &handle_param, &program_param, &location_param, &v0_param, &v1_param, &v2_param, &v3_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, program);
	ZVAL_LONG(&_2, location);
	ZVAL_LONG(&_3, v0);
	ZVAL_LONG(&_4, v1);
	ZVAL_LONG(&_5, v2);
	ZVAL_LONG(&_6, v3);
	phpqt_qopenglextrafunctions_gl_program_uniform4ui(&_0, &_1, &_2, &_3, &_4, &_5, &_6);
}

PHP_METHOD(Qt_Gui_QOpenGLExtraFunctions_QOpenGLExtraFunctions, glProgramUniform1f)
{
	double v0;
	zval *handle_param = NULL, *program_param = NULL, *location_param = NULL, *v0_param = NULL, _0, _1, _2, _3;
	zend_long handle, program, location;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(program)
		Z_PARAM_LONG(location)
		Z_PARAM_ZVAL(v0)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 0, &handle_param, &program_param, &location_param, &v0_param);
	v0 = zephir_get_doubleval(v0_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, program);
	ZVAL_LONG(&_2, location);
	ZVAL_DOUBLE(&_3, v0);
	phpqt_qopenglextrafunctions_gl_program_uniform1f(&_0, &_1, &_2, &_3);
}

PHP_METHOD(Qt_Gui_QOpenGLExtraFunctions_QOpenGLExtraFunctions, glProgramUniform2f)
{
	double v0, v1;
	zval *handle_param = NULL, *program_param = NULL, *location_param = NULL, *v0_param = NULL, *v1_param = NULL, _0, _1, _2, _3, _4;
	zend_long handle, program, location;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZEND_PARSE_PARAMETERS_START(5, 5)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(program)
		Z_PARAM_LONG(location)
		Z_PARAM_ZVAL(v0)
		Z_PARAM_ZVAL(v1)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(5, 0, &handle_param, &program_param, &location_param, &v0_param, &v1_param);
	v0 = zephir_get_doubleval(v0_param);
	v1 = zephir_get_doubleval(v1_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, program);
	ZVAL_LONG(&_2, location);
	ZVAL_DOUBLE(&_3, v0);
	ZVAL_DOUBLE(&_4, v1);
	phpqt_qopenglextrafunctions_gl_program_uniform2f(&_0, &_1, &_2, &_3, &_4);
}

PHP_METHOD(Qt_Gui_QOpenGLExtraFunctions_QOpenGLExtraFunctions, glProgramUniform3f)
{
	double v0, v1, v2;
	zval *handle_param = NULL, *program_param = NULL, *location_param = NULL, *v0_param = NULL, *v1_param = NULL, *v2_param = NULL, _0, _1, _2, _3, _4, _5;
	zend_long handle, program, location;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_5);
	ZEND_PARSE_PARAMETERS_START(6, 6)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(program)
		Z_PARAM_LONG(location)
		Z_PARAM_ZVAL(v0)
		Z_PARAM_ZVAL(v1)
		Z_PARAM_ZVAL(v2)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(6, 0, &handle_param, &program_param, &location_param, &v0_param, &v1_param, &v2_param);
	v0 = zephir_get_doubleval(v0_param);
	v1 = zephir_get_doubleval(v1_param);
	v2 = zephir_get_doubleval(v2_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, program);
	ZVAL_LONG(&_2, location);
	ZVAL_DOUBLE(&_3, v0);
	ZVAL_DOUBLE(&_4, v1);
	ZVAL_DOUBLE(&_5, v2);
	phpqt_qopenglextrafunctions_gl_program_uniform3f(&_0, &_1, &_2, &_3, &_4, &_5);
}

PHP_METHOD(Qt_Gui_QOpenGLExtraFunctions_QOpenGLExtraFunctions, glProgramUniform4f)
{
	double v0, v1, v2, v3;
	zval *handle_param = NULL, *program_param = NULL, *location_param = NULL, *v0_param = NULL, *v1_param = NULL, *v2_param = NULL, *v3_param = NULL, _0, _1, _2, _3, _4, _5, _6;
	zend_long handle, program, location;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_5);
	ZVAL_UNDEF(&_6);
	ZEND_PARSE_PARAMETERS_START(7, 7)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(program)
		Z_PARAM_LONG(location)
		Z_PARAM_ZVAL(v0)
		Z_PARAM_ZVAL(v1)
		Z_PARAM_ZVAL(v2)
		Z_PARAM_ZVAL(v3)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(7, 0, &handle_param, &program_param, &location_param, &v0_param, &v1_param, &v2_param, &v3_param);
	v0 = zephir_get_doubleval(v0_param);
	v1 = zephir_get_doubleval(v1_param);
	v2 = zephir_get_doubleval(v2_param);
	v3 = zephir_get_doubleval(v3_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, program);
	ZVAL_LONG(&_2, location);
	ZVAL_DOUBLE(&_3, v0);
	ZVAL_DOUBLE(&_4, v1);
	ZVAL_DOUBLE(&_5, v2);
	ZVAL_DOUBLE(&_6, v3);
	phpqt_qopenglextrafunctions_gl_program_uniform4f(&_0, &_1, &_2, &_3, &_4, &_5, &_6);
}

PHP_METHOD(Qt_Gui_QOpenGLExtraFunctions_QOpenGLExtraFunctions, glProgramUniform1iv)
{
	zval *handle_param = NULL, *program_param = NULL, *location_param = NULL, *count_param = NULL, *value = NULL, value_sub, _0, _1, _2, _3;
	zend_long handle, program, location, count;

	ZVAL_UNDEF(&value_sub);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(5, 5)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(program)
		Z_PARAM_LONG(location)
		Z_PARAM_LONG(count)
		Z_PARAM_ZVAL(value)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(5, 0, &handle_param, &program_param, &location_param, &count_param, &value);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, program);
	ZVAL_LONG(&_2, location);
	ZVAL_LONG(&_3, count);
	phpqt_qopenglextrafunctions_gl_program_uniform1iv(&_0, &_1, &_2, &_3, value);
}

PHP_METHOD(Qt_Gui_QOpenGLExtraFunctions_QOpenGLExtraFunctions, glProgramUniform2iv)
{
	zval *handle_param = NULL, *program_param = NULL, *location_param = NULL, *count_param = NULL, *value = NULL, value_sub, _0, _1, _2, _3;
	zend_long handle, program, location, count;

	ZVAL_UNDEF(&value_sub);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(5, 5)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(program)
		Z_PARAM_LONG(location)
		Z_PARAM_LONG(count)
		Z_PARAM_ZVAL(value)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(5, 0, &handle_param, &program_param, &location_param, &count_param, &value);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, program);
	ZVAL_LONG(&_2, location);
	ZVAL_LONG(&_3, count);
	phpqt_qopenglextrafunctions_gl_program_uniform2iv(&_0, &_1, &_2, &_3, value);
}

PHP_METHOD(Qt_Gui_QOpenGLExtraFunctions_QOpenGLExtraFunctions, glProgramUniform3iv)
{
	zval *handle_param = NULL, *program_param = NULL, *location_param = NULL, *count_param = NULL, *value = NULL, value_sub, _0, _1, _2, _3;
	zend_long handle, program, location, count;

	ZVAL_UNDEF(&value_sub);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(5, 5)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(program)
		Z_PARAM_LONG(location)
		Z_PARAM_LONG(count)
		Z_PARAM_ZVAL(value)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(5, 0, &handle_param, &program_param, &location_param, &count_param, &value);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, program);
	ZVAL_LONG(&_2, location);
	ZVAL_LONG(&_3, count);
	phpqt_qopenglextrafunctions_gl_program_uniform3iv(&_0, &_1, &_2, &_3, value);
}

PHP_METHOD(Qt_Gui_QOpenGLExtraFunctions_QOpenGLExtraFunctions, glProgramUniform4iv)
{
	zval *handle_param = NULL, *program_param = NULL, *location_param = NULL, *count_param = NULL, *value = NULL, value_sub, _0, _1, _2, _3;
	zend_long handle, program, location, count;

	ZVAL_UNDEF(&value_sub);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(5, 5)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(program)
		Z_PARAM_LONG(location)
		Z_PARAM_LONG(count)
		Z_PARAM_ZVAL(value)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(5, 0, &handle_param, &program_param, &location_param, &count_param, &value);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, program);
	ZVAL_LONG(&_2, location);
	ZVAL_LONG(&_3, count);
	phpqt_qopenglextrafunctions_gl_program_uniform4iv(&_0, &_1, &_2, &_3, value);
}

PHP_METHOD(Qt_Gui_QOpenGLExtraFunctions_QOpenGLExtraFunctions, glProgramUniform1uiv)
{
	zval *handle_param = NULL, *program_param = NULL, *location_param = NULL, *count_param = NULL, *value = NULL, value_sub, _0, _1, _2, _3;
	zend_long handle, program, location, count;

	ZVAL_UNDEF(&value_sub);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(5, 5)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(program)
		Z_PARAM_LONG(location)
		Z_PARAM_LONG(count)
		Z_PARAM_ZVAL(value)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(5, 0, &handle_param, &program_param, &location_param, &count_param, &value);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, program);
	ZVAL_LONG(&_2, location);
	ZVAL_LONG(&_3, count);
	phpqt_qopenglextrafunctions_gl_program_uniform1uiv(&_0, &_1, &_2, &_3, value);
}

PHP_METHOD(Qt_Gui_QOpenGLExtraFunctions_QOpenGLExtraFunctions, glProgramUniform2uiv)
{
	zval *handle_param = NULL, *program_param = NULL, *location_param = NULL, *count_param = NULL, *value = NULL, value_sub, _0, _1, _2, _3;
	zend_long handle, program, location, count;

	ZVAL_UNDEF(&value_sub);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(5, 5)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(program)
		Z_PARAM_LONG(location)
		Z_PARAM_LONG(count)
		Z_PARAM_ZVAL(value)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(5, 0, &handle_param, &program_param, &location_param, &count_param, &value);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, program);
	ZVAL_LONG(&_2, location);
	ZVAL_LONG(&_3, count);
	phpqt_qopenglextrafunctions_gl_program_uniform2uiv(&_0, &_1, &_2, &_3, value);
}

PHP_METHOD(Qt_Gui_QOpenGLExtraFunctions_QOpenGLExtraFunctions, glProgramUniform3uiv)
{
	zval *handle_param = NULL, *program_param = NULL, *location_param = NULL, *count_param = NULL, *value = NULL, value_sub, _0, _1, _2, _3;
	zend_long handle, program, location, count;

	ZVAL_UNDEF(&value_sub);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(5, 5)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(program)
		Z_PARAM_LONG(location)
		Z_PARAM_LONG(count)
		Z_PARAM_ZVAL(value)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(5, 0, &handle_param, &program_param, &location_param, &count_param, &value);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, program);
	ZVAL_LONG(&_2, location);
	ZVAL_LONG(&_3, count);
	phpqt_qopenglextrafunctions_gl_program_uniform3uiv(&_0, &_1, &_2, &_3, value);
}

PHP_METHOD(Qt_Gui_QOpenGLExtraFunctions_QOpenGLExtraFunctions, glProgramUniform4uiv)
{
	zval *handle_param = NULL, *program_param = NULL, *location_param = NULL, *count_param = NULL, *value = NULL, value_sub, _0, _1, _2, _3;
	zend_long handle, program, location, count;

	ZVAL_UNDEF(&value_sub);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(5, 5)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(program)
		Z_PARAM_LONG(location)
		Z_PARAM_LONG(count)
		Z_PARAM_ZVAL(value)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(5, 0, &handle_param, &program_param, &location_param, &count_param, &value);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, program);
	ZVAL_LONG(&_2, location);
	ZVAL_LONG(&_3, count);
	phpqt_qopenglextrafunctions_gl_program_uniform4uiv(&_0, &_1, &_2, &_3, value);
}

PHP_METHOD(Qt_Gui_QOpenGLExtraFunctions_QOpenGLExtraFunctions, glProgramUniform1fv)
{
	zval *handle_param = NULL, *program_param = NULL, *location_param = NULL, *count_param = NULL, *value = NULL, value_sub, _0, _1, _2, _3;
	zend_long handle, program, location, count;

	ZVAL_UNDEF(&value_sub);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(5, 5)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(program)
		Z_PARAM_LONG(location)
		Z_PARAM_LONG(count)
		Z_PARAM_ZVAL(value)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(5, 0, &handle_param, &program_param, &location_param, &count_param, &value);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, program);
	ZVAL_LONG(&_2, location);
	ZVAL_LONG(&_3, count);
	phpqt_qopenglextrafunctions_gl_program_uniform1fv(&_0, &_1, &_2, &_3, value);
}

PHP_METHOD(Qt_Gui_QOpenGLExtraFunctions_QOpenGLExtraFunctions, glProgramUniform2fv)
{
	zval *handle_param = NULL, *program_param = NULL, *location_param = NULL, *count_param = NULL, *value = NULL, value_sub, _0, _1, _2, _3;
	zend_long handle, program, location, count;

	ZVAL_UNDEF(&value_sub);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(5, 5)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(program)
		Z_PARAM_LONG(location)
		Z_PARAM_LONG(count)
		Z_PARAM_ZVAL(value)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(5, 0, &handle_param, &program_param, &location_param, &count_param, &value);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, program);
	ZVAL_LONG(&_2, location);
	ZVAL_LONG(&_3, count);
	phpqt_qopenglextrafunctions_gl_program_uniform2fv(&_0, &_1, &_2, &_3, value);
}

PHP_METHOD(Qt_Gui_QOpenGLExtraFunctions_QOpenGLExtraFunctions, glProgramUniform3fv)
{
	zval *handle_param = NULL, *program_param = NULL, *location_param = NULL, *count_param = NULL, *value = NULL, value_sub, _0, _1, _2, _3;
	zend_long handle, program, location, count;

	ZVAL_UNDEF(&value_sub);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(5, 5)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(program)
		Z_PARAM_LONG(location)
		Z_PARAM_LONG(count)
		Z_PARAM_ZVAL(value)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(5, 0, &handle_param, &program_param, &location_param, &count_param, &value);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, program);
	ZVAL_LONG(&_2, location);
	ZVAL_LONG(&_3, count);
	phpqt_qopenglextrafunctions_gl_program_uniform3fv(&_0, &_1, &_2, &_3, value);
}

PHP_METHOD(Qt_Gui_QOpenGLExtraFunctions_QOpenGLExtraFunctions, glProgramUniform4fv)
{
	zval *handle_param = NULL, *program_param = NULL, *location_param = NULL, *count_param = NULL, *value = NULL, value_sub, _0, _1, _2, _3;
	zend_long handle, program, location, count;

	ZVAL_UNDEF(&value_sub);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(5, 5)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(program)
		Z_PARAM_LONG(location)
		Z_PARAM_LONG(count)
		Z_PARAM_ZVAL(value)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(5, 0, &handle_param, &program_param, &location_param, &count_param, &value);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, program);
	ZVAL_LONG(&_2, location);
	ZVAL_LONG(&_3, count);
	phpqt_qopenglextrafunctions_gl_program_uniform4fv(&_0, &_1, &_2, &_3, value);
}

PHP_METHOD(Qt_Gui_QOpenGLExtraFunctions_QOpenGLExtraFunctions, glProgramUniformMatrix2fv)
{
	zval *handle_param = NULL, *program_param = NULL, *location_param = NULL, *count_param = NULL, *transpose_param = NULL, *value = NULL, value_sub, _0, _1, _2, _3, _4;
	zend_long handle, program, location, count, transpose;

	ZVAL_UNDEF(&value_sub);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZEND_PARSE_PARAMETERS_START(6, 6)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(program)
		Z_PARAM_LONG(location)
		Z_PARAM_LONG(count)
		Z_PARAM_LONG(transpose)
		Z_PARAM_ZVAL(value)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(6, 0, &handle_param, &program_param, &location_param, &count_param, &transpose_param, &value);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, program);
	ZVAL_LONG(&_2, location);
	ZVAL_LONG(&_3, count);
	ZVAL_LONG(&_4, transpose);
	phpqt_qopenglextrafunctions_gl_program_uniform_matrix2fv(&_0, &_1, &_2, &_3, &_4, value);
}

PHP_METHOD(Qt_Gui_QOpenGLExtraFunctions_QOpenGLExtraFunctions, glProgramUniformMatrix3fv)
{
	zval *handle_param = NULL, *program_param = NULL, *location_param = NULL, *count_param = NULL, *transpose_param = NULL, *value = NULL, value_sub, _0, _1, _2, _3, _4;
	zend_long handle, program, location, count, transpose;

	ZVAL_UNDEF(&value_sub);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZEND_PARSE_PARAMETERS_START(6, 6)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(program)
		Z_PARAM_LONG(location)
		Z_PARAM_LONG(count)
		Z_PARAM_LONG(transpose)
		Z_PARAM_ZVAL(value)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(6, 0, &handle_param, &program_param, &location_param, &count_param, &transpose_param, &value);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, program);
	ZVAL_LONG(&_2, location);
	ZVAL_LONG(&_3, count);
	ZVAL_LONG(&_4, transpose);
	phpqt_qopenglextrafunctions_gl_program_uniform_matrix3fv(&_0, &_1, &_2, &_3, &_4, value);
}

PHP_METHOD(Qt_Gui_QOpenGLExtraFunctions_QOpenGLExtraFunctions, glProgramUniformMatrix4fv)
{
	zval *handle_param = NULL, *program_param = NULL, *location_param = NULL, *count_param = NULL, *transpose_param = NULL, *value = NULL, value_sub, _0, _1, _2, _3, _4;
	zend_long handle, program, location, count, transpose;

	ZVAL_UNDEF(&value_sub);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZEND_PARSE_PARAMETERS_START(6, 6)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(program)
		Z_PARAM_LONG(location)
		Z_PARAM_LONG(count)
		Z_PARAM_LONG(transpose)
		Z_PARAM_ZVAL(value)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(6, 0, &handle_param, &program_param, &location_param, &count_param, &transpose_param, &value);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, program);
	ZVAL_LONG(&_2, location);
	ZVAL_LONG(&_3, count);
	ZVAL_LONG(&_4, transpose);
	phpqt_qopenglextrafunctions_gl_program_uniform_matrix4fv(&_0, &_1, &_2, &_3, &_4, value);
}

PHP_METHOD(Qt_Gui_QOpenGLExtraFunctions_QOpenGLExtraFunctions, glProgramUniformMatrix2x3fv)
{
	zval *handle_param = NULL, *program_param = NULL, *location_param = NULL, *count_param = NULL, *transpose_param = NULL, *value = NULL, value_sub, _0, _1, _2, _3, _4;
	zend_long handle, program, location, count, transpose;

	ZVAL_UNDEF(&value_sub);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZEND_PARSE_PARAMETERS_START(6, 6)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(program)
		Z_PARAM_LONG(location)
		Z_PARAM_LONG(count)
		Z_PARAM_LONG(transpose)
		Z_PARAM_ZVAL(value)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(6, 0, &handle_param, &program_param, &location_param, &count_param, &transpose_param, &value);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, program);
	ZVAL_LONG(&_2, location);
	ZVAL_LONG(&_3, count);
	ZVAL_LONG(&_4, transpose);
	phpqt_qopenglextrafunctions_gl_program_uniform_matrix2x3fv(&_0, &_1, &_2, &_3, &_4, value);
}

PHP_METHOD(Qt_Gui_QOpenGLExtraFunctions_QOpenGLExtraFunctions, glProgramUniformMatrix3x2fv)
{
	zval *handle_param = NULL, *program_param = NULL, *location_param = NULL, *count_param = NULL, *transpose_param = NULL, *value = NULL, value_sub, _0, _1, _2, _3, _4;
	zend_long handle, program, location, count, transpose;

	ZVAL_UNDEF(&value_sub);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZEND_PARSE_PARAMETERS_START(6, 6)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(program)
		Z_PARAM_LONG(location)
		Z_PARAM_LONG(count)
		Z_PARAM_LONG(transpose)
		Z_PARAM_ZVAL(value)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(6, 0, &handle_param, &program_param, &location_param, &count_param, &transpose_param, &value);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, program);
	ZVAL_LONG(&_2, location);
	ZVAL_LONG(&_3, count);
	ZVAL_LONG(&_4, transpose);
	phpqt_qopenglextrafunctions_gl_program_uniform_matrix3x2fv(&_0, &_1, &_2, &_3, &_4, value);
}

PHP_METHOD(Qt_Gui_QOpenGLExtraFunctions_QOpenGLExtraFunctions, glProgramUniformMatrix2x4fv)
{
	zval *handle_param = NULL, *program_param = NULL, *location_param = NULL, *count_param = NULL, *transpose_param = NULL, *value = NULL, value_sub, _0, _1, _2, _3, _4;
	zend_long handle, program, location, count, transpose;

	ZVAL_UNDEF(&value_sub);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZEND_PARSE_PARAMETERS_START(6, 6)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(program)
		Z_PARAM_LONG(location)
		Z_PARAM_LONG(count)
		Z_PARAM_LONG(transpose)
		Z_PARAM_ZVAL(value)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(6, 0, &handle_param, &program_param, &location_param, &count_param, &transpose_param, &value);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, program);
	ZVAL_LONG(&_2, location);
	ZVAL_LONG(&_3, count);
	ZVAL_LONG(&_4, transpose);
	phpqt_qopenglextrafunctions_gl_program_uniform_matrix2x4fv(&_0, &_1, &_2, &_3, &_4, value);
}

PHP_METHOD(Qt_Gui_QOpenGLExtraFunctions_QOpenGLExtraFunctions, glProgramUniformMatrix4x2fv)
{
	zval *handle_param = NULL, *program_param = NULL, *location_param = NULL, *count_param = NULL, *transpose_param = NULL, *value = NULL, value_sub, _0, _1, _2, _3, _4;
	zend_long handle, program, location, count, transpose;

	ZVAL_UNDEF(&value_sub);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZEND_PARSE_PARAMETERS_START(6, 6)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(program)
		Z_PARAM_LONG(location)
		Z_PARAM_LONG(count)
		Z_PARAM_LONG(transpose)
		Z_PARAM_ZVAL(value)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(6, 0, &handle_param, &program_param, &location_param, &count_param, &transpose_param, &value);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, program);
	ZVAL_LONG(&_2, location);
	ZVAL_LONG(&_3, count);
	ZVAL_LONG(&_4, transpose);
	phpqt_qopenglextrafunctions_gl_program_uniform_matrix4x2fv(&_0, &_1, &_2, &_3, &_4, value);
}

PHP_METHOD(Qt_Gui_QOpenGLExtraFunctions_QOpenGLExtraFunctions, glProgramUniformMatrix3x4fv)
{
	zval *handle_param = NULL, *program_param = NULL, *location_param = NULL, *count_param = NULL, *transpose_param = NULL, *value = NULL, value_sub, _0, _1, _2, _3, _4;
	zend_long handle, program, location, count, transpose;

	ZVAL_UNDEF(&value_sub);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZEND_PARSE_PARAMETERS_START(6, 6)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(program)
		Z_PARAM_LONG(location)
		Z_PARAM_LONG(count)
		Z_PARAM_LONG(transpose)
		Z_PARAM_ZVAL(value)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(6, 0, &handle_param, &program_param, &location_param, &count_param, &transpose_param, &value);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, program);
	ZVAL_LONG(&_2, location);
	ZVAL_LONG(&_3, count);
	ZVAL_LONG(&_4, transpose);
	phpqt_qopenglextrafunctions_gl_program_uniform_matrix3x4fv(&_0, &_1, &_2, &_3, &_4, value);
}

PHP_METHOD(Qt_Gui_QOpenGLExtraFunctions_QOpenGLExtraFunctions, glProgramUniformMatrix4x3fv)
{
	zval *handle_param = NULL, *program_param = NULL, *location_param = NULL, *count_param = NULL, *transpose_param = NULL, *value = NULL, value_sub, _0, _1, _2, _3, _4;
	zend_long handle, program, location, count, transpose;

	ZVAL_UNDEF(&value_sub);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZEND_PARSE_PARAMETERS_START(6, 6)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(program)
		Z_PARAM_LONG(location)
		Z_PARAM_LONG(count)
		Z_PARAM_LONG(transpose)
		Z_PARAM_ZVAL(value)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(6, 0, &handle_param, &program_param, &location_param, &count_param, &transpose_param, &value);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, program);
	ZVAL_LONG(&_2, location);
	ZVAL_LONG(&_3, count);
	ZVAL_LONG(&_4, transpose);
	phpqt_qopenglextrafunctions_gl_program_uniform_matrix4x3fv(&_0, &_1, &_2, &_3, &_4, value);
}

PHP_METHOD(Qt_Gui_QOpenGLExtraFunctions_QOpenGLExtraFunctions, glValidateProgramPipeline)
{
	zval *handle_param = NULL, *pipeline_param = NULL, _0, _1;
	zend_long handle, pipeline;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(pipeline)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &pipeline_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, pipeline);
	phpqt_qopenglextrafunctions_gl_validate_program_pipeline(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QOpenGLExtraFunctions_QOpenGLExtraFunctions, glBindImageTexture)
{
	zval *handle_param = NULL, *unit_param = NULL, *texture_param = NULL, *level_param = NULL, *layered_param = NULL, *layer_param = NULL, *access_param = NULL, *format_param = NULL, _0, _1, _2, _3, _4, _5, _6, _7;
	zend_long handle, unit, texture, level, layered, layer, access, format;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_5);
	ZVAL_UNDEF(&_6);
	ZVAL_UNDEF(&_7);
	ZEND_PARSE_PARAMETERS_START(8, 8)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(unit)
		Z_PARAM_LONG(texture)
		Z_PARAM_LONG(level)
		Z_PARAM_LONG(layered)
		Z_PARAM_LONG(layer)
		Z_PARAM_LONG(access)
		Z_PARAM_LONG(format)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(8, 0, &handle_param, &unit_param, &texture_param, &level_param, &layered_param, &layer_param, &access_param, &format_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, unit);
	ZVAL_LONG(&_2, texture);
	ZVAL_LONG(&_3, level);
	ZVAL_LONG(&_4, layered);
	ZVAL_LONG(&_5, layer);
	ZVAL_LONG(&_6, access);
	ZVAL_LONG(&_7, format);
	phpqt_qopenglextrafunctions_gl_bind_image_texture(&_0, &_1, &_2, &_3, &_4, &_5, &_6, &_7);
}

PHP_METHOD(Qt_Gui_QOpenGLExtraFunctions_QOpenGLExtraFunctions, glGetBooleani_v)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, *target_param = NULL, *index_param = NULL, *data = NULL, data_sub, result, _0, _1, _2;
	zend_long handle, target, index;

	ZVAL_UNDEF(&data_sub);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(target)
		Z_PARAM_LONG(index)
		Z_PARAM_ZVAL(data)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 4, 0, &handle_param, &target_param, &index_param, &data);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, target);
	ZVAL_LONG(&_2, index);
	phpqt_qopenglextrafunctions_gl_get_booleani_v(&result, &_0, &_1, &_2, data);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QOpenGLExtraFunctions_QOpenGLExtraFunctions, glMemoryBarrier)
{
	zval *handle_param = NULL, *barriers_param = NULL, _0, _1;
	zend_long handle, barriers;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(barriers)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &barriers_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, barriers);
	phpqt_qopenglextrafunctions_gl_memory_barrier(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QOpenGLExtraFunctions_QOpenGLExtraFunctions, glMemoryBarrierByRegion)
{
	zval *handle_param = NULL, *barriers_param = NULL, _0, _1;
	zend_long handle, barriers;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(barriers)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &barriers_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, barriers);
	phpqt_qopenglextrafunctions_gl_memory_barrier_by_region(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QOpenGLExtraFunctions_QOpenGLExtraFunctions, glTexStorage2DMultisample)
{
	zval *handle_param = NULL, *target_param = NULL, *samples_param = NULL, *internalformat_param = NULL, *width_param = NULL, *height_param = NULL, *fixedsamplelocations_param = NULL, _0, _1, _2, _3, _4, _5, _6;
	zend_long handle, target, samples, internalformat, width, height, fixedsamplelocations;

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
		Z_PARAM_LONG(samples)
		Z_PARAM_LONG(internalformat)
		Z_PARAM_LONG(width)
		Z_PARAM_LONG(height)
		Z_PARAM_LONG(fixedsamplelocations)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(7, 0, &handle_param, &target_param, &samples_param, &internalformat_param, &width_param, &height_param, &fixedsamplelocations_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, target);
	ZVAL_LONG(&_2, samples);
	ZVAL_LONG(&_3, internalformat);
	ZVAL_LONG(&_4, width);
	ZVAL_LONG(&_5, height);
	ZVAL_LONG(&_6, fixedsamplelocations);
	phpqt_qopenglextrafunctions_gl_tex_storage2_d_multisample(&_0, &_1, &_2, &_3, &_4, &_5, &_6);
}

PHP_METHOD(Qt_Gui_QOpenGLExtraFunctions_QOpenGLExtraFunctions, glGetMultisamplefv)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, *pname_param = NULL, *index_param = NULL, *val = NULL, val_sub, result, _0, _1, _2;
	zend_long handle, pname, index;

	ZVAL_UNDEF(&val_sub);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(pname)
		Z_PARAM_LONG(index)
		Z_PARAM_ZVAL(val)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 4, 0, &handle_param, &pname_param, &index_param, &val);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, pname);
	ZVAL_LONG(&_2, index);
	phpqt_qopenglextrafunctions_gl_get_multisamplefv(&result, &_0, &_1, &_2, val);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QOpenGLExtraFunctions_QOpenGLExtraFunctions, glSampleMaski)
{
	zval *handle_param = NULL, *maskNumber_param = NULL, *mask_param = NULL, _0, _1, _2;
	zend_long handle, maskNumber, mask;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(maskNumber)
		Z_PARAM_LONG(mask)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &maskNumber_param, &mask_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, maskNumber);
	ZVAL_LONG(&_2, mask);
	phpqt_qopenglextrafunctions_gl_sample_maski(&_0, &_1, &_2);
}

PHP_METHOD(Qt_Gui_QOpenGLExtraFunctions_QOpenGLExtraFunctions, glGetTexLevelParameteriv)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, *target_param = NULL, *level_param = NULL, *pname_param = NULL, *params = NULL, params_sub, result, _0, _1, _2, _3;
	zend_long handle, target, level, pname;

	ZVAL_UNDEF(&params_sub);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(5, 5)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(target)
		Z_PARAM_LONG(level)
		Z_PARAM_LONG(pname)
		Z_PARAM_ZVAL(params)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 5, 0, &handle_param, &target_param, &level_param, &pname_param, &params);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, target);
	ZVAL_LONG(&_2, level);
	ZVAL_LONG(&_3, pname);
	phpqt_qopenglextrafunctions_gl_get_tex_level_parameteriv(&result, &_0, &_1, &_2, &_3, params);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QOpenGLExtraFunctions_QOpenGLExtraFunctions, glGetTexLevelParameterfv)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, *target_param = NULL, *level_param = NULL, *pname_param = NULL, *params = NULL, params_sub, result, _0, _1, _2, _3;
	zend_long handle, target, level, pname;

	ZVAL_UNDEF(&params_sub);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(5, 5)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(target)
		Z_PARAM_LONG(level)
		Z_PARAM_LONG(pname)
		Z_PARAM_ZVAL(params)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 5, 0, &handle_param, &target_param, &level_param, &pname_param, &params);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, target);
	ZVAL_LONG(&_2, level);
	ZVAL_LONG(&_3, pname);
	phpqt_qopenglextrafunctions_gl_get_tex_level_parameterfv(&result, &_0, &_1, &_2, &_3, params);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QOpenGLExtraFunctions_QOpenGLExtraFunctions, glBindVertexBuffer)
{
	zval *handle_param = NULL, *bindingindex_param = NULL, *buffer_param = NULL, *offset_param = NULL, *stride_param = NULL, _0, _1, _2, _3, _4;
	zend_long handle, bindingindex, buffer, offset, stride;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZEND_PARSE_PARAMETERS_START(5, 5)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(bindingindex)
		Z_PARAM_LONG(buffer)
		Z_PARAM_LONG(offset)
		Z_PARAM_LONG(stride)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(5, 0, &handle_param, &bindingindex_param, &buffer_param, &offset_param, &stride_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, bindingindex);
	ZVAL_LONG(&_2, buffer);
	ZVAL_LONG(&_3, offset);
	ZVAL_LONG(&_4, stride);
	phpqt_qopenglextrafunctions_gl_bind_vertex_buffer(&_0, &_1, &_2, &_3, &_4);
}

PHP_METHOD(Qt_Gui_QOpenGLExtraFunctions_QOpenGLExtraFunctions, glVertexAttribFormat)
{
	zval *handle_param = NULL, *attribindex_param = NULL, *size_param = NULL, *type_param = NULL, *normalized_param = NULL, *relativeoffset_param = NULL, _0, _1, _2, _3, _4, _5;
	zend_long handle, attribindex, size, type, normalized, relativeoffset;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_5);
	ZEND_PARSE_PARAMETERS_START(6, 6)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(attribindex)
		Z_PARAM_LONG(size)
		Z_PARAM_LONG(type)
		Z_PARAM_LONG(normalized)
		Z_PARAM_LONG(relativeoffset)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(6, 0, &handle_param, &attribindex_param, &size_param, &type_param, &normalized_param, &relativeoffset_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, attribindex);
	ZVAL_LONG(&_2, size);
	ZVAL_LONG(&_3, type);
	ZVAL_LONG(&_4, normalized);
	ZVAL_LONG(&_5, relativeoffset);
	phpqt_qopenglextrafunctions_gl_vertex_attrib_format(&_0, &_1, &_2, &_3, &_4, &_5);
}

PHP_METHOD(Qt_Gui_QOpenGLExtraFunctions_QOpenGLExtraFunctions, glVertexAttribIFormat)
{
	zval *handle_param = NULL, *attribindex_param = NULL, *size_param = NULL, *type_param = NULL, *relativeoffset_param = NULL, _0, _1, _2, _3, _4;
	zend_long handle, attribindex, size, type, relativeoffset;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZEND_PARSE_PARAMETERS_START(5, 5)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(attribindex)
		Z_PARAM_LONG(size)
		Z_PARAM_LONG(type)
		Z_PARAM_LONG(relativeoffset)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(5, 0, &handle_param, &attribindex_param, &size_param, &type_param, &relativeoffset_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, attribindex);
	ZVAL_LONG(&_2, size);
	ZVAL_LONG(&_3, type);
	ZVAL_LONG(&_4, relativeoffset);
	phpqt_qopenglextrafunctions_gl_vertex_attrib_i_format(&_0, &_1, &_2, &_3, &_4);
}

PHP_METHOD(Qt_Gui_QOpenGLExtraFunctions_QOpenGLExtraFunctions, glVertexAttribBinding)
{
	zval *handle_param = NULL, *attribindex_param = NULL, *bindingindex_param = NULL, _0, _1, _2;
	zend_long handle, attribindex, bindingindex;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(attribindex)
		Z_PARAM_LONG(bindingindex)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &attribindex_param, &bindingindex_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, attribindex);
	ZVAL_LONG(&_2, bindingindex);
	phpqt_qopenglextrafunctions_gl_vertex_attrib_binding(&_0, &_1, &_2);
}

PHP_METHOD(Qt_Gui_QOpenGLExtraFunctions_QOpenGLExtraFunctions, glVertexBindingDivisor)
{
	zval *handle_param = NULL, *bindingindex_param = NULL, *divisor_param = NULL, _0, _1, _2;
	zend_long handle, bindingindex, divisor;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(bindingindex)
		Z_PARAM_LONG(divisor)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &bindingindex_param, &divisor_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, bindingindex);
	ZVAL_LONG(&_2, divisor);
	phpqt_qopenglextrafunctions_gl_vertex_binding_divisor(&_0, &_1, &_2);
}

PHP_METHOD(Qt_Gui_QOpenGLExtraFunctions_QOpenGLExtraFunctions, glBlendBarrier)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qopenglextrafunctions_gl_blend_barrier(&_0);
}

PHP_METHOD(Qt_Gui_QOpenGLExtraFunctions_QOpenGLExtraFunctions, glCopyImageSubData)
{
	zval *handle_param = NULL, *srcName_param = NULL, *srcTarget_param = NULL, *srcLevel_param = NULL, *srcX_param = NULL, *srcY_param = NULL, *srcZ_param = NULL, *dstName_param = NULL, *dstTarget_param = NULL, *dstLevel_param = NULL, *dstX_param = NULL, *dstY_param = NULL, *dstZ_param = NULL, *srcWidth_param = NULL, *srcHeight_param = NULL, *srcDepth_param = NULL, _0, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15;
	zend_long handle, srcName, srcTarget, srcLevel, srcX, srcY, srcZ, dstName, dstTarget, dstLevel, dstX, dstY, dstZ, srcWidth, srcHeight, srcDepth;

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
	ZVAL_UNDEF(&_15);
	ZEND_PARSE_PARAMETERS_START(16, 16)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(srcName)
		Z_PARAM_LONG(srcTarget)
		Z_PARAM_LONG(srcLevel)
		Z_PARAM_LONG(srcX)
		Z_PARAM_LONG(srcY)
		Z_PARAM_LONG(srcZ)
		Z_PARAM_LONG(dstName)
		Z_PARAM_LONG(dstTarget)
		Z_PARAM_LONG(dstLevel)
		Z_PARAM_LONG(dstX)
		Z_PARAM_LONG(dstY)
		Z_PARAM_LONG(dstZ)
		Z_PARAM_LONG(srcWidth)
		Z_PARAM_LONG(srcHeight)
		Z_PARAM_LONG(srcDepth)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(16, 0, &handle_param, &srcName_param, &srcTarget_param, &srcLevel_param, &srcX_param, &srcY_param, &srcZ_param, &dstName_param, &dstTarget_param, &dstLevel_param, &dstX_param, &dstY_param, &dstZ_param, &srcWidth_param, &srcHeight_param, &srcDepth_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, srcName);
	ZVAL_LONG(&_2, srcTarget);
	ZVAL_LONG(&_3, srcLevel);
	ZVAL_LONG(&_4, srcX);
	ZVAL_LONG(&_5, srcY);
	ZVAL_LONG(&_6, srcZ);
	ZVAL_LONG(&_7, dstName);
	ZVAL_LONG(&_8, dstTarget);
	ZVAL_LONG(&_9, dstLevel);
	ZVAL_LONG(&_10, dstX);
	ZVAL_LONG(&_11, dstY);
	ZVAL_LONG(&_12, dstZ);
	ZVAL_LONG(&_13, srcWidth);
	ZVAL_LONG(&_14, srcHeight);
	ZVAL_LONG(&_15, srcDepth);
	phpqt_qopenglextrafunctions_gl_copy_image_sub_data(&_0, &_1, &_2, &_3, &_4, &_5, &_6, &_7, &_8, &_9, &_10, &_11, &_12, &_13, &_14, &_15);
}

PHP_METHOD(Qt_Gui_QOpenGLExtraFunctions_QOpenGLExtraFunctions, glDebugMessageControl)
{
	zval *handle_param = NULL, *source_param = NULL, *type_param = NULL, *severity_param = NULL, *count_param = NULL, *ids = NULL, ids_sub, *enabled_param = NULL, _0, _1, _2, _3, _4, _5;
	zend_long handle, source, type, severity, count, enabled;

	ZVAL_UNDEF(&ids_sub);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_5);
	ZEND_PARSE_PARAMETERS_START(7, 7)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(source)
		Z_PARAM_LONG(type)
		Z_PARAM_LONG(severity)
		Z_PARAM_LONG(count)
		Z_PARAM_ZVAL(ids)
		Z_PARAM_LONG(enabled)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(7, 0, &handle_param, &source_param, &type_param, &severity_param, &count_param, &ids, &enabled_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, source);
	ZVAL_LONG(&_2, type);
	ZVAL_LONG(&_3, severity);
	ZVAL_LONG(&_4, count);
	ZVAL_LONG(&_5, enabled);
	phpqt_qopenglextrafunctions_gl_debug_message_control(&_0, &_1, &_2, &_3, &_4, ids, &_5);
}

PHP_METHOD(Qt_Gui_QOpenGLExtraFunctions_QOpenGLExtraFunctions, glDebugMessageInsert)
{
	zval *handle_param = NULL, *source_param = NULL, *type_param = NULL, *id_param = NULL, *severity_param = NULL, *length_param = NULL, *buf = NULL, buf_sub, _0, _1, _2, _3, _4, _5;
	zend_long handle, source, type, id, severity, length;

	ZVAL_UNDEF(&buf_sub);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_5);
	ZEND_PARSE_PARAMETERS_START(7, 7)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(source)
		Z_PARAM_LONG(type)
		Z_PARAM_LONG(id)
		Z_PARAM_LONG(severity)
		Z_PARAM_LONG(length)
		Z_PARAM_ZVAL(buf)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(7, 0, &handle_param, &source_param, &type_param, &id_param, &severity_param, &length_param, &buf);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, source);
	ZVAL_LONG(&_2, type);
	ZVAL_LONG(&_3, id);
	ZVAL_LONG(&_4, severity);
	ZVAL_LONG(&_5, length);
	phpqt_qopenglextrafunctions_gl_debug_message_insert(&_0, &_1, &_2, &_3, &_4, &_5, buf);
}

PHP_METHOD(Qt_Gui_QOpenGLExtraFunctions_QOpenGLExtraFunctions, glPushDebugGroup)
{
	zval *handle_param = NULL, *source_param = NULL, *id_param = NULL, *length_param = NULL, *message = NULL, message_sub, _0, _1, _2, _3;
	zend_long handle, source, id, length;

	ZVAL_UNDEF(&message_sub);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(5, 5)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(source)
		Z_PARAM_LONG(id)
		Z_PARAM_LONG(length)
		Z_PARAM_ZVAL(message)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(5, 0, &handle_param, &source_param, &id_param, &length_param, &message);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, source);
	ZVAL_LONG(&_2, id);
	ZVAL_LONG(&_3, length);
	phpqt_qopenglextrafunctions_gl_push_debug_group(&_0, &_1, &_2, &_3, message);
}

PHP_METHOD(Qt_Gui_QOpenGLExtraFunctions_QOpenGLExtraFunctions, glPopDebugGroup)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qopenglextrafunctions_gl_pop_debug_group(&_0);
}

PHP_METHOD(Qt_Gui_QOpenGLExtraFunctions_QOpenGLExtraFunctions, glObjectLabel)
{
	zval *handle_param = NULL, *identifier_param = NULL, *name_param = NULL, *length_param = NULL, *label = NULL, label_sub, _0, _1, _2, _3;
	zend_long handle, identifier, name, length;

	ZVAL_UNDEF(&label_sub);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(5, 5)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(identifier)
		Z_PARAM_LONG(name)
		Z_PARAM_LONG(length)
		Z_PARAM_ZVAL(label)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(5, 0, &handle_param, &identifier_param, &name_param, &length_param, &label);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, identifier);
	ZVAL_LONG(&_2, name);
	ZVAL_LONG(&_3, length);
	phpqt_qopenglextrafunctions_gl_object_label(&_0, &_1, &_2, &_3, label);
}

PHP_METHOD(Qt_Gui_QOpenGLExtraFunctions_QOpenGLExtraFunctions, glEnablei)
{
	zval *handle_param = NULL, *target_param = NULL, *index_param = NULL, _0, _1, _2;
	zend_long handle, target, index;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(target)
		Z_PARAM_LONG(index)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &target_param, &index_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, target);
	ZVAL_LONG(&_2, index);
	phpqt_qopenglextrafunctions_gl_enablei(&_0, &_1, &_2);
}

PHP_METHOD(Qt_Gui_QOpenGLExtraFunctions_QOpenGLExtraFunctions, glDisablei)
{
	zval *handle_param = NULL, *target_param = NULL, *index_param = NULL, _0, _1, _2;
	zend_long handle, target, index;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(target)
		Z_PARAM_LONG(index)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &target_param, &index_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, target);
	ZVAL_LONG(&_2, index);
	phpqt_qopenglextrafunctions_gl_disablei(&_0, &_1, &_2);
}

PHP_METHOD(Qt_Gui_QOpenGLExtraFunctions_QOpenGLExtraFunctions, glBlendEquationi)
{
	zval *handle_param = NULL, *buf_param = NULL, *mode_param = NULL, _0, _1, _2;
	zend_long handle, buf, mode;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(buf)
		Z_PARAM_LONG(mode)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &buf_param, &mode_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, buf);
	ZVAL_LONG(&_2, mode);
	phpqt_qopenglextrafunctions_gl_blend_equationi(&_0, &_1, &_2);
}

PHP_METHOD(Qt_Gui_QOpenGLExtraFunctions_QOpenGLExtraFunctions, glBlendEquationSeparatei)
{
	zval *handle_param = NULL, *buf_param = NULL, *modeRGB_param = NULL, *modeAlpha_param = NULL, _0, _1, _2, _3;
	zend_long handle, buf, modeRGB, modeAlpha;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(buf)
		Z_PARAM_LONG(modeRGB)
		Z_PARAM_LONG(modeAlpha)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 0, &handle_param, &buf_param, &modeRGB_param, &modeAlpha_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, buf);
	ZVAL_LONG(&_2, modeRGB);
	ZVAL_LONG(&_3, modeAlpha);
	phpqt_qopenglextrafunctions_gl_blend_equation_separatei(&_0, &_1, &_2, &_3);
}

PHP_METHOD(Qt_Gui_QOpenGLExtraFunctions_QOpenGLExtraFunctions, glBlendFunci)
{
	zval *handle_param = NULL, *buf_param = NULL, *src_param = NULL, *dst_param = NULL, _0, _1, _2, _3;
	zend_long handle, buf, src, dst;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(buf)
		Z_PARAM_LONG(src)
		Z_PARAM_LONG(dst)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 0, &handle_param, &buf_param, &src_param, &dst_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, buf);
	ZVAL_LONG(&_2, src);
	ZVAL_LONG(&_3, dst);
	phpqt_qopenglextrafunctions_gl_blend_funci(&_0, &_1, &_2, &_3);
}

PHP_METHOD(Qt_Gui_QOpenGLExtraFunctions_QOpenGLExtraFunctions, glBlendFuncSeparatei)
{
	zval *handle_param = NULL, *buf_param = NULL, *srcRGB_param = NULL, *dstRGB_param = NULL, *srcAlpha_param = NULL, *dstAlpha_param = NULL, _0, _1, _2, _3, _4, _5;
	zend_long handle, buf, srcRGB, dstRGB, srcAlpha, dstAlpha;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_5);
	ZEND_PARSE_PARAMETERS_START(6, 6)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(buf)
		Z_PARAM_LONG(srcRGB)
		Z_PARAM_LONG(dstRGB)
		Z_PARAM_LONG(srcAlpha)
		Z_PARAM_LONG(dstAlpha)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(6, 0, &handle_param, &buf_param, &srcRGB_param, &dstRGB_param, &srcAlpha_param, &dstAlpha_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, buf);
	ZVAL_LONG(&_2, srcRGB);
	ZVAL_LONG(&_3, dstRGB);
	ZVAL_LONG(&_4, srcAlpha);
	ZVAL_LONG(&_5, dstAlpha);
	phpqt_qopenglextrafunctions_gl_blend_func_separatei(&_0, &_1, &_2, &_3, &_4, &_5);
}

PHP_METHOD(Qt_Gui_QOpenGLExtraFunctions_QOpenGLExtraFunctions, glColorMaski)
{
	zval *handle_param = NULL, *index_param = NULL, *r_param = NULL, *g_param = NULL, *b_param = NULL, *a_param = NULL, _0, _1, _2, _3, _4, _5;
	zend_long handle, index, r, g, b, a;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_5);
	ZEND_PARSE_PARAMETERS_START(6, 6)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(index)
		Z_PARAM_LONG(r)
		Z_PARAM_LONG(g)
		Z_PARAM_LONG(b)
		Z_PARAM_LONG(a)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(6, 0, &handle_param, &index_param, &r_param, &g_param, &b_param, &a_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, index);
	ZVAL_LONG(&_2, r);
	ZVAL_LONG(&_3, g);
	ZVAL_LONG(&_4, b);
	ZVAL_LONG(&_5, a);
	phpqt_qopenglextrafunctions_gl_color_maski(&_0, &_1, &_2, &_3, &_4, &_5);
}

PHP_METHOD(Qt_Gui_QOpenGLExtraFunctions_QOpenGLExtraFunctions, glIsEnabledi)
{
	zval *handle_param = NULL, *target_param = NULL, *index_param = NULL, _0, _1, _2;
	zend_long handle, target, index;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(target)
		Z_PARAM_LONG(index)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &target_param, &index_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, target);
	ZVAL_LONG(&_2, index);
	RETURN_LONG(phpqt_qopenglextrafunctions_gl_is_enabledi(&_0, &_1, &_2));
}

PHP_METHOD(Qt_Gui_QOpenGLExtraFunctions_QOpenGLExtraFunctions, glFramebufferTexture)
{
	zval *handle_param = NULL, *target_param = NULL, *attachment_param = NULL, *texture_param = NULL, *level_param = NULL, _0, _1, _2, _3, _4;
	zend_long handle, target, attachment, texture, level;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZEND_PARSE_PARAMETERS_START(5, 5)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(target)
		Z_PARAM_LONG(attachment)
		Z_PARAM_LONG(texture)
		Z_PARAM_LONG(level)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(5, 0, &handle_param, &target_param, &attachment_param, &texture_param, &level_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, target);
	ZVAL_LONG(&_2, attachment);
	ZVAL_LONG(&_3, texture);
	ZVAL_LONG(&_4, level);
	phpqt_qopenglextrafunctions_gl_framebuffer_texture(&_0, &_1, &_2, &_3, &_4);
}

PHP_METHOD(Qt_Gui_QOpenGLExtraFunctions_QOpenGLExtraFunctions, glPrimitiveBoundingBox)
{
	double minX, minY, minZ, minW, maxX, maxY, maxZ, maxW;
	zval *handle_param = NULL, *minX_param = NULL, *minY_param = NULL, *minZ_param = NULL, *minW_param = NULL, *maxX_param = NULL, *maxY_param = NULL, *maxZ_param = NULL, *maxW_param = NULL, _0, _1, _2, _3, _4, _5, _6, _7, _8;
	zend_long handle;

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
		Z_PARAM_ZVAL(minX)
		Z_PARAM_ZVAL(minY)
		Z_PARAM_ZVAL(minZ)
		Z_PARAM_ZVAL(minW)
		Z_PARAM_ZVAL(maxX)
		Z_PARAM_ZVAL(maxY)
		Z_PARAM_ZVAL(maxZ)
		Z_PARAM_ZVAL(maxW)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(9, 0, &handle_param, &minX_param, &minY_param, &minZ_param, &minW_param, &maxX_param, &maxY_param, &maxZ_param, &maxW_param);
	minX = zephir_get_doubleval(minX_param);
	minY = zephir_get_doubleval(minY_param);
	minZ = zephir_get_doubleval(minZ_param);
	minW = zephir_get_doubleval(minW_param);
	maxX = zephir_get_doubleval(maxX_param);
	maxY = zephir_get_doubleval(maxY_param);
	maxZ = zephir_get_doubleval(maxZ_param);
	maxW = zephir_get_doubleval(maxW_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, minX);
	ZVAL_DOUBLE(&_2, minY);
	ZVAL_DOUBLE(&_3, minZ);
	ZVAL_DOUBLE(&_4, minW);
	ZVAL_DOUBLE(&_5, maxX);
	ZVAL_DOUBLE(&_6, maxY);
	ZVAL_DOUBLE(&_7, maxZ);
	ZVAL_DOUBLE(&_8, maxW);
	phpqt_qopenglextrafunctions_gl_primitive_bounding_box(&_0, &_1, &_2, &_3, &_4, &_5, &_6, &_7, &_8);
}

PHP_METHOD(Qt_Gui_QOpenGLExtraFunctions_QOpenGLExtraFunctions, glGetGraphicsResetStatus)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qopenglextrafunctions_gl_get_graphics_reset_status(&_0));
}

PHP_METHOD(Qt_Gui_QOpenGLExtraFunctions_QOpenGLExtraFunctions, glGetnUniformfv)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, *program_param = NULL, *location_param = NULL, *bufSize_param = NULL, *params = NULL, params_sub, result, _0, _1, _2, _3;
	zend_long handle, program, location, bufSize;

	ZVAL_UNDEF(&params_sub);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(5, 5)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(program)
		Z_PARAM_LONG(location)
		Z_PARAM_LONG(bufSize)
		Z_PARAM_ZVAL(params)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 5, 0, &handle_param, &program_param, &location_param, &bufSize_param, &params);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, program);
	ZVAL_LONG(&_2, location);
	ZVAL_LONG(&_3, bufSize);
	phpqt_qopenglextrafunctions_gl_getn_uniformfv(&result, &_0, &_1, &_2, &_3, params);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QOpenGLExtraFunctions_QOpenGLExtraFunctions, glGetnUniformiv)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, *program_param = NULL, *location_param = NULL, *bufSize_param = NULL, *params = NULL, params_sub, result, _0, _1, _2, _3;
	zend_long handle, program, location, bufSize;

	ZVAL_UNDEF(&params_sub);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(5, 5)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(program)
		Z_PARAM_LONG(location)
		Z_PARAM_LONG(bufSize)
		Z_PARAM_ZVAL(params)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 5, 0, &handle_param, &program_param, &location_param, &bufSize_param, &params);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, program);
	ZVAL_LONG(&_2, location);
	ZVAL_LONG(&_3, bufSize);
	phpqt_qopenglextrafunctions_gl_getn_uniformiv(&result, &_0, &_1, &_2, &_3, params);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QOpenGLExtraFunctions_QOpenGLExtraFunctions, glGetnUniformuiv)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, *program_param = NULL, *location_param = NULL, *bufSize_param = NULL, *params = NULL, params_sub, result, _0, _1, _2, _3;
	zend_long handle, program, location, bufSize;

	ZVAL_UNDEF(&params_sub);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(5, 5)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(program)
		Z_PARAM_LONG(location)
		Z_PARAM_LONG(bufSize)
		Z_PARAM_ZVAL(params)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 5, 0, &handle_param, &program_param, &location_param, &bufSize_param, &params);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, program);
	ZVAL_LONG(&_2, location);
	ZVAL_LONG(&_3, bufSize);
	phpqt_qopenglextrafunctions_gl_getn_uniformuiv(&result, &_0, &_1, &_2, &_3, params);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QOpenGLExtraFunctions_QOpenGLExtraFunctions, glMinSampleShading)
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
	phpqt_qopenglextrafunctions_gl_min_sample_shading(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QOpenGLExtraFunctions_QOpenGLExtraFunctions, glPatchParameteri)
{
	zval *handle_param = NULL, *pname_param = NULL, *value_param = NULL, _0, _1, _2;
	zend_long handle, pname, value;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(pname)
		Z_PARAM_LONG(value)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &pname_param, &value_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, pname);
	ZVAL_LONG(&_2, value);
	phpqt_qopenglextrafunctions_gl_patch_parameteri(&_0, &_1, &_2);
}

PHP_METHOD(Qt_Gui_QOpenGLExtraFunctions_QOpenGLExtraFunctions, glTexParameterIiv)
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
	phpqt_qopenglextrafunctions_gl_tex_parameter_iiv(&_0, &_1, &_2, params);
}

PHP_METHOD(Qt_Gui_QOpenGLExtraFunctions_QOpenGLExtraFunctions, glTexParameterIuiv)
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
	phpqt_qopenglextrafunctions_gl_tex_parameter_iuiv(&_0, &_1, &_2, params);
}

PHP_METHOD(Qt_Gui_QOpenGLExtraFunctions_QOpenGLExtraFunctions, glGetTexParameterIiv)
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
	phpqt_qopenglextrafunctions_gl_get_tex_parameter_iiv(&result, &_0, &_1, &_2, params);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QOpenGLExtraFunctions_QOpenGLExtraFunctions, glGetTexParameterIuiv)
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
	phpqt_qopenglextrafunctions_gl_get_tex_parameter_iuiv(&result, &_0, &_1, &_2, params);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QOpenGLExtraFunctions_QOpenGLExtraFunctions, glSamplerParameterIiv)
{
	zval *handle_param = NULL, *sampler_param = NULL, *pname_param = NULL, *param = NULL, param_sub, _0, _1, _2;
	zend_long handle, sampler, pname;

	ZVAL_UNDEF(&param_sub);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(sampler)
		Z_PARAM_LONG(pname)
		Z_PARAM_ZVAL(param)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 0, &handle_param, &sampler_param, &pname_param, &param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, sampler);
	ZVAL_LONG(&_2, pname);
	phpqt_qopenglextrafunctions_gl_sampler_parameter_iiv(&_0, &_1, &_2, param);
}

PHP_METHOD(Qt_Gui_QOpenGLExtraFunctions_QOpenGLExtraFunctions, glSamplerParameterIuiv)
{
	zval *handle_param = NULL, *sampler_param = NULL, *pname_param = NULL, *param = NULL, param_sub, _0, _1, _2;
	zend_long handle, sampler, pname;

	ZVAL_UNDEF(&param_sub);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(sampler)
		Z_PARAM_LONG(pname)
		Z_PARAM_ZVAL(param)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 0, &handle_param, &sampler_param, &pname_param, &param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, sampler);
	ZVAL_LONG(&_2, pname);
	phpqt_qopenglextrafunctions_gl_sampler_parameter_iuiv(&_0, &_1, &_2, param);
}

PHP_METHOD(Qt_Gui_QOpenGLExtraFunctions_QOpenGLExtraFunctions, glGetSamplerParameterIiv)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, *sampler_param = NULL, *pname_param = NULL, *params = NULL, params_sub, result, _0, _1, _2;
	zend_long handle, sampler, pname;

	ZVAL_UNDEF(&params_sub);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(sampler)
		Z_PARAM_LONG(pname)
		Z_PARAM_ZVAL(params)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 4, 0, &handle_param, &sampler_param, &pname_param, &params);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, sampler);
	ZVAL_LONG(&_2, pname);
	phpqt_qopenglextrafunctions_gl_get_sampler_parameter_iiv(&result, &_0, &_1, &_2, params);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QOpenGLExtraFunctions_QOpenGLExtraFunctions, glGetSamplerParameterIuiv)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, *sampler_param = NULL, *pname_param = NULL, *params = NULL, params_sub, result, _0, _1, _2;
	zend_long handle, sampler, pname;

	ZVAL_UNDEF(&params_sub);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(sampler)
		Z_PARAM_LONG(pname)
		Z_PARAM_ZVAL(params)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 4, 0, &handle_param, &sampler_param, &pname_param, &params);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, sampler);
	ZVAL_LONG(&_2, pname);
	phpqt_qopenglextrafunctions_gl_get_sampler_parameter_iuiv(&result, &_0, &_1, &_2, params);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QOpenGLExtraFunctions_QOpenGLExtraFunctions, glTexBuffer)
{
	zval *handle_param = NULL, *target_param = NULL, *internalformat_param = NULL, *buffer_param = NULL, _0, _1, _2, _3;
	zend_long handle, target, internalformat, buffer;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(target)
		Z_PARAM_LONG(internalformat)
		Z_PARAM_LONG(buffer)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 0, &handle_param, &target_param, &internalformat_param, &buffer_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, target);
	ZVAL_LONG(&_2, internalformat);
	ZVAL_LONG(&_3, buffer);
	phpqt_qopenglextrafunctions_gl_tex_buffer(&_0, &_1, &_2, &_3);
}

PHP_METHOD(Qt_Gui_QOpenGLExtraFunctions_QOpenGLExtraFunctions, glTexBufferRange)
{
	zval *handle_param = NULL, *target_param = NULL, *internalformat_param = NULL, *buffer_param = NULL, *offset_param = NULL, *size_param = NULL, _0, _1, _2, _3, _4, _5;
	zend_long handle, target, internalformat, buffer, offset, size;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_5);
	ZEND_PARSE_PARAMETERS_START(6, 6)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(target)
		Z_PARAM_LONG(internalformat)
		Z_PARAM_LONG(buffer)
		Z_PARAM_LONG(offset)
		Z_PARAM_LONG(size)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(6, 0, &handle_param, &target_param, &internalformat_param, &buffer_param, &offset_param, &size_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, target);
	ZVAL_LONG(&_2, internalformat);
	ZVAL_LONG(&_3, buffer);
	ZVAL_LONG(&_4, offset);
	ZVAL_LONG(&_5, size);
	phpqt_qopenglextrafunctions_gl_tex_buffer_range(&_0, &_1, &_2, &_3, &_4, &_5);
}

PHP_METHOD(Qt_Gui_QOpenGLExtraFunctions_QOpenGLExtraFunctions, glTexStorage3DMultisample)
{
	zval *handle_param = NULL, *target_param = NULL, *samples_param = NULL, *internalformat_param = NULL, *width_param = NULL, *height_param = NULL, *depth_param = NULL, *fixedsamplelocations_param = NULL, _0, _1, _2, _3, _4, _5, _6, _7;
	zend_long handle, target, samples, internalformat, width, height, depth, fixedsamplelocations;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_5);
	ZVAL_UNDEF(&_6);
	ZVAL_UNDEF(&_7);
	ZEND_PARSE_PARAMETERS_START(8, 8)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(target)
		Z_PARAM_LONG(samples)
		Z_PARAM_LONG(internalformat)
		Z_PARAM_LONG(width)
		Z_PARAM_LONG(height)
		Z_PARAM_LONG(depth)
		Z_PARAM_LONG(fixedsamplelocations)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(8, 0, &handle_param, &target_param, &samples_param, &internalformat_param, &width_param, &height_param, &depth_param, &fixedsamplelocations_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, target);
	ZVAL_LONG(&_2, samples);
	ZVAL_LONG(&_3, internalformat);
	ZVAL_LONG(&_4, width);
	ZVAL_LONG(&_5, height);
	ZVAL_LONG(&_6, depth);
	ZVAL_LONG(&_7, fixedsamplelocations);
	phpqt_qopenglextrafunctions_gl_tex_storage3_d_multisample(&_0, &_1, &_2, &_3, &_4, &_5, &_6, &_7);
}

