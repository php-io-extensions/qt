
extern zend_class_entry *qt_core_qtextstream_qtextstream_ce;

ZEPHIR_INIT_CLASS(Qt_Core_QTextStream_QTextStream);

PHP_METHOD(Qt_Core_QTextStream_QTextStream, new_);
PHP_METHOD(Qt_Core_QTextStream_QTextStream, newQIODevice);
PHP_METHOD(Qt_Core_QTextStream_QTextStream, newQStringQIODeviceBaseOpenMode);
PHP_METHOD(Qt_Core_QTextStream_QTextStream, newQByteArrayQIODeviceBaseOpenMode);
PHP_METHOD(Qt_Core_QTextStream_QTextStream, newQByteArrayQIODeviceBaseOpenMode2);
PHP_METHOD(Qt_Core_QTextStream_QTextStream, setEncoding);
PHP_METHOD(Qt_Core_QTextStream_QTextStream, encoding);
PHP_METHOD(Qt_Core_QTextStream_QTextStream, setAutoDetectUnicode);
PHP_METHOD(Qt_Core_QTextStream_QTextStream, autoDetectUnicode);
PHP_METHOD(Qt_Core_QTextStream_QTextStream, setGenerateByteOrderMark);
PHP_METHOD(Qt_Core_QTextStream_QTextStream, generateByteOrderMark);
PHP_METHOD(Qt_Core_QTextStream_QTextStream, setLocale);
PHP_METHOD(Qt_Core_QTextStream_QTextStream, locale);
PHP_METHOD(Qt_Core_QTextStream_QTextStream, setDevice);
PHP_METHOD(Qt_Core_QTextStream_QTextStream, device);
PHP_METHOD(Qt_Core_QTextStream_QTextStream, setString);
PHP_METHOD(Qt_Core_QTextStream_QTextStream, status);
PHP_METHOD(Qt_Core_QTextStream_QTextStream, setStatus);
PHP_METHOD(Qt_Core_QTextStream_QTextStream, resetStatus);
PHP_METHOD(Qt_Core_QTextStream_QTextStream, atEnd);
PHP_METHOD(Qt_Core_QTextStream_QTextStream, reset);
PHP_METHOD(Qt_Core_QTextStream_QTextStream, flush);
PHP_METHOD(Qt_Core_QTextStream_QTextStream, seek);
PHP_METHOD(Qt_Core_QTextStream_QTextStream, pos);
PHP_METHOD(Qt_Core_QTextStream_QTextStream, skipWhiteSpace);
PHP_METHOD(Qt_Core_QTextStream_QTextStream, readLine);
PHP_METHOD(Qt_Core_QTextStream_QTextStream, readLineInto);
PHP_METHOD(Qt_Core_QTextStream_QTextStream, readAll);
PHP_METHOD(Qt_Core_QTextStream_QTextStream, read);
PHP_METHOD(Qt_Core_QTextStream_QTextStream, setFieldAlignment);
PHP_METHOD(Qt_Core_QTextStream_QTextStream, fieldAlignment);
PHP_METHOD(Qt_Core_QTextStream_QTextStream, setPadChar);
PHP_METHOD(Qt_Core_QTextStream_QTextStream, padChar);
PHP_METHOD(Qt_Core_QTextStream_QTextStream, setFieldWidth);
PHP_METHOD(Qt_Core_QTextStream_QTextStream, fieldWidth);
PHP_METHOD(Qt_Core_QTextStream_QTextStream, setNumberFlags);
PHP_METHOD(Qt_Core_QTextStream_QTextStream, numberFlags);
PHP_METHOD(Qt_Core_QTextStream_QTextStream, setIntegerBase);
PHP_METHOD(Qt_Core_QTextStream_QTextStream, integerBase);
PHP_METHOD(Qt_Core_QTextStream_QTextStream, setRealNumberNotation);
PHP_METHOD(Qt_Core_QTextStream_QTextStream, realNumberNotation);
PHP_METHOD(Qt_Core_QTextStream_QTextStream, setRealNumberPrecision);
PHP_METHOD(Qt_Core_QTextStream_QTextStream, realNumberPrecision);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qtextstream_qtextstream_new_, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qtextstream_qtextstream_newqiodevice, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, device, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qtextstream_qtextstream_newqstringqiodevicebaseopenmode, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_INFO(0, string_)
	ZEND_ARG_INFO(0, openMode)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qtextstream_qtextstream_newqbytearrayqiodevicebaseopenmode, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_INFO(0, array_)
	ZEND_ARG_INFO(0, openMode)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qtextstream_qtextstream_newqbytearrayqiodevicebaseopenmode2, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, array_, IS_STRING, 0)
	ZEND_ARG_INFO(0, openMode)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qtextstream_qtextstream_setencoding, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, encoding, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qtextstream_qtextstream_encoding, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qtextstream_qtextstream_setautodetectunicode, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, enabled, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qtextstream_qtextstream_autodetectunicode, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qtextstream_qtextstream_setgeneratebyteordermark, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, generate, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qtextstream_qtextstream_generatebyteordermark, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qtextstream_qtextstream_setlocale, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, locale, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qtextstream_qtextstream_locale, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qtextstream_qtextstream_setdevice, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, device, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qtextstream_qtextstream_device, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qtextstream_qtextstream_setstring, 0, 2, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_INFO(0, string_)
	ZEND_ARG_INFO(0, openMode)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qtextstream_qtextstream_status, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qtextstream_qtextstream_setstatus, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, status, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qtextstream_qtextstream_resetstatus, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qtextstream_qtextstream_atend, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qtextstream_qtextstream_reset, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qtextstream_qtextstream_flush, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qtextstream_qtextstream_seek, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, pos, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qtextstream_qtextstream_pos, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qtextstream_qtextstream_skipwhitespace, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qtextstream_qtextstream_readline, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, maxlen, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qtextstream_qtextstream_readlineinto, 0, 2, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_INFO(0, line)
	ZEND_ARG_TYPE_INFO(0, maxlen, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qtextstream_qtextstream_readall, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qtextstream_qtextstream_read, 0, 2, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, maxlen, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qtextstream_qtextstream_setfieldalignment, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, alignment, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qtextstream_qtextstream_fieldalignment, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qtextstream_qtextstream_setpadchar, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, ch, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qtextstream_qtextstream_padchar, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qtextstream_qtextstream_setfieldwidth, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qtextstream_qtextstream_fieldwidth, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qtextstream_qtextstream_setnumberflags, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, flags, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qtextstream_qtextstream_numberflags, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qtextstream_qtextstream_setintegerbase, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, base, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qtextstream_qtextstream_integerbase, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qtextstream_qtextstream_setrealnumbernotation, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, notation, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qtextstream_qtextstream_realnumbernotation, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qtextstream_qtextstream_setrealnumberprecision, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, precision, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qtextstream_qtextstream_realnumberprecision, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_core_qtextstream_qtextstream_method_entry) {
	PHP_ME(Qt_Core_QTextStream_QTextStream, new_, arginfo_qt_core_qtextstream_qtextstream_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QTextStream_QTextStream, newQIODevice, arginfo_qt_core_qtextstream_qtextstream_newqiodevice, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QTextStream_QTextStream, newQStringQIODeviceBaseOpenMode, arginfo_qt_core_qtextstream_qtextstream_newqstringqiodevicebaseopenmode, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QTextStream_QTextStream, newQByteArrayQIODeviceBaseOpenMode, arginfo_qt_core_qtextstream_qtextstream_newqbytearrayqiodevicebaseopenmode, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QTextStream_QTextStream, newQByteArrayQIODeviceBaseOpenMode2, arginfo_qt_core_qtextstream_qtextstream_newqbytearrayqiodevicebaseopenmode2, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QTextStream_QTextStream, setEncoding, arginfo_qt_core_qtextstream_qtextstream_setencoding, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QTextStream_QTextStream, encoding, arginfo_qt_core_qtextstream_qtextstream_encoding, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QTextStream_QTextStream, setAutoDetectUnicode, arginfo_qt_core_qtextstream_qtextstream_setautodetectunicode, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QTextStream_QTextStream, autoDetectUnicode, arginfo_qt_core_qtextstream_qtextstream_autodetectunicode, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QTextStream_QTextStream, setGenerateByteOrderMark, arginfo_qt_core_qtextstream_qtextstream_setgeneratebyteordermark, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QTextStream_QTextStream, generateByteOrderMark, arginfo_qt_core_qtextstream_qtextstream_generatebyteordermark, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QTextStream_QTextStream, setLocale, arginfo_qt_core_qtextstream_qtextstream_setlocale, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QTextStream_QTextStream, locale, arginfo_qt_core_qtextstream_qtextstream_locale, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QTextStream_QTextStream, setDevice, arginfo_qt_core_qtextstream_qtextstream_setdevice, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QTextStream_QTextStream, device, arginfo_qt_core_qtextstream_qtextstream_device, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QTextStream_QTextStream, setString, arginfo_qt_core_qtextstream_qtextstream_setstring, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QTextStream_QTextStream, status, arginfo_qt_core_qtextstream_qtextstream_status, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QTextStream_QTextStream, setStatus, arginfo_qt_core_qtextstream_qtextstream_setstatus, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QTextStream_QTextStream, resetStatus, arginfo_qt_core_qtextstream_qtextstream_resetstatus, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QTextStream_QTextStream, atEnd, arginfo_qt_core_qtextstream_qtextstream_atend, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QTextStream_QTextStream, reset, arginfo_qt_core_qtextstream_qtextstream_reset, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QTextStream_QTextStream, flush, arginfo_qt_core_qtextstream_qtextstream_flush, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QTextStream_QTextStream, seek, arginfo_qt_core_qtextstream_qtextstream_seek, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QTextStream_QTextStream, pos, arginfo_qt_core_qtextstream_qtextstream_pos, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QTextStream_QTextStream, skipWhiteSpace, arginfo_qt_core_qtextstream_qtextstream_skipwhitespace, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QTextStream_QTextStream, readLine, arginfo_qt_core_qtextstream_qtextstream_readline, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QTextStream_QTextStream, readLineInto, arginfo_qt_core_qtextstream_qtextstream_readlineinto, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QTextStream_QTextStream, readAll, arginfo_qt_core_qtextstream_qtextstream_readall, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QTextStream_QTextStream, read, arginfo_qt_core_qtextstream_qtextstream_read, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QTextStream_QTextStream, setFieldAlignment, arginfo_qt_core_qtextstream_qtextstream_setfieldalignment, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QTextStream_QTextStream, fieldAlignment, arginfo_qt_core_qtextstream_qtextstream_fieldalignment, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QTextStream_QTextStream, setPadChar, arginfo_qt_core_qtextstream_qtextstream_setpadchar, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QTextStream_QTextStream, padChar, arginfo_qt_core_qtextstream_qtextstream_padchar, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QTextStream_QTextStream, setFieldWidth, arginfo_qt_core_qtextstream_qtextstream_setfieldwidth, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QTextStream_QTextStream, fieldWidth, arginfo_qt_core_qtextstream_qtextstream_fieldwidth, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QTextStream_QTextStream, setNumberFlags, arginfo_qt_core_qtextstream_qtextstream_setnumberflags, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QTextStream_QTextStream, numberFlags, arginfo_qt_core_qtextstream_qtextstream_numberflags, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QTextStream_QTextStream, setIntegerBase, arginfo_qt_core_qtextstream_qtextstream_setintegerbase, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QTextStream_QTextStream, integerBase, arginfo_qt_core_qtextstream_qtextstream_integerbase, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QTextStream_QTextStream, setRealNumberNotation, arginfo_qt_core_qtextstream_qtextstream_setrealnumbernotation, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QTextStream_QTextStream, realNumberNotation, arginfo_qt_core_qtextstream_qtextstream_realnumbernotation, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QTextStream_QTextStream, setRealNumberPrecision, arginfo_qt_core_qtextstream_qtextstream_setrealnumberprecision, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QTextStream_QTextStream, realNumberPrecision, arginfo_qt_core_qtextstream_qtextstream_realnumberprecision, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
