
extern zend_class_entry *qt_widgets_qprogressdialog_qprogressdialog_ce;

ZEPHIR_INIT_CLASS(Qt_Widgets_QProgressDialog_QProgressDialog);

PHP_METHOD(Qt_Widgets_QProgressDialog_QProgressDialog, open);
PHP_METHOD(Qt_Widgets_QProgressDialog_QProgressDialog, staticMetaObject);
PHP_METHOD(Qt_Widgets_QProgressDialog_QProgressDialog, tr);
PHP_METHOD(Qt_Widgets_QProgressDialog_QProgressDialog, new_);
PHP_METHOD(Qt_Widgets_QProgressDialog_QProgressDialog, newQStringQStringIntIntQWidgetQtWindowFlags);
PHP_METHOD(Qt_Widgets_QProgressDialog_QProgressDialog, setLabel);
PHP_METHOD(Qt_Widgets_QProgressDialog_QProgressDialog, setCancelButton);
PHP_METHOD(Qt_Widgets_QProgressDialog_QProgressDialog, setBar);
PHP_METHOD(Qt_Widgets_QProgressDialog_QProgressDialog, wasCanceled);
PHP_METHOD(Qt_Widgets_QProgressDialog_QProgressDialog, minimum);
PHP_METHOD(Qt_Widgets_QProgressDialog_QProgressDialog, maximum);
PHP_METHOD(Qt_Widgets_QProgressDialog_QProgressDialog, value);
PHP_METHOD(Qt_Widgets_QProgressDialog_QProgressDialog, sizeHint);
PHP_METHOD(Qt_Widgets_QProgressDialog_QProgressDialog, labelText);
PHP_METHOD(Qt_Widgets_QProgressDialog_QProgressDialog, minimumDuration);
PHP_METHOD(Qt_Widgets_QProgressDialog_QProgressDialog, setAutoReset);
PHP_METHOD(Qt_Widgets_QProgressDialog_QProgressDialog, autoReset);
PHP_METHOD(Qt_Widgets_QProgressDialog_QProgressDialog, setAutoClose);
PHP_METHOD(Qt_Widgets_QProgressDialog_QProgressDialog, autoClose);
PHP_METHOD(Qt_Widgets_QProgressDialog_QProgressDialog, openQObjectChar);
PHP_METHOD(Qt_Widgets_QProgressDialog_QProgressDialog, cancel);
PHP_METHOD(Qt_Widgets_QProgressDialog_QProgressDialog, reset);
PHP_METHOD(Qt_Widgets_QProgressDialog_QProgressDialog, setMaximum);
PHP_METHOD(Qt_Widgets_QProgressDialog_QProgressDialog, setMinimum);
PHP_METHOD(Qt_Widgets_QProgressDialog_QProgressDialog, setRange);
PHP_METHOD(Qt_Widgets_QProgressDialog_QProgressDialog, setValue);
PHP_METHOD(Qt_Widgets_QProgressDialog_QProgressDialog, setLabelText);
PHP_METHOD(Qt_Widgets_QProgressDialog_QProgressDialog, setCancelButtonText);
PHP_METHOD(Qt_Widgets_QProgressDialog_QProgressDialog, setMinimumDuration);
PHP_METHOD(Qt_Widgets_QProgressDialog_QProgressDialog, canceled);
PHP_METHOD(Qt_Widgets_QProgressDialog_QProgressDialog, resizeEvent);
PHP_METHOD(Qt_Widgets_QProgressDialog_QProgressDialog, closeEvent);
PHP_METHOD(Qt_Widgets_QProgressDialog_QProgressDialog, changeEvent);
PHP_METHOD(Qt_Widgets_QProgressDialog_QProgressDialog, showEvent);
PHP_METHOD(Qt_Widgets_QProgressDialog_QProgressDialog, forceShow);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qprogressdialog_qprogressdialog_open, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qprogressdialog_qprogressdialog_staticmetaobject, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qprogressdialog_qprogressdialog_tr, 0, 1, IS_STRING, 0)
	ZEND_ARG_INFO(0, s)
	ZEND_ARG_INFO(0, c)
	ZEND_ARG_TYPE_INFO(0, n, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qprogressdialog_qprogressdialog_new_, 0, 0, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
	ZEND_ARG_INFO(0, flags)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qprogressdialog_qprogressdialog_newqstringqstringintintqwidgetqtwindowflags, 0, 4, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, labelText, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, cancelButtonText, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, minimum, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, maximum, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
	ZEND_ARG_INFO(0, flags)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qprogressdialog_qprogressdialog_setlabel, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, label, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qprogressdialog_qprogressdialog_setcancelbutton, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, button, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qprogressdialog_qprogressdialog_setbar, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, bar, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qprogressdialog_qprogressdialog_wascanceled, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qprogressdialog_qprogressdialog_minimum, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qprogressdialog_qprogressdialog_maximum, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qprogressdialog_qprogressdialog_value, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qprogressdialog_qprogressdialog_sizehint, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qprogressdialog_qprogressdialog_labeltext, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qprogressdialog_qprogressdialog_minimumduration, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qprogressdialog_qprogressdialog_setautoreset, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, reset, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qprogressdialog_qprogressdialog_autoreset, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qprogressdialog_qprogressdialog_setautoclose, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, close, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qprogressdialog_qprogressdialog_autoclose, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qprogressdialog_qprogressdialog_openqobjectchar, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, receiver, IS_LONG, 0)
	ZEND_ARG_INFO(0, member)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qprogressdialog_qprogressdialog_cancel, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qprogressdialog_qprogressdialog_reset, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qprogressdialog_qprogressdialog_setmaximum, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, maximum, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qprogressdialog_qprogressdialog_setminimum, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, minimum, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qprogressdialog_qprogressdialog_setrange, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, minimum, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, maximum, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qprogressdialog_qprogressdialog_setvalue, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, progress, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qprogressdialog_qprogressdialog_setlabeltext, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, text, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qprogressdialog_qprogressdialog_setcancelbuttontext, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, text, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qprogressdialog_qprogressdialog_setminimumduration, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, ms, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qprogressdialog_qprogressdialog_canceled, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qprogressdialog_qprogressdialog_resizeevent, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, event, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qprogressdialog_qprogressdialog_closeevent, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, event, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qprogressdialog_qprogressdialog_changeevent, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, event, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qprogressdialog_qprogressdialog_showevent, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, event, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qprogressdialog_qprogressdialog_forceshow, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_widgets_qprogressdialog_qprogressdialog_method_entry) {
	PHP_ME(Qt_Widgets_QProgressDialog_QProgressDialog, open, arginfo_qt_widgets_qprogressdialog_qprogressdialog_open, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QProgressDialog_QProgressDialog, staticMetaObject, arginfo_qt_widgets_qprogressdialog_qprogressdialog_staticmetaobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QProgressDialog_QProgressDialog, tr, arginfo_qt_widgets_qprogressdialog_qprogressdialog_tr, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QProgressDialog_QProgressDialog, new_, arginfo_qt_widgets_qprogressdialog_qprogressdialog_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QProgressDialog_QProgressDialog, newQStringQStringIntIntQWidgetQtWindowFlags, arginfo_qt_widgets_qprogressdialog_qprogressdialog_newqstringqstringintintqwidgetqtwindowflags, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QProgressDialog_QProgressDialog, setLabel, arginfo_qt_widgets_qprogressdialog_qprogressdialog_setlabel, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QProgressDialog_QProgressDialog, setCancelButton, arginfo_qt_widgets_qprogressdialog_qprogressdialog_setcancelbutton, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QProgressDialog_QProgressDialog, setBar, arginfo_qt_widgets_qprogressdialog_qprogressdialog_setbar, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QProgressDialog_QProgressDialog, wasCanceled, arginfo_qt_widgets_qprogressdialog_qprogressdialog_wascanceled, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QProgressDialog_QProgressDialog, minimum, arginfo_qt_widgets_qprogressdialog_qprogressdialog_minimum, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QProgressDialog_QProgressDialog, maximum, arginfo_qt_widgets_qprogressdialog_qprogressdialog_maximum, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QProgressDialog_QProgressDialog, value, arginfo_qt_widgets_qprogressdialog_qprogressdialog_value, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QProgressDialog_QProgressDialog, sizeHint, arginfo_qt_widgets_qprogressdialog_qprogressdialog_sizehint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QProgressDialog_QProgressDialog, labelText, arginfo_qt_widgets_qprogressdialog_qprogressdialog_labeltext, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QProgressDialog_QProgressDialog, minimumDuration, arginfo_qt_widgets_qprogressdialog_qprogressdialog_minimumduration, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QProgressDialog_QProgressDialog, setAutoReset, arginfo_qt_widgets_qprogressdialog_qprogressdialog_setautoreset, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QProgressDialog_QProgressDialog, autoReset, arginfo_qt_widgets_qprogressdialog_qprogressdialog_autoreset, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QProgressDialog_QProgressDialog, setAutoClose, arginfo_qt_widgets_qprogressdialog_qprogressdialog_setautoclose, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QProgressDialog_QProgressDialog, autoClose, arginfo_qt_widgets_qprogressdialog_qprogressdialog_autoclose, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QProgressDialog_QProgressDialog, openQObjectChar, arginfo_qt_widgets_qprogressdialog_qprogressdialog_openqobjectchar, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QProgressDialog_QProgressDialog, cancel, arginfo_qt_widgets_qprogressdialog_qprogressdialog_cancel, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QProgressDialog_QProgressDialog, reset, arginfo_qt_widgets_qprogressdialog_qprogressdialog_reset, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QProgressDialog_QProgressDialog, setMaximum, arginfo_qt_widgets_qprogressdialog_qprogressdialog_setmaximum, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QProgressDialog_QProgressDialog, setMinimum, arginfo_qt_widgets_qprogressdialog_qprogressdialog_setminimum, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QProgressDialog_QProgressDialog, setRange, arginfo_qt_widgets_qprogressdialog_qprogressdialog_setrange, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QProgressDialog_QProgressDialog, setValue, arginfo_qt_widgets_qprogressdialog_qprogressdialog_setvalue, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QProgressDialog_QProgressDialog, setLabelText, arginfo_qt_widgets_qprogressdialog_qprogressdialog_setlabeltext, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QProgressDialog_QProgressDialog, setCancelButtonText, arginfo_qt_widgets_qprogressdialog_qprogressdialog_setcancelbuttontext, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QProgressDialog_QProgressDialog, setMinimumDuration, arginfo_qt_widgets_qprogressdialog_qprogressdialog_setminimumduration, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QProgressDialog_QProgressDialog, canceled, arginfo_qt_widgets_qprogressdialog_qprogressdialog_canceled, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QProgressDialog_QProgressDialog, resizeEvent, arginfo_qt_widgets_qprogressdialog_qprogressdialog_resizeevent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QProgressDialog_QProgressDialog, closeEvent, arginfo_qt_widgets_qprogressdialog_qprogressdialog_closeevent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QProgressDialog_QProgressDialog, changeEvent, arginfo_qt_widgets_qprogressdialog_qprogressdialog_changeevent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QProgressDialog_QProgressDialog, showEvent, arginfo_qt_widgets_qprogressdialog_qprogressdialog_showevent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QProgressDialog_QProgressDialog, forceShow, arginfo_qt_widgets_qprogressdialog_qprogressdialog_forceshow, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
