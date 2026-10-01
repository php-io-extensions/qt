
extern zend_class_entry *qt_core_qjsonvalueref_qjsonvalueref_ce;

ZEPHIR_INIT_CLASS(Qt_Core_QJsonValueRef_QJsonValueRef);

PHP_METHOD(Qt_Core_QJsonValueRef_QJsonValueRef, new_);
PHP_METHOD(Qt_Core_QJsonValueRef_QJsonValueRef, newQJsonArrayQsizetype);
PHP_METHOD(Qt_Core_QJsonValueRef_QJsonValueRef, newQJsonObjectQsizetype);
PHP_METHOD(Qt_Core_QJsonValueRef_QJsonValueRef, toVariant);
PHP_METHOD(Qt_Core_QJsonValueRef_QJsonValueRef, type);
PHP_METHOD(Qt_Core_QJsonValueRef_QJsonValueRef, isNull);
PHP_METHOD(Qt_Core_QJsonValueRef_QJsonValueRef, isBool);
PHP_METHOD(Qt_Core_QJsonValueRef_QJsonValueRef, isDouble);
PHP_METHOD(Qt_Core_QJsonValueRef_QJsonValueRef, isString);
PHP_METHOD(Qt_Core_QJsonValueRef_QJsonValueRef, isArray);
PHP_METHOD(Qt_Core_QJsonValueRef_QJsonValueRef, isObject);
PHP_METHOD(Qt_Core_QJsonValueRef_QJsonValueRef, isUndefined);
PHP_METHOD(Qt_Core_QJsonValueRef_QJsonValueRef, toBool);
PHP_METHOD(Qt_Core_QJsonValueRef_QJsonValueRef, toInt);
PHP_METHOD(Qt_Core_QJsonValueRef_QJsonValueRef, toInteger);
PHP_METHOD(Qt_Core_QJsonValueRef_QJsonValueRef, toDouble);
PHP_METHOD(Qt_Core_QJsonValueRef_QJsonValueRef, toString);
PHP_METHOD(Qt_Core_QJsonValueRef_QJsonValueRef, toArray);
PHP_METHOD(Qt_Core_QJsonValueRef_QJsonValueRef, toObject);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qjsonvalueref_qjsonvalueref_new_, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qjsonvalueref_qjsonvalueref_newqjsonarrayqsizetype, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, array_, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, idx, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qjsonvalueref_qjsonvalueref_newqjsonobjectqsizetype, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, object_, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, idx, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_qt_core_qjsonvalueref_qjsonvalueref_tovariant, 0, 0, 1)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qjsonvalueref_qjsonvalueref_type, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qjsonvalueref_qjsonvalueref_isnull, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qjsonvalueref_qjsonvalueref_isbool, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qjsonvalueref_qjsonvalueref_isdouble, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qjsonvalueref_qjsonvalueref_isstring, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qjsonvalueref_qjsonvalueref_isarray, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qjsonvalueref_qjsonvalueref_isobject, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qjsonvalueref_qjsonvalueref_isundefined, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qjsonvalueref_qjsonvalueref_tobool, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, defaultValue, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qjsonvalueref_qjsonvalueref_toint, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, defaultValue, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qjsonvalueref_qjsonvalueref_tointeger, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, defaultValue, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qjsonvalueref_qjsonvalueref_todouble, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, defaultValue, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qjsonvalueref_qjsonvalueref_tostring, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, defaultValue, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qjsonvalueref_qjsonvalueref_toarray, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qjsonvalueref_qjsonvalueref_toobject, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_core_qjsonvalueref_qjsonvalueref_method_entry) {
	PHP_ME(Qt_Core_QJsonValueRef_QJsonValueRef, new_, arginfo_qt_core_qjsonvalueref_qjsonvalueref_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QJsonValueRef_QJsonValueRef, newQJsonArrayQsizetype, arginfo_qt_core_qjsonvalueref_qjsonvalueref_newqjsonarrayqsizetype, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QJsonValueRef_QJsonValueRef, newQJsonObjectQsizetype, arginfo_qt_core_qjsonvalueref_qjsonvalueref_newqjsonobjectqsizetype, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QJsonValueRef_QJsonValueRef, toVariant, arginfo_qt_core_qjsonvalueref_qjsonvalueref_tovariant, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QJsonValueRef_QJsonValueRef, type, arginfo_qt_core_qjsonvalueref_qjsonvalueref_type, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QJsonValueRef_QJsonValueRef, isNull, arginfo_qt_core_qjsonvalueref_qjsonvalueref_isnull, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QJsonValueRef_QJsonValueRef, isBool, arginfo_qt_core_qjsonvalueref_qjsonvalueref_isbool, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QJsonValueRef_QJsonValueRef, isDouble, arginfo_qt_core_qjsonvalueref_qjsonvalueref_isdouble, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QJsonValueRef_QJsonValueRef, isString, arginfo_qt_core_qjsonvalueref_qjsonvalueref_isstring, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QJsonValueRef_QJsonValueRef, isArray, arginfo_qt_core_qjsonvalueref_qjsonvalueref_isarray, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QJsonValueRef_QJsonValueRef, isObject, arginfo_qt_core_qjsonvalueref_qjsonvalueref_isobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QJsonValueRef_QJsonValueRef, isUndefined, arginfo_qt_core_qjsonvalueref_qjsonvalueref_isundefined, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QJsonValueRef_QJsonValueRef, toBool, arginfo_qt_core_qjsonvalueref_qjsonvalueref_tobool, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QJsonValueRef_QJsonValueRef, toInt, arginfo_qt_core_qjsonvalueref_qjsonvalueref_toint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QJsonValueRef_QJsonValueRef, toInteger, arginfo_qt_core_qjsonvalueref_qjsonvalueref_tointeger, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QJsonValueRef_QJsonValueRef, toDouble, arginfo_qt_core_qjsonvalueref_qjsonvalueref_todouble, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QJsonValueRef_QJsonValueRef, toString, arginfo_qt_core_qjsonvalueref_qjsonvalueref_tostring, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QJsonValueRef_QJsonValueRef, toArray, arginfo_qt_core_qjsonvalueref_qjsonvalueref_toarray, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QJsonValueRef_QJsonValueRef, toObject, arginfo_qt_core_qjsonvalueref_qjsonvalueref_toobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
