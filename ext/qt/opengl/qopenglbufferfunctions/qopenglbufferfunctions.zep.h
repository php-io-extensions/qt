
extern zend_class_entry *qt_opengl_qopenglbufferfunctions_qopenglbufferfunctions_ce;

ZEPHIR_INIT_CLASS(Qt_OpenGL_QOpenglbufferFunctions_QOpenglbufferFunctions);

PHP_METHOD(Qt_OpenGL_QOpenglbufferFunctions_QOpenglbufferFunctions, swap);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_opengl_qopenglbufferfunctions_qopenglbufferfunctions_swap, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, value1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value2, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_opengl_qopenglbufferfunctions_qopenglbufferfunctions_method_entry) {
	PHP_ME(Qt_OpenGL_QOpenglbufferFunctions_QOpenglbufferFunctions, swap, arginfo_qt_opengl_qopenglbufferfunctions_qopenglbufferfunctions_swap, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
