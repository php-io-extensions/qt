/* This is a generated file, edit the .stub.php file instead.
 * Stub hash: 8a2194135b4f1131120827472f3a76339eb40e81 */

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_QUrl___construct, 0, 0, 1)
	ZEND_ARG_TYPE_INFO(0, url, IS_STRING, 0)
	ZEND_ARG_OBJ_INFO_WITH_DEFAULT_VALUE(0, mode, QUrl\\ParsingMode, 0, "QUrl\\ParsingMode::TOLERANT_MODE")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_QUrl_fromLocalFile, 0, 1, QUrl, 0)
	ZEND_ARG_TYPE_INFO(0, localFile, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_QUrl_toString, 0, 0, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, options, IS_LONG, 0, "QUrl::PRETTY_DECODED")
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

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_QMediaPlayer_errorString, 0, 0, IS_STRING, 0)
ZEND_END_ARG_INFO()

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
	ZEND_ME(QUrl, __construct, arginfo_class_QUrl___construct, ZEND_ACC_PUBLIC)
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

static zend_class_entry *register_class_QUrl_ParsingMode(void)
{
	zend_class_entry *class_entry = zend_register_internal_enum("QUrl\\ParsingMode", IS_LONG, NULL);

	zval enum_case_TOLERANT_MODE_value;
	ZVAL_LONG(&enum_case_TOLERANT_MODE_value, 0);
	zend_enum_add_case_cstr(class_entry, "TOLERANT_MODE", &enum_case_TOLERANT_MODE_value);

	zval enum_case_STRICT_MODE_value;
	ZVAL_LONG(&enum_case_STRICT_MODE_value, 1);
	zend_enum_add_case_cstr(class_entry, "STRICT_MODE", &enum_case_STRICT_MODE_value);

	zval enum_case_DECODED_MODE_value;
	ZVAL_LONG(&enum_case_DECODED_MODE_value, 2);
	zend_enum_add_case_cstr(class_entry, "DECODED_MODE", &enum_case_DECODED_MODE_value);

	return class_entry;
}

static zend_class_entry *register_class_QUrl(void)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "QUrl", class_QUrl_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, NULL, ZEND_ACC_FINAL|ZEND_ACC_NOT_SERIALIZABLE);

	zval const_NONE_value;
	ZVAL_LONG(&const_NONE_value, QUrl::None);
	zend_string *const_NONE_name = zend_string_init_interned("NONE", sizeof("NONE") - 1, 1);
	zend_declare_typed_class_constant(class_entry, const_NONE_name, &const_NONE_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(const_NONE_name);

	zval const_REMOVE_SCHEME_value;
	ZVAL_LONG(&const_REMOVE_SCHEME_value, QUrl::RemoveScheme);
	zend_string *const_REMOVE_SCHEME_name = zend_string_init_interned("REMOVE_SCHEME", sizeof("REMOVE_SCHEME") - 1, 1);
	zend_declare_typed_class_constant(class_entry, const_REMOVE_SCHEME_name, &const_REMOVE_SCHEME_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(const_REMOVE_SCHEME_name);

	zval const_REMOVE_PASSWORD_value;
	ZVAL_LONG(&const_REMOVE_PASSWORD_value, QUrl::RemovePassword);
	zend_string *const_REMOVE_PASSWORD_name = zend_string_init_interned("REMOVE_PASSWORD", sizeof("REMOVE_PASSWORD") - 1, 1);
	zend_declare_typed_class_constant(class_entry, const_REMOVE_PASSWORD_name, &const_REMOVE_PASSWORD_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(const_REMOVE_PASSWORD_name);

	zval const_REMOVE_USER_INFO_value;
	ZVAL_LONG(&const_REMOVE_USER_INFO_value, QUrl::RemoveUserInfo);
	zend_string *const_REMOVE_USER_INFO_name = zend_string_init_interned("REMOVE_USER_INFO", sizeof("REMOVE_USER_INFO") - 1, 1);
	zend_declare_typed_class_constant(class_entry, const_REMOVE_USER_INFO_name, &const_REMOVE_USER_INFO_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(const_REMOVE_USER_INFO_name);

	zval const_REMOVE_PORT_value;
	ZVAL_LONG(&const_REMOVE_PORT_value, QUrl::RemovePort);
	zend_string *const_REMOVE_PORT_name = zend_string_init_interned("REMOVE_PORT", sizeof("REMOVE_PORT") - 1, 1);
	zend_declare_typed_class_constant(class_entry, const_REMOVE_PORT_name, &const_REMOVE_PORT_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(const_REMOVE_PORT_name);

	zval const_REMOVE_AUTHORITY_value;
	ZVAL_LONG(&const_REMOVE_AUTHORITY_value, QUrl::RemoveAuthority);
	zend_string *const_REMOVE_AUTHORITY_name = zend_string_init_interned("REMOVE_AUTHORITY", sizeof("REMOVE_AUTHORITY") - 1, 1);
	zend_declare_typed_class_constant(class_entry, const_REMOVE_AUTHORITY_name, &const_REMOVE_AUTHORITY_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(const_REMOVE_AUTHORITY_name);

	zval const_REMOVE_PATH_value;
	ZVAL_LONG(&const_REMOVE_PATH_value, QUrl::RemovePath);
	zend_string *const_REMOVE_PATH_name = zend_string_init_interned("REMOVE_PATH", sizeof("REMOVE_PATH") - 1, 1);
	zend_declare_typed_class_constant(class_entry, const_REMOVE_PATH_name, &const_REMOVE_PATH_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(const_REMOVE_PATH_name);

	zval const_REMOVE_QUERY_value;
	ZVAL_LONG(&const_REMOVE_QUERY_value, QUrl::RemoveQuery);
	zend_string *const_REMOVE_QUERY_name = zend_string_init_interned("REMOVE_QUERY", sizeof("REMOVE_QUERY") - 1, 1);
	zend_declare_typed_class_constant(class_entry, const_REMOVE_QUERY_name, &const_REMOVE_QUERY_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(const_REMOVE_QUERY_name);

	zval const_REMOVE_FRAGMENT_value;
	ZVAL_LONG(&const_REMOVE_FRAGMENT_value, QUrl::RemoveFragment);
	zend_string *const_REMOVE_FRAGMENT_name = zend_string_init_interned("REMOVE_FRAGMENT", sizeof("REMOVE_FRAGMENT") - 1, 1);
	zend_declare_typed_class_constant(class_entry, const_REMOVE_FRAGMENT_name, &const_REMOVE_FRAGMENT_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(const_REMOVE_FRAGMENT_name);

	zval const_PREFER_LOCAL_FILE_value;
	ZVAL_LONG(&const_PREFER_LOCAL_FILE_value, QUrl::PreferLocalFile);
	zend_string *const_PREFER_LOCAL_FILE_name = zend_string_init_interned("PREFER_LOCAL_FILE", sizeof("PREFER_LOCAL_FILE") - 1, 1);
	zend_declare_typed_class_constant(class_entry, const_PREFER_LOCAL_FILE_name, &const_PREFER_LOCAL_FILE_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(const_PREFER_LOCAL_FILE_name);

	zval const_STRIP_TRAILING_SLASH_value;
	ZVAL_LONG(&const_STRIP_TRAILING_SLASH_value, QUrl::StripTrailingSlash);
	zend_string *const_STRIP_TRAILING_SLASH_name = zend_string_init_interned("STRIP_TRAILING_SLASH", sizeof("STRIP_TRAILING_SLASH") - 1, 1);
	zend_declare_typed_class_constant(class_entry, const_STRIP_TRAILING_SLASH_name, &const_STRIP_TRAILING_SLASH_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(const_STRIP_TRAILING_SLASH_name);

	zval const_REMOVE_FILENAME_value;
	ZVAL_LONG(&const_REMOVE_FILENAME_value, QUrl::RemoveFilename);
	zend_string *const_REMOVE_FILENAME_name = zend_string_init_interned("REMOVE_FILENAME", sizeof("REMOVE_FILENAME") - 1, 1);
	zend_declare_typed_class_constant(class_entry, const_REMOVE_FILENAME_name, &const_REMOVE_FILENAME_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(const_REMOVE_FILENAME_name);

	zval const_NORMALIZE_PATH_SEGMENTS_value;
	ZVAL_LONG(&const_NORMALIZE_PATH_SEGMENTS_value, QUrl::NormalizePathSegments);
	zend_string *const_NORMALIZE_PATH_SEGMENTS_name = zend_string_init_interned("NORMALIZE_PATH_SEGMENTS", sizeof("NORMALIZE_PATH_SEGMENTS") - 1, 1);
	zend_declare_typed_class_constant(class_entry, const_NORMALIZE_PATH_SEGMENTS_name, &const_NORMALIZE_PATH_SEGMENTS_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(const_NORMALIZE_PATH_SEGMENTS_name);

	zval const_PRETTY_DECODED_value;
	ZVAL_LONG(&const_PRETTY_DECODED_value, QUrl::PrettyDecoded);
	zend_string *const_PRETTY_DECODED_name = zend_string_init_interned("PRETTY_DECODED", sizeof("PRETTY_DECODED") - 1, 1);
	zend_declare_typed_class_constant(class_entry, const_PRETTY_DECODED_name, &const_PRETTY_DECODED_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(const_PRETTY_DECODED_name);

	zval const_ENCODE_SPACES_value;
	ZVAL_LONG(&const_ENCODE_SPACES_value, QUrl::EncodeSpaces);
	zend_string *const_ENCODE_SPACES_name = zend_string_init_interned("ENCODE_SPACES", sizeof("ENCODE_SPACES") - 1, 1);
	zend_declare_typed_class_constant(class_entry, const_ENCODE_SPACES_name, &const_ENCODE_SPACES_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(const_ENCODE_SPACES_name);

	zval const_ENCODE_UNICODE_value;
	ZVAL_LONG(&const_ENCODE_UNICODE_value, QUrl::EncodeUnicode);
	zend_string *const_ENCODE_UNICODE_name = zend_string_init_interned("ENCODE_UNICODE", sizeof("ENCODE_UNICODE") - 1, 1);
	zend_declare_typed_class_constant(class_entry, const_ENCODE_UNICODE_name, &const_ENCODE_UNICODE_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(const_ENCODE_UNICODE_name);

	zval const_ENCODE_DELIMITERS_value;
	ZVAL_LONG(&const_ENCODE_DELIMITERS_value, QUrl::EncodeDelimiters);
	zend_string *const_ENCODE_DELIMITERS_name = zend_string_init_interned("ENCODE_DELIMITERS", sizeof("ENCODE_DELIMITERS") - 1, 1);
	zend_declare_typed_class_constant(class_entry, const_ENCODE_DELIMITERS_name, &const_ENCODE_DELIMITERS_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(const_ENCODE_DELIMITERS_name);

	zval const_ENCODE_RESERVED_value;
	ZVAL_LONG(&const_ENCODE_RESERVED_value, QUrl::EncodeReserved);
	zend_string *const_ENCODE_RESERVED_name = zend_string_init_interned("ENCODE_RESERVED", sizeof("ENCODE_RESERVED") - 1, 1);
	zend_declare_typed_class_constant(class_entry, const_ENCODE_RESERVED_name, &const_ENCODE_RESERVED_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(const_ENCODE_RESERVED_name);

	zval const_DECODE_RESERVED_value;
	ZVAL_LONG(&const_DECODE_RESERVED_value, QUrl::DecodeReserved);
	zend_string *const_DECODE_RESERVED_name = zend_string_init_interned("DECODE_RESERVED", sizeof("DECODE_RESERVED") - 1, 1);
	zend_declare_typed_class_constant(class_entry, const_DECODE_RESERVED_name, &const_DECODE_RESERVED_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(const_DECODE_RESERVED_name);

	zval const_FULLY_ENCODED_value;
	ZVAL_LONG(&const_FULLY_ENCODED_value, QUrl::FullyEncoded);
	zend_string *const_FULLY_ENCODED_name = zend_string_init_interned("FULLY_ENCODED", sizeof("FULLY_ENCODED") - 1, 1);
	zend_declare_typed_class_constant(class_entry, const_FULLY_ENCODED_name, &const_FULLY_ENCODED_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(const_FULLY_ENCODED_name);

	zval const_FULLY_DECODED_value;
	ZVAL_LONG(&const_FULLY_DECODED_value, QUrl::FullyDecoded);
	zend_string *const_FULLY_DECODED_name = zend_string_init_interned("FULLY_DECODED", sizeof("FULLY_DECODED") - 1, 1);
	zend_declare_typed_class_constant(class_entry, const_FULLY_DECODED_name, &const_FULLY_DECODED_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(const_FULLY_DECODED_name);

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
