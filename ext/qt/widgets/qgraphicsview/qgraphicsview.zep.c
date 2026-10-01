
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
#include "src/widgets-qgraphicsview.h"
#include "kernel/object.h"
#include "kernel/string.h"
#include "kernel/memory.h"
#include "kernel/operators.h"


ZEPHIR_INIT_CLASS(Qt_Widgets_QGraphicsView_QGraphicsView)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Widgets\\QGraphicsView, QGraphicsView, qt, widgets_qgraphicsview_qgraphicsview, qt_widgets_qgraphicsview_qgraphicsview_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Widgets_QGraphicsView_QGraphicsView, staticMetaObject)
{

	RETURN_LONG(phpqt_qgraphicsview_static_meta_object());
}

PHP_METHOD(Qt_Widgets_QGraphicsView_QGraphicsView, tr)
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
	phpqt_qgraphicsview_tr(&result, s, c, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Widgets_QGraphicsView_QGraphicsView, new_)
{
	zval *parent__param = NULL, _0;
	zend_long parent_;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(0, 1)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(parent_)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(0, 1, &parent__param);
	if (!parent__param) {
		parent_ = 0;
	} else {
		}
	ZVAL_LONG(&_0, parent_);
	RETURN_LONG(phpqt_qgraphicsview_new(&_0));
}

PHP_METHOD(Qt_Widgets_QGraphicsView_QGraphicsView, newQGraphicsSceneQWidget)
{
	zval *scene_param = NULL, *parent__param = NULL, _0, _1;
	zend_long scene, parent_;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_LONG(scene)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(parent_)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 1, &scene_param, &parent__param);
	if (!parent__param) {
		parent_ = 0;
	} else {
		}
	ZVAL_LONG(&_0, scene);
	ZVAL_LONG(&_1, parent_);
	RETURN_LONG(phpqt_qgraphicsview_new_q_graphics_scene_q_widget(&_0, &_1));
}

PHP_METHOD(Qt_Widgets_QGraphicsView_QGraphicsView, sizeHint)
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
	phpqt_qgraphicsview_size_hint(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Widgets_QGraphicsView_QGraphicsView, renderHints)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qgraphicsview_render_hints(&_0));
}

PHP_METHOD(Qt_Widgets_QGraphicsView_QGraphicsView, setRenderHint)
{
	zend_bool enabled;
	zval *handle_param = NULL, *hint_param = NULL, *enabled_param = NULL, _0, _1, _2;
	zend_long handle, hint;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(2, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(hint)
		Z_PARAM_OPTIONAL
		Z_PARAM_BOOL(enabled)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 1, &handle_param, &hint_param, &enabled_param);
	if (!enabled_param) {
		enabled = 1;
	} else {
		}
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, hint);
	ZVAL_BOOL(&_2, (enabled ? 1 : 0));
	phpqt_qgraphicsview_set_render_hint(&_0, &_1, &_2);
}

PHP_METHOD(Qt_Widgets_QGraphicsView_QGraphicsView, setRenderHints)
{
	zval *handle_param = NULL, *hints_param = NULL, _0, _1;
	zend_long handle, hints;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(hints)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &hints_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, hints);
	phpqt_qgraphicsview_set_render_hints(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QGraphicsView_QGraphicsView, alignment)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qgraphicsview_alignment(&_0));
}

PHP_METHOD(Qt_Widgets_QGraphicsView_QGraphicsView, setAlignment)
{
	zval *handle_param = NULL, *alignment_param = NULL, _0, _1;
	zend_long handle, alignment;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(alignment)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &alignment_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, alignment);
	phpqt_qgraphicsview_set_alignment(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QGraphicsView_QGraphicsView, transformationAnchor)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qgraphicsview_transformation_anchor(&_0));
}

PHP_METHOD(Qt_Widgets_QGraphicsView_QGraphicsView, setTransformationAnchor)
{
	zval *handle_param = NULL, *anchor_param = NULL, _0, _1;
	zend_long handle, anchor;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(anchor)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &anchor_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, anchor);
	phpqt_qgraphicsview_set_transformation_anchor(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QGraphicsView_QGraphicsView, resizeAnchor)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qgraphicsview_resize_anchor(&_0));
}

PHP_METHOD(Qt_Widgets_QGraphicsView_QGraphicsView, setResizeAnchor)
{
	zval *handle_param = NULL, *anchor_param = NULL, _0, _1;
	zend_long handle, anchor;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(anchor)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &anchor_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, anchor);
	phpqt_qgraphicsview_set_resize_anchor(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QGraphicsView_QGraphicsView, viewportUpdateMode)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qgraphicsview_viewport_update_mode(&_0));
}

PHP_METHOD(Qt_Widgets_QGraphicsView_QGraphicsView, setViewportUpdateMode)
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
	phpqt_qgraphicsview_set_viewport_update_mode(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QGraphicsView_QGraphicsView, optimizationFlags)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qgraphicsview_optimization_flags(&_0));
}

PHP_METHOD(Qt_Widgets_QGraphicsView_QGraphicsView, setOptimizationFlag)
{
	zend_bool enabled;
	zval *handle_param = NULL, *flag_param = NULL, *enabled_param = NULL, _0, _1, _2;
	zend_long handle, flag;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(2, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(flag)
		Z_PARAM_OPTIONAL
		Z_PARAM_BOOL(enabled)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 1, &handle_param, &flag_param, &enabled_param);
	if (!enabled_param) {
		enabled = 1;
	} else {
		}
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, flag);
	ZVAL_BOOL(&_2, (enabled ? 1 : 0));
	phpqt_qgraphicsview_set_optimization_flag(&_0, &_1, &_2);
}

PHP_METHOD(Qt_Widgets_QGraphicsView_QGraphicsView, setOptimizationFlags)
{
	zval *handle_param = NULL, *flags_param = NULL, _0, _1;
	zend_long handle, flags;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(flags)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &flags_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, flags);
	phpqt_qgraphicsview_set_optimization_flags(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QGraphicsView_QGraphicsView, dragMode)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qgraphicsview_drag_mode(&_0));
}

PHP_METHOD(Qt_Widgets_QGraphicsView_QGraphicsView, setDragMode)
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
	phpqt_qgraphicsview_set_drag_mode(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QGraphicsView_QGraphicsView, rubberBandSelectionMode)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qgraphicsview_rubber_band_selection_mode(&_0));
}

PHP_METHOD(Qt_Widgets_QGraphicsView_QGraphicsView, setRubberBandSelectionMode)
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
	phpqt_qgraphicsview_set_rubber_band_selection_mode(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QGraphicsView_QGraphicsView, rubberBandRect)
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
	phpqt_qgraphicsview_rubber_band_rect(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Widgets_QGraphicsView_QGraphicsView, cacheMode)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qgraphicsview_cache_mode(&_0));
}

PHP_METHOD(Qt_Widgets_QGraphicsView_QGraphicsView, setCacheMode)
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
	phpqt_qgraphicsview_set_cache_mode(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QGraphicsView_QGraphicsView, resetCachedContent)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qgraphicsview_reset_cached_content(&_0);
}

PHP_METHOD(Qt_Widgets_QGraphicsView_QGraphicsView, isInteractive)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qgraphicsview_is_interactive(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Widgets_QGraphicsView_QGraphicsView, setInteractive)
{
	zend_bool allowed;
	zval *handle_param = NULL, *allowed_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_BOOL(allowed)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &allowed_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_BOOL(&_1, (allowed ? 1 : 0));
	phpqt_qgraphicsview_set_interactive(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QGraphicsView_QGraphicsView, scene)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qgraphicsview_scene(&_0));
}

PHP_METHOD(Qt_Widgets_QGraphicsView_QGraphicsView, setScene)
{
	zval *handle_param = NULL, *scene_param = NULL, _0, _1;
	zend_long handle, scene;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(scene)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &scene_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, scene);
	phpqt_qgraphicsview_set_scene(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QGraphicsView_QGraphicsView, sceneRect)
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
	phpqt_qgraphicsview_scene_rect(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Widgets_QGraphicsView_QGraphicsView, setSceneRect)
{
	double rectX, rectY, rectWidth, rectHeight;
	zval *handle_param = NULL, *rectX_param = NULL, *rectY_param = NULL, *rectWidth_param = NULL, *rectHeight_param = NULL, _0, _1, _2, _3, _4;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZEND_PARSE_PARAMETERS_START(5, 5)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(rectX)
		Z_PARAM_ZVAL(rectY)
		Z_PARAM_ZVAL(rectWidth)
		Z_PARAM_ZVAL(rectHeight)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(5, 0, &handle_param, &rectX_param, &rectY_param, &rectWidth_param, &rectHeight_param);
	rectX = zephir_get_doubleval(rectX_param);
	rectY = zephir_get_doubleval(rectY_param);
	rectWidth = zephir_get_doubleval(rectWidth_param);
	rectHeight = zephir_get_doubleval(rectHeight_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, rectX);
	ZVAL_DOUBLE(&_2, rectY);
	ZVAL_DOUBLE(&_3, rectWidth);
	ZVAL_DOUBLE(&_4, rectHeight);
	phpqt_qgraphicsview_set_scene_rect(&_0, &_1, &_2, &_3, &_4);
}

PHP_METHOD(Qt_Widgets_QGraphicsView_QGraphicsView, setSceneRectQrealQrealQrealQreal)
{
	double x, y, w, h;
	zval *handle_param = NULL, *x_param = NULL, *y_param = NULL, *w_param = NULL, *h_param = NULL, _0, _1, _2, _3, _4;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZEND_PARSE_PARAMETERS_START(5, 5)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(x)
		Z_PARAM_ZVAL(y)
		Z_PARAM_ZVAL(w)
		Z_PARAM_ZVAL(h)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(5, 0, &handle_param, &x_param, &y_param, &w_param, &h_param);
	x = zephir_get_doubleval(x_param);
	y = zephir_get_doubleval(y_param);
	w = zephir_get_doubleval(w_param);
	h = zephir_get_doubleval(h_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, x);
	ZVAL_DOUBLE(&_2, y);
	ZVAL_DOUBLE(&_3, w);
	ZVAL_DOUBLE(&_4, h);
	phpqt_qgraphicsview_set_scene_rect_qreal_qreal_qreal_qreal(&_0, &_1, &_2, &_3, &_4);
}

PHP_METHOD(Qt_Widgets_QGraphicsView_QGraphicsView, transform)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qgraphicsview_transform(&_0));
}

PHP_METHOD(Qt_Widgets_QGraphicsView_QGraphicsView, viewportTransform)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qgraphicsview_viewport_transform(&_0));
}

PHP_METHOD(Qt_Widgets_QGraphicsView_QGraphicsView, isTransformed)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qgraphicsview_is_transformed(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Widgets_QGraphicsView_QGraphicsView, setTransform)
{
	zend_bool combine;
	zval *handle_param = NULL, *matrix_param = NULL, *combine_param = NULL, _0, _1, _2;
	zend_long handle, matrix;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(2, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(matrix)
		Z_PARAM_OPTIONAL
		Z_PARAM_BOOL(combine)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 1, &handle_param, &matrix_param, &combine_param);
	if (!combine_param) {
		combine = 0;
	} else {
		}
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, matrix);
	ZVAL_BOOL(&_2, (combine ? 1 : 0));
	phpqt_qgraphicsview_set_transform(&_0, &_1, &_2);
}

PHP_METHOD(Qt_Widgets_QGraphicsView_QGraphicsView, resetTransform)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qgraphicsview_reset_transform(&_0);
}

PHP_METHOD(Qt_Widgets_QGraphicsView_QGraphicsView, rotate)
{
	double angle;
	zval *handle_param = NULL, *angle_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(angle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &angle_param);
	angle = zephir_get_doubleval(angle_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, angle);
	phpqt_qgraphicsview_rotate(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QGraphicsView_QGraphicsView, scale)
{
	double sx, sy;
	zval *handle_param = NULL, *sx_param = NULL, *sy_param = NULL, _0, _1, _2;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(sx)
		Z_PARAM_ZVAL(sy)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &sx_param, &sy_param);
	sx = zephir_get_doubleval(sx_param);
	sy = zephir_get_doubleval(sy_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, sx);
	ZVAL_DOUBLE(&_2, sy);
	phpqt_qgraphicsview_scale(&_0, &_1, &_2);
}

PHP_METHOD(Qt_Widgets_QGraphicsView_QGraphicsView, shear)
{
	double sh, sv;
	zval *handle_param = NULL, *sh_param = NULL, *sv_param = NULL, _0, _1, _2;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(sh)
		Z_PARAM_ZVAL(sv)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &sh_param, &sv_param);
	sh = zephir_get_doubleval(sh_param);
	sv = zephir_get_doubleval(sv_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, sh);
	ZVAL_DOUBLE(&_2, sv);
	phpqt_qgraphicsview_shear(&_0, &_1, &_2);
}

PHP_METHOD(Qt_Widgets_QGraphicsView_QGraphicsView, translate)
{
	double dx, dy;
	zval *handle_param = NULL, *dx_param = NULL, *dy_param = NULL, _0, _1, _2;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(dx)
		Z_PARAM_ZVAL(dy)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &dx_param, &dy_param);
	dx = zephir_get_doubleval(dx_param);
	dy = zephir_get_doubleval(dy_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, dx);
	ZVAL_DOUBLE(&_2, dy);
	phpqt_qgraphicsview_translate(&_0, &_1, &_2);
}

PHP_METHOD(Qt_Widgets_QGraphicsView_QGraphicsView, centerOn)
{
	double posX, posY;
	zval *handle_param = NULL, *posX_param = NULL, *posY_param = NULL, _0, _1, _2;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(posX)
		Z_PARAM_ZVAL(posY)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &posX_param, &posY_param);
	posX = zephir_get_doubleval(posX_param);
	posY = zephir_get_doubleval(posY_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, posX);
	ZVAL_DOUBLE(&_2, posY);
	phpqt_qgraphicsview_center_on(&_0, &_1, &_2);
}

PHP_METHOD(Qt_Widgets_QGraphicsView_QGraphicsView, centerOnQrealQreal)
{
	double x, y;
	zval *handle_param = NULL, *x_param = NULL, *y_param = NULL, _0, _1, _2;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(x)
		Z_PARAM_ZVAL(y)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &x_param, &y_param);
	x = zephir_get_doubleval(x_param);
	y = zephir_get_doubleval(y_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, x);
	ZVAL_DOUBLE(&_2, y);
	phpqt_qgraphicsview_center_on_qreal_qreal(&_0, &_1, &_2);
}

PHP_METHOD(Qt_Widgets_QGraphicsView_QGraphicsView, centerOnQGraphicsItem)
{
	zval *handle_param = NULL, *item_param = NULL, _0, _1;
	zend_long handle, item;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(item)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &item_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, item);
	phpqt_qgraphicsview_center_on_q_graphics_item(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QGraphicsView_QGraphicsView, ensureVisible)
{
	double rectX, rectY, rectWidth, rectHeight;
	zval *handle_param = NULL, *rectX_param = NULL, *rectY_param = NULL, *rectWidth_param = NULL, *rectHeight_param = NULL, *xmargin_param = NULL, *ymargin_param = NULL, _0, _1, _2, _3, _4, _5, _6;
	zend_long handle, xmargin, ymargin;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_5);
	ZVAL_UNDEF(&_6);
	ZEND_PARSE_PARAMETERS_START(5, 7)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(rectX)
		Z_PARAM_ZVAL(rectY)
		Z_PARAM_ZVAL(rectWidth)
		Z_PARAM_ZVAL(rectHeight)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(xmargin)
		Z_PARAM_LONG(ymargin)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(5, 2, &handle_param, &rectX_param, &rectY_param, &rectWidth_param, &rectHeight_param, &xmargin_param, &ymargin_param);
	rectX = zephir_get_doubleval(rectX_param);
	rectY = zephir_get_doubleval(rectY_param);
	rectWidth = zephir_get_doubleval(rectWidth_param);
	rectHeight = zephir_get_doubleval(rectHeight_param);
	if (!xmargin_param) {
		xmargin = 50;
	} else {
		}
	if (!ymargin_param) {
		ymargin = 50;
	} else {
		}
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, rectX);
	ZVAL_DOUBLE(&_2, rectY);
	ZVAL_DOUBLE(&_3, rectWidth);
	ZVAL_DOUBLE(&_4, rectHeight);
	ZVAL_LONG(&_5, xmargin);
	ZVAL_LONG(&_6, ymargin);
	phpqt_qgraphicsview_ensure_visible(&_0, &_1, &_2, &_3, &_4, &_5, &_6);
}

PHP_METHOD(Qt_Widgets_QGraphicsView_QGraphicsView, ensureVisibleQrealQrealQrealQrealIntInt)
{
	double x, y, w, h;
	zval *handle_param = NULL, *x_param = NULL, *y_param = NULL, *w_param = NULL, *h_param = NULL, *xmargin_param = NULL, *ymargin_param = NULL, _0, _1, _2, _3, _4, _5, _6;
	zend_long handle, xmargin, ymargin;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_5);
	ZVAL_UNDEF(&_6);
	ZEND_PARSE_PARAMETERS_START(5, 7)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(x)
		Z_PARAM_ZVAL(y)
		Z_PARAM_ZVAL(w)
		Z_PARAM_ZVAL(h)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(xmargin)
		Z_PARAM_LONG(ymargin)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(5, 2, &handle_param, &x_param, &y_param, &w_param, &h_param, &xmargin_param, &ymargin_param);
	x = zephir_get_doubleval(x_param);
	y = zephir_get_doubleval(y_param);
	w = zephir_get_doubleval(w_param);
	h = zephir_get_doubleval(h_param);
	if (!xmargin_param) {
		xmargin = 50;
	} else {
		}
	if (!ymargin_param) {
		ymargin = 50;
	} else {
		}
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, x);
	ZVAL_DOUBLE(&_2, y);
	ZVAL_DOUBLE(&_3, w);
	ZVAL_DOUBLE(&_4, h);
	ZVAL_LONG(&_5, xmargin);
	ZVAL_LONG(&_6, ymargin);
	phpqt_qgraphicsview_ensure_visible_qreal_qreal_qreal_qreal_int_int(&_0, &_1, &_2, &_3, &_4, &_5, &_6);
}

PHP_METHOD(Qt_Widgets_QGraphicsView_QGraphicsView, ensureVisibleQGraphicsItemIntInt)
{
	zval *handle_param = NULL, *item_param = NULL, *xmargin_param = NULL, *ymargin_param = NULL, _0, _1, _2, _3;
	zend_long handle, item, xmargin, ymargin;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(2, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(item)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(xmargin)
		Z_PARAM_LONG(ymargin)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 2, &handle_param, &item_param, &xmargin_param, &ymargin_param);
	if (!xmargin_param) {
		xmargin = 50;
	} else {
		}
	if (!ymargin_param) {
		ymargin = 50;
	} else {
		}
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, item);
	ZVAL_LONG(&_2, xmargin);
	ZVAL_LONG(&_3, ymargin);
	phpqt_qgraphicsview_ensure_visible_q_graphics_item_int_int(&_0, &_1, &_2, &_3);
}

PHP_METHOD(Qt_Widgets_QGraphicsView_QGraphicsView, fitInView)
{
	double rectX, rectY, rectWidth, rectHeight;
	zval *handle_param = NULL, *rectX_param = NULL, *rectY_param = NULL, *rectWidth_param = NULL, *rectHeight_param = NULL, *aspectRadioMode = NULL, aspectRadioMode_sub, __$null, _0, _1, _2, _3, _4;
	zend_long handle;

	ZVAL_UNDEF(&aspectRadioMode_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(5, 6)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(rectX)
		Z_PARAM_ZVAL(rectY)
		Z_PARAM_ZVAL(rectWidth)
		Z_PARAM_ZVAL(rectHeight)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(aspectRadioMode)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(5, 1, &handle_param, &rectX_param, &rectY_param, &rectWidth_param, &rectHeight_param, &aspectRadioMode);
	rectX = zephir_get_doubleval(rectX_param);
	rectY = zephir_get_doubleval(rectY_param);
	rectWidth = zephir_get_doubleval(rectWidth_param);
	rectHeight = zephir_get_doubleval(rectHeight_param);
	if (!aspectRadioMode) {
		aspectRadioMode = &aspectRadioMode_sub;
		aspectRadioMode = &__$null;
	}
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, rectX);
	ZVAL_DOUBLE(&_2, rectY);
	ZVAL_DOUBLE(&_3, rectWidth);
	ZVAL_DOUBLE(&_4, rectHeight);
	phpqt_qgraphicsview_fit_in_view(&_0, &_1, &_2, &_3, &_4, aspectRadioMode);
}

PHP_METHOD(Qt_Widgets_QGraphicsView_QGraphicsView, fitInViewQrealQrealQrealQrealQtAspectRatioMode)
{
	double x, y, w, h;
	zval *handle_param = NULL, *x_param = NULL, *y_param = NULL, *w_param = NULL, *h_param = NULL, *aspectRadioMode = NULL, aspectRadioMode_sub, __$null, _0, _1, _2, _3, _4;
	zend_long handle;

	ZVAL_UNDEF(&aspectRadioMode_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(5, 6)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(x)
		Z_PARAM_ZVAL(y)
		Z_PARAM_ZVAL(w)
		Z_PARAM_ZVAL(h)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(aspectRadioMode)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(5, 1, &handle_param, &x_param, &y_param, &w_param, &h_param, &aspectRadioMode);
	x = zephir_get_doubleval(x_param);
	y = zephir_get_doubleval(y_param);
	w = zephir_get_doubleval(w_param);
	h = zephir_get_doubleval(h_param);
	if (!aspectRadioMode) {
		aspectRadioMode = &aspectRadioMode_sub;
		aspectRadioMode = &__$null;
	}
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, x);
	ZVAL_DOUBLE(&_2, y);
	ZVAL_DOUBLE(&_3, w);
	ZVAL_DOUBLE(&_4, h);
	phpqt_qgraphicsview_fit_in_view_qreal_qreal_qreal_qreal_qt_aspect_ratio_mode(&_0, &_1, &_2, &_3, &_4, aspectRadioMode);
}

PHP_METHOD(Qt_Widgets_QGraphicsView_QGraphicsView, fitInViewQGraphicsItemQtAspectRatioMode)
{
	zval *handle_param = NULL, *item_param = NULL, *aspectRadioMode = NULL, aspectRadioMode_sub, __$null, _0, _1;
	zend_long handle, item;

	ZVAL_UNDEF(&aspectRadioMode_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(2, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(item)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(aspectRadioMode)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 1, &handle_param, &item_param, &aspectRadioMode);
	if (!aspectRadioMode) {
		aspectRadioMode = &aspectRadioMode_sub;
		aspectRadioMode = &__$null;
	}
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, item);
	phpqt_qgraphicsview_fit_in_view_q_graphics_item_qt_aspect_ratio_mode(&_0, &_1, aspectRadioMode);
}

PHP_METHOD(Qt_Widgets_QGraphicsView_QGraphicsView, render)
{
	zval *handle_param = NULL, *painter_param = NULL, *targetX = NULL, targetX_sub, *targetY = NULL, targetY_sub, *targetWidth = NULL, targetWidth_sub, *targetHeight = NULL, targetHeight_sub, *sourceX = NULL, sourceX_sub, *sourceY = NULL, sourceY_sub, *sourceWidth = NULL, sourceWidth_sub, *sourceHeight = NULL, sourceHeight_sub, *aspectRatioMode = NULL, aspectRatioMode_sub, __$null, _0, _1;
	zend_long handle, painter;

	ZVAL_UNDEF(&targetX_sub);
	ZVAL_UNDEF(&targetY_sub);
	ZVAL_UNDEF(&targetWidth_sub);
	ZVAL_UNDEF(&targetHeight_sub);
	ZVAL_UNDEF(&sourceX_sub);
	ZVAL_UNDEF(&sourceY_sub);
	ZVAL_UNDEF(&sourceWidth_sub);
	ZVAL_UNDEF(&sourceHeight_sub);
	ZVAL_UNDEF(&aspectRatioMode_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(2, 11)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(painter)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(targetX)
		Z_PARAM_ZVAL_OR_NULL(targetY)
		Z_PARAM_ZVAL_OR_NULL(targetWidth)
		Z_PARAM_ZVAL_OR_NULL(targetHeight)
		Z_PARAM_ZVAL_OR_NULL(sourceX)
		Z_PARAM_ZVAL_OR_NULL(sourceY)
		Z_PARAM_ZVAL_OR_NULL(sourceWidth)
		Z_PARAM_ZVAL_OR_NULL(sourceHeight)
		Z_PARAM_ZVAL_OR_NULL(aspectRatioMode)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 9, &handle_param, &painter_param, &targetX, &targetY, &targetWidth, &targetHeight, &sourceX, &sourceY, &sourceWidth, &sourceHeight, &aspectRatioMode);
	if (!targetX) {
		targetX = &targetX_sub;
		targetX = &__$null;
	}
	if (!targetY) {
		targetY = &targetY_sub;
		targetY = &__$null;
	}
	if (!targetWidth) {
		targetWidth = &targetWidth_sub;
		targetWidth = &__$null;
	}
	if (!targetHeight) {
		targetHeight = &targetHeight_sub;
		targetHeight = &__$null;
	}
	if (!sourceX) {
		sourceX = &sourceX_sub;
		sourceX = &__$null;
	}
	if (!sourceY) {
		sourceY = &sourceY_sub;
		sourceY = &__$null;
	}
	if (!sourceWidth) {
		sourceWidth = &sourceWidth_sub;
		sourceWidth = &__$null;
	}
	if (!sourceHeight) {
		sourceHeight = &sourceHeight_sub;
		sourceHeight = &__$null;
	}
	if (!aspectRatioMode) {
		aspectRatioMode = &aspectRatioMode_sub;
		aspectRatioMode = &__$null;
	}
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, painter);
	phpqt_qgraphicsview_render(&_0, &_1, targetX, targetY, targetWidth, targetHeight, sourceX, sourceY, sourceWidth, sourceHeight, aspectRatioMode);
}

PHP_METHOD(Qt_Widgets_QGraphicsView_QGraphicsView, items)
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
	phpqt_qgraphicsview_items(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Widgets_QGraphicsView_QGraphicsView, itemsQPoint)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, *posX_param = NULL, *posY_param = NULL, result, _0, _1, _2;
	zend_long handle, posX, posY;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(posX)
		Z_PARAM_LONG(posY)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 3, 0, &handle_param, &posX_param, &posY_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, posX);
	ZVAL_LONG(&_2, posY);
	phpqt_qgraphicsview_items_q_point(&result, &_0, &_1, &_2);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Widgets_QGraphicsView_QGraphicsView, itemsIntInt)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, *x_param = NULL, *y_param = NULL, result, _0, _1, _2;
	zend_long handle, x, y;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(x)
		Z_PARAM_LONG(y)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 3, 0, &handle_param, &x_param, &y_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, x);
	ZVAL_LONG(&_2, y);
	phpqt_qgraphicsview_items_int_int(&result, &_0, &_1, &_2);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Widgets_QGraphicsView_QGraphicsView, itemsQRectQtItemSelectionMode)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, *rectX_param = NULL, *rectY_param = NULL, *rectWidth_param = NULL, *rectHeight_param = NULL, *mode = NULL, mode_sub, __$null, result, _0, _1, _2, _3, _4;
	zend_long handle, rectX, rectY, rectWidth, rectHeight;

	ZVAL_UNDEF(&mode_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(5, 6)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(rectX)
		Z_PARAM_LONG(rectY)
		Z_PARAM_LONG(rectWidth)
		Z_PARAM_LONG(rectHeight)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(mode)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 5, 1, &handle_param, &rectX_param, &rectY_param, &rectWidth_param, &rectHeight_param, &mode);
	if (!mode) {
		mode = &mode_sub;
		mode = &__$null;
	}
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, rectX);
	ZVAL_LONG(&_2, rectY);
	ZVAL_LONG(&_3, rectWidth);
	ZVAL_LONG(&_4, rectHeight);
	phpqt_qgraphicsview_items_q_rect_qt_item_selection_mode(&result, &_0, &_1, &_2, &_3, &_4, mode);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Widgets_QGraphicsView_QGraphicsView, itemsIntIntIntIntQtItemSelectionMode)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, *x_param = NULL, *y_param = NULL, *w_param = NULL, *h_param = NULL, *mode = NULL, mode_sub, __$null, result, _0, _1, _2, _3, _4;
	zend_long handle, x, y, w, h;

	ZVAL_UNDEF(&mode_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(5, 6)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(x)
		Z_PARAM_LONG(y)
		Z_PARAM_LONG(w)
		Z_PARAM_LONG(h)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(mode)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 5, 1, &handle_param, &x_param, &y_param, &w_param, &h_param, &mode);
	if (!mode) {
		mode = &mode_sub;
		mode = &__$null;
	}
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, x);
	ZVAL_LONG(&_2, y);
	ZVAL_LONG(&_3, w);
	ZVAL_LONG(&_4, h);
	phpqt_qgraphicsview_items_int_int_int_int_qt_item_selection_mode(&result, &_0, &_1, &_2, &_3, &_4, mode);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Widgets_QGraphicsView_QGraphicsView, itemsQPolygonQtItemSelectionMode)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, *polygon_param = NULL, *mode = NULL, mode_sub, __$null, result, _0, _1;
	zend_long handle, polygon;

	ZVAL_UNDEF(&mode_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(2, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(polygon)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(mode)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 1, &handle_param, &polygon_param, &mode);
	if (!mode) {
		mode = &mode_sub;
		mode = &__$null;
	}
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, polygon);
	phpqt_qgraphicsview_items_q_polygon_qt_item_selection_mode(&result, &_0, &_1, mode);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Widgets_QGraphicsView_QGraphicsView, itemsQPainterPathQtItemSelectionMode)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, *path_param = NULL, *mode = NULL, mode_sub, __$null, result, _0, _1;
	zend_long handle, path;

	ZVAL_UNDEF(&mode_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(2, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(path)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(mode)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 1, &handle_param, &path_param, &mode);
	if (!mode) {
		mode = &mode_sub;
		mode = &__$null;
	}
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, path);
	phpqt_qgraphicsview_items_q_painter_path_qt_item_selection_mode(&result, &_0, &_1, mode);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Widgets_QGraphicsView_QGraphicsView, itemAt)
{
	zval *handle_param = NULL, *posX_param = NULL, *posY_param = NULL, _0, _1, _2;
	zend_long handle, posX, posY;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(posX)
		Z_PARAM_LONG(posY)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &posX_param, &posY_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, posX);
	ZVAL_LONG(&_2, posY);
	RETURN_LONG(phpqt_qgraphicsview_item_at(&_0, &_1, &_2));
}

PHP_METHOD(Qt_Widgets_QGraphicsView_QGraphicsView, itemAtIntInt)
{
	zval *handle_param = NULL, *x_param = NULL, *y_param = NULL, _0, _1, _2;
	zend_long handle, x, y;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(x)
		Z_PARAM_LONG(y)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &x_param, &y_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, x);
	ZVAL_LONG(&_2, y);
	RETURN_LONG(phpqt_qgraphicsview_item_at_int_int(&_0, &_1, &_2));
}

PHP_METHOD(Qt_Widgets_QGraphicsView_QGraphicsView, mapToScene)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, *pointX_param = NULL, *pointY_param = NULL, result, _0, _1, _2;
	zend_long handle, pointX, pointY;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(pointX)
		Z_PARAM_LONG(pointY)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 3, 0, &handle_param, &pointX_param, &pointY_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, pointX);
	ZVAL_LONG(&_2, pointY);
	phpqt_qgraphicsview_map_to_scene(&result, &_0, &_1, &_2);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Widgets_QGraphicsView_QGraphicsView, mapToSceneQRect)
{
	zval *handle_param = NULL, *rectX_param = NULL, *rectY_param = NULL, *rectWidth_param = NULL, *rectHeight_param = NULL, _0, _1, _2, _3, _4;
	zend_long handle, rectX, rectY, rectWidth, rectHeight;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZEND_PARSE_PARAMETERS_START(5, 5)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(rectX)
		Z_PARAM_LONG(rectY)
		Z_PARAM_LONG(rectWidth)
		Z_PARAM_LONG(rectHeight)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(5, 0, &handle_param, &rectX_param, &rectY_param, &rectWidth_param, &rectHeight_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, rectX);
	ZVAL_LONG(&_2, rectY);
	ZVAL_LONG(&_3, rectWidth);
	ZVAL_LONG(&_4, rectHeight);
	RETURN_LONG(phpqt_qgraphicsview_map_to_scene_q_rect(&_0, &_1, &_2, &_3, &_4));
}

PHP_METHOD(Qt_Widgets_QGraphicsView_QGraphicsView, mapToSceneQPolygon)
{
	zval *handle_param = NULL, *polygon_param = NULL, _0, _1;
	zend_long handle, polygon;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(polygon)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &polygon_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, polygon);
	RETURN_LONG(phpqt_qgraphicsview_map_to_scene_q_polygon(&_0, &_1));
}

PHP_METHOD(Qt_Widgets_QGraphicsView_QGraphicsView, mapToSceneQPainterPath)
{
	zval *handle_param = NULL, *path_param = NULL, _0, _1;
	zend_long handle, path;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(path)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &path_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, path);
	RETURN_LONG(phpqt_qgraphicsview_map_to_scene_q_painter_path(&_0, &_1));
}

PHP_METHOD(Qt_Widgets_QGraphicsView_QGraphicsView, mapFromScene)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	double pointX, pointY;
	zval *handle_param = NULL, *pointX_param = NULL, *pointY_param = NULL, result, _0, _1, _2;
	zend_long handle;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(pointX)
		Z_PARAM_ZVAL(pointY)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 3, 0, &handle_param, &pointX_param, &pointY_param);
	pointX = zephir_get_doubleval(pointX_param);
	pointY = zephir_get_doubleval(pointY_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, pointX);
	ZVAL_DOUBLE(&_2, pointY);
	phpqt_qgraphicsview_map_from_scene(&result, &_0, &_1, &_2);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Widgets_QGraphicsView_QGraphicsView, mapFromSceneQRectF)
{
	double rectX, rectY, rectWidth, rectHeight;
	zval *handle_param = NULL, *rectX_param = NULL, *rectY_param = NULL, *rectWidth_param = NULL, *rectHeight_param = NULL, _0, _1, _2, _3, _4;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZEND_PARSE_PARAMETERS_START(5, 5)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(rectX)
		Z_PARAM_ZVAL(rectY)
		Z_PARAM_ZVAL(rectWidth)
		Z_PARAM_ZVAL(rectHeight)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(5, 0, &handle_param, &rectX_param, &rectY_param, &rectWidth_param, &rectHeight_param);
	rectX = zephir_get_doubleval(rectX_param);
	rectY = zephir_get_doubleval(rectY_param);
	rectWidth = zephir_get_doubleval(rectWidth_param);
	rectHeight = zephir_get_doubleval(rectHeight_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, rectX);
	ZVAL_DOUBLE(&_2, rectY);
	ZVAL_DOUBLE(&_3, rectWidth);
	ZVAL_DOUBLE(&_4, rectHeight);
	RETURN_LONG(phpqt_qgraphicsview_map_from_scene_q_rect_f(&_0, &_1, &_2, &_3, &_4));
}

PHP_METHOD(Qt_Widgets_QGraphicsView_QGraphicsView, mapFromSceneQPolygonF)
{
	zval *handle_param = NULL, *polygon_param = NULL, _0, _1;
	zend_long handle, polygon;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(polygon)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &polygon_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, polygon);
	RETURN_LONG(phpqt_qgraphicsview_map_from_scene_q_polygon_f(&_0, &_1));
}

PHP_METHOD(Qt_Widgets_QGraphicsView_QGraphicsView, mapFromSceneQPainterPath)
{
	zval *handle_param = NULL, *path_param = NULL, _0, _1;
	zend_long handle, path;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(path)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &path_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, path);
	RETURN_LONG(phpqt_qgraphicsview_map_from_scene_q_painter_path(&_0, &_1));
}

PHP_METHOD(Qt_Widgets_QGraphicsView_QGraphicsView, mapToSceneIntInt)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, *x_param = NULL, *y_param = NULL, result, _0, _1, _2;
	zend_long handle, x, y;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(x)
		Z_PARAM_LONG(y)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 3, 0, &handle_param, &x_param, &y_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, x);
	ZVAL_LONG(&_2, y);
	phpqt_qgraphicsview_map_to_scene_int_int(&result, &_0, &_1, &_2);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Widgets_QGraphicsView_QGraphicsView, mapToSceneIntIntIntInt)
{
	zval *handle_param = NULL, *x_param = NULL, *y_param = NULL, *w_param = NULL, *h_param = NULL, _0, _1, _2, _3, _4;
	zend_long handle, x, y, w, h;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZEND_PARSE_PARAMETERS_START(5, 5)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(x)
		Z_PARAM_LONG(y)
		Z_PARAM_LONG(w)
		Z_PARAM_LONG(h)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(5, 0, &handle_param, &x_param, &y_param, &w_param, &h_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, x);
	ZVAL_LONG(&_2, y);
	ZVAL_LONG(&_3, w);
	ZVAL_LONG(&_4, h);
	RETURN_LONG(phpqt_qgraphicsview_map_to_scene_int_int_int_int(&_0, &_1, &_2, &_3, &_4));
}

PHP_METHOD(Qt_Widgets_QGraphicsView_QGraphicsView, mapFromSceneQrealQreal)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	double x, y;
	zval *handle_param = NULL, *x_param = NULL, *y_param = NULL, result, _0, _1, _2;
	zend_long handle;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(x)
		Z_PARAM_ZVAL(y)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 3, 0, &handle_param, &x_param, &y_param);
	x = zephir_get_doubleval(x_param);
	y = zephir_get_doubleval(y_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, x);
	ZVAL_DOUBLE(&_2, y);
	phpqt_qgraphicsview_map_from_scene_qreal_qreal(&result, &_0, &_1, &_2);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Widgets_QGraphicsView_QGraphicsView, mapFromSceneQrealQrealQrealQreal)
{
	double x, y, w, h;
	zval *handle_param = NULL, *x_param = NULL, *y_param = NULL, *w_param = NULL, *h_param = NULL, _0, _1, _2, _3, _4;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZEND_PARSE_PARAMETERS_START(5, 5)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(x)
		Z_PARAM_ZVAL(y)
		Z_PARAM_ZVAL(w)
		Z_PARAM_ZVAL(h)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(5, 0, &handle_param, &x_param, &y_param, &w_param, &h_param);
	x = zephir_get_doubleval(x_param);
	y = zephir_get_doubleval(y_param);
	w = zephir_get_doubleval(w_param);
	h = zephir_get_doubleval(h_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, x);
	ZVAL_DOUBLE(&_2, y);
	ZVAL_DOUBLE(&_3, w);
	ZVAL_DOUBLE(&_4, h);
	RETURN_LONG(phpqt_qgraphicsview_map_from_scene_qreal_qreal_qreal_qreal(&_0, &_1, &_2, &_3, &_4));
}

PHP_METHOD(Qt_Widgets_QGraphicsView_QGraphicsView, inputMethodQuery)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, *query_param = NULL, result, _0, _1;
	zend_long handle, query;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(query)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &query_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, query);
	phpqt_qgraphicsview_input_method_query(&result, &_0, &_1);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Widgets_QGraphicsView_QGraphicsView, backgroundBrush)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qgraphicsview_background_brush(&_0));
}

PHP_METHOD(Qt_Widgets_QGraphicsView_QGraphicsView, setBackgroundBrush)
{
	zval *handle_param = NULL, *brush_param = NULL, _0, _1;
	zend_long handle, brush;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(brush)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &brush_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, brush);
	phpqt_qgraphicsview_set_background_brush(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QGraphicsView_QGraphicsView, foregroundBrush)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qgraphicsview_foreground_brush(&_0));
}

PHP_METHOD(Qt_Widgets_QGraphicsView_QGraphicsView, setForegroundBrush)
{
	zval *handle_param = NULL, *brush_param = NULL, _0, _1;
	zend_long handle, brush;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(brush)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &brush_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, brush);
	phpqt_qgraphicsview_set_foreground_brush(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QGraphicsView_QGraphicsView, updateScene)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval rects;
	zval *handle_param = NULL, *rects_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&rects);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ARRAY(rects)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &rects_param);
	zephir_get_arrval(&rects, rects_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qgraphicsview_update_scene(&_0, &rects);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_Widgets_QGraphicsView_QGraphicsView, invalidateScene)
{
	zval *handle_param = NULL, *rectX = NULL, rectX_sub, *rectY = NULL, rectY_sub, *rectWidth = NULL, rectWidth_sub, *rectHeight = NULL, rectHeight_sub, *layers = NULL, layers_sub, __$null, _0;
	zend_long handle;

	ZVAL_UNDEF(&rectX_sub);
	ZVAL_UNDEF(&rectY_sub);
	ZVAL_UNDEF(&rectWidth_sub);
	ZVAL_UNDEF(&rectHeight_sub);
	ZVAL_UNDEF(&layers_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(1, 6)
		Z_PARAM_LONG(handle)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(rectX)
		Z_PARAM_ZVAL_OR_NULL(rectY)
		Z_PARAM_ZVAL_OR_NULL(rectWidth)
		Z_PARAM_ZVAL_OR_NULL(rectHeight)
		Z_PARAM_ZVAL_OR_NULL(layers)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 5, &handle_param, &rectX, &rectY, &rectWidth, &rectHeight, &layers);
	if (!rectX) {
		rectX = &rectX_sub;
		rectX = &__$null;
	}
	if (!rectY) {
		rectY = &rectY_sub;
		rectY = &__$null;
	}
	if (!rectWidth) {
		rectWidth = &rectWidth_sub;
		rectWidth = &__$null;
	}
	if (!rectHeight) {
		rectHeight = &rectHeight_sub;
		rectHeight = &__$null;
	}
	if (!layers) {
		layers = &layers_sub;
		layers = &__$null;
	}
	ZVAL_LONG(&_0, handle);
	phpqt_qgraphicsview_invalidate_scene(&_0, rectX, rectY, rectWidth, rectHeight, layers);
}

PHP_METHOD(Qt_Widgets_QGraphicsView_QGraphicsView, updateSceneRect)
{
	double rectX, rectY, rectWidth, rectHeight;
	zval *handle_param = NULL, *rectX_param = NULL, *rectY_param = NULL, *rectWidth_param = NULL, *rectHeight_param = NULL, _0, _1, _2, _3, _4;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZEND_PARSE_PARAMETERS_START(5, 5)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(rectX)
		Z_PARAM_ZVAL(rectY)
		Z_PARAM_ZVAL(rectWidth)
		Z_PARAM_ZVAL(rectHeight)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(5, 0, &handle_param, &rectX_param, &rectY_param, &rectWidth_param, &rectHeight_param);
	rectX = zephir_get_doubleval(rectX_param);
	rectY = zephir_get_doubleval(rectY_param);
	rectWidth = zephir_get_doubleval(rectWidth_param);
	rectHeight = zephir_get_doubleval(rectHeight_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, rectX);
	ZVAL_DOUBLE(&_2, rectY);
	ZVAL_DOUBLE(&_3, rectWidth);
	ZVAL_DOUBLE(&_4, rectHeight);
	phpqt_qgraphicsview_update_scene_rect(&_0, &_1, &_2, &_3, &_4);
}

PHP_METHOD(Qt_Widgets_QGraphicsView_QGraphicsView, rubberBandChanged)
{
	double fromScenePointX, fromScenePointY, toScenePointX, toScenePointY;
	zval *handle_param = NULL, *viewportRectX_param = NULL, *viewportRectY_param = NULL, *viewportRectWidth_param = NULL, *viewportRectHeight_param = NULL, *fromScenePointX_param = NULL, *fromScenePointY_param = NULL, *toScenePointX_param = NULL, *toScenePointY_param = NULL, _0, _1, _2, _3, _4, _5, _6, _7, _8;
	zend_long handle, viewportRectX, viewportRectY, viewportRectWidth, viewportRectHeight;

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
		Z_PARAM_LONG(viewportRectX)
		Z_PARAM_LONG(viewportRectY)
		Z_PARAM_LONG(viewportRectWidth)
		Z_PARAM_LONG(viewportRectHeight)
		Z_PARAM_ZVAL(fromScenePointX)
		Z_PARAM_ZVAL(fromScenePointY)
		Z_PARAM_ZVAL(toScenePointX)
		Z_PARAM_ZVAL(toScenePointY)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(9, 0, &handle_param, &viewportRectX_param, &viewportRectY_param, &viewportRectWidth_param, &viewportRectHeight_param, &fromScenePointX_param, &fromScenePointY_param, &toScenePointX_param, &toScenePointY_param);
	fromScenePointX = zephir_get_doubleval(fromScenePointX_param);
	fromScenePointY = zephir_get_doubleval(fromScenePointY_param);
	toScenePointX = zephir_get_doubleval(toScenePointX_param);
	toScenePointY = zephir_get_doubleval(toScenePointY_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, viewportRectX);
	ZVAL_LONG(&_2, viewportRectY);
	ZVAL_LONG(&_3, viewportRectWidth);
	ZVAL_LONG(&_4, viewportRectHeight);
	ZVAL_DOUBLE(&_5, fromScenePointX);
	ZVAL_DOUBLE(&_6, fromScenePointY);
	ZVAL_DOUBLE(&_7, toScenePointX);
	ZVAL_DOUBLE(&_8, toScenePointY);
	phpqt_qgraphicsview_rubber_band_changed(&_0, &_1, &_2, &_3, &_4, &_5, &_6, &_7, &_8);
}

PHP_METHOD(Qt_Widgets_QGraphicsView_QGraphicsView, setupViewport)
{
	zval *handle_param = NULL, *widget_param = NULL, _0, _1;
	zend_long handle, widget;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(widget)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &widget_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, widget);
	phpqt_qgraphicsview_setup_viewport(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QGraphicsView_QGraphicsView, event)
{
	zval *handle_param = NULL, *event_param = NULL, _0, _1;
	zend_long handle, event, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(event)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &event_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, event);
	r = phpqt_qgraphicsview_event(&_0, &_1);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Widgets_QGraphicsView_QGraphicsView, viewportEvent)
{
	zval *handle_param = NULL, *event_param = NULL, _0, _1;
	zend_long handle, event, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(event)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &event_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, event);
	r = phpqt_qgraphicsview_viewport_event(&_0, &_1);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Widgets_QGraphicsView_QGraphicsView, contextMenuEvent)
{
	zval *handle_param = NULL, *event_param = NULL, _0, _1;
	zend_long handle, event;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(event)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &event_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, event);
	phpqt_qgraphicsview_context_menu_event(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QGraphicsView_QGraphicsView, dragEnterEvent)
{
	zval *handle_param = NULL, *event_param = NULL, _0, _1;
	zend_long handle, event;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(event)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &event_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, event);
	phpqt_qgraphicsview_drag_enter_event(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QGraphicsView_QGraphicsView, dragLeaveEvent)
{
	zval *handle_param = NULL, *event_param = NULL, _0, _1;
	zend_long handle, event;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(event)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &event_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, event);
	phpqt_qgraphicsview_drag_leave_event(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QGraphicsView_QGraphicsView, dragMoveEvent)
{
	zval *handle_param = NULL, *event_param = NULL, _0, _1;
	zend_long handle, event;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(event)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &event_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, event);
	phpqt_qgraphicsview_drag_move_event(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QGraphicsView_QGraphicsView, dropEvent)
{
	zval *handle_param = NULL, *event_param = NULL, _0, _1;
	zend_long handle, event;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(event)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &event_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, event);
	phpqt_qgraphicsview_drop_event(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QGraphicsView_QGraphicsView, focusInEvent)
{
	zval *handle_param = NULL, *event_param = NULL, _0, _1;
	zend_long handle, event;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(event)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &event_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, event);
	phpqt_qgraphicsview_focus_in_event(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QGraphicsView_QGraphicsView, focusNextPrevChild)
{
	zend_bool next;
	zval *handle_param = NULL, *next_param = NULL, _0, _1;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_BOOL(next)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &next_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_BOOL(&_1, (next ? 1 : 0));
	r = phpqt_qgraphicsview_focus_next_prev_child(&_0, &_1);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Widgets_QGraphicsView_QGraphicsView, focusOutEvent)
{
	zval *handle_param = NULL, *event_param = NULL, _0, _1;
	zend_long handle, event;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(event)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &event_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, event);
	phpqt_qgraphicsview_focus_out_event(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QGraphicsView_QGraphicsView, keyPressEvent)
{
	zval *handle_param = NULL, *event_param = NULL, _0, _1;
	zend_long handle, event;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(event)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &event_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, event);
	phpqt_qgraphicsview_key_press_event(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QGraphicsView_QGraphicsView, keyReleaseEvent)
{
	zval *handle_param = NULL, *event_param = NULL, _0, _1;
	zend_long handle, event;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(event)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &event_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, event);
	phpqt_qgraphicsview_key_release_event(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QGraphicsView_QGraphicsView, mouseDoubleClickEvent)
{
	zval *handle_param = NULL, *event_param = NULL, _0, _1;
	zend_long handle, event;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(event)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &event_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, event);
	phpqt_qgraphicsview_mouse_double_click_event(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QGraphicsView_QGraphicsView, mousePressEvent)
{
	zval *handle_param = NULL, *event_param = NULL, _0, _1;
	zend_long handle, event;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(event)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &event_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, event);
	phpqt_qgraphicsview_mouse_press_event(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QGraphicsView_QGraphicsView, mouseMoveEvent)
{
	zval *handle_param = NULL, *event_param = NULL, _0, _1;
	zend_long handle, event;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(event)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &event_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, event);
	phpqt_qgraphicsview_mouse_move_event(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QGraphicsView_QGraphicsView, mouseReleaseEvent)
{
	zval *handle_param = NULL, *event_param = NULL, _0, _1;
	zend_long handle, event;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(event)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &event_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, event);
	phpqt_qgraphicsview_mouse_release_event(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QGraphicsView_QGraphicsView, wheelEvent)
{
	zval *handle_param = NULL, *event_param = NULL, _0, _1;
	zend_long handle, event;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(event)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &event_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, event);
	phpqt_qgraphicsview_wheel_event(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QGraphicsView_QGraphicsView, paintEvent)
{
	zval *handle_param = NULL, *event_param = NULL, _0, _1;
	zend_long handle, event;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(event)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &event_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, event);
	phpqt_qgraphicsview_paint_event(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QGraphicsView_QGraphicsView, resizeEvent)
{
	zval *handle_param = NULL, *event_param = NULL, _0, _1;
	zend_long handle, event;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(event)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &event_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, event);
	phpqt_qgraphicsview_resize_event(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QGraphicsView_QGraphicsView, scrollContentsBy)
{
	zval *handle_param = NULL, *dx_param = NULL, *dy_param = NULL, _0, _1, _2;
	zend_long handle, dx, dy;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(dx)
		Z_PARAM_LONG(dy)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &dx_param, &dy_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, dx);
	ZVAL_LONG(&_2, dy);
	phpqt_qgraphicsview_scroll_contents_by(&_0, &_1, &_2);
}

PHP_METHOD(Qt_Widgets_QGraphicsView_QGraphicsView, showEvent)
{
	zval *handle_param = NULL, *event_param = NULL, _0, _1;
	zend_long handle, event;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(event)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &event_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, event);
	phpqt_qgraphicsview_show_event(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QGraphicsView_QGraphicsView, inputMethodEvent)
{
	zval *handle_param = NULL, *event_param = NULL, _0, _1;
	zend_long handle, event;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(event)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &event_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, event);
	phpqt_qgraphicsview_input_method_event(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QGraphicsView_QGraphicsView, drawBackground)
{
	double rectX, rectY, rectWidth, rectHeight;
	zval *handle_param = NULL, *painter_param = NULL, *rectX_param = NULL, *rectY_param = NULL, *rectWidth_param = NULL, *rectHeight_param = NULL, _0, _1, _2, _3, _4, _5;
	zend_long handle, painter;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_5);
	ZEND_PARSE_PARAMETERS_START(6, 6)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(painter)
		Z_PARAM_ZVAL(rectX)
		Z_PARAM_ZVAL(rectY)
		Z_PARAM_ZVAL(rectWidth)
		Z_PARAM_ZVAL(rectHeight)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(6, 0, &handle_param, &painter_param, &rectX_param, &rectY_param, &rectWidth_param, &rectHeight_param);
	rectX = zephir_get_doubleval(rectX_param);
	rectY = zephir_get_doubleval(rectY_param);
	rectWidth = zephir_get_doubleval(rectWidth_param);
	rectHeight = zephir_get_doubleval(rectHeight_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, painter);
	ZVAL_DOUBLE(&_2, rectX);
	ZVAL_DOUBLE(&_3, rectY);
	ZVAL_DOUBLE(&_4, rectWidth);
	ZVAL_DOUBLE(&_5, rectHeight);
	phpqt_qgraphicsview_draw_background(&_0, &_1, &_2, &_3, &_4, &_5);
}

PHP_METHOD(Qt_Widgets_QGraphicsView_QGraphicsView, drawForeground)
{
	double rectX, rectY, rectWidth, rectHeight;
	zval *handle_param = NULL, *painter_param = NULL, *rectX_param = NULL, *rectY_param = NULL, *rectWidth_param = NULL, *rectHeight_param = NULL, _0, _1, _2, _3, _4, _5;
	zend_long handle, painter;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_5);
	ZEND_PARSE_PARAMETERS_START(6, 6)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(painter)
		Z_PARAM_ZVAL(rectX)
		Z_PARAM_ZVAL(rectY)
		Z_PARAM_ZVAL(rectWidth)
		Z_PARAM_ZVAL(rectHeight)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(6, 0, &handle_param, &painter_param, &rectX_param, &rectY_param, &rectWidth_param, &rectHeight_param);
	rectX = zephir_get_doubleval(rectX_param);
	rectY = zephir_get_doubleval(rectY_param);
	rectWidth = zephir_get_doubleval(rectWidth_param);
	rectHeight = zephir_get_doubleval(rectHeight_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, painter);
	ZVAL_DOUBLE(&_2, rectX);
	ZVAL_DOUBLE(&_3, rectY);
	ZVAL_DOUBLE(&_4, rectWidth);
	ZVAL_DOUBLE(&_5, rectHeight);
	phpqt_qgraphicsview_draw_foreground(&_0, &_1, &_2, &_3, &_4, &_5);
}

