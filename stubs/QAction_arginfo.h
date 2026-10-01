/* This is a generated file, edit the .stub.php file instead.
 * Stub hash: e28144fdd1048bc60ce5a40ee0516d0c683625ba */

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_QAction___construct, 0, 0, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, text, IS_STRING, 0, "\"\"")
	ZEND_ARG_OBJ_INFO_WITH_DEFAULT_VALUE(0, parent, QObject, 1, "null")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_QAction_text, 0, 0, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_QAction_setText, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, text, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_QAction_isCheckable, 0, 0, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_QAction_setCheckable, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, checkable, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_QAction_isChecked arginfo_class_QAction_isCheckable

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_QAction_setChecked, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, checked, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_QAction_isEnabled arginfo_class_QAction_isCheckable

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_QAction_setEnabled, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, enabled, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_QAction_isSeparator arginfo_class_QAction_isCheckable

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_QAction_setSeparator, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, b, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_QAction_menuRole, 0, 0, QAction\\MenuRole, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_QAction_setMenuRole, 0, 1, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, menuRole, QAction\\MenuRole, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_QAction_shortcut arginfo_class_QAction_text

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_QAction_setShortcut, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, shortcut, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_QAction_trigger, 0, 0, IS_VOID, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_QAction_toggle arginfo_class_QAction_trigger

ZEND_METHOD(QAction, __construct);
ZEND_METHOD(QAction, text);
ZEND_METHOD(QAction, setText);
ZEND_METHOD(QAction, isCheckable);
ZEND_METHOD(QAction, setCheckable);
ZEND_METHOD(QAction, isChecked);
ZEND_METHOD(QAction, setChecked);
ZEND_METHOD(QAction, isEnabled);
ZEND_METHOD(QAction, setEnabled);
ZEND_METHOD(QAction, isSeparator);
ZEND_METHOD(QAction, setSeparator);
ZEND_METHOD(QAction, menuRole);
ZEND_METHOD(QAction, setMenuRole);
ZEND_METHOD(QAction, shortcut);
ZEND_METHOD(QAction, setShortcut);
ZEND_METHOD(QAction, trigger);
ZEND_METHOD(QAction, toggle);

static const zend_function_entry class_QAction_methods[] = {
	ZEND_ME(QAction, __construct, arginfo_class_QAction___construct, ZEND_ACC_PUBLIC)
	ZEND_ME(QAction, text, arginfo_class_QAction_text, ZEND_ACC_PUBLIC)
	ZEND_ME(QAction, setText, arginfo_class_QAction_setText, ZEND_ACC_PUBLIC)
	ZEND_ME(QAction, isCheckable, arginfo_class_QAction_isCheckable, ZEND_ACC_PUBLIC)
	ZEND_ME(QAction, setCheckable, arginfo_class_QAction_setCheckable, ZEND_ACC_PUBLIC)
	ZEND_ME(QAction, isChecked, arginfo_class_QAction_isChecked, ZEND_ACC_PUBLIC)
	ZEND_ME(QAction, setChecked, arginfo_class_QAction_setChecked, ZEND_ACC_PUBLIC)
	ZEND_ME(QAction, isEnabled, arginfo_class_QAction_isEnabled, ZEND_ACC_PUBLIC)
	ZEND_ME(QAction, setEnabled, arginfo_class_QAction_setEnabled, ZEND_ACC_PUBLIC)
	ZEND_ME(QAction, isSeparator, arginfo_class_QAction_isSeparator, ZEND_ACC_PUBLIC)
	ZEND_ME(QAction, setSeparator, arginfo_class_QAction_setSeparator, ZEND_ACC_PUBLIC)
	ZEND_ME(QAction, menuRole, arginfo_class_QAction_menuRole, ZEND_ACC_PUBLIC)
	ZEND_ME(QAction, setMenuRole, arginfo_class_QAction_setMenuRole, ZEND_ACC_PUBLIC)
	ZEND_ME(QAction, shortcut, arginfo_class_QAction_shortcut, ZEND_ACC_PUBLIC)
	ZEND_ME(QAction, setShortcut, arginfo_class_QAction_setShortcut, ZEND_ACC_PUBLIC)
	ZEND_ME(QAction, trigger, arginfo_class_QAction_trigger, ZEND_ACC_PUBLIC)
	ZEND_ME(QAction, toggle, arginfo_class_QAction_toggle, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static zend_class_entry *register_class_QAction_MenuRole(void)
{
	zend_class_entry *class_entry = zend_register_internal_enum("QAction\\MenuRole", IS_LONG, NULL);

	zval enum_case_NO_ROLE_value;
	ZVAL_LONG(&enum_case_NO_ROLE_value, 0);
	zend_enum_add_case_cstr(class_entry, "NO_ROLE", &enum_case_NO_ROLE_value);

	zval enum_case_TEXT_HEURISTIC_ROLE_value;
	ZVAL_LONG(&enum_case_TEXT_HEURISTIC_ROLE_value, 1);
	zend_enum_add_case_cstr(class_entry, "TEXT_HEURISTIC_ROLE", &enum_case_TEXT_HEURISTIC_ROLE_value);

	zval enum_case_APPLICATION_SPECIFIC_ROLE_value;
	ZVAL_LONG(&enum_case_APPLICATION_SPECIFIC_ROLE_value, 2);
	zend_enum_add_case_cstr(class_entry, "APPLICATION_SPECIFIC_ROLE", &enum_case_APPLICATION_SPECIFIC_ROLE_value);

	zval enum_case_ABOUT_QT_ROLE_value;
	ZVAL_LONG(&enum_case_ABOUT_QT_ROLE_value, 3);
	zend_enum_add_case_cstr(class_entry, "ABOUT_QT_ROLE", &enum_case_ABOUT_QT_ROLE_value);

	zval enum_case_ABOUT_ROLE_value;
	ZVAL_LONG(&enum_case_ABOUT_ROLE_value, 4);
	zend_enum_add_case_cstr(class_entry, "ABOUT_ROLE", &enum_case_ABOUT_ROLE_value);

	zval enum_case_PREFERENCES_ROLE_value;
	ZVAL_LONG(&enum_case_PREFERENCES_ROLE_value, 5);
	zend_enum_add_case_cstr(class_entry, "PREFERENCES_ROLE", &enum_case_PREFERENCES_ROLE_value);

	zval enum_case_QUIT_ROLE_value;
	ZVAL_LONG(&enum_case_QUIT_ROLE_value, 6);
	zend_enum_add_case_cstr(class_entry, "QUIT_ROLE", &enum_case_QUIT_ROLE_value);

	return class_entry;
}

static zend_class_entry *register_class_QAction(zend_class_entry *class_entry_QObject)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "QAction", class_QAction_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, class_entry_QObject, ZEND_ACC_NOT_SERIALIZABLE);

	return class_entry;
}
