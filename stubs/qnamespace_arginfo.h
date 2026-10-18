/* This is a generated file, edit the .stub.php file instead.
 * Stub hash: 1c4515fe72dd1e2eadb40a33b47464f577bd43c7 */

static zend_class_entry *register_class_Qt_DateFormat(void)
{
	zend_class_entry *class_entry = zend_register_internal_enum("Qt\\DateFormat", IS_LONG, NULL);

	zval enum_case_TEXT_DATE_value;
	ZVAL_LONG(&enum_case_TEXT_DATE_value, 0);
	zend_enum_add_case_cstr(class_entry, "TEXT_DATE", &enum_case_TEXT_DATE_value);

	zval enum_case_ISO_DATE_value;
	ZVAL_LONG(&enum_case_ISO_DATE_value, 1);
	zend_enum_add_case_cstr(class_entry, "ISO_DATE", &enum_case_ISO_DATE_value);

	zval enum_case_RFC2822_DATE_value;
	ZVAL_LONG(&enum_case_RFC2822_DATE_value, 8);
	zend_enum_add_case_cstr(class_entry, "RFC2822_DATE", &enum_case_RFC2822_DATE_value);

	zval enum_case_ISO_DATE_WITH_MS_value;
	ZVAL_LONG(&enum_case_ISO_DATE_WITH_MS_value, 9);
	zend_enum_add_case_cstr(class_entry, "ISO_DATE_WITH_MS", &enum_case_ISO_DATE_WITH_MS_value);

	return class_entry;
}

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

static zend_class_entry *register_class_Qt_Orientation(void)
{
	zend_class_entry *class_entry = zend_register_internal_enum("Qt\\Orientation", IS_LONG, NULL);

	zval enum_case_HORIZONTAL_value;
	ZVAL_LONG(&enum_case_HORIZONTAL_value, 1);
	zend_enum_add_case_cstr(class_entry, "HORIZONTAL", &enum_case_HORIZONTAL_value);

	zval enum_case_VERTICAL_value;
	ZVAL_LONG(&enum_case_VERTICAL_value, 2);
	zend_enum_add_case_cstr(class_entry, "VERTICAL", &enum_case_VERTICAL_value);

	return class_entry;
}

static zend_class_entry *register_class_Qt_AspectRatioMode(void)
{
	zend_class_entry *class_entry = zend_register_internal_enum("Qt\\AspectRatioMode", IS_LONG, NULL);

	zval enum_case_IGNORE_ASPECT_RATIO_value;
	ZVAL_LONG(&enum_case_IGNORE_ASPECT_RATIO_value, 0);
	zend_enum_add_case_cstr(class_entry, "IGNORE_ASPECT_RATIO", &enum_case_IGNORE_ASPECT_RATIO_value);

	zval enum_case_KEEP_ASPECT_RATIO_value;
	ZVAL_LONG(&enum_case_KEEP_ASPECT_RATIO_value, 1);
	zend_enum_add_case_cstr(class_entry, "KEEP_ASPECT_RATIO", &enum_case_KEEP_ASPECT_RATIO_value);

	zval enum_case_KEEP_ASPECT_RATIO_BY_EXPANDING_value;
	ZVAL_LONG(&enum_case_KEEP_ASPECT_RATIO_BY_EXPANDING_value, 2);
	zend_enum_add_case_cstr(class_entry, "KEEP_ASPECT_RATIO_BY_EXPANDING", &enum_case_KEEP_ASPECT_RATIO_BY_EXPANDING_value);

	return class_entry;
}

static zend_class_entry *register_class_Qt_ScrollBarPolicy(void)
{
	zend_class_entry *class_entry = zend_register_internal_enum("Qt\\ScrollBarPolicy", IS_LONG, NULL);

	zval enum_case_AS_NEEDED_value;
	ZVAL_LONG(&enum_case_AS_NEEDED_value, 0);
	zend_enum_add_case_cstr(class_entry, "AS_NEEDED", &enum_case_AS_NEEDED_value);

	zval enum_case_ALWAYS_OFF_value;
	ZVAL_LONG(&enum_case_ALWAYS_OFF_value, 1);
	zend_enum_add_case_cstr(class_entry, "ALWAYS_OFF", &enum_case_ALWAYS_OFF_value);

	zval enum_case_ALWAYS_ON_value;
	ZVAL_LONG(&enum_case_ALWAYS_ON_value, 2);
	zend_enum_add_case_cstr(class_entry, "ALWAYS_ON", &enum_case_ALWAYS_ON_value);

	return class_entry;
}

static zend_class_entry *register_class_Qt_TextFormat(void)
{
	zend_class_entry *class_entry = zend_register_internal_enum("Qt\\TextFormat", IS_LONG, NULL);

	zval enum_case_PLAIN_TEXT_value;
	ZVAL_LONG(&enum_case_PLAIN_TEXT_value, 0);
	zend_enum_add_case_cstr(class_entry, "PLAIN_TEXT", &enum_case_PLAIN_TEXT_value);

	zval enum_case_RICH_TEXT_value;
	ZVAL_LONG(&enum_case_RICH_TEXT_value, 1);
	zend_enum_add_case_cstr(class_entry, "RICH_TEXT", &enum_case_RICH_TEXT_value);

	zval enum_case_AUTO_TEXT_value;
	ZVAL_LONG(&enum_case_AUTO_TEXT_value, 2);
	zend_enum_add_case_cstr(class_entry, "AUTO_TEXT", &enum_case_AUTO_TEXT_value);

	zval enum_case_MARKDOWN_TEXT_value;
	ZVAL_LONG(&enum_case_MARKDOWN_TEXT_value, 3);
	zend_enum_add_case_cstr(class_entry, "MARKDOWN_TEXT", &enum_case_MARKDOWN_TEXT_value);

	return class_entry;
}

static zend_class_entry *register_class_Qt_TransformationMode(void)
{
	zend_class_entry *class_entry = zend_register_internal_enum("Qt\\TransformationMode", IS_LONG, NULL);

	zval enum_case_FAST_TRANSFORMATION_value;
	ZVAL_LONG(&enum_case_FAST_TRANSFORMATION_value, 0);
	zend_enum_add_case_cstr(class_entry, "FAST_TRANSFORMATION", &enum_case_FAST_TRANSFORMATION_value);

	zval enum_case_SMOOTH_TRANSFORMATION_value;
	ZVAL_LONG(&enum_case_SMOOTH_TRANSFORMATION_value, 1);
	zend_enum_add_case_cstr(class_entry, "SMOOTH_TRANSFORMATION", &enum_case_SMOOTH_TRANSFORMATION_value);

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

static zend_class_entry *register_class_Qt_ApplicationAttribute(void)
{
	zend_class_entry *class_entry = zend_register_internal_enum("Qt\\ApplicationAttribute", IS_LONG, NULL);

	zval enum_case_QT_QUICK_USE_DEFAULT_SIZE_POLICY_value;
	ZVAL_LONG(&enum_case_QT_QUICK_USE_DEFAULT_SIZE_POLICY_value, 1);
	zend_enum_add_case_cstr(class_entry, "QT_QUICK_USE_DEFAULT_SIZE_POLICY", &enum_case_QT_QUICK_USE_DEFAULT_SIZE_POLICY_value);

	zval enum_case_DONT_SHOW_ICONS_IN_MENUS_value;
	ZVAL_LONG(&enum_case_DONT_SHOW_ICONS_IN_MENUS_value, 2);
	zend_enum_add_case_cstr(class_entry, "DONT_SHOW_ICONS_IN_MENUS", &enum_case_DONT_SHOW_ICONS_IN_MENUS_value);

	zval enum_case_NATIVE_WINDOWS_value;
	ZVAL_LONG(&enum_case_NATIVE_WINDOWS_value, 3);
	zend_enum_add_case_cstr(class_entry, "NATIVE_WINDOWS", &enum_case_NATIVE_WINDOWS_value);

	zval enum_case_DONT_CREATE_NATIVE_WIDGET_SIBLINGS_value;
	ZVAL_LONG(&enum_case_DONT_CREATE_NATIVE_WIDGET_SIBLINGS_value, 4);
	zend_enum_add_case_cstr(class_entry, "DONT_CREATE_NATIVE_WIDGET_SIBLINGS", &enum_case_DONT_CREATE_NATIVE_WIDGET_SIBLINGS_value);

	zval enum_case_PLUGIN_APPLICATION_value;
	ZVAL_LONG(&enum_case_PLUGIN_APPLICATION_value, 5);
	zend_enum_add_case_cstr(class_entry, "PLUGIN_APPLICATION", &enum_case_PLUGIN_APPLICATION_value);

	zval enum_case_DONT_USE_NATIVE_MENU_BAR_value;
	ZVAL_LONG(&enum_case_DONT_USE_NATIVE_MENU_BAR_value, 6);
	zend_enum_add_case_cstr(class_entry, "DONT_USE_NATIVE_MENU_BAR", &enum_case_DONT_USE_NATIVE_MENU_BAR_value);

	zval enum_case_MAC_DONT_SWAP_CTRL_AND_META_value;
	ZVAL_LONG(&enum_case_MAC_DONT_SWAP_CTRL_AND_META_value, 7);
	zend_enum_add_case_cstr(class_entry, "MAC_DONT_SWAP_CTRL_AND_META", &enum_case_MAC_DONT_SWAP_CTRL_AND_META_value);

	zval enum_case_USE96_DPI_value;
	ZVAL_LONG(&enum_case_USE96_DPI_value, 8);
	zend_enum_add_case_cstr(class_entry, "USE96_DPI", &enum_case_USE96_DPI_value);

	zval enum_case_DISABLE_NATIVE_VIRTUAL_KEYBOARD_value;
	ZVAL_LONG(&enum_case_DISABLE_NATIVE_VIRTUAL_KEYBOARD_value, 9);
	zend_enum_add_case_cstr(class_entry, "DISABLE_NATIVE_VIRTUAL_KEYBOARD", &enum_case_DISABLE_NATIVE_VIRTUAL_KEYBOARD_value);

	zval enum_case_DONT_USE_NATIVE_MENU_WINDOWS_value;
	ZVAL_LONG(&enum_case_DONT_USE_NATIVE_MENU_WINDOWS_value, 10);
	zend_enum_add_case_cstr(class_entry, "DONT_USE_NATIVE_MENU_WINDOWS", &enum_case_DONT_USE_NATIVE_MENU_WINDOWS_value);

	zval enum_case_SYNTHESIZE_TOUCH_FOR_UNHANDLED_MOUSE_EVENTS_value;
	ZVAL_LONG(&enum_case_SYNTHESIZE_TOUCH_FOR_UNHANDLED_MOUSE_EVENTS_value, 11);
	zend_enum_add_case_cstr(class_entry, "SYNTHESIZE_TOUCH_FOR_UNHANDLED_MOUSE_EVENTS", &enum_case_SYNTHESIZE_TOUCH_FOR_UNHANDLED_MOUSE_EVENTS_value);

	zval enum_case_SYNTHESIZE_MOUSE_FOR_UNHANDLED_TOUCH_EVENTS_value;
	ZVAL_LONG(&enum_case_SYNTHESIZE_MOUSE_FOR_UNHANDLED_TOUCH_EVENTS_value, 12);
	zend_enum_add_case_cstr(class_entry, "SYNTHESIZE_MOUSE_FOR_UNHANDLED_TOUCH_EVENTS", &enum_case_SYNTHESIZE_MOUSE_FOR_UNHANDLED_TOUCH_EVENTS_value);

	zval enum_case_USE_HIGH_DPI_PIXMAPS_value;
	ZVAL_LONG(&enum_case_USE_HIGH_DPI_PIXMAPS_value, 13);
	zend_enum_add_case_cstr(class_entry, "USE_HIGH_DPI_PIXMAPS", &enum_case_USE_HIGH_DPI_PIXMAPS_value);

	zval enum_case_FORCE_RASTER_WIDGETS_value;
	ZVAL_LONG(&enum_case_FORCE_RASTER_WIDGETS_value, 14);
	zend_enum_add_case_cstr(class_entry, "FORCE_RASTER_WIDGETS", &enum_case_FORCE_RASTER_WIDGETS_value);

	zval enum_case_USE_DESKTOP_OPEN_GL_value;
	ZVAL_LONG(&enum_case_USE_DESKTOP_OPEN_GL_value, 15);
	zend_enum_add_case_cstr(class_entry, "USE_DESKTOP_OPEN_GL", &enum_case_USE_DESKTOP_OPEN_GL_value);

	zval enum_case_USE_OPEN_GLES_value;
	ZVAL_LONG(&enum_case_USE_OPEN_GLES_value, 16);
	zend_enum_add_case_cstr(class_entry, "USE_OPEN_GLES", &enum_case_USE_OPEN_GLES_value);

	zval enum_case_USE_SOFTWARE_OPEN_GL_value;
	ZVAL_LONG(&enum_case_USE_SOFTWARE_OPEN_GL_value, 17);
	zend_enum_add_case_cstr(class_entry, "USE_SOFTWARE_OPEN_GL", &enum_case_USE_SOFTWARE_OPEN_GL_value);

	zval enum_case_SHARE_OPEN_GL_CONTEXTS_value;
	ZVAL_LONG(&enum_case_SHARE_OPEN_GL_CONTEXTS_value, 18);
	zend_enum_add_case_cstr(class_entry, "SHARE_OPEN_GL_CONTEXTS", &enum_case_SHARE_OPEN_GL_CONTEXTS_value);

	zval enum_case_SET_PALETTE_value;
	ZVAL_LONG(&enum_case_SET_PALETTE_value, 19);
	zend_enum_add_case_cstr(class_entry, "SET_PALETTE", &enum_case_SET_PALETTE_value);

	zval enum_case_ENABLE_HIGH_DPI_SCALING_value;
	ZVAL_LONG(&enum_case_ENABLE_HIGH_DPI_SCALING_value, 20);
	zend_enum_add_case_cstr(class_entry, "ENABLE_HIGH_DPI_SCALING", &enum_case_ENABLE_HIGH_DPI_SCALING_value);

	zval enum_case_DISABLE_HIGH_DPI_SCALING_value;
	ZVAL_LONG(&enum_case_DISABLE_HIGH_DPI_SCALING_value, 21);
	zend_enum_add_case_cstr(class_entry, "DISABLE_HIGH_DPI_SCALING", &enum_case_DISABLE_HIGH_DPI_SCALING_value);

	zval enum_case_USE_STYLE_SHEET_PROPAGATION_IN_WIDGET_STYLES_value;
	ZVAL_LONG(&enum_case_USE_STYLE_SHEET_PROPAGATION_IN_WIDGET_STYLES_value, 22);
	zend_enum_add_case_cstr(class_entry, "USE_STYLE_SHEET_PROPAGATION_IN_WIDGET_STYLES", &enum_case_USE_STYLE_SHEET_PROPAGATION_IN_WIDGET_STYLES_value);

	zval enum_case_DONT_USE_NATIVE_DIALOGS_value;
	ZVAL_LONG(&enum_case_DONT_USE_NATIVE_DIALOGS_value, 23);
	zend_enum_add_case_cstr(class_entry, "DONT_USE_NATIVE_DIALOGS", &enum_case_DONT_USE_NATIVE_DIALOGS_value);

	zval enum_case_SYNTHESIZE_MOUSE_FOR_UNHANDLED_TABLET_EVENTS_value;
	ZVAL_LONG(&enum_case_SYNTHESIZE_MOUSE_FOR_UNHANDLED_TABLET_EVENTS_value, 24);
	zend_enum_add_case_cstr(class_entry, "SYNTHESIZE_MOUSE_FOR_UNHANDLED_TABLET_EVENTS", &enum_case_SYNTHESIZE_MOUSE_FOR_UNHANDLED_TABLET_EVENTS_value);

	zval enum_case_COMPRESS_HIGH_FREQUENCY_EVENTS_value;
	ZVAL_LONG(&enum_case_COMPRESS_HIGH_FREQUENCY_EVENTS_value, 25);
	zend_enum_add_case_cstr(class_entry, "COMPRESS_HIGH_FREQUENCY_EVENTS", &enum_case_COMPRESS_HIGH_FREQUENCY_EVENTS_value);

	zval enum_case_DONT_CHECK_OPEN_GL_CONTEXT_THREAD_AFFINITY_value;
	ZVAL_LONG(&enum_case_DONT_CHECK_OPEN_GL_CONTEXT_THREAD_AFFINITY_value, 26);
	zend_enum_add_case_cstr(class_entry, "DONT_CHECK_OPEN_GL_CONTEXT_THREAD_AFFINITY", &enum_case_DONT_CHECK_OPEN_GL_CONTEXT_THREAD_AFFINITY_value);

	zval enum_case_DISABLE_SHADER_DISK_CACHE_value;
	ZVAL_LONG(&enum_case_DISABLE_SHADER_DISK_CACHE_value, 27);
	zend_enum_add_case_cstr(class_entry, "DISABLE_SHADER_DISK_CACHE", &enum_case_DISABLE_SHADER_DISK_CACHE_value);

	zval enum_case_DONT_SHOW_SHORTCUTS_IN_CONTEXT_MENUS_value;
	ZVAL_LONG(&enum_case_DONT_SHOW_SHORTCUTS_IN_CONTEXT_MENUS_value, 28);
	zend_enum_add_case_cstr(class_entry, "DONT_SHOW_SHORTCUTS_IN_CONTEXT_MENUS", &enum_case_DONT_SHOW_SHORTCUTS_IN_CONTEXT_MENUS_value);

	zval enum_case_COMPRESS_TABLET_EVENTS_value;
	ZVAL_LONG(&enum_case_COMPRESS_TABLET_EVENTS_value, 29);
	zend_enum_add_case_cstr(class_entry, "COMPRESS_TABLET_EVENTS", &enum_case_COMPRESS_TABLET_EVENTS_value);

	zval enum_case_DISABLE_SESSION_MANAGER_value;
	ZVAL_LONG(&enum_case_DISABLE_SESSION_MANAGER_value, 31);
	zend_enum_add_case_cstr(class_entry, "DISABLE_SESSION_MANAGER", &enum_case_DISABLE_SESSION_MANAGER_value);

	zval enum_case_ATTRIBUTE_COUNT_value;
	ZVAL_LONG(&enum_case_ATTRIBUTE_COUNT_value, 32);
	zend_enum_add_case_cstr(class_entry, "ATTRIBUTE_COUNT", &enum_case_ATTRIBUTE_COUNT_value);

	return class_entry;
}

static zend_class_entry *register_class_Qt_AlignmentFlag(void)
{
	zend_class_entry *class_entry = zend_register_internal_enum("Qt\\AlignmentFlag", IS_LONG, NULL);

	zval enum_case_LEFT_value;
	ZVAL_LONG(&enum_case_LEFT_value, 1);
	zend_enum_add_case_cstr(class_entry, "LEFT", &enum_case_LEFT_value);

	zval enum_case_RIGHT_value;
	ZVAL_LONG(&enum_case_RIGHT_value, 2);
	zend_enum_add_case_cstr(class_entry, "RIGHT", &enum_case_RIGHT_value);

	zval enum_case_H_CENTER_value;
	ZVAL_LONG(&enum_case_H_CENTER_value, 4);
	zend_enum_add_case_cstr(class_entry, "H_CENTER", &enum_case_H_CENTER_value);

	zval enum_case_JUSTIFY_value;
	ZVAL_LONG(&enum_case_JUSTIFY_value, 8);
	zend_enum_add_case_cstr(class_entry, "JUSTIFY", &enum_case_JUSTIFY_value);

	zval enum_case_ABSOLUTE_value;
	ZVAL_LONG(&enum_case_ABSOLUTE_value, 16);
	zend_enum_add_case_cstr(class_entry, "ABSOLUTE", &enum_case_ABSOLUTE_value);

	zval enum_case_HORIZONTAL_MASK_value;
	ZVAL_LONG(&enum_case_HORIZONTAL_MASK_value, 31);
	zend_enum_add_case_cstr(class_entry, "HORIZONTAL_MASK", &enum_case_HORIZONTAL_MASK_value);

	zval enum_case_TOP_value;
	ZVAL_LONG(&enum_case_TOP_value, 32);
	zend_enum_add_case_cstr(class_entry, "TOP", &enum_case_TOP_value);

	zval enum_case_BOTTOM_value;
	ZVAL_LONG(&enum_case_BOTTOM_value, 64);
	zend_enum_add_case_cstr(class_entry, "BOTTOM", &enum_case_BOTTOM_value);

	zval enum_case_V_CENTER_value;
	ZVAL_LONG(&enum_case_V_CENTER_value, 128);
	zend_enum_add_case_cstr(class_entry, "V_CENTER", &enum_case_V_CENTER_value);

	zval enum_case_BASELINE_value;
	ZVAL_LONG(&enum_case_BASELINE_value, 256);
	zend_enum_add_case_cstr(class_entry, "BASELINE", &enum_case_BASELINE_value);

	zval enum_case_VERTICAL_MASK_value;
	ZVAL_LONG(&enum_case_VERTICAL_MASK_value, 480);
	zend_enum_add_case_cstr(class_entry, "VERTICAL_MASK", &enum_case_VERTICAL_MASK_value);

	zval enum_case_CENTER_value;
	ZVAL_LONG(&enum_case_CENTER_value, 132);
	zend_enum_add_case_cstr(class_entry, "CENTER", &enum_case_CENTER_value);

	return class_entry;
}

static zend_class_entry *register_class_Qt_TextInteractionFlag(void)
{
	zend_class_entry *class_entry = zend_register_internal_enum("Qt\\TextInteractionFlag", IS_LONG, NULL);

	zval enum_case_NO_TEXT_INTERACTION_value;
	ZVAL_LONG(&enum_case_NO_TEXT_INTERACTION_value, 0);
	zend_enum_add_case_cstr(class_entry, "NO_TEXT_INTERACTION", &enum_case_NO_TEXT_INTERACTION_value);

	zval enum_case_TEXT_SELECTABLE_BY_MOUSE_value;
	ZVAL_LONG(&enum_case_TEXT_SELECTABLE_BY_MOUSE_value, 1);
	zend_enum_add_case_cstr(class_entry, "TEXT_SELECTABLE_BY_MOUSE", &enum_case_TEXT_SELECTABLE_BY_MOUSE_value);

	zval enum_case_TEXT_SELECTABLE_BY_KEYBOARD_value;
	ZVAL_LONG(&enum_case_TEXT_SELECTABLE_BY_KEYBOARD_value, 2);
	zend_enum_add_case_cstr(class_entry, "TEXT_SELECTABLE_BY_KEYBOARD", &enum_case_TEXT_SELECTABLE_BY_KEYBOARD_value);

	zval enum_case_LINKS_ACCESSIBLE_BY_MOUSE_value;
	ZVAL_LONG(&enum_case_LINKS_ACCESSIBLE_BY_MOUSE_value, 4);
	zend_enum_add_case_cstr(class_entry, "LINKS_ACCESSIBLE_BY_MOUSE", &enum_case_LINKS_ACCESSIBLE_BY_MOUSE_value);

	zval enum_case_LINKS_ACCESSIBLE_BY_KEYBOARD_value;
	ZVAL_LONG(&enum_case_LINKS_ACCESSIBLE_BY_KEYBOARD_value, 8);
	zend_enum_add_case_cstr(class_entry, "LINKS_ACCESSIBLE_BY_KEYBOARD", &enum_case_LINKS_ACCESSIBLE_BY_KEYBOARD_value);

	zval enum_case_TEXT_EDITABLE_value;
	ZVAL_LONG(&enum_case_TEXT_EDITABLE_value, 16);
	zend_enum_add_case_cstr(class_entry, "TEXT_EDITABLE", &enum_case_TEXT_EDITABLE_value);

	zval enum_case_TEXT_EDITOR_INTERACTION_value;
	ZVAL_LONG(&enum_case_TEXT_EDITOR_INTERACTION_value, 19);
	zend_enum_add_case_cstr(class_entry, "TEXT_EDITOR_INTERACTION", &enum_case_TEXT_EDITOR_INTERACTION_value);

	zval enum_case_TEXT_BROWSER_INTERACTION_value;
	ZVAL_LONG(&enum_case_TEXT_BROWSER_INTERACTION_value, 13);
	zend_enum_add_case_cstr(class_entry, "TEXT_BROWSER_INTERACTION", &enum_case_TEXT_BROWSER_INTERACTION_value);

	return class_entry;
}

static zend_class_entry *register_class_Qt_WindowType(void)
{
	zend_class_entry *class_entry = zend_register_internal_enum("Qt\\WindowType", IS_LONG, NULL);

	zval enum_case_WIDGET_value;
	ZVAL_LONG(&enum_case_WIDGET_value, 0);
	zend_enum_add_case_cstr(class_entry, "WIDGET", &enum_case_WIDGET_value);

	zval enum_case_WINDOW_value;
	ZVAL_LONG(&enum_case_WINDOW_value, 1);
	zend_enum_add_case_cstr(class_entry, "WINDOW", &enum_case_WINDOW_value);

	zval enum_case_DIALOG_value;
	ZVAL_LONG(&enum_case_DIALOG_value, 3);
	zend_enum_add_case_cstr(class_entry, "DIALOG", &enum_case_DIALOG_value);

	zval enum_case_SHEET_value;
	ZVAL_LONG(&enum_case_SHEET_value, 5);
	zend_enum_add_case_cstr(class_entry, "SHEET", &enum_case_SHEET_value);

	zval enum_case_DRAWER_value;
	ZVAL_LONG(&enum_case_DRAWER_value, 7);
	zend_enum_add_case_cstr(class_entry, "DRAWER", &enum_case_DRAWER_value);

	zval enum_case_POPUP_value;
	ZVAL_LONG(&enum_case_POPUP_value, 9);
	zend_enum_add_case_cstr(class_entry, "POPUP", &enum_case_POPUP_value);

	zval enum_case_TOOL_value;
	ZVAL_LONG(&enum_case_TOOL_value, 11);
	zend_enum_add_case_cstr(class_entry, "TOOL", &enum_case_TOOL_value);

	zval enum_case_TOOL_TIP_value;
	ZVAL_LONG(&enum_case_TOOL_TIP_value, 13);
	zend_enum_add_case_cstr(class_entry, "TOOL_TIP", &enum_case_TOOL_TIP_value);

	zval enum_case_SPLASH_SCREEN_value;
	ZVAL_LONG(&enum_case_SPLASH_SCREEN_value, 15);
	zend_enum_add_case_cstr(class_entry, "SPLASH_SCREEN", &enum_case_SPLASH_SCREEN_value);

	zval enum_case_DESKTOP_value;
	ZVAL_LONG(&enum_case_DESKTOP_value, 17);
	zend_enum_add_case_cstr(class_entry, "DESKTOP", &enum_case_DESKTOP_value);

	zval enum_case_SUB_WINDOW_value;
	ZVAL_LONG(&enum_case_SUB_WINDOW_value, 18);
	zend_enum_add_case_cstr(class_entry, "SUB_WINDOW", &enum_case_SUB_WINDOW_value);

	zval enum_case_FOREIGN_WINDOW_value;
	ZVAL_LONG(&enum_case_FOREIGN_WINDOW_value, 33);
	zend_enum_add_case_cstr(class_entry, "FOREIGN_WINDOW", &enum_case_FOREIGN_WINDOW_value);

	zval enum_case_COVER_WINDOW_value;
	ZVAL_LONG(&enum_case_COVER_WINDOW_value, 65);
	zend_enum_add_case_cstr(class_entry, "COVER_WINDOW", &enum_case_COVER_WINDOW_value);

	zval enum_case_WINDOW_TYPE_MASK_value;
	ZVAL_LONG(&enum_case_WINDOW_TYPE_MASK_value, 255);
	zend_enum_add_case_cstr(class_entry, "WINDOW_TYPE_MASK", &enum_case_WINDOW_TYPE_MASK_value);

	zval enum_case_MS_WINDOWS_FIXED_SIZE_DIALOG_HINT_value;
	ZVAL_LONG(&enum_case_MS_WINDOWS_FIXED_SIZE_DIALOG_HINT_value, 256);
	zend_enum_add_case_cstr(class_entry, "MS_WINDOWS_FIXED_SIZE_DIALOG_HINT", &enum_case_MS_WINDOWS_FIXED_SIZE_DIALOG_HINT_value);

	zval enum_case_MS_WINDOWS_OWN_DC_value;
	ZVAL_LONG(&enum_case_MS_WINDOWS_OWN_DC_value, 512);
	zend_enum_add_case_cstr(class_entry, "MS_WINDOWS_OWN_DC", &enum_case_MS_WINDOWS_OWN_DC_value);

	zval enum_case_BYPASS_WINDOW_MANAGER_HINT_value;
	ZVAL_LONG(&enum_case_BYPASS_WINDOW_MANAGER_HINT_value, 1024);
	zend_enum_add_case_cstr(class_entry, "BYPASS_WINDOW_MANAGER_HINT", &enum_case_BYPASS_WINDOW_MANAGER_HINT_value);

	zval enum_case_FRAMELESS_WINDOW_HINT_value;
	ZVAL_LONG(&enum_case_FRAMELESS_WINDOW_HINT_value, 2048);
	zend_enum_add_case_cstr(class_entry, "FRAMELESS_WINDOW_HINT", &enum_case_FRAMELESS_WINDOW_HINT_value);

	zval enum_case_WINDOW_TITLE_HINT_value;
	ZVAL_LONG(&enum_case_WINDOW_TITLE_HINT_value, 4096);
	zend_enum_add_case_cstr(class_entry, "WINDOW_TITLE_HINT", &enum_case_WINDOW_TITLE_HINT_value);

	zval enum_case_WINDOW_SYSTEM_MENU_HINT_value;
	ZVAL_LONG(&enum_case_WINDOW_SYSTEM_MENU_HINT_value, 8192);
	zend_enum_add_case_cstr(class_entry, "WINDOW_SYSTEM_MENU_HINT", &enum_case_WINDOW_SYSTEM_MENU_HINT_value);

	zval enum_case_WINDOW_MINIMIZE_BUTTON_HINT_value;
	ZVAL_LONG(&enum_case_WINDOW_MINIMIZE_BUTTON_HINT_value, 16384);
	zend_enum_add_case_cstr(class_entry, "WINDOW_MINIMIZE_BUTTON_HINT", &enum_case_WINDOW_MINIMIZE_BUTTON_HINT_value);

	zval enum_case_WINDOW_MAXIMIZE_BUTTON_HINT_value;
	ZVAL_LONG(&enum_case_WINDOW_MAXIMIZE_BUTTON_HINT_value, 32768);
	zend_enum_add_case_cstr(class_entry, "WINDOW_MAXIMIZE_BUTTON_HINT", &enum_case_WINDOW_MAXIMIZE_BUTTON_HINT_value);

	zval enum_case_WINDOW_MIN_MAX_BUTTONS_HINT_value;
	ZVAL_LONG(&enum_case_WINDOW_MIN_MAX_BUTTONS_HINT_value, 49152);
	zend_enum_add_case_cstr(class_entry, "WINDOW_MIN_MAX_BUTTONS_HINT", &enum_case_WINDOW_MIN_MAX_BUTTONS_HINT_value);

	zval enum_case_WINDOW_CONTEXT_HELP_BUTTON_HINT_value;
	ZVAL_LONG(&enum_case_WINDOW_CONTEXT_HELP_BUTTON_HINT_value, 65536);
	zend_enum_add_case_cstr(class_entry, "WINDOW_CONTEXT_HELP_BUTTON_HINT", &enum_case_WINDOW_CONTEXT_HELP_BUTTON_HINT_value);

	zval enum_case_WINDOW_SHADE_BUTTON_HINT_value;
	ZVAL_LONG(&enum_case_WINDOW_SHADE_BUTTON_HINT_value, 131072);
	zend_enum_add_case_cstr(class_entry, "WINDOW_SHADE_BUTTON_HINT", &enum_case_WINDOW_SHADE_BUTTON_HINT_value);

	zval enum_case_WINDOW_STAYS_ON_TOP_HINT_value;
	ZVAL_LONG(&enum_case_WINDOW_STAYS_ON_TOP_HINT_value, 262144);
	zend_enum_add_case_cstr(class_entry, "WINDOW_STAYS_ON_TOP_HINT", &enum_case_WINDOW_STAYS_ON_TOP_HINT_value);

	zval enum_case_WINDOW_TRANSPARENT_FOR_INPUT_value;
	ZVAL_LONG(&enum_case_WINDOW_TRANSPARENT_FOR_INPUT_value, 524288);
	zend_enum_add_case_cstr(class_entry, "WINDOW_TRANSPARENT_FOR_INPUT", &enum_case_WINDOW_TRANSPARENT_FOR_INPUT_value);

	zval enum_case_WINDOW_OVERRIDES_SYSTEM_GESTURES_value;
	ZVAL_LONG(&enum_case_WINDOW_OVERRIDES_SYSTEM_GESTURES_value, 1048576);
	zend_enum_add_case_cstr(class_entry, "WINDOW_OVERRIDES_SYSTEM_GESTURES", &enum_case_WINDOW_OVERRIDES_SYSTEM_GESTURES_value);

	zval enum_case_WINDOW_DOES_NOT_ACCEPT_FOCUS_value;
	ZVAL_LONG(&enum_case_WINDOW_DOES_NOT_ACCEPT_FOCUS_value, 2097152);
	zend_enum_add_case_cstr(class_entry, "WINDOW_DOES_NOT_ACCEPT_FOCUS", &enum_case_WINDOW_DOES_NOT_ACCEPT_FOCUS_value);

	zval enum_case_MAXIMIZE_USING_FULLSCREEN_GEOMETRY_HINT_value;
	ZVAL_LONG(&enum_case_MAXIMIZE_USING_FULLSCREEN_GEOMETRY_HINT_value, 4194304);
	zend_enum_add_case_cstr(class_entry, "MAXIMIZE_USING_FULLSCREEN_GEOMETRY_HINT", &enum_case_MAXIMIZE_USING_FULLSCREEN_GEOMETRY_HINT_value);

	zval enum_case_NO_TITLE_BAR_BACKGROUND_HINT_value;
	ZVAL_LONG(&enum_case_NO_TITLE_BAR_BACKGROUND_HINT_value, 8388608);
	zend_enum_add_case_cstr(class_entry, "NO_TITLE_BAR_BACKGROUND_HINT", &enum_case_NO_TITLE_BAR_BACKGROUND_HINT_value);

	zval enum_case_CUSTOMIZE_WINDOW_HINT_value;
	ZVAL_LONG(&enum_case_CUSTOMIZE_WINDOW_HINT_value, 33554432);
	zend_enum_add_case_cstr(class_entry, "CUSTOMIZE_WINDOW_HINT", &enum_case_CUSTOMIZE_WINDOW_HINT_value);

	zval enum_case_WINDOW_STAYS_ON_BOTTOM_HINT_value;
	ZVAL_LONG(&enum_case_WINDOW_STAYS_ON_BOTTOM_HINT_value, 67108864);
	zend_enum_add_case_cstr(class_entry, "WINDOW_STAYS_ON_BOTTOM_HINT", &enum_case_WINDOW_STAYS_ON_BOTTOM_HINT_value);

	zval enum_case_WINDOW_CLOSE_BUTTON_HINT_value;
	ZVAL_LONG(&enum_case_WINDOW_CLOSE_BUTTON_HINT_value, 134217728);
	zend_enum_add_case_cstr(class_entry, "WINDOW_CLOSE_BUTTON_HINT", &enum_case_WINDOW_CLOSE_BUTTON_HINT_value);

	zval enum_case_MAC_WINDOW_TOOL_BAR_BUTTON_HINT_value;
	ZVAL_LONG(&enum_case_MAC_WINDOW_TOOL_BAR_BUTTON_HINT_value, 268435456);
	zend_enum_add_case_cstr(class_entry, "MAC_WINDOW_TOOL_BAR_BUTTON_HINT", &enum_case_MAC_WINDOW_TOOL_BAR_BUTTON_HINT_value);

	zval enum_case_BYPASS_GRAPHICS_PROXY_WIDGET_value;
	ZVAL_LONG(&enum_case_BYPASS_GRAPHICS_PROXY_WIDGET_value, 536870912);
	zend_enum_add_case_cstr(class_entry, "BYPASS_GRAPHICS_PROXY_WIDGET", &enum_case_BYPASS_GRAPHICS_PROXY_WIDGET_value);

	zval enum_case_NO_DROP_SHADOW_WINDOW_HINT_value;
	ZVAL_LONG(&enum_case_NO_DROP_SHADOW_WINDOW_HINT_value, 1073741824);
	zend_enum_add_case_cstr(class_entry, "NO_DROP_SHADOW_WINDOW_HINT", &enum_case_NO_DROP_SHADOW_WINDOW_HINT_value);

	zval enum_case_WINDOW_FULLSCREEN_BUTTON_HINT_value;
	ZVAL_LONG(&enum_case_WINDOW_FULLSCREEN_BUTTON_HINT_value, 2147483648);
	zend_enum_add_case_cstr(class_entry, "WINDOW_FULLSCREEN_BUTTON_HINT", &enum_case_WINDOW_FULLSCREEN_BUTTON_HINT_value);

	return class_entry;
}

static zend_class_entry *register_class_Qt_ImageConversionFlag(void)
{
	zend_class_entry *class_entry = zend_register_internal_enum("Qt\\ImageConversionFlag", IS_LONG, NULL);

	zval enum_case_COLOR_MODE_MASK_value;
	ZVAL_LONG(&enum_case_COLOR_MODE_MASK_value, 3);
	zend_enum_add_case_cstr(class_entry, "COLOR_MODE_MASK", &enum_case_COLOR_MODE_MASK_value);

	zval enum_case_AUTO_COLOR_value;
	ZVAL_LONG(&enum_case_AUTO_COLOR_value, 0);
	zend_enum_add_case_cstr(class_entry, "AUTO_COLOR", &enum_case_AUTO_COLOR_value);

	zval enum_case_MONO_ONLY_value;
	ZVAL_LONG(&enum_case_MONO_ONLY_value, 2);
	zend_enum_add_case_cstr(class_entry, "MONO_ONLY", &enum_case_MONO_ONLY_value);

	zval enum_case_ALPHA_DITHER_MASK_value;
	ZVAL_LONG(&enum_case_ALPHA_DITHER_MASK_value, 12);
	zend_enum_add_case_cstr(class_entry, "ALPHA_DITHER_MASK", &enum_case_ALPHA_DITHER_MASK_value);

	zval enum_case_ORDERED_ALPHA_DITHER_value;
	ZVAL_LONG(&enum_case_ORDERED_ALPHA_DITHER_value, 4);
	zend_enum_add_case_cstr(class_entry, "ORDERED_ALPHA_DITHER", &enum_case_ORDERED_ALPHA_DITHER_value);

	zval enum_case_DIFFUSE_ALPHA_DITHER_value;
	ZVAL_LONG(&enum_case_DIFFUSE_ALPHA_DITHER_value, 8);
	zend_enum_add_case_cstr(class_entry, "DIFFUSE_ALPHA_DITHER", &enum_case_DIFFUSE_ALPHA_DITHER_value);

	zval enum_case_DITHER_MASK_value;
	ZVAL_LONG(&enum_case_DITHER_MASK_value, 48);
	zend_enum_add_case_cstr(class_entry, "DITHER_MASK", &enum_case_DITHER_MASK_value);

	zval enum_case_ORDERED_DITHER_value;
	ZVAL_LONG(&enum_case_ORDERED_DITHER_value, 16);
	zend_enum_add_case_cstr(class_entry, "ORDERED_DITHER", &enum_case_ORDERED_DITHER_value);

	zval enum_case_THRESHOLD_DITHER_value;
	ZVAL_LONG(&enum_case_THRESHOLD_DITHER_value, 32);
	zend_enum_add_case_cstr(class_entry, "THRESHOLD_DITHER", &enum_case_THRESHOLD_DITHER_value);

	zval enum_case_DITHER_MODE_MASK_value;
	ZVAL_LONG(&enum_case_DITHER_MODE_MASK_value, 192);
	zend_enum_add_case_cstr(class_entry, "DITHER_MODE_MASK", &enum_case_DITHER_MODE_MASK_value);

	zval enum_case_PREFER_DITHER_value;
	ZVAL_LONG(&enum_case_PREFER_DITHER_value, 64);
	zend_enum_add_case_cstr(class_entry, "PREFER_DITHER", &enum_case_PREFER_DITHER_value);

	zval enum_case_AVOID_DITHER_value;
	ZVAL_LONG(&enum_case_AVOID_DITHER_value, 128);
	zend_enum_add_case_cstr(class_entry, "AVOID_DITHER", &enum_case_AVOID_DITHER_value);

	zval enum_case_NO_OPAQUE_DETECTION_value;
	ZVAL_LONG(&enum_case_NO_OPAQUE_DETECTION_value, 256);
	zend_enum_add_case_cstr(class_entry, "NO_OPAQUE_DETECTION", &enum_case_NO_OPAQUE_DETECTION_value);

	zval enum_case_NO_FORMAT_CONVERSION_value;
	ZVAL_LONG(&enum_case_NO_FORMAT_CONVERSION_value, 512);
	zend_enum_add_case_cstr(class_entry, "NO_FORMAT_CONVERSION", &enum_case_NO_FORMAT_CONVERSION_value);

	return class_entry;
}

static zend_class_entry *register_class_Qt_BrushStyle(void)
{
	zend_class_entry *class_entry = zend_register_internal_enum("Qt\\BrushStyle", IS_LONG, NULL);

	zval enum_case_NO_BRUSH_value;
	ZVAL_LONG(&enum_case_NO_BRUSH_value, 0);
	zend_enum_add_case_cstr(class_entry, "NO_BRUSH", &enum_case_NO_BRUSH_value);

	zval enum_case_SOLID_PATTERN_value;
	ZVAL_LONG(&enum_case_SOLID_PATTERN_value, 1);
	zend_enum_add_case_cstr(class_entry, "SOLID_PATTERN", &enum_case_SOLID_PATTERN_value);

	zval enum_case_DENSE1_PATTERN_value;
	ZVAL_LONG(&enum_case_DENSE1_PATTERN_value, 2);
	zend_enum_add_case_cstr(class_entry, "DENSE1_PATTERN", &enum_case_DENSE1_PATTERN_value);

	zval enum_case_DENSE2_PATTERN_value;
	ZVAL_LONG(&enum_case_DENSE2_PATTERN_value, 3);
	zend_enum_add_case_cstr(class_entry, "DENSE2_PATTERN", &enum_case_DENSE2_PATTERN_value);

	zval enum_case_DENSE3_PATTERN_value;
	ZVAL_LONG(&enum_case_DENSE3_PATTERN_value, 4);
	zend_enum_add_case_cstr(class_entry, "DENSE3_PATTERN", &enum_case_DENSE3_PATTERN_value);

	zval enum_case_DENSE4_PATTERN_value;
	ZVAL_LONG(&enum_case_DENSE4_PATTERN_value, 5);
	zend_enum_add_case_cstr(class_entry, "DENSE4_PATTERN", &enum_case_DENSE4_PATTERN_value);

	zval enum_case_DENSE5_PATTERN_value;
	ZVAL_LONG(&enum_case_DENSE5_PATTERN_value, 6);
	zend_enum_add_case_cstr(class_entry, "DENSE5_PATTERN", &enum_case_DENSE5_PATTERN_value);

	zval enum_case_DENSE6_PATTERN_value;
	ZVAL_LONG(&enum_case_DENSE6_PATTERN_value, 7);
	zend_enum_add_case_cstr(class_entry, "DENSE6_PATTERN", &enum_case_DENSE6_PATTERN_value);

	zval enum_case_DENSE7_PATTERN_value;
	ZVAL_LONG(&enum_case_DENSE7_PATTERN_value, 8);
	zend_enum_add_case_cstr(class_entry, "DENSE7_PATTERN", &enum_case_DENSE7_PATTERN_value);

	zval enum_case_HOR_PATTERN_value;
	ZVAL_LONG(&enum_case_HOR_PATTERN_value, 9);
	zend_enum_add_case_cstr(class_entry, "HOR_PATTERN", &enum_case_HOR_PATTERN_value);

	zval enum_case_VER_PATTERN_value;
	ZVAL_LONG(&enum_case_VER_PATTERN_value, 10);
	zend_enum_add_case_cstr(class_entry, "VER_PATTERN", &enum_case_VER_PATTERN_value);

	zval enum_case_CROSS_PATTERN_value;
	ZVAL_LONG(&enum_case_CROSS_PATTERN_value, 11);
	zend_enum_add_case_cstr(class_entry, "CROSS_PATTERN", &enum_case_CROSS_PATTERN_value);

	zval enum_case_B_DIAG_PATTERN_value;
	ZVAL_LONG(&enum_case_B_DIAG_PATTERN_value, 12);
	zend_enum_add_case_cstr(class_entry, "B_DIAG_PATTERN", &enum_case_B_DIAG_PATTERN_value);

	zval enum_case_F_DIAG_PATTERN_value;
	ZVAL_LONG(&enum_case_F_DIAG_PATTERN_value, 13);
	zend_enum_add_case_cstr(class_entry, "F_DIAG_PATTERN", &enum_case_F_DIAG_PATTERN_value);

	zval enum_case_DIAG_CROSS_PATTERN_value;
	ZVAL_LONG(&enum_case_DIAG_CROSS_PATTERN_value, 14);
	zend_enum_add_case_cstr(class_entry, "DIAG_CROSS_PATTERN", &enum_case_DIAG_CROSS_PATTERN_value);

	zval enum_case_LINEAR_GRADIENT_PATTERN_value;
	ZVAL_LONG(&enum_case_LINEAR_GRADIENT_PATTERN_value, 15);
	zend_enum_add_case_cstr(class_entry, "LINEAR_GRADIENT_PATTERN", &enum_case_LINEAR_GRADIENT_PATTERN_value);

	zval enum_case_RADIAL_GRADIENT_PATTERN_value;
	ZVAL_LONG(&enum_case_RADIAL_GRADIENT_PATTERN_value, 16);
	zend_enum_add_case_cstr(class_entry, "RADIAL_GRADIENT_PATTERN", &enum_case_RADIAL_GRADIENT_PATTERN_value);

	zval enum_case_CONICAL_GRADIENT_PATTERN_value;
	ZVAL_LONG(&enum_case_CONICAL_GRADIENT_PATTERN_value, 17);
	zend_enum_add_case_cstr(class_entry, "CONICAL_GRADIENT_PATTERN", &enum_case_CONICAL_GRADIENT_PATTERN_value);

	zval enum_case_TEXTURE_PATTERN_value;
	ZVAL_LONG(&enum_case_TEXTURE_PATTERN_value, 24);
	zend_enum_add_case_cstr(class_entry, "TEXTURE_PATTERN", &enum_case_TEXTURE_PATTERN_value);

	return class_entry;
}

static zend_class_entry *register_class_Qt_ConnectionType(void)
{
	zend_class_entry *class_entry = zend_register_internal_enum("Qt\\ConnectionType", IS_LONG, NULL);

	zval enum_case_AUTO_CONNECTION_value;
	ZVAL_LONG(&enum_case_AUTO_CONNECTION_value, 0);
	zend_enum_add_case_cstr(class_entry, "AUTO_CONNECTION", &enum_case_AUTO_CONNECTION_value);

	zval enum_case_DIRECT_CONNECTION_value;
	ZVAL_LONG(&enum_case_DIRECT_CONNECTION_value, 1);
	zend_enum_add_case_cstr(class_entry, "DIRECT_CONNECTION", &enum_case_DIRECT_CONNECTION_value);

	zval enum_case_QUEUED_CONNECTION_value;
	ZVAL_LONG(&enum_case_QUEUED_CONNECTION_value, 2);
	zend_enum_add_case_cstr(class_entry, "QUEUED_CONNECTION", &enum_case_QUEUED_CONNECTION_value);

	zval enum_case_BLOCKING_QUEUED_CONNECTION_value;
	ZVAL_LONG(&enum_case_BLOCKING_QUEUED_CONNECTION_value, 3);
	zend_enum_add_case_cstr(class_entry, "BLOCKING_QUEUED_CONNECTION", &enum_case_BLOCKING_QUEUED_CONNECTION_value);

	zval enum_case_UNIQUE_CONNECTION_value;
	ZVAL_LONG(&enum_case_UNIQUE_CONNECTION_value, 128);
	zend_enum_add_case_cstr(class_entry, "UNIQUE_CONNECTION", &enum_case_UNIQUE_CONNECTION_value);

	zval enum_case_SINGLE_SHOT_CONNECTION_value;
	ZVAL_LONG(&enum_case_SINGLE_SHOT_CONNECTION_value, 256);
	zend_enum_add_case_cstr(class_entry, "SINGLE_SHOT_CONNECTION", &enum_case_SINGLE_SHOT_CONNECTION_value);

	return class_entry;
}
