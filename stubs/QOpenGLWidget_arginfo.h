/* This is a generated file, edit the .stub.php file instead.
 * Stub hash: 0aaeb110c4c09598b5b47844c13593e93872fa78 */

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_QSurfaceFormat___construct, 0, 0, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_QSurfaceFormat_defaultFormat, 0, 0, QSurfaceFormat, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_QSurfaceFormat_majorVersion, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_QSurfaceFormat_minorVersion arginfo_class_QSurfaceFormat_majorVersion

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_QSurfaceFormat_setVersion, 0, 2, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, major, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, minor, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_QSurfaceFormat_profile, 0, 0, QSurfaceFormat\\OpenGLContextProfile, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_QSurfaceFormat_setProfile, 0, 1, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, profile, QSurfaceFormat\\OpenGLContextProfile, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_QSurfaceFormat_renderableType, 0, 0, QSurfaceFormat\\RenderableType, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_QSurfaceFormat_setRenderableType, 0, 1, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, type, QSurfaceFormat\\RenderableType, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_QOpenGLWidget___construct, 0, 0, 0)
	ZEND_ARG_OBJ_INFO_WITH_DEFAULT_VALUE(0, parent, QWidget, 1, "null")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_QOpenGLWidget_makeCurrent, 0, 0, IS_VOID, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_QOpenGLWidget_doneCurrent arginfo_class_QOpenGLWidget_makeCurrent

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_QOpenGLWidget_isValid, 0, 0, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_QOpenGLWidget_defaultFramebufferObject arginfo_class_QSurfaceFormat_majorVersion

#define arginfo_class_QOpenGLWidget_update arginfo_class_QOpenGLWidget_makeCurrent

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_QOpenGLWidget_setFormat, 0, 1, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, format, QSurfaceFormat, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_QOpenGLWidget_format arginfo_class_QSurfaceFormat_defaultFormat

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_QOpenGLPainter___construct, 0, 0, 1)
	ZEND_ARG_TYPE_INFO(0, paint, IS_CALLABLE, 0)
	ZEND_ARG_OBJ_INFO_WITH_DEFAULT_VALUE(0, parent, QWidget, 1, "null")
ZEND_END_ARG_INFO()

ZEND_METHOD(QSurfaceFormat, __construct);
ZEND_METHOD(QSurfaceFormat, defaultFormat);
ZEND_METHOD(QSurfaceFormat, majorVersion);
ZEND_METHOD(QSurfaceFormat, minorVersion);
ZEND_METHOD(QSurfaceFormat, setVersion);
ZEND_METHOD(QSurfaceFormat, profile);
ZEND_METHOD(QSurfaceFormat, setProfile);
ZEND_METHOD(QSurfaceFormat, renderableType);
ZEND_METHOD(QSurfaceFormat, setRenderableType);
ZEND_METHOD(QOpenGLWidget, __construct);
ZEND_METHOD(QOpenGLWidget, makeCurrent);
ZEND_METHOD(QOpenGLWidget, doneCurrent);
ZEND_METHOD(QOpenGLWidget, isValid);
ZEND_METHOD(QOpenGLWidget, defaultFramebufferObject);
ZEND_METHOD(QOpenGLWidget, update);
ZEND_METHOD(QOpenGLWidget, setFormat);
ZEND_METHOD(QOpenGLWidget, format);
ZEND_METHOD(QOpenGLPainter, __construct);

static const zend_function_entry class_QSurfaceFormat_methods[] = {
	ZEND_ME(QSurfaceFormat, __construct, arginfo_class_QSurfaceFormat___construct, ZEND_ACC_PUBLIC)
	ZEND_ME(QSurfaceFormat, defaultFormat, arginfo_class_QSurfaceFormat_defaultFormat, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	ZEND_ME(QSurfaceFormat, majorVersion, arginfo_class_QSurfaceFormat_majorVersion, ZEND_ACC_PUBLIC)
	ZEND_ME(QSurfaceFormat, minorVersion, arginfo_class_QSurfaceFormat_minorVersion, ZEND_ACC_PUBLIC)
	ZEND_ME(QSurfaceFormat, setVersion, arginfo_class_QSurfaceFormat_setVersion, ZEND_ACC_PUBLIC)
	ZEND_ME(QSurfaceFormat, profile, arginfo_class_QSurfaceFormat_profile, ZEND_ACC_PUBLIC)
	ZEND_ME(QSurfaceFormat, setProfile, arginfo_class_QSurfaceFormat_setProfile, ZEND_ACC_PUBLIC)
	ZEND_ME(QSurfaceFormat, renderableType, arginfo_class_QSurfaceFormat_renderableType, ZEND_ACC_PUBLIC)
	ZEND_ME(QSurfaceFormat, setRenderableType, arginfo_class_QSurfaceFormat_setRenderableType, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static const zend_function_entry class_QOpenGLWidget_methods[] = {
	ZEND_ME(QOpenGLWidget, __construct, arginfo_class_QOpenGLWidget___construct, ZEND_ACC_PUBLIC)
	ZEND_ME(QOpenGLWidget, makeCurrent, arginfo_class_QOpenGLWidget_makeCurrent, ZEND_ACC_PUBLIC)
	ZEND_ME(QOpenGLWidget, doneCurrent, arginfo_class_QOpenGLWidget_doneCurrent, ZEND_ACC_PUBLIC)
	ZEND_ME(QOpenGLWidget, isValid, arginfo_class_QOpenGLWidget_isValid, ZEND_ACC_PUBLIC)
	ZEND_ME(QOpenGLWidget, defaultFramebufferObject, arginfo_class_QOpenGLWidget_defaultFramebufferObject, ZEND_ACC_PUBLIC)
	ZEND_ME(QOpenGLWidget, update, arginfo_class_QOpenGLWidget_update, ZEND_ACC_PUBLIC)
	ZEND_ME(QOpenGLWidget, setFormat, arginfo_class_QOpenGLWidget_setFormat, ZEND_ACC_PUBLIC)
	ZEND_ME(QOpenGLWidget, format, arginfo_class_QOpenGLWidget_format, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static const zend_function_entry class_QOpenGLPainter_methods[] = {
	ZEND_ME(QOpenGLPainter, __construct, arginfo_class_QOpenGLPainter___construct, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static zend_class_entry *register_class_QSurfaceFormat_OpenGLContextProfile(void)
{
	zend_class_entry *class_entry = zend_register_internal_enum("QSurfaceFormat\\OpenGLContextProfile", IS_LONG, NULL);

	zval enum_case_NO_PROFILE_value;
	ZVAL_LONG(&enum_case_NO_PROFILE_value, 0);
	zend_enum_add_case_cstr(class_entry, "NO_PROFILE", &enum_case_NO_PROFILE_value);

	zval enum_case_CORE_PROFILE_value;
	ZVAL_LONG(&enum_case_CORE_PROFILE_value, 1);
	zend_enum_add_case_cstr(class_entry, "CORE_PROFILE", &enum_case_CORE_PROFILE_value);

	zval enum_case_COMPATIBILITY_PROFILE_value;
	ZVAL_LONG(&enum_case_COMPATIBILITY_PROFILE_value, 2);
	zend_enum_add_case_cstr(class_entry, "COMPATIBILITY_PROFILE", &enum_case_COMPATIBILITY_PROFILE_value);

	return class_entry;
}

static zend_class_entry *register_class_QSurfaceFormat_RenderableType(void)
{
	zend_class_entry *class_entry = zend_register_internal_enum("QSurfaceFormat\\RenderableType", IS_LONG, NULL);

	zval enum_case_DEFAULT_RENDERABLE_TYPE_value;
	ZVAL_LONG(&enum_case_DEFAULT_RENDERABLE_TYPE_value, 0);
	zend_enum_add_case_cstr(class_entry, "DEFAULT_RENDERABLE_TYPE", &enum_case_DEFAULT_RENDERABLE_TYPE_value);

	zval enum_case_OPEN_GL_value;
	ZVAL_LONG(&enum_case_OPEN_GL_value, 1);
	zend_enum_add_case_cstr(class_entry, "OPEN_GL", &enum_case_OPEN_GL_value);

	zval enum_case_OPEN_GLES_value;
	ZVAL_LONG(&enum_case_OPEN_GLES_value, 2);
	zend_enum_add_case_cstr(class_entry, "OPEN_GLES", &enum_case_OPEN_GLES_value);

	zval enum_case_OPEN_VG_value;
	ZVAL_LONG(&enum_case_OPEN_VG_value, 4);
	zend_enum_add_case_cstr(class_entry, "OPEN_VG", &enum_case_OPEN_VG_value);

	return class_entry;
}

static zend_class_entry *register_class_QSurfaceFormat(void)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "QSurfaceFormat", class_QSurfaceFormat_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, NULL, ZEND_ACC_FINAL|ZEND_ACC_NOT_SERIALIZABLE);

	return class_entry;
}

static zend_class_entry *register_class_QOpenGLWidget(zend_class_entry *class_entry_QWidget)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "QOpenGLWidget", class_QOpenGLWidget_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, class_entry_QWidget, ZEND_ACC_NOT_SERIALIZABLE);

	return class_entry;
}

static zend_class_entry *register_class_QOpenGLPainter(zend_class_entry *class_entry_QOpenGLWidget)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "QOpenGLPainter", class_QOpenGLPainter_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, class_entry_QOpenGLWidget, ZEND_ACC_FINAL|ZEND_ACC_NOT_SERIALIZABLE);

	return class_entry;
}
