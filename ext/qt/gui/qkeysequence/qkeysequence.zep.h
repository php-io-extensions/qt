
extern zend_class_entry *qt_gui_qkeysequence_qkeysequence_ce;

ZEPHIR_INIT_CLASS(Qt_Gui_QKeySequence_QKeySequence);

PHP_METHOD(Qt_Gui_QKeySequence_QKeySequence, staticMetaObject);
PHP_METHOD(Qt_Gui_QKeySequence_QKeySequence, qt_check_for_QGADGET_macro);
PHP_METHOD(Qt_Gui_QKeySequence_QKeySequence, new_);
PHP_METHOD(Qt_Gui_QKeySequence_QKeySequence, newQStringQKeySequenceSequenceFormat);
PHP_METHOD(Qt_Gui_QKeySequence_QKeySequence, newIntIntIntInt);
PHP_METHOD(Qt_Gui_QKeySequence_QKeySequence, newQKeyCombinationQKeyCombinationQKeyCombinationQKeyCombination);
PHP_METHOD(Qt_Gui_QKeySequence_QKeySequence, newQKeySequence);
PHP_METHOD(Qt_Gui_QKeySequence_QKeySequence, newQKeySequenceStandardKey);
PHP_METHOD(Qt_Gui_QKeySequence_QKeySequence, count);
PHP_METHOD(Qt_Gui_QKeySequence_QKeySequence, isEmpty);
PHP_METHOD(Qt_Gui_QKeySequence_QKeySequence, toString);
PHP_METHOD(Qt_Gui_QKeySequence_QKeySequence, fromString);
PHP_METHOD(Qt_Gui_QKeySequence_QKeySequence, listFromString);
PHP_METHOD(Qt_Gui_QKeySequence_QKeySequence, listToString);
PHP_METHOD(Qt_Gui_QKeySequence_QKeySequence, matches);
PHP_METHOD(Qt_Gui_QKeySequence_QKeySequence, mnemonic);
PHP_METHOD(Qt_Gui_QKeySequence_QKeySequence, keyBindings);
PHP_METHOD(Qt_Gui_QKeySequence_QKeySequence, swap);
PHP_METHOD(Qt_Gui_QKeySequence_QKeySequence, isDetached);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qkeysequence_qkeysequence_staticmetaobject, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qkeysequence_qkeysequence_qt_check_for_qgadget_macro, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qkeysequence_qkeysequence_new_, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qkeysequence_qkeysequence_newqstringqkeysequencesequenceformat, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, key, IS_STRING, 0)
	ZEND_ARG_INFO(0, format)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qkeysequence_qkeysequence_newintintintint, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, k1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, k2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, k3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, k4, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qkeysequence_qkeysequence_newqkeycombinationqkeycombinationqkeycombinationqkeycombination, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, k1, IS_LONG, 0)
	ZEND_ARG_INFO(0, k2)
	ZEND_ARG_INFO(0, k3)
	ZEND_ARG_INFO(0, k4)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qkeysequence_qkeysequence_newqkeysequence, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, ks, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qkeysequence_qkeysequence_newqkeysequencestandardkey, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, key, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qkeysequence_qkeysequence_count, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qkeysequence_qkeysequence_isempty, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qkeysequence_qkeysequence_tostring, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_INFO(0, format)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qkeysequence_qkeysequence_fromstring, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, str, IS_STRING, 0)
	ZEND_ARG_INFO(0, format)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qkeysequence_qkeysequence_listfromstring, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, str, IS_STRING, 0)
	ZEND_ARG_INFO(0, format)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qkeysequence_qkeysequence_listtostring, 0, 1, IS_STRING, 0)
	ZEND_ARG_ARRAY_INFO(0, list_, 0)
	ZEND_ARG_INFO(0, format)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qkeysequence_qkeysequence_matches, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, seq, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qkeysequence_qkeysequence_mnemonic, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, text, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qkeysequence_qkeysequence_keybindings, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, key, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qkeysequence_qkeysequence_swap, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, other, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qkeysequence_qkeysequence_isdetached, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_gui_qkeysequence_qkeysequence_method_entry) {
	PHP_ME(Qt_Gui_QKeySequence_QKeySequence, staticMetaObject, arginfo_qt_gui_qkeysequence_qkeysequence_staticmetaobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QKeySequence_QKeySequence, qt_check_for_QGADGET_macro, arginfo_qt_gui_qkeysequence_qkeysequence_qt_check_for_qgadget_macro, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QKeySequence_QKeySequence, new_, arginfo_qt_gui_qkeysequence_qkeysequence_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QKeySequence_QKeySequence, newQStringQKeySequenceSequenceFormat, arginfo_qt_gui_qkeysequence_qkeysequence_newqstringqkeysequencesequenceformat, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QKeySequence_QKeySequence, newIntIntIntInt, arginfo_qt_gui_qkeysequence_qkeysequence_newintintintint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QKeySequence_QKeySequence, newQKeyCombinationQKeyCombinationQKeyCombinationQKeyCombination, arginfo_qt_gui_qkeysequence_qkeysequence_newqkeycombinationqkeycombinationqkeycombinationqkeycombination, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QKeySequence_QKeySequence, newQKeySequence, arginfo_qt_gui_qkeysequence_qkeysequence_newqkeysequence, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QKeySequence_QKeySequence, newQKeySequenceStandardKey, arginfo_qt_gui_qkeysequence_qkeysequence_newqkeysequencestandardkey, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QKeySequence_QKeySequence, count, arginfo_qt_gui_qkeysequence_qkeysequence_count, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QKeySequence_QKeySequence, isEmpty, arginfo_qt_gui_qkeysequence_qkeysequence_isempty, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QKeySequence_QKeySequence, toString, arginfo_qt_gui_qkeysequence_qkeysequence_tostring, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QKeySequence_QKeySequence, fromString, arginfo_qt_gui_qkeysequence_qkeysequence_fromstring, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QKeySequence_QKeySequence, listFromString, arginfo_qt_gui_qkeysequence_qkeysequence_listfromstring, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QKeySequence_QKeySequence, listToString, arginfo_qt_gui_qkeysequence_qkeysequence_listtostring, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QKeySequence_QKeySequence, matches, arginfo_qt_gui_qkeysequence_qkeysequence_matches, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QKeySequence_QKeySequence, mnemonic, arginfo_qt_gui_qkeysequence_qkeysequence_mnemonic, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QKeySequence_QKeySequence, keyBindings, arginfo_qt_gui_qkeysequence_qkeysequence_keybindings, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QKeySequence_QKeySequence, swap, arginfo_qt_gui_qkeysequence_qkeysequence_swap, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QKeySequence_QKeySequence, isDetached, arginfo_qt_gui_qkeysequence_qkeysequence_isdetached, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
