#include "runtime.h"

#include <QtGui/QGuiApplication>
#include <QtGui/QWindow>

#if QT_CONFIG(vulkan)
#include <QtCore/QHash>
#include <QtGui/QVulkanInstance>

#include "../stubs/QVulkan_arginfo.h"

/* QVulkanInstance address => its PHP object, for QWindow::vulkanInstance(). Not refcounted: the entry goes with the object. */
static thread_local QHash<QVulkanInstance *, zend_object *> phpqt_vulkan_wrappers;

static void phpqt_destroy_vulkan_instance(void *ptr)
{
	QVulkanInstance *instance = static_cast<QVulkanInstance *>(ptr);

	phpqt_vulkan_wrappers.remove(instance);
	/* A window keeps a raw pointer: it gives up its platform window (and Qt's surface) and the instance before the instance goes. */
	if (QGuiApplication::instance() != nullptr) {
		const QWindowList windows = QGuiApplication::allWindows();
		for (QWindow *window : windows) {
			if (window->vulkanInstance() == instance) {
				window->destroy();
				window->setVulkanInstance(nullptr);
			}
		}
	}
	delete instance;
}

void phpqt_register_QVulkan()
{
	phpqt_ce_QVulkanInstance = register_class_QVulkanInstance();
	phpqt_value_setup(phpqt_ce_QVulkanInstance);
}

zend_object *phpqt_vulkan_wrapper(QVulkanInstance *instance)
{
	return phpqt_vulkan_wrappers.value(instance, nullptr);
}

ZEND_METHOD(QVulkanInstance, __construct)
{
	ZEND_PARSE_PARAMETERS_NONE();
	/* Windows and Qt's platform live on the main thread; every later call, and the free, inherit it. */
	PHPQT_REQUIRE_MAIN_THREAD();
	if (phpqt_value_from(Z_OBJ_P(ZEND_THIS))->constructed) {
		zend_throw_exception(phpqt_ce_QtException, "QVulkanInstance::__construct() called twice", 0);
		RETURN_THROWS();
	}

	QVulkanInstance *instance = new QVulkanInstance();
	phpqt_value_hold(Z_OBJ_P(ZEND_THIS), instance, true, phpqt_destroy_vulkan_instance);
	phpqt_vulkan_wrappers.insert(instance, Z_OBJ_P(ZEND_THIS));
}

ZEND_METHOD(QVulkanInstance, setVkInstance)
{
	zend_long existing;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(existing)
	ZEND_PARSE_PARAMETERS_END();
	PHPQT_VALUE_THIS(QVulkanInstance, instance);

	instance->setVkInstance(reinterpret_cast<VkInstance>(static_cast<uintptr_t>(existing)));
}

ZEND_METHOD(QVulkanInstance, create)
{
	ZEND_PARSE_PARAMETERS_NONE();
	PHPQT_VALUE_THIS(QVulkanInstance, instance);
	PHPQT_REQUIRE_MAIN_THREAD();

	/* The platform's Vulkan instance comes from the QGuiApplication's platform integration: without one Qt dereferences null. */
	if (qobject_cast<QGuiApplication *>(QCoreApplication::instance()) == nullptr) {
		zend_throw_exception_ex(phpqt_ce_QtException, 0, "QVulkanInstance::create() needs a QGuiApplication first");
		RETURN_THROWS();
	}

	RETURN_BOOL(instance->create());
}

ZEND_METHOD(QVulkanInstance, isValid)
{
	ZEND_PARSE_PARAMETERS_NONE();
	PHPQT_VALUE_THIS(QVulkanInstance, instance);

	RETURN_BOOL(instance->isValid());
}

ZEND_METHOD(QVulkanInstance, errorCode)
{
	ZEND_PARSE_PARAMETERS_NONE();
	PHPQT_VALUE_THIS(QVulkanInstance, instance);

	RETURN_LONG(static_cast<zend_long>(instance->errorCode()));
}

ZEND_METHOD(QVulkanInstance, vkInstance)
{
	ZEND_PARSE_PARAMETERS_NONE();
	PHPQT_VALUE_THIS(QVulkanInstance, instance);

	RETURN_LONG(static_cast<zend_long>(reinterpret_cast<uintptr_t>(instance->vkInstance())));
}

ZEND_METHOD(QVulkanInstance, destroy)
{
	ZEND_PARSE_PARAMETERS_NONE();
	PHPQT_VALUE_THIS(QVulkanInstance, instance);

	instance->destroy();
}

ZEND_METHOD(QVulkanInstance, surfaceForWindow)
{
	zend_object *window_obj;
	bool failed;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_OBJ_OF_CLASS(window_obj, phpqt_ce_QWindow)
	ZEND_PARSE_PARAMETERS_END();
	PHPQT_REQUIRE_MAIN_THREAD();

	QWindow *window = static_cast<QWindow *>(phpqt_arg(window_obj, 1, &failed));
	if (failed) {
		RETURN_THROWS();
	}
	RETURN_LONG(static_cast<zend_long>(reinterpret_cast<uintptr_t>(QVulkanInstance::surfaceForWindow(window))));
}

#else

void phpqt_register_QVulkan()
{
}

#endif
