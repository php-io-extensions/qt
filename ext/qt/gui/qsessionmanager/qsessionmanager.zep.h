
extern zend_class_entry *qt_gui_qsessionmanager_qsessionmanager_ce;

ZEPHIR_INIT_CLASS(Qt_Gui_QSessionManager_QSessionManager);

PHP_METHOD(Qt_Gui_QSessionManager_QSessionManager, staticMetaObject);
PHP_METHOD(Qt_Gui_QSessionManager_QSessionManager, tr);
PHP_METHOD(Qt_Gui_QSessionManager_QSessionManager, sessionId);
PHP_METHOD(Qt_Gui_QSessionManager_QSessionManager, sessionKey);
PHP_METHOD(Qt_Gui_QSessionManager_QSessionManager, allowsInteraction);
PHP_METHOD(Qt_Gui_QSessionManager_QSessionManager, allowsErrorInteraction);
PHP_METHOD(Qt_Gui_QSessionManager_QSessionManager, release);
PHP_METHOD(Qt_Gui_QSessionManager_QSessionManager, cancel);
PHP_METHOD(Qt_Gui_QSessionManager_QSessionManager, setRestartHint);
PHP_METHOD(Qt_Gui_QSessionManager_QSessionManager, restartHint);
PHP_METHOD(Qt_Gui_QSessionManager_QSessionManager, setRestartCommand);
PHP_METHOD(Qt_Gui_QSessionManager_QSessionManager, restartCommand);
PHP_METHOD(Qt_Gui_QSessionManager_QSessionManager, setDiscardCommand);
PHP_METHOD(Qt_Gui_QSessionManager_QSessionManager, discardCommand);
PHP_METHOD(Qt_Gui_QSessionManager_QSessionManager, setManagerProperty);
PHP_METHOD(Qt_Gui_QSessionManager_QSessionManager, setManagerPropertyQStringQStringList);
PHP_METHOD(Qt_Gui_QSessionManager_QSessionManager, isPhase2);
PHP_METHOD(Qt_Gui_QSessionManager_QSessionManager, requestPhase2);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qsessionmanager_qsessionmanager_staticmetaobject, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qsessionmanager_qsessionmanager_tr, 0, 1, IS_STRING, 0)
	ZEND_ARG_INFO(0, s)
	ZEND_ARG_INFO(0, c)
	ZEND_ARG_TYPE_INFO(0, n, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qsessionmanager_qsessionmanager_sessionid, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qsessionmanager_qsessionmanager_sessionkey, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qsessionmanager_qsessionmanager_allowsinteraction, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qsessionmanager_qsessionmanager_allowserrorinteraction, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qsessionmanager_qsessionmanager_release, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qsessionmanager_qsessionmanager_cancel, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qsessionmanager_qsessionmanager_setrestarthint, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qsessionmanager_qsessionmanager_restarthint, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qsessionmanager_qsessionmanager_setrestartcommand, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_ARRAY_INFO(0, arg0, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qsessionmanager_qsessionmanager_restartcommand, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qsessionmanager_qsessionmanager_setdiscardcommand, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_ARRAY_INFO(0, arg0, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qsessionmanager_qsessionmanager_discardcommand, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qsessionmanager_qsessionmanager_setmanagerproperty, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, name, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qsessionmanager_qsessionmanager_setmanagerpropertyqstringqstringlist, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, name, IS_STRING, 0)
	ZEND_ARG_ARRAY_INFO(0, value, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qsessionmanager_qsessionmanager_isphase2, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qsessionmanager_qsessionmanager_requestphase2, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_gui_qsessionmanager_qsessionmanager_method_entry) {
	PHP_ME(Qt_Gui_QSessionManager_QSessionManager, staticMetaObject, arginfo_qt_gui_qsessionmanager_qsessionmanager_staticmetaobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QSessionManager_QSessionManager, tr, arginfo_qt_gui_qsessionmanager_qsessionmanager_tr, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QSessionManager_QSessionManager, sessionId, arginfo_qt_gui_qsessionmanager_qsessionmanager_sessionid, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QSessionManager_QSessionManager, sessionKey, arginfo_qt_gui_qsessionmanager_qsessionmanager_sessionkey, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QSessionManager_QSessionManager, allowsInteraction, arginfo_qt_gui_qsessionmanager_qsessionmanager_allowsinteraction, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QSessionManager_QSessionManager, allowsErrorInteraction, arginfo_qt_gui_qsessionmanager_qsessionmanager_allowserrorinteraction, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QSessionManager_QSessionManager, release, arginfo_qt_gui_qsessionmanager_qsessionmanager_release, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QSessionManager_QSessionManager, cancel, arginfo_qt_gui_qsessionmanager_qsessionmanager_cancel, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QSessionManager_QSessionManager, setRestartHint, arginfo_qt_gui_qsessionmanager_qsessionmanager_setrestarthint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QSessionManager_QSessionManager, restartHint, arginfo_qt_gui_qsessionmanager_qsessionmanager_restarthint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QSessionManager_QSessionManager, setRestartCommand, arginfo_qt_gui_qsessionmanager_qsessionmanager_setrestartcommand, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QSessionManager_QSessionManager, restartCommand, arginfo_qt_gui_qsessionmanager_qsessionmanager_restartcommand, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QSessionManager_QSessionManager, setDiscardCommand, arginfo_qt_gui_qsessionmanager_qsessionmanager_setdiscardcommand, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QSessionManager_QSessionManager, discardCommand, arginfo_qt_gui_qsessionmanager_qsessionmanager_discardcommand, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QSessionManager_QSessionManager, setManagerProperty, arginfo_qt_gui_qsessionmanager_qsessionmanager_setmanagerproperty, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QSessionManager_QSessionManager, setManagerPropertyQStringQStringList, arginfo_qt_gui_qsessionmanager_qsessionmanager_setmanagerpropertyqstringqstringlist, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QSessionManager_QSessionManager, isPhase2, arginfo_qt_gui_qsessionmanager_qsessionmanager_isphase2, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QSessionManager_QSessionManager, requestPhase2, arginfo_qt_gui_qsessionmanager_qsessionmanager_requestphase2, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
