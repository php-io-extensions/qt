
extern zend_class_entry *qt_widgets_qspinbox_qspinbox_ce;

ZEPHIR_INIT_CLASS(Qt_Widgets_QSpinBox_QSpinBox);

PHP_METHOD(Qt_Widgets_QSpinBox_QSpinBox, staticMetaObject);
PHP_METHOD(Qt_Widgets_QSpinBox_QSpinBox, tr);
PHP_METHOD(Qt_Widgets_QSpinBox_QSpinBox, new_);
PHP_METHOD(Qt_Widgets_QSpinBox_QSpinBox, value);
PHP_METHOD(Qt_Widgets_QSpinBox_QSpinBox, prefix);
PHP_METHOD(Qt_Widgets_QSpinBox_QSpinBox, setPrefix);
PHP_METHOD(Qt_Widgets_QSpinBox_QSpinBox, suffix);
PHP_METHOD(Qt_Widgets_QSpinBox_QSpinBox, setSuffix);
PHP_METHOD(Qt_Widgets_QSpinBox_QSpinBox, cleanText);
PHP_METHOD(Qt_Widgets_QSpinBox_QSpinBox, singleStep);
PHP_METHOD(Qt_Widgets_QSpinBox_QSpinBox, setSingleStep);
PHP_METHOD(Qt_Widgets_QSpinBox_QSpinBox, minimum);
PHP_METHOD(Qt_Widgets_QSpinBox_QSpinBox, setMinimum);
PHP_METHOD(Qt_Widgets_QSpinBox_QSpinBox, maximum);
PHP_METHOD(Qt_Widgets_QSpinBox_QSpinBox, setMaximum);
PHP_METHOD(Qt_Widgets_QSpinBox_QSpinBox, setRange);
PHP_METHOD(Qt_Widgets_QSpinBox_QSpinBox, stepType);
PHP_METHOD(Qt_Widgets_QSpinBox_QSpinBox, setStepType);
PHP_METHOD(Qt_Widgets_QSpinBox_QSpinBox, displayIntegerBase);
PHP_METHOD(Qt_Widgets_QSpinBox_QSpinBox, setDisplayIntegerBase);
PHP_METHOD(Qt_Widgets_QSpinBox_QSpinBox, event);
PHP_METHOD(Qt_Widgets_QSpinBox_QSpinBox, validate);
PHP_METHOD(Qt_Widgets_QSpinBox_QSpinBox, valueFromText);
PHP_METHOD(Qt_Widgets_QSpinBox_QSpinBox, textFromValue);
PHP_METHOD(Qt_Widgets_QSpinBox_QSpinBox, fixup);
PHP_METHOD(Qt_Widgets_QSpinBox_QSpinBox, setValue);
PHP_METHOD(Qt_Widgets_QSpinBox_QSpinBox, valueChanged);
PHP_METHOD(Qt_Widgets_QSpinBox_QSpinBox, textChanged);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qspinbox_qspinbox_staticmetaobject, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qspinbox_qspinbox_tr, 0, 1, IS_STRING, 0)
	ZEND_ARG_INFO(0, s)
	ZEND_ARG_INFO(0, c)
	ZEND_ARG_TYPE_INFO(0, n, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qspinbox_qspinbox_new_, 0, 0, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qspinbox_qspinbox_value, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qspinbox_qspinbox_prefix, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qspinbox_qspinbox_setprefix, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, prefix, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qspinbox_qspinbox_suffix, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qspinbox_qspinbox_setsuffix, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, suffix, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qspinbox_qspinbox_cleantext, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qspinbox_qspinbox_singlestep, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qspinbox_qspinbox_setsinglestep, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, val, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qspinbox_qspinbox_minimum, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qspinbox_qspinbox_setminimum, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, min, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qspinbox_qspinbox_maximum, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qspinbox_qspinbox_setmaximum, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, max, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qspinbox_qspinbox_setrange, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, min, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, max, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qspinbox_qspinbox_steptype, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qspinbox_qspinbox_setsteptype, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, stepType, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qspinbox_qspinbox_displayintegerbase, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qspinbox_qspinbox_setdisplayintegerbase, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, base, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qspinbox_qspinbox_event, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, event, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qspinbox_qspinbox_validate, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qspinbox_qspinbox_valuefromtext, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, text, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qspinbox_qspinbox_textfromvalue, 0, 2, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, val, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qspinbox_qspinbox_fixup, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qspinbox_qspinbox_setvalue, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, val, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qspinbox_qspinbox_valuechanged, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qspinbox_qspinbox_textchanged, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_widgets_qspinbox_qspinbox_method_entry) {
	PHP_ME(Qt_Widgets_QSpinBox_QSpinBox, staticMetaObject, arginfo_qt_widgets_qspinbox_qspinbox_staticmetaobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QSpinBox_QSpinBox, tr, arginfo_qt_widgets_qspinbox_qspinbox_tr, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QSpinBox_QSpinBox, new_, arginfo_qt_widgets_qspinbox_qspinbox_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QSpinBox_QSpinBox, value, arginfo_qt_widgets_qspinbox_qspinbox_value, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QSpinBox_QSpinBox, prefix, arginfo_qt_widgets_qspinbox_qspinbox_prefix, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QSpinBox_QSpinBox, setPrefix, arginfo_qt_widgets_qspinbox_qspinbox_setprefix, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QSpinBox_QSpinBox, suffix, arginfo_qt_widgets_qspinbox_qspinbox_suffix, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QSpinBox_QSpinBox, setSuffix, arginfo_qt_widgets_qspinbox_qspinbox_setsuffix, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QSpinBox_QSpinBox, cleanText, arginfo_qt_widgets_qspinbox_qspinbox_cleantext, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QSpinBox_QSpinBox, singleStep, arginfo_qt_widgets_qspinbox_qspinbox_singlestep, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QSpinBox_QSpinBox, setSingleStep, arginfo_qt_widgets_qspinbox_qspinbox_setsinglestep, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QSpinBox_QSpinBox, minimum, arginfo_qt_widgets_qspinbox_qspinbox_minimum, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QSpinBox_QSpinBox, setMinimum, arginfo_qt_widgets_qspinbox_qspinbox_setminimum, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QSpinBox_QSpinBox, maximum, arginfo_qt_widgets_qspinbox_qspinbox_maximum, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QSpinBox_QSpinBox, setMaximum, arginfo_qt_widgets_qspinbox_qspinbox_setmaximum, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QSpinBox_QSpinBox, setRange, arginfo_qt_widgets_qspinbox_qspinbox_setrange, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QSpinBox_QSpinBox, stepType, arginfo_qt_widgets_qspinbox_qspinbox_steptype, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QSpinBox_QSpinBox, setStepType, arginfo_qt_widgets_qspinbox_qspinbox_setsteptype, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QSpinBox_QSpinBox, displayIntegerBase, arginfo_qt_widgets_qspinbox_qspinbox_displayintegerbase, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QSpinBox_QSpinBox, setDisplayIntegerBase, arginfo_qt_widgets_qspinbox_qspinbox_setdisplayintegerbase, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QSpinBox_QSpinBox, event, arginfo_qt_widgets_qspinbox_qspinbox_event, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QSpinBox_QSpinBox, validate, arginfo_qt_widgets_qspinbox_qspinbox_validate, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QSpinBox_QSpinBox, valueFromText, arginfo_qt_widgets_qspinbox_qspinbox_valuefromtext, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QSpinBox_QSpinBox, textFromValue, arginfo_qt_widgets_qspinbox_qspinbox_textfromvalue, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QSpinBox_QSpinBox, fixup, arginfo_qt_widgets_qspinbox_qspinbox_fixup, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QSpinBox_QSpinBox, setValue, arginfo_qt_widgets_qspinbox_qspinbox_setvalue, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QSpinBox_QSpinBox, valueChanged, arginfo_qt_widgets_qspinbox_qspinbox_valuechanged, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QSpinBox_QSpinBox, textChanged, arginfo_qt_widgets_qspinbox_qspinbox_textchanged, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
