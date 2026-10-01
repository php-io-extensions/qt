
extern zend_class_entry *qt_gui_qintvalidator_qintvalidator_ce;

ZEPHIR_INIT_CLASS(Qt_Gui_QIntValidator_QIntValidator);

PHP_METHOD(Qt_Gui_QIntValidator_QIntValidator, staticMetaObject);
PHP_METHOD(Qt_Gui_QIntValidator_QIntValidator, tr);
PHP_METHOD(Qt_Gui_QIntValidator_QIntValidator, new_);
PHP_METHOD(Qt_Gui_QIntValidator_QIntValidator, newIntIntQObject);
PHP_METHOD(Qt_Gui_QIntValidator_QIntValidator, validate);
PHP_METHOD(Qt_Gui_QIntValidator_QIntValidator, fixup);
PHP_METHOD(Qt_Gui_QIntValidator_QIntValidator, setBottom);
PHP_METHOD(Qt_Gui_QIntValidator_QIntValidator, setTop);
PHP_METHOD(Qt_Gui_QIntValidator_QIntValidator, setRange);
PHP_METHOD(Qt_Gui_QIntValidator_QIntValidator, bottom);
PHP_METHOD(Qt_Gui_QIntValidator_QIntValidator, top);
PHP_METHOD(Qt_Gui_QIntValidator_QIntValidator, bottomChanged);
PHP_METHOD(Qt_Gui_QIntValidator_QIntValidator, topChanged);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qintvalidator_qintvalidator_staticmetaobject, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qintvalidator_qintvalidator_tr, 0, 1, IS_STRING, 0)
	ZEND_ARG_INFO(0, s)
	ZEND_ARG_INFO(0, c)
	ZEND_ARG_TYPE_INFO(0, n, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qintvalidator_qintvalidator_new_, 0, 0, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qintvalidator_qintvalidator_newintintqobject, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, bottom, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, top, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qintvalidator_qintvalidator_validate, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qintvalidator_qintvalidator_fixup, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qintvalidator_qintvalidator_setbottom, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qintvalidator_qintvalidator_settop, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qintvalidator_qintvalidator_setrange, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, bottom, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, top, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qintvalidator_qintvalidator_bottom, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qintvalidator_qintvalidator_top, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qintvalidator_qintvalidator_bottomchanged, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, bottom, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qintvalidator_qintvalidator_topchanged, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, top, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_gui_qintvalidator_qintvalidator_method_entry) {
	PHP_ME(Qt_Gui_QIntValidator_QIntValidator, staticMetaObject, arginfo_qt_gui_qintvalidator_qintvalidator_staticmetaobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QIntValidator_QIntValidator, tr, arginfo_qt_gui_qintvalidator_qintvalidator_tr, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QIntValidator_QIntValidator, new_, arginfo_qt_gui_qintvalidator_qintvalidator_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QIntValidator_QIntValidator, newIntIntQObject, arginfo_qt_gui_qintvalidator_qintvalidator_newintintqobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QIntValidator_QIntValidator, validate, arginfo_qt_gui_qintvalidator_qintvalidator_validate, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QIntValidator_QIntValidator, fixup, arginfo_qt_gui_qintvalidator_qintvalidator_fixup, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QIntValidator_QIntValidator, setBottom, arginfo_qt_gui_qintvalidator_qintvalidator_setbottom, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QIntValidator_QIntValidator, setTop, arginfo_qt_gui_qintvalidator_qintvalidator_settop, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QIntValidator_QIntValidator, setRange, arginfo_qt_gui_qintvalidator_qintvalidator_setrange, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QIntValidator_QIntValidator, bottom, arginfo_qt_gui_qintvalidator_qintvalidator_bottom, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QIntValidator_QIntValidator, top, arginfo_qt_gui_qintvalidator_qintvalidator_top, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QIntValidator_QIntValidator, bottomChanged, arginfo_qt_gui_qintvalidator_qintvalidator_bottomchanged, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QIntValidator_QIntValidator, topChanged, arginfo_qt_gui_qintvalidator_qintvalidator_topchanged, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
