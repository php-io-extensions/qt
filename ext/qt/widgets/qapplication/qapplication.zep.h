
extern zend_class_entry *qt_widgets_qapplication_qapplication_ce;

ZEPHIR_INIT_CLASS(Qt_Widgets_QApplication_QApplication);

PHP_METHOD(Qt_Widgets_QApplication_QApplication, staticMetaObject);
PHP_METHOD(Qt_Widgets_QApplication_QApplication, tr);
PHP_METHOD(Qt_Widgets_QApplication_QApplication, new_);
PHP_METHOD(Qt_Widgets_QApplication_QApplication, style);
PHP_METHOD(Qt_Widgets_QApplication_QApplication, setStyle);
PHP_METHOD(Qt_Widgets_QApplication_QApplication, setStyleQString);
PHP_METHOD(Qt_Widgets_QApplication_QApplication, palette);
PHP_METHOD(Qt_Widgets_QApplication_QApplication, paletteQWidget);
PHP_METHOD(Qt_Widgets_QApplication_QApplication, paletteChar);
PHP_METHOD(Qt_Widgets_QApplication_QApplication, setPalette);
PHP_METHOD(Qt_Widgets_QApplication_QApplication, font);
PHP_METHOD(Qt_Widgets_QApplication_QApplication, fontQWidget);
PHP_METHOD(Qt_Widgets_QApplication_QApplication, fontChar);
PHP_METHOD(Qt_Widgets_QApplication_QApplication, setFont);
PHP_METHOD(Qt_Widgets_QApplication_QApplication, allWidgets);
PHP_METHOD(Qt_Widgets_QApplication_QApplication, topLevelWidgets);
PHP_METHOD(Qt_Widgets_QApplication_QApplication, activePopupWidget);
PHP_METHOD(Qt_Widgets_QApplication_QApplication, activeModalWidget);
PHP_METHOD(Qt_Widgets_QApplication_QApplication, focusWidget);
PHP_METHOD(Qt_Widgets_QApplication_QApplication, activeWindow);
PHP_METHOD(Qt_Widgets_QApplication_QApplication, widgetAt);
PHP_METHOD(Qt_Widgets_QApplication_QApplication, widgetAtIntInt);
PHP_METHOD(Qt_Widgets_QApplication_QApplication, topLevelAt);
PHP_METHOD(Qt_Widgets_QApplication_QApplication, topLevelAtIntInt);
PHP_METHOD(Qt_Widgets_QApplication_QApplication, beep);
PHP_METHOD(Qt_Widgets_QApplication_QApplication, alert);
PHP_METHOD(Qt_Widgets_QApplication_QApplication, setCursorFlashTime);
PHP_METHOD(Qt_Widgets_QApplication_QApplication, cursorFlashTime);
PHP_METHOD(Qt_Widgets_QApplication_QApplication, setDoubleClickInterval);
PHP_METHOD(Qt_Widgets_QApplication_QApplication, doubleClickInterval);
PHP_METHOD(Qt_Widgets_QApplication_QApplication, setKeyboardInputInterval);
PHP_METHOD(Qt_Widgets_QApplication_QApplication, keyboardInputInterval);
PHP_METHOD(Qt_Widgets_QApplication_QApplication, setWheelScrollLines);
PHP_METHOD(Qt_Widgets_QApplication_QApplication, wheelScrollLines);
PHP_METHOD(Qt_Widgets_QApplication_QApplication, setStartDragTime);
PHP_METHOD(Qt_Widgets_QApplication_QApplication, startDragTime);
PHP_METHOD(Qt_Widgets_QApplication_QApplication, setStartDragDistance);
PHP_METHOD(Qt_Widgets_QApplication_QApplication, startDragDistance);
PHP_METHOD(Qt_Widgets_QApplication_QApplication, isEffectEnabled);
PHP_METHOD(Qt_Widgets_QApplication_QApplication, setEffectEnabled);
PHP_METHOD(Qt_Widgets_QApplication_QApplication, exec);
PHP_METHOD(Qt_Widgets_QApplication_QApplication, notify);
PHP_METHOD(Qt_Widgets_QApplication_QApplication, focusChanged);
PHP_METHOD(Qt_Widgets_QApplication_QApplication, styleSheet);
PHP_METHOD(Qt_Widgets_QApplication_QApplication, autoSipEnabled);
PHP_METHOD(Qt_Widgets_QApplication_QApplication, setStyleSheet);
PHP_METHOD(Qt_Widgets_QApplication_QApplication, setAutoSipEnabled);
PHP_METHOD(Qt_Widgets_QApplication_QApplication, closeAllWindows);
PHP_METHOD(Qt_Widgets_QApplication_QApplication, aboutQt);
PHP_METHOD(Qt_Widgets_QApplication_QApplication, event);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qapplication_qapplication_staticmetaobject, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qapplication_qapplication_tr, 0, 1, IS_STRING, 0)
	ZEND_ARG_INFO(0, s)
	ZEND_ARG_INFO(0, c)
	ZEND_ARG_TYPE_INFO(0, n, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qapplication_qapplication_new_, 0, 1, IS_LONG, 0)
	ZEND_ARG_ARRAY_INFO(0, argv, 0)
	ZEND_ARG_INFO(0, arg0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qapplication_qapplication_style, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qapplication_qapplication_setstyle, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qapplication_qapplication_setstyleqstring, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qapplication_qapplication_palette, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qapplication_qapplication_paletteqwidget, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qapplication_qapplication_palettechar, 0, 1, IS_LONG, 0)
	ZEND_ARG_INFO(0, className)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qapplication_qapplication_setpalette, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
	ZEND_ARG_INFO(0, className)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qapplication_qapplication_font, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qapplication_qapplication_fontqwidget, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qapplication_qapplication_fontchar, 0, 1, IS_LONG, 0)
	ZEND_ARG_INFO(0, className)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qapplication_qapplication_setfont, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
	ZEND_ARG_INFO(0, className)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qapplication_qapplication_allwidgets, 0, 0, IS_ARRAY, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qapplication_qapplication_toplevelwidgets, 0, 0, IS_ARRAY, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qapplication_qapplication_activepopupwidget, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qapplication_qapplication_activemodalwidget, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qapplication_qapplication_focuswidget, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qapplication_qapplication_activewindow, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qapplication_qapplication_widgetat, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, pX, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, pY, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qapplication_qapplication_widgetatintint, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qapplication_qapplication_toplevelat, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, pX, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, pY, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qapplication_qapplication_toplevelatintint, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qapplication_qapplication_beep, 0, 0, IS_VOID, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qapplication_qapplication_alert, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, widget, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, duration, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qapplication_qapplication_setcursorflashtime, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qapplication_qapplication_cursorflashtime, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qapplication_qapplication_setdoubleclickinterval, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qapplication_qapplication_doubleclickinterval, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qapplication_qapplication_setkeyboardinputinterval, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qapplication_qapplication_keyboardinputinterval, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qapplication_qapplication_setwheelscrolllines, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qapplication_qapplication_wheelscrolllines, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qapplication_qapplication_setstartdragtime, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, ms, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qapplication_qapplication_startdragtime, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qapplication_qapplication_setstartdragdistance, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, l, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qapplication_qapplication_startdragdistance, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qapplication_qapplication_iseffectenabled, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qapplication_qapplication_seteffectenabled, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, enable, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qapplication_qapplication_exec, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qapplication_qapplication_notify, 0, 3, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg1, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qapplication_qapplication_focuschanged, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, old, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, now, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qapplication_qapplication_stylesheet, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qapplication_qapplication_autosipenabled, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qapplication_qapplication_setstylesheet, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sheet, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qapplication_qapplication_setautosipenabled, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, enabled, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qapplication_qapplication_closeallwindows, 0, 0, IS_VOID, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qapplication_qapplication_aboutqt, 0, 0, IS_VOID, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qapplication_qapplication_event, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_widgets_qapplication_qapplication_method_entry) {
	PHP_ME(Qt_Widgets_QApplication_QApplication, staticMetaObject, arginfo_qt_widgets_qapplication_qapplication_staticmetaobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QApplication_QApplication, tr, arginfo_qt_widgets_qapplication_qapplication_tr, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QApplication_QApplication, new_, arginfo_qt_widgets_qapplication_qapplication_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QApplication_QApplication, style, arginfo_qt_widgets_qapplication_qapplication_style, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QApplication_QApplication, setStyle, arginfo_qt_widgets_qapplication_qapplication_setstyle, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QApplication_QApplication, setStyleQString, arginfo_qt_widgets_qapplication_qapplication_setstyleqstring, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QApplication_QApplication, palette, arginfo_qt_widgets_qapplication_qapplication_palette, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QApplication_QApplication, paletteQWidget, arginfo_qt_widgets_qapplication_qapplication_paletteqwidget, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QApplication_QApplication, paletteChar, arginfo_qt_widgets_qapplication_qapplication_palettechar, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QApplication_QApplication, setPalette, arginfo_qt_widgets_qapplication_qapplication_setpalette, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QApplication_QApplication, font, arginfo_qt_widgets_qapplication_qapplication_font, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QApplication_QApplication, fontQWidget, arginfo_qt_widgets_qapplication_qapplication_fontqwidget, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QApplication_QApplication, fontChar, arginfo_qt_widgets_qapplication_qapplication_fontchar, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QApplication_QApplication, setFont, arginfo_qt_widgets_qapplication_qapplication_setfont, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QApplication_QApplication, allWidgets, arginfo_qt_widgets_qapplication_qapplication_allwidgets, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QApplication_QApplication, topLevelWidgets, arginfo_qt_widgets_qapplication_qapplication_toplevelwidgets, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QApplication_QApplication, activePopupWidget, arginfo_qt_widgets_qapplication_qapplication_activepopupwidget, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QApplication_QApplication, activeModalWidget, arginfo_qt_widgets_qapplication_qapplication_activemodalwidget, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QApplication_QApplication, focusWidget, arginfo_qt_widgets_qapplication_qapplication_focuswidget, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QApplication_QApplication, activeWindow, arginfo_qt_widgets_qapplication_qapplication_activewindow, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QApplication_QApplication, widgetAt, arginfo_qt_widgets_qapplication_qapplication_widgetat, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QApplication_QApplication, widgetAtIntInt, arginfo_qt_widgets_qapplication_qapplication_widgetatintint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QApplication_QApplication, topLevelAt, arginfo_qt_widgets_qapplication_qapplication_toplevelat, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QApplication_QApplication, topLevelAtIntInt, arginfo_qt_widgets_qapplication_qapplication_toplevelatintint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QApplication_QApplication, beep, arginfo_qt_widgets_qapplication_qapplication_beep, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QApplication_QApplication, alert, arginfo_qt_widgets_qapplication_qapplication_alert, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QApplication_QApplication, setCursorFlashTime, arginfo_qt_widgets_qapplication_qapplication_setcursorflashtime, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QApplication_QApplication, cursorFlashTime, arginfo_qt_widgets_qapplication_qapplication_cursorflashtime, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QApplication_QApplication, setDoubleClickInterval, arginfo_qt_widgets_qapplication_qapplication_setdoubleclickinterval, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QApplication_QApplication, doubleClickInterval, arginfo_qt_widgets_qapplication_qapplication_doubleclickinterval, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QApplication_QApplication, setKeyboardInputInterval, arginfo_qt_widgets_qapplication_qapplication_setkeyboardinputinterval, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QApplication_QApplication, keyboardInputInterval, arginfo_qt_widgets_qapplication_qapplication_keyboardinputinterval, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QApplication_QApplication, setWheelScrollLines, arginfo_qt_widgets_qapplication_qapplication_setwheelscrolllines, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QApplication_QApplication, wheelScrollLines, arginfo_qt_widgets_qapplication_qapplication_wheelscrolllines, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QApplication_QApplication, setStartDragTime, arginfo_qt_widgets_qapplication_qapplication_setstartdragtime, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QApplication_QApplication, startDragTime, arginfo_qt_widgets_qapplication_qapplication_startdragtime, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QApplication_QApplication, setStartDragDistance, arginfo_qt_widgets_qapplication_qapplication_setstartdragdistance, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QApplication_QApplication, startDragDistance, arginfo_qt_widgets_qapplication_qapplication_startdragdistance, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QApplication_QApplication, isEffectEnabled, arginfo_qt_widgets_qapplication_qapplication_iseffectenabled, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QApplication_QApplication, setEffectEnabled, arginfo_qt_widgets_qapplication_qapplication_seteffectenabled, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QApplication_QApplication, exec, arginfo_qt_widgets_qapplication_qapplication_exec, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QApplication_QApplication, notify, arginfo_qt_widgets_qapplication_qapplication_notify, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QApplication_QApplication, focusChanged, arginfo_qt_widgets_qapplication_qapplication_focuschanged, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QApplication_QApplication, styleSheet, arginfo_qt_widgets_qapplication_qapplication_stylesheet, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QApplication_QApplication, autoSipEnabled, arginfo_qt_widgets_qapplication_qapplication_autosipenabled, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QApplication_QApplication, setStyleSheet, arginfo_qt_widgets_qapplication_qapplication_setstylesheet, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QApplication_QApplication, setAutoSipEnabled, arginfo_qt_widgets_qapplication_qapplication_setautosipenabled, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QApplication_QApplication, closeAllWindows, arginfo_qt_widgets_qapplication_qapplication_closeallwindows, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QApplication_QApplication, aboutQt, arginfo_qt_widgets_qapplication_qapplication_aboutqt, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QApplication_QApplication, event, arginfo_qt_widgets_qapplication_qapplication_event, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
