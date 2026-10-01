
extern zend_class_entry *qt_core_qjsonvalue_qjsonvalue_ce;

ZEPHIR_INIT_CLASS(Qt_Core_QJsonValue_QJsonValue);

PHP_METHOD(Qt_Core_QJsonValue_QJsonValue, new_);
PHP_METHOD(Qt_Core_QJsonValue_QJsonValue, newBool);
PHP_METHOD(Qt_Core_QJsonValue_QJsonValue, newDouble);
PHP_METHOD(Qt_Core_QJsonValue_QJsonValue, newInt);
PHP_METHOD(Qt_Core_QJsonValue_QJsonValue, newQint64);
PHP_METHOD(Qt_Core_QJsonValue_QJsonValue, newQString);
PHP_METHOD(Qt_Core_QJsonValue_QJsonValue, newQLatin1StringView);
PHP_METHOD(Qt_Core_QJsonValue_QJsonValue, newChar);
PHP_METHOD(Qt_Core_QJsonValue_QJsonValue, newQJsonArray);
PHP_METHOD(Qt_Core_QJsonValue_QJsonValue, newQJsonObject);
PHP_METHOD(Qt_Core_QJsonValue_QJsonValue, newQJsonValue);
PHP_METHOD(Qt_Core_QJsonValue_QJsonValue, swap);
PHP_METHOD(Qt_Core_QJsonValue_QJsonValue, fromVariant);
PHP_METHOD(Qt_Core_QJsonValue_QJsonValue, toVariant);
PHP_METHOD(Qt_Core_QJsonValue_QJsonValue, type);
PHP_METHOD(Qt_Core_QJsonValue_QJsonValue, isNull);
PHP_METHOD(Qt_Core_QJsonValue_QJsonValue, isBool);
PHP_METHOD(Qt_Core_QJsonValue_QJsonValue, isDouble);
PHP_METHOD(Qt_Core_QJsonValue_QJsonValue, isString);
PHP_METHOD(Qt_Core_QJsonValue_QJsonValue, isArray);
PHP_METHOD(Qt_Core_QJsonValue_QJsonValue, isObject);
PHP_METHOD(Qt_Core_QJsonValue_QJsonValue, isUndefined);
PHP_METHOD(Qt_Core_QJsonValue_QJsonValue, toBool);
PHP_METHOD(Qt_Core_QJsonValue_QJsonValue, toInt);
PHP_METHOD(Qt_Core_QJsonValue_QJsonValue, toInteger);
PHP_METHOD(Qt_Core_QJsonValue_QJsonValue, toDouble);
PHP_METHOD(Qt_Core_QJsonValue_QJsonValue, toString);
PHP_METHOD(Qt_Core_QJsonValue_QJsonValue, toStringQString);
PHP_METHOD(Qt_Core_QJsonValue_QJsonValue, toArray);
PHP_METHOD(Qt_Core_QJsonValue_QJsonValue, toArrayQJsonArray);
PHP_METHOD(Qt_Core_QJsonValue_QJsonValue, toObject);
PHP_METHOD(Qt_Core_QJsonValue_QJsonValue, toObjectQJsonObject);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qjsonvalue_qjsonvalue_new_, 0, 0, IS_LONG, 0)
	ZEND_ARG_INFO(0, arg0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qjsonvalue_qjsonvalue_newbool, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, b, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qjsonvalue_qjsonvalue_newdouble, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, n, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qjsonvalue_qjsonvalue_newint, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, n, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qjsonvalue_qjsonvalue_newqint64, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, v, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qjsonvalue_qjsonvalue_newqstring, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, s, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qjsonvalue_qjsonvalue_newqlatin1stringview, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, s, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qjsonvalue_qjsonvalue_newchar, 0, 1, IS_LONG, 0)
	ZEND_ARG_INFO(0, s)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qjsonvalue_qjsonvalue_newqjsonarray, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, a, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qjsonvalue_qjsonvalue_newqjsonobject, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, o, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qjsonvalue_qjsonvalue_newqjsonvalue, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, other, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qjsonvalue_qjsonvalue_swap, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, other, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qjsonvalue_qjsonvalue_fromvariant, 0, 1, IS_LONG, 0)
	ZEND_ARG_INFO(0, variant)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_qt_core_qjsonvalue_qjsonvalue_tovariant, 0, 0, 1)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qjsonvalue_qjsonvalue_type, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qjsonvalue_qjsonvalue_isnull, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qjsonvalue_qjsonvalue_isbool, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qjsonvalue_qjsonvalue_isdouble, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qjsonvalue_qjsonvalue_isstring, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qjsonvalue_qjsonvalue_isarray, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qjsonvalue_qjsonvalue_isobject, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qjsonvalue_qjsonvalue_isundefined, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qjsonvalue_qjsonvalue_tobool, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, defaultValue, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qjsonvalue_qjsonvalue_toint, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, defaultValue, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qjsonvalue_qjsonvalue_tointeger, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, defaultValue, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qjsonvalue_qjsonvalue_todouble, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, defaultValue, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qjsonvalue_qjsonvalue_tostring, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qjsonvalue_qjsonvalue_tostringqstring, 0, 2, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, defaultValue, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qjsonvalue_qjsonvalue_toarray, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qjsonvalue_qjsonvalue_toarrayqjsonarray, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, defaultValue, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qjsonvalue_qjsonvalue_toobject, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qjsonvalue_qjsonvalue_toobjectqjsonobject, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, defaultValue, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_core_qjsonvalue_qjsonvalue_method_entry) {
	PHP_ME(Qt_Core_QJsonValue_QJsonValue, new_, arginfo_qt_core_qjsonvalue_qjsonvalue_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QJsonValue_QJsonValue, newBool, arginfo_qt_core_qjsonvalue_qjsonvalue_newbool, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QJsonValue_QJsonValue, newDouble, arginfo_qt_core_qjsonvalue_qjsonvalue_newdouble, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QJsonValue_QJsonValue, newInt, arginfo_qt_core_qjsonvalue_qjsonvalue_newint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QJsonValue_QJsonValue, newQint64, arginfo_qt_core_qjsonvalue_qjsonvalue_newqint64, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QJsonValue_QJsonValue, newQString, arginfo_qt_core_qjsonvalue_qjsonvalue_newqstring, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QJsonValue_QJsonValue, newQLatin1StringView, arginfo_qt_core_qjsonvalue_qjsonvalue_newqlatin1stringview, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QJsonValue_QJsonValue, newChar, arginfo_qt_core_qjsonvalue_qjsonvalue_newchar, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QJsonValue_QJsonValue, newQJsonArray, arginfo_qt_core_qjsonvalue_qjsonvalue_newqjsonarray, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QJsonValue_QJsonValue, newQJsonObject, arginfo_qt_core_qjsonvalue_qjsonvalue_newqjsonobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QJsonValue_QJsonValue, newQJsonValue, arginfo_qt_core_qjsonvalue_qjsonvalue_newqjsonvalue, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QJsonValue_QJsonValue, swap, arginfo_qt_core_qjsonvalue_qjsonvalue_swap, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QJsonValue_QJsonValue, fromVariant, arginfo_qt_core_qjsonvalue_qjsonvalue_fromvariant, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QJsonValue_QJsonValue, toVariant, arginfo_qt_core_qjsonvalue_qjsonvalue_tovariant, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QJsonValue_QJsonValue, type, arginfo_qt_core_qjsonvalue_qjsonvalue_type, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QJsonValue_QJsonValue, isNull, arginfo_qt_core_qjsonvalue_qjsonvalue_isnull, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QJsonValue_QJsonValue, isBool, arginfo_qt_core_qjsonvalue_qjsonvalue_isbool, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QJsonValue_QJsonValue, isDouble, arginfo_qt_core_qjsonvalue_qjsonvalue_isdouble, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QJsonValue_QJsonValue, isString, arginfo_qt_core_qjsonvalue_qjsonvalue_isstring, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QJsonValue_QJsonValue, isArray, arginfo_qt_core_qjsonvalue_qjsonvalue_isarray, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QJsonValue_QJsonValue, isObject, arginfo_qt_core_qjsonvalue_qjsonvalue_isobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QJsonValue_QJsonValue, isUndefined, arginfo_qt_core_qjsonvalue_qjsonvalue_isundefined, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QJsonValue_QJsonValue, toBool, arginfo_qt_core_qjsonvalue_qjsonvalue_tobool, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QJsonValue_QJsonValue, toInt, arginfo_qt_core_qjsonvalue_qjsonvalue_toint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QJsonValue_QJsonValue, toInteger, arginfo_qt_core_qjsonvalue_qjsonvalue_tointeger, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QJsonValue_QJsonValue, toDouble, arginfo_qt_core_qjsonvalue_qjsonvalue_todouble, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QJsonValue_QJsonValue, toString, arginfo_qt_core_qjsonvalue_qjsonvalue_tostring, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QJsonValue_QJsonValue, toStringQString, arginfo_qt_core_qjsonvalue_qjsonvalue_tostringqstring, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QJsonValue_QJsonValue, toArray, arginfo_qt_core_qjsonvalue_qjsonvalue_toarray, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QJsonValue_QJsonValue, toArrayQJsonArray, arginfo_qt_core_qjsonvalue_qjsonvalue_toarrayqjsonarray, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QJsonValue_QJsonValue, toObject, arginfo_qt_core_qjsonvalue_qjsonvalue_toobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QJsonValue_QJsonValue, toObjectQJsonObject, arginfo_qt_core_qjsonvalue_qjsonvalue_toobjectqjsonobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
