<?php

declare(strict_types=1);

beforeEach(function (): void {
    testApplication();
    if (! extension_loaded('opengl')) {
        $this->markTestSkipped('needs ext-opengl to read the current context');
    }
});

it('has no framebuffer before it is shown, and a context after', function (): void {
    $widget = new QOpenGLWidget;

    expect($widget->isValid())->toBeFalse()
        ->and($widget->defaultFramebufferObject())->toBe(0);

    $widget->resize(64, 48);
    $widget->show();
    processUntil(fn (): bool => $widget->isValid(), 3000);

    $widget->makeCurrent();
    $current = PHP_OS_FAMILY === 'Darwin' ? CGLGetCurrentContext() : eglGetCurrentContext();
    expect($current)->not->toBeNull()
        ->and(glGetString(GL_VERSION))->toBeString()
        ->and($widget->defaultFramebufferObject())->toBeGreaterThanOrEqual(0);
    $widget->doneCurrent();
    $widget->close();
});

it('calls the painter from paintGL with its framebuffer bound', function (): void {
    $seen = [];
    $widget = new QOpenGLPainter(function (QOpenGLPainter $painted) use (&$seen): void {
        glGetIntegerv(GL_DRAW_FRAMEBUFFER_BINDING, $bound);
        $seen[] = [$painted, $bound[0], $painted->defaultFramebufferObject()];
        glClearColor(1.0, 0.0, 0.0, 1.0);
        glClear(GL_COLOR_BUFFER_BIT);
    });
    $widget->resize(64, 48);
    $widget->show();
    processUntil(function () use (&$seen): bool { return $seen !== []; }, 3000);
    $count = count($seen);
    $widget->update();
    processUntil(function () use (&$seen, $count): bool { return count($seen) > $count; }, 3000);

    expect(count($seen))->toBeGreaterThan($count)
        ->and($seen[0][0])->toBe($widget)
        ->and($seen[0][1])->toBe($seen[0][2]);
    $widget->close();
});

it('holds a surface format\'s version, profile and renderable type', function (): void {
    $format = new QSurfaceFormat;
    $format->setVersion(4, 1);
    $format->setProfile(QSurfaceFormat\OpenGLContextProfile::CORE_PROFILE);
    $format->setRenderableType(QSurfaceFormat\RenderableType::OPEN_GL);

    expect([$format->majorVersion(), $format->minorVersion()])->toBe([4, 1])
        ->and($format->profile())->toBe(QSurfaceFormat\OpenGLContextProfile::CORE_PROFILE)
        ->and($format->renderableType())->toBe(QSurfaceFormat\RenderableType::OPEN_GL)
        ->and(QSurfaceFormat::defaultFormat()->majorVersion())->toBeGreaterThanOrEqual(2);
});

it('makes the context the format asks for', function (): void {
    $widget = new QOpenGLWidget;
    $asked = new QSurfaceFormat;
    if (PHP_OS_FAMILY === 'Darwin') {
        $asked->setVersion(4, 1);
        $asked->setProfile(QSurfaceFormat\OpenGLContextProfile::CORE_PROFILE);
    }
    $widget->setFormat($asked);
    $widget->resize(64, 48);
    $widget->show();
    processUntil(fn (): bool => $widget->isValid(), 3000);

    $widget->makeCurrent();
    $made = $widget->format();
    expect($widget->isValid())->toBeTrue()
        ->and($made->majorVersion())->toBeGreaterThanOrEqual(3)
        ->and(glGetString(GL_SHADING_LANGUAGE_VERSION))->toBeString();
    if (PHP_OS_FAMILY === 'Darwin') {
        expect([$made->majorVersion(), $made->minorVersion()])->toBe([4, 1])
            ->and($made->profile())->toBe(QSurfaceFormat\OpenGLContextProfile::CORE_PROFILE)
            ->and(glGetString(GL_VERSION))->toStartWith('4.1');
    }
    $widget->doneCurrent();
    $widget->close();
});

it('refuses a painter that is not callable', function (): void {
    new QOpenGLPainter('not a function');
})->throws(TypeError::class);

it('lets Qt delete a painter whose callable holds the last reference to its parentless parent', function (): void {
    // Qt deletes the painter, its slot goes with it, and freeing the callable frees the host's
    // wrapper: the host (owned, parentless) must wait for Qt's loop, not be deleted mid-destruction.
    $script = tempnam(sys_get_temp_dir(), 'qt').'.php';
    file_put_contents($script, '<?php
        $app = new QApplication([PHP_BINARY]);
        $host = new QWidget();
        $cell = new QGridLayout($host);
        $host->resize(200, 150);
        $host->show();
        $holder = new stdClass();
        $holder->host = $host;
        $painter = new QOpenGLPainter(function ($painted) use ($holder): void {}, $host);
        $cell->addWidget($painter, 0, 0);
        $painter->show();
        $until = microtime(true) + 2;
        while (! $painter->isValid() && microtime(true) < $until) {
            QCoreApplication::processEvents(QEventLoop\ProcessEventsFlag::ALL_EVENTS, 10);
        }
        $painter->deleteLater();
        unset($holder, $host, $cell, $painter);
        for ($i = 0; $i < 10; $i++) {
            QCoreApplication::sendPostedEvents(null, QEvent\Type::DEFERRED_DELETE->value);
            QCoreApplication::processEvents(QEventLoop\ProcessEventsFlag::ALL_EVENTS, 10);
        }
        echo "ok";');

    $process = proc_open([PHP_BINARY, '-d', 'memory_limit=128M', $script], [1 => ['pipe', 'w'], 2 => ['pipe', 'w']], $pipes);
    $out = stream_get_contents($pipes[1]);
    $err = stream_get_contents($pipes[2]);
    $code = proc_close($process);
    unlink($script);

    expect($code)->toBe(0, $err)->and($out)->toBe('ok');
});

it('defers deleting an ancestor of an outer slot that an inner slot\'s teardown frees', function (): void {
    // Qt deletes painter P1 (under host A); freeing P1's callable frees B, which is deleted and
    // takes its painter P2 with it; freeing P2's callable frees the last reference to A, which Qt
    // is still tearing down around P1. A must wait for Qt's loop.
    $script = tempnam(sys_get_temp_dir(), 'qt').'.php';
    file_put_contents($script, '<?php
        $app = new QApplication([PHP_BINARY]);
        $a = new QWidget();
        $b = new QWidget();
        $outer = new stdClass();
        $inner = new stdClass();
        $outer->b = $b;
        $inner->a = $a;
        $p1 = new QOpenGLPainter(function ($painted) use ($outer): void {}, $a);
        $p2 = new QOpenGLPainter(function ($painted) use ($inner): void {}, $b);
        $p1->deleteLater();
        unset($a, $b, $outer, $inner, $p1, $p2);
        for ($i = 0; $i < 5; $i++) {
            QCoreApplication::sendPostedEvents(null, QEvent\Type::DEFERRED_DELETE->value);
            QCoreApplication::processEvents(QEventLoop\ProcessEventsFlag::ALL_EVENTS, 10);
        }
        echo "ok";');

    $process = proc_open([PHP_BINARY, '-d', 'memory_limit=128M', $script], [1 => ['pipe', 'w'], 2 => ['pipe', 'w']], $pipes);
    $out = stream_get_contents($pipes[1]);
    $err = stream_get_contents($pipes[2]);
    $code = proc_close($process);
    unlink($script);

    expect($code)->toBe(0, $err)->and($out)->toBe('ok');
});
