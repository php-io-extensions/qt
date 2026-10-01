
extern zend_class_entry *qt_widgets_qsystemtrayicon_qsystemtrayicon_ce;

ZEPHIR_INIT_CLASS(Qt_Widgets_QSystemTrayIcon_QSystemTrayIcon);

PHP_METHOD(Qt_Widgets_QSystemTrayIcon_QSystemTrayIcon, staticMetaObject);
PHP_METHOD(Qt_Widgets_QSystemTrayIcon_QSystemTrayIcon, tr);
PHP_METHOD(Qt_Widgets_QSystemTrayIcon_QSystemTrayIcon, new_);
PHP_METHOD(Qt_Widgets_QSystemTrayIcon_QSystemTrayIcon, newQIconQObject);
PHP_METHOD(Qt_Widgets_QSystemTrayIcon_QSystemTrayIcon, setContextMenu);
PHP_METHOD(Qt_Widgets_QSystemTrayIcon_QSystemTrayIcon, contextMenu);
PHP_METHOD(Qt_Widgets_QSystemTrayIcon_QSystemTrayIcon, icon);
PHP_METHOD(Qt_Widgets_QSystemTrayIcon_QSystemTrayIcon, setIcon);
PHP_METHOD(Qt_Widgets_QSystemTrayIcon_QSystemTrayIcon, toolTip);
PHP_METHOD(Qt_Widgets_QSystemTrayIcon_QSystemTrayIcon, setToolTip);
PHP_METHOD(Qt_Widgets_QSystemTrayIcon_QSystemTrayIcon, isSystemTrayAvailable);
PHP_METHOD(Qt_Widgets_QSystemTrayIcon_QSystemTrayIcon, supportsMessages);
PHP_METHOD(Qt_Widgets_QSystemTrayIcon_QSystemTrayIcon, geometry);
PHP_METHOD(Qt_Widgets_QSystemTrayIcon_QSystemTrayIcon, isVisible);
PHP_METHOD(Qt_Widgets_QSystemTrayIcon_QSystemTrayIcon, setVisible);
PHP_METHOD(Qt_Widgets_QSystemTrayIcon_QSystemTrayIcon, show);
PHP_METHOD(Qt_Widgets_QSystemTrayIcon_QSystemTrayIcon, hide);
PHP_METHOD(Qt_Widgets_QSystemTrayIcon_QSystemTrayIcon, showMessage);
PHP_METHOD(Qt_Widgets_QSystemTrayIcon_QSystemTrayIcon, showMessageQStringQStringQSystemTrayIconMessageIconInt);
PHP_METHOD(Qt_Widgets_QSystemTrayIcon_QSystemTrayIcon, activated);
PHP_METHOD(Qt_Widgets_QSystemTrayIcon_QSystemTrayIcon, messageClicked);
PHP_METHOD(Qt_Widgets_QSystemTrayIcon_QSystemTrayIcon, event);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qsystemtrayicon_qsystemtrayicon_staticmetaobject, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qsystemtrayicon_qsystemtrayicon_tr, 0, 1, IS_STRING, 0)
	ZEND_ARG_INFO(0, s)
	ZEND_ARG_INFO(0, c)
	ZEND_ARG_TYPE_INFO(0, n, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qsystemtrayicon_qsystemtrayicon_new_, 0, 0, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qsystemtrayicon_qsystemtrayicon_newqiconqobject, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, icon, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qsystemtrayicon_qsystemtrayicon_setcontextmenu, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, menu, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qsystemtrayicon_qsystemtrayicon_contextmenu, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qsystemtrayicon_qsystemtrayicon_icon, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qsystemtrayicon_qsystemtrayicon_seticon, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, icon, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qsystemtrayicon_qsystemtrayicon_tooltip, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qsystemtrayicon_qsystemtrayicon_settooltip, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, tip, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qsystemtrayicon_qsystemtrayicon_issystemtrayavailable, 0, 0, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qsystemtrayicon_qsystemtrayicon_supportsmessages, 0, 0, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qsystemtrayicon_qsystemtrayicon_geometry, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qsystemtrayicon_qsystemtrayicon_isvisible, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qsystemtrayicon_qsystemtrayicon_setvisible, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, visible, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qsystemtrayicon_qsystemtrayicon_show, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qsystemtrayicon_qsystemtrayicon_hide, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qsystemtrayicon_qsystemtrayicon_showmessage, 0, 4, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, title, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, msg, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, icon, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, msecs, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qsystemtrayicon_qsystemtrayicon_showmessageqstringqstringqsystemtrayiconmessageiconint, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, title, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, msg, IS_STRING, 0)
	ZEND_ARG_INFO(0, icon)
	ZEND_ARG_TYPE_INFO(0, msecs, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qsystemtrayicon_qsystemtrayicon_activated, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, reason, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qsystemtrayicon_qsystemtrayicon_messageclicked, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qsystemtrayicon_qsystemtrayicon_event, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, event, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_widgets_qsystemtrayicon_qsystemtrayicon_method_entry) {
	PHP_ME(Qt_Widgets_QSystemTrayIcon_QSystemTrayIcon, staticMetaObject, arginfo_qt_widgets_qsystemtrayicon_qsystemtrayicon_staticmetaobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QSystemTrayIcon_QSystemTrayIcon, tr, arginfo_qt_widgets_qsystemtrayicon_qsystemtrayicon_tr, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QSystemTrayIcon_QSystemTrayIcon, new_, arginfo_qt_widgets_qsystemtrayicon_qsystemtrayicon_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QSystemTrayIcon_QSystemTrayIcon, newQIconQObject, arginfo_qt_widgets_qsystemtrayicon_qsystemtrayicon_newqiconqobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QSystemTrayIcon_QSystemTrayIcon, setContextMenu, arginfo_qt_widgets_qsystemtrayicon_qsystemtrayicon_setcontextmenu, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QSystemTrayIcon_QSystemTrayIcon, contextMenu, arginfo_qt_widgets_qsystemtrayicon_qsystemtrayicon_contextmenu, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QSystemTrayIcon_QSystemTrayIcon, icon, arginfo_qt_widgets_qsystemtrayicon_qsystemtrayicon_icon, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QSystemTrayIcon_QSystemTrayIcon, setIcon, arginfo_qt_widgets_qsystemtrayicon_qsystemtrayicon_seticon, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QSystemTrayIcon_QSystemTrayIcon, toolTip, arginfo_qt_widgets_qsystemtrayicon_qsystemtrayicon_tooltip, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QSystemTrayIcon_QSystemTrayIcon, setToolTip, arginfo_qt_widgets_qsystemtrayicon_qsystemtrayicon_settooltip, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QSystemTrayIcon_QSystemTrayIcon, isSystemTrayAvailable, arginfo_qt_widgets_qsystemtrayicon_qsystemtrayicon_issystemtrayavailable, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QSystemTrayIcon_QSystemTrayIcon, supportsMessages, arginfo_qt_widgets_qsystemtrayicon_qsystemtrayicon_supportsmessages, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QSystemTrayIcon_QSystemTrayIcon, geometry, arginfo_qt_widgets_qsystemtrayicon_qsystemtrayicon_geometry, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QSystemTrayIcon_QSystemTrayIcon, isVisible, arginfo_qt_widgets_qsystemtrayicon_qsystemtrayicon_isvisible, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QSystemTrayIcon_QSystemTrayIcon, setVisible, arginfo_qt_widgets_qsystemtrayicon_qsystemtrayicon_setvisible, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QSystemTrayIcon_QSystemTrayIcon, show, arginfo_qt_widgets_qsystemtrayicon_qsystemtrayicon_show, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QSystemTrayIcon_QSystemTrayIcon, hide, arginfo_qt_widgets_qsystemtrayicon_qsystemtrayicon_hide, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QSystemTrayIcon_QSystemTrayIcon, showMessage, arginfo_qt_widgets_qsystemtrayicon_qsystemtrayicon_showmessage, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QSystemTrayIcon_QSystemTrayIcon, showMessageQStringQStringQSystemTrayIconMessageIconInt, arginfo_qt_widgets_qsystemtrayicon_qsystemtrayicon_showmessageqstringqstringqsystemtrayiconmessageiconint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QSystemTrayIcon_QSystemTrayIcon, activated, arginfo_qt_widgets_qsystemtrayicon_qsystemtrayicon_activated, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QSystemTrayIcon_QSystemTrayIcon, messageClicked, arginfo_qt_widgets_qsystemtrayicon_qsystemtrayicon_messageclicked, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QSystemTrayIcon_QSystemTrayIcon, event, arginfo_qt_widgets_qsystemtrayicon_qsystemtrayicon_event, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
