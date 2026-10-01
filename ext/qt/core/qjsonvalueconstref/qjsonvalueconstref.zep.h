
extern zend_class_entry *qt_core_qjsonvalueconstref_qjsonvalueconstref_ce;

ZEPHIR_INIT_CLASS(Qt_Core_QJsonValueConstRef_QJsonValueConstRef);

PHP_METHOD(Qt_Core_QJsonValueConstRef_QJsonValueConstRef, new_);
PHP_METHOD(Qt_Core_QJsonValueConstRef_QJsonValueConstRef, toVariant);
PHP_METHOD(Qt_Core_QJsonValueConstRef_QJsonValueConstRef, type);
PHP_METHOD(Qt_Core_QJsonValueConstRef_QJsonValueConstRef, isNull);
PHP_METHOD(Qt_Core_QJsonValueConstRef_QJsonValueConstRef, isBool);
PHP_METHOD(Qt_Core_QJsonValueConstRef_QJsonValueConstRef, isDouble);
PHP_METHOD(Qt_Core_QJsonValueConstRef_QJsonValueConstRef, isString);
PHP_METHOD(Qt_Core_QJsonValueConstRef_QJsonValueConstRef, isArray);
PHP_METHOD(Qt_Core_QJsonValueConstRef_QJsonValueConstRef, isObject);
PHP_METHOD(Qt_Core_QJsonValueConstRef_QJsonValueConstRef, isUndefined);
PHP_METHOD(Qt_Core_QJsonValueConstRef_QJsonValueConstRef, toBool);
PHP_METHOD(Qt_Core_QJsonValueConstRef_QJsonValueConstRef, toInt);
PHP_METHOD(Qt_Core_QJsonValueConstRef_QJsonValueConstRef, toInteger);
PHP_METHOD(Qt_Core_QJsonValueConstRef_QJsonValueConstRef, toDouble);
PHP_METHOD(Qt_Core_QJsonValueConstRef_QJsonValueConstRef, toString);
PHP_METHOD(Qt_Core_QJsonValueConstRef_QJsonValueConstRef, toArray);
PHP_METHOD(Qt_Core_QJsonValueConstRef_QJsonValueConstRef, toObject);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qjsonvalueconstref_qjsonvalueconstref_new_, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_qt_core_qjsonvalueconstref_qjsonvalueconstref_tovariant, 0, 0, 1)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qjsonvalueconstref_qjsonvalueconstref_type, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qjsonvalueconstref_qjsonvalueconstref_isnull, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qjsonvalueconstref_qjsonvalueconstref_isbool, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qjsonvalueconstref_qjsonvalueconstref_isdouble, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qjsonvalueconstref_qjsonvalueconstref_isstring, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qjsonvalueconstref_qjsonvalueconstref_isarray, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qjsonvalueconstref_qjsonvalueconstref_isobject, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qjsonvalueconstref_qjsonvalueconstref_isundefined, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qjsonvalueconstref_qjsonvalueconstref_tobool, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, defaultValue, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qjsonvalueconstref_qjsonvalueconstref_toint, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, defaultValue, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qjsonvalueconstref_qjsonvalueconstref_tointeger, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, defaultValue, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qjsonvalueconstref_qjsonvalueconstref_todouble, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, defaultValue, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qjsonvalueconstref_qjsonvalueconstref_tostring, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, defaultValue, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qjsonvalueconstref_qjsonvalueconstref_toarray, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qjsonvalueconstref_qjsonvalueconstref_toobject, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_core_qjsonvalueconstref_qjsonvalueconstref_method_entry) {
	PHP_ME(Qt_Core_QJsonValueConstRef_QJsonValueConstRef, new_, arginfo_qt_core_qjsonvalueconstref_qjsonvalueconstref_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QJsonValueConstRef_QJsonValueConstRef, toVariant, arginfo_qt_core_qjsonvalueconstref_qjsonvalueconstref_tovariant, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QJsonValueConstRef_QJsonValueConstRef, type, arginfo_qt_core_qjsonvalueconstref_qjsonvalueconstref_type, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QJsonValueConstRef_QJsonValueConstRef, isNull, arginfo_qt_core_qjsonvalueconstref_qjsonvalueconstref_isnull, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QJsonValueConstRef_QJsonValueConstRef, isBool, arginfo_qt_core_qjsonvalueconstref_qjsonvalueconstref_isbool, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QJsonValueConstRef_QJsonValueConstRef, isDouble, arginfo_qt_core_qjsonvalueconstref_qjsonvalueconstref_isdouble, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QJsonValueConstRef_QJsonValueConstRef, isString, arginfo_qt_core_qjsonvalueconstref_qjsonvalueconstref_isstring, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QJsonValueConstRef_QJsonValueConstRef, isArray, arginfo_qt_core_qjsonvalueconstref_qjsonvalueconstref_isarray, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QJsonValueConstRef_QJsonValueConstRef, isObject, arginfo_qt_core_qjsonvalueconstref_qjsonvalueconstref_isobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QJsonValueConstRef_QJsonValueConstRef, isUndefined, arginfo_qt_core_qjsonvalueconstref_qjsonvalueconstref_isundefined, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QJsonValueConstRef_QJsonValueConstRef, toBool, arginfo_qt_core_qjsonvalueconstref_qjsonvalueconstref_tobool, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QJsonValueConstRef_QJsonValueConstRef, toInt, arginfo_qt_core_qjsonvalueconstref_qjsonvalueconstref_toint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QJsonValueConstRef_QJsonValueConstRef, toInteger, arginfo_qt_core_qjsonvalueconstref_qjsonvalueconstref_tointeger, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QJsonValueConstRef_QJsonValueConstRef, toDouble, arginfo_qt_core_qjsonvalueconstref_qjsonvalueconstref_todouble, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QJsonValueConstRef_QJsonValueConstRef, toString, arginfo_qt_core_qjsonvalueconstref_qjsonvalueconstref_tostring, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QJsonValueConstRef_QJsonValueConstRef, toArray, arginfo_qt_core_qjsonvalueconstref_qjsonvalueconstref_toarray, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QJsonValueConstRef_QJsonValueConstRef, toObject, arginfo_qt_core_qjsonvalueconstref_qjsonvalueconstref_toobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
