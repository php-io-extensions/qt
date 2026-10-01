
extern zend_class_entry *qt_opengl_qopenglwindow_qopenglwindow_ce;

ZEPHIR_INIT_CLASS(Qt_OpenGL_QOpenGLWindow_QOpenGLWindow);

PHP_METHOD(Qt_OpenGL_QOpenGLWindow_QOpenGLWindow, staticMetaObject);
PHP_METHOD(Qt_OpenGL_QOpenGLWindow_QOpenGLWindow, tr);
PHP_METHOD(Qt_OpenGL_QOpenGLWindow_QOpenGLWindow, new_);
PHP_METHOD(Qt_OpenGL_QOpenGLWindow_QOpenGLWindow, newQOpenGLContextQOpenGLWindowUpdateBehaviorQWindow);
PHP_METHOD(Qt_OpenGL_QOpenGLWindow_QOpenGLWindow, updateBehavior);
PHP_METHOD(Qt_OpenGL_QOpenGLWindow_QOpenGLWindow, isValid);
PHP_METHOD(Qt_OpenGL_QOpenGLWindow_QOpenGLWindow, makeCurrent);
PHP_METHOD(Qt_OpenGL_QOpenGLWindow_QOpenGLWindow, doneCurrent);
PHP_METHOD(Qt_OpenGL_QOpenGLWindow_QOpenGLWindow, context);
PHP_METHOD(Qt_OpenGL_QOpenGLWindow_QOpenGLWindow, shareContext);
PHP_METHOD(Qt_OpenGL_QOpenGLWindow_QOpenGLWindow, defaultFramebufferObject);
PHP_METHOD(Qt_OpenGL_QOpenGLWindow_QOpenGLWindow, grabFramebuffer);
PHP_METHOD(Qt_OpenGL_QOpenGLWindow_QOpenGLWindow, frameSwapped);
PHP_METHOD(Qt_OpenGL_QOpenGLWindow_QOpenGLWindow, initializeGL);
PHP_METHOD(Qt_OpenGL_QOpenGLWindow_QOpenGLWindow, resizeGL);
PHP_METHOD(Qt_OpenGL_QOpenGLWindow_QOpenGLWindow, paintGL);
PHP_METHOD(Qt_OpenGL_QOpenGLWindow_QOpenGLWindow, paintUnderGL);
PHP_METHOD(Qt_OpenGL_QOpenGLWindow_QOpenGLWindow, paintOverGL);
PHP_METHOD(Qt_OpenGL_QOpenGLWindow_QOpenGLWindow, paintEvent);
PHP_METHOD(Qt_OpenGL_QOpenGLWindow_QOpenGLWindow, resizeEvent);
PHP_METHOD(Qt_OpenGL_QOpenGLWindow_QOpenGLWindow, metric);
PHP_METHOD(Qt_OpenGL_QOpenGLWindow_QOpenGLWindow, redirected);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_opengl_qopenglwindow_qopenglwindow_staticmetaobject, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_opengl_qopenglwindow_qopenglwindow_tr, 0, 1, IS_STRING, 0)
	ZEND_ARG_INFO(0, s)
	ZEND_ARG_INFO(0, c)
	ZEND_ARG_TYPE_INFO(0, n, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_opengl_qopenglwindow_qopenglwindow_new_, 0, 0, IS_LONG, 0)
	ZEND_ARG_INFO(0, updateBehavior)
	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_opengl_qopenglwindow_qopenglwindow_newqopenglcontextqopenglwindowupdatebehaviorqwindow, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, shareContext, IS_LONG, 0)
	ZEND_ARG_INFO(0, updateBehavior)
	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_opengl_qopenglwindow_qopenglwindow_updatebehavior, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_opengl_qopenglwindow_qopenglwindow_isvalid, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_opengl_qopenglwindow_qopenglwindow_makecurrent, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_opengl_qopenglwindow_qopenglwindow_donecurrent, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_opengl_qopenglwindow_qopenglwindow_context, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_opengl_qopenglwindow_qopenglwindow_sharecontext, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_opengl_qopenglwindow_qopenglwindow_defaultframebufferobject, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_opengl_qopenglwindow_qopenglwindow_grabframebuffer, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_opengl_qopenglwindow_qopenglwindow_frameswapped, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_opengl_qopenglwindow_qopenglwindow_initializegl, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_opengl_qopenglwindow_qopenglwindow_resizegl, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, w, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, h, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_opengl_qopenglwindow_qopenglwindow_paintgl, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_opengl_qopenglwindow_qopenglwindow_paintundergl, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_opengl_qopenglwindow_qopenglwindow_paintovergl, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_opengl_qopenglwindow_qopenglwindow_paintevent, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, event, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_opengl_qopenglwindow_qopenglwindow_resizeevent, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, event, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_opengl_qopenglwindow_qopenglwindow_metric, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, metric, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_opengl_qopenglwindow_qopenglwindow_redirected, 0, 2, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_INFO(0, arg0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_opengl_qopenglwindow_qopenglwindow_method_entry) {
	PHP_ME(Qt_OpenGL_QOpenGLWindow_QOpenGLWindow, staticMetaObject, arginfo_qt_opengl_qopenglwindow_qopenglwindow_staticmetaobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_OpenGL_QOpenGLWindow_QOpenGLWindow, tr, arginfo_qt_opengl_qopenglwindow_qopenglwindow_tr, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_OpenGL_QOpenGLWindow_QOpenGLWindow, new_, arginfo_qt_opengl_qopenglwindow_qopenglwindow_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_OpenGL_QOpenGLWindow_QOpenGLWindow, newQOpenGLContextQOpenGLWindowUpdateBehaviorQWindow, arginfo_qt_opengl_qopenglwindow_qopenglwindow_newqopenglcontextqopenglwindowupdatebehaviorqwindow, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_OpenGL_QOpenGLWindow_QOpenGLWindow, updateBehavior, arginfo_qt_opengl_qopenglwindow_qopenglwindow_updatebehavior, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_OpenGL_QOpenGLWindow_QOpenGLWindow, isValid, arginfo_qt_opengl_qopenglwindow_qopenglwindow_isvalid, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_OpenGL_QOpenGLWindow_QOpenGLWindow, makeCurrent, arginfo_qt_opengl_qopenglwindow_qopenglwindow_makecurrent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_OpenGL_QOpenGLWindow_QOpenGLWindow, doneCurrent, arginfo_qt_opengl_qopenglwindow_qopenglwindow_donecurrent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_OpenGL_QOpenGLWindow_QOpenGLWindow, context, arginfo_qt_opengl_qopenglwindow_qopenglwindow_context, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_OpenGL_QOpenGLWindow_QOpenGLWindow, shareContext, arginfo_qt_opengl_qopenglwindow_qopenglwindow_sharecontext, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_OpenGL_QOpenGLWindow_QOpenGLWindow, defaultFramebufferObject, arginfo_qt_opengl_qopenglwindow_qopenglwindow_defaultframebufferobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_OpenGL_QOpenGLWindow_QOpenGLWindow, grabFramebuffer, arginfo_qt_opengl_qopenglwindow_qopenglwindow_grabframebuffer, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_OpenGL_QOpenGLWindow_QOpenGLWindow, frameSwapped, arginfo_qt_opengl_qopenglwindow_qopenglwindow_frameswapped, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_OpenGL_QOpenGLWindow_QOpenGLWindow, initializeGL, arginfo_qt_opengl_qopenglwindow_qopenglwindow_initializegl, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_OpenGL_QOpenGLWindow_QOpenGLWindow, resizeGL, arginfo_qt_opengl_qopenglwindow_qopenglwindow_resizegl, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_OpenGL_QOpenGLWindow_QOpenGLWindow, paintGL, arginfo_qt_opengl_qopenglwindow_qopenglwindow_paintgl, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_OpenGL_QOpenGLWindow_QOpenGLWindow, paintUnderGL, arginfo_qt_opengl_qopenglwindow_qopenglwindow_paintundergl, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_OpenGL_QOpenGLWindow_QOpenGLWindow, paintOverGL, arginfo_qt_opengl_qopenglwindow_qopenglwindow_paintovergl, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_OpenGL_QOpenGLWindow_QOpenGLWindow, paintEvent, arginfo_qt_opengl_qopenglwindow_qopenglwindow_paintevent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_OpenGL_QOpenGLWindow_QOpenGLWindow, resizeEvent, arginfo_qt_opengl_qopenglwindow_qopenglwindow_resizeevent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_OpenGL_QOpenGLWindow_QOpenGLWindow, metric, arginfo_qt_opengl_qopenglwindow_qopenglwindow_metric, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_OpenGL_QOpenGLWindow_QOpenGLWindow, redirected, arginfo_qt_opengl_qopenglwindow_qopenglwindow_redirected, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
