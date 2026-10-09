/* This is a generated file, edit the .stub.php file instead.
 * Stub hash: 414c43499d86c00ac16be5c1f8bd0f065f6c9d27 */

static zend_class_entry *register_class_QInputDevice_DeviceType(void)
{
	zend_class_entry *class_entry = zend_register_internal_enum("QInputDevice\\DeviceType", IS_LONG, NULL);

	zval enum_case_UNKNOWN_value;
	ZVAL_LONG(&enum_case_UNKNOWN_value, 0);
	zend_enum_add_case_cstr(class_entry, "UNKNOWN", &enum_case_UNKNOWN_value);

	zval enum_case_MOUSE_value;
	ZVAL_LONG(&enum_case_MOUSE_value, 1);
	zend_enum_add_case_cstr(class_entry, "MOUSE", &enum_case_MOUSE_value);

	zval enum_case_TOUCH_SCREEN_value;
	ZVAL_LONG(&enum_case_TOUCH_SCREEN_value, 2);
	zend_enum_add_case_cstr(class_entry, "TOUCH_SCREEN", &enum_case_TOUCH_SCREEN_value);

	zval enum_case_TOUCH_PAD_value;
	ZVAL_LONG(&enum_case_TOUCH_PAD_value, 4);
	zend_enum_add_case_cstr(class_entry, "TOUCH_PAD", &enum_case_TOUCH_PAD_value);

	zval enum_case_PUCK_value;
	ZVAL_LONG(&enum_case_PUCK_value, 8);
	zend_enum_add_case_cstr(class_entry, "PUCK", &enum_case_PUCK_value);

	zval enum_case_STYLUS_value;
	ZVAL_LONG(&enum_case_STYLUS_value, 16);
	zend_enum_add_case_cstr(class_entry, "STYLUS", &enum_case_STYLUS_value);

	zval enum_case_AIRBRUSH_value;
	ZVAL_LONG(&enum_case_AIRBRUSH_value, 32);
	zend_enum_add_case_cstr(class_entry, "AIRBRUSH", &enum_case_AIRBRUSH_value);

	zval enum_case_KEYBOARD_value;
	ZVAL_LONG(&enum_case_KEYBOARD_value, 4096);
	zend_enum_add_case_cstr(class_entry, "KEYBOARD", &enum_case_KEYBOARD_value);

	zval enum_case_ALL_DEVICES_value;
	ZVAL_LONG(&enum_case_ALL_DEVICES_value, 2147483647);
	zend_enum_add_case_cstr(class_entry, "ALL_DEVICES", &enum_case_ALL_DEVICES_value);

	return class_entry;
}
