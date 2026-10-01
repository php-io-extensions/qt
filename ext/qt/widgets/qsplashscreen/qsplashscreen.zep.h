
extern zend_class_entry *qt_widgets_qsplashscreen_qsplashscreen_ce;

ZEPHIR_INIT_CLASS(Qt_Widgets_QSplashScreen_QSplashScreen);

PHP_METHOD(Qt_Widgets_QSplashScreen_QSplashScreen, staticMetaObject);
PHP_METHOD(Qt_Widgets_QSplashScreen_QSplashScreen, tr);
PHP_METHOD(Qt_Widgets_QSplashScreen_QSplashScreen, new_);
PHP_METHOD(Qt_Widgets_QSplashScreen_QSplashScreen, newQScreenQPixmapQtWindowFlags);
PHP_METHOD(Qt_Widgets_QSplashScreen_QSplashScreen, setPixmap);
PHP_METHOD(Qt_Widgets_QSplashScreen_QSplashScreen, pixmap);
PHP_METHOD(Qt_Widgets_QSplashScreen_QSplashScreen, finish);
PHP_METHOD(Qt_Widgets_QSplashScreen_QSplashScreen, repaint);
PHP_METHOD(Qt_Widgets_QSplashScreen_QSplashScreen, message);
PHP_METHOD(Qt_Widgets_QSplashScreen_QSplashScreen, showMessage);
PHP_METHOD(Qt_Widgets_QSplashScreen_QSplashScreen, clearMessage);
PHP_METHOD(Qt_Widgets_QSplashScreen_QSplashScreen, messageChanged);
PHP_METHOD(Qt_Widgets_QSplashScreen_QSplashScreen, event);
PHP_METHOD(Qt_Widgets_QSplashScreen_QSplashScreen, drawContents);
PHP_METHOD(Qt_Widgets_QSplashScreen_QSplashScreen, mousePressEvent);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qsplashscreen_qsplashscreen_staticmetaobject, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qsplashscreen_qsplashscreen_tr, 0, 1, IS_STRING, 0)
	ZEND_ARG_INFO(0, s)
	ZEND_ARG_INFO(0, c)
	ZEND_ARG_TYPE_INFO(0, n, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qsplashscreen_qsplashscreen_new_, 0, 0, IS_LONG, 0)
	ZEND_ARG_INFO(0, pixmap)
	ZEND_ARG_INFO(0, f)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qsplashscreen_qsplashscreen_newqscreenqpixmapqtwindowflags, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, screen, IS_LONG, 0)
	ZEND_ARG_INFO(0, pixmap)
	ZEND_ARG_INFO(0, f)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qsplashscreen_qsplashscreen_setpixmap, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, pixmap, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qsplashscreen_qsplashscreen_pixmap, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qsplashscreen_qsplashscreen_finish, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, w, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qsplashscreen_qsplashscreen_repaint, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qsplashscreen_qsplashscreen_message, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qsplashscreen_qsplashscreen_showmessage, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, message, IS_STRING, 0)
	ZEND_ARG_INFO(0, alignment)
	ZEND_ARG_INFO(0, color)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qsplashscreen_qsplashscreen_clearmessage, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qsplashscreen_qsplashscreen_messagechanged, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, message, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qsplashscreen_qsplashscreen_event, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, e, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qsplashscreen_qsplashscreen_drawcontents, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, painter, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qsplashscreen_qsplashscreen_mousepressevent, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_widgets_qsplashscreen_qsplashscreen_method_entry) {
	PHP_ME(Qt_Widgets_QSplashScreen_QSplashScreen, staticMetaObject, arginfo_qt_widgets_qsplashscreen_qsplashscreen_staticmetaobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QSplashScreen_QSplashScreen, tr, arginfo_qt_widgets_qsplashscreen_qsplashscreen_tr, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QSplashScreen_QSplashScreen, new_, arginfo_qt_widgets_qsplashscreen_qsplashscreen_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QSplashScreen_QSplashScreen, newQScreenQPixmapQtWindowFlags, arginfo_qt_widgets_qsplashscreen_qsplashscreen_newqscreenqpixmapqtwindowflags, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QSplashScreen_QSplashScreen, setPixmap, arginfo_qt_widgets_qsplashscreen_qsplashscreen_setpixmap, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QSplashScreen_QSplashScreen, pixmap, arginfo_qt_widgets_qsplashscreen_qsplashscreen_pixmap, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QSplashScreen_QSplashScreen, finish, arginfo_qt_widgets_qsplashscreen_qsplashscreen_finish, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QSplashScreen_QSplashScreen, repaint, arginfo_qt_widgets_qsplashscreen_qsplashscreen_repaint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QSplashScreen_QSplashScreen, message, arginfo_qt_widgets_qsplashscreen_qsplashscreen_message, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QSplashScreen_QSplashScreen, showMessage, arginfo_qt_widgets_qsplashscreen_qsplashscreen_showmessage, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QSplashScreen_QSplashScreen, clearMessage, arginfo_qt_widgets_qsplashscreen_qsplashscreen_clearmessage, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QSplashScreen_QSplashScreen, messageChanged, arginfo_qt_widgets_qsplashscreen_qsplashscreen_messagechanged, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QSplashScreen_QSplashScreen, event, arginfo_qt_widgets_qsplashscreen_qsplashscreen_event, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QSplashScreen_QSplashScreen, drawContents, arginfo_qt_widgets_qsplashscreen_qsplashscreen_drawcontents, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QSplashScreen_QSplashScreen, mousePressEvent, arginfo_qt_widgets_qsplashscreen_qsplashscreen_mousepressevent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
