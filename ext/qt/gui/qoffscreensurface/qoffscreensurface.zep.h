
extern zend_class_entry *qt_gui_qoffscreensurface_qoffscreensurface_ce;

ZEPHIR_INIT_CLASS(Qt_Gui_QOffscreenSurface_QOffscreenSurface);

PHP_METHOD(Qt_Gui_QOffscreenSurface_QOffscreenSurface, staticMetaObject);
PHP_METHOD(Qt_Gui_QOffscreenSurface_QOffscreenSurface, tr);
PHP_METHOD(Qt_Gui_QOffscreenSurface_QOffscreenSurface, new_);
PHP_METHOD(Qt_Gui_QOffscreenSurface_QOffscreenSurface, surfaceType);
PHP_METHOD(Qt_Gui_QOffscreenSurface_QOffscreenSurface, create);
PHP_METHOD(Qt_Gui_QOffscreenSurface_QOffscreenSurface, destroy);
PHP_METHOD(Qt_Gui_QOffscreenSurface_QOffscreenSurface, isValid);
PHP_METHOD(Qt_Gui_QOffscreenSurface_QOffscreenSurface, setFormat);
PHP_METHOD(Qt_Gui_QOffscreenSurface_QOffscreenSurface, format);
PHP_METHOD(Qt_Gui_QOffscreenSurface_QOffscreenSurface, requestedFormat);
PHP_METHOD(Qt_Gui_QOffscreenSurface_QOffscreenSurface, size);
PHP_METHOD(Qt_Gui_QOffscreenSurface_QOffscreenSurface, screen);
PHP_METHOD(Qt_Gui_QOffscreenSurface_QOffscreenSurface, setScreen);
PHP_METHOD(Qt_Gui_QOffscreenSurface_QOffscreenSurface, screenChanged);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qoffscreensurface_qoffscreensurface_staticmetaobject, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qoffscreensurface_qoffscreensurface_tr, 0, 1, IS_STRING, 0)
	ZEND_ARG_INFO(0, s)
	ZEND_ARG_INFO(0, c)
	ZEND_ARG_TYPE_INFO(0, n, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qoffscreensurface_qoffscreensurface_new_, 0, 0, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, screen, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qoffscreensurface_qoffscreensurface_surfacetype, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qoffscreensurface_qoffscreensurface_create, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qoffscreensurface_qoffscreensurface_destroy, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qoffscreensurface_qoffscreensurface_isvalid, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qoffscreensurface_qoffscreensurface_setformat, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, format, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qoffscreensurface_qoffscreensurface_format, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qoffscreensurface_qoffscreensurface_requestedformat, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qoffscreensurface_qoffscreensurface_size, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qoffscreensurface_qoffscreensurface_screen, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qoffscreensurface_qoffscreensurface_setscreen, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, screen, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qoffscreensurface_qoffscreensurface_screenchanged, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, screen, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_gui_qoffscreensurface_qoffscreensurface_method_entry) {
	PHP_ME(Qt_Gui_QOffscreenSurface_QOffscreenSurface, staticMetaObject, arginfo_qt_gui_qoffscreensurface_qoffscreensurface_staticmetaobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QOffscreenSurface_QOffscreenSurface, tr, arginfo_qt_gui_qoffscreensurface_qoffscreensurface_tr, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QOffscreenSurface_QOffscreenSurface, new_, arginfo_qt_gui_qoffscreensurface_qoffscreensurface_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QOffscreenSurface_QOffscreenSurface, surfaceType, arginfo_qt_gui_qoffscreensurface_qoffscreensurface_surfacetype, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QOffscreenSurface_QOffscreenSurface, create, arginfo_qt_gui_qoffscreensurface_qoffscreensurface_create, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QOffscreenSurface_QOffscreenSurface, destroy, arginfo_qt_gui_qoffscreensurface_qoffscreensurface_destroy, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QOffscreenSurface_QOffscreenSurface, isValid, arginfo_qt_gui_qoffscreensurface_qoffscreensurface_isvalid, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QOffscreenSurface_QOffscreenSurface, setFormat, arginfo_qt_gui_qoffscreensurface_qoffscreensurface_setformat, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QOffscreenSurface_QOffscreenSurface, format, arginfo_qt_gui_qoffscreensurface_qoffscreensurface_format, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QOffscreenSurface_QOffscreenSurface, requestedFormat, arginfo_qt_gui_qoffscreensurface_qoffscreensurface_requestedformat, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QOffscreenSurface_QOffscreenSurface, size, arginfo_qt_gui_qoffscreensurface_qoffscreensurface_size, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QOffscreenSurface_QOffscreenSurface, screen, arginfo_qt_gui_qoffscreensurface_qoffscreensurface_screen, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QOffscreenSurface_QOffscreenSurface, setScreen, arginfo_qt_gui_qoffscreensurface_qoffscreensurface_setscreen, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QOffscreenSurface_QOffscreenSurface, screenChanged, arginfo_qt_gui_qoffscreensurface_qoffscreensurface_screenchanged, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
