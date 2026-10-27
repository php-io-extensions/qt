/* This is a generated file, edit the .stub.php file instead.
 * Stub hash: 25d90520913bf24821602795cdeb7b25ffea3149 */

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_QDialog___construct, 0, 0, 0)
	ZEND_ARG_OBJ_INFO_WITH_DEFAULT_VALUE(0, parent, QWidget, 1, "null")
	ZEND_ARG_OBJ_TYPE_MASK(0, f, Qt\\WindowType, MAY_BE_LONG, "0")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_QDialog_open, 0, 0, IS_VOID, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_QDialog_isModal, 0, 0, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_QDialog_setModal, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, modal, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_QDialog_result, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_QDialog_done, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, r, IS_LONG, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_QDialog_accept arginfo_class_QDialog_open

#define arginfo_class_QDialog_reject arginfo_class_QDialog_open

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_QMessageBox___construct, 0, 0, 0)
	ZEND_ARG_OBJ_INFO_WITH_DEFAULT_VALUE(0, parent, QWidget, 1, "null")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_QMessageBox_text, 0, 0, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_QMessageBox_setText, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, text, IS_STRING, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_QMessageBox_informativeText arginfo_class_QMessageBox_text

#define arginfo_class_QMessageBox_setInformativeText arginfo_class_QMessageBox_setText

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_QMessageBox_addButton, 0, 2, QPushButton, 0)
	ZEND_ARG_TYPE_INFO(0, text, IS_STRING, 0)
	ZEND_ARG_OBJ_INFO(0, role, QMessageBox\\ButtonRole, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_QMessageBox_setDefaultButton, 0, 1, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, button, QPushButton, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_QMessageBox_setEscapeButton, 0, 1, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, button, QAbstractButton, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_QMessageBox_clickedButton, 0, 0, QAbstractButton, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_QMessageBox_icon, 0, 0, QMessageBox\\Icon, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_QMessageBox_setIcon, 0, 1, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, icon, QMessageBox\\Icon, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_QMessageBox_checkBox, 0, 0, QCheckBox, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_QMessageBox_setCheckBox, 0, 1, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, cb, QCheckBox, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_QFileDialog___construct, 0, 0, 0)
	ZEND_ARG_OBJ_INFO_WITH_DEFAULT_VALUE(0, parent, QWidget, 1, "null")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, caption, IS_STRING, 0, "\'\'")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, directory, IS_STRING, 0, "\'\'")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, filter, IS_STRING, 0, "\'\'")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_QFileDialog_setFileMode, 0, 1, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, mode, QFileDialog\\FileMode, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_QFileDialog_setAcceptMode, 0, 1, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, mode, QFileDialog\\AcceptMode, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_QFileDialog_setOption, 0, 1, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, option, QFileDialog\\Option, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, on, _IS_BOOL, 0, "true")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_QFileDialog_setDirectory, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, directory, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_QFileDialog_selectFile, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, filename, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_QFileDialog_selectedFiles, 0, 0, IS_ARRAY, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_QFileDialog_nameFilters arginfo_class_QFileDialog_selectedFiles

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_QFileDialog_setNameFilters, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, filters, IS_ARRAY, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_QFileDialog_filter arginfo_class_QDialog_result

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_QFileDialog_setFilter, 0, 1, IS_VOID, 0)
	ZEND_ARG_OBJ_TYPE_MASK(0, filters, QDir\\Filter, MAY_BE_LONG, NULL)
ZEND_END_ARG_INFO()

ZEND_METHOD(QDialog, __construct);
ZEND_METHOD(QDialog, open);
ZEND_METHOD(QDialog, isModal);
ZEND_METHOD(QDialog, setModal);
ZEND_METHOD(QDialog, result);
ZEND_METHOD(QDialog, done);
ZEND_METHOD(QDialog, accept);
ZEND_METHOD(QDialog, reject);
ZEND_METHOD(QMessageBox, __construct);
ZEND_METHOD(QMessageBox, text);
ZEND_METHOD(QMessageBox, setText);
ZEND_METHOD(QMessageBox, informativeText);
ZEND_METHOD(QMessageBox, setInformativeText);
ZEND_METHOD(QMessageBox, addButton);
ZEND_METHOD(QMessageBox, setDefaultButton);
ZEND_METHOD(QMessageBox, setEscapeButton);
ZEND_METHOD(QMessageBox, clickedButton);
ZEND_METHOD(QMessageBox, icon);
ZEND_METHOD(QMessageBox, setIcon);
ZEND_METHOD(QMessageBox, checkBox);
ZEND_METHOD(QMessageBox, setCheckBox);
ZEND_METHOD(QFileDialog, __construct);
ZEND_METHOD(QFileDialog, setFileMode);
ZEND_METHOD(QFileDialog, setAcceptMode);
ZEND_METHOD(QFileDialog, setOption);
ZEND_METHOD(QFileDialog, setDirectory);
ZEND_METHOD(QFileDialog, selectFile);
ZEND_METHOD(QFileDialog, selectedFiles);
ZEND_METHOD(QFileDialog, nameFilters);
ZEND_METHOD(QFileDialog, setNameFilters);
ZEND_METHOD(QFileDialog, filter);
ZEND_METHOD(QFileDialog, setFilter);

static const zend_function_entry class_QDialog_methods[] = {
	ZEND_ME(QDialog, __construct, arginfo_class_QDialog___construct, ZEND_ACC_PUBLIC)
	ZEND_ME(QDialog, open, arginfo_class_QDialog_open, ZEND_ACC_PUBLIC)
	ZEND_ME(QDialog, isModal, arginfo_class_QDialog_isModal, ZEND_ACC_PUBLIC)
	ZEND_ME(QDialog, setModal, arginfo_class_QDialog_setModal, ZEND_ACC_PUBLIC)
	ZEND_ME(QDialog, result, arginfo_class_QDialog_result, ZEND_ACC_PUBLIC)
	ZEND_ME(QDialog, done, arginfo_class_QDialog_done, ZEND_ACC_PUBLIC)
	ZEND_ME(QDialog, accept, arginfo_class_QDialog_accept, ZEND_ACC_PUBLIC)
	ZEND_ME(QDialog, reject, arginfo_class_QDialog_reject, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static const zend_function_entry class_QMessageBox_methods[] = {
	ZEND_ME(QMessageBox, __construct, arginfo_class_QMessageBox___construct, ZEND_ACC_PUBLIC)
	ZEND_ME(QMessageBox, text, arginfo_class_QMessageBox_text, ZEND_ACC_PUBLIC)
	ZEND_ME(QMessageBox, setText, arginfo_class_QMessageBox_setText, ZEND_ACC_PUBLIC)
	ZEND_ME(QMessageBox, informativeText, arginfo_class_QMessageBox_informativeText, ZEND_ACC_PUBLIC)
	ZEND_ME(QMessageBox, setInformativeText, arginfo_class_QMessageBox_setInformativeText, ZEND_ACC_PUBLIC)
	ZEND_ME(QMessageBox, addButton, arginfo_class_QMessageBox_addButton, ZEND_ACC_PUBLIC)
	ZEND_ME(QMessageBox, setDefaultButton, arginfo_class_QMessageBox_setDefaultButton, ZEND_ACC_PUBLIC)
	ZEND_ME(QMessageBox, setEscapeButton, arginfo_class_QMessageBox_setEscapeButton, ZEND_ACC_PUBLIC)
	ZEND_ME(QMessageBox, clickedButton, arginfo_class_QMessageBox_clickedButton, ZEND_ACC_PUBLIC)
	ZEND_ME(QMessageBox, icon, arginfo_class_QMessageBox_icon, ZEND_ACC_PUBLIC)
	ZEND_ME(QMessageBox, setIcon, arginfo_class_QMessageBox_setIcon, ZEND_ACC_PUBLIC)
	ZEND_ME(QMessageBox, checkBox, arginfo_class_QMessageBox_checkBox, ZEND_ACC_PUBLIC)
	ZEND_ME(QMessageBox, setCheckBox, arginfo_class_QMessageBox_setCheckBox, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static const zend_function_entry class_QFileDialog_methods[] = {
	ZEND_ME(QFileDialog, __construct, arginfo_class_QFileDialog___construct, ZEND_ACC_PUBLIC)
	ZEND_ME(QFileDialog, setFileMode, arginfo_class_QFileDialog_setFileMode, ZEND_ACC_PUBLIC)
	ZEND_ME(QFileDialog, setAcceptMode, arginfo_class_QFileDialog_setAcceptMode, ZEND_ACC_PUBLIC)
	ZEND_ME(QFileDialog, setOption, arginfo_class_QFileDialog_setOption, ZEND_ACC_PUBLIC)
	ZEND_ME(QFileDialog, setDirectory, arginfo_class_QFileDialog_setDirectory, ZEND_ACC_PUBLIC)
	ZEND_ME(QFileDialog, selectFile, arginfo_class_QFileDialog_selectFile, ZEND_ACC_PUBLIC)
	ZEND_ME(QFileDialog, selectedFiles, arginfo_class_QFileDialog_selectedFiles, ZEND_ACC_PUBLIC)
	ZEND_ME(QFileDialog, nameFilters, arginfo_class_QFileDialog_nameFilters, ZEND_ACC_PUBLIC)
	ZEND_ME(QFileDialog, setNameFilters, arginfo_class_QFileDialog_setNameFilters, ZEND_ACC_PUBLIC)
	ZEND_ME(QFileDialog, filter, arginfo_class_QFileDialog_filter, ZEND_ACC_PUBLIC)
	ZEND_ME(QFileDialog, setFilter, arginfo_class_QFileDialog_setFilter, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static zend_class_entry *register_class_QMessageBox_ButtonRole(void)
{
	zend_class_entry *class_entry = zend_register_internal_enum("QMessageBox\\ButtonRole", IS_LONG, NULL);

	zval enum_case_INVALID_ROLE_value;
	ZVAL_LONG(&enum_case_INVALID_ROLE_value, -1);
	zend_enum_add_case_cstr(class_entry, "INVALID_ROLE", &enum_case_INVALID_ROLE_value);

	zval enum_case_ACCEPT_ROLE_value;
	ZVAL_LONG(&enum_case_ACCEPT_ROLE_value, 0);
	zend_enum_add_case_cstr(class_entry, "ACCEPT_ROLE", &enum_case_ACCEPT_ROLE_value);

	zval enum_case_REJECT_ROLE_value;
	ZVAL_LONG(&enum_case_REJECT_ROLE_value, 1);
	zend_enum_add_case_cstr(class_entry, "REJECT_ROLE", &enum_case_REJECT_ROLE_value);

	zval enum_case_DESTRUCTIVE_ROLE_value;
	ZVAL_LONG(&enum_case_DESTRUCTIVE_ROLE_value, 2);
	zend_enum_add_case_cstr(class_entry, "DESTRUCTIVE_ROLE", &enum_case_DESTRUCTIVE_ROLE_value);

	zval enum_case_ACTION_ROLE_value;
	ZVAL_LONG(&enum_case_ACTION_ROLE_value, 3);
	zend_enum_add_case_cstr(class_entry, "ACTION_ROLE", &enum_case_ACTION_ROLE_value);

	zval enum_case_HELP_ROLE_value;
	ZVAL_LONG(&enum_case_HELP_ROLE_value, 4);
	zend_enum_add_case_cstr(class_entry, "HELP_ROLE", &enum_case_HELP_ROLE_value);

	zval enum_case_YES_ROLE_value;
	ZVAL_LONG(&enum_case_YES_ROLE_value, 5);
	zend_enum_add_case_cstr(class_entry, "YES_ROLE", &enum_case_YES_ROLE_value);

	zval enum_case_NO_ROLE_value;
	ZVAL_LONG(&enum_case_NO_ROLE_value, 6);
	zend_enum_add_case_cstr(class_entry, "NO_ROLE", &enum_case_NO_ROLE_value);

	zval enum_case_RESET_ROLE_value;
	ZVAL_LONG(&enum_case_RESET_ROLE_value, 7);
	zend_enum_add_case_cstr(class_entry, "RESET_ROLE", &enum_case_RESET_ROLE_value);

	zval enum_case_APPLY_ROLE_value;
	ZVAL_LONG(&enum_case_APPLY_ROLE_value, 8);
	zend_enum_add_case_cstr(class_entry, "APPLY_ROLE", &enum_case_APPLY_ROLE_value);

	zval enum_case_N_ROLES_value;
	ZVAL_LONG(&enum_case_N_ROLES_value, 9);
	zend_enum_add_case_cstr(class_entry, "N_ROLES", &enum_case_N_ROLES_value);

	return class_entry;
}

static zend_class_entry *register_class_QMessageBox_Icon(void)
{
	zend_class_entry *class_entry = zend_register_internal_enum("QMessageBox\\Icon", IS_LONG, NULL);

	zval enum_case_NO_ICON_value;
	ZVAL_LONG(&enum_case_NO_ICON_value, 0);
	zend_enum_add_case_cstr(class_entry, "NO_ICON", &enum_case_NO_ICON_value);

	zval enum_case_INFORMATION_value;
	ZVAL_LONG(&enum_case_INFORMATION_value, 1);
	zend_enum_add_case_cstr(class_entry, "INFORMATION", &enum_case_INFORMATION_value);

	zval enum_case_WARNING_value;
	ZVAL_LONG(&enum_case_WARNING_value, 2);
	zend_enum_add_case_cstr(class_entry, "WARNING", &enum_case_WARNING_value);

	zval enum_case_CRITICAL_value;
	ZVAL_LONG(&enum_case_CRITICAL_value, 3);
	zend_enum_add_case_cstr(class_entry, "CRITICAL", &enum_case_CRITICAL_value);

	zval enum_case_QUESTION_value;
	ZVAL_LONG(&enum_case_QUESTION_value, 4);
	zend_enum_add_case_cstr(class_entry, "QUESTION", &enum_case_QUESTION_value);

	return class_entry;
}

static zend_class_entry *register_class_QDir_Filter(void)
{
	zend_class_entry *class_entry = zend_register_internal_enum("QDir\\Filter", IS_LONG, NULL);

	zval enum_case_DIRS_value;
	ZVAL_LONG(&enum_case_DIRS_value, 1);
	zend_enum_add_case_cstr(class_entry, "DIRS", &enum_case_DIRS_value);

	zval enum_case_FILES_value;
	ZVAL_LONG(&enum_case_FILES_value, 2);
	zend_enum_add_case_cstr(class_entry, "FILES", &enum_case_FILES_value);

	zval enum_case_DRIVES_value;
	ZVAL_LONG(&enum_case_DRIVES_value, 4);
	zend_enum_add_case_cstr(class_entry, "DRIVES", &enum_case_DRIVES_value);

	zval enum_case_NO_SYM_LINKS_value;
	ZVAL_LONG(&enum_case_NO_SYM_LINKS_value, 8);
	zend_enum_add_case_cstr(class_entry, "NO_SYM_LINKS", &enum_case_NO_SYM_LINKS_value);

	zval enum_case_ALL_ENTRIES_value;
	ZVAL_LONG(&enum_case_ALL_ENTRIES_value, 7);
	zend_enum_add_case_cstr(class_entry, "ALL_ENTRIES", &enum_case_ALL_ENTRIES_value);

	zval enum_case_TYPE_MASK_value;
	ZVAL_LONG(&enum_case_TYPE_MASK_value, 15);
	zend_enum_add_case_cstr(class_entry, "TYPE_MASK", &enum_case_TYPE_MASK_value);

	zval enum_case_READABLE_value;
	ZVAL_LONG(&enum_case_READABLE_value, 16);
	zend_enum_add_case_cstr(class_entry, "READABLE", &enum_case_READABLE_value);

	zval enum_case_WRITABLE_value;
	ZVAL_LONG(&enum_case_WRITABLE_value, 32);
	zend_enum_add_case_cstr(class_entry, "WRITABLE", &enum_case_WRITABLE_value);

	zval enum_case_EXECUTABLE_value;
	ZVAL_LONG(&enum_case_EXECUTABLE_value, 64);
	zend_enum_add_case_cstr(class_entry, "EXECUTABLE", &enum_case_EXECUTABLE_value);

	zval enum_case_PERMISSION_MASK_value;
	ZVAL_LONG(&enum_case_PERMISSION_MASK_value, 112);
	zend_enum_add_case_cstr(class_entry, "PERMISSION_MASK", &enum_case_PERMISSION_MASK_value);

	zval enum_case_MODIFIED_value;
	ZVAL_LONG(&enum_case_MODIFIED_value, 128);
	zend_enum_add_case_cstr(class_entry, "MODIFIED", &enum_case_MODIFIED_value);

	zval enum_case_HIDDEN_value;
	ZVAL_LONG(&enum_case_HIDDEN_value, 256);
	zend_enum_add_case_cstr(class_entry, "HIDDEN", &enum_case_HIDDEN_value);

	zval enum_case_SYSTEM_value;
	ZVAL_LONG(&enum_case_SYSTEM_value, 512);
	zend_enum_add_case_cstr(class_entry, "SYSTEM", &enum_case_SYSTEM_value);

	zval enum_case_ACCESS_MASK_value;
	ZVAL_LONG(&enum_case_ACCESS_MASK_value, 1008);
	zend_enum_add_case_cstr(class_entry, "ACCESS_MASK", &enum_case_ACCESS_MASK_value);

	zval enum_case_ALL_DIRS_value;
	ZVAL_LONG(&enum_case_ALL_DIRS_value, 1024);
	zend_enum_add_case_cstr(class_entry, "ALL_DIRS", &enum_case_ALL_DIRS_value);

	zval enum_case_CASE_SENSITIVE_value;
	ZVAL_LONG(&enum_case_CASE_SENSITIVE_value, 2048);
	zend_enum_add_case_cstr(class_entry, "CASE_SENSITIVE", &enum_case_CASE_SENSITIVE_value);

	zval enum_case_NO_DOT_value;
	ZVAL_LONG(&enum_case_NO_DOT_value, 8192);
	zend_enum_add_case_cstr(class_entry, "NO_DOT", &enum_case_NO_DOT_value);

	zval enum_case_NO_DOT_DOT_value;
	ZVAL_LONG(&enum_case_NO_DOT_DOT_value, 16384);
	zend_enum_add_case_cstr(class_entry, "NO_DOT_DOT", &enum_case_NO_DOT_DOT_value);

	zval enum_case_NO_DOT_AND_DOT_DOT_value;
	ZVAL_LONG(&enum_case_NO_DOT_AND_DOT_DOT_value, 24576);
	zend_enum_add_case_cstr(class_entry, "NO_DOT_AND_DOT_DOT", &enum_case_NO_DOT_AND_DOT_DOT_value);

	zval enum_case_NO_FILTER_value;
	ZVAL_LONG(&enum_case_NO_FILTER_value, -1);
	zend_enum_add_case_cstr(class_entry, "NO_FILTER", &enum_case_NO_FILTER_value);

	return class_entry;
}

static zend_class_entry *register_class_QFileDialog_FileMode(void)
{
	zend_class_entry *class_entry = zend_register_internal_enum("QFileDialog\\FileMode", IS_LONG, NULL);

	zval enum_case_ANY_FILE_value;
	ZVAL_LONG(&enum_case_ANY_FILE_value, 0);
	zend_enum_add_case_cstr(class_entry, "ANY_FILE", &enum_case_ANY_FILE_value);

	zval enum_case_EXISTING_FILE_value;
	ZVAL_LONG(&enum_case_EXISTING_FILE_value, 1);
	zend_enum_add_case_cstr(class_entry, "EXISTING_FILE", &enum_case_EXISTING_FILE_value);

	zval enum_case_DIRECTORY_value;
	ZVAL_LONG(&enum_case_DIRECTORY_value, 2);
	zend_enum_add_case_cstr(class_entry, "DIRECTORY", &enum_case_DIRECTORY_value);

	zval enum_case_EXISTING_FILES_value;
	ZVAL_LONG(&enum_case_EXISTING_FILES_value, 3);
	zend_enum_add_case_cstr(class_entry, "EXISTING_FILES", &enum_case_EXISTING_FILES_value);

	return class_entry;
}

static zend_class_entry *register_class_QFileDialog_AcceptMode(void)
{
	zend_class_entry *class_entry = zend_register_internal_enum("QFileDialog\\AcceptMode", IS_LONG, NULL);

	zval enum_case_ACCEPT_OPEN_value;
	ZVAL_LONG(&enum_case_ACCEPT_OPEN_value, 0);
	zend_enum_add_case_cstr(class_entry, "ACCEPT_OPEN", &enum_case_ACCEPT_OPEN_value);

	zval enum_case_ACCEPT_SAVE_value;
	ZVAL_LONG(&enum_case_ACCEPT_SAVE_value, 1);
	zend_enum_add_case_cstr(class_entry, "ACCEPT_SAVE", &enum_case_ACCEPT_SAVE_value);

	return class_entry;
}

static zend_class_entry *register_class_QFileDialog_Option(void)
{
	zend_class_entry *class_entry = zend_register_internal_enum("QFileDialog\\Option", IS_LONG, NULL);

	zval enum_case_SHOW_DIRS_ONLY_value;
	ZVAL_LONG(&enum_case_SHOW_DIRS_ONLY_value, 1);
	zend_enum_add_case_cstr(class_entry, "SHOW_DIRS_ONLY", &enum_case_SHOW_DIRS_ONLY_value);

	zval enum_case_DONT_RESOLVE_SYMLINKS_value;
	ZVAL_LONG(&enum_case_DONT_RESOLVE_SYMLINKS_value, 2);
	zend_enum_add_case_cstr(class_entry, "DONT_RESOLVE_SYMLINKS", &enum_case_DONT_RESOLVE_SYMLINKS_value);

	zval enum_case_DONT_CONFIRM_OVERWRITE_value;
	ZVAL_LONG(&enum_case_DONT_CONFIRM_OVERWRITE_value, 4);
	zend_enum_add_case_cstr(class_entry, "DONT_CONFIRM_OVERWRITE", &enum_case_DONT_CONFIRM_OVERWRITE_value);

	zval enum_case_DONT_USE_NATIVE_DIALOG_value;
	ZVAL_LONG(&enum_case_DONT_USE_NATIVE_DIALOG_value, 8);
	zend_enum_add_case_cstr(class_entry, "DONT_USE_NATIVE_DIALOG", &enum_case_DONT_USE_NATIVE_DIALOG_value);

	zval enum_case_READ_ONLY_value;
	ZVAL_LONG(&enum_case_READ_ONLY_value, 16);
	zend_enum_add_case_cstr(class_entry, "READ_ONLY", &enum_case_READ_ONLY_value);

	zval enum_case_HIDE_NAME_FILTER_DETAILS_value;
	ZVAL_LONG(&enum_case_HIDE_NAME_FILTER_DETAILS_value, 32);
	zend_enum_add_case_cstr(class_entry, "HIDE_NAME_FILTER_DETAILS", &enum_case_HIDE_NAME_FILTER_DETAILS_value);

	zval enum_case_DONT_USE_CUSTOM_DIRECTORY_ICONS_value;
	ZVAL_LONG(&enum_case_DONT_USE_CUSTOM_DIRECTORY_ICONS_value, 64);
	zend_enum_add_case_cstr(class_entry, "DONT_USE_CUSTOM_DIRECTORY_ICONS", &enum_case_DONT_USE_CUSTOM_DIRECTORY_ICONS_value);

	return class_entry;
}

static zend_class_entry *register_class_QDialog(zend_class_entry *class_entry_QWidget)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "QDialog", class_QDialog_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, class_entry_QWidget, ZEND_ACC_NOT_SERIALIZABLE);

	return class_entry;
}

static zend_class_entry *register_class_QMessageBox(zend_class_entry *class_entry_QDialog)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "QMessageBox", class_QMessageBox_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, class_entry_QDialog, ZEND_ACC_NOT_SERIALIZABLE);

	return class_entry;
}

static zend_class_entry *register_class_QFileDialog(zend_class_entry *class_entry_QDialog)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "QFileDialog", class_QFileDialog_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, class_entry_QDialog, ZEND_ACC_NOT_SERIALIZABLE);

	return class_entry;
}
