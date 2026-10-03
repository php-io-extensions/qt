<?php

declare(strict_types=1);

beforeEach(fn () => testApplication());

it('clicks a push button into PHP and toggles a checkable one', function (): void {
    $button = new QPushButton('Go');
    $clicks = [];
    QObject::connect($button, 'clicked(bool)', function (bool $checked) use (&$clicks): void { $clicks[] = $checked; });
    $button->click();
    $button->setCheckable(true);
    $button->click();

    expect($clicks)->toBe([false, true])
        ->and($button->text())->toBe('Go')
        ->and($button->isChecked())->toBeTrue()
        ->and($button)->toBeInstanceOf(QAbstractButton::class);
});

it('reports a checkbox toggle', function (): void {
    $box = new QCheckBox('Remember');
    $toggles = [];
    QObject::connect($box, 'toggled(bool)', function (bool $checked) use (&$toggles): void { $toggles[] = $checked; });
    $box->click();
    $box->setChecked(false);

    expect($toggles)->toBe([true, false])
        ->and($box->text())->toBe('Remember')
        ->and($box->isCheckable())->toBeTrue();
});

it('ranges a slider and reports one value change', function (): void {
    $slider = new QSlider();
    $values = [];
    QObject::connect($slider, 'valueChanged(int)', function (int $value) use (&$values): void { $values[] = $value; });
    $slider->setRange(0, 100);
    $slider->setValue(42);
    $slider->setOrientation(Qt\Orientation::VERTICAL);

    expect($values)->toBe([42])
        ->and($slider->minimum())->toBe(0)
        ->and($slider->maximum())->toBe(100)
        ->and($slider->value())->toBe(42)
        ->and($slider->orientation())->toBe(Qt\Orientation::VERTICAL)
        ->and((new QSlider(Qt\Orientation::HORIZONTAL))->orientation())->toBe(Qt\Orientation::HORIZONTAL)
        ->and($slider)->toBeInstanceOf(QAbstractSlider::class);
});

it('fills a combo box and reports the current index', function (): void {
    $combo = new QComboBox();
    $indexes = [];
    QObject::connect($combo, 'currentIndexChanged(int)', function (int $index) use (&$indexes): void { $indexes[] = $index; });
    $combo->addItems(['a', 'b']);
    $combo->addItem('c');
    $combo->setCurrentIndex(1);

    expect($indexes)->toBe([0, 1])
        ->and($combo->count())->toBe(3)
        ->and($combo->currentIndex())->toBe(1)
        ->and($combo->currentText())->toBe('b')
        ->and($combo->itemText(2))->toBe('c');

    $combo->clear();
    expect($combo->count())->toBe(0)->and($combo->currentIndex())->toBe(-1);
});

it('edits a line and reports text changes but not a return', function (): void {
    $edit = new QLineEdit('first');
    $texts = [];
    $returns = 0;
    QObject::connect($edit, 'textChanged(QString)', function (string $text) use (&$texts): void { $texts[] = $text; });
    QObject::connect($edit, 'returnPressed()', function () use (&$returns): void { $returns++; });
    $edit->setText('second');
    $edit->setPlaceholderText('type here');
    $edit->setEchoMode(QLineEdit\EchoMode::PASSWORD);
    $edit->setReadOnly(true);

    expect($texts)->toBe(['second'])
        ->and($returns)->toBe(0)
        ->and($edit->text())->toBe('second')
        ->and($edit->placeholderText())->toBe('type here')
        ->and($edit->echoMode())->toBe(QLineEdit\EchoMode::PASSWORD)
        ->and($edit->isReadOnly())->toBeTrue();
});

it('edits plain text and reports the change', function (): void {
    $edit = new QPlainTextEdit();
    $changes = 0;
    QObject::connect($edit, 'textChanged()', function () use (&$changes): void { $changes++; });
    $edit->setPlainText("line one\nline two");
    $edit->setReadOnly(true);

    expect($changes)->toBe(1)
        ->and($edit->toPlainText())->toBe("line one\nline two")
        ->and($edit->isReadOnly())->toBeTrue();
});

it('labels text with wrap and alignment', function (): void {
    $label = new QLabel('Hello');
    $label->setWordWrap(true);
    $label->setAlignment(Qt\AlignmentFlag::CENTER);
    $label->setScaledContents(true);
    $label->setText('World');

    expect($label->text())->toBe('World')
        ->and($label->wordWrap())->toBeTrue()
        ->and($label->alignment())->toBe(Qt\AlignmentFlag::CENTER->value)
        ->and((new QLabel())->text())->toBe('');
});

it('describes a font and puts it on a widget', function (): void {
    $font = new QFont('Helvetica', 13.5, QFont\Weight::BOLD->value);
    $widget = new QWidget();
    $widget->setFont($font);
    $back = $widget->font();
    $back->setFamily('Courier');
    $back->setPointSizeF(9.0);
    $back->setWeight(QFont\Weight::LIGHT);

    expect($font->family())->toBe('Helvetica')
        ->and($font->pointSizeF())->toBe(13.5)
        ->and($font->weight())->toBe(QFont\Weight::BOLD)
        ->and($widget->font()->family())->toBe('Helvetica')
        ->and($back->family())->toBe('Courier')
        ->and($back->pointSizeF())->toBe(9.0)
        ->and($back->weight())->toBe(QFont\Weight::LIGHT)
        ->and((new QFont())->weight())->toBe(QFont\Weight::NORMAL);
});

it('loads a pixmap, scales it and shows it in a label', function (): void {
    $pixmap = new QPixmap();

    expect($pixmap->isNull())->toBeTrue()
        ->and($pixmap->load(__DIR__.'/fixtures/pixel.png'))->toBeTrue()
        ->and($pixmap->isNull())->toBeFalse()
        ->and($pixmap->width())->toBe(1)
        ->and($pixmap->height())->toBe(1)
        ->and($pixmap->load('/nope.png'))->toBeFalse();

    $pixmap->load(__DIR__.'/fixtures/pixel.png');
    $scaled = $pixmap->scaled(4, 8, Qt\AspectRatioMode::IGNORE);
    $label = new QLabel();
    $label->setPixmap($scaled);

    expect($scaled->width())->toBe(4)
        ->and($scaled->height())->toBe(8)
        ->and($label->pixmap()->width())->toBe(4);

    $label->setPixmap(null);
    expect($label->pixmap()->isNull())->toBeTrue();
});

it('edits a date as an ISO string and refuses a bad one', function (): void {
    $edit = new QDateEdit();
    $dates = [];
    QObject::connect($edit, 'dateChanged(QDate)', function (string $date) use (&$dates): void { $dates[] = $date; });
    $edit->setCalendarPopup(true);
    $edit->setDisplayFormat('yyyy-MM-dd');
    $edit->setDate('2026-10-02');

    expect($dates)->toBe(['2026-10-02'])
        ->and($edit->date())->toBe('2026-10-02')
        ->and(fn () => $edit->setDate('yesterday'))->toThrow(ValueError::class, 'ISO 8601');
});

it('ranges a progress bar, including the busy range', function (): void {
    $bar = new QProgressBar();
    $bar->setRange(0, 10);
    $bar->setValue(4);
    $bar->setTextVisible(false);

    expect($bar->minimum())->toBe(0)->and($bar->maximum())->toBe(10)->and($bar->value())->toBe(4);

    $bar->reset();
    expect($bar->value())->toBe(-1);

    $bar->setRange(0, 0);
    expect($bar->maximum())->toBe(0);
});

it('shapes a frame and scrolls a widget', function (): void {
    $line = new QFrame();
    $line->setFrameShape(QFrame\Shape::H_LINE);
    $line->setFrameShadow(QFrame\Shadow::SUNKEN);

    $area = new QScrollArea();
    $inner = new QWidget();
    $area->setWidget($inner);
    $area->setWidgetResizable(true);
    $area->setHorizontalScrollBarPolicy(Qt\ScrollBarPolicy::ALWAYS_OFF);
    $area->setVerticalScrollBarPolicy(Qt\ScrollBarPolicy::AS_NEEDED);

    expect($line->frameShape())->toBe(QFrame\Shape::H_LINE)
        ->and($area->widget())->toBe($inner)
        ->and((new QScrollArea())->widget())->toBeNull()
        ->and($area)->toBeInstanceOf(QFrame::class);
});

it('fills a table and reports a row selection', function (): void {
    $table = new QTableWidget(2, 2);
    $table->setHorizontalHeaderLabels(['Name', 'Size']);
    $table->setSelectionBehavior(QAbstractItemView\SelectionBehavior::SELECT_ROWS);
    $table->setSelectionMode(QAbstractItemView\SelectionMode::SINGLE_SELECTION);
    $table->setEditTriggers(QAbstractItemView::NO_EDIT_TRIGGERS);
    $table->setItem(0, 0, new QTableWidgetItem('a'));
    $table->setItem(0, 1, new QTableWidgetItem('1'));
    $table->setItem(1, 0, new QTableWidgetItem('b'));
    $table->setItem(1, 1, new QTableWidgetItem('2'));
    $selections = 0;
    QObject::connect($table, 'itemSelectionChanged()', function () use (&$selections): void { $selections++; });
    $table->selectRow(1);

    expect($selections)->toBe(1)
        ->and($table->currentRow())->toBe(1)
        ->and($table->rowCount())->toBe(2)
        ->and($table->columnCount())->toBe(2)
        ->and($table->item(0, 0)->text())->toBe('a')
        ->and($table->item(1, 1)->text())->toBe('2')
        ->and($table->item(1, 1))->toBe($table->item(1, 1));

    $kept = $table->item(0, 1);
    $kept->setText('one');
    expect($table->item(0, 1)->text())->toBe('one');

    $table->clearContents();
    expect($table->item(0, 0))->toBeNull()
        ->and(fn () => $kept->text())->toThrow(QtException::class, 'deleted');

    $table->setRowCount(3);
    $table->setColumnCount(1);
    expect($table->rowCount())->toBe(3)->and($table->columnCount())->toBe(1);
});

it('refuses a cell outside the table and an item another table holds', function (): void {
    $table = new QTableWidget(2, 2);
    $item = new QTableWidgetItem('loose');

    expect(fn () => $table->setItem(2, 0, $item))->toThrow(ValueError::class, 'row')
        ->and(fn () => $table->setItem(0, 2, $item))->toThrow(ValueError::class, 'column')
        ->and(fn () => $table->setItem(-1, 0, $item))->toThrow(ValueError::class, 'row')
        ->and($table->item(1, 0))->toBeNull()
        ->and($item->text())->toBe('loose');

    $table->setItem(0, 0, $item);
    expect(fn () => (new QTableWidget(1, 1))->setItem(0, 0, $item))->toThrow(ValueError::class, 'already belongs');
});

it('ignores a row selection beyond the table', function (): void {
    $table = new QTableWidget(2, 1);
    $selections = 0;
    QObject::connect($table, 'itemSelectionChanged()', function () use (&$selections): void { $selections++; });
    $table->selectRow(5);

    expect($selections)->toBe(0)->and($table->currentRow())->toBe(-1);
});

it('tracks the header items Qt makes itself', function (): void {
    $table = new QTableWidget(1, 2);
    $table->setHorizontalHeaderLabels(['Name', 'Size']);
    $header = $table->horizontalHeaderItem(0);

    expect($header->text())->toBe('Name')
        ->and($table->horizontalHeaderItem(0))->toBe($header)
        ->and((new QTableWidget(1, 1))->horizontalHeaderItem(0))->toBeNull();

    $table->setColumnCount(0);
    expect(fn () => $header->text())->toThrow(QtException::class, 'deleted');
});

it('hands out a fresh wrapper for an item whose first wrapper is gone', function (): void {
    $table = new QTableWidget(1, 1);
    $table->setItem(0, 0, new QTableWidgetItem('temporary'));

    expect($table->item(0, 0)->text())->toBe('temporary');
});

it('makes a vertical slider by default, as Qt does', function (): void {
    expect((new QSlider())->orientation())->toBe(Qt\Orientation::VERTICAL);
});

it('takes any weight on the font scale and refuses sizes and weights off it', function (): void {
    $font = new QFont('Helvetica', -1.0, 450);
    $font->setWeight(650);

    expect($font->weight())->toBe(650)
        ->and((new QFont('Helvetica', -1.0, 450))->weight())->toBe(450)
        ->and(fn () => $font->setWeight(0))->toThrow(ValueError::class, 'between 1 and 1000')
        ->and(fn () => $font->setWeight(1001))->toThrow(ValueError::class, 'between 1 and 1000')
        ->and(fn () => new QFont('Helvetica', -1.0, 1001))->toThrow(ValueError::class, 'between 1 and 1000')
        ->and(fn () => new QFont('Helvetica', 0.0))->toThrow(ValueError::class, 'greater than 0')
        ->and(fn () => $font->setPointSizeF(0.0))->toThrow(ValueError::class, 'greater than 0');
});

it('refuses a pixmap before a QGuiApplication instead of aborting', function (): void {
    $script = 'try { new QPixmap(); echo "made"; } catch (QtException $e) { echo $e->getMessage(); }';
    exec(escapeshellarg(PHP_BINARY).' -r '.escapeshellarg($script).' 2>&1', $output, $code);

    expect($code)->toBe(0)->and(implode("\n", $output))->toBe('QPixmap needs a QGuiApplication first');
});

it('reads the selected items and their rows, and clears the selection', function (): void {
    $table = new QTableWidget(3, 2);
    $table->setSelectionBehavior(QAbstractItemView\SelectionBehavior::SELECT_ROWS);
    $table->setSelectionMode(QAbstractItemView\SelectionMode::SINGLE_SELECTION);
    foreach ([0, 1, 2] as $row) {
        $table->setItem($row, 0, new QTableWidgetItem("r{$row}"));
        $table->setItem($row, 1, new QTableWidgetItem(''));
    }
    $selections = 0;
    QObject::connect($table, 'itemSelectionChanged()', function () use (&$selections): void { $selections++; });

    expect($table->selectedItems())->toBe([]);

    $table->selectRow(2);
    $items = $table->selectedItems();
    expect($items)->toHaveCount(2)
        ->and($items[0]->row())->toBe(2)
        ->and($items[0])->toBe($table->item(2, 0))
        ->and((new QTableWidgetItem('loose'))->row())->toBe(-1);

    $table->clearSelection();
    expect($table->selectedItems())->toBe([])
        ->and($selections)->toBe(2);
});

it('shows label text as plain text when asked', function (): void {
    $label = new QLabel('<b>x</b>');

    expect($label->textFormat())->toBe(Qt\TextFormat::AUTO_TEXT);

    $label->setTextFormat(Qt\TextFormat::PLAIN_TEXT);
    expect($label->textFormat())->toBe(Qt\TextFormat::PLAIN_TEXT);
});

it('steps a slider by its single and page steps', function (): void {
    $slider = new QSlider(Qt\Orientation::HORIZONTAL);
    $slider->setSingleStep(100);
    $slider->setPageStep(1000);

    expect($slider->singleStep())->toBe(100)
        ->and($slider->pageStep())->toBe(1000);
});

it('scales a pixmap smoothly and carries a device pixel ratio', function (): void {
    $pixmap = new QPixmap();
    $pixmap->load(__DIR__.'/fixtures/pixel.png');
    $smooth = $pixmap->scaled(8, 4, Qt\AspectRatioMode::IGNORE, Qt\TransformationMode::SMOOTH_TRANSFORMATION);
    $smooth->setDevicePixelRatio(2.0);

    expect([$smooth->width(), $smooth->height()])->toBe([8, 4])
        ->and($smooth->devicePixelRatio())->toBe(2.0)
        ->and((new QWidget())->devicePixelRatioF())->toBeGreaterThan(0.0);
});

it('opens the date range down to year 100 and exposes the popup calendar', function (): void {
    $edit = new QDateEdit();

    expect($edit->minimumDate())->toBe('1752-09-14')
        ->and($edit->calendarWidget())->toBeNull();

    $edit->setMinimumDate('0100-01-01');
    $edit->setDate('1500-06-01');
    expect($edit->minimumDate())->toBe('0100-01-01')
        ->and($edit->date())->toBe('1500-06-01')
        ->and(fn () => $edit->setMinimumDate('not a date'))->toThrow(ValueError::class, 'ISO 8601');

    $edit->setCalendarPopup(true);
    expect($edit->calendarWidget())->toBeInstanceOf(QWidget::class);
});
