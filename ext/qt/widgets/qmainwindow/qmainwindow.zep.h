
extern zend_class_entry *qt_widgets_qmainwindow_qmainwindow_ce;

ZEPHIR_INIT_CLASS(Qt_Widgets_QMainWindow_QMainWindow);

PHP_METHOD(Qt_Widgets_QMainWindow_QMainWindow, staticMetaObject);
PHP_METHOD(Qt_Widgets_QMainWindow_QMainWindow, tr);
PHP_METHOD(Qt_Widgets_QMainWindow_QMainWindow, new_);
PHP_METHOD(Qt_Widgets_QMainWindow_QMainWindow, iconSize);
PHP_METHOD(Qt_Widgets_QMainWindow_QMainWindow, setIconSize);
PHP_METHOD(Qt_Widgets_QMainWindow_QMainWindow, toolButtonStyle);
PHP_METHOD(Qt_Widgets_QMainWindow_QMainWindow, setToolButtonStyle);
PHP_METHOD(Qt_Widgets_QMainWindow_QMainWindow, isAnimated);
PHP_METHOD(Qt_Widgets_QMainWindow_QMainWindow, isDockNestingEnabled);
PHP_METHOD(Qt_Widgets_QMainWindow_QMainWindow, documentMode);
PHP_METHOD(Qt_Widgets_QMainWindow_QMainWindow, setDocumentMode);
PHP_METHOD(Qt_Widgets_QMainWindow_QMainWindow, tabShape);
PHP_METHOD(Qt_Widgets_QMainWindow_QMainWindow, setTabShape);
PHP_METHOD(Qt_Widgets_QMainWindow_QMainWindow, tabPosition);
PHP_METHOD(Qt_Widgets_QMainWindow_QMainWindow, setTabPosition);
PHP_METHOD(Qt_Widgets_QMainWindow_QMainWindow, setDockOptions);
PHP_METHOD(Qt_Widgets_QMainWindow_QMainWindow, dockOptions);
PHP_METHOD(Qt_Widgets_QMainWindow_QMainWindow, isSeparator);
PHP_METHOD(Qt_Widgets_QMainWindow_QMainWindow, menuBar);
PHP_METHOD(Qt_Widgets_QMainWindow_QMainWindow, setMenuBar);
PHP_METHOD(Qt_Widgets_QMainWindow_QMainWindow, menuWidget);
PHP_METHOD(Qt_Widgets_QMainWindow_QMainWindow, setMenuWidget);
PHP_METHOD(Qt_Widgets_QMainWindow_QMainWindow, statusBar);
PHP_METHOD(Qt_Widgets_QMainWindow_QMainWindow, setStatusBar);
PHP_METHOD(Qt_Widgets_QMainWindow_QMainWindow, centralWidget);
PHP_METHOD(Qt_Widgets_QMainWindow_QMainWindow, setCentralWidget);
PHP_METHOD(Qt_Widgets_QMainWindow_QMainWindow, takeCentralWidget);
PHP_METHOD(Qt_Widgets_QMainWindow_QMainWindow, setCorner);
PHP_METHOD(Qt_Widgets_QMainWindow_QMainWindow, corner);
PHP_METHOD(Qt_Widgets_QMainWindow_QMainWindow, addToolBarBreak);
PHP_METHOD(Qt_Widgets_QMainWindow_QMainWindow, insertToolBarBreak);
PHP_METHOD(Qt_Widgets_QMainWindow_QMainWindow, addToolBar);
PHP_METHOD(Qt_Widgets_QMainWindow_QMainWindow, addToolBarQToolBar);
PHP_METHOD(Qt_Widgets_QMainWindow_QMainWindow, addToolBarQString);
PHP_METHOD(Qt_Widgets_QMainWindow_QMainWindow, insertToolBar);
PHP_METHOD(Qt_Widgets_QMainWindow_QMainWindow, removeToolBar);
PHP_METHOD(Qt_Widgets_QMainWindow_QMainWindow, removeToolBarBreak);
PHP_METHOD(Qt_Widgets_QMainWindow_QMainWindow, unifiedTitleAndToolBarOnMac);
PHP_METHOD(Qt_Widgets_QMainWindow_QMainWindow, toolBarArea);
PHP_METHOD(Qt_Widgets_QMainWindow_QMainWindow, toolBarBreak);
PHP_METHOD(Qt_Widgets_QMainWindow_QMainWindow, addDockWidget);
PHP_METHOD(Qt_Widgets_QMainWindow_QMainWindow, addDockWidgetQtDockWidgetAreaQDockWidgetQtOrientation);
PHP_METHOD(Qt_Widgets_QMainWindow_QMainWindow, splitDockWidget);
PHP_METHOD(Qt_Widgets_QMainWindow_QMainWindow, tabifyDockWidget);
PHP_METHOD(Qt_Widgets_QMainWindow_QMainWindow, tabifiedDockWidgets);
PHP_METHOD(Qt_Widgets_QMainWindow_QMainWindow, removeDockWidget);
PHP_METHOD(Qt_Widgets_QMainWindow_QMainWindow, restoreDockWidget);
PHP_METHOD(Qt_Widgets_QMainWindow_QMainWindow, dockWidgetArea);
PHP_METHOD(Qt_Widgets_QMainWindow_QMainWindow, resizeDocks);
PHP_METHOD(Qt_Widgets_QMainWindow_QMainWindow, saveState);
PHP_METHOD(Qt_Widgets_QMainWindow_QMainWindow, restoreState);
PHP_METHOD(Qt_Widgets_QMainWindow_QMainWindow, createPopupMenu);
PHP_METHOD(Qt_Widgets_QMainWindow_QMainWindow, setAnimated);
PHP_METHOD(Qt_Widgets_QMainWindow_QMainWindow, setDockNestingEnabled);
PHP_METHOD(Qt_Widgets_QMainWindow_QMainWindow, setUnifiedTitleAndToolBarOnMac);
PHP_METHOD(Qt_Widgets_QMainWindow_QMainWindow, iconSizeChanged);
PHP_METHOD(Qt_Widgets_QMainWindow_QMainWindow, toolButtonStyleChanged);
PHP_METHOD(Qt_Widgets_QMainWindow_QMainWindow, tabifiedDockWidgetActivated);
PHP_METHOD(Qt_Widgets_QMainWindow_QMainWindow, contextMenuEvent);
PHP_METHOD(Qt_Widgets_QMainWindow_QMainWindow, event);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qmainwindow_qmainwindow_staticmetaobject, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qmainwindow_qmainwindow_tr, 0, 1, IS_STRING, 0)
	ZEND_ARG_INFO(0, s)
	ZEND_ARG_INFO(0, c)
	ZEND_ARG_TYPE_INFO(0, n, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qmainwindow_qmainwindow_new_, 0, 0, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
	ZEND_ARG_INFO(0, flags)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qmainwindow_qmainwindow_iconsize, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qmainwindow_qmainwindow_seticonsize, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, iconSizeWidth, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, iconSizeHeight, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qmainwindow_qmainwindow_toolbuttonstyle, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qmainwindow_qmainwindow_settoolbuttonstyle, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, toolButtonStyle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qmainwindow_qmainwindow_isanimated, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qmainwindow_qmainwindow_isdocknestingenabled, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qmainwindow_qmainwindow_documentmode, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qmainwindow_qmainwindow_setdocumentmode, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, enabled, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qmainwindow_qmainwindow_tabshape, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qmainwindow_qmainwindow_settabshape, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, tabShape, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qmainwindow_qmainwindow_tabposition, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, area, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qmainwindow_qmainwindow_settabposition, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, areas, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, tabPosition, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qmainwindow_qmainwindow_setdockoptions, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, options, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qmainwindow_qmainwindow_dockoptions, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qmainwindow_qmainwindow_isseparator, 0, 3, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, posX, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, posY, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qmainwindow_qmainwindow_menubar, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qmainwindow_qmainwindow_setmenubar, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, menubar, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qmainwindow_qmainwindow_menuwidget, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qmainwindow_qmainwindow_setmenuwidget, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, menubar, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qmainwindow_qmainwindow_statusbar, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qmainwindow_qmainwindow_setstatusbar, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, statusbar, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qmainwindow_qmainwindow_centralwidget, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qmainwindow_qmainwindow_setcentralwidget, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, widget, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qmainwindow_qmainwindow_takecentralwidget, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qmainwindow_qmainwindow_setcorner, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, corner, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, area, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qmainwindow_qmainwindow_corner, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, corner, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qmainwindow_qmainwindow_addtoolbarbreak, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_INFO(0, area)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qmainwindow_qmainwindow_inserttoolbarbreak, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, before, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qmainwindow_qmainwindow_addtoolbar, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, area, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, toolbar, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qmainwindow_qmainwindow_addtoolbarqtoolbar, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, toolbar, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qmainwindow_qmainwindow_addtoolbarqstring, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, title, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qmainwindow_qmainwindow_inserttoolbar, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, before, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, toolbar, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qmainwindow_qmainwindow_removetoolbar, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, toolbar, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qmainwindow_qmainwindow_removetoolbarbreak, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, before, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qmainwindow_qmainwindow_unifiedtitleandtoolbaronmac, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qmainwindow_qmainwindow_toolbararea, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, toolbar, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qmainwindow_qmainwindow_toolbarbreak, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, toolbar, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qmainwindow_qmainwindow_adddockwidget, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, area, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, dockwidget, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qmainwindow_qmainwindow_adddockwidgetqtdockwidgetareaqdockwidgetqtorientation, 0, 4, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, area, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, dockwidget, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, orientation, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qmainwindow_qmainwindow_splitdockwidget, 0, 4, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, after, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, dockwidget, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, orientation, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qmainwindow_qmainwindow_tabifydockwidget, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, first, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, second, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qmainwindow_qmainwindow_tabifieddockwidgets, 0, 2, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, dockwidget, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qmainwindow_qmainwindow_removedockwidget, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, dockwidget, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qmainwindow_qmainwindow_restoredockwidget, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, dockwidget, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qmainwindow_qmainwindow_dockwidgetarea, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, dockwidget, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qmainwindow_qmainwindow_resizedocks, 0, 4, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_ARRAY_INFO(0, docks, 0)
	ZEND_ARG_ARRAY_INFO(0, sizes, 0)
	ZEND_ARG_TYPE_INFO(0, orientation, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qmainwindow_qmainwindow_savestate, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, version, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qmainwindow_qmainwindow_restorestate, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, state, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, version, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qmainwindow_qmainwindow_createpopupmenu, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qmainwindow_qmainwindow_setanimated, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, enabled, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qmainwindow_qmainwindow_setdocknestingenabled, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, enabled, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qmainwindow_qmainwindow_setunifiedtitleandtoolbaronmac, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, set, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qmainwindow_qmainwindow_iconsizechanged, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, iconSizeWidth, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, iconSizeHeight, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qmainwindow_qmainwindow_toolbuttonstylechanged, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, toolButtonStyle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qmainwindow_qmainwindow_tabifieddockwidgetactivated, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, dockWidget, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qmainwindow_qmainwindow_contextmenuevent, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, event, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qmainwindow_qmainwindow_event, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, event, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_widgets_qmainwindow_qmainwindow_method_entry) {
	PHP_ME(Qt_Widgets_QMainWindow_QMainWindow, staticMetaObject, arginfo_qt_widgets_qmainwindow_qmainwindow_staticmetaobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QMainWindow_QMainWindow, tr, arginfo_qt_widgets_qmainwindow_qmainwindow_tr, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QMainWindow_QMainWindow, new_, arginfo_qt_widgets_qmainwindow_qmainwindow_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QMainWindow_QMainWindow, iconSize, arginfo_qt_widgets_qmainwindow_qmainwindow_iconsize, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QMainWindow_QMainWindow, setIconSize, arginfo_qt_widgets_qmainwindow_qmainwindow_seticonsize, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QMainWindow_QMainWindow, toolButtonStyle, arginfo_qt_widgets_qmainwindow_qmainwindow_toolbuttonstyle, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QMainWindow_QMainWindow, setToolButtonStyle, arginfo_qt_widgets_qmainwindow_qmainwindow_settoolbuttonstyle, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QMainWindow_QMainWindow, isAnimated, arginfo_qt_widgets_qmainwindow_qmainwindow_isanimated, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QMainWindow_QMainWindow, isDockNestingEnabled, arginfo_qt_widgets_qmainwindow_qmainwindow_isdocknestingenabled, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QMainWindow_QMainWindow, documentMode, arginfo_qt_widgets_qmainwindow_qmainwindow_documentmode, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QMainWindow_QMainWindow, setDocumentMode, arginfo_qt_widgets_qmainwindow_qmainwindow_setdocumentmode, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QMainWindow_QMainWindow, tabShape, arginfo_qt_widgets_qmainwindow_qmainwindow_tabshape, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QMainWindow_QMainWindow, setTabShape, arginfo_qt_widgets_qmainwindow_qmainwindow_settabshape, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QMainWindow_QMainWindow, tabPosition, arginfo_qt_widgets_qmainwindow_qmainwindow_tabposition, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QMainWindow_QMainWindow, setTabPosition, arginfo_qt_widgets_qmainwindow_qmainwindow_settabposition, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QMainWindow_QMainWindow, setDockOptions, arginfo_qt_widgets_qmainwindow_qmainwindow_setdockoptions, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QMainWindow_QMainWindow, dockOptions, arginfo_qt_widgets_qmainwindow_qmainwindow_dockoptions, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QMainWindow_QMainWindow, isSeparator, arginfo_qt_widgets_qmainwindow_qmainwindow_isseparator, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QMainWindow_QMainWindow, menuBar, arginfo_qt_widgets_qmainwindow_qmainwindow_menubar, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QMainWindow_QMainWindow, setMenuBar, arginfo_qt_widgets_qmainwindow_qmainwindow_setmenubar, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QMainWindow_QMainWindow, menuWidget, arginfo_qt_widgets_qmainwindow_qmainwindow_menuwidget, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QMainWindow_QMainWindow, setMenuWidget, arginfo_qt_widgets_qmainwindow_qmainwindow_setmenuwidget, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QMainWindow_QMainWindow, statusBar, arginfo_qt_widgets_qmainwindow_qmainwindow_statusbar, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QMainWindow_QMainWindow, setStatusBar, arginfo_qt_widgets_qmainwindow_qmainwindow_setstatusbar, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QMainWindow_QMainWindow, centralWidget, arginfo_qt_widgets_qmainwindow_qmainwindow_centralwidget, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QMainWindow_QMainWindow, setCentralWidget, arginfo_qt_widgets_qmainwindow_qmainwindow_setcentralwidget, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QMainWindow_QMainWindow, takeCentralWidget, arginfo_qt_widgets_qmainwindow_qmainwindow_takecentralwidget, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QMainWindow_QMainWindow, setCorner, arginfo_qt_widgets_qmainwindow_qmainwindow_setcorner, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QMainWindow_QMainWindow, corner, arginfo_qt_widgets_qmainwindow_qmainwindow_corner, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QMainWindow_QMainWindow, addToolBarBreak, arginfo_qt_widgets_qmainwindow_qmainwindow_addtoolbarbreak, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QMainWindow_QMainWindow, insertToolBarBreak, arginfo_qt_widgets_qmainwindow_qmainwindow_inserttoolbarbreak, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QMainWindow_QMainWindow, addToolBar, arginfo_qt_widgets_qmainwindow_qmainwindow_addtoolbar, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QMainWindow_QMainWindow, addToolBarQToolBar, arginfo_qt_widgets_qmainwindow_qmainwindow_addtoolbarqtoolbar, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QMainWindow_QMainWindow, addToolBarQString, arginfo_qt_widgets_qmainwindow_qmainwindow_addtoolbarqstring, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QMainWindow_QMainWindow, insertToolBar, arginfo_qt_widgets_qmainwindow_qmainwindow_inserttoolbar, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QMainWindow_QMainWindow, removeToolBar, arginfo_qt_widgets_qmainwindow_qmainwindow_removetoolbar, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QMainWindow_QMainWindow, removeToolBarBreak, arginfo_qt_widgets_qmainwindow_qmainwindow_removetoolbarbreak, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QMainWindow_QMainWindow, unifiedTitleAndToolBarOnMac, arginfo_qt_widgets_qmainwindow_qmainwindow_unifiedtitleandtoolbaronmac, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QMainWindow_QMainWindow, toolBarArea, arginfo_qt_widgets_qmainwindow_qmainwindow_toolbararea, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QMainWindow_QMainWindow, toolBarBreak, arginfo_qt_widgets_qmainwindow_qmainwindow_toolbarbreak, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QMainWindow_QMainWindow, addDockWidget, arginfo_qt_widgets_qmainwindow_qmainwindow_adddockwidget, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QMainWindow_QMainWindow, addDockWidgetQtDockWidgetAreaQDockWidgetQtOrientation, arginfo_qt_widgets_qmainwindow_qmainwindow_adddockwidgetqtdockwidgetareaqdockwidgetqtorientation, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QMainWindow_QMainWindow, splitDockWidget, arginfo_qt_widgets_qmainwindow_qmainwindow_splitdockwidget, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QMainWindow_QMainWindow, tabifyDockWidget, arginfo_qt_widgets_qmainwindow_qmainwindow_tabifydockwidget, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QMainWindow_QMainWindow, tabifiedDockWidgets, arginfo_qt_widgets_qmainwindow_qmainwindow_tabifieddockwidgets, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QMainWindow_QMainWindow, removeDockWidget, arginfo_qt_widgets_qmainwindow_qmainwindow_removedockwidget, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QMainWindow_QMainWindow, restoreDockWidget, arginfo_qt_widgets_qmainwindow_qmainwindow_restoredockwidget, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QMainWindow_QMainWindow, dockWidgetArea, arginfo_qt_widgets_qmainwindow_qmainwindow_dockwidgetarea, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QMainWindow_QMainWindow, resizeDocks, arginfo_qt_widgets_qmainwindow_qmainwindow_resizedocks, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QMainWindow_QMainWindow, saveState, arginfo_qt_widgets_qmainwindow_qmainwindow_savestate, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QMainWindow_QMainWindow, restoreState, arginfo_qt_widgets_qmainwindow_qmainwindow_restorestate, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QMainWindow_QMainWindow, createPopupMenu, arginfo_qt_widgets_qmainwindow_qmainwindow_createpopupmenu, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QMainWindow_QMainWindow, setAnimated, arginfo_qt_widgets_qmainwindow_qmainwindow_setanimated, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QMainWindow_QMainWindow, setDockNestingEnabled, arginfo_qt_widgets_qmainwindow_qmainwindow_setdocknestingenabled, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QMainWindow_QMainWindow, setUnifiedTitleAndToolBarOnMac, arginfo_qt_widgets_qmainwindow_qmainwindow_setunifiedtitleandtoolbaronmac, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QMainWindow_QMainWindow, iconSizeChanged, arginfo_qt_widgets_qmainwindow_qmainwindow_iconsizechanged, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QMainWindow_QMainWindow, toolButtonStyleChanged, arginfo_qt_widgets_qmainwindow_qmainwindow_toolbuttonstylechanged, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QMainWindow_QMainWindow, tabifiedDockWidgetActivated, arginfo_qt_widgets_qmainwindow_qmainwindow_tabifieddockwidgetactivated, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QMainWindow_QMainWindow, contextMenuEvent, arginfo_qt_widgets_qmainwindow_qmainwindow_contextmenuevent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QMainWindow_QMainWindow, event, arginfo_qt_widgets_qmainwindow_qmainwindow_event, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
