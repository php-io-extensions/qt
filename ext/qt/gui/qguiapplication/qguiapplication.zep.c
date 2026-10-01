
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
#include "src/gui-qguiapplication.h"
#include "kernel/object.h"
#include "kernel/string.h"
#include "kernel/memory.h"
#include "kernel/operators.h"


ZEPHIR_INIT_CLASS(Qt_Gui_QGuiApplication_QGuiApplication)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Gui\\QGuiApplication, QGuiApplication, qt, gui_qguiapplication_qguiapplication, qt_gui_qguiapplication_qguiapplication_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Gui_QGuiApplication_QGuiApplication, staticMetaObject)
{

	RETURN_LONG(phpqt_qguiapplication_static_meta_object());
}

PHP_METHOD(Qt_Gui_QGuiApplication_QGuiApplication, tr)
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
	phpqt_qguiapplication_tr(&result, s, c, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QGuiApplication_QGuiApplication, new_)
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
	RETURN_MM_LONG(phpqt_qguiapplication_new(&argv, arg0));
}

PHP_METHOD(Qt_Gui_QGuiApplication_QGuiApplication, setApplicationDisplayName)
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
	phpqt_qguiapplication_set_application_display_name(&name);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_Gui_QGuiApplication_QGuiApplication, applicationDisplayName)
{
	zval result;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;

	ZVAL_UNDEF(&result);
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);

	ZEPHIR_INIT_VAR(&result);
	phpqt_qguiapplication_application_display_name(&result);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QGuiApplication_QGuiApplication, setBadgeNumber)
{
	zval *handle_param = NULL, *number_param = NULL, _0, _1;
	zend_long handle, number;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(number)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &number_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, number);
	phpqt_qguiapplication_set_badge_number(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QGuiApplication_QGuiApplication, setDesktopFileName)
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
	phpqt_qguiapplication_set_desktop_file_name(&name);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_Gui_QGuiApplication_QGuiApplication, desktopFileName)
{
	zval result;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;

	ZVAL_UNDEF(&result);
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);

	ZEPHIR_INIT_VAR(&result);
	phpqt_qguiapplication_desktop_file_name(&result);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QGuiApplication_QGuiApplication, allWindows)
{
	zval result;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;

	ZVAL_UNDEF(&result);
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);

	ZEPHIR_INIT_VAR(&result);
	phpqt_qguiapplication_all_windows(&result);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QGuiApplication_QGuiApplication, topLevelWindows)
{
	zval result;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;

	ZVAL_UNDEF(&result);
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);

	ZEPHIR_INIT_VAR(&result);
	phpqt_qguiapplication_top_level_windows(&result);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QGuiApplication_QGuiApplication, topLevelAt)
{
	zval *posX_param = NULL, *posY_param = NULL, _0, _1;
	zend_long posX, posY;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(posX)
		Z_PARAM_LONG(posY)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &posX_param, &posY_param);
	ZVAL_LONG(&_0, posX);
	ZVAL_LONG(&_1, posY);
	RETURN_LONG(phpqt_qguiapplication_top_level_at(&_0, &_1));
}

PHP_METHOD(Qt_Gui_QGuiApplication_QGuiApplication, setWindowIcon)
{
	zval *icon_param = NULL, _0;
	zend_long icon;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(icon)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &icon_param);
	ZVAL_LONG(&_0, icon);
	phpqt_qguiapplication_set_window_icon(&_0);
}

PHP_METHOD(Qt_Gui_QGuiApplication_QGuiApplication, windowIcon)
{

	RETURN_LONG(phpqt_qguiapplication_window_icon());
}

PHP_METHOD(Qt_Gui_QGuiApplication_QGuiApplication, platformName)
{
	zval result;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;

	ZVAL_UNDEF(&result);
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);

	ZEPHIR_INIT_VAR(&result);
	phpqt_qguiapplication_platform_name(&result);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QGuiApplication_QGuiApplication, modalWindow)
{

	RETURN_LONG(phpqt_qguiapplication_modal_window());
}

PHP_METHOD(Qt_Gui_QGuiApplication_QGuiApplication, focusWindow)
{

	RETURN_LONG(phpqt_qguiapplication_focus_window());
}

PHP_METHOD(Qt_Gui_QGuiApplication_QGuiApplication, focusObject)
{

	RETURN_LONG(phpqt_qguiapplication_focus_object());
}

PHP_METHOD(Qt_Gui_QGuiApplication_QGuiApplication, primaryScreen)
{

	RETURN_LONG(phpqt_qguiapplication_primary_screen());
}

PHP_METHOD(Qt_Gui_QGuiApplication_QGuiApplication, screens)
{
	zval result;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;

	ZVAL_UNDEF(&result);
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);

	ZEPHIR_INIT_VAR(&result);
	phpqt_qguiapplication_screens(&result);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QGuiApplication_QGuiApplication, screenAt)
{
	zval *pointX_param = NULL, *pointY_param = NULL, _0, _1;
	zend_long pointX, pointY;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(pointX)
		Z_PARAM_LONG(pointY)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &pointX_param, &pointY_param);
	ZVAL_LONG(&_0, pointX);
	ZVAL_LONG(&_1, pointY);
	RETURN_LONG(phpqt_qguiapplication_screen_at(&_0, &_1));
}

PHP_METHOD(Qt_Gui_QGuiApplication_QGuiApplication, devicePixelRatio)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_DOUBLE(phpqt_qguiapplication_device_pixel_ratio(&_0));
}

PHP_METHOD(Qt_Gui_QGuiApplication_QGuiApplication, overrideCursor)
{

	RETURN_LONG(phpqt_qguiapplication_override_cursor());
}

PHP_METHOD(Qt_Gui_QGuiApplication_QGuiApplication, setOverrideCursor)
{
	zval *arg0_param = NULL, _0;
	zend_long arg0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(arg0)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &arg0_param);
	ZVAL_LONG(&_0, arg0);
	phpqt_qguiapplication_set_override_cursor(&_0);
}

PHP_METHOD(Qt_Gui_QGuiApplication_QGuiApplication, changeOverrideCursor)
{
	zval *arg0_param = NULL, _0;
	zend_long arg0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(arg0)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &arg0_param);
	ZVAL_LONG(&_0, arg0);
	phpqt_qguiapplication_change_override_cursor(&_0);
}

PHP_METHOD(Qt_Gui_QGuiApplication_QGuiApplication, restoreOverrideCursor)
{

	phpqt_qguiapplication_restore_override_cursor();
}

PHP_METHOD(Qt_Gui_QGuiApplication_QGuiApplication, font)
{

	RETURN_LONG(phpqt_qguiapplication_font());
}

PHP_METHOD(Qt_Gui_QGuiApplication_QGuiApplication, setFont)
{
	zval *arg0_param = NULL, _0;
	zend_long arg0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(arg0)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &arg0_param);
	ZVAL_LONG(&_0, arg0);
	phpqt_qguiapplication_set_font(&_0);
}

PHP_METHOD(Qt_Gui_QGuiApplication_QGuiApplication, clipboard)
{

	RETURN_LONG(phpqt_qguiapplication_clipboard());
}

PHP_METHOD(Qt_Gui_QGuiApplication_QGuiApplication, palette)
{

	RETURN_LONG(phpqt_qguiapplication_palette());
}

PHP_METHOD(Qt_Gui_QGuiApplication_QGuiApplication, setPalette)
{
	zval *pal_param = NULL, _0;
	zend_long pal;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(pal)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &pal_param);
	ZVAL_LONG(&_0, pal);
	phpqt_qguiapplication_set_palette(&_0);
}

PHP_METHOD(Qt_Gui_QGuiApplication_QGuiApplication, keyboardModifiers)
{

	RETURN_LONG(phpqt_qguiapplication_keyboard_modifiers());
}

PHP_METHOD(Qt_Gui_QGuiApplication_QGuiApplication, queryKeyboardModifiers)
{

	RETURN_LONG(phpqt_qguiapplication_query_keyboard_modifiers());
}

PHP_METHOD(Qt_Gui_QGuiApplication_QGuiApplication, mouseButtons)
{

	RETURN_LONG(phpqt_qguiapplication_mouse_buttons());
}

PHP_METHOD(Qt_Gui_QGuiApplication_QGuiApplication, setLayoutDirection)
{
	zval *direction_param = NULL, _0;
	zend_long direction;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(direction)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &direction_param);
	ZVAL_LONG(&_0, direction);
	phpqt_qguiapplication_set_layout_direction(&_0);
}

PHP_METHOD(Qt_Gui_QGuiApplication_QGuiApplication, layoutDirection)
{

	RETURN_LONG(phpqt_qguiapplication_layout_direction());
}

PHP_METHOD(Qt_Gui_QGuiApplication_QGuiApplication, isRightToLeft)
{
	zend_long r = 0;
	r = phpqt_qguiapplication_is_right_to_left();
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Gui_QGuiApplication_QGuiApplication, isLeftToRight)
{
	zend_long r = 0;
	r = phpqt_qguiapplication_is_left_to_right();
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Gui_QGuiApplication_QGuiApplication, styleHints)
{

	RETURN_LONG(phpqt_qguiapplication_style_hints());
}

PHP_METHOD(Qt_Gui_QGuiApplication_QGuiApplication, setDesktopSettingsAware)
{
	zval *on_param = NULL, _0;
	zend_bool on;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_BOOL(on)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &on_param);
	ZVAL_BOOL(&_0, (on ? 1 : 0));
	phpqt_qguiapplication_set_desktop_settings_aware(&_0);
}

PHP_METHOD(Qt_Gui_QGuiApplication_QGuiApplication, desktopSettingsAware)
{
	zend_long r = 0;
	r = phpqt_qguiapplication_desktop_settings_aware();
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Gui_QGuiApplication_QGuiApplication, inputMethod)
{

	RETURN_LONG(phpqt_qguiapplication_input_method());
}

PHP_METHOD(Qt_Gui_QGuiApplication_QGuiApplication, setQuitOnLastWindowClosed)
{
	zval *quit_param = NULL, _0;
	zend_bool quit;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_BOOL(quit)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &quit_param);
	ZVAL_BOOL(&_0, (quit ? 1 : 0));
	phpqt_qguiapplication_set_quit_on_last_window_closed(&_0);
}

PHP_METHOD(Qt_Gui_QGuiApplication_QGuiApplication, quitOnLastWindowClosed)
{
	zend_long r = 0;
	r = phpqt_qguiapplication_quit_on_last_window_closed();
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Gui_QGuiApplication_QGuiApplication, applicationState)
{

	RETURN_LONG(phpqt_qguiapplication_application_state());
}

PHP_METHOD(Qt_Gui_QGuiApplication_QGuiApplication, setHighDpiScaleFactorRoundingPolicy)
{
	zval *policy_param = NULL, _0;
	zend_long policy;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(policy)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &policy_param);
	ZVAL_LONG(&_0, policy);
	phpqt_qguiapplication_set_high_dpi_scale_factor_rounding_policy(&_0);
}

PHP_METHOD(Qt_Gui_QGuiApplication_QGuiApplication, highDpiScaleFactorRoundingPolicy)
{

	RETURN_LONG(phpqt_qguiapplication_high_dpi_scale_factor_rounding_policy());
}

PHP_METHOD(Qt_Gui_QGuiApplication_QGuiApplication, exec)
{

	RETURN_LONG(phpqt_qguiapplication_exec());
}

PHP_METHOD(Qt_Gui_QGuiApplication_QGuiApplication, notify)
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
	r = phpqt_qguiapplication_notify(&_0, &_1, &_2);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Gui_QGuiApplication_QGuiApplication, isSessionRestored)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qguiapplication_is_session_restored(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Gui_QGuiApplication_QGuiApplication, sessionId)
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
	phpqt_qguiapplication_session_id(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QGuiApplication_QGuiApplication, sessionKey)
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
	phpqt_qguiapplication_session_key(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QGuiApplication_QGuiApplication, isSavingSession)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qguiapplication_is_saving_session(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Gui_QGuiApplication_QGuiApplication, sync)
{

	phpqt_qguiapplication_sync();
}

PHP_METHOD(Qt_Gui_QGuiApplication_QGuiApplication, fontDatabaseChanged)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qguiapplication_font_database_changed(&_0);
}

PHP_METHOD(Qt_Gui_QGuiApplication_QGuiApplication, screenAdded)
{
	zval *handle_param = NULL, *screen_param = NULL, _0, _1;
	zend_long handle, screen;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(screen)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &screen_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, screen);
	phpqt_qguiapplication_screen_added(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QGuiApplication_QGuiApplication, screenRemoved)
{
	zval *handle_param = NULL, *screen_param = NULL, _0, _1;
	zend_long handle, screen;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(screen)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &screen_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, screen);
	phpqt_qguiapplication_screen_removed(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QGuiApplication_QGuiApplication, primaryScreenChanged)
{
	zval *handle_param = NULL, *screen_param = NULL, _0, _1;
	zend_long handle, screen;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(screen)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &screen_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, screen);
	phpqt_qguiapplication_primary_screen_changed(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QGuiApplication_QGuiApplication, lastWindowClosed)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qguiapplication_last_window_closed(&_0);
}

PHP_METHOD(Qt_Gui_QGuiApplication_QGuiApplication, focusObjectChanged)
{
	zval *handle_param = NULL, *focusObject_param = NULL, _0, _1;
	zend_long handle, focusObject;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(focusObject)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &focusObject_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, focusObject);
	phpqt_qguiapplication_focus_object_changed(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QGuiApplication_QGuiApplication, focusWindowChanged)
{
	zval *handle_param = NULL, *focusWindow_param = NULL, _0, _1;
	zend_long handle, focusWindow;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(focusWindow)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &focusWindow_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, focusWindow);
	phpqt_qguiapplication_focus_window_changed(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QGuiApplication_QGuiApplication, applicationStateChanged)
{
	zval *handle_param = NULL, *state_param = NULL, _0, _1;
	zend_long handle, state;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(state)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &state_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, state);
	phpqt_qguiapplication_application_state_changed(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QGuiApplication_QGuiApplication, layoutDirectionChanged)
{
	zval *handle_param = NULL, *direction_param = NULL, _0, _1;
	zend_long handle, direction;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(direction)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &direction_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, direction);
	phpqt_qguiapplication_layout_direction_changed(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QGuiApplication_QGuiApplication, commitDataRequest)
{
	zval *handle_param = NULL, *sessionManager_param = NULL, _0, _1;
	zend_long handle, sessionManager;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(sessionManager)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &sessionManager_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, sessionManager);
	phpqt_qguiapplication_commit_data_request(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QGuiApplication_QGuiApplication, saveStateRequest)
{
	zval *handle_param = NULL, *sessionManager_param = NULL, _0, _1;
	zend_long handle, sessionManager;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(sessionManager)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &sessionManager_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, sessionManager);
	phpqt_qguiapplication_save_state_request(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QGuiApplication_QGuiApplication, applicationDisplayNameChanged)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qguiapplication_application_display_name_changed(&_0);
}

PHP_METHOD(Qt_Gui_QGuiApplication_QGuiApplication, event)
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
	r = phpqt_qguiapplication_event(&_0, &_1);
	RETURN_BOOL(r == 1);
}

