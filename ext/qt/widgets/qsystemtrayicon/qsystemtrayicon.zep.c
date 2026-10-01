
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
#include "src/widgets-qsystemtrayicon.h"
#include "kernel/object.h"
#include "kernel/string.h"
#include "kernel/memory.h"
#include "kernel/operators.h"


ZEPHIR_INIT_CLASS(Qt_Widgets_QSystemTrayIcon_QSystemTrayIcon)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Widgets\\QSystemTrayIcon, QSystemTrayIcon, qt, widgets_qsystemtrayicon_qsystemtrayicon, qt_widgets_qsystemtrayicon_qsystemtrayicon_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Widgets_QSystemTrayIcon_QSystemTrayIcon, staticMetaObject)
{

	RETURN_LONG(phpqt_qsystemtrayicon_static_meta_object());
}

PHP_METHOD(Qt_Widgets_QSystemTrayIcon_QSystemTrayIcon, tr)
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
	phpqt_qsystemtrayicon_tr(&result, s, c, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Widgets_QSystemTrayIcon_QSystemTrayIcon, new_)
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
	RETURN_LONG(phpqt_qsystemtrayicon_new(&_0));
}

PHP_METHOD(Qt_Widgets_QSystemTrayIcon_QSystemTrayIcon, newQIconQObject)
{
	zval *icon_param = NULL, *parent__param = NULL, _0, _1;
	zend_long icon, parent_;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_LONG(icon)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(parent_)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 1, &icon_param, &parent__param);
	if (!parent__param) {
		parent_ = 0;
	} else {
		}
	ZVAL_LONG(&_0, icon);
	ZVAL_LONG(&_1, parent_);
	RETURN_LONG(phpqt_qsystemtrayicon_new_q_icon_q_object(&_0, &_1));
}

PHP_METHOD(Qt_Widgets_QSystemTrayIcon_QSystemTrayIcon, setContextMenu)
{
	zval *handle_param = NULL, *menu_param = NULL, _0, _1;
	zend_long handle, menu;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(menu)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &menu_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, menu);
	phpqt_qsystemtrayicon_set_context_menu(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QSystemTrayIcon_QSystemTrayIcon, contextMenu)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qsystemtrayicon_context_menu(&_0));
}

PHP_METHOD(Qt_Widgets_QSystemTrayIcon_QSystemTrayIcon, icon)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qsystemtrayicon_icon(&_0));
}

PHP_METHOD(Qt_Widgets_QSystemTrayIcon_QSystemTrayIcon, setIcon)
{
	zval *handle_param = NULL, *icon_param = NULL, _0, _1;
	zend_long handle, icon;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(icon)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &icon_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, icon);
	phpqt_qsystemtrayicon_set_icon(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QSystemTrayIcon_QSystemTrayIcon, toolTip)
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
	phpqt_qsystemtrayicon_tool_tip(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Widgets_QSystemTrayIcon_QSystemTrayIcon, setToolTip)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval tip;
	zval *handle_param = NULL, *tip_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&tip);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(tip)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &tip_param);
	zephir_get_strval(&tip, tip_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qsystemtrayicon_set_tool_tip(&_0, &tip);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_Widgets_QSystemTrayIcon_QSystemTrayIcon, isSystemTrayAvailable)
{
	zend_long r = 0;
	r = phpqt_qsystemtrayicon_is_system_tray_available();
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Widgets_QSystemTrayIcon_QSystemTrayIcon, supportsMessages)
{
	zend_long r = 0;
	r = phpqt_qsystemtrayicon_supports_messages();
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Widgets_QSystemTrayIcon_QSystemTrayIcon, geometry)
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
	phpqt_qsystemtrayicon_geometry(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Widgets_QSystemTrayIcon_QSystemTrayIcon, isVisible)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qsystemtrayicon_is_visible(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Widgets_QSystemTrayIcon_QSystemTrayIcon, setVisible)
{
	zend_bool visible;
	zval *handle_param = NULL, *visible_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_BOOL(visible)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &visible_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_BOOL(&_1, (visible ? 1 : 0));
	phpqt_qsystemtrayicon_set_visible(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QSystemTrayIcon_QSystemTrayIcon, show)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qsystemtrayicon_show(&_0);
}

PHP_METHOD(Qt_Widgets_QSystemTrayIcon_QSystemTrayIcon, hide)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qsystemtrayicon_hide(&_0);
}

PHP_METHOD(Qt_Widgets_QSystemTrayIcon_QSystemTrayIcon, showMessage)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval title, msg;
	zval *handle_param = NULL, *title_param = NULL, *msg_param = NULL, *icon_param = NULL, *msecs_param = NULL, _0, _1, _2;
	zend_long handle, icon, msecs;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&title);
	ZVAL_UNDEF(&msg);
	ZEND_PARSE_PARAMETERS_START(4, 5)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(title)
		Z_PARAM_STR(msg)
		Z_PARAM_LONG(icon)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(msecs)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 4, 1, &handle_param, &title_param, &msg_param, &icon_param, &msecs_param);
	zephir_get_strval(&title, title_param);
	zephir_get_strval(&msg, msg_param);
	if (!msecs_param) {
		msecs = 10000;
	} else {
		}
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, icon);
	ZVAL_LONG(&_2, msecs);
	phpqt_qsystemtrayicon_show_message(&_0, &title, &msg, &_1, &_2);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_Widgets_QSystemTrayIcon_QSystemTrayIcon, showMessageQStringQStringQSystemTrayIconMessageIconInt)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval title, msg;
	zval *handle_param = NULL, *title_param = NULL, *msg_param = NULL, *icon = NULL, icon_sub, *msecs_param = NULL, __$null, _0, _1;
	zend_long handle, msecs;

	ZVAL_UNDEF(&icon_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&title);
	ZVAL_UNDEF(&msg);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(3, 5)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(title)
		Z_PARAM_STR(msg)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(icon)
		Z_PARAM_LONG(msecs)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 3, 2, &handle_param, &title_param, &msg_param, &icon, &msecs_param);
	zephir_get_strval(&title, title_param);
	zephir_get_strval(&msg, msg_param);
	if (!icon) {
		icon = &icon_sub;
		icon = &__$null;
	}
	if (!msecs_param) {
		msecs = 10000;
	} else {
		}
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, msecs);
	phpqt_qsystemtrayicon_show_message_q_string_q_string_q_system_tray_icon_message_icon_int(&_0, &title, &msg, icon, &_1);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_Widgets_QSystemTrayIcon_QSystemTrayIcon, activated)
{
	zval *handle_param = NULL, *reason_param = NULL, _0, _1;
	zend_long handle, reason;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(reason)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &reason_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, reason);
	phpqt_qsystemtrayicon_activated(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QSystemTrayIcon_QSystemTrayIcon, messageClicked)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qsystemtrayicon_message_clicked(&_0);
}

PHP_METHOD(Qt_Widgets_QSystemTrayIcon_QSystemTrayIcon, event)
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
	r = phpqt_qsystemtrayicon_event(&_0, &_1);
	RETURN_BOOL(r == 1);
}

