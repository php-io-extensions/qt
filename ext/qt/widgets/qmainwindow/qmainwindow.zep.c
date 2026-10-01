
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
#include "src/widgets-qmainwindow.h"
#include "kernel/object.h"
#include "kernel/string.h"
#include "kernel/memory.h"
#include "kernel/operators.h"


ZEPHIR_INIT_CLASS(Qt_Widgets_QMainWindow_QMainWindow)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Widgets\\QMainWindow, QMainWindow, qt, widgets_qmainwindow_qmainwindow, qt_widgets_qmainwindow_qmainwindow_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Widgets_QMainWindow_QMainWindow, staticMetaObject)
{

	RETURN_LONG(phpqt_qmainwindow_static_meta_object());
}

PHP_METHOD(Qt_Widgets_QMainWindow_QMainWindow, tr)
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
	phpqt_qmainwindow_tr(&result, s, c, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Widgets_QMainWindow_QMainWindow, new_)
{
	zval *parent__param = NULL, *flags = NULL, flags_sub, __$null, _0;
	zend_long parent_;

	ZVAL_UNDEF(&flags_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(0, 2)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(parent_)
		Z_PARAM_ZVAL_OR_NULL(flags)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(0, 2, &parent__param, &flags);
	if (!parent__param) {
		parent_ = 0;
	} else {
		}
	if (!flags) {
		flags = &flags_sub;
		flags = &__$null;
	}
	ZVAL_LONG(&_0, parent_);
	RETURN_LONG(phpqt_qmainwindow_new(&_0, flags));
}

PHP_METHOD(Qt_Widgets_QMainWindow_QMainWindow, iconSize)
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
	phpqt_qmainwindow_icon_size(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Widgets_QMainWindow_QMainWindow, setIconSize)
{
	zval *handle_param = NULL, *iconSizeWidth_param = NULL, *iconSizeHeight_param = NULL, _0, _1, _2;
	zend_long handle, iconSizeWidth, iconSizeHeight;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(iconSizeWidth)
		Z_PARAM_LONG(iconSizeHeight)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &iconSizeWidth_param, &iconSizeHeight_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, iconSizeWidth);
	ZVAL_LONG(&_2, iconSizeHeight);
	phpqt_qmainwindow_set_icon_size(&_0, &_1, &_2);
}

PHP_METHOD(Qt_Widgets_QMainWindow_QMainWindow, toolButtonStyle)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qmainwindow_tool_button_style(&_0));
}

PHP_METHOD(Qt_Widgets_QMainWindow_QMainWindow, setToolButtonStyle)
{
	zval *handle_param = NULL, *toolButtonStyle_param = NULL, _0, _1;
	zend_long handle, toolButtonStyle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(toolButtonStyle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &toolButtonStyle_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, toolButtonStyle);
	phpqt_qmainwindow_set_tool_button_style(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QMainWindow_QMainWindow, isAnimated)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qmainwindow_is_animated(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Widgets_QMainWindow_QMainWindow, isDockNestingEnabled)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qmainwindow_is_dock_nesting_enabled(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Widgets_QMainWindow_QMainWindow, documentMode)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qmainwindow_document_mode(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Widgets_QMainWindow_QMainWindow, setDocumentMode)
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
	phpqt_qmainwindow_set_document_mode(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QMainWindow_QMainWindow, tabShape)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qmainwindow_tab_shape(&_0));
}

PHP_METHOD(Qt_Widgets_QMainWindow_QMainWindow, setTabShape)
{
	zval *handle_param = NULL, *tabShape_param = NULL, _0, _1;
	zend_long handle, tabShape;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(tabShape)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &tabShape_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, tabShape);
	phpqt_qmainwindow_set_tab_shape(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QMainWindow_QMainWindow, tabPosition)
{
	zval *handle_param = NULL, *area_param = NULL, _0, _1;
	zend_long handle, area;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(area)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &area_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, area);
	RETURN_LONG(phpqt_qmainwindow_tab_position(&_0, &_1));
}

PHP_METHOD(Qt_Widgets_QMainWindow_QMainWindow, setTabPosition)
{
	zval *handle_param = NULL, *areas_param = NULL, *tabPosition_param = NULL, _0, _1, _2;
	zend_long handle, areas, tabPosition;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(areas)
		Z_PARAM_LONG(tabPosition)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &areas_param, &tabPosition_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, areas);
	ZVAL_LONG(&_2, tabPosition);
	phpqt_qmainwindow_set_tab_position(&_0, &_1, &_2);
}

PHP_METHOD(Qt_Widgets_QMainWindow_QMainWindow, setDockOptions)
{
	zval *handle_param = NULL, *options_param = NULL, _0, _1;
	zend_long handle, options;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(options)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &options_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, options);
	phpqt_qmainwindow_set_dock_options(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QMainWindow_QMainWindow, dockOptions)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qmainwindow_dock_options(&_0));
}

PHP_METHOD(Qt_Widgets_QMainWindow_QMainWindow, isSeparator)
{
	zval *handle_param = NULL, *posX_param = NULL, *posY_param = NULL, _0, _1, _2;
	zend_long handle, posX, posY, r = 0;

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
	r = phpqt_qmainwindow_is_separator(&_0, &_1, &_2);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Widgets_QMainWindow_QMainWindow, menuBar)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qmainwindow_menu_bar(&_0));
}

PHP_METHOD(Qt_Widgets_QMainWindow_QMainWindow, setMenuBar)
{
	zval *handle_param = NULL, *menubar_param = NULL, _0, _1;
	zend_long handle, menubar;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(menubar)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &menubar_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, menubar);
	phpqt_qmainwindow_set_menu_bar(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QMainWindow_QMainWindow, menuWidget)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qmainwindow_menu_widget(&_0));
}

PHP_METHOD(Qt_Widgets_QMainWindow_QMainWindow, setMenuWidget)
{
	zval *handle_param = NULL, *menubar_param = NULL, _0, _1;
	zend_long handle, menubar;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(menubar)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &menubar_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, menubar);
	phpqt_qmainwindow_set_menu_widget(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QMainWindow_QMainWindow, statusBar)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qmainwindow_status_bar(&_0));
}

PHP_METHOD(Qt_Widgets_QMainWindow_QMainWindow, setStatusBar)
{
	zval *handle_param = NULL, *statusbar_param = NULL, _0, _1;
	zend_long handle, statusbar;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(statusbar)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &statusbar_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, statusbar);
	phpqt_qmainwindow_set_status_bar(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QMainWindow_QMainWindow, centralWidget)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qmainwindow_central_widget(&_0));
}

PHP_METHOD(Qt_Widgets_QMainWindow_QMainWindow, setCentralWidget)
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
	phpqt_qmainwindow_set_central_widget(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QMainWindow_QMainWindow, takeCentralWidget)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qmainwindow_take_central_widget(&_0));
}

PHP_METHOD(Qt_Widgets_QMainWindow_QMainWindow, setCorner)
{
	zval *handle_param = NULL, *corner_param = NULL, *area_param = NULL, _0, _1, _2;
	zend_long handle, corner, area;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(corner)
		Z_PARAM_LONG(area)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &corner_param, &area_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, corner);
	ZVAL_LONG(&_2, area);
	phpqt_qmainwindow_set_corner(&_0, &_1, &_2);
}

PHP_METHOD(Qt_Widgets_QMainWindow_QMainWindow, corner)
{
	zval *handle_param = NULL, *corner_param = NULL, _0, _1;
	zend_long handle, corner;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(corner)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &corner_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, corner);
	RETURN_LONG(phpqt_qmainwindow_corner(&_0, &_1));
}

PHP_METHOD(Qt_Widgets_QMainWindow_QMainWindow, addToolBarBreak)
{
	zval *handle_param = NULL, *area = NULL, area_sub, __$null, _0;
	zend_long handle;

	ZVAL_UNDEF(&area_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(area)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 1, &handle_param, &area);
	if (!area) {
		area = &area_sub;
		area = &__$null;
	}
	ZVAL_LONG(&_0, handle);
	phpqt_qmainwindow_add_tool_bar_break(&_0, area);
}

PHP_METHOD(Qt_Widgets_QMainWindow_QMainWindow, insertToolBarBreak)
{
	zval *handle_param = NULL, *before_param = NULL, _0, _1;
	zend_long handle, before;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(before)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &before_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, before);
	phpqt_qmainwindow_insert_tool_bar_break(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QMainWindow_QMainWindow, addToolBar)
{
	zval *handle_param = NULL, *area_param = NULL, *toolbar_param = NULL, _0, _1, _2;
	zend_long handle, area, toolbar;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(area)
		Z_PARAM_LONG(toolbar)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &area_param, &toolbar_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, area);
	ZVAL_LONG(&_2, toolbar);
	phpqt_qmainwindow_add_tool_bar(&_0, &_1, &_2);
}

PHP_METHOD(Qt_Widgets_QMainWindow_QMainWindow, addToolBarQToolBar)
{
	zval *handle_param = NULL, *toolbar_param = NULL, _0, _1;
	zend_long handle, toolbar;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(toolbar)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &toolbar_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, toolbar);
	phpqt_qmainwindow_add_tool_bar_q_tool_bar(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QMainWindow_QMainWindow, addToolBarQString)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval title;
	zval *handle_param = NULL, *title_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&title);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(title)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &title_param);
	zephir_get_strval(&title, title_param);
	ZVAL_LONG(&_0, handle);
	RETURN_MM_LONG(phpqt_qmainwindow_add_tool_bar_q_string(&_0, &title));
}

PHP_METHOD(Qt_Widgets_QMainWindow_QMainWindow, insertToolBar)
{
	zval *handle_param = NULL, *before_param = NULL, *toolbar_param = NULL, _0, _1, _2;
	zend_long handle, before, toolbar;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(before)
		Z_PARAM_LONG(toolbar)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &before_param, &toolbar_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, before);
	ZVAL_LONG(&_2, toolbar);
	phpqt_qmainwindow_insert_tool_bar(&_0, &_1, &_2);
}

PHP_METHOD(Qt_Widgets_QMainWindow_QMainWindow, removeToolBar)
{
	zval *handle_param = NULL, *toolbar_param = NULL, _0, _1;
	zend_long handle, toolbar;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(toolbar)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &toolbar_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, toolbar);
	phpqt_qmainwindow_remove_tool_bar(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QMainWindow_QMainWindow, removeToolBarBreak)
{
	zval *handle_param = NULL, *before_param = NULL, _0, _1;
	zend_long handle, before;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(before)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &before_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, before);
	phpqt_qmainwindow_remove_tool_bar_break(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QMainWindow_QMainWindow, unifiedTitleAndToolBarOnMac)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qmainwindow_unified_title_and_tool_bar_on_mac(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Widgets_QMainWindow_QMainWindow, toolBarArea)
{
	zval *handle_param = NULL, *toolbar_param = NULL, _0, _1;
	zend_long handle, toolbar;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(toolbar)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &toolbar_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, toolbar);
	RETURN_LONG(phpqt_qmainwindow_tool_bar_area(&_0, &_1));
}

PHP_METHOD(Qt_Widgets_QMainWindow_QMainWindow, toolBarBreak)
{
	zval *handle_param = NULL, *toolbar_param = NULL, _0, _1;
	zend_long handle, toolbar, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(toolbar)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &toolbar_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, toolbar);
	r = phpqt_qmainwindow_tool_bar_break(&_0, &_1);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Widgets_QMainWindow_QMainWindow, addDockWidget)
{
	zval *handle_param = NULL, *area_param = NULL, *dockwidget_param = NULL, _0, _1, _2;
	zend_long handle, area, dockwidget;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(area)
		Z_PARAM_LONG(dockwidget)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &area_param, &dockwidget_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, area);
	ZVAL_LONG(&_2, dockwidget);
	phpqt_qmainwindow_add_dock_widget(&_0, &_1, &_2);
}

PHP_METHOD(Qt_Widgets_QMainWindow_QMainWindow, addDockWidgetQtDockWidgetAreaQDockWidgetQtOrientation)
{
	zval *handle_param = NULL, *area_param = NULL, *dockwidget_param = NULL, *orientation_param = NULL, _0, _1, _2, _3;
	zend_long handle, area, dockwidget, orientation;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(area)
		Z_PARAM_LONG(dockwidget)
		Z_PARAM_LONG(orientation)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 0, &handle_param, &area_param, &dockwidget_param, &orientation_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, area);
	ZVAL_LONG(&_2, dockwidget);
	ZVAL_LONG(&_3, orientation);
	phpqt_qmainwindow_add_dock_widget_qt_dock_widget_area_q_dock_widget_qt_orientation(&_0, &_1, &_2, &_3);
}

PHP_METHOD(Qt_Widgets_QMainWindow_QMainWindow, splitDockWidget)
{
	zval *handle_param = NULL, *after_param = NULL, *dockwidget_param = NULL, *orientation_param = NULL, _0, _1, _2, _3;
	zend_long handle, after, dockwidget, orientation;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(after)
		Z_PARAM_LONG(dockwidget)
		Z_PARAM_LONG(orientation)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 0, &handle_param, &after_param, &dockwidget_param, &orientation_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, after);
	ZVAL_LONG(&_2, dockwidget);
	ZVAL_LONG(&_3, orientation);
	phpqt_qmainwindow_split_dock_widget(&_0, &_1, &_2, &_3);
}

PHP_METHOD(Qt_Widgets_QMainWindow_QMainWindow, tabifyDockWidget)
{
	zval *handle_param = NULL, *first_param = NULL, *second_param = NULL, _0, _1, _2;
	zend_long handle, first, second;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(first)
		Z_PARAM_LONG(second)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &first_param, &second_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, first);
	ZVAL_LONG(&_2, second);
	phpqt_qmainwindow_tabify_dock_widget(&_0, &_1, &_2);
}

PHP_METHOD(Qt_Widgets_QMainWindow_QMainWindow, tabifiedDockWidgets)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, *dockwidget_param = NULL, result, _0, _1;
	zend_long handle, dockwidget;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(dockwidget)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &dockwidget_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, dockwidget);
	phpqt_qmainwindow_tabified_dock_widgets(&result, &_0, &_1);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Widgets_QMainWindow_QMainWindow, removeDockWidget)
{
	zval *handle_param = NULL, *dockwidget_param = NULL, _0, _1;
	zend_long handle, dockwidget;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(dockwidget)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &dockwidget_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, dockwidget);
	phpqt_qmainwindow_remove_dock_widget(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QMainWindow_QMainWindow, restoreDockWidget)
{
	zval *handle_param = NULL, *dockwidget_param = NULL, _0, _1;
	zend_long handle, dockwidget, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(dockwidget)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &dockwidget_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, dockwidget);
	r = phpqt_qmainwindow_restore_dock_widget(&_0, &_1);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Widgets_QMainWindow_QMainWindow, dockWidgetArea)
{
	zval *handle_param = NULL, *dockwidget_param = NULL, _0, _1;
	zend_long handle, dockwidget;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(dockwidget)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &dockwidget_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, dockwidget);
	RETURN_LONG(phpqt_qmainwindow_dock_widget_area(&_0, &_1));
}

PHP_METHOD(Qt_Widgets_QMainWindow_QMainWindow, resizeDocks)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval docks, sizes;
	zval *handle_param = NULL, *docks_param = NULL, *sizes_param = NULL, *orientation_param = NULL, _0, _1;
	zend_long handle, orientation;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&docks);
	ZVAL_UNDEF(&sizes);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_ARRAY(docks)
		Z_PARAM_ARRAY(sizes)
		Z_PARAM_LONG(orientation)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 4, 0, &handle_param, &docks_param, &sizes_param, &orientation_param);
	zephir_get_arrval(&docks, docks_param);
	zephir_get_arrval(&sizes, sizes_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, orientation);
	phpqt_qmainwindow_resize_docks(&_0, &docks, &sizes, &_1);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_Widgets_QMainWindow_QMainWindow, saveState)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, *version_param = NULL, result, _0, _1;
	zend_long handle, version;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(version)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 1, &handle_param, &version_param);
	if (!version_param) {
		version = 0;
	} else {
		}
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, version);
	phpqt_qmainwindow_save_state(&result, &_0, &_1);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Widgets_QMainWindow_QMainWindow, restoreState)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval state;
	zval *handle_param = NULL, *state_param = NULL, *version_param = NULL, _0, _1;
	zend_long handle, version, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&state);
	ZEND_PARSE_PARAMETERS_START(2, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(state)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(version)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 1, &handle_param, &state_param, &version_param);
	zephir_get_strval(&state, state_param);
	if (!version_param) {
		version = 0;
	} else {
		}
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, version);
	r = phpqt_qmainwindow_restore_state(&_0, &state, &_1);
	RETURN_MM_BOOL(r == 1);
}

PHP_METHOD(Qt_Widgets_QMainWindow_QMainWindow, createPopupMenu)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qmainwindow_create_popup_menu(&_0));
}

PHP_METHOD(Qt_Widgets_QMainWindow_QMainWindow, setAnimated)
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
	phpqt_qmainwindow_set_animated(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QMainWindow_QMainWindow, setDockNestingEnabled)
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
	phpqt_qmainwindow_set_dock_nesting_enabled(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QMainWindow_QMainWindow, setUnifiedTitleAndToolBarOnMac)
{
	zend_bool set;
	zval *handle_param = NULL, *set_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_BOOL(set)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &set_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_BOOL(&_1, (set ? 1 : 0));
	phpqt_qmainwindow_set_unified_title_and_tool_bar_on_mac(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QMainWindow_QMainWindow, iconSizeChanged)
{
	zval *handle_param = NULL, *iconSizeWidth_param = NULL, *iconSizeHeight_param = NULL, _0, _1, _2;
	zend_long handle, iconSizeWidth, iconSizeHeight;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(iconSizeWidth)
		Z_PARAM_LONG(iconSizeHeight)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &iconSizeWidth_param, &iconSizeHeight_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, iconSizeWidth);
	ZVAL_LONG(&_2, iconSizeHeight);
	phpqt_qmainwindow_icon_size_changed(&_0, &_1, &_2);
}

PHP_METHOD(Qt_Widgets_QMainWindow_QMainWindow, toolButtonStyleChanged)
{
	zval *handle_param = NULL, *toolButtonStyle_param = NULL, _0, _1;
	zend_long handle, toolButtonStyle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(toolButtonStyle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &toolButtonStyle_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, toolButtonStyle);
	phpqt_qmainwindow_tool_button_style_changed(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QMainWindow_QMainWindow, tabifiedDockWidgetActivated)
{
	zval *handle_param = NULL, *dockWidget_param = NULL, _0, _1;
	zend_long handle, dockWidget;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(dockWidget)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &dockWidget_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, dockWidget);
	phpqt_qmainwindow_tabified_dock_widget_activated(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QMainWindow_QMainWindow, contextMenuEvent)
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
	phpqt_qmainwindow_context_menu_event(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QMainWindow_QMainWindow, event)
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
	r = phpqt_qmainwindow_event(&_0, &_1);
	RETURN_BOOL(r == 1);
}

