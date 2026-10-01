
extern zend_class_entry *qt_opengl_qopenglbuffer_qopenglbuffer_ce;

ZEPHIR_INIT_CLASS(Qt_OpenGL_QOpenGLBuffer_QOpenGLBuffer);

PHP_METHOD(Qt_OpenGL_QOpenGLBuffer_QOpenGLBuffer, new_);
PHP_METHOD(Qt_OpenGL_QOpenGLBuffer_QOpenGLBuffer, newQOpenGLBufferType);
PHP_METHOD(Qt_OpenGL_QOpenGLBuffer_QOpenGLBuffer, newQOpenGLBuffer);
PHP_METHOD(Qt_OpenGL_QOpenGLBuffer_QOpenGLBuffer, swap);
PHP_METHOD(Qt_OpenGL_QOpenGLBuffer_QOpenGLBuffer, type);
PHP_METHOD(Qt_OpenGL_QOpenGLBuffer_QOpenGLBuffer, usagePattern);
PHP_METHOD(Qt_OpenGL_QOpenGLBuffer_QOpenGLBuffer, setUsagePattern);
PHP_METHOD(Qt_OpenGL_QOpenGLBuffer_QOpenGLBuffer, create);
PHP_METHOD(Qt_OpenGL_QOpenGLBuffer_QOpenGLBuffer, isCreated);
PHP_METHOD(Qt_OpenGL_QOpenGLBuffer_QOpenGLBuffer, destroy);
PHP_METHOD(Qt_OpenGL_QOpenGLBuffer_QOpenGLBuffer, bind);
PHP_METHOD(Qt_OpenGL_QOpenGLBuffer_QOpenGLBuffer, release);
PHP_METHOD(Qt_OpenGL_QOpenGLBuffer_QOpenGLBuffer, releaseQOpenGLBufferType);
PHP_METHOD(Qt_OpenGL_QOpenGLBuffer_QOpenGLBuffer, bufferId);
PHP_METHOD(Qt_OpenGL_QOpenGLBuffer_QOpenGLBuffer, size);
PHP_METHOD(Qt_OpenGL_QOpenGLBuffer_QOpenGLBuffer, allocate);
PHP_METHOD(Qt_OpenGL_QOpenGLBuffer_QOpenGLBuffer, unmap);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_opengl_qopenglbuffer_qopenglbuffer_new_, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_opengl_qopenglbuffer_qopenglbuffer_newqopenglbuffertype, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, type, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_opengl_qopenglbuffer_qopenglbuffer_newqopenglbuffer, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, other, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_opengl_qopenglbuffer_qopenglbuffer_swap, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, other, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_opengl_qopenglbuffer_qopenglbuffer_type, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_opengl_qopenglbuffer_qopenglbuffer_usagepattern, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_opengl_qopenglbuffer_qopenglbuffer_setusagepattern, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_opengl_qopenglbuffer_qopenglbuffer_create, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_opengl_qopenglbuffer_qopenglbuffer_iscreated, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_opengl_qopenglbuffer_qopenglbuffer_destroy, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_opengl_qopenglbuffer_qopenglbuffer_bind, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_opengl_qopenglbuffer_qopenglbuffer_release, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_opengl_qopenglbuffer_qopenglbuffer_releaseqopenglbuffertype, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, type, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_opengl_qopenglbuffer_qopenglbuffer_bufferid, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_opengl_qopenglbuffer_qopenglbuffer_size, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_opengl_qopenglbuffer_qopenglbuffer_allocate, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, count, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_opengl_qopenglbuffer_qopenglbuffer_unmap, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_opengl_qopenglbuffer_qopenglbuffer_method_entry) {
	PHP_ME(Qt_OpenGL_QOpenGLBuffer_QOpenGLBuffer, new_, arginfo_qt_opengl_qopenglbuffer_qopenglbuffer_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_OpenGL_QOpenGLBuffer_QOpenGLBuffer, newQOpenGLBufferType, arginfo_qt_opengl_qopenglbuffer_qopenglbuffer_newqopenglbuffertype, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_OpenGL_QOpenGLBuffer_QOpenGLBuffer, newQOpenGLBuffer, arginfo_qt_opengl_qopenglbuffer_qopenglbuffer_newqopenglbuffer, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_OpenGL_QOpenGLBuffer_QOpenGLBuffer, swap, arginfo_qt_opengl_qopenglbuffer_qopenglbuffer_swap, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_OpenGL_QOpenGLBuffer_QOpenGLBuffer, type, arginfo_qt_opengl_qopenglbuffer_qopenglbuffer_type, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_OpenGL_QOpenGLBuffer_QOpenGLBuffer, usagePattern, arginfo_qt_opengl_qopenglbuffer_qopenglbuffer_usagepattern, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_OpenGL_QOpenGLBuffer_QOpenGLBuffer, setUsagePattern, arginfo_qt_opengl_qopenglbuffer_qopenglbuffer_setusagepattern, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_OpenGL_QOpenGLBuffer_QOpenGLBuffer, create, arginfo_qt_opengl_qopenglbuffer_qopenglbuffer_create, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_OpenGL_QOpenGLBuffer_QOpenGLBuffer, isCreated, arginfo_qt_opengl_qopenglbuffer_qopenglbuffer_iscreated, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_OpenGL_QOpenGLBuffer_QOpenGLBuffer, destroy, arginfo_qt_opengl_qopenglbuffer_qopenglbuffer_destroy, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_OpenGL_QOpenGLBuffer_QOpenGLBuffer, bind, arginfo_qt_opengl_qopenglbuffer_qopenglbuffer_bind, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_OpenGL_QOpenGLBuffer_QOpenGLBuffer, release, arginfo_qt_opengl_qopenglbuffer_qopenglbuffer_release, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_OpenGL_QOpenGLBuffer_QOpenGLBuffer, releaseQOpenGLBufferType, arginfo_qt_opengl_qopenglbuffer_qopenglbuffer_releaseqopenglbuffertype, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_OpenGL_QOpenGLBuffer_QOpenGLBuffer, bufferId, arginfo_qt_opengl_qopenglbuffer_qopenglbuffer_bufferid, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_OpenGL_QOpenGLBuffer_QOpenGLBuffer, size, arginfo_qt_opengl_qopenglbuffer_qopenglbuffer_size, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_OpenGL_QOpenGLBuffer_QOpenGLBuffer, allocate, arginfo_qt_opengl_qopenglbuffer_qopenglbuffer_allocate, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_OpenGL_QOpenGLBuffer_QOpenGLBuffer, unmap, arginfo_qt_opengl_qopenglbuffer_qopenglbuffer_unmap, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
