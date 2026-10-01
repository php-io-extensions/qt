
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
#include "src/openglwidgets-qopenglwidget.h"
#include "kernel/object.h"
#include "kernel/string.h"
#include "kernel/memory.h"
#include "kernel/operators.h"


ZEPHIR_INIT_CLASS(Qt_OpenGLWidgets_QOpenGLWidget_QOpenGLWidget)
{
	ZEPHIR_REGISTER_CLASS(Qt\\OpenGLWidgets\\QOpenGLWidget, QOpenGLWidget, qt, openglwidgets_qopenglwidget_qopenglwidget, qt_openglwidgets_qopenglwidget_qopenglwidget_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_OpenGLWidgets_QOpenGLWidget_QOpenGLWidget, staticMetaObject)
{

	RETURN_LONG(phpqt_qopenglwidget_static_meta_object());
}

PHP_METHOD(Qt_OpenGLWidgets_QOpenGLWidget_QOpenGLWidget, tr)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long n;
	zval *s = NULL, s_sub, *c = NULL, c_sub, *n_param = NULL, __$null, result, _0;

	ZVAL_UNDEF(&s_sub);
	ZVAL_UNDEF(&c_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(1, 3)
		Z_PARAM_ZVAL(s)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(c)
		Z_PARAM_LONG(n)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 2, &s, &c, &n_param);
	if (!c) {
		c = &c_sub;
		c = &__$null;
	}
	if (!n_param) {
		n = -1;
	} else {
		}
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, n);
	phpqt_qopenglwidget_tr(&result, s, c, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_OpenGLWidgets_QOpenGLWidget_QOpenGLWidget, new_)
{
	zval *parent__param = NULL, *f = NULL, f_sub, __$null, _0;
	zend_long parent_;

	ZVAL_UNDEF(&f_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(0, 2)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(parent_)
		Z_PARAM_ZVAL_OR_NULL(f)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(0, 2, &parent__param, &f);
	if (!parent__param) {
		parent_ = 0;
	} else {
		}
	if (!f) {
		f = &f_sub;
		f = &__$null;
	}
	ZVAL_LONG(&_0, parent_);
	RETURN_LONG(phpqt_qopenglwidget_new(&_0, f));
}

PHP_METHOD(Qt_OpenGLWidgets_QOpenGLWidget_QOpenGLWidget, setUpdateBehavior)
{
	zval *handle_param = NULL, *updateBehavior_param = NULL, _0, _1;
	zend_long handle, updateBehavior;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(updateBehavior)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &updateBehavior_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, updateBehavior);
	phpqt_qopenglwidget_set_update_behavior(&_0, &_1);
}

PHP_METHOD(Qt_OpenGLWidgets_QOpenGLWidget_QOpenGLWidget, updateBehavior)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qopenglwidget_update_behavior(&_0));
}

PHP_METHOD(Qt_OpenGLWidgets_QOpenGLWidget_QOpenGLWidget, setFormat)
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
	phpqt_qopenglwidget_set_format(&_0, &_1);
}

PHP_METHOD(Qt_OpenGLWidgets_QOpenGLWidget_QOpenGLWidget, format)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qopenglwidget_format(&_0));
}

PHP_METHOD(Qt_OpenGLWidgets_QOpenGLWidget_QOpenGLWidget, textureFormat)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qopenglwidget_texture_format(&_0));
}

PHP_METHOD(Qt_OpenGLWidgets_QOpenGLWidget_QOpenGLWidget, setTextureFormat)
{
	zval *handle_param = NULL, *texFormat_param = NULL, _0, _1;
	zend_long handle, texFormat;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(texFormat)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &texFormat_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, texFormat);
	phpqt_qopenglwidget_set_texture_format(&_0, &_1);
}

PHP_METHOD(Qt_OpenGLWidgets_QOpenGLWidget_QOpenGLWidget, isValid)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qopenglwidget_is_valid(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_OpenGLWidgets_QOpenGLWidget_QOpenGLWidget, makeCurrent)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qopenglwidget_make_current(&_0);
}

PHP_METHOD(Qt_OpenGLWidgets_QOpenGLWidget_QOpenGLWidget, makeCurrentQOpenGLWidgetTargetBuffer)
{
	zval *handle_param = NULL, *targetBuffer_param = NULL, _0, _1;
	zend_long handle, targetBuffer;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(targetBuffer)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &targetBuffer_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, targetBuffer);
	phpqt_qopenglwidget_make_current_q_open_g_l_widget_target_buffer(&_0, &_1);
}

PHP_METHOD(Qt_OpenGLWidgets_QOpenGLWidget_QOpenGLWidget, doneCurrent)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qopenglwidget_done_current(&_0);
}

PHP_METHOD(Qt_OpenGLWidgets_QOpenGLWidget_QOpenGLWidget, context)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qopenglwidget_context(&_0));
}

PHP_METHOD(Qt_OpenGLWidgets_QOpenGLWidget_QOpenGLWidget, defaultFramebufferObject)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qopenglwidget_default_framebuffer_object(&_0));
}

PHP_METHOD(Qt_OpenGLWidgets_QOpenGLWidget_QOpenGLWidget, defaultFramebufferObjectQOpenGLWidgetTargetBuffer)
{
	zval *handle_param = NULL, *targetBuffer_param = NULL, _0, _1;
	zend_long handle, targetBuffer;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(targetBuffer)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &targetBuffer_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, targetBuffer);
	RETURN_LONG(phpqt_qopenglwidget_default_framebuffer_object_q_open_g_l_widget_target_buffer(&_0, &_1));
}

PHP_METHOD(Qt_OpenGLWidgets_QOpenGLWidget_QOpenGLWidget, grabFramebuffer)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qopenglwidget_grab_framebuffer(&_0));
}

PHP_METHOD(Qt_OpenGLWidgets_QOpenGLWidget_QOpenGLWidget, grabFramebufferQOpenGLWidgetTargetBuffer)
{
	zval *handle_param = NULL, *targetBuffer_param = NULL, _0, _1;
	zend_long handle, targetBuffer;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(targetBuffer)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &targetBuffer_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, targetBuffer);
	RETURN_LONG(phpqt_qopenglwidget_grab_framebuffer_q_open_g_l_widget_target_buffer(&_0, &_1));
}

PHP_METHOD(Qt_OpenGLWidgets_QOpenGLWidget_QOpenGLWidget, currentTargetBuffer)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qopenglwidget_current_target_buffer(&_0));
}

PHP_METHOD(Qt_OpenGLWidgets_QOpenGLWidget_QOpenGLWidget, aboutToCompose)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qopenglwidget_about_to_compose(&_0);
}

PHP_METHOD(Qt_OpenGLWidgets_QOpenGLWidget_QOpenGLWidget, frameSwapped)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qopenglwidget_frame_swapped(&_0);
}

PHP_METHOD(Qt_OpenGLWidgets_QOpenGLWidget_QOpenGLWidget, aboutToResize)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qopenglwidget_about_to_resize(&_0);
}

PHP_METHOD(Qt_OpenGLWidgets_QOpenGLWidget_QOpenGLWidget, resized)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qopenglwidget_resized(&_0);
}

PHP_METHOD(Qt_OpenGLWidgets_QOpenGLWidget_QOpenGLWidget, initializeGL)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qopenglwidget_initialize_g_l(&_0);
}

PHP_METHOD(Qt_OpenGLWidgets_QOpenGLWidget_QOpenGLWidget, resizeGL)
{
	zval *handle_param = NULL, *w_param = NULL, *h_param = NULL, _0, _1, _2;
	zend_long handle, w, h;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(w)
		Z_PARAM_LONG(h)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &w_param, &h_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, w);
	ZVAL_LONG(&_2, h);
	phpqt_qopenglwidget_resize_g_l(&_0, &_1, &_2);
}

PHP_METHOD(Qt_OpenGLWidgets_QOpenGLWidget_QOpenGLWidget, paintGL)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qopenglwidget_paint_g_l(&_0);
}

PHP_METHOD(Qt_OpenGLWidgets_QOpenGLWidget_QOpenGLWidget, paintEvent)
{
	zval *handle_param = NULL, *e_param = NULL, _0, _1;
	zend_long handle, e;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(e)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &e_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, e);
	phpqt_qopenglwidget_paint_event(&_0, &_1);
}

PHP_METHOD(Qt_OpenGLWidgets_QOpenGLWidget_QOpenGLWidget, resizeEvent)
{
	zval *handle_param = NULL, *e_param = NULL, _0, _1;
	zend_long handle, e;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(e)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &e_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, e);
	phpqt_qopenglwidget_resize_event(&_0, &_1);
}

PHP_METHOD(Qt_OpenGLWidgets_QOpenGLWidget_QOpenGLWidget, event)
{
	zval *handle_param = NULL, *e_param = NULL, _0, _1;
	zend_long handle, e, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(e)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &e_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, e);
	r = phpqt_qopenglwidget_event(&_0, &_1);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_OpenGLWidgets_QOpenGLWidget_QOpenGLWidget, metric)
{
	zval *handle_param = NULL, *metric_param = NULL, _0, _1;
	zend_long handle, metric;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(metric)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &metric_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, metric);
	RETURN_LONG(phpqt_qopenglwidget_metric(&_0, &_1));
}

PHP_METHOD(Qt_OpenGLWidgets_QOpenGLWidget_QOpenGLWidget, redirected)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, *p = NULL, p_sub, result, _0;
	zend_long handle;

	ZVAL_UNDEF(&p_sub);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(p)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &p);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	phpqt_qopenglwidget_redirected(&result, &_0, p);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_OpenGLWidgets_QOpenGLWidget_QOpenGLWidget, paintEngine)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qopenglwidget_paint_engine(&_0));
}

