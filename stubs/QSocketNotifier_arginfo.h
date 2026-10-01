/* This is a generated file, edit the .stub.php file instead.
 * Stub hash: 57a8ed609f54c36f2e9f06f42a78c7a48921235c */

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_QSocketNotifier___construct, 0, 0, 2)
	ZEND_ARG_TYPE_INFO(0, socket, IS_MIXED, 0)
	ZEND_ARG_OBJ_INFO(0, type, QSocketNotifier\\Type, 0)
	ZEND_ARG_OBJ_INFO_WITH_DEFAULT_VALUE(0, parent, QObject, 1, "null")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_QSocketNotifier_socket, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_QSocketNotifier_type, 0, 0, QSocketNotifier\\Type, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_QSocketNotifier_isEnabled, 0, 0, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_QSocketNotifier_setEnabled, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, enable, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_QSocketNotifier_isValid arginfo_class_QSocketNotifier_isEnabled

ZEND_METHOD(QSocketNotifier, __construct);
ZEND_METHOD(QSocketNotifier, socket);
ZEND_METHOD(QSocketNotifier, type);
ZEND_METHOD(QSocketNotifier, isEnabled);
ZEND_METHOD(QSocketNotifier, setEnabled);
ZEND_METHOD(QSocketNotifier, isValid);

static const zend_function_entry class_QSocketNotifier_methods[] = {
	ZEND_ME(QSocketNotifier, __construct, arginfo_class_QSocketNotifier___construct, ZEND_ACC_PUBLIC)
	ZEND_ME(QSocketNotifier, socket, arginfo_class_QSocketNotifier_socket, ZEND_ACC_PUBLIC)
	ZEND_ME(QSocketNotifier, type, arginfo_class_QSocketNotifier_type, ZEND_ACC_PUBLIC)
	ZEND_ME(QSocketNotifier, isEnabled, arginfo_class_QSocketNotifier_isEnabled, ZEND_ACC_PUBLIC)
	ZEND_ME(QSocketNotifier, setEnabled, arginfo_class_QSocketNotifier_setEnabled, ZEND_ACC_PUBLIC)
	ZEND_ME(QSocketNotifier, isValid, arginfo_class_QSocketNotifier_isValid, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static zend_class_entry *register_class_QSocketNotifier_Type(void)
{
	zend_class_entry *class_entry = zend_register_internal_enum("QSocketNotifier\\Type", IS_LONG, NULL);

	zval enum_case_READ_value;
	ZVAL_LONG(&enum_case_READ_value, 0);
	zend_enum_add_case_cstr(class_entry, "READ", &enum_case_READ_value);

	zval enum_case_WRITE_value;
	ZVAL_LONG(&enum_case_WRITE_value, 1);
	zend_enum_add_case_cstr(class_entry, "WRITE", &enum_case_WRITE_value);

	zval enum_case_EXCEPTION_value;
	ZVAL_LONG(&enum_case_EXCEPTION_value, 2);
	zend_enum_add_case_cstr(class_entry, "EXCEPTION", &enum_case_EXCEPTION_value);

	return class_entry;
}

static zend_class_entry *register_class_QSocketNotifier(zend_class_entry *class_entry_QObject)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "QSocketNotifier", class_QSocketNotifier_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, class_entry_QObject, ZEND_ACC_NOT_SERIALIZABLE);

	return class_entry;
}
