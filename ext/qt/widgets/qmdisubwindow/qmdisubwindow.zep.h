
extern zend_class_entry *qt_widgets_qmdisubwindow_qmdisubwindow_ce;

ZEPHIR_INIT_CLASS(Qt_Widgets_QMdiSubWindow_QMdiSubWindow);

PHP_METHOD(Qt_Widgets_QMdiSubWindow_QMdiSubWindow, staticMetaObject);
PHP_METHOD(Qt_Widgets_QMdiSubWindow_QMdiSubWindow, tr);
PHP_METHOD(Qt_Widgets_QMdiSubWindow_QMdiSubWindow, new_);
PHP_METHOD(Qt_Widgets_QMdiSubWindow_QMdiSubWindow, sizeHint);
PHP_METHOD(Qt_Widgets_QMdiSubWindow_QMdiSubWindow, minimumSizeHint);
PHP_METHOD(Qt_Widgets_QMdiSubWindow_QMdiSubWindow, setWidget);
PHP_METHOD(Qt_Widgets_QMdiSubWindow_QMdiSubWindow, widget);
PHP_METHOD(Qt_Widgets_QMdiSubWindow_QMdiSubWindow, maximizedButtonsWidget);
PHP_METHOD(Qt_Widgets_QMdiSubWindow_QMdiSubWindow, maximizedSystemMenuIconWidget);
PHP_METHOD(Qt_Widgets_QMdiSubWindow_QMdiSubWindow, isShaded);
PHP_METHOD(Qt_Widgets_QMdiSubWindow_QMdiSubWindow, setOption);
PHP_METHOD(Qt_Widgets_QMdiSubWindow_QMdiSubWindow, testOption);
PHP_METHOD(Qt_Widgets_QMdiSubWindow_QMdiSubWindow, setKeyboardSingleStep);
PHP_METHOD(Qt_Widgets_QMdiSubWindow_QMdiSubWindow, keyboardSingleStep);
PHP_METHOD(Qt_Widgets_QMdiSubWindow_QMdiSubWindow, setKeyboardPageStep);
PHP_METHOD(Qt_Widgets_QMdiSubWindow_QMdiSubWindow, keyboardPageStep);
PHP_METHOD(Qt_Widgets_QMdiSubWindow_QMdiSubWindow, setSystemMenu);
PHP_METHOD(Qt_Widgets_QMdiSubWindow_QMdiSubWindow, systemMenu);
PHP_METHOD(Qt_Widgets_QMdiSubWindow_QMdiSubWindow, mdiArea);
PHP_METHOD(Qt_Widgets_QMdiSubWindow_QMdiSubWindow, windowStateChanged);
PHP_METHOD(Qt_Widgets_QMdiSubWindow_QMdiSubWindow, aboutToActivate);
PHP_METHOD(Qt_Widgets_QMdiSubWindow_QMdiSubWindow, showSystemMenu);
PHP_METHOD(Qt_Widgets_QMdiSubWindow_QMdiSubWindow, showShaded);
PHP_METHOD(Qt_Widgets_QMdiSubWindow_QMdiSubWindow, eventFilter);
PHP_METHOD(Qt_Widgets_QMdiSubWindow_QMdiSubWindow, event);
PHP_METHOD(Qt_Widgets_QMdiSubWindow_QMdiSubWindow, showEvent);
PHP_METHOD(Qt_Widgets_QMdiSubWindow_QMdiSubWindow, hideEvent);
PHP_METHOD(Qt_Widgets_QMdiSubWindow_QMdiSubWindow, changeEvent);
PHP_METHOD(Qt_Widgets_QMdiSubWindow_QMdiSubWindow, closeEvent);
PHP_METHOD(Qt_Widgets_QMdiSubWindow_QMdiSubWindow, leaveEvent);
PHP_METHOD(Qt_Widgets_QMdiSubWindow_QMdiSubWindow, resizeEvent);
PHP_METHOD(Qt_Widgets_QMdiSubWindow_QMdiSubWindow, timerEvent);
PHP_METHOD(Qt_Widgets_QMdiSubWindow_QMdiSubWindow, moveEvent);
PHP_METHOD(Qt_Widgets_QMdiSubWindow_QMdiSubWindow, paintEvent);
PHP_METHOD(Qt_Widgets_QMdiSubWindow_QMdiSubWindow, mousePressEvent);
PHP_METHOD(Qt_Widgets_QMdiSubWindow_QMdiSubWindow, mouseDoubleClickEvent);
PHP_METHOD(Qt_Widgets_QMdiSubWindow_QMdiSubWindow, mouseReleaseEvent);
PHP_METHOD(Qt_Widgets_QMdiSubWindow_QMdiSubWindow, mouseMoveEvent);
PHP_METHOD(Qt_Widgets_QMdiSubWindow_QMdiSubWindow, keyPressEvent);
PHP_METHOD(Qt_Widgets_QMdiSubWindow_QMdiSubWindow, contextMenuEvent);
PHP_METHOD(Qt_Widgets_QMdiSubWindow_QMdiSubWindow, focusInEvent);
PHP_METHOD(Qt_Widgets_QMdiSubWindow_QMdiSubWindow, focusOutEvent);
PHP_METHOD(Qt_Widgets_QMdiSubWindow_QMdiSubWindow, childEvent);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qmdisubwindow_qmdisubwindow_staticmetaobject, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qmdisubwindow_qmdisubwindow_tr, 0, 1, IS_STRING, 0)
	ZEND_ARG_INFO(0, s)
	ZEND_ARG_INFO(0, c)
	ZEND_ARG_TYPE_INFO(0, n, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qmdisubwindow_qmdisubwindow_new_, 0, 0, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
	ZEND_ARG_INFO(0, flags)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qmdisubwindow_qmdisubwindow_sizehint, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qmdisubwindow_qmdisubwindow_minimumsizehint, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qmdisubwindow_qmdisubwindow_setwidget, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, widget, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qmdisubwindow_qmdisubwindow_widget, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qmdisubwindow_qmdisubwindow_maximizedbuttonswidget, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qmdisubwindow_qmdisubwindow_maximizedsystemmenuiconwidget, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qmdisubwindow_qmdisubwindow_isshaded, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qmdisubwindow_qmdisubwindow_setoption, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, option, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, on, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qmdisubwindow_qmdisubwindow_testoption, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qmdisubwindow_qmdisubwindow_setkeyboardsinglestep, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, step, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qmdisubwindow_qmdisubwindow_keyboardsinglestep, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qmdisubwindow_qmdisubwindow_setkeyboardpagestep, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, step, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qmdisubwindow_qmdisubwindow_keyboardpagestep, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qmdisubwindow_qmdisubwindow_setsystemmenu, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, systemMenu, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qmdisubwindow_qmdisubwindow_systemmenu, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qmdisubwindow_qmdisubwindow_mdiarea, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qmdisubwindow_qmdisubwindow_windowstatechanged, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, oldState, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, newState, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qmdisubwindow_qmdisubwindow_abouttoactivate, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qmdisubwindow_qmdisubwindow_showsystemmenu, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qmdisubwindow_qmdisubwindow_showshaded, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qmdisubwindow_qmdisubwindow_eventfilter, 0, 3, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, object_, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, event, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qmdisubwindow_qmdisubwindow_event, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, event, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qmdisubwindow_qmdisubwindow_showevent, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, showEvent, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qmdisubwindow_qmdisubwindow_hideevent, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, hideEvent, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qmdisubwindow_qmdisubwindow_changeevent, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, changeEvent, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qmdisubwindow_qmdisubwindow_closeevent, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, closeEvent, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qmdisubwindow_qmdisubwindow_leaveevent, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, leaveEvent, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qmdisubwindow_qmdisubwindow_resizeevent, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, resizeEvent, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qmdisubwindow_qmdisubwindow_timerevent, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, timerEvent, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qmdisubwindow_qmdisubwindow_moveevent, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, moveEvent, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qmdisubwindow_qmdisubwindow_paintevent, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, paintEvent, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qmdisubwindow_qmdisubwindow_mousepressevent, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, mouseEvent, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qmdisubwindow_qmdisubwindow_mousedoubleclickevent, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, mouseEvent, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qmdisubwindow_qmdisubwindow_mousereleaseevent, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, mouseEvent, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qmdisubwindow_qmdisubwindow_mousemoveevent, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, mouseEvent, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qmdisubwindow_qmdisubwindow_keypressevent, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, keyEvent, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qmdisubwindow_qmdisubwindow_contextmenuevent, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, contextMenuEvent, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qmdisubwindow_qmdisubwindow_focusinevent, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, focusInEvent, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qmdisubwindow_qmdisubwindow_focusoutevent, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, focusOutEvent, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qmdisubwindow_qmdisubwindow_childevent, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, childEvent, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_widgets_qmdisubwindow_qmdisubwindow_method_entry) {
	PHP_ME(Qt_Widgets_QMdiSubWindow_QMdiSubWindow, staticMetaObject, arginfo_qt_widgets_qmdisubwindow_qmdisubwindow_staticmetaobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QMdiSubWindow_QMdiSubWindow, tr, arginfo_qt_widgets_qmdisubwindow_qmdisubwindow_tr, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QMdiSubWindow_QMdiSubWindow, new_, arginfo_qt_widgets_qmdisubwindow_qmdisubwindow_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QMdiSubWindow_QMdiSubWindow, sizeHint, arginfo_qt_widgets_qmdisubwindow_qmdisubwindow_sizehint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QMdiSubWindow_QMdiSubWindow, minimumSizeHint, arginfo_qt_widgets_qmdisubwindow_qmdisubwindow_minimumsizehint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QMdiSubWindow_QMdiSubWindow, setWidget, arginfo_qt_widgets_qmdisubwindow_qmdisubwindow_setwidget, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QMdiSubWindow_QMdiSubWindow, widget, arginfo_qt_widgets_qmdisubwindow_qmdisubwindow_widget, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QMdiSubWindow_QMdiSubWindow, maximizedButtonsWidget, arginfo_qt_widgets_qmdisubwindow_qmdisubwindow_maximizedbuttonswidget, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QMdiSubWindow_QMdiSubWindow, maximizedSystemMenuIconWidget, arginfo_qt_widgets_qmdisubwindow_qmdisubwindow_maximizedsystemmenuiconwidget, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QMdiSubWindow_QMdiSubWindow, isShaded, arginfo_qt_widgets_qmdisubwindow_qmdisubwindow_isshaded, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QMdiSubWindow_QMdiSubWindow, setOption, arginfo_qt_widgets_qmdisubwindow_qmdisubwindow_setoption, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QMdiSubWindow_QMdiSubWindow, testOption, arginfo_qt_widgets_qmdisubwindow_qmdisubwindow_testoption, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QMdiSubWindow_QMdiSubWindow, setKeyboardSingleStep, arginfo_qt_widgets_qmdisubwindow_qmdisubwindow_setkeyboardsinglestep, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QMdiSubWindow_QMdiSubWindow, keyboardSingleStep, arginfo_qt_widgets_qmdisubwindow_qmdisubwindow_keyboardsinglestep, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QMdiSubWindow_QMdiSubWindow, setKeyboardPageStep, arginfo_qt_widgets_qmdisubwindow_qmdisubwindow_setkeyboardpagestep, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QMdiSubWindow_QMdiSubWindow, keyboardPageStep, arginfo_qt_widgets_qmdisubwindow_qmdisubwindow_keyboardpagestep, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QMdiSubWindow_QMdiSubWindow, setSystemMenu, arginfo_qt_widgets_qmdisubwindow_qmdisubwindow_setsystemmenu, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QMdiSubWindow_QMdiSubWindow, systemMenu, arginfo_qt_widgets_qmdisubwindow_qmdisubwindow_systemmenu, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QMdiSubWindow_QMdiSubWindow, mdiArea, arginfo_qt_widgets_qmdisubwindow_qmdisubwindow_mdiarea, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QMdiSubWindow_QMdiSubWindow, windowStateChanged, arginfo_qt_widgets_qmdisubwindow_qmdisubwindow_windowstatechanged, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QMdiSubWindow_QMdiSubWindow, aboutToActivate, arginfo_qt_widgets_qmdisubwindow_qmdisubwindow_abouttoactivate, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QMdiSubWindow_QMdiSubWindow, showSystemMenu, arginfo_qt_widgets_qmdisubwindow_qmdisubwindow_showsystemmenu, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QMdiSubWindow_QMdiSubWindow, showShaded, arginfo_qt_widgets_qmdisubwindow_qmdisubwindow_showshaded, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QMdiSubWindow_QMdiSubWindow, eventFilter, arginfo_qt_widgets_qmdisubwindow_qmdisubwindow_eventfilter, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QMdiSubWindow_QMdiSubWindow, event, arginfo_qt_widgets_qmdisubwindow_qmdisubwindow_event, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QMdiSubWindow_QMdiSubWindow, showEvent, arginfo_qt_widgets_qmdisubwindow_qmdisubwindow_showevent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QMdiSubWindow_QMdiSubWindow, hideEvent, arginfo_qt_widgets_qmdisubwindow_qmdisubwindow_hideevent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QMdiSubWindow_QMdiSubWindow, changeEvent, arginfo_qt_widgets_qmdisubwindow_qmdisubwindow_changeevent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QMdiSubWindow_QMdiSubWindow, closeEvent, arginfo_qt_widgets_qmdisubwindow_qmdisubwindow_closeevent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QMdiSubWindow_QMdiSubWindow, leaveEvent, arginfo_qt_widgets_qmdisubwindow_qmdisubwindow_leaveevent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QMdiSubWindow_QMdiSubWindow, resizeEvent, arginfo_qt_widgets_qmdisubwindow_qmdisubwindow_resizeevent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QMdiSubWindow_QMdiSubWindow, timerEvent, arginfo_qt_widgets_qmdisubwindow_qmdisubwindow_timerevent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QMdiSubWindow_QMdiSubWindow, moveEvent, arginfo_qt_widgets_qmdisubwindow_qmdisubwindow_moveevent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QMdiSubWindow_QMdiSubWindow, paintEvent, arginfo_qt_widgets_qmdisubwindow_qmdisubwindow_paintevent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QMdiSubWindow_QMdiSubWindow, mousePressEvent, arginfo_qt_widgets_qmdisubwindow_qmdisubwindow_mousepressevent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QMdiSubWindow_QMdiSubWindow, mouseDoubleClickEvent, arginfo_qt_widgets_qmdisubwindow_qmdisubwindow_mousedoubleclickevent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QMdiSubWindow_QMdiSubWindow, mouseReleaseEvent, arginfo_qt_widgets_qmdisubwindow_qmdisubwindow_mousereleaseevent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QMdiSubWindow_QMdiSubWindow, mouseMoveEvent, arginfo_qt_widgets_qmdisubwindow_qmdisubwindow_mousemoveevent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QMdiSubWindow_QMdiSubWindow, keyPressEvent, arginfo_qt_widgets_qmdisubwindow_qmdisubwindow_keypressevent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QMdiSubWindow_QMdiSubWindow, contextMenuEvent, arginfo_qt_widgets_qmdisubwindow_qmdisubwindow_contextmenuevent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QMdiSubWindow_QMdiSubWindow, focusInEvent, arginfo_qt_widgets_qmdisubwindow_qmdisubwindow_focusinevent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QMdiSubWindow_QMdiSubWindow, focusOutEvent, arginfo_qt_widgets_qmdisubwindow_qmdisubwindow_focusoutevent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QMdiSubWindow_QMdiSubWindow, childEvent, arginfo_qt_widgets_qmdisubwindow_qmdisubwindow_childevent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
