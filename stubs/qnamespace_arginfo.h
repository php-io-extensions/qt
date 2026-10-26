/* This is a generated file, edit the .stub.php file instead.
 * Stub hash: 96c20d5f4a1cf5b4f9859a372fd47365d1365aac */

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

static zend_class_entry *register_class_Qt_FocusPolicy(void)
{
	zend_class_entry *class_entry = zend_register_internal_enum("Qt\\FocusPolicy", IS_LONG, NULL);

	zval enum_case_NO_FOCUS_value;
	ZVAL_LONG(&enum_case_NO_FOCUS_value, 0);
	zend_enum_add_case_cstr(class_entry, "NO_FOCUS", &enum_case_NO_FOCUS_value);

	zval enum_case_TAB_FOCUS_value;
	ZVAL_LONG(&enum_case_TAB_FOCUS_value, 1);
	zend_enum_add_case_cstr(class_entry, "TAB_FOCUS", &enum_case_TAB_FOCUS_value);

	zval enum_case_CLICK_FOCUS_value;
	ZVAL_LONG(&enum_case_CLICK_FOCUS_value, 2);
	zend_enum_add_case_cstr(class_entry, "CLICK_FOCUS", &enum_case_CLICK_FOCUS_value);

	zval enum_case_STRONG_FOCUS_value;
	ZVAL_LONG(&enum_case_STRONG_FOCUS_value, 11);
	zend_enum_add_case_cstr(class_entry, "STRONG_FOCUS", &enum_case_STRONG_FOCUS_value);

	zval enum_case_WHEEL_FOCUS_value;
	ZVAL_LONG(&enum_case_WHEEL_FOCUS_value, 15);
	zend_enum_add_case_cstr(class_entry, "WHEEL_FOCUS", &enum_case_WHEEL_FOCUS_value);

	return class_entry;
}

static zend_class_entry *register_class_Qt_ToolButtonStyle(void)
{
	zend_class_entry *class_entry = zend_register_internal_enum("Qt\\ToolButtonStyle", IS_LONG, NULL);

	zval enum_case_TOOL_BUTTON_ICON_ONLY_value;
	ZVAL_LONG(&enum_case_TOOL_BUTTON_ICON_ONLY_value, 0);
	zend_enum_add_case_cstr(class_entry, "TOOL_BUTTON_ICON_ONLY", &enum_case_TOOL_BUTTON_ICON_ONLY_value);

	zval enum_case_TOOL_BUTTON_TEXT_ONLY_value;
	ZVAL_LONG(&enum_case_TOOL_BUTTON_TEXT_ONLY_value, 1);
	zend_enum_add_case_cstr(class_entry, "TOOL_BUTTON_TEXT_ONLY", &enum_case_TOOL_BUTTON_TEXT_ONLY_value);

	zval enum_case_TOOL_BUTTON_TEXT_BESIDE_ICON_value;
	ZVAL_LONG(&enum_case_TOOL_BUTTON_TEXT_BESIDE_ICON_value, 2);
	zend_enum_add_case_cstr(class_entry, "TOOL_BUTTON_TEXT_BESIDE_ICON", &enum_case_TOOL_BUTTON_TEXT_BESIDE_ICON_value);

	zval enum_case_TOOL_BUTTON_TEXT_UNDER_ICON_value;
	ZVAL_LONG(&enum_case_TOOL_BUTTON_TEXT_UNDER_ICON_value, 3);
	zend_enum_add_case_cstr(class_entry, "TOOL_BUTTON_TEXT_UNDER_ICON", &enum_case_TOOL_BUTTON_TEXT_UNDER_ICON_value);

	zval enum_case_TOOL_BUTTON_FOLLOW_STYLE_value;
	ZVAL_LONG(&enum_case_TOOL_BUTTON_FOLLOW_STYLE_value, 4);
	zend_enum_add_case_cstr(class_entry, "TOOL_BUTTON_FOLLOW_STYLE", &enum_case_TOOL_BUTTON_FOLLOW_STYLE_value);

	return class_entry;
}

static zend_class_entry *register_class_Qt_CaseSensitivity(void)
{
	zend_class_entry *class_entry = zend_register_internal_enum("Qt\\CaseSensitivity", IS_LONG, NULL);

	zval enum_case_CASE_INSENSITIVE_value;
	ZVAL_LONG(&enum_case_CASE_INSENSITIVE_value, 0);
	zend_enum_add_case_cstr(class_entry, "CASE_INSENSITIVE", &enum_case_CASE_INSENSITIVE_value);

	zval enum_case_CASE_SENSITIVE_value;
	ZVAL_LONG(&enum_case_CASE_SENSITIVE_value, 1);
	zend_enum_add_case_cstr(class_entry, "CASE_SENSITIVE", &enum_case_CASE_SENSITIVE_value);

	return class_entry;
}

static zend_class_entry *register_class_Qt_WindowModality(void)
{
	zend_class_entry *class_entry = zend_register_internal_enum("Qt\\WindowModality", IS_LONG, NULL);

	zval enum_case_NON_MODAL_value;
	ZVAL_LONG(&enum_case_NON_MODAL_value, 0);
	zend_enum_add_case_cstr(class_entry, "NON_MODAL", &enum_case_NON_MODAL_value);

	zval enum_case_WINDOW_MODAL_value;
	ZVAL_LONG(&enum_case_WINDOW_MODAL_value, 1);
	zend_enum_add_case_cstr(class_entry, "WINDOW_MODAL", &enum_case_WINDOW_MODAL_value);

	zval enum_case_APPLICATION_MODAL_value;
	ZVAL_LONG(&enum_case_APPLICATION_MODAL_value, 2);
	zend_enum_add_case_cstr(class_entry, "APPLICATION_MODAL", &enum_case_APPLICATION_MODAL_value);

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

static zend_class_entry *register_class_Qt_ItemDataRole(void)
{
	zend_class_entry *class_entry = zend_register_internal_enum("Qt\\ItemDataRole", IS_LONG, NULL);

	zval enum_case_DISPLAY_ROLE_value;
	ZVAL_LONG(&enum_case_DISPLAY_ROLE_value, 0);
	zend_enum_add_case_cstr(class_entry, "DISPLAY_ROLE", &enum_case_DISPLAY_ROLE_value);

	zval enum_case_DECORATION_ROLE_value;
	ZVAL_LONG(&enum_case_DECORATION_ROLE_value, 1);
	zend_enum_add_case_cstr(class_entry, "DECORATION_ROLE", &enum_case_DECORATION_ROLE_value);

	zval enum_case_EDIT_ROLE_value;
	ZVAL_LONG(&enum_case_EDIT_ROLE_value, 2);
	zend_enum_add_case_cstr(class_entry, "EDIT_ROLE", &enum_case_EDIT_ROLE_value);

	zval enum_case_TOOL_TIP_ROLE_value;
	ZVAL_LONG(&enum_case_TOOL_TIP_ROLE_value, 3);
	zend_enum_add_case_cstr(class_entry, "TOOL_TIP_ROLE", &enum_case_TOOL_TIP_ROLE_value);

	zval enum_case_STATUS_TIP_ROLE_value;
	ZVAL_LONG(&enum_case_STATUS_TIP_ROLE_value, 4);
	zend_enum_add_case_cstr(class_entry, "STATUS_TIP_ROLE", &enum_case_STATUS_TIP_ROLE_value);

	zval enum_case_WHATS_THIS_ROLE_value;
	ZVAL_LONG(&enum_case_WHATS_THIS_ROLE_value, 5);
	zend_enum_add_case_cstr(class_entry, "WHATS_THIS_ROLE", &enum_case_WHATS_THIS_ROLE_value);

	zval enum_case_FONT_ROLE_value;
	ZVAL_LONG(&enum_case_FONT_ROLE_value, 6);
	zend_enum_add_case_cstr(class_entry, "FONT_ROLE", &enum_case_FONT_ROLE_value);

	zval enum_case_TEXT_ALIGNMENT_ROLE_value;
	ZVAL_LONG(&enum_case_TEXT_ALIGNMENT_ROLE_value, 7);
	zend_enum_add_case_cstr(class_entry, "TEXT_ALIGNMENT_ROLE", &enum_case_TEXT_ALIGNMENT_ROLE_value);

	zval enum_case_BACKGROUND_ROLE_value;
	ZVAL_LONG(&enum_case_BACKGROUND_ROLE_value, 8);
	zend_enum_add_case_cstr(class_entry, "BACKGROUND_ROLE", &enum_case_BACKGROUND_ROLE_value);

	zval enum_case_FOREGROUND_ROLE_value;
	ZVAL_LONG(&enum_case_FOREGROUND_ROLE_value, 9);
	zend_enum_add_case_cstr(class_entry, "FOREGROUND_ROLE", &enum_case_FOREGROUND_ROLE_value);

	zval enum_case_CHECK_STATE_ROLE_value;
	ZVAL_LONG(&enum_case_CHECK_STATE_ROLE_value, 10);
	zend_enum_add_case_cstr(class_entry, "CHECK_STATE_ROLE", &enum_case_CHECK_STATE_ROLE_value);

	zval enum_case_ACCESSIBLE_TEXT_ROLE_value;
	ZVAL_LONG(&enum_case_ACCESSIBLE_TEXT_ROLE_value, 11);
	zend_enum_add_case_cstr(class_entry, "ACCESSIBLE_TEXT_ROLE", &enum_case_ACCESSIBLE_TEXT_ROLE_value);

	zval enum_case_ACCESSIBLE_DESCRIPTION_ROLE_value;
	ZVAL_LONG(&enum_case_ACCESSIBLE_DESCRIPTION_ROLE_value, 12);
	zend_enum_add_case_cstr(class_entry, "ACCESSIBLE_DESCRIPTION_ROLE", &enum_case_ACCESSIBLE_DESCRIPTION_ROLE_value);

	zval enum_case_SIZE_HINT_ROLE_value;
	ZVAL_LONG(&enum_case_SIZE_HINT_ROLE_value, 13);
	zend_enum_add_case_cstr(class_entry, "SIZE_HINT_ROLE", &enum_case_SIZE_HINT_ROLE_value);

	zval enum_case_INITIAL_SORT_ORDER_ROLE_value;
	ZVAL_LONG(&enum_case_INITIAL_SORT_ORDER_ROLE_value, 14);
	zend_enum_add_case_cstr(class_entry, "INITIAL_SORT_ORDER_ROLE", &enum_case_INITIAL_SORT_ORDER_ROLE_value);

	zval enum_case_DISPLAY_PROPERTY_ROLE_value;
	ZVAL_LONG(&enum_case_DISPLAY_PROPERTY_ROLE_value, 27);
	zend_enum_add_case_cstr(class_entry, "DISPLAY_PROPERTY_ROLE", &enum_case_DISPLAY_PROPERTY_ROLE_value);

	zval enum_case_DECORATION_PROPERTY_ROLE_value;
	ZVAL_LONG(&enum_case_DECORATION_PROPERTY_ROLE_value, 28);
	zend_enum_add_case_cstr(class_entry, "DECORATION_PROPERTY_ROLE", &enum_case_DECORATION_PROPERTY_ROLE_value);

	zval enum_case_TOOL_TIP_PROPERTY_ROLE_value;
	ZVAL_LONG(&enum_case_TOOL_TIP_PROPERTY_ROLE_value, 29);
	zend_enum_add_case_cstr(class_entry, "TOOL_TIP_PROPERTY_ROLE", &enum_case_TOOL_TIP_PROPERTY_ROLE_value);

	zval enum_case_STATUS_TIP_PROPERTY_ROLE_value;
	ZVAL_LONG(&enum_case_STATUS_TIP_PROPERTY_ROLE_value, 30);
	zend_enum_add_case_cstr(class_entry, "STATUS_TIP_PROPERTY_ROLE", &enum_case_STATUS_TIP_PROPERTY_ROLE_value);

	zval enum_case_WHATS_THIS_PROPERTY_ROLE_value;
	ZVAL_LONG(&enum_case_WHATS_THIS_PROPERTY_ROLE_value, 31);
	zend_enum_add_case_cstr(class_entry, "WHATS_THIS_PROPERTY_ROLE", &enum_case_WHATS_THIS_PROPERTY_ROLE_value);

	zval enum_case_RANGE_MODEL_DATA_ROLE_value;
	ZVAL_LONG(&enum_case_RANGE_MODEL_DATA_ROLE_value, 40);
	zend_enum_add_case_cstr(class_entry, "RANGE_MODEL_DATA_ROLE", &enum_case_RANGE_MODEL_DATA_ROLE_value);

	zval enum_case_RANGE_MODEL_ADAPTER_ROLE_value;
	ZVAL_LONG(&enum_case_RANGE_MODEL_ADAPTER_ROLE_value, 41);
	zend_enum_add_case_cstr(class_entry, "RANGE_MODEL_ADAPTER_ROLE", &enum_case_RANGE_MODEL_ADAPTER_ROLE_value);

	zval enum_case_USER_ROLE_value;
	ZVAL_LONG(&enum_case_USER_ROLE_value, 256);
	zend_enum_add_case_cstr(class_entry, "USER_ROLE", &enum_case_USER_ROLE_value);

	zval enum_case_STANDARD_ITEM_FLAGS_ROLE_value;
	ZVAL_LONG(&enum_case_STANDARD_ITEM_FLAGS_ROLE_value, 255);
	zend_enum_add_case_cstr(class_entry, "STANDARD_ITEM_FLAGS_ROLE", &enum_case_STANDARD_ITEM_FLAGS_ROLE_value);

	zval enum_case_FILE_INFO_ROLE_value;
	ZVAL_LONG(&enum_case_FILE_INFO_ROLE_value, 252);
	zend_enum_add_case_cstr(class_entry, "FILE_INFO_ROLE", &enum_case_FILE_INFO_ROLE_value);

	return class_entry;
}

static zend_class_entry *register_class_Qt_Key(void)
{
	zend_class_entry *class_entry = zend_register_internal_enum("Qt\\Key", IS_LONG, NULL);

	zval enum_case_SPACE_value;
	ZVAL_LONG(&enum_case_SPACE_value, 32);
	zend_enum_add_case_cstr(class_entry, "SPACE", &enum_case_SPACE_value);

	zval enum_case_EXCLAM_value;
	ZVAL_LONG(&enum_case_EXCLAM_value, 33);
	zend_enum_add_case_cstr(class_entry, "EXCLAM", &enum_case_EXCLAM_value);

	zval enum_case_QUOTE_DBL_value;
	ZVAL_LONG(&enum_case_QUOTE_DBL_value, 34);
	zend_enum_add_case_cstr(class_entry, "QUOTE_DBL", &enum_case_QUOTE_DBL_value);

	zval enum_case_NUMBER_SIGN_value;
	ZVAL_LONG(&enum_case_NUMBER_SIGN_value, 35);
	zend_enum_add_case_cstr(class_entry, "NUMBER_SIGN", &enum_case_NUMBER_SIGN_value);

	zval enum_case_DOLLAR_value;
	ZVAL_LONG(&enum_case_DOLLAR_value, 36);
	zend_enum_add_case_cstr(class_entry, "DOLLAR", &enum_case_DOLLAR_value);

	zval enum_case_PERCENT_value;
	ZVAL_LONG(&enum_case_PERCENT_value, 37);
	zend_enum_add_case_cstr(class_entry, "PERCENT", &enum_case_PERCENT_value);

	zval enum_case_AMPERSAND_value;
	ZVAL_LONG(&enum_case_AMPERSAND_value, 38);
	zend_enum_add_case_cstr(class_entry, "AMPERSAND", &enum_case_AMPERSAND_value);

	zval enum_case_APOSTROPHE_value;
	ZVAL_LONG(&enum_case_APOSTROPHE_value, 39);
	zend_enum_add_case_cstr(class_entry, "APOSTROPHE", &enum_case_APOSTROPHE_value);

	zval enum_case_PAREN_LEFT_value;
	ZVAL_LONG(&enum_case_PAREN_LEFT_value, 40);
	zend_enum_add_case_cstr(class_entry, "PAREN_LEFT", &enum_case_PAREN_LEFT_value);

	zval enum_case_PAREN_RIGHT_value;
	ZVAL_LONG(&enum_case_PAREN_RIGHT_value, 41);
	zend_enum_add_case_cstr(class_entry, "PAREN_RIGHT", &enum_case_PAREN_RIGHT_value);

	zval enum_case_ASTERISK_value;
	ZVAL_LONG(&enum_case_ASTERISK_value, 42);
	zend_enum_add_case_cstr(class_entry, "ASTERISK", &enum_case_ASTERISK_value);

	zval enum_case_PLUS_value;
	ZVAL_LONG(&enum_case_PLUS_value, 43);
	zend_enum_add_case_cstr(class_entry, "PLUS", &enum_case_PLUS_value);

	zval enum_case_COMMA_value;
	ZVAL_LONG(&enum_case_COMMA_value, 44);
	zend_enum_add_case_cstr(class_entry, "COMMA", &enum_case_COMMA_value);

	zval enum_case_MINUS_value;
	ZVAL_LONG(&enum_case_MINUS_value, 45);
	zend_enum_add_case_cstr(class_entry, "MINUS", &enum_case_MINUS_value);

	zval enum_case_PERIOD_value;
	ZVAL_LONG(&enum_case_PERIOD_value, 46);
	zend_enum_add_case_cstr(class_entry, "PERIOD", &enum_case_PERIOD_value);

	zval enum_case_SLASH_value;
	ZVAL_LONG(&enum_case_SLASH_value, 47);
	zend_enum_add_case_cstr(class_entry, "SLASH", &enum_case_SLASH_value);

	zval enum_case_KEY_0_value;
	ZVAL_LONG(&enum_case_KEY_0_value, 48);
	zend_enum_add_case_cstr(class_entry, "KEY_0", &enum_case_KEY_0_value);

	zval enum_case_KEY_1_value;
	ZVAL_LONG(&enum_case_KEY_1_value, 49);
	zend_enum_add_case_cstr(class_entry, "KEY_1", &enum_case_KEY_1_value);

	zval enum_case_KEY_2_value;
	ZVAL_LONG(&enum_case_KEY_2_value, 50);
	zend_enum_add_case_cstr(class_entry, "KEY_2", &enum_case_KEY_2_value);

	zval enum_case_KEY_3_value;
	ZVAL_LONG(&enum_case_KEY_3_value, 51);
	zend_enum_add_case_cstr(class_entry, "KEY_3", &enum_case_KEY_3_value);

	zval enum_case_KEY_4_value;
	ZVAL_LONG(&enum_case_KEY_4_value, 52);
	zend_enum_add_case_cstr(class_entry, "KEY_4", &enum_case_KEY_4_value);

	zval enum_case_KEY_5_value;
	ZVAL_LONG(&enum_case_KEY_5_value, 53);
	zend_enum_add_case_cstr(class_entry, "KEY_5", &enum_case_KEY_5_value);

	zval enum_case_KEY_6_value;
	ZVAL_LONG(&enum_case_KEY_6_value, 54);
	zend_enum_add_case_cstr(class_entry, "KEY_6", &enum_case_KEY_6_value);

	zval enum_case_KEY_7_value;
	ZVAL_LONG(&enum_case_KEY_7_value, 55);
	zend_enum_add_case_cstr(class_entry, "KEY_7", &enum_case_KEY_7_value);

	zval enum_case_KEY_8_value;
	ZVAL_LONG(&enum_case_KEY_8_value, 56);
	zend_enum_add_case_cstr(class_entry, "KEY_8", &enum_case_KEY_8_value);

	zval enum_case_KEY_9_value;
	ZVAL_LONG(&enum_case_KEY_9_value, 57);
	zend_enum_add_case_cstr(class_entry, "KEY_9", &enum_case_KEY_9_value);

	zval enum_case_COLON_value;
	ZVAL_LONG(&enum_case_COLON_value, 58);
	zend_enum_add_case_cstr(class_entry, "COLON", &enum_case_COLON_value);

	zval enum_case_SEMICOLON_value;
	ZVAL_LONG(&enum_case_SEMICOLON_value, 59);
	zend_enum_add_case_cstr(class_entry, "SEMICOLON", &enum_case_SEMICOLON_value);

	zval enum_case_LESS_value;
	ZVAL_LONG(&enum_case_LESS_value, 60);
	zend_enum_add_case_cstr(class_entry, "LESS", &enum_case_LESS_value);

	zval enum_case_EQUAL_value;
	ZVAL_LONG(&enum_case_EQUAL_value, 61);
	zend_enum_add_case_cstr(class_entry, "EQUAL", &enum_case_EQUAL_value);

	zval enum_case_GREATER_value;
	ZVAL_LONG(&enum_case_GREATER_value, 62);
	zend_enum_add_case_cstr(class_entry, "GREATER", &enum_case_GREATER_value);

	zval enum_case_QUESTION_value;
	ZVAL_LONG(&enum_case_QUESTION_value, 63);
	zend_enum_add_case_cstr(class_entry, "QUESTION", &enum_case_QUESTION_value);

	zval enum_case_AT_value;
	ZVAL_LONG(&enum_case_AT_value, 64);
	zend_enum_add_case_cstr(class_entry, "AT", &enum_case_AT_value);

	zval enum_case_A_value;
	ZVAL_LONG(&enum_case_A_value, 65);
	zend_enum_add_case_cstr(class_entry, "A", &enum_case_A_value);

	zval enum_case_B_value;
	ZVAL_LONG(&enum_case_B_value, 66);
	zend_enum_add_case_cstr(class_entry, "B", &enum_case_B_value);

	zval enum_case_C_value;
	ZVAL_LONG(&enum_case_C_value, 67);
	zend_enum_add_case_cstr(class_entry, "C", &enum_case_C_value);

	zval enum_case_D_value;
	ZVAL_LONG(&enum_case_D_value, 68);
	zend_enum_add_case_cstr(class_entry, "D", &enum_case_D_value);

	zval enum_case_E_value;
	ZVAL_LONG(&enum_case_E_value, 69);
	zend_enum_add_case_cstr(class_entry, "E", &enum_case_E_value);

	zval enum_case_F_value;
	ZVAL_LONG(&enum_case_F_value, 70);
	zend_enum_add_case_cstr(class_entry, "F", &enum_case_F_value);

	zval enum_case_G_value;
	ZVAL_LONG(&enum_case_G_value, 71);
	zend_enum_add_case_cstr(class_entry, "G", &enum_case_G_value);

	zval enum_case_H_value;
	ZVAL_LONG(&enum_case_H_value, 72);
	zend_enum_add_case_cstr(class_entry, "H", &enum_case_H_value);

	zval enum_case_I_value;
	ZVAL_LONG(&enum_case_I_value, 73);
	zend_enum_add_case_cstr(class_entry, "I", &enum_case_I_value);

	zval enum_case_J_value;
	ZVAL_LONG(&enum_case_J_value, 74);
	zend_enum_add_case_cstr(class_entry, "J", &enum_case_J_value);

	zval enum_case_K_value;
	ZVAL_LONG(&enum_case_K_value, 75);
	zend_enum_add_case_cstr(class_entry, "K", &enum_case_K_value);

	zval enum_case_L_value;
	ZVAL_LONG(&enum_case_L_value, 76);
	zend_enum_add_case_cstr(class_entry, "L", &enum_case_L_value);

	zval enum_case_M_value;
	ZVAL_LONG(&enum_case_M_value, 77);
	zend_enum_add_case_cstr(class_entry, "M", &enum_case_M_value);

	zval enum_case_N_value;
	ZVAL_LONG(&enum_case_N_value, 78);
	zend_enum_add_case_cstr(class_entry, "N", &enum_case_N_value);

	zval enum_case_O_value;
	ZVAL_LONG(&enum_case_O_value, 79);
	zend_enum_add_case_cstr(class_entry, "O", &enum_case_O_value);

	zval enum_case_P_value;
	ZVAL_LONG(&enum_case_P_value, 80);
	zend_enum_add_case_cstr(class_entry, "P", &enum_case_P_value);

	zval enum_case_Q_value;
	ZVAL_LONG(&enum_case_Q_value, 81);
	zend_enum_add_case_cstr(class_entry, "Q", &enum_case_Q_value);

	zval enum_case_R_value;
	ZVAL_LONG(&enum_case_R_value, 82);
	zend_enum_add_case_cstr(class_entry, "R", &enum_case_R_value);

	zval enum_case_S_value;
	ZVAL_LONG(&enum_case_S_value, 83);
	zend_enum_add_case_cstr(class_entry, "S", &enum_case_S_value);

	zval enum_case_T_value;
	ZVAL_LONG(&enum_case_T_value, 84);
	zend_enum_add_case_cstr(class_entry, "T", &enum_case_T_value);

	zval enum_case_U_value;
	ZVAL_LONG(&enum_case_U_value, 85);
	zend_enum_add_case_cstr(class_entry, "U", &enum_case_U_value);

	zval enum_case_V_value;
	ZVAL_LONG(&enum_case_V_value, 86);
	zend_enum_add_case_cstr(class_entry, "V", &enum_case_V_value);

	zval enum_case_W_value;
	ZVAL_LONG(&enum_case_W_value, 87);
	zend_enum_add_case_cstr(class_entry, "W", &enum_case_W_value);

	zval enum_case_X_value;
	ZVAL_LONG(&enum_case_X_value, 88);
	zend_enum_add_case_cstr(class_entry, "X", &enum_case_X_value);

	zval enum_case_Y_value;
	ZVAL_LONG(&enum_case_Y_value, 89);
	zend_enum_add_case_cstr(class_entry, "Y", &enum_case_Y_value);

	zval enum_case_Z_value;
	ZVAL_LONG(&enum_case_Z_value, 90);
	zend_enum_add_case_cstr(class_entry, "Z", &enum_case_Z_value);

	zval enum_case_BRACKET_LEFT_value;
	ZVAL_LONG(&enum_case_BRACKET_LEFT_value, 91);
	zend_enum_add_case_cstr(class_entry, "BRACKET_LEFT", &enum_case_BRACKET_LEFT_value);

	zval enum_case_BACKSLASH_value;
	ZVAL_LONG(&enum_case_BACKSLASH_value, 92);
	zend_enum_add_case_cstr(class_entry, "BACKSLASH", &enum_case_BACKSLASH_value);

	zval enum_case_BRACKET_RIGHT_value;
	ZVAL_LONG(&enum_case_BRACKET_RIGHT_value, 93);
	zend_enum_add_case_cstr(class_entry, "BRACKET_RIGHT", &enum_case_BRACKET_RIGHT_value);

	zval enum_case_ASCII_CIRCUM_value;
	ZVAL_LONG(&enum_case_ASCII_CIRCUM_value, 94);
	zend_enum_add_case_cstr(class_entry, "ASCII_CIRCUM", &enum_case_ASCII_CIRCUM_value);

	zval enum_case_UNDERSCORE_value;
	ZVAL_LONG(&enum_case_UNDERSCORE_value, 95);
	zend_enum_add_case_cstr(class_entry, "UNDERSCORE", &enum_case_UNDERSCORE_value);

	zval enum_case_QUOTE_LEFT_value;
	ZVAL_LONG(&enum_case_QUOTE_LEFT_value, 96);
	zend_enum_add_case_cstr(class_entry, "QUOTE_LEFT", &enum_case_QUOTE_LEFT_value);

	zval enum_case_BRACE_LEFT_value;
	ZVAL_LONG(&enum_case_BRACE_LEFT_value, 123);
	zend_enum_add_case_cstr(class_entry, "BRACE_LEFT", &enum_case_BRACE_LEFT_value);

	zval enum_case_BAR_value;
	ZVAL_LONG(&enum_case_BAR_value, 124);
	zend_enum_add_case_cstr(class_entry, "BAR", &enum_case_BAR_value);

	zval enum_case_BRACE_RIGHT_value;
	ZVAL_LONG(&enum_case_BRACE_RIGHT_value, 125);
	zend_enum_add_case_cstr(class_entry, "BRACE_RIGHT", &enum_case_BRACE_RIGHT_value);

	zval enum_case_ASCII_TILDE_value;
	ZVAL_LONG(&enum_case_ASCII_TILDE_value, 126);
	zend_enum_add_case_cstr(class_entry, "ASCII_TILDE", &enum_case_ASCII_TILDE_value);

	zval enum_case_NOBREAKSPACE_value;
	ZVAL_LONG(&enum_case_NOBREAKSPACE_value, 160);
	zend_enum_add_case_cstr(class_entry, "NOBREAKSPACE", &enum_case_NOBREAKSPACE_value);

	zval enum_case_EXCLAMDOWN_value;
	ZVAL_LONG(&enum_case_EXCLAMDOWN_value, 161);
	zend_enum_add_case_cstr(class_entry, "EXCLAMDOWN", &enum_case_EXCLAMDOWN_value);

	zval enum_case_CENT_value;
	ZVAL_LONG(&enum_case_CENT_value, 162);
	zend_enum_add_case_cstr(class_entry, "CENT", &enum_case_CENT_value);

	zval enum_case_STERLING_value;
	ZVAL_LONG(&enum_case_STERLING_value, 163);
	zend_enum_add_case_cstr(class_entry, "STERLING", &enum_case_STERLING_value);

	zval enum_case_CURRENCY_value;
	ZVAL_LONG(&enum_case_CURRENCY_value, 164);
	zend_enum_add_case_cstr(class_entry, "CURRENCY", &enum_case_CURRENCY_value);

	zval enum_case_YEN_value;
	ZVAL_LONG(&enum_case_YEN_value, 165);
	zend_enum_add_case_cstr(class_entry, "YEN", &enum_case_YEN_value);

	zval enum_case_BROKENBAR_value;
	ZVAL_LONG(&enum_case_BROKENBAR_value, 166);
	zend_enum_add_case_cstr(class_entry, "BROKENBAR", &enum_case_BROKENBAR_value);

	zval enum_case_SECTION_value;
	ZVAL_LONG(&enum_case_SECTION_value, 167);
	zend_enum_add_case_cstr(class_entry, "SECTION", &enum_case_SECTION_value);

	zval enum_case_DIAERESIS_value;
	ZVAL_LONG(&enum_case_DIAERESIS_value, 168);
	zend_enum_add_case_cstr(class_entry, "DIAERESIS", &enum_case_DIAERESIS_value);

	zval enum_case_COPYRIGHT_value;
	ZVAL_LONG(&enum_case_COPYRIGHT_value, 169);
	zend_enum_add_case_cstr(class_entry, "COPYRIGHT", &enum_case_COPYRIGHT_value);

	zval enum_case_ORDFEMININE_value;
	ZVAL_LONG(&enum_case_ORDFEMININE_value, 170);
	zend_enum_add_case_cstr(class_entry, "ORDFEMININE", &enum_case_ORDFEMININE_value);

	zval enum_case_GUILLEMOTLEFT_value;
	ZVAL_LONG(&enum_case_GUILLEMOTLEFT_value, 171);
	zend_enum_add_case_cstr(class_entry, "GUILLEMOTLEFT", &enum_case_GUILLEMOTLEFT_value);

	zval enum_case_NOTSIGN_value;
	ZVAL_LONG(&enum_case_NOTSIGN_value, 172);
	zend_enum_add_case_cstr(class_entry, "NOTSIGN", &enum_case_NOTSIGN_value);

	zval enum_case_HYPHEN_value;
	ZVAL_LONG(&enum_case_HYPHEN_value, 173);
	zend_enum_add_case_cstr(class_entry, "HYPHEN", &enum_case_HYPHEN_value);

	zval enum_case_REGISTERED_value;
	ZVAL_LONG(&enum_case_REGISTERED_value, 174);
	zend_enum_add_case_cstr(class_entry, "REGISTERED", &enum_case_REGISTERED_value);

	zval enum_case_MACRON_value;
	ZVAL_LONG(&enum_case_MACRON_value, 175);
	zend_enum_add_case_cstr(class_entry, "MACRON", &enum_case_MACRON_value);

	zval enum_case_DEGREE_value;
	ZVAL_LONG(&enum_case_DEGREE_value, 176);
	zend_enum_add_case_cstr(class_entry, "DEGREE", &enum_case_DEGREE_value);

	zval enum_case_PLUSMINUS_value;
	ZVAL_LONG(&enum_case_PLUSMINUS_value, 177);
	zend_enum_add_case_cstr(class_entry, "PLUSMINUS", &enum_case_PLUSMINUS_value);

	zval enum_case_TWOSUPERIOR_value;
	ZVAL_LONG(&enum_case_TWOSUPERIOR_value, 178);
	zend_enum_add_case_cstr(class_entry, "TWOSUPERIOR", &enum_case_TWOSUPERIOR_value);

	zval enum_case_THREESUPERIOR_value;
	ZVAL_LONG(&enum_case_THREESUPERIOR_value, 179);
	zend_enum_add_case_cstr(class_entry, "THREESUPERIOR", &enum_case_THREESUPERIOR_value);

	zval enum_case_ACUTE_value;
	ZVAL_LONG(&enum_case_ACUTE_value, 180);
	zend_enum_add_case_cstr(class_entry, "ACUTE", &enum_case_ACUTE_value);

	zval enum_case_MICRO_value;
	ZVAL_LONG(&enum_case_MICRO_value, 181);
	zend_enum_add_case_cstr(class_entry, "MICRO", &enum_case_MICRO_value);

	zval enum_case_PARAGRAPH_value;
	ZVAL_LONG(&enum_case_PARAGRAPH_value, 182);
	zend_enum_add_case_cstr(class_entry, "PARAGRAPH", &enum_case_PARAGRAPH_value);

	zval enum_case_PERIODCENTERED_value;
	ZVAL_LONG(&enum_case_PERIODCENTERED_value, 183);
	zend_enum_add_case_cstr(class_entry, "PERIODCENTERED", &enum_case_PERIODCENTERED_value);

	zval enum_case_CEDILLA_value;
	ZVAL_LONG(&enum_case_CEDILLA_value, 184);
	zend_enum_add_case_cstr(class_entry, "CEDILLA", &enum_case_CEDILLA_value);

	zval enum_case_ONESUPERIOR_value;
	ZVAL_LONG(&enum_case_ONESUPERIOR_value, 185);
	zend_enum_add_case_cstr(class_entry, "ONESUPERIOR", &enum_case_ONESUPERIOR_value);

	zval enum_case_MASCULINE_value;
	ZVAL_LONG(&enum_case_MASCULINE_value, 186);
	zend_enum_add_case_cstr(class_entry, "MASCULINE", &enum_case_MASCULINE_value);

	zval enum_case_GUILLEMOTRIGHT_value;
	ZVAL_LONG(&enum_case_GUILLEMOTRIGHT_value, 187);
	zend_enum_add_case_cstr(class_entry, "GUILLEMOTRIGHT", &enum_case_GUILLEMOTRIGHT_value);

	zval enum_case_ONEQUARTER_value;
	ZVAL_LONG(&enum_case_ONEQUARTER_value, 188);
	zend_enum_add_case_cstr(class_entry, "ONEQUARTER", &enum_case_ONEQUARTER_value);

	zval enum_case_ONEHALF_value;
	ZVAL_LONG(&enum_case_ONEHALF_value, 189);
	zend_enum_add_case_cstr(class_entry, "ONEHALF", &enum_case_ONEHALF_value);

	zval enum_case_THREEQUARTERS_value;
	ZVAL_LONG(&enum_case_THREEQUARTERS_value, 190);
	zend_enum_add_case_cstr(class_entry, "THREEQUARTERS", &enum_case_THREEQUARTERS_value);

	zval enum_case_QUESTIONDOWN_value;
	ZVAL_LONG(&enum_case_QUESTIONDOWN_value, 191);
	zend_enum_add_case_cstr(class_entry, "QUESTIONDOWN", &enum_case_QUESTIONDOWN_value);

	zval enum_case_AGRAVE_value;
	ZVAL_LONG(&enum_case_AGRAVE_value, 192);
	zend_enum_add_case_cstr(class_entry, "AGRAVE", &enum_case_AGRAVE_value);

	zval enum_case_AACUTE_value;
	ZVAL_LONG(&enum_case_AACUTE_value, 193);
	zend_enum_add_case_cstr(class_entry, "AACUTE", &enum_case_AACUTE_value);

	zval enum_case_ACIRCUMFLEX_value;
	ZVAL_LONG(&enum_case_ACIRCUMFLEX_value, 194);
	zend_enum_add_case_cstr(class_entry, "ACIRCUMFLEX", &enum_case_ACIRCUMFLEX_value);

	zval enum_case_ATILDE_value;
	ZVAL_LONG(&enum_case_ATILDE_value, 195);
	zend_enum_add_case_cstr(class_entry, "ATILDE", &enum_case_ATILDE_value);

	zval enum_case_ADIAERESIS_value;
	ZVAL_LONG(&enum_case_ADIAERESIS_value, 196);
	zend_enum_add_case_cstr(class_entry, "ADIAERESIS", &enum_case_ADIAERESIS_value);

	zval enum_case_ARING_value;
	ZVAL_LONG(&enum_case_ARING_value, 197);
	zend_enum_add_case_cstr(class_entry, "ARING", &enum_case_ARING_value);

	zval enum_case_AE_value;
	ZVAL_LONG(&enum_case_AE_value, 198);
	zend_enum_add_case_cstr(class_entry, "AE", &enum_case_AE_value);

	zval enum_case_CCEDILLA_value;
	ZVAL_LONG(&enum_case_CCEDILLA_value, 199);
	zend_enum_add_case_cstr(class_entry, "CCEDILLA", &enum_case_CCEDILLA_value);

	zval enum_case_EGRAVE_value;
	ZVAL_LONG(&enum_case_EGRAVE_value, 200);
	zend_enum_add_case_cstr(class_entry, "EGRAVE", &enum_case_EGRAVE_value);

	zval enum_case_EACUTE_value;
	ZVAL_LONG(&enum_case_EACUTE_value, 201);
	zend_enum_add_case_cstr(class_entry, "EACUTE", &enum_case_EACUTE_value);

	zval enum_case_ECIRCUMFLEX_value;
	ZVAL_LONG(&enum_case_ECIRCUMFLEX_value, 202);
	zend_enum_add_case_cstr(class_entry, "ECIRCUMFLEX", &enum_case_ECIRCUMFLEX_value);

	zval enum_case_EDIAERESIS_value;
	ZVAL_LONG(&enum_case_EDIAERESIS_value, 203);
	zend_enum_add_case_cstr(class_entry, "EDIAERESIS", &enum_case_EDIAERESIS_value);

	zval enum_case_IGRAVE_value;
	ZVAL_LONG(&enum_case_IGRAVE_value, 204);
	zend_enum_add_case_cstr(class_entry, "IGRAVE", &enum_case_IGRAVE_value);

	zval enum_case_IACUTE_value;
	ZVAL_LONG(&enum_case_IACUTE_value, 205);
	zend_enum_add_case_cstr(class_entry, "IACUTE", &enum_case_IACUTE_value);

	zval enum_case_ICIRCUMFLEX_value;
	ZVAL_LONG(&enum_case_ICIRCUMFLEX_value, 206);
	zend_enum_add_case_cstr(class_entry, "ICIRCUMFLEX", &enum_case_ICIRCUMFLEX_value);

	zval enum_case_IDIAERESIS_value;
	ZVAL_LONG(&enum_case_IDIAERESIS_value, 207);
	zend_enum_add_case_cstr(class_entry, "IDIAERESIS", &enum_case_IDIAERESIS_value);

	zval enum_case_ETH_value;
	ZVAL_LONG(&enum_case_ETH_value, 208);
	zend_enum_add_case_cstr(class_entry, "ETH", &enum_case_ETH_value);

	zval enum_case_NTILDE_value;
	ZVAL_LONG(&enum_case_NTILDE_value, 209);
	zend_enum_add_case_cstr(class_entry, "NTILDE", &enum_case_NTILDE_value);

	zval enum_case_OGRAVE_value;
	ZVAL_LONG(&enum_case_OGRAVE_value, 210);
	zend_enum_add_case_cstr(class_entry, "OGRAVE", &enum_case_OGRAVE_value);

	zval enum_case_OACUTE_value;
	ZVAL_LONG(&enum_case_OACUTE_value, 211);
	zend_enum_add_case_cstr(class_entry, "OACUTE", &enum_case_OACUTE_value);

	zval enum_case_OCIRCUMFLEX_value;
	ZVAL_LONG(&enum_case_OCIRCUMFLEX_value, 212);
	zend_enum_add_case_cstr(class_entry, "OCIRCUMFLEX", &enum_case_OCIRCUMFLEX_value);

	zval enum_case_OTILDE_value;
	ZVAL_LONG(&enum_case_OTILDE_value, 213);
	zend_enum_add_case_cstr(class_entry, "OTILDE", &enum_case_OTILDE_value);

	zval enum_case_ODIAERESIS_value;
	ZVAL_LONG(&enum_case_ODIAERESIS_value, 214);
	zend_enum_add_case_cstr(class_entry, "ODIAERESIS", &enum_case_ODIAERESIS_value);

	zval enum_case_MULTIPLY_value;
	ZVAL_LONG(&enum_case_MULTIPLY_value, 215);
	zend_enum_add_case_cstr(class_entry, "MULTIPLY", &enum_case_MULTIPLY_value);

	zval enum_case_OOBLIQUE_value;
	ZVAL_LONG(&enum_case_OOBLIQUE_value, 216);
	zend_enum_add_case_cstr(class_entry, "OOBLIQUE", &enum_case_OOBLIQUE_value);

	zval enum_case_UGRAVE_value;
	ZVAL_LONG(&enum_case_UGRAVE_value, 217);
	zend_enum_add_case_cstr(class_entry, "UGRAVE", &enum_case_UGRAVE_value);

	zval enum_case_UACUTE_value;
	ZVAL_LONG(&enum_case_UACUTE_value, 218);
	zend_enum_add_case_cstr(class_entry, "UACUTE", &enum_case_UACUTE_value);

	zval enum_case_UCIRCUMFLEX_value;
	ZVAL_LONG(&enum_case_UCIRCUMFLEX_value, 219);
	zend_enum_add_case_cstr(class_entry, "UCIRCUMFLEX", &enum_case_UCIRCUMFLEX_value);

	zval enum_case_UDIAERESIS_value;
	ZVAL_LONG(&enum_case_UDIAERESIS_value, 220);
	zend_enum_add_case_cstr(class_entry, "UDIAERESIS", &enum_case_UDIAERESIS_value);

	zval enum_case_YACUTE_value;
	ZVAL_LONG(&enum_case_YACUTE_value, 221);
	zend_enum_add_case_cstr(class_entry, "YACUTE", &enum_case_YACUTE_value);

	zval enum_case_THORN_value;
	ZVAL_LONG(&enum_case_THORN_value, 222);
	zend_enum_add_case_cstr(class_entry, "THORN", &enum_case_THORN_value);

	zval enum_case_SSHARP_value;
	ZVAL_LONG(&enum_case_SSHARP_value, 223);
	zend_enum_add_case_cstr(class_entry, "SSHARP", &enum_case_SSHARP_value);

	zval enum_case_DIVISION_value;
	ZVAL_LONG(&enum_case_DIVISION_value, 247);
	zend_enum_add_case_cstr(class_entry, "DIVISION", &enum_case_DIVISION_value);

	zval enum_case_YDIAERESIS_value;
	ZVAL_LONG(&enum_case_YDIAERESIS_value, 255);
	zend_enum_add_case_cstr(class_entry, "YDIAERESIS", &enum_case_YDIAERESIS_value);

	zval enum_case_ESCAPE_value;
	ZVAL_LONG(&enum_case_ESCAPE_value, 16777216);
	zend_enum_add_case_cstr(class_entry, "ESCAPE", &enum_case_ESCAPE_value);

	zval enum_case_TAB_value;
	ZVAL_LONG(&enum_case_TAB_value, 16777217);
	zend_enum_add_case_cstr(class_entry, "TAB", &enum_case_TAB_value);

	zval enum_case_BACKTAB_value;
	ZVAL_LONG(&enum_case_BACKTAB_value, 16777218);
	zend_enum_add_case_cstr(class_entry, "BACKTAB", &enum_case_BACKTAB_value);

	zval enum_case_BACKSPACE_value;
	ZVAL_LONG(&enum_case_BACKSPACE_value, 16777219);
	zend_enum_add_case_cstr(class_entry, "BACKSPACE", &enum_case_BACKSPACE_value);

	zval enum_case_RETURN_value;
	ZVAL_LONG(&enum_case_RETURN_value, 16777220);
	zend_enum_add_case_cstr(class_entry, "RETURN", &enum_case_RETURN_value);

	zval enum_case_ENTER_value;
	ZVAL_LONG(&enum_case_ENTER_value, 16777221);
	zend_enum_add_case_cstr(class_entry, "ENTER", &enum_case_ENTER_value);

	zval enum_case_INSERT_value;
	ZVAL_LONG(&enum_case_INSERT_value, 16777222);
	zend_enum_add_case_cstr(class_entry, "INSERT", &enum_case_INSERT_value);

	zval enum_case_DELETE_value;
	ZVAL_LONG(&enum_case_DELETE_value, 16777223);
	zend_enum_add_case_cstr(class_entry, "DELETE", &enum_case_DELETE_value);

	zval enum_case_PAUSE_value;
	ZVAL_LONG(&enum_case_PAUSE_value, 16777224);
	zend_enum_add_case_cstr(class_entry, "PAUSE", &enum_case_PAUSE_value);

	zval enum_case_PRINT_value;
	ZVAL_LONG(&enum_case_PRINT_value, 16777225);
	zend_enum_add_case_cstr(class_entry, "PRINT", &enum_case_PRINT_value);

	zval enum_case_SYS_REQ_value;
	ZVAL_LONG(&enum_case_SYS_REQ_value, 16777226);
	zend_enum_add_case_cstr(class_entry, "SYS_REQ", &enum_case_SYS_REQ_value);

	zval enum_case_CLEAR_value;
	ZVAL_LONG(&enum_case_CLEAR_value, 16777227);
	zend_enum_add_case_cstr(class_entry, "CLEAR", &enum_case_CLEAR_value);

	zval enum_case_HOME_value;
	ZVAL_LONG(&enum_case_HOME_value, 16777232);
	zend_enum_add_case_cstr(class_entry, "HOME", &enum_case_HOME_value);

	zval enum_case_END_value;
	ZVAL_LONG(&enum_case_END_value, 16777233);
	zend_enum_add_case_cstr(class_entry, "END", &enum_case_END_value);

	zval enum_case_LEFT_value;
	ZVAL_LONG(&enum_case_LEFT_value, 16777234);
	zend_enum_add_case_cstr(class_entry, "LEFT", &enum_case_LEFT_value);

	zval enum_case_UP_value;
	ZVAL_LONG(&enum_case_UP_value, 16777235);
	zend_enum_add_case_cstr(class_entry, "UP", &enum_case_UP_value);

	zval enum_case_RIGHT_value;
	ZVAL_LONG(&enum_case_RIGHT_value, 16777236);
	zend_enum_add_case_cstr(class_entry, "RIGHT", &enum_case_RIGHT_value);

	zval enum_case_DOWN_value;
	ZVAL_LONG(&enum_case_DOWN_value, 16777237);
	zend_enum_add_case_cstr(class_entry, "DOWN", &enum_case_DOWN_value);

	zval enum_case_PAGE_UP_value;
	ZVAL_LONG(&enum_case_PAGE_UP_value, 16777238);
	zend_enum_add_case_cstr(class_entry, "PAGE_UP", &enum_case_PAGE_UP_value);

	zval enum_case_PAGE_DOWN_value;
	ZVAL_LONG(&enum_case_PAGE_DOWN_value, 16777239);
	zend_enum_add_case_cstr(class_entry, "PAGE_DOWN", &enum_case_PAGE_DOWN_value);

	zval enum_case_SHIFT_value;
	ZVAL_LONG(&enum_case_SHIFT_value, 16777248);
	zend_enum_add_case_cstr(class_entry, "SHIFT", &enum_case_SHIFT_value);

	zval enum_case_CONTROL_value;
	ZVAL_LONG(&enum_case_CONTROL_value, 16777249);
	zend_enum_add_case_cstr(class_entry, "CONTROL", &enum_case_CONTROL_value);

	zval enum_case_META_value;
	ZVAL_LONG(&enum_case_META_value, 16777250);
	zend_enum_add_case_cstr(class_entry, "META", &enum_case_META_value);

	zval enum_case_ALT_value;
	ZVAL_LONG(&enum_case_ALT_value, 16777251);
	zend_enum_add_case_cstr(class_entry, "ALT", &enum_case_ALT_value);

	zval enum_case_CAPS_LOCK_value;
	ZVAL_LONG(&enum_case_CAPS_LOCK_value, 16777252);
	zend_enum_add_case_cstr(class_entry, "CAPS_LOCK", &enum_case_CAPS_LOCK_value);

	zval enum_case_NUM_LOCK_value;
	ZVAL_LONG(&enum_case_NUM_LOCK_value, 16777253);
	zend_enum_add_case_cstr(class_entry, "NUM_LOCK", &enum_case_NUM_LOCK_value);

	zval enum_case_SCROLL_LOCK_value;
	ZVAL_LONG(&enum_case_SCROLL_LOCK_value, 16777254);
	zend_enum_add_case_cstr(class_entry, "SCROLL_LOCK", &enum_case_SCROLL_LOCK_value);

	zval enum_case_F1_value;
	ZVAL_LONG(&enum_case_F1_value, 16777264);
	zend_enum_add_case_cstr(class_entry, "F1", &enum_case_F1_value);

	zval enum_case_F2_value;
	ZVAL_LONG(&enum_case_F2_value, 16777265);
	zend_enum_add_case_cstr(class_entry, "F2", &enum_case_F2_value);

	zval enum_case_F3_value;
	ZVAL_LONG(&enum_case_F3_value, 16777266);
	zend_enum_add_case_cstr(class_entry, "F3", &enum_case_F3_value);

	zval enum_case_F4_value;
	ZVAL_LONG(&enum_case_F4_value, 16777267);
	zend_enum_add_case_cstr(class_entry, "F4", &enum_case_F4_value);

	zval enum_case_F5_value;
	ZVAL_LONG(&enum_case_F5_value, 16777268);
	zend_enum_add_case_cstr(class_entry, "F5", &enum_case_F5_value);

	zval enum_case_F6_value;
	ZVAL_LONG(&enum_case_F6_value, 16777269);
	zend_enum_add_case_cstr(class_entry, "F6", &enum_case_F6_value);

	zval enum_case_F7_value;
	ZVAL_LONG(&enum_case_F7_value, 16777270);
	zend_enum_add_case_cstr(class_entry, "F7", &enum_case_F7_value);

	zval enum_case_F8_value;
	ZVAL_LONG(&enum_case_F8_value, 16777271);
	zend_enum_add_case_cstr(class_entry, "F8", &enum_case_F8_value);

	zval enum_case_F9_value;
	ZVAL_LONG(&enum_case_F9_value, 16777272);
	zend_enum_add_case_cstr(class_entry, "F9", &enum_case_F9_value);

	zval enum_case_F10_value;
	ZVAL_LONG(&enum_case_F10_value, 16777273);
	zend_enum_add_case_cstr(class_entry, "F10", &enum_case_F10_value);

	zval enum_case_F11_value;
	ZVAL_LONG(&enum_case_F11_value, 16777274);
	zend_enum_add_case_cstr(class_entry, "F11", &enum_case_F11_value);

	zval enum_case_F12_value;
	ZVAL_LONG(&enum_case_F12_value, 16777275);
	zend_enum_add_case_cstr(class_entry, "F12", &enum_case_F12_value);

	zval enum_case_F13_value;
	ZVAL_LONG(&enum_case_F13_value, 16777276);
	zend_enum_add_case_cstr(class_entry, "F13", &enum_case_F13_value);

	zval enum_case_F14_value;
	ZVAL_LONG(&enum_case_F14_value, 16777277);
	zend_enum_add_case_cstr(class_entry, "F14", &enum_case_F14_value);

	zval enum_case_F15_value;
	ZVAL_LONG(&enum_case_F15_value, 16777278);
	zend_enum_add_case_cstr(class_entry, "F15", &enum_case_F15_value);

	zval enum_case_F16_value;
	ZVAL_LONG(&enum_case_F16_value, 16777279);
	zend_enum_add_case_cstr(class_entry, "F16", &enum_case_F16_value);

	zval enum_case_F17_value;
	ZVAL_LONG(&enum_case_F17_value, 16777280);
	zend_enum_add_case_cstr(class_entry, "F17", &enum_case_F17_value);

	zval enum_case_F18_value;
	ZVAL_LONG(&enum_case_F18_value, 16777281);
	zend_enum_add_case_cstr(class_entry, "F18", &enum_case_F18_value);

	zval enum_case_F19_value;
	ZVAL_LONG(&enum_case_F19_value, 16777282);
	zend_enum_add_case_cstr(class_entry, "F19", &enum_case_F19_value);

	zval enum_case_F20_value;
	ZVAL_LONG(&enum_case_F20_value, 16777283);
	zend_enum_add_case_cstr(class_entry, "F20", &enum_case_F20_value);

	zval enum_case_F21_value;
	ZVAL_LONG(&enum_case_F21_value, 16777284);
	zend_enum_add_case_cstr(class_entry, "F21", &enum_case_F21_value);

	zval enum_case_F22_value;
	ZVAL_LONG(&enum_case_F22_value, 16777285);
	zend_enum_add_case_cstr(class_entry, "F22", &enum_case_F22_value);

	zval enum_case_F23_value;
	ZVAL_LONG(&enum_case_F23_value, 16777286);
	zend_enum_add_case_cstr(class_entry, "F23", &enum_case_F23_value);

	zval enum_case_F24_value;
	ZVAL_LONG(&enum_case_F24_value, 16777287);
	zend_enum_add_case_cstr(class_entry, "F24", &enum_case_F24_value);

	zval enum_case_F25_value;
	ZVAL_LONG(&enum_case_F25_value, 16777288);
	zend_enum_add_case_cstr(class_entry, "F25", &enum_case_F25_value);

	zval enum_case_F26_value;
	ZVAL_LONG(&enum_case_F26_value, 16777289);
	zend_enum_add_case_cstr(class_entry, "F26", &enum_case_F26_value);

	zval enum_case_F27_value;
	ZVAL_LONG(&enum_case_F27_value, 16777290);
	zend_enum_add_case_cstr(class_entry, "F27", &enum_case_F27_value);

	zval enum_case_F28_value;
	ZVAL_LONG(&enum_case_F28_value, 16777291);
	zend_enum_add_case_cstr(class_entry, "F28", &enum_case_F28_value);

	zval enum_case_F29_value;
	ZVAL_LONG(&enum_case_F29_value, 16777292);
	zend_enum_add_case_cstr(class_entry, "F29", &enum_case_F29_value);

	zval enum_case_F30_value;
	ZVAL_LONG(&enum_case_F30_value, 16777293);
	zend_enum_add_case_cstr(class_entry, "F30", &enum_case_F30_value);

	zval enum_case_F31_value;
	ZVAL_LONG(&enum_case_F31_value, 16777294);
	zend_enum_add_case_cstr(class_entry, "F31", &enum_case_F31_value);

	zval enum_case_F32_value;
	ZVAL_LONG(&enum_case_F32_value, 16777295);
	zend_enum_add_case_cstr(class_entry, "F32", &enum_case_F32_value);

	zval enum_case_F33_value;
	ZVAL_LONG(&enum_case_F33_value, 16777296);
	zend_enum_add_case_cstr(class_entry, "F33", &enum_case_F33_value);

	zval enum_case_F34_value;
	ZVAL_LONG(&enum_case_F34_value, 16777297);
	zend_enum_add_case_cstr(class_entry, "F34", &enum_case_F34_value);

	zval enum_case_F35_value;
	ZVAL_LONG(&enum_case_F35_value, 16777298);
	zend_enum_add_case_cstr(class_entry, "F35", &enum_case_F35_value);

	zval enum_case_SUPER_L_value;
	ZVAL_LONG(&enum_case_SUPER_L_value, 16777299);
	zend_enum_add_case_cstr(class_entry, "SUPER_L", &enum_case_SUPER_L_value);

	zval enum_case_SUPER_R_value;
	ZVAL_LONG(&enum_case_SUPER_R_value, 16777300);
	zend_enum_add_case_cstr(class_entry, "SUPER_R", &enum_case_SUPER_R_value);

	zval enum_case_MENU_value;
	ZVAL_LONG(&enum_case_MENU_value, 16777301);
	zend_enum_add_case_cstr(class_entry, "MENU", &enum_case_MENU_value);

	zval enum_case_HYPER_L_value;
	ZVAL_LONG(&enum_case_HYPER_L_value, 16777302);
	zend_enum_add_case_cstr(class_entry, "HYPER_L", &enum_case_HYPER_L_value);

	zval enum_case_HYPER_R_value;
	ZVAL_LONG(&enum_case_HYPER_R_value, 16777303);
	zend_enum_add_case_cstr(class_entry, "HYPER_R", &enum_case_HYPER_R_value);

	zval enum_case_HELP_value;
	ZVAL_LONG(&enum_case_HELP_value, 16777304);
	zend_enum_add_case_cstr(class_entry, "HELP", &enum_case_HELP_value);

	zval enum_case_DIRECTION_L_value;
	ZVAL_LONG(&enum_case_DIRECTION_L_value, 16777305);
	zend_enum_add_case_cstr(class_entry, "DIRECTION_L", &enum_case_DIRECTION_L_value);

	zval enum_case_DIRECTION_R_value;
	ZVAL_LONG(&enum_case_DIRECTION_R_value, 16777312);
	zend_enum_add_case_cstr(class_entry, "DIRECTION_R", &enum_case_DIRECTION_R_value);

	zval enum_case_ALT_GR_value;
	ZVAL_LONG(&enum_case_ALT_GR_value, 16781571);
	zend_enum_add_case_cstr(class_entry, "ALT_GR", &enum_case_ALT_GR_value);

	zval enum_case_MULTI_KEY_value;
	ZVAL_LONG(&enum_case_MULTI_KEY_value, 16781600);
	zend_enum_add_case_cstr(class_entry, "MULTI_KEY", &enum_case_MULTI_KEY_value);

	zval enum_case_CODEINPUT_value;
	ZVAL_LONG(&enum_case_CODEINPUT_value, 16781623);
	zend_enum_add_case_cstr(class_entry, "CODEINPUT", &enum_case_CODEINPUT_value);

	zval enum_case_SINGLE_CANDIDATE_value;
	ZVAL_LONG(&enum_case_SINGLE_CANDIDATE_value, 16781628);
	zend_enum_add_case_cstr(class_entry, "SINGLE_CANDIDATE", &enum_case_SINGLE_CANDIDATE_value);

	zval enum_case_MULTIPLE_CANDIDATE_value;
	ZVAL_LONG(&enum_case_MULTIPLE_CANDIDATE_value, 16781629);
	zend_enum_add_case_cstr(class_entry, "MULTIPLE_CANDIDATE", &enum_case_MULTIPLE_CANDIDATE_value);

	zval enum_case_PREVIOUS_CANDIDATE_value;
	ZVAL_LONG(&enum_case_PREVIOUS_CANDIDATE_value, 16781630);
	zend_enum_add_case_cstr(class_entry, "PREVIOUS_CANDIDATE", &enum_case_PREVIOUS_CANDIDATE_value);

	zval enum_case_MODE_SWITCH_value;
	ZVAL_LONG(&enum_case_MODE_SWITCH_value, 16781694);
	zend_enum_add_case_cstr(class_entry, "MODE_SWITCH", &enum_case_MODE_SWITCH_value);

	zval enum_case_KANJI_value;
	ZVAL_LONG(&enum_case_KANJI_value, 16781601);
	zend_enum_add_case_cstr(class_entry, "KANJI", &enum_case_KANJI_value);

	zval enum_case_MUHENKAN_value;
	ZVAL_LONG(&enum_case_MUHENKAN_value, 16781602);
	zend_enum_add_case_cstr(class_entry, "MUHENKAN", &enum_case_MUHENKAN_value);

	zval enum_case_HENKAN_value;
	ZVAL_LONG(&enum_case_HENKAN_value, 16781603);
	zend_enum_add_case_cstr(class_entry, "HENKAN", &enum_case_HENKAN_value);

	zval enum_case_ROMAJI_value;
	ZVAL_LONG(&enum_case_ROMAJI_value, 16781604);
	zend_enum_add_case_cstr(class_entry, "ROMAJI", &enum_case_ROMAJI_value);

	zval enum_case_HIRAGANA_value;
	ZVAL_LONG(&enum_case_HIRAGANA_value, 16781605);
	zend_enum_add_case_cstr(class_entry, "HIRAGANA", &enum_case_HIRAGANA_value);

	zval enum_case_KATAKANA_value;
	ZVAL_LONG(&enum_case_KATAKANA_value, 16781606);
	zend_enum_add_case_cstr(class_entry, "KATAKANA", &enum_case_KATAKANA_value);

	zval enum_case_HIRAGANA_KATAKANA_value;
	ZVAL_LONG(&enum_case_HIRAGANA_KATAKANA_value, 16781607);
	zend_enum_add_case_cstr(class_entry, "HIRAGANA_KATAKANA", &enum_case_HIRAGANA_KATAKANA_value);

	zval enum_case_ZENKAKU_value;
	ZVAL_LONG(&enum_case_ZENKAKU_value, 16781608);
	zend_enum_add_case_cstr(class_entry, "ZENKAKU", &enum_case_ZENKAKU_value);

	zval enum_case_HANKAKU_value;
	ZVAL_LONG(&enum_case_HANKAKU_value, 16781609);
	zend_enum_add_case_cstr(class_entry, "HANKAKU", &enum_case_HANKAKU_value);

	zval enum_case_ZENKAKU_HANKAKU_value;
	ZVAL_LONG(&enum_case_ZENKAKU_HANKAKU_value, 16781610);
	zend_enum_add_case_cstr(class_entry, "ZENKAKU_HANKAKU", &enum_case_ZENKAKU_HANKAKU_value);

	zval enum_case_TOUROKU_value;
	ZVAL_LONG(&enum_case_TOUROKU_value, 16781611);
	zend_enum_add_case_cstr(class_entry, "TOUROKU", &enum_case_TOUROKU_value);

	zval enum_case_MASSYO_value;
	ZVAL_LONG(&enum_case_MASSYO_value, 16781612);
	zend_enum_add_case_cstr(class_entry, "MASSYO", &enum_case_MASSYO_value);

	zval enum_case_KANA_LOCK_value;
	ZVAL_LONG(&enum_case_KANA_LOCK_value, 16781613);
	zend_enum_add_case_cstr(class_entry, "KANA_LOCK", &enum_case_KANA_LOCK_value);

	zval enum_case_KANA_SHIFT_value;
	ZVAL_LONG(&enum_case_KANA_SHIFT_value, 16781614);
	zend_enum_add_case_cstr(class_entry, "KANA_SHIFT", &enum_case_KANA_SHIFT_value);

	zval enum_case_EISU_SHIFT_value;
	ZVAL_LONG(&enum_case_EISU_SHIFT_value, 16781615);
	zend_enum_add_case_cstr(class_entry, "EISU_SHIFT", &enum_case_EISU_SHIFT_value);

	zval enum_case_EISU_TOGGLE_value;
	ZVAL_LONG(&enum_case_EISU_TOGGLE_value, 16781616);
	zend_enum_add_case_cstr(class_entry, "EISU_TOGGLE", &enum_case_EISU_TOGGLE_value);

	zval enum_case_HANGUL_value;
	ZVAL_LONG(&enum_case_HANGUL_value, 16781617);
	zend_enum_add_case_cstr(class_entry, "HANGUL", &enum_case_HANGUL_value);

	zval enum_case_HANGUL_START_value;
	ZVAL_LONG(&enum_case_HANGUL_START_value, 16781618);
	zend_enum_add_case_cstr(class_entry, "HANGUL_START", &enum_case_HANGUL_START_value);

	zval enum_case_HANGUL_END_value;
	ZVAL_LONG(&enum_case_HANGUL_END_value, 16781619);
	zend_enum_add_case_cstr(class_entry, "HANGUL_END", &enum_case_HANGUL_END_value);

	zval enum_case_HANGUL_HANJA_value;
	ZVAL_LONG(&enum_case_HANGUL_HANJA_value, 16781620);
	zend_enum_add_case_cstr(class_entry, "HANGUL_HANJA", &enum_case_HANGUL_HANJA_value);

	zval enum_case_HANGUL_JAMO_value;
	ZVAL_LONG(&enum_case_HANGUL_JAMO_value, 16781621);
	zend_enum_add_case_cstr(class_entry, "HANGUL_JAMO", &enum_case_HANGUL_JAMO_value);

	zval enum_case_HANGUL_ROMAJA_value;
	ZVAL_LONG(&enum_case_HANGUL_ROMAJA_value, 16781622);
	zend_enum_add_case_cstr(class_entry, "HANGUL_ROMAJA", &enum_case_HANGUL_ROMAJA_value);

	zval enum_case_HANGUL_JEONJA_value;
	ZVAL_LONG(&enum_case_HANGUL_JEONJA_value, 16781624);
	zend_enum_add_case_cstr(class_entry, "HANGUL_JEONJA", &enum_case_HANGUL_JEONJA_value);

	zval enum_case_HANGUL_BANJA_value;
	ZVAL_LONG(&enum_case_HANGUL_BANJA_value, 16781625);
	zend_enum_add_case_cstr(class_entry, "HANGUL_BANJA", &enum_case_HANGUL_BANJA_value);

	zval enum_case_HANGUL_PRE_HANJA_value;
	ZVAL_LONG(&enum_case_HANGUL_PRE_HANJA_value, 16781626);
	zend_enum_add_case_cstr(class_entry, "HANGUL_PRE_HANJA", &enum_case_HANGUL_PRE_HANJA_value);

	zval enum_case_HANGUL_POST_HANJA_value;
	ZVAL_LONG(&enum_case_HANGUL_POST_HANJA_value, 16781627);
	zend_enum_add_case_cstr(class_entry, "HANGUL_POST_HANJA", &enum_case_HANGUL_POST_HANJA_value);

	zval enum_case_HANGUL_SPECIAL_value;
	ZVAL_LONG(&enum_case_HANGUL_SPECIAL_value, 16781631);
	zend_enum_add_case_cstr(class_entry, "HANGUL_SPECIAL", &enum_case_HANGUL_SPECIAL_value);

	zval enum_case_DEAD_GRAVE_value;
	ZVAL_LONG(&enum_case_DEAD_GRAVE_value, 16781904);
	zend_enum_add_case_cstr(class_entry, "DEAD_GRAVE", &enum_case_DEAD_GRAVE_value);

	zval enum_case_DEAD_ACUTE_value;
	ZVAL_LONG(&enum_case_DEAD_ACUTE_value, 16781905);
	zend_enum_add_case_cstr(class_entry, "DEAD_ACUTE", &enum_case_DEAD_ACUTE_value);

	zval enum_case_DEAD_CIRCUMFLEX_value;
	ZVAL_LONG(&enum_case_DEAD_CIRCUMFLEX_value, 16781906);
	zend_enum_add_case_cstr(class_entry, "DEAD_CIRCUMFLEX", &enum_case_DEAD_CIRCUMFLEX_value);

	zval enum_case_DEAD_TILDE_value;
	ZVAL_LONG(&enum_case_DEAD_TILDE_value, 16781907);
	zend_enum_add_case_cstr(class_entry, "DEAD_TILDE", &enum_case_DEAD_TILDE_value);

	zval enum_case_DEAD_MACRON_value;
	ZVAL_LONG(&enum_case_DEAD_MACRON_value, 16781908);
	zend_enum_add_case_cstr(class_entry, "DEAD_MACRON", &enum_case_DEAD_MACRON_value);

	zval enum_case_DEAD_BREVE_value;
	ZVAL_LONG(&enum_case_DEAD_BREVE_value, 16781909);
	zend_enum_add_case_cstr(class_entry, "DEAD_BREVE", &enum_case_DEAD_BREVE_value);

	zval enum_case_DEAD_ABOVEDOT_value;
	ZVAL_LONG(&enum_case_DEAD_ABOVEDOT_value, 16781910);
	zend_enum_add_case_cstr(class_entry, "DEAD_ABOVEDOT", &enum_case_DEAD_ABOVEDOT_value);

	zval enum_case_DEAD_DIAERESIS_value;
	ZVAL_LONG(&enum_case_DEAD_DIAERESIS_value, 16781911);
	zend_enum_add_case_cstr(class_entry, "DEAD_DIAERESIS", &enum_case_DEAD_DIAERESIS_value);

	zval enum_case_DEAD_ABOVERING_value;
	ZVAL_LONG(&enum_case_DEAD_ABOVERING_value, 16781912);
	zend_enum_add_case_cstr(class_entry, "DEAD_ABOVERING", &enum_case_DEAD_ABOVERING_value);

	zval enum_case_DEAD_DOUBLEACUTE_value;
	ZVAL_LONG(&enum_case_DEAD_DOUBLEACUTE_value, 16781913);
	zend_enum_add_case_cstr(class_entry, "DEAD_DOUBLEACUTE", &enum_case_DEAD_DOUBLEACUTE_value);

	zval enum_case_DEAD_CARON_value;
	ZVAL_LONG(&enum_case_DEAD_CARON_value, 16781914);
	zend_enum_add_case_cstr(class_entry, "DEAD_CARON", &enum_case_DEAD_CARON_value);

	zval enum_case_DEAD_CEDILLA_value;
	ZVAL_LONG(&enum_case_DEAD_CEDILLA_value, 16781915);
	zend_enum_add_case_cstr(class_entry, "DEAD_CEDILLA", &enum_case_DEAD_CEDILLA_value);

	zval enum_case_DEAD_OGONEK_value;
	ZVAL_LONG(&enum_case_DEAD_OGONEK_value, 16781916);
	zend_enum_add_case_cstr(class_entry, "DEAD_OGONEK", &enum_case_DEAD_OGONEK_value);

	zval enum_case_DEAD_IOTA_value;
	ZVAL_LONG(&enum_case_DEAD_IOTA_value, 16781917);
	zend_enum_add_case_cstr(class_entry, "DEAD_IOTA", &enum_case_DEAD_IOTA_value);

	zval enum_case_DEAD_VOICED_SOUND_value;
	ZVAL_LONG(&enum_case_DEAD_VOICED_SOUND_value, 16781918);
	zend_enum_add_case_cstr(class_entry, "DEAD_VOICED_SOUND", &enum_case_DEAD_VOICED_SOUND_value);

	zval enum_case_DEAD_SEMIVOICED_SOUND_value;
	ZVAL_LONG(&enum_case_DEAD_SEMIVOICED_SOUND_value, 16781919);
	zend_enum_add_case_cstr(class_entry, "DEAD_SEMIVOICED_SOUND", &enum_case_DEAD_SEMIVOICED_SOUND_value);

	zval enum_case_DEAD_BELOWDOT_value;
	ZVAL_LONG(&enum_case_DEAD_BELOWDOT_value, 16781920);
	zend_enum_add_case_cstr(class_entry, "DEAD_BELOWDOT", &enum_case_DEAD_BELOWDOT_value);

	zval enum_case_DEAD_HOOK_value;
	ZVAL_LONG(&enum_case_DEAD_HOOK_value, 16781921);
	zend_enum_add_case_cstr(class_entry, "DEAD_HOOK", &enum_case_DEAD_HOOK_value);

	zval enum_case_DEAD_HORN_value;
	ZVAL_LONG(&enum_case_DEAD_HORN_value, 16781922);
	zend_enum_add_case_cstr(class_entry, "DEAD_HORN", &enum_case_DEAD_HORN_value);

	zval enum_case_DEAD_STROKE_value;
	ZVAL_LONG(&enum_case_DEAD_STROKE_value, 16781923);
	zend_enum_add_case_cstr(class_entry, "DEAD_STROKE", &enum_case_DEAD_STROKE_value);

	zval enum_case_DEAD_ABOVECOMMA_value;
	ZVAL_LONG(&enum_case_DEAD_ABOVECOMMA_value, 16781924);
	zend_enum_add_case_cstr(class_entry, "DEAD_ABOVECOMMA", &enum_case_DEAD_ABOVECOMMA_value);

	zval enum_case_DEAD_ABOVEREVERSEDCOMMA_value;
	ZVAL_LONG(&enum_case_DEAD_ABOVEREVERSEDCOMMA_value, 16781925);
	zend_enum_add_case_cstr(class_entry, "DEAD_ABOVEREVERSEDCOMMA", &enum_case_DEAD_ABOVEREVERSEDCOMMA_value);

	zval enum_case_DEAD_DOUBLEGRAVE_value;
	ZVAL_LONG(&enum_case_DEAD_DOUBLEGRAVE_value, 16781926);
	zend_enum_add_case_cstr(class_entry, "DEAD_DOUBLEGRAVE", &enum_case_DEAD_DOUBLEGRAVE_value);

	zval enum_case_DEAD_BELOWRING_value;
	ZVAL_LONG(&enum_case_DEAD_BELOWRING_value, 16781927);
	zend_enum_add_case_cstr(class_entry, "DEAD_BELOWRING", &enum_case_DEAD_BELOWRING_value);

	zval enum_case_DEAD_BELOWMACRON_value;
	ZVAL_LONG(&enum_case_DEAD_BELOWMACRON_value, 16781928);
	zend_enum_add_case_cstr(class_entry, "DEAD_BELOWMACRON", &enum_case_DEAD_BELOWMACRON_value);

	zval enum_case_DEAD_BELOWCIRCUMFLEX_value;
	ZVAL_LONG(&enum_case_DEAD_BELOWCIRCUMFLEX_value, 16781929);
	zend_enum_add_case_cstr(class_entry, "DEAD_BELOWCIRCUMFLEX", &enum_case_DEAD_BELOWCIRCUMFLEX_value);

	zval enum_case_DEAD_BELOWTILDE_value;
	ZVAL_LONG(&enum_case_DEAD_BELOWTILDE_value, 16781930);
	zend_enum_add_case_cstr(class_entry, "DEAD_BELOWTILDE", &enum_case_DEAD_BELOWTILDE_value);

	zval enum_case_DEAD_BELOWBREVE_value;
	ZVAL_LONG(&enum_case_DEAD_BELOWBREVE_value, 16781931);
	zend_enum_add_case_cstr(class_entry, "DEAD_BELOWBREVE", &enum_case_DEAD_BELOWBREVE_value);

	zval enum_case_DEAD_BELOWDIAERESIS_value;
	ZVAL_LONG(&enum_case_DEAD_BELOWDIAERESIS_value, 16781932);
	zend_enum_add_case_cstr(class_entry, "DEAD_BELOWDIAERESIS", &enum_case_DEAD_BELOWDIAERESIS_value);

	zval enum_case_DEAD_INVERTEDBREVE_value;
	ZVAL_LONG(&enum_case_DEAD_INVERTEDBREVE_value, 16781933);
	zend_enum_add_case_cstr(class_entry, "DEAD_INVERTEDBREVE", &enum_case_DEAD_INVERTEDBREVE_value);

	zval enum_case_DEAD_BELOWCOMMA_value;
	ZVAL_LONG(&enum_case_DEAD_BELOWCOMMA_value, 16781934);
	zend_enum_add_case_cstr(class_entry, "DEAD_BELOWCOMMA", &enum_case_DEAD_BELOWCOMMA_value);

	zval enum_case_DEAD_CURRENCY_value;
	ZVAL_LONG(&enum_case_DEAD_CURRENCY_value, 16781935);
	zend_enum_add_case_cstr(class_entry, "DEAD_CURRENCY", &enum_case_DEAD_CURRENCY_value);

	zval enum_case_DEAD_a_value;
	ZVAL_LONG(&enum_case_DEAD_a_value, 16781952);
	zend_enum_add_case_cstr(class_entry, "DEAD_a", &enum_case_DEAD_a_value);

	zval enum_case_DEAD_A_value;
	ZVAL_LONG(&enum_case_DEAD_A_value, 16781953);
	zend_enum_add_case_cstr(class_entry, "DEAD_A", &enum_case_DEAD_A_value);

	zval enum_case_DEAD_e_value;
	ZVAL_LONG(&enum_case_DEAD_e_value, 16781954);
	zend_enum_add_case_cstr(class_entry, "DEAD_e", &enum_case_DEAD_e_value);

	zval enum_case_DEAD_E_value;
	ZVAL_LONG(&enum_case_DEAD_E_value, 16781955);
	zend_enum_add_case_cstr(class_entry, "DEAD_E", &enum_case_DEAD_E_value);

	zval enum_case_DEAD_i_value;
	ZVAL_LONG(&enum_case_DEAD_i_value, 16781956);
	zend_enum_add_case_cstr(class_entry, "DEAD_i", &enum_case_DEAD_i_value);

	zval enum_case_DEAD_I_value;
	ZVAL_LONG(&enum_case_DEAD_I_value, 16781957);
	zend_enum_add_case_cstr(class_entry, "DEAD_I", &enum_case_DEAD_I_value);

	zval enum_case_DEAD_o_value;
	ZVAL_LONG(&enum_case_DEAD_o_value, 16781958);
	zend_enum_add_case_cstr(class_entry, "DEAD_o", &enum_case_DEAD_o_value);

	zval enum_case_DEAD_O_value;
	ZVAL_LONG(&enum_case_DEAD_O_value, 16781959);
	zend_enum_add_case_cstr(class_entry, "DEAD_O", &enum_case_DEAD_O_value);

	zval enum_case_DEAD_u_value;
	ZVAL_LONG(&enum_case_DEAD_u_value, 16781960);
	zend_enum_add_case_cstr(class_entry, "DEAD_u", &enum_case_DEAD_u_value);

	zval enum_case_DEAD_U_value;
	ZVAL_LONG(&enum_case_DEAD_U_value, 16781961);
	zend_enum_add_case_cstr(class_entry, "DEAD_U", &enum_case_DEAD_U_value);

	zval enum_case_DEAD_SMALL_SCHWA_value;
	ZVAL_LONG(&enum_case_DEAD_SMALL_SCHWA_value, 16781962);
	zend_enum_add_case_cstr(class_entry, "DEAD_SMALL_SCHWA", &enum_case_DEAD_SMALL_SCHWA_value);

	zval enum_case_DEAD_CAPITAL_SCHWA_value;
	ZVAL_LONG(&enum_case_DEAD_CAPITAL_SCHWA_value, 16781963);
	zend_enum_add_case_cstr(class_entry, "DEAD_CAPITAL_SCHWA", &enum_case_DEAD_CAPITAL_SCHWA_value);

	zval enum_case_DEAD_GREEK_value;
	ZVAL_LONG(&enum_case_DEAD_GREEK_value, 16781964);
	zend_enum_add_case_cstr(class_entry, "DEAD_GREEK", &enum_case_DEAD_GREEK_value);

	zval enum_case_DEAD_LOWLINE_value;
	ZVAL_LONG(&enum_case_DEAD_LOWLINE_value, 16781968);
	zend_enum_add_case_cstr(class_entry, "DEAD_LOWLINE", &enum_case_DEAD_LOWLINE_value);

	zval enum_case_DEAD_ABOVEVERTICALLINE_value;
	ZVAL_LONG(&enum_case_DEAD_ABOVEVERTICALLINE_value, 16781969);
	zend_enum_add_case_cstr(class_entry, "DEAD_ABOVEVERTICALLINE", &enum_case_DEAD_ABOVEVERTICALLINE_value);

	zval enum_case_DEAD_BELOWVERTICALLINE_value;
	ZVAL_LONG(&enum_case_DEAD_BELOWVERTICALLINE_value, 16781970);
	zend_enum_add_case_cstr(class_entry, "DEAD_BELOWVERTICALLINE", &enum_case_DEAD_BELOWVERTICALLINE_value);

	zval enum_case_DEAD_LONGSOLIDUSOVERLAY_value;
	ZVAL_LONG(&enum_case_DEAD_LONGSOLIDUSOVERLAY_value, 16781971);
	zend_enum_add_case_cstr(class_entry, "DEAD_LONGSOLIDUSOVERLAY", &enum_case_DEAD_LONGSOLIDUSOVERLAY_value);

	zval enum_case_BACK_value;
	ZVAL_LONG(&enum_case_BACK_value, 16777313);
	zend_enum_add_case_cstr(class_entry, "BACK", &enum_case_BACK_value);

	zval enum_case_FORWARD_value;
	ZVAL_LONG(&enum_case_FORWARD_value, 16777314);
	zend_enum_add_case_cstr(class_entry, "FORWARD", &enum_case_FORWARD_value);

	zval enum_case_STOP_value;
	ZVAL_LONG(&enum_case_STOP_value, 16777315);
	zend_enum_add_case_cstr(class_entry, "STOP", &enum_case_STOP_value);

	zval enum_case_REFRESH_value;
	ZVAL_LONG(&enum_case_REFRESH_value, 16777316);
	zend_enum_add_case_cstr(class_entry, "REFRESH", &enum_case_REFRESH_value);

	zval enum_case_VOLUME_DOWN_value;
	ZVAL_LONG(&enum_case_VOLUME_DOWN_value, 16777328);
	zend_enum_add_case_cstr(class_entry, "VOLUME_DOWN", &enum_case_VOLUME_DOWN_value);

	zval enum_case_VOLUME_MUTE_value;
	ZVAL_LONG(&enum_case_VOLUME_MUTE_value, 16777329);
	zend_enum_add_case_cstr(class_entry, "VOLUME_MUTE", &enum_case_VOLUME_MUTE_value);

	zval enum_case_VOLUME_UP_value;
	ZVAL_LONG(&enum_case_VOLUME_UP_value, 16777330);
	zend_enum_add_case_cstr(class_entry, "VOLUME_UP", &enum_case_VOLUME_UP_value);

	zval enum_case_BASS_BOOST_value;
	ZVAL_LONG(&enum_case_BASS_BOOST_value, 16777331);
	zend_enum_add_case_cstr(class_entry, "BASS_BOOST", &enum_case_BASS_BOOST_value);

	zval enum_case_BASS_UP_value;
	ZVAL_LONG(&enum_case_BASS_UP_value, 16777332);
	zend_enum_add_case_cstr(class_entry, "BASS_UP", &enum_case_BASS_UP_value);

	zval enum_case_BASS_DOWN_value;
	ZVAL_LONG(&enum_case_BASS_DOWN_value, 16777333);
	zend_enum_add_case_cstr(class_entry, "BASS_DOWN", &enum_case_BASS_DOWN_value);

	zval enum_case_TREBLE_UP_value;
	ZVAL_LONG(&enum_case_TREBLE_UP_value, 16777334);
	zend_enum_add_case_cstr(class_entry, "TREBLE_UP", &enum_case_TREBLE_UP_value);

	zval enum_case_TREBLE_DOWN_value;
	ZVAL_LONG(&enum_case_TREBLE_DOWN_value, 16777335);
	zend_enum_add_case_cstr(class_entry, "TREBLE_DOWN", &enum_case_TREBLE_DOWN_value);

	zval enum_case_MEDIA_PLAY_value;
	ZVAL_LONG(&enum_case_MEDIA_PLAY_value, 16777344);
	zend_enum_add_case_cstr(class_entry, "MEDIA_PLAY", &enum_case_MEDIA_PLAY_value);

	zval enum_case_MEDIA_STOP_value;
	ZVAL_LONG(&enum_case_MEDIA_STOP_value, 16777345);
	zend_enum_add_case_cstr(class_entry, "MEDIA_STOP", &enum_case_MEDIA_STOP_value);

	zval enum_case_MEDIA_PREVIOUS_value;
	ZVAL_LONG(&enum_case_MEDIA_PREVIOUS_value, 16777346);
	zend_enum_add_case_cstr(class_entry, "MEDIA_PREVIOUS", &enum_case_MEDIA_PREVIOUS_value);

	zval enum_case_MEDIA_NEXT_value;
	ZVAL_LONG(&enum_case_MEDIA_NEXT_value, 16777347);
	zend_enum_add_case_cstr(class_entry, "MEDIA_NEXT", &enum_case_MEDIA_NEXT_value);

	zval enum_case_MEDIA_RECORD_value;
	ZVAL_LONG(&enum_case_MEDIA_RECORD_value, 16777348);
	zend_enum_add_case_cstr(class_entry, "MEDIA_RECORD", &enum_case_MEDIA_RECORD_value);

	zval enum_case_MEDIA_PAUSE_value;
	ZVAL_LONG(&enum_case_MEDIA_PAUSE_value, 16777349);
	zend_enum_add_case_cstr(class_entry, "MEDIA_PAUSE", &enum_case_MEDIA_PAUSE_value);

	zval enum_case_MEDIA_TOGGLE_PLAY_PAUSE_value;
	ZVAL_LONG(&enum_case_MEDIA_TOGGLE_PLAY_PAUSE_value, 16777350);
	zend_enum_add_case_cstr(class_entry, "MEDIA_TOGGLE_PLAY_PAUSE", &enum_case_MEDIA_TOGGLE_PLAY_PAUSE_value);

	zval enum_case_HOME_PAGE_value;
	ZVAL_LONG(&enum_case_HOME_PAGE_value, 16777360);
	zend_enum_add_case_cstr(class_entry, "HOME_PAGE", &enum_case_HOME_PAGE_value);

	zval enum_case_FAVORITES_value;
	ZVAL_LONG(&enum_case_FAVORITES_value, 16777361);
	zend_enum_add_case_cstr(class_entry, "FAVORITES", &enum_case_FAVORITES_value);

	zval enum_case_SEARCH_value;
	ZVAL_LONG(&enum_case_SEARCH_value, 16777362);
	zend_enum_add_case_cstr(class_entry, "SEARCH", &enum_case_SEARCH_value);

	zval enum_case_STANDBY_value;
	ZVAL_LONG(&enum_case_STANDBY_value, 16777363);
	zend_enum_add_case_cstr(class_entry, "STANDBY", &enum_case_STANDBY_value);

	zval enum_case_OPEN_URL_value;
	ZVAL_LONG(&enum_case_OPEN_URL_value, 16777364);
	zend_enum_add_case_cstr(class_entry, "OPEN_URL", &enum_case_OPEN_URL_value);

	zval enum_case_LAUNCH_MAIL_value;
	ZVAL_LONG(&enum_case_LAUNCH_MAIL_value, 16777376);
	zend_enum_add_case_cstr(class_entry, "LAUNCH_MAIL", &enum_case_LAUNCH_MAIL_value);

	zval enum_case_LAUNCH_MEDIA_value;
	ZVAL_LONG(&enum_case_LAUNCH_MEDIA_value, 16777377);
	zend_enum_add_case_cstr(class_entry, "LAUNCH_MEDIA", &enum_case_LAUNCH_MEDIA_value);

	zval enum_case_LAUNCH0_value;
	ZVAL_LONG(&enum_case_LAUNCH0_value, 16777378);
	zend_enum_add_case_cstr(class_entry, "LAUNCH0", &enum_case_LAUNCH0_value);

	zval enum_case_LAUNCH1_value;
	ZVAL_LONG(&enum_case_LAUNCH1_value, 16777379);
	zend_enum_add_case_cstr(class_entry, "LAUNCH1", &enum_case_LAUNCH1_value);

	zval enum_case_LAUNCH2_value;
	ZVAL_LONG(&enum_case_LAUNCH2_value, 16777380);
	zend_enum_add_case_cstr(class_entry, "LAUNCH2", &enum_case_LAUNCH2_value);

	zval enum_case_LAUNCH3_value;
	ZVAL_LONG(&enum_case_LAUNCH3_value, 16777381);
	zend_enum_add_case_cstr(class_entry, "LAUNCH3", &enum_case_LAUNCH3_value);

	zval enum_case_LAUNCH4_value;
	ZVAL_LONG(&enum_case_LAUNCH4_value, 16777382);
	zend_enum_add_case_cstr(class_entry, "LAUNCH4", &enum_case_LAUNCH4_value);

	zval enum_case_LAUNCH5_value;
	ZVAL_LONG(&enum_case_LAUNCH5_value, 16777383);
	zend_enum_add_case_cstr(class_entry, "LAUNCH5", &enum_case_LAUNCH5_value);

	zval enum_case_LAUNCH6_value;
	ZVAL_LONG(&enum_case_LAUNCH6_value, 16777384);
	zend_enum_add_case_cstr(class_entry, "LAUNCH6", &enum_case_LAUNCH6_value);

	zval enum_case_LAUNCH7_value;
	ZVAL_LONG(&enum_case_LAUNCH7_value, 16777385);
	zend_enum_add_case_cstr(class_entry, "LAUNCH7", &enum_case_LAUNCH7_value);

	zval enum_case_LAUNCH8_value;
	ZVAL_LONG(&enum_case_LAUNCH8_value, 16777386);
	zend_enum_add_case_cstr(class_entry, "LAUNCH8", &enum_case_LAUNCH8_value);

	zval enum_case_LAUNCH9_value;
	ZVAL_LONG(&enum_case_LAUNCH9_value, 16777387);
	zend_enum_add_case_cstr(class_entry, "LAUNCH9", &enum_case_LAUNCH9_value);

	zval enum_case_LAUNCH_A_value;
	ZVAL_LONG(&enum_case_LAUNCH_A_value, 16777388);
	zend_enum_add_case_cstr(class_entry, "LAUNCH_A", &enum_case_LAUNCH_A_value);

	zval enum_case_LAUNCH_B_value;
	ZVAL_LONG(&enum_case_LAUNCH_B_value, 16777389);
	zend_enum_add_case_cstr(class_entry, "LAUNCH_B", &enum_case_LAUNCH_B_value);

	zval enum_case_LAUNCH_C_value;
	ZVAL_LONG(&enum_case_LAUNCH_C_value, 16777390);
	zend_enum_add_case_cstr(class_entry, "LAUNCH_C", &enum_case_LAUNCH_C_value);

	zval enum_case_LAUNCH_D_value;
	ZVAL_LONG(&enum_case_LAUNCH_D_value, 16777391);
	zend_enum_add_case_cstr(class_entry, "LAUNCH_D", &enum_case_LAUNCH_D_value);

	zval enum_case_LAUNCH_E_value;
	ZVAL_LONG(&enum_case_LAUNCH_E_value, 16777392);
	zend_enum_add_case_cstr(class_entry, "LAUNCH_E", &enum_case_LAUNCH_E_value);

	zval enum_case_LAUNCH_F_value;
	ZVAL_LONG(&enum_case_LAUNCH_F_value, 16777393);
	zend_enum_add_case_cstr(class_entry, "LAUNCH_F", &enum_case_LAUNCH_F_value);

	zval enum_case_MON_BRIGHTNESS_UP_value;
	ZVAL_LONG(&enum_case_MON_BRIGHTNESS_UP_value, 16777394);
	zend_enum_add_case_cstr(class_entry, "MON_BRIGHTNESS_UP", &enum_case_MON_BRIGHTNESS_UP_value);

	zval enum_case_MON_BRIGHTNESS_DOWN_value;
	ZVAL_LONG(&enum_case_MON_BRIGHTNESS_DOWN_value, 16777395);
	zend_enum_add_case_cstr(class_entry, "MON_BRIGHTNESS_DOWN", &enum_case_MON_BRIGHTNESS_DOWN_value);

	zval enum_case_KEYBOARD_LIGHT_ON_OFF_value;
	ZVAL_LONG(&enum_case_KEYBOARD_LIGHT_ON_OFF_value, 16777396);
	zend_enum_add_case_cstr(class_entry, "KEYBOARD_LIGHT_ON_OFF", &enum_case_KEYBOARD_LIGHT_ON_OFF_value);

	zval enum_case_KEYBOARD_BRIGHTNESS_UP_value;
	ZVAL_LONG(&enum_case_KEYBOARD_BRIGHTNESS_UP_value, 16777397);
	zend_enum_add_case_cstr(class_entry, "KEYBOARD_BRIGHTNESS_UP", &enum_case_KEYBOARD_BRIGHTNESS_UP_value);

	zval enum_case_KEYBOARD_BRIGHTNESS_DOWN_value;
	ZVAL_LONG(&enum_case_KEYBOARD_BRIGHTNESS_DOWN_value, 16777398);
	zend_enum_add_case_cstr(class_entry, "KEYBOARD_BRIGHTNESS_DOWN", &enum_case_KEYBOARD_BRIGHTNESS_DOWN_value);

	zval enum_case_POWER_OFF_value;
	ZVAL_LONG(&enum_case_POWER_OFF_value, 16777399);
	zend_enum_add_case_cstr(class_entry, "POWER_OFF", &enum_case_POWER_OFF_value);

	zval enum_case_WAKE_UP_value;
	ZVAL_LONG(&enum_case_WAKE_UP_value, 16777400);
	zend_enum_add_case_cstr(class_entry, "WAKE_UP", &enum_case_WAKE_UP_value);

	zval enum_case_EJECT_value;
	ZVAL_LONG(&enum_case_EJECT_value, 16777401);
	zend_enum_add_case_cstr(class_entry, "EJECT", &enum_case_EJECT_value);

	zval enum_case_SCREEN_SAVER_value;
	ZVAL_LONG(&enum_case_SCREEN_SAVER_value, 16777402);
	zend_enum_add_case_cstr(class_entry, "SCREEN_SAVER", &enum_case_SCREEN_SAVER_value);

	zval enum_case_WWW_value;
	ZVAL_LONG(&enum_case_WWW_value, 16777403);
	zend_enum_add_case_cstr(class_entry, "WWW", &enum_case_WWW_value);

	zval enum_case_MEMO_value;
	ZVAL_LONG(&enum_case_MEMO_value, 16777404);
	zend_enum_add_case_cstr(class_entry, "MEMO", &enum_case_MEMO_value);

	zval enum_case_LIGHT_BULB_value;
	ZVAL_LONG(&enum_case_LIGHT_BULB_value, 16777405);
	zend_enum_add_case_cstr(class_entry, "LIGHT_BULB", &enum_case_LIGHT_BULB_value);

	zval enum_case_SHOP_value;
	ZVAL_LONG(&enum_case_SHOP_value, 16777406);
	zend_enum_add_case_cstr(class_entry, "SHOP", &enum_case_SHOP_value);

	zval enum_case_HISTORY_value;
	ZVAL_LONG(&enum_case_HISTORY_value, 16777407);
	zend_enum_add_case_cstr(class_entry, "HISTORY", &enum_case_HISTORY_value);

	zval enum_case_ADD_FAVORITE_value;
	ZVAL_LONG(&enum_case_ADD_FAVORITE_value, 16777408);
	zend_enum_add_case_cstr(class_entry, "ADD_FAVORITE", &enum_case_ADD_FAVORITE_value);

	zval enum_case_HOT_LINKS_value;
	ZVAL_LONG(&enum_case_HOT_LINKS_value, 16777409);
	zend_enum_add_case_cstr(class_entry, "HOT_LINKS", &enum_case_HOT_LINKS_value);

	zval enum_case_BRIGHTNESS_ADJUST_value;
	ZVAL_LONG(&enum_case_BRIGHTNESS_ADJUST_value, 16777410);
	zend_enum_add_case_cstr(class_entry, "BRIGHTNESS_ADJUST", &enum_case_BRIGHTNESS_ADJUST_value);

	zval enum_case_FINANCE_value;
	ZVAL_LONG(&enum_case_FINANCE_value, 16777411);
	zend_enum_add_case_cstr(class_entry, "FINANCE", &enum_case_FINANCE_value);

	zval enum_case_COMMUNITY_value;
	ZVAL_LONG(&enum_case_COMMUNITY_value, 16777412);
	zend_enum_add_case_cstr(class_entry, "COMMUNITY", &enum_case_COMMUNITY_value);

	zval enum_case_AUDIO_REWIND_value;
	ZVAL_LONG(&enum_case_AUDIO_REWIND_value, 16777413);
	zend_enum_add_case_cstr(class_entry, "AUDIO_REWIND", &enum_case_AUDIO_REWIND_value);

	zval enum_case_BACK_FORWARD_value;
	ZVAL_LONG(&enum_case_BACK_FORWARD_value, 16777414);
	zend_enum_add_case_cstr(class_entry, "BACK_FORWARD", &enum_case_BACK_FORWARD_value);

	zval enum_case_APPLICATION_LEFT_value;
	ZVAL_LONG(&enum_case_APPLICATION_LEFT_value, 16777415);
	zend_enum_add_case_cstr(class_entry, "APPLICATION_LEFT", &enum_case_APPLICATION_LEFT_value);

	zval enum_case_APPLICATION_RIGHT_value;
	ZVAL_LONG(&enum_case_APPLICATION_RIGHT_value, 16777416);
	zend_enum_add_case_cstr(class_entry, "APPLICATION_RIGHT", &enum_case_APPLICATION_RIGHT_value);

	zval enum_case_BOOK_value;
	ZVAL_LONG(&enum_case_BOOK_value, 16777417);
	zend_enum_add_case_cstr(class_entry, "BOOK", &enum_case_BOOK_value);

	zval enum_case_CD_value;
	ZVAL_LONG(&enum_case_CD_value, 16777418);
	zend_enum_add_case_cstr(class_entry, "CD", &enum_case_CD_value);

	zval enum_case_CALCULATOR_value;
	ZVAL_LONG(&enum_case_CALCULATOR_value, 16777419);
	zend_enum_add_case_cstr(class_entry, "CALCULATOR", &enum_case_CALCULATOR_value);

	zval enum_case_TO_DO_LIST_value;
	ZVAL_LONG(&enum_case_TO_DO_LIST_value, 16777420);
	zend_enum_add_case_cstr(class_entry, "TO_DO_LIST", &enum_case_TO_DO_LIST_value);

	zval enum_case_CLEAR_GRAB_value;
	ZVAL_LONG(&enum_case_CLEAR_GRAB_value, 16777421);
	zend_enum_add_case_cstr(class_entry, "CLEAR_GRAB", &enum_case_CLEAR_GRAB_value);

	zval enum_case_CLOSE_value;
	ZVAL_LONG(&enum_case_CLOSE_value, 16777422);
	zend_enum_add_case_cstr(class_entry, "CLOSE", &enum_case_CLOSE_value);

	zval enum_case_COPY_value;
	ZVAL_LONG(&enum_case_COPY_value, 16777423);
	zend_enum_add_case_cstr(class_entry, "COPY", &enum_case_COPY_value);

	zval enum_case_CUT_value;
	ZVAL_LONG(&enum_case_CUT_value, 16777424);
	zend_enum_add_case_cstr(class_entry, "CUT", &enum_case_CUT_value);

	zval enum_case_DISPLAY_value;
	ZVAL_LONG(&enum_case_DISPLAY_value, 16777425);
	zend_enum_add_case_cstr(class_entry, "DISPLAY", &enum_case_DISPLAY_value);

	zval enum_case_DOS_value;
	ZVAL_LONG(&enum_case_DOS_value, 16777426);
	zend_enum_add_case_cstr(class_entry, "DOS", &enum_case_DOS_value);

	zval enum_case_DOCUMENTS_value;
	ZVAL_LONG(&enum_case_DOCUMENTS_value, 16777427);
	zend_enum_add_case_cstr(class_entry, "DOCUMENTS", &enum_case_DOCUMENTS_value);

	zval enum_case_EXCEL_value;
	ZVAL_LONG(&enum_case_EXCEL_value, 16777428);
	zend_enum_add_case_cstr(class_entry, "EXCEL", &enum_case_EXCEL_value);

	zval enum_case_EXPLORER_value;
	ZVAL_LONG(&enum_case_EXPLORER_value, 16777429);
	zend_enum_add_case_cstr(class_entry, "EXPLORER", &enum_case_EXPLORER_value);

	zval enum_case_GAME_value;
	ZVAL_LONG(&enum_case_GAME_value, 16777430);
	zend_enum_add_case_cstr(class_entry, "GAME", &enum_case_GAME_value);

	zval enum_case_GO_value;
	ZVAL_LONG(&enum_case_GO_value, 16777431);
	zend_enum_add_case_cstr(class_entry, "GO", &enum_case_GO_value);

	zval enum_case_I_TOUCH_value;
	ZVAL_LONG(&enum_case_I_TOUCH_value, 16777432);
	zend_enum_add_case_cstr(class_entry, "I_TOUCH", &enum_case_I_TOUCH_value);

	zval enum_case_LOG_OFF_value;
	ZVAL_LONG(&enum_case_LOG_OFF_value, 16777433);
	zend_enum_add_case_cstr(class_entry, "LOG_OFF", &enum_case_LOG_OFF_value);

	zval enum_case_MARKET_value;
	ZVAL_LONG(&enum_case_MARKET_value, 16777434);
	zend_enum_add_case_cstr(class_entry, "MARKET", &enum_case_MARKET_value);

	zval enum_case_MEETING_value;
	ZVAL_LONG(&enum_case_MEETING_value, 16777435);
	zend_enum_add_case_cstr(class_entry, "MEETING", &enum_case_MEETING_value);

	zval enum_case_MENU_KB_value;
	ZVAL_LONG(&enum_case_MENU_KB_value, 16777436);
	zend_enum_add_case_cstr(class_entry, "MENU_KB", &enum_case_MENU_KB_value);

	zval enum_case_MENU_PB_value;
	ZVAL_LONG(&enum_case_MENU_PB_value, 16777437);
	zend_enum_add_case_cstr(class_entry, "MENU_PB", &enum_case_MENU_PB_value);

	zval enum_case_MY_SITES_value;
	ZVAL_LONG(&enum_case_MY_SITES_value, 16777438);
	zend_enum_add_case_cstr(class_entry, "MY_SITES", &enum_case_MY_SITES_value);

	zval enum_case_NEWS_value;
	ZVAL_LONG(&enum_case_NEWS_value, 16777439);
	zend_enum_add_case_cstr(class_entry, "NEWS", &enum_case_NEWS_value);

	zval enum_case_OFFICE_HOME_value;
	ZVAL_LONG(&enum_case_OFFICE_HOME_value, 16777440);
	zend_enum_add_case_cstr(class_entry, "OFFICE_HOME", &enum_case_OFFICE_HOME_value);

	zval enum_case_OPTION_value;
	ZVAL_LONG(&enum_case_OPTION_value, 16777441);
	zend_enum_add_case_cstr(class_entry, "OPTION", &enum_case_OPTION_value);

	zval enum_case_PASTE_value;
	ZVAL_LONG(&enum_case_PASTE_value, 16777442);
	zend_enum_add_case_cstr(class_entry, "PASTE", &enum_case_PASTE_value);

	zval enum_case_PHONE_value;
	ZVAL_LONG(&enum_case_PHONE_value, 16777443);
	zend_enum_add_case_cstr(class_entry, "PHONE", &enum_case_PHONE_value);

	zval enum_case_CALENDAR_value;
	ZVAL_LONG(&enum_case_CALENDAR_value, 16777444);
	zend_enum_add_case_cstr(class_entry, "CALENDAR", &enum_case_CALENDAR_value);

	zval enum_case_REPLY_value;
	ZVAL_LONG(&enum_case_REPLY_value, 16777445);
	zend_enum_add_case_cstr(class_entry, "REPLY", &enum_case_REPLY_value);

	zval enum_case_RELOAD_value;
	ZVAL_LONG(&enum_case_RELOAD_value, 16777446);
	zend_enum_add_case_cstr(class_entry, "RELOAD", &enum_case_RELOAD_value);

	zval enum_case_ROTATE_WINDOWS_value;
	ZVAL_LONG(&enum_case_ROTATE_WINDOWS_value, 16777447);
	zend_enum_add_case_cstr(class_entry, "ROTATE_WINDOWS", &enum_case_ROTATE_WINDOWS_value);

	zval enum_case_ROTATION_PB_value;
	ZVAL_LONG(&enum_case_ROTATION_PB_value, 16777448);
	zend_enum_add_case_cstr(class_entry, "ROTATION_PB", &enum_case_ROTATION_PB_value);

	zval enum_case_ROTATION_KB_value;
	ZVAL_LONG(&enum_case_ROTATION_KB_value, 16777449);
	zend_enum_add_case_cstr(class_entry, "ROTATION_KB", &enum_case_ROTATION_KB_value);

	zval enum_case_SAVE_value;
	ZVAL_LONG(&enum_case_SAVE_value, 16777450);
	zend_enum_add_case_cstr(class_entry, "SAVE", &enum_case_SAVE_value);

	zval enum_case_SEND_value;
	ZVAL_LONG(&enum_case_SEND_value, 16777451);
	zend_enum_add_case_cstr(class_entry, "SEND", &enum_case_SEND_value);

	zval enum_case_SPELL_value;
	ZVAL_LONG(&enum_case_SPELL_value, 16777452);
	zend_enum_add_case_cstr(class_entry, "SPELL", &enum_case_SPELL_value);

	zval enum_case_SPLIT_SCREEN_value;
	ZVAL_LONG(&enum_case_SPLIT_SCREEN_value, 16777453);
	zend_enum_add_case_cstr(class_entry, "SPLIT_SCREEN", &enum_case_SPLIT_SCREEN_value);

	zval enum_case_SUPPORT_value;
	ZVAL_LONG(&enum_case_SUPPORT_value, 16777454);
	zend_enum_add_case_cstr(class_entry, "SUPPORT", &enum_case_SUPPORT_value);

	zval enum_case_TASK_PANE_value;
	ZVAL_LONG(&enum_case_TASK_PANE_value, 16777455);
	zend_enum_add_case_cstr(class_entry, "TASK_PANE", &enum_case_TASK_PANE_value);

	zval enum_case_TERMINAL_value;
	ZVAL_LONG(&enum_case_TERMINAL_value, 16777456);
	zend_enum_add_case_cstr(class_entry, "TERMINAL", &enum_case_TERMINAL_value);

	zval enum_case_TOOLS_value;
	ZVAL_LONG(&enum_case_TOOLS_value, 16777457);
	zend_enum_add_case_cstr(class_entry, "TOOLS", &enum_case_TOOLS_value);

	zval enum_case_TRAVEL_value;
	ZVAL_LONG(&enum_case_TRAVEL_value, 16777458);
	zend_enum_add_case_cstr(class_entry, "TRAVEL", &enum_case_TRAVEL_value);

	zval enum_case_VIDEO_value;
	ZVAL_LONG(&enum_case_VIDEO_value, 16777459);
	zend_enum_add_case_cstr(class_entry, "VIDEO", &enum_case_VIDEO_value);

	zval enum_case_WORD_value;
	ZVAL_LONG(&enum_case_WORD_value, 16777460);
	zend_enum_add_case_cstr(class_entry, "WORD", &enum_case_WORD_value);

	zval enum_case_XFER_value;
	ZVAL_LONG(&enum_case_XFER_value, 16777461);
	zend_enum_add_case_cstr(class_entry, "XFER", &enum_case_XFER_value);

	zval enum_case_ZOOM_IN_value;
	ZVAL_LONG(&enum_case_ZOOM_IN_value, 16777462);
	zend_enum_add_case_cstr(class_entry, "ZOOM_IN", &enum_case_ZOOM_IN_value);

	zval enum_case_ZOOM_OUT_value;
	ZVAL_LONG(&enum_case_ZOOM_OUT_value, 16777463);
	zend_enum_add_case_cstr(class_entry, "ZOOM_OUT", &enum_case_ZOOM_OUT_value);

	zval enum_case_AWAY_value;
	ZVAL_LONG(&enum_case_AWAY_value, 16777464);
	zend_enum_add_case_cstr(class_entry, "AWAY", &enum_case_AWAY_value);

	zval enum_case_MESSENGER_value;
	ZVAL_LONG(&enum_case_MESSENGER_value, 16777465);
	zend_enum_add_case_cstr(class_entry, "MESSENGER", &enum_case_MESSENGER_value);

	zval enum_case_WEB_CAM_value;
	ZVAL_LONG(&enum_case_WEB_CAM_value, 16777466);
	zend_enum_add_case_cstr(class_entry, "WEB_CAM", &enum_case_WEB_CAM_value);

	zval enum_case_MAIL_FORWARD_value;
	ZVAL_LONG(&enum_case_MAIL_FORWARD_value, 16777467);
	zend_enum_add_case_cstr(class_entry, "MAIL_FORWARD", &enum_case_MAIL_FORWARD_value);

	zval enum_case_PICTURES_value;
	ZVAL_LONG(&enum_case_PICTURES_value, 16777468);
	zend_enum_add_case_cstr(class_entry, "PICTURES", &enum_case_PICTURES_value);

	zval enum_case_MUSIC_value;
	ZVAL_LONG(&enum_case_MUSIC_value, 16777469);
	zend_enum_add_case_cstr(class_entry, "MUSIC", &enum_case_MUSIC_value);

	zval enum_case_BATTERY_value;
	ZVAL_LONG(&enum_case_BATTERY_value, 16777470);
	zend_enum_add_case_cstr(class_entry, "BATTERY", &enum_case_BATTERY_value);

	zval enum_case_BLUETOOTH_value;
	ZVAL_LONG(&enum_case_BLUETOOTH_value, 16777471);
	zend_enum_add_case_cstr(class_entry, "BLUETOOTH", &enum_case_BLUETOOTH_value);

	zval enum_case_WLAN_value;
	ZVAL_LONG(&enum_case_WLAN_value, 16777472);
	zend_enum_add_case_cstr(class_entry, "WLAN", &enum_case_WLAN_value);

	zval enum_case_UWB_value;
	ZVAL_LONG(&enum_case_UWB_value, 16777473);
	zend_enum_add_case_cstr(class_entry, "UWB", &enum_case_UWB_value);

	zval enum_case_AUDIO_FORWARD_value;
	ZVAL_LONG(&enum_case_AUDIO_FORWARD_value, 16777474);
	zend_enum_add_case_cstr(class_entry, "AUDIO_FORWARD", &enum_case_AUDIO_FORWARD_value);

	zval enum_case_AUDIO_REPEAT_value;
	ZVAL_LONG(&enum_case_AUDIO_REPEAT_value, 16777475);
	zend_enum_add_case_cstr(class_entry, "AUDIO_REPEAT", &enum_case_AUDIO_REPEAT_value);

	zval enum_case_AUDIO_RANDOM_PLAY_value;
	ZVAL_LONG(&enum_case_AUDIO_RANDOM_PLAY_value, 16777476);
	zend_enum_add_case_cstr(class_entry, "AUDIO_RANDOM_PLAY", &enum_case_AUDIO_RANDOM_PLAY_value);

	zval enum_case_SUBTITLE_value;
	ZVAL_LONG(&enum_case_SUBTITLE_value, 16777477);
	zend_enum_add_case_cstr(class_entry, "SUBTITLE", &enum_case_SUBTITLE_value);

	zval enum_case_AUDIO_CYCLE_TRACK_value;
	ZVAL_LONG(&enum_case_AUDIO_CYCLE_TRACK_value, 16777478);
	zend_enum_add_case_cstr(class_entry, "AUDIO_CYCLE_TRACK", &enum_case_AUDIO_CYCLE_TRACK_value);

	zval enum_case_TIME_value;
	ZVAL_LONG(&enum_case_TIME_value, 16777479);
	zend_enum_add_case_cstr(class_entry, "TIME", &enum_case_TIME_value);

	zval enum_case_HIBERNATE_value;
	ZVAL_LONG(&enum_case_HIBERNATE_value, 16777480);
	zend_enum_add_case_cstr(class_entry, "HIBERNATE", &enum_case_HIBERNATE_value);

	zval enum_case_VIEW_value;
	ZVAL_LONG(&enum_case_VIEW_value, 16777481);
	zend_enum_add_case_cstr(class_entry, "VIEW", &enum_case_VIEW_value);

	zval enum_case_TOP_MENU_value;
	ZVAL_LONG(&enum_case_TOP_MENU_value, 16777482);
	zend_enum_add_case_cstr(class_entry, "TOP_MENU", &enum_case_TOP_MENU_value);

	zval enum_case_POWER_DOWN_value;
	ZVAL_LONG(&enum_case_POWER_DOWN_value, 16777483);
	zend_enum_add_case_cstr(class_entry, "POWER_DOWN", &enum_case_POWER_DOWN_value);

	zval enum_case_SUSPEND_value;
	ZVAL_LONG(&enum_case_SUSPEND_value, 16777484);
	zend_enum_add_case_cstr(class_entry, "SUSPEND", &enum_case_SUSPEND_value);

	zval enum_case_CONTRAST_ADJUST_value;
	ZVAL_LONG(&enum_case_CONTRAST_ADJUST_value, 16777485);
	zend_enum_add_case_cstr(class_entry, "CONTRAST_ADJUST", &enum_case_CONTRAST_ADJUST_value);

	zval enum_case_LAUNCH_G_value;
	ZVAL_LONG(&enum_case_LAUNCH_G_value, 16777486);
	zend_enum_add_case_cstr(class_entry, "LAUNCH_G", &enum_case_LAUNCH_G_value);

	zval enum_case_LAUNCH_H_value;
	ZVAL_LONG(&enum_case_LAUNCH_H_value, 16777487);
	zend_enum_add_case_cstr(class_entry, "LAUNCH_H", &enum_case_LAUNCH_H_value);

	zval enum_case_TOUCHPAD_TOGGLE_value;
	ZVAL_LONG(&enum_case_TOUCHPAD_TOGGLE_value, 16777488);
	zend_enum_add_case_cstr(class_entry, "TOUCHPAD_TOGGLE", &enum_case_TOUCHPAD_TOGGLE_value);

	zval enum_case_TOUCHPAD_ON_value;
	ZVAL_LONG(&enum_case_TOUCHPAD_ON_value, 16777489);
	zend_enum_add_case_cstr(class_entry, "TOUCHPAD_ON", &enum_case_TOUCHPAD_ON_value);

	zval enum_case_TOUCHPAD_OFF_value;
	ZVAL_LONG(&enum_case_TOUCHPAD_OFF_value, 16777490);
	zend_enum_add_case_cstr(class_entry, "TOUCHPAD_OFF", &enum_case_TOUCHPAD_OFF_value);

	zval enum_case_MIC_MUTE_value;
	ZVAL_LONG(&enum_case_MIC_MUTE_value, 16777491);
	zend_enum_add_case_cstr(class_entry, "MIC_MUTE", &enum_case_MIC_MUTE_value);

	zval enum_case_RED_value;
	ZVAL_LONG(&enum_case_RED_value, 16777492);
	zend_enum_add_case_cstr(class_entry, "RED", &enum_case_RED_value);

	zval enum_case_GREEN_value;
	ZVAL_LONG(&enum_case_GREEN_value, 16777493);
	zend_enum_add_case_cstr(class_entry, "GREEN", &enum_case_GREEN_value);

	zval enum_case_YELLOW_value;
	ZVAL_LONG(&enum_case_YELLOW_value, 16777494);
	zend_enum_add_case_cstr(class_entry, "YELLOW", &enum_case_YELLOW_value);

	zval enum_case_BLUE_value;
	ZVAL_LONG(&enum_case_BLUE_value, 16777495);
	zend_enum_add_case_cstr(class_entry, "BLUE", &enum_case_BLUE_value);

	zval enum_case_CHANNEL_UP_value;
	ZVAL_LONG(&enum_case_CHANNEL_UP_value, 16777496);
	zend_enum_add_case_cstr(class_entry, "CHANNEL_UP", &enum_case_CHANNEL_UP_value);

	zval enum_case_CHANNEL_DOWN_value;
	ZVAL_LONG(&enum_case_CHANNEL_DOWN_value, 16777497);
	zend_enum_add_case_cstr(class_entry, "CHANNEL_DOWN", &enum_case_CHANNEL_DOWN_value);

	zval enum_case_GUIDE_value;
	ZVAL_LONG(&enum_case_GUIDE_value, 16777498);
	zend_enum_add_case_cstr(class_entry, "GUIDE", &enum_case_GUIDE_value);

	zval enum_case_INFO_value;
	ZVAL_LONG(&enum_case_INFO_value, 16777499);
	zend_enum_add_case_cstr(class_entry, "INFO", &enum_case_INFO_value);

	zval enum_case_SETTINGS_value;
	ZVAL_LONG(&enum_case_SETTINGS_value, 16777500);
	zend_enum_add_case_cstr(class_entry, "SETTINGS", &enum_case_SETTINGS_value);

	zval enum_case_MIC_VOLUME_UP_value;
	ZVAL_LONG(&enum_case_MIC_VOLUME_UP_value, 16777501);
	zend_enum_add_case_cstr(class_entry, "MIC_VOLUME_UP", &enum_case_MIC_VOLUME_UP_value);

	zval enum_case_MIC_VOLUME_DOWN_value;
	ZVAL_LONG(&enum_case_MIC_VOLUME_DOWN_value, 16777502);
	zend_enum_add_case_cstr(class_entry, "MIC_VOLUME_DOWN", &enum_case_MIC_VOLUME_DOWN_value);

	zval enum_case_KEYBOARD_value;
	ZVAL_LONG(&enum_case_KEYBOARD_value, 16777503);
	zend_enum_add_case_cstr(class_entry, "KEYBOARD", &enum_case_KEYBOARD_value);

	zval enum_case_NEW_value;
	ZVAL_LONG(&enum_case_NEW_value, 16777504);
	zend_enum_add_case_cstr(class_entry, "NEW", &enum_case_NEW_value);

	zval enum_case_OPEN_value;
	ZVAL_LONG(&enum_case_OPEN_value, 16777505);
	zend_enum_add_case_cstr(class_entry, "OPEN", &enum_case_OPEN_value);

	zval enum_case_FIND_value;
	ZVAL_LONG(&enum_case_FIND_value, 16777506);
	zend_enum_add_case_cstr(class_entry, "FIND", &enum_case_FIND_value);

	zval enum_case_UNDO_value;
	ZVAL_LONG(&enum_case_UNDO_value, 16777507);
	zend_enum_add_case_cstr(class_entry, "UNDO", &enum_case_UNDO_value);

	zval enum_case_REDO_value;
	ZVAL_LONG(&enum_case_REDO_value, 16777508);
	zend_enum_add_case_cstr(class_entry, "REDO", &enum_case_REDO_value);

	zval enum_case_MEDIA_LAST_value;
	ZVAL_LONG(&enum_case_MEDIA_LAST_value, 16842751);
	zend_enum_add_case_cstr(class_entry, "MEDIA_LAST", &enum_case_MEDIA_LAST_value);

	zval enum_case_SELECT_value;
	ZVAL_LONG(&enum_case_SELECT_value, 16842752);
	zend_enum_add_case_cstr(class_entry, "SELECT", &enum_case_SELECT_value);

	zval enum_case_YES_value;
	ZVAL_LONG(&enum_case_YES_value, 16842753);
	zend_enum_add_case_cstr(class_entry, "YES", &enum_case_YES_value);

	zval enum_case_NO_value;
	ZVAL_LONG(&enum_case_NO_value, 16842754);
	zend_enum_add_case_cstr(class_entry, "NO", &enum_case_NO_value);

	zval enum_case_CANCEL_value;
	ZVAL_LONG(&enum_case_CANCEL_value, 16908289);
	zend_enum_add_case_cstr(class_entry, "CANCEL", &enum_case_CANCEL_value);

	zval enum_case_PRINTER_value;
	ZVAL_LONG(&enum_case_PRINTER_value, 16908290);
	zend_enum_add_case_cstr(class_entry, "PRINTER", &enum_case_PRINTER_value);

	zval enum_case_EXECUTE_value;
	ZVAL_LONG(&enum_case_EXECUTE_value, 16908291);
	zend_enum_add_case_cstr(class_entry, "EXECUTE", &enum_case_EXECUTE_value);

	zval enum_case_SLEEP_value;
	ZVAL_LONG(&enum_case_SLEEP_value, 16908292);
	zend_enum_add_case_cstr(class_entry, "SLEEP", &enum_case_SLEEP_value);

	zval enum_case_PLAY_value;
	ZVAL_LONG(&enum_case_PLAY_value, 16908293);
	zend_enum_add_case_cstr(class_entry, "PLAY", &enum_case_PLAY_value);

	zval enum_case_ZOOM_value;
	ZVAL_LONG(&enum_case_ZOOM_value, 16908294);
	zend_enum_add_case_cstr(class_entry, "ZOOM", &enum_case_ZOOM_value);

	zval enum_case_EXIT_value;
	ZVAL_LONG(&enum_case_EXIT_value, 16908298);
	zend_enum_add_case_cstr(class_entry, "EXIT", &enum_case_EXIT_value);

	zval enum_case_CONTEXT1_value;
	ZVAL_LONG(&enum_case_CONTEXT1_value, 17825792);
	zend_enum_add_case_cstr(class_entry, "CONTEXT1", &enum_case_CONTEXT1_value);

	zval enum_case_CONTEXT2_value;
	ZVAL_LONG(&enum_case_CONTEXT2_value, 17825793);
	zend_enum_add_case_cstr(class_entry, "CONTEXT2", &enum_case_CONTEXT2_value);

	zval enum_case_CONTEXT3_value;
	ZVAL_LONG(&enum_case_CONTEXT3_value, 17825794);
	zend_enum_add_case_cstr(class_entry, "CONTEXT3", &enum_case_CONTEXT3_value);

	zval enum_case_CONTEXT4_value;
	ZVAL_LONG(&enum_case_CONTEXT4_value, 17825795);
	zend_enum_add_case_cstr(class_entry, "CONTEXT4", &enum_case_CONTEXT4_value);

	zval enum_case_CALL_value;
	ZVAL_LONG(&enum_case_CALL_value, 17825796);
	zend_enum_add_case_cstr(class_entry, "CALL", &enum_case_CALL_value);

	zval enum_case_HANGUP_value;
	ZVAL_LONG(&enum_case_HANGUP_value, 17825797);
	zend_enum_add_case_cstr(class_entry, "HANGUP", &enum_case_HANGUP_value);

	zval enum_case_FLIP_value;
	ZVAL_LONG(&enum_case_FLIP_value, 17825798);
	zend_enum_add_case_cstr(class_entry, "FLIP", &enum_case_FLIP_value);

	zval enum_case_TOGGLE_CALL_HANGUP_value;
	ZVAL_LONG(&enum_case_TOGGLE_CALL_HANGUP_value, 17825799);
	zend_enum_add_case_cstr(class_entry, "TOGGLE_CALL_HANGUP", &enum_case_TOGGLE_CALL_HANGUP_value);

	zval enum_case_VOICE_DIAL_value;
	ZVAL_LONG(&enum_case_VOICE_DIAL_value, 17825800);
	zend_enum_add_case_cstr(class_entry, "VOICE_DIAL", &enum_case_VOICE_DIAL_value);

	zval enum_case_LAST_NUMBER_REDIAL_value;
	ZVAL_LONG(&enum_case_LAST_NUMBER_REDIAL_value, 17825801);
	zend_enum_add_case_cstr(class_entry, "LAST_NUMBER_REDIAL", &enum_case_LAST_NUMBER_REDIAL_value);

	zval enum_case_CAMERA_value;
	ZVAL_LONG(&enum_case_CAMERA_value, 17825824);
	zend_enum_add_case_cstr(class_entry, "CAMERA", &enum_case_CAMERA_value);

	zval enum_case_CAMERA_FOCUS_value;
	ZVAL_LONG(&enum_case_CAMERA_FOCUS_value, 17825825);
	zend_enum_add_case_cstr(class_entry, "CAMERA_FOCUS", &enum_case_CAMERA_FOCUS_value);

	zval enum_case_UNKNOWN_value;
	ZVAL_LONG(&enum_case_UNKNOWN_value, 33554431);
	zend_enum_add_case_cstr(class_entry, "UNKNOWN", &enum_case_UNKNOWN_value);

	return class_entry;
}

static zend_class_entry *register_class_Qt_ScrollPhase(void)
{
	zend_class_entry *class_entry = zend_register_internal_enum("Qt\\ScrollPhase", IS_LONG, NULL);

	zval enum_case_NO_SCROLL_PHASE_value;
	ZVAL_LONG(&enum_case_NO_SCROLL_PHASE_value, 0);
	zend_enum_add_case_cstr(class_entry, "NO_SCROLL_PHASE", &enum_case_NO_SCROLL_PHASE_value);

	zval enum_case_SCROLL_BEGIN_value;
	ZVAL_LONG(&enum_case_SCROLL_BEGIN_value, 1);
	zend_enum_add_case_cstr(class_entry, "SCROLL_BEGIN", &enum_case_SCROLL_BEGIN_value);

	zval enum_case_SCROLL_UPDATE_value;
	ZVAL_LONG(&enum_case_SCROLL_UPDATE_value, 2);
	zend_enum_add_case_cstr(class_entry, "SCROLL_UPDATE", &enum_case_SCROLL_UPDATE_value);

	zval enum_case_SCROLL_END_value;
	ZVAL_LONG(&enum_case_SCROLL_END_value, 3);
	zend_enum_add_case_cstr(class_entry, "SCROLL_END", &enum_case_SCROLL_END_value);

	zval enum_case_SCROLL_MOMENTUM_value;
	ZVAL_LONG(&enum_case_SCROLL_MOMENTUM_value, 4);
	zend_enum_add_case_cstr(class_entry, "SCROLL_MOMENTUM", &enum_case_SCROLL_MOMENTUM_value);

	return class_entry;
}

static zend_class_entry *register_class_Qt_MouseEventSource(void)
{
	zend_class_entry *class_entry = zend_register_internal_enum("Qt\\MouseEventSource", IS_LONG, NULL);

	zval enum_case_MOUSE_EVENT_NOT_SYNTHESIZED_value;
	ZVAL_LONG(&enum_case_MOUSE_EVENT_NOT_SYNTHESIZED_value, 0);
	zend_enum_add_case_cstr(class_entry, "MOUSE_EVENT_NOT_SYNTHESIZED", &enum_case_MOUSE_EVENT_NOT_SYNTHESIZED_value);

	zval enum_case_MOUSE_EVENT_SYNTHESIZED_BY_SYSTEM_value;
	ZVAL_LONG(&enum_case_MOUSE_EVENT_SYNTHESIZED_BY_SYSTEM_value, 1);
	zend_enum_add_case_cstr(class_entry, "MOUSE_EVENT_SYNTHESIZED_BY_SYSTEM", &enum_case_MOUSE_EVENT_SYNTHESIZED_BY_SYSTEM_value);

	zval enum_case_MOUSE_EVENT_SYNTHESIZED_BY_QT_value;
	ZVAL_LONG(&enum_case_MOUSE_EVENT_SYNTHESIZED_BY_QT_value, 2);
	zend_enum_add_case_cstr(class_entry, "MOUSE_EVENT_SYNTHESIZED_BY_QT", &enum_case_MOUSE_EVENT_SYNTHESIZED_BY_QT_value);

	zval enum_case_MOUSE_EVENT_SYNTHESIZED_BY_APPLICATION_value;
	ZVAL_LONG(&enum_case_MOUSE_EVENT_SYNTHESIZED_BY_APPLICATION_value, 3);
	zend_enum_add_case_cstr(class_entry, "MOUSE_EVENT_SYNTHESIZED_BY_APPLICATION", &enum_case_MOUSE_EVENT_SYNTHESIZED_BY_APPLICATION_value);

	return class_entry;
}
