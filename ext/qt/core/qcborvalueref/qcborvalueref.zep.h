
extern zend_class_entry *qt_core_qcborvalueref_qcborvalueref_ce;

ZEPHIR_INIT_CLASS(Qt_Core_QCborValueRef_QCborValueRef);

PHP_METHOD(Qt_Core_QCborValueRef_QCborValueRef, new_);
PHP_METHOD(Qt_Core_QCborValueRef_QCborValueRef, type);
PHP_METHOD(Qt_Core_QCborValueRef_QCborValueRef, isInteger);
PHP_METHOD(Qt_Core_QCborValueRef_QCborValueRef, isByteArray);
PHP_METHOD(Qt_Core_QCborValueRef_QCborValueRef, isString);
PHP_METHOD(Qt_Core_QCborValueRef_QCborValueRef, isArray);
PHP_METHOD(Qt_Core_QCborValueRef_QCborValueRef, isMap);
PHP_METHOD(Qt_Core_QCborValueRef_QCborValueRef, isTag);
PHP_METHOD(Qt_Core_QCborValueRef_QCborValueRef, isFalse);
PHP_METHOD(Qt_Core_QCborValueRef_QCborValueRef, isTrue);
PHP_METHOD(Qt_Core_QCborValueRef_QCborValueRef, isBool);
PHP_METHOD(Qt_Core_QCborValueRef_QCborValueRef, isNull);
PHP_METHOD(Qt_Core_QCborValueRef_QCborValueRef, isUndefined);
PHP_METHOD(Qt_Core_QCborValueRef_QCborValueRef, isDouble);
PHP_METHOD(Qt_Core_QCborValueRef_QCborValueRef, isDateTime);
PHP_METHOD(Qt_Core_QCborValueRef_QCborValueRef, isUrl);
PHP_METHOD(Qt_Core_QCborValueRef_QCborValueRef, isRegularExpression);
PHP_METHOD(Qt_Core_QCborValueRef_QCborValueRef, isUuid);
PHP_METHOD(Qt_Core_QCborValueRef_QCborValueRef, isInvalid);
PHP_METHOD(Qt_Core_QCborValueRef_QCborValueRef, isContainer);
PHP_METHOD(Qt_Core_QCborValueRef_QCborValueRef, isSimpleType);
PHP_METHOD(Qt_Core_QCborValueRef_QCborValueRef, isSimpleTypeQCborSimpleType);
PHP_METHOD(Qt_Core_QCborValueRef_QCborValueRef, toSimpleType);
PHP_METHOD(Qt_Core_QCborValueRef_QCborValueRef, tag);
PHP_METHOD(Qt_Core_QCborValueRef_QCborValueRef, taggedValue);
PHP_METHOD(Qt_Core_QCborValueRef_QCborValueRef, toInteger);
PHP_METHOD(Qt_Core_QCborValueRef_QCborValueRef, toBool);
PHP_METHOD(Qt_Core_QCborValueRef_QCborValueRef, toDouble);
PHP_METHOD(Qt_Core_QCborValueRef_QCborValueRef, toByteArray);
PHP_METHOD(Qt_Core_QCborValueRef_QCborValueRef, toString);
PHP_METHOD(Qt_Core_QCborValueRef_QCborValueRef, toDateTime);
PHP_METHOD(Qt_Core_QCborValueRef_QCborValueRef, toUrl);
PHP_METHOD(Qt_Core_QCborValueRef_QCborValueRef, toRegularExpression);
PHP_METHOD(Qt_Core_QCborValueRef_QCborValueRef, toUuid);
PHP_METHOD(Qt_Core_QCborValueRef_QCborValueRef, toArray);
PHP_METHOD(Qt_Core_QCborValueRef_QCborValueRef, toArrayQCborArray);
PHP_METHOD(Qt_Core_QCborValueRef_QCborValueRef, toMap);
PHP_METHOD(Qt_Core_QCborValueRef_QCborValueRef, toMapQCborMap);
PHP_METHOD(Qt_Core_QCborValueRef_QCborValueRef, compare);
PHP_METHOD(Qt_Core_QCborValueRef_QCborValueRef, toVariant);
PHP_METHOD(Qt_Core_QCborValueRef_QCborValueRef, toJsonValue);
PHP_METHOD(Qt_Core_QCborValueRef_QCborValueRef, toCbor);
PHP_METHOD(Qt_Core_QCborValueRef_QCborValueRef, toCborQCborStreamWriterQCborValueEncodingOptions);
PHP_METHOD(Qt_Core_QCborValueRef_QCborValueRef, toDiagnosticNotation);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcborvalueref_qcborvalueref_new_, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcborvalueref_qcborvalueref_type, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcborvalueref_qcborvalueref_isinteger, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcborvalueref_qcborvalueref_isbytearray, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcborvalueref_qcborvalueref_isstring, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcborvalueref_qcborvalueref_isarray, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcborvalueref_qcborvalueref_ismap, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcborvalueref_qcborvalueref_istag, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcborvalueref_qcborvalueref_isfalse, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcborvalueref_qcborvalueref_istrue, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcborvalueref_qcborvalueref_isbool, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcborvalueref_qcborvalueref_isnull, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcborvalueref_qcborvalueref_isundefined, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcborvalueref_qcborvalueref_isdouble, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcborvalueref_qcborvalueref_isdatetime, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcborvalueref_qcborvalueref_isurl, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcborvalueref_qcborvalueref_isregularexpression, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcborvalueref_qcborvalueref_isuuid, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcborvalueref_qcborvalueref_isinvalid, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcborvalueref_qcborvalueref_iscontainer, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcborvalueref_qcborvalueref_issimpletype, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcborvalueref_qcborvalueref_issimpletypeqcborsimpletype, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, st, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcborvalueref_qcborvalueref_tosimpletype, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_INFO(0, defaultValue)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcborvalueref_qcborvalueref_tag, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_INFO(0, defaultValue)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcborvalueref_qcborvalueref_taggedvalue, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_INFO(0, defaultValue)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcborvalueref_qcborvalueref_tointeger, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, defaultValue, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcborvalueref_qcborvalueref_tobool, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, defaultValue, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcborvalueref_qcborvalueref_todouble, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, defaultValue, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcborvalueref_qcborvalueref_tobytearray, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, defaultValue, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcborvalueref_qcborvalueref_tostring, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, defaultValue, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcborvalueref_qcborvalueref_todatetime, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_INFO(0, defaultValue)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcborvalueref_qcborvalueref_tourl, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_INFO(0, defaultValue)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcborvalueref_qcborvalueref_toregularexpression, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_INFO(0, defaultValue)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcborvalueref_qcborvalueref_touuid, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_INFO(0, defaultValue)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcborvalueref_qcborvalueref_toarray, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcborvalueref_qcborvalueref_toarrayqcborarray, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, a, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcborvalueref_qcborvalueref_tomap, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcborvalueref_qcborvalueref_tomapqcbormap, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, m, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcborvalueref_qcborvalueref_compare, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, other, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_qt_core_qcborvalueref_qcborvalueref_tovariant, 0, 0, 1)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcborvalueref_qcborvalueref_tojsonvalue, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcborvalueref_qcborvalueref_tocbor, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_INFO(0, opt)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcborvalueref_qcborvalueref_tocborqcborstreamwriterqcborvalueencodingoptions, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, writer, IS_LONG, 0)
	ZEND_ARG_INFO(0, opt)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcborvalueref_qcborvalueref_todiagnosticnotation, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_INFO(0, opt)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_core_qcborvalueref_qcborvalueref_method_entry) {
	PHP_ME(Qt_Core_QCborValueRef_QCborValueRef, new_, arginfo_qt_core_qcborvalueref_qcborvalueref_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCborValueRef_QCborValueRef, type, arginfo_qt_core_qcborvalueref_qcborvalueref_type, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCborValueRef_QCborValueRef, isInteger, arginfo_qt_core_qcborvalueref_qcborvalueref_isinteger, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCborValueRef_QCborValueRef, isByteArray, arginfo_qt_core_qcborvalueref_qcborvalueref_isbytearray, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCborValueRef_QCborValueRef, isString, arginfo_qt_core_qcborvalueref_qcborvalueref_isstring, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCborValueRef_QCborValueRef, isArray, arginfo_qt_core_qcborvalueref_qcborvalueref_isarray, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCborValueRef_QCborValueRef, isMap, arginfo_qt_core_qcborvalueref_qcborvalueref_ismap, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCborValueRef_QCborValueRef, isTag, arginfo_qt_core_qcborvalueref_qcborvalueref_istag, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCborValueRef_QCborValueRef, isFalse, arginfo_qt_core_qcborvalueref_qcborvalueref_isfalse, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCborValueRef_QCborValueRef, isTrue, arginfo_qt_core_qcborvalueref_qcborvalueref_istrue, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCborValueRef_QCborValueRef, isBool, arginfo_qt_core_qcborvalueref_qcborvalueref_isbool, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCborValueRef_QCborValueRef, isNull, arginfo_qt_core_qcborvalueref_qcborvalueref_isnull, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCborValueRef_QCborValueRef, isUndefined, arginfo_qt_core_qcborvalueref_qcborvalueref_isundefined, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCborValueRef_QCborValueRef, isDouble, arginfo_qt_core_qcborvalueref_qcborvalueref_isdouble, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCborValueRef_QCborValueRef, isDateTime, arginfo_qt_core_qcborvalueref_qcborvalueref_isdatetime, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCborValueRef_QCborValueRef, isUrl, arginfo_qt_core_qcborvalueref_qcborvalueref_isurl, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCborValueRef_QCborValueRef, isRegularExpression, arginfo_qt_core_qcborvalueref_qcborvalueref_isregularexpression, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCborValueRef_QCborValueRef, isUuid, arginfo_qt_core_qcborvalueref_qcborvalueref_isuuid, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCborValueRef_QCborValueRef, isInvalid, arginfo_qt_core_qcborvalueref_qcborvalueref_isinvalid, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCborValueRef_QCborValueRef, isContainer, arginfo_qt_core_qcborvalueref_qcborvalueref_iscontainer, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCborValueRef_QCborValueRef, isSimpleType, arginfo_qt_core_qcborvalueref_qcborvalueref_issimpletype, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCborValueRef_QCborValueRef, isSimpleTypeQCborSimpleType, arginfo_qt_core_qcborvalueref_qcborvalueref_issimpletypeqcborsimpletype, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCborValueRef_QCborValueRef, toSimpleType, arginfo_qt_core_qcborvalueref_qcborvalueref_tosimpletype, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCborValueRef_QCborValueRef, tag, arginfo_qt_core_qcborvalueref_qcborvalueref_tag, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCborValueRef_QCborValueRef, taggedValue, arginfo_qt_core_qcborvalueref_qcborvalueref_taggedvalue, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCborValueRef_QCborValueRef, toInteger, arginfo_qt_core_qcborvalueref_qcborvalueref_tointeger, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCborValueRef_QCborValueRef, toBool, arginfo_qt_core_qcborvalueref_qcborvalueref_tobool, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCborValueRef_QCborValueRef, toDouble, arginfo_qt_core_qcborvalueref_qcborvalueref_todouble, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCborValueRef_QCborValueRef, toByteArray, arginfo_qt_core_qcborvalueref_qcborvalueref_tobytearray, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCborValueRef_QCborValueRef, toString, arginfo_qt_core_qcborvalueref_qcborvalueref_tostring, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCborValueRef_QCborValueRef, toDateTime, arginfo_qt_core_qcborvalueref_qcborvalueref_todatetime, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCborValueRef_QCborValueRef, toUrl, arginfo_qt_core_qcborvalueref_qcborvalueref_tourl, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCborValueRef_QCborValueRef, toRegularExpression, arginfo_qt_core_qcborvalueref_qcborvalueref_toregularexpression, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCborValueRef_QCborValueRef, toUuid, arginfo_qt_core_qcborvalueref_qcborvalueref_touuid, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCborValueRef_QCborValueRef, toArray, arginfo_qt_core_qcborvalueref_qcborvalueref_toarray, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCborValueRef_QCborValueRef, toArrayQCborArray, arginfo_qt_core_qcborvalueref_qcborvalueref_toarrayqcborarray, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCborValueRef_QCborValueRef, toMap, arginfo_qt_core_qcborvalueref_qcborvalueref_tomap, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCborValueRef_QCborValueRef, toMapQCborMap, arginfo_qt_core_qcborvalueref_qcborvalueref_tomapqcbormap, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCborValueRef_QCborValueRef, compare, arginfo_qt_core_qcborvalueref_qcborvalueref_compare, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCborValueRef_QCborValueRef, toVariant, arginfo_qt_core_qcborvalueref_qcborvalueref_tovariant, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCborValueRef_QCborValueRef, toJsonValue, arginfo_qt_core_qcborvalueref_qcborvalueref_tojsonvalue, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCborValueRef_QCborValueRef, toCbor, arginfo_qt_core_qcborvalueref_qcborvalueref_tocbor, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCborValueRef_QCborValueRef, toCborQCborStreamWriterQCborValueEncodingOptions, arginfo_qt_core_qcborvalueref_qcborvalueref_tocborqcborstreamwriterqcborvalueencodingoptions, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCborValueRef_QCborValueRef, toDiagnosticNotation, arginfo_qt_core_qcborvalueref_qcborvalueref_todiagnosticnotation, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
