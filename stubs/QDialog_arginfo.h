/* This is a generated file, edit the .stub.php file instead.
 * Stub hash: 6de55395367beb37c9b712793b6b4de156159393 */

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_QDialog___construct, 0, 0, 0)
	ZEND_ARG_OBJ_INFO_WITH_DEFAULT_VALUE(0, parent, QWidget, 1, "null")
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

#define arginfo_class_QMessageBox___construct arginfo_class_QDialog___construct

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_QMessageBox_text, 0, 0, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_QMessageBox_setText, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, text, IS_STRING, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_QMessageBox_informativeText arginfo_class_QMessageBox_text

#define arginfo_class_QMessageBox_setInformativeText arginfo_class_QMessageBox_setText

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
	ZEND_FE_END
};

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
