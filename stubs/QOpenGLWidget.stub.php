<?php

/** @generate-class-entries */

namespace QSurfaceFormat {
    enum OpenGLContextProfile: int
    {
        case NO_PROFILE = 0;
        case CORE_PROFILE = 1;
        case COMPATIBILITY_PROFILE = 2;
    }

    enum RenderableType: int
    {
        case DEFAULT_RENDERABLE_TYPE = 0;
        case OPEN_GL = 1;
        case OPEN_GLES = 2;
        case OPEN_VG = 4;
    }
}

namespace {
/**
 * A value in Qt; here a heap copy owned by the PHP object.
 *
 * @not-serializable
 */
final class QSurfaceFormat
{
    public function __construct() {}

    public static function defaultFormat(): QSurfaceFormat {}

    public function majorVersion(): int {}

    public function minorVersion(): int {}

    public function setVersion(int $major, int $minor): void {}

    public function profile(): QSurfaceFormat\OpenGLContextProfile {}

    public function setProfile(QSurfaceFormat\OpenGLContextProfile $profile): void {}

    public function renderableType(): QSurfaceFormat\RenderableType {}

    public function setRenderableType(QSurfaceFormat\RenderableType $type): void {}
}

/**
 * @not-serializable
 */
class QOpenGLWidget extends QWidget
{
    public function __construct(?QWidget $parent = null) {}

    public function makeCurrent(): void {}

    public function doneCurrent(): void {}

    public function isValid(): bool {}

    /** The GL framebuffer object name Qt renders this widget into; 0 before the widget is shown. */
    public function defaultFramebufferObject(): int {}

    /** QWidget::update(): schedules paintGL(). */
    public function update(): void {}

    /** The format asked for; set before the widget is first shown. */
    public function setFormat(QSurfaceFormat $format): void {}

    /** The format asked for, or, once the context exists, the one it has. */
    public function format(): QSurfaceFormat {}
}

/**
 * A QOpenGLWidget whose paintGL() calls PHP, the context current and the
 * widget's framebuffer bound: the trampoline a PHP painter needs.
 * initializeGL() and resizeGL() do nothing.
 *
 * @not-serializable
 */
final class QOpenGLPainter extends QOpenGLWidget
{
    /** @param callable $paint called as $paint(QOpenGLPainter $widget): void from paintGL() */
    public function __construct(callable $paint, ?QWidget $parent = null) {}
}
}
