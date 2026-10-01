
extern zend_class_entry *qt_core_qjsondocument_qjsondocument_ce;

ZEPHIR_INIT_CLASS(Qt_Core_QJsonDocument_QJsonDocument);

PHP_METHOD(Qt_Core_QJsonDocument_QJsonDocument, BinaryFormatTag);
PHP_METHOD(Qt_Core_QJsonDocument_QJsonDocument, new_);
PHP_METHOD(Qt_Core_QJsonDocument_QJsonDocument, newQJsonObject);
PHP_METHOD(Qt_Core_QJsonDocument_QJsonDocument, newQJsonArray);
PHP_METHOD(Qt_Core_QJsonDocument_QJsonDocument, newQJsonDocument);
PHP_METHOD(Qt_Core_QJsonDocument_QJsonDocument, swap);
PHP_METHOD(Qt_Core_QJsonDocument_QJsonDocument, fromVariant);
PHP_METHOD(Qt_Core_QJsonDocument_QJsonDocument, toVariant);
PHP_METHOD(Qt_Core_QJsonDocument_QJsonDocument, fromJson);
PHP_METHOD(Qt_Core_QJsonDocument_QJsonDocument, toJson);
PHP_METHOD(Qt_Core_QJsonDocument_QJsonDocument, isEmpty);
PHP_METHOD(Qt_Core_QJsonDocument_QJsonDocument, isArray);
PHP_METHOD(Qt_Core_QJsonDocument_QJsonDocument, isObject);
PHP_METHOD(Qt_Core_QJsonDocument_QJsonDocument, object_);
PHP_METHOD(Qt_Core_QJsonDocument_QJsonDocument, array_);
PHP_METHOD(Qt_Core_QJsonDocument_QJsonDocument, setObject);
PHP_METHOD(Qt_Core_QJsonDocument_QJsonDocument, setArray);
PHP_METHOD(Qt_Core_QJsonDocument_QJsonDocument, isNull);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qjsondocument_qjsondocument_binaryformattag, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qjsondocument_qjsondocument_new_, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qjsondocument_qjsondocument_newqjsonobject, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, object_, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qjsondocument_qjsondocument_newqjsonarray, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, array_, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qjsondocument_qjsondocument_newqjsondocument, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, other, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qjsondocument_qjsondocument_swap, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, other, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qjsondocument_qjsondocument_fromvariant, 0, 1, IS_LONG, 0)
	ZEND_ARG_INFO(0, variant)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_qt_core_qjsondocument_qjsondocument_tovariant, 0, 0, 1)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qjsondocument_qjsondocument_fromjson, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, json, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, error, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qjsondocument_qjsondocument_tojson, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_INFO(0, format)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qjsondocument_qjsondocument_isempty, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qjsondocument_qjsondocument_isarray, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qjsondocument_qjsondocument_isobject, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qjsondocument_qjsondocument_object_, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qjsondocument_qjsondocument_array_, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qjsondocument_qjsondocument_setobject, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, object_, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qjsondocument_qjsondocument_setarray, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, array_, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qjsondocument_qjsondocument_isnull, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_core_qjsondocument_qjsondocument_method_entry) {
	PHP_ME(Qt_Core_QJsonDocument_QJsonDocument, BinaryFormatTag, arginfo_qt_core_qjsondocument_qjsondocument_binaryformattag, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QJsonDocument_QJsonDocument, new_, arginfo_qt_core_qjsondocument_qjsondocument_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QJsonDocument_QJsonDocument, newQJsonObject, arginfo_qt_core_qjsondocument_qjsondocument_newqjsonobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QJsonDocument_QJsonDocument, newQJsonArray, arginfo_qt_core_qjsondocument_qjsondocument_newqjsonarray, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QJsonDocument_QJsonDocument, newQJsonDocument, arginfo_qt_core_qjsondocument_qjsondocument_newqjsondocument, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QJsonDocument_QJsonDocument, swap, arginfo_qt_core_qjsondocument_qjsondocument_swap, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QJsonDocument_QJsonDocument, fromVariant, arginfo_qt_core_qjsondocument_qjsondocument_fromvariant, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QJsonDocument_QJsonDocument, toVariant, arginfo_qt_core_qjsondocument_qjsondocument_tovariant, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QJsonDocument_QJsonDocument, fromJson, arginfo_qt_core_qjsondocument_qjsondocument_fromjson, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QJsonDocument_QJsonDocument, toJson, arginfo_qt_core_qjsondocument_qjsondocument_tojson, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QJsonDocument_QJsonDocument, isEmpty, arginfo_qt_core_qjsondocument_qjsondocument_isempty, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QJsonDocument_QJsonDocument, isArray, arginfo_qt_core_qjsondocument_qjsondocument_isarray, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QJsonDocument_QJsonDocument, isObject, arginfo_qt_core_qjsondocument_qjsondocument_isobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QJsonDocument_QJsonDocument, object_, arginfo_qt_core_qjsondocument_qjsondocument_object_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QJsonDocument_QJsonDocument, array_, arginfo_qt_core_qjsondocument_qjsondocument_array_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QJsonDocument_QJsonDocument, setObject, arginfo_qt_core_qjsondocument_qjsondocument_setobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QJsonDocument_QJsonDocument, setArray, arginfo_qt_core_qjsondocument_qjsondocument_setarray, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QJsonDocument_QJsonDocument, isNull, arginfo_qt_core_qjsondocument_qjsondocument_isnull, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
