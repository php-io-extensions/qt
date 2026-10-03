#include "runtime.h"

#include <QtCore/QUrl>
#include <QtMultimedia/QAudioOutput>
#include <QtMultimedia/QMediaPlayer>
#include <QtMultimediaWidgets/QVideoWidget>

/* After the Qt headers: the generated class registration spells QMediaPlayer::Infinite. */
#include "../stubs/QMultimedia_arginfo.h"

static_assert(QMediaPlayer::StoppedState == 0 && QMediaPlayer::PlayingState == 1 && QMediaPlayer::PausedState == 2,
	"QMediaPlayer::PlaybackState values differ from the stub's enum");
static_assert(QMediaPlayer::NoMedia == 0 && QMediaPlayer::LoadingMedia == 1 && QMediaPlayer::LoadedMedia == 2
	&& QMediaPlayer::StalledMedia == 3 && QMediaPlayer::BufferingMedia == 4 && QMediaPlayer::BufferedMedia == 5
	&& QMediaPlayer::EndOfMedia == 6 && QMediaPlayer::InvalidMedia == 7,
	"QMediaPlayer::MediaStatus values differ from the stub's enum");
static_assert(QMediaPlayer::NoError == 0 && QMediaPlayer::ResourceError == 1 && QMediaPlayer::FormatError == 2
	&& QMediaPlayer::NetworkError == 3 && QMediaPlayer::AccessDeniedError == 4,
	"QMediaPlayer::Error values differ from the stub's enum");

void phpqt_register_QMultimedia()
{
	phpqt_ce_QMediaPlayer_PlaybackState = register_class_QMediaPlayer_PlaybackState();
	phpqt_ce_QMediaPlayer_MediaStatus = register_class_QMediaPlayer_MediaStatus();
	phpqt_ce_QMediaPlayer_Error = register_class_QMediaPlayer_Error();

	phpqt_ce_QUrl = register_class_QUrl();
	phpqt_value_setup(phpqt_ce_QUrl);

	phpqt_ce_QAudioOutput = register_class_QAudioOutput(phpqt_ce_QObject);
	phpqt_object_setup(phpqt_ce_QAudioOutput);
	phpqt_map_class("QAudioOutput", phpqt_ce_QAudioOutput);

	phpqt_ce_QMediaPlayer = register_class_QMediaPlayer(phpqt_ce_QObject);
	phpqt_object_setup(phpqt_ce_QMediaPlayer);
	phpqt_map_class("QMediaPlayer", phpqt_ce_QMediaPlayer);

	phpqt_ce_QVideoWidget = register_class_QVideoWidget(phpqt_ce_QWidget);
	phpqt_object_setup(phpqt_ce_QVideoWidget);
	phpqt_map_class("QVideoWidget", phpqt_ce_QVideoWidget);
}

/* ---- QUrl -------------------------------------------------------------- */

static void phpqt_destroy_url(void *ptr) { delete static_cast<QUrl *>(ptr); }

static void phpqt_return_url(zval *rv, const QUrl &url)
{
	object_init_ex(rv, phpqt_ce_QUrl);
	phpqt_value_hold(Z_OBJ_P(rv), new QUrl(url), true, phpqt_destroy_url);
}

ZEND_METHOD(QUrl, __construct)
{
	ZEND_PARSE_PARAMETERS_NONE();

	zend_throw_error(nullptr, "QUrl is made by QUrl::fromLocalFile()");
}

ZEND_METHOD(QUrl, fromLocalFile)
{
	zend_string *local_file;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_STR(local_file)
	ZEND_PARSE_PARAMETERS_END();

	phpqt_return_url(return_value, QUrl::fromLocalFile(phpqt_qstring(local_file)));
}

ZEND_METHOD(QUrl, toString)
{
	ZEND_PARSE_PARAMETERS_NONE();
	PHPQT_VALUE_THIS(QUrl, url);

	phpqt_return_qstring(return_value, url->toString());
}

ZEND_METHOD(QUrl, isValid)
{
	ZEND_PARSE_PARAMETERS_NONE();
	PHPQT_VALUE_THIS(QUrl, url);

	RETURN_BOOL(url->isValid());
}

/* ---- QAudioOutput ------------------------------------------------------ */

/* QObject-parented constructors: QAudioOutput, QMediaPlayer. */
template <typename Object>
static void phpqt_construct_object(INTERNAL_FUNCTION_PARAMETERS)
{
	zend_object *parent = nullptr;
	bool failed;

	ZEND_PARSE_PARAMETERS_START(0, 1)
		Z_PARAM_OPTIONAL
		Z_PARAM_OBJ_OF_CLASS_OR_NULL(parent, phpqt_ce_QObject)
	ZEND_PARSE_PARAMETERS_END();
	PHPQT_REQUIRE_MAIN_THREAD();

	if (QCoreApplication::instance() == nullptr) {
		zend_throw_exception_ex(phpqt_ce_QtException, 0, "%s needs a QCoreApplication first", ZSTR_VAL(EX(func)->common.scope->name));
		RETURN_THROWS();
	}

	QObject *qparent = phpqt_arg(parent, 1, &failed);
	if (failed) {
		RETURN_THROWS();
	}

	phpqt_adopt(Z_OBJ_P(ZEND_THIS), new Object(qparent));
}

ZEND_METHOD(QAudioOutput, __construct)
{
	phpqt_construct_object<QAudioOutput>(INTERNAL_FUNCTION_PARAM_PASSTHRU);
}

ZEND_METHOD(QAudioOutput, setMuted)
{
	bool muted;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_BOOL(muted)
	ZEND_PARSE_PARAMETERS_END();
	PHPQT_THIS(QAudioOutput, output);

	output->setMuted(muted);
}

ZEND_METHOD(QAudioOutput, isMuted)
{
	ZEND_PARSE_PARAMETERS_NONE();
	PHPQT_THIS(QAudioOutput, output);

	RETURN_BOOL(output->isMuted());
}

ZEND_METHOD(QAudioOutput, setVolume)
{
	double volume;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_DOUBLE(volume)
	ZEND_PARSE_PARAMETERS_END();
	PHPQT_THIS(QAudioOutput, output);

	output->setVolume(static_cast<float>(volume));
}

ZEND_METHOD(QAudioOutput, volume)
{
	ZEND_PARSE_PARAMETERS_NONE();
	PHPQT_THIS(QAudioOutput, output);

	RETURN_DOUBLE(static_cast<double>(output->volume()));
}

/* ---- QMediaPlayer ------------------------------------------------------ */

ZEND_METHOD(QMediaPlayer, __construct)
{
	phpqt_construct_object<QMediaPlayer>(INTERNAL_FUNCTION_PARAM_PASSTHRU);
}

ZEND_METHOD(QMediaPlayer, setVideoOutput)
{
	zend_object *output_obj = nullptr;
	bool failed;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_OBJ_OF_CLASS_OR_NULL(output_obj, phpqt_ce_QObject)
	ZEND_PARSE_PARAMETERS_END();
	PHPQT_THIS(QMediaPlayer, player);

	QObject *output = phpqt_arg(output_obj, 1, &failed);
	if (failed) {
		RETURN_THROWS();
	}

	player->setVideoOutput(output);
}

ZEND_METHOD(QMediaPlayer, setAudioOutput)
{
	zend_object *output_obj = nullptr;
	bool failed;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_OBJ_OF_CLASS_OR_NULL(output_obj, phpqt_ce_QAudioOutput)
	ZEND_PARSE_PARAMETERS_END();
	PHPQT_THIS(QMediaPlayer, player);

	QAudioOutput *output = static_cast<QAudioOutput *>(phpqt_arg(output_obj, 1, &failed));
	if (failed) {
		RETURN_THROWS();
	}

	player->setAudioOutput(output);
}

ZEND_METHOD(QMediaPlayer, setSource)
{
	zend_object *url_obj;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_OBJ_OF_CLASS(url_obj, phpqt_ce_QUrl)
	ZEND_PARSE_PARAMETERS_END();
	PHPQT_THIS(QMediaPlayer, player);

	QUrl *url = static_cast<QUrl *>(phpqt_value_arg(url_obj, 1));
	if (url == nullptr) {
		RETURN_THROWS();
	}

	player->setSource(*url);
}

ZEND_METHOD(QMediaPlayer, source)
{
	ZEND_PARSE_PARAMETERS_NONE();
	PHPQT_THIS(QMediaPlayer, player);

	phpqt_return_url(return_value, player->source());
}

#define PHPQT_PLAYER_VOID(name, call) \
ZEND_METHOD(QMediaPlayer, name) \
{ \
	ZEND_PARSE_PARAMETERS_NONE(); \
	PHPQT_THIS(QMediaPlayer, player); \
	player->call(); \
}

PHPQT_PLAYER_VOID(play, play)
PHPQT_PLAYER_VOID(pause, pause)
PHPQT_PLAYER_VOID(stop, stop)

ZEND_METHOD(QMediaPlayer, position)
{
	ZEND_PARSE_PARAMETERS_NONE();
	PHPQT_THIS(QMediaPlayer, player);

	RETURN_LONG(static_cast<zend_long>(player->position()));
}

ZEND_METHOD(QMediaPlayer, duration)
{
	ZEND_PARSE_PARAMETERS_NONE();
	PHPQT_THIS(QMediaPlayer, player);

	RETURN_LONG(static_cast<zend_long>(player->duration()));
}

ZEND_METHOD(QMediaPlayer, setPosition)
{
	zend_long position;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(position)
	ZEND_PARSE_PARAMETERS_END();
	PHPQT_THIS(QMediaPlayer, player);

	player->setPosition(static_cast<qint64>(position));
}

ZEND_METHOD(QMediaPlayer, playbackState)
{
	ZEND_PARSE_PARAMETERS_NONE();
	PHPQT_THIS(QMediaPlayer, player);

	phpqt_return_enum(return_value, phpqt_ce_QMediaPlayer_PlaybackState, static_cast<zend_long>(player->playbackState()));
}

ZEND_METHOD(QMediaPlayer, mediaStatus)
{
	ZEND_PARSE_PARAMETERS_NONE();
	PHPQT_THIS(QMediaPlayer, player);

	phpqt_return_enum(return_value, phpqt_ce_QMediaPlayer_MediaStatus, static_cast<zend_long>(player->mediaStatus()));
}

ZEND_METHOD(QMediaPlayer, setLoops)
{
	zend_long loops;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(loops)
	ZEND_PARSE_PARAMETERS_END();
	PHPQT_THIS(QMediaPlayer, player);

	player->setLoops(static_cast<int>(loops));
}

ZEND_METHOD(QMediaPlayer, errorString)
{
	ZEND_PARSE_PARAMETERS_NONE();
	PHPQT_THIS(QMediaPlayer, player);

	phpqt_return_qstring(return_value, player->errorString());
}

ZEND_METHOD(QMediaPlayer, hasVideo)
{
	ZEND_PARSE_PARAMETERS_NONE();
	PHPQT_THIS(QMediaPlayer, player);

	RETURN_BOOL(player->hasVideo());
}

ZEND_METHOD(QMediaPlayer, isAvailable)
{
	ZEND_PARSE_PARAMETERS_NONE();
	PHPQT_THIS(QMediaPlayer, player);

	RETURN_BOOL(player->isAvailable());
}

/* ---- QVideoWidget ------------------------------------------------------ */

ZEND_METHOD(QVideoWidget, __construct)
{
	phpqt_construct_widget<QVideoWidget>(INTERNAL_FUNCTION_PARAM_PASSTHRU);
}
