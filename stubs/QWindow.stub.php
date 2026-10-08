<?php

/** @generate-class-entries */

namespace QSurface {
    enum SurfaceType: int
    {
        case RASTER_SURFACE = 0;
        case OPEN_GL_SURFACE = 1;
        /** Deprecated in Qt 6.11 in favour of RASTER_SURFACE; still a value. */
        case RASTER_GL_SURFACE = 2;
        case OPEN_VG_SURFACE = 3;
        case VULKAN_SURFACE = 4;
        case METAL_SURFACE = 5;
        case DIRECT_3D_SURFACE = 6;
    }
}

namespace {
    /**
     * @not-serializable
     */
    class QWindow extends QObject
    {
        public function __construct(?QWindow $parent = null) {}

        public function setSurfaceType(QSurface\SurfaceType $surfaceType): void {}

        public function surfaceType(): QSurface\SurfaceType {}

        /** The native handle (an NSView address on macOS); creates the platform window when it has none yet. */
        public function winId(): int {}

        public function create(): void {}

        public function show(): void {}

        public function hide(): void {}

        /** Releases the platform window and its native resources (a Vulkan surface Qt made for it); the QWindow stays. */
        public function destroy(): void {}

        public function isExposed(): bool {}

        public function resize(int $w, int $h): void {}

        public function close(): bool {}

        /** Qt keeps a pointer, not the PHP object: the instance's own release detaches it from every window first. */
        public function setVulkanInstance(?QVulkanInstance $instance): void {}

        public function vulkanInstance(): ?QVulkanInstance {}

        public function width(): int {}

        public function height(): int {}

        public function devicePixelRatio(): float {}
    }
}
