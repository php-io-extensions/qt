
extern zend_class_entry *qt_opengl_qopenglshader_qopenglshader_ce;

ZEPHIR_INIT_CLASS(Qt_OpenGL_QOpenGLShader_QOpenGLShader);

PHP_METHOD(Qt_OpenGL_QOpenGLShader_QOpenGLShader, staticMetaObject);
PHP_METHOD(Qt_OpenGL_QOpenGLShader_QOpenGLShader, tr);
PHP_METHOD(Qt_OpenGL_QOpenGLShader_QOpenGLShader, new_);
PHP_METHOD(Qt_OpenGL_QOpenGLShader_QOpenGLShader, shaderType);
PHP_METHOD(Qt_OpenGL_QOpenGLShader_QOpenGLShader, compileSourceCode);
PHP_METHOD(Qt_OpenGL_QOpenGLShader_QOpenGLShader, compileSourceCodeQByteArray);
PHP_METHOD(Qt_OpenGL_QOpenGLShader_QOpenGLShader, compileSourceCodeQString);
PHP_METHOD(Qt_OpenGL_QOpenGLShader_QOpenGLShader, compileSourceFile);
PHP_METHOD(Qt_OpenGL_QOpenGLShader_QOpenGLShader, sourceCode);
PHP_METHOD(Qt_OpenGL_QOpenGLShader_QOpenGLShader, isCompiled);
PHP_METHOD(Qt_OpenGL_QOpenGLShader_QOpenGLShader, log);
PHP_METHOD(Qt_OpenGL_QOpenGLShader_QOpenGLShader, shaderId);
PHP_METHOD(Qt_OpenGL_QOpenGLShader_QOpenGLShader, hasOpenGLShaders);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_opengl_qopenglshader_qopenglshader_staticmetaobject, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_opengl_qopenglshader_qopenglshader_tr, 0, 1, IS_STRING, 0)
	ZEND_ARG_INFO(0, s)
	ZEND_ARG_INFO(0, c)
	ZEND_ARG_TYPE_INFO(0, n, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_opengl_qopenglshader_qopenglshader_new_, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, type, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_opengl_qopenglshader_qopenglshader_shadertype, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_opengl_qopenglshader_qopenglshader_compilesourcecode, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_INFO(0, source)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_opengl_qopenglshader_qopenglshader_compilesourcecodeqbytearray, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, source, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_opengl_qopenglshader_qopenglshader_compilesourcecodeqstring, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, source, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_opengl_qopenglshader_qopenglshader_compilesourcefile, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, fileName, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_opengl_qopenglshader_qopenglshader_sourcecode, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_opengl_qopenglshader_qopenglshader_iscompiled, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_opengl_qopenglshader_qopenglshader_log, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_opengl_qopenglshader_qopenglshader_shaderid, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_opengl_qopenglshader_qopenglshader_hasopenglshaders, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, type, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, context, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_opengl_qopenglshader_qopenglshader_method_entry) {
	PHP_ME(Qt_OpenGL_QOpenGLShader_QOpenGLShader, staticMetaObject, arginfo_qt_opengl_qopenglshader_qopenglshader_staticmetaobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_OpenGL_QOpenGLShader_QOpenGLShader, tr, arginfo_qt_opengl_qopenglshader_qopenglshader_tr, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_OpenGL_QOpenGLShader_QOpenGLShader, new_, arginfo_qt_opengl_qopenglshader_qopenglshader_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_OpenGL_QOpenGLShader_QOpenGLShader, shaderType, arginfo_qt_opengl_qopenglshader_qopenglshader_shadertype, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_OpenGL_QOpenGLShader_QOpenGLShader, compileSourceCode, arginfo_qt_opengl_qopenglshader_qopenglshader_compilesourcecode, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_OpenGL_QOpenGLShader_QOpenGLShader, compileSourceCodeQByteArray, arginfo_qt_opengl_qopenglshader_qopenglshader_compilesourcecodeqbytearray, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_OpenGL_QOpenGLShader_QOpenGLShader, compileSourceCodeQString, arginfo_qt_opengl_qopenglshader_qopenglshader_compilesourcecodeqstring, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_OpenGL_QOpenGLShader_QOpenGLShader, compileSourceFile, arginfo_qt_opengl_qopenglshader_qopenglshader_compilesourcefile, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_OpenGL_QOpenGLShader_QOpenGLShader, sourceCode, arginfo_qt_opengl_qopenglshader_qopenglshader_sourcecode, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_OpenGL_QOpenGLShader_QOpenGLShader, isCompiled, arginfo_qt_opengl_qopenglshader_qopenglshader_iscompiled, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_OpenGL_QOpenGLShader_QOpenGLShader, log, arginfo_qt_opengl_qopenglshader_qopenglshader_log, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_OpenGL_QOpenGLShader_QOpenGLShader, shaderId, arginfo_qt_opengl_qopenglshader_qopenglshader_shaderid, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_OpenGL_QOpenGLShader_QOpenGLShader, hasOpenGLShaders, arginfo_qt_opengl_qopenglshader_qopenglshader_hasopenglshaders, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
