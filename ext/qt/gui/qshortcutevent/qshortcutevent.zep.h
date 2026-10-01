
extern zend_class_entry *qt_gui_qshortcutevent_qshortcutevent_ce;

ZEPHIR_INIT_CLASS(Qt_Gui_QShortcutEvent_QShortcutEvent);

PHP_METHOD(Qt_Gui_QShortcutEvent_QShortcutEvent, new_);
PHP_METHOD(Qt_Gui_QShortcutEvent_QShortcutEvent, clone_);
PHP_METHOD(Qt_Gui_QShortcutEvent_QShortcutEvent, newQKeySequenceIntBool);
PHP_METHOD(Qt_Gui_QShortcutEvent_QShortcutEvent, newQKeySequenceQShortcutBool);
PHP_METHOD(Qt_Gui_QShortcutEvent_QShortcutEvent, key);
PHP_METHOD(Qt_Gui_QShortcutEvent_QShortcutEvent, shortcutId);
PHP_METHOD(Qt_Gui_QShortcutEvent_QShortcutEvent, isAmbiguous);
PHP_METHOD(Qt_Gui_QShortcutEvent_QShortcutEvent, m_sequence);
PHP_METHOD(Qt_Gui_QShortcutEvent_QShortcutEvent, setM_sequence);
PHP_METHOD(Qt_Gui_QShortcutEvent_QShortcutEvent, m_shortcutId);
PHP_METHOD(Qt_Gui_QShortcutEvent_QShortcutEvent, setM_shortcutId);
PHP_METHOD(Qt_Gui_QShortcutEvent_QShortcutEvent, m_ambiguous);
PHP_METHOD(Qt_Gui_QShortcutEvent_QShortcutEvent, setM_ambiguous);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qshortcutevent_qshortcutevent_new_, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qshortcutevent_qshortcutevent_clone_, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qshortcutevent_qshortcutevent_newqkeysequenceintbool, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, key, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, id, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, ambiguous, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qshortcutevent_qshortcutevent_newqkeysequenceqshortcutbool, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, key, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, shortcut, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, ambiguous, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qshortcutevent_qshortcutevent_key, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qshortcutevent_qshortcutevent_shortcutid, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qshortcutevent_qshortcutevent_isambiguous, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qshortcutevent_qshortcutevent_m_sequence, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qshortcutevent_qshortcutevent_setm_sequence, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qshortcutevent_qshortcutevent_m_shortcutid, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qshortcutevent_qshortcutevent_setm_shortcutid, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qshortcutevent_qshortcutevent_m_ambiguous, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qshortcutevent_qshortcutevent_setm_ambiguous, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_gui_qshortcutevent_qshortcutevent_method_entry) {
	PHP_ME(Qt_Gui_QShortcutEvent_QShortcutEvent, new_, arginfo_qt_gui_qshortcutevent_qshortcutevent_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QShortcutEvent_QShortcutEvent, clone_, arginfo_qt_gui_qshortcutevent_qshortcutevent_clone_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QShortcutEvent_QShortcutEvent, newQKeySequenceIntBool, arginfo_qt_gui_qshortcutevent_qshortcutevent_newqkeysequenceintbool, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QShortcutEvent_QShortcutEvent, newQKeySequenceQShortcutBool, arginfo_qt_gui_qshortcutevent_qshortcutevent_newqkeysequenceqshortcutbool, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QShortcutEvent_QShortcutEvent, key, arginfo_qt_gui_qshortcutevent_qshortcutevent_key, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QShortcutEvent_QShortcutEvent, shortcutId, arginfo_qt_gui_qshortcutevent_qshortcutevent_shortcutid, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QShortcutEvent_QShortcutEvent, isAmbiguous, arginfo_qt_gui_qshortcutevent_qshortcutevent_isambiguous, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QShortcutEvent_QShortcutEvent, m_sequence, arginfo_qt_gui_qshortcutevent_qshortcutevent_m_sequence, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QShortcutEvent_QShortcutEvent, setM_sequence, arginfo_qt_gui_qshortcutevent_qshortcutevent_setm_sequence, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QShortcutEvent_QShortcutEvent, m_shortcutId, arginfo_qt_gui_qshortcutevent_qshortcutevent_m_shortcutid, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QShortcutEvent_QShortcutEvent, setM_shortcutId, arginfo_qt_gui_qshortcutevent_qshortcutevent_setm_shortcutid, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QShortcutEvent_QShortcutEvent, m_ambiguous, arginfo_qt_gui_qshortcutevent_qshortcutevent_m_ambiguous, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QShortcutEvent_QShortcutEvent, setM_ambiguous, arginfo_qt_gui_qshortcutevent_qshortcutevent_setm_ambiguous, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
