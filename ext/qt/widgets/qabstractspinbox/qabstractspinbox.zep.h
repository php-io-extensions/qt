
extern zend_class_entry *qt_widgets_qabstractspinbox_qabstractspinbox_ce;

ZEPHIR_INIT_CLASS(Qt_Widgets_QAbstractSpinBox_QAbstractSpinBox);

PHP_METHOD(Qt_Widgets_QAbstractSpinBox_QAbstractSpinBox, staticMetaObject);
PHP_METHOD(Qt_Widgets_QAbstractSpinBox_QAbstractSpinBox, tr);
PHP_METHOD(Qt_Widgets_QAbstractSpinBox_QAbstractSpinBox, new_);
PHP_METHOD(Qt_Widgets_QAbstractSpinBox_QAbstractSpinBox, buttonSymbols);
PHP_METHOD(Qt_Widgets_QAbstractSpinBox_QAbstractSpinBox, setButtonSymbols);
PHP_METHOD(Qt_Widgets_QAbstractSpinBox_QAbstractSpinBox, setCorrectionMode);
PHP_METHOD(Qt_Widgets_QAbstractSpinBox_QAbstractSpinBox, correctionMode);
PHP_METHOD(Qt_Widgets_QAbstractSpinBox_QAbstractSpinBox, hasAcceptableInput);
PHP_METHOD(Qt_Widgets_QAbstractSpinBox_QAbstractSpinBox, text);
PHP_METHOD(Qt_Widgets_QAbstractSpinBox_QAbstractSpinBox, specialValueText);
PHP_METHOD(Qt_Widgets_QAbstractSpinBox_QAbstractSpinBox, setSpecialValueText);
PHP_METHOD(Qt_Widgets_QAbstractSpinBox_QAbstractSpinBox, wrapping);
PHP_METHOD(Qt_Widgets_QAbstractSpinBox_QAbstractSpinBox, setWrapping);
PHP_METHOD(Qt_Widgets_QAbstractSpinBox_QAbstractSpinBox, setReadOnly);
PHP_METHOD(Qt_Widgets_QAbstractSpinBox_QAbstractSpinBox, isReadOnly);
PHP_METHOD(Qt_Widgets_QAbstractSpinBox_QAbstractSpinBox, setKeyboardTracking);
PHP_METHOD(Qt_Widgets_QAbstractSpinBox_QAbstractSpinBox, keyboardTracking);
PHP_METHOD(Qt_Widgets_QAbstractSpinBox_QAbstractSpinBox, setAlignment);
PHP_METHOD(Qt_Widgets_QAbstractSpinBox_QAbstractSpinBox, alignment);
PHP_METHOD(Qt_Widgets_QAbstractSpinBox_QAbstractSpinBox, setFrame);
PHP_METHOD(Qt_Widgets_QAbstractSpinBox_QAbstractSpinBox, hasFrame);
PHP_METHOD(Qt_Widgets_QAbstractSpinBox_QAbstractSpinBox, setAccelerated);
PHP_METHOD(Qt_Widgets_QAbstractSpinBox_QAbstractSpinBox, isAccelerated);
PHP_METHOD(Qt_Widgets_QAbstractSpinBox_QAbstractSpinBox, setGroupSeparatorShown);
PHP_METHOD(Qt_Widgets_QAbstractSpinBox_QAbstractSpinBox, isGroupSeparatorShown);
PHP_METHOD(Qt_Widgets_QAbstractSpinBox_QAbstractSpinBox, sizeHint);
PHP_METHOD(Qt_Widgets_QAbstractSpinBox_QAbstractSpinBox, minimumSizeHint);
PHP_METHOD(Qt_Widgets_QAbstractSpinBox_QAbstractSpinBox, interpretText);
PHP_METHOD(Qt_Widgets_QAbstractSpinBox_QAbstractSpinBox, event);
PHP_METHOD(Qt_Widgets_QAbstractSpinBox_QAbstractSpinBox, inputMethodQuery);
PHP_METHOD(Qt_Widgets_QAbstractSpinBox_QAbstractSpinBox, validate);
PHP_METHOD(Qt_Widgets_QAbstractSpinBox_QAbstractSpinBox, fixup);
PHP_METHOD(Qt_Widgets_QAbstractSpinBox_QAbstractSpinBox, stepBy);
PHP_METHOD(Qt_Widgets_QAbstractSpinBox_QAbstractSpinBox, stepUp);
PHP_METHOD(Qt_Widgets_QAbstractSpinBox_QAbstractSpinBox, stepDown);
PHP_METHOD(Qt_Widgets_QAbstractSpinBox_QAbstractSpinBox, selectAll);
PHP_METHOD(Qt_Widgets_QAbstractSpinBox_QAbstractSpinBox, clear);
PHP_METHOD(Qt_Widgets_QAbstractSpinBox_QAbstractSpinBox, resizeEvent);
PHP_METHOD(Qt_Widgets_QAbstractSpinBox_QAbstractSpinBox, keyPressEvent);
PHP_METHOD(Qt_Widgets_QAbstractSpinBox_QAbstractSpinBox, keyReleaseEvent);
PHP_METHOD(Qt_Widgets_QAbstractSpinBox_QAbstractSpinBox, wheelEvent);
PHP_METHOD(Qt_Widgets_QAbstractSpinBox_QAbstractSpinBox, focusInEvent);
PHP_METHOD(Qt_Widgets_QAbstractSpinBox_QAbstractSpinBox, focusOutEvent);
PHP_METHOD(Qt_Widgets_QAbstractSpinBox_QAbstractSpinBox, contextMenuEvent);
PHP_METHOD(Qt_Widgets_QAbstractSpinBox_QAbstractSpinBox, changeEvent);
PHP_METHOD(Qt_Widgets_QAbstractSpinBox_QAbstractSpinBox, closeEvent);
PHP_METHOD(Qt_Widgets_QAbstractSpinBox_QAbstractSpinBox, hideEvent);
PHP_METHOD(Qt_Widgets_QAbstractSpinBox_QAbstractSpinBox, mousePressEvent);
PHP_METHOD(Qt_Widgets_QAbstractSpinBox_QAbstractSpinBox, mouseReleaseEvent);
PHP_METHOD(Qt_Widgets_QAbstractSpinBox_QAbstractSpinBox, mouseMoveEvent);
PHP_METHOD(Qt_Widgets_QAbstractSpinBox_QAbstractSpinBox, timerEvent);
PHP_METHOD(Qt_Widgets_QAbstractSpinBox_QAbstractSpinBox, paintEvent);
PHP_METHOD(Qt_Widgets_QAbstractSpinBox_QAbstractSpinBox, showEvent);
PHP_METHOD(Qt_Widgets_QAbstractSpinBox_QAbstractSpinBox, initStyleOption);
PHP_METHOD(Qt_Widgets_QAbstractSpinBox_QAbstractSpinBox, lineEdit);
PHP_METHOD(Qt_Widgets_QAbstractSpinBox_QAbstractSpinBox, setLineEdit);
PHP_METHOD(Qt_Widgets_QAbstractSpinBox_QAbstractSpinBox, stepEnabled);
PHP_METHOD(Qt_Widgets_QAbstractSpinBox_QAbstractSpinBox, editingFinished);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qabstractspinbox_qabstractspinbox_staticmetaobject, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qabstractspinbox_qabstractspinbox_tr, 0, 1, IS_STRING, 0)
	ZEND_ARG_INFO(0, s)
	ZEND_ARG_INFO(0, c)
	ZEND_ARG_TYPE_INFO(0, n, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qabstractspinbox_qabstractspinbox_new_, 0, 0, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qabstractspinbox_qabstractspinbox_buttonsymbols, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qabstractspinbox_qabstractspinbox_setbuttonsymbols, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, bs, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qabstractspinbox_qabstractspinbox_setcorrectionmode, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, cm, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qabstractspinbox_qabstractspinbox_correctionmode, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qabstractspinbox_qabstractspinbox_hasacceptableinput, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qabstractspinbox_qabstractspinbox_text, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qabstractspinbox_qabstractspinbox_specialvaluetext, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qabstractspinbox_qabstractspinbox_setspecialvaluetext, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, txt, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qabstractspinbox_qabstractspinbox_wrapping, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qabstractspinbox_qabstractspinbox_setwrapping, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, w, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qabstractspinbox_qabstractspinbox_setreadonly, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, r, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qabstractspinbox_qabstractspinbox_isreadonly, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qabstractspinbox_qabstractspinbox_setkeyboardtracking, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, kt, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qabstractspinbox_qabstractspinbox_keyboardtracking, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qabstractspinbox_qabstractspinbox_setalignment, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, flag, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qabstractspinbox_qabstractspinbox_alignment, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qabstractspinbox_qabstractspinbox_setframe, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qabstractspinbox_qabstractspinbox_hasframe, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qabstractspinbox_qabstractspinbox_setaccelerated, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, on, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qabstractspinbox_qabstractspinbox_isaccelerated, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qabstractspinbox_qabstractspinbox_setgroupseparatorshown, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, shown, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qabstractspinbox_qabstractspinbox_isgroupseparatorshown, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qabstractspinbox_qabstractspinbox_sizehint, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qabstractspinbox_qabstractspinbox_minimumsizehint, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qabstractspinbox_qabstractspinbox_interprettext, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qabstractspinbox_qabstractspinbox_event, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, event, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_qt_widgets_qabstractspinbox_qabstractspinbox_inputmethodquery, 0, 0, 2)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qabstractspinbox_qabstractspinbox_validate, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qabstractspinbox_qabstractspinbox_fixup, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qabstractspinbox_qabstractspinbox_stepby, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, steps, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qabstractspinbox_qabstractspinbox_stepup, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qabstractspinbox_qabstractspinbox_stepdown, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qabstractspinbox_qabstractspinbox_selectall, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qabstractspinbox_qabstractspinbox_clear, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qabstractspinbox_qabstractspinbox_resizeevent, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, event, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qabstractspinbox_qabstractspinbox_keypressevent, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, event, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qabstractspinbox_qabstractspinbox_keyreleaseevent, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, event, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qabstractspinbox_qabstractspinbox_wheelevent, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, event, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qabstractspinbox_qabstractspinbox_focusinevent, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, event, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qabstractspinbox_qabstractspinbox_focusoutevent, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, event, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qabstractspinbox_qabstractspinbox_contextmenuevent, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, event, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qabstractspinbox_qabstractspinbox_changeevent, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, event, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qabstractspinbox_qabstractspinbox_closeevent, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, event, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qabstractspinbox_qabstractspinbox_hideevent, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, event, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qabstractspinbox_qabstractspinbox_mousepressevent, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, event, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qabstractspinbox_qabstractspinbox_mousereleaseevent, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, event, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qabstractspinbox_qabstractspinbox_mousemoveevent, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, event, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qabstractspinbox_qabstractspinbox_timerevent, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, event, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qabstractspinbox_qabstractspinbox_paintevent, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, event, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qabstractspinbox_qabstractspinbox_showevent, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, event, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qabstractspinbox_qabstractspinbox_initstyleoption, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, option, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qabstractspinbox_qabstractspinbox_lineedit, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qabstractspinbox_qabstractspinbox_setlineedit, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, edit, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qabstractspinbox_qabstractspinbox_stepenabled, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qabstractspinbox_qabstractspinbox_editingfinished, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_widgets_qabstractspinbox_qabstractspinbox_method_entry) {
	PHP_ME(Qt_Widgets_QAbstractSpinBox_QAbstractSpinBox, staticMetaObject, arginfo_qt_widgets_qabstractspinbox_qabstractspinbox_staticmetaobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QAbstractSpinBox_QAbstractSpinBox, tr, arginfo_qt_widgets_qabstractspinbox_qabstractspinbox_tr, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QAbstractSpinBox_QAbstractSpinBox, new_, arginfo_qt_widgets_qabstractspinbox_qabstractspinbox_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QAbstractSpinBox_QAbstractSpinBox, buttonSymbols, arginfo_qt_widgets_qabstractspinbox_qabstractspinbox_buttonsymbols, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QAbstractSpinBox_QAbstractSpinBox, setButtonSymbols, arginfo_qt_widgets_qabstractspinbox_qabstractspinbox_setbuttonsymbols, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QAbstractSpinBox_QAbstractSpinBox, setCorrectionMode, arginfo_qt_widgets_qabstractspinbox_qabstractspinbox_setcorrectionmode, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QAbstractSpinBox_QAbstractSpinBox, correctionMode, arginfo_qt_widgets_qabstractspinbox_qabstractspinbox_correctionmode, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QAbstractSpinBox_QAbstractSpinBox, hasAcceptableInput, arginfo_qt_widgets_qabstractspinbox_qabstractspinbox_hasacceptableinput, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QAbstractSpinBox_QAbstractSpinBox, text, arginfo_qt_widgets_qabstractspinbox_qabstractspinbox_text, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QAbstractSpinBox_QAbstractSpinBox, specialValueText, arginfo_qt_widgets_qabstractspinbox_qabstractspinbox_specialvaluetext, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QAbstractSpinBox_QAbstractSpinBox, setSpecialValueText, arginfo_qt_widgets_qabstractspinbox_qabstractspinbox_setspecialvaluetext, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QAbstractSpinBox_QAbstractSpinBox, wrapping, arginfo_qt_widgets_qabstractspinbox_qabstractspinbox_wrapping, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QAbstractSpinBox_QAbstractSpinBox, setWrapping, arginfo_qt_widgets_qabstractspinbox_qabstractspinbox_setwrapping, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QAbstractSpinBox_QAbstractSpinBox, setReadOnly, arginfo_qt_widgets_qabstractspinbox_qabstractspinbox_setreadonly, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QAbstractSpinBox_QAbstractSpinBox, isReadOnly, arginfo_qt_widgets_qabstractspinbox_qabstractspinbox_isreadonly, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QAbstractSpinBox_QAbstractSpinBox, setKeyboardTracking, arginfo_qt_widgets_qabstractspinbox_qabstractspinbox_setkeyboardtracking, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QAbstractSpinBox_QAbstractSpinBox, keyboardTracking, arginfo_qt_widgets_qabstractspinbox_qabstractspinbox_keyboardtracking, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QAbstractSpinBox_QAbstractSpinBox, setAlignment, arginfo_qt_widgets_qabstractspinbox_qabstractspinbox_setalignment, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QAbstractSpinBox_QAbstractSpinBox, alignment, arginfo_qt_widgets_qabstractspinbox_qabstractspinbox_alignment, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QAbstractSpinBox_QAbstractSpinBox, setFrame, arginfo_qt_widgets_qabstractspinbox_qabstractspinbox_setframe, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QAbstractSpinBox_QAbstractSpinBox, hasFrame, arginfo_qt_widgets_qabstractspinbox_qabstractspinbox_hasframe, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QAbstractSpinBox_QAbstractSpinBox, setAccelerated, arginfo_qt_widgets_qabstractspinbox_qabstractspinbox_setaccelerated, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QAbstractSpinBox_QAbstractSpinBox, isAccelerated, arginfo_qt_widgets_qabstractspinbox_qabstractspinbox_isaccelerated, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QAbstractSpinBox_QAbstractSpinBox, setGroupSeparatorShown, arginfo_qt_widgets_qabstractspinbox_qabstractspinbox_setgroupseparatorshown, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QAbstractSpinBox_QAbstractSpinBox, isGroupSeparatorShown, arginfo_qt_widgets_qabstractspinbox_qabstractspinbox_isgroupseparatorshown, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QAbstractSpinBox_QAbstractSpinBox, sizeHint, arginfo_qt_widgets_qabstractspinbox_qabstractspinbox_sizehint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QAbstractSpinBox_QAbstractSpinBox, minimumSizeHint, arginfo_qt_widgets_qabstractspinbox_qabstractspinbox_minimumsizehint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QAbstractSpinBox_QAbstractSpinBox, interpretText, arginfo_qt_widgets_qabstractspinbox_qabstractspinbox_interprettext, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QAbstractSpinBox_QAbstractSpinBox, event, arginfo_qt_widgets_qabstractspinbox_qabstractspinbox_event, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QAbstractSpinBox_QAbstractSpinBox, inputMethodQuery, arginfo_qt_widgets_qabstractspinbox_qabstractspinbox_inputmethodquery, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QAbstractSpinBox_QAbstractSpinBox, validate, arginfo_qt_widgets_qabstractspinbox_qabstractspinbox_validate, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QAbstractSpinBox_QAbstractSpinBox, fixup, arginfo_qt_widgets_qabstractspinbox_qabstractspinbox_fixup, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QAbstractSpinBox_QAbstractSpinBox, stepBy, arginfo_qt_widgets_qabstractspinbox_qabstractspinbox_stepby, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QAbstractSpinBox_QAbstractSpinBox, stepUp, arginfo_qt_widgets_qabstractspinbox_qabstractspinbox_stepup, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QAbstractSpinBox_QAbstractSpinBox, stepDown, arginfo_qt_widgets_qabstractspinbox_qabstractspinbox_stepdown, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QAbstractSpinBox_QAbstractSpinBox, selectAll, arginfo_qt_widgets_qabstractspinbox_qabstractspinbox_selectall, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QAbstractSpinBox_QAbstractSpinBox, clear, arginfo_qt_widgets_qabstractspinbox_qabstractspinbox_clear, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QAbstractSpinBox_QAbstractSpinBox, resizeEvent, arginfo_qt_widgets_qabstractspinbox_qabstractspinbox_resizeevent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QAbstractSpinBox_QAbstractSpinBox, keyPressEvent, arginfo_qt_widgets_qabstractspinbox_qabstractspinbox_keypressevent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QAbstractSpinBox_QAbstractSpinBox, keyReleaseEvent, arginfo_qt_widgets_qabstractspinbox_qabstractspinbox_keyreleaseevent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QAbstractSpinBox_QAbstractSpinBox, wheelEvent, arginfo_qt_widgets_qabstractspinbox_qabstractspinbox_wheelevent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QAbstractSpinBox_QAbstractSpinBox, focusInEvent, arginfo_qt_widgets_qabstractspinbox_qabstractspinbox_focusinevent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QAbstractSpinBox_QAbstractSpinBox, focusOutEvent, arginfo_qt_widgets_qabstractspinbox_qabstractspinbox_focusoutevent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QAbstractSpinBox_QAbstractSpinBox, contextMenuEvent, arginfo_qt_widgets_qabstractspinbox_qabstractspinbox_contextmenuevent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QAbstractSpinBox_QAbstractSpinBox, changeEvent, arginfo_qt_widgets_qabstractspinbox_qabstractspinbox_changeevent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QAbstractSpinBox_QAbstractSpinBox, closeEvent, arginfo_qt_widgets_qabstractspinbox_qabstractspinbox_closeevent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QAbstractSpinBox_QAbstractSpinBox, hideEvent, arginfo_qt_widgets_qabstractspinbox_qabstractspinbox_hideevent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QAbstractSpinBox_QAbstractSpinBox, mousePressEvent, arginfo_qt_widgets_qabstractspinbox_qabstractspinbox_mousepressevent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QAbstractSpinBox_QAbstractSpinBox, mouseReleaseEvent, arginfo_qt_widgets_qabstractspinbox_qabstractspinbox_mousereleaseevent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QAbstractSpinBox_QAbstractSpinBox, mouseMoveEvent, arginfo_qt_widgets_qabstractspinbox_qabstractspinbox_mousemoveevent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QAbstractSpinBox_QAbstractSpinBox, timerEvent, arginfo_qt_widgets_qabstractspinbox_qabstractspinbox_timerevent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QAbstractSpinBox_QAbstractSpinBox, paintEvent, arginfo_qt_widgets_qabstractspinbox_qabstractspinbox_paintevent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QAbstractSpinBox_QAbstractSpinBox, showEvent, arginfo_qt_widgets_qabstractspinbox_qabstractspinbox_showevent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QAbstractSpinBox_QAbstractSpinBox, initStyleOption, arginfo_qt_widgets_qabstractspinbox_qabstractspinbox_initstyleoption, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QAbstractSpinBox_QAbstractSpinBox, lineEdit, arginfo_qt_widgets_qabstractspinbox_qabstractspinbox_lineedit, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QAbstractSpinBox_QAbstractSpinBox, setLineEdit, arginfo_qt_widgets_qabstractspinbox_qabstractspinbox_setlineedit, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QAbstractSpinBox_QAbstractSpinBox, stepEnabled, arginfo_qt_widgets_qabstractspinbox_qabstractspinbox_stepenabled, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QAbstractSpinBox_QAbstractSpinBox, editingFinished, arginfo_qt_widgets_qabstractspinbox_qabstractspinbox_editingfinished, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
