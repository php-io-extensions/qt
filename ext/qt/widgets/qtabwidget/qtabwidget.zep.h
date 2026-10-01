
extern zend_class_entry *qt_widgets_qtabwidget_qtabwidget_ce;

ZEPHIR_INIT_CLASS(Qt_Widgets_QTabWidget_QTabWidget);

PHP_METHOD(Qt_Widgets_QTabWidget_QTabWidget, staticMetaObject);
PHP_METHOD(Qt_Widgets_QTabWidget_QTabWidget, tr);
PHP_METHOD(Qt_Widgets_QTabWidget_QTabWidget, new_);
PHP_METHOD(Qt_Widgets_QTabWidget_QTabWidget, addTab);
PHP_METHOD(Qt_Widgets_QTabWidget_QTabWidget, addTabQWidgetQIconQString);
PHP_METHOD(Qt_Widgets_QTabWidget_QTabWidget, insertTab);
PHP_METHOD(Qt_Widgets_QTabWidget_QTabWidget, insertTabIntQWidgetQIconQString);
PHP_METHOD(Qt_Widgets_QTabWidget_QTabWidget, removeTab);
PHP_METHOD(Qt_Widgets_QTabWidget_QTabWidget, isTabEnabled);
PHP_METHOD(Qt_Widgets_QTabWidget_QTabWidget, setTabEnabled);
PHP_METHOD(Qt_Widgets_QTabWidget_QTabWidget, isTabVisible);
PHP_METHOD(Qt_Widgets_QTabWidget_QTabWidget, setTabVisible);
PHP_METHOD(Qt_Widgets_QTabWidget_QTabWidget, tabText);
PHP_METHOD(Qt_Widgets_QTabWidget_QTabWidget, setTabText);
PHP_METHOD(Qt_Widgets_QTabWidget_QTabWidget, tabIcon);
PHP_METHOD(Qt_Widgets_QTabWidget_QTabWidget, setTabIcon);
PHP_METHOD(Qt_Widgets_QTabWidget_QTabWidget, setTabToolTip);
PHP_METHOD(Qt_Widgets_QTabWidget_QTabWidget, tabToolTip);
PHP_METHOD(Qt_Widgets_QTabWidget_QTabWidget, setTabWhatsThis);
PHP_METHOD(Qt_Widgets_QTabWidget_QTabWidget, tabWhatsThis);
PHP_METHOD(Qt_Widgets_QTabWidget_QTabWidget, currentIndex);
PHP_METHOD(Qt_Widgets_QTabWidget_QTabWidget, currentWidget);
PHP_METHOD(Qt_Widgets_QTabWidget_QTabWidget, widget);
PHP_METHOD(Qt_Widgets_QTabWidget_QTabWidget, indexOf);
PHP_METHOD(Qt_Widgets_QTabWidget_QTabWidget, count);
PHP_METHOD(Qt_Widgets_QTabWidget_QTabWidget, tabPosition);
PHP_METHOD(Qt_Widgets_QTabWidget_QTabWidget, setTabPosition);
PHP_METHOD(Qt_Widgets_QTabWidget_QTabWidget, tabsClosable);
PHP_METHOD(Qt_Widgets_QTabWidget_QTabWidget, setTabsClosable);
PHP_METHOD(Qt_Widgets_QTabWidget_QTabWidget, isMovable);
PHP_METHOD(Qt_Widgets_QTabWidget_QTabWidget, setMovable);
PHP_METHOD(Qt_Widgets_QTabWidget_QTabWidget, tabShape);
PHP_METHOD(Qt_Widgets_QTabWidget_QTabWidget, setTabShape);
PHP_METHOD(Qt_Widgets_QTabWidget_QTabWidget, sizeHint);
PHP_METHOD(Qt_Widgets_QTabWidget_QTabWidget, minimumSizeHint);
PHP_METHOD(Qt_Widgets_QTabWidget_QTabWidget, heightForWidth);
PHP_METHOD(Qt_Widgets_QTabWidget_QTabWidget, hasHeightForWidth);
PHP_METHOD(Qt_Widgets_QTabWidget_QTabWidget, setCornerWidget);
PHP_METHOD(Qt_Widgets_QTabWidget_QTabWidget, cornerWidget);
PHP_METHOD(Qt_Widgets_QTabWidget_QTabWidget, elideMode);
PHP_METHOD(Qt_Widgets_QTabWidget_QTabWidget, setElideMode);
PHP_METHOD(Qt_Widgets_QTabWidget_QTabWidget, iconSize);
PHP_METHOD(Qt_Widgets_QTabWidget_QTabWidget, setIconSize);
PHP_METHOD(Qt_Widgets_QTabWidget_QTabWidget, usesScrollButtons);
PHP_METHOD(Qt_Widgets_QTabWidget_QTabWidget, setUsesScrollButtons);
PHP_METHOD(Qt_Widgets_QTabWidget_QTabWidget, documentMode);
PHP_METHOD(Qt_Widgets_QTabWidget_QTabWidget, setDocumentMode);
PHP_METHOD(Qt_Widgets_QTabWidget_QTabWidget, tabBarAutoHide);
PHP_METHOD(Qt_Widgets_QTabWidget_QTabWidget, setTabBarAutoHide);
PHP_METHOD(Qt_Widgets_QTabWidget_QTabWidget, clear);
PHP_METHOD(Qt_Widgets_QTabWidget_QTabWidget, tabBar);
PHP_METHOD(Qt_Widgets_QTabWidget_QTabWidget, setCurrentIndex);
PHP_METHOD(Qt_Widgets_QTabWidget_QTabWidget, setCurrentWidget);
PHP_METHOD(Qt_Widgets_QTabWidget_QTabWidget, currentChanged);
PHP_METHOD(Qt_Widgets_QTabWidget_QTabWidget, tabCloseRequested);
PHP_METHOD(Qt_Widgets_QTabWidget_QTabWidget, tabBarClicked);
PHP_METHOD(Qt_Widgets_QTabWidget_QTabWidget, tabBarDoubleClicked);
PHP_METHOD(Qt_Widgets_QTabWidget_QTabWidget, tabInserted);
PHP_METHOD(Qt_Widgets_QTabWidget_QTabWidget, tabRemoved);
PHP_METHOD(Qt_Widgets_QTabWidget_QTabWidget, showEvent);
PHP_METHOD(Qt_Widgets_QTabWidget_QTabWidget, resizeEvent);
PHP_METHOD(Qt_Widgets_QTabWidget_QTabWidget, keyPressEvent);
PHP_METHOD(Qt_Widgets_QTabWidget_QTabWidget, paintEvent);
PHP_METHOD(Qt_Widgets_QTabWidget_QTabWidget, setTabBar);
PHP_METHOD(Qt_Widgets_QTabWidget_QTabWidget, changeEvent);
PHP_METHOD(Qt_Widgets_QTabWidget_QTabWidget, event);
PHP_METHOD(Qt_Widgets_QTabWidget_QTabWidget, initStyleOption);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtabwidget_qtabwidget_staticmetaobject, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtabwidget_qtabwidget_tr, 0, 1, IS_STRING, 0)
	ZEND_ARG_INFO(0, s)
	ZEND_ARG_INFO(0, c)
	ZEND_ARG_TYPE_INFO(0, n, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtabwidget_qtabwidget_new_, 0, 0, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtabwidget_qtabwidget_addtab, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, widget, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg1, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtabwidget_qtabwidget_addtabqwidgetqiconqstring, 0, 4, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, widget, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, icon, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, label, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtabwidget_qtabwidget_inserttab, 0, 4, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, widget, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg2, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtabwidget_qtabwidget_inserttabintqwidgetqiconqstring, 0, 5, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, widget, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, icon, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, label, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtabwidget_qtabwidget_removetab, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtabwidget_qtabwidget_istabenabled, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtabwidget_qtabwidget_settabenabled, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, enabled, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtabwidget_qtabwidget_istabvisible, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtabwidget_qtabwidget_settabvisible, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, visible, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtabwidget_qtabwidget_tabtext, 0, 2, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtabwidget_qtabwidget_settabtext, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, text, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtabwidget_qtabwidget_tabicon, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtabwidget_qtabwidget_settabicon, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, icon, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtabwidget_qtabwidget_settabtooltip, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, tip, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtabwidget_qtabwidget_tabtooltip, 0, 2, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtabwidget_qtabwidget_settabwhatsthis, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, text, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtabwidget_qtabwidget_tabwhatsthis, 0, 2, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtabwidget_qtabwidget_currentindex, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtabwidget_qtabwidget_currentwidget, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtabwidget_qtabwidget_widget, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtabwidget_qtabwidget_indexof, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, widget, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtabwidget_qtabwidget_count, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtabwidget_qtabwidget_tabposition, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtabwidget_qtabwidget_settabposition, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, position, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtabwidget_qtabwidget_tabsclosable, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtabwidget_qtabwidget_settabsclosable, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, closeable, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtabwidget_qtabwidget_ismovable, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtabwidget_qtabwidget_setmovable, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, movable, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtabwidget_qtabwidget_tabshape, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtabwidget_qtabwidget_settabshape, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, s, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtabwidget_qtabwidget_sizehint, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtabwidget_qtabwidget_minimumsizehint, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtabwidget_qtabwidget_heightforwidth, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtabwidget_qtabwidget_hasheightforwidth, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtabwidget_qtabwidget_setcornerwidget, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, w, IS_LONG, 0)
	ZEND_ARG_INFO(0, corner)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtabwidget_qtabwidget_cornerwidget, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_INFO(0, corner)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtabwidget_qtabwidget_elidemode, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtabwidget_qtabwidget_setelidemode, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, mode, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtabwidget_qtabwidget_iconsize, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtabwidget_qtabwidget_seticonsize, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sizeWidth, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sizeHeight, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtabwidget_qtabwidget_usesscrollbuttons, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtabwidget_qtabwidget_setusesscrollbuttons, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, useButtons, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtabwidget_qtabwidget_documentmode, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtabwidget_qtabwidget_setdocumentmode, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, set, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtabwidget_qtabwidget_tabbarautohide, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtabwidget_qtabwidget_settabbarautohide, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, enabled, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtabwidget_qtabwidget_clear, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtabwidget_qtabwidget_tabbar, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtabwidget_qtabwidget_setcurrentindex, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtabwidget_qtabwidget_setcurrentwidget, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, widget, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtabwidget_qtabwidget_currentchanged, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtabwidget_qtabwidget_tabcloserequested, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtabwidget_qtabwidget_tabbarclicked, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtabwidget_qtabwidget_tabbardoubleclicked, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtabwidget_qtabwidget_tabinserted, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtabwidget_qtabwidget_tabremoved, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtabwidget_qtabwidget_showevent, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtabwidget_qtabwidget_resizeevent, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtabwidget_qtabwidget_keypressevent, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtabwidget_qtabwidget_paintevent, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtabwidget_qtabwidget_settabbar, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtabwidget_qtabwidget_changeevent, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtabwidget_qtabwidget_event, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtabwidget_qtabwidget_initstyleoption, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, option, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_widgets_qtabwidget_qtabwidget_method_entry) {
	PHP_ME(Qt_Widgets_QTabWidget_QTabWidget, staticMetaObject, arginfo_qt_widgets_qtabwidget_qtabwidget_staticmetaobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTabWidget_QTabWidget, tr, arginfo_qt_widgets_qtabwidget_qtabwidget_tr, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTabWidget_QTabWidget, new_, arginfo_qt_widgets_qtabwidget_qtabwidget_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTabWidget_QTabWidget, addTab, arginfo_qt_widgets_qtabwidget_qtabwidget_addtab, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTabWidget_QTabWidget, addTabQWidgetQIconQString, arginfo_qt_widgets_qtabwidget_qtabwidget_addtabqwidgetqiconqstring, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTabWidget_QTabWidget, insertTab, arginfo_qt_widgets_qtabwidget_qtabwidget_inserttab, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTabWidget_QTabWidget, insertTabIntQWidgetQIconQString, arginfo_qt_widgets_qtabwidget_qtabwidget_inserttabintqwidgetqiconqstring, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTabWidget_QTabWidget, removeTab, arginfo_qt_widgets_qtabwidget_qtabwidget_removetab, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTabWidget_QTabWidget, isTabEnabled, arginfo_qt_widgets_qtabwidget_qtabwidget_istabenabled, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTabWidget_QTabWidget, setTabEnabled, arginfo_qt_widgets_qtabwidget_qtabwidget_settabenabled, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTabWidget_QTabWidget, isTabVisible, arginfo_qt_widgets_qtabwidget_qtabwidget_istabvisible, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTabWidget_QTabWidget, setTabVisible, arginfo_qt_widgets_qtabwidget_qtabwidget_settabvisible, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTabWidget_QTabWidget, tabText, arginfo_qt_widgets_qtabwidget_qtabwidget_tabtext, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTabWidget_QTabWidget, setTabText, arginfo_qt_widgets_qtabwidget_qtabwidget_settabtext, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTabWidget_QTabWidget, tabIcon, arginfo_qt_widgets_qtabwidget_qtabwidget_tabicon, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTabWidget_QTabWidget, setTabIcon, arginfo_qt_widgets_qtabwidget_qtabwidget_settabicon, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTabWidget_QTabWidget, setTabToolTip, arginfo_qt_widgets_qtabwidget_qtabwidget_settabtooltip, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTabWidget_QTabWidget, tabToolTip, arginfo_qt_widgets_qtabwidget_qtabwidget_tabtooltip, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTabWidget_QTabWidget, setTabWhatsThis, arginfo_qt_widgets_qtabwidget_qtabwidget_settabwhatsthis, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTabWidget_QTabWidget, tabWhatsThis, arginfo_qt_widgets_qtabwidget_qtabwidget_tabwhatsthis, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTabWidget_QTabWidget, currentIndex, arginfo_qt_widgets_qtabwidget_qtabwidget_currentindex, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTabWidget_QTabWidget, currentWidget, arginfo_qt_widgets_qtabwidget_qtabwidget_currentwidget, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTabWidget_QTabWidget, widget, arginfo_qt_widgets_qtabwidget_qtabwidget_widget, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTabWidget_QTabWidget, indexOf, arginfo_qt_widgets_qtabwidget_qtabwidget_indexof, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTabWidget_QTabWidget, count, arginfo_qt_widgets_qtabwidget_qtabwidget_count, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTabWidget_QTabWidget, tabPosition, arginfo_qt_widgets_qtabwidget_qtabwidget_tabposition, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTabWidget_QTabWidget, setTabPosition, arginfo_qt_widgets_qtabwidget_qtabwidget_settabposition, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTabWidget_QTabWidget, tabsClosable, arginfo_qt_widgets_qtabwidget_qtabwidget_tabsclosable, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTabWidget_QTabWidget, setTabsClosable, arginfo_qt_widgets_qtabwidget_qtabwidget_settabsclosable, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTabWidget_QTabWidget, isMovable, arginfo_qt_widgets_qtabwidget_qtabwidget_ismovable, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTabWidget_QTabWidget, setMovable, arginfo_qt_widgets_qtabwidget_qtabwidget_setmovable, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTabWidget_QTabWidget, tabShape, arginfo_qt_widgets_qtabwidget_qtabwidget_tabshape, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTabWidget_QTabWidget, setTabShape, arginfo_qt_widgets_qtabwidget_qtabwidget_settabshape, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTabWidget_QTabWidget, sizeHint, arginfo_qt_widgets_qtabwidget_qtabwidget_sizehint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTabWidget_QTabWidget, minimumSizeHint, arginfo_qt_widgets_qtabwidget_qtabwidget_minimumsizehint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTabWidget_QTabWidget, heightForWidth, arginfo_qt_widgets_qtabwidget_qtabwidget_heightforwidth, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTabWidget_QTabWidget, hasHeightForWidth, arginfo_qt_widgets_qtabwidget_qtabwidget_hasheightforwidth, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTabWidget_QTabWidget, setCornerWidget, arginfo_qt_widgets_qtabwidget_qtabwidget_setcornerwidget, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTabWidget_QTabWidget, cornerWidget, arginfo_qt_widgets_qtabwidget_qtabwidget_cornerwidget, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTabWidget_QTabWidget, elideMode, arginfo_qt_widgets_qtabwidget_qtabwidget_elidemode, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTabWidget_QTabWidget, setElideMode, arginfo_qt_widgets_qtabwidget_qtabwidget_setelidemode, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTabWidget_QTabWidget, iconSize, arginfo_qt_widgets_qtabwidget_qtabwidget_iconsize, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTabWidget_QTabWidget, setIconSize, arginfo_qt_widgets_qtabwidget_qtabwidget_seticonsize, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTabWidget_QTabWidget, usesScrollButtons, arginfo_qt_widgets_qtabwidget_qtabwidget_usesscrollbuttons, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTabWidget_QTabWidget, setUsesScrollButtons, arginfo_qt_widgets_qtabwidget_qtabwidget_setusesscrollbuttons, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTabWidget_QTabWidget, documentMode, arginfo_qt_widgets_qtabwidget_qtabwidget_documentmode, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTabWidget_QTabWidget, setDocumentMode, arginfo_qt_widgets_qtabwidget_qtabwidget_setdocumentmode, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTabWidget_QTabWidget, tabBarAutoHide, arginfo_qt_widgets_qtabwidget_qtabwidget_tabbarautohide, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTabWidget_QTabWidget, setTabBarAutoHide, arginfo_qt_widgets_qtabwidget_qtabwidget_settabbarautohide, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTabWidget_QTabWidget, clear, arginfo_qt_widgets_qtabwidget_qtabwidget_clear, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTabWidget_QTabWidget, tabBar, arginfo_qt_widgets_qtabwidget_qtabwidget_tabbar, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTabWidget_QTabWidget, setCurrentIndex, arginfo_qt_widgets_qtabwidget_qtabwidget_setcurrentindex, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTabWidget_QTabWidget, setCurrentWidget, arginfo_qt_widgets_qtabwidget_qtabwidget_setcurrentwidget, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTabWidget_QTabWidget, currentChanged, arginfo_qt_widgets_qtabwidget_qtabwidget_currentchanged, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTabWidget_QTabWidget, tabCloseRequested, arginfo_qt_widgets_qtabwidget_qtabwidget_tabcloserequested, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTabWidget_QTabWidget, tabBarClicked, arginfo_qt_widgets_qtabwidget_qtabwidget_tabbarclicked, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTabWidget_QTabWidget, tabBarDoubleClicked, arginfo_qt_widgets_qtabwidget_qtabwidget_tabbardoubleclicked, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTabWidget_QTabWidget, tabInserted, arginfo_qt_widgets_qtabwidget_qtabwidget_tabinserted, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTabWidget_QTabWidget, tabRemoved, arginfo_qt_widgets_qtabwidget_qtabwidget_tabremoved, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTabWidget_QTabWidget, showEvent, arginfo_qt_widgets_qtabwidget_qtabwidget_showevent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTabWidget_QTabWidget, resizeEvent, arginfo_qt_widgets_qtabwidget_qtabwidget_resizeevent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTabWidget_QTabWidget, keyPressEvent, arginfo_qt_widgets_qtabwidget_qtabwidget_keypressevent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTabWidget_QTabWidget, paintEvent, arginfo_qt_widgets_qtabwidget_qtabwidget_paintevent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTabWidget_QTabWidget, setTabBar, arginfo_qt_widgets_qtabwidget_qtabwidget_settabbar, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTabWidget_QTabWidget, changeEvent, arginfo_qt_widgets_qtabwidget_qtabwidget_changeevent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTabWidget_QTabWidget, event, arginfo_qt_widgets_qtabwidget_qtabwidget_event, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTabWidget_QTabWidget, initStyleOption, arginfo_qt_widgets_qtabwidget_qtabwidget_initstyleoption, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
