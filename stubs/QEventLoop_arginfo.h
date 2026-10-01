/* This is a generated file, edit the .stub.php file instead.
 * Stub hash: b53c743f89c461e7b04509b9d7dd43da50542ea1 */

static zend_class_entry *register_class_QEventLoop_ProcessEventsFlag(void)
{
	zend_class_entry *class_entry = zend_register_internal_enum("QEventLoop\\ProcessEventsFlag", IS_LONG, NULL);

	zval enum_case_ALL_EVENTS_value;
	ZVAL_LONG(&enum_case_ALL_EVENTS_value, 0);
	zend_enum_add_case_cstr(class_entry, "ALL_EVENTS", &enum_case_ALL_EVENTS_value);

	zval enum_case_EXCLUDE_USER_INPUT_EVENTS_value;
	ZVAL_LONG(&enum_case_EXCLUDE_USER_INPUT_EVENTS_value, 1);
	zend_enum_add_case_cstr(class_entry, "EXCLUDE_USER_INPUT_EVENTS", &enum_case_EXCLUDE_USER_INPUT_EVENTS_value);

	zval enum_case_EXCLUDE_SOCKET_NOTIFIERS_value;
	ZVAL_LONG(&enum_case_EXCLUDE_SOCKET_NOTIFIERS_value, 2);
	zend_enum_add_case_cstr(class_entry, "EXCLUDE_SOCKET_NOTIFIERS", &enum_case_EXCLUDE_SOCKET_NOTIFIERS_value);

	zval enum_case_WAIT_FOR_MORE_EVENTS_value;
	ZVAL_LONG(&enum_case_WAIT_FOR_MORE_EVENTS_value, 4);
	zend_enum_add_case_cstr(class_entry, "WAIT_FOR_MORE_EVENTS", &enum_case_WAIT_FOR_MORE_EVENTS_value);

	zval enum_case_X11_EXCLUDE_TIMERS_value;
	ZVAL_LONG(&enum_case_X11_EXCLUDE_TIMERS_value, 8);
	zend_enum_add_case_cstr(class_entry, "X11_EXCLUDE_TIMERS", &enum_case_X11_EXCLUDE_TIMERS_value);

	zval enum_case_EVENT_LOOP_EXEC_value;
	ZVAL_LONG(&enum_case_EVENT_LOOP_EXEC_value, 32);
	zend_enum_add_case_cstr(class_entry, "EVENT_LOOP_EXEC", &enum_case_EVENT_LOOP_EXEC_value);

	zval enum_case_DIALOG_EXEC_value;
	ZVAL_LONG(&enum_case_DIALOG_EXEC_value, 64);
	zend_enum_add_case_cstr(class_entry, "DIALOG_EXEC", &enum_case_DIALOG_EXEC_value);

	zval enum_case_APPLICATION_EXEC_value;
	ZVAL_LONG(&enum_case_APPLICATION_EXEC_value, 128);
	zend_enum_add_case_cstr(class_entry, "APPLICATION_EXEC", &enum_case_APPLICATION_EXEC_value);

	return class_entry;
}
