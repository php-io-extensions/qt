
extern zend_class_entry *qt_widgets_qcolordialog_qcolordialog_ce;

ZEPHIR_INIT_CLASS(Qt_Widgets_QColorDialog_QColorDialog);

PHP_METHOD(Qt_Widgets_QColorDialog_QColorDialog, open);
PHP_METHOD(Qt_Widgets_QColorDialog_QColorDialog, staticMetaObject);
PHP_METHOD(Qt_Widgets_QColorDialog_QColorDialog, tr);
PHP_METHOD(Qt_Widgets_QColorDialog_QColorDialog, new_);
PHP_METHOD(Qt_Widgets_QColorDialog_QColorDialog, newQColorQWidget);
PHP_METHOD(Qt_Widgets_QColorDialog_QColorDialog, setCurrentColor);
PHP_METHOD(Qt_Widgets_QColorDialog_QColorDialog, currentColor);
PHP_METHOD(Qt_Widgets_QColorDialog_QColorDialog, selectedColor);
PHP_METHOD(Qt_Widgets_QColorDialog_QColorDialog, setOption);
PHP_METHOD(Qt_Widgets_QColorDialog_QColorDialog, testOption);
PHP_METHOD(Qt_Widgets_QColorDialog_QColorDialog, setOptions);
PHP_METHOD(Qt_Widgets_QColorDialog_QColorDialog, options);
PHP_METHOD(Qt_Widgets_QColorDialog_QColorDialog, openQObjectChar);
PHP_METHOD(Qt_Widgets_QColorDialog_QColorDialog, setVisible);
PHP_METHOD(Qt_Widgets_QColorDialog_QColorDialog, getColor);
PHP_METHOD(Qt_Widgets_QColorDialog_QColorDialog, customCount);
PHP_METHOD(Qt_Widgets_QColorDialog_QColorDialog, customColor);
PHP_METHOD(Qt_Widgets_QColorDialog_QColorDialog, setCustomColor);
PHP_METHOD(Qt_Widgets_QColorDialog_QColorDialog, standardColor);
PHP_METHOD(Qt_Widgets_QColorDialog_QColorDialog, setStandardColor);
PHP_METHOD(Qt_Widgets_QColorDialog_QColorDialog, currentColorChanged);
PHP_METHOD(Qt_Widgets_QColorDialog_QColorDialog, colorSelected);
PHP_METHOD(Qt_Widgets_QColorDialog_QColorDialog, changeEvent);
PHP_METHOD(Qt_Widgets_QColorDialog_QColorDialog, done);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qcolordialog_qcolordialog_open, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qcolordialog_qcolordialog_staticmetaobject, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qcolordialog_qcolordialog_tr, 0, 1, IS_STRING, 0)
	ZEND_ARG_INFO(0, s)
	ZEND_ARG_INFO(0, c)
	ZEND_ARG_TYPE_INFO(0, n, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qcolordialog_qcolordialog_new_, 0, 0, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qcolordialog_qcolordialog_newqcolorqwidget, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, initial, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qcolordialog_qcolordialog_setcurrentcolor, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, color, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qcolordialog_qcolordialog_currentcolor, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qcolordialog_qcolordialog_selectedcolor, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qcolordialog_qcolordialog_setoption, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, option, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, on, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qcolordialog_qcolordialog_testoption, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, option, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qcolordialog_qcolordialog_setoptions, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, options, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qcolordialog_qcolordialog_options, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qcolordialog_qcolordialog_openqobjectchar, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, receiver, IS_LONG, 0)
	ZEND_ARG_INFO(0, member)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qcolordialog_qcolordialog_setvisible, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, visible, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qcolordialog_qcolordialog_getcolor, 0, 0, IS_LONG, 0)
	ZEND_ARG_INFO(0, initial)
	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, title, IS_STRING, 0)
	ZEND_ARG_INFO(0, options)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qcolordialog_qcolordialog_customcount, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qcolordialog_qcolordialog_customcolor, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qcolordialog_qcolordialog_setcustomcolor, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, color, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qcolordialog_qcolordialog_standardcolor, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qcolordialog_qcolordialog_setstandardcolor, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, color, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qcolordialog_qcolordialog_currentcolorchanged, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, color, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qcolordialog_qcolordialog_colorselected, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, color, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qcolordialog_qcolordialog_changeevent, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, event, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qcolordialog_qcolordialog_done, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, result, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_widgets_qcolordialog_qcolordialog_method_entry) {
	PHP_ME(Qt_Widgets_QColorDialog_QColorDialog, open, arginfo_qt_widgets_qcolordialog_qcolordialog_open, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QColorDialog_QColorDialog, staticMetaObject, arginfo_qt_widgets_qcolordialog_qcolordialog_staticmetaobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QColorDialog_QColorDialog, tr, arginfo_qt_widgets_qcolordialog_qcolordialog_tr, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QColorDialog_QColorDialog, new_, arginfo_qt_widgets_qcolordialog_qcolordialog_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QColorDialog_QColorDialog, newQColorQWidget, arginfo_qt_widgets_qcolordialog_qcolordialog_newqcolorqwidget, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QColorDialog_QColorDialog, setCurrentColor, arginfo_qt_widgets_qcolordialog_qcolordialog_setcurrentcolor, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QColorDialog_QColorDialog, currentColor, arginfo_qt_widgets_qcolordialog_qcolordialog_currentcolor, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QColorDialog_QColorDialog, selectedColor, arginfo_qt_widgets_qcolordialog_qcolordialog_selectedcolor, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QColorDialog_QColorDialog, setOption, arginfo_qt_widgets_qcolordialog_qcolordialog_setoption, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QColorDialog_QColorDialog, testOption, arginfo_qt_widgets_qcolordialog_qcolordialog_testoption, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QColorDialog_QColorDialog, setOptions, arginfo_qt_widgets_qcolordialog_qcolordialog_setoptions, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QColorDialog_QColorDialog, options, arginfo_qt_widgets_qcolordialog_qcolordialog_options, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QColorDialog_QColorDialog, openQObjectChar, arginfo_qt_widgets_qcolordialog_qcolordialog_openqobjectchar, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QColorDialog_QColorDialog, setVisible, arginfo_qt_widgets_qcolordialog_qcolordialog_setvisible, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QColorDialog_QColorDialog, getColor, arginfo_qt_widgets_qcolordialog_qcolordialog_getcolor, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QColorDialog_QColorDialog, customCount, arginfo_qt_widgets_qcolordialog_qcolordialog_customcount, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QColorDialog_QColorDialog, customColor, arginfo_qt_widgets_qcolordialog_qcolordialog_customcolor, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QColorDialog_QColorDialog, setCustomColor, arginfo_qt_widgets_qcolordialog_qcolordialog_setcustomcolor, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QColorDialog_QColorDialog, standardColor, arginfo_qt_widgets_qcolordialog_qcolordialog_standardcolor, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QColorDialog_QColorDialog, setStandardColor, arginfo_qt_widgets_qcolordialog_qcolordialog_setstandardcolor, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QColorDialog_QColorDialog, currentColorChanged, arginfo_qt_widgets_qcolordialog_qcolordialog_currentcolorchanged, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QColorDialog_QColorDialog, colorSelected, arginfo_qt_widgets_qcolordialog_qcolordialog_colorselected, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QColorDialog_QColorDialog, changeEvent, arginfo_qt_widgets_qcolordialog_qcolordialog_changeevent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QColorDialog_QColorDialog, done, arginfo_qt_widgets_qcolordialog_qcolordialog_done, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
