
extern zend_class_entry *qt_gui_qopenglcontext_qopenglcontext_ce;

ZEPHIR_INIT_CLASS(Qt_Gui_QOpenGLContext_QOpenGLContext);

PHP_METHOD(Qt_Gui_QOpenGLContext_QOpenGLContext, staticMetaObject);
PHP_METHOD(Qt_Gui_QOpenGLContext_QOpenGLContext, tr);
PHP_METHOD(Qt_Gui_QOpenGLContext_QOpenGLContext, new_);
PHP_METHOD(Qt_Gui_QOpenGLContext_QOpenGLContext, setFormat);
PHP_METHOD(Qt_Gui_QOpenGLContext_QOpenGLContext, setShareContext);
PHP_METHOD(Qt_Gui_QOpenGLContext_QOpenGLContext, setScreen);
PHP_METHOD(Qt_Gui_QOpenGLContext_QOpenGLContext, create);
PHP_METHOD(Qt_Gui_QOpenGLContext_QOpenGLContext, isValid);
PHP_METHOD(Qt_Gui_QOpenGLContext_QOpenGLContext, format);
PHP_METHOD(Qt_Gui_QOpenGLContext_QOpenGLContext, shareContext);
PHP_METHOD(Qt_Gui_QOpenGLContext_QOpenGLContext, shareGroup);
PHP_METHOD(Qt_Gui_QOpenGLContext_QOpenGLContext, screen);
PHP_METHOD(Qt_Gui_QOpenGLContext_QOpenGLContext, defaultFramebufferObject);
PHP_METHOD(Qt_Gui_QOpenGLContext_QOpenGLContext, makeCurrent);
PHP_METHOD(Qt_Gui_QOpenGLContext_QOpenGLContext, doneCurrent);
PHP_METHOD(Qt_Gui_QOpenGLContext_QOpenGLContext, swapBuffers);
PHP_METHOD(Qt_Gui_QOpenGLContext_QOpenGLContext, surface);
PHP_METHOD(Qt_Gui_QOpenGLContext_QOpenGLContext, currentContext);
PHP_METHOD(Qt_Gui_QOpenGLContext_QOpenGLContext, areSharing);
PHP_METHOD(Qt_Gui_QOpenGLContext_QOpenGLContext, functions);
PHP_METHOD(Qt_Gui_QOpenGLContext_QOpenGLContext, extraFunctions);
PHP_METHOD(Qt_Gui_QOpenGLContext_QOpenGLContext, extensions);
PHP_METHOD(Qt_Gui_QOpenGLContext_QOpenGLContext, hasExtension);
PHP_METHOD(Qt_Gui_QOpenGLContext_QOpenGLContext, openGLModuleType);
PHP_METHOD(Qt_Gui_QOpenGLContext_QOpenGLContext, isOpenGLES);
PHP_METHOD(Qt_Gui_QOpenGLContext_QOpenGLContext, supportsThreadedOpenGL);
PHP_METHOD(Qt_Gui_QOpenGLContext_QOpenGLContext, globalShareContext);
PHP_METHOD(Qt_Gui_QOpenGLContext_QOpenGLContext, aboutToBeDestroyed);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qopenglcontext_qopenglcontext_staticmetaobject, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qopenglcontext_qopenglcontext_tr, 0, 1, IS_STRING, 0)
	ZEND_ARG_INFO(0, s)
	ZEND_ARG_INFO(0, c)
	ZEND_ARG_TYPE_INFO(0, n, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qopenglcontext_qopenglcontext_new_, 0, 0, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qopenglcontext_qopenglcontext_setformat, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, format, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qopenglcontext_qopenglcontext_setsharecontext, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, shareContext, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qopenglcontext_qopenglcontext_setscreen, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, screen, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qopenglcontext_qopenglcontext_create, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qopenglcontext_qopenglcontext_isvalid, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qopenglcontext_qopenglcontext_format, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qopenglcontext_qopenglcontext_sharecontext, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qopenglcontext_qopenglcontext_sharegroup, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qopenglcontext_qopenglcontext_screen, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qopenglcontext_qopenglcontext_defaultframebufferobject, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qopenglcontext_qopenglcontext_makecurrent, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, surface, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qopenglcontext_qopenglcontext_donecurrent, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qopenglcontext_qopenglcontext_swapbuffers, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, surface, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qopenglcontext_qopenglcontext_surface, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qopenglcontext_qopenglcontext_currentcontext, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qopenglcontext_qopenglcontext_aresharing, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, first, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, second, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qopenglcontext_qopenglcontext_functions, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qopenglcontext_qopenglcontext_extrafunctions, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qopenglcontext_qopenglcontext_extensions, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qopenglcontext_qopenglcontext_hasextension, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, extension, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qopenglcontext_qopenglcontext_openglmoduletype, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qopenglcontext_qopenglcontext_isopengles, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qopenglcontext_qopenglcontext_supportsthreadedopengl, 0, 0, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qopenglcontext_qopenglcontext_globalsharecontext, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qopenglcontext_qopenglcontext_abouttobedestroyed, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_gui_qopenglcontext_qopenglcontext_method_entry) {
	PHP_ME(Qt_Gui_QOpenGLContext_QOpenGLContext, staticMetaObject, arginfo_qt_gui_qopenglcontext_qopenglcontext_staticmetaobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QOpenGLContext_QOpenGLContext, tr, arginfo_qt_gui_qopenglcontext_qopenglcontext_tr, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QOpenGLContext_QOpenGLContext, new_, arginfo_qt_gui_qopenglcontext_qopenglcontext_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QOpenGLContext_QOpenGLContext, setFormat, arginfo_qt_gui_qopenglcontext_qopenglcontext_setformat, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QOpenGLContext_QOpenGLContext, setShareContext, arginfo_qt_gui_qopenglcontext_qopenglcontext_setsharecontext, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QOpenGLContext_QOpenGLContext, setScreen, arginfo_qt_gui_qopenglcontext_qopenglcontext_setscreen, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QOpenGLContext_QOpenGLContext, create, arginfo_qt_gui_qopenglcontext_qopenglcontext_create, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QOpenGLContext_QOpenGLContext, isValid, arginfo_qt_gui_qopenglcontext_qopenglcontext_isvalid, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QOpenGLContext_QOpenGLContext, format, arginfo_qt_gui_qopenglcontext_qopenglcontext_format, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QOpenGLContext_QOpenGLContext, shareContext, arginfo_qt_gui_qopenglcontext_qopenglcontext_sharecontext, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QOpenGLContext_QOpenGLContext, shareGroup, arginfo_qt_gui_qopenglcontext_qopenglcontext_sharegroup, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QOpenGLContext_QOpenGLContext, screen, arginfo_qt_gui_qopenglcontext_qopenglcontext_screen, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QOpenGLContext_QOpenGLContext, defaultFramebufferObject, arginfo_qt_gui_qopenglcontext_qopenglcontext_defaultframebufferobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QOpenGLContext_QOpenGLContext, makeCurrent, arginfo_qt_gui_qopenglcontext_qopenglcontext_makecurrent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QOpenGLContext_QOpenGLContext, doneCurrent, arginfo_qt_gui_qopenglcontext_qopenglcontext_donecurrent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QOpenGLContext_QOpenGLContext, swapBuffers, arginfo_qt_gui_qopenglcontext_qopenglcontext_swapbuffers, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QOpenGLContext_QOpenGLContext, surface, arginfo_qt_gui_qopenglcontext_qopenglcontext_surface, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QOpenGLContext_QOpenGLContext, currentContext, arginfo_qt_gui_qopenglcontext_qopenglcontext_currentcontext, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QOpenGLContext_QOpenGLContext, areSharing, arginfo_qt_gui_qopenglcontext_qopenglcontext_aresharing, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QOpenGLContext_QOpenGLContext, functions, arginfo_qt_gui_qopenglcontext_qopenglcontext_functions, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QOpenGLContext_QOpenGLContext, extraFunctions, arginfo_qt_gui_qopenglcontext_qopenglcontext_extrafunctions, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QOpenGLContext_QOpenGLContext, extensions, arginfo_qt_gui_qopenglcontext_qopenglcontext_extensions, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QOpenGLContext_QOpenGLContext, hasExtension, arginfo_qt_gui_qopenglcontext_qopenglcontext_hasextension, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QOpenGLContext_QOpenGLContext, openGLModuleType, arginfo_qt_gui_qopenglcontext_qopenglcontext_openglmoduletype, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QOpenGLContext_QOpenGLContext, isOpenGLES, arginfo_qt_gui_qopenglcontext_qopenglcontext_isopengles, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QOpenGLContext_QOpenGLContext, supportsThreadedOpenGL, arginfo_qt_gui_qopenglcontext_qopenglcontext_supportsthreadedopengl, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QOpenGLContext_QOpenGLContext, globalShareContext, arginfo_qt_gui_qopenglcontext_qopenglcontext_globalsharecontext, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QOpenGLContext_QOpenGLContext, aboutToBeDestroyed, arginfo_qt_gui_qopenglcontext_qopenglcontext_abouttobedestroyed, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
