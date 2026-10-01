
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
#include "src/gui-qiconengine.h"
#include "kernel/object.h"
#include "kernel/operators.h"
#include "kernel/memory.h"
#include "kernel/string.h"


ZEPHIR_INIT_CLASS(Qt_Gui_QIconEngine_QIconEngine)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Gui\\QIconEngine, QIconEngine, qt, gui_qiconengine_qiconengine, qt_gui_qiconengine_qiconengine_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Gui_QIconEngine_QIconEngine, new_)
{

	RETURN_LONG(phpqt_qiconengine_new());
}

PHP_METHOD(Qt_Gui_QIconEngine_QIconEngine, paint)
{
	zval *handle_param = NULL, *painter_param = NULL, *rectX_param = NULL, *rectY_param = NULL, *rectWidth_param = NULL, *rectHeight_param = NULL, *mode_param = NULL, *state_param = NULL, _0, _1, _2, _3, _4, _5, _6, _7;
	zend_long handle, painter, rectX, rectY, rectWidth, rectHeight, mode, state;

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
		Z_PARAM_LONG(painter)
		Z_PARAM_LONG(rectX)
		Z_PARAM_LONG(rectY)
		Z_PARAM_LONG(rectWidth)
		Z_PARAM_LONG(rectHeight)
		Z_PARAM_LONG(mode)
		Z_PARAM_LONG(state)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(8, 0, &handle_param, &painter_param, &rectX_param, &rectY_param, &rectWidth_param, &rectHeight_param, &mode_param, &state_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, painter);
	ZVAL_LONG(&_2, rectX);
	ZVAL_LONG(&_3, rectY);
	ZVAL_LONG(&_4, rectWidth);
	ZVAL_LONG(&_5, rectHeight);
	ZVAL_LONG(&_6, mode);
	ZVAL_LONG(&_7, state);
	phpqt_qiconengine_paint(&_0, &_1, &_2, &_3, &_4, &_5, &_6, &_7);
}

PHP_METHOD(Qt_Gui_QIconEngine_QIconEngine, actualSize)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, *sizeWidth_param = NULL, *sizeHeight_param = NULL, *mode_param = NULL, *state_param = NULL, result, _0, _1, _2, _3, _4;
	zend_long handle, sizeWidth, sizeHeight, mode, state;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZEND_PARSE_PARAMETERS_START(5, 5)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(sizeWidth)
		Z_PARAM_LONG(sizeHeight)
		Z_PARAM_LONG(mode)
		Z_PARAM_LONG(state)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 5, 0, &handle_param, &sizeWidth_param, &sizeHeight_param, &mode_param, &state_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, sizeWidth);
	ZVAL_LONG(&_2, sizeHeight);
	ZVAL_LONG(&_3, mode);
	ZVAL_LONG(&_4, state);
	phpqt_qiconengine_actual_size(&result, &_0, &_1, &_2, &_3, &_4);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QIconEngine_QIconEngine, pixmap)
{
	zval *handle_param = NULL, *sizeWidth_param = NULL, *sizeHeight_param = NULL, *mode_param = NULL, *state_param = NULL, _0, _1, _2, _3, _4;
	zend_long handle, sizeWidth, sizeHeight, mode, state;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZEND_PARSE_PARAMETERS_START(5, 5)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(sizeWidth)
		Z_PARAM_LONG(sizeHeight)
		Z_PARAM_LONG(mode)
		Z_PARAM_LONG(state)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(5, 0, &handle_param, &sizeWidth_param, &sizeHeight_param, &mode_param, &state_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, sizeWidth);
	ZVAL_LONG(&_2, sizeHeight);
	ZVAL_LONG(&_3, mode);
	ZVAL_LONG(&_4, state);
	RETURN_LONG(phpqt_qiconengine_pixmap(&_0, &_1, &_2, &_3, &_4));
}

PHP_METHOD(Qt_Gui_QIconEngine_QIconEngine, addPixmap)
{
	zval *handle_param = NULL, *pixmap_param = NULL, *mode_param = NULL, *state_param = NULL, _0, _1, _2, _3;
	zend_long handle, pixmap, mode, state;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(pixmap)
		Z_PARAM_LONG(mode)
		Z_PARAM_LONG(state)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 0, &handle_param, &pixmap_param, &mode_param, &state_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, pixmap);
	ZVAL_LONG(&_2, mode);
	ZVAL_LONG(&_3, state);
	phpqt_qiconengine_add_pixmap(&_0, &_1, &_2, &_3);
}

PHP_METHOD(Qt_Gui_QIconEngine_QIconEngine, addFile)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval fileName;
	zval *handle_param = NULL, *fileName_param = NULL, *sizeWidth_param = NULL, *sizeHeight_param = NULL, *mode_param = NULL, *state_param = NULL, _0, _1, _2, _3, _4;
	zend_long handle, sizeWidth, sizeHeight, mode, state;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&fileName);
	ZEND_PARSE_PARAMETERS_START(6, 6)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(fileName)
		Z_PARAM_LONG(sizeWidth)
		Z_PARAM_LONG(sizeHeight)
		Z_PARAM_LONG(mode)
		Z_PARAM_LONG(state)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 6, 0, &handle_param, &fileName_param, &sizeWidth_param, &sizeHeight_param, &mode_param, &state_param);
	zephir_get_strval(&fileName, fileName_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, sizeWidth);
	ZVAL_LONG(&_2, sizeHeight);
	ZVAL_LONG(&_3, mode);
	ZVAL_LONG(&_4, state);
	phpqt_qiconengine_add_file(&_0, &fileName, &_1, &_2, &_3, &_4);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_Gui_QIconEngine_QIconEngine, key)
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
	phpqt_qiconengine_key(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QIconEngine_QIconEngine, clone_)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qiconengine_clone(&_0));
}

PHP_METHOD(Qt_Gui_QIconEngine_QIconEngine, read)
{
	zval *handle_param = NULL, *in__param = NULL, _0, _1;
	zend_long handle, in_, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(in_)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &in__param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, in_);
	r = phpqt_qiconengine_read(&_0, &_1);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Gui_QIconEngine_QIconEngine, write)
{
	zval *handle_param = NULL, *out_param = NULL, _0, _1;
	zend_long handle, out, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(out)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &out_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, out);
	r = phpqt_qiconengine_write(&_0, &_1);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Gui_QIconEngine_QIconEngine, availableSizes)
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
	phpqt_qiconengine_available_sizes(&result, &_0, mode, state);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QIconEngine_QIconEngine, iconName)
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
	phpqt_qiconengine_icon_name(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QIconEngine_QIconEngine, isNull)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qiconengine_is_null(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Gui_QIconEngine_QIconEngine, scaledPixmap)
{
	double scale;
	zval *handle_param = NULL, *sizeWidth_param = NULL, *sizeHeight_param = NULL, *mode_param = NULL, *state_param = NULL, *scale_param = NULL, _0, _1, _2, _3, _4, _5;
	zend_long handle, sizeWidth, sizeHeight, mode, state;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_5);
	ZEND_PARSE_PARAMETERS_START(6, 6)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(sizeWidth)
		Z_PARAM_LONG(sizeHeight)
		Z_PARAM_LONG(mode)
		Z_PARAM_LONG(state)
		Z_PARAM_ZVAL(scale)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(6, 0, &handle_param, &sizeWidth_param, &sizeHeight_param, &mode_param, &state_param, &scale_param);
	scale = zephir_get_doubleval(scale_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, sizeWidth);
	ZVAL_LONG(&_2, sizeHeight);
	ZVAL_LONG(&_3, mode);
	ZVAL_LONG(&_4, state);
	ZVAL_DOUBLE(&_5, scale);
	RETURN_LONG(phpqt_qiconengine_scaled_pixmap(&_0, &_1, &_2, &_3, &_4, &_5));
}

PHP_METHOD(Qt_Gui_QIconEngine_QIconEngine, newQIconEngine)
{
	zval *other_param = NULL, _0;
	zend_long other;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(other)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &other_param);
	ZVAL_LONG(&_0, other);
	RETURN_LONG(phpqt_qiconengine_new_q_icon_engine(&_0));
}

