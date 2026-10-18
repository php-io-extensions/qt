/* This is a generated file, edit the .stub.php file instead.
 * Stub hash: f10f0600486a3f2ed240a594d1a8dc00f825cb5e */

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_QInputDevice___construct, 0, 0, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_QPointingDevice___construct arginfo_class_QInputDevice___construct

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_QPointingDevice_primaryPointingDevice, 0, 0, QPointingDevice, 1)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, seatName, IS_STRING, 0, "\"\"")
ZEND_END_ARG_INFO()

ZEND_METHOD(QInputDevice, __construct);
ZEND_METHOD(QPointingDevice, __construct);
ZEND_METHOD(QPointingDevice, primaryPointingDevice);

static const zend_function_entry class_QInputDevice_methods[] = {
	ZEND_ME(QInputDevice, __construct, arginfo_class_QInputDevice___construct, ZEND_ACC_PRIVATE)
	ZEND_FE_END
};

static const zend_function_entry class_QPointingDevice_methods[] = {
	ZEND_ME(QPointingDevice, __construct, arginfo_class_QPointingDevice___construct, ZEND_ACC_PRIVATE)
	ZEND_ME(QPointingDevice, primaryPointingDevice, arginfo_class_QPointingDevice_primaryPointingDevice, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	ZEND_FE_END
};

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

static zend_class_entry *register_class_QInputDevice(zend_class_entry *class_entry_QObject)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "QInputDevice", class_QInputDevice_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, class_entry_QObject, ZEND_ACC_NOT_SERIALIZABLE);

	return class_entry;
}

static zend_class_entry *register_class_QPointingDevice(zend_class_entry *class_entry_QInputDevice)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "QPointingDevice", class_QPointingDevice_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, class_entry_QInputDevice, ZEND_ACC_NOT_SERIALIZABLE);

	return class_entry;
}
