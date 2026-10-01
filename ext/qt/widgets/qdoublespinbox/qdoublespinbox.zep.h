
extern zend_class_entry *qt_widgets_qdoublespinbox_qdoublespinbox_ce;

ZEPHIR_INIT_CLASS(Qt_Widgets_QDoubleSpinBox_QDoubleSpinBox);

PHP_METHOD(Qt_Widgets_QDoubleSpinBox_QDoubleSpinBox, staticMetaObject);
PHP_METHOD(Qt_Widgets_QDoubleSpinBox_QDoubleSpinBox, tr);
PHP_METHOD(Qt_Widgets_QDoubleSpinBox_QDoubleSpinBox, new_);
PHP_METHOD(Qt_Widgets_QDoubleSpinBox_QDoubleSpinBox, value);
PHP_METHOD(Qt_Widgets_QDoubleSpinBox_QDoubleSpinBox, prefix);
PHP_METHOD(Qt_Widgets_QDoubleSpinBox_QDoubleSpinBox, setPrefix);
PHP_METHOD(Qt_Widgets_QDoubleSpinBox_QDoubleSpinBox, suffix);
PHP_METHOD(Qt_Widgets_QDoubleSpinBox_QDoubleSpinBox, setSuffix);
PHP_METHOD(Qt_Widgets_QDoubleSpinBox_QDoubleSpinBox, cleanText);
PHP_METHOD(Qt_Widgets_QDoubleSpinBox_QDoubleSpinBox, singleStep);
PHP_METHOD(Qt_Widgets_QDoubleSpinBox_QDoubleSpinBox, setSingleStep);
PHP_METHOD(Qt_Widgets_QDoubleSpinBox_QDoubleSpinBox, minimum);
PHP_METHOD(Qt_Widgets_QDoubleSpinBox_QDoubleSpinBox, setMinimum);
PHP_METHOD(Qt_Widgets_QDoubleSpinBox_QDoubleSpinBox, maximum);
PHP_METHOD(Qt_Widgets_QDoubleSpinBox_QDoubleSpinBox, setMaximum);
PHP_METHOD(Qt_Widgets_QDoubleSpinBox_QDoubleSpinBox, setRange);
PHP_METHOD(Qt_Widgets_QDoubleSpinBox_QDoubleSpinBox, stepType);
PHP_METHOD(Qt_Widgets_QDoubleSpinBox_QDoubleSpinBox, setStepType);
PHP_METHOD(Qt_Widgets_QDoubleSpinBox_QDoubleSpinBox, decimals);
PHP_METHOD(Qt_Widgets_QDoubleSpinBox_QDoubleSpinBox, setDecimals);
PHP_METHOD(Qt_Widgets_QDoubleSpinBox_QDoubleSpinBox, validate);
PHP_METHOD(Qt_Widgets_QDoubleSpinBox_QDoubleSpinBox, valueFromText);
PHP_METHOD(Qt_Widgets_QDoubleSpinBox_QDoubleSpinBox, textFromValue);
PHP_METHOD(Qt_Widgets_QDoubleSpinBox_QDoubleSpinBox, fixup);
PHP_METHOD(Qt_Widgets_QDoubleSpinBox_QDoubleSpinBox, setValue);
PHP_METHOD(Qt_Widgets_QDoubleSpinBox_QDoubleSpinBox, valueChanged);
PHP_METHOD(Qt_Widgets_QDoubleSpinBox_QDoubleSpinBox, textChanged);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qdoublespinbox_qdoublespinbox_staticmetaobject, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qdoublespinbox_qdoublespinbox_tr, 0, 1, IS_STRING, 0)
	ZEND_ARG_INFO(0, s)
	ZEND_ARG_INFO(0, c)
	ZEND_ARG_TYPE_INFO(0, n, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qdoublespinbox_qdoublespinbox_new_, 0, 0, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qdoublespinbox_qdoublespinbox_value, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qdoublespinbox_qdoublespinbox_prefix, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qdoublespinbox_qdoublespinbox_setprefix, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, prefix, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qdoublespinbox_qdoublespinbox_suffix, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qdoublespinbox_qdoublespinbox_setsuffix, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, suffix, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qdoublespinbox_qdoublespinbox_cleantext, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qdoublespinbox_qdoublespinbox_singlestep, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qdoublespinbox_qdoublespinbox_setsinglestep, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, val, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qdoublespinbox_qdoublespinbox_minimum, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qdoublespinbox_qdoublespinbox_setminimum, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, min, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qdoublespinbox_qdoublespinbox_maximum, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qdoublespinbox_qdoublespinbox_setmaximum, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, max, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qdoublespinbox_qdoublespinbox_setrange, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, min, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, max, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qdoublespinbox_qdoublespinbox_steptype, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qdoublespinbox_qdoublespinbox_setsteptype, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, stepType, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qdoublespinbox_qdoublespinbox_decimals, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qdoublespinbox_qdoublespinbox_setdecimals, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, prec, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qdoublespinbox_qdoublespinbox_validate, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qdoublespinbox_qdoublespinbox_valuefromtext, 0, 2, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, text, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qdoublespinbox_qdoublespinbox_textfromvalue, 0, 2, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, val, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qdoublespinbox_qdoublespinbox_fixup, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qdoublespinbox_qdoublespinbox_setvalue, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, val, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qdoublespinbox_qdoublespinbox_valuechanged, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qdoublespinbox_qdoublespinbox_textchanged, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_widgets_qdoublespinbox_qdoublespinbox_method_entry) {
	PHP_ME(Qt_Widgets_QDoubleSpinBox_QDoubleSpinBox, staticMetaObject, arginfo_qt_widgets_qdoublespinbox_qdoublespinbox_staticmetaobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QDoubleSpinBox_QDoubleSpinBox, tr, arginfo_qt_widgets_qdoublespinbox_qdoublespinbox_tr, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QDoubleSpinBox_QDoubleSpinBox, new_, arginfo_qt_widgets_qdoublespinbox_qdoublespinbox_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QDoubleSpinBox_QDoubleSpinBox, value, arginfo_qt_widgets_qdoublespinbox_qdoublespinbox_value, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QDoubleSpinBox_QDoubleSpinBox, prefix, arginfo_qt_widgets_qdoublespinbox_qdoublespinbox_prefix, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QDoubleSpinBox_QDoubleSpinBox, setPrefix, arginfo_qt_widgets_qdoublespinbox_qdoublespinbox_setprefix, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QDoubleSpinBox_QDoubleSpinBox, suffix, arginfo_qt_widgets_qdoublespinbox_qdoublespinbox_suffix, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QDoubleSpinBox_QDoubleSpinBox, setSuffix, arginfo_qt_widgets_qdoublespinbox_qdoublespinbox_setsuffix, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QDoubleSpinBox_QDoubleSpinBox, cleanText, arginfo_qt_widgets_qdoublespinbox_qdoublespinbox_cleantext, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QDoubleSpinBox_QDoubleSpinBox, singleStep, arginfo_qt_widgets_qdoublespinbox_qdoublespinbox_singlestep, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QDoubleSpinBox_QDoubleSpinBox, setSingleStep, arginfo_qt_widgets_qdoublespinbox_qdoublespinbox_setsinglestep, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QDoubleSpinBox_QDoubleSpinBox, minimum, arginfo_qt_widgets_qdoublespinbox_qdoublespinbox_minimum, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QDoubleSpinBox_QDoubleSpinBox, setMinimum, arginfo_qt_widgets_qdoublespinbox_qdoublespinbox_setminimum, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QDoubleSpinBox_QDoubleSpinBox, maximum, arginfo_qt_widgets_qdoublespinbox_qdoublespinbox_maximum, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QDoubleSpinBox_QDoubleSpinBox, setMaximum, arginfo_qt_widgets_qdoublespinbox_qdoublespinbox_setmaximum, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QDoubleSpinBox_QDoubleSpinBox, setRange, arginfo_qt_widgets_qdoublespinbox_qdoublespinbox_setrange, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QDoubleSpinBox_QDoubleSpinBox, stepType, arginfo_qt_widgets_qdoublespinbox_qdoublespinbox_steptype, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QDoubleSpinBox_QDoubleSpinBox, setStepType, arginfo_qt_widgets_qdoublespinbox_qdoublespinbox_setsteptype, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QDoubleSpinBox_QDoubleSpinBox, decimals, arginfo_qt_widgets_qdoublespinbox_qdoublespinbox_decimals, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QDoubleSpinBox_QDoubleSpinBox, setDecimals, arginfo_qt_widgets_qdoublespinbox_qdoublespinbox_setdecimals, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QDoubleSpinBox_QDoubleSpinBox, validate, arginfo_qt_widgets_qdoublespinbox_qdoublespinbox_validate, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QDoubleSpinBox_QDoubleSpinBox, valueFromText, arginfo_qt_widgets_qdoublespinbox_qdoublespinbox_valuefromtext, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QDoubleSpinBox_QDoubleSpinBox, textFromValue, arginfo_qt_widgets_qdoublespinbox_qdoublespinbox_textfromvalue, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QDoubleSpinBox_QDoubleSpinBox, fixup, arginfo_qt_widgets_qdoublespinbox_qdoublespinbox_fixup, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QDoubleSpinBox_QDoubleSpinBox, setValue, arginfo_qt_widgets_qdoublespinbox_qdoublespinbox_setvalue, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QDoubleSpinBox_QDoubleSpinBox, valueChanged, arginfo_qt_widgets_qdoublespinbox_qdoublespinbox_valuechanged, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QDoubleSpinBox_QDoubleSpinBox, textChanged, arginfo_qt_widgets_qdoublespinbox_qdoublespinbox_textchanged, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
