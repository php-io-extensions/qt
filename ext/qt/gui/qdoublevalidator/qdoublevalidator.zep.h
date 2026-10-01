
extern zend_class_entry *qt_gui_qdoublevalidator_qdoublevalidator_ce;

ZEPHIR_INIT_CLASS(Qt_Gui_QDoubleValidator_QDoubleValidator);

PHP_METHOD(Qt_Gui_QDoubleValidator_QDoubleValidator, staticMetaObject);
PHP_METHOD(Qt_Gui_QDoubleValidator_QDoubleValidator, tr);
PHP_METHOD(Qt_Gui_QDoubleValidator_QDoubleValidator, new_);
PHP_METHOD(Qt_Gui_QDoubleValidator_QDoubleValidator, newDoubleDoubleIntQObject);
PHP_METHOD(Qt_Gui_QDoubleValidator_QDoubleValidator, validate);
PHP_METHOD(Qt_Gui_QDoubleValidator_QDoubleValidator, fixup);
PHP_METHOD(Qt_Gui_QDoubleValidator_QDoubleValidator, setRange);
PHP_METHOD(Qt_Gui_QDoubleValidator_QDoubleValidator, setRangeDoubleDouble);
PHP_METHOD(Qt_Gui_QDoubleValidator_QDoubleValidator, setBottom);
PHP_METHOD(Qt_Gui_QDoubleValidator_QDoubleValidator, setTop);
PHP_METHOD(Qt_Gui_QDoubleValidator_QDoubleValidator, setDecimals);
PHP_METHOD(Qt_Gui_QDoubleValidator_QDoubleValidator, setNotation);
PHP_METHOD(Qt_Gui_QDoubleValidator_QDoubleValidator, bottom);
PHP_METHOD(Qt_Gui_QDoubleValidator_QDoubleValidator, top);
PHP_METHOD(Qt_Gui_QDoubleValidator_QDoubleValidator, decimals);
PHP_METHOD(Qt_Gui_QDoubleValidator_QDoubleValidator, notation);
PHP_METHOD(Qt_Gui_QDoubleValidator_QDoubleValidator, bottomChanged);
PHP_METHOD(Qt_Gui_QDoubleValidator_QDoubleValidator, topChanged);
PHP_METHOD(Qt_Gui_QDoubleValidator_QDoubleValidator, decimalsChanged);
PHP_METHOD(Qt_Gui_QDoubleValidator_QDoubleValidator, notationChanged);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qdoublevalidator_qdoublevalidator_staticmetaobject, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qdoublevalidator_qdoublevalidator_tr, 0, 1, IS_STRING, 0)
	ZEND_ARG_INFO(0, s)
	ZEND_ARG_INFO(0, c)
	ZEND_ARG_TYPE_INFO(0, n, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qdoublevalidator_qdoublevalidator_new_, 0, 0, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qdoublevalidator_qdoublevalidator_newdoubledoubleintqobject, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, bottom, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, top, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, decimals, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qdoublevalidator_qdoublevalidator_validate, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qdoublevalidator_qdoublevalidator_fixup, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qdoublevalidator_qdoublevalidator_setrange, 0, 4, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, bottom, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, top, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, decimals, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qdoublevalidator_qdoublevalidator_setrangedoubledouble, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, bottom, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, top, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qdoublevalidator_qdoublevalidator_setbottom, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qdoublevalidator_qdoublevalidator_settop, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qdoublevalidator_qdoublevalidator_setdecimals, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qdoublevalidator_qdoublevalidator_setnotation, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qdoublevalidator_qdoublevalidator_bottom, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qdoublevalidator_qdoublevalidator_top, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qdoublevalidator_qdoublevalidator_decimals, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qdoublevalidator_qdoublevalidator_notation, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qdoublevalidator_qdoublevalidator_bottomchanged, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, bottom, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qdoublevalidator_qdoublevalidator_topchanged, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, top, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qdoublevalidator_qdoublevalidator_decimalschanged, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, decimals, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qdoublevalidator_qdoublevalidator_notationchanged, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, notation, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_gui_qdoublevalidator_qdoublevalidator_method_entry) {
	PHP_ME(Qt_Gui_QDoubleValidator_QDoubleValidator, staticMetaObject, arginfo_qt_gui_qdoublevalidator_qdoublevalidator_staticmetaobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QDoubleValidator_QDoubleValidator, tr, arginfo_qt_gui_qdoublevalidator_qdoublevalidator_tr, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QDoubleValidator_QDoubleValidator, new_, arginfo_qt_gui_qdoublevalidator_qdoublevalidator_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QDoubleValidator_QDoubleValidator, newDoubleDoubleIntQObject, arginfo_qt_gui_qdoublevalidator_qdoublevalidator_newdoubledoubleintqobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QDoubleValidator_QDoubleValidator, validate, arginfo_qt_gui_qdoublevalidator_qdoublevalidator_validate, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QDoubleValidator_QDoubleValidator, fixup, arginfo_qt_gui_qdoublevalidator_qdoublevalidator_fixup, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QDoubleValidator_QDoubleValidator, setRange, arginfo_qt_gui_qdoublevalidator_qdoublevalidator_setrange, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QDoubleValidator_QDoubleValidator, setRangeDoubleDouble, arginfo_qt_gui_qdoublevalidator_qdoublevalidator_setrangedoubledouble, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QDoubleValidator_QDoubleValidator, setBottom, arginfo_qt_gui_qdoublevalidator_qdoublevalidator_setbottom, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QDoubleValidator_QDoubleValidator, setTop, arginfo_qt_gui_qdoublevalidator_qdoublevalidator_settop, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QDoubleValidator_QDoubleValidator, setDecimals, arginfo_qt_gui_qdoublevalidator_qdoublevalidator_setdecimals, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QDoubleValidator_QDoubleValidator, setNotation, arginfo_qt_gui_qdoublevalidator_qdoublevalidator_setnotation, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QDoubleValidator_QDoubleValidator, bottom, arginfo_qt_gui_qdoublevalidator_qdoublevalidator_bottom, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QDoubleValidator_QDoubleValidator, top, arginfo_qt_gui_qdoublevalidator_qdoublevalidator_top, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QDoubleValidator_QDoubleValidator, decimals, arginfo_qt_gui_qdoublevalidator_qdoublevalidator_decimals, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QDoubleValidator_QDoubleValidator, notation, arginfo_qt_gui_qdoublevalidator_qdoublevalidator_notation, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QDoubleValidator_QDoubleValidator, bottomChanged, arginfo_qt_gui_qdoublevalidator_qdoublevalidator_bottomchanged, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QDoubleValidator_QDoubleValidator, topChanged, arginfo_qt_gui_qdoublevalidator_qdoublevalidator_topchanged, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QDoubleValidator_QDoubleValidator, decimalsChanged, arginfo_qt_gui_qdoublevalidator_qdoublevalidator_decimalschanged, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QDoubleValidator_QDoubleValidator, notationChanged, arginfo_qt_gui_qdoublevalidator_qdoublevalidator_notationchanged, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
