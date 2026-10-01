
extern zend_class_entry *qt_opengl_qopengltimerquery_qopengltimerquery_ce;

ZEPHIR_INIT_CLASS(Qt_OpenGL_QOpenGLTimerQuery_QOpenGLTimerQuery);

PHP_METHOD(Qt_OpenGL_QOpenGLTimerQuery_QOpenGLTimerQuery, staticMetaObject);
PHP_METHOD(Qt_OpenGL_QOpenGLTimerQuery_QOpenGLTimerQuery, tr);
PHP_METHOD(Qt_OpenGL_QOpenGLTimerQuery_QOpenGLTimerQuery, new_);
PHP_METHOD(Qt_OpenGL_QOpenGLTimerQuery_QOpenGLTimerQuery, create);
PHP_METHOD(Qt_OpenGL_QOpenGLTimerQuery_QOpenGLTimerQuery, destroy);
PHP_METHOD(Qt_OpenGL_QOpenGLTimerQuery_QOpenGLTimerQuery, isCreated);
PHP_METHOD(Qt_OpenGL_QOpenGLTimerQuery_QOpenGLTimerQuery, objectId);
PHP_METHOD(Qt_OpenGL_QOpenGLTimerQuery_QOpenGLTimerQuery, begin);
PHP_METHOD(Qt_OpenGL_QOpenGLTimerQuery_QOpenGLTimerQuery, end);
PHP_METHOD(Qt_OpenGL_QOpenGLTimerQuery_QOpenGLTimerQuery, waitForTimestamp);
PHP_METHOD(Qt_OpenGL_QOpenGLTimerQuery_QOpenGLTimerQuery, recordTimestamp);
PHP_METHOD(Qt_OpenGL_QOpenGLTimerQuery_QOpenGLTimerQuery, isResultAvailable);
PHP_METHOD(Qt_OpenGL_QOpenGLTimerQuery_QOpenGLTimerQuery, waitForResult);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_opengl_qopengltimerquery_qopengltimerquery_staticmetaobject, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_opengl_qopengltimerquery_qopengltimerquery_tr, 0, 1, IS_STRING, 0)
	ZEND_ARG_INFO(0, s)
	ZEND_ARG_INFO(0, c)
	ZEND_ARG_TYPE_INFO(0, n, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_opengl_qopengltimerquery_qopengltimerquery_new_, 0, 0, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_opengl_qopengltimerquery_qopengltimerquery_create, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_opengl_qopengltimerquery_qopengltimerquery_destroy, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_opengl_qopengltimerquery_qopengltimerquery_iscreated, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_opengl_qopengltimerquery_qopengltimerquery_objectid, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_opengl_qopengltimerquery_qopengltimerquery_begin, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_opengl_qopengltimerquery_qopengltimerquery_end, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_opengl_qopengltimerquery_qopengltimerquery_waitfortimestamp, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_opengl_qopengltimerquery_qopengltimerquery_recordtimestamp, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_opengl_qopengltimerquery_qopengltimerquery_isresultavailable, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_opengl_qopengltimerquery_qopengltimerquery_waitforresult, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_opengl_qopengltimerquery_qopengltimerquery_method_entry) {
	PHP_ME(Qt_OpenGL_QOpenGLTimerQuery_QOpenGLTimerQuery, staticMetaObject, arginfo_qt_opengl_qopengltimerquery_qopengltimerquery_staticmetaobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_OpenGL_QOpenGLTimerQuery_QOpenGLTimerQuery, tr, arginfo_qt_opengl_qopengltimerquery_qopengltimerquery_tr, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_OpenGL_QOpenGLTimerQuery_QOpenGLTimerQuery, new_, arginfo_qt_opengl_qopengltimerquery_qopengltimerquery_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_OpenGL_QOpenGLTimerQuery_QOpenGLTimerQuery, create, arginfo_qt_opengl_qopengltimerquery_qopengltimerquery_create, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_OpenGL_QOpenGLTimerQuery_QOpenGLTimerQuery, destroy, arginfo_qt_opengl_qopengltimerquery_qopengltimerquery_destroy, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_OpenGL_QOpenGLTimerQuery_QOpenGLTimerQuery, isCreated, arginfo_qt_opengl_qopengltimerquery_qopengltimerquery_iscreated, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_OpenGL_QOpenGLTimerQuery_QOpenGLTimerQuery, objectId, arginfo_qt_opengl_qopengltimerquery_qopengltimerquery_objectid, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_OpenGL_QOpenGLTimerQuery_QOpenGLTimerQuery, begin, arginfo_qt_opengl_qopengltimerquery_qopengltimerquery_begin, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_OpenGL_QOpenGLTimerQuery_QOpenGLTimerQuery, end, arginfo_qt_opengl_qopengltimerquery_qopengltimerquery_end, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_OpenGL_QOpenGLTimerQuery_QOpenGLTimerQuery, waitForTimestamp, arginfo_qt_opengl_qopengltimerquery_qopengltimerquery_waitfortimestamp, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_OpenGL_QOpenGLTimerQuery_QOpenGLTimerQuery, recordTimestamp, arginfo_qt_opengl_qopengltimerquery_qopengltimerquery_recordtimestamp, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_OpenGL_QOpenGLTimerQuery_QOpenGLTimerQuery, isResultAvailable, arginfo_qt_opengl_qopengltimerquery_qopengltimerquery_isresultavailable, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_OpenGL_QOpenGLTimerQuery_QOpenGLTimerQuery, waitForResult, arginfo_qt_opengl_qopengltimerquery_qopengltimerquery_waitforresult, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
