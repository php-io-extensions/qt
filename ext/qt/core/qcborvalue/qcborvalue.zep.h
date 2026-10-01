
extern zend_class_entry *qt_core_qcborvalue_qcborvalue_ce;

ZEPHIR_INIT_CLASS(Qt_Core_QCborValue_QCborValue);

PHP_METHOD(Qt_Core_QCborValue_QCborValue, staticMetaObject);
PHP_METHOD(Qt_Core_QCborValue_QCborValue, qt_check_for_QGADGET_macro);
PHP_METHOD(Qt_Core_QCborValue_QCborValue, new_);
PHP_METHOD(Qt_Core_QCborValue_QCborValue, newQCborValueType);
PHP_METHOD(Qt_Core_QCborValue_QCborValue, newBool);
PHP_METHOD(Qt_Core_QCborValue_QCborValue, newInt);
PHP_METHOD(Qt_Core_QCborValue_QCborValue, newUnsignedInt);
PHP_METHOD(Qt_Core_QCborValue_QCborValue, newQint64);
PHP_METHOD(Qt_Core_QCborValue_QCborValue, newDouble);
PHP_METHOD(Qt_Core_QCborValue_QCborValue, newQCborSimpleType);
PHP_METHOD(Qt_Core_QCborValue_QCborValue, newQByteArray);
PHP_METHOD(Qt_Core_QCborValue_QCborValue, newQString);
PHP_METHOD(Qt_Core_QCborValue_QCborValue, newQStringView);
PHP_METHOD(Qt_Core_QCborValue_QCborValue, newQLatin1StringView);
PHP_METHOD(Qt_Core_QCborValue_QCborValue, newChar);
PHP_METHOD(Qt_Core_QCborValue_QCborValue, newQCborArray);
PHP_METHOD(Qt_Core_QCborValue_QCborValue, newQCborMap);
PHP_METHOD(Qt_Core_QCborValue_QCborValue, newQCborTagQCborValue);
PHP_METHOD(Qt_Core_QCborValue_QCborValue, newQCborKnownTagsQCborValue);
PHP_METHOD(Qt_Core_QCborValue_QCborValue, newQDateTime);
PHP_METHOD(Qt_Core_QCborValue_QCborValue, newQUrl);
PHP_METHOD(Qt_Core_QCborValue_QCborValue, newQRegularExpression);
PHP_METHOD(Qt_Core_QCborValue_QCborValue, newQUuid);
PHP_METHOD(Qt_Core_QCborValue_QCborValue, newQCborValue);
PHP_METHOD(Qt_Core_QCborValue_QCborValue, swap);
PHP_METHOD(Qt_Core_QCborValue_QCborValue, type);
PHP_METHOD(Qt_Core_QCborValue_QCborValue, isInteger);
PHP_METHOD(Qt_Core_QCborValue_QCborValue, isByteArray);
PHP_METHOD(Qt_Core_QCborValue_QCborValue, isString);
PHP_METHOD(Qt_Core_QCborValue_QCborValue, isArray);
PHP_METHOD(Qt_Core_QCborValue_QCborValue, isMap);
PHP_METHOD(Qt_Core_QCborValue_QCborValue, isTag);
PHP_METHOD(Qt_Core_QCborValue_QCborValue, isFalse);
PHP_METHOD(Qt_Core_QCborValue_QCborValue, isTrue);
PHP_METHOD(Qt_Core_QCborValue_QCborValue, isBool);
PHP_METHOD(Qt_Core_QCborValue_QCborValue, isNull);
PHP_METHOD(Qt_Core_QCborValue_QCborValue, isUndefined);
PHP_METHOD(Qt_Core_QCborValue_QCborValue, isDouble);
PHP_METHOD(Qt_Core_QCborValue_QCborValue, isDateTime);
PHP_METHOD(Qt_Core_QCborValue_QCborValue, isUrl);
PHP_METHOD(Qt_Core_QCborValue_QCborValue, isRegularExpression);
PHP_METHOD(Qt_Core_QCborValue_QCborValue, isUuid);
PHP_METHOD(Qt_Core_QCborValue_QCborValue, isInvalid);
PHP_METHOD(Qt_Core_QCborValue_QCborValue, isContainer);
PHP_METHOD(Qt_Core_QCborValue_QCborValue, isSimpleType);
PHP_METHOD(Qt_Core_QCborValue_QCborValue, isSimpleTypeQCborSimpleType);
PHP_METHOD(Qt_Core_QCborValue_QCborValue, toSimpleType);
PHP_METHOD(Qt_Core_QCborValue_QCborValue, toInteger);
PHP_METHOD(Qt_Core_QCborValue_QCborValue, toBool);
PHP_METHOD(Qt_Core_QCborValue_QCborValue, toDouble);
PHP_METHOD(Qt_Core_QCborValue_QCborValue, tag);
PHP_METHOD(Qt_Core_QCborValue_QCborValue, taggedValue);
PHP_METHOD(Qt_Core_QCborValue_QCborValue, toByteArray);
PHP_METHOD(Qt_Core_QCborValue_QCborValue, toString);
PHP_METHOD(Qt_Core_QCborValue_QCborValue, toDateTime);
PHP_METHOD(Qt_Core_QCborValue_QCborValue, toUrl);
PHP_METHOD(Qt_Core_QCborValue_QCborValue, toRegularExpression);
PHP_METHOD(Qt_Core_QCborValue_QCborValue, toUuid);
PHP_METHOD(Qt_Core_QCborValue_QCborValue, toArray);
PHP_METHOD(Qt_Core_QCborValue_QCborValue, toArrayQCborArray);
PHP_METHOD(Qt_Core_QCborValue_QCborValue, toMap);
PHP_METHOD(Qt_Core_QCborValue_QCborValue, toMapQCborMap);
PHP_METHOD(Qt_Core_QCborValue_QCborValue, compare);
PHP_METHOD(Qt_Core_QCborValue_QCborValue, fromVariant);
PHP_METHOD(Qt_Core_QCborValue_QCborValue, toVariant);
PHP_METHOD(Qt_Core_QCborValue_QCborValue, fromJsonValue);
PHP_METHOD(Qt_Core_QCborValue_QCborValue, toJsonValue);
PHP_METHOD(Qt_Core_QCborValue_QCborValue, fromCbor);
PHP_METHOD(Qt_Core_QCborValue_QCborValue, fromCborQByteArrayQCborParserError);
PHP_METHOD(Qt_Core_QCborValue_QCborValue, fromCborCharQsizetypeQCborParserError);
PHP_METHOD(Qt_Core_QCborValue_QCborValue, fromCborQuint8QsizetypeQCborParserError);
PHP_METHOD(Qt_Core_QCborValue_QCborValue, toCbor);
PHP_METHOD(Qt_Core_QCborValue_QCborValue, toCborQCborStreamWriterQCborValueEncodingOptions);
PHP_METHOD(Qt_Core_QCborValue_QCborValue, toDiagnosticNotation);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcborvalue_qcborvalue_staticmetaobject, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcborvalue_qcborvalue_qt_check_for_qgadget_macro, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcborvalue_qcborvalue_new_, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcborvalue_qcborvalue_newqcborvaluetype, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, t_, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcborvalue_qcborvalue_newbool, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, b_, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcborvalue_qcborvalue_newint, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, i, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcborvalue_qcborvalue_newunsignedint, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, u, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcborvalue_qcborvalue_newqint64, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, i, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcborvalue_qcborvalue_newdouble, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, v, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcborvalue_qcborvalue_newqcborsimpletype, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, st, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcborvalue_qcborvalue_newqbytearray, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, ba, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcborvalue_qcborvalue_newqstring, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, s, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcborvalue_qcborvalue_newqstringview, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, s, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcborvalue_qcborvalue_newqlatin1stringview, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, s, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcborvalue_qcborvalue_newchar, 0, 1, IS_LONG, 0)
	ZEND_ARG_INFO(0, s)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcborvalue_qcborvalue_newqcborarray, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, a, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcborvalue_qcborvalue_newqcbormap, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, m, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcborvalue_qcborvalue_newqcbortagqcborvalue, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, tag, IS_LONG, 0)
	ZEND_ARG_INFO(0, taggedValue)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcborvalue_qcborvalue_newqcborknowntagsqcborvalue, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, t_, IS_LONG, 0)
	ZEND_ARG_INFO(0, tv)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcborvalue_qcborvalue_newqdatetime, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, dt, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcborvalue_qcborvalue_newqurl, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, url, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcborvalue_qcborvalue_newqregularexpression, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rx, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcborvalue_qcborvalue_newquuid, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, uuid, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcborvalue_qcborvalue_newqcborvalue, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, other, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcborvalue_qcborvalue_swap, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, other, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcborvalue_qcborvalue_type, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcborvalue_qcborvalue_isinteger, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcborvalue_qcborvalue_isbytearray, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcborvalue_qcborvalue_isstring, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcborvalue_qcborvalue_isarray, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcborvalue_qcborvalue_ismap, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcborvalue_qcborvalue_istag, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcborvalue_qcborvalue_isfalse, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcborvalue_qcborvalue_istrue, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcborvalue_qcborvalue_isbool, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcborvalue_qcborvalue_isnull, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcborvalue_qcborvalue_isundefined, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcborvalue_qcborvalue_isdouble, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcborvalue_qcborvalue_isdatetime, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcborvalue_qcborvalue_isurl, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcborvalue_qcborvalue_isregularexpression, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcborvalue_qcborvalue_isuuid, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcborvalue_qcborvalue_isinvalid, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcborvalue_qcborvalue_iscontainer, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcborvalue_qcborvalue_issimpletype, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcborvalue_qcborvalue_issimpletypeqcborsimpletype, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, st, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcborvalue_qcborvalue_tosimpletype, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_INFO(0, defaultValue)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcborvalue_qcborvalue_tointeger, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, defaultValue, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcborvalue_qcborvalue_tobool, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, defaultValue, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcborvalue_qcborvalue_todouble, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, defaultValue, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcborvalue_qcborvalue_tag, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_INFO(0, defaultValue)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcborvalue_qcborvalue_taggedvalue, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_INFO(0, defaultValue)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcborvalue_qcborvalue_tobytearray, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, defaultValue, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcborvalue_qcborvalue_tostring, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, defaultValue, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcborvalue_qcborvalue_todatetime, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_INFO(0, defaultValue)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcborvalue_qcborvalue_tourl, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_INFO(0, defaultValue)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcborvalue_qcborvalue_toregularexpression, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_INFO(0, defaultValue)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcborvalue_qcborvalue_touuid, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_INFO(0, defaultValue)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcborvalue_qcborvalue_toarray, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcborvalue_qcborvalue_toarrayqcborarray, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, defaultValue, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcborvalue_qcborvalue_tomap, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcborvalue_qcborvalue_tomapqcbormap, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, defaultValue, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcborvalue_qcborvalue_compare, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, other, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcborvalue_qcborvalue_fromvariant, 0, 1, IS_LONG, 0)
	ZEND_ARG_INFO(0, variant)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_qt_core_qcborvalue_qcborvalue_tovariant, 0, 0, 1)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcborvalue_qcborvalue_fromjsonvalue, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, v, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcborvalue_qcborvalue_tojsonvalue, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcborvalue_qcborvalue_fromcbor, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, reader, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcborvalue_qcborvalue_fromcborqbytearrayqcborparsererror, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, ba, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, error, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcborvalue_qcborvalue_fromcborcharqsizetypeqcborparsererror, 0, 2, IS_LONG, 0)
	ZEND_ARG_INFO(0, data)
	ZEND_ARG_TYPE_INFO(0, len, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, error, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcborvalue_qcborvalue_fromcborquint8qsizetypeqcborparsererror, 0, 2, IS_LONG, 0)
	ZEND_ARG_INFO(0, data)
	ZEND_ARG_TYPE_INFO(0, len, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, error, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcborvalue_qcborvalue_tocbor, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_INFO(0, opt)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcborvalue_qcborvalue_tocborqcborstreamwriterqcborvalueencodingoptions, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, writer, IS_LONG, 0)
	ZEND_ARG_INFO(0, opt)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcborvalue_qcborvalue_todiagnosticnotation, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_INFO(0, opts)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_core_qcborvalue_qcborvalue_method_entry) {
	PHP_ME(Qt_Core_QCborValue_QCborValue, staticMetaObject, arginfo_qt_core_qcborvalue_qcborvalue_staticmetaobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCborValue_QCborValue, qt_check_for_QGADGET_macro, arginfo_qt_core_qcborvalue_qcborvalue_qt_check_for_qgadget_macro, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCborValue_QCborValue, new_, arginfo_qt_core_qcborvalue_qcborvalue_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCborValue_QCborValue, newQCborValueType, arginfo_qt_core_qcborvalue_qcborvalue_newqcborvaluetype, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCborValue_QCborValue, newBool, arginfo_qt_core_qcborvalue_qcborvalue_newbool, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCborValue_QCborValue, newInt, arginfo_qt_core_qcborvalue_qcborvalue_newint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCborValue_QCborValue, newUnsignedInt, arginfo_qt_core_qcborvalue_qcborvalue_newunsignedint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCborValue_QCborValue, newQint64, arginfo_qt_core_qcborvalue_qcborvalue_newqint64, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCborValue_QCborValue, newDouble, arginfo_qt_core_qcborvalue_qcborvalue_newdouble, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCborValue_QCborValue, newQCborSimpleType, arginfo_qt_core_qcborvalue_qcborvalue_newqcborsimpletype, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCborValue_QCborValue, newQByteArray, arginfo_qt_core_qcborvalue_qcborvalue_newqbytearray, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCborValue_QCborValue, newQString, arginfo_qt_core_qcborvalue_qcborvalue_newqstring, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCborValue_QCborValue, newQStringView, arginfo_qt_core_qcborvalue_qcborvalue_newqstringview, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCborValue_QCborValue, newQLatin1StringView, arginfo_qt_core_qcborvalue_qcborvalue_newqlatin1stringview, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCborValue_QCborValue, newChar, arginfo_qt_core_qcborvalue_qcborvalue_newchar, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCborValue_QCborValue, newQCborArray, arginfo_qt_core_qcborvalue_qcborvalue_newqcborarray, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCborValue_QCborValue, newQCborMap, arginfo_qt_core_qcborvalue_qcborvalue_newqcbormap, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCborValue_QCborValue, newQCborTagQCborValue, arginfo_qt_core_qcborvalue_qcborvalue_newqcbortagqcborvalue, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCborValue_QCborValue, newQCborKnownTagsQCborValue, arginfo_qt_core_qcborvalue_qcborvalue_newqcborknowntagsqcborvalue, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCborValue_QCborValue, newQDateTime, arginfo_qt_core_qcborvalue_qcborvalue_newqdatetime, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCborValue_QCborValue, newQUrl, arginfo_qt_core_qcborvalue_qcborvalue_newqurl, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCborValue_QCborValue, newQRegularExpression, arginfo_qt_core_qcborvalue_qcborvalue_newqregularexpression, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCborValue_QCborValue, newQUuid, arginfo_qt_core_qcborvalue_qcborvalue_newquuid, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCborValue_QCborValue, newQCborValue, arginfo_qt_core_qcborvalue_qcborvalue_newqcborvalue, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCborValue_QCborValue, swap, arginfo_qt_core_qcborvalue_qcborvalue_swap, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCborValue_QCborValue, type, arginfo_qt_core_qcborvalue_qcborvalue_type, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCborValue_QCborValue, isInteger, arginfo_qt_core_qcborvalue_qcborvalue_isinteger, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCborValue_QCborValue, isByteArray, arginfo_qt_core_qcborvalue_qcborvalue_isbytearray, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCborValue_QCborValue, isString, arginfo_qt_core_qcborvalue_qcborvalue_isstring, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCborValue_QCborValue, isArray, arginfo_qt_core_qcborvalue_qcborvalue_isarray, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCborValue_QCborValue, isMap, arginfo_qt_core_qcborvalue_qcborvalue_ismap, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCborValue_QCborValue, isTag, arginfo_qt_core_qcborvalue_qcborvalue_istag, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCborValue_QCborValue, isFalse, arginfo_qt_core_qcborvalue_qcborvalue_isfalse, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCborValue_QCborValue, isTrue, arginfo_qt_core_qcborvalue_qcborvalue_istrue, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCborValue_QCborValue, isBool, arginfo_qt_core_qcborvalue_qcborvalue_isbool, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCborValue_QCborValue, isNull, arginfo_qt_core_qcborvalue_qcborvalue_isnull, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCborValue_QCborValue, isUndefined, arginfo_qt_core_qcborvalue_qcborvalue_isundefined, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCborValue_QCborValue, isDouble, arginfo_qt_core_qcborvalue_qcborvalue_isdouble, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCborValue_QCborValue, isDateTime, arginfo_qt_core_qcborvalue_qcborvalue_isdatetime, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCborValue_QCborValue, isUrl, arginfo_qt_core_qcborvalue_qcborvalue_isurl, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCborValue_QCborValue, isRegularExpression, arginfo_qt_core_qcborvalue_qcborvalue_isregularexpression, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCborValue_QCborValue, isUuid, arginfo_qt_core_qcborvalue_qcborvalue_isuuid, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCborValue_QCborValue, isInvalid, arginfo_qt_core_qcborvalue_qcborvalue_isinvalid, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCborValue_QCborValue, isContainer, arginfo_qt_core_qcborvalue_qcborvalue_iscontainer, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCborValue_QCborValue, isSimpleType, arginfo_qt_core_qcborvalue_qcborvalue_issimpletype, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCborValue_QCborValue, isSimpleTypeQCborSimpleType, arginfo_qt_core_qcborvalue_qcborvalue_issimpletypeqcborsimpletype, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCborValue_QCborValue, toSimpleType, arginfo_qt_core_qcborvalue_qcborvalue_tosimpletype, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCborValue_QCborValue, toInteger, arginfo_qt_core_qcborvalue_qcborvalue_tointeger, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCborValue_QCborValue, toBool, arginfo_qt_core_qcborvalue_qcborvalue_tobool, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCborValue_QCborValue, toDouble, arginfo_qt_core_qcborvalue_qcborvalue_todouble, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCborValue_QCborValue, tag, arginfo_qt_core_qcborvalue_qcborvalue_tag, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCborValue_QCborValue, taggedValue, arginfo_qt_core_qcborvalue_qcborvalue_taggedvalue, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCborValue_QCborValue, toByteArray, arginfo_qt_core_qcborvalue_qcborvalue_tobytearray, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCborValue_QCborValue, toString, arginfo_qt_core_qcborvalue_qcborvalue_tostring, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCborValue_QCborValue, toDateTime, arginfo_qt_core_qcborvalue_qcborvalue_todatetime, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCborValue_QCborValue, toUrl, arginfo_qt_core_qcborvalue_qcborvalue_tourl, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCborValue_QCborValue, toRegularExpression, arginfo_qt_core_qcborvalue_qcborvalue_toregularexpression, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCborValue_QCborValue, toUuid, arginfo_qt_core_qcborvalue_qcborvalue_touuid, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCborValue_QCborValue, toArray, arginfo_qt_core_qcborvalue_qcborvalue_toarray, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCborValue_QCborValue, toArrayQCborArray, arginfo_qt_core_qcborvalue_qcborvalue_toarrayqcborarray, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCborValue_QCborValue, toMap, arginfo_qt_core_qcborvalue_qcborvalue_tomap, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCborValue_QCborValue, toMapQCborMap, arginfo_qt_core_qcborvalue_qcborvalue_tomapqcbormap, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCborValue_QCborValue, compare, arginfo_qt_core_qcborvalue_qcborvalue_compare, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCborValue_QCborValue, fromVariant, arginfo_qt_core_qcborvalue_qcborvalue_fromvariant, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCborValue_QCborValue, toVariant, arginfo_qt_core_qcborvalue_qcborvalue_tovariant, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCborValue_QCborValue, fromJsonValue, arginfo_qt_core_qcborvalue_qcborvalue_fromjsonvalue, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCborValue_QCborValue, toJsonValue, arginfo_qt_core_qcborvalue_qcborvalue_tojsonvalue, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCborValue_QCborValue, fromCbor, arginfo_qt_core_qcborvalue_qcborvalue_fromcbor, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCborValue_QCborValue, fromCborQByteArrayQCborParserError, arginfo_qt_core_qcborvalue_qcborvalue_fromcborqbytearrayqcborparsererror, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCborValue_QCborValue, fromCborCharQsizetypeQCborParserError, arginfo_qt_core_qcborvalue_qcborvalue_fromcborcharqsizetypeqcborparsererror, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCborValue_QCborValue, fromCborQuint8QsizetypeQCborParserError, arginfo_qt_core_qcborvalue_qcborvalue_fromcborquint8qsizetypeqcborparsererror, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCborValue_QCborValue, toCbor, arginfo_qt_core_qcborvalue_qcborvalue_tocbor, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCborValue_QCborValue, toCborQCborStreamWriterQCborValueEncodingOptions, arginfo_qt_core_qcborvalue_qcborvalue_tocborqcborstreamwriterqcborvalueencodingoptions, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCborValue_QCborValue, toDiagnosticNotation, arginfo_qt_core_qcborvalue_qcborvalue_todiagnosticnotation, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
