
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
#include "src/widgets-qapplication.h"
#include "kernel/object.h"
#include "kernel/string.h"
#include "kernel/memory.h"
#include "kernel/operators.h"


ZEPHIR_INIT_CLASS(Qt_Widgets_QApplication_QApplication)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Widgets\\QApplication, QApplication, qt, widgets_qapplication_qapplication, qt_widgets_qapplication_qapplication_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Widgets_QApplication_QApplication, staticMetaObject)
{

	RETURN_LONG(phpqt_qapplication_static_meta_object());
}

PHP_METHOD(Qt_Widgets_QApplication_QApplication, tr)
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
	phpqt_qapplication_tr(&result, s, c, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Widgets_QApplication_QApplication, new_)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *argv_param = NULL, *arg0 = NULL, arg0_sub, __$null;
	zval argv;

	ZVAL_UNDEF(&argv);
	ZVAL_UNDEF(&arg0_sub);
	ZVAL_NULL(&__$null);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_ARRAY(argv)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(arg0)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 1, &argv_param, &arg0);
	zephir_get_arrval(&argv, argv_param);
	if (!arg0) {
		arg0 = &arg0_sub;
		arg0 = &__$null;
	}
	RETURN_MM_LONG(phpqt_qapplication_new(&argv, arg0));
}

PHP_METHOD(Qt_Widgets_QApplication_QApplication, style)
{

	RETURN_LONG(phpqt_qapplication_style());
}

PHP_METHOD(Qt_Widgets_QApplication_QApplication, setStyle)
{
	zval *arg0_param = NULL, _0;
	zend_long arg0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(arg0)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &arg0_param);
	ZVAL_LONG(&_0, arg0);
	phpqt_qapplication_set_style(&_0);
}

PHP_METHOD(Qt_Widgets_QApplication_QApplication, setStyleQString)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *arg0_param = NULL;
	zval arg0;

	ZVAL_UNDEF(&arg0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_STR(arg0)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &arg0_param);
	zephir_get_strval(&arg0, arg0_param);
	RETURN_MM_LONG(phpqt_qapplication_set_style_q_string(&arg0));
}

PHP_METHOD(Qt_Widgets_QApplication_QApplication, palette)
{

	RETURN_LONG(phpqt_qapplication_palette());
}

PHP_METHOD(Qt_Widgets_QApplication_QApplication, paletteQWidget)
{
	zval *arg0_param = NULL, _0;
	zend_long arg0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(arg0)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &arg0_param);
	ZVAL_LONG(&_0, arg0);
	RETURN_LONG(phpqt_qapplication_palette_q_widget(&_0));
}

PHP_METHOD(Qt_Widgets_QApplication_QApplication, paletteChar)
{
	zval *className = NULL, className_sub;

	ZVAL_UNDEF(&className_sub);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_ZVAL(className)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &className);
	RETURN_LONG(phpqt_qapplication_palette_char(className));
}

PHP_METHOD(Qt_Widgets_QApplication_QApplication, setPalette)
{
	zval *arg0_param = NULL, *className = NULL, className_sub, __$null, _0;
	zend_long arg0;

	ZVAL_UNDEF(&className_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_LONG(arg0)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(className)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 1, &arg0_param, &className);
	if (!className) {
		className = &className_sub;
		className = &__$null;
	}
	ZVAL_LONG(&_0, arg0);
	phpqt_qapplication_set_palette(&_0, className);
}

PHP_METHOD(Qt_Widgets_QApplication_QApplication, font)
{

	RETURN_LONG(phpqt_qapplication_font());
}

PHP_METHOD(Qt_Widgets_QApplication_QApplication, fontQWidget)
{
	zval *arg0_param = NULL, _0;
	zend_long arg0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(arg0)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &arg0_param);
	ZVAL_LONG(&_0, arg0);
	RETURN_LONG(phpqt_qapplication_font_q_widget(&_0));
}

PHP_METHOD(Qt_Widgets_QApplication_QApplication, fontChar)
{
	zval *className = NULL, className_sub;

	ZVAL_UNDEF(&className_sub);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_ZVAL(className)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &className);
	RETURN_LONG(phpqt_qapplication_font_char(className));
}

PHP_METHOD(Qt_Widgets_QApplication_QApplication, setFont)
{
	zval *arg0_param = NULL, *className = NULL, className_sub, __$null, _0;
	zend_long arg0;

	ZVAL_UNDEF(&className_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_LONG(arg0)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(className)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 1, &arg0_param, &className);
	if (!className) {
		className = &className_sub;
		className = &__$null;
	}
	ZVAL_LONG(&_0, arg0);
	phpqt_qapplication_set_font(&_0, className);
}

PHP_METHOD(Qt_Widgets_QApplication_QApplication, allWidgets)
{
	zval result;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;

	ZVAL_UNDEF(&result);
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);

	ZEPHIR_INIT_VAR(&result);
	phpqt_qapplication_all_widgets(&result);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Widgets_QApplication_QApplication, topLevelWidgets)
{
	zval result;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;

	ZVAL_UNDEF(&result);
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);

	ZEPHIR_INIT_VAR(&result);
	phpqt_qapplication_top_level_widgets(&result);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Widgets_QApplication_QApplication, activePopupWidget)
{

	RETURN_LONG(phpqt_qapplication_active_popup_widget());
}

PHP_METHOD(Qt_Widgets_QApplication_QApplication, activeModalWidget)
{

	RETURN_LONG(phpqt_qapplication_active_modal_widget());
}

PHP_METHOD(Qt_Widgets_QApplication_QApplication, focusWidget)
{

	RETURN_LONG(phpqt_qapplication_focus_widget());
}

PHP_METHOD(Qt_Widgets_QApplication_QApplication, activeWindow)
{

	RETURN_LONG(phpqt_qapplication_active_window());
}

PHP_METHOD(Qt_Widgets_QApplication_QApplication, widgetAt)
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
	RETURN_LONG(phpqt_qapplication_widget_at(&_0, &_1));
}

PHP_METHOD(Qt_Widgets_QApplication_QApplication, widgetAtIntInt)
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
	RETURN_LONG(phpqt_qapplication_widget_at_int_int(&_0, &_1));
}

PHP_METHOD(Qt_Widgets_QApplication_QApplication, topLevelAt)
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
	RETURN_LONG(phpqt_qapplication_top_level_at(&_0, &_1));
}

PHP_METHOD(Qt_Widgets_QApplication_QApplication, topLevelAtIntInt)
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
	RETURN_LONG(phpqt_qapplication_top_level_at_int_int(&_0, &_1));
}

PHP_METHOD(Qt_Widgets_QApplication_QApplication, beep)
{

	phpqt_qapplication_beep();
}

PHP_METHOD(Qt_Widgets_QApplication_QApplication, alert)
{
	zval *widget_param = NULL, *duration_param = NULL, _0, _1;
	zend_long widget, duration;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_LONG(widget)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(duration)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 1, &widget_param, &duration_param);
	if (!duration_param) {
		duration = 0;
	} else {
		}
	ZVAL_LONG(&_0, widget);
	ZVAL_LONG(&_1, duration);
	phpqt_qapplication_alert(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QApplication_QApplication, setCursorFlashTime)
{
	zval *arg0_param = NULL, _0;
	zend_long arg0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(arg0)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &arg0_param);
	ZVAL_LONG(&_0, arg0);
	phpqt_qapplication_set_cursor_flash_time(&_0);
}

PHP_METHOD(Qt_Widgets_QApplication_QApplication, cursorFlashTime)
{

	RETURN_LONG(phpqt_qapplication_cursor_flash_time());
}

PHP_METHOD(Qt_Widgets_QApplication_QApplication, setDoubleClickInterval)
{
	zval *arg0_param = NULL, _0;
	zend_long arg0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(arg0)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &arg0_param);
	ZVAL_LONG(&_0, arg0);
	phpqt_qapplication_set_double_click_interval(&_0);
}

PHP_METHOD(Qt_Widgets_QApplication_QApplication, doubleClickInterval)
{

	RETURN_LONG(phpqt_qapplication_double_click_interval());
}

PHP_METHOD(Qt_Widgets_QApplication_QApplication, setKeyboardInputInterval)
{
	zval *arg0_param = NULL, _0;
	zend_long arg0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(arg0)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &arg0_param);
	ZVAL_LONG(&_0, arg0);
	phpqt_qapplication_set_keyboard_input_interval(&_0);
}

PHP_METHOD(Qt_Widgets_QApplication_QApplication, keyboardInputInterval)
{

	RETURN_LONG(phpqt_qapplication_keyboard_input_interval());
}

PHP_METHOD(Qt_Widgets_QApplication_QApplication, setWheelScrollLines)
{
	zval *arg0_param = NULL, _0;
	zend_long arg0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(arg0)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &arg0_param);
	ZVAL_LONG(&_0, arg0);
	phpqt_qapplication_set_wheel_scroll_lines(&_0);
}

PHP_METHOD(Qt_Widgets_QApplication_QApplication, wheelScrollLines)
{

	RETURN_LONG(phpqt_qapplication_wheel_scroll_lines());
}

PHP_METHOD(Qt_Widgets_QApplication_QApplication, setStartDragTime)
{
	zval *ms_param = NULL, _0;
	zend_long ms;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(ms)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &ms_param);
	ZVAL_LONG(&_0, ms);
	phpqt_qapplication_set_start_drag_time(&_0);
}

PHP_METHOD(Qt_Widgets_QApplication_QApplication, startDragTime)
{

	RETURN_LONG(phpqt_qapplication_start_drag_time());
}

PHP_METHOD(Qt_Widgets_QApplication_QApplication, setStartDragDistance)
{
	zval *l_param = NULL, _0;
	zend_long l;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(l)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &l_param);
	ZVAL_LONG(&_0, l);
	phpqt_qapplication_set_start_drag_distance(&_0);
}

PHP_METHOD(Qt_Widgets_QApplication_QApplication, startDragDistance)
{

	RETURN_LONG(phpqt_qapplication_start_drag_distance());
}

PHP_METHOD(Qt_Widgets_QApplication_QApplication, isEffectEnabled)
{
	zval *arg0_param = NULL, _0;
	zend_long arg0, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(arg0)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &arg0_param);
	ZVAL_LONG(&_0, arg0);
	r = phpqt_qapplication_is_effect_enabled(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Widgets_QApplication_QApplication, setEffectEnabled)
{
	zend_bool enable;
	zval *arg0_param = NULL, *enable_param = NULL, _0, _1;
	zend_long arg0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_LONG(arg0)
		Z_PARAM_OPTIONAL
		Z_PARAM_BOOL(enable)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 1, &arg0_param, &enable_param);
	if (!enable_param) {
		enable = 1;
	} else {
		}
	ZVAL_LONG(&_0, arg0);
	ZVAL_BOOL(&_1, (enable ? 1 : 0));
	phpqt_qapplication_set_effect_enabled(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QApplication_QApplication, exec)
{

	RETURN_LONG(phpqt_qapplication_exec());
}

PHP_METHOD(Qt_Widgets_QApplication_QApplication, notify)
{
	zval *handle_param = NULL, *arg0_param = NULL, *arg1_param = NULL, _0, _1, _2;
	zend_long handle, arg0, arg1, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(arg0)
		Z_PARAM_LONG(arg1)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &arg0_param, &arg1_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, arg0);
	ZVAL_LONG(&_2, arg1);
	r = phpqt_qapplication_notify(&_0, &_1, &_2);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Widgets_QApplication_QApplication, focusChanged)
{
	zval *handle_param = NULL, *old_param = NULL, *now_param = NULL, _0, _1, _2;
	zend_long handle, old, now;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(old)
		Z_PARAM_LONG(now)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &old_param, &now_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, old);
	ZVAL_LONG(&_2, now);
	phpqt_qapplication_focus_changed(&_0, &_1, &_2);
}

PHP_METHOD(Qt_Widgets_QApplication_QApplication, styleSheet)
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
	phpqt_qapplication_style_sheet(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Widgets_QApplication_QApplication, autoSipEnabled)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qapplication_auto_sip_enabled(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Widgets_QApplication_QApplication, setStyleSheet)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval sheet;
	zval *handle_param = NULL, *sheet_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&sheet);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(sheet)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &sheet_param);
	zephir_get_strval(&sheet, sheet_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qapplication_set_style_sheet(&_0, &sheet);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_Widgets_QApplication_QApplication, setAutoSipEnabled)
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
	phpqt_qapplication_set_auto_sip_enabled(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QApplication_QApplication, closeAllWindows)
{

	phpqt_qapplication_close_all_windows();
}

PHP_METHOD(Qt_Widgets_QApplication_QApplication, aboutQt)
{

	phpqt_qapplication_about_qt();
}

PHP_METHOD(Qt_Widgets_QApplication_QApplication, event)
{
	zval *handle_param = NULL, *arg0_param = NULL, _0, _1;
	zend_long handle, arg0, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(arg0)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &arg0_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, arg0);
	r = phpqt_qapplication_event(&_0, &_1);
	RETURN_BOOL(r == 1);
}

