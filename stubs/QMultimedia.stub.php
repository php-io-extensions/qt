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

namespace QUrl {
    enum ParsingMode: int
    {
        case TOLERANT_MODE = 0;
        case STRICT_MODE = 1;
        case DECODED_MODE = 2;
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
        /** @cvalue QUrl::None */
        public const int NONE = UNKNOWN;
        /** @cvalue QUrl::RemoveScheme */
        public const int REMOVE_SCHEME = UNKNOWN;
        /** @cvalue QUrl::RemovePassword */
        public const int REMOVE_PASSWORD = UNKNOWN;
        /** @cvalue QUrl::RemoveUserInfo */
        public const int REMOVE_USER_INFO = UNKNOWN;
        /** @cvalue QUrl::RemovePort */
        public const int REMOVE_PORT = UNKNOWN;
        /** @cvalue QUrl::RemoveAuthority */
        public const int REMOVE_AUTHORITY = UNKNOWN;
        /** @cvalue QUrl::RemovePath */
        public const int REMOVE_PATH = UNKNOWN;
        /** @cvalue QUrl::RemoveQuery */
        public const int REMOVE_QUERY = UNKNOWN;
        /** @cvalue QUrl::RemoveFragment */
        public const int REMOVE_FRAGMENT = UNKNOWN;
        /** @cvalue QUrl::PreferLocalFile */
        public const int PREFER_LOCAL_FILE = UNKNOWN;
        /** @cvalue QUrl::StripTrailingSlash */
        public const int STRIP_TRAILING_SLASH = UNKNOWN;
        /** @cvalue QUrl::RemoveFilename */
        public const int REMOVE_FILENAME = UNKNOWN;
        /** @cvalue QUrl::NormalizePathSegments */
        public const int NORMALIZE_PATH_SEGMENTS = UNKNOWN;
        /** @cvalue QUrl::PrettyDecoded */
        public const int PRETTY_DECODED = UNKNOWN;
        /** @cvalue QUrl::EncodeSpaces */
        public const int ENCODE_SPACES = UNKNOWN;
        /** @cvalue QUrl::EncodeUnicode */
        public const int ENCODE_UNICODE = UNKNOWN;
        /** @cvalue QUrl::EncodeDelimiters */
        public const int ENCODE_DELIMITERS = UNKNOWN;
        /** @cvalue QUrl::EncodeReserved */
        public const int ENCODE_RESERVED = UNKNOWN;
        /** @cvalue QUrl::DecodeReserved */
        public const int DECODE_RESERVED = UNKNOWN;
        /** @cvalue QUrl::FullyEncoded */
        public const int FULLY_ENCODED = UNKNOWN;
        /** @cvalue QUrl::FullyDecoded */
        public const int FULLY_DECODED = UNKNOWN;

        public function __construct(string $url, QUrl\ParsingMode $mode = QUrl\ParsingMode::TOLERANT_MODE) {}

        public static function fromLocalFile(string $localFile): QUrl {}

        /** QUrl::FormattingOptions: QUrl's UrlFormattingOption and ComponentFormattingOption constants, OR'd. */
        public function toString(int $options = QUrl::PRETTY_DECODED): string {}

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
