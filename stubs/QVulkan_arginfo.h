/* This is a generated file, edit the .stub.php file instead.
 * Stub hash: 29bf38b5f060b18e26d15d417d351b0eecaae374 */

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_QVulkanInstance___construct, 0, 0, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_QVulkanInstance_setVkInstance, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, existingVkInstance, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_QVulkanInstance_create, 0, 0, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_QVulkanInstance_isValid arginfo_class_QVulkanInstance_create

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_QVulkanInstance_errorCode, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_QVulkanInstance_vkInstance arginfo_class_QVulkanInstance_errorCode

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_QVulkanInstance_destroy, 0, 0, IS_VOID, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_QVulkanInstance_surfaceForWindow, 0, 1, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, window, QWindow, 0)
ZEND_END_ARG_INFO()

ZEND_METHOD(QVulkanInstance, __construct);
ZEND_METHOD(QVulkanInstance, setVkInstance);
ZEND_METHOD(QVulkanInstance, create);
ZEND_METHOD(QVulkanInstance, isValid);
ZEND_METHOD(QVulkanInstance, errorCode);
ZEND_METHOD(QVulkanInstance, vkInstance);
ZEND_METHOD(QVulkanInstance, destroy);
ZEND_METHOD(QVulkanInstance, surfaceForWindow);

static const zend_function_entry class_QVulkanInstance_methods[] = {
	ZEND_ME(QVulkanInstance, __construct, arginfo_class_QVulkanInstance___construct, ZEND_ACC_PUBLIC)
	ZEND_ME(QVulkanInstance, setVkInstance, arginfo_class_QVulkanInstance_setVkInstance, ZEND_ACC_PUBLIC)
	ZEND_ME(QVulkanInstance, create, arginfo_class_QVulkanInstance_create, ZEND_ACC_PUBLIC)
	ZEND_ME(QVulkanInstance, isValid, arginfo_class_QVulkanInstance_isValid, ZEND_ACC_PUBLIC)
	ZEND_ME(QVulkanInstance, errorCode, arginfo_class_QVulkanInstance_errorCode, ZEND_ACC_PUBLIC)
	ZEND_ME(QVulkanInstance, vkInstance, arginfo_class_QVulkanInstance_vkInstance, ZEND_ACC_PUBLIC)
	ZEND_ME(QVulkanInstance, destroy, arginfo_class_QVulkanInstance_destroy, ZEND_ACC_PUBLIC)
	ZEND_ME(QVulkanInstance, surfaceForWindow, arginfo_class_QVulkanInstance_surfaceForWindow, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	ZEND_FE_END
};

static zend_class_entry *register_class_QVulkanInstance(void)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "QVulkanInstance", class_QVulkanInstance_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, NULL, ZEND_ACC_FINAL|ZEND_ACC_NOT_SERIALIZABLE);

	return class_entry;
}
