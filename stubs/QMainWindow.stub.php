<?php

/** @generate-class-entries */

/**
 * @not-serializable
 */
class QMainWindow extends QWidget
{
    public function __construct(?QWidget $parent = null) {}

    /** The window's bar, made on first use and owned by the window. */
    public function menuBar(): QMenuBar {}

    public function setMenuBar(QMenuBar $menubar): void {}

    public function centralWidget(): ?QWidget {}

    public function setCentralWidget(QWidget $widget): void {}
}
