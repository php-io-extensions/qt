
extern zend_class_entry *qt_core_qcborstreamreader_qcborstreamreader_ce;

ZEPHIR_INIT_CLASS(Qt_Core_QCborStreamReader_QCborStreamReader);

PHP_METHOD(Qt_Core_QCborStreamReader_QCborStreamReader, staticMetaObject);
PHP_METHOD(Qt_Core_QCborStreamReader_QCborStreamReader, qt_check_for_QGADGET_macro);
PHP_METHOD(Qt_Core_QCborStreamReader_QCborStreamReader, new_);
PHP_METHOD(Qt_Core_QCborStreamReader_QCborStreamReader, newCharQsizetype);
PHP_METHOD(Qt_Core_QCborStreamReader_QCborStreamReader, newQuint8Qsizetype);
PHP_METHOD(Qt_Core_QCborStreamReader_QCborStreamReader, newQByteArray);
PHP_METHOD(Qt_Core_QCborStreamReader_QCborStreamReader, newQIODevice);
PHP_METHOD(Qt_Core_QCborStreamReader_QCborStreamReader, setDevice);
PHP_METHOD(Qt_Core_QCborStreamReader_QCborStreamReader, device);
PHP_METHOD(Qt_Core_QCborStreamReader_QCborStreamReader, addData);
PHP_METHOD(Qt_Core_QCborStreamReader_QCborStreamReader, addDataCharQsizetype);
PHP_METHOD(Qt_Core_QCborStreamReader_QCborStreamReader, addDataQuint8Qsizetype);
PHP_METHOD(Qt_Core_QCborStreamReader_QCborStreamReader, reparse);
PHP_METHOD(Qt_Core_QCborStreamReader_QCborStreamReader, clear);
PHP_METHOD(Qt_Core_QCborStreamReader_QCborStreamReader, reset);
PHP_METHOD(Qt_Core_QCborStreamReader_QCborStreamReader, lastError);
PHP_METHOD(Qt_Core_QCborStreamReader_QCborStreamReader, currentOffset);
PHP_METHOD(Qt_Core_QCborStreamReader_QCborStreamReader, isValid);
PHP_METHOD(Qt_Core_QCborStreamReader_QCborStreamReader, containerDepth);
PHP_METHOD(Qt_Core_QCborStreamReader_QCborStreamReader, parentContainerType);
PHP_METHOD(Qt_Core_QCborStreamReader_QCborStreamReader, hasNext);
PHP_METHOD(Qt_Core_QCborStreamReader_QCborStreamReader, next);
PHP_METHOD(Qt_Core_QCborStreamReader_QCborStreamReader, type);
PHP_METHOD(Qt_Core_QCborStreamReader_QCborStreamReader, isUnsignedInteger);
PHP_METHOD(Qt_Core_QCborStreamReader_QCborStreamReader, isNegativeInteger);
PHP_METHOD(Qt_Core_QCborStreamReader_QCborStreamReader, isInteger);
PHP_METHOD(Qt_Core_QCborStreamReader_QCborStreamReader, isByteArray);
PHP_METHOD(Qt_Core_QCborStreamReader_QCborStreamReader, isString);
PHP_METHOD(Qt_Core_QCborStreamReader_QCborStreamReader, isArray);
PHP_METHOD(Qt_Core_QCborStreamReader_QCborStreamReader, isMap);
PHP_METHOD(Qt_Core_QCborStreamReader_QCborStreamReader, isTag);
PHP_METHOD(Qt_Core_QCborStreamReader_QCborStreamReader, isSimpleType);
PHP_METHOD(Qt_Core_QCborStreamReader_QCborStreamReader, isFloat16);
PHP_METHOD(Qt_Core_QCborStreamReader_QCborStreamReader, isFloat);
PHP_METHOD(Qt_Core_QCborStreamReader_QCborStreamReader, isDouble);
PHP_METHOD(Qt_Core_QCborStreamReader_QCborStreamReader, isInvalid);
PHP_METHOD(Qt_Core_QCborStreamReader_QCborStreamReader, isSimpleTypeQCborSimpleType);
PHP_METHOD(Qt_Core_QCborStreamReader_QCborStreamReader, isFalse);
PHP_METHOD(Qt_Core_QCborStreamReader_QCborStreamReader, isTrue);
PHP_METHOD(Qt_Core_QCborStreamReader_QCborStreamReader, isBool);
PHP_METHOD(Qt_Core_QCborStreamReader_QCborStreamReader, isNull);
PHP_METHOD(Qt_Core_QCborStreamReader_QCborStreamReader, isUndefined);
PHP_METHOD(Qt_Core_QCborStreamReader_QCborStreamReader, isLengthKnown);
PHP_METHOD(Qt_Core_QCborStreamReader_QCborStreamReader, length);
PHP_METHOD(Qt_Core_QCborStreamReader_QCborStreamReader, isContainer);
PHP_METHOD(Qt_Core_QCborStreamReader_QCborStreamReader, enterContainer);
PHP_METHOD(Qt_Core_QCborStreamReader_QCborStreamReader, leaveContainer);
PHP_METHOD(Qt_Core_QCborStreamReader_QCborStreamReader, readAndAppendToString);
PHP_METHOD(Qt_Core_QCborStreamReader_QCborStreamReader, readAndAppendToUtf8String);
PHP_METHOD(Qt_Core_QCborStreamReader_QCborStreamReader, readAndAppendToByteArray);
PHP_METHOD(Qt_Core_QCborStreamReader_QCborStreamReader, currentStringChunkSize);
PHP_METHOD(Qt_Core_QCborStreamReader_QCborStreamReader, toBool);
PHP_METHOD(Qt_Core_QCborStreamReader_QCborStreamReader, toTag);
PHP_METHOD(Qt_Core_QCborStreamReader_QCborStreamReader, toUnsignedInteger);
PHP_METHOD(Qt_Core_QCborStreamReader_QCborStreamReader, toNegativeInteger);
PHP_METHOD(Qt_Core_QCborStreamReader_QCborStreamReader, toSimpleType);
PHP_METHOD(Qt_Core_QCborStreamReader_QCborStreamReader, toFloat16);
PHP_METHOD(Qt_Core_QCborStreamReader_QCborStreamReader, toFloat);
PHP_METHOD(Qt_Core_QCborStreamReader_QCborStreamReader, toDouble);
PHP_METHOD(Qt_Core_QCborStreamReader_QCborStreamReader, toInteger);
PHP_METHOD(Qt_Core_QCborStreamReader_QCborStreamReader, readAllString);
PHP_METHOD(Qt_Core_QCborStreamReader_QCborStreamReader, readAllUtf8String);
PHP_METHOD(Qt_Core_QCborStreamReader_QCborStreamReader, readAllByteArray);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcborstreamreader_qcborstreamreader_staticmetaobject, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcborstreamreader_qcborstreamreader_qt_check_for_qgadget_macro, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcborstreamreader_qcborstreamreader_new_, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcborstreamreader_qcborstreamreader_newcharqsizetype, 0, 2, IS_LONG, 0)
	ZEND_ARG_INFO(0, data)
	ZEND_ARG_TYPE_INFO(0, len, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcborstreamreader_qcborstreamreader_newquint8qsizetype, 0, 2, IS_LONG, 0)
	ZEND_ARG_INFO(0, data)
	ZEND_ARG_TYPE_INFO(0, len, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcborstreamreader_qcborstreamreader_newqbytearray, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, data, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcborstreamreader_qcborstreamreader_newqiodevice, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, device, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcborstreamreader_qcborstreamreader_setdevice, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, device, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcborstreamreader_qcborstreamreader_device, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcborstreamreader_qcborstreamreader_adddata, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, data, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcborstreamreader_qcborstreamreader_adddatacharqsizetype, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_INFO(0, data)
	ZEND_ARG_TYPE_INFO(0, len, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcborstreamreader_qcborstreamreader_adddataquint8qsizetype, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_INFO(0, data)
	ZEND_ARG_TYPE_INFO(0, len, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcborstreamreader_qcborstreamreader_reparse, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcborstreamreader_qcborstreamreader_clear, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcborstreamreader_qcborstreamreader_reset, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcborstreamreader_qcborstreamreader_lasterror, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcborstreamreader_qcborstreamreader_currentoffset, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcborstreamreader_qcborstreamreader_isvalid, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcborstreamreader_qcborstreamreader_containerdepth, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcborstreamreader_qcborstreamreader_parentcontainertype, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcborstreamreader_qcborstreamreader_hasnext, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcborstreamreader_qcborstreamreader_next, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, maxRecursion, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcborstreamreader_qcborstreamreader_type, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcborstreamreader_qcborstreamreader_isunsignedinteger, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcborstreamreader_qcborstreamreader_isnegativeinteger, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcborstreamreader_qcborstreamreader_isinteger, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcborstreamreader_qcborstreamreader_isbytearray, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcborstreamreader_qcborstreamreader_isstring, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcborstreamreader_qcborstreamreader_isarray, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcborstreamreader_qcborstreamreader_ismap, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcborstreamreader_qcborstreamreader_istag, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcborstreamreader_qcborstreamreader_issimpletype, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcborstreamreader_qcborstreamreader_isfloat16, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcborstreamreader_qcborstreamreader_isfloat, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcborstreamreader_qcborstreamreader_isdouble, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcborstreamreader_qcborstreamreader_isinvalid, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcborstreamreader_qcborstreamreader_issimpletypeqcborsimpletype, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, st, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcborstreamreader_qcborstreamreader_isfalse, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcborstreamreader_qcborstreamreader_istrue, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcborstreamreader_qcborstreamreader_isbool, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcborstreamreader_qcborstreamreader_isnull, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcborstreamreader_qcborstreamreader_isundefined, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcborstreamreader_qcborstreamreader_islengthknown, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcborstreamreader_qcborstreamreader_length, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcborstreamreader_qcborstreamreader_iscontainer, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcborstreamreader_qcborstreamreader_entercontainer, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcborstreamreader_qcborstreamreader_leavecontainer, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcborstreamreader_qcborstreamreader_readandappendtostring, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcborstreamreader_qcborstreamreader_readandappendtoutf8string, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcborstreamreader_qcborstreamreader_readandappendtobytearray, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcborstreamreader_qcborstreamreader_currentstringchunksize, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcborstreamreader_qcborstreamreader_tobool, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcborstreamreader_qcborstreamreader_totag, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcborstreamreader_qcborstreamreader_tounsignedinteger, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcborstreamreader_qcborstreamreader_tonegativeinteger, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcborstreamreader_qcborstreamreader_tosimpletype, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcborstreamreader_qcborstreamreader_tofloat16, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcborstreamreader_qcborstreamreader_tofloat, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcborstreamreader_qcborstreamreader_todouble, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcborstreamreader_qcborstreamreader_tointeger, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcborstreamreader_qcborstreamreader_readallstring, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcborstreamreader_qcborstreamreader_readallutf8string, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcborstreamreader_qcborstreamreader_readallbytearray, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_core_qcborstreamreader_qcborstreamreader_method_entry) {
	PHP_ME(Qt_Core_QCborStreamReader_QCborStreamReader, staticMetaObject, arginfo_qt_core_qcborstreamreader_qcborstreamreader_staticmetaobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCborStreamReader_QCborStreamReader, qt_check_for_QGADGET_macro, arginfo_qt_core_qcborstreamreader_qcborstreamreader_qt_check_for_qgadget_macro, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCborStreamReader_QCborStreamReader, new_, arginfo_qt_core_qcborstreamreader_qcborstreamreader_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCborStreamReader_QCborStreamReader, newCharQsizetype, arginfo_qt_core_qcborstreamreader_qcborstreamreader_newcharqsizetype, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCborStreamReader_QCborStreamReader, newQuint8Qsizetype, arginfo_qt_core_qcborstreamreader_qcborstreamreader_newquint8qsizetype, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCborStreamReader_QCborStreamReader, newQByteArray, arginfo_qt_core_qcborstreamreader_qcborstreamreader_newqbytearray, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCborStreamReader_QCborStreamReader, newQIODevice, arginfo_qt_core_qcborstreamreader_qcborstreamreader_newqiodevice, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCborStreamReader_QCborStreamReader, setDevice, arginfo_qt_core_qcborstreamreader_qcborstreamreader_setdevice, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCborStreamReader_QCborStreamReader, device, arginfo_qt_core_qcborstreamreader_qcborstreamreader_device, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCborStreamReader_QCborStreamReader, addData, arginfo_qt_core_qcborstreamreader_qcborstreamreader_adddata, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCborStreamReader_QCborStreamReader, addDataCharQsizetype, arginfo_qt_core_qcborstreamreader_qcborstreamreader_adddatacharqsizetype, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCborStreamReader_QCborStreamReader, addDataQuint8Qsizetype, arginfo_qt_core_qcborstreamreader_qcborstreamreader_adddataquint8qsizetype, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCborStreamReader_QCborStreamReader, reparse, arginfo_qt_core_qcborstreamreader_qcborstreamreader_reparse, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCborStreamReader_QCborStreamReader, clear, arginfo_qt_core_qcborstreamreader_qcborstreamreader_clear, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCborStreamReader_QCborStreamReader, reset, arginfo_qt_core_qcborstreamreader_qcborstreamreader_reset, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCborStreamReader_QCborStreamReader, lastError, arginfo_qt_core_qcborstreamreader_qcborstreamreader_lasterror, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCborStreamReader_QCborStreamReader, currentOffset, arginfo_qt_core_qcborstreamreader_qcborstreamreader_currentoffset, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCborStreamReader_QCborStreamReader, isValid, arginfo_qt_core_qcborstreamreader_qcborstreamreader_isvalid, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCborStreamReader_QCborStreamReader, containerDepth, arginfo_qt_core_qcborstreamreader_qcborstreamreader_containerdepth, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCborStreamReader_QCborStreamReader, parentContainerType, arginfo_qt_core_qcborstreamreader_qcborstreamreader_parentcontainertype, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCborStreamReader_QCborStreamReader, hasNext, arginfo_qt_core_qcborstreamreader_qcborstreamreader_hasnext, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCborStreamReader_QCborStreamReader, next, arginfo_qt_core_qcborstreamreader_qcborstreamreader_next, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCborStreamReader_QCborStreamReader, type, arginfo_qt_core_qcborstreamreader_qcborstreamreader_type, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCborStreamReader_QCborStreamReader, isUnsignedInteger, arginfo_qt_core_qcborstreamreader_qcborstreamreader_isunsignedinteger, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCborStreamReader_QCborStreamReader, isNegativeInteger, arginfo_qt_core_qcborstreamreader_qcborstreamreader_isnegativeinteger, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCborStreamReader_QCborStreamReader, isInteger, arginfo_qt_core_qcborstreamreader_qcborstreamreader_isinteger, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCborStreamReader_QCborStreamReader, isByteArray, arginfo_qt_core_qcborstreamreader_qcborstreamreader_isbytearray, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCborStreamReader_QCborStreamReader, isString, arginfo_qt_core_qcborstreamreader_qcborstreamreader_isstring, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCborStreamReader_QCborStreamReader, isArray, arginfo_qt_core_qcborstreamreader_qcborstreamreader_isarray, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCborStreamReader_QCborStreamReader, isMap, arginfo_qt_core_qcborstreamreader_qcborstreamreader_ismap, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCborStreamReader_QCborStreamReader, isTag, arginfo_qt_core_qcborstreamreader_qcborstreamreader_istag, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCborStreamReader_QCborStreamReader, isSimpleType, arginfo_qt_core_qcborstreamreader_qcborstreamreader_issimpletype, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCborStreamReader_QCborStreamReader, isFloat16, arginfo_qt_core_qcborstreamreader_qcborstreamreader_isfloat16, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCborStreamReader_QCborStreamReader, isFloat, arginfo_qt_core_qcborstreamreader_qcborstreamreader_isfloat, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCborStreamReader_QCborStreamReader, isDouble, arginfo_qt_core_qcborstreamreader_qcborstreamreader_isdouble, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCborStreamReader_QCborStreamReader, isInvalid, arginfo_qt_core_qcborstreamreader_qcborstreamreader_isinvalid, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCborStreamReader_QCborStreamReader, isSimpleTypeQCborSimpleType, arginfo_qt_core_qcborstreamreader_qcborstreamreader_issimpletypeqcborsimpletype, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCborStreamReader_QCborStreamReader, isFalse, arginfo_qt_core_qcborstreamreader_qcborstreamreader_isfalse, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCborStreamReader_QCborStreamReader, isTrue, arginfo_qt_core_qcborstreamreader_qcborstreamreader_istrue, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCborStreamReader_QCborStreamReader, isBool, arginfo_qt_core_qcborstreamreader_qcborstreamreader_isbool, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCborStreamReader_QCborStreamReader, isNull, arginfo_qt_core_qcborstreamreader_qcborstreamreader_isnull, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCborStreamReader_QCborStreamReader, isUndefined, arginfo_qt_core_qcborstreamreader_qcborstreamreader_isundefined, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCborStreamReader_QCborStreamReader, isLengthKnown, arginfo_qt_core_qcborstreamreader_qcborstreamreader_islengthknown, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCborStreamReader_QCborStreamReader, length, arginfo_qt_core_qcborstreamreader_qcborstreamreader_length, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCborStreamReader_QCborStreamReader, isContainer, arginfo_qt_core_qcborstreamreader_qcborstreamreader_iscontainer, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCborStreamReader_QCborStreamReader, enterContainer, arginfo_qt_core_qcborstreamreader_qcborstreamreader_entercontainer, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCborStreamReader_QCborStreamReader, leaveContainer, arginfo_qt_core_qcborstreamreader_qcborstreamreader_leavecontainer, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCborStreamReader_QCborStreamReader, readAndAppendToString, arginfo_qt_core_qcborstreamreader_qcborstreamreader_readandappendtostring, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCborStreamReader_QCborStreamReader, readAndAppendToUtf8String, arginfo_qt_core_qcborstreamreader_qcborstreamreader_readandappendtoutf8string, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCborStreamReader_QCborStreamReader, readAndAppendToByteArray, arginfo_qt_core_qcborstreamreader_qcborstreamreader_readandappendtobytearray, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCborStreamReader_QCborStreamReader, currentStringChunkSize, arginfo_qt_core_qcborstreamreader_qcborstreamreader_currentstringchunksize, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCborStreamReader_QCborStreamReader, toBool, arginfo_qt_core_qcborstreamreader_qcborstreamreader_tobool, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCborStreamReader_QCborStreamReader, toTag, arginfo_qt_core_qcborstreamreader_qcborstreamreader_totag, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCborStreamReader_QCborStreamReader, toUnsignedInteger, arginfo_qt_core_qcborstreamreader_qcborstreamreader_tounsignedinteger, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCborStreamReader_QCborStreamReader, toNegativeInteger, arginfo_qt_core_qcborstreamreader_qcborstreamreader_tonegativeinteger, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCborStreamReader_QCborStreamReader, toSimpleType, arginfo_qt_core_qcborstreamreader_qcborstreamreader_tosimpletype, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCborStreamReader_QCborStreamReader, toFloat16, arginfo_qt_core_qcborstreamreader_qcborstreamreader_tofloat16, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCborStreamReader_QCborStreamReader, toFloat, arginfo_qt_core_qcborstreamreader_qcborstreamreader_tofloat, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCborStreamReader_QCborStreamReader, toDouble, arginfo_qt_core_qcborstreamreader_qcborstreamreader_todouble, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCborStreamReader_QCborStreamReader, toInteger, arginfo_qt_core_qcborstreamreader_qcborstreamreader_tointeger, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCborStreamReader_QCborStreamReader, readAllString, arginfo_qt_core_qcborstreamreader_qcborstreamreader_readallstring, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCborStreamReader_QCborStreamReader, readAllUtf8String, arginfo_qt_core_qcborstreamreader_qcborstreamreader_readallutf8string, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCborStreamReader_QCborStreamReader, readAllByteArray, arginfo_qt_core_qcborstreamreader_qcborstreamreader_readallbytearray, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
