
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
#include "src/gui-qicon.h"
#include "kernel/object.h"
#include "kernel/operators.h"
#include "kernel/memory.h"
#include "kernel/string.h"


ZEPHIR_INIT_CLASS(Qt_Gui_QIcon_QIcon)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Gui\\QIcon, QIcon, qt, gui_qicon_qicon, qt_gui_qicon_qicon_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Gui_QIcon_QIcon, new_)
{

	RETURN_LONG(phpqt_qicon_new());
}

PHP_METHOD(Qt_Gui_QIcon_QIcon, newQPixmap)
{
	zval *pixmap_param = NULL, _0;
	zend_long pixmap;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(pixmap)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &pixmap_param);
	ZVAL_LONG(&_0, pixmap);
	RETURN_LONG(phpqt_qicon_new_q_pixmap(&_0));
}

PHP_METHOD(Qt_Gui_QIcon_QIcon, newQIcon)
{
	zval *other_param = NULL, _0;
	zend_long other;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(other)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &other_param);
	ZVAL_LONG(&_0, other);
	RETURN_LONG(phpqt_qicon_new_q_icon(&_0));
}

PHP_METHOD(Qt_Gui_QIcon_QIcon, newQString)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *fileName_param = NULL;
	zval fileName;

	ZVAL_UNDEF(&fileName);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_STR(fileName)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &fileName_param);
	zephir_get_strval(&fileName, fileName_param);
	RETURN_MM_LONG(phpqt_qicon_new_q_string(&fileName));
}

PHP_METHOD(Qt_Gui_QIcon_QIcon, newQIconEngine)
{
	zval *engine_param = NULL, _0;
	zend_long engine;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(engine)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &engine_param);
	ZVAL_LONG(&_0, engine);
	RETURN_LONG(phpqt_qicon_new_q_icon_engine(&_0));
}

PHP_METHOD(Qt_Gui_QIcon_QIcon, swap)
{
	zval *handle_param = NULL, *other_param = NULL, _0, _1;
	zend_long handle, other;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(other)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &other_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, other);
	phpqt_qicon_swap(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QIcon_QIcon, pixmap)
{
	zval *handle_param = NULL, *sizeWidth_param = NULL, *sizeHeight_param = NULL, *mode = NULL, mode_sub, *state = NULL, state_sub, __$null, _0, _1, _2;
	zend_long handle, sizeWidth, sizeHeight;

	ZVAL_UNDEF(&mode_sub);
	ZVAL_UNDEF(&state_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(3, 5)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(sizeWidth)
		Z_PARAM_LONG(sizeHeight)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(mode)
		Z_PARAM_ZVAL_OR_NULL(state)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 2, &handle_param, &sizeWidth_param, &sizeHeight_param, &mode, &state);
	if (!mode) {
		mode = &mode_sub;
		mode = &__$null;
	}
	if (!state) {
		state = &state_sub;
		state = &__$null;
	}
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, sizeWidth);
	ZVAL_LONG(&_2, sizeHeight);
	RETURN_LONG(phpqt_qicon_pixmap(&_0, &_1, &_2, mode, state));
}

PHP_METHOD(Qt_Gui_QIcon_QIcon, pixmapIntIntQIconModeQIconState)
{
	zval *handle_param = NULL, *w_param = NULL, *h_param = NULL, *mode = NULL, mode_sub, *state = NULL, state_sub, __$null, _0, _1, _2;
	zend_long handle, w, h;

	ZVAL_UNDEF(&mode_sub);
	ZVAL_UNDEF(&state_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(3, 5)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(w)
		Z_PARAM_LONG(h)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(mode)
		Z_PARAM_ZVAL_OR_NULL(state)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 2, &handle_param, &w_param, &h_param, &mode, &state);
	if (!mode) {
		mode = &mode_sub;
		mode = &__$null;
	}
	if (!state) {
		state = &state_sub;
		state = &__$null;
	}
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, w);
	ZVAL_LONG(&_2, h);
	RETURN_LONG(phpqt_qicon_pixmap_int_int_q_icon_mode_q_icon_state(&_0, &_1, &_2, mode, state));
}

PHP_METHOD(Qt_Gui_QIcon_QIcon, pixmapIntQIconModeQIconState)
{
	zval *handle_param = NULL, *extent_param = NULL, *mode = NULL, mode_sub, *state = NULL, state_sub, __$null, _0, _1;
	zend_long handle, extent;

	ZVAL_UNDEF(&mode_sub);
	ZVAL_UNDEF(&state_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(2, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(extent)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(mode)
		Z_PARAM_ZVAL_OR_NULL(state)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 2, &handle_param, &extent_param, &mode, &state);
	if (!mode) {
		mode = &mode_sub;
		mode = &__$null;
	}
	if (!state) {
		state = &state_sub;
		state = &__$null;
	}
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, extent);
	RETURN_LONG(phpqt_qicon_pixmap_int_q_icon_mode_q_icon_state(&_0, &_1, mode, state));
}

PHP_METHOD(Qt_Gui_QIcon_QIcon, pixmapQSizeQrealQIconModeQIconState)
{
	double devicePixelRatio;
	zval *handle_param = NULL, *sizeWidth_param = NULL, *sizeHeight_param = NULL, *devicePixelRatio_param = NULL, *mode = NULL, mode_sub, *state = NULL, state_sub, __$null, _0, _1, _2, _3;
	zend_long handle, sizeWidth, sizeHeight;

	ZVAL_UNDEF(&mode_sub);
	ZVAL_UNDEF(&state_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(4, 6)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(sizeWidth)
		Z_PARAM_LONG(sizeHeight)
		Z_PARAM_ZVAL(devicePixelRatio)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(mode)
		Z_PARAM_ZVAL_OR_NULL(state)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 2, &handle_param, &sizeWidth_param, &sizeHeight_param, &devicePixelRatio_param, &mode, &state);
	devicePixelRatio = zephir_get_doubleval(devicePixelRatio_param);
	if (!mode) {
		mode = &mode_sub;
		mode = &__$null;
	}
	if (!state) {
		state = &state_sub;
		state = &__$null;
	}
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, sizeWidth);
	ZVAL_LONG(&_2, sizeHeight);
	ZVAL_DOUBLE(&_3, devicePixelRatio);
	RETURN_LONG(phpqt_qicon_pixmap_q_size_qreal_q_icon_mode_q_icon_state(&_0, &_1, &_2, &_3, mode, state));
}

PHP_METHOD(Qt_Gui_QIcon_QIcon, actualSize)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, *sizeWidth_param = NULL, *sizeHeight_param = NULL, *mode = NULL, mode_sub, *state = NULL, state_sub, __$null, result, _0, _1, _2;
	zend_long handle, sizeWidth, sizeHeight;

	ZVAL_UNDEF(&mode_sub);
	ZVAL_UNDEF(&state_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(3, 5)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(sizeWidth)
		Z_PARAM_LONG(sizeHeight)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(mode)
		Z_PARAM_ZVAL_OR_NULL(state)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 3, 2, &handle_param, &sizeWidth_param, &sizeHeight_param, &mode, &state);
	if (!mode) {
		mode = &mode_sub;
		mode = &__$null;
	}
	if (!state) {
		state = &state_sub;
		state = &__$null;
	}
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, sizeWidth);
	ZVAL_LONG(&_2, sizeHeight);
	phpqt_qicon_actual_size(&result, &_0, &_1, &_2, mode, state);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QIcon_QIcon, name)
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
	phpqt_qicon_name(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QIcon_QIcon, paint)
{
	zval *handle_param = NULL, *painter_param = NULL, *rectX_param = NULL, *rectY_param = NULL, *rectWidth_param = NULL, *rectHeight_param = NULL, *alignment = NULL, alignment_sub, *mode = NULL, mode_sub, *state = NULL, state_sub, __$null, _0, _1, _2, _3, _4, _5;
	zend_long handle, painter, rectX, rectY, rectWidth, rectHeight;

	ZVAL_UNDEF(&alignment_sub);
	ZVAL_UNDEF(&mode_sub);
	ZVAL_UNDEF(&state_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_5);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(6, 9)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(painter)
		Z_PARAM_LONG(rectX)
		Z_PARAM_LONG(rectY)
		Z_PARAM_LONG(rectWidth)
		Z_PARAM_LONG(rectHeight)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(alignment)
		Z_PARAM_ZVAL_OR_NULL(mode)
		Z_PARAM_ZVAL_OR_NULL(state)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(6, 3, &handle_param, &painter_param, &rectX_param, &rectY_param, &rectWidth_param, &rectHeight_param, &alignment, &mode, &state);
	if (!alignment) {
		alignment = &alignment_sub;
		alignment = &__$null;
	}
	if (!mode) {
		mode = &mode_sub;
		mode = &__$null;
	}
	if (!state) {
		state = &state_sub;
		state = &__$null;
	}
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, painter);
	ZVAL_LONG(&_2, rectX);
	ZVAL_LONG(&_3, rectY);
	ZVAL_LONG(&_4, rectWidth);
	ZVAL_LONG(&_5, rectHeight);
	phpqt_qicon_paint(&_0, &_1, &_2, &_3, &_4, &_5, alignment, mode, state);
}

PHP_METHOD(Qt_Gui_QIcon_QIcon, paintQPainterIntIntIntIntQtAlignmentQIconModeQIconState)
{
	zval *handle_param = NULL, *painter_param = NULL, *x_param = NULL, *y_param = NULL, *w_param = NULL, *h_param = NULL, *alignment = NULL, alignment_sub, *mode = NULL, mode_sub, *state = NULL, state_sub, __$null, _0, _1, _2, _3, _4, _5;
	zend_long handle, painter, x, y, w, h;

	ZVAL_UNDEF(&alignment_sub);
	ZVAL_UNDEF(&mode_sub);
	ZVAL_UNDEF(&state_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_5);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(6, 9)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(painter)
		Z_PARAM_LONG(x)
		Z_PARAM_LONG(y)
		Z_PARAM_LONG(w)
		Z_PARAM_LONG(h)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(alignment)
		Z_PARAM_ZVAL_OR_NULL(mode)
		Z_PARAM_ZVAL_OR_NULL(state)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(6, 3, &handle_param, &painter_param, &x_param, &y_param, &w_param, &h_param, &alignment, &mode, &state);
	if (!alignment) {
		alignment = &alignment_sub;
		alignment = &__$null;
	}
	if (!mode) {
		mode = &mode_sub;
		mode = &__$null;
	}
	if (!state) {
		state = &state_sub;
		state = &__$null;
	}
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, painter);
	ZVAL_LONG(&_2, x);
	ZVAL_LONG(&_3, y);
	ZVAL_LONG(&_4, w);
	ZVAL_LONG(&_5, h);
	phpqt_qicon_paint_q_painter_int_int_int_int_qt_alignment_q_icon_mode_q_icon_state(&_0, &_1, &_2, &_3, &_4, &_5, alignment, mode, state);
}

PHP_METHOD(Qt_Gui_QIcon_QIcon, isNull)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qicon_is_null(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Gui_QIcon_QIcon, isDetached)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qicon_is_detached(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Gui_QIcon_QIcon, detach)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qicon_detach(&_0);
}

PHP_METHOD(Qt_Gui_QIcon_QIcon, cacheKey)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qicon_cache_key(&_0));
}

PHP_METHOD(Qt_Gui_QIcon_QIcon, addPixmap)
{
	zval *handle_param = NULL, *pixmap_param = NULL, *mode = NULL, mode_sub, *state = NULL, state_sub, __$null, _0, _1;
	zend_long handle, pixmap;

	ZVAL_UNDEF(&mode_sub);
	ZVAL_UNDEF(&state_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(2, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(pixmap)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(mode)
		Z_PARAM_ZVAL_OR_NULL(state)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 2, &handle_param, &pixmap_param, &mode, &state);
	if (!mode) {
		mode = &mode_sub;
		mode = &__$null;
	}
	if (!state) {
		state = &state_sub;
		state = &__$null;
	}
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, pixmap);
	phpqt_qicon_add_pixmap(&_0, &_1, mode, state);
}

PHP_METHOD(Qt_Gui_QIcon_QIcon, addFile)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval fileName;
	zval *handle_param = NULL, *fileName_param = NULL, *sizeWidth = NULL, sizeWidth_sub, *sizeHeight = NULL, sizeHeight_sub, *mode = NULL, mode_sub, *state = NULL, state_sub, __$null, _0;
	zend_long handle;

	ZVAL_UNDEF(&sizeWidth_sub);
	ZVAL_UNDEF(&sizeHeight_sub);
	ZVAL_UNDEF(&mode_sub);
	ZVAL_UNDEF(&state_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&fileName);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(2, 6)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(fileName)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(sizeWidth)
		Z_PARAM_ZVAL_OR_NULL(sizeHeight)
		Z_PARAM_ZVAL_OR_NULL(mode)
		Z_PARAM_ZVAL_OR_NULL(state)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 4, &handle_param, &fileName_param, &sizeWidth, &sizeHeight, &mode, &state);
	zephir_get_strval(&fileName, fileName_param);
	if (!sizeWidth) {
		sizeWidth = &sizeWidth_sub;
		sizeWidth = &__$null;
	}
	if (!sizeHeight) {
		sizeHeight = &sizeHeight_sub;
		sizeHeight = &__$null;
	}
	if (!mode) {
		mode = &mode_sub;
		mode = &__$null;
	}
	if (!state) {
		state = &state_sub;
		state = &__$null;
	}
	ZVAL_LONG(&_0, handle);
	phpqt_qicon_add_file(&_0, &fileName, sizeWidth, sizeHeight, mode, state);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_Gui_QIcon_QIcon, availableSizes)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, *mode = NULL, mode_sub, *state = NULL, state_sub, __$null, result, _0;
	zend_long handle;

	ZVAL_UNDEF(&mode_sub);
	ZVAL_UNDEF(&state_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(1, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(mode)
		Z_PARAM_ZVAL_OR_NULL(state)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 2, &handle_param, &mode, &state);
	if (!mode) {
		mode = &mode_sub;
		mode = &__$null;
	}
	if (!state) {
		state = &state_sub;
		state = &__$null;
	}
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	phpqt_qicon_available_sizes(&result, &_0, mode, state);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QIcon_QIcon, setIsMask)
{
	zend_bool isMask;
	zval *handle_param = NULL, *isMask_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_BOOL(isMask)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &isMask_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_BOOL(&_1, (isMask ? 1 : 0));
	phpqt_qicon_set_is_mask(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QIcon_QIcon, isMask)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qicon_is_mask(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Gui_QIcon_QIcon, fromTheme)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *name_param = NULL;
	zval name;

	ZVAL_UNDEF(&name);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_STR(name)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &name_param);
	zephir_get_strval(&name, name_param);
	RETURN_MM_LONG(phpqt_qicon_from_theme(&name));
}

PHP_METHOD(Qt_Gui_QIcon_QIcon, fromThemeQStringQIcon)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long fallback;
	zval *name_param = NULL, *fallback_param = NULL, _0;
	zval name;

	ZVAL_UNDEF(&name);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_STR(name)
		Z_PARAM_LONG(fallback)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &name_param, &fallback_param);
	zephir_get_strval(&name, name_param);
	ZVAL_LONG(&_0, fallback);
	RETURN_MM_LONG(phpqt_qicon_from_theme_q_string_q_icon(&name, &_0));
}

PHP_METHOD(Qt_Gui_QIcon_QIcon, hasThemeIcon)
{
	zend_long r = 0;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *name_param = NULL;
	zval name;

	ZVAL_UNDEF(&name);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_STR(name)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &name_param);
	zephir_get_strval(&name, name_param);
	r = phpqt_qicon_has_theme_icon(&name);
	RETURN_MM_BOOL(r == 1);
}

PHP_METHOD(Qt_Gui_QIcon_QIcon, fromThemeQIconThemeIcon)
{
	zval *icon_param = NULL, _0;
	zend_long icon;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(icon)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &icon_param);
	ZVAL_LONG(&_0, icon);
	RETURN_LONG(phpqt_qicon_from_theme_q_icon_theme_icon(&_0));
}

PHP_METHOD(Qt_Gui_QIcon_QIcon, fromThemeQIconThemeIconQIcon)
{
	zval *icon_param = NULL, *fallback_param = NULL, _0, _1;
	zend_long icon, fallback;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(icon)
		Z_PARAM_LONG(fallback)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &icon_param, &fallback_param);
	ZVAL_LONG(&_0, icon);
	ZVAL_LONG(&_1, fallback);
	RETURN_LONG(phpqt_qicon_from_theme_q_icon_theme_icon_q_icon(&_0, &_1));
}

PHP_METHOD(Qt_Gui_QIcon_QIcon, hasThemeIconQIconThemeIcon)
{
	zval *icon_param = NULL, _0;
	zend_long icon, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(icon)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &icon_param);
	ZVAL_LONG(&_0, icon);
	r = phpqt_qicon_has_theme_icon_q_icon_theme_icon(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Gui_QIcon_QIcon, themeSearchPaths)
{
	zval result;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;

	ZVAL_UNDEF(&result);
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);

	ZEPHIR_INIT_VAR(&result);
	phpqt_qicon_theme_search_paths(&result);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QIcon_QIcon, setThemeSearchPaths)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *searchpath_param = NULL;
	zval searchpath;

	ZVAL_UNDEF(&searchpath);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_ARRAY(searchpath)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &searchpath_param);
	zephir_get_arrval(&searchpath, searchpath_param);
	phpqt_qicon_set_theme_search_paths(&searchpath);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_Gui_QIcon_QIcon, fallbackSearchPaths)
{
	zval result;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;

	ZVAL_UNDEF(&result);
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);

	ZEPHIR_INIT_VAR(&result);
	phpqt_qicon_fallback_search_paths(&result);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QIcon_QIcon, setFallbackSearchPaths)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *paths_param = NULL;
	zval paths;

	ZVAL_UNDEF(&paths);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_ARRAY(paths)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &paths_param);
	zephir_get_arrval(&paths, paths_param);
	phpqt_qicon_set_fallback_search_paths(&paths);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_Gui_QIcon_QIcon, themeName)
{
	zval result;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;

	ZVAL_UNDEF(&result);
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);

	ZEPHIR_INIT_VAR(&result);
	phpqt_qicon_theme_name(&result);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QIcon_QIcon, setThemeName)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *path_param = NULL;
	zval path;

	ZVAL_UNDEF(&path);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_STR(path)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &path_param);
	zephir_get_strval(&path, path_param);
	phpqt_qicon_set_theme_name(&path);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_Gui_QIcon_QIcon, fallbackThemeName)
{
	zval result;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;

	ZVAL_UNDEF(&result);
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);

	ZEPHIR_INIT_VAR(&result);
	phpqt_qicon_fallback_theme_name(&result);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QIcon_QIcon, setFallbackThemeName)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *name_param = NULL;
	zval name;

	ZVAL_UNDEF(&name);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_STR(name)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &name_param);
	zephir_get_strval(&name, name_param);
	phpqt_qicon_set_fallback_theme_name(&name);
	ZEPHIR_MM_RESTORE();
}

