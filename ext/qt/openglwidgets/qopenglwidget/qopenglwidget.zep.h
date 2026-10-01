
extern zend_class_entry *qt_openglwidgets_qopenglwidget_qopenglwidget_ce;

ZEPHIR_INIT_CLASS(Qt_OpenGLWidgets_QOpenGLWidget_QOpenGLWidget);

PHP_METHOD(Qt_OpenGLWidgets_QOpenGLWidget_QOpenGLWidget, staticMetaObject);
PHP_METHOD(Qt_OpenGLWidgets_QOpenGLWidget_QOpenGLWidget, tr);
PHP_METHOD(Qt_OpenGLWidgets_QOpenGLWidget_QOpenGLWidget, new_);
PHP_METHOD(Qt_OpenGLWidgets_QOpenGLWidget_QOpenGLWidget, setUpdateBehavior);
PHP_METHOD(Qt_OpenGLWidgets_QOpenGLWidget_QOpenGLWidget, updateBehavior);
PHP_METHOD(Qt_OpenGLWidgets_QOpenGLWidget_QOpenGLWidget, setFormat);
PHP_METHOD(Qt_OpenGLWidgets_QOpenGLWidget_QOpenGLWidget, format);
PHP_METHOD(Qt_OpenGLWidgets_QOpenGLWidget_QOpenGLWidget, textureFormat);
PHP_METHOD(Qt_OpenGLWidgets_QOpenGLWidget_QOpenGLWidget, setTextureFormat);
PHP_METHOD(Qt_OpenGLWidgets_QOpenGLWidget_QOpenGLWidget, isValid);
PHP_METHOD(Qt_OpenGLWidgets_QOpenGLWidget_QOpenGLWidget, makeCurrent);
PHP_METHOD(Qt_OpenGLWidgets_QOpenGLWidget_QOpenGLWidget, makeCurrentQOpenGLWidgetTargetBuffer);
PHP_METHOD(Qt_OpenGLWidgets_QOpenGLWidget_QOpenGLWidget, doneCurrent);
PHP_METHOD(Qt_OpenGLWidgets_QOpenGLWidget_QOpenGLWidget, context);
PHP_METHOD(Qt_OpenGLWidgets_QOpenGLWidget_QOpenGLWidget, defaultFramebufferObject);
PHP_METHOD(Qt_OpenGLWidgets_QOpenGLWidget_QOpenGLWidget, defaultFramebufferObjectQOpenGLWidgetTargetBuffer);
PHP_METHOD(Qt_OpenGLWidgets_QOpenGLWidget_QOpenGLWidget, grabFramebuffer);
PHP_METHOD(Qt_OpenGLWidgets_QOpenGLWidget_QOpenGLWidget, grabFramebufferQOpenGLWidgetTargetBuffer);
PHP_METHOD(Qt_OpenGLWidgets_QOpenGLWidget_QOpenGLWidget, currentTargetBuffer);
PHP_METHOD(Qt_OpenGLWidgets_QOpenGLWidget_QOpenGLWidget, aboutToCompose);
PHP_METHOD(Qt_OpenGLWidgets_QOpenGLWidget_QOpenGLWidget, frameSwapped);
PHP_METHOD(Qt_OpenGLWidgets_QOpenGLWidget_QOpenGLWidget, aboutToResize);
PHP_METHOD(Qt_OpenGLWidgets_QOpenGLWidget_QOpenGLWidget, resized);
PHP_METHOD(Qt_OpenGLWidgets_QOpenGLWidget_QOpenGLWidget, initializeGL);
PHP_METHOD(Qt_OpenGLWidgets_QOpenGLWidget_QOpenGLWidget, resizeGL);
PHP_METHOD(Qt_OpenGLWidgets_QOpenGLWidget_QOpenGLWidget, paintGL);
PHP_METHOD(Qt_OpenGLWidgets_QOpenGLWidget_QOpenGLWidget, paintEvent);
PHP_METHOD(Qt_OpenGLWidgets_QOpenGLWidget_QOpenGLWidget, resizeEvent);
PHP_METHOD(Qt_OpenGLWidgets_QOpenGLWidget_QOpenGLWidget, event);
PHP_METHOD(Qt_OpenGLWidgets_QOpenGLWidget_QOpenGLWidget, metric);
PHP_METHOD(Qt_OpenGLWidgets_QOpenGLWidget_QOpenGLWidget, redirected);
PHP_METHOD(Qt_OpenGLWidgets_QOpenGLWidget_QOpenGLWidget, paintEngine);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_openglwidgets_qopenglwidget_qopenglwidget_staticmetaobject, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_openglwidgets_qopenglwidget_qopenglwidget_tr, 0, 1, IS_STRING, 0)
	ZEND_ARG_INFO(0, s)
	ZEND_ARG_INFO(0, c)
	ZEND_ARG_TYPE_INFO(0, n, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_openglwidgets_qopenglwidget_qopenglwidget_new_, 0, 0, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
	ZEND_ARG_INFO(0, f)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_openglwidgets_qopenglwidget_qopenglwidget_setupdatebehavior, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, updateBehavior, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_openglwidgets_qopenglwidget_qopenglwidget_updatebehavior, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_openglwidgets_qopenglwidget_qopenglwidget_setformat, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, format, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_openglwidgets_qopenglwidget_qopenglwidget_format, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_openglwidgets_qopenglwidget_qopenglwidget_textureformat, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_openglwidgets_qopenglwidget_qopenglwidget_settextureformat, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, texFormat, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_openglwidgets_qopenglwidget_qopenglwidget_isvalid, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_openglwidgets_qopenglwidget_qopenglwidget_makecurrent, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_openglwidgets_qopenglwidget_qopenglwidget_makecurrentqopenglwidgettargetbuffer, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, targetBuffer, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_openglwidgets_qopenglwidget_qopenglwidget_donecurrent, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_openglwidgets_qopenglwidget_qopenglwidget_context, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_openglwidgets_qopenglwidget_qopenglwidget_defaultframebufferobject, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_openglwidgets_qopenglwidget_qopenglwidget_defaultframebufferobjectqopenglwidgettargetbuffer, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, targetBuffer, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_openglwidgets_qopenglwidget_qopenglwidget_grabframebuffer, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_openglwidgets_qopenglwidget_qopenglwidget_grabframebufferqopenglwidgettargetbuffer, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, targetBuffer, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_openglwidgets_qopenglwidget_qopenglwidget_currenttargetbuffer, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_openglwidgets_qopenglwidget_qopenglwidget_abouttocompose, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_openglwidgets_qopenglwidget_qopenglwidget_frameswapped, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_openglwidgets_qopenglwidget_qopenglwidget_abouttoresize, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_openglwidgets_qopenglwidget_qopenglwidget_resized, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_openglwidgets_qopenglwidget_qopenglwidget_initializegl, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_openglwidgets_qopenglwidget_qopenglwidget_resizegl, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, w, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, h, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_openglwidgets_qopenglwidget_qopenglwidget_paintgl, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_openglwidgets_qopenglwidget_qopenglwidget_paintevent, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, e, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_openglwidgets_qopenglwidget_qopenglwidget_resizeevent, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, e, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_openglwidgets_qopenglwidget_qopenglwidget_event, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, e, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_openglwidgets_qopenglwidget_qopenglwidget_metric, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, metric, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_openglwidgets_qopenglwidget_qopenglwidget_redirected, 0, 2, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_INFO(0, p)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_openglwidgets_qopenglwidget_qopenglwidget_paintengine, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_openglwidgets_qopenglwidget_qopenglwidget_method_entry) {
	PHP_ME(Qt_OpenGLWidgets_QOpenGLWidget_QOpenGLWidget, staticMetaObject, arginfo_qt_openglwidgets_qopenglwidget_qopenglwidget_staticmetaobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_OpenGLWidgets_QOpenGLWidget_QOpenGLWidget, tr, arginfo_qt_openglwidgets_qopenglwidget_qopenglwidget_tr, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_OpenGLWidgets_QOpenGLWidget_QOpenGLWidget, new_, arginfo_qt_openglwidgets_qopenglwidget_qopenglwidget_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_OpenGLWidgets_QOpenGLWidget_QOpenGLWidget, setUpdateBehavior, arginfo_qt_openglwidgets_qopenglwidget_qopenglwidget_setupdatebehavior, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_OpenGLWidgets_QOpenGLWidget_QOpenGLWidget, updateBehavior, arginfo_qt_openglwidgets_qopenglwidget_qopenglwidget_updatebehavior, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_OpenGLWidgets_QOpenGLWidget_QOpenGLWidget, setFormat, arginfo_qt_openglwidgets_qopenglwidget_qopenglwidget_setformat, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_OpenGLWidgets_QOpenGLWidget_QOpenGLWidget, format, arginfo_qt_openglwidgets_qopenglwidget_qopenglwidget_format, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_OpenGLWidgets_QOpenGLWidget_QOpenGLWidget, textureFormat, arginfo_qt_openglwidgets_qopenglwidget_qopenglwidget_textureformat, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_OpenGLWidgets_QOpenGLWidget_QOpenGLWidget, setTextureFormat, arginfo_qt_openglwidgets_qopenglwidget_qopenglwidget_settextureformat, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_OpenGLWidgets_QOpenGLWidget_QOpenGLWidget, isValid, arginfo_qt_openglwidgets_qopenglwidget_qopenglwidget_isvalid, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_OpenGLWidgets_QOpenGLWidget_QOpenGLWidget, makeCurrent, arginfo_qt_openglwidgets_qopenglwidget_qopenglwidget_makecurrent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_OpenGLWidgets_QOpenGLWidget_QOpenGLWidget, makeCurrentQOpenGLWidgetTargetBuffer, arginfo_qt_openglwidgets_qopenglwidget_qopenglwidget_makecurrentqopenglwidgettargetbuffer, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_OpenGLWidgets_QOpenGLWidget_QOpenGLWidget, doneCurrent, arginfo_qt_openglwidgets_qopenglwidget_qopenglwidget_donecurrent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_OpenGLWidgets_QOpenGLWidget_QOpenGLWidget, context, arginfo_qt_openglwidgets_qopenglwidget_qopenglwidget_context, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_OpenGLWidgets_QOpenGLWidget_QOpenGLWidget, defaultFramebufferObject, arginfo_qt_openglwidgets_qopenglwidget_qopenglwidget_defaultframebufferobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_OpenGLWidgets_QOpenGLWidget_QOpenGLWidget, defaultFramebufferObjectQOpenGLWidgetTargetBuffer, arginfo_qt_openglwidgets_qopenglwidget_qopenglwidget_defaultframebufferobjectqopenglwidgettargetbuffer, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_OpenGLWidgets_QOpenGLWidget_QOpenGLWidget, grabFramebuffer, arginfo_qt_openglwidgets_qopenglwidget_qopenglwidget_grabframebuffer, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_OpenGLWidgets_QOpenGLWidget_QOpenGLWidget, grabFramebufferQOpenGLWidgetTargetBuffer, arginfo_qt_openglwidgets_qopenglwidget_qopenglwidget_grabframebufferqopenglwidgettargetbuffer, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_OpenGLWidgets_QOpenGLWidget_QOpenGLWidget, currentTargetBuffer, arginfo_qt_openglwidgets_qopenglwidget_qopenglwidget_currenttargetbuffer, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_OpenGLWidgets_QOpenGLWidget_QOpenGLWidget, aboutToCompose, arginfo_qt_openglwidgets_qopenglwidget_qopenglwidget_abouttocompose, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_OpenGLWidgets_QOpenGLWidget_QOpenGLWidget, frameSwapped, arginfo_qt_openglwidgets_qopenglwidget_qopenglwidget_frameswapped, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_OpenGLWidgets_QOpenGLWidget_QOpenGLWidget, aboutToResize, arginfo_qt_openglwidgets_qopenglwidget_qopenglwidget_abouttoresize, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_OpenGLWidgets_QOpenGLWidget_QOpenGLWidget, resized, arginfo_qt_openglwidgets_qopenglwidget_qopenglwidget_resized, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_OpenGLWidgets_QOpenGLWidget_QOpenGLWidget, initializeGL, arginfo_qt_openglwidgets_qopenglwidget_qopenglwidget_initializegl, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_OpenGLWidgets_QOpenGLWidget_QOpenGLWidget, resizeGL, arginfo_qt_openglwidgets_qopenglwidget_qopenglwidget_resizegl, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_OpenGLWidgets_QOpenGLWidget_QOpenGLWidget, paintGL, arginfo_qt_openglwidgets_qopenglwidget_qopenglwidget_paintgl, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_OpenGLWidgets_QOpenGLWidget_QOpenGLWidget, paintEvent, arginfo_qt_openglwidgets_qopenglwidget_qopenglwidget_paintevent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_OpenGLWidgets_QOpenGLWidget_QOpenGLWidget, resizeEvent, arginfo_qt_openglwidgets_qopenglwidget_qopenglwidget_resizeevent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_OpenGLWidgets_QOpenGLWidget_QOpenGLWidget, event, arginfo_qt_openglwidgets_qopenglwidget_qopenglwidget_event, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_OpenGLWidgets_QOpenGLWidget_QOpenGLWidget, metric, arginfo_qt_openglwidgets_qopenglwidget_qopenglwidget_metric, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_OpenGLWidgets_QOpenGLWidget_QOpenGLWidget, redirected, arginfo_qt_openglwidgets_qopenglwidget_qopenglwidget_redirected, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_OpenGLWidgets_QOpenGLWidget_QOpenGLWidget, paintEngine, arginfo_qt_openglwidgets_qopenglwidget_qopenglwidget_paintengine, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
