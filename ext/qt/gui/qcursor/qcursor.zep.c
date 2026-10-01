
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
#include "src/gui-qcursor.h"
#include "kernel/object.h"
#include "kernel/operators.h"
#include "kernel/memory.h"


ZEPHIR_INIT_CLASS(Qt_Gui_QCursor_QCursor)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Gui\\QCursor, QCursor, qt, gui_qcursor_qcursor, qt_gui_qcursor_qcursor_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Gui_QCursor_QCursor, new_)
{

	RETURN_LONG(phpqt_qcursor_new());
}

PHP_METHOD(Qt_Gui_QCursor_QCursor, newQtCursorShape)
{
	zval *shape_param = NULL, _0;
	zend_long shape;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(shape)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &shape_param);
	ZVAL_LONG(&_0, shape);
	RETURN_LONG(phpqt_qcursor_new_qt_cursor_shape(&_0));
}

PHP_METHOD(Qt_Gui_QCursor_QCursor, newQBitmapQBitmapIntInt)
{
	zval *bitmap_param = NULL, *mask_param = NULL, *hotX_param = NULL, *hotY_param = NULL, _0, _1, _2, _3;
	zend_long bitmap, mask, hotX, hotY;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(2, 4)
		Z_PARAM_LONG(bitmap)
		Z_PARAM_LONG(mask)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(hotX)
		Z_PARAM_LONG(hotY)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 2, &bitmap_param, &mask_param, &hotX_param, &hotY_param);
	if (!hotX_param) {
		hotX = -1;
	} else {
		}
	if (!hotY_param) {
		hotY = -1;
	} else {
		}
	ZVAL_LONG(&_0, bitmap);
	ZVAL_LONG(&_1, mask);
	ZVAL_LONG(&_2, hotX);
	ZVAL_LONG(&_3, hotY);
	RETURN_LONG(phpqt_qcursor_new_q_bitmap_q_bitmap_int_int(&_0, &_1, &_2, &_3));
}

PHP_METHOD(Qt_Gui_QCursor_QCursor, newQPixmapIntInt)
{
	zval *pixmap_param = NULL, *hotX_param = NULL, *hotY_param = NULL, _0, _1, _2;
	zend_long pixmap, hotX, hotY;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(1, 3)
		Z_PARAM_LONG(pixmap)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(hotX)
		Z_PARAM_LONG(hotY)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 2, &pixmap_param, &hotX_param, &hotY_param);
	if (!hotX_param) {
		hotX = -1;
	} else {
		}
	if (!hotY_param) {
		hotY = -1;
	} else {
		}
	ZVAL_LONG(&_0, pixmap);
	ZVAL_LONG(&_1, hotX);
	ZVAL_LONG(&_2, hotY);
	RETURN_LONG(phpqt_qcursor_new_q_pixmap_int_int(&_0, &_1, &_2));
}

PHP_METHOD(Qt_Gui_QCursor_QCursor, newQCursor)
{
	zval *cursor_param = NULL, _0;
	zend_long cursor;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(cursor)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &cursor_param);
	ZVAL_LONG(&_0, cursor);
	RETURN_LONG(phpqt_qcursor_new_q_cursor(&_0));
}

PHP_METHOD(Qt_Gui_QCursor_QCursor, swap)
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
	phpqt_qcursor_swap(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QCursor_QCursor, shape)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qcursor_shape(&_0));
}

PHP_METHOD(Qt_Gui_QCursor_QCursor, setShape)
{
	zval *handle_param = NULL, *newShape_param = NULL, _0, _1;
	zend_long handle, newShape;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(newShape)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &newShape_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, newShape);
	phpqt_qcursor_set_shape(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QCursor_QCursor, bitmap)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qcursor_bitmap(&_0));
}

PHP_METHOD(Qt_Gui_QCursor_QCursor, mask)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qcursor_mask(&_0));
}

PHP_METHOD(Qt_Gui_QCursor_QCursor, pixmap)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qcursor_pixmap(&_0));
}

PHP_METHOD(Qt_Gui_QCursor_QCursor, hotSpot)
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
	phpqt_qcursor_hot_spot(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QCursor_QCursor, pos)
{
	zval result;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;

	ZVAL_UNDEF(&result);
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);

	ZEPHIR_INIT_VAR(&result);
	phpqt_qcursor_pos(&result);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QCursor_QCursor, posQScreen)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *screen_param = NULL, result, _0;
	zend_long screen;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(screen)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &screen_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, screen);
	phpqt_qcursor_pos_q_screen(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QCursor_QCursor, setPos)
{
	zval *x_param = NULL, *y_param = NULL, _0, _1;
	zend_long x, y;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(x)
		Z_PARAM_LONG(y)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &x_param, &y_param);
	ZVAL_LONG(&_0, x);
	ZVAL_LONG(&_1, y);
	phpqt_qcursor_set_pos(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QCursor_QCursor, setPosQScreenIntInt)
{
	zval *screen_param = NULL, *x_param = NULL, *y_param = NULL, _0, _1, _2;
	zend_long screen, x, y;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(screen)
		Z_PARAM_LONG(x)
		Z_PARAM_LONG(y)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &screen_param, &x_param, &y_param);
	ZVAL_LONG(&_0, screen);
	ZVAL_LONG(&_1, x);
	ZVAL_LONG(&_2, y);
	phpqt_qcursor_set_pos_q_screen_int_int(&_0, &_1, &_2);
}

PHP_METHOD(Qt_Gui_QCursor_QCursor, setPosQPoint)
{
	zval *pX_param = NULL, *pY_param = NULL, _0, _1;
	zend_long pX, pY;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(pX)
		Z_PARAM_LONG(pY)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &pX_param, &pY_param);
	ZVAL_LONG(&_0, pX);
	ZVAL_LONG(&_1, pY);
	phpqt_qcursor_set_pos_q_point(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QCursor_QCursor, setPosQScreenQPoint)
{
	zval *screen_param = NULL, *pX_param = NULL, *pY_param = NULL, _0, _1, _2;
	zend_long screen, pX, pY;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(screen)
		Z_PARAM_LONG(pX)
		Z_PARAM_LONG(pY)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &screen_param, &pX_param, &pY_param);
	ZVAL_LONG(&_0, screen);
	ZVAL_LONG(&_1, pX);
	ZVAL_LONG(&_2, pY);
	phpqt_qcursor_set_pos_q_screen_q_point(&_0, &_1, &_2);
}

