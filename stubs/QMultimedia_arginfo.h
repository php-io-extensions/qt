/* This is a generated file, edit the .stub.php file instead.
 * Stub hash: 16a2b5fd620fce95c94aad31924af4f6008a3bff */

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_QUrl___construct, 0, 0, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_QUrl_fromLocalFile, 0, 1, QUrl, 0)
	ZEND_ARG_TYPE_INFO(0, localFile, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_QUrl_toString, 0, 0, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_QUrl_isValid, 0, 0, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_QAudioOutput___construct, 0, 0, 0)
	ZEND_ARG_OBJ_INFO_WITH_DEFAULT_VALUE(0, parent, QObject, 1, "null")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_QAudioOutput_setMuted, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, muted, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_QAudioOutput_isMuted arginfo_class_QUrl_isValid

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_QAudioOutput_setVolume, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, volume, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_QAudioOutput_volume, 0, 0, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_QMediaPlayer___construct arginfo_class_QAudioOutput___construct

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_QMediaPlayer_setVideoOutput, 0, 1, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, output, QObject, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_QMediaPlayer_setAudioOutput, 0, 1, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, output, QAudioOutput, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_QMediaPlayer_setSource, 0, 1, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, source, QUrl, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_QMediaPlayer_source, 0, 0, QUrl, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_QMediaPlayer_play, 0, 0, IS_VOID, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_QMediaPlayer_pause arginfo_class_QMediaPlayer_play

#define arginfo_class_QMediaPlayer_stop arginfo_class_QMediaPlayer_play

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_QMediaPlayer_position, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_QMediaPlayer_duration arginfo_class_QMediaPlayer_position

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_QMediaPlayer_setPosition, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, position, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_QMediaPlayer_playbackState, 0, 0, QMediaPlayer\\PlaybackState, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_QMediaPlayer_mediaStatus, 0, 0, QMediaPlayer\\MediaStatus, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_QMediaPlayer_setLoops, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, loops, IS_LONG, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_QMediaPlayer_errorString arginfo_class_QUrl_toString

#define arginfo_class_QMediaPlayer_hasVideo arginfo_class_QUrl_isValid

#define arginfo_class_QMediaPlayer_isAvailable arginfo_class_QUrl_isValid

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_QVideoWidget___construct, 0, 0, 0)
	ZEND_ARG_OBJ_INFO_WITH_DEFAULT_VALUE(0, parent, QWidget, 1, "null")
ZEND_END_ARG_INFO()

ZEND_METHOD(QUrl, __construct);
ZEND_METHOD(QUrl, fromLocalFile);
ZEND_METHOD(QUrl, toString);
ZEND_METHOD(QUrl, isValid);
ZEND_METHOD(QAudioOutput, __construct);
ZEND_METHOD(QAudioOutput, setMuted);
ZEND_METHOD(QAudioOutput, isMuted);
ZEND_METHOD(QAudioOutput, setVolume);
ZEND_METHOD(QAudioOutput, volume);
ZEND_METHOD(QMediaPlayer, __construct);
ZEND_METHOD(QMediaPlayer, setVideoOutput);
ZEND_METHOD(QMediaPlayer, setAudioOutput);
ZEND_METHOD(QMediaPlayer, setSource);
ZEND_METHOD(QMediaPlayer, source);
ZEND_METHOD(QMediaPlayer, play);
ZEND_METHOD(QMediaPlayer, pause);
ZEND_METHOD(QMediaPlayer, stop);
ZEND_METHOD(QMediaPlayer, position);
ZEND_METHOD(QMediaPlayer, duration);
ZEND_METHOD(QMediaPlayer, setPosition);
ZEND_METHOD(QMediaPlayer, playbackState);
ZEND_METHOD(QMediaPlayer, mediaStatus);
ZEND_METHOD(QMediaPlayer, setLoops);
ZEND_METHOD(QMediaPlayer, errorString);
ZEND_METHOD(QMediaPlayer, hasVideo);
ZEND_METHOD(QMediaPlayer, isAvailable);
ZEND_METHOD(QVideoWidget, __construct);

static const zend_function_entry class_QUrl_methods[] = {
	ZEND_ME(QUrl, __construct, arginfo_class_QUrl___construct, ZEND_ACC_PRIVATE)
	ZEND_ME(QUrl, fromLocalFile, arginfo_class_QUrl_fromLocalFile, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	ZEND_ME(QUrl, toString, arginfo_class_QUrl_toString, ZEND_ACC_PUBLIC)
	ZEND_ME(QUrl, isValid, arginfo_class_QUrl_isValid, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static const zend_function_entry class_QAudioOutput_methods[] = {
	ZEND_ME(QAudioOutput, __construct, arginfo_class_QAudioOutput___construct, ZEND_ACC_PUBLIC)
	ZEND_ME(QAudioOutput, setMuted, arginfo_class_QAudioOutput_setMuted, ZEND_ACC_PUBLIC)
	ZEND_ME(QAudioOutput, isMuted, arginfo_class_QAudioOutput_isMuted, ZEND_ACC_PUBLIC)
	ZEND_ME(QAudioOutput, setVolume, arginfo_class_QAudioOutput_setVolume, ZEND_ACC_PUBLIC)
	ZEND_ME(QAudioOutput, volume, arginfo_class_QAudioOutput_volume, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static const zend_function_entry class_QMediaPlayer_methods[] = {
	ZEND_ME(QMediaPlayer, __construct, arginfo_class_QMediaPlayer___construct, ZEND_ACC_PUBLIC)
	ZEND_ME(QMediaPlayer, setVideoOutput, arginfo_class_QMediaPlayer_setVideoOutput, ZEND_ACC_PUBLIC)
	ZEND_ME(QMediaPlayer, setAudioOutput, arginfo_class_QMediaPlayer_setAudioOutput, ZEND_ACC_PUBLIC)
	ZEND_ME(QMediaPlayer, setSource, arginfo_class_QMediaPlayer_setSource, ZEND_ACC_PUBLIC)
	ZEND_ME(QMediaPlayer, source, arginfo_class_QMediaPlayer_source, ZEND_ACC_PUBLIC)
	ZEND_ME(QMediaPlayer, play, arginfo_class_QMediaPlayer_play, ZEND_ACC_PUBLIC)
	ZEND_ME(QMediaPlayer, pause, arginfo_class_QMediaPlayer_pause, ZEND_ACC_PUBLIC)
	ZEND_ME(QMediaPlayer, stop, arginfo_class_QMediaPlayer_stop, ZEND_ACC_PUBLIC)
	ZEND_ME(QMediaPlayer, position, arginfo_class_QMediaPlayer_position, ZEND_ACC_PUBLIC)
	ZEND_ME(QMediaPlayer, duration, arginfo_class_QMediaPlayer_duration, ZEND_ACC_PUBLIC)
	ZEND_ME(QMediaPlayer, setPosition, arginfo_class_QMediaPlayer_setPosition, ZEND_ACC_PUBLIC)
	ZEND_ME(QMediaPlayer, playbackState, arginfo_class_QMediaPlayer_playbackState, ZEND_ACC_PUBLIC)
	ZEND_ME(QMediaPlayer, mediaStatus, arginfo_class_QMediaPlayer_mediaStatus, ZEND_ACC_PUBLIC)
	ZEND_ME(QMediaPlayer, setLoops, arginfo_class_QMediaPlayer_setLoops, ZEND_ACC_PUBLIC)
	ZEND_ME(QMediaPlayer, errorString, arginfo_class_QMediaPlayer_errorString, ZEND_ACC_PUBLIC)
	ZEND_ME(QMediaPlayer, hasVideo, arginfo_class_QMediaPlayer_hasVideo, ZEND_ACC_PUBLIC)
	ZEND_ME(QMediaPlayer, isAvailable, arginfo_class_QMediaPlayer_isAvailable, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static const zend_function_entry class_QVideoWidget_methods[] = {
	ZEND_ME(QVideoWidget, __construct, arginfo_class_QVideoWidget___construct, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static zend_class_entry *register_class_QMediaPlayer_PlaybackState(void)
{
	zend_class_entry *class_entry = zend_register_internal_enum("QMediaPlayer\\PlaybackState", IS_LONG, NULL);

	zval enum_case_STOPPED_value;
	ZVAL_LONG(&enum_case_STOPPED_value, 0);
	zend_enum_add_case_cstr(class_entry, "STOPPED", &enum_case_STOPPED_value);

	zval enum_case_PLAYING_value;
	ZVAL_LONG(&enum_case_PLAYING_value, 1);
	zend_enum_add_case_cstr(class_entry, "PLAYING", &enum_case_PLAYING_value);

	zval enum_case_PAUSED_value;
	ZVAL_LONG(&enum_case_PAUSED_value, 2);
	zend_enum_add_case_cstr(class_entry, "PAUSED", &enum_case_PAUSED_value);

	return class_entry;
}

static zend_class_entry *register_class_QMediaPlayer_MediaStatus(void)
{
	zend_class_entry *class_entry = zend_register_internal_enum("QMediaPlayer\\MediaStatus", IS_LONG, NULL);

	zval enum_case_NO_MEDIA_value;
	ZVAL_LONG(&enum_case_NO_MEDIA_value, 0);
	zend_enum_add_case_cstr(class_entry, "NO_MEDIA", &enum_case_NO_MEDIA_value);

	zval enum_case_LOADING_value;
	ZVAL_LONG(&enum_case_LOADING_value, 1);
	zend_enum_add_case_cstr(class_entry, "LOADING", &enum_case_LOADING_value);

	zval enum_case_LOADED_value;
	ZVAL_LONG(&enum_case_LOADED_value, 2);
	zend_enum_add_case_cstr(class_entry, "LOADED", &enum_case_LOADED_value);

	zval enum_case_STALLED_value;
	ZVAL_LONG(&enum_case_STALLED_value, 3);
	zend_enum_add_case_cstr(class_entry, "STALLED", &enum_case_STALLED_value);

	zval enum_case_BUFFERING_value;
	ZVAL_LONG(&enum_case_BUFFERING_value, 4);
	zend_enum_add_case_cstr(class_entry, "BUFFERING", &enum_case_BUFFERING_value);

	zval enum_case_BUFFERED_value;
	ZVAL_LONG(&enum_case_BUFFERED_value, 5);
	zend_enum_add_case_cstr(class_entry, "BUFFERED", &enum_case_BUFFERED_value);

	zval enum_case_END_OF_MEDIA_value;
	ZVAL_LONG(&enum_case_END_OF_MEDIA_value, 6);
	zend_enum_add_case_cstr(class_entry, "END_OF_MEDIA", &enum_case_END_OF_MEDIA_value);

	zval enum_case_INVALID_MEDIA_value;
	ZVAL_LONG(&enum_case_INVALID_MEDIA_value, 7);
	zend_enum_add_case_cstr(class_entry, "INVALID_MEDIA", &enum_case_INVALID_MEDIA_value);

	return class_entry;
}

static zend_class_entry *register_class_QMediaPlayer_Error(void)
{
	zend_class_entry *class_entry = zend_register_internal_enum("QMediaPlayer\\Error", IS_LONG, NULL);

	zval enum_case_NO_ERROR_value;
	ZVAL_LONG(&enum_case_NO_ERROR_value, 0);
	zend_enum_add_case_cstr(class_entry, "NO_ERROR", &enum_case_NO_ERROR_value);

	zval enum_case_RESOURCE_ERROR_value;
	ZVAL_LONG(&enum_case_RESOURCE_ERROR_value, 1);
	zend_enum_add_case_cstr(class_entry, "RESOURCE_ERROR", &enum_case_RESOURCE_ERROR_value);

	zval enum_case_FORMAT_ERROR_value;
	ZVAL_LONG(&enum_case_FORMAT_ERROR_value, 2);
	zend_enum_add_case_cstr(class_entry, "FORMAT_ERROR", &enum_case_FORMAT_ERROR_value);

	zval enum_case_NETWORK_ERROR_value;
	ZVAL_LONG(&enum_case_NETWORK_ERROR_value, 3);
	zend_enum_add_case_cstr(class_entry, "NETWORK_ERROR", &enum_case_NETWORK_ERROR_value);

	zval enum_case_ACCESS_DENIED_ERROR_value;
	ZVAL_LONG(&enum_case_ACCESS_DENIED_ERROR_value, 4);
	zend_enum_add_case_cstr(class_entry, "ACCESS_DENIED_ERROR", &enum_case_ACCESS_DENIED_ERROR_value);

	return class_entry;
}

static zend_class_entry *register_class_QUrl(void)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "QUrl", class_QUrl_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, NULL, ZEND_ACC_FINAL|ZEND_ACC_NOT_SERIALIZABLE);

	return class_entry;
}

static zend_class_entry *register_class_QAudioOutput(zend_class_entry *class_entry_QObject)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "QAudioOutput", class_QAudioOutput_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, class_entry_QObject, ZEND_ACC_NOT_SERIALIZABLE);

	return class_entry;
}

static zend_class_entry *register_class_QMediaPlayer(zend_class_entry *class_entry_QObject)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "QMediaPlayer", class_QMediaPlayer_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, class_entry_QObject, ZEND_ACC_NOT_SERIALIZABLE);

	zval const_INFINITE_LOOPS_value;
	ZVAL_LONG(&const_INFINITE_LOOPS_value, QMediaPlayer::Infinite);
	zend_string *const_INFINITE_LOOPS_name = zend_string_init_interned("INFINITE_LOOPS", sizeof("INFINITE_LOOPS") - 1, 1);
	zend_declare_typed_class_constant(class_entry, const_INFINITE_LOOPS_name, &const_INFINITE_LOOPS_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(const_INFINITE_LOOPS_name);

	return class_entry;
}

static zend_class_entry *register_class_QVideoWidget(zend_class_entry *class_entry_QWidget)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "QVideoWidget", class_QVideoWidget_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, class_entry_QWidget, ZEND_ACC_NOT_SERIALIZABLE);

	return class_entry;
}
