
extern zend_class_entry *qt_widgets_qwizardpage_qwizardpage_ce;

ZEPHIR_INIT_CLASS(Qt_Widgets_QWizardPage_QWizardPage);

PHP_METHOD(Qt_Widgets_QWizardPage_QWizardPage, staticMetaObject);
PHP_METHOD(Qt_Widgets_QWizardPage_QWizardPage, tr);
PHP_METHOD(Qt_Widgets_QWizardPage_QWizardPage, new_);
PHP_METHOD(Qt_Widgets_QWizardPage_QWizardPage, setTitle);
PHP_METHOD(Qt_Widgets_QWizardPage_QWizardPage, title);
PHP_METHOD(Qt_Widgets_QWizardPage_QWizardPage, setSubTitle);
PHP_METHOD(Qt_Widgets_QWizardPage_QWizardPage, subTitle);
PHP_METHOD(Qt_Widgets_QWizardPage_QWizardPage, setPixmap);
PHP_METHOD(Qt_Widgets_QWizardPage_QWizardPage, pixmap);
PHP_METHOD(Qt_Widgets_QWizardPage_QWizardPage, setFinalPage);
PHP_METHOD(Qt_Widgets_QWizardPage_QWizardPage, isFinalPage);
PHP_METHOD(Qt_Widgets_QWizardPage_QWizardPage, setCommitPage);
PHP_METHOD(Qt_Widgets_QWizardPage_QWizardPage, isCommitPage);
PHP_METHOD(Qt_Widgets_QWizardPage_QWizardPage, setButtonText);
PHP_METHOD(Qt_Widgets_QWizardPage_QWizardPage, buttonText);
PHP_METHOD(Qt_Widgets_QWizardPage_QWizardPage, initializePage);
PHP_METHOD(Qt_Widgets_QWizardPage_QWizardPage, cleanupPage);
PHP_METHOD(Qt_Widgets_QWizardPage_QWizardPage, validatePage);
PHP_METHOD(Qt_Widgets_QWizardPage_QWizardPage, isComplete);
PHP_METHOD(Qt_Widgets_QWizardPage_QWizardPage, nextId);
PHP_METHOD(Qt_Widgets_QWizardPage_QWizardPage, completeChanged);
PHP_METHOD(Qt_Widgets_QWizardPage_QWizardPage, setField);
PHP_METHOD(Qt_Widgets_QWizardPage_QWizardPage, field);
PHP_METHOD(Qt_Widgets_QWizardPage_QWizardPage, registerField);
PHP_METHOD(Qt_Widgets_QWizardPage_QWizardPage, wizard);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qwizardpage_qwizardpage_staticmetaobject, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qwizardpage_qwizardpage_tr, 0, 1, IS_STRING, 0)
	ZEND_ARG_INFO(0, s)
	ZEND_ARG_INFO(0, c)
	ZEND_ARG_TYPE_INFO(0, n, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qwizardpage_qwizardpage_new_, 0, 0, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qwizardpage_qwizardpage_settitle, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, title, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qwizardpage_qwizardpage_title, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qwizardpage_qwizardpage_setsubtitle, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, subTitle, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qwizardpage_qwizardpage_subtitle, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qwizardpage_qwizardpage_setpixmap, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, which, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, pixmap, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qwizardpage_qwizardpage_pixmap, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, which, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qwizardpage_qwizardpage_setfinalpage, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, finalPage, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qwizardpage_qwizardpage_isfinalpage, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qwizardpage_qwizardpage_setcommitpage, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, commitPage, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qwizardpage_qwizardpage_iscommitpage, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qwizardpage_qwizardpage_setbuttontext, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, which, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, text, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qwizardpage_qwizardpage_buttontext, 0, 2, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, which, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qwizardpage_qwizardpage_initializepage, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qwizardpage_qwizardpage_cleanuppage, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qwizardpage_qwizardpage_validatepage, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qwizardpage_qwizardpage_iscomplete, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qwizardpage_qwizardpage_nextid, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qwizardpage_qwizardpage_completechanged, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qwizardpage_qwizardpage_setfield, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, name, IS_STRING, 0)
	ZEND_ARG_INFO(0, value)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_qt_widgets_qwizardpage_qwizardpage_field, 0, 0, 2)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, name, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qwizardpage_qwizardpage_registerfield, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, name, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, widget, IS_LONG, 0)
	ZEND_ARG_INFO(0, property)
	ZEND_ARG_INFO(0, changedSignal)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qwizardpage_qwizardpage_wizard, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_widgets_qwizardpage_qwizardpage_method_entry) {
	PHP_ME(Qt_Widgets_QWizardPage_QWizardPage, staticMetaObject, arginfo_qt_widgets_qwizardpage_qwizardpage_staticmetaobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QWizardPage_QWizardPage, tr, arginfo_qt_widgets_qwizardpage_qwizardpage_tr, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QWizardPage_QWizardPage, new_, arginfo_qt_widgets_qwizardpage_qwizardpage_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QWizardPage_QWizardPage, setTitle, arginfo_qt_widgets_qwizardpage_qwizardpage_settitle, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QWizardPage_QWizardPage, title, arginfo_qt_widgets_qwizardpage_qwizardpage_title, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QWizardPage_QWizardPage, setSubTitle, arginfo_qt_widgets_qwizardpage_qwizardpage_setsubtitle, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QWizardPage_QWizardPage, subTitle, arginfo_qt_widgets_qwizardpage_qwizardpage_subtitle, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QWizardPage_QWizardPage, setPixmap, arginfo_qt_widgets_qwizardpage_qwizardpage_setpixmap, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QWizardPage_QWizardPage, pixmap, arginfo_qt_widgets_qwizardpage_qwizardpage_pixmap, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QWizardPage_QWizardPage, setFinalPage, arginfo_qt_widgets_qwizardpage_qwizardpage_setfinalpage, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QWizardPage_QWizardPage, isFinalPage, arginfo_qt_widgets_qwizardpage_qwizardpage_isfinalpage, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QWizardPage_QWizardPage, setCommitPage, arginfo_qt_widgets_qwizardpage_qwizardpage_setcommitpage, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QWizardPage_QWizardPage, isCommitPage, arginfo_qt_widgets_qwizardpage_qwizardpage_iscommitpage, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QWizardPage_QWizardPage, setButtonText, arginfo_qt_widgets_qwizardpage_qwizardpage_setbuttontext, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QWizardPage_QWizardPage, buttonText, arginfo_qt_widgets_qwizardpage_qwizardpage_buttontext, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QWizardPage_QWizardPage, initializePage, arginfo_qt_widgets_qwizardpage_qwizardpage_initializepage, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QWizardPage_QWizardPage, cleanupPage, arginfo_qt_widgets_qwizardpage_qwizardpage_cleanuppage, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QWizardPage_QWizardPage, validatePage, arginfo_qt_widgets_qwizardpage_qwizardpage_validatepage, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QWizardPage_QWizardPage, isComplete, arginfo_qt_widgets_qwizardpage_qwizardpage_iscomplete, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QWizardPage_QWizardPage, nextId, arginfo_qt_widgets_qwizardpage_qwizardpage_nextid, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QWizardPage_QWizardPage, completeChanged, arginfo_qt_widgets_qwizardpage_qwizardpage_completechanged, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QWizardPage_QWizardPage, setField, arginfo_qt_widgets_qwizardpage_qwizardpage_setfield, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QWizardPage_QWizardPage, field, arginfo_qt_widgets_qwizardpage_qwizardpage_field, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QWizardPage_QWizardPage, registerField, arginfo_qt_widgets_qwizardpage_qwizardpage_registerfield, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QWizardPage_QWizardPage, wizard, arginfo_qt_widgets_qwizardpage_qwizardpage_wizard, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
