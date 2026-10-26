/* This is a generated file, edit the .stub.php file instead.
 * Stub hash: 7a2947fb2507d537e9f516f527355ff1e41986b5 */

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_QStyle___construct, 0, 0, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_QStyle_subElementRect, 0, 2, QRect, 0)
	ZEND_ARG_OBJ_INFO(0, subElement, QStyle\\SubElement, 0)
	ZEND_ARG_OBJ_INFO(0, option, QStyleOption, 0)
	ZEND_ARG_OBJ_INFO_WITH_DEFAULT_VALUE(0, widget, QWidget, 1, "null")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_QStyleOption___construct, 0, 0, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, version, IS_LONG, 0, "1")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, type, IS_LONG, 0, "0")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_QStyleOption_initFrom, 0, 1, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, widget, QWidget, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_QStyleOptionButton___construct arginfo_class_QStyle___construct

ZEND_METHOD(QStyle, __construct);
ZEND_METHOD(QStyle, subElementRect);
ZEND_METHOD(QStyleOption, __construct);
ZEND_METHOD(QStyleOption, initFrom);
ZEND_METHOD(QStyleOptionButton, __construct);

static const zend_function_entry class_QStyle_methods[] = {
	ZEND_ME(QStyle, __construct, arginfo_class_QStyle___construct, ZEND_ACC_PRIVATE)
	ZEND_ME(QStyle, subElementRect, arginfo_class_QStyle_subElementRect, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static const zend_function_entry class_QStyleOption_methods[] = {
	ZEND_ME(QStyleOption, __construct, arginfo_class_QStyleOption___construct, ZEND_ACC_PUBLIC)
	ZEND_ME(QStyleOption, initFrom, arginfo_class_QStyleOption_initFrom, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static const zend_function_entry class_QStyleOptionButton_methods[] = {
	ZEND_ME(QStyleOptionButton, __construct, arginfo_class_QStyleOptionButton___construct, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static zend_class_entry *register_class_QStyle_SubElement(void)
{
	zend_class_entry *class_entry = zend_register_internal_enum("QStyle\\SubElement", IS_LONG, NULL);

	zval enum_case_PUSH_BUTTON_CONTENTS_value;
	ZVAL_LONG(&enum_case_PUSH_BUTTON_CONTENTS_value, 0);
	zend_enum_add_case_cstr(class_entry, "PUSH_BUTTON_CONTENTS", &enum_case_PUSH_BUTTON_CONTENTS_value);

	zval enum_case_PUSH_BUTTON_FOCUS_RECT_value;
	ZVAL_LONG(&enum_case_PUSH_BUTTON_FOCUS_RECT_value, 1);
	zend_enum_add_case_cstr(class_entry, "PUSH_BUTTON_FOCUS_RECT", &enum_case_PUSH_BUTTON_FOCUS_RECT_value);

	zval enum_case_CHECK_BOX_INDICATOR_value;
	ZVAL_LONG(&enum_case_CHECK_BOX_INDICATOR_value, 2);
	zend_enum_add_case_cstr(class_entry, "CHECK_BOX_INDICATOR", &enum_case_CHECK_BOX_INDICATOR_value);

	zval enum_case_CHECK_BOX_CONTENTS_value;
	ZVAL_LONG(&enum_case_CHECK_BOX_CONTENTS_value, 3);
	zend_enum_add_case_cstr(class_entry, "CHECK_BOX_CONTENTS", &enum_case_CHECK_BOX_CONTENTS_value);

	zval enum_case_CHECK_BOX_FOCUS_RECT_value;
	ZVAL_LONG(&enum_case_CHECK_BOX_FOCUS_RECT_value, 4);
	zend_enum_add_case_cstr(class_entry, "CHECK_BOX_FOCUS_RECT", &enum_case_CHECK_BOX_FOCUS_RECT_value);

	zval enum_case_CHECK_BOX_CLICK_RECT_value;
	ZVAL_LONG(&enum_case_CHECK_BOX_CLICK_RECT_value, 5);
	zend_enum_add_case_cstr(class_entry, "CHECK_BOX_CLICK_RECT", &enum_case_CHECK_BOX_CLICK_RECT_value);

	zval enum_case_RADIO_BUTTON_INDICATOR_value;
	ZVAL_LONG(&enum_case_RADIO_BUTTON_INDICATOR_value, 6);
	zend_enum_add_case_cstr(class_entry, "RADIO_BUTTON_INDICATOR", &enum_case_RADIO_BUTTON_INDICATOR_value);

	zval enum_case_RADIO_BUTTON_CONTENTS_value;
	ZVAL_LONG(&enum_case_RADIO_BUTTON_CONTENTS_value, 7);
	zend_enum_add_case_cstr(class_entry, "RADIO_BUTTON_CONTENTS", &enum_case_RADIO_BUTTON_CONTENTS_value);

	zval enum_case_RADIO_BUTTON_FOCUS_RECT_value;
	ZVAL_LONG(&enum_case_RADIO_BUTTON_FOCUS_RECT_value, 8);
	zend_enum_add_case_cstr(class_entry, "RADIO_BUTTON_FOCUS_RECT", &enum_case_RADIO_BUTTON_FOCUS_RECT_value);

	zval enum_case_RADIO_BUTTON_CLICK_RECT_value;
	ZVAL_LONG(&enum_case_RADIO_BUTTON_CLICK_RECT_value, 9);
	zend_enum_add_case_cstr(class_entry, "RADIO_BUTTON_CLICK_RECT", &enum_case_RADIO_BUTTON_CLICK_RECT_value);

	zval enum_case_COMBO_BOX_FOCUS_RECT_value;
	ZVAL_LONG(&enum_case_COMBO_BOX_FOCUS_RECT_value, 10);
	zend_enum_add_case_cstr(class_entry, "COMBO_BOX_FOCUS_RECT", &enum_case_COMBO_BOX_FOCUS_RECT_value);

	zval enum_case_SLIDER_FOCUS_RECT_value;
	ZVAL_LONG(&enum_case_SLIDER_FOCUS_RECT_value, 11);
	zend_enum_add_case_cstr(class_entry, "SLIDER_FOCUS_RECT", &enum_case_SLIDER_FOCUS_RECT_value);

	zval enum_case_PROGRESS_BAR_GROOVE_value;
	ZVAL_LONG(&enum_case_PROGRESS_BAR_GROOVE_value, 12);
	zend_enum_add_case_cstr(class_entry, "PROGRESS_BAR_GROOVE", &enum_case_PROGRESS_BAR_GROOVE_value);

	zval enum_case_PROGRESS_BAR_CONTENTS_value;
	ZVAL_LONG(&enum_case_PROGRESS_BAR_CONTENTS_value, 13);
	zend_enum_add_case_cstr(class_entry, "PROGRESS_BAR_CONTENTS", &enum_case_PROGRESS_BAR_CONTENTS_value);

	zval enum_case_PROGRESS_BAR_LABEL_value;
	ZVAL_LONG(&enum_case_PROGRESS_BAR_LABEL_value, 14);
	zend_enum_add_case_cstr(class_entry, "PROGRESS_BAR_LABEL", &enum_case_PROGRESS_BAR_LABEL_value);

	zval enum_case_TOOL_BOX_TAB_CONTENTS_value;
	ZVAL_LONG(&enum_case_TOOL_BOX_TAB_CONTENTS_value, 15);
	zend_enum_add_case_cstr(class_entry, "TOOL_BOX_TAB_CONTENTS", &enum_case_TOOL_BOX_TAB_CONTENTS_value);

	zval enum_case_HEADER_LABEL_value;
	ZVAL_LONG(&enum_case_HEADER_LABEL_value, 16);
	zend_enum_add_case_cstr(class_entry, "HEADER_LABEL", &enum_case_HEADER_LABEL_value);

	zval enum_case_HEADER_ARROW_value;
	ZVAL_LONG(&enum_case_HEADER_ARROW_value, 17);
	zend_enum_add_case_cstr(class_entry, "HEADER_ARROW", &enum_case_HEADER_ARROW_value);

	zval enum_case_TAB_WIDGET_TAB_BAR_value;
	ZVAL_LONG(&enum_case_TAB_WIDGET_TAB_BAR_value, 18);
	zend_enum_add_case_cstr(class_entry, "TAB_WIDGET_TAB_BAR", &enum_case_TAB_WIDGET_TAB_BAR_value);

	zval enum_case_TAB_WIDGET_TAB_PANE_value;
	ZVAL_LONG(&enum_case_TAB_WIDGET_TAB_PANE_value, 19);
	zend_enum_add_case_cstr(class_entry, "TAB_WIDGET_TAB_PANE", &enum_case_TAB_WIDGET_TAB_PANE_value);

	zval enum_case_TAB_WIDGET_TAB_CONTENTS_value;
	ZVAL_LONG(&enum_case_TAB_WIDGET_TAB_CONTENTS_value, 20);
	zend_enum_add_case_cstr(class_entry, "TAB_WIDGET_TAB_CONTENTS", &enum_case_TAB_WIDGET_TAB_CONTENTS_value);

	zval enum_case_TAB_WIDGET_LEFT_CORNER_value;
	ZVAL_LONG(&enum_case_TAB_WIDGET_LEFT_CORNER_value, 21);
	zend_enum_add_case_cstr(class_entry, "TAB_WIDGET_LEFT_CORNER", &enum_case_TAB_WIDGET_LEFT_CORNER_value);

	zval enum_case_TAB_WIDGET_RIGHT_CORNER_value;
	ZVAL_LONG(&enum_case_TAB_WIDGET_RIGHT_CORNER_value, 22);
	zend_enum_add_case_cstr(class_entry, "TAB_WIDGET_RIGHT_CORNER", &enum_case_TAB_WIDGET_RIGHT_CORNER_value);

	zval enum_case_ITEM_VIEW_ITEM_CHECK_INDICATOR_value;
	ZVAL_LONG(&enum_case_ITEM_VIEW_ITEM_CHECK_INDICATOR_value, 23);
	zend_enum_add_case_cstr(class_entry, "ITEM_VIEW_ITEM_CHECK_INDICATOR", &enum_case_ITEM_VIEW_ITEM_CHECK_INDICATOR_value);

	zval enum_case_TAB_BAR_TEAR_INDICATOR_value;
	ZVAL_LONG(&enum_case_TAB_BAR_TEAR_INDICATOR_value, 24);
	zend_enum_add_case_cstr(class_entry, "TAB_BAR_TEAR_INDICATOR", &enum_case_TAB_BAR_TEAR_INDICATOR_value);

	zval enum_case_TREE_VIEW_DISCLOSURE_ITEM_value;
	ZVAL_LONG(&enum_case_TREE_VIEW_DISCLOSURE_ITEM_value, 25);
	zend_enum_add_case_cstr(class_entry, "TREE_VIEW_DISCLOSURE_ITEM", &enum_case_TREE_VIEW_DISCLOSURE_ITEM_value);

	zval enum_case_LINE_EDIT_CONTENTS_value;
	ZVAL_LONG(&enum_case_LINE_EDIT_CONTENTS_value, 26);
	zend_enum_add_case_cstr(class_entry, "LINE_EDIT_CONTENTS", &enum_case_LINE_EDIT_CONTENTS_value);

	zval enum_case_FRAME_CONTENTS_value;
	ZVAL_LONG(&enum_case_FRAME_CONTENTS_value, 27);
	zend_enum_add_case_cstr(class_entry, "FRAME_CONTENTS", &enum_case_FRAME_CONTENTS_value);

	zval enum_case_DOCK_WIDGET_CLOSE_BUTTON_value;
	ZVAL_LONG(&enum_case_DOCK_WIDGET_CLOSE_BUTTON_value, 28);
	zend_enum_add_case_cstr(class_entry, "DOCK_WIDGET_CLOSE_BUTTON", &enum_case_DOCK_WIDGET_CLOSE_BUTTON_value);

	zval enum_case_DOCK_WIDGET_FLOAT_BUTTON_value;
	ZVAL_LONG(&enum_case_DOCK_WIDGET_FLOAT_BUTTON_value, 29);
	zend_enum_add_case_cstr(class_entry, "DOCK_WIDGET_FLOAT_BUTTON", &enum_case_DOCK_WIDGET_FLOAT_BUTTON_value);

	zval enum_case_DOCK_WIDGET_TITLE_BAR_TEXT_value;
	ZVAL_LONG(&enum_case_DOCK_WIDGET_TITLE_BAR_TEXT_value, 30);
	zend_enum_add_case_cstr(class_entry, "DOCK_WIDGET_TITLE_BAR_TEXT", &enum_case_DOCK_WIDGET_TITLE_BAR_TEXT_value);

	zval enum_case_DOCK_WIDGET_ICON_value;
	ZVAL_LONG(&enum_case_DOCK_WIDGET_ICON_value, 31);
	zend_enum_add_case_cstr(class_entry, "DOCK_WIDGET_ICON", &enum_case_DOCK_WIDGET_ICON_value);

	zval enum_case_CHECK_BOX_LAYOUT_ITEM_value;
	ZVAL_LONG(&enum_case_CHECK_BOX_LAYOUT_ITEM_value, 32);
	zend_enum_add_case_cstr(class_entry, "CHECK_BOX_LAYOUT_ITEM", &enum_case_CHECK_BOX_LAYOUT_ITEM_value);

	zval enum_case_COMBO_BOX_LAYOUT_ITEM_value;
	ZVAL_LONG(&enum_case_COMBO_BOX_LAYOUT_ITEM_value, 33);
	zend_enum_add_case_cstr(class_entry, "COMBO_BOX_LAYOUT_ITEM", &enum_case_COMBO_BOX_LAYOUT_ITEM_value);

	zval enum_case_DATE_TIME_EDIT_LAYOUT_ITEM_value;
	ZVAL_LONG(&enum_case_DATE_TIME_EDIT_LAYOUT_ITEM_value, 34);
	zend_enum_add_case_cstr(class_entry, "DATE_TIME_EDIT_LAYOUT_ITEM", &enum_case_DATE_TIME_EDIT_LAYOUT_ITEM_value);

	zval enum_case_LABEL_LAYOUT_ITEM_value;
	ZVAL_LONG(&enum_case_LABEL_LAYOUT_ITEM_value, 35);
	zend_enum_add_case_cstr(class_entry, "LABEL_LAYOUT_ITEM", &enum_case_LABEL_LAYOUT_ITEM_value);

	zval enum_case_PROGRESS_BAR_LAYOUT_ITEM_value;
	ZVAL_LONG(&enum_case_PROGRESS_BAR_LAYOUT_ITEM_value, 36);
	zend_enum_add_case_cstr(class_entry, "PROGRESS_BAR_LAYOUT_ITEM", &enum_case_PROGRESS_BAR_LAYOUT_ITEM_value);

	zval enum_case_PUSH_BUTTON_LAYOUT_ITEM_value;
	ZVAL_LONG(&enum_case_PUSH_BUTTON_LAYOUT_ITEM_value, 37);
	zend_enum_add_case_cstr(class_entry, "PUSH_BUTTON_LAYOUT_ITEM", &enum_case_PUSH_BUTTON_LAYOUT_ITEM_value);

	zval enum_case_RADIO_BUTTON_LAYOUT_ITEM_value;
	ZVAL_LONG(&enum_case_RADIO_BUTTON_LAYOUT_ITEM_value, 38);
	zend_enum_add_case_cstr(class_entry, "RADIO_BUTTON_LAYOUT_ITEM", &enum_case_RADIO_BUTTON_LAYOUT_ITEM_value);

	zval enum_case_SLIDER_LAYOUT_ITEM_value;
	ZVAL_LONG(&enum_case_SLIDER_LAYOUT_ITEM_value, 39);
	zend_enum_add_case_cstr(class_entry, "SLIDER_LAYOUT_ITEM", &enum_case_SLIDER_LAYOUT_ITEM_value);

	zval enum_case_SPIN_BOX_LAYOUT_ITEM_value;
	ZVAL_LONG(&enum_case_SPIN_BOX_LAYOUT_ITEM_value, 40);
	zend_enum_add_case_cstr(class_entry, "SPIN_BOX_LAYOUT_ITEM", &enum_case_SPIN_BOX_LAYOUT_ITEM_value);

	zval enum_case_TOOL_BUTTON_LAYOUT_ITEM_value;
	ZVAL_LONG(&enum_case_TOOL_BUTTON_LAYOUT_ITEM_value, 41);
	zend_enum_add_case_cstr(class_entry, "TOOL_BUTTON_LAYOUT_ITEM", &enum_case_TOOL_BUTTON_LAYOUT_ITEM_value);

	zval enum_case_FRAME_LAYOUT_ITEM_value;
	ZVAL_LONG(&enum_case_FRAME_LAYOUT_ITEM_value, 42);
	zend_enum_add_case_cstr(class_entry, "FRAME_LAYOUT_ITEM", &enum_case_FRAME_LAYOUT_ITEM_value);

	zval enum_case_GROUP_BOX_LAYOUT_ITEM_value;
	ZVAL_LONG(&enum_case_GROUP_BOX_LAYOUT_ITEM_value, 43);
	zend_enum_add_case_cstr(class_entry, "GROUP_BOX_LAYOUT_ITEM", &enum_case_GROUP_BOX_LAYOUT_ITEM_value);

	zval enum_case_TAB_WIDGET_LAYOUT_ITEM_value;
	ZVAL_LONG(&enum_case_TAB_WIDGET_LAYOUT_ITEM_value, 44);
	zend_enum_add_case_cstr(class_entry, "TAB_WIDGET_LAYOUT_ITEM", &enum_case_TAB_WIDGET_LAYOUT_ITEM_value);

	zval enum_case_ITEM_VIEW_ITEM_DECORATION_value;
	ZVAL_LONG(&enum_case_ITEM_VIEW_ITEM_DECORATION_value, 45);
	zend_enum_add_case_cstr(class_entry, "ITEM_VIEW_ITEM_DECORATION", &enum_case_ITEM_VIEW_ITEM_DECORATION_value);

	zval enum_case_ITEM_VIEW_ITEM_TEXT_value;
	ZVAL_LONG(&enum_case_ITEM_VIEW_ITEM_TEXT_value, 46);
	zend_enum_add_case_cstr(class_entry, "ITEM_VIEW_ITEM_TEXT", &enum_case_ITEM_VIEW_ITEM_TEXT_value);

	zval enum_case_ITEM_VIEW_ITEM_FOCUS_RECT_value;
	ZVAL_LONG(&enum_case_ITEM_VIEW_ITEM_FOCUS_RECT_value, 47);
	zend_enum_add_case_cstr(class_entry, "ITEM_VIEW_ITEM_FOCUS_RECT", &enum_case_ITEM_VIEW_ITEM_FOCUS_RECT_value);

	zval enum_case_TAB_BAR_TAB_LEFT_BUTTON_value;
	ZVAL_LONG(&enum_case_TAB_BAR_TAB_LEFT_BUTTON_value, 48);
	zend_enum_add_case_cstr(class_entry, "TAB_BAR_TAB_LEFT_BUTTON", &enum_case_TAB_BAR_TAB_LEFT_BUTTON_value);

	zval enum_case_TAB_BAR_TAB_RIGHT_BUTTON_value;
	ZVAL_LONG(&enum_case_TAB_BAR_TAB_RIGHT_BUTTON_value, 49);
	zend_enum_add_case_cstr(class_entry, "TAB_BAR_TAB_RIGHT_BUTTON", &enum_case_TAB_BAR_TAB_RIGHT_BUTTON_value);

	zval enum_case_TAB_BAR_TAB_TEXT_value;
	ZVAL_LONG(&enum_case_TAB_BAR_TAB_TEXT_value, 50);
	zend_enum_add_case_cstr(class_entry, "TAB_BAR_TAB_TEXT", &enum_case_TAB_BAR_TAB_TEXT_value);

	zval enum_case_SHAPED_FRAME_CONTENTS_value;
	ZVAL_LONG(&enum_case_SHAPED_FRAME_CONTENTS_value, 51);
	zend_enum_add_case_cstr(class_entry, "SHAPED_FRAME_CONTENTS", &enum_case_SHAPED_FRAME_CONTENTS_value);

	zval enum_case_TOOL_BAR_HANDLE_value;
	ZVAL_LONG(&enum_case_TOOL_BAR_HANDLE_value, 52);
	zend_enum_add_case_cstr(class_entry, "TOOL_BAR_HANDLE", &enum_case_TOOL_BAR_HANDLE_value);

	zval enum_case_TAB_BAR_SCROLL_LEFT_BUTTON_value;
	ZVAL_LONG(&enum_case_TAB_BAR_SCROLL_LEFT_BUTTON_value, 53);
	zend_enum_add_case_cstr(class_entry, "TAB_BAR_SCROLL_LEFT_BUTTON", &enum_case_TAB_BAR_SCROLL_LEFT_BUTTON_value);

	zval enum_case_TAB_BAR_SCROLL_RIGHT_BUTTON_value;
	ZVAL_LONG(&enum_case_TAB_BAR_SCROLL_RIGHT_BUTTON_value, 54);
	zend_enum_add_case_cstr(class_entry, "TAB_BAR_SCROLL_RIGHT_BUTTON", &enum_case_TAB_BAR_SCROLL_RIGHT_BUTTON_value);

	zval enum_case_TAB_BAR_TEAR_INDICATOR_RIGHT_value;
	ZVAL_LONG(&enum_case_TAB_BAR_TEAR_INDICATOR_RIGHT_value, 55);
	zend_enum_add_case_cstr(class_entry, "TAB_BAR_TEAR_INDICATOR_RIGHT", &enum_case_TAB_BAR_TEAR_INDICATOR_RIGHT_value);

	zval enum_case_PUSH_BUTTON_BEVEL_value;
	ZVAL_LONG(&enum_case_PUSH_BUTTON_BEVEL_value, 56);
	zend_enum_add_case_cstr(class_entry, "PUSH_BUTTON_BEVEL", &enum_case_PUSH_BUTTON_BEVEL_value);

	zval enum_case_CUSTOM_BASE_value;
	ZVAL_LONG(&enum_case_CUSTOM_BASE_value, 4026531840);
	zend_enum_add_case_cstr(class_entry, "CUSTOM_BASE", &enum_case_CUSTOM_BASE_value);

	return class_entry;
}

static zend_class_entry *register_class_QStyle(zend_class_entry *class_entry_QObject)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "QStyle", class_QStyle_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, class_entry_QObject, ZEND_ACC_ABSTRACT|ZEND_ACC_NOT_SERIALIZABLE);

	return class_entry;
}

static zend_class_entry *register_class_QStyleOption(void)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "QStyleOption", class_QStyleOption_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, NULL, ZEND_ACC_NOT_SERIALIZABLE);

	return class_entry;
}

static zend_class_entry *register_class_QStyleOptionButton(zend_class_entry *class_entry_QStyleOption)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "QStyleOptionButton", class_QStyleOptionButton_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, class_entry_QStyleOption, ZEND_ACC_NOT_SERIALIZABLE);

	return class_entry;
}
