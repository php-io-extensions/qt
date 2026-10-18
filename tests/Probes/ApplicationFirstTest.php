<?php

declare(strict_types=1);

// Sites qapp-* and qguiapp-* (outcome 2): a widget, window, pixmap or Vulkan surface before its
// application. Qt aborts with qFatal ("Must construct a QApplication before a QWidget", "… a
// QGuiApplication before a QPixmap"), or dereferences the missing platform integration. Task 1 probe P2.

beforeEach(fn () => requireProbeBuild());

it('refuses the call before an application, which Qt dies on without the refusal', function (string $site, string $code, int $signal): void {
    $kept = qtChild($code, null, app: false);
    $off = qtChild($code, $site, app: false);

    expect($kept['signal'])->toBeNull()
        ->and($kept['threw'])->toContain('first')
        ->and($off['signal'])->toBe($signal);
})->with([
    'a widget' => ['qapp-widget', 'new QWidget(); return "built";', PROBE_SIGABRT],
    'a text widget' => ['qapp-text-widget', 'new QLabel("x"); return "built";', PROBE_SIGABRT],
    'a slider' => ['qapp-slider', 'new QSlider(); return "built";', PROBE_SIGABRT],
    'a table' => ['qapp-table', 'new QTableWidget(); return "built";', PROBE_SIGABRT],
    'a splitter' => ['qapp-splitter', 'new QSplitter(Qt\Orientation::HORIZONTAL); return "built";', PROBE_SIGABRT],
    'an OpenGL painter' => ['qapp-gl-painter', 'new QOpenGLPainter(fn () => null); return "built";', PROBE_SIGABRT],
    'a menu bar' => ['qapp-menubar', 'new QMenuBar(); return "built";', PROBE_SIGABRT],
    'a menu' => ['qapp-menu', 'new QMenu("m"); return "built";', PROBE_SIGABRT],
    'a window' => ['qguiapp-window', 'new QWindow(); return "built";', PROBE_SIGABRT],
    'a pixmap' => ['qguiapp-pixmap', 'new QPixmap(); return "built";', PROBE_SIGABRT],
    'a pixmap from an image' => ['qguiapp-pixmap-from-image',
        '$bytes = new QByteArray(str_repeat("\0", 4), 4); QPixmap::fromImage(new QImage($bytes->pointer(), 1, 1, 4, QImage\Format::RGB32)); return "built";',
        PROBE_SIGABRT],
    'a Vulkan instance created' => ['qguiapp-vulkan-create', '(new QVulkanInstance())->create(); return "built";', PROBE_SIGSEGV],
]);
