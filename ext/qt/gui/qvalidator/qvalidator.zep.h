
extern zend_class_entry *qt_gui_qvalidator_qvalidator_ce;

ZEPHIR_INIT_CLASS(Qt_Gui_QValidator_QValidator);

PHP_METHOD(Qt_Gui_QValidator_QValidator, staticMetaObject);
PHP_METHOD(Qt_Gui_QValidator_QValidator, tr);
PHP_METHOD(Qt_Gui_QValidator_QValidator, new_);
PHP_METHOD(Qt_Gui_QValidator_QValidator, setLocale);
PHP_METHOD(Qt_Gui_QValidator_QValidator, locale);
PHP_METHOD(Qt_Gui_QValidator_QValidator, validate);
PHP_METHOD(Qt_Gui_QValidator_QValidator, fixup);
PHP_METHOD(Qt_Gui_QValidator_QValidator, changed);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qvalidator_qvalidator_staticmetaobject, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qvalidator_qvalidator_tr, 0, 1, IS_STRING, 0)
	ZEND_ARG_INFO(0, s)
	ZEND_ARG_INFO(0, c)
	ZEND_ARG_TYPE_INFO(0, n, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qvalidator_qvalidator_new_, 0, 0, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qvalidator_qvalidator_setlocale, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, locale, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qvalidator_qvalidator_locale, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qvalidator_qvalidator_validate, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qvalidator_qvalidator_fixup, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qvalidator_qvalidator_changed, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_gui_qvalidator_qvalidator_method_entry) {
	PHP_ME(Qt_Gui_QValidator_QValidator, staticMetaObject, arginfo_qt_gui_qvalidator_qvalidator_staticmetaobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QValidator_QValidator, tr, arginfo_qt_gui_qvalidator_qvalidator_tr, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QValidator_QValidator, new_, arginfo_qt_gui_qvalidator_qvalidator_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QValidator_QValidator, setLocale, arginfo_qt_gui_qvalidator_qvalidator_setlocale, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QValidator_QValidator, locale, arginfo_qt_gui_qvalidator_qvalidator_locale, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QValidator_QValidator, validate, arginfo_qt_gui_qvalidator_qvalidator_validate, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QValidator_QValidator, fixup, arginfo_qt_gui_qvalidator_qvalidator_fixup, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QValidator_QValidator, changed, arginfo_qt_gui_qvalidator_qvalidator_changed, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
