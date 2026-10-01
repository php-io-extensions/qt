
extern zend_class_entry *qt_opengl_qopenglpaintdevice_qopenglpaintdevice_ce;

ZEPHIR_INIT_CLASS(Qt_OpenGL_QOpenGLPaintDevice_QOpenGLPaintDevice);

PHP_METHOD(Qt_OpenGL_QOpenGLPaintDevice_QOpenGLPaintDevice, new_);
PHP_METHOD(Qt_OpenGL_QOpenGLPaintDevice_QOpenGLPaintDevice, newQSize);
PHP_METHOD(Qt_OpenGL_QOpenGLPaintDevice_QOpenGLPaintDevice, newIntInt);
PHP_METHOD(Qt_OpenGL_QOpenGLPaintDevice_QOpenGLPaintDevice, devType);
PHP_METHOD(Qt_OpenGL_QOpenGLPaintDevice_QOpenGLPaintDevice, paintEngine);
PHP_METHOD(Qt_OpenGL_QOpenGLPaintDevice_QOpenGLPaintDevice, context);
PHP_METHOD(Qt_OpenGL_QOpenGLPaintDevice_QOpenGLPaintDevice, size);
PHP_METHOD(Qt_OpenGL_QOpenGLPaintDevice_QOpenGLPaintDevice, setSize);
PHP_METHOD(Qt_OpenGL_QOpenGLPaintDevice_QOpenGLPaintDevice, setDevicePixelRatio);
PHP_METHOD(Qt_OpenGL_QOpenGLPaintDevice_QOpenGLPaintDevice, dotsPerMeterX);
PHP_METHOD(Qt_OpenGL_QOpenGLPaintDevice_QOpenGLPaintDevice, dotsPerMeterY);
PHP_METHOD(Qt_OpenGL_QOpenGLPaintDevice_QOpenGLPaintDevice, setDotsPerMeterX);
PHP_METHOD(Qt_OpenGL_QOpenGLPaintDevice_QOpenGLPaintDevice, setDotsPerMeterY);
PHP_METHOD(Qt_OpenGL_QOpenGLPaintDevice_QOpenGLPaintDevice, setPaintFlipped);
PHP_METHOD(Qt_OpenGL_QOpenGLPaintDevice_QOpenGLPaintDevice, paintFlipped);
PHP_METHOD(Qt_OpenGL_QOpenGLPaintDevice_QOpenGLPaintDevice, ensureActiveTarget);
PHP_METHOD(Qt_OpenGL_QOpenGLPaintDevice_QOpenGLPaintDevice, metric);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_opengl_qopenglpaintdevice_qopenglpaintdevice_new_, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_opengl_qopenglpaintdevice_qopenglpaintdevice_newqsize, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sizeWidth, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sizeHeight, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_opengl_qopenglpaintdevice_qopenglpaintdevice_newintint, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, height, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_opengl_qopenglpaintdevice_qopenglpaintdevice_devtype, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_opengl_qopenglpaintdevice_qopenglpaintdevice_paintengine, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_opengl_qopenglpaintdevice_qopenglpaintdevice_context, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_opengl_qopenglpaintdevice_qopenglpaintdevice_size, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_opengl_qopenglpaintdevice_qopenglpaintdevice_setsize, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sizeWidth, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sizeHeight, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_opengl_qopenglpaintdevice_qopenglpaintdevice_setdevicepixelratio, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, devicePixelRatio, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_opengl_qopenglpaintdevice_qopenglpaintdevice_dotspermeterx, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_opengl_qopenglpaintdevice_qopenglpaintdevice_dotspermetery, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_opengl_qopenglpaintdevice_qopenglpaintdevice_setdotspermeterx, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_opengl_qopenglpaintdevice_qopenglpaintdevice_setdotspermetery, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_opengl_qopenglpaintdevice_qopenglpaintdevice_setpaintflipped, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, flipped, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_opengl_qopenglpaintdevice_qopenglpaintdevice_paintflipped, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_opengl_qopenglpaintdevice_qopenglpaintdevice_ensureactivetarget, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_opengl_qopenglpaintdevice_qopenglpaintdevice_metric, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, metric, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_opengl_qopenglpaintdevice_qopenglpaintdevice_method_entry) {
	PHP_ME(Qt_OpenGL_QOpenGLPaintDevice_QOpenGLPaintDevice, new_, arginfo_qt_opengl_qopenglpaintdevice_qopenglpaintdevice_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_OpenGL_QOpenGLPaintDevice_QOpenGLPaintDevice, newQSize, arginfo_qt_opengl_qopenglpaintdevice_qopenglpaintdevice_newqsize, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_OpenGL_QOpenGLPaintDevice_QOpenGLPaintDevice, newIntInt, arginfo_qt_opengl_qopenglpaintdevice_qopenglpaintdevice_newintint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_OpenGL_QOpenGLPaintDevice_QOpenGLPaintDevice, devType, arginfo_qt_opengl_qopenglpaintdevice_qopenglpaintdevice_devtype, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_OpenGL_QOpenGLPaintDevice_QOpenGLPaintDevice, paintEngine, arginfo_qt_opengl_qopenglpaintdevice_qopenglpaintdevice_paintengine, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_OpenGL_QOpenGLPaintDevice_QOpenGLPaintDevice, context, arginfo_qt_opengl_qopenglpaintdevice_qopenglpaintdevice_context, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_OpenGL_QOpenGLPaintDevice_QOpenGLPaintDevice, size, arginfo_qt_opengl_qopenglpaintdevice_qopenglpaintdevice_size, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_OpenGL_QOpenGLPaintDevice_QOpenGLPaintDevice, setSize, arginfo_qt_opengl_qopenglpaintdevice_qopenglpaintdevice_setsize, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_OpenGL_QOpenGLPaintDevice_QOpenGLPaintDevice, setDevicePixelRatio, arginfo_qt_opengl_qopenglpaintdevice_qopenglpaintdevice_setdevicepixelratio, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_OpenGL_QOpenGLPaintDevice_QOpenGLPaintDevice, dotsPerMeterX, arginfo_qt_opengl_qopenglpaintdevice_qopenglpaintdevice_dotspermeterx, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_OpenGL_QOpenGLPaintDevice_QOpenGLPaintDevice, dotsPerMeterY, arginfo_qt_opengl_qopenglpaintdevice_qopenglpaintdevice_dotspermetery, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_OpenGL_QOpenGLPaintDevice_QOpenGLPaintDevice, setDotsPerMeterX, arginfo_qt_opengl_qopenglpaintdevice_qopenglpaintdevice_setdotspermeterx, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_OpenGL_QOpenGLPaintDevice_QOpenGLPaintDevice, setDotsPerMeterY, arginfo_qt_opengl_qopenglpaintdevice_qopenglpaintdevice_setdotspermetery, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_OpenGL_QOpenGLPaintDevice_QOpenGLPaintDevice, setPaintFlipped, arginfo_qt_opengl_qopenglpaintdevice_qopenglpaintdevice_setpaintflipped, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_OpenGL_QOpenGLPaintDevice_QOpenGLPaintDevice, paintFlipped, arginfo_qt_opengl_qopenglpaintdevice_qopenglpaintdevice_paintflipped, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_OpenGL_QOpenGLPaintDevice_QOpenGLPaintDevice, ensureActiveTarget, arginfo_qt_opengl_qopenglpaintdevice_qopenglpaintdevice_ensureactivetarget, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_OpenGL_QOpenGLPaintDevice_QOpenGLPaintDevice, metric, arginfo_qt_opengl_qopenglpaintdevice_qopenglpaintdevice_metric, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
