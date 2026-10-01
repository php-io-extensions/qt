
extern zend_class_entry *qt_opengl_qopengltextureblitter_qopengltextureblitter_ce;

ZEPHIR_INIT_CLASS(Qt_OpenGL_QOpenGLTextureBlitter_QOpenGLTextureBlitter);

PHP_METHOD(Qt_OpenGL_QOpenGLTextureBlitter_QOpenGLTextureBlitter, new_);
PHP_METHOD(Qt_OpenGL_QOpenGLTextureBlitter_QOpenGLTextureBlitter, create);
PHP_METHOD(Qt_OpenGL_QOpenGLTextureBlitter_QOpenGLTextureBlitter, isCreated);
PHP_METHOD(Qt_OpenGL_QOpenGLTextureBlitter_QOpenGLTextureBlitter, destroy);
PHP_METHOD(Qt_OpenGL_QOpenGLTextureBlitter_QOpenGLTextureBlitter, supportsExternalOESTarget);
PHP_METHOD(Qt_OpenGL_QOpenGLTextureBlitter_QOpenGLTextureBlitter, supportsRectangleTarget);
PHP_METHOD(Qt_OpenGL_QOpenGLTextureBlitter_QOpenGLTextureBlitter, bind);
PHP_METHOD(Qt_OpenGL_QOpenGLTextureBlitter_QOpenGLTextureBlitter, release);
PHP_METHOD(Qt_OpenGL_QOpenGLTextureBlitter_QOpenGLTextureBlitter, setRedBlueSwizzle);
PHP_METHOD(Qt_OpenGL_QOpenGLTextureBlitter_QOpenGLTextureBlitter, setOpacity);
PHP_METHOD(Qt_OpenGL_QOpenGLTextureBlitter_QOpenGLTextureBlitter, blit);
PHP_METHOD(Qt_OpenGL_QOpenGLTextureBlitter_QOpenGLTextureBlitter, targetTransform);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_opengl_qopengltextureblitter_qopengltextureblitter_new_, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_opengl_qopengltextureblitter_qopengltextureblitter_create, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_opengl_qopengltextureblitter_qopengltextureblitter_iscreated, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_opengl_qopengltextureblitter_qopengltextureblitter_destroy, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_opengl_qopengltextureblitter_qopengltextureblitter_supportsexternaloestarget, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_opengl_qopengltextureblitter_qopengltextureblitter_supportsrectangletarget, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_opengl_qopengltextureblitter_qopengltextureblitter_bind, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, target, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_opengl_qopengltextureblitter_qopengltextureblitter_release, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_opengl_qopengltextureblitter_qopengltextureblitter_setredblueswizzle, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, swizzle, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_opengl_qopengltextureblitter_qopengltextureblitter_setopacity, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, opacity, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_opengl_qopengltextureblitter_qopengltextureblitter_blit, 0, 4, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, texture, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, targetTransform, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sourceOrigin, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_opengl_qopengltextureblitter_qopengltextureblitter_targettransform, 0, 8, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, targetX, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, targetY, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, targetWidth, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, targetHeight, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, viewportX, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, viewportY, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, viewportWidth, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, viewportHeight, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_opengl_qopengltextureblitter_qopengltextureblitter_method_entry) {
	PHP_ME(Qt_OpenGL_QOpenGLTextureBlitter_QOpenGLTextureBlitter, new_, arginfo_qt_opengl_qopengltextureblitter_qopengltextureblitter_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_OpenGL_QOpenGLTextureBlitter_QOpenGLTextureBlitter, create, arginfo_qt_opengl_qopengltextureblitter_qopengltextureblitter_create, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_OpenGL_QOpenGLTextureBlitter_QOpenGLTextureBlitter, isCreated, arginfo_qt_opengl_qopengltextureblitter_qopengltextureblitter_iscreated, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_OpenGL_QOpenGLTextureBlitter_QOpenGLTextureBlitter, destroy, arginfo_qt_opengl_qopengltextureblitter_qopengltextureblitter_destroy, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_OpenGL_QOpenGLTextureBlitter_QOpenGLTextureBlitter, supportsExternalOESTarget, arginfo_qt_opengl_qopengltextureblitter_qopengltextureblitter_supportsexternaloestarget, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_OpenGL_QOpenGLTextureBlitter_QOpenGLTextureBlitter, supportsRectangleTarget, arginfo_qt_opengl_qopengltextureblitter_qopengltextureblitter_supportsrectangletarget, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_OpenGL_QOpenGLTextureBlitter_QOpenGLTextureBlitter, bind, arginfo_qt_opengl_qopengltextureblitter_qopengltextureblitter_bind, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_OpenGL_QOpenGLTextureBlitter_QOpenGLTextureBlitter, release, arginfo_qt_opengl_qopengltextureblitter_qopengltextureblitter_release, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_OpenGL_QOpenGLTextureBlitter_QOpenGLTextureBlitter, setRedBlueSwizzle, arginfo_qt_opengl_qopengltextureblitter_qopengltextureblitter_setredblueswizzle, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_OpenGL_QOpenGLTextureBlitter_QOpenGLTextureBlitter, setOpacity, arginfo_qt_opengl_qopengltextureblitter_qopengltextureblitter_setopacity, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_OpenGL_QOpenGLTextureBlitter_QOpenGLTextureBlitter, blit, arginfo_qt_opengl_qopengltextureblitter_qopengltextureblitter_blit, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_OpenGL_QOpenGLTextureBlitter_QOpenGLTextureBlitter, targetTransform, arginfo_qt_opengl_qopengltextureblitter_qopengltextureblitter_targettransform, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
