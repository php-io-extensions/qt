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

it('makes a push button the default button', function (): void {
    $button = new QPushButton('OK');

    expect($button->isDefault())->toBeFalse();

    $button->setDefault(true);
    expect($button->isDefault())->toBeTrue();
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
    $font = new QFont('Helvetica', 13, QFont\Weight::BOLD->value);
    $widget = new QWidget();
    $widget->setFont($font);
    $back = $widget->font();
    $back->setFamily('Courier');
    $back->setPointSizeF(9.0);
    $back->setWeight(QFont\Weight::LIGHT);

    expect($font->family())->toBe('Helvetica')
        ->and($font->pointSizeF())->toBe(13.0)
        ->and($font->weight())->toBe(QFont\Weight::BOLD)
        ->and($widget->font()->family())->toBe('Helvetica')
        ->and($back->family())->toBe('Courier')
        ->and($back->pointSizeF())->toBe(9.0)
        ->and($back->weight())->toBe(QFont\Weight::LIGHT)
        ->and((new QFont('Helvetica'))->weight())->toBe(QFont\Weight::NORMAL);
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
    $scaled = $pixmap->scaled(4, 8, Qt\AspectRatioMode::IGNORE_ASPECT_RATIO);
    $label = new QLabel();
    $label->setPixmap($scaled);

    expect($scaled->width())->toBe(4)
        ->and($scaled->height())->toBe(8)
        ->and($label->pixmap()->width())->toBe(4)
        ->and([$pixmap->scaled(3, 6)->width(), $pixmap->scaled(3, 6)->height()])->toBe([3, 6]);   // Qt's default: IgnoreAspectRatio

    $label->setPixmap(null);
    expect($label->pixmap()->isNull())->toBeTrue();
});

it('edits a date as an ISO string and refuses a bad one', function (): void {
    $edit = new QDateEdit();
    $dates = [];
    QObject::connect($edit, 'dateChanged(QDate)', function (QDate $date) use (&$dates): void { $dates[] = $date->toString(Qt\DateFormat::ISO_DATE); });
    $edit->setCalendarPopup(true);
    $edit->setDisplayFormat('yyyy-MM-dd');
    $edit->setDate(new QDate(2026, 10, 2));
    $edit->setDate(new QDate(2026, 2, 30));   // invalid: Qt keeps the date it has

    expect($dates)->toBe(['2026-10-02'])
        ->and($edit->date()->toString(Qt\DateFormat::ISO_DATE))->toBe('2026-10-02');
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

it('carries Qt\'s table item types', function (): void {
    expect([QTableWidgetItem::TYPE, QTableWidgetItem::USER_TYPE])->toBe([0, 1000]);
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

it('refuses a cell outside the table, and leaves an item another table holds to Qt', function (): void {
    $table = new QTableWidget(2, 2);
    $item = new QTableWidgetItem('loose');

    expect(fn () => $table->setItem(2, 0, $item))->toThrow(ValueError::class, 'row')
        ->and(fn () => $table->setItem(0, 2, $item))->toThrow(ValueError::class, 'column')
        ->and(fn () => $table->setItem(-1, 0, $item))->toThrow(ValueError::class, 'row')
        ->and($table->item(1, 0))->toBeNull()
        ->and($item->text())->toBe('loose');

    // Qt warns and stores nothing; the item stays the first table's.
    $table->setItem(0, 0, $item);
    $other = new QTableWidget(1, 1);
    $other->setItem(0, 0, $item);

    expect($other->item(0, 0))->toBeNull()
        ->and($table->item(0, 0))->toBe($item);
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

it('takes any weight on the font scale, and Qt answers sizes and weights off it', function (): void {
    $font = new QFont('Helvetica', 12, 450);
    $font->setWeight(650);
    $weights = [$font->weight()];
    $font->setWeight(0);
    $weights[] = $font->weight();
    $font->setWeight(1001);
    $weights[] = $font->weight();
    $font->setPointSizeF(0.0);

    // Qt clamps a weight to its 1..1000 scale and keeps the size it had, warning for each.
    expect($weights)->toBe([650, 1, 1000])
        ->and($font->pointSizeF())->toBe(12.0)
        ->and((new QFont('Helvetica', -1, 450))->weight())->toBe(450)
        ->and(fn () => $font->setWeight(2 ** 40))->toThrow(ValueError::class, 'between');
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
    $smooth = $pixmap->scaled(8, 4, Qt\AspectRatioMode::IGNORE_ASPECT_RATIO, Qt\TransformationMode::SMOOTH_TRANSFORMATION);
    $smooth->setDevicePixelRatio(2.0);

    expect([$smooth->width(), $smooth->height()])->toBe([8, 4])
        ->and($smooth->devicePixelRatio())->toBe(2.0)
        ->and((new QWidget())->devicePixelRatioF())->toBeGreaterThan(0.0);
});

it('opens the date range down to year 100 and exposes the popup calendar', function (): void {
    $edit = new QDateEdit();

    expect($edit->minimumDate()->toString(Qt\DateFormat::ISO_DATE))->toBe('1752-09-14')
        ->and($edit->calendarWidget())->toBeNull();

    $edit->setMinimumDate(new QDate(100, 1, 1));
    $edit->setDate(new QDate(1500, 6, 1));
    expect($edit->minimumDate()->toString(Qt\DateFormat::ISO_DATE))->toBe('0100-01-01')
        ->and($edit->date()->toString(Qt\DateFormat::ISO_DATE))->toBe('1500-06-01');

    $edit->setCalendarPopup(true);
    expect($edit->calendarWidget())->toBeInstanceOf(QCalendarWidget::class);
});

it('focuses a line edit, selects all in it, and undoes and redoes an edit', function (): void {
    $window = new QWidget();
    $edit = new QLineEdit('hello world', $window);
    $window->show();
    $window->activateWindow();
    processUntil(fn (): bool => $window->isActiveWindow());   // focus lands in the active window only
    $edit->setFocus();
    QCoreApplication::processEvents();

    $edit->selectAll();
    $selected = $edit->selectedText();
    $edit->setText('');                 // not an undoable edit: a typed one is
    $edit->setText('hello');
    $edit->selectAll();
    $edit->undo();
    $edit->redo();

    expect($selected)->toBe('hello world')
        ->and(QApplication::focusWidget() === $edit || PHP_OS_FAMILY === 'Darwin')->toBeTrue()
        ->and($edit->hasFocus() || PHP_OS_FAMILY === 'Darwin')->toBeTrue();

    $window->close();
});

it('runs cut, copy and paste on a line edit and a plain text edit with nothing selected', function (): void {
    // Nothing selected: cut and copy leave the system clipboard alone.
    $line = new QLineEdit('abc');
    $text = new QPlainTextEdit();
    $text->setPlainText('xyz');
    foreach ([$line, $text] as $widget) {
        $widget->cut();
        $widget->copy();
        $widget->paste();
        $widget->undo();
        $widget->redo();
        $widget->selectAll();
    }

    // Paste inserts the clipboard at the cursor: after the line edit's text, before the plain text edit's.
    expect($line->text())->toContain('abc')
        ->and($text->toPlainText())->toContain('xyz');
});

it('reports a label\'s links, opens them itself when asked, and takes link interaction flags', function (): void {
    testApplication();
    $label = new QLabel();
    $label->setTextFormat(Qt\TextFormat::RICH_TEXT);
    $label->setText('Read <a href="https://example.com/docs">the docs</a>');
    $activated = [];
    $hovered = [];
    QObject::connect($label, 'linkActivated(QString)', function (string $url) use (&$activated): void { $activated[] = $url; });
    QObject::connect($label, 'linkHovered(QString)', function (string $url) use (&$hovered): void { $hovered[] = $url; });
    // Emitted by name with openExternalLinks off: the connected callables run, nothing opens.
    QMetaObject::invokeMethod($label, 'linkActivated', Qt\ConnectionType::DIRECT_CONNECTION, 'https://example.com/docs');
    QMetaObject::invokeMethod($label, 'linkHovered', Qt\ConnectionType::DIRECT_CONNECTION, 'https://example.com/docs');
    $before = $label->openExternalLinks();
    $label->setOpenExternalLinks(true);
    $label->setTextInteractionFlags(Qt\TextInteractionFlag::LINKS_ACCESSIBLE_BY_MOUSE->value | Qt\TextInteractionFlag::LINKS_ACCESSIBLE_BY_KEYBOARD->value);
    $links = $label->textInteractionFlags();
    $label->setTextInteractionFlags(Qt\TextInteractionFlag::TEXT_BROWSER_INTERACTION);

    expect($before)->toBeFalse()
        ->and($label->openExternalLinks())->toBeTrue()
        ->and($links)->toBe(12)
        ->and($label->textInteractionFlags())->toBe(13)
        ->and($activated)->toBe(['https://example.com/docs'])
        ->and($hovered)->toBe(['https://example.com/docs']);
});

it('has QDesktopServices::openUrl as a static call, and no instances', function (): void {
    expect((new ReflectionMethod(QDesktopServices::class, 'openUrl'))->isStatic())->toBeTrue()
        ->and((new ReflectionClass(QDesktopServices::class))->isInstantiable())->toBeFalse();
});

it('lays widgets out in a splitter and reads sizes and handles back', function (): void {
    $splitter = new QSplitter(Qt\Orientation::HORIZONTAL);
    [$a, $b, $c] = [new QWidget(), new QWidget(), new QWidget()];
    $splitter->addWidget($a);
    $splitter->addWidget($c);
    $splitter->insertWidget(1, $b);
    $splitter->setOpaqueResize(true);
    $splitter->setChildrenCollapsible(false);
    $splitter->setHandleWidth(6);
    $splitter->setStretchFactor(0, 1);
    $splitter->resize(400, 100);
    $splitter->setSizes([100, 150, 150]);
    $moved = [];
    QObject::connect($splitter, 'splitterMoved(int,int)', function (int $pos, int $index) use (&$moved): void { $moved[] = $index; });
    $splitter->setSizes([120, 130, 150]);

    expect($splitter->count())->toBe(3)->and($splitter->indexOf($b))->toBe(1)->and($splitter->indexOf(new QWidget()))->toBe(-1)
        ->and($splitter->widget(2))->toBe($c)->and($splitter->widget(3))->toBeNull()
        ->and($a->parentWidget())->toBe($splitter)
        ->and($splitter->orientation())->toBe(Qt\Orientation::HORIZONTAL)
        ->and($splitter->sizes())->toHaveCount(3)->and(array_sum($splitter->sizes()))->toBeGreaterThan(0)
        ->and($splitter->opaqueResize())->toBeTrue()->and($splitter->childrenCollapsible())->toBeFalse()
        ->and($splitter->handleWidth())->toBe(6)
        ->and($splitter->handle(1))->toBeInstanceOf(QSplitterHandle::class)
        ->and($splitter->handle(1)->splitter())->toBe($splitter)
        ->and($splitter->handle(9))->toBeNull()->and($splitter->handle(-1))->toBeNull()
        ->and($moved)->toBe([])
        ->and(fn () => $splitter->setSizes([1, 'x']))->toThrow(TypeError::class)
        ->and(fn () => new QSplitterHandle())->toThrow(Error::class);

    $appended = new QWidget();
    $splitter->insertWidget(9, $appended);
    $splitter->setStretchFactor(9, 1);
    expect($splitter->indexOf($appended))->toBe(3);

    $splitter->setOrientation(Qt\Orientation::VERTICAL);
    expect($splitter->orientation())->toBe(Qt\Orientation::VERTICAL);
});

it('holds tabs with text and switches pages', function (): void {
    $tabs = new QTabWidget();
    [$one, $two] = [new QWidget(), new QWidget()];
    expect($tabs->currentIndex())->toBe(-1)
        ->and($tabs->addTab($one, 'One'))->toBe(0)->and($tabs->addTab($two, 'Two'))->toBe(1);
    $changed = [];
    QObject::connect($tabs, 'currentChanged(int)', function (int $index) use (&$changed): void { $changed[] = $index; });
    $tabs->setCurrentIndex(1);
    $tabs->setTabText(0, 'Uno');
    $tabs->setDocumentMode(true);

    expect($tabs->count())->toBe(2)->and($tabs->currentIndex())->toBe(1)->and($changed)->toBe([1])
        ->and($tabs->currentWidget())->toBe($two)
        ->and($tabs->tabText(0))->toBe('Uno')->and($tabs->indexOf($two))->toBe(1)->and($tabs->indexOf(new QWidget()))->toBe(-1)
        ->and($tabs->widget(0))->toBe($one)->and($tabs->widget(7))->toBeNull()
        ->and($tabs->documentMode())->toBeTrue()
        ->and($tabs->tabText(7))->toBe('');
    $tabs->setCurrentIndex(7);
    $tabs->setTabText(-1, 'x');
    $tabs->removeTab(7);
    expect($tabs->currentIndex())->toBe(1)->and($tabs->count())->toBe(2)->and($changed)->toBe([1]);
    $tabs->removeTab(1);
    expect($tabs->count())->toBe(1)->and($changed)->toBe([1, 0])->and($two->isWindow())->toBeFalse();
});

it('carries Qt\'s tree item types and holds text, colour and data per column', function (): void {
    $item = new QTreeWidgetItem();
    $item->setText(1, 'x');
    $item->setForeground(0, new QBrush(new QColor(255, 0, 0)));
    $color = $item->foreground(0)->color();
    $role = Qt\ItemDataRole::USER_ROLE->value;
    $data = [];
    foreach (['id-1', 7, true, null] as $value) {
        $item->setData(0, $role, $value);
        $data[] = $item->data(0, $role);
    }
    $item->setData(1, $role, new QColor(1, 2, 3));
    $stored = $item->data(1, $role);
    $brush = $item->data(0, Qt\ItemDataRole::FOREGROUND_ROLE->value);

    expect([QTreeWidgetItem::TYPE, QTreeWidgetItem::USER_TYPE])->toBe([0, 1000])
        ->and([Qt\ItemDataRole::DISPLAY_ROLE->value, Qt\ItemDataRole::FOREGROUND_ROLE->value, $role])->toBe([0, 9, 256])
        ->and($item->text(1))->toBe('x')->and($item->text(0))->toBe('')
        ->and($item->data(1, Qt\ItemDataRole::DISPLAY_ROLE->value))->toBe('x')
        ->and([$color->red(), $color->green(), $color->blue()])->toBe([255, 0, 0])
        ->and($data)->toBe(['id-1', 7, true, null])
        ->and([$stored::class, $stored->red(), $stored->green(), $stored->blue()])->toBe([QColor::class, 1, 2, 3])
        ->and([$brush::class, $brush->color()->red()])->toBe([QBrush::class, 255])
        ->and($item->data(5, $role))->toBeNull();
});

it('builds a tree of items, expands and collapses them, and keeps one wrapper per item', function (): void {
    $tree = new QTreeWidget();
    $tree->setColumnCount(3);
    $columns = $tree->columnCount();
    $tree->setHeaderLabels(['A', 'B', 'C', 'D']);
    [$a, $a1] = [new QTreeWidgetItem(), new QTreeWidgetItem()];
    $tree->addTopLevelItem($a);
    $a->addChild($a1);
    $tree->expandItem($a);
    $expanded = $a->isExpanded();
    $tree->collapseItem($a);
    $collapsed = $a->isExpanded();
    $a->setExpanded(true);
    $a1->setChildIndicatorPolicy(QTreeWidgetItem\ChildIndicatorPolicy::DONT_SHOW_INDICATOR);

    expect($columns)->toBe(3)->and($tree->columnCount())->toBe(4)
        ->and($a->childCount())->toBe(1)->and($a1->childCount())->toBe(0)
        ->and($a->child(0))->toBe($a1)->and($a->child(1))->toBeNull()
        ->and($a1->parent())->toBe($a)->and($a->parent())->toBeNull()
        ->and([$expanded, $collapsed, $a->isExpanded()])->toBe([true, false, true])
        ->and($a1->childIndicatorPolicy())->toBe(QTreeWidgetItem\ChildIndicatorPolicy::DONT_SHOW_INDICATOR)
        ->and($a->childIndicatorPolicy())->toBe(QTreeWidgetItem\ChildIndicatorPolicy::DONT_SHOW_INDICATOR_WHEN_CHILDLESS)
        ->and(array_map(fn ($case) => $case->value, QTreeWidgetItem\ChildIndicatorPolicy::cases()))->toBe([0, 1, 2]);
});

it('reports expansion, the current item and the selection with the items themselves', function (): void {
    $tree = new QTreeWidget();
    [$a, $a1] = [new QTreeWidgetItem(), new QTreeWidgetItem()];
    $tree->addTopLevelItem($a);
    $a->addChild($a1);
    $seen = [];
    QObject::connect($tree, 'itemExpanded(QTreeWidgetItem*)', function (QTreeWidgetItem $item) use (&$seen): void { $seen[] = ['expanded', $item]; });
    QObject::connect($tree, 'itemCollapsed(QTreeWidgetItem*)', function (QTreeWidgetItem $item) use (&$seen): void { $seen[] = ['collapsed', $item]; });
    QObject::connect($tree, 'currentItemChanged(QTreeWidgetItem*,QTreeWidgetItem*)', function (?QTreeWidgetItem $current, ?QTreeWidgetItem $previous) use (&$seen): void {
        $seen[] = ['current', $current, $previous];
    });
    QObject::connect($tree, 'itemSelectionChanged()', function () use (&$seen): void { $seen[] = ['selection']; });
    $activated = QObject::connect($tree, 'itemActivated(QTreeWidgetItem*,int)', function (QTreeWidgetItem $item, int $column): void {});

    $tree->expandItem($a);
    $tree->collapseItem($a);
    $tree->setCurrentItem($a1);
    $selected = $tree->selectedItems();
    $current = $tree->currentItem();
    $tree->clearSelection();

    expect($seen)->toBe([['expanded', $a], ['collapsed', $a], ['selection'], ['current', $a1, null], ['selection']])
        ->and($selected)->toBe([$a1])->and($current)->toBe($a1)
        ->and($tree->selectedItems())->toBe([])
        ->and($activated->isValid())->toBeTrue();

    $tree->setCurrentItem(null);
    expect($tree->currentItem())->toBeNull();
});

it('lets Qt delete the items a tree or a parent item holds, and leaves an item already placed where it is', function (): void {
    $tree = new QTreeWidget();
    $a = new QTreeWidgetItem();
    $tree->addTopLevelItem($a);
    $tree->clear();
    expect(fn () => $a->text(0))->toThrow(QtException::class, 'deleted');

    $parent = new QTreeWidgetItem();
    $child = new QTreeWidgetItem();
    $parent->addChild($child);
    unset($parent);
    expect(fn () => $child->text(0))->toThrow(QtException::class, 'deleted');

    // Qt ignores an item that already has a tree or a parent; it stays where it was.
    $placed = new QTreeWidgetItem();
    $placed->setText(0, 'placed');
    $tree->addTopLevelItem($placed);
    $other = new QTreeWidget();
    $other->addTopLevelItem($placed);
    $holder = new QTreeWidgetItem();
    $holder->addChild($placed);
    $tree->setCurrentItem($placed);
    $other->setCurrentItem($placed);

    expect($placed->text(0))->toBe('placed')->and($placed->parent())->toBeNull()
        ->and($holder->childCount())->toBe(0)
        ->and($tree->currentItem())->toBe($placed)->and($other->currentItem())->toBeNull();
});

it('scrolls to an item with each scroll hint', function (): void {
    $tree = new QTreeWidget();
    $item = new QTreeWidgetItem();
    $tree->addTopLevelItem($item);
    $tree->scrollToItem($item);
    foreach (QAbstractItemView\ScrollHint::cases() as $hint) {
        $tree->scrollToItem($item, $hint);
    }

    expect(array_map(fn ($case) => $case->value, QAbstractItemView\ScrollHint::cases()))->toBe([0, 1, 2, 3])
        ->and(QAbstractItemView\ScrollHint::POSITION_AT_TOP->value)->toBe(1);
});
