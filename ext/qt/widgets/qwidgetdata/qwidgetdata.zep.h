
extern zend_class_entry *qt_widgets_qwidgetdata_qwidgetdata_ce;

ZEPHIR_INIT_CLASS(Qt_Widgets_QWidgetData_QWidgetData);

PHP_METHOD(Qt_Widgets_QWidgetData_QWidgetData, winid);
PHP_METHOD(Qt_Widgets_QWidgetData_QWidgetData, setWinid);
PHP_METHOD(Qt_Widgets_QWidgetData_QWidgetData, widget_attributes);
PHP_METHOD(Qt_Widgets_QWidgetData_QWidgetData, setWidget_attributes);
PHP_METHOD(Qt_Widgets_QWidgetData_QWidgetData, window_flags);
PHP_METHOD(Qt_Widgets_QWidgetData_QWidgetData, setWindow_flags);
PHP_METHOD(Qt_Widgets_QWidgetData_QWidgetData, window_state);
PHP_METHOD(Qt_Widgets_QWidgetData_QWidgetData, setWindow_state);
PHP_METHOD(Qt_Widgets_QWidgetData_QWidgetData, focus_policy);
PHP_METHOD(Qt_Widgets_QWidgetData_QWidgetData, setFocus_policy);
PHP_METHOD(Qt_Widgets_QWidgetData_QWidgetData, sizehint_forced);
PHP_METHOD(Qt_Widgets_QWidgetData_QWidgetData, setSizehint_forced);
PHP_METHOD(Qt_Widgets_QWidgetData_QWidgetData, is_closing);
PHP_METHOD(Qt_Widgets_QWidgetData_QWidgetData, setIs_closing);
PHP_METHOD(Qt_Widgets_QWidgetData_QWidgetData, in_show);
PHP_METHOD(Qt_Widgets_QWidgetData_QWidgetData, setIn_show);
PHP_METHOD(Qt_Widgets_QWidgetData_QWidgetData, in_set_window_state);
PHP_METHOD(Qt_Widgets_QWidgetData_QWidgetData, setIn_set_window_state);
PHP_METHOD(Qt_Widgets_QWidgetData_QWidgetData, fstrut_dirty);
PHP_METHOD(Qt_Widgets_QWidgetData_QWidgetData, setFstrut_dirty);
PHP_METHOD(Qt_Widgets_QWidgetData_QWidgetData, context_menu_policy);
PHP_METHOD(Qt_Widgets_QWidgetData_QWidgetData, setContext_menu_policy);
PHP_METHOD(Qt_Widgets_QWidgetData_QWidgetData, window_modality);
PHP_METHOD(Qt_Widgets_QWidgetData_QWidgetData, setWindow_modality);
PHP_METHOD(Qt_Widgets_QWidgetData_QWidgetData, in_destructor);
PHP_METHOD(Qt_Widgets_QWidgetData_QWidgetData, setIn_destructor);
PHP_METHOD(Qt_Widgets_QWidgetData_QWidgetData, unused);
PHP_METHOD(Qt_Widgets_QWidgetData_QWidgetData, setUnused);
PHP_METHOD(Qt_Widgets_QWidgetData_QWidgetData, crect);
PHP_METHOD(Qt_Widgets_QWidgetData_QWidgetData, setCrect);
PHP_METHOD(Qt_Widgets_QWidgetData_QWidgetData, pal);
PHP_METHOD(Qt_Widgets_QWidgetData_QWidgetData, setPal);
PHP_METHOD(Qt_Widgets_QWidgetData_QWidgetData, fnt);
PHP_METHOD(Qt_Widgets_QWidgetData_QWidgetData, setFnt);
PHP_METHOD(Qt_Widgets_QWidgetData_QWidgetData, wrect);
PHP_METHOD(Qt_Widgets_QWidgetData_QWidgetData, setWrect);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qwidgetdata_qwidgetdata_winid, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qwidgetdata_qwidgetdata_setwinid, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qwidgetdata_qwidgetdata_widget_attributes, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qwidgetdata_qwidgetdata_setwidget_attributes, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qwidgetdata_qwidgetdata_window_flags, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qwidgetdata_qwidgetdata_setwindow_flags, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qwidgetdata_qwidgetdata_window_state, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qwidgetdata_qwidgetdata_setwindow_state, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qwidgetdata_qwidgetdata_focus_policy, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qwidgetdata_qwidgetdata_setfocus_policy, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qwidgetdata_qwidgetdata_sizehint_forced, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qwidgetdata_qwidgetdata_setsizehint_forced, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qwidgetdata_qwidgetdata_is_closing, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qwidgetdata_qwidgetdata_setis_closing, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qwidgetdata_qwidgetdata_in_show, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qwidgetdata_qwidgetdata_setin_show, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qwidgetdata_qwidgetdata_in_set_window_state, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qwidgetdata_qwidgetdata_setin_set_window_state, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qwidgetdata_qwidgetdata_fstrut_dirty, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qwidgetdata_qwidgetdata_setfstrut_dirty, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qwidgetdata_qwidgetdata_context_menu_policy, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qwidgetdata_qwidgetdata_setcontext_menu_policy, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qwidgetdata_qwidgetdata_window_modality, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qwidgetdata_qwidgetdata_setwindow_modality, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qwidgetdata_qwidgetdata_in_destructor, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qwidgetdata_qwidgetdata_setin_destructor, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qwidgetdata_qwidgetdata_unused, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qwidgetdata_qwidgetdata_setunused, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qwidgetdata_qwidgetdata_crect, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qwidgetdata_qwidgetdata_setcrect, 0, 5, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, valueX, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, valueY, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, valueWidth, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, valueHeight, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qwidgetdata_qwidgetdata_pal, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qwidgetdata_qwidgetdata_setpal, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qwidgetdata_qwidgetdata_fnt, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qwidgetdata_qwidgetdata_setfnt, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qwidgetdata_qwidgetdata_wrect, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qwidgetdata_qwidgetdata_setwrect, 0, 5, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, valueX, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, valueY, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, valueWidth, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, valueHeight, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_widgets_qwidgetdata_qwidgetdata_method_entry) {
	PHP_ME(Qt_Widgets_QWidgetData_QWidgetData, winid, arginfo_qt_widgets_qwidgetdata_qwidgetdata_winid, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QWidgetData_QWidgetData, setWinid, arginfo_qt_widgets_qwidgetdata_qwidgetdata_setwinid, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QWidgetData_QWidgetData, widget_attributes, arginfo_qt_widgets_qwidgetdata_qwidgetdata_widget_attributes, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QWidgetData_QWidgetData, setWidget_attributes, arginfo_qt_widgets_qwidgetdata_qwidgetdata_setwidget_attributes, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QWidgetData_QWidgetData, window_flags, arginfo_qt_widgets_qwidgetdata_qwidgetdata_window_flags, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QWidgetData_QWidgetData, setWindow_flags, arginfo_qt_widgets_qwidgetdata_qwidgetdata_setwindow_flags, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QWidgetData_QWidgetData, window_state, arginfo_qt_widgets_qwidgetdata_qwidgetdata_window_state, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QWidgetData_QWidgetData, setWindow_state, arginfo_qt_widgets_qwidgetdata_qwidgetdata_setwindow_state, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QWidgetData_QWidgetData, focus_policy, arginfo_qt_widgets_qwidgetdata_qwidgetdata_focus_policy, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QWidgetData_QWidgetData, setFocus_policy, arginfo_qt_widgets_qwidgetdata_qwidgetdata_setfocus_policy, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QWidgetData_QWidgetData, sizehint_forced, arginfo_qt_widgets_qwidgetdata_qwidgetdata_sizehint_forced, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QWidgetData_QWidgetData, setSizehint_forced, arginfo_qt_widgets_qwidgetdata_qwidgetdata_setsizehint_forced, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QWidgetData_QWidgetData, is_closing, arginfo_qt_widgets_qwidgetdata_qwidgetdata_is_closing, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QWidgetData_QWidgetData, setIs_closing, arginfo_qt_widgets_qwidgetdata_qwidgetdata_setis_closing, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QWidgetData_QWidgetData, in_show, arginfo_qt_widgets_qwidgetdata_qwidgetdata_in_show, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QWidgetData_QWidgetData, setIn_show, arginfo_qt_widgets_qwidgetdata_qwidgetdata_setin_show, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QWidgetData_QWidgetData, in_set_window_state, arginfo_qt_widgets_qwidgetdata_qwidgetdata_in_set_window_state, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QWidgetData_QWidgetData, setIn_set_window_state, arginfo_qt_widgets_qwidgetdata_qwidgetdata_setin_set_window_state, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QWidgetData_QWidgetData, fstrut_dirty, arginfo_qt_widgets_qwidgetdata_qwidgetdata_fstrut_dirty, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QWidgetData_QWidgetData, setFstrut_dirty, arginfo_qt_widgets_qwidgetdata_qwidgetdata_setfstrut_dirty, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QWidgetData_QWidgetData, context_menu_policy, arginfo_qt_widgets_qwidgetdata_qwidgetdata_context_menu_policy, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QWidgetData_QWidgetData, setContext_menu_policy, arginfo_qt_widgets_qwidgetdata_qwidgetdata_setcontext_menu_policy, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QWidgetData_QWidgetData, window_modality, arginfo_qt_widgets_qwidgetdata_qwidgetdata_window_modality, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QWidgetData_QWidgetData, setWindow_modality, arginfo_qt_widgets_qwidgetdata_qwidgetdata_setwindow_modality, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QWidgetData_QWidgetData, in_destructor, arginfo_qt_widgets_qwidgetdata_qwidgetdata_in_destructor, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QWidgetData_QWidgetData, setIn_destructor, arginfo_qt_widgets_qwidgetdata_qwidgetdata_setin_destructor, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QWidgetData_QWidgetData, unused, arginfo_qt_widgets_qwidgetdata_qwidgetdata_unused, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QWidgetData_QWidgetData, setUnused, arginfo_qt_widgets_qwidgetdata_qwidgetdata_setunused, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QWidgetData_QWidgetData, crect, arginfo_qt_widgets_qwidgetdata_qwidgetdata_crect, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QWidgetData_QWidgetData, setCrect, arginfo_qt_widgets_qwidgetdata_qwidgetdata_setcrect, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QWidgetData_QWidgetData, pal, arginfo_qt_widgets_qwidgetdata_qwidgetdata_pal, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QWidgetData_QWidgetData, setPal, arginfo_qt_widgets_qwidgetdata_qwidgetdata_setpal, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QWidgetData_QWidgetData, fnt, arginfo_qt_widgets_qwidgetdata_qwidgetdata_fnt, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QWidgetData_QWidgetData, setFnt, arginfo_qt_widgets_qwidgetdata_qwidgetdata_setfnt, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QWidgetData_QWidgetData, wrect, arginfo_qt_widgets_qwidgetdata_qwidgetdata_wrect, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QWidgetData_QWidgetData, setWrect, arginfo_qt_widgets_qwidgetdata_qwidgetdata_setwrect, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
