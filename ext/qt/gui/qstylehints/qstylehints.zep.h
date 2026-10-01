
extern zend_class_entry *qt_gui_qstylehints_qstylehints_ce;

ZEPHIR_INIT_CLASS(Qt_Gui_QStyleHints_QStyleHints);

PHP_METHOD(Qt_Gui_QStyleHints_QStyleHints, staticMetaObject);
PHP_METHOD(Qt_Gui_QStyleHints_QStyleHints, tr);
PHP_METHOD(Qt_Gui_QStyleHints_QStyleHints, setMouseDoubleClickInterval);
PHP_METHOD(Qt_Gui_QStyleHints_QStyleHints, mouseDoubleClickInterval);
PHP_METHOD(Qt_Gui_QStyleHints_QStyleHints, mouseDoubleClickDistance);
PHP_METHOD(Qt_Gui_QStyleHints_QStyleHints, touchDoubleTapDistance);
PHP_METHOD(Qt_Gui_QStyleHints_QStyleHints, setMousePressAndHoldInterval);
PHP_METHOD(Qt_Gui_QStyleHints_QStyleHints, mousePressAndHoldInterval);
PHP_METHOD(Qt_Gui_QStyleHints_QStyleHints, setStartDragDistance);
PHP_METHOD(Qt_Gui_QStyleHints_QStyleHints, startDragDistance);
PHP_METHOD(Qt_Gui_QStyleHints_QStyleHints, setStartDragTime);
PHP_METHOD(Qt_Gui_QStyleHints_QStyleHints, startDragTime);
PHP_METHOD(Qt_Gui_QStyleHints_QStyleHints, startDragVelocity);
PHP_METHOD(Qt_Gui_QStyleHints_QStyleHints, setKeyboardInputInterval);
PHP_METHOD(Qt_Gui_QStyleHints_QStyleHints, keyboardInputInterval);
PHP_METHOD(Qt_Gui_QStyleHints_QStyleHints, keyboardAutoRepeatRateF);
PHP_METHOD(Qt_Gui_QStyleHints_QStyleHints, setCursorFlashTime);
PHP_METHOD(Qt_Gui_QStyleHints_QStyleHints, cursorFlashTime);
PHP_METHOD(Qt_Gui_QStyleHints_QStyleHints, showIsFullScreen);
PHP_METHOD(Qt_Gui_QStyleHints_QStyleHints, showIsMaximized);
PHP_METHOD(Qt_Gui_QStyleHints_QStyleHints, showShortcutsInContextMenus);
PHP_METHOD(Qt_Gui_QStyleHints_QStyleHints, setShowShortcutsInContextMenus);
PHP_METHOD(Qt_Gui_QStyleHints_QStyleHints, contextMenuTrigger);
PHP_METHOD(Qt_Gui_QStyleHints_QStyleHints, setContextMenuTrigger);
PHP_METHOD(Qt_Gui_QStyleHints_QStyleHints, passwordMaskDelay);
PHP_METHOD(Qt_Gui_QStyleHints_QStyleHints, passwordMaskCharacter);
PHP_METHOD(Qt_Gui_QStyleHints_QStyleHints, fontSmoothingGamma);
PHP_METHOD(Qt_Gui_QStyleHints_QStyleHints, useRtlExtensions);
PHP_METHOD(Qt_Gui_QStyleHints_QStyleHints, setFocusOnTouchRelease);
PHP_METHOD(Qt_Gui_QStyleHints_QStyleHints, tabFocusBehavior);
PHP_METHOD(Qt_Gui_QStyleHints_QStyleHints, setTabFocusBehavior);
PHP_METHOD(Qt_Gui_QStyleHints_QStyleHints, singleClickActivation);
PHP_METHOD(Qt_Gui_QStyleHints_QStyleHints, useHoverEffects);
PHP_METHOD(Qt_Gui_QStyleHints_QStyleHints, setUseHoverEffects);
PHP_METHOD(Qt_Gui_QStyleHints_QStyleHints, wheelScrollLines);
PHP_METHOD(Qt_Gui_QStyleHints_QStyleHints, setWheelScrollLines);
PHP_METHOD(Qt_Gui_QStyleHints_QStyleHints, setMouseQuickSelectionThreshold);
PHP_METHOD(Qt_Gui_QStyleHints_QStyleHints, mouseQuickSelectionThreshold);
PHP_METHOD(Qt_Gui_QStyleHints_QStyleHints, colorScheme);
PHP_METHOD(Qt_Gui_QStyleHints_QStyleHints, setColorScheme);
PHP_METHOD(Qt_Gui_QStyleHints_QStyleHints, unsetColorScheme);
PHP_METHOD(Qt_Gui_QStyleHints_QStyleHints, cursorFlashTimeChanged);
PHP_METHOD(Qt_Gui_QStyleHints_QStyleHints, keyboardInputIntervalChanged);
PHP_METHOD(Qt_Gui_QStyleHints_QStyleHints, mouseDoubleClickIntervalChanged);
PHP_METHOD(Qt_Gui_QStyleHints_QStyleHints, mousePressAndHoldIntervalChanged);
PHP_METHOD(Qt_Gui_QStyleHints_QStyleHints, startDragDistanceChanged);
PHP_METHOD(Qt_Gui_QStyleHints_QStyleHints, startDragTimeChanged);
PHP_METHOD(Qt_Gui_QStyleHints_QStyleHints, tabFocusBehaviorChanged);
PHP_METHOD(Qt_Gui_QStyleHints_QStyleHints, useHoverEffectsChanged);
PHP_METHOD(Qt_Gui_QStyleHints_QStyleHints, showShortcutsInContextMenusChanged);
PHP_METHOD(Qt_Gui_QStyleHints_QStyleHints, contextMenuTriggerChanged);
PHP_METHOD(Qt_Gui_QStyleHints_QStyleHints, wheelScrollLinesChanged);
PHP_METHOD(Qt_Gui_QStyleHints_QStyleHints, mouseQuickSelectionThresholdChanged);
PHP_METHOD(Qt_Gui_QStyleHints_QStyleHints, colorSchemeChanged);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qstylehints_qstylehints_staticmetaobject, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qstylehints_qstylehints_tr, 0, 1, IS_STRING, 0)
	ZEND_ARG_INFO(0, s)
	ZEND_ARG_INFO(0, c)
	ZEND_ARG_TYPE_INFO(0, n, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qstylehints_qstylehints_setmousedoubleclickinterval, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, mouseDoubleClickInterval, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qstylehints_qstylehints_mousedoubleclickinterval, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qstylehints_qstylehints_mousedoubleclickdistance, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qstylehints_qstylehints_touchdoubletapdistance, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qstylehints_qstylehints_setmousepressandholdinterval, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, mousePressAndHoldInterval, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qstylehints_qstylehints_mousepressandholdinterval, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qstylehints_qstylehints_setstartdragdistance, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, startDragDistance, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qstylehints_qstylehints_startdragdistance, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qstylehints_qstylehints_setstartdragtime, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, startDragTime, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qstylehints_qstylehints_startdragtime, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qstylehints_qstylehints_startdragvelocity, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qstylehints_qstylehints_setkeyboardinputinterval, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, keyboardInputInterval, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qstylehints_qstylehints_keyboardinputinterval, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qstylehints_qstylehints_keyboardautorepeatratef, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qstylehints_qstylehints_setcursorflashtime, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, cursorFlashTime, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qstylehints_qstylehints_cursorflashtime, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qstylehints_qstylehints_showisfullscreen, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qstylehints_qstylehints_showismaximized, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qstylehints_qstylehints_showshortcutsincontextmenus, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qstylehints_qstylehints_setshowshortcutsincontextmenus, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, showShortcutsInContextMenus, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qstylehints_qstylehints_contextmenutrigger, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qstylehints_qstylehints_setcontextmenutrigger, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, contextMenuTrigger, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qstylehints_qstylehints_passwordmaskdelay, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qstylehints_qstylehints_passwordmaskcharacter, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qstylehints_qstylehints_fontsmoothinggamma, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qstylehints_qstylehints_usertlextensions, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qstylehints_qstylehints_setfocusontouchrelease, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qstylehints_qstylehints_tabfocusbehavior, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qstylehints_qstylehints_settabfocusbehavior, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, tabFocusBehavior, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qstylehints_qstylehints_singleclickactivation, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qstylehints_qstylehints_usehovereffects, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qstylehints_qstylehints_setusehovereffects, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, useHoverEffects, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qstylehints_qstylehints_wheelscrolllines, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qstylehints_qstylehints_setwheelscrolllines, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, scrollLines, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qstylehints_qstylehints_setmousequickselectionthreshold, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, threshold, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qstylehints_qstylehints_mousequickselectionthreshold, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qstylehints_qstylehints_colorscheme, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qstylehints_qstylehints_setcolorscheme, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, scheme, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qstylehints_qstylehints_unsetcolorscheme, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qstylehints_qstylehints_cursorflashtimechanged, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, cursorFlashTime, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qstylehints_qstylehints_keyboardinputintervalchanged, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, keyboardInputInterval, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qstylehints_qstylehints_mousedoubleclickintervalchanged, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, mouseDoubleClickInterval, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qstylehints_qstylehints_mousepressandholdintervalchanged, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, mousePressAndHoldInterval, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qstylehints_qstylehints_startdragdistancechanged, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, startDragDistance, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qstylehints_qstylehints_startdragtimechanged, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, startDragTime, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qstylehints_qstylehints_tabfocusbehaviorchanged, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, tabFocusBehavior, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qstylehints_qstylehints_usehovereffectschanged, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, useHoverEffects, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qstylehints_qstylehints_showshortcutsincontextmenuschanged, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qstylehints_qstylehints_contextmenutriggerchanged, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, contextMenuTrigger, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qstylehints_qstylehints_wheelscrolllineschanged, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, scrollLines, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qstylehints_qstylehints_mousequickselectionthresholdchanged, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, threshold, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qstylehints_qstylehints_colorschemechanged, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, colorScheme, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_gui_qstylehints_qstylehints_method_entry) {
	PHP_ME(Qt_Gui_QStyleHints_QStyleHints, staticMetaObject, arginfo_qt_gui_qstylehints_qstylehints_staticmetaobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QStyleHints_QStyleHints, tr, arginfo_qt_gui_qstylehints_qstylehints_tr, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QStyleHints_QStyleHints, setMouseDoubleClickInterval, arginfo_qt_gui_qstylehints_qstylehints_setmousedoubleclickinterval, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QStyleHints_QStyleHints, mouseDoubleClickInterval, arginfo_qt_gui_qstylehints_qstylehints_mousedoubleclickinterval, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QStyleHints_QStyleHints, mouseDoubleClickDistance, arginfo_qt_gui_qstylehints_qstylehints_mousedoubleclickdistance, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QStyleHints_QStyleHints, touchDoubleTapDistance, arginfo_qt_gui_qstylehints_qstylehints_touchdoubletapdistance, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QStyleHints_QStyleHints, setMousePressAndHoldInterval, arginfo_qt_gui_qstylehints_qstylehints_setmousepressandholdinterval, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QStyleHints_QStyleHints, mousePressAndHoldInterval, arginfo_qt_gui_qstylehints_qstylehints_mousepressandholdinterval, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QStyleHints_QStyleHints, setStartDragDistance, arginfo_qt_gui_qstylehints_qstylehints_setstartdragdistance, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QStyleHints_QStyleHints, startDragDistance, arginfo_qt_gui_qstylehints_qstylehints_startdragdistance, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QStyleHints_QStyleHints, setStartDragTime, arginfo_qt_gui_qstylehints_qstylehints_setstartdragtime, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QStyleHints_QStyleHints, startDragTime, arginfo_qt_gui_qstylehints_qstylehints_startdragtime, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QStyleHints_QStyleHints, startDragVelocity, arginfo_qt_gui_qstylehints_qstylehints_startdragvelocity, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QStyleHints_QStyleHints, setKeyboardInputInterval, arginfo_qt_gui_qstylehints_qstylehints_setkeyboardinputinterval, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QStyleHints_QStyleHints, keyboardInputInterval, arginfo_qt_gui_qstylehints_qstylehints_keyboardinputinterval, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QStyleHints_QStyleHints, keyboardAutoRepeatRateF, arginfo_qt_gui_qstylehints_qstylehints_keyboardautorepeatratef, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QStyleHints_QStyleHints, setCursorFlashTime, arginfo_qt_gui_qstylehints_qstylehints_setcursorflashtime, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QStyleHints_QStyleHints, cursorFlashTime, arginfo_qt_gui_qstylehints_qstylehints_cursorflashtime, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QStyleHints_QStyleHints, showIsFullScreen, arginfo_qt_gui_qstylehints_qstylehints_showisfullscreen, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QStyleHints_QStyleHints, showIsMaximized, arginfo_qt_gui_qstylehints_qstylehints_showismaximized, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QStyleHints_QStyleHints, showShortcutsInContextMenus, arginfo_qt_gui_qstylehints_qstylehints_showshortcutsincontextmenus, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QStyleHints_QStyleHints, setShowShortcutsInContextMenus, arginfo_qt_gui_qstylehints_qstylehints_setshowshortcutsincontextmenus, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QStyleHints_QStyleHints, contextMenuTrigger, arginfo_qt_gui_qstylehints_qstylehints_contextmenutrigger, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QStyleHints_QStyleHints, setContextMenuTrigger, arginfo_qt_gui_qstylehints_qstylehints_setcontextmenutrigger, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QStyleHints_QStyleHints, passwordMaskDelay, arginfo_qt_gui_qstylehints_qstylehints_passwordmaskdelay, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QStyleHints_QStyleHints, passwordMaskCharacter, arginfo_qt_gui_qstylehints_qstylehints_passwordmaskcharacter, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QStyleHints_QStyleHints, fontSmoothingGamma, arginfo_qt_gui_qstylehints_qstylehints_fontsmoothinggamma, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QStyleHints_QStyleHints, useRtlExtensions, arginfo_qt_gui_qstylehints_qstylehints_usertlextensions, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QStyleHints_QStyleHints, setFocusOnTouchRelease, arginfo_qt_gui_qstylehints_qstylehints_setfocusontouchrelease, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QStyleHints_QStyleHints, tabFocusBehavior, arginfo_qt_gui_qstylehints_qstylehints_tabfocusbehavior, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QStyleHints_QStyleHints, setTabFocusBehavior, arginfo_qt_gui_qstylehints_qstylehints_settabfocusbehavior, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QStyleHints_QStyleHints, singleClickActivation, arginfo_qt_gui_qstylehints_qstylehints_singleclickactivation, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QStyleHints_QStyleHints, useHoverEffects, arginfo_qt_gui_qstylehints_qstylehints_usehovereffects, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QStyleHints_QStyleHints, setUseHoverEffects, arginfo_qt_gui_qstylehints_qstylehints_setusehovereffects, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QStyleHints_QStyleHints, wheelScrollLines, arginfo_qt_gui_qstylehints_qstylehints_wheelscrolllines, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QStyleHints_QStyleHints, setWheelScrollLines, arginfo_qt_gui_qstylehints_qstylehints_setwheelscrolllines, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QStyleHints_QStyleHints, setMouseQuickSelectionThreshold, arginfo_qt_gui_qstylehints_qstylehints_setmousequickselectionthreshold, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QStyleHints_QStyleHints, mouseQuickSelectionThreshold, arginfo_qt_gui_qstylehints_qstylehints_mousequickselectionthreshold, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QStyleHints_QStyleHints, colorScheme, arginfo_qt_gui_qstylehints_qstylehints_colorscheme, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QStyleHints_QStyleHints, setColorScheme, arginfo_qt_gui_qstylehints_qstylehints_setcolorscheme, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QStyleHints_QStyleHints, unsetColorScheme, arginfo_qt_gui_qstylehints_qstylehints_unsetcolorscheme, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QStyleHints_QStyleHints, cursorFlashTimeChanged, arginfo_qt_gui_qstylehints_qstylehints_cursorflashtimechanged, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QStyleHints_QStyleHints, keyboardInputIntervalChanged, arginfo_qt_gui_qstylehints_qstylehints_keyboardinputintervalchanged, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QStyleHints_QStyleHints, mouseDoubleClickIntervalChanged, arginfo_qt_gui_qstylehints_qstylehints_mousedoubleclickintervalchanged, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QStyleHints_QStyleHints, mousePressAndHoldIntervalChanged, arginfo_qt_gui_qstylehints_qstylehints_mousepressandholdintervalchanged, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QStyleHints_QStyleHints, startDragDistanceChanged, arginfo_qt_gui_qstylehints_qstylehints_startdragdistancechanged, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QStyleHints_QStyleHints, startDragTimeChanged, arginfo_qt_gui_qstylehints_qstylehints_startdragtimechanged, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QStyleHints_QStyleHints, tabFocusBehaviorChanged, arginfo_qt_gui_qstylehints_qstylehints_tabfocusbehaviorchanged, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QStyleHints_QStyleHints, useHoverEffectsChanged, arginfo_qt_gui_qstylehints_qstylehints_usehovereffectschanged, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QStyleHints_QStyleHints, showShortcutsInContextMenusChanged, arginfo_qt_gui_qstylehints_qstylehints_showshortcutsincontextmenuschanged, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QStyleHints_QStyleHints, contextMenuTriggerChanged, arginfo_qt_gui_qstylehints_qstylehints_contextmenutriggerchanged, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QStyleHints_QStyleHints, wheelScrollLinesChanged, arginfo_qt_gui_qstylehints_qstylehints_wheelscrolllineschanged, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QStyleHints_QStyleHints, mouseQuickSelectionThresholdChanged, arginfo_qt_gui_qstylehints_qstylehints_mousequickselectionthresholdchanged, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QStyleHints_QStyleHints, colorSchemeChanged, arginfo_qt_gui_qstylehints_qstylehints_colorschemechanged, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
