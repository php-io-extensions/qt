<?php

/** @generate-class-entries */

namespace QAction {
    enum MenuRole: int
    {
        case NO_ROLE = 0;
        case TEXT_HEURISTIC_ROLE = 1;
        case APPLICATION_SPECIFIC_ROLE = 2;
        case ABOUT_QT_ROLE = 3;
        case ABOUT_ROLE = 4;
        case PREFERENCES_ROLE = 5;
        case QUIT_ROLE = 6;
    }
}

namespace {
    /**
     * @not-serializable
     */
    class QAction extends QObject
    {
        public function __construct(string $text = "", ?QObject $parent = null) {}

        public function text(): string {}

        public function setText(string $text): void {}

        public function isCheckable(): bool {}

        public function setCheckable(bool $checkable): void {}

        public function isChecked(): bool {}

        public function setChecked(bool $checked): void {}

        public function isEnabled(): bool {}

        public function setEnabled(bool $enabled): void {}

        public function isSeparator(): bool {}

        public function setSeparator(bool $b): void {}

        public function menuRole(): QAction\MenuRole {}

        public function setMenuRole(QAction\MenuRole $menuRole): void {}

        public function shortcut(): QKeySequence {}

        public function setShortcut(QKeySequence $shortcut): void {}

        public function trigger(): void {}

        public function toggle(): void {}
    }
}
