
extern zend_class_entry *qt_core_qcborvalueconstref_qcborvalueconstref_ce;

ZEPHIR_INIT_CLASS(Qt_Core_QCborValueConstRef_QCborValueConstRef);

PHP_METHOD(Qt_Core_QCborValueConstRef_QCborValueConstRef, toCbor);
PHP_METHOD(Qt_Core_QCborValueConstRef_QCborValueConstRef, toCborQCborStreamWriterQCborValueEncodingOptions);
PHP_METHOD(Qt_Core_QCborValueConstRef_QCborValueConstRef, toDiagnosticNotation);
PHP_METHOD(Qt_Core_QCborValueConstRef_QCborValueConstRef, new_);
PHP_METHOD(Qt_Core_QCborValueConstRef_QCborValueConstRef, type);
PHP_METHOD(Qt_Core_QCborValueConstRef_QCborValueConstRef, isInteger);
PHP_METHOD(Qt_Core_QCborValueConstRef_QCborValueConstRef, isByteArray);
PHP_METHOD(Qt_Core_QCborValueConstRef_QCborValueConstRef, isString);
PHP_METHOD(Qt_Core_QCborValueConstRef_QCborValueConstRef, isArray);
PHP_METHOD(Qt_Core_QCborValueConstRef_QCborValueConstRef, isMap);
PHP_METHOD(Qt_Core_QCborValueConstRef_QCborValueConstRef, isTag);
PHP_METHOD(Qt_Core_QCborValueConstRef_QCborValueConstRef, isFalse);
PHP_METHOD(Qt_Core_QCborValueConstRef_QCborValueConstRef, isTrue);
PHP_METHOD(Qt_Core_QCborValueConstRef_QCborValueConstRef, isBool);
PHP_METHOD(Qt_Core_QCborValueConstRef_QCborValueConstRef, isNull);
PHP_METHOD(Qt_Core_QCborValueConstRef_QCborValueConstRef, isUndefined);
PHP_METHOD(Qt_Core_QCborValueConstRef_QCborValueConstRef, isDouble);
PHP_METHOD(Qt_Core_QCborValueConstRef_QCborValueConstRef, isDateTime);
PHP_METHOD(Qt_Core_QCborValueConstRef_QCborValueConstRef, isUrl);
PHP_METHOD(Qt_Core_QCborValueConstRef_QCborValueConstRef, isRegularExpression);
PHP_METHOD(Qt_Core_QCborValueConstRef_QCborValueConstRef, isUuid);
PHP_METHOD(Qt_Core_QCborValueConstRef_QCborValueConstRef, isInvalid);
PHP_METHOD(Qt_Core_QCborValueConstRef_QCborValueConstRef, isContainer);
PHP_METHOD(Qt_Core_QCborValueConstRef_QCborValueConstRef, isSimpleType);
PHP_METHOD(Qt_Core_QCborValueConstRef_QCborValueConstRef, isSimpleTypeQCborSimpleType);
PHP_METHOD(Qt_Core_QCborValueConstRef_QCborValueConstRef, toSimpleType);
PHP_METHOD(Qt_Core_QCborValueConstRef_QCborValueConstRef, tag);
PHP_METHOD(Qt_Core_QCborValueConstRef_QCborValueConstRef, taggedValue);
PHP_METHOD(Qt_Core_QCborValueConstRef_QCborValueConstRef, toInteger);
PHP_METHOD(Qt_Core_QCborValueConstRef_QCborValueConstRef, toBool);
PHP_METHOD(Qt_Core_QCborValueConstRef_QCborValueConstRef, toDouble);
PHP_METHOD(Qt_Core_QCborValueConstRef_QCborValueConstRef, toByteArray);
PHP_METHOD(Qt_Core_QCborValueConstRef_QCborValueConstRef, toString);
PHP_METHOD(Qt_Core_QCborValueConstRef_QCborValueConstRef, toDateTime);
PHP_METHOD(Qt_Core_QCborValueConstRef_QCborValueConstRef, toUrl);
PHP_METHOD(Qt_Core_QCborValueConstRef_QCborValueConstRef, toRegularExpression);
PHP_METHOD(Qt_Core_QCborValueConstRef_QCborValueConstRef, toUuid);
PHP_METHOD(Qt_Core_QCborValueConstRef_QCborValueConstRef, toArray);
PHP_METHOD(Qt_Core_QCborValueConstRef_QCborValueConstRef, toArrayQCborArray);
PHP_METHOD(Qt_Core_QCborValueConstRef_QCborValueConstRef, toMap);
PHP_METHOD(Qt_Core_QCborValueConstRef_QCborValueConstRef, toMapQCborMap);
PHP_METHOD(Qt_Core_QCborValueConstRef_QCborValueConstRef, compare);
PHP_METHOD(Qt_Core_QCborValueConstRef_QCborValueConstRef, toVariant);
PHP_METHOD(Qt_Core_QCborValueConstRef_QCborValueConstRef, toJsonValue);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcborvalueconstref_qcborvalueconstref_tocbor, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_INFO(0, opt)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcborvalueconstref_qcborvalueconstref_tocborqcborstreamwriterqcborvalueencodingoptions, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, writer, IS_LONG, 0)
	ZEND_ARG_INFO(0, opt)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcborvalueconstref_qcborvalueconstref_todiagnosticnotation, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_INFO(0, opt)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcborvalueconstref_qcborvalueconstref_new_, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcborvalueconstref_qcborvalueconstref_type, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcborvalueconstref_qcborvalueconstref_isinteger, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcborvalueconstref_qcborvalueconstref_isbytearray, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcborvalueconstref_qcborvalueconstref_isstring, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcborvalueconstref_qcborvalueconstref_isarray, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcborvalueconstref_qcborvalueconstref_ismap, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcborvalueconstref_qcborvalueconstref_istag, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcborvalueconstref_qcborvalueconstref_isfalse, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcborvalueconstref_qcborvalueconstref_istrue, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcborvalueconstref_qcborvalueconstref_isbool, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcborvalueconstref_qcborvalueconstref_isnull, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcborvalueconstref_qcborvalueconstref_isundefined, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcborvalueconstref_qcborvalueconstref_isdouble, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcborvalueconstref_qcborvalueconstref_isdatetime, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcborvalueconstref_qcborvalueconstref_isurl, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcborvalueconstref_qcborvalueconstref_isregularexpression, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcborvalueconstref_qcborvalueconstref_isuuid, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcborvalueconstref_qcborvalueconstref_isinvalid, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcborvalueconstref_qcborvalueconstref_iscontainer, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcborvalueconstref_qcborvalueconstref_issimpletype, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcborvalueconstref_qcborvalueconstref_issimpletypeqcborsimpletype, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, st, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcborvalueconstref_qcborvalueconstref_tosimpletype, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_INFO(0, defaultValue)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcborvalueconstref_qcborvalueconstref_tag, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_INFO(0, defaultValue)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcborvalueconstref_qcborvalueconstref_taggedvalue, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_INFO(0, defaultValue)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcborvalueconstref_qcborvalueconstref_tointeger, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, defaultValue, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcborvalueconstref_qcborvalueconstref_tobool, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, defaultValue, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcborvalueconstref_qcborvalueconstref_todouble, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, defaultValue, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcborvalueconstref_qcborvalueconstref_tobytearray, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, defaultValue, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcborvalueconstref_qcborvalueconstref_tostring, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, defaultValue, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcborvalueconstref_qcborvalueconstref_todatetime, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_INFO(0, defaultValue)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcborvalueconstref_qcborvalueconstref_tourl, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_INFO(0, defaultValue)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcborvalueconstref_qcborvalueconstref_toregularexpression, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_INFO(0, defaultValue)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcborvalueconstref_qcborvalueconstref_touuid, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_INFO(0, defaultValue)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcborvalueconstref_qcborvalueconstref_toarray, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcborvalueconstref_qcborvalueconstref_toarrayqcborarray, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, a, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcborvalueconstref_qcborvalueconstref_tomap, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcborvalueconstref_qcborvalueconstref_tomapqcbormap, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, m, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcborvalueconstref_qcborvalueconstref_compare, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, other, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_qt_core_qcborvalueconstref_qcborvalueconstref_tovariant, 0, 0, 1)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcborvalueconstref_qcborvalueconstref_tojsonvalue, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_core_qcborvalueconstref_qcborvalueconstref_method_entry) {
	PHP_ME(Qt_Core_QCborValueConstRef_QCborValueConstRef, toCbor, arginfo_qt_core_qcborvalueconstref_qcborvalueconstref_tocbor, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCborValueConstRef_QCborValueConstRef, toCborQCborStreamWriterQCborValueEncodingOptions, arginfo_qt_core_qcborvalueconstref_qcborvalueconstref_tocborqcborstreamwriterqcborvalueencodingoptions, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCborValueConstRef_QCborValueConstRef, toDiagnosticNotation, arginfo_qt_core_qcborvalueconstref_qcborvalueconstref_todiagnosticnotation, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCborValueConstRef_QCborValueConstRef, new_, arginfo_qt_core_qcborvalueconstref_qcborvalueconstref_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCborValueConstRef_QCborValueConstRef, type, arginfo_qt_core_qcborvalueconstref_qcborvalueconstref_type, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCborValueConstRef_QCborValueConstRef, isInteger, arginfo_qt_core_qcborvalueconstref_qcborvalueconstref_isinteger, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCborValueConstRef_QCborValueConstRef, isByteArray, arginfo_qt_core_qcborvalueconstref_qcborvalueconstref_isbytearray, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCborValueConstRef_QCborValueConstRef, isString, arginfo_qt_core_qcborvalueconstref_qcborvalueconstref_isstring, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCborValueConstRef_QCborValueConstRef, isArray, arginfo_qt_core_qcborvalueconstref_qcborvalueconstref_isarray, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCborValueConstRef_QCborValueConstRef, isMap, arginfo_qt_core_qcborvalueconstref_qcborvalueconstref_ismap, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCborValueConstRef_QCborValueConstRef, isTag, arginfo_qt_core_qcborvalueconstref_qcborvalueconstref_istag, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCborValueConstRef_QCborValueConstRef, isFalse, arginfo_qt_core_qcborvalueconstref_qcborvalueconstref_isfalse, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCborValueConstRef_QCborValueConstRef, isTrue, arginfo_qt_core_qcborvalueconstref_qcborvalueconstref_istrue, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCborValueConstRef_QCborValueConstRef, isBool, arginfo_qt_core_qcborvalueconstref_qcborvalueconstref_isbool, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCborValueConstRef_QCborValueConstRef, isNull, arginfo_qt_core_qcborvalueconstref_qcborvalueconstref_isnull, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCborValueConstRef_QCborValueConstRef, isUndefined, arginfo_qt_core_qcborvalueconstref_qcborvalueconstref_isundefined, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCborValueConstRef_QCborValueConstRef, isDouble, arginfo_qt_core_qcborvalueconstref_qcborvalueconstref_isdouble, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCborValueConstRef_QCborValueConstRef, isDateTime, arginfo_qt_core_qcborvalueconstref_qcborvalueconstref_isdatetime, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCborValueConstRef_QCborValueConstRef, isUrl, arginfo_qt_core_qcborvalueconstref_qcborvalueconstref_isurl, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCborValueConstRef_QCborValueConstRef, isRegularExpression, arginfo_qt_core_qcborvalueconstref_qcborvalueconstref_isregularexpression, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCborValueConstRef_QCborValueConstRef, isUuid, arginfo_qt_core_qcborvalueconstref_qcborvalueconstref_isuuid, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCborValueConstRef_QCborValueConstRef, isInvalid, arginfo_qt_core_qcborvalueconstref_qcborvalueconstref_isinvalid, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCborValueConstRef_QCborValueConstRef, isContainer, arginfo_qt_core_qcborvalueconstref_qcborvalueconstref_iscontainer, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCborValueConstRef_QCborValueConstRef, isSimpleType, arginfo_qt_core_qcborvalueconstref_qcborvalueconstref_issimpletype, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCborValueConstRef_QCborValueConstRef, isSimpleTypeQCborSimpleType, arginfo_qt_core_qcborvalueconstref_qcborvalueconstref_issimpletypeqcborsimpletype, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCborValueConstRef_QCborValueConstRef, toSimpleType, arginfo_qt_core_qcborvalueconstref_qcborvalueconstref_tosimpletype, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCborValueConstRef_QCborValueConstRef, tag, arginfo_qt_core_qcborvalueconstref_qcborvalueconstref_tag, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCborValueConstRef_QCborValueConstRef, taggedValue, arginfo_qt_core_qcborvalueconstref_qcborvalueconstref_taggedvalue, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCborValueConstRef_QCborValueConstRef, toInteger, arginfo_qt_core_qcborvalueconstref_qcborvalueconstref_tointeger, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCborValueConstRef_QCborValueConstRef, toBool, arginfo_qt_core_qcborvalueconstref_qcborvalueconstref_tobool, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCborValueConstRef_QCborValueConstRef, toDouble, arginfo_qt_core_qcborvalueconstref_qcborvalueconstref_todouble, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCborValueConstRef_QCborValueConstRef, toByteArray, arginfo_qt_core_qcborvalueconstref_qcborvalueconstref_tobytearray, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCborValueConstRef_QCborValueConstRef, toString, arginfo_qt_core_qcborvalueconstref_qcborvalueconstref_tostring, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCborValueConstRef_QCborValueConstRef, toDateTime, arginfo_qt_core_qcborvalueconstref_qcborvalueconstref_todatetime, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCborValueConstRef_QCborValueConstRef, toUrl, arginfo_qt_core_qcborvalueconstref_qcborvalueconstref_tourl, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCborValueConstRef_QCborValueConstRef, toRegularExpression, arginfo_qt_core_qcborvalueconstref_qcborvalueconstref_toregularexpression, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCborValueConstRef_QCborValueConstRef, toUuid, arginfo_qt_core_qcborvalueconstref_qcborvalueconstref_touuid, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCborValueConstRef_QCborValueConstRef, toArray, arginfo_qt_core_qcborvalueconstref_qcborvalueconstref_toarray, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCborValueConstRef_QCborValueConstRef, toArrayQCborArray, arginfo_qt_core_qcborvalueconstref_qcborvalueconstref_toarrayqcborarray, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCborValueConstRef_QCborValueConstRef, toMap, arginfo_qt_core_qcborvalueconstref_qcborvalueconstref_tomap, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCborValueConstRef_QCborValueConstRef, toMapQCborMap, arginfo_qt_core_qcborvalueconstref_qcborvalueconstref_tomapqcbormap, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCborValueConstRef_QCborValueConstRef, compare, arginfo_qt_core_qcborvalueconstref_qcborvalueconstref_compare, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCborValueConstRef_QCborValueConstRef, toVariant, arginfo_qt_core_qcborvalueconstref_qcborvalueconstref_tovariant, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCborValueConstRef_QCborValueConstRef, toJsonValue, arginfo_qt_core_qcborvalueconstref_qcborvalueconstref_tojsonvalue, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
