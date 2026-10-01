
extern zend_class_entry *qt_widgets_qkeysequenceedit_qkeysequenceedit_ce;

ZEPHIR_INIT_CLASS(Qt_Widgets_QKeySequenceEdit_QKeySequenceEdit);

PHP_METHOD(Qt_Widgets_QKeySequenceEdit_QKeySequenceEdit, staticMetaObject);
PHP_METHOD(Qt_Widgets_QKeySequenceEdit_QKeySequenceEdit, tr);
PHP_METHOD(Qt_Widgets_QKeySequenceEdit_QKeySequenceEdit, new_);
PHP_METHOD(Qt_Widgets_QKeySequenceEdit_QKeySequenceEdit, newQKeySequenceQWidget);
PHP_METHOD(Qt_Widgets_QKeySequenceEdit_QKeySequenceEdit, keySequence);
PHP_METHOD(Qt_Widgets_QKeySequenceEdit_QKeySequenceEdit, maximumSequenceLength);
PHP_METHOD(Qt_Widgets_QKeySequenceEdit_QKeySequenceEdit, setClearButtonEnabled);
PHP_METHOD(Qt_Widgets_QKeySequenceEdit_QKeySequenceEdit, isClearButtonEnabled);
PHP_METHOD(Qt_Widgets_QKeySequenceEdit_QKeySequenceEdit, setFinishingKeyCombinations);
PHP_METHOD(Qt_Widgets_QKeySequenceEdit_QKeySequenceEdit, finishingKeyCombinations);
PHP_METHOD(Qt_Widgets_QKeySequenceEdit_QKeySequenceEdit, setKeySequence);
PHP_METHOD(Qt_Widgets_QKeySequenceEdit_QKeySequenceEdit, clear);
PHP_METHOD(Qt_Widgets_QKeySequenceEdit_QKeySequenceEdit, setMaximumSequenceLength);
PHP_METHOD(Qt_Widgets_QKeySequenceEdit_QKeySequenceEdit, editingFinished);
PHP_METHOD(Qt_Widgets_QKeySequenceEdit_QKeySequenceEdit, keySequenceChanged);
PHP_METHOD(Qt_Widgets_QKeySequenceEdit_QKeySequenceEdit, event);
PHP_METHOD(Qt_Widgets_QKeySequenceEdit_QKeySequenceEdit, keyPressEvent);
PHP_METHOD(Qt_Widgets_QKeySequenceEdit_QKeySequenceEdit, keyReleaseEvent);
PHP_METHOD(Qt_Widgets_QKeySequenceEdit_QKeySequenceEdit, timerEvent);
PHP_METHOD(Qt_Widgets_QKeySequenceEdit_QKeySequenceEdit, focusOutEvent);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qkeysequenceedit_qkeysequenceedit_staticmetaobject, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qkeysequenceedit_qkeysequenceedit_tr, 0, 1, IS_STRING, 0)
	ZEND_ARG_INFO(0, s)
	ZEND_ARG_INFO(0, c)
	ZEND_ARG_TYPE_INFO(0, n, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qkeysequenceedit_qkeysequenceedit_new_, 0, 0, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qkeysequenceedit_qkeysequenceedit_newqkeysequenceqwidget, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, keySequence, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qkeysequenceedit_qkeysequenceedit_keysequence, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qkeysequenceedit_qkeysequenceedit_maximumsequencelength, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qkeysequenceedit_qkeysequenceedit_setclearbuttonenabled, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, enable, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qkeysequenceedit_qkeysequenceedit_isclearbuttonenabled, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qkeysequenceedit_qkeysequenceedit_setfinishingkeycombinations, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_ARRAY_INFO(0, finishingKeyCombinations, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qkeysequenceedit_qkeysequenceedit_finishingkeycombinations, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qkeysequenceedit_qkeysequenceedit_setkeysequence, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, keySequence, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qkeysequenceedit_qkeysequenceedit_clear, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qkeysequenceedit_qkeysequenceedit_setmaximumsequencelength, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, count, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qkeysequenceedit_qkeysequenceedit_editingfinished, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qkeysequenceedit_qkeysequenceedit_keysequencechanged, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, keySequence, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qkeysequenceedit_qkeysequenceedit_event, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qkeysequenceedit_qkeysequenceedit_keypressevent, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qkeysequenceedit_qkeysequenceedit_keyreleaseevent, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qkeysequenceedit_qkeysequenceedit_timerevent, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qkeysequenceedit_qkeysequenceedit_focusoutevent, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_widgets_qkeysequenceedit_qkeysequenceedit_method_entry) {
	PHP_ME(Qt_Widgets_QKeySequenceEdit_QKeySequenceEdit, staticMetaObject, arginfo_qt_widgets_qkeysequenceedit_qkeysequenceedit_staticmetaobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QKeySequenceEdit_QKeySequenceEdit, tr, arginfo_qt_widgets_qkeysequenceedit_qkeysequenceedit_tr, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QKeySequenceEdit_QKeySequenceEdit, new_, arginfo_qt_widgets_qkeysequenceedit_qkeysequenceedit_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QKeySequenceEdit_QKeySequenceEdit, newQKeySequenceQWidget, arginfo_qt_widgets_qkeysequenceedit_qkeysequenceedit_newqkeysequenceqwidget, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QKeySequenceEdit_QKeySequenceEdit, keySequence, arginfo_qt_widgets_qkeysequenceedit_qkeysequenceedit_keysequence, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QKeySequenceEdit_QKeySequenceEdit, maximumSequenceLength, arginfo_qt_widgets_qkeysequenceedit_qkeysequenceedit_maximumsequencelength, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QKeySequenceEdit_QKeySequenceEdit, setClearButtonEnabled, arginfo_qt_widgets_qkeysequenceedit_qkeysequenceedit_setclearbuttonenabled, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QKeySequenceEdit_QKeySequenceEdit, isClearButtonEnabled, arginfo_qt_widgets_qkeysequenceedit_qkeysequenceedit_isclearbuttonenabled, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QKeySequenceEdit_QKeySequenceEdit, setFinishingKeyCombinations, arginfo_qt_widgets_qkeysequenceedit_qkeysequenceedit_setfinishingkeycombinations, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QKeySequenceEdit_QKeySequenceEdit, finishingKeyCombinations, arginfo_qt_widgets_qkeysequenceedit_qkeysequenceedit_finishingkeycombinations, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QKeySequenceEdit_QKeySequenceEdit, setKeySequence, arginfo_qt_widgets_qkeysequenceedit_qkeysequenceedit_setkeysequence, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QKeySequenceEdit_QKeySequenceEdit, clear, arginfo_qt_widgets_qkeysequenceedit_qkeysequenceedit_clear, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QKeySequenceEdit_QKeySequenceEdit, setMaximumSequenceLength, arginfo_qt_widgets_qkeysequenceedit_qkeysequenceedit_setmaximumsequencelength, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QKeySequenceEdit_QKeySequenceEdit, editingFinished, arginfo_qt_widgets_qkeysequenceedit_qkeysequenceedit_editingfinished, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QKeySequenceEdit_QKeySequenceEdit, keySequenceChanged, arginfo_qt_widgets_qkeysequenceedit_qkeysequenceedit_keysequencechanged, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QKeySequenceEdit_QKeySequenceEdit, event, arginfo_qt_widgets_qkeysequenceedit_qkeysequenceedit_event, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QKeySequenceEdit_QKeySequenceEdit, keyPressEvent, arginfo_qt_widgets_qkeysequenceedit_qkeysequenceedit_keypressevent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QKeySequenceEdit_QKeySequenceEdit, keyReleaseEvent, arginfo_qt_widgets_qkeysequenceedit_qkeysequenceedit_keyreleaseevent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QKeySequenceEdit_QKeySequenceEdit, timerEvent, arginfo_qt_widgets_qkeysequenceedit_qkeysequenceedit_timerevent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QKeySequenceEdit_QKeySequenceEdit, focusOutEvent, arginfo_qt_widgets_qkeysequenceedit_qkeysequenceedit_focusoutevent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
