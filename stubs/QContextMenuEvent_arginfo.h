/* This is a generated file, edit the .stub.php file instead.
 * Stub hash: e45c05da447a203e4bf7cb78888a6213e84c068b */

static zend_class_entry *register_class_QContextMenuEvent_Reason(void)
{
	zend_class_entry *class_entry = zend_register_internal_enum("QContextMenuEvent\\Reason", IS_LONG, NULL);

	zval enum_case_MOUSE_value;
	ZVAL_LONG(&enum_case_MOUSE_value, 0);
	zend_enum_add_case_cstr(class_entry, "MOUSE", &enum_case_MOUSE_value);

	zval enum_case_KEYBOARD_value;
	ZVAL_LONG(&enum_case_KEYBOARD_value, 1);
	zend_enum_add_case_cstr(class_entry, "KEYBOARD", &enum_case_KEYBOARD_value);

	zval enum_case_OTHER_value;
	ZVAL_LONG(&enum_case_OTHER_value, 2);
	zend_enum_add_case_cstr(class_entry, "OTHER", &enum_case_OTHER_value);

	return class_entry;
}
