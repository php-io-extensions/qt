
extern zend_class_entry *qt_gui_qshortcut_qshortcut_ce;

ZEPHIR_INIT_CLASS(Qt_Gui_QShortcut_QShortcut);

PHP_METHOD(Qt_Gui_QShortcut_QShortcut, staticMetaObject);
PHP_METHOD(Qt_Gui_QShortcut_QShortcut, tr);
PHP_METHOD(Qt_Gui_QShortcut_QShortcut, new_);
PHP_METHOD(Qt_Gui_QShortcut_QShortcut, newQKeySequenceQObjectCharCharQtShortcutContext);
PHP_METHOD(Qt_Gui_QShortcut_QShortcut, newQKeySequenceStandardKeyQObjectCharCharQtShortcutContext);
PHP_METHOD(Qt_Gui_QShortcut_QShortcut, setKey);
PHP_METHOD(Qt_Gui_QShortcut_QShortcut, key);
PHP_METHOD(Qt_Gui_QShortcut_QShortcut, setKeys);
PHP_METHOD(Qt_Gui_QShortcut_QShortcut, setKeysQListQKeySequence);
PHP_METHOD(Qt_Gui_QShortcut_QShortcut, keys);
PHP_METHOD(Qt_Gui_QShortcut_QShortcut, setEnabled);
PHP_METHOD(Qt_Gui_QShortcut_QShortcut, isEnabled);
PHP_METHOD(Qt_Gui_QShortcut_QShortcut, setContext);
PHP_METHOD(Qt_Gui_QShortcut_QShortcut, context);
PHP_METHOD(Qt_Gui_QShortcut_QShortcut, setAutoRepeat);
PHP_METHOD(Qt_Gui_QShortcut_QShortcut, autoRepeat);
PHP_METHOD(Qt_Gui_QShortcut_QShortcut, id);
PHP_METHOD(Qt_Gui_QShortcut_QShortcut, setWhatsThis);
PHP_METHOD(Qt_Gui_QShortcut_QShortcut, whatsThis);
PHP_METHOD(Qt_Gui_QShortcut_QShortcut, activated);
PHP_METHOD(Qt_Gui_QShortcut_QShortcut, activatedAmbiguously);
PHP_METHOD(Qt_Gui_QShortcut_QShortcut, event);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qshortcut_qshortcut_staticmetaobject, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qshortcut_qshortcut_tr, 0, 1, IS_STRING, 0)
	ZEND_ARG_INFO(0, s)
	ZEND_ARG_INFO(0, c)
	ZEND_ARG_TYPE_INFO(0, n, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qshortcut_qshortcut_new_, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qshortcut_qshortcut_newqkeysequenceqobjectcharcharqtshortcutcontext, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, key, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
	ZEND_ARG_INFO(0, member)
	ZEND_ARG_INFO(0, ambiguousMember)
	ZEND_ARG_INFO(0, context)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qshortcut_qshortcut_newqkeysequencestandardkeyqobjectcharcharqtshortcutcontext, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, key, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
	ZEND_ARG_INFO(0, member)
	ZEND_ARG_INFO(0, ambiguousMember)
	ZEND_ARG_INFO(0, context)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qshortcut_qshortcut_setkey, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, key, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qshortcut_qshortcut_key, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qshortcut_qshortcut_setkeys, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, key, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qshortcut_qshortcut_setkeysqlistqkeysequence, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_ARRAY_INFO(0, keys, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qshortcut_qshortcut_keys, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qshortcut_qshortcut_setenabled, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, enable, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qshortcut_qshortcut_isenabled, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qshortcut_qshortcut_setcontext, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, context, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qshortcut_qshortcut_context, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qshortcut_qshortcut_setautorepeat, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, on, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qshortcut_qshortcut_autorepeat, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qshortcut_qshortcut_id, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qshortcut_qshortcut_setwhatsthis, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, text, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qshortcut_qshortcut_whatsthis, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qshortcut_qshortcut_activated, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qshortcut_qshortcut_activatedambiguously, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qshortcut_qshortcut_event, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, e, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_gui_qshortcut_qshortcut_method_entry) {
	PHP_ME(Qt_Gui_QShortcut_QShortcut, staticMetaObject, arginfo_qt_gui_qshortcut_qshortcut_staticmetaobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QShortcut_QShortcut, tr, arginfo_qt_gui_qshortcut_qshortcut_tr, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QShortcut_QShortcut, new_, arginfo_qt_gui_qshortcut_qshortcut_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QShortcut_QShortcut, newQKeySequenceQObjectCharCharQtShortcutContext, arginfo_qt_gui_qshortcut_qshortcut_newqkeysequenceqobjectcharcharqtshortcutcontext, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QShortcut_QShortcut, newQKeySequenceStandardKeyQObjectCharCharQtShortcutContext, arginfo_qt_gui_qshortcut_qshortcut_newqkeysequencestandardkeyqobjectcharcharqtshortcutcontext, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QShortcut_QShortcut, setKey, arginfo_qt_gui_qshortcut_qshortcut_setkey, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QShortcut_QShortcut, key, arginfo_qt_gui_qshortcut_qshortcut_key, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QShortcut_QShortcut, setKeys, arginfo_qt_gui_qshortcut_qshortcut_setkeys, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QShortcut_QShortcut, setKeysQListQKeySequence, arginfo_qt_gui_qshortcut_qshortcut_setkeysqlistqkeysequence, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QShortcut_QShortcut, keys, arginfo_qt_gui_qshortcut_qshortcut_keys, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QShortcut_QShortcut, setEnabled, arginfo_qt_gui_qshortcut_qshortcut_setenabled, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QShortcut_QShortcut, isEnabled, arginfo_qt_gui_qshortcut_qshortcut_isenabled, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QShortcut_QShortcut, setContext, arginfo_qt_gui_qshortcut_qshortcut_setcontext, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QShortcut_QShortcut, context, arginfo_qt_gui_qshortcut_qshortcut_context, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QShortcut_QShortcut, setAutoRepeat, arginfo_qt_gui_qshortcut_qshortcut_setautorepeat, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QShortcut_QShortcut, autoRepeat, arginfo_qt_gui_qshortcut_qshortcut_autorepeat, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QShortcut_QShortcut, id, arginfo_qt_gui_qshortcut_qshortcut_id, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QShortcut_QShortcut, setWhatsThis, arginfo_qt_gui_qshortcut_qshortcut_setwhatsthis, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QShortcut_QShortcut, whatsThis, arginfo_qt_gui_qshortcut_qshortcut_whatsthis, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QShortcut_QShortcut, activated, arginfo_qt_gui_qshortcut_qshortcut_activated, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QShortcut_QShortcut, activatedAmbiguously, arginfo_qt_gui_qshortcut_qshortcut_activatedambiguously, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QShortcut_QShortcut, event, arginfo_qt_gui_qshortcut_qshortcut_event, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
