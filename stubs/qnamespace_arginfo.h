/* This is a generated file, edit the .stub.php file instead.
 * Stub hash: 9e08ee16f2263182c8fe2fde9b457a36b6213800 */

static zend_class_entry *register_class_Qt_TimerType(void)
{
	zend_class_entry *class_entry = zend_register_internal_enum("Qt\\TimerType", IS_LONG, NULL);

	zval enum_case_PRECISE_TIMER_value;
	ZVAL_LONG(&enum_case_PRECISE_TIMER_value, 0);
	zend_enum_add_case_cstr(class_entry, "PRECISE_TIMER", &enum_case_PRECISE_TIMER_value);

	zval enum_case_COARSE_TIMER_value;
	ZVAL_LONG(&enum_case_COARSE_TIMER_value, 1);
	zend_enum_add_case_cstr(class_entry, "COARSE_TIMER", &enum_case_COARSE_TIMER_value);

	zval enum_case_VERY_COARSE_TIMER_value;
	ZVAL_LONG(&enum_case_VERY_COARSE_TIMER_value, 2);
	zend_enum_add_case_cstr(class_entry, "VERY_COARSE_TIMER", &enum_case_VERY_COARSE_TIMER_value);

	return class_entry;
}

static zend_class_entry *register_class_Qt_WidgetAttribute(void)
{
	zend_class_entry *class_entry = zend_register_internal_enum("Qt\\WidgetAttribute", IS_LONG, NULL);

	zval enum_case_DISABLED_value;
	ZVAL_LONG(&enum_case_DISABLED_value, 0);
	zend_enum_add_case_cstr(class_entry, "DISABLED", &enum_case_DISABLED_value);

	zval enum_case_UNDER_MOUSE_value;
	ZVAL_LONG(&enum_case_UNDER_MOUSE_value, 1);
	zend_enum_add_case_cstr(class_entry, "UNDER_MOUSE", &enum_case_UNDER_MOUSE_value);

	zval enum_case_MOUSE_TRACKING_value;
	ZVAL_LONG(&enum_case_MOUSE_TRACKING_value, 2);
	zend_enum_add_case_cstr(class_entry, "MOUSE_TRACKING", &enum_case_MOUSE_TRACKING_value);

	zval enum_case_OPAQUE_PAINT_EVENT_value;
	ZVAL_LONG(&enum_case_OPAQUE_PAINT_EVENT_value, 4);
	zend_enum_add_case_cstr(class_entry, "OPAQUE_PAINT_EVENT", &enum_case_OPAQUE_PAINT_EVENT_value);

	zval enum_case_STATIC_CONTENTS_value;
	ZVAL_LONG(&enum_case_STATIC_CONTENTS_value, 5);
	zend_enum_add_case_cstr(class_entry, "STATIC_CONTENTS", &enum_case_STATIC_CONTENTS_value);

	zval enum_case_LAID_OUT_value;
	ZVAL_LONG(&enum_case_LAID_OUT_value, 7);
	zend_enum_add_case_cstr(class_entry, "LAID_OUT", &enum_case_LAID_OUT_value);

	zval enum_case_PAINT_ON_SCREEN_value;
	ZVAL_LONG(&enum_case_PAINT_ON_SCREEN_value, 8);
	zend_enum_add_case_cstr(class_entry, "PAINT_ON_SCREEN", &enum_case_PAINT_ON_SCREEN_value);

	zval enum_case_NO_SYSTEM_BACKGROUND_value;
	ZVAL_LONG(&enum_case_NO_SYSTEM_BACKGROUND_value, 9);
	zend_enum_add_case_cstr(class_entry, "NO_SYSTEM_BACKGROUND", &enum_case_NO_SYSTEM_BACKGROUND_value);

	zval enum_case_UPDATES_DISABLED_value;
	ZVAL_LONG(&enum_case_UPDATES_DISABLED_value, 10);
	zend_enum_add_case_cstr(class_entry, "UPDATES_DISABLED", &enum_case_UPDATES_DISABLED_value);

	zval enum_case_MAPPED_value;
	ZVAL_LONG(&enum_case_MAPPED_value, 11);
	zend_enum_add_case_cstr(class_entry, "MAPPED", &enum_case_MAPPED_value);

	zval enum_case_INPUT_METHOD_ENABLED_value;
	ZVAL_LONG(&enum_case_INPUT_METHOD_ENABLED_value, 14);
	zend_enum_add_case_cstr(class_entry, "INPUT_METHOD_ENABLED", &enum_case_INPUT_METHOD_ENABLED_value);

	zval enum_case_W_STATE_VISIBLE_value;
	ZVAL_LONG(&enum_case_W_STATE_VISIBLE_value, 15);
	zend_enum_add_case_cstr(class_entry, "W_STATE_VISIBLE", &enum_case_W_STATE_VISIBLE_value);

	zval enum_case_W_STATE_HIDDEN_value;
	ZVAL_LONG(&enum_case_W_STATE_HIDDEN_value, 16);
	zend_enum_add_case_cstr(class_entry, "W_STATE_HIDDEN", &enum_case_W_STATE_HIDDEN_value);

	zval enum_case_FORCE_DISABLED_value;
	ZVAL_LONG(&enum_case_FORCE_DISABLED_value, 32);
	zend_enum_add_case_cstr(class_entry, "FORCE_DISABLED", &enum_case_FORCE_DISABLED_value);

	zval enum_case_KEY_COMPRESSION_value;
	ZVAL_LONG(&enum_case_KEY_COMPRESSION_value, 33);
	zend_enum_add_case_cstr(class_entry, "KEY_COMPRESSION", &enum_case_KEY_COMPRESSION_value);

	zval enum_case_PENDING_MOVE_EVENT_value;
	ZVAL_LONG(&enum_case_PENDING_MOVE_EVENT_value, 34);
	zend_enum_add_case_cstr(class_entry, "PENDING_MOVE_EVENT", &enum_case_PENDING_MOVE_EVENT_value);

	zval enum_case_PENDING_RESIZE_EVENT_value;
	ZVAL_LONG(&enum_case_PENDING_RESIZE_EVENT_value, 35);
	zend_enum_add_case_cstr(class_entry, "PENDING_RESIZE_EVENT", &enum_case_PENDING_RESIZE_EVENT_value);

	zval enum_case_SET_PALETTE_value;
	ZVAL_LONG(&enum_case_SET_PALETTE_value, 36);
	zend_enum_add_case_cstr(class_entry, "SET_PALETTE", &enum_case_SET_PALETTE_value);

	zval enum_case_SET_FONT_value;
	ZVAL_LONG(&enum_case_SET_FONT_value, 37);
	zend_enum_add_case_cstr(class_entry, "SET_FONT", &enum_case_SET_FONT_value);

	zval enum_case_SET_CURSOR_value;
	ZVAL_LONG(&enum_case_SET_CURSOR_value, 38);
	zend_enum_add_case_cstr(class_entry, "SET_CURSOR", &enum_case_SET_CURSOR_value);

	zval enum_case_NO_CHILD_EVENTS_FROM_CHILDREN_value;
	ZVAL_LONG(&enum_case_NO_CHILD_EVENTS_FROM_CHILDREN_value, 39);
	zend_enum_add_case_cstr(class_entry, "NO_CHILD_EVENTS_FROM_CHILDREN", &enum_case_NO_CHILD_EVENTS_FROM_CHILDREN_value);

	zval enum_case_WINDOW_MODIFIED_value;
	ZVAL_LONG(&enum_case_WINDOW_MODIFIED_value, 41);
	zend_enum_add_case_cstr(class_entry, "WINDOW_MODIFIED", &enum_case_WINDOW_MODIFIED_value);

	zval enum_case_RESIZED_value;
	ZVAL_LONG(&enum_case_RESIZED_value, 42);
	zend_enum_add_case_cstr(class_entry, "RESIZED", &enum_case_RESIZED_value);

	zval enum_case_MOVED_value;
	ZVAL_LONG(&enum_case_MOVED_value, 43);
	zend_enum_add_case_cstr(class_entry, "MOVED", &enum_case_MOVED_value);

	zval enum_case_PENDING_UPDATE_value;
	ZVAL_LONG(&enum_case_PENDING_UPDATE_value, 44);
	zend_enum_add_case_cstr(class_entry, "PENDING_UPDATE", &enum_case_PENDING_UPDATE_value);

	zval enum_case_INVALID_SIZE_value;
	ZVAL_LONG(&enum_case_INVALID_SIZE_value, 45);
	zend_enum_add_case_cstr(class_entry, "INVALID_SIZE", &enum_case_INVALID_SIZE_value);

	zval enum_case_CUSTOM_WHATS_THIS_value;
	ZVAL_LONG(&enum_case_CUSTOM_WHATS_THIS_value, 47);
	zend_enum_add_case_cstr(class_entry, "CUSTOM_WHATS_THIS", &enum_case_CUSTOM_WHATS_THIS_value);

	zval enum_case_LAYOUT_ON_ENTIRE_RECT_value;
	ZVAL_LONG(&enum_case_LAYOUT_ON_ENTIRE_RECT_value, 48);
	zend_enum_add_case_cstr(class_entry, "LAYOUT_ON_ENTIRE_RECT", &enum_case_LAYOUT_ON_ENTIRE_RECT_value);

	zval enum_case_OUTSIDE_WS_RANGE_value;
	ZVAL_LONG(&enum_case_OUTSIDE_WS_RANGE_value, 49);
	zend_enum_add_case_cstr(class_entry, "OUTSIDE_WS_RANGE", &enum_case_OUTSIDE_WS_RANGE_value);

	zval enum_case_GRABBED_SHORTCUT_value;
	ZVAL_LONG(&enum_case_GRABBED_SHORTCUT_value, 50);
	zend_enum_add_case_cstr(class_entry, "GRABBED_SHORTCUT", &enum_case_GRABBED_SHORTCUT_value);

	zval enum_case_TRANSPARENT_FOR_MOUSE_EVENTS_value;
	ZVAL_LONG(&enum_case_TRANSPARENT_FOR_MOUSE_EVENTS_value, 51);
	zend_enum_add_case_cstr(class_entry, "TRANSPARENT_FOR_MOUSE_EVENTS", &enum_case_TRANSPARENT_FOR_MOUSE_EVENTS_value);

	zval enum_case_PAINT_UNCLIPPED_value;
	ZVAL_LONG(&enum_case_PAINT_UNCLIPPED_value, 52);
	zend_enum_add_case_cstr(class_entry, "PAINT_UNCLIPPED", &enum_case_PAINT_UNCLIPPED_value);

	zval enum_case_SET_WINDOW_ICON_value;
	ZVAL_LONG(&enum_case_SET_WINDOW_ICON_value, 53);
	zend_enum_add_case_cstr(class_entry, "SET_WINDOW_ICON", &enum_case_SET_WINDOW_ICON_value);

	zval enum_case_NO_MOUSE_REPLAY_value;
	ZVAL_LONG(&enum_case_NO_MOUSE_REPLAY_value, 54);
	zend_enum_add_case_cstr(class_entry, "NO_MOUSE_REPLAY", &enum_case_NO_MOUSE_REPLAY_value);

	zval enum_case_DELETE_ON_CLOSE_value;
	ZVAL_LONG(&enum_case_DELETE_ON_CLOSE_value, 55);
	zend_enum_add_case_cstr(class_entry, "DELETE_ON_CLOSE", &enum_case_DELETE_ON_CLOSE_value);

	zval enum_case_RIGHT_TO_LEFT_value;
	ZVAL_LONG(&enum_case_RIGHT_TO_LEFT_value, 56);
	zend_enum_add_case_cstr(class_entry, "RIGHT_TO_LEFT", &enum_case_RIGHT_TO_LEFT_value);

	zval enum_case_SET_LAYOUT_DIRECTION_value;
	ZVAL_LONG(&enum_case_SET_LAYOUT_DIRECTION_value, 57);
	zend_enum_add_case_cstr(class_entry, "SET_LAYOUT_DIRECTION", &enum_case_SET_LAYOUT_DIRECTION_value);

	zval enum_case_NO_CHILD_EVENTS_FOR_PARENT_value;
	ZVAL_LONG(&enum_case_NO_CHILD_EVENTS_FOR_PARENT_value, 58);
	zend_enum_add_case_cstr(class_entry, "NO_CHILD_EVENTS_FOR_PARENT", &enum_case_NO_CHILD_EVENTS_FOR_PARENT_value);

	zval enum_case_FORCE_UPDATES_DISABLED_value;
	ZVAL_LONG(&enum_case_FORCE_UPDATES_DISABLED_value, 59);
	zend_enum_add_case_cstr(class_entry, "FORCE_UPDATES_DISABLED", &enum_case_FORCE_UPDATES_DISABLED_value);

	zval enum_case_W_STATE_CREATED_value;
	ZVAL_LONG(&enum_case_W_STATE_CREATED_value, 60);
	zend_enum_add_case_cstr(class_entry, "W_STATE_CREATED", &enum_case_W_STATE_CREATED_value);

	zval enum_case_W_STATE_COMPRESS_KEYS_value;
	ZVAL_LONG(&enum_case_W_STATE_COMPRESS_KEYS_value, 61);
	zend_enum_add_case_cstr(class_entry, "W_STATE_COMPRESS_KEYS", &enum_case_W_STATE_COMPRESS_KEYS_value);

	zval enum_case_W_STATE_IN_PAINT_EVENT_value;
	ZVAL_LONG(&enum_case_W_STATE_IN_PAINT_EVENT_value, 62);
	zend_enum_add_case_cstr(class_entry, "W_STATE_IN_PAINT_EVENT", &enum_case_W_STATE_IN_PAINT_EVENT_value);

	zval enum_case_W_STATE_REPARENTED_value;
	ZVAL_LONG(&enum_case_W_STATE_REPARENTED_value, 63);
	zend_enum_add_case_cstr(class_entry, "W_STATE_REPARENTED", &enum_case_W_STATE_REPARENTED_value);

	zval enum_case_W_STATE_CONFIG_PENDING_value;
	ZVAL_LONG(&enum_case_W_STATE_CONFIG_PENDING_value, 64);
	zend_enum_add_case_cstr(class_entry, "W_STATE_CONFIG_PENDING", &enum_case_W_STATE_CONFIG_PENDING_value);

	zval enum_case_W_STATE_POLISHED_value;
	ZVAL_LONG(&enum_case_W_STATE_POLISHED_value, 66);
	zend_enum_add_case_cstr(class_entry, "W_STATE_POLISHED", &enum_case_W_STATE_POLISHED_value);

	zval enum_case_W_STATE_OWN_SIZE_POLICY_value;
	ZVAL_LONG(&enum_case_W_STATE_OWN_SIZE_POLICY_value, 68);
	zend_enum_add_case_cstr(class_entry, "W_STATE_OWN_SIZE_POLICY", &enum_case_W_STATE_OWN_SIZE_POLICY_value);

	zval enum_case_W_STATE_EXPLICIT_SHOW_HIDE_value;
	ZVAL_LONG(&enum_case_W_STATE_EXPLICIT_SHOW_HIDE_value, 69);
	zend_enum_add_case_cstr(class_entry, "W_STATE_EXPLICIT_SHOW_HIDE", &enum_case_W_STATE_EXPLICIT_SHOW_HIDE_value);

	zval enum_case_SHOW_MODAL_value;
	ZVAL_LONG(&enum_case_SHOW_MODAL_value, 70);
	zend_enum_add_case_cstr(class_entry, "SHOW_MODAL", &enum_case_SHOW_MODAL_value);

	zval enum_case_MOUSE_NO_MASK_value;
	ZVAL_LONG(&enum_case_MOUSE_NO_MASK_value, 71);
	zend_enum_add_case_cstr(class_entry, "MOUSE_NO_MASK", &enum_case_MOUSE_NO_MASK_value);

	zval enum_case_NO_MOUSE_PROPAGATION_value;
	ZVAL_LONG(&enum_case_NO_MOUSE_PROPAGATION_value, 73);
	zend_enum_add_case_cstr(class_entry, "NO_MOUSE_PROPAGATION", &enum_case_NO_MOUSE_PROPAGATION_value);

	zval enum_case_HOVER_value;
	ZVAL_LONG(&enum_case_HOVER_value, 74);
	zend_enum_add_case_cstr(class_entry, "HOVER", &enum_case_HOVER_value);

	zval enum_case_INPUT_METHOD_TRANSPARENT_value;
	ZVAL_LONG(&enum_case_INPUT_METHOD_TRANSPARENT_value, 75);
	zend_enum_add_case_cstr(class_entry, "INPUT_METHOD_TRANSPARENT", &enum_case_INPUT_METHOD_TRANSPARENT_value);

	zval enum_case_QUIT_ON_CLOSE_value;
	ZVAL_LONG(&enum_case_QUIT_ON_CLOSE_value, 76);
	zend_enum_add_case_cstr(class_entry, "QUIT_ON_CLOSE", &enum_case_QUIT_ON_CLOSE_value);

	zval enum_case_KEYBOARD_FOCUS_CHANGE_value;
	ZVAL_LONG(&enum_case_KEYBOARD_FOCUS_CHANGE_value, 77);
	zend_enum_add_case_cstr(class_entry, "KEYBOARD_FOCUS_CHANGE", &enum_case_KEYBOARD_FOCUS_CHANGE_value);

	zval enum_case_ACCEPT_DROPS_value;
	ZVAL_LONG(&enum_case_ACCEPT_DROPS_value, 78);
	zend_enum_add_case_cstr(class_entry, "ACCEPT_DROPS", &enum_case_ACCEPT_DROPS_value);

	zval enum_case_DROP_SITE_REGISTERED_value;
	ZVAL_LONG(&enum_case_DROP_SITE_REGISTERED_value, 79);
	zend_enum_add_case_cstr(class_entry, "DROP_SITE_REGISTERED", &enum_case_DROP_SITE_REGISTERED_value);

	zval enum_case_WINDOW_PROPAGATION_value;
	ZVAL_LONG(&enum_case_WINDOW_PROPAGATION_value, 80);
	zend_enum_add_case_cstr(class_entry, "WINDOW_PROPAGATION", &enum_case_WINDOW_PROPAGATION_value);

	zval enum_case_NO_X11_EVENT_COMPRESSION_value;
	ZVAL_LONG(&enum_case_NO_X11_EVENT_COMPRESSION_value, 81);
	zend_enum_add_case_cstr(class_entry, "NO_X11_EVENT_COMPRESSION", &enum_case_NO_X11_EVENT_COMPRESSION_value);

	zval enum_case_TINTED_BACKGROUND_value;
	ZVAL_LONG(&enum_case_TINTED_BACKGROUND_value, 82);
	zend_enum_add_case_cstr(class_entry, "TINTED_BACKGROUND", &enum_case_TINTED_BACKGROUND_value);

	zval enum_case_X11_OPEN_GL_OVERLAY_value;
	ZVAL_LONG(&enum_case_X11_OPEN_GL_OVERLAY_value, 83);
	zend_enum_add_case_cstr(class_entry, "X11_OPEN_GL_OVERLAY", &enum_case_X11_OPEN_GL_OVERLAY_value);

	zval enum_case_ALWAYS_SHOW_TOOL_TIPS_value;
	ZVAL_LONG(&enum_case_ALWAYS_SHOW_TOOL_TIPS_value, 84);
	zend_enum_add_case_cstr(class_entry, "ALWAYS_SHOW_TOOL_TIPS", &enum_case_ALWAYS_SHOW_TOOL_TIPS_value);

	zval enum_case_MAC_OPAQUE_SIZE_GRIP_value;
	ZVAL_LONG(&enum_case_MAC_OPAQUE_SIZE_GRIP_value, 85);
	zend_enum_add_case_cstr(class_entry, "MAC_OPAQUE_SIZE_GRIP", &enum_case_MAC_OPAQUE_SIZE_GRIP_value);

	zval enum_case_SET_STYLE_value;
	ZVAL_LONG(&enum_case_SET_STYLE_value, 86);
	zend_enum_add_case_cstr(class_entry, "SET_STYLE", &enum_case_SET_STYLE_value);

	zval enum_case_SET_LOCALE_value;
	ZVAL_LONG(&enum_case_SET_LOCALE_value, 87);
	zend_enum_add_case_cstr(class_entry, "SET_LOCALE", &enum_case_SET_LOCALE_value);

	zval enum_case_MAC_SHOW_FOCUS_RECT_value;
	ZVAL_LONG(&enum_case_MAC_SHOW_FOCUS_RECT_value, 88);
	zend_enum_add_case_cstr(class_entry, "MAC_SHOW_FOCUS_RECT", &enum_case_MAC_SHOW_FOCUS_RECT_value);

	zval enum_case_MAC_NORMAL_SIZE_value;
	ZVAL_LONG(&enum_case_MAC_NORMAL_SIZE_value, 89);
	zend_enum_add_case_cstr(class_entry, "MAC_NORMAL_SIZE", &enum_case_MAC_NORMAL_SIZE_value);

	zval enum_case_MAC_SMALL_SIZE_value;
	ZVAL_LONG(&enum_case_MAC_SMALL_SIZE_value, 90);
	zend_enum_add_case_cstr(class_entry, "MAC_SMALL_SIZE", &enum_case_MAC_SMALL_SIZE_value);

	zval enum_case_MAC_MINI_SIZE_value;
	ZVAL_LONG(&enum_case_MAC_MINI_SIZE_value, 91);
	zend_enum_add_case_cstr(class_entry, "MAC_MINI_SIZE", &enum_case_MAC_MINI_SIZE_value);

	zval enum_case_LAYOUT_USES_WIDGET_RECT_value;
	ZVAL_LONG(&enum_case_LAYOUT_USES_WIDGET_RECT_value, 92);
	zend_enum_add_case_cstr(class_entry, "LAYOUT_USES_WIDGET_RECT", &enum_case_LAYOUT_USES_WIDGET_RECT_value);

	zval enum_case_STYLED_BACKGROUND_value;
	ZVAL_LONG(&enum_case_STYLED_BACKGROUND_value, 93);
	zend_enum_add_case_cstr(class_entry, "STYLED_BACKGROUND", &enum_case_STYLED_BACKGROUND_value);

	zval enum_case_CAN_HOST_Q_MDI_SUB_WINDOW_TITLE_BAR_value;
	ZVAL_LONG(&enum_case_CAN_HOST_Q_MDI_SUB_WINDOW_TITLE_BAR_value, 95);
	zend_enum_add_case_cstr(class_entry, "CAN_HOST_Q_MDI_SUB_WINDOW_TITLE_BAR", &enum_case_CAN_HOST_Q_MDI_SUB_WINDOW_TITLE_BAR_value);

	zval enum_case_MAC_ALWAYS_SHOW_TOOL_WINDOW_value;
	ZVAL_LONG(&enum_case_MAC_ALWAYS_SHOW_TOOL_WINDOW_value, 96);
	zend_enum_add_case_cstr(class_entry, "MAC_ALWAYS_SHOW_TOOL_WINDOW", &enum_case_MAC_ALWAYS_SHOW_TOOL_WINDOW_value);

	zval enum_case_STYLE_SHEET_value;
	ZVAL_LONG(&enum_case_STYLE_SHEET_value, 97);
	zend_enum_add_case_cstr(class_entry, "STYLE_SHEET", &enum_case_STYLE_SHEET_value);

	zval enum_case_SHOW_WITHOUT_ACTIVATING_value;
	ZVAL_LONG(&enum_case_SHOW_WITHOUT_ACTIVATING_value, 98);
	zend_enum_add_case_cstr(class_entry, "SHOW_WITHOUT_ACTIVATING", &enum_case_SHOW_WITHOUT_ACTIVATING_value);

	zval enum_case_X11_BYPASS_TRANSIENT_FOR_HINT_value;
	ZVAL_LONG(&enum_case_X11_BYPASS_TRANSIENT_FOR_HINT_value, 99);
	zend_enum_add_case_cstr(class_entry, "X11_BYPASS_TRANSIENT_FOR_HINT", &enum_case_X11_BYPASS_TRANSIENT_FOR_HINT_value);

	zval enum_case_NATIVE_WINDOW_value;
	ZVAL_LONG(&enum_case_NATIVE_WINDOW_value, 100);
	zend_enum_add_case_cstr(class_entry, "NATIVE_WINDOW", &enum_case_NATIVE_WINDOW_value);

	zval enum_case_DONT_CREATE_NATIVE_ANCESTORS_value;
	ZVAL_LONG(&enum_case_DONT_CREATE_NATIVE_ANCESTORS_value, 101);
	zend_enum_add_case_cstr(class_entry, "DONT_CREATE_NATIVE_ANCESTORS", &enum_case_DONT_CREATE_NATIVE_ANCESTORS_value);

	zval enum_case_DONT_SHOW_ON_SCREEN_value;
	ZVAL_LONG(&enum_case_DONT_SHOW_ON_SCREEN_value, 103);
	zend_enum_add_case_cstr(class_entry, "DONT_SHOW_ON_SCREEN", &enum_case_DONT_SHOW_ON_SCREEN_value);

	zval enum_case_X11_NET_WM_WINDOW_TYPE_DESKTOP_value;
	ZVAL_LONG(&enum_case_X11_NET_WM_WINDOW_TYPE_DESKTOP_value, 104);
	zend_enum_add_case_cstr(class_entry, "X11_NET_WM_WINDOW_TYPE_DESKTOP", &enum_case_X11_NET_WM_WINDOW_TYPE_DESKTOP_value);

	zval enum_case_X11_NET_WM_WINDOW_TYPE_DOCK_value;
	ZVAL_LONG(&enum_case_X11_NET_WM_WINDOW_TYPE_DOCK_value, 105);
	zend_enum_add_case_cstr(class_entry, "X11_NET_WM_WINDOW_TYPE_DOCK", &enum_case_X11_NET_WM_WINDOW_TYPE_DOCK_value);

	zval enum_case_X11_NET_WM_WINDOW_TYPE_TOOL_BAR_value;
	ZVAL_LONG(&enum_case_X11_NET_WM_WINDOW_TYPE_TOOL_BAR_value, 106);
	zend_enum_add_case_cstr(class_entry, "X11_NET_WM_WINDOW_TYPE_TOOL_BAR", &enum_case_X11_NET_WM_WINDOW_TYPE_TOOL_BAR_value);

	zval enum_case_X11_NET_WM_WINDOW_TYPE_MENU_value;
	ZVAL_LONG(&enum_case_X11_NET_WM_WINDOW_TYPE_MENU_value, 107);
	zend_enum_add_case_cstr(class_entry, "X11_NET_WM_WINDOW_TYPE_MENU", &enum_case_X11_NET_WM_WINDOW_TYPE_MENU_value);

	zval enum_case_X11_NET_WM_WINDOW_TYPE_UTILITY_value;
	ZVAL_LONG(&enum_case_X11_NET_WM_WINDOW_TYPE_UTILITY_value, 108);
	zend_enum_add_case_cstr(class_entry, "X11_NET_WM_WINDOW_TYPE_UTILITY", &enum_case_X11_NET_WM_WINDOW_TYPE_UTILITY_value);

	zval enum_case_X11_NET_WM_WINDOW_TYPE_SPLASH_value;
	ZVAL_LONG(&enum_case_X11_NET_WM_WINDOW_TYPE_SPLASH_value, 109);
	zend_enum_add_case_cstr(class_entry, "X11_NET_WM_WINDOW_TYPE_SPLASH", &enum_case_X11_NET_WM_WINDOW_TYPE_SPLASH_value);

	zval enum_case_X11_NET_WM_WINDOW_TYPE_DIALOG_value;
	ZVAL_LONG(&enum_case_X11_NET_WM_WINDOW_TYPE_DIALOG_value, 110);
	zend_enum_add_case_cstr(class_entry, "X11_NET_WM_WINDOW_TYPE_DIALOG", &enum_case_X11_NET_WM_WINDOW_TYPE_DIALOG_value);

	zval enum_case_X11_NET_WM_WINDOW_TYPE_DROP_DOWN_MENU_value;
	ZVAL_LONG(&enum_case_X11_NET_WM_WINDOW_TYPE_DROP_DOWN_MENU_value, 111);
	zend_enum_add_case_cstr(class_entry, "X11_NET_WM_WINDOW_TYPE_DROP_DOWN_MENU", &enum_case_X11_NET_WM_WINDOW_TYPE_DROP_DOWN_MENU_value);

	zval enum_case_X11_NET_WM_WINDOW_TYPE_POPUP_MENU_value;
	ZVAL_LONG(&enum_case_X11_NET_WM_WINDOW_TYPE_POPUP_MENU_value, 112);
	zend_enum_add_case_cstr(class_entry, "X11_NET_WM_WINDOW_TYPE_POPUP_MENU", &enum_case_X11_NET_WM_WINDOW_TYPE_POPUP_MENU_value);

	zval enum_case_X11_NET_WM_WINDOW_TYPE_TOOL_TIP_value;
	ZVAL_LONG(&enum_case_X11_NET_WM_WINDOW_TYPE_TOOL_TIP_value, 113);
	zend_enum_add_case_cstr(class_entry, "X11_NET_WM_WINDOW_TYPE_TOOL_TIP", &enum_case_X11_NET_WM_WINDOW_TYPE_TOOL_TIP_value);

	zval enum_case_X11_NET_WM_WINDOW_TYPE_NOTIFICATION_value;
	ZVAL_LONG(&enum_case_X11_NET_WM_WINDOW_TYPE_NOTIFICATION_value, 114);
	zend_enum_add_case_cstr(class_entry, "X11_NET_WM_WINDOW_TYPE_NOTIFICATION", &enum_case_X11_NET_WM_WINDOW_TYPE_NOTIFICATION_value);

	zval enum_case_X11_NET_WM_WINDOW_TYPE_COMBO_value;
	ZVAL_LONG(&enum_case_X11_NET_WM_WINDOW_TYPE_COMBO_value, 115);
	zend_enum_add_case_cstr(class_entry, "X11_NET_WM_WINDOW_TYPE_COMBO", &enum_case_X11_NET_WM_WINDOW_TYPE_COMBO_value);

	zval enum_case_X11_NET_WM_WINDOW_TYPE_DND_value;
	ZVAL_LONG(&enum_case_X11_NET_WM_WINDOW_TYPE_DND_value, 116);
	zend_enum_add_case_cstr(class_entry, "X11_NET_WM_WINDOW_TYPE_DND", &enum_case_X11_NET_WM_WINDOW_TYPE_DND_value);

	zval enum_case_SET_WINDOW_MODALITY_value;
	ZVAL_LONG(&enum_case_SET_WINDOW_MODALITY_value, 118);
	zend_enum_add_case_cstr(class_entry, "SET_WINDOW_MODALITY", &enum_case_SET_WINDOW_MODALITY_value);

	zval enum_case_W_STATE_WINDOW_OPACITY_SET_value;
	ZVAL_LONG(&enum_case_W_STATE_WINDOW_OPACITY_SET_value, 119);
	zend_enum_add_case_cstr(class_entry, "W_STATE_WINDOW_OPACITY_SET", &enum_case_W_STATE_WINDOW_OPACITY_SET_value);

	zval enum_case_TRANSLUCENT_BACKGROUND_value;
	ZVAL_LONG(&enum_case_TRANSLUCENT_BACKGROUND_value, 120);
	zend_enum_add_case_cstr(class_entry, "TRANSLUCENT_BACKGROUND", &enum_case_TRANSLUCENT_BACKGROUND_value);

	zval enum_case_ACCEPT_TOUCH_EVENTS_value;
	ZVAL_LONG(&enum_case_ACCEPT_TOUCH_EVENTS_value, 121);
	zend_enum_add_case_cstr(class_entry, "ACCEPT_TOUCH_EVENTS", &enum_case_ACCEPT_TOUCH_EVENTS_value);

	zval enum_case_W_STATE_ACCEPTED_TOUCH_BEGIN_EVENT_value;
	ZVAL_LONG(&enum_case_W_STATE_ACCEPTED_TOUCH_BEGIN_EVENT_value, 122);
	zend_enum_add_case_cstr(class_entry, "W_STATE_ACCEPTED_TOUCH_BEGIN_EVENT", &enum_case_W_STATE_ACCEPTED_TOUCH_BEGIN_EVENT_value);

	zval enum_case_TOUCH_PAD_ACCEPT_SINGLE_TOUCH_EVENTS_value;
	ZVAL_LONG(&enum_case_TOUCH_PAD_ACCEPT_SINGLE_TOUCH_EVENTS_value, 123);
	zend_enum_add_case_cstr(class_entry, "TOUCH_PAD_ACCEPT_SINGLE_TOUCH_EVENTS", &enum_case_TOUCH_PAD_ACCEPT_SINGLE_TOUCH_EVENTS_value);

	zval enum_case_X11_DO_NOT_ACCEPT_FOCUS_value;
	ZVAL_LONG(&enum_case_X11_DO_NOT_ACCEPT_FOCUS_value, 126);
	zend_enum_add_case_cstr(class_entry, "X11_DO_NOT_ACCEPT_FOCUS", &enum_case_X11_DO_NOT_ACCEPT_FOCUS_value);

	zval enum_case_ALWAYS_STACK_ON_TOP_value;
	ZVAL_LONG(&enum_case_ALWAYS_STACK_ON_TOP_value, 128);
	zend_enum_add_case_cstr(class_entry, "ALWAYS_STACK_ON_TOP", &enum_case_ALWAYS_STACK_ON_TOP_value);

	zval enum_case_TABLET_TRACKING_value;
	ZVAL_LONG(&enum_case_TABLET_TRACKING_value, 129);
	zend_enum_add_case_cstr(class_entry, "TABLET_TRACKING", &enum_case_TABLET_TRACKING_value);

	zval enum_case_CONTENTS_MARGINS_RESPECTS_SAFE_AREA_value;
	ZVAL_LONG(&enum_case_CONTENTS_MARGINS_RESPECTS_SAFE_AREA_value, 130);
	zend_enum_add_case_cstr(class_entry, "CONTENTS_MARGINS_RESPECTS_SAFE_AREA", &enum_case_CONTENTS_MARGINS_RESPECTS_SAFE_AREA_value);

	zval enum_case_STYLE_SHEET_TARGET_value;
	ZVAL_LONG(&enum_case_STYLE_SHEET_TARGET_value, 131);
	zend_enum_add_case_cstr(class_entry, "STYLE_SHEET_TARGET", &enum_case_STYLE_SHEET_TARGET_value);

	zval enum_case_ATTRIBUTE_COUNT_value;
	ZVAL_LONG(&enum_case_ATTRIBUTE_COUNT_value, 132);
	zend_enum_add_case_cstr(class_entry, "ATTRIBUTE_COUNT", &enum_case_ATTRIBUTE_COUNT_value);

	return class_entry;
}
