
extern zend_class_entry *qt_widgets_qmdiarea_qmdiarea_ce;

ZEPHIR_INIT_CLASS(Qt_Widgets_QMdiArea_QMdiArea);

PHP_METHOD(Qt_Widgets_QMdiArea_QMdiArea, staticMetaObject);
PHP_METHOD(Qt_Widgets_QMdiArea_QMdiArea, tr);
PHP_METHOD(Qt_Widgets_QMdiArea_QMdiArea, new_);
PHP_METHOD(Qt_Widgets_QMdiArea_QMdiArea, sizeHint);
PHP_METHOD(Qt_Widgets_QMdiArea_QMdiArea, minimumSizeHint);
PHP_METHOD(Qt_Widgets_QMdiArea_QMdiArea, currentSubWindow);
PHP_METHOD(Qt_Widgets_QMdiArea_QMdiArea, activeSubWindow);
PHP_METHOD(Qt_Widgets_QMdiArea_QMdiArea, subWindowList);
PHP_METHOD(Qt_Widgets_QMdiArea_QMdiArea, addSubWindow);
PHP_METHOD(Qt_Widgets_QMdiArea_QMdiArea, removeSubWindow);
PHP_METHOD(Qt_Widgets_QMdiArea_QMdiArea, background);
PHP_METHOD(Qt_Widgets_QMdiArea_QMdiArea, setBackground);
PHP_METHOD(Qt_Widgets_QMdiArea_QMdiArea, activationOrder);
PHP_METHOD(Qt_Widgets_QMdiArea_QMdiArea, setActivationOrder);
PHP_METHOD(Qt_Widgets_QMdiArea_QMdiArea, setOption);
PHP_METHOD(Qt_Widgets_QMdiArea_QMdiArea, testOption);
PHP_METHOD(Qt_Widgets_QMdiArea_QMdiArea, setViewMode);
PHP_METHOD(Qt_Widgets_QMdiArea_QMdiArea, viewMode);
PHP_METHOD(Qt_Widgets_QMdiArea_QMdiArea, documentMode);
PHP_METHOD(Qt_Widgets_QMdiArea_QMdiArea, setDocumentMode);
PHP_METHOD(Qt_Widgets_QMdiArea_QMdiArea, setTabsClosable);
PHP_METHOD(Qt_Widgets_QMdiArea_QMdiArea, tabsClosable);
PHP_METHOD(Qt_Widgets_QMdiArea_QMdiArea, setTabsMovable);
PHP_METHOD(Qt_Widgets_QMdiArea_QMdiArea, tabsMovable);
PHP_METHOD(Qt_Widgets_QMdiArea_QMdiArea, setTabShape);
PHP_METHOD(Qt_Widgets_QMdiArea_QMdiArea, tabShape);
PHP_METHOD(Qt_Widgets_QMdiArea_QMdiArea, setTabPosition);
PHP_METHOD(Qt_Widgets_QMdiArea_QMdiArea, tabPosition);
PHP_METHOD(Qt_Widgets_QMdiArea_QMdiArea, subWindowActivated);
PHP_METHOD(Qt_Widgets_QMdiArea_QMdiArea, setActiveSubWindow);
PHP_METHOD(Qt_Widgets_QMdiArea_QMdiArea, tileSubWindows);
PHP_METHOD(Qt_Widgets_QMdiArea_QMdiArea, cascadeSubWindows);
PHP_METHOD(Qt_Widgets_QMdiArea_QMdiArea, closeActiveSubWindow);
PHP_METHOD(Qt_Widgets_QMdiArea_QMdiArea, closeAllSubWindows);
PHP_METHOD(Qt_Widgets_QMdiArea_QMdiArea, activateNextSubWindow);
PHP_METHOD(Qt_Widgets_QMdiArea_QMdiArea, activatePreviousSubWindow);
PHP_METHOD(Qt_Widgets_QMdiArea_QMdiArea, setupViewport);
PHP_METHOD(Qt_Widgets_QMdiArea_QMdiArea, event);
PHP_METHOD(Qt_Widgets_QMdiArea_QMdiArea, eventFilter);
PHP_METHOD(Qt_Widgets_QMdiArea_QMdiArea, paintEvent);
PHP_METHOD(Qt_Widgets_QMdiArea_QMdiArea, childEvent);
PHP_METHOD(Qt_Widgets_QMdiArea_QMdiArea, resizeEvent);
PHP_METHOD(Qt_Widgets_QMdiArea_QMdiArea, timerEvent);
PHP_METHOD(Qt_Widgets_QMdiArea_QMdiArea, showEvent);
PHP_METHOD(Qt_Widgets_QMdiArea_QMdiArea, viewportEvent);
PHP_METHOD(Qt_Widgets_QMdiArea_QMdiArea, scrollContentsBy);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qmdiarea_qmdiarea_staticmetaobject, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qmdiarea_qmdiarea_tr, 0, 1, IS_STRING, 0)
	ZEND_ARG_INFO(0, s)
	ZEND_ARG_INFO(0, c)
	ZEND_ARG_TYPE_INFO(0, n, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qmdiarea_qmdiarea_new_, 0, 0, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qmdiarea_qmdiarea_sizehint, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qmdiarea_qmdiarea_minimumsizehint, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qmdiarea_qmdiarea_currentsubwindow, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qmdiarea_qmdiarea_activesubwindow, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qmdiarea_qmdiarea_subwindowlist, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_INFO(0, order)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qmdiarea_qmdiarea_addsubwindow, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, widget, IS_LONG, 0)
	ZEND_ARG_INFO(0, flags)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qmdiarea_qmdiarea_removesubwindow, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, widget, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qmdiarea_qmdiarea_background, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qmdiarea_qmdiarea_setbackground, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, background, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qmdiarea_qmdiarea_activationorder, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qmdiarea_qmdiarea_setactivationorder, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, order, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qmdiarea_qmdiarea_setoption, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, option, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, on, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qmdiarea_qmdiarea_testoption, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, opton, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qmdiarea_qmdiarea_setviewmode, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, mode, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qmdiarea_qmdiarea_viewmode, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qmdiarea_qmdiarea_documentmode, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qmdiarea_qmdiarea_setdocumentmode, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, enabled, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qmdiarea_qmdiarea_settabsclosable, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, closable, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qmdiarea_qmdiarea_tabsclosable, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qmdiarea_qmdiarea_settabsmovable, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, movable, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qmdiarea_qmdiarea_tabsmovable, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qmdiarea_qmdiarea_settabshape, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, shape, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qmdiarea_qmdiarea_tabshape, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qmdiarea_qmdiarea_settabposition, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, position, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qmdiarea_qmdiarea_tabposition, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qmdiarea_qmdiarea_subwindowactivated, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qmdiarea_qmdiarea_setactivesubwindow, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, window, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qmdiarea_qmdiarea_tilesubwindows, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qmdiarea_qmdiarea_cascadesubwindows, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qmdiarea_qmdiarea_closeactivesubwindow, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qmdiarea_qmdiarea_closeallsubwindows, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qmdiarea_qmdiarea_activatenextsubwindow, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qmdiarea_qmdiarea_activateprevioussubwindow, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qmdiarea_qmdiarea_setupviewport, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, viewport, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qmdiarea_qmdiarea_event, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, event, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qmdiarea_qmdiarea_eventfilter, 0, 3, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, object_, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, event, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qmdiarea_qmdiarea_paintevent, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, paintEvent, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qmdiarea_qmdiarea_childevent, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, childEvent, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qmdiarea_qmdiarea_resizeevent, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, resizeEvent, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qmdiarea_qmdiarea_timerevent, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, timerEvent, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qmdiarea_qmdiarea_showevent, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, showEvent, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qmdiarea_qmdiarea_viewportevent, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, event, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qmdiarea_qmdiarea_scrollcontentsby, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, dx, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, dy, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_widgets_qmdiarea_qmdiarea_method_entry) {
	PHP_ME(Qt_Widgets_QMdiArea_QMdiArea, staticMetaObject, arginfo_qt_widgets_qmdiarea_qmdiarea_staticmetaobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QMdiArea_QMdiArea, tr, arginfo_qt_widgets_qmdiarea_qmdiarea_tr, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QMdiArea_QMdiArea, new_, arginfo_qt_widgets_qmdiarea_qmdiarea_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QMdiArea_QMdiArea, sizeHint, arginfo_qt_widgets_qmdiarea_qmdiarea_sizehint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QMdiArea_QMdiArea, minimumSizeHint, arginfo_qt_widgets_qmdiarea_qmdiarea_minimumsizehint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QMdiArea_QMdiArea, currentSubWindow, arginfo_qt_widgets_qmdiarea_qmdiarea_currentsubwindow, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QMdiArea_QMdiArea, activeSubWindow, arginfo_qt_widgets_qmdiarea_qmdiarea_activesubwindow, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QMdiArea_QMdiArea, subWindowList, arginfo_qt_widgets_qmdiarea_qmdiarea_subwindowlist, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QMdiArea_QMdiArea, addSubWindow, arginfo_qt_widgets_qmdiarea_qmdiarea_addsubwindow, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QMdiArea_QMdiArea, removeSubWindow, arginfo_qt_widgets_qmdiarea_qmdiarea_removesubwindow, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QMdiArea_QMdiArea, background, arginfo_qt_widgets_qmdiarea_qmdiarea_background, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QMdiArea_QMdiArea, setBackground, arginfo_qt_widgets_qmdiarea_qmdiarea_setbackground, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QMdiArea_QMdiArea, activationOrder, arginfo_qt_widgets_qmdiarea_qmdiarea_activationorder, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QMdiArea_QMdiArea, setActivationOrder, arginfo_qt_widgets_qmdiarea_qmdiarea_setactivationorder, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QMdiArea_QMdiArea, setOption, arginfo_qt_widgets_qmdiarea_qmdiarea_setoption, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QMdiArea_QMdiArea, testOption, arginfo_qt_widgets_qmdiarea_qmdiarea_testoption, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QMdiArea_QMdiArea, setViewMode, arginfo_qt_widgets_qmdiarea_qmdiarea_setviewmode, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QMdiArea_QMdiArea, viewMode, arginfo_qt_widgets_qmdiarea_qmdiarea_viewmode, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QMdiArea_QMdiArea, documentMode, arginfo_qt_widgets_qmdiarea_qmdiarea_documentmode, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QMdiArea_QMdiArea, setDocumentMode, arginfo_qt_widgets_qmdiarea_qmdiarea_setdocumentmode, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QMdiArea_QMdiArea, setTabsClosable, arginfo_qt_widgets_qmdiarea_qmdiarea_settabsclosable, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QMdiArea_QMdiArea, tabsClosable, arginfo_qt_widgets_qmdiarea_qmdiarea_tabsclosable, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QMdiArea_QMdiArea, setTabsMovable, arginfo_qt_widgets_qmdiarea_qmdiarea_settabsmovable, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QMdiArea_QMdiArea, tabsMovable, arginfo_qt_widgets_qmdiarea_qmdiarea_tabsmovable, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QMdiArea_QMdiArea, setTabShape, arginfo_qt_widgets_qmdiarea_qmdiarea_settabshape, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QMdiArea_QMdiArea, tabShape, arginfo_qt_widgets_qmdiarea_qmdiarea_tabshape, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QMdiArea_QMdiArea, setTabPosition, arginfo_qt_widgets_qmdiarea_qmdiarea_settabposition, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QMdiArea_QMdiArea, tabPosition, arginfo_qt_widgets_qmdiarea_qmdiarea_tabposition, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QMdiArea_QMdiArea, subWindowActivated, arginfo_qt_widgets_qmdiarea_qmdiarea_subwindowactivated, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QMdiArea_QMdiArea, setActiveSubWindow, arginfo_qt_widgets_qmdiarea_qmdiarea_setactivesubwindow, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QMdiArea_QMdiArea, tileSubWindows, arginfo_qt_widgets_qmdiarea_qmdiarea_tilesubwindows, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QMdiArea_QMdiArea, cascadeSubWindows, arginfo_qt_widgets_qmdiarea_qmdiarea_cascadesubwindows, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QMdiArea_QMdiArea, closeActiveSubWindow, arginfo_qt_widgets_qmdiarea_qmdiarea_closeactivesubwindow, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QMdiArea_QMdiArea, closeAllSubWindows, arginfo_qt_widgets_qmdiarea_qmdiarea_closeallsubwindows, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QMdiArea_QMdiArea, activateNextSubWindow, arginfo_qt_widgets_qmdiarea_qmdiarea_activatenextsubwindow, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QMdiArea_QMdiArea, activatePreviousSubWindow, arginfo_qt_widgets_qmdiarea_qmdiarea_activateprevioussubwindow, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QMdiArea_QMdiArea, setupViewport, arginfo_qt_widgets_qmdiarea_qmdiarea_setupviewport, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QMdiArea_QMdiArea, event, arginfo_qt_widgets_qmdiarea_qmdiarea_event, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QMdiArea_QMdiArea, eventFilter, arginfo_qt_widgets_qmdiarea_qmdiarea_eventfilter, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QMdiArea_QMdiArea, paintEvent, arginfo_qt_widgets_qmdiarea_qmdiarea_paintevent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QMdiArea_QMdiArea, childEvent, arginfo_qt_widgets_qmdiarea_qmdiarea_childevent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QMdiArea_QMdiArea, resizeEvent, arginfo_qt_widgets_qmdiarea_qmdiarea_resizeevent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QMdiArea_QMdiArea, timerEvent, arginfo_qt_widgets_qmdiarea_qmdiarea_timerevent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QMdiArea_QMdiArea, showEvent, arginfo_qt_widgets_qmdiarea_qmdiarea_showevent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QMdiArea_QMdiArea, viewportEvent, arginfo_qt_widgets_qmdiarea_qmdiarea_viewportevent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QMdiArea_QMdiArea, scrollContentsBy, arginfo_qt_widgets_qmdiarea_qmdiarea_scrollcontentsby, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
