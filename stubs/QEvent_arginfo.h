/* This is a generated file, edit the .stub.php file instead.
 * Stub hash: 7ff2a43221599aae378172aa12b4a78df04ba68c */

static zend_class_entry *register_class_QEvent_Type(void)
{
	zend_class_entry *class_entry = zend_register_internal_enum("QEvent\\Type", IS_LONG, NULL);

	zval enum_case_NONE_value;
	ZVAL_LONG(&enum_case_NONE_value, 0);
	zend_enum_add_case_cstr(class_entry, "NONE", &enum_case_NONE_value);

	zval enum_case_TIMER_value;
	ZVAL_LONG(&enum_case_TIMER_value, 1);
	zend_enum_add_case_cstr(class_entry, "TIMER", &enum_case_TIMER_value);

	zval enum_case_MOUSE_BUTTON_PRESS_value;
	ZVAL_LONG(&enum_case_MOUSE_BUTTON_PRESS_value, 2);
	zend_enum_add_case_cstr(class_entry, "MOUSE_BUTTON_PRESS", &enum_case_MOUSE_BUTTON_PRESS_value);

	zval enum_case_MOUSE_BUTTON_RELEASE_value;
	ZVAL_LONG(&enum_case_MOUSE_BUTTON_RELEASE_value, 3);
	zend_enum_add_case_cstr(class_entry, "MOUSE_BUTTON_RELEASE", &enum_case_MOUSE_BUTTON_RELEASE_value);

	zval enum_case_MOUSE_BUTTON_DBL_CLICK_value;
	ZVAL_LONG(&enum_case_MOUSE_BUTTON_DBL_CLICK_value, 4);
	zend_enum_add_case_cstr(class_entry, "MOUSE_BUTTON_DBL_CLICK", &enum_case_MOUSE_BUTTON_DBL_CLICK_value);

	zval enum_case_MOUSE_MOVE_value;
	ZVAL_LONG(&enum_case_MOUSE_MOVE_value, 5);
	zend_enum_add_case_cstr(class_entry, "MOUSE_MOVE", &enum_case_MOUSE_MOVE_value);

	zval enum_case_KEY_PRESS_value;
	ZVAL_LONG(&enum_case_KEY_PRESS_value, 6);
	zend_enum_add_case_cstr(class_entry, "KEY_PRESS", &enum_case_KEY_PRESS_value);

	zval enum_case_KEY_RELEASE_value;
	ZVAL_LONG(&enum_case_KEY_RELEASE_value, 7);
	zend_enum_add_case_cstr(class_entry, "KEY_RELEASE", &enum_case_KEY_RELEASE_value);

	zval enum_case_FOCUS_IN_value;
	ZVAL_LONG(&enum_case_FOCUS_IN_value, 8);
	zend_enum_add_case_cstr(class_entry, "FOCUS_IN", &enum_case_FOCUS_IN_value);

	zval enum_case_FOCUS_OUT_value;
	ZVAL_LONG(&enum_case_FOCUS_OUT_value, 9);
	zend_enum_add_case_cstr(class_entry, "FOCUS_OUT", &enum_case_FOCUS_OUT_value);

	zval enum_case_FOCUS_ABOUT_TO_CHANGE_value;
	ZVAL_LONG(&enum_case_FOCUS_ABOUT_TO_CHANGE_value, 23);
	zend_enum_add_case_cstr(class_entry, "FOCUS_ABOUT_TO_CHANGE", &enum_case_FOCUS_ABOUT_TO_CHANGE_value);

	zval enum_case_ENTER_value;
	ZVAL_LONG(&enum_case_ENTER_value, 10);
	zend_enum_add_case_cstr(class_entry, "ENTER", &enum_case_ENTER_value);

	zval enum_case_LEAVE_value;
	ZVAL_LONG(&enum_case_LEAVE_value, 11);
	zend_enum_add_case_cstr(class_entry, "LEAVE", &enum_case_LEAVE_value);

	zval enum_case_PAINT_value;
	ZVAL_LONG(&enum_case_PAINT_value, 12);
	zend_enum_add_case_cstr(class_entry, "PAINT", &enum_case_PAINT_value);

	zval enum_case_MOVE_value;
	ZVAL_LONG(&enum_case_MOVE_value, 13);
	zend_enum_add_case_cstr(class_entry, "MOVE", &enum_case_MOVE_value);

	zval enum_case_RESIZE_value;
	ZVAL_LONG(&enum_case_RESIZE_value, 14);
	zend_enum_add_case_cstr(class_entry, "RESIZE", &enum_case_RESIZE_value);

	zval enum_case_CREATE_value;
	ZVAL_LONG(&enum_case_CREATE_value, 15);
	zend_enum_add_case_cstr(class_entry, "CREATE", &enum_case_CREATE_value);

	zval enum_case_DESTROY_value;
	ZVAL_LONG(&enum_case_DESTROY_value, 16);
	zend_enum_add_case_cstr(class_entry, "DESTROY", &enum_case_DESTROY_value);

	zval enum_case_SHOW_value;
	ZVAL_LONG(&enum_case_SHOW_value, 17);
	zend_enum_add_case_cstr(class_entry, "SHOW", &enum_case_SHOW_value);

	zval enum_case_HIDE_value;
	ZVAL_LONG(&enum_case_HIDE_value, 18);
	zend_enum_add_case_cstr(class_entry, "HIDE", &enum_case_HIDE_value);

	zval enum_case_CLOSE_value;
	ZVAL_LONG(&enum_case_CLOSE_value, 19);
	zend_enum_add_case_cstr(class_entry, "CLOSE", &enum_case_CLOSE_value);

	zval enum_case_QUIT_value;
	ZVAL_LONG(&enum_case_QUIT_value, 20);
	zend_enum_add_case_cstr(class_entry, "QUIT", &enum_case_QUIT_value);

	zval enum_case_PARENT_CHANGE_value;
	ZVAL_LONG(&enum_case_PARENT_CHANGE_value, 21);
	zend_enum_add_case_cstr(class_entry, "PARENT_CHANGE", &enum_case_PARENT_CHANGE_value);

	zval enum_case_PARENT_ABOUT_TO_CHANGE_value;
	ZVAL_LONG(&enum_case_PARENT_ABOUT_TO_CHANGE_value, 131);
	zend_enum_add_case_cstr(class_entry, "PARENT_ABOUT_TO_CHANGE", &enum_case_PARENT_ABOUT_TO_CHANGE_value);

	zval enum_case_THREAD_CHANGE_value;
	ZVAL_LONG(&enum_case_THREAD_CHANGE_value, 22);
	zend_enum_add_case_cstr(class_entry, "THREAD_CHANGE", &enum_case_THREAD_CHANGE_value);

	zval enum_case_WINDOW_ACTIVATE_value;
	ZVAL_LONG(&enum_case_WINDOW_ACTIVATE_value, 24);
	zend_enum_add_case_cstr(class_entry, "WINDOW_ACTIVATE", &enum_case_WINDOW_ACTIVATE_value);

	zval enum_case_WINDOW_DEACTIVATE_value;
	ZVAL_LONG(&enum_case_WINDOW_DEACTIVATE_value, 25);
	zend_enum_add_case_cstr(class_entry, "WINDOW_DEACTIVATE", &enum_case_WINDOW_DEACTIVATE_value);

	zval enum_case_SHOW_TO_PARENT_value;
	ZVAL_LONG(&enum_case_SHOW_TO_PARENT_value, 26);
	zend_enum_add_case_cstr(class_entry, "SHOW_TO_PARENT", &enum_case_SHOW_TO_PARENT_value);

	zval enum_case_HIDE_TO_PARENT_value;
	ZVAL_LONG(&enum_case_HIDE_TO_PARENT_value, 27);
	zend_enum_add_case_cstr(class_entry, "HIDE_TO_PARENT", &enum_case_HIDE_TO_PARENT_value);

	zval enum_case_WHEEL_value;
	ZVAL_LONG(&enum_case_WHEEL_value, 31);
	zend_enum_add_case_cstr(class_entry, "WHEEL", &enum_case_WHEEL_value);

	zval enum_case_WINDOW_TITLE_CHANGE_value;
	ZVAL_LONG(&enum_case_WINDOW_TITLE_CHANGE_value, 33);
	zend_enum_add_case_cstr(class_entry, "WINDOW_TITLE_CHANGE", &enum_case_WINDOW_TITLE_CHANGE_value);

	zval enum_case_WINDOW_ICON_CHANGE_value;
	ZVAL_LONG(&enum_case_WINDOW_ICON_CHANGE_value, 34);
	zend_enum_add_case_cstr(class_entry, "WINDOW_ICON_CHANGE", &enum_case_WINDOW_ICON_CHANGE_value);

	zval enum_case_APPLICATION_WINDOW_ICON_CHANGE_value;
	ZVAL_LONG(&enum_case_APPLICATION_WINDOW_ICON_CHANGE_value, 35);
	zend_enum_add_case_cstr(class_entry, "APPLICATION_WINDOW_ICON_CHANGE", &enum_case_APPLICATION_WINDOW_ICON_CHANGE_value);

	zval enum_case_APPLICATION_FONT_CHANGE_value;
	ZVAL_LONG(&enum_case_APPLICATION_FONT_CHANGE_value, 36);
	zend_enum_add_case_cstr(class_entry, "APPLICATION_FONT_CHANGE", &enum_case_APPLICATION_FONT_CHANGE_value);

	zval enum_case_APPLICATION_LAYOUT_DIRECTION_CHANGE_value;
	ZVAL_LONG(&enum_case_APPLICATION_LAYOUT_DIRECTION_CHANGE_value, 37);
	zend_enum_add_case_cstr(class_entry, "APPLICATION_LAYOUT_DIRECTION_CHANGE", &enum_case_APPLICATION_LAYOUT_DIRECTION_CHANGE_value);

	zval enum_case_APPLICATION_PALETTE_CHANGE_value;
	ZVAL_LONG(&enum_case_APPLICATION_PALETTE_CHANGE_value, 38);
	zend_enum_add_case_cstr(class_entry, "APPLICATION_PALETTE_CHANGE", &enum_case_APPLICATION_PALETTE_CHANGE_value);

	zval enum_case_PALETTE_CHANGE_value;
	ZVAL_LONG(&enum_case_PALETTE_CHANGE_value, 39);
	zend_enum_add_case_cstr(class_entry, "PALETTE_CHANGE", &enum_case_PALETTE_CHANGE_value);

	zval enum_case_CLIPBOARD_value;
	ZVAL_LONG(&enum_case_CLIPBOARD_value, 40);
	zend_enum_add_case_cstr(class_entry, "CLIPBOARD", &enum_case_CLIPBOARD_value);

	zval enum_case_SPEECH_value;
	ZVAL_LONG(&enum_case_SPEECH_value, 42);
	zend_enum_add_case_cstr(class_entry, "SPEECH", &enum_case_SPEECH_value);

	zval enum_case_META_CALL_value;
	ZVAL_LONG(&enum_case_META_CALL_value, 43);
	zend_enum_add_case_cstr(class_entry, "META_CALL", &enum_case_META_CALL_value);

	zval enum_case_SOCK_ACT_value;
	ZVAL_LONG(&enum_case_SOCK_ACT_value, 50);
	zend_enum_add_case_cstr(class_entry, "SOCK_ACT", &enum_case_SOCK_ACT_value);

	zval enum_case_WIN_EVENT_ACT_value;
	ZVAL_LONG(&enum_case_WIN_EVENT_ACT_value, 132);
	zend_enum_add_case_cstr(class_entry, "WIN_EVENT_ACT", &enum_case_WIN_EVENT_ACT_value);

	zval enum_case_DEFERRED_DELETE_value;
	ZVAL_LONG(&enum_case_DEFERRED_DELETE_value, 52);
	zend_enum_add_case_cstr(class_entry, "DEFERRED_DELETE", &enum_case_DEFERRED_DELETE_value);

	zval enum_case_DRAG_ENTER_value;
	ZVAL_LONG(&enum_case_DRAG_ENTER_value, 60);
	zend_enum_add_case_cstr(class_entry, "DRAG_ENTER", &enum_case_DRAG_ENTER_value);

	zval enum_case_DRAG_MOVE_value;
	ZVAL_LONG(&enum_case_DRAG_MOVE_value, 61);
	zend_enum_add_case_cstr(class_entry, "DRAG_MOVE", &enum_case_DRAG_MOVE_value);

	zval enum_case_DRAG_LEAVE_value;
	ZVAL_LONG(&enum_case_DRAG_LEAVE_value, 62);
	zend_enum_add_case_cstr(class_entry, "DRAG_LEAVE", &enum_case_DRAG_LEAVE_value);

	zval enum_case_DROP_value;
	ZVAL_LONG(&enum_case_DROP_value, 63);
	zend_enum_add_case_cstr(class_entry, "DROP", &enum_case_DROP_value);

	zval enum_case_DRAG_RESPONSE_value;
	ZVAL_LONG(&enum_case_DRAG_RESPONSE_value, 64);
	zend_enum_add_case_cstr(class_entry, "DRAG_RESPONSE", &enum_case_DRAG_RESPONSE_value);

	zval enum_case_CHILD_ADDED_value;
	ZVAL_LONG(&enum_case_CHILD_ADDED_value, 68);
	zend_enum_add_case_cstr(class_entry, "CHILD_ADDED", &enum_case_CHILD_ADDED_value);

	zval enum_case_CHILD_POLISHED_value;
	ZVAL_LONG(&enum_case_CHILD_POLISHED_value, 69);
	zend_enum_add_case_cstr(class_entry, "CHILD_POLISHED", &enum_case_CHILD_POLISHED_value);

	zval enum_case_CHILD_REMOVED_value;
	ZVAL_LONG(&enum_case_CHILD_REMOVED_value, 71);
	zend_enum_add_case_cstr(class_entry, "CHILD_REMOVED", &enum_case_CHILD_REMOVED_value);

	zval enum_case_SHOW_WINDOW_REQUEST_value;
	ZVAL_LONG(&enum_case_SHOW_WINDOW_REQUEST_value, 73);
	zend_enum_add_case_cstr(class_entry, "SHOW_WINDOW_REQUEST", &enum_case_SHOW_WINDOW_REQUEST_value);

	zval enum_case_POLISH_REQUEST_value;
	ZVAL_LONG(&enum_case_POLISH_REQUEST_value, 74);
	zend_enum_add_case_cstr(class_entry, "POLISH_REQUEST", &enum_case_POLISH_REQUEST_value);

	zval enum_case_POLISH_value;
	ZVAL_LONG(&enum_case_POLISH_value, 75);
	zend_enum_add_case_cstr(class_entry, "POLISH", &enum_case_POLISH_value);

	zval enum_case_LAYOUT_REQUEST_value;
	ZVAL_LONG(&enum_case_LAYOUT_REQUEST_value, 76);
	zend_enum_add_case_cstr(class_entry, "LAYOUT_REQUEST", &enum_case_LAYOUT_REQUEST_value);

	zval enum_case_UPDATE_REQUEST_value;
	ZVAL_LONG(&enum_case_UPDATE_REQUEST_value, 77);
	zend_enum_add_case_cstr(class_entry, "UPDATE_REQUEST", &enum_case_UPDATE_REQUEST_value);

	zval enum_case_UPDATE_LATER_value;
	ZVAL_LONG(&enum_case_UPDATE_LATER_value, 78);
	zend_enum_add_case_cstr(class_entry, "UPDATE_LATER", &enum_case_UPDATE_LATER_value);

	zval enum_case_EMBEDDING_CONTROL_value;
	ZVAL_LONG(&enum_case_EMBEDDING_CONTROL_value, 79);
	zend_enum_add_case_cstr(class_entry, "EMBEDDING_CONTROL", &enum_case_EMBEDDING_CONTROL_value);

	zval enum_case_ACTIVATE_CONTROL_value;
	ZVAL_LONG(&enum_case_ACTIVATE_CONTROL_value, 80);
	zend_enum_add_case_cstr(class_entry, "ACTIVATE_CONTROL", &enum_case_ACTIVATE_CONTROL_value);

	zval enum_case_DEACTIVATE_CONTROL_value;
	ZVAL_LONG(&enum_case_DEACTIVATE_CONTROL_value, 81);
	zend_enum_add_case_cstr(class_entry, "DEACTIVATE_CONTROL", &enum_case_DEACTIVATE_CONTROL_value);

	zval enum_case_CONTEXT_MENU_value;
	ZVAL_LONG(&enum_case_CONTEXT_MENU_value, 82);
	zend_enum_add_case_cstr(class_entry, "CONTEXT_MENU", &enum_case_CONTEXT_MENU_value);

	zval enum_case_INPUT_METHOD_value;
	ZVAL_LONG(&enum_case_INPUT_METHOD_value, 83);
	zend_enum_add_case_cstr(class_entry, "INPUT_METHOD", &enum_case_INPUT_METHOD_value);

	zval enum_case_TABLET_MOVE_value;
	ZVAL_LONG(&enum_case_TABLET_MOVE_value, 87);
	zend_enum_add_case_cstr(class_entry, "TABLET_MOVE", &enum_case_TABLET_MOVE_value);

	zval enum_case_LOCALE_CHANGE_value;
	ZVAL_LONG(&enum_case_LOCALE_CHANGE_value, 88);
	zend_enum_add_case_cstr(class_entry, "LOCALE_CHANGE", &enum_case_LOCALE_CHANGE_value);

	zval enum_case_LANGUAGE_CHANGE_value;
	ZVAL_LONG(&enum_case_LANGUAGE_CHANGE_value, 89);
	zend_enum_add_case_cstr(class_entry, "LANGUAGE_CHANGE", &enum_case_LANGUAGE_CHANGE_value);

	zval enum_case_LAYOUT_DIRECTION_CHANGE_value;
	ZVAL_LONG(&enum_case_LAYOUT_DIRECTION_CHANGE_value, 90);
	zend_enum_add_case_cstr(class_entry, "LAYOUT_DIRECTION_CHANGE", &enum_case_LAYOUT_DIRECTION_CHANGE_value);

	zval enum_case_STYLE_value;
	ZVAL_LONG(&enum_case_STYLE_value, 91);
	zend_enum_add_case_cstr(class_entry, "STYLE", &enum_case_STYLE_value);

	zval enum_case_TABLET_PRESS_value;
	ZVAL_LONG(&enum_case_TABLET_PRESS_value, 92);
	zend_enum_add_case_cstr(class_entry, "TABLET_PRESS", &enum_case_TABLET_PRESS_value);

	zval enum_case_TABLET_RELEASE_value;
	ZVAL_LONG(&enum_case_TABLET_RELEASE_value, 93);
	zend_enum_add_case_cstr(class_entry, "TABLET_RELEASE", &enum_case_TABLET_RELEASE_value);

	zval enum_case_OK_REQUEST_value;
	ZVAL_LONG(&enum_case_OK_REQUEST_value, 94);
	zend_enum_add_case_cstr(class_entry, "OK_REQUEST", &enum_case_OK_REQUEST_value);

	zval enum_case_HELP_REQUEST_value;
	ZVAL_LONG(&enum_case_HELP_REQUEST_value, 95);
	zend_enum_add_case_cstr(class_entry, "HELP_REQUEST", &enum_case_HELP_REQUEST_value);

	zval enum_case_ICON_DRAG_value;
	ZVAL_LONG(&enum_case_ICON_DRAG_value, 96);
	zend_enum_add_case_cstr(class_entry, "ICON_DRAG", &enum_case_ICON_DRAG_value);

	zval enum_case_FONT_CHANGE_value;
	ZVAL_LONG(&enum_case_FONT_CHANGE_value, 97);
	zend_enum_add_case_cstr(class_entry, "FONT_CHANGE", &enum_case_FONT_CHANGE_value);

	zval enum_case_ENABLED_CHANGE_value;
	ZVAL_LONG(&enum_case_ENABLED_CHANGE_value, 98);
	zend_enum_add_case_cstr(class_entry, "ENABLED_CHANGE", &enum_case_ENABLED_CHANGE_value);

	zval enum_case_ACTIVATION_CHANGE_value;
	ZVAL_LONG(&enum_case_ACTIVATION_CHANGE_value, 99);
	zend_enum_add_case_cstr(class_entry, "ACTIVATION_CHANGE", &enum_case_ACTIVATION_CHANGE_value);

	zval enum_case_STYLE_CHANGE_value;
	ZVAL_LONG(&enum_case_STYLE_CHANGE_value, 100);
	zend_enum_add_case_cstr(class_entry, "STYLE_CHANGE", &enum_case_STYLE_CHANGE_value);

	zval enum_case_ICON_TEXT_CHANGE_value;
	ZVAL_LONG(&enum_case_ICON_TEXT_CHANGE_value, 101);
	zend_enum_add_case_cstr(class_entry, "ICON_TEXT_CHANGE", &enum_case_ICON_TEXT_CHANGE_value);

	zval enum_case_MODIFIED_CHANGE_value;
	ZVAL_LONG(&enum_case_MODIFIED_CHANGE_value, 102);
	zend_enum_add_case_cstr(class_entry, "MODIFIED_CHANGE", &enum_case_MODIFIED_CHANGE_value);

	zval enum_case_MOUSE_TRACKING_CHANGE_value;
	ZVAL_LONG(&enum_case_MOUSE_TRACKING_CHANGE_value, 109);
	zend_enum_add_case_cstr(class_entry, "MOUSE_TRACKING_CHANGE", &enum_case_MOUSE_TRACKING_CHANGE_value);

	zval enum_case_WINDOW_BLOCKED_value;
	ZVAL_LONG(&enum_case_WINDOW_BLOCKED_value, 103);
	zend_enum_add_case_cstr(class_entry, "WINDOW_BLOCKED", &enum_case_WINDOW_BLOCKED_value);

	zval enum_case_WINDOW_UNBLOCKED_value;
	ZVAL_LONG(&enum_case_WINDOW_UNBLOCKED_value, 104);
	zend_enum_add_case_cstr(class_entry, "WINDOW_UNBLOCKED", &enum_case_WINDOW_UNBLOCKED_value);

	zval enum_case_WINDOW_STATE_CHANGE_value;
	ZVAL_LONG(&enum_case_WINDOW_STATE_CHANGE_value, 105);
	zend_enum_add_case_cstr(class_entry, "WINDOW_STATE_CHANGE", &enum_case_WINDOW_STATE_CHANGE_value);

	zval enum_case_READ_ONLY_CHANGE_value;
	ZVAL_LONG(&enum_case_READ_ONLY_CHANGE_value, 106);
	zend_enum_add_case_cstr(class_entry, "READ_ONLY_CHANGE", &enum_case_READ_ONLY_CHANGE_value);

	zval enum_case_TOOL_TIP_value;
	ZVAL_LONG(&enum_case_TOOL_TIP_value, 110);
	zend_enum_add_case_cstr(class_entry, "TOOL_TIP", &enum_case_TOOL_TIP_value);

	zval enum_case_WHATS_THIS_value;
	ZVAL_LONG(&enum_case_WHATS_THIS_value, 111);
	zend_enum_add_case_cstr(class_entry, "WHATS_THIS", &enum_case_WHATS_THIS_value);

	zval enum_case_STATUS_TIP_value;
	ZVAL_LONG(&enum_case_STATUS_TIP_value, 112);
	zend_enum_add_case_cstr(class_entry, "STATUS_TIP", &enum_case_STATUS_TIP_value);

	zval enum_case_ACTION_CHANGED_value;
	ZVAL_LONG(&enum_case_ACTION_CHANGED_value, 113);
	zend_enum_add_case_cstr(class_entry, "ACTION_CHANGED", &enum_case_ACTION_CHANGED_value);

	zval enum_case_ACTION_ADDED_value;
	ZVAL_LONG(&enum_case_ACTION_ADDED_value, 114);
	zend_enum_add_case_cstr(class_entry, "ACTION_ADDED", &enum_case_ACTION_ADDED_value);

	zval enum_case_ACTION_REMOVED_value;
	ZVAL_LONG(&enum_case_ACTION_REMOVED_value, 115);
	zend_enum_add_case_cstr(class_entry, "ACTION_REMOVED", &enum_case_ACTION_REMOVED_value);

	zval enum_case_FILE_OPEN_value;
	ZVAL_LONG(&enum_case_FILE_OPEN_value, 116);
	zend_enum_add_case_cstr(class_entry, "FILE_OPEN", &enum_case_FILE_OPEN_value);

	zval enum_case_SHORTCUT_value;
	ZVAL_LONG(&enum_case_SHORTCUT_value, 117);
	zend_enum_add_case_cstr(class_entry, "SHORTCUT", &enum_case_SHORTCUT_value);

	zval enum_case_SHORTCUT_OVERRIDE_value;
	ZVAL_LONG(&enum_case_SHORTCUT_OVERRIDE_value, 51);
	zend_enum_add_case_cstr(class_entry, "SHORTCUT_OVERRIDE", &enum_case_SHORTCUT_OVERRIDE_value);

	zval enum_case_WHATS_THIS_CLICKED_value;
	ZVAL_LONG(&enum_case_WHATS_THIS_CLICKED_value, 118);
	zend_enum_add_case_cstr(class_entry, "WHATS_THIS_CLICKED", &enum_case_WHATS_THIS_CLICKED_value);

	zval enum_case_TOOL_BAR_CHANGE_value;
	ZVAL_LONG(&enum_case_TOOL_BAR_CHANGE_value, 120);
	zend_enum_add_case_cstr(class_entry, "TOOL_BAR_CHANGE", &enum_case_TOOL_BAR_CHANGE_value);

	zval enum_case_APPLICATION_ACTIVATE_value;
	ZVAL_LONG(&enum_case_APPLICATION_ACTIVATE_value, 121);
	zend_enum_add_case_cstr(class_entry, "APPLICATION_ACTIVATE", &enum_case_APPLICATION_ACTIVATE_value);

	zval enum_case_APPLICATION_DEACTIVATE_value;
	ZVAL_LONG(&enum_case_APPLICATION_DEACTIVATE_value, 122);
	zend_enum_add_case_cstr(class_entry, "APPLICATION_DEACTIVATE", &enum_case_APPLICATION_DEACTIVATE_value);

	zval enum_case_QUERY_WHATS_THIS_value;
	ZVAL_LONG(&enum_case_QUERY_WHATS_THIS_value, 123);
	zend_enum_add_case_cstr(class_entry, "QUERY_WHATS_THIS", &enum_case_QUERY_WHATS_THIS_value);

	zval enum_case_ENTER_WHATS_THIS_MODE_value;
	ZVAL_LONG(&enum_case_ENTER_WHATS_THIS_MODE_value, 124);
	zend_enum_add_case_cstr(class_entry, "ENTER_WHATS_THIS_MODE", &enum_case_ENTER_WHATS_THIS_MODE_value);

	zval enum_case_LEAVE_WHATS_THIS_MODE_value;
	ZVAL_LONG(&enum_case_LEAVE_WHATS_THIS_MODE_value, 125);
	zend_enum_add_case_cstr(class_entry, "LEAVE_WHATS_THIS_MODE", &enum_case_LEAVE_WHATS_THIS_MODE_value);

	zval enum_case_Z_ORDER_CHANGE_value;
	ZVAL_LONG(&enum_case_Z_ORDER_CHANGE_value, 126);
	zend_enum_add_case_cstr(class_entry, "Z_ORDER_CHANGE", &enum_case_Z_ORDER_CHANGE_value);

	zval enum_case_HOVER_ENTER_value;
	ZVAL_LONG(&enum_case_HOVER_ENTER_value, 127);
	zend_enum_add_case_cstr(class_entry, "HOVER_ENTER", &enum_case_HOVER_ENTER_value);

	zval enum_case_HOVER_LEAVE_value;
	ZVAL_LONG(&enum_case_HOVER_LEAVE_value, 128);
	zend_enum_add_case_cstr(class_entry, "HOVER_LEAVE", &enum_case_HOVER_LEAVE_value);

	zval enum_case_HOVER_MOVE_value;
	ZVAL_LONG(&enum_case_HOVER_MOVE_value, 129);
	zend_enum_add_case_cstr(class_entry, "HOVER_MOVE", &enum_case_HOVER_MOVE_value);

	zval enum_case_ACCEPT_DROPS_CHANGE_value;
	ZVAL_LONG(&enum_case_ACCEPT_DROPS_CHANGE_value, 152);
	zend_enum_add_case_cstr(class_entry, "ACCEPT_DROPS_CHANGE", &enum_case_ACCEPT_DROPS_CHANGE_value);

	zval enum_case_ZERO_TIMER_EVENT_value;
	ZVAL_LONG(&enum_case_ZERO_TIMER_EVENT_value, 154);
	zend_enum_add_case_cstr(class_entry, "ZERO_TIMER_EVENT", &enum_case_ZERO_TIMER_EVENT_value);

	zval enum_case_GRAPHICS_SCENE_MOUSE_MOVE_value;
	ZVAL_LONG(&enum_case_GRAPHICS_SCENE_MOUSE_MOVE_value, 155);
	zend_enum_add_case_cstr(class_entry, "GRAPHICS_SCENE_MOUSE_MOVE", &enum_case_GRAPHICS_SCENE_MOUSE_MOVE_value);

	zval enum_case_GRAPHICS_SCENE_MOUSE_PRESS_value;
	ZVAL_LONG(&enum_case_GRAPHICS_SCENE_MOUSE_PRESS_value, 156);
	zend_enum_add_case_cstr(class_entry, "GRAPHICS_SCENE_MOUSE_PRESS", &enum_case_GRAPHICS_SCENE_MOUSE_PRESS_value);

	zval enum_case_GRAPHICS_SCENE_MOUSE_RELEASE_value;
	ZVAL_LONG(&enum_case_GRAPHICS_SCENE_MOUSE_RELEASE_value, 157);
	zend_enum_add_case_cstr(class_entry, "GRAPHICS_SCENE_MOUSE_RELEASE", &enum_case_GRAPHICS_SCENE_MOUSE_RELEASE_value);

	zval enum_case_GRAPHICS_SCENE_MOUSE_DOUBLE_CLICK_value;
	ZVAL_LONG(&enum_case_GRAPHICS_SCENE_MOUSE_DOUBLE_CLICK_value, 158);
	zend_enum_add_case_cstr(class_entry, "GRAPHICS_SCENE_MOUSE_DOUBLE_CLICK", &enum_case_GRAPHICS_SCENE_MOUSE_DOUBLE_CLICK_value);

	zval enum_case_GRAPHICS_SCENE_CONTEXT_MENU_value;
	ZVAL_LONG(&enum_case_GRAPHICS_SCENE_CONTEXT_MENU_value, 159);
	zend_enum_add_case_cstr(class_entry, "GRAPHICS_SCENE_CONTEXT_MENU", &enum_case_GRAPHICS_SCENE_CONTEXT_MENU_value);

	zval enum_case_GRAPHICS_SCENE_HOVER_ENTER_value;
	ZVAL_LONG(&enum_case_GRAPHICS_SCENE_HOVER_ENTER_value, 160);
	zend_enum_add_case_cstr(class_entry, "GRAPHICS_SCENE_HOVER_ENTER", &enum_case_GRAPHICS_SCENE_HOVER_ENTER_value);

	zval enum_case_GRAPHICS_SCENE_HOVER_MOVE_value;
	ZVAL_LONG(&enum_case_GRAPHICS_SCENE_HOVER_MOVE_value, 161);
	zend_enum_add_case_cstr(class_entry, "GRAPHICS_SCENE_HOVER_MOVE", &enum_case_GRAPHICS_SCENE_HOVER_MOVE_value);

	zval enum_case_GRAPHICS_SCENE_HOVER_LEAVE_value;
	ZVAL_LONG(&enum_case_GRAPHICS_SCENE_HOVER_LEAVE_value, 162);
	zend_enum_add_case_cstr(class_entry, "GRAPHICS_SCENE_HOVER_LEAVE", &enum_case_GRAPHICS_SCENE_HOVER_LEAVE_value);

	zval enum_case_GRAPHICS_SCENE_HELP_value;
	ZVAL_LONG(&enum_case_GRAPHICS_SCENE_HELP_value, 163);
	zend_enum_add_case_cstr(class_entry, "GRAPHICS_SCENE_HELP", &enum_case_GRAPHICS_SCENE_HELP_value);

	zval enum_case_GRAPHICS_SCENE_DRAG_ENTER_value;
	ZVAL_LONG(&enum_case_GRAPHICS_SCENE_DRAG_ENTER_value, 164);
	zend_enum_add_case_cstr(class_entry, "GRAPHICS_SCENE_DRAG_ENTER", &enum_case_GRAPHICS_SCENE_DRAG_ENTER_value);

	zval enum_case_GRAPHICS_SCENE_DRAG_MOVE_value;
	ZVAL_LONG(&enum_case_GRAPHICS_SCENE_DRAG_MOVE_value, 165);
	zend_enum_add_case_cstr(class_entry, "GRAPHICS_SCENE_DRAG_MOVE", &enum_case_GRAPHICS_SCENE_DRAG_MOVE_value);

	zval enum_case_GRAPHICS_SCENE_DRAG_LEAVE_value;
	ZVAL_LONG(&enum_case_GRAPHICS_SCENE_DRAG_LEAVE_value, 166);
	zend_enum_add_case_cstr(class_entry, "GRAPHICS_SCENE_DRAG_LEAVE", &enum_case_GRAPHICS_SCENE_DRAG_LEAVE_value);

	zval enum_case_GRAPHICS_SCENE_DROP_value;
	ZVAL_LONG(&enum_case_GRAPHICS_SCENE_DROP_value, 167);
	zend_enum_add_case_cstr(class_entry, "GRAPHICS_SCENE_DROP", &enum_case_GRAPHICS_SCENE_DROP_value);

	zval enum_case_GRAPHICS_SCENE_WHEEL_value;
	ZVAL_LONG(&enum_case_GRAPHICS_SCENE_WHEEL_value, 168);
	zend_enum_add_case_cstr(class_entry, "GRAPHICS_SCENE_WHEEL", &enum_case_GRAPHICS_SCENE_WHEEL_value);

	zval enum_case_GRAPHICS_SCENE_LEAVE_value;
	ZVAL_LONG(&enum_case_GRAPHICS_SCENE_LEAVE_value, 220);
	zend_enum_add_case_cstr(class_entry, "GRAPHICS_SCENE_LEAVE", &enum_case_GRAPHICS_SCENE_LEAVE_value);

	zval enum_case_KEYBOARD_LAYOUT_CHANGE_value;
	ZVAL_LONG(&enum_case_KEYBOARD_LAYOUT_CHANGE_value, 169);
	zend_enum_add_case_cstr(class_entry, "KEYBOARD_LAYOUT_CHANGE", &enum_case_KEYBOARD_LAYOUT_CHANGE_value);

	zval enum_case_DYNAMIC_PROPERTY_CHANGE_value;
	ZVAL_LONG(&enum_case_DYNAMIC_PROPERTY_CHANGE_value, 170);
	zend_enum_add_case_cstr(class_entry, "DYNAMIC_PROPERTY_CHANGE", &enum_case_DYNAMIC_PROPERTY_CHANGE_value);

	zval enum_case_TABLET_ENTER_PROXIMITY_value;
	ZVAL_LONG(&enum_case_TABLET_ENTER_PROXIMITY_value, 171);
	zend_enum_add_case_cstr(class_entry, "TABLET_ENTER_PROXIMITY", &enum_case_TABLET_ENTER_PROXIMITY_value);

	zval enum_case_TABLET_LEAVE_PROXIMITY_value;
	ZVAL_LONG(&enum_case_TABLET_LEAVE_PROXIMITY_value, 172);
	zend_enum_add_case_cstr(class_entry, "TABLET_LEAVE_PROXIMITY", &enum_case_TABLET_LEAVE_PROXIMITY_value);

	zval enum_case_NON_CLIENT_AREA_MOUSE_MOVE_value;
	ZVAL_LONG(&enum_case_NON_CLIENT_AREA_MOUSE_MOVE_value, 173);
	zend_enum_add_case_cstr(class_entry, "NON_CLIENT_AREA_MOUSE_MOVE", &enum_case_NON_CLIENT_AREA_MOUSE_MOVE_value);

	zval enum_case_NON_CLIENT_AREA_MOUSE_BUTTON_PRESS_value;
	ZVAL_LONG(&enum_case_NON_CLIENT_AREA_MOUSE_BUTTON_PRESS_value, 174);
	zend_enum_add_case_cstr(class_entry, "NON_CLIENT_AREA_MOUSE_BUTTON_PRESS", &enum_case_NON_CLIENT_AREA_MOUSE_BUTTON_PRESS_value);

	zval enum_case_NON_CLIENT_AREA_MOUSE_BUTTON_RELEASE_value;
	ZVAL_LONG(&enum_case_NON_CLIENT_AREA_MOUSE_BUTTON_RELEASE_value, 175);
	zend_enum_add_case_cstr(class_entry, "NON_CLIENT_AREA_MOUSE_BUTTON_RELEASE", &enum_case_NON_CLIENT_AREA_MOUSE_BUTTON_RELEASE_value);

	zval enum_case_NON_CLIENT_AREA_MOUSE_BUTTON_DBL_CLICK_value;
	ZVAL_LONG(&enum_case_NON_CLIENT_AREA_MOUSE_BUTTON_DBL_CLICK_value, 176);
	zend_enum_add_case_cstr(class_entry, "NON_CLIENT_AREA_MOUSE_BUTTON_DBL_CLICK", &enum_case_NON_CLIENT_AREA_MOUSE_BUTTON_DBL_CLICK_value);

	zval enum_case_MAC_SIZE_CHANGE_value;
	ZVAL_LONG(&enum_case_MAC_SIZE_CHANGE_value, 177);
	zend_enum_add_case_cstr(class_entry, "MAC_SIZE_CHANGE", &enum_case_MAC_SIZE_CHANGE_value);

	zval enum_case_CONTENTS_RECT_CHANGE_value;
	ZVAL_LONG(&enum_case_CONTENTS_RECT_CHANGE_value, 178);
	zend_enum_add_case_cstr(class_entry, "CONTENTS_RECT_CHANGE", &enum_case_CONTENTS_RECT_CHANGE_value);

	zval enum_case_MAC_GL_WINDOW_CHANGE_value;
	ZVAL_LONG(&enum_case_MAC_GL_WINDOW_CHANGE_value, 179);
	zend_enum_add_case_cstr(class_entry, "MAC_GL_WINDOW_CHANGE", &enum_case_MAC_GL_WINDOW_CHANGE_value);

	zval enum_case_FUTURE_CALL_OUT_value;
	ZVAL_LONG(&enum_case_FUTURE_CALL_OUT_value, 180);
	zend_enum_add_case_cstr(class_entry, "FUTURE_CALL_OUT", &enum_case_FUTURE_CALL_OUT_value);

	zval enum_case_GRAPHICS_SCENE_RESIZE_value;
	ZVAL_LONG(&enum_case_GRAPHICS_SCENE_RESIZE_value, 181);
	zend_enum_add_case_cstr(class_entry, "GRAPHICS_SCENE_RESIZE", &enum_case_GRAPHICS_SCENE_RESIZE_value);

	zval enum_case_GRAPHICS_SCENE_MOVE_value;
	ZVAL_LONG(&enum_case_GRAPHICS_SCENE_MOVE_value, 182);
	zend_enum_add_case_cstr(class_entry, "GRAPHICS_SCENE_MOVE", &enum_case_GRAPHICS_SCENE_MOVE_value);

	zval enum_case_CURSOR_CHANGE_value;
	ZVAL_LONG(&enum_case_CURSOR_CHANGE_value, 183);
	zend_enum_add_case_cstr(class_entry, "CURSOR_CHANGE", &enum_case_CURSOR_CHANGE_value);

	zval enum_case_TOOL_TIP_CHANGE_value;
	ZVAL_LONG(&enum_case_TOOL_TIP_CHANGE_value, 184);
	zend_enum_add_case_cstr(class_entry, "TOOL_TIP_CHANGE", &enum_case_TOOL_TIP_CHANGE_value);

	zval enum_case_NETWORK_REPLY_UPDATED_value;
	ZVAL_LONG(&enum_case_NETWORK_REPLY_UPDATED_value, 185);
	zend_enum_add_case_cstr(class_entry, "NETWORK_REPLY_UPDATED", &enum_case_NETWORK_REPLY_UPDATED_value);

	zval enum_case_GRAB_MOUSE_value;
	ZVAL_LONG(&enum_case_GRAB_MOUSE_value, 186);
	zend_enum_add_case_cstr(class_entry, "GRAB_MOUSE", &enum_case_GRAB_MOUSE_value);

	zval enum_case_UNGRAB_MOUSE_value;
	ZVAL_LONG(&enum_case_UNGRAB_MOUSE_value, 187);
	zend_enum_add_case_cstr(class_entry, "UNGRAB_MOUSE", &enum_case_UNGRAB_MOUSE_value);

	zval enum_case_GRAB_KEYBOARD_value;
	ZVAL_LONG(&enum_case_GRAB_KEYBOARD_value, 188);
	zend_enum_add_case_cstr(class_entry, "GRAB_KEYBOARD", &enum_case_GRAB_KEYBOARD_value);

	zval enum_case_UNGRAB_KEYBOARD_value;
	ZVAL_LONG(&enum_case_UNGRAB_KEYBOARD_value, 189);
	zend_enum_add_case_cstr(class_entry, "UNGRAB_KEYBOARD", &enum_case_UNGRAB_KEYBOARD_value);

	zval enum_case_STATE_MACHINE_SIGNAL_value;
	ZVAL_LONG(&enum_case_STATE_MACHINE_SIGNAL_value, 192);
	zend_enum_add_case_cstr(class_entry, "STATE_MACHINE_SIGNAL", &enum_case_STATE_MACHINE_SIGNAL_value);

	zval enum_case_STATE_MACHINE_WRAPPED_value;
	ZVAL_LONG(&enum_case_STATE_MACHINE_WRAPPED_value, 193);
	zend_enum_add_case_cstr(class_entry, "STATE_MACHINE_WRAPPED", &enum_case_STATE_MACHINE_WRAPPED_value);

	zval enum_case_TOUCH_BEGIN_value;
	ZVAL_LONG(&enum_case_TOUCH_BEGIN_value, 194);
	zend_enum_add_case_cstr(class_entry, "TOUCH_BEGIN", &enum_case_TOUCH_BEGIN_value);

	zval enum_case_TOUCH_UPDATE_value;
	ZVAL_LONG(&enum_case_TOUCH_UPDATE_value, 195);
	zend_enum_add_case_cstr(class_entry, "TOUCH_UPDATE", &enum_case_TOUCH_UPDATE_value);

	zval enum_case_TOUCH_END_value;
	ZVAL_LONG(&enum_case_TOUCH_END_value, 196);
	zend_enum_add_case_cstr(class_entry, "TOUCH_END", &enum_case_TOUCH_END_value);

	zval enum_case_NATIVE_GESTURE_value;
	ZVAL_LONG(&enum_case_NATIVE_GESTURE_value, 197);
	zend_enum_add_case_cstr(class_entry, "NATIVE_GESTURE", &enum_case_NATIVE_GESTURE_value);

	zval enum_case_REQUEST_SOFTWARE_INPUT_PANEL_value;
	ZVAL_LONG(&enum_case_REQUEST_SOFTWARE_INPUT_PANEL_value, 199);
	zend_enum_add_case_cstr(class_entry, "REQUEST_SOFTWARE_INPUT_PANEL", &enum_case_REQUEST_SOFTWARE_INPUT_PANEL_value);

	zval enum_case_CLOSE_SOFTWARE_INPUT_PANEL_value;
	ZVAL_LONG(&enum_case_CLOSE_SOFTWARE_INPUT_PANEL_value, 200);
	zend_enum_add_case_cstr(class_entry, "CLOSE_SOFTWARE_INPUT_PANEL", &enum_case_CLOSE_SOFTWARE_INPUT_PANEL_value);

	zval enum_case_WIN_ID_CHANGE_value;
	ZVAL_LONG(&enum_case_WIN_ID_CHANGE_value, 203);
	zend_enum_add_case_cstr(class_entry, "WIN_ID_CHANGE", &enum_case_WIN_ID_CHANGE_value);

	zval enum_case_GESTURE_value;
	ZVAL_LONG(&enum_case_GESTURE_value, 198);
	zend_enum_add_case_cstr(class_entry, "GESTURE", &enum_case_GESTURE_value);

	zval enum_case_GESTURE_OVERRIDE_value;
	ZVAL_LONG(&enum_case_GESTURE_OVERRIDE_value, 202);
	zend_enum_add_case_cstr(class_entry, "GESTURE_OVERRIDE", &enum_case_GESTURE_OVERRIDE_value);

	zval enum_case_SCROLL_PREPARE_value;
	ZVAL_LONG(&enum_case_SCROLL_PREPARE_value, 204);
	zend_enum_add_case_cstr(class_entry, "SCROLL_PREPARE", &enum_case_SCROLL_PREPARE_value);

	zval enum_case_SCROLL_value;
	ZVAL_LONG(&enum_case_SCROLL_value, 205);
	zend_enum_add_case_cstr(class_entry, "SCROLL", &enum_case_SCROLL_value);

	zval enum_case_EXPOSE_value;
	ZVAL_LONG(&enum_case_EXPOSE_value, 206);
	zend_enum_add_case_cstr(class_entry, "EXPOSE", &enum_case_EXPOSE_value);

	zval enum_case_INPUT_METHOD_QUERY_value;
	ZVAL_LONG(&enum_case_INPUT_METHOD_QUERY_value, 207);
	zend_enum_add_case_cstr(class_entry, "INPUT_METHOD_QUERY", &enum_case_INPUT_METHOD_QUERY_value);

	zval enum_case_ORIENTATION_CHANGE_value;
	ZVAL_LONG(&enum_case_ORIENTATION_CHANGE_value, 208);
	zend_enum_add_case_cstr(class_entry, "ORIENTATION_CHANGE", &enum_case_ORIENTATION_CHANGE_value);

	zval enum_case_TOUCH_CANCEL_value;
	ZVAL_LONG(&enum_case_TOUCH_CANCEL_value, 209);
	zend_enum_add_case_cstr(class_entry, "TOUCH_CANCEL", &enum_case_TOUCH_CANCEL_value);

	zval enum_case_THEME_CHANGE_value;
	ZVAL_LONG(&enum_case_THEME_CHANGE_value, 210);
	zend_enum_add_case_cstr(class_entry, "THEME_CHANGE", &enum_case_THEME_CHANGE_value);

	zval enum_case_SOCK_CLOSE_value;
	ZVAL_LONG(&enum_case_SOCK_CLOSE_value, 211);
	zend_enum_add_case_cstr(class_entry, "SOCK_CLOSE", &enum_case_SOCK_CLOSE_value);

	zval enum_case_PLATFORM_PANEL_value;
	ZVAL_LONG(&enum_case_PLATFORM_PANEL_value, 212);
	zend_enum_add_case_cstr(class_entry, "PLATFORM_PANEL", &enum_case_PLATFORM_PANEL_value);

	zval enum_case_STYLE_ANIMATION_UPDATE_value;
	ZVAL_LONG(&enum_case_STYLE_ANIMATION_UPDATE_value, 213);
	zend_enum_add_case_cstr(class_entry, "STYLE_ANIMATION_UPDATE", &enum_case_STYLE_ANIMATION_UPDATE_value);

	zval enum_case_APPLICATION_STATE_CHANGE_value;
	ZVAL_LONG(&enum_case_APPLICATION_STATE_CHANGE_value, 214);
	zend_enum_add_case_cstr(class_entry, "APPLICATION_STATE_CHANGE", &enum_case_APPLICATION_STATE_CHANGE_value);

	zval enum_case_WINDOW_CHANGE_INTERNAL_value;
	ZVAL_LONG(&enum_case_WINDOW_CHANGE_INTERNAL_value, 215);
	zend_enum_add_case_cstr(class_entry, "WINDOW_CHANGE_INTERNAL", &enum_case_WINDOW_CHANGE_INTERNAL_value);

	zval enum_case_SCREEN_CHANGE_INTERNAL_value;
	ZVAL_LONG(&enum_case_SCREEN_CHANGE_INTERNAL_value, 216);
	zend_enum_add_case_cstr(class_entry, "SCREEN_CHANGE_INTERNAL", &enum_case_SCREEN_CHANGE_INTERNAL_value);

	zval enum_case_PLATFORM_SURFACE_value;
	ZVAL_LONG(&enum_case_PLATFORM_SURFACE_value, 217);
	zend_enum_add_case_cstr(class_entry, "PLATFORM_SURFACE", &enum_case_PLATFORM_SURFACE_value);

	zval enum_case_POINTER_value;
	ZVAL_LONG(&enum_case_POINTER_value, 218);
	zend_enum_add_case_cstr(class_entry, "POINTER", &enum_case_POINTER_value);

	zval enum_case_TABLET_TRACKING_CHANGE_value;
	ZVAL_LONG(&enum_case_TABLET_TRACKING_CHANGE_value, 219);
	zend_enum_add_case_cstr(class_entry, "TABLET_TRACKING_CHANGE", &enum_case_TABLET_TRACKING_CHANGE_value);

	zval enum_case_WINDOW_ABOUT_TO_CHANGE_INTERNAL_value;
	ZVAL_LONG(&enum_case_WINDOW_ABOUT_TO_CHANGE_INTERNAL_value, 221);
	zend_enum_add_case_cstr(class_entry, "WINDOW_ABOUT_TO_CHANGE_INTERNAL", &enum_case_WINDOW_ABOUT_TO_CHANGE_INTERNAL_value);

	zval enum_case_DEVICE_PIXEL_RATIO_CHANGE_value;
	ZVAL_LONG(&enum_case_DEVICE_PIXEL_RATIO_CHANGE_value, 222);
	zend_enum_add_case_cstr(class_entry, "DEVICE_PIXEL_RATIO_CHANGE", &enum_case_DEVICE_PIXEL_RATIO_CHANGE_value);

	zval enum_case_CHILD_WINDOW_ADDED_value;
	ZVAL_LONG(&enum_case_CHILD_WINDOW_ADDED_value, 223);
	zend_enum_add_case_cstr(class_entry, "CHILD_WINDOW_ADDED", &enum_case_CHILD_WINDOW_ADDED_value);

	zval enum_case_CHILD_WINDOW_REMOVED_value;
	ZVAL_LONG(&enum_case_CHILD_WINDOW_REMOVED_value, 224);
	zend_enum_add_case_cstr(class_entry, "CHILD_WINDOW_REMOVED", &enum_case_CHILD_WINDOW_REMOVED_value);

	zval enum_case_PARENT_WINDOW_ABOUT_TO_CHANGE_value;
	ZVAL_LONG(&enum_case_PARENT_WINDOW_ABOUT_TO_CHANGE_value, 225);
	zend_enum_add_case_cstr(class_entry, "PARENT_WINDOW_ABOUT_TO_CHANGE", &enum_case_PARENT_WINDOW_ABOUT_TO_CHANGE_value);

	zval enum_case_PARENT_WINDOW_CHANGE_value;
	ZVAL_LONG(&enum_case_PARENT_WINDOW_CHANGE_value, 226);
	zend_enum_add_case_cstr(class_entry, "PARENT_WINDOW_CHANGE", &enum_case_PARENT_WINDOW_CHANGE_value);

	zval enum_case_USER_value;
	ZVAL_LONG(&enum_case_USER_value, 1000);
	zend_enum_add_case_cstr(class_entry, "USER", &enum_case_USER_value);

	zval enum_case_MAX_USER_value;
	ZVAL_LONG(&enum_case_MAX_USER_value, 65535);
	zend_enum_add_case_cstr(class_entry, "MAX_USER", &enum_case_MAX_USER_value);

	return class_entry;
}
