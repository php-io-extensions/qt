
extern zend_class_entry *qt_widgets_qmenu_qmenu_ce;

ZEPHIR_INIT_CLASS(Qt_Widgets_QMenu_QMenu);

PHP_METHOD(Qt_Widgets_QMenu_QMenu, addAction);
PHP_METHOD(Qt_Widgets_QMenu_QMenu, addActionQString);
PHP_METHOD(Qt_Widgets_QMenu_QMenu, addActionQIconQString);
PHP_METHOD(Qt_Widgets_QMenu_QMenu, addActionQStringQObjectCharQtConnectionType);
PHP_METHOD(Qt_Widgets_QMenu_QMenu, addActionQIconQStringQObjectCharQtConnectionType);
PHP_METHOD(Qt_Widgets_QMenu_QMenu, addActionQStringQKeySequence);
PHP_METHOD(Qt_Widgets_QMenu_QMenu, addActionQIconQStringQKeySequence);
PHP_METHOD(Qt_Widgets_QMenu_QMenu, addActionQStringQKeySequenceQObjectCharQtConnectionType);
PHP_METHOD(Qt_Widgets_QMenu_QMenu, addActionQIconQStringQKeySequenceQObjectCharQtConnectionType);
PHP_METHOD(Qt_Widgets_QMenu_QMenu, staticMetaObject);
PHP_METHOD(Qt_Widgets_QMenu_QMenu, tr);
PHP_METHOD(Qt_Widgets_QMenu_QMenu, new_);
PHP_METHOD(Qt_Widgets_QMenu_QMenu, newQStringQWidget);
PHP_METHOD(Qt_Widgets_QMenu_QMenu, addMenu);
PHP_METHOD(Qt_Widgets_QMenu_QMenu, addMenuQString);
PHP_METHOD(Qt_Widgets_QMenu_QMenu, addMenuQIconQString);
PHP_METHOD(Qt_Widgets_QMenu_QMenu, addSeparator);
PHP_METHOD(Qt_Widgets_QMenu_QMenu, addSection);
PHP_METHOD(Qt_Widgets_QMenu_QMenu, addSectionQIconQString);
PHP_METHOD(Qt_Widgets_QMenu_QMenu, insertMenu);
PHP_METHOD(Qt_Widgets_QMenu_QMenu, insertSeparator);
PHP_METHOD(Qt_Widgets_QMenu_QMenu, insertSection);
PHP_METHOD(Qt_Widgets_QMenu_QMenu, insertSectionQActionQIconQString);
PHP_METHOD(Qt_Widgets_QMenu_QMenu, isEmpty);
PHP_METHOD(Qt_Widgets_QMenu_QMenu, clear);
PHP_METHOD(Qt_Widgets_QMenu_QMenu, setTearOffEnabled);
PHP_METHOD(Qt_Widgets_QMenu_QMenu, isTearOffEnabled);
PHP_METHOD(Qt_Widgets_QMenu_QMenu, isTearOffMenuVisible);
PHP_METHOD(Qt_Widgets_QMenu_QMenu, showTearOffMenu);
PHP_METHOD(Qt_Widgets_QMenu_QMenu, showTearOffMenuQPoint);
PHP_METHOD(Qt_Widgets_QMenu_QMenu, hideTearOffMenu);
PHP_METHOD(Qt_Widgets_QMenu_QMenu, setDefaultAction);
PHP_METHOD(Qt_Widgets_QMenu_QMenu, defaultAction);
PHP_METHOD(Qt_Widgets_QMenu_QMenu, setActiveAction);
PHP_METHOD(Qt_Widgets_QMenu_QMenu, activeAction);
PHP_METHOD(Qt_Widgets_QMenu_QMenu, popup);
PHP_METHOD(Qt_Widgets_QMenu_QMenu, exec);
PHP_METHOD(Qt_Widgets_QMenu_QMenu, execQPointQAction);
PHP_METHOD(Qt_Widgets_QMenu_QMenu, execQListQActionQPointQActionQWidget);
PHP_METHOD(Qt_Widgets_QMenu_QMenu, sizeHint);
PHP_METHOD(Qt_Widgets_QMenu_QMenu, actionGeometry);
PHP_METHOD(Qt_Widgets_QMenu_QMenu, actionAt);
PHP_METHOD(Qt_Widgets_QMenu_QMenu, menuAction);
PHP_METHOD(Qt_Widgets_QMenu_QMenu, menuInAction);
PHP_METHOD(Qt_Widgets_QMenu_QMenu, title);
PHP_METHOD(Qt_Widgets_QMenu_QMenu, setTitle);
PHP_METHOD(Qt_Widgets_QMenu_QMenu, icon);
PHP_METHOD(Qt_Widgets_QMenu_QMenu, setIcon);
PHP_METHOD(Qt_Widgets_QMenu_QMenu, setNoReplayFor);
PHP_METHOD(Qt_Widgets_QMenu_QMenu, separatorsCollapsible);
PHP_METHOD(Qt_Widgets_QMenu_QMenu, setSeparatorsCollapsible);
PHP_METHOD(Qt_Widgets_QMenu_QMenu, toolTipsVisible);
PHP_METHOD(Qt_Widgets_QMenu_QMenu, setToolTipsVisible);
PHP_METHOD(Qt_Widgets_QMenu_QMenu, aboutToShow);
PHP_METHOD(Qt_Widgets_QMenu_QMenu, aboutToHide);
PHP_METHOD(Qt_Widgets_QMenu_QMenu, triggered);
PHP_METHOD(Qt_Widgets_QMenu_QMenu, hovered);
PHP_METHOD(Qt_Widgets_QMenu_QMenu, columnCount);
PHP_METHOD(Qt_Widgets_QMenu_QMenu, changeEvent);
PHP_METHOD(Qt_Widgets_QMenu_QMenu, keyPressEvent);
PHP_METHOD(Qt_Widgets_QMenu_QMenu, mouseReleaseEvent);
PHP_METHOD(Qt_Widgets_QMenu_QMenu, mousePressEvent);
PHP_METHOD(Qt_Widgets_QMenu_QMenu, mouseMoveEvent);
PHP_METHOD(Qt_Widgets_QMenu_QMenu, wheelEvent);
PHP_METHOD(Qt_Widgets_QMenu_QMenu, enterEvent);
PHP_METHOD(Qt_Widgets_QMenu_QMenu, leaveEvent);
PHP_METHOD(Qt_Widgets_QMenu_QMenu, hideEvent);
PHP_METHOD(Qt_Widgets_QMenu_QMenu, paintEvent);
PHP_METHOD(Qt_Widgets_QMenu_QMenu, actionEvent);
PHP_METHOD(Qt_Widgets_QMenu_QMenu, timerEvent);
PHP_METHOD(Qt_Widgets_QMenu_QMenu, event);
PHP_METHOD(Qt_Widgets_QMenu_QMenu, focusNextPrevChild);
PHP_METHOD(Qt_Widgets_QMenu_QMenu, initStyleOption);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qmenu_qmenu_addaction, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, action, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qmenu_qmenu_addactionqstring, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, text, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qmenu_qmenu_addactionqiconqstring, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, icon, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, text, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qmenu_qmenu_addactionqstringqobjectcharqtconnectiontype, 0, 4, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, text, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, receiver, IS_LONG, 0)
	ZEND_ARG_INFO(0, member)
	ZEND_ARG_INFO(0, type)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qmenu_qmenu_addactionqiconqstringqobjectcharqtconnectiontype, 0, 5, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, icon, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, text, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, receiver, IS_LONG, 0)
	ZEND_ARG_INFO(0, member)
	ZEND_ARG_INFO(0, type)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qmenu_qmenu_addactionqstringqkeysequence, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, text, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, shortcut, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qmenu_qmenu_addactionqiconqstringqkeysequence, 0, 4, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, icon, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, text, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, shortcut, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qmenu_qmenu_addactionqstringqkeysequenceqobjectcharqtconnectiontype, 0, 5, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, text, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, shortcut, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, receiver, IS_LONG, 0)
	ZEND_ARG_INFO(0, member)
	ZEND_ARG_INFO(0, type)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qmenu_qmenu_addactionqiconqstringqkeysequenceqobjectcharqtconnectiontype, 0, 6, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, icon, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, text, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, shortcut, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, receiver, IS_LONG, 0)
	ZEND_ARG_INFO(0, member)
	ZEND_ARG_INFO(0, type)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qmenu_qmenu_staticmetaobject, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qmenu_qmenu_tr, 0, 1, IS_STRING, 0)
	ZEND_ARG_INFO(0, s)
	ZEND_ARG_INFO(0, c)
	ZEND_ARG_TYPE_INFO(0, n, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qmenu_qmenu_new_, 0, 0, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qmenu_qmenu_newqstringqwidget, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, title, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qmenu_qmenu_addmenu, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, menu, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qmenu_qmenu_addmenuqstring, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, title, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qmenu_qmenu_addmenuqiconqstring, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, icon, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, title, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qmenu_qmenu_addseparator, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qmenu_qmenu_addsection, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, text, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qmenu_qmenu_addsectionqiconqstring, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, icon, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, text, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qmenu_qmenu_insertmenu, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, before, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, menu, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qmenu_qmenu_insertseparator, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, before, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qmenu_qmenu_insertsection, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, before, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, text, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qmenu_qmenu_insertsectionqactionqiconqstring, 0, 4, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, before, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, icon, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, text, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qmenu_qmenu_isempty, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qmenu_qmenu_clear, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qmenu_qmenu_settearoffenabled, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qmenu_qmenu_istearoffenabled, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qmenu_qmenu_istearoffmenuvisible, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qmenu_qmenu_showtearoffmenu, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qmenu_qmenu_showtearoffmenuqpoint, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, posX, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, posY, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qmenu_qmenu_hidetearoffmenu, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qmenu_qmenu_setdefaultaction, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qmenu_qmenu_defaultaction, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qmenu_qmenu_setactiveaction, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, act, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qmenu_qmenu_activeaction, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qmenu_qmenu_popup, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, posX, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, posY, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, at, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qmenu_qmenu_exec, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qmenu_qmenu_execqpointqaction, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, posX, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, posY, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, at, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qmenu_qmenu_execqlistqactionqpointqactionqwidget, 0, 3, IS_LONG, 0)
	ZEND_ARG_ARRAY_INFO(0, actions, 0)
	ZEND_ARG_TYPE_INFO(0, posX, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, posY, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, at, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qmenu_qmenu_sizehint, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qmenu_qmenu_actiongeometry, 0, 2, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qmenu_qmenu_actionat, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0X, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0Y, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qmenu_qmenu_menuaction, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qmenu_qmenu_menuinaction, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, action, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qmenu_qmenu_title, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qmenu_qmenu_settitle, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, title, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qmenu_qmenu_icon, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qmenu_qmenu_seticon, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, icon, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qmenu_qmenu_setnoreplayfor, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, widget, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qmenu_qmenu_separatorscollapsible, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qmenu_qmenu_setseparatorscollapsible, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, collapse, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qmenu_qmenu_tooltipsvisible, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qmenu_qmenu_settooltipsvisible, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, visible, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qmenu_qmenu_abouttoshow, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qmenu_qmenu_abouttohide, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qmenu_qmenu_triggered, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, action, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qmenu_qmenu_hovered, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, action, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qmenu_qmenu_columncount, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qmenu_qmenu_changeevent, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qmenu_qmenu_keypressevent, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qmenu_qmenu_mousereleaseevent, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qmenu_qmenu_mousepressevent, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qmenu_qmenu_mousemoveevent, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qmenu_qmenu_wheelevent, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qmenu_qmenu_enterevent, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qmenu_qmenu_leaveevent, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qmenu_qmenu_hideevent, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qmenu_qmenu_paintevent, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qmenu_qmenu_actionevent, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qmenu_qmenu_timerevent, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qmenu_qmenu_event, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qmenu_qmenu_focusnextprevchild, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, next, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qmenu_qmenu_initstyleoption, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, option, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, action, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_widgets_qmenu_qmenu_method_entry) {
	PHP_ME(Qt_Widgets_QMenu_QMenu, addAction, arginfo_qt_widgets_qmenu_qmenu_addaction, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QMenu_QMenu, addActionQString, arginfo_qt_widgets_qmenu_qmenu_addactionqstring, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QMenu_QMenu, addActionQIconQString, arginfo_qt_widgets_qmenu_qmenu_addactionqiconqstring, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QMenu_QMenu, addActionQStringQObjectCharQtConnectionType, arginfo_qt_widgets_qmenu_qmenu_addactionqstringqobjectcharqtconnectiontype, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QMenu_QMenu, addActionQIconQStringQObjectCharQtConnectionType, arginfo_qt_widgets_qmenu_qmenu_addactionqiconqstringqobjectcharqtconnectiontype, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QMenu_QMenu, addActionQStringQKeySequence, arginfo_qt_widgets_qmenu_qmenu_addactionqstringqkeysequence, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QMenu_QMenu, addActionQIconQStringQKeySequence, arginfo_qt_widgets_qmenu_qmenu_addactionqiconqstringqkeysequence, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QMenu_QMenu, addActionQStringQKeySequenceQObjectCharQtConnectionType, arginfo_qt_widgets_qmenu_qmenu_addactionqstringqkeysequenceqobjectcharqtconnectiontype, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QMenu_QMenu, addActionQIconQStringQKeySequenceQObjectCharQtConnectionType, arginfo_qt_widgets_qmenu_qmenu_addactionqiconqstringqkeysequenceqobjectcharqtconnectiontype, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QMenu_QMenu, staticMetaObject, arginfo_qt_widgets_qmenu_qmenu_staticmetaobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QMenu_QMenu, tr, arginfo_qt_widgets_qmenu_qmenu_tr, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QMenu_QMenu, new_, arginfo_qt_widgets_qmenu_qmenu_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QMenu_QMenu, newQStringQWidget, arginfo_qt_widgets_qmenu_qmenu_newqstringqwidget, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QMenu_QMenu, addMenu, arginfo_qt_widgets_qmenu_qmenu_addmenu, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QMenu_QMenu, addMenuQString, arginfo_qt_widgets_qmenu_qmenu_addmenuqstring, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QMenu_QMenu, addMenuQIconQString, arginfo_qt_widgets_qmenu_qmenu_addmenuqiconqstring, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QMenu_QMenu, addSeparator, arginfo_qt_widgets_qmenu_qmenu_addseparator, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QMenu_QMenu, addSection, arginfo_qt_widgets_qmenu_qmenu_addsection, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QMenu_QMenu, addSectionQIconQString, arginfo_qt_widgets_qmenu_qmenu_addsectionqiconqstring, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QMenu_QMenu, insertMenu, arginfo_qt_widgets_qmenu_qmenu_insertmenu, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QMenu_QMenu, insertSeparator, arginfo_qt_widgets_qmenu_qmenu_insertseparator, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QMenu_QMenu, insertSection, arginfo_qt_widgets_qmenu_qmenu_insertsection, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QMenu_QMenu, insertSectionQActionQIconQString, arginfo_qt_widgets_qmenu_qmenu_insertsectionqactionqiconqstring, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QMenu_QMenu, isEmpty, arginfo_qt_widgets_qmenu_qmenu_isempty, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QMenu_QMenu, clear, arginfo_qt_widgets_qmenu_qmenu_clear, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QMenu_QMenu, setTearOffEnabled, arginfo_qt_widgets_qmenu_qmenu_settearoffenabled, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QMenu_QMenu, isTearOffEnabled, arginfo_qt_widgets_qmenu_qmenu_istearoffenabled, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QMenu_QMenu, isTearOffMenuVisible, arginfo_qt_widgets_qmenu_qmenu_istearoffmenuvisible, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QMenu_QMenu, showTearOffMenu, arginfo_qt_widgets_qmenu_qmenu_showtearoffmenu, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QMenu_QMenu, showTearOffMenuQPoint, arginfo_qt_widgets_qmenu_qmenu_showtearoffmenuqpoint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QMenu_QMenu, hideTearOffMenu, arginfo_qt_widgets_qmenu_qmenu_hidetearoffmenu, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QMenu_QMenu, setDefaultAction, arginfo_qt_widgets_qmenu_qmenu_setdefaultaction, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QMenu_QMenu, defaultAction, arginfo_qt_widgets_qmenu_qmenu_defaultaction, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QMenu_QMenu, setActiveAction, arginfo_qt_widgets_qmenu_qmenu_setactiveaction, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QMenu_QMenu, activeAction, arginfo_qt_widgets_qmenu_qmenu_activeaction, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QMenu_QMenu, popup, arginfo_qt_widgets_qmenu_qmenu_popup, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QMenu_QMenu, exec, arginfo_qt_widgets_qmenu_qmenu_exec, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QMenu_QMenu, execQPointQAction, arginfo_qt_widgets_qmenu_qmenu_execqpointqaction, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QMenu_QMenu, execQListQActionQPointQActionQWidget, arginfo_qt_widgets_qmenu_qmenu_execqlistqactionqpointqactionqwidget, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QMenu_QMenu, sizeHint, arginfo_qt_widgets_qmenu_qmenu_sizehint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QMenu_QMenu, actionGeometry, arginfo_qt_widgets_qmenu_qmenu_actiongeometry, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QMenu_QMenu, actionAt, arginfo_qt_widgets_qmenu_qmenu_actionat, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QMenu_QMenu, menuAction, arginfo_qt_widgets_qmenu_qmenu_menuaction, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QMenu_QMenu, menuInAction, arginfo_qt_widgets_qmenu_qmenu_menuinaction, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QMenu_QMenu, title, arginfo_qt_widgets_qmenu_qmenu_title, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QMenu_QMenu, setTitle, arginfo_qt_widgets_qmenu_qmenu_settitle, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QMenu_QMenu, icon, arginfo_qt_widgets_qmenu_qmenu_icon, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QMenu_QMenu, setIcon, arginfo_qt_widgets_qmenu_qmenu_seticon, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QMenu_QMenu, setNoReplayFor, arginfo_qt_widgets_qmenu_qmenu_setnoreplayfor, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QMenu_QMenu, separatorsCollapsible, arginfo_qt_widgets_qmenu_qmenu_separatorscollapsible, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QMenu_QMenu, setSeparatorsCollapsible, arginfo_qt_widgets_qmenu_qmenu_setseparatorscollapsible, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QMenu_QMenu, toolTipsVisible, arginfo_qt_widgets_qmenu_qmenu_tooltipsvisible, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QMenu_QMenu, setToolTipsVisible, arginfo_qt_widgets_qmenu_qmenu_settooltipsvisible, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QMenu_QMenu, aboutToShow, arginfo_qt_widgets_qmenu_qmenu_abouttoshow, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QMenu_QMenu, aboutToHide, arginfo_qt_widgets_qmenu_qmenu_abouttohide, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QMenu_QMenu, triggered, arginfo_qt_widgets_qmenu_qmenu_triggered, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QMenu_QMenu, hovered, arginfo_qt_widgets_qmenu_qmenu_hovered, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QMenu_QMenu, columnCount, arginfo_qt_widgets_qmenu_qmenu_columncount, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QMenu_QMenu, changeEvent, arginfo_qt_widgets_qmenu_qmenu_changeevent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QMenu_QMenu, keyPressEvent, arginfo_qt_widgets_qmenu_qmenu_keypressevent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QMenu_QMenu, mouseReleaseEvent, arginfo_qt_widgets_qmenu_qmenu_mousereleaseevent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QMenu_QMenu, mousePressEvent, arginfo_qt_widgets_qmenu_qmenu_mousepressevent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QMenu_QMenu, mouseMoveEvent, arginfo_qt_widgets_qmenu_qmenu_mousemoveevent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QMenu_QMenu, wheelEvent, arginfo_qt_widgets_qmenu_qmenu_wheelevent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QMenu_QMenu, enterEvent, arginfo_qt_widgets_qmenu_qmenu_enterevent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QMenu_QMenu, leaveEvent, arginfo_qt_widgets_qmenu_qmenu_leaveevent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QMenu_QMenu, hideEvent, arginfo_qt_widgets_qmenu_qmenu_hideevent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QMenu_QMenu, paintEvent, arginfo_qt_widgets_qmenu_qmenu_paintevent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QMenu_QMenu, actionEvent, arginfo_qt_widgets_qmenu_qmenu_actionevent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QMenu_QMenu, timerEvent, arginfo_qt_widgets_qmenu_qmenu_timerevent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QMenu_QMenu, event, arginfo_qt_widgets_qmenu_qmenu_event, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QMenu_QMenu, focusNextPrevChild, arginfo_qt_widgets_qmenu_qmenu_focusnextprevchild, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QMenu_QMenu, initStyleOption, arginfo_qt_widgets_qmenu_qmenu_initstyleoption, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
