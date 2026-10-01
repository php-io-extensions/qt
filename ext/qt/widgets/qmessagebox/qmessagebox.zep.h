
extern zend_class_entry *qt_widgets_qmessagebox_qmessagebox_ce;

ZEPHIR_INIT_CLASS(Qt_Widgets_QMessageBox_QMessageBox);

PHP_METHOD(Qt_Widgets_QMessageBox_QMessageBox, open);
PHP_METHOD(Qt_Widgets_QMessageBox_QMessageBox, staticMetaObject);
PHP_METHOD(Qt_Widgets_QMessageBox_QMessageBox, tr);
PHP_METHOD(Qt_Widgets_QMessageBox_QMessageBox, new_);
PHP_METHOD(Qt_Widgets_QMessageBox_QMessageBox, newQMessageBoxIconQStringQStringQMessageBoxStandardButtonsQWidgetQtWindowFlags);
PHP_METHOD(Qt_Widgets_QMessageBox_QMessageBox, addButton);
PHP_METHOD(Qt_Widgets_QMessageBox_QMessageBox, addButtonQStringQMessageBoxButtonRole);
PHP_METHOD(Qt_Widgets_QMessageBox_QMessageBox, addButtonQMessageBoxStandardButton);
PHP_METHOD(Qt_Widgets_QMessageBox_QMessageBox, removeButton);
PHP_METHOD(Qt_Widgets_QMessageBox_QMessageBox, openQObjectChar);
PHP_METHOD(Qt_Widgets_QMessageBox_QMessageBox, buttons);
PHP_METHOD(Qt_Widgets_QMessageBox_QMessageBox, buttonRole);
PHP_METHOD(Qt_Widgets_QMessageBox_QMessageBox, setStandardButtons);
PHP_METHOD(Qt_Widgets_QMessageBox_QMessageBox, standardButtons);
PHP_METHOD(Qt_Widgets_QMessageBox_QMessageBox, standardButton);
PHP_METHOD(Qt_Widgets_QMessageBox_QMessageBox, button);
PHP_METHOD(Qt_Widgets_QMessageBox_QMessageBox, defaultButton);
PHP_METHOD(Qt_Widgets_QMessageBox_QMessageBox, setDefaultButton);
PHP_METHOD(Qt_Widgets_QMessageBox_QMessageBox, setDefaultButtonQMessageBoxStandardButton);
PHP_METHOD(Qt_Widgets_QMessageBox_QMessageBox, escapeButton);
PHP_METHOD(Qt_Widgets_QMessageBox_QMessageBox, setEscapeButton);
PHP_METHOD(Qt_Widgets_QMessageBox_QMessageBox, setEscapeButtonQMessageBoxStandardButton);
PHP_METHOD(Qt_Widgets_QMessageBox_QMessageBox, clickedButton);
PHP_METHOD(Qt_Widgets_QMessageBox_QMessageBox, text);
PHP_METHOD(Qt_Widgets_QMessageBox_QMessageBox, setText);
PHP_METHOD(Qt_Widgets_QMessageBox_QMessageBox, icon);
PHP_METHOD(Qt_Widgets_QMessageBox_QMessageBox, setIcon);
PHP_METHOD(Qt_Widgets_QMessageBox_QMessageBox, iconPixmap);
PHP_METHOD(Qt_Widgets_QMessageBox_QMessageBox, setIconPixmap);
PHP_METHOD(Qt_Widgets_QMessageBox_QMessageBox, textFormat);
PHP_METHOD(Qt_Widgets_QMessageBox_QMessageBox, setTextFormat);
PHP_METHOD(Qt_Widgets_QMessageBox_QMessageBox, setTextInteractionFlags);
PHP_METHOD(Qt_Widgets_QMessageBox_QMessageBox, textInteractionFlags);
PHP_METHOD(Qt_Widgets_QMessageBox_QMessageBox, setCheckBox);
PHP_METHOD(Qt_Widgets_QMessageBox_QMessageBox, checkBox);
PHP_METHOD(Qt_Widgets_QMessageBox_QMessageBox, setOption);
PHP_METHOD(Qt_Widgets_QMessageBox_QMessageBox, testOption);
PHP_METHOD(Qt_Widgets_QMessageBox_QMessageBox, setOptions);
PHP_METHOD(Qt_Widgets_QMessageBox_QMessageBox, options);
PHP_METHOD(Qt_Widgets_QMessageBox_QMessageBox, information);
PHP_METHOD(Qt_Widgets_QMessageBox_QMessageBox, informationQWidgetQStringQStringQMessageBoxStandardButtonQMessageBoxStandardButton);
PHP_METHOD(Qt_Widgets_QMessageBox_QMessageBox, question);
PHP_METHOD(Qt_Widgets_QMessageBox_QMessageBox, questionQWidgetQStringQStringQMessageBoxStandardButtonQMessageBoxStandardButton);
PHP_METHOD(Qt_Widgets_QMessageBox_QMessageBox, warning);
PHP_METHOD(Qt_Widgets_QMessageBox_QMessageBox, warningQWidgetQStringQStringQMessageBoxStandardButtonQMessageBoxStandardButton);
PHP_METHOD(Qt_Widgets_QMessageBox_QMessageBox, critical);
PHP_METHOD(Qt_Widgets_QMessageBox_QMessageBox, criticalQWidgetQStringQStringQMessageBoxStandardButtonQMessageBoxStandardButton);
PHP_METHOD(Qt_Widgets_QMessageBox_QMessageBox, about);
PHP_METHOD(Qt_Widgets_QMessageBox_QMessageBox, aboutQt);
PHP_METHOD(Qt_Widgets_QMessageBox_QMessageBox, newQStringQStringQMessageBoxIconIntIntIntQWidgetQtWindowFlags);
PHP_METHOD(Qt_Widgets_QMessageBox_QMessageBox, informativeText);
PHP_METHOD(Qt_Widgets_QMessageBox_QMessageBox, setInformativeText);
PHP_METHOD(Qt_Widgets_QMessageBox_QMessageBox, detailedText);
PHP_METHOD(Qt_Widgets_QMessageBox_QMessageBox, setDetailedText);
PHP_METHOD(Qt_Widgets_QMessageBox_QMessageBox, setWindowTitle);
PHP_METHOD(Qt_Widgets_QMessageBox_QMessageBox, setWindowModality);
PHP_METHOD(Qt_Widgets_QMessageBox_QMessageBox, buttonClicked);
PHP_METHOD(Qt_Widgets_QMessageBox_QMessageBox, event);
PHP_METHOD(Qt_Widgets_QMessageBox_QMessageBox, resizeEvent);
PHP_METHOD(Qt_Widgets_QMessageBox_QMessageBox, showEvent);
PHP_METHOD(Qt_Widgets_QMessageBox_QMessageBox, closeEvent);
PHP_METHOD(Qt_Widgets_QMessageBox_QMessageBox, keyPressEvent);
PHP_METHOD(Qt_Widgets_QMessageBox_QMessageBox, changeEvent);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qmessagebox_qmessagebox_open, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qmessagebox_qmessagebox_staticmetaobject, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qmessagebox_qmessagebox_tr, 0, 1, IS_STRING, 0)
	ZEND_ARG_INFO(0, s)
	ZEND_ARG_INFO(0, c)
	ZEND_ARG_TYPE_INFO(0, n, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qmessagebox_qmessagebox_new_, 0, 0, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qmessagebox_qmessagebox_newqmessageboxiconqstringqstringqmessageboxstandardbuttonsqwidgetqtwindowflags, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, icon, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, title, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, text, IS_STRING, 0)
	ZEND_ARG_INFO(0, buttons)
	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
	ZEND_ARG_INFO(0, flags)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qmessagebox_qmessagebox_addbutton, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, button, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, role, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qmessagebox_qmessagebox_addbuttonqstringqmessageboxbuttonrole, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, text, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, role, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qmessagebox_qmessagebox_addbuttonqmessageboxstandardbutton, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, button, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qmessagebox_qmessagebox_removebutton, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, button, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qmessagebox_qmessagebox_openqobjectchar, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, receiver, IS_LONG, 0)
	ZEND_ARG_INFO(0, member)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qmessagebox_qmessagebox_buttons, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qmessagebox_qmessagebox_buttonrole, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, button, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qmessagebox_qmessagebox_setstandardbuttons, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, buttons, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qmessagebox_qmessagebox_standardbuttons, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qmessagebox_qmessagebox_standardbutton, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, button, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qmessagebox_qmessagebox_button, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, which, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qmessagebox_qmessagebox_defaultbutton, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qmessagebox_qmessagebox_setdefaultbutton, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, button, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qmessagebox_qmessagebox_setdefaultbuttonqmessageboxstandardbutton, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, button, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qmessagebox_qmessagebox_escapebutton, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qmessagebox_qmessagebox_setescapebutton, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, button, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qmessagebox_qmessagebox_setescapebuttonqmessageboxstandardbutton, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, button, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qmessagebox_qmessagebox_clickedbutton, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qmessagebox_qmessagebox_text, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qmessagebox_qmessagebox_settext, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, text, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qmessagebox_qmessagebox_icon, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qmessagebox_qmessagebox_seticon, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qmessagebox_qmessagebox_iconpixmap, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qmessagebox_qmessagebox_seticonpixmap, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, pixmap, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qmessagebox_qmessagebox_textformat, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qmessagebox_qmessagebox_settextformat, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, format, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qmessagebox_qmessagebox_settextinteractionflags, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, flags, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qmessagebox_qmessagebox_textinteractionflags, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qmessagebox_qmessagebox_setcheckbox, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, cb, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qmessagebox_qmessagebox_checkbox, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qmessagebox_qmessagebox_setoption, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, option, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, on, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qmessagebox_qmessagebox_testoption, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, option, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qmessagebox_qmessagebox_setoptions, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, options, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qmessagebox_qmessagebox_options, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qmessagebox_qmessagebox_information, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, title, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, text, IS_STRING, 0)
	ZEND_ARG_INFO(0, buttons)
	ZEND_ARG_INFO(0, defaultButton)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qmessagebox_qmessagebox_informationqwidgetqstringqstringqmessageboxstandardbuttonqmessageboxstandardbutton, 0, 4, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, title, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, text, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, button0, IS_LONG, 0)
	ZEND_ARG_INFO(0, button1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qmessagebox_qmessagebox_question, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, title, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, text, IS_STRING, 0)
	ZEND_ARG_INFO(0, buttons)
	ZEND_ARG_INFO(0, defaultButton)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qmessagebox_qmessagebox_questionqwidgetqstringqstringqmessageboxstandardbuttonqmessageboxstandardbutton, 0, 5, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, title, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, text, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, button0, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, button1, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qmessagebox_qmessagebox_warning, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, title, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, text, IS_STRING, 0)
	ZEND_ARG_INFO(0, buttons)
	ZEND_ARG_INFO(0, defaultButton)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qmessagebox_qmessagebox_warningqwidgetqstringqstringqmessageboxstandardbuttonqmessageboxstandardbutton, 0, 5, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, title, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, text, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, button0, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, button1, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qmessagebox_qmessagebox_critical, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, title, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, text, IS_STRING, 0)
	ZEND_ARG_INFO(0, buttons)
	ZEND_ARG_INFO(0, defaultButton)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qmessagebox_qmessagebox_criticalqwidgetqstringqstringqmessageboxstandardbuttonqmessageboxstandardbutton, 0, 5, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, title, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, text, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, button0, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, button1, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qmessagebox_qmessagebox_about, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, title, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, text, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qmessagebox_qmessagebox_aboutqt, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, title, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qmessagebox_qmessagebox_newqstringqstringqmessageboxiconintintintqwidgetqtwindowflags, 0, 6, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, title, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, text, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, icon, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, button0, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, button1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, button2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
	ZEND_ARG_INFO(0, f)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qmessagebox_qmessagebox_informativetext, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qmessagebox_qmessagebox_setinformativetext, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, text, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qmessagebox_qmessagebox_detailedtext, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qmessagebox_qmessagebox_setdetailedtext, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, text, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qmessagebox_qmessagebox_setwindowtitle, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, title, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qmessagebox_qmessagebox_setwindowmodality, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, windowModality, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qmessagebox_qmessagebox_buttonclicked, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, button, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qmessagebox_qmessagebox_event, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, e, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qmessagebox_qmessagebox_resizeevent, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, event, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qmessagebox_qmessagebox_showevent, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, event, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qmessagebox_qmessagebox_closeevent, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, event, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qmessagebox_qmessagebox_keypressevent, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, event, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qmessagebox_qmessagebox_changeevent, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, event, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_widgets_qmessagebox_qmessagebox_method_entry) {
	PHP_ME(Qt_Widgets_QMessageBox_QMessageBox, open, arginfo_qt_widgets_qmessagebox_qmessagebox_open, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QMessageBox_QMessageBox, staticMetaObject, arginfo_qt_widgets_qmessagebox_qmessagebox_staticmetaobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QMessageBox_QMessageBox, tr, arginfo_qt_widgets_qmessagebox_qmessagebox_tr, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QMessageBox_QMessageBox, new_, arginfo_qt_widgets_qmessagebox_qmessagebox_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QMessageBox_QMessageBox, newQMessageBoxIconQStringQStringQMessageBoxStandardButtonsQWidgetQtWindowFlags, arginfo_qt_widgets_qmessagebox_qmessagebox_newqmessageboxiconqstringqstringqmessageboxstandardbuttonsqwidgetqtwindowflags, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QMessageBox_QMessageBox, addButton, arginfo_qt_widgets_qmessagebox_qmessagebox_addbutton, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QMessageBox_QMessageBox, addButtonQStringQMessageBoxButtonRole, arginfo_qt_widgets_qmessagebox_qmessagebox_addbuttonqstringqmessageboxbuttonrole, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QMessageBox_QMessageBox, addButtonQMessageBoxStandardButton, arginfo_qt_widgets_qmessagebox_qmessagebox_addbuttonqmessageboxstandardbutton, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QMessageBox_QMessageBox, removeButton, arginfo_qt_widgets_qmessagebox_qmessagebox_removebutton, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QMessageBox_QMessageBox, openQObjectChar, arginfo_qt_widgets_qmessagebox_qmessagebox_openqobjectchar, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QMessageBox_QMessageBox, buttons, arginfo_qt_widgets_qmessagebox_qmessagebox_buttons, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QMessageBox_QMessageBox, buttonRole, arginfo_qt_widgets_qmessagebox_qmessagebox_buttonrole, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QMessageBox_QMessageBox, setStandardButtons, arginfo_qt_widgets_qmessagebox_qmessagebox_setstandardbuttons, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QMessageBox_QMessageBox, standardButtons, arginfo_qt_widgets_qmessagebox_qmessagebox_standardbuttons, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QMessageBox_QMessageBox, standardButton, arginfo_qt_widgets_qmessagebox_qmessagebox_standardbutton, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QMessageBox_QMessageBox, button, arginfo_qt_widgets_qmessagebox_qmessagebox_button, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QMessageBox_QMessageBox, defaultButton, arginfo_qt_widgets_qmessagebox_qmessagebox_defaultbutton, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QMessageBox_QMessageBox, setDefaultButton, arginfo_qt_widgets_qmessagebox_qmessagebox_setdefaultbutton, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QMessageBox_QMessageBox, setDefaultButtonQMessageBoxStandardButton, arginfo_qt_widgets_qmessagebox_qmessagebox_setdefaultbuttonqmessageboxstandardbutton, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QMessageBox_QMessageBox, escapeButton, arginfo_qt_widgets_qmessagebox_qmessagebox_escapebutton, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QMessageBox_QMessageBox, setEscapeButton, arginfo_qt_widgets_qmessagebox_qmessagebox_setescapebutton, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QMessageBox_QMessageBox, setEscapeButtonQMessageBoxStandardButton, arginfo_qt_widgets_qmessagebox_qmessagebox_setescapebuttonqmessageboxstandardbutton, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QMessageBox_QMessageBox, clickedButton, arginfo_qt_widgets_qmessagebox_qmessagebox_clickedbutton, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QMessageBox_QMessageBox, text, arginfo_qt_widgets_qmessagebox_qmessagebox_text, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QMessageBox_QMessageBox, setText, arginfo_qt_widgets_qmessagebox_qmessagebox_settext, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QMessageBox_QMessageBox, icon, arginfo_qt_widgets_qmessagebox_qmessagebox_icon, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QMessageBox_QMessageBox, setIcon, arginfo_qt_widgets_qmessagebox_qmessagebox_seticon, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QMessageBox_QMessageBox, iconPixmap, arginfo_qt_widgets_qmessagebox_qmessagebox_iconpixmap, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QMessageBox_QMessageBox, setIconPixmap, arginfo_qt_widgets_qmessagebox_qmessagebox_seticonpixmap, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QMessageBox_QMessageBox, textFormat, arginfo_qt_widgets_qmessagebox_qmessagebox_textformat, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QMessageBox_QMessageBox, setTextFormat, arginfo_qt_widgets_qmessagebox_qmessagebox_settextformat, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QMessageBox_QMessageBox, setTextInteractionFlags, arginfo_qt_widgets_qmessagebox_qmessagebox_settextinteractionflags, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QMessageBox_QMessageBox, textInteractionFlags, arginfo_qt_widgets_qmessagebox_qmessagebox_textinteractionflags, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QMessageBox_QMessageBox, setCheckBox, arginfo_qt_widgets_qmessagebox_qmessagebox_setcheckbox, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QMessageBox_QMessageBox, checkBox, arginfo_qt_widgets_qmessagebox_qmessagebox_checkbox, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QMessageBox_QMessageBox, setOption, arginfo_qt_widgets_qmessagebox_qmessagebox_setoption, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QMessageBox_QMessageBox, testOption, arginfo_qt_widgets_qmessagebox_qmessagebox_testoption, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QMessageBox_QMessageBox, setOptions, arginfo_qt_widgets_qmessagebox_qmessagebox_setoptions, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QMessageBox_QMessageBox, options, arginfo_qt_widgets_qmessagebox_qmessagebox_options, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QMessageBox_QMessageBox, information, arginfo_qt_widgets_qmessagebox_qmessagebox_information, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QMessageBox_QMessageBox, informationQWidgetQStringQStringQMessageBoxStandardButtonQMessageBoxStandardButton, arginfo_qt_widgets_qmessagebox_qmessagebox_informationqwidgetqstringqstringqmessageboxstandardbuttonqmessageboxstandardbutton, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QMessageBox_QMessageBox, question, arginfo_qt_widgets_qmessagebox_qmessagebox_question, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QMessageBox_QMessageBox, questionQWidgetQStringQStringQMessageBoxStandardButtonQMessageBoxStandardButton, arginfo_qt_widgets_qmessagebox_qmessagebox_questionqwidgetqstringqstringqmessageboxstandardbuttonqmessageboxstandardbutton, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QMessageBox_QMessageBox, warning, arginfo_qt_widgets_qmessagebox_qmessagebox_warning, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QMessageBox_QMessageBox, warningQWidgetQStringQStringQMessageBoxStandardButtonQMessageBoxStandardButton, arginfo_qt_widgets_qmessagebox_qmessagebox_warningqwidgetqstringqstringqmessageboxstandardbuttonqmessageboxstandardbutton, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QMessageBox_QMessageBox, critical, arginfo_qt_widgets_qmessagebox_qmessagebox_critical, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QMessageBox_QMessageBox, criticalQWidgetQStringQStringQMessageBoxStandardButtonQMessageBoxStandardButton, arginfo_qt_widgets_qmessagebox_qmessagebox_criticalqwidgetqstringqstringqmessageboxstandardbuttonqmessageboxstandardbutton, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QMessageBox_QMessageBox, about, arginfo_qt_widgets_qmessagebox_qmessagebox_about, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QMessageBox_QMessageBox, aboutQt, arginfo_qt_widgets_qmessagebox_qmessagebox_aboutqt, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QMessageBox_QMessageBox, newQStringQStringQMessageBoxIconIntIntIntQWidgetQtWindowFlags, arginfo_qt_widgets_qmessagebox_qmessagebox_newqstringqstringqmessageboxiconintintintqwidgetqtwindowflags, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QMessageBox_QMessageBox, informativeText, arginfo_qt_widgets_qmessagebox_qmessagebox_informativetext, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QMessageBox_QMessageBox, setInformativeText, arginfo_qt_widgets_qmessagebox_qmessagebox_setinformativetext, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QMessageBox_QMessageBox, detailedText, arginfo_qt_widgets_qmessagebox_qmessagebox_detailedtext, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QMessageBox_QMessageBox, setDetailedText, arginfo_qt_widgets_qmessagebox_qmessagebox_setdetailedtext, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QMessageBox_QMessageBox, setWindowTitle, arginfo_qt_widgets_qmessagebox_qmessagebox_setwindowtitle, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QMessageBox_QMessageBox, setWindowModality, arginfo_qt_widgets_qmessagebox_qmessagebox_setwindowmodality, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QMessageBox_QMessageBox, buttonClicked, arginfo_qt_widgets_qmessagebox_qmessagebox_buttonclicked, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QMessageBox_QMessageBox, event, arginfo_qt_widgets_qmessagebox_qmessagebox_event, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QMessageBox_QMessageBox, resizeEvent, arginfo_qt_widgets_qmessagebox_qmessagebox_resizeevent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QMessageBox_QMessageBox, showEvent, arginfo_qt_widgets_qmessagebox_qmessagebox_showevent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QMessageBox_QMessageBox, closeEvent, arginfo_qt_widgets_qmessagebox_qmessagebox_closeevent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QMessageBox_QMessageBox, keyPressEvent, arginfo_qt_widgets_qmessagebox_qmessagebox_keypressevent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QMessageBox_QMessageBox, changeEvent, arginfo_qt_widgets_qmessagebox_qmessagebox_changeevent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
