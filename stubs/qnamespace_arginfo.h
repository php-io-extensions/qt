/* This is a generated file, edit the .stub.php file instead.
 * Stub hash: f7995d5797ef3fedfc7d3e0b29aae40d955c589a */

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
