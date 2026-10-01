
extern zend_class_entry *qt_core_qversionnumber_qversionnumber_ce;

ZEPHIR_INIT_CLASS(Qt_Core_QVersionNumber_QVersionNumber);

PHP_METHOD(Qt_Core_QVersionNumber_QVersionNumber, new_);
PHP_METHOD(Qt_Core_QVersionNumber_QVersionNumber, newInt);
PHP_METHOD(Qt_Core_QVersionNumber_QVersionNumber, newIntInt);
PHP_METHOD(Qt_Core_QVersionNumber_QVersionNumber, newIntIntInt);
PHP_METHOD(Qt_Core_QVersionNumber_QVersionNumber, isNull);
PHP_METHOD(Qt_Core_QVersionNumber_QVersionNumber, isNormalized);
PHP_METHOD(Qt_Core_QVersionNumber_QVersionNumber, majorVersion);
PHP_METHOD(Qt_Core_QVersionNumber_QVersionNumber, minorVersion);
PHP_METHOD(Qt_Core_QVersionNumber_QVersionNumber, microVersion);
PHP_METHOD(Qt_Core_QVersionNumber_QVersionNumber, normalized);
PHP_METHOD(Qt_Core_QVersionNumber_QVersionNumber, segments);
PHP_METHOD(Qt_Core_QVersionNumber_QVersionNumber, segmentAt);
PHP_METHOD(Qt_Core_QVersionNumber_QVersionNumber, segmentCount);
PHP_METHOD(Qt_Core_QVersionNumber_QVersionNumber, isPrefixOf);
PHP_METHOD(Qt_Core_QVersionNumber_QVersionNumber, compare);
PHP_METHOD(Qt_Core_QVersionNumber_QVersionNumber, commonPrefix);
PHP_METHOD(Qt_Core_QVersionNumber_QVersionNumber, toString);
PHP_METHOD(Qt_Core_QVersionNumber_QVersionNumber, fromString);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qversionnumber_qversionnumber_new_, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qversionnumber_qversionnumber_newint, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, maj, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qversionnumber_qversionnumber_newintint, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, maj, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, min, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qversionnumber_qversionnumber_newintintint, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, maj, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, min, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, mic, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qversionnumber_qversionnumber_isnull, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qversionnumber_qversionnumber_isnormalized, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qversionnumber_qversionnumber_majorversion, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qversionnumber_qversionnumber_minorversion, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qversionnumber_qversionnumber_microversion, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qversionnumber_qversionnumber_normalized, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qversionnumber_qversionnumber_segments, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qversionnumber_qversionnumber_segmentat, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qversionnumber_qversionnumber_segmentcount, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qversionnumber_qversionnumber_isprefixof, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, other, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qversionnumber_qversionnumber_compare, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, v1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, v2, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qversionnumber_qversionnumber_commonprefix, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, v1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, v2, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qversionnumber_qversionnumber_tostring, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qversionnumber_qversionnumber_fromstring, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, string_, IS_STRING, 0)
	ZEND_ARG_INFO(0, suffixIndex)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_core_qversionnumber_qversionnumber_method_entry) {
	PHP_ME(Qt_Core_QVersionNumber_QVersionNumber, new_, arginfo_qt_core_qversionnumber_qversionnumber_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QVersionNumber_QVersionNumber, newInt, arginfo_qt_core_qversionnumber_qversionnumber_newint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QVersionNumber_QVersionNumber, newIntInt, arginfo_qt_core_qversionnumber_qversionnumber_newintint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QVersionNumber_QVersionNumber, newIntIntInt, arginfo_qt_core_qversionnumber_qversionnumber_newintintint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QVersionNumber_QVersionNumber, isNull, arginfo_qt_core_qversionnumber_qversionnumber_isnull, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QVersionNumber_QVersionNumber, isNormalized, arginfo_qt_core_qversionnumber_qversionnumber_isnormalized, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QVersionNumber_QVersionNumber, majorVersion, arginfo_qt_core_qversionnumber_qversionnumber_majorversion, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QVersionNumber_QVersionNumber, minorVersion, arginfo_qt_core_qversionnumber_qversionnumber_minorversion, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QVersionNumber_QVersionNumber, microVersion, arginfo_qt_core_qversionnumber_qversionnumber_microversion, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QVersionNumber_QVersionNumber, normalized, arginfo_qt_core_qversionnumber_qversionnumber_normalized, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QVersionNumber_QVersionNumber, segments, arginfo_qt_core_qversionnumber_qversionnumber_segments, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QVersionNumber_QVersionNumber, segmentAt, arginfo_qt_core_qversionnumber_qversionnumber_segmentat, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QVersionNumber_QVersionNumber, segmentCount, arginfo_qt_core_qversionnumber_qversionnumber_segmentcount, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QVersionNumber_QVersionNumber, isPrefixOf, arginfo_qt_core_qversionnumber_qversionnumber_isprefixof, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QVersionNumber_QVersionNumber, compare, arginfo_qt_core_qversionnumber_qversionnumber_compare, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QVersionNumber_QVersionNumber, commonPrefix, arginfo_qt_core_qversionnumber_qversionnumber_commonprefix, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QVersionNumber_QVersionNumber, toString, arginfo_qt_core_qversionnumber_qversionnumber_tostring, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QVersionNumber_QVersionNumber, fromString, arginfo_qt_core_qversionnumber_qversionnumber_fromstring, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
