
extern zend_class_entry *qt_gui_qkeyevent_qkeyevent_ce;

ZEPHIR_INIT_CLASS(Qt_Gui_QKeyEvent_QKeyEvent);

PHP_METHOD(Qt_Gui_QKeyEvent_QKeyEvent, new_);
PHP_METHOD(Qt_Gui_QKeyEvent_QKeyEvent, clone_);
PHP_METHOD(Qt_Gui_QKeyEvent_QKeyEvent, newQEventTypeIntQtKeyboardModifiersQStringBoolQuint16);
PHP_METHOD(Qt_Gui_QKeyEvent_QKeyEvent, newQEventTypeIntQtKeyboardModifiersQuint32Quint32Quint32QStringBoolQuint16QInputDevice);
PHP_METHOD(Qt_Gui_QKeyEvent_QKeyEvent, key);
PHP_METHOD(Qt_Gui_QKeyEvent_QKeyEvent, matches);
PHP_METHOD(Qt_Gui_QKeyEvent_QKeyEvent, modifiers);
PHP_METHOD(Qt_Gui_QKeyEvent_QKeyEvent, keyCombination);
PHP_METHOD(Qt_Gui_QKeyEvent_QKeyEvent, text);
PHP_METHOD(Qt_Gui_QKeyEvent_QKeyEvent, isAutoRepeat);
PHP_METHOD(Qt_Gui_QKeyEvent_QKeyEvent, count);
PHP_METHOD(Qt_Gui_QKeyEvent_QKeyEvent, nativeScanCode);
PHP_METHOD(Qt_Gui_QKeyEvent_QKeyEvent, nativeVirtualKey);
PHP_METHOD(Qt_Gui_QKeyEvent_QKeyEvent, nativeModifiers);
PHP_METHOD(Qt_Gui_QKeyEvent_QKeyEvent, m_text);
PHP_METHOD(Qt_Gui_QKeyEvent_QKeyEvent, setM_text);
PHP_METHOD(Qt_Gui_QKeyEvent_QKeyEvent, m_key);
PHP_METHOD(Qt_Gui_QKeyEvent_QKeyEvent, setM_key);
PHP_METHOD(Qt_Gui_QKeyEvent_QKeyEvent, m_scanCode);
PHP_METHOD(Qt_Gui_QKeyEvent_QKeyEvent, setM_scanCode);
PHP_METHOD(Qt_Gui_QKeyEvent_QKeyEvent, m_virtualKey);
PHP_METHOD(Qt_Gui_QKeyEvent_QKeyEvent, setM_virtualKey);
PHP_METHOD(Qt_Gui_QKeyEvent_QKeyEvent, m_nativeModifiers);
PHP_METHOD(Qt_Gui_QKeyEvent_QKeyEvent, setM_nativeModifiers);
PHP_METHOD(Qt_Gui_QKeyEvent_QKeyEvent, m_count);
PHP_METHOD(Qt_Gui_QKeyEvent_QKeyEvent, setM_count);
PHP_METHOD(Qt_Gui_QKeyEvent_QKeyEvent, m_autoRepeat);
PHP_METHOD(Qt_Gui_QKeyEvent_QKeyEvent, setM_autoRepeat);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qkeyevent_qkeyevent_new_, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qkeyevent_qkeyevent_clone_, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qkeyevent_qkeyevent_newqeventtypeintqtkeyboardmodifiersqstringboolquint16, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, type, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, key, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, modifiers, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, text, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, autorep, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, count, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qkeyevent_qkeyevent_newqeventtypeintqtkeyboardmodifiersquint32quint32quint32qstringboolquint16qinputdevice, 0, 6, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, type, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, key, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, modifiers, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, nativeScanCode, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, nativeVirtualKey, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, nativeModifiers, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, text, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, autorep, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, count, IS_LONG, 0)
	ZEND_ARG_INFO(0, device)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qkeyevent_qkeyevent_key, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qkeyevent_qkeyevent_matches, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, key, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qkeyevent_qkeyevent_modifiers, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qkeyevent_qkeyevent_keycombination, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qkeyevent_qkeyevent_text, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qkeyevent_qkeyevent_isautorepeat, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qkeyevent_qkeyevent_count, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qkeyevent_qkeyevent_nativescancode, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qkeyevent_qkeyevent_nativevirtualkey, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qkeyevent_qkeyevent_nativemodifiers, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qkeyevent_qkeyevent_m_text, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qkeyevent_qkeyevent_setm_text, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qkeyevent_qkeyevent_m_key, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qkeyevent_qkeyevent_setm_key, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qkeyevent_qkeyevent_m_scancode, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qkeyevent_qkeyevent_setm_scancode, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qkeyevent_qkeyevent_m_virtualkey, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qkeyevent_qkeyevent_setm_virtualkey, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qkeyevent_qkeyevent_m_nativemodifiers, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qkeyevent_qkeyevent_setm_nativemodifiers, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qkeyevent_qkeyevent_m_count, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qkeyevent_qkeyevent_setm_count, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qkeyevent_qkeyevent_m_autorepeat, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qkeyevent_qkeyevent_setm_autorepeat, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_gui_qkeyevent_qkeyevent_method_entry) {
	PHP_ME(Qt_Gui_QKeyEvent_QKeyEvent, new_, arginfo_qt_gui_qkeyevent_qkeyevent_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QKeyEvent_QKeyEvent, clone_, arginfo_qt_gui_qkeyevent_qkeyevent_clone_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QKeyEvent_QKeyEvent, newQEventTypeIntQtKeyboardModifiersQStringBoolQuint16, arginfo_qt_gui_qkeyevent_qkeyevent_newqeventtypeintqtkeyboardmodifiersqstringboolquint16, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QKeyEvent_QKeyEvent, newQEventTypeIntQtKeyboardModifiersQuint32Quint32Quint32QStringBoolQuint16QInputDevice, arginfo_qt_gui_qkeyevent_qkeyevent_newqeventtypeintqtkeyboardmodifiersquint32quint32quint32qstringboolquint16qinputdevice, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QKeyEvent_QKeyEvent, key, arginfo_qt_gui_qkeyevent_qkeyevent_key, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QKeyEvent_QKeyEvent, matches, arginfo_qt_gui_qkeyevent_qkeyevent_matches, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QKeyEvent_QKeyEvent, modifiers, arginfo_qt_gui_qkeyevent_qkeyevent_modifiers, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QKeyEvent_QKeyEvent, keyCombination, arginfo_qt_gui_qkeyevent_qkeyevent_keycombination, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QKeyEvent_QKeyEvent, text, arginfo_qt_gui_qkeyevent_qkeyevent_text, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QKeyEvent_QKeyEvent, isAutoRepeat, arginfo_qt_gui_qkeyevent_qkeyevent_isautorepeat, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QKeyEvent_QKeyEvent, count, arginfo_qt_gui_qkeyevent_qkeyevent_count, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QKeyEvent_QKeyEvent, nativeScanCode, arginfo_qt_gui_qkeyevent_qkeyevent_nativescancode, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QKeyEvent_QKeyEvent, nativeVirtualKey, arginfo_qt_gui_qkeyevent_qkeyevent_nativevirtualkey, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QKeyEvent_QKeyEvent, nativeModifiers, arginfo_qt_gui_qkeyevent_qkeyevent_nativemodifiers, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QKeyEvent_QKeyEvent, m_text, arginfo_qt_gui_qkeyevent_qkeyevent_m_text, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QKeyEvent_QKeyEvent, setM_text, arginfo_qt_gui_qkeyevent_qkeyevent_setm_text, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QKeyEvent_QKeyEvent, m_key, arginfo_qt_gui_qkeyevent_qkeyevent_m_key, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QKeyEvent_QKeyEvent, setM_key, arginfo_qt_gui_qkeyevent_qkeyevent_setm_key, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QKeyEvent_QKeyEvent, m_scanCode, arginfo_qt_gui_qkeyevent_qkeyevent_m_scancode, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QKeyEvent_QKeyEvent, setM_scanCode, arginfo_qt_gui_qkeyevent_qkeyevent_setm_scancode, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QKeyEvent_QKeyEvent, m_virtualKey, arginfo_qt_gui_qkeyevent_qkeyevent_m_virtualkey, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QKeyEvent_QKeyEvent, setM_virtualKey, arginfo_qt_gui_qkeyevent_qkeyevent_setm_virtualkey, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QKeyEvent_QKeyEvent, m_nativeModifiers, arginfo_qt_gui_qkeyevent_qkeyevent_m_nativemodifiers, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QKeyEvent_QKeyEvent, setM_nativeModifiers, arginfo_qt_gui_qkeyevent_qkeyevent_setm_nativemodifiers, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QKeyEvent_QKeyEvent, m_count, arginfo_qt_gui_qkeyevent_qkeyevent_m_count, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QKeyEvent_QKeyEvent, setM_count, arginfo_qt_gui_qkeyevent_qkeyevent_setm_count, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QKeyEvent_QKeyEvent, m_autoRepeat, arginfo_qt_gui_qkeyevent_qkeyevent_m_autorepeat, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QKeyEvent_QKeyEvent, setM_autoRepeat, arginfo_qt_gui_qkeyevent_qkeyevent_setm_autorepeat, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
