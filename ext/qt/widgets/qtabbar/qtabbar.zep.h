
extern zend_class_entry *qt_widgets_qtabbar_qtabbar_ce;

ZEPHIR_INIT_CLASS(Qt_Widgets_QTabBar_QTabBar);

PHP_METHOD(Qt_Widgets_QTabBar_QTabBar, staticMetaObject);
PHP_METHOD(Qt_Widgets_QTabBar_QTabBar, tr);
PHP_METHOD(Qt_Widgets_QTabBar_QTabBar, new_);
PHP_METHOD(Qt_Widgets_QTabBar_QTabBar, shape);
PHP_METHOD(Qt_Widgets_QTabBar_QTabBar, setShape);
PHP_METHOD(Qt_Widgets_QTabBar_QTabBar, addTab);
PHP_METHOD(Qt_Widgets_QTabBar_QTabBar, addTabQIconQString);
PHP_METHOD(Qt_Widgets_QTabBar_QTabBar, insertTab);
PHP_METHOD(Qt_Widgets_QTabBar_QTabBar, insertTabIntQIconQString);
PHP_METHOD(Qt_Widgets_QTabBar_QTabBar, removeTab);
PHP_METHOD(Qt_Widgets_QTabBar_QTabBar, moveTab);
PHP_METHOD(Qt_Widgets_QTabBar_QTabBar, isTabEnabled);
PHP_METHOD(Qt_Widgets_QTabBar_QTabBar, setTabEnabled);
PHP_METHOD(Qt_Widgets_QTabBar_QTabBar, isTabVisible);
PHP_METHOD(Qt_Widgets_QTabBar_QTabBar, setTabVisible);
PHP_METHOD(Qt_Widgets_QTabBar_QTabBar, tabText);
PHP_METHOD(Qt_Widgets_QTabBar_QTabBar, setTabText);
PHP_METHOD(Qt_Widgets_QTabBar_QTabBar, tabTextColor);
PHP_METHOD(Qt_Widgets_QTabBar_QTabBar, setTabTextColor);
PHP_METHOD(Qt_Widgets_QTabBar_QTabBar, tabIcon);
PHP_METHOD(Qt_Widgets_QTabBar_QTabBar, setTabIcon);
PHP_METHOD(Qt_Widgets_QTabBar_QTabBar, elideMode);
PHP_METHOD(Qt_Widgets_QTabBar_QTabBar, setElideMode);
PHP_METHOD(Qt_Widgets_QTabBar_QTabBar, setTabToolTip);
PHP_METHOD(Qt_Widgets_QTabBar_QTabBar, tabToolTip);
PHP_METHOD(Qt_Widgets_QTabBar_QTabBar, setTabWhatsThis);
PHP_METHOD(Qt_Widgets_QTabBar_QTabBar, tabWhatsThis);
PHP_METHOD(Qt_Widgets_QTabBar_QTabBar, setTabData);
PHP_METHOD(Qt_Widgets_QTabBar_QTabBar, tabData);
PHP_METHOD(Qt_Widgets_QTabBar_QTabBar, tabRect);
PHP_METHOD(Qt_Widgets_QTabBar_QTabBar, tabAt);
PHP_METHOD(Qt_Widgets_QTabBar_QTabBar, currentIndex);
PHP_METHOD(Qt_Widgets_QTabBar_QTabBar, count);
PHP_METHOD(Qt_Widgets_QTabBar_QTabBar, sizeHint);
PHP_METHOD(Qt_Widgets_QTabBar_QTabBar, minimumSizeHint);
PHP_METHOD(Qt_Widgets_QTabBar_QTabBar, setDrawBase);
PHP_METHOD(Qt_Widgets_QTabBar_QTabBar, drawBase);
PHP_METHOD(Qt_Widgets_QTabBar_QTabBar, iconSize);
PHP_METHOD(Qt_Widgets_QTabBar_QTabBar, setIconSize);
PHP_METHOD(Qt_Widgets_QTabBar_QTabBar, usesScrollButtons);
PHP_METHOD(Qt_Widgets_QTabBar_QTabBar, setUsesScrollButtons);
PHP_METHOD(Qt_Widgets_QTabBar_QTabBar, tabsClosable);
PHP_METHOD(Qt_Widgets_QTabBar_QTabBar, setTabsClosable);
PHP_METHOD(Qt_Widgets_QTabBar_QTabBar, setTabButton);
PHP_METHOD(Qt_Widgets_QTabBar_QTabBar, tabButton);
PHP_METHOD(Qt_Widgets_QTabBar_QTabBar, selectionBehaviorOnRemove);
PHP_METHOD(Qt_Widgets_QTabBar_QTabBar, setSelectionBehaviorOnRemove);
PHP_METHOD(Qt_Widgets_QTabBar_QTabBar, expanding);
PHP_METHOD(Qt_Widgets_QTabBar_QTabBar, setExpanding);
PHP_METHOD(Qt_Widgets_QTabBar_QTabBar, isMovable);
PHP_METHOD(Qt_Widgets_QTabBar_QTabBar, setMovable);
PHP_METHOD(Qt_Widgets_QTabBar_QTabBar, documentMode);
PHP_METHOD(Qt_Widgets_QTabBar_QTabBar, setDocumentMode);
PHP_METHOD(Qt_Widgets_QTabBar_QTabBar, autoHide);
PHP_METHOD(Qt_Widgets_QTabBar_QTabBar, setAutoHide);
PHP_METHOD(Qt_Widgets_QTabBar_QTabBar, changeCurrentOnDrag);
PHP_METHOD(Qt_Widgets_QTabBar_QTabBar, setChangeCurrentOnDrag);
PHP_METHOD(Qt_Widgets_QTabBar_QTabBar, accessibleTabName);
PHP_METHOD(Qt_Widgets_QTabBar_QTabBar, setAccessibleTabName);
PHP_METHOD(Qt_Widgets_QTabBar_QTabBar, setCurrentIndex);
PHP_METHOD(Qt_Widgets_QTabBar_QTabBar, currentChanged);
PHP_METHOD(Qt_Widgets_QTabBar_QTabBar, tabCloseRequested);
PHP_METHOD(Qt_Widgets_QTabBar_QTabBar, tabMoved);
PHP_METHOD(Qt_Widgets_QTabBar_QTabBar, tabBarClicked);
PHP_METHOD(Qt_Widgets_QTabBar_QTabBar, tabBarDoubleClicked);
PHP_METHOD(Qt_Widgets_QTabBar_QTabBar, tabSizeHint);
PHP_METHOD(Qt_Widgets_QTabBar_QTabBar, minimumTabSizeHint);
PHP_METHOD(Qt_Widgets_QTabBar_QTabBar, tabInserted);
PHP_METHOD(Qt_Widgets_QTabBar_QTabBar, tabRemoved);
PHP_METHOD(Qt_Widgets_QTabBar_QTabBar, tabLayoutChange);
PHP_METHOD(Qt_Widgets_QTabBar_QTabBar, event);
PHP_METHOD(Qt_Widgets_QTabBar_QTabBar, resizeEvent);
PHP_METHOD(Qt_Widgets_QTabBar_QTabBar, showEvent);
PHP_METHOD(Qt_Widgets_QTabBar_QTabBar, hideEvent);
PHP_METHOD(Qt_Widgets_QTabBar_QTabBar, paintEvent);
PHP_METHOD(Qt_Widgets_QTabBar_QTabBar, mousePressEvent);
PHP_METHOD(Qt_Widgets_QTabBar_QTabBar, mouseMoveEvent);
PHP_METHOD(Qt_Widgets_QTabBar_QTabBar, mouseReleaseEvent);
PHP_METHOD(Qt_Widgets_QTabBar_QTabBar, mouseDoubleClickEvent);
PHP_METHOD(Qt_Widgets_QTabBar_QTabBar, wheelEvent);
PHP_METHOD(Qt_Widgets_QTabBar_QTabBar, keyPressEvent);
PHP_METHOD(Qt_Widgets_QTabBar_QTabBar, changeEvent);
PHP_METHOD(Qt_Widgets_QTabBar_QTabBar, timerEvent);
PHP_METHOD(Qt_Widgets_QTabBar_QTabBar, initStyleOption);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtabbar_qtabbar_staticmetaobject, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtabbar_qtabbar_tr, 0, 1, IS_STRING, 0)
	ZEND_ARG_INFO(0, s)
	ZEND_ARG_INFO(0, c)
	ZEND_ARG_TYPE_INFO(0, n, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtabbar_qtabbar_new_, 0, 0, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtabbar_qtabbar_shape, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtabbar_qtabbar_setshape, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, shape, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtabbar_qtabbar_addtab, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, text, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtabbar_qtabbar_addtabqiconqstring, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, icon, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, text, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtabbar_qtabbar_inserttab, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, text, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtabbar_qtabbar_inserttabintqiconqstring, 0, 4, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, icon, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, text, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtabbar_qtabbar_removetab, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtabbar_qtabbar_movetab, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, from, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, to, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtabbar_qtabbar_istabenabled, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtabbar_qtabbar_settabenabled, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, enabled, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtabbar_qtabbar_istabvisible, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtabbar_qtabbar_settabvisible, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, visible, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtabbar_qtabbar_tabtext, 0, 2, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtabbar_qtabbar_settabtext, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, text, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtabbar_qtabbar_tabtextcolor, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtabbar_qtabbar_settabtextcolor, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, color, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtabbar_qtabbar_tabicon, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtabbar_qtabbar_settabicon, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, icon, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtabbar_qtabbar_elidemode, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtabbar_qtabbar_setelidemode, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, mode, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtabbar_qtabbar_settabtooltip, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, tip, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtabbar_qtabbar_tabtooltip, 0, 2, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtabbar_qtabbar_settabwhatsthis, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, text, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtabbar_qtabbar_tabwhatsthis, 0, 2, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtabbar_qtabbar_settabdata, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
	ZEND_ARG_INFO(0, data)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_qt_widgets_qtabbar_qtabbar_tabdata, 0, 0, 2)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtabbar_qtabbar_tabrect, 0, 2, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtabbar_qtabbar_tabat, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, posX, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, posY, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtabbar_qtabbar_currentindex, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtabbar_qtabbar_count, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtabbar_qtabbar_sizehint, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtabbar_qtabbar_minimumsizehint, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtabbar_qtabbar_setdrawbase, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, drawTheBase, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtabbar_qtabbar_drawbase, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtabbar_qtabbar_iconsize, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtabbar_qtabbar_seticonsize, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sizeWidth, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sizeHeight, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtabbar_qtabbar_usesscrollbuttons, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtabbar_qtabbar_setusesscrollbuttons, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, useButtons, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtabbar_qtabbar_tabsclosable, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtabbar_qtabbar_settabsclosable, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, closable, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtabbar_qtabbar_settabbutton, 0, 4, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, position, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, widget, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtabbar_qtabbar_tabbutton, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, position, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtabbar_qtabbar_selectionbehavioronremove, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtabbar_qtabbar_setselectionbehavioronremove, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, behavior, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtabbar_qtabbar_expanding, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtabbar_qtabbar_setexpanding, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, enabled, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtabbar_qtabbar_ismovable, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtabbar_qtabbar_setmovable, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, movable, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtabbar_qtabbar_documentmode, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtabbar_qtabbar_setdocumentmode, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, set, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtabbar_qtabbar_autohide, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtabbar_qtabbar_setautohide, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, hide, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtabbar_qtabbar_changecurrentondrag, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtabbar_qtabbar_setchangecurrentondrag, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, change, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtabbar_qtabbar_accessibletabname, 0, 2, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtabbar_qtabbar_setaccessibletabname, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, name, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtabbar_qtabbar_setcurrentindex, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtabbar_qtabbar_currentchanged, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtabbar_qtabbar_tabcloserequested, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtabbar_qtabbar_tabmoved, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, from, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, to, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtabbar_qtabbar_tabbarclicked, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtabbar_qtabbar_tabbardoubleclicked, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtabbar_qtabbar_tabsizehint, 0, 2, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtabbar_qtabbar_minimumtabsizehint, 0, 2, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtabbar_qtabbar_tabinserted, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtabbar_qtabbar_tabremoved, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtabbar_qtabbar_tablayoutchange, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtabbar_qtabbar_event, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtabbar_qtabbar_resizeevent, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtabbar_qtabbar_showevent, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtabbar_qtabbar_hideevent, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtabbar_qtabbar_paintevent, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtabbar_qtabbar_mousepressevent, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtabbar_qtabbar_mousemoveevent, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtabbar_qtabbar_mousereleaseevent, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtabbar_qtabbar_mousedoubleclickevent, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtabbar_qtabbar_wheelevent, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, event, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtabbar_qtabbar_keypressevent, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtabbar_qtabbar_changeevent, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtabbar_qtabbar_timerevent, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, event, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtabbar_qtabbar_initstyleoption, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, option, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, tabIndex, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_widgets_qtabbar_qtabbar_method_entry) {
	PHP_ME(Qt_Widgets_QTabBar_QTabBar, staticMetaObject, arginfo_qt_widgets_qtabbar_qtabbar_staticmetaobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTabBar_QTabBar, tr, arginfo_qt_widgets_qtabbar_qtabbar_tr, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTabBar_QTabBar, new_, arginfo_qt_widgets_qtabbar_qtabbar_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTabBar_QTabBar, shape, arginfo_qt_widgets_qtabbar_qtabbar_shape, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTabBar_QTabBar, setShape, arginfo_qt_widgets_qtabbar_qtabbar_setshape, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTabBar_QTabBar, addTab, arginfo_qt_widgets_qtabbar_qtabbar_addtab, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTabBar_QTabBar, addTabQIconQString, arginfo_qt_widgets_qtabbar_qtabbar_addtabqiconqstring, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTabBar_QTabBar, insertTab, arginfo_qt_widgets_qtabbar_qtabbar_inserttab, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTabBar_QTabBar, insertTabIntQIconQString, arginfo_qt_widgets_qtabbar_qtabbar_inserttabintqiconqstring, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTabBar_QTabBar, removeTab, arginfo_qt_widgets_qtabbar_qtabbar_removetab, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTabBar_QTabBar, moveTab, arginfo_qt_widgets_qtabbar_qtabbar_movetab, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTabBar_QTabBar, isTabEnabled, arginfo_qt_widgets_qtabbar_qtabbar_istabenabled, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTabBar_QTabBar, setTabEnabled, arginfo_qt_widgets_qtabbar_qtabbar_settabenabled, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTabBar_QTabBar, isTabVisible, arginfo_qt_widgets_qtabbar_qtabbar_istabvisible, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTabBar_QTabBar, setTabVisible, arginfo_qt_widgets_qtabbar_qtabbar_settabvisible, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTabBar_QTabBar, tabText, arginfo_qt_widgets_qtabbar_qtabbar_tabtext, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTabBar_QTabBar, setTabText, arginfo_qt_widgets_qtabbar_qtabbar_settabtext, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTabBar_QTabBar, tabTextColor, arginfo_qt_widgets_qtabbar_qtabbar_tabtextcolor, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTabBar_QTabBar, setTabTextColor, arginfo_qt_widgets_qtabbar_qtabbar_settabtextcolor, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTabBar_QTabBar, tabIcon, arginfo_qt_widgets_qtabbar_qtabbar_tabicon, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTabBar_QTabBar, setTabIcon, arginfo_qt_widgets_qtabbar_qtabbar_settabicon, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTabBar_QTabBar, elideMode, arginfo_qt_widgets_qtabbar_qtabbar_elidemode, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTabBar_QTabBar, setElideMode, arginfo_qt_widgets_qtabbar_qtabbar_setelidemode, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTabBar_QTabBar, setTabToolTip, arginfo_qt_widgets_qtabbar_qtabbar_settabtooltip, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTabBar_QTabBar, tabToolTip, arginfo_qt_widgets_qtabbar_qtabbar_tabtooltip, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTabBar_QTabBar, setTabWhatsThis, arginfo_qt_widgets_qtabbar_qtabbar_settabwhatsthis, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTabBar_QTabBar, tabWhatsThis, arginfo_qt_widgets_qtabbar_qtabbar_tabwhatsthis, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTabBar_QTabBar, setTabData, arginfo_qt_widgets_qtabbar_qtabbar_settabdata, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTabBar_QTabBar, tabData, arginfo_qt_widgets_qtabbar_qtabbar_tabdata, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTabBar_QTabBar, tabRect, arginfo_qt_widgets_qtabbar_qtabbar_tabrect, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTabBar_QTabBar, tabAt, arginfo_qt_widgets_qtabbar_qtabbar_tabat, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTabBar_QTabBar, currentIndex, arginfo_qt_widgets_qtabbar_qtabbar_currentindex, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTabBar_QTabBar, count, arginfo_qt_widgets_qtabbar_qtabbar_count, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTabBar_QTabBar, sizeHint, arginfo_qt_widgets_qtabbar_qtabbar_sizehint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTabBar_QTabBar, minimumSizeHint, arginfo_qt_widgets_qtabbar_qtabbar_minimumsizehint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTabBar_QTabBar, setDrawBase, arginfo_qt_widgets_qtabbar_qtabbar_setdrawbase, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTabBar_QTabBar, drawBase, arginfo_qt_widgets_qtabbar_qtabbar_drawbase, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTabBar_QTabBar, iconSize, arginfo_qt_widgets_qtabbar_qtabbar_iconsize, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTabBar_QTabBar, setIconSize, arginfo_qt_widgets_qtabbar_qtabbar_seticonsize, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTabBar_QTabBar, usesScrollButtons, arginfo_qt_widgets_qtabbar_qtabbar_usesscrollbuttons, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTabBar_QTabBar, setUsesScrollButtons, arginfo_qt_widgets_qtabbar_qtabbar_setusesscrollbuttons, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTabBar_QTabBar, tabsClosable, arginfo_qt_widgets_qtabbar_qtabbar_tabsclosable, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTabBar_QTabBar, setTabsClosable, arginfo_qt_widgets_qtabbar_qtabbar_settabsclosable, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTabBar_QTabBar, setTabButton, arginfo_qt_widgets_qtabbar_qtabbar_settabbutton, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTabBar_QTabBar, tabButton, arginfo_qt_widgets_qtabbar_qtabbar_tabbutton, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTabBar_QTabBar, selectionBehaviorOnRemove, arginfo_qt_widgets_qtabbar_qtabbar_selectionbehavioronremove, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTabBar_QTabBar, setSelectionBehaviorOnRemove, arginfo_qt_widgets_qtabbar_qtabbar_setselectionbehavioronremove, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTabBar_QTabBar, expanding, arginfo_qt_widgets_qtabbar_qtabbar_expanding, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTabBar_QTabBar, setExpanding, arginfo_qt_widgets_qtabbar_qtabbar_setexpanding, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTabBar_QTabBar, isMovable, arginfo_qt_widgets_qtabbar_qtabbar_ismovable, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTabBar_QTabBar, setMovable, arginfo_qt_widgets_qtabbar_qtabbar_setmovable, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTabBar_QTabBar, documentMode, arginfo_qt_widgets_qtabbar_qtabbar_documentmode, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTabBar_QTabBar, setDocumentMode, arginfo_qt_widgets_qtabbar_qtabbar_setdocumentmode, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTabBar_QTabBar, autoHide, arginfo_qt_widgets_qtabbar_qtabbar_autohide, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTabBar_QTabBar, setAutoHide, arginfo_qt_widgets_qtabbar_qtabbar_setautohide, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTabBar_QTabBar, changeCurrentOnDrag, arginfo_qt_widgets_qtabbar_qtabbar_changecurrentondrag, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTabBar_QTabBar, setChangeCurrentOnDrag, arginfo_qt_widgets_qtabbar_qtabbar_setchangecurrentondrag, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTabBar_QTabBar, accessibleTabName, arginfo_qt_widgets_qtabbar_qtabbar_accessibletabname, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTabBar_QTabBar, setAccessibleTabName, arginfo_qt_widgets_qtabbar_qtabbar_setaccessibletabname, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTabBar_QTabBar, setCurrentIndex, arginfo_qt_widgets_qtabbar_qtabbar_setcurrentindex, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTabBar_QTabBar, currentChanged, arginfo_qt_widgets_qtabbar_qtabbar_currentchanged, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTabBar_QTabBar, tabCloseRequested, arginfo_qt_widgets_qtabbar_qtabbar_tabcloserequested, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTabBar_QTabBar, tabMoved, arginfo_qt_widgets_qtabbar_qtabbar_tabmoved, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTabBar_QTabBar, tabBarClicked, arginfo_qt_widgets_qtabbar_qtabbar_tabbarclicked, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTabBar_QTabBar, tabBarDoubleClicked, arginfo_qt_widgets_qtabbar_qtabbar_tabbardoubleclicked, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTabBar_QTabBar, tabSizeHint, arginfo_qt_widgets_qtabbar_qtabbar_tabsizehint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTabBar_QTabBar, minimumTabSizeHint, arginfo_qt_widgets_qtabbar_qtabbar_minimumtabsizehint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTabBar_QTabBar, tabInserted, arginfo_qt_widgets_qtabbar_qtabbar_tabinserted, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTabBar_QTabBar, tabRemoved, arginfo_qt_widgets_qtabbar_qtabbar_tabremoved, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTabBar_QTabBar, tabLayoutChange, arginfo_qt_widgets_qtabbar_qtabbar_tablayoutchange, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTabBar_QTabBar, event, arginfo_qt_widgets_qtabbar_qtabbar_event, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTabBar_QTabBar, resizeEvent, arginfo_qt_widgets_qtabbar_qtabbar_resizeevent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTabBar_QTabBar, showEvent, arginfo_qt_widgets_qtabbar_qtabbar_showevent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTabBar_QTabBar, hideEvent, arginfo_qt_widgets_qtabbar_qtabbar_hideevent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTabBar_QTabBar, paintEvent, arginfo_qt_widgets_qtabbar_qtabbar_paintevent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTabBar_QTabBar, mousePressEvent, arginfo_qt_widgets_qtabbar_qtabbar_mousepressevent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTabBar_QTabBar, mouseMoveEvent, arginfo_qt_widgets_qtabbar_qtabbar_mousemoveevent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTabBar_QTabBar, mouseReleaseEvent, arginfo_qt_widgets_qtabbar_qtabbar_mousereleaseevent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTabBar_QTabBar, mouseDoubleClickEvent, arginfo_qt_widgets_qtabbar_qtabbar_mousedoubleclickevent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTabBar_QTabBar, wheelEvent, arginfo_qt_widgets_qtabbar_qtabbar_wheelevent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTabBar_QTabBar, keyPressEvent, arginfo_qt_widgets_qtabbar_qtabbar_keypressevent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTabBar_QTabBar, changeEvent, arginfo_qt_widgets_qtabbar_qtabbar_changeevent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTabBar_QTabBar, timerEvent, arginfo_qt_widgets_qtabbar_qtabbar_timerevent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTabBar_QTabBar, initStyleOption, arginfo_qt_widgets_qtabbar_qtabbar_initstyleoption, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
