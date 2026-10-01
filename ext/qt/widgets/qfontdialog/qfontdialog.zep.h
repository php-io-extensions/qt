
extern zend_class_entry *qt_widgets_qfontdialog_qfontdialog_ce;

ZEPHIR_INIT_CLASS(Qt_Widgets_QFontDialog_QFontDialog);

PHP_METHOD(Qt_Widgets_QFontDialog_QFontDialog, open);
PHP_METHOD(Qt_Widgets_QFontDialog_QFontDialog, staticMetaObject);
PHP_METHOD(Qt_Widgets_QFontDialog_QFontDialog, tr);
PHP_METHOD(Qt_Widgets_QFontDialog_QFontDialog, new_);
PHP_METHOD(Qt_Widgets_QFontDialog_QFontDialog, newQFontQWidget);
PHP_METHOD(Qt_Widgets_QFontDialog_QFontDialog, setCurrentFont);
PHP_METHOD(Qt_Widgets_QFontDialog_QFontDialog, currentFont);
PHP_METHOD(Qt_Widgets_QFontDialog_QFontDialog, selectedFont);
PHP_METHOD(Qt_Widgets_QFontDialog_QFontDialog, setOption);
PHP_METHOD(Qt_Widgets_QFontDialog_QFontDialog, testOption);
PHP_METHOD(Qt_Widgets_QFontDialog_QFontDialog, setOptions);
PHP_METHOD(Qt_Widgets_QFontDialog_QFontDialog, options);
PHP_METHOD(Qt_Widgets_QFontDialog_QFontDialog, openQObjectChar);
PHP_METHOD(Qt_Widgets_QFontDialog_QFontDialog, setVisible);
PHP_METHOD(Qt_Widgets_QFontDialog_QFontDialog, getFont);
PHP_METHOD(Qt_Widgets_QFontDialog_QFontDialog, getFontBoolQFontQWidgetQStringQFontDialogFontDialogOptions);
PHP_METHOD(Qt_Widgets_QFontDialog_QFontDialog, currentFontChanged);
PHP_METHOD(Qt_Widgets_QFontDialog_QFontDialog, fontSelected);
PHP_METHOD(Qt_Widgets_QFontDialog_QFontDialog, changeEvent);
PHP_METHOD(Qt_Widgets_QFontDialog_QFontDialog, done);
PHP_METHOD(Qt_Widgets_QFontDialog_QFontDialog, eventFilter);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qfontdialog_qfontdialog_open, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qfontdialog_qfontdialog_staticmetaobject, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qfontdialog_qfontdialog_tr, 0, 1, IS_STRING, 0)
	ZEND_ARG_INFO(0, s)
	ZEND_ARG_INFO(0, c)
	ZEND_ARG_TYPE_INFO(0, n, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qfontdialog_qfontdialog_new_, 0, 0, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qfontdialog_qfontdialog_newqfontqwidget, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, initial, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qfontdialog_qfontdialog_setcurrentfont, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, font, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qfontdialog_qfontdialog_currentfont, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qfontdialog_qfontdialog_selectedfont, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qfontdialog_qfontdialog_setoption, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, option, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, on, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qfontdialog_qfontdialog_testoption, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, option, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qfontdialog_qfontdialog_setoptions, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, options, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qfontdialog_qfontdialog_options, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qfontdialog_qfontdialog_openqobjectchar, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, receiver, IS_LONG, 0)
	ZEND_ARG_INFO(0, member)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qfontdialog_qfontdialog_setvisible, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, visible, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qfontdialog_qfontdialog_getfont, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_INFO(0, ok)
	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qfontdialog_qfontdialog_getfontboolqfontqwidgetqstringqfontdialogfontdialogoptions, 0, 2, IS_ARRAY, 0)
	ZEND_ARG_INFO(0, ok)
	ZEND_ARG_TYPE_INFO(0, initial, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, title, IS_STRING, 0)
	ZEND_ARG_INFO(0, options)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qfontdialog_qfontdialog_currentfontchanged, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, font, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qfontdialog_qfontdialog_fontselected, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, font, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qfontdialog_qfontdialog_changeevent, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, event, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qfontdialog_qfontdialog_done, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, result, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qfontdialog_qfontdialog_eventfilter, 0, 3, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, object_, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, event, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_widgets_qfontdialog_qfontdialog_method_entry) {
	PHP_ME(Qt_Widgets_QFontDialog_QFontDialog, open, arginfo_qt_widgets_qfontdialog_qfontdialog_open, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QFontDialog_QFontDialog, staticMetaObject, arginfo_qt_widgets_qfontdialog_qfontdialog_staticmetaobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QFontDialog_QFontDialog, tr, arginfo_qt_widgets_qfontdialog_qfontdialog_tr, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QFontDialog_QFontDialog, new_, arginfo_qt_widgets_qfontdialog_qfontdialog_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QFontDialog_QFontDialog, newQFontQWidget, arginfo_qt_widgets_qfontdialog_qfontdialog_newqfontqwidget, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QFontDialog_QFontDialog, setCurrentFont, arginfo_qt_widgets_qfontdialog_qfontdialog_setcurrentfont, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QFontDialog_QFontDialog, currentFont, arginfo_qt_widgets_qfontdialog_qfontdialog_currentfont, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QFontDialog_QFontDialog, selectedFont, arginfo_qt_widgets_qfontdialog_qfontdialog_selectedfont, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QFontDialog_QFontDialog, setOption, arginfo_qt_widgets_qfontdialog_qfontdialog_setoption, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QFontDialog_QFontDialog, testOption, arginfo_qt_widgets_qfontdialog_qfontdialog_testoption, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QFontDialog_QFontDialog, setOptions, arginfo_qt_widgets_qfontdialog_qfontdialog_setoptions, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QFontDialog_QFontDialog, options, arginfo_qt_widgets_qfontdialog_qfontdialog_options, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QFontDialog_QFontDialog, openQObjectChar, arginfo_qt_widgets_qfontdialog_qfontdialog_openqobjectchar, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QFontDialog_QFontDialog, setVisible, arginfo_qt_widgets_qfontdialog_qfontdialog_setvisible, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QFontDialog_QFontDialog, getFont, arginfo_qt_widgets_qfontdialog_qfontdialog_getfont, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QFontDialog_QFontDialog, getFontBoolQFontQWidgetQStringQFontDialogFontDialogOptions, arginfo_qt_widgets_qfontdialog_qfontdialog_getfontboolqfontqwidgetqstringqfontdialogfontdialogoptions, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QFontDialog_QFontDialog, currentFontChanged, arginfo_qt_widgets_qfontdialog_qfontdialog_currentfontchanged, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QFontDialog_QFontDialog, fontSelected, arginfo_qt_widgets_qfontdialog_qfontdialog_fontselected, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QFontDialog_QFontDialog, changeEvent, arginfo_qt_widgets_qfontdialog_qfontdialog_changeevent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QFontDialog_QFontDialog, done, arginfo_qt_widgets_qfontdialog_qfontdialog_done, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QFontDialog_QFontDialog, eventFilter, arginfo_qt_widgets_qfontdialog_qfontdialog_eventfilter, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
