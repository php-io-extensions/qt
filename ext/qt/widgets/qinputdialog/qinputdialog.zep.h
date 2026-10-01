
extern zend_class_entry *qt_widgets_qinputdialog_qinputdialog_ce;

ZEPHIR_INIT_CLASS(Qt_Widgets_QInputDialog_QInputDialog);

PHP_METHOD(Qt_Widgets_QInputDialog_QInputDialog, open);
PHP_METHOD(Qt_Widgets_QInputDialog_QInputDialog, staticMetaObject);
PHP_METHOD(Qt_Widgets_QInputDialog_QInputDialog, tr);
PHP_METHOD(Qt_Widgets_QInputDialog_QInputDialog, new_);
PHP_METHOD(Qt_Widgets_QInputDialog_QInputDialog, setInputMode);
PHP_METHOD(Qt_Widgets_QInputDialog_QInputDialog, inputMode);
PHP_METHOD(Qt_Widgets_QInputDialog_QInputDialog, setLabelText);
PHP_METHOD(Qt_Widgets_QInputDialog_QInputDialog, labelText);
PHP_METHOD(Qt_Widgets_QInputDialog_QInputDialog, setOption);
PHP_METHOD(Qt_Widgets_QInputDialog_QInputDialog, testOption);
PHP_METHOD(Qt_Widgets_QInputDialog_QInputDialog, setOptions);
PHP_METHOD(Qt_Widgets_QInputDialog_QInputDialog, options);
PHP_METHOD(Qt_Widgets_QInputDialog_QInputDialog, setTextValue);
PHP_METHOD(Qt_Widgets_QInputDialog_QInputDialog, textValue);
PHP_METHOD(Qt_Widgets_QInputDialog_QInputDialog, setTextEchoMode);
PHP_METHOD(Qt_Widgets_QInputDialog_QInputDialog, textEchoMode);
PHP_METHOD(Qt_Widgets_QInputDialog_QInputDialog, setComboBoxEditable);
PHP_METHOD(Qt_Widgets_QInputDialog_QInputDialog, isComboBoxEditable);
PHP_METHOD(Qt_Widgets_QInputDialog_QInputDialog, setComboBoxItems);
PHP_METHOD(Qt_Widgets_QInputDialog_QInputDialog, comboBoxItems);
PHP_METHOD(Qt_Widgets_QInputDialog_QInputDialog, setIntValue);
PHP_METHOD(Qt_Widgets_QInputDialog_QInputDialog, intValue);
PHP_METHOD(Qt_Widgets_QInputDialog_QInputDialog, setIntMinimum);
PHP_METHOD(Qt_Widgets_QInputDialog_QInputDialog, intMinimum);
PHP_METHOD(Qt_Widgets_QInputDialog_QInputDialog, setIntMaximum);
PHP_METHOD(Qt_Widgets_QInputDialog_QInputDialog, intMaximum);
PHP_METHOD(Qt_Widgets_QInputDialog_QInputDialog, setIntRange);
PHP_METHOD(Qt_Widgets_QInputDialog_QInputDialog, setIntStep);
PHP_METHOD(Qt_Widgets_QInputDialog_QInputDialog, intStep);
PHP_METHOD(Qt_Widgets_QInputDialog_QInputDialog, setDoubleValue);
PHP_METHOD(Qt_Widgets_QInputDialog_QInputDialog, doubleValue);
PHP_METHOD(Qt_Widgets_QInputDialog_QInputDialog, setDoubleMinimum);
PHP_METHOD(Qt_Widgets_QInputDialog_QInputDialog, doubleMinimum);
PHP_METHOD(Qt_Widgets_QInputDialog_QInputDialog, setDoubleMaximum);
PHP_METHOD(Qt_Widgets_QInputDialog_QInputDialog, doubleMaximum);
PHP_METHOD(Qt_Widgets_QInputDialog_QInputDialog, setDoubleRange);
PHP_METHOD(Qt_Widgets_QInputDialog_QInputDialog, setDoubleDecimals);
PHP_METHOD(Qt_Widgets_QInputDialog_QInputDialog, doubleDecimals);
PHP_METHOD(Qt_Widgets_QInputDialog_QInputDialog, setOkButtonText);
PHP_METHOD(Qt_Widgets_QInputDialog_QInputDialog, okButtonText);
PHP_METHOD(Qt_Widgets_QInputDialog_QInputDialog, setCancelButtonText);
PHP_METHOD(Qt_Widgets_QInputDialog_QInputDialog, cancelButtonText);
PHP_METHOD(Qt_Widgets_QInputDialog_QInputDialog, openQObjectChar);
PHP_METHOD(Qt_Widgets_QInputDialog_QInputDialog, minimumSizeHint);
PHP_METHOD(Qt_Widgets_QInputDialog_QInputDialog, sizeHint);
PHP_METHOD(Qt_Widgets_QInputDialog_QInputDialog, setVisible);
PHP_METHOD(Qt_Widgets_QInputDialog_QInputDialog, getText);
PHP_METHOD(Qt_Widgets_QInputDialog_QInputDialog, getMultiLineText);
PHP_METHOD(Qt_Widgets_QInputDialog_QInputDialog, getItem);
PHP_METHOD(Qt_Widgets_QInputDialog_QInputDialog, getInt);
PHP_METHOD(Qt_Widgets_QInputDialog_QInputDialog, getDouble);
PHP_METHOD(Qt_Widgets_QInputDialog_QInputDialog, setDoubleStep);
PHP_METHOD(Qt_Widgets_QInputDialog_QInputDialog, doubleStep);
PHP_METHOD(Qt_Widgets_QInputDialog_QInputDialog, textValueChanged);
PHP_METHOD(Qt_Widgets_QInputDialog_QInputDialog, textValueSelected);
PHP_METHOD(Qt_Widgets_QInputDialog_QInputDialog, intValueChanged);
PHP_METHOD(Qt_Widgets_QInputDialog_QInputDialog, intValueSelected);
PHP_METHOD(Qt_Widgets_QInputDialog_QInputDialog, doubleValueChanged);
PHP_METHOD(Qt_Widgets_QInputDialog_QInputDialog, doubleValueSelected);
PHP_METHOD(Qt_Widgets_QInputDialog_QInputDialog, done);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qinputdialog_qinputdialog_open, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qinputdialog_qinputdialog_staticmetaobject, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qinputdialog_qinputdialog_tr, 0, 1, IS_STRING, 0)
	ZEND_ARG_INFO(0, s)
	ZEND_ARG_INFO(0, c)
	ZEND_ARG_TYPE_INFO(0, n, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qinputdialog_qinputdialog_new_, 0, 0, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
	ZEND_ARG_INFO(0, flags)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qinputdialog_qinputdialog_setinputmode, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, mode, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qinputdialog_qinputdialog_inputmode, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qinputdialog_qinputdialog_setlabeltext, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, text, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qinputdialog_qinputdialog_labeltext, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qinputdialog_qinputdialog_setoption, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, option, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, on, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qinputdialog_qinputdialog_testoption, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, option, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qinputdialog_qinputdialog_setoptions, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, options, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qinputdialog_qinputdialog_options, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qinputdialog_qinputdialog_settextvalue, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, text, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qinputdialog_qinputdialog_textvalue, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qinputdialog_qinputdialog_settextechomode, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, mode, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qinputdialog_qinputdialog_textechomode, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qinputdialog_qinputdialog_setcomboboxeditable, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, editable, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qinputdialog_qinputdialog_iscomboboxeditable, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qinputdialog_qinputdialog_setcomboboxitems, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_ARRAY_INFO(0, items, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qinputdialog_qinputdialog_comboboxitems, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qinputdialog_qinputdialog_setintvalue, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qinputdialog_qinputdialog_intvalue, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qinputdialog_qinputdialog_setintminimum, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, min, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qinputdialog_qinputdialog_intminimum, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qinputdialog_qinputdialog_setintmaximum, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, max, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qinputdialog_qinputdialog_intmaximum, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qinputdialog_qinputdialog_setintrange, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, min, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, max, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qinputdialog_qinputdialog_setintstep, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, step, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qinputdialog_qinputdialog_intstep, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qinputdialog_qinputdialog_setdoublevalue, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qinputdialog_qinputdialog_doublevalue, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qinputdialog_qinputdialog_setdoubleminimum, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, min, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qinputdialog_qinputdialog_doubleminimum, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qinputdialog_qinputdialog_setdoublemaximum, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, max, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qinputdialog_qinputdialog_doublemaximum, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qinputdialog_qinputdialog_setdoublerange, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, min, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, max, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qinputdialog_qinputdialog_setdoubledecimals, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, decimals, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qinputdialog_qinputdialog_doubledecimals, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qinputdialog_qinputdialog_setokbuttontext, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, text, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qinputdialog_qinputdialog_okbuttontext, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qinputdialog_qinputdialog_setcancelbuttontext, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, text, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qinputdialog_qinputdialog_cancelbuttontext, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qinputdialog_qinputdialog_openqobjectchar, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, receiver, IS_LONG, 0)
	ZEND_ARG_INFO(0, member)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qinputdialog_qinputdialog_minimumsizehint, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qinputdialog_qinputdialog_sizehint, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qinputdialog_qinputdialog_setvisible, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, visible, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qinputdialog_qinputdialog_gettext, 0, 3, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, title, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, label, IS_STRING, 0)
	ZEND_ARG_INFO(0, echo_)
	ZEND_ARG_TYPE_INFO(0, text, IS_STRING, 0)
	ZEND_ARG_INFO(0, ok)
	ZEND_ARG_INFO(0, flags)
	ZEND_ARG_INFO(0, inputMethodHints)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qinputdialog_qinputdialog_getmultilinetext, 0, 3, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, title, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, label, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, text, IS_STRING, 0)
	ZEND_ARG_INFO(0, ok)
	ZEND_ARG_INFO(0, flags)
	ZEND_ARG_INFO(0, inputMethodHints)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qinputdialog_qinputdialog_getitem, 0, 4, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, title, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, label, IS_STRING, 0)
	ZEND_ARG_ARRAY_INFO(0, items, 0)
	ZEND_ARG_TYPE_INFO(0, current, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, editable, _IS_BOOL, 0)
	ZEND_ARG_INFO(0, ok)
	ZEND_ARG_INFO(0, flags)
	ZEND_ARG_INFO(0, inputMethodHints)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qinputdialog_qinputdialog_getint, 0, 3, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, title, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, label, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, minValue, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, maxValue, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, step, IS_LONG, 0)
	ZEND_ARG_INFO(0, ok)
	ZEND_ARG_INFO(0, flags)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qinputdialog_qinputdialog_getdouble, 0, 3, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, title, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, label, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, minValue, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, maxValue, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, decimals, IS_LONG, 0)
	ZEND_ARG_INFO(0, ok)
	ZEND_ARG_INFO(0, flags)
	ZEND_ARG_TYPE_INFO(0, step, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qinputdialog_qinputdialog_setdoublestep, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, step, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qinputdialog_qinputdialog_doublestep, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qinputdialog_qinputdialog_textvaluechanged, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, text, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qinputdialog_qinputdialog_textvalueselected, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, text, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qinputdialog_qinputdialog_intvaluechanged, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qinputdialog_qinputdialog_intvalueselected, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qinputdialog_qinputdialog_doublevaluechanged, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qinputdialog_qinputdialog_doublevalueselected, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qinputdialog_qinputdialog_done, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, result, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_widgets_qinputdialog_qinputdialog_method_entry) {
	PHP_ME(Qt_Widgets_QInputDialog_QInputDialog, open, arginfo_qt_widgets_qinputdialog_qinputdialog_open, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QInputDialog_QInputDialog, staticMetaObject, arginfo_qt_widgets_qinputdialog_qinputdialog_staticmetaobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QInputDialog_QInputDialog, tr, arginfo_qt_widgets_qinputdialog_qinputdialog_tr, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QInputDialog_QInputDialog, new_, arginfo_qt_widgets_qinputdialog_qinputdialog_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QInputDialog_QInputDialog, setInputMode, arginfo_qt_widgets_qinputdialog_qinputdialog_setinputmode, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QInputDialog_QInputDialog, inputMode, arginfo_qt_widgets_qinputdialog_qinputdialog_inputmode, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QInputDialog_QInputDialog, setLabelText, arginfo_qt_widgets_qinputdialog_qinputdialog_setlabeltext, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QInputDialog_QInputDialog, labelText, arginfo_qt_widgets_qinputdialog_qinputdialog_labeltext, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QInputDialog_QInputDialog, setOption, arginfo_qt_widgets_qinputdialog_qinputdialog_setoption, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QInputDialog_QInputDialog, testOption, arginfo_qt_widgets_qinputdialog_qinputdialog_testoption, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QInputDialog_QInputDialog, setOptions, arginfo_qt_widgets_qinputdialog_qinputdialog_setoptions, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QInputDialog_QInputDialog, options, arginfo_qt_widgets_qinputdialog_qinputdialog_options, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QInputDialog_QInputDialog, setTextValue, arginfo_qt_widgets_qinputdialog_qinputdialog_settextvalue, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QInputDialog_QInputDialog, textValue, arginfo_qt_widgets_qinputdialog_qinputdialog_textvalue, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QInputDialog_QInputDialog, setTextEchoMode, arginfo_qt_widgets_qinputdialog_qinputdialog_settextechomode, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QInputDialog_QInputDialog, textEchoMode, arginfo_qt_widgets_qinputdialog_qinputdialog_textechomode, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QInputDialog_QInputDialog, setComboBoxEditable, arginfo_qt_widgets_qinputdialog_qinputdialog_setcomboboxeditable, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QInputDialog_QInputDialog, isComboBoxEditable, arginfo_qt_widgets_qinputdialog_qinputdialog_iscomboboxeditable, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QInputDialog_QInputDialog, setComboBoxItems, arginfo_qt_widgets_qinputdialog_qinputdialog_setcomboboxitems, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QInputDialog_QInputDialog, comboBoxItems, arginfo_qt_widgets_qinputdialog_qinputdialog_comboboxitems, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QInputDialog_QInputDialog, setIntValue, arginfo_qt_widgets_qinputdialog_qinputdialog_setintvalue, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QInputDialog_QInputDialog, intValue, arginfo_qt_widgets_qinputdialog_qinputdialog_intvalue, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QInputDialog_QInputDialog, setIntMinimum, arginfo_qt_widgets_qinputdialog_qinputdialog_setintminimum, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QInputDialog_QInputDialog, intMinimum, arginfo_qt_widgets_qinputdialog_qinputdialog_intminimum, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QInputDialog_QInputDialog, setIntMaximum, arginfo_qt_widgets_qinputdialog_qinputdialog_setintmaximum, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QInputDialog_QInputDialog, intMaximum, arginfo_qt_widgets_qinputdialog_qinputdialog_intmaximum, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QInputDialog_QInputDialog, setIntRange, arginfo_qt_widgets_qinputdialog_qinputdialog_setintrange, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QInputDialog_QInputDialog, setIntStep, arginfo_qt_widgets_qinputdialog_qinputdialog_setintstep, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QInputDialog_QInputDialog, intStep, arginfo_qt_widgets_qinputdialog_qinputdialog_intstep, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QInputDialog_QInputDialog, setDoubleValue, arginfo_qt_widgets_qinputdialog_qinputdialog_setdoublevalue, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QInputDialog_QInputDialog, doubleValue, arginfo_qt_widgets_qinputdialog_qinputdialog_doublevalue, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QInputDialog_QInputDialog, setDoubleMinimum, arginfo_qt_widgets_qinputdialog_qinputdialog_setdoubleminimum, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QInputDialog_QInputDialog, doubleMinimum, arginfo_qt_widgets_qinputdialog_qinputdialog_doubleminimum, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QInputDialog_QInputDialog, setDoubleMaximum, arginfo_qt_widgets_qinputdialog_qinputdialog_setdoublemaximum, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QInputDialog_QInputDialog, doubleMaximum, arginfo_qt_widgets_qinputdialog_qinputdialog_doublemaximum, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QInputDialog_QInputDialog, setDoubleRange, arginfo_qt_widgets_qinputdialog_qinputdialog_setdoublerange, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QInputDialog_QInputDialog, setDoubleDecimals, arginfo_qt_widgets_qinputdialog_qinputdialog_setdoubledecimals, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QInputDialog_QInputDialog, doubleDecimals, arginfo_qt_widgets_qinputdialog_qinputdialog_doubledecimals, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QInputDialog_QInputDialog, setOkButtonText, arginfo_qt_widgets_qinputdialog_qinputdialog_setokbuttontext, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QInputDialog_QInputDialog, okButtonText, arginfo_qt_widgets_qinputdialog_qinputdialog_okbuttontext, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QInputDialog_QInputDialog, setCancelButtonText, arginfo_qt_widgets_qinputdialog_qinputdialog_setcancelbuttontext, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QInputDialog_QInputDialog, cancelButtonText, arginfo_qt_widgets_qinputdialog_qinputdialog_cancelbuttontext, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QInputDialog_QInputDialog, openQObjectChar, arginfo_qt_widgets_qinputdialog_qinputdialog_openqobjectchar, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QInputDialog_QInputDialog, minimumSizeHint, arginfo_qt_widgets_qinputdialog_qinputdialog_minimumsizehint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QInputDialog_QInputDialog, sizeHint, arginfo_qt_widgets_qinputdialog_qinputdialog_sizehint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QInputDialog_QInputDialog, setVisible, arginfo_qt_widgets_qinputdialog_qinputdialog_setvisible, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QInputDialog_QInputDialog, getText, arginfo_qt_widgets_qinputdialog_qinputdialog_gettext, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QInputDialog_QInputDialog, getMultiLineText, arginfo_qt_widgets_qinputdialog_qinputdialog_getmultilinetext, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QInputDialog_QInputDialog, getItem, arginfo_qt_widgets_qinputdialog_qinputdialog_getitem, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QInputDialog_QInputDialog, getInt, arginfo_qt_widgets_qinputdialog_qinputdialog_getint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QInputDialog_QInputDialog, getDouble, arginfo_qt_widgets_qinputdialog_qinputdialog_getdouble, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QInputDialog_QInputDialog, setDoubleStep, arginfo_qt_widgets_qinputdialog_qinputdialog_setdoublestep, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QInputDialog_QInputDialog, doubleStep, arginfo_qt_widgets_qinputdialog_qinputdialog_doublestep, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QInputDialog_QInputDialog, textValueChanged, arginfo_qt_widgets_qinputdialog_qinputdialog_textvaluechanged, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QInputDialog_QInputDialog, textValueSelected, arginfo_qt_widgets_qinputdialog_qinputdialog_textvalueselected, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QInputDialog_QInputDialog, intValueChanged, arginfo_qt_widgets_qinputdialog_qinputdialog_intvaluechanged, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QInputDialog_QInputDialog, intValueSelected, arginfo_qt_widgets_qinputdialog_qinputdialog_intvalueselected, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QInputDialog_QInputDialog, doubleValueChanged, arginfo_qt_widgets_qinputdialog_qinputdialog_doublevaluechanged, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QInputDialog_QInputDialog, doubleValueSelected, arginfo_qt_widgets_qinputdialog_qinputdialog_doublevalueselected, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QInputDialog_QInputDialog, done, arginfo_qt_widgets_qinputdialog_qinputdialog_done, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
