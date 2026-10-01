
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
#include "src/gui-qstylehints.h"
#include "kernel/object.h"
#include "kernel/string.h"
#include "kernel/memory.h"
#include "kernel/operators.h"


ZEPHIR_INIT_CLASS(Qt_Gui_QStyleHints_QStyleHints)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Gui\\QStyleHints, QStyleHints, qt, gui_qstylehints_qstylehints, qt_gui_qstylehints_qstylehints_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Gui_QStyleHints_QStyleHints, staticMetaObject)
{

	RETURN_LONG(phpqt_qstylehints_static_meta_object());
}

PHP_METHOD(Qt_Gui_QStyleHints_QStyleHints, tr)
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
	phpqt_qstylehints_tr(&result, s, c, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QStyleHints_QStyleHints, setMouseDoubleClickInterval)
{
	zval *handle_param = NULL, *mouseDoubleClickInterval_param = NULL, _0, _1;
	zend_long handle, mouseDoubleClickInterval;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(mouseDoubleClickInterval)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &mouseDoubleClickInterval_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, mouseDoubleClickInterval);
	phpqt_qstylehints_set_mouse_double_click_interval(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QStyleHints_QStyleHints, mouseDoubleClickInterval)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qstylehints_mouse_double_click_interval(&_0));
}

PHP_METHOD(Qt_Gui_QStyleHints_QStyleHints, mouseDoubleClickDistance)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qstylehints_mouse_double_click_distance(&_0));
}

PHP_METHOD(Qt_Gui_QStyleHints_QStyleHints, touchDoubleTapDistance)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qstylehints_touch_double_tap_distance(&_0));
}

PHP_METHOD(Qt_Gui_QStyleHints_QStyleHints, setMousePressAndHoldInterval)
{
	zval *handle_param = NULL, *mousePressAndHoldInterval_param = NULL, _0, _1;
	zend_long handle, mousePressAndHoldInterval;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(mousePressAndHoldInterval)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &mousePressAndHoldInterval_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, mousePressAndHoldInterval);
	phpqt_qstylehints_set_mouse_press_and_hold_interval(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QStyleHints_QStyleHints, mousePressAndHoldInterval)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qstylehints_mouse_press_and_hold_interval(&_0));
}

PHP_METHOD(Qt_Gui_QStyleHints_QStyleHints, setStartDragDistance)
{
	zval *handle_param = NULL, *startDragDistance_param = NULL, _0, _1;
	zend_long handle, startDragDistance;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(startDragDistance)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &startDragDistance_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, startDragDistance);
	phpqt_qstylehints_set_start_drag_distance(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QStyleHints_QStyleHints, startDragDistance)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qstylehints_start_drag_distance(&_0));
}

PHP_METHOD(Qt_Gui_QStyleHints_QStyleHints, setStartDragTime)
{
	zval *handle_param = NULL, *startDragTime_param = NULL, _0, _1;
	zend_long handle, startDragTime;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(startDragTime)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &startDragTime_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, startDragTime);
	phpqt_qstylehints_set_start_drag_time(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QStyleHints_QStyleHints, startDragTime)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qstylehints_start_drag_time(&_0));
}

PHP_METHOD(Qt_Gui_QStyleHints_QStyleHints, startDragVelocity)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qstylehints_start_drag_velocity(&_0));
}

PHP_METHOD(Qt_Gui_QStyleHints_QStyleHints, setKeyboardInputInterval)
{
	zval *handle_param = NULL, *keyboardInputInterval_param = NULL, _0, _1;
	zend_long handle, keyboardInputInterval;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(keyboardInputInterval)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &keyboardInputInterval_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, keyboardInputInterval);
	phpqt_qstylehints_set_keyboard_input_interval(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QStyleHints_QStyleHints, keyboardInputInterval)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qstylehints_keyboard_input_interval(&_0));
}

PHP_METHOD(Qt_Gui_QStyleHints_QStyleHints, keyboardAutoRepeatRateF)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_DOUBLE(phpqt_qstylehints_keyboard_auto_repeat_rate_f(&_0));
}

PHP_METHOD(Qt_Gui_QStyleHints_QStyleHints, setCursorFlashTime)
{
	zval *handle_param = NULL, *cursorFlashTime_param = NULL, _0, _1;
	zend_long handle, cursorFlashTime;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(cursorFlashTime)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &cursorFlashTime_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, cursorFlashTime);
	phpqt_qstylehints_set_cursor_flash_time(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QStyleHints_QStyleHints, cursorFlashTime)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qstylehints_cursor_flash_time(&_0));
}

PHP_METHOD(Qt_Gui_QStyleHints_QStyleHints, showIsFullScreen)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qstylehints_show_is_full_screen(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Gui_QStyleHints_QStyleHints, showIsMaximized)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qstylehints_show_is_maximized(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Gui_QStyleHints_QStyleHints, showShortcutsInContextMenus)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qstylehints_show_shortcuts_in_context_menus(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Gui_QStyleHints_QStyleHints, setShowShortcutsInContextMenus)
{
	zend_bool showShortcutsInContextMenus;
	zval *handle_param = NULL, *showShortcutsInContextMenus_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_BOOL(showShortcutsInContextMenus)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &showShortcutsInContextMenus_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_BOOL(&_1, (showShortcutsInContextMenus ? 1 : 0));
	phpqt_qstylehints_set_show_shortcuts_in_context_menus(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QStyleHints_QStyleHints, contextMenuTrigger)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qstylehints_context_menu_trigger(&_0));
}

PHP_METHOD(Qt_Gui_QStyleHints_QStyleHints, setContextMenuTrigger)
{
	zval *handle_param = NULL, *contextMenuTrigger_param = NULL, _0, _1;
	zend_long handle, contextMenuTrigger;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(contextMenuTrigger)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &contextMenuTrigger_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, contextMenuTrigger);
	phpqt_qstylehints_set_context_menu_trigger(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QStyleHints_QStyleHints, passwordMaskDelay)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qstylehints_password_mask_delay(&_0));
}

PHP_METHOD(Qt_Gui_QStyleHints_QStyleHints, passwordMaskCharacter)
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
	phpqt_qstylehints_password_mask_character(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QStyleHints_QStyleHints, fontSmoothingGamma)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_DOUBLE(phpqt_qstylehints_font_smoothing_gamma(&_0));
}

PHP_METHOD(Qt_Gui_QStyleHints_QStyleHints, useRtlExtensions)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qstylehints_use_rtl_extensions(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Gui_QStyleHints_QStyleHints, setFocusOnTouchRelease)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qstylehints_set_focus_on_touch_release(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Gui_QStyleHints_QStyleHints, tabFocusBehavior)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qstylehints_tab_focus_behavior(&_0));
}

PHP_METHOD(Qt_Gui_QStyleHints_QStyleHints, setTabFocusBehavior)
{
	zval *handle_param = NULL, *tabFocusBehavior_param = NULL, _0, _1;
	zend_long handle, tabFocusBehavior;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(tabFocusBehavior)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &tabFocusBehavior_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, tabFocusBehavior);
	phpqt_qstylehints_set_tab_focus_behavior(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QStyleHints_QStyleHints, singleClickActivation)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qstylehints_single_click_activation(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Gui_QStyleHints_QStyleHints, useHoverEffects)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qstylehints_use_hover_effects(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Gui_QStyleHints_QStyleHints, setUseHoverEffects)
{
	zend_bool useHoverEffects;
	zval *handle_param = NULL, *useHoverEffects_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_BOOL(useHoverEffects)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &useHoverEffects_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_BOOL(&_1, (useHoverEffects ? 1 : 0));
	phpqt_qstylehints_set_use_hover_effects(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QStyleHints_QStyleHints, wheelScrollLines)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qstylehints_wheel_scroll_lines(&_0));
}

PHP_METHOD(Qt_Gui_QStyleHints_QStyleHints, setWheelScrollLines)
{
	zval *handle_param = NULL, *scrollLines_param = NULL, _0, _1;
	zend_long handle, scrollLines;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(scrollLines)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &scrollLines_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, scrollLines);
	phpqt_qstylehints_set_wheel_scroll_lines(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QStyleHints_QStyleHints, setMouseQuickSelectionThreshold)
{
	zval *handle_param = NULL, *threshold_param = NULL, _0, _1;
	zend_long handle, threshold;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(threshold)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &threshold_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, threshold);
	phpqt_qstylehints_set_mouse_quick_selection_threshold(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QStyleHints_QStyleHints, mouseQuickSelectionThreshold)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qstylehints_mouse_quick_selection_threshold(&_0));
}

PHP_METHOD(Qt_Gui_QStyleHints_QStyleHints, colorScheme)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qstylehints_color_scheme(&_0));
}

PHP_METHOD(Qt_Gui_QStyleHints_QStyleHints, setColorScheme)
{
	zval *handle_param = NULL, *scheme_param = NULL, _0, _1;
	zend_long handle, scheme;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(scheme)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &scheme_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, scheme);
	phpqt_qstylehints_set_color_scheme(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QStyleHints_QStyleHints, unsetColorScheme)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qstylehints_unset_color_scheme(&_0);
}

PHP_METHOD(Qt_Gui_QStyleHints_QStyleHints, cursorFlashTimeChanged)
{
	zval *handle_param = NULL, *cursorFlashTime_param = NULL, _0, _1;
	zend_long handle, cursorFlashTime;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(cursorFlashTime)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &cursorFlashTime_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, cursorFlashTime);
	phpqt_qstylehints_cursor_flash_time_changed(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QStyleHints_QStyleHints, keyboardInputIntervalChanged)
{
	zval *handle_param = NULL, *keyboardInputInterval_param = NULL, _0, _1;
	zend_long handle, keyboardInputInterval;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(keyboardInputInterval)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &keyboardInputInterval_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, keyboardInputInterval);
	phpqt_qstylehints_keyboard_input_interval_changed(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QStyleHints_QStyleHints, mouseDoubleClickIntervalChanged)
{
	zval *handle_param = NULL, *mouseDoubleClickInterval_param = NULL, _0, _1;
	zend_long handle, mouseDoubleClickInterval;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(mouseDoubleClickInterval)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &mouseDoubleClickInterval_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, mouseDoubleClickInterval);
	phpqt_qstylehints_mouse_double_click_interval_changed(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QStyleHints_QStyleHints, mousePressAndHoldIntervalChanged)
{
	zval *handle_param = NULL, *mousePressAndHoldInterval_param = NULL, _0, _1;
	zend_long handle, mousePressAndHoldInterval;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(mousePressAndHoldInterval)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &mousePressAndHoldInterval_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, mousePressAndHoldInterval);
	phpqt_qstylehints_mouse_press_and_hold_interval_changed(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QStyleHints_QStyleHints, startDragDistanceChanged)
{
	zval *handle_param = NULL, *startDragDistance_param = NULL, _0, _1;
	zend_long handle, startDragDistance;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(startDragDistance)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &startDragDistance_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, startDragDistance);
	phpqt_qstylehints_start_drag_distance_changed(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QStyleHints_QStyleHints, startDragTimeChanged)
{
	zval *handle_param = NULL, *startDragTime_param = NULL, _0, _1;
	zend_long handle, startDragTime;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(startDragTime)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &startDragTime_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, startDragTime);
	phpqt_qstylehints_start_drag_time_changed(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QStyleHints_QStyleHints, tabFocusBehaviorChanged)
{
	zval *handle_param = NULL, *tabFocusBehavior_param = NULL, _0, _1;
	zend_long handle, tabFocusBehavior;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(tabFocusBehavior)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &tabFocusBehavior_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, tabFocusBehavior);
	phpqt_qstylehints_tab_focus_behavior_changed(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QStyleHints_QStyleHints, useHoverEffectsChanged)
{
	zend_bool useHoverEffects;
	zval *handle_param = NULL, *useHoverEffects_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_BOOL(useHoverEffects)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &useHoverEffects_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_BOOL(&_1, (useHoverEffects ? 1 : 0));
	phpqt_qstylehints_use_hover_effects_changed(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QStyleHints_QStyleHints, showShortcutsInContextMenusChanged)
{
	zend_bool arg0;
	zval *handle_param = NULL, *arg0_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_BOOL(arg0)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &arg0_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_BOOL(&_1, (arg0 ? 1 : 0));
	phpqt_qstylehints_show_shortcuts_in_context_menus_changed(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QStyleHints_QStyleHints, contextMenuTriggerChanged)
{
	zval *handle_param = NULL, *contextMenuTrigger_param = NULL, _0, _1;
	zend_long handle, contextMenuTrigger;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(contextMenuTrigger)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &contextMenuTrigger_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, contextMenuTrigger);
	phpqt_qstylehints_context_menu_trigger_changed(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QStyleHints_QStyleHints, wheelScrollLinesChanged)
{
	zval *handle_param = NULL, *scrollLines_param = NULL, _0, _1;
	zend_long handle, scrollLines;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(scrollLines)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &scrollLines_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, scrollLines);
	phpqt_qstylehints_wheel_scroll_lines_changed(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QStyleHints_QStyleHints, mouseQuickSelectionThresholdChanged)
{
	zval *handle_param = NULL, *threshold_param = NULL, _0, _1;
	zend_long handle, threshold;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(threshold)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &threshold_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, threshold);
	phpqt_qstylehints_mouse_quick_selection_threshold_changed(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QStyleHints_QStyleHints, colorSchemeChanged)
{
	zval *handle_param = NULL, *colorScheme_param = NULL, _0, _1;
	zend_long handle, colorScheme;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(colorScheme)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &colorScheme_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, colorScheme);
	phpqt_qstylehints_color_scheme_changed(&_0, &_1);
}

