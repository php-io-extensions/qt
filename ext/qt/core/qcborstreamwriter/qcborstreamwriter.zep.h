
extern zend_class_entry *qt_core_qcborstreamwriter_qcborstreamwriter_ce;

ZEPHIR_INIT_CLASS(Qt_Core_QCborStreamWriter_QCborStreamWriter);

PHP_METHOD(Qt_Core_QCborStreamWriter_QCborStreamWriter, new_);
PHP_METHOD(Qt_Core_QCborStreamWriter_QCborStreamWriter, newQByteArray);
PHP_METHOD(Qt_Core_QCborStreamWriter_QCborStreamWriter, setDevice);
PHP_METHOD(Qt_Core_QCborStreamWriter_QCborStreamWriter, device);
PHP_METHOD(Qt_Core_QCborStreamWriter_QCborStreamWriter, append);
PHP_METHOD(Qt_Core_QCborStreamWriter_QCborStreamWriter, appendQint64);
PHP_METHOD(Qt_Core_QCborStreamWriter_QCborStreamWriter, appendQCborNegativeInteger);
PHP_METHOD(Qt_Core_QCborStreamWriter_QCborStreamWriter, appendQByteArray);
PHP_METHOD(Qt_Core_QCborStreamWriter_QCborStreamWriter, appendQLatin1StringView);
PHP_METHOD(Qt_Core_QCborStreamWriter_QCborStreamWriter, appendQStringView);
PHP_METHOD(Qt_Core_QCborStreamWriter_QCborStreamWriter, appendQCborTag);
PHP_METHOD(Qt_Core_QCborStreamWriter_QCborStreamWriter, appendQCborKnownTags);
PHP_METHOD(Qt_Core_QCborStreamWriter_QCborStreamWriter, appendQCborSimpleType);
PHP_METHOD(Qt_Core_QCborStreamWriter_QCborStreamWriter, appendQfloat16);
PHP_METHOD(Qt_Core_QCborStreamWriter_QCborStreamWriter, appendFloat);
PHP_METHOD(Qt_Core_QCborStreamWriter_QCborStreamWriter, appendDouble);
PHP_METHOD(Qt_Core_QCborStreamWriter_QCborStreamWriter, appendByteString);
PHP_METHOD(Qt_Core_QCborStreamWriter_QCborStreamWriter, appendTextString);
PHP_METHOD(Qt_Core_QCborStreamWriter_QCborStreamWriter, appendBool);
PHP_METHOD(Qt_Core_QCborStreamWriter_QCborStreamWriter, appendNull);
PHP_METHOD(Qt_Core_QCborStreamWriter_QCborStreamWriter, appendUndefined);
PHP_METHOD(Qt_Core_QCborStreamWriter_QCborStreamWriter, appendInt);
PHP_METHOD(Qt_Core_QCborStreamWriter_QCborStreamWriter, appendUint);
PHP_METHOD(Qt_Core_QCborStreamWriter_QCborStreamWriter, appendCharQsizetype);
PHP_METHOD(Qt_Core_QCborStreamWriter_QCborStreamWriter, startArray);
PHP_METHOD(Qt_Core_QCborStreamWriter_QCborStreamWriter, startArrayQuint64);
PHP_METHOD(Qt_Core_QCborStreamWriter_QCborStreamWriter, endArray);
PHP_METHOD(Qt_Core_QCborStreamWriter_QCborStreamWriter, startMap);
PHP_METHOD(Qt_Core_QCborStreamWriter_QCborStreamWriter, startMapQuint64);
PHP_METHOD(Qt_Core_QCborStreamWriter_QCborStreamWriter, endMap);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcborstreamwriter_qcborstreamwriter_new_, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, device, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcborstreamwriter_qcborstreamwriter_newqbytearray, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_INFO(0, data)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcborstreamwriter_qcborstreamwriter_setdevice, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, device, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcborstreamwriter_qcborstreamwriter_device, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcborstreamwriter_qcborstreamwriter_append, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, u, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcborstreamwriter_qcborstreamwriter_appendqint64, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, i, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcborstreamwriter_qcborstreamwriter_appendqcbornegativeinteger, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, n, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcborstreamwriter_qcborstreamwriter_appendqbytearray, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, ba, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcborstreamwriter_qcborstreamwriter_appendqlatin1stringview, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, str, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcborstreamwriter_qcborstreamwriter_appendqstringview, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, str, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcborstreamwriter_qcborstreamwriter_appendqcbortag, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, tag, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcborstreamwriter_qcborstreamwriter_appendqcborknowntags, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, tag, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcborstreamwriter_qcborstreamwriter_appendqcborsimpletype, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, st, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcborstreamwriter_qcborstreamwriter_appendqfloat16, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, f, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcborstreamwriter_qcborstreamwriter_appendfloat, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, f, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcborstreamwriter_qcborstreamwriter_appenddouble, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, d, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcborstreamwriter_qcborstreamwriter_appendbytestring, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_INFO(0, data)
	ZEND_ARG_TYPE_INFO(0, len, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcborstreamwriter_qcborstreamwriter_appendtextstring, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_INFO(0, utf8)
	ZEND_ARG_TYPE_INFO(0, len, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcborstreamwriter_qcborstreamwriter_appendbool, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, b, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcborstreamwriter_qcborstreamwriter_appendnull, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcborstreamwriter_qcborstreamwriter_appendundefined, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcborstreamwriter_qcborstreamwriter_appendint, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, i, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcborstreamwriter_qcborstreamwriter_appenduint, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, u, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcborstreamwriter_qcborstreamwriter_appendcharqsizetype, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_INFO(0, str)
	ZEND_ARG_TYPE_INFO(0, size, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcborstreamwriter_qcborstreamwriter_startarray, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcborstreamwriter_qcborstreamwriter_startarrayquint64, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, count, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcborstreamwriter_qcborstreamwriter_endarray, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcborstreamwriter_qcborstreamwriter_startmap, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcborstreamwriter_qcborstreamwriter_startmapquint64, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, count, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcborstreamwriter_qcborstreamwriter_endmap, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_core_qcborstreamwriter_qcborstreamwriter_method_entry) {
	PHP_ME(Qt_Core_QCborStreamWriter_QCborStreamWriter, new_, arginfo_qt_core_qcborstreamwriter_qcborstreamwriter_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCborStreamWriter_QCborStreamWriter, newQByteArray, arginfo_qt_core_qcborstreamwriter_qcborstreamwriter_newqbytearray, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCborStreamWriter_QCborStreamWriter, setDevice, arginfo_qt_core_qcborstreamwriter_qcborstreamwriter_setdevice, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCborStreamWriter_QCborStreamWriter, device, arginfo_qt_core_qcborstreamwriter_qcborstreamwriter_device, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCborStreamWriter_QCborStreamWriter, append, arginfo_qt_core_qcborstreamwriter_qcborstreamwriter_append, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCborStreamWriter_QCborStreamWriter, appendQint64, arginfo_qt_core_qcborstreamwriter_qcborstreamwriter_appendqint64, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCborStreamWriter_QCborStreamWriter, appendQCborNegativeInteger, arginfo_qt_core_qcborstreamwriter_qcborstreamwriter_appendqcbornegativeinteger, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCborStreamWriter_QCborStreamWriter, appendQByteArray, arginfo_qt_core_qcborstreamwriter_qcborstreamwriter_appendqbytearray, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCborStreamWriter_QCborStreamWriter, appendQLatin1StringView, arginfo_qt_core_qcborstreamwriter_qcborstreamwriter_appendqlatin1stringview, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCborStreamWriter_QCborStreamWriter, appendQStringView, arginfo_qt_core_qcborstreamwriter_qcborstreamwriter_appendqstringview, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCborStreamWriter_QCborStreamWriter, appendQCborTag, arginfo_qt_core_qcborstreamwriter_qcborstreamwriter_appendqcbortag, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCborStreamWriter_QCborStreamWriter, appendQCborKnownTags, arginfo_qt_core_qcborstreamwriter_qcborstreamwriter_appendqcborknowntags, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCborStreamWriter_QCborStreamWriter, appendQCborSimpleType, arginfo_qt_core_qcborstreamwriter_qcborstreamwriter_appendqcborsimpletype, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCborStreamWriter_QCborStreamWriter, appendQfloat16, arginfo_qt_core_qcborstreamwriter_qcborstreamwriter_appendqfloat16, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCborStreamWriter_QCborStreamWriter, appendFloat, arginfo_qt_core_qcborstreamwriter_qcborstreamwriter_appendfloat, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCborStreamWriter_QCborStreamWriter, appendDouble, arginfo_qt_core_qcborstreamwriter_qcborstreamwriter_appenddouble, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCborStreamWriter_QCborStreamWriter, appendByteString, arginfo_qt_core_qcborstreamwriter_qcborstreamwriter_appendbytestring, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCborStreamWriter_QCborStreamWriter, appendTextString, arginfo_qt_core_qcborstreamwriter_qcborstreamwriter_appendtextstring, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCborStreamWriter_QCborStreamWriter, appendBool, arginfo_qt_core_qcborstreamwriter_qcborstreamwriter_appendbool, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCborStreamWriter_QCborStreamWriter, appendNull, arginfo_qt_core_qcborstreamwriter_qcborstreamwriter_appendnull, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCborStreamWriter_QCborStreamWriter, appendUndefined, arginfo_qt_core_qcborstreamwriter_qcborstreamwriter_appendundefined, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCborStreamWriter_QCborStreamWriter, appendInt, arginfo_qt_core_qcborstreamwriter_qcborstreamwriter_appendint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCborStreamWriter_QCborStreamWriter, appendUint, arginfo_qt_core_qcborstreamwriter_qcborstreamwriter_appenduint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCborStreamWriter_QCborStreamWriter, appendCharQsizetype, arginfo_qt_core_qcborstreamwriter_qcborstreamwriter_appendcharqsizetype, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCborStreamWriter_QCborStreamWriter, startArray, arginfo_qt_core_qcborstreamwriter_qcborstreamwriter_startarray, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCborStreamWriter_QCborStreamWriter, startArrayQuint64, arginfo_qt_core_qcborstreamwriter_qcborstreamwriter_startarrayquint64, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCborStreamWriter_QCborStreamWriter, endArray, arginfo_qt_core_qcborstreamwriter_qcborstreamwriter_endarray, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCborStreamWriter_QCborStreamWriter, startMap, arginfo_qt_core_qcborstreamwriter_qcborstreamwriter_startmap, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCborStreamWriter_QCborStreamWriter, startMapQuint64, arginfo_qt_core_qcborstreamwriter_qcborstreamwriter_startmapquint64, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCborStreamWriter_QCborStreamWriter, endMap, arginfo_qt_core_qcborstreamwriter_qcborstreamwriter_endmap, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
