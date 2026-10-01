
extern zend_class_entry *qt_opengl_qopengldebugmessage_qopengldebugmessage_ce;

ZEPHIR_INIT_CLASS(Qt_OpenGL_QOpenGLDebugMessage_QOpenGLDebugMessage);

PHP_METHOD(Qt_OpenGL_QOpenGLDebugMessage_QOpenGLDebugMessage, new_);
PHP_METHOD(Qt_OpenGL_QOpenGLDebugMessage_QOpenGLDebugMessage, newQOpenGLDebugMessage);
PHP_METHOD(Qt_OpenGL_QOpenGLDebugMessage_QOpenGLDebugMessage, swap);
PHP_METHOD(Qt_OpenGL_QOpenGLDebugMessage_QOpenGLDebugMessage, source);
PHP_METHOD(Qt_OpenGL_QOpenGLDebugMessage_QOpenGLDebugMessage, type);
PHP_METHOD(Qt_OpenGL_QOpenGLDebugMessage_QOpenGLDebugMessage, severity);
PHP_METHOD(Qt_OpenGL_QOpenGLDebugMessage_QOpenGLDebugMessage, id);
PHP_METHOD(Qt_OpenGL_QOpenGLDebugMessage_QOpenGLDebugMessage, message);
PHP_METHOD(Qt_OpenGL_QOpenGLDebugMessage_QOpenGLDebugMessage, createApplicationMessage);
PHP_METHOD(Qt_OpenGL_QOpenGLDebugMessage_QOpenGLDebugMessage, createThirdPartyMessage);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_opengl_qopengldebugmessage_qopengldebugmessage_new_, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_opengl_qopengldebugmessage_qopengldebugmessage_newqopengldebugmessage, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, debugMessage, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_opengl_qopengldebugmessage_qopengldebugmessage_swap, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, other, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_opengl_qopengldebugmessage_qopengldebugmessage_source, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_opengl_qopengldebugmessage_qopengldebugmessage_type, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_opengl_qopengldebugmessage_qopengldebugmessage_severity, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_opengl_qopengldebugmessage_qopengldebugmessage_id, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_opengl_qopengldebugmessage_qopengldebugmessage_message, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_opengl_qopengldebugmessage_qopengldebugmessage_createapplicationmessage, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, text, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, id, IS_LONG, 0)
	ZEND_ARG_INFO(0, severity)
	ZEND_ARG_INFO(0, type)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_opengl_qopengldebugmessage_qopengldebugmessage_createthirdpartymessage, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, text, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, id, IS_LONG, 0)
	ZEND_ARG_INFO(0, severity)
	ZEND_ARG_INFO(0, type)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_opengl_qopengldebugmessage_qopengldebugmessage_method_entry) {
	PHP_ME(Qt_OpenGL_QOpenGLDebugMessage_QOpenGLDebugMessage, new_, arginfo_qt_opengl_qopengldebugmessage_qopengldebugmessage_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_OpenGL_QOpenGLDebugMessage_QOpenGLDebugMessage, newQOpenGLDebugMessage, arginfo_qt_opengl_qopengldebugmessage_qopengldebugmessage_newqopengldebugmessage, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_OpenGL_QOpenGLDebugMessage_QOpenGLDebugMessage, swap, arginfo_qt_opengl_qopengldebugmessage_qopengldebugmessage_swap, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_OpenGL_QOpenGLDebugMessage_QOpenGLDebugMessage, source, arginfo_qt_opengl_qopengldebugmessage_qopengldebugmessage_source, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_OpenGL_QOpenGLDebugMessage_QOpenGLDebugMessage, type, arginfo_qt_opengl_qopengldebugmessage_qopengldebugmessage_type, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_OpenGL_QOpenGLDebugMessage_QOpenGLDebugMessage, severity, arginfo_qt_opengl_qopengldebugmessage_qopengldebugmessage_severity, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_OpenGL_QOpenGLDebugMessage_QOpenGLDebugMessage, id, arginfo_qt_opengl_qopengldebugmessage_qopengldebugmessage_id, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_OpenGL_QOpenGLDebugMessage_QOpenGLDebugMessage, message, arginfo_qt_opengl_qopengldebugmessage_qopengldebugmessage_message, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_OpenGL_QOpenGLDebugMessage_QOpenGLDebugMessage, createApplicationMessage, arginfo_qt_opengl_qopengldebugmessage_qopengldebugmessage_createapplicationmessage, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_OpenGL_QOpenGLDebugMessage_QOpenGLDebugMessage, createThirdPartyMessage, arginfo_qt_opengl_qopengldebugmessage_qopengldebugmessage_createthirdpartymessage, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
