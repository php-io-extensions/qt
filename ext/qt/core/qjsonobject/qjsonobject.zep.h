
extern zend_class_entry *qt_core_qjsonobject_qjsonobject_ce;

ZEPHIR_INIT_CLASS(Qt_Core_QJsonObject_QJsonObject);

PHP_METHOD(Qt_Core_QJsonObject_QJsonObject, new_);
PHP_METHOD(Qt_Core_QJsonObject_QJsonObject, newQJsonObject);
PHP_METHOD(Qt_Core_QJsonObject_QJsonObject, swap);
PHP_METHOD(Qt_Core_QJsonObject_QJsonObject, fromVariantMap);
PHP_METHOD(Qt_Core_QJsonObject_QJsonObject, toVariantMap);
PHP_METHOD(Qt_Core_QJsonObject_QJsonObject, fromVariantHash);
PHP_METHOD(Qt_Core_QJsonObject_QJsonObject, toVariantHash);
PHP_METHOD(Qt_Core_QJsonObject_QJsonObject, keys);
PHP_METHOD(Qt_Core_QJsonObject_QJsonObject, size);
PHP_METHOD(Qt_Core_QJsonObject_QJsonObject, count);
PHP_METHOD(Qt_Core_QJsonObject_QJsonObject, length);
PHP_METHOD(Qt_Core_QJsonObject_QJsonObject, isEmpty);
PHP_METHOD(Qt_Core_QJsonObject_QJsonObject, value);
PHP_METHOD(Qt_Core_QJsonObject_QJsonObject, valueQStringView);
PHP_METHOD(Qt_Core_QJsonObject_QJsonObject, valueQLatin1StringView);
PHP_METHOD(Qt_Core_QJsonObject_QJsonObject, remove);
PHP_METHOD(Qt_Core_QJsonObject_QJsonObject, take);
PHP_METHOD(Qt_Core_QJsonObject_QJsonObject, contains);
PHP_METHOD(Qt_Core_QJsonObject_QJsonObject, removeQStringView);
PHP_METHOD(Qt_Core_QJsonObject_QJsonObject, removeQLatin1StringView);
PHP_METHOD(Qt_Core_QJsonObject_QJsonObject, takeQStringView);
PHP_METHOD(Qt_Core_QJsonObject_QJsonObject, takeQLatin1StringView);
PHP_METHOD(Qt_Core_QJsonObject_QJsonObject, containsQStringView);
PHP_METHOD(Qt_Core_QJsonObject_QJsonObject, containsQLatin1StringView);
PHP_METHOD(Qt_Core_QJsonObject_QJsonObject, empty_);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qjsonobject_qjsonobject_new_, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qjsonobject_qjsonobject_newqjsonobject, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, other, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qjsonobject_qjsonobject_swap, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, other, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qjsonobject_qjsonobject_fromvariantmap, 0, 1, IS_LONG, 0)
	ZEND_ARG_ARRAY_INFO(0, map, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qjsonobject_qjsonobject_tovariantmap, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qjsonobject_qjsonobject_fromvarianthash, 0, 1, IS_LONG, 0)
	ZEND_ARG_ARRAY_INFO(0, map, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qjsonobject_qjsonobject_tovarianthash, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qjsonobject_qjsonobject_keys, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qjsonobject_qjsonobject_size, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qjsonobject_qjsonobject_count, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qjsonobject_qjsonobject_length, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qjsonobject_qjsonobject_isempty, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qjsonobject_qjsonobject_value, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, key, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qjsonobject_qjsonobject_valueqstringview, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, key, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qjsonobject_qjsonobject_valueqlatin1stringview, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, key, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qjsonobject_qjsonobject_remove, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, key, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qjsonobject_qjsonobject_take, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, key, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qjsonobject_qjsonobject_contains, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, key, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qjsonobject_qjsonobject_removeqstringview, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, key, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qjsonobject_qjsonobject_removeqlatin1stringview, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, key, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qjsonobject_qjsonobject_takeqstringview, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, key, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qjsonobject_qjsonobject_takeqlatin1stringview, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, key, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qjsonobject_qjsonobject_containsqstringview, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, key, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qjsonobject_qjsonobject_containsqlatin1stringview, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, key, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qjsonobject_qjsonobject_empty_, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_core_qjsonobject_qjsonobject_method_entry) {
	PHP_ME(Qt_Core_QJsonObject_QJsonObject, new_, arginfo_qt_core_qjsonobject_qjsonobject_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QJsonObject_QJsonObject, newQJsonObject, arginfo_qt_core_qjsonobject_qjsonobject_newqjsonobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QJsonObject_QJsonObject, swap, arginfo_qt_core_qjsonobject_qjsonobject_swap, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QJsonObject_QJsonObject, fromVariantMap, arginfo_qt_core_qjsonobject_qjsonobject_fromvariantmap, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QJsonObject_QJsonObject, toVariantMap, arginfo_qt_core_qjsonobject_qjsonobject_tovariantmap, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QJsonObject_QJsonObject, fromVariantHash, arginfo_qt_core_qjsonobject_qjsonobject_fromvarianthash, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QJsonObject_QJsonObject, toVariantHash, arginfo_qt_core_qjsonobject_qjsonobject_tovarianthash, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QJsonObject_QJsonObject, keys, arginfo_qt_core_qjsonobject_qjsonobject_keys, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QJsonObject_QJsonObject, size, arginfo_qt_core_qjsonobject_qjsonobject_size, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QJsonObject_QJsonObject, count, arginfo_qt_core_qjsonobject_qjsonobject_count, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QJsonObject_QJsonObject, length, arginfo_qt_core_qjsonobject_qjsonobject_length, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QJsonObject_QJsonObject, isEmpty, arginfo_qt_core_qjsonobject_qjsonobject_isempty, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QJsonObject_QJsonObject, value, arginfo_qt_core_qjsonobject_qjsonobject_value, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QJsonObject_QJsonObject, valueQStringView, arginfo_qt_core_qjsonobject_qjsonobject_valueqstringview, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QJsonObject_QJsonObject, valueQLatin1StringView, arginfo_qt_core_qjsonobject_qjsonobject_valueqlatin1stringview, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QJsonObject_QJsonObject, remove, arginfo_qt_core_qjsonobject_qjsonobject_remove, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QJsonObject_QJsonObject, take, arginfo_qt_core_qjsonobject_qjsonobject_take, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QJsonObject_QJsonObject, contains, arginfo_qt_core_qjsonobject_qjsonobject_contains, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QJsonObject_QJsonObject, removeQStringView, arginfo_qt_core_qjsonobject_qjsonobject_removeqstringview, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QJsonObject_QJsonObject, removeQLatin1StringView, arginfo_qt_core_qjsonobject_qjsonobject_removeqlatin1stringview, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QJsonObject_QJsonObject, takeQStringView, arginfo_qt_core_qjsonobject_qjsonobject_takeqstringview, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QJsonObject_QJsonObject, takeQLatin1StringView, arginfo_qt_core_qjsonobject_qjsonobject_takeqlatin1stringview, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QJsonObject_QJsonObject, containsQStringView, arginfo_qt_core_qjsonobject_qjsonobject_containsqstringview, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QJsonObject_QJsonObject, containsQLatin1StringView, arginfo_qt_core_qjsonobject_qjsonobject_containsqlatin1stringview, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QJsonObject_QJsonObject, empty_, arginfo_qt_core_qjsonobject_qjsonobject_empty_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
