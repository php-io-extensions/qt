
extern zend_class_entry *qt_widgets_qtoolbar_qtoolbar_ce;

ZEPHIR_INIT_CLASS(Qt_Widgets_QToolBar_QToolBar);

PHP_METHOD(Qt_Widgets_QToolBar_QToolBar, addAction);
PHP_METHOD(Qt_Widgets_QToolBar_QToolBar, addActionQString);
PHP_METHOD(Qt_Widgets_QToolBar_QToolBar, addActionQIconQString);
PHP_METHOD(Qt_Widgets_QToolBar_QToolBar, addActionQStringQObjectCharQtConnectionType);
PHP_METHOD(Qt_Widgets_QToolBar_QToolBar, addActionQIconQStringQObjectCharQtConnectionType);
PHP_METHOD(Qt_Widgets_QToolBar_QToolBar, addActionQStringQKeySequence);
PHP_METHOD(Qt_Widgets_QToolBar_QToolBar, addActionQIconQStringQKeySequence);
PHP_METHOD(Qt_Widgets_QToolBar_QToolBar, addActionQStringQKeySequenceQObjectCharQtConnectionType);
PHP_METHOD(Qt_Widgets_QToolBar_QToolBar, addActionQIconQStringQKeySequenceQObjectCharQtConnectionType);
PHP_METHOD(Qt_Widgets_QToolBar_QToolBar, staticMetaObject);
PHP_METHOD(Qt_Widgets_QToolBar_QToolBar, tr);
PHP_METHOD(Qt_Widgets_QToolBar_QToolBar, new_);
PHP_METHOD(Qt_Widgets_QToolBar_QToolBar, newQWidget);
PHP_METHOD(Qt_Widgets_QToolBar_QToolBar, setMovable);
PHP_METHOD(Qt_Widgets_QToolBar_QToolBar, isMovable);
PHP_METHOD(Qt_Widgets_QToolBar_QToolBar, setAllowedAreas);
PHP_METHOD(Qt_Widgets_QToolBar_QToolBar, allowedAreas);
PHP_METHOD(Qt_Widgets_QToolBar_QToolBar, isAreaAllowed);
PHP_METHOD(Qt_Widgets_QToolBar_QToolBar, setOrientation);
PHP_METHOD(Qt_Widgets_QToolBar_QToolBar, orientation);
PHP_METHOD(Qt_Widgets_QToolBar_QToolBar, clear);
PHP_METHOD(Qt_Widgets_QToolBar_QToolBar, addSeparator);
PHP_METHOD(Qt_Widgets_QToolBar_QToolBar, insertSeparator);
PHP_METHOD(Qt_Widgets_QToolBar_QToolBar, addWidget);
PHP_METHOD(Qt_Widgets_QToolBar_QToolBar, insertWidget);
PHP_METHOD(Qt_Widgets_QToolBar_QToolBar, actionGeometry);
PHP_METHOD(Qt_Widgets_QToolBar_QToolBar, actionAt);
PHP_METHOD(Qt_Widgets_QToolBar_QToolBar, actionAtIntInt);
PHP_METHOD(Qt_Widgets_QToolBar_QToolBar, toggleViewAction);
PHP_METHOD(Qt_Widgets_QToolBar_QToolBar, iconSize);
PHP_METHOD(Qt_Widgets_QToolBar_QToolBar, toolButtonStyle);
PHP_METHOD(Qt_Widgets_QToolBar_QToolBar, widgetForAction);
PHP_METHOD(Qt_Widgets_QToolBar_QToolBar, isFloatable);
PHP_METHOD(Qt_Widgets_QToolBar_QToolBar, setFloatable);
PHP_METHOD(Qt_Widgets_QToolBar_QToolBar, isFloating);
PHP_METHOD(Qt_Widgets_QToolBar_QToolBar, setIconSize);
PHP_METHOD(Qt_Widgets_QToolBar_QToolBar, setToolButtonStyle);
PHP_METHOD(Qt_Widgets_QToolBar_QToolBar, actionTriggered);
PHP_METHOD(Qt_Widgets_QToolBar_QToolBar, movableChanged);
PHP_METHOD(Qt_Widgets_QToolBar_QToolBar, allowedAreasChanged);
PHP_METHOD(Qt_Widgets_QToolBar_QToolBar, orientationChanged);
PHP_METHOD(Qt_Widgets_QToolBar_QToolBar, iconSizeChanged);
PHP_METHOD(Qt_Widgets_QToolBar_QToolBar, toolButtonStyleChanged);
PHP_METHOD(Qt_Widgets_QToolBar_QToolBar, topLevelChanged);
PHP_METHOD(Qt_Widgets_QToolBar_QToolBar, visibilityChanged);
PHP_METHOD(Qt_Widgets_QToolBar_QToolBar, actionEvent);
PHP_METHOD(Qt_Widgets_QToolBar_QToolBar, changeEvent);
PHP_METHOD(Qt_Widgets_QToolBar_QToolBar, paintEvent);
PHP_METHOD(Qt_Widgets_QToolBar_QToolBar, event);
PHP_METHOD(Qt_Widgets_QToolBar_QToolBar, initStyleOption);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtoolbar_qtoolbar_addaction, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, action, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtoolbar_qtoolbar_addactionqstring, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, text, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtoolbar_qtoolbar_addactionqiconqstring, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, icon, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, text, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtoolbar_qtoolbar_addactionqstringqobjectcharqtconnectiontype, 0, 4, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, text, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, receiver, IS_LONG, 0)
	ZEND_ARG_INFO(0, member)
	ZEND_ARG_INFO(0, type)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtoolbar_qtoolbar_addactionqiconqstringqobjectcharqtconnectiontype, 0, 5, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, icon, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, text, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, receiver, IS_LONG, 0)
	ZEND_ARG_INFO(0, member)
	ZEND_ARG_INFO(0, type)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtoolbar_qtoolbar_addactionqstringqkeysequence, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, text, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, shortcut, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtoolbar_qtoolbar_addactionqiconqstringqkeysequence, 0, 4, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, icon, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, text, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, shortcut, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtoolbar_qtoolbar_addactionqstringqkeysequenceqobjectcharqtconnectiontype, 0, 5, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, text, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, shortcut, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, receiver, IS_LONG, 0)
	ZEND_ARG_INFO(0, member)
	ZEND_ARG_INFO(0, type)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtoolbar_qtoolbar_addactionqiconqstringqkeysequenceqobjectcharqtconnectiontype, 0, 6, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, icon, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, text, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, shortcut, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, receiver, IS_LONG, 0)
	ZEND_ARG_INFO(0, member)
	ZEND_ARG_INFO(0, type)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtoolbar_qtoolbar_staticmetaobject, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtoolbar_qtoolbar_tr, 0, 1, IS_STRING, 0)
	ZEND_ARG_INFO(0, s)
	ZEND_ARG_INFO(0, c)
	ZEND_ARG_TYPE_INFO(0, n, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtoolbar_qtoolbar_new_, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, title, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtoolbar_qtoolbar_newqwidget, 0, 0, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtoolbar_qtoolbar_setmovable, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, movable, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtoolbar_qtoolbar_ismovable, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtoolbar_qtoolbar_setallowedareas, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, areas, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtoolbar_qtoolbar_allowedareas, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtoolbar_qtoolbar_isareaallowed, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, area, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtoolbar_qtoolbar_setorientation, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, orientation, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtoolbar_qtoolbar_orientation, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtoolbar_qtoolbar_clear, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtoolbar_qtoolbar_addseparator, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtoolbar_qtoolbar_insertseparator, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, before, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtoolbar_qtoolbar_addwidget, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, widget, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtoolbar_qtoolbar_insertwidget, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, before, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, widget, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtoolbar_qtoolbar_actiongeometry, 0, 2, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, action, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtoolbar_qtoolbar_actionat, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, pX, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, pY, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtoolbar_qtoolbar_actionatintint, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtoolbar_qtoolbar_toggleviewaction, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtoolbar_qtoolbar_iconsize, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtoolbar_qtoolbar_toolbuttonstyle, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtoolbar_qtoolbar_widgetforaction, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, action, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtoolbar_qtoolbar_isfloatable, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtoolbar_qtoolbar_setfloatable, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, floatable, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtoolbar_qtoolbar_isfloating, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtoolbar_qtoolbar_seticonsize, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, iconSizeWidth, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, iconSizeHeight, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtoolbar_qtoolbar_settoolbuttonstyle, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, toolButtonStyle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtoolbar_qtoolbar_actiontriggered, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, action, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtoolbar_qtoolbar_movablechanged, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, movable, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtoolbar_qtoolbar_allowedareaschanged, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, allowedAreas, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtoolbar_qtoolbar_orientationchanged, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, orientation, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtoolbar_qtoolbar_iconsizechanged, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, iconSizeWidth, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, iconSizeHeight, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtoolbar_qtoolbar_toolbuttonstylechanged, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, toolButtonStyle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtoolbar_qtoolbar_toplevelchanged, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, topLevel, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtoolbar_qtoolbar_visibilitychanged, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, visible, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtoolbar_qtoolbar_actionevent, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, event, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtoolbar_qtoolbar_changeevent, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, event, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtoolbar_qtoolbar_paintevent, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, event, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtoolbar_qtoolbar_event, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, event, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtoolbar_qtoolbar_initstyleoption, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, option, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_widgets_qtoolbar_qtoolbar_method_entry) {
	PHP_ME(Qt_Widgets_QToolBar_QToolBar, addAction, arginfo_qt_widgets_qtoolbar_qtoolbar_addaction, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QToolBar_QToolBar, addActionQString, arginfo_qt_widgets_qtoolbar_qtoolbar_addactionqstring, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QToolBar_QToolBar, addActionQIconQString, arginfo_qt_widgets_qtoolbar_qtoolbar_addactionqiconqstring, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QToolBar_QToolBar, addActionQStringQObjectCharQtConnectionType, arginfo_qt_widgets_qtoolbar_qtoolbar_addactionqstringqobjectcharqtconnectiontype, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QToolBar_QToolBar, addActionQIconQStringQObjectCharQtConnectionType, arginfo_qt_widgets_qtoolbar_qtoolbar_addactionqiconqstringqobjectcharqtconnectiontype, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QToolBar_QToolBar, addActionQStringQKeySequence, arginfo_qt_widgets_qtoolbar_qtoolbar_addactionqstringqkeysequence, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QToolBar_QToolBar, addActionQIconQStringQKeySequence, arginfo_qt_widgets_qtoolbar_qtoolbar_addactionqiconqstringqkeysequence, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QToolBar_QToolBar, addActionQStringQKeySequenceQObjectCharQtConnectionType, arginfo_qt_widgets_qtoolbar_qtoolbar_addactionqstringqkeysequenceqobjectcharqtconnectiontype, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QToolBar_QToolBar, addActionQIconQStringQKeySequenceQObjectCharQtConnectionType, arginfo_qt_widgets_qtoolbar_qtoolbar_addactionqiconqstringqkeysequenceqobjectcharqtconnectiontype, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QToolBar_QToolBar, staticMetaObject, arginfo_qt_widgets_qtoolbar_qtoolbar_staticmetaobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QToolBar_QToolBar, tr, arginfo_qt_widgets_qtoolbar_qtoolbar_tr, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QToolBar_QToolBar, new_, arginfo_qt_widgets_qtoolbar_qtoolbar_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QToolBar_QToolBar, newQWidget, arginfo_qt_widgets_qtoolbar_qtoolbar_newqwidget, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QToolBar_QToolBar, setMovable, arginfo_qt_widgets_qtoolbar_qtoolbar_setmovable, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QToolBar_QToolBar, isMovable, arginfo_qt_widgets_qtoolbar_qtoolbar_ismovable, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QToolBar_QToolBar, setAllowedAreas, arginfo_qt_widgets_qtoolbar_qtoolbar_setallowedareas, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QToolBar_QToolBar, allowedAreas, arginfo_qt_widgets_qtoolbar_qtoolbar_allowedareas, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QToolBar_QToolBar, isAreaAllowed, arginfo_qt_widgets_qtoolbar_qtoolbar_isareaallowed, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QToolBar_QToolBar, setOrientation, arginfo_qt_widgets_qtoolbar_qtoolbar_setorientation, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QToolBar_QToolBar, orientation, arginfo_qt_widgets_qtoolbar_qtoolbar_orientation, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QToolBar_QToolBar, clear, arginfo_qt_widgets_qtoolbar_qtoolbar_clear, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QToolBar_QToolBar, addSeparator, arginfo_qt_widgets_qtoolbar_qtoolbar_addseparator, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QToolBar_QToolBar, insertSeparator, arginfo_qt_widgets_qtoolbar_qtoolbar_insertseparator, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QToolBar_QToolBar, addWidget, arginfo_qt_widgets_qtoolbar_qtoolbar_addwidget, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QToolBar_QToolBar, insertWidget, arginfo_qt_widgets_qtoolbar_qtoolbar_insertwidget, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QToolBar_QToolBar, actionGeometry, arginfo_qt_widgets_qtoolbar_qtoolbar_actiongeometry, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QToolBar_QToolBar, actionAt, arginfo_qt_widgets_qtoolbar_qtoolbar_actionat, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QToolBar_QToolBar, actionAtIntInt, arginfo_qt_widgets_qtoolbar_qtoolbar_actionatintint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QToolBar_QToolBar, toggleViewAction, arginfo_qt_widgets_qtoolbar_qtoolbar_toggleviewaction, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QToolBar_QToolBar, iconSize, arginfo_qt_widgets_qtoolbar_qtoolbar_iconsize, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QToolBar_QToolBar, toolButtonStyle, arginfo_qt_widgets_qtoolbar_qtoolbar_toolbuttonstyle, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QToolBar_QToolBar, widgetForAction, arginfo_qt_widgets_qtoolbar_qtoolbar_widgetforaction, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QToolBar_QToolBar, isFloatable, arginfo_qt_widgets_qtoolbar_qtoolbar_isfloatable, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QToolBar_QToolBar, setFloatable, arginfo_qt_widgets_qtoolbar_qtoolbar_setfloatable, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QToolBar_QToolBar, isFloating, arginfo_qt_widgets_qtoolbar_qtoolbar_isfloating, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QToolBar_QToolBar, setIconSize, arginfo_qt_widgets_qtoolbar_qtoolbar_seticonsize, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QToolBar_QToolBar, setToolButtonStyle, arginfo_qt_widgets_qtoolbar_qtoolbar_settoolbuttonstyle, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QToolBar_QToolBar, actionTriggered, arginfo_qt_widgets_qtoolbar_qtoolbar_actiontriggered, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QToolBar_QToolBar, movableChanged, arginfo_qt_widgets_qtoolbar_qtoolbar_movablechanged, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QToolBar_QToolBar, allowedAreasChanged, arginfo_qt_widgets_qtoolbar_qtoolbar_allowedareaschanged, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QToolBar_QToolBar, orientationChanged, arginfo_qt_widgets_qtoolbar_qtoolbar_orientationchanged, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QToolBar_QToolBar, iconSizeChanged, arginfo_qt_widgets_qtoolbar_qtoolbar_iconsizechanged, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QToolBar_QToolBar, toolButtonStyleChanged, arginfo_qt_widgets_qtoolbar_qtoolbar_toolbuttonstylechanged, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QToolBar_QToolBar, topLevelChanged, arginfo_qt_widgets_qtoolbar_qtoolbar_toplevelchanged, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QToolBar_QToolBar, visibilityChanged, arginfo_qt_widgets_qtoolbar_qtoolbar_visibilitychanged, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QToolBar_QToolBar, actionEvent, arginfo_qt_widgets_qtoolbar_qtoolbar_actionevent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QToolBar_QToolBar, changeEvent, arginfo_qt_widgets_qtoolbar_qtoolbar_changeevent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QToolBar_QToolBar, paintEvent, arginfo_qt_widgets_qtoolbar_qtoolbar_paintevent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QToolBar_QToolBar, event, arginfo_qt_widgets_qtoolbar_qtoolbar_event, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QToolBar_QToolBar, initStyleOption, arginfo_qt_widgets_qtoolbar_qtoolbar_initstyleoption, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
