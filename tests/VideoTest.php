<?php

declare(strict_types=1);

beforeEach(fn () => testApplication());

it('plays a clip to its end and reports a missing file', function (): void {
    $player = new QMediaPlayer();
    expect($player->isAvailable())->toBeTrue();
    $audio = new QAudioOutput();
    $audio->setMuted(true);
    $video = new QVideoWidget();
    $player->setAudioOutput($audio);
    $player->setVideoOutput($video);
    $video->show();
    $statuses = [];
    QObject::connect($player, 'mediaStatusChanged(QMediaPlayer::MediaStatus)', function (int $s) use (&$statuses): void { $statuses[] = $s; });
    $player->setSource(QUrl::fromLocalFile(__DIR__.'/fixtures/clip.mp4'));
    $player->play();
    processUntil(fn () => in_array(QMediaPlayer\MediaStatus::END_OF_MEDIA->value, $statuses, true), 8000);

    expect($statuses)->toContain(QMediaPlayer\MediaStatus::END_OF_MEDIA->value)
        ->and($player->duration())->toBeGreaterThan(900)
        ->and($player->hasVideo())->toBeTrue()
        ->and($player->playbackState())->toBe(QMediaPlayer\PlaybackState::STOPPED)
        ->and($player->source()->toString())->toBe(QUrl::fromLocalFile(__DIR__.'/fixtures/clip.mp4')->toString())
        ->and($audio->isMuted())->toBeTrue();

    $errors = [];
    QObject::connect($player, 'errorOccurred(QMediaPlayer::Error,QString)', function (int $e, string $m) use (&$errors): void { $errors[] = $e; });
    $player->setSource(QUrl::fromLocalFile('/nope/clip.mp4'));
    $player->play();
    processUntil(fn () => $errors !== [], 5000);
    expect($errors)->not->toBe([])->and($player->mediaStatus())->toBe(QMediaPlayer\MediaStatus::INVALID_MEDIA)
        ->and($player->errorString())->not->toBe('');
    $video->close();
});

it('pauses, seeks and loops', function (): void {
    $player = new QMediaPlayer();
    $audio = new QAudioOutput();
    $audio->setVolume(0.0);
    $player->setAudioOutput($audio);
    $player->setLoops(QMediaPlayer::INFINITE_LOOPS);
    $states = [];
    QObject::connect($player, 'playbackStateChanged(QMediaPlayer::PlaybackState)', function (int $s) use (&$states): void { $states[] = $s; });
    $player->setSource(QUrl::fromLocalFile(__DIR__.'/fixtures/clip.mp4'));
    $player->play();
    processUntil(fn () => $player->position() > 0, 5000);
    $player->pause();
    $player->setPosition(500);
    processUntil(fn () => $player->position() >= 500, 2000);

    expect($states)->toBe([QMediaPlayer\PlaybackState::PLAYING->value, QMediaPlayer\PlaybackState::PAUSED->value])
        ->and($player->position())->toBeGreaterThanOrEqual(500)
        ->and($audio->volume())->toBe(0.0)
        ->and(QUrl::fromLocalFile('/x.mp4')->isValid())->toBeTrue();

    $player->stop();
    expect($player->playbackState())->toBe(QMediaPlayer\PlaybackState::STOPPED);
});
