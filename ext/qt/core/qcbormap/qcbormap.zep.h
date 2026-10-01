
extern zend_class_entry *qt_core_qcbormap_qcbormap_ce;

ZEPHIR_INIT_CLASS(Qt_Core_QCborMap_QCborMap);

PHP_METHOD(Qt_Core_QCborMap_QCborMap, new_);
PHP_METHOD(Qt_Core_QCborMap_QCborMap, newQCborMap);
PHP_METHOD(Qt_Core_QCborMap_QCborMap, swap);
PHP_METHOD(Qt_Core_QCborMap_QCborMap, toCborValue);
PHP_METHOD(Qt_Core_QCborMap_QCborMap, size);
PHP_METHOD(Qt_Core_QCborMap_QCborMap, isEmpty);
PHP_METHOD(Qt_Core_QCborMap_QCborMap, clear);
PHP_METHOD(Qt_Core_QCborMap_QCborMap, keys);
PHP_METHOD(Qt_Core_QCborMap_QCborMap, value);
PHP_METHOD(Qt_Core_QCborMap_QCborMap, valueQLatin1StringView);
PHP_METHOD(Qt_Core_QCborMap_QCborMap, valueQString);
PHP_METHOD(Qt_Core_QCborMap_QCborMap, valueQCborValue);
PHP_METHOD(Qt_Core_QCborMap_QCborMap, take);
PHP_METHOD(Qt_Core_QCborMap_QCborMap, takeQLatin1StringView);
PHP_METHOD(Qt_Core_QCborMap_QCborMap, takeQString);
PHP_METHOD(Qt_Core_QCborMap_QCborMap, takeQCborValue);
PHP_METHOD(Qt_Core_QCborMap_QCborMap, remove);
PHP_METHOD(Qt_Core_QCborMap_QCborMap, removeQLatin1StringView);
PHP_METHOD(Qt_Core_QCborMap_QCborMap, removeQString);
PHP_METHOD(Qt_Core_QCborMap_QCborMap, removeQCborValue);
PHP_METHOD(Qt_Core_QCborMap_QCborMap, contains);
PHP_METHOD(Qt_Core_QCborMap_QCborMap, containsQLatin1StringView);
PHP_METHOD(Qt_Core_QCborMap_QCborMap, containsQString);
PHP_METHOD(Qt_Core_QCborMap_QCborMap, containsQCborValue);
PHP_METHOD(Qt_Core_QCborMap_QCborMap, compare);
PHP_METHOD(Qt_Core_QCborMap_QCborMap, empty_);
PHP_METHOD(Qt_Core_QCborMap_QCborMap, fromVariantMap);
PHP_METHOD(Qt_Core_QCborMap_QCborMap, fromVariantHash);
PHP_METHOD(Qt_Core_QCborMap_QCborMap, fromJsonObject);
PHP_METHOD(Qt_Core_QCborMap_QCborMap, toVariantMap);
PHP_METHOD(Qt_Core_QCborMap_QCborMap, toVariantHash);
PHP_METHOD(Qt_Core_QCborMap_QCborMap, toJsonObject);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcbormap_qcbormap_new_, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcbormap_qcbormap_newqcbormap, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, other, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcbormap_qcbormap_swap, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, other, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcbormap_qcbormap_tocborvalue, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcbormap_qcbormap_size, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcbormap_qcbormap_isempty, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcbormap_qcbormap_clear, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcbormap_qcbormap_keys, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcbormap_qcbormap_value, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, key, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcbormap_qcbormap_valueqlatin1stringview, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, key, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcbormap_qcbormap_valueqstring, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, key, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcbormap_qcbormap_valueqcborvalue, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, key, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcbormap_qcbormap_take, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, key, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcbormap_qcbormap_takeqlatin1stringview, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, key, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcbormap_qcbormap_takeqstring, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, key, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcbormap_qcbormap_takeqcborvalue, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, key, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcbormap_qcbormap_remove, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, key, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcbormap_qcbormap_removeqlatin1stringview, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, key, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcbormap_qcbormap_removeqstring, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, key, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcbormap_qcbormap_removeqcborvalue, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, key, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcbormap_qcbormap_contains, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, key, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcbormap_qcbormap_containsqlatin1stringview, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, key, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcbormap_qcbormap_containsqstring, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, key, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcbormap_qcbormap_containsqcborvalue, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, key, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcbormap_qcbormap_compare, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, other, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcbormap_qcbormap_empty_, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcbormap_qcbormap_fromvariantmap, 0, 1, IS_LONG, 0)
	ZEND_ARG_ARRAY_INFO(0, map, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcbormap_qcbormap_fromvarianthash, 0, 1, IS_LONG, 0)
	ZEND_ARG_ARRAY_INFO(0, hash, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcbormap_qcbormap_fromjsonobject, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, o, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcbormap_qcbormap_tovariantmap, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcbormap_qcbormap_tovarianthash, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcbormap_qcbormap_tojsonobject, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_core_qcbormap_qcbormap_method_entry) {
	PHP_ME(Qt_Core_QCborMap_QCborMap, new_, arginfo_qt_core_qcbormap_qcbormap_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCborMap_QCborMap, newQCborMap, arginfo_qt_core_qcbormap_qcbormap_newqcbormap, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCborMap_QCborMap, swap, arginfo_qt_core_qcbormap_qcbormap_swap, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCborMap_QCborMap, toCborValue, arginfo_qt_core_qcbormap_qcbormap_tocborvalue, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCborMap_QCborMap, size, arginfo_qt_core_qcbormap_qcbormap_size, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCborMap_QCborMap, isEmpty, arginfo_qt_core_qcbormap_qcbormap_isempty, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCborMap_QCborMap, clear, arginfo_qt_core_qcbormap_qcbormap_clear, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCborMap_QCborMap, keys, arginfo_qt_core_qcbormap_qcbormap_keys, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCborMap_QCborMap, value, arginfo_qt_core_qcbormap_qcbormap_value, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCborMap_QCborMap, valueQLatin1StringView, arginfo_qt_core_qcbormap_qcbormap_valueqlatin1stringview, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCborMap_QCborMap, valueQString, arginfo_qt_core_qcbormap_qcbormap_valueqstring, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCborMap_QCborMap, valueQCborValue, arginfo_qt_core_qcbormap_qcbormap_valueqcborvalue, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCborMap_QCborMap, take, arginfo_qt_core_qcbormap_qcbormap_take, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCborMap_QCborMap, takeQLatin1StringView, arginfo_qt_core_qcbormap_qcbormap_takeqlatin1stringview, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCborMap_QCborMap, takeQString, arginfo_qt_core_qcbormap_qcbormap_takeqstring, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCborMap_QCborMap, takeQCborValue, arginfo_qt_core_qcbormap_qcbormap_takeqcborvalue, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCborMap_QCborMap, remove, arginfo_qt_core_qcbormap_qcbormap_remove, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCborMap_QCborMap, removeQLatin1StringView, arginfo_qt_core_qcbormap_qcbormap_removeqlatin1stringview, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCborMap_QCborMap, removeQString, arginfo_qt_core_qcbormap_qcbormap_removeqstring, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCborMap_QCborMap, removeQCborValue, arginfo_qt_core_qcbormap_qcbormap_removeqcborvalue, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCborMap_QCborMap, contains, arginfo_qt_core_qcbormap_qcbormap_contains, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCborMap_QCborMap, containsQLatin1StringView, arginfo_qt_core_qcbormap_qcbormap_containsqlatin1stringview, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCborMap_QCborMap, containsQString, arginfo_qt_core_qcbormap_qcbormap_containsqstring, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCborMap_QCborMap, containsQCborValue, arginfo_qt_core_qcbormap_qcbormap_containsqcborvalue, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCborMap_QCborMap, compare, arginfo_qt_core_qcbormap_qcbormap_compare, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCborMap_QCborMap, empty_, arginfo_qt_core_qcbormap_qcbormap_empty_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCborMap_QCborMap, fromVariantMap, arginfo_qt_core_qcbormap_qcbormap_fromvariantmap, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCborMap_QCborMap, fromVariantHash, arginfo_qt_core_qcbormap_qcbormap_fromvarianthash, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCborMap_QCborMap, fromJsonObject, arginfo_qt_core_qcbormap_qcbormap_fromjsonobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCborMap_QCborMap, toVariantMap, arginfo_qt_core_qcbormap_qcbormap_tovariantmap, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCborMap_QCborMap, toVariantHash, arginfo_qt_core_qcbormap_qcbormap_tovarianthash, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCborMap_QCborMap, toJsonObject, arginfo_qt_core_qcbormap_qcbormap_tojsonobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
