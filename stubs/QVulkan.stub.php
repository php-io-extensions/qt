<?php

/** @generate-class-entries */

/**
 * QVulkanInstance over a VkInstance the application made: setVkInstance() then
 * create(); Qt adopts the instance and does not destroy it. Registered when Qt
 * was built with Vulkan (QT_CONFIG(vulkan)). When the PHP object goes, every
 * window still using it gives up its platform window and its instance first.
 *
 * @not-serializable
 */
final class QVulkanInstance
{
    /** On the main thread only, as Qt's windows. */
    public function __construct() {}

    /** The VkInstance address (ext-vulkan's VkInstance::pointer()) Qt adopts on create(). */
    public function setVkInstance(int $existingVkInstance): void {}

    /** Needs a QGuiApplication (Qt's platform makes the instance's surfaces); a QtException without one. */
    public function create(): bool {}

    public function isValid(): bool {}

    /** VkResult of the last failed create(). */
    public function errorCode(): int {}

    /** The VkInstance address: the one set with setVkInstance(), else the one create() made; 0 before either. */
    public function vkInstance(): int {}

    public function destroy(): void {}

    /** The VkSurfaceKHR address Qt made for a VulkanSurface window whose instance is this one; 0 when none. */
    public static function surfaceForWindow(QWindow $window): int {}
}
