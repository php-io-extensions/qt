<?php

declare(strict_types=1);

/*
 * Every stub declaration is what the loaded extension exposes: the stubs are
 * the source of truth, so a binding missing from the build fails here.
 */

function stubDeclarations(): array
{
    $declared = ['functions' => [], 'classes' => []];

    foreach (glob(__DIR__ . '/../stubs/*.stub.php') as $stub) {
        $namespace = '';
        $class = null;
        foreach (file($stub) as $line) {
            if (preg_match('/^namespace\s+(\w+)/', $line, $m)) {
                $namespace = $m[1] . '\\';
            } elseif (preg_match('/^namespace\s*\{/', $line)) {
                $namespace = '';
            } elseif (preg_match('/^\s*(?:final\s+)?(?:class|enum)\s+(\w+)/', $line, $m)) {
                $class = $namespace . $m[1];
                $declared['classes'][$class] ??= [];
            } elseif (preg_match('/^function\s+(\w+)/', $line, $m)) {
                $declared['functions'][] = $m[1];
            } elseif ($class !== null && preg_match('/^\s+(?:public|private)\s+(?:static\s+)?function\s+(\w+)/', $line, $m)) {
                $declared['classes'][$class][] = $m[1];
            }
        }
    }

    return $declared;
}

it('exposes every function, class, enum and method the stubs declare', function (): void {
    $declared = stubDeclarations();

    expect($declared['classes'])->toHaveKeys(['QObject', 'QMetaObject\Connection', 'Qt\TimerType', 'QSocketNotifier\Type', 'QEventLoop\ProcessEventsFlag', 'QEvent\Type', 'Qt\WidgetAttribute', 'QAction\MenuRole', 'Qt\AlignmentFlag', 'QSizePolicy\Policy', 'Qt\Orientation', 'QLineEdit\EchoMode', 'Qt\AspectRatioMode', 'Qt\ScrollBarPolicy', 'QFont\Weight', 'QFrame\Shape', 'QFrame\Shadow', 'QAbstractItemView\SelectionBehavior', 'QAbstractItemView\SelectionMode', 'QMediaPlayer\PlaybackState', 'QMediaPlayer\MediaStatus', 'QMediaPlayer\Error']);

    foreach ($declared['functions'] as $function) {
        expect(function_exists($function))->toBeTrue("{$function}() is missing");
    }

    foreach ($declared['classes'] as $class => $methods) {
        expect(class_exists($class) || enum_exists($class))->toBeTrue("{$class} is missing");

        foreach ($methods as $method) {
            expect(method_exists($class, $method))->toBeTrue("{$class}::{$method}() is missing");
        }
    }
});

it('reports its version and the Qt runtime', function (): void {
    expect(phpversion('qt'))->toBe('0.10.1')
        ->and(qVersion())->toStartWith('6.');
});

it('keeps the native class hierarchy', function (): void {
    expect(get_parent_class(QApplication::class))->toBe(QGuiApplication::class)
        ->and(get_parent_class(QGuiApplication::class))->toBe(QCoreApplication::class)
        ->and(get_parent_class(QCoreApplication::class))->toBe(QObject::class)
        ->and(get_parent_class(QTimer::class))->toBe(QObject::class)
        ->and(get_parent_class(QSocketNotifier::class))->toBe(QObject::class)
        ->and(get_parent_class(QAbstractEventDispatcher::class))->toBe(QObject::class)
        ->and(get_parent_class(QtException::class))->toBe(RuntimeException::class)
        ->and(get_parent_class(QWidget::class))->toBe(QObject::class)
        ->and(get_parent_class(QMainWindow::class))->toBe(QWidget::class)
        ->and(get_parent_class(QMenuBar::class))->toBe(QWidget::class)
        ->and(get_parent_class(QMenu::class))->toBe(QWidget::class)
        ->and(get_parent_class(QDialog::class))->toBe(QWidget::class)
        ->and(get_parent_class(QMessageBox::class))->toBe(QDialog::class)
        ->and(get_parent_class(QAction::class))->toBe(QObject::class)
        ->and(get_parent_class(QEventFilter::class))->toBe(QObject::class)
        ->and(get_parent_class(QLayout::class))->toBe(QObject::class)
        ->and(get_parent_class(QBoxLayout::class))->toBe(QLayout::class)
        ->and(get_parent_class(QVBoxLayout::class))->toBe(QBoxLayout::class)
        ->and(get_parent_class(QHBoxLayout::class))->toBe(QBoxLayout::class)
        ->and(get_parent_class(QGridLayout::class))->toBe(QLayout::class)
        ->and(get_parent_class(QLabel::class))->toBe(QWidget::class)
        ->and(get_parent_class(QAbstractButton::class))->toBe(QWidget::class)
        ->and(get_parent_class(QPushButton::class))->toBe(QAbstractButton::class)
        ->and(get_parent_class(QCheckBox::class))->toBe(QAbstractButton::class)
        ->and(get_parent_class(QAbstractSlider::class))->toBe(QWidget::class)
        ->and(get_parent_class(QSlider::class))->toBe(QAbstractSlider::class)
        ->and(get_parent_class(QComboBox::class))->toBe(QWidget::class)
        ->and(get_parent_class(QLineEdit::class))->toBe(QWidget::class)
        ->and(get_parent_class(QPlainTextEdit::class))->toBe(QWidget::class)
        ->and(get_parent_class(QDateEdit::class))->toBe(QWidget::class)
        ->and(get_parent_class(QProgressBar::class))->toBe(QWidget::class)
        ->and(get_parent_class(QFrame::class))->toBe(QWidget::class)
        ->and(get_parent_class(QScrollArea::class))->toBe(QFrame::class)
        ->and(get_parent_class(QAbstractItemView::class))->toBe(QFrame::class)
        ->and(get_parent_class(QTableWidget::class))->toBe(QAbstractItemView::class)
        ->and(get_parent_class(QFont::class))->toBeFalse()
        ->and(get_parent_class(QPixmap::class))->toBeFalse()
        ->and(get_parent_class(QTableWidgetItem::class))->toBeFalse()
        ->and(get_parent_class(QUrl::class))->toBeFalse()
        ->and(get_parent_class(QAudioOutput::class))->toBe(QObject::class)
        ->and(get_parent_class(QMediaPlayer::class))->toBe(QObject::class)
        ->and(get_parent_class(QVideoWidget::class))->toBe(QWidget::class)
        ->and(get_parent_class(QMetaObject::class))->toBeFalse();
});

it('refuses to clone or serialize a wrapper', function (): void {
    $object = new QObject();

    expect(fn () => clone $object)->toThrow(Error::class)
        ->and(fn () => serialize($object))->toThrow(Exception::class)
        ->and(fn () => new QMetaObject\Connection())->toThrow(Error::class)
        ->and(fn () => clone new QFont())->toThrow(Error::class)
        ->and(fn () => serialize(new QPixmap()))->toThrow(Exception::class);
});
