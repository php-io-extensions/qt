
extern zend_class_entry *qt_widgets_qfontcombobox_qfontcombobox_ce;

ZEPHIR_INIT_CLASS(Qt_Widgets_QFontComboBox_QFontComboBox);

PHP_METHOD(Qt_Widgets_QFontComboBox_QFontComboBox, staticMetaObject);
PHP_METHOD(Qt_Widgets_QFontComboBox_QFontComboBox, tr);
PHP_METHOD(Qt_Widgets_QFontComboBox_QFontComboBox, new_);
PHP_METHOD(Qt_Widgets_QFontComboBox_QFontComboBox, setWritingSystem);
PHP_METHOD(Qt_Widgets_QFontComboBox_QFontComboBox, writingSystem);
PHP_METHOD(Qt_Widgets_QFontComboBox_QFontComboBox, setFontFilters);
PHP_METHOD(Qt_Widgets_QFontComboBox_QFontComboBox, fontFilters);
PHP_METHOD(Qt_Widgets_QFontComboBox_QFontComboBox, currentFont);
PHP_METHOD(Qt_Widgets_QFontComboBox_QFontComboBox, sizeHint);
PHP_METHOD(Qt_Widgets_QFontComboBox_QFontComboBox, setSampleTextForSystem);
PHP_METHOD(Qt_Widgets_QFontComboBox_QFontComboBox, sampleTextForSystem);
PHP_METHOD(Qt_Widgets_QFontComboBox_QFontComboBox, setSampleTextForFont);
PHP_METHOD(Qt_Widgets_QFontComboBox_QFontComboBox, sampleTextForFont);
PHP_METHOD(Qt_Widgets_QFontComboBox_QFontComboBox, setDisplayFont);
PHP_METHOD(Qt_Widgets_QFontComboBox_QFontComboBox, setCurrentFont);
PHP_METHOD(Qt_Widgets_QFontComboBox_QFontComboBox, currentFontChanged);
PHP_METHOD(Qt_Widgets_QFontComboBox_QFontComboBox, event);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qfontcombobox_qfontcombobox_staticmetaobject, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qfontcombobox_qfontcombobox_tr, 0, 1, IS_STRING, 0)
	ZEND_ARG_INFO(0, s)
	ZEND_ARG_INFO(0, c)
	ZEND_ARG_TYPE_INFO(0, n, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qfontcombobox_qfontcombobox_new_, 0, 0, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qfontcombobox_qfontcombobox_setwritingsystem, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qfontcombobox_qfontcombobox_writingsystem, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qfontcombobox_qfontcombobox_setfontfilters, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, filters, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qfontcombobox_qfontcombobox_fontfilters, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qfontcombobox_qfontcombobox_currentfont, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qfontcombobox_qfontcombobox_sizehint, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qfontcombobox_qfontcombobox_setsampletextforsystem, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, writingSystem, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sampleText, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qfontcombobox_qfontcombobox_sampletextforsystem, 0, 2, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, writingSystem, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qfontcombobox_qfontcombobox_setsampletextforfont, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, fontFamily, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, sampleText, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qfontcombobox_qfontcombobox_sampletextforfont, 0, 2, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, fontFamily, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qfontcombobox_qfontcombobox_setdisplayfont, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, fontFamily, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, font, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qfontcombobox_qfontcombobox_setcurrentfont, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, f, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qfontcombobox_qfontcombobox_currentfontchanged, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, f, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qfontcombobox_qfontcombobox_event, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, e, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_widgets_qfontcombobox_qfontcombobox_method_entry) {
	PHP_ME(Qt_Widgets_QFontComboBox_QFontComboBox, staticMetaObject, arginfo_qt_widgets_qfontcombobox_qfontcombobox_staticmetaobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QFontComboBox_QFontComboBox, tr, arginfo_qt_widgets_qfontcombobox_qfontcombobox_tr, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QFontComboBox_QFontComboBox, new_, arginfo_qt_widgets_qfontcombobox_qfontcombobox_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QFontComboBox_QFontComboBox, setWritingSystem, arginfo_qt_widgets_qfontcombobox_qfontcombobox_setwritingsystem, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QFontComboBox_QFontComboBox, writingSystem, arginfo_qt_widgets_qfontcombobox_qfontcombobox_writingsystem, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QFontComboBox_QFontComboBox, setFontFilters, arginfo_qt_widgets_qfontcombobox_qfontcombobox_setfontfilters, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QFontComboBox_QFontComboBox, fontFilters, arginfo_qt_widgets_qfontcombobox_qfontcombobox_fontfilters, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QFontComboBox_QFontComboBox, currentFont, arginfo_qt_widgets_qfontcombobox_qfontcombobox_currentfont, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QFontComboBox_QFontComboBox, sizeHint, arginfo_qt_widgets_qfontcombobox_qfontcombobox_sizehint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QFontComboBox_QFontComboBox, setSampleTextForSystem, arginfo_qt_widgets_qfontcombobox_qfontcombobox_setsampletextforsystem, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QFontComboBox_QFontComboBox, sampleTextForSystem, arginfo_qt_widgets_qfontcombobox_qfontcombobox_sampletextforsystem, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QFontComboBox_QFontComboBox, setSampleTextForFont, arginfo_qt_widgets_qfontcombobox_qfontcombobox_setsampletextforfont, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QFontComboBox_QFontComboBox, sampleTextForFont, arginfo_qt_widgets_qfontcombobox_qfontcombobox_sampletextforfont, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QFontComboBox_QFontComboBox, setDisplayFont, arginfo_qt_widgets_qfontcombobox_qfontcombobox_setdisplayfont, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QFontComboBox_QFontComboBox, setCurrentFont, arginfo_qt_widgets_qfontcombobox_qfontcombobox_setcurrentfont, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QFontComboBox_QFontComboBox, currentFontChanged, arginfo_qt_widgets_qfontcombobox_qfontcombobox_currentfontchanged, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QFontComboBox_QFontComboBox, event, arginfo_qt_widgets_qfontcombobox_qfontcombobox_event, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
