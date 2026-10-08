<?php

declare(strict_types=1);

beforeEach(function (): void {
    testApplication();
    if (! extension_loaded('vulkan')) {
        $this->markTestSkipped('needs ext-vulkan for a VkInstance');
    }
    // Qt loads the Vulkan loader by name ("vulkan"): on macOS Homebrew's lies outside dyld's search path, so name it.
    if (PHP_OS_FAMILY === 'Darwin' && getenv('QT_VULKAN_LIB') === false) {
        putenv('QT_VULKAN_LIB='.trim((string) shell_exec('pkg-config --variable=libdir vulkan')).'/libvulkan.1.dylib');
    }
});

/** A VkInstance with the surface extensions Qt needs on this platform. */
function vkInstanceForQt(): VkInstance
{
    $app = new VkApplicationInfo();
    $app->apiVersion = VK_API_VERSION_1_1;
    $info = new VkInstanceCreateInfo();
    $info->pApplicationInfo = $app;
    vkEnumerateInstanceExtensionProperties(null, $available);
    $names = array_map(fn (VkExtensionProperties $e): string => $e->extensionName, $available);
    $wanted = [VK_KHR_SURFACE_EXTENSION_NAME, PHP_OS_FAMILY === 'Darwin' ? VK_EXT_METAL_SURFACE_EXTENSION_NAME : VK_KHR_WAYLAND_SURFACE_EXTENSION_NAME, VK_KHR_GET_PHYSICAL_DEVICE_PROPERTIES_2_EXTENSION_NAME];
    if (in_array(VK_KHR_PORTABILITY_ENUMERATION_EXTENSION_NAME, $names, true)) {
        $wanted[] = VK_KHR_PORTABILITY_ENUMERATION_EXTENSION_NAME;
        $info->flags |= VK_INSTANCE_CREATE_ENUMERATE_PORTABILITY_BIT_KHR;
    }
    $info->enabledExtensionNames = array_values(array_intersect($wanted, $names));
    vkCreateInstance($info, null, $instance) === VK_SUCCESS || throw new RuntimeException('vkCreateInstance');

    return $instance;
}

it('refuses to create without a QGuiApplication', function (): void {
    $script = tempnam(sys_get_temp_dir(), 'qtvk').'.php';
    file_put_contents($script, '<?php try { (new QVulkanInstance())->create(); echo "created"; } catch (QtException $e) { echo $e->getMessage(); }');
    $out = shell_exec(escapeshellarg(PHP_BINARY).' -d memory_limit=128M '.escapeshellarg($script).' 2>&1');
    unlink($script);

    expect($out)->toBe('QVulkanInstance::create() needs a QGuiApplication first');
});

it('adopts an existing VkInstance', function (): void {
    $vk = vkInstanceForQt();
    $instance = new QVulkanInstance();
    $unset = $instance->vkInstance();
    $instance->setVkInstance($vk->pointer());

    expect($unset)->toBe(0)
        ->and($instance->create())->toBeTrue()
        ->and($instance->isValid())->toBeTrue()
        ->and($instance->errorCode())->toBe(VK_SUCCESS)
        ->and($instance->vkInstance())->toBe($vk->pointer());
    $instance->destroy();

    expect($instance->isValid())->toBeFalse();
    vkDestroyInstance($vk, null);
});

it('makes a surface for a VulkanSurface window', function (): void {
    $vk = vkInstanceForQt();
    $instance = new QVulkanInstance();
    $instance->setVkInstance($vk->pointer());
    $instance->create();
    $window = new QWindow();
    $window->setSurfaceType(QSurface\SurfaceType::VULKAN_SURFACE);
    $window->setVulkanInstance($instance);
    $window->resize(64, 48);
    $window->show();
    processUntil(fn (): bool => $window->isExposed(), 3000);

    $surface = QVulkanInstance::surfaceForWindow($window);

    expect($surface)->toBeGreaterThan(0)
        ->and($window->vulkanInstance())->toBe($instance);
    $window->close();
    $instance->destroy();
});

it('answers no surface for a window with no instance', function (): void {
    $window = new QWindow();

    expect(QVulkanInstance::surfaceForWindow($window))->toBe(0)
        ->and($window->vulkanInstance())->toBeNull();
});

it('detaches every window from an instance whose PHP object goes', function (): void {
    $vk = vkInstanceForQt();
    $instance = new QVulkanInstance();
    $instance->setVkInstance($vk->pointer());
    $instance->create();
    $window = new QWindow();
    $window->setSurfaceType(QSurface\SurfaceType::VULKAN_SURFACE);
    $window->setVulkanInstance($instance);
    $window->create();

    unset($instance);

    expect($window->vulkanInstance())->toBeNull();
    vkDestroyInstance($vk, null);
});

it('gives up the platform window, and Qt\'s surface with it, on destroy()', function (): void {
    $vk = vkInstanceForQt();
    $instance = new QVulkanInstance();
    $instance->setVkInstance($vk->pointer());
    $instance->create();
    $window = new QWindow();
    $window->setSurfaceType(QSurface\SurfaceType::VULKAN_SURFACE);
    $window->setVulkanInstance($instance);
    $window->resize(64, 48);
    $window->show();
    processUntil(fn (): bool => $window->isExposed(), 3000);
    $before = QVulkanInstance::surfaceForWindow($window);

    $window->destroy();

    expect($before)->toBeGreaterThan(0)
        ->and($window->isExposed())->toBeFalse()
        ->and(QVulkanInstance::surfaceForWindow($window))->toBe(0);
    $window->setVulkanInstance(null);
    $instance->destroy();
    vkDestroyInstance($vk, null);
});
