/* This is a generated file, edit the .stub.php file instead.
 * Stub hash: 1dec320225616945456b756dccdb4b386441fe1d */

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_QWindow___construct, 0, 0, 0)
	ZEND_ARG_OBJ_INFO_WITH_DEFAULT_VALUE(0, parent, QWindow, 1, "null")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_QWindow_setSurfaceType, 0, 1, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, surfaceType, QSurface\\SurfaceType, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_QWindow_surfaceType, 0, 0, QSurface\\SurfaceType, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_QWindow_winId, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_QWindow_create, 0, 0, IS_VOID, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_QWindow_show arginfo_class_QWindow_create

#define arginfo_class_QWindow_hide arginfo_class_QWindow_create

#define arginfo_class_QWindow_destroy arginfo_class_QWindow_create

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_QWindow_isExposed, 0, 0, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_QWindow_resize, 0, 2, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, w, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, h, IS_LONG, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_QWindow_close arginfo_class_QWindow_isExposed

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_QWindow_setVulkanInstance, 0, 1, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, instance, QVulkanInstance, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_QWindow_vulkanInstance, 0, 0, QVulkanInstance, 1)
ZEND_END_ARG_INFO()

#define arginfo_class_QWindow_width arginfo_class_QWindow_winId

#define arginfo_class_QWindow_height arginfo_class_QWindow_winId

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_QWindow_devicePixelRatio, 0, 0, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_METHOD(QWindow, __construct);
ZEND_METHOD(QWindow, setSurfaceType);
ZEND_METHOD(QWindow, surfaceType);
ZEND_METHOD(QWindow, winId);
ZEND_METHOD(QWindow, create);
ZEND_METHOD(QWindow, show);
ZEND_METHOD(QWindow, hide);
ZEND_METHOD(QWindow, destroy);
ZEND_METHOD(QWindow, isExposed);
ZEND_METHOD(QWindow, resize);
ZEND_METHOD(QWindow, close);
ZEND_METHOD(QWindow, setVulkanInstance);
ZEND_METHOD(QWindow, vulkanInstance);
ZEND_METHOD(QWindow, width);
ZEND_METHOD(QWindow, height);
ZEND_METHOD(QWindow, devicePixelRatio);

static const zend_function_entry class_QWindow_methods[] = {
	ZEND_ME(QWindow, __construct, arginfo_class_QWindow___construct, ZEND_ACC_PUBLIC)
	ZEND_ME(QWindow, setSurfaceType, arginfo_class_QWindow_setSurfaceType, ZEND_ACC_PUBLIC)
	ZEND_ME(QWindow, surfaceType, arginfo_class_QWindow_surfaceType, ZEND_ACC_PUBLIC)
	ZEND_ME(QWindow, winId, arginfo_class_QWindow_winId, ZEND_ACC_PUBLIC)
	ZEND_ME(QWindow, create, arginfo_class_QWindow_create, ZEND_ACC_PUBLIC)
	ZEND_ME(QWindow, show, arginfo_class_QWindow_show, ZEND_ACC_PUBLIC)
	ZEND_ME(QWindow, hide, arginfo_class_QWindow_hide, ZEND_ACC_PUBLIC)
	ZEND_ME(QWindow, destroy, arginfo_class_QWindow_destroy, ZEND_ACC_PUBLIC)
	ZEND_ME(QWindow, isExposed, arginfo_class_QWindow_isExposed, ZEND_ACC_PUBLIC)
	ZEND_ME(QWindow, resize, arginfo_class_QWindow_resize, ZEND_ACC_PUBLIC)
	ZEND_ME(QWindow, close, arginfo_class_QWindow_close, ZEND_ACC_PUBLIC)
	ZEND_ME(QWindow, setVulkanInstance, arginfo_class_QWindow_setVulkanInstance, ZEND_ACC_PUBLIC)
	ZEND_ME(QWindow, vulkanInstance, arginfo_class_QWindow_vulkanInstance, ZEND_ACC_PUBLIC)
	ZEND_ME(QWindow, width, arginfo_class_QWindow_width, ZEND_ACC_PUBLIC)
	ZEND_ME(QWindow, height, arginfo_class_QWindow_height, ZEND_ACC_PUBLIC)
	ZEND_ME(QWindow, devicePixelRatio, arginfo_class_QWindow_devicePixelRatio, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static zend_class_entry *register_class_QSurface_SurfaceType(void)
{
	zend_class_entry *class_entry = zend_register_internal_enum("QSurface\\SurfaceType", IS_LONG, NULL);

	zval enum_case_RASTER_SURFACE_value;
	ZVAL_LONG(&enum_case_RASTER_SURFACE_value, 0);
	zend_enum_add_case_cstr(class_entry, "RASTER_SURFACE", &enum_case_RASTER_SURFACE_value);

	zval enum_case_OPEN_GL_SURFACE_value;
	ZVAL_LONG(&enum_case_OPEN_GL_SURFACE_value, 1);
	zend_enum_add_case_cstr(class_entry, "OPEN_GL_SURFACE", &enum_case_OPEN_GL_SURFACE_value);

	zval enum_case_RASTER_GL_SURFACE_value;
	ZVAL_LONG(&enum_case_RASTER_GL_SURFACE_value, 2);
	zend_enum_add_case_cstr(class_entry, "RASTER_GL_SURFACE", &enum_case_RASTER_GL_SURFACE_value);

	zval enum_case_OPEN_VG_SURFACE_value;
	ZVAL_LONG(&enum_case_OPEN_VG_SURFACE_value, 3);
	zend_enum_add_case_cstr(class_entry, "OPEN_VG_SURFACE", &enum_case_OPEN_VG_SURFACE_value);

	zval enum_case_VULKAN_SURFACE_value;
	ZVAL_LONG(&enum_case_VULKAN_SURFACE_value, 4);
	zend_enum_add_case_cstr(class_entry, "VULKAN_SURFACE", &enum_case_VULKAN_SURFACE_value);

	zval enum_case_METAL_SURFACE_value;
	ZVAL_LONG(&enum_case_METAL_SURFACE_value, 5);
	zend_enum_add_case_cstr(class_entry, "METAL_SURFACE", &enum_case_METAL_SURFACE_value);

	zval enum_case_DIRECT_3D_SURFACE_value;
	ZVAL_LONG(&enum_case_DIRECT_3D_SURFACE_value, 6);
	zend_enum_add_case_cstr(class_entry, "DIRECT_3D_SURFACE", &enum_case_DIRECT_3D_SURFACE_value);

	return class_entry;
}

static zend_class_entry *register_class_QWindow(zend_class_entry *class_entry_QObject)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "QWindow", class_QWindow_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, class_entry_QObject, ZEND_ACC_NOT_SERIALIZABLE);

	return class_entry;
}
