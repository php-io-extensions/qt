<?php

/** @generate-class-entries */

namespace QMediaPlayer {
    enum PlaybackState: int
    {
        case STOPPED = 0;
        case PLAYING = 1;
        case PAUSED = 2;
    }

    enum MediaStatus: int
    {
        case NO_MEDIA = 0;
        case LOADING = 1;
        case LOADED = 2;
        case STALLED = 3;
        case BUFFERING = 4;
        case BUFFERED = 5;
        case END_OF_MEDIA = 6;
        case INVALID_MEDIA = 7;
    }

    enum Error: int
    {
        case NO_ERROR = 0;
        case RESOURCE_ERROR = 1;
        case FORMAT_ERROR = 2;
        case NETWORK_ERROR = 3;
        case ACCESS_DENIED_ERROR = 4;
    }
}

namespace {
    /**
     * A value in Qt; here a heap copy owned by the PHP object. Made by fromLocalFile() or returned by QMediaPlayer::source().
     *
     * @not-serializable
     */
    final class QUrl
    {
        private function __construct() {}

        public static function fromLocalFile(string $localFile): QUrl {}

        public function toString(): string {}

        public function isValid(): bool {}
    }

    /**
     * @not-serializable
     */
    class QAudioOutput extends QObject
    {
        public function __construct(?QObject $parent = null) {}

        public function setMuted(bool $muted): void {}

        public function isMuted(): bool {}

        public function setVolume(float $volume): void {}

        public function volume(): float {}
    }

    /**
     * Signals playbackStateChanged(QMediaPlayer::PlaybackState), mediaStatusChanged(QMediaPlayer::MediaStatus),
     * errorOccurred(QMediaPlayer::Error,QString), positionChanged(qint64); the enums reach PHP as ints.
     *
     * @not-serializable
     */
    class QMediaPlayer extends QObject
    {
        /** @cvalue QMediaPlayer::Infinite */
        public const int INFINITE_LOOPS = UNKNOWN;

        public function __construct(?QObject $parent = null) {}

        /** A QVideoWidget, or null to detach. */
        public function setVideoOutput(?QObject $output): void {}

        public function setAudioOutput(?QAudioOutput $output): void {}

        public function setSource(QUrl $source): void {}

        public function source(): QUrl {}

        public function play(): void {}

        public function pause(): void {}

        public function stop(): void {}

        /** Milliseconds. */
        public function position(): int {}

        /** Milliseconds. */
        public function duration(): int {}

        public function setPosition(int $position): void {}

        public function playbackState(): QMediaPlayer\PlaybackState {}

        public function mediaStatus(): QMediaPlayer\MediaStatus {}

        /** A count, or QMediaPlayer::INFINITE_LOOPS. */
        public function setLoops(int $loops): void {}

        public function errorString(): string {}

        public function hasVideo(): bool {}

        /** False when no media backend plugin loaded: nothing will play. */
        public function isAvailable(): bool {}
    }

    /**
     * @not-serializable
     */
    class QVideoWidget extends QWidget
    {
        public function __construct(?QWidget $parent = null) {}
    }
}
