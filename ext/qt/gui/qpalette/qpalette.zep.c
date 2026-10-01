
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
#include "src/gui-qpalette.h"
#include "kernel/object.h"
#include "kernel/operators.h"
#include "kernel/memory.h"


ZEPHIR_INIT_CLASS(Qt_Gui_QPalette_QPalette)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Gui\\QPalette, QPalette, qt, gui_qpalette_qpalette, qt_gui_qpalette_qpalette_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Gui_QPalette_QPalette, staticMetaObject)
{

	RETURN_LONG(phpqt_qpalette_static_meta_object());
}

PHP_METHOD(Qt_Gui_QPalette_QPalette, qt_check_for_QGADGET_macro)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qpalette_qt_check_for__q_g_a_d_g_e_t_macro(&_0);
}

PHP_METHOD(Qt_Gui_QPalette_QPalette, new_)
{

	RETURN_LONG(phpqt_qpalette_new());
}

PHP_METHOD(Qt_Gui_QPalette_QPalette, newQColor)
{
	zval *button_param = NULL, _0;
	zend_long button;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(button)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &button_param);
	ZVAL_LONG(&_0, button);
	RETURN_LONG(phpqt_qpalette_new_q_color(&_0));
}

PHP_METHOD(Qt_Gui_QPalette_QPalette, newQtGlobalColor)
{
	zval *button_param = NULL, _0;
	zend_long button;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(button)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &button_param);
	ZVAL_LONG(&_0, button);
	RETURN_LONG(phpqt_qpalette_new_qt_global_color(&_0));
}

PHP_METHOD(Qt_Gui_QPalette_QPalette, newQColorQColor)
{
	zval *button_param = NULL, *window_param = NULL, _0, _1;
	zend_long button, window;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(button)
		Z_PARAM_LONG(window)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &button_param, &window_param);
	ZVAL_LONG(&_0, button);
	ZVAL_LONG(&_1, window);
	RETURN_LONG(phpqt_qpalette_new_q_color_q_color(&_0, &_1));
}

PHP_METHOD(Qt_Gui_QPalette_QPalette, newQBrushQBrushQBrushQBrushQBrushQBrushQBrushQBrushQBrush)
{
	zval *windowText_param = NULL, *button_param = NULL, *light_param = NULL, *dark_param = NULL, *mid_param = NULL, *text_param = NULL, *bright_text_param = NULL, *base_param = NULL, *window_param = NULL, _0, _1, _2, _3, _4, _5, _6, _7, _8;
	zend_long windowText, button, light, dark, mid, text, bright_text, base, window;

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
		Z_PARAM_LONG(windowText)
		Z_PARAM_LONG(button)
		Z_PARAM_LONG(light)
		Z_PARAM_LONG(dark)
		Z_PARAM_LONG(mid)
		Z_PARAM_LONG(text)
		Z_PARAM_LONG(bright_text)
		Z_PARAM_LONG(base)
		Z_PARAM_LONG(window)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(9, 0, &windowText_param, &button_param, &light_param, &dark_param, &mid_param, &text_param, &bright_text_param, &base_param, &window_param);
	ZVAL_LONG(&_0, windowText);
	ZVAL_LONG(&_1, button);
	ZVAL_LONG(&_2, light);
	ZVAL_LONG(&_3, dark);
	ZVAL_LONG(&_4, mid);
	ZVAL_LONG(&_5, text);
	ZVAL_LONG(&_6, bright_text);
	ZVAL_LONG(&_7, base);
	ZVAL_LONG(&_8, window);
	RETURN_LONG(phpqt_qpalette_new_q_brush_q_brush_q_brush_q_brush_q_brush_q_brush_q_brush_q_brush_q_brush(&_0, &_1, &_2, &_3, &_4, &_5, &_6, &_7, &_8));
}

PHP_METHOD(Qt_Gui_QPalette_QPalette, newQColorQColorQColorQColorQColorQColorQColor)
{
	zval *windowText_param = NULL, *window_param = NULL, *light_param = NULL, *dark_param = NULL, *mid_param = NULL, *text_param = NULL, *base_param = NULL, _0, _1, _2, _3, _4, _5, _6;
	zend_long windowText, window, light, dark, mid, text, base;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_5);
	ZVAL_UNDEF(&_6);
	ZEND_PARSE_PARAMETERS_START(7, 7)
		Z_PARAM_LONG(windowText)
		Z_PARAM_LONG(window)
		Z_PARAM_LONG(light)
		Z_PARAM_LONG(dark)
		Z_PARAM_LONG(mid)
		Z_PARAM_LONG(text)
		Z_PARAM_LONG(base)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(7, 0, &windowText_param, &window_param, &light_param, &dark_param, &mid_param, &text_param, &base_param);
	ZVAL_LONG(&_0, windowText);
	ZVAL_LONG(&_1, window);
	ZVAL_LONG(&_2, light);
	ZVAL_LONG(&_3, dark);
	ZVAL_LONG(&_4, mid);
	ZVAL_LONG(&_5, text);
	ZVAL_LONG(&_6, base);
	RETURN_LONG(phpqt_qpalette_new_q_color_q_color_q_color_q_color_q_color_q_color_q_color(&_0, &_1, &_2, &_3, &_4, &_5, &_6));
}

PHP_METHOD(Qt_Gui_QPalette_QPalette, newQPalette)
{
	zval *palette_param = NULL, _0;
	zend_long palette;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(palette)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &palette_param);
	ZVAL_LONG(&_0, palette);
	RETURN_LONG(phpqt_qpalette_new_q_palette(&_0));
}

PHP_METHOD(Qt_Gui_QPalette_QPalette, swap)
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
	phpqt_qpalette_swap(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QPalette_QPalette, currentColorGroup)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qpalette_current_color_group(&_0));
}

PHP_METHOD(Qt_Gui_QPalette_QPalette, setCurrentColorGroup)
{
	zval *handle_param = NULL, *cg_param = NULL, _0, _1;
	zend_long handle, cg;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(cg)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &cg_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, cg);
	phpqt_qpalette_set_current_color_group(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QPalette_QPalette, color)
{
	zval *handle_param = NULL, *cg_param = NULL, *cr_param = NULL, _0, _1, _2;
	zend_long handle, cg, cr;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(cg)
		Z_PARAM_LONG(cr)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &cg_param, &cr_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, cg);
	ZVAL_LONG(&_2, cr);
	RETURN_LONG(phpqt_qpalette_color(&_0, &_1, &_2));
}

PHP_METHOD(Qt_Gui_QPalette_QPalette, brush)
{
	zval *handle_param = NULL, *cg_param = NULL, *cr_param = NULL, _0, _1, _2;
	zend_long handle, cg, cr;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(cg)
		Z_PARAM_LONG(cr)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &cg_param, &cr_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, cg);
	ZVAL_LONG(&_2, cr);
	RETURN_LONG(phpqt_qpalette_brush(&_0, &_1, &_2));
}

PHP_METHOD(Qt_Gui_QPalette_QPalette, setColor)
{
	zval *handle_param = NULL, *cg_param = NULL, *cr_param = NULL, *color_param = NULL, _0, _1, _2, _3;
	zend_long handle, cg, cr, color;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(cg)
		Z_PARAM_LONG(cr)
		Z_PARAM_LONG(color)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 0, &handle_param, &cg_param, &cr_param, &color_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, cg);
	ZVAL_LONG(&_2, cr);
	ZVAL_LONG(&_3, color);
	phpqt_qpalette_set_color(&_0, &_1, &_2, &_3);
}

PHP_METHOD(Qt_Gui_QPalette_QPalette, setColorQPaletteColorRoleQColor)
{
	zval *handle_param = NULL, *cr_param = NULL, *color_param = NULL, _0, _1, _2;
	zend_long handle, cr, color;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(cr)
		Z_PARAM_LONG(color)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &cr_param, &color_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, cr);
	ZVAL_LONG(&_2, color);
	phpqt_qpalette_set_color_q_palette_color_role_q_color(&_0, &_1, &_2);
}

PHP_METHOD(Qt_Gui_QPalette_QPalette, setBrush)
{
	zval *handle_param = NULL, *cr_param = NULL, *brush_param = NULL, _0, _1, _2;
	zend_long handle, cr, brush;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(cr)
		Z_PARAM_LONG(brush)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &cr_param, &brush_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, cr);
	ZVAL_LONG(&_2, brush);
	phpqt_qpalette_set_brush(&_0, &_1, &_2);
}

PHP_METHOD(Qt_Gui_QPalette_QPalette, isBrushSet)
{
	zval *handle_param = NULL, *cg_param = NULL, *cr_param = NULL, _0, _1, _2;
	zend_long handle, cg, cr, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(cg)
		Z_PARAM_LONG(cr)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &cg_param, &cr_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, cg);
	ZVAL_LONG(&_2, cr);
	r = phpqt_qpalette_is_brush_set(&_0, &_1, &_2);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Gui_QPalette_QPalette, setBrushQPaletteColorGroupQPaletteColorRoleQBrush)
{
	zval *handle_param = NULL, *cg_param = NULL, *cr_param = NULL, *brush_param = NULL, _0, _1, _2, _3;
	zend_long handle, cg, cr, brush;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(cg)
		Z_PARAM_LONG(cr)
		Z_PARAM_LONG(brush)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 0, &handle_param, &cg_param, &cr_param, &brush_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, cg);
	ZVAL_LONG(&_2, cr);
	ZVAL_LONG(&_3, brush);
	phpqt_qpalette_set_brush_q_palette_color_group_q_palette_color_role_q_brush(&_0, &_1, &_2, &_3);
}

PHP_METHOD(Qt_Gui_QPalette_QPalette, setColorGroup)
{
	zval *handle_param = NULL, *cr_param = NULL, *windowText_param = NULL, *button_param = NULL, *light_param = NULL, *dark_param = NULL, *mid_param = NULL, *text_param = NULL, *bright_text_param = NULL, *base_param = NULL, *window_param = NULL, _0, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10;
	zend_long handle, cr, windowText, button, light, dark, mid, text, bright_text, base, window;

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
		Z_PARAM_LONG(cr)
		Z_PARAM_LONG(windowText)
		Z_PARAM_LONG(button)
		Z_PARAM_LONG(light)
		Z_PARAM_LONG(dark)
		Z_PARAM_LONG(mid)
		Z_PARAM_LONG(text)
		Z_PARAM_LONG(bright_text)
		Z_PARAM_LONG(base)
		Z_PARAM_LONG(window)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(11, 0, &handle_param, &cr_param, &windowText_param, &button_param, &light_param, &dark_param, &mid_param, &text_param, &bright_text_param, &base_param, &window_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, cr);
	ZVAL_LONG(&_2, windowText);
	ZVAL_LONG(&_3, button);
	ZVAL_LONG(&_4, light);
	ZVAL_LONG(&_5, dark);
	ZVAL_LONG(&_6, mid);
	ZVAL_LONG(&_7, text);
	ZVAL_LONG(&_8, bright_text);
	ZVAL_LONG(&_9, base);
	ZVAL_LONG(&_10, window);
	phpqt_qpalette_set_color_group(&_0, &_1, &_2, &_3, &_4, &_5, &_6, &_7, &_8, &_9, &_10);
}

PHP_METHOD(Qt_Gui_QPalette_QPalette, isEqual)
{
	zval *handle_param = NULL, *cr1_param = NULL, *cr2_param = NULL, _0, _1, _2;
	zend_long handle, cr1, cr2, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(cr1)
		Z_PARAM_LONG(cr2)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &cr1_param, &cr2_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, cr1);
	ZVAL_LONG(&_2, cr2);
	r = phpqt_qpalette_is_equal(&_0, &_1, &_2);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Gui_QPalette_QPalette, colorQPaletteColorRole)
{
	zval *handle_param = NULL, *cr_param = NULL, _0, _1;
	zend_long handle, cr;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(cr)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &cr_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, cr);
	RETURN_LONG(phpqt_qpalette_color_q_palette_color_role(&_0, &_1));
}

PHP_METHOD(Qt_Gui_QPalette_QPalette, brushQPaletteColorRole)
{
	zval *handle_param = NULL, *cr_param = NULL, _0, _1;
	zend_long handle, cr;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(cr)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &cr_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, cr);
	RETURN_LONG(phpqt_qpalette_brush_q_palette_color_role(&_0, &_1));
}

PHP_METHOD(Qt_Gui_QPalette_QPalette, windowText)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qpalette_window_text(&_0));
}

PHP_METHOD(Qt_Gui_QPalette_QPalette, button)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qpalette_button(&_0));
}

PHP_METHOD(Qt_Gui_QPalette_QPalette, light)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qpalette_light(&_0));
}

PHP_METHOD(Qt_Gui_QPalette_QPalette, dark)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qpalette_dark(&_0));
}

PHP_METHOD(Qt_Gui_QPalette_QPalette, mid)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qpalette_mid(&_0));
}

PHP_METHOD(Qt_Gui_QPalette_QPalette, text)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qpalette_text(&_0));
}

PHP_METHOD(Qt_Gui_QPalette_QPalette, base)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qpalette_base(&_0));
}

PHP_METHOD(Qt_Gui_QPalette_QPalette, alternateBase)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qpalette_alternate_base(&_0));
}

PHP_METHOD(Qt_Gui_QPalette_QPalette, toolTipBase)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qpalette_tool_tip_base(&_0));
}

PHP_METHOD(Qt_Gui_QPalette_QPalette, toolTipText)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qpalette_tool_tip_text(&_0));
}

PHP_METHOD(Qt_Gui_QPalette_QPalette, window)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qpalette_window(&_0));
}

PHP_METHOD(Qt_Gui_QPalette_QPalette, midlight)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qpalette_midlight(&_0));
}

PHP_METHOD(Qt_Gui_QPalette_QPalette, brightText)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qpalette_bright_text(&_0));
}

PHP_METHOD(Qt_Gui_QPalette_QPalette, buttonText)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qpalette_button_text(&_0));
}

PHP_METHOD(Qt_Gui_QPalette_QPalette, shadow)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qpalette_shadow(&_0));
}

PHP_METHOD(Qt_Gui_QPalette_QPalette, highlight)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qpalette_highlight(&_0));
}

PHP_METHOD(Qt_Gui_QPalette_QPalette, highlightedText)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qpalette_highlighted_text(&_0));
}

PHP_METHOD(Qt_Gui_QPalette_QPalette, link)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qpalette_link(&_0));
}

PHP_METHOD(Qt_Gui_QPalette_QPalette, linkVisited)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qpalette_link_visited(&_0));
}

PHP_METHOD(Qt_Gui_QPalette_QPalette, placeholderText)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qpalette_placeholder_text(&_0));
}

PHP_METHOD(Qt_Gui_QPalette_QPalette, accent)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qpalette_accent(&_0));
}

PHP_METHOD(Qt_Gui_QPalette_QPalette, isCopyOf)
{
	zval *handle_param = NULL, *p_param = NULL, _0, _1;
	zend_long handle, p, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(p)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &p_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, p);
	r = phpqt_qpalette_is_copy_of(&_0, &_1);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Gui_QPalette_QPalette, cacheKey)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qpalette_cache_key(&_0));
}

PHP_METHOD(Qt_Gui_QPalette_QPalette, resolve)
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
	RETURN_LONG(phpqt_qpalette_resolve(&_0, &_1));
}

PHP_METHOD(Qt_Gui_QPalette_QPalette, resolveMask)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qpalette_resolve_mask(&_0));
}

PHP_METHOD(Qt_Gui_QPalette_QPalette, setResolveMask)
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
	phpqt_qpalette_set_resolve_mask(&_0, &_1);
}

