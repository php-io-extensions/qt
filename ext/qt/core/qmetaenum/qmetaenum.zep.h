
extern zend_class_entry *qt_core_qmetaenum_qmetaenum_ce;

ZEPHIR_INIT_CLASS(Qt_Core_QMetaEnum_QMetaEnum);

PHP_METHOD(Qt_Core_QMetaEnum_QMetaEnum, new_);
PHP_METHOD(Qt_Core_QMetaEnum_QMetaEnum, name);
PHP_METHOD(Qt_Core_QMetaEnum_QMetaEnum, enumName);
PHP_METHOD(Qt_Core_QMetaEnum_QMetaEnum, metaType);
PHP_METHOD(Qt_Core_QMetaEnum_QMetaEnum, isFlag);
PHP_METHOD(Qt_Core_QMetaEnum_QMetaEnum, isScoped);
PHP_METHOD(Qt_Core_QMetaEnum_QMetaEnum, keyCount);
PHP_METHOD(Qt_Core_QMetaEnum_QMetaEnum, key);
PHP_METHOD(Qt_Core_QMetaEnum_QMetaEnum, value);
PHP_METHOD(Qt_Core_QMetaEnum_QMetaEnum, scope);
PHP_METHOD(Qt_Core_QMetaEnum_QMetaEnum, keyToValue);
PHP_METHOD(Qt_Core_QMetaEnum_QMetaEnum, valueToKey);
PHP_METHOD(Qt_Core_QMetaEnum_QMetaEnum, keysToValue);
PHP_METHOD(Qt_Core_QMetaEnum_QMetaEnum, valueToKeys);
PHP_METHOD(Qt_Core_QMetaEnum_QMetaEnum, enclosingMetaObject);
PHP_METHOD(Qt_Core_QMetaEnum_QMetaEnum, isValid);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qmetaenum_qmetaenum_new_, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_qt_core_qmetaenum_qmetaenum_name, 0, 0, 1)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_qt_core_qmetaenum_qmetaenum_enumname, 0, 0, 1)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qmetaenum_qmetaenum_metatype, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qmetaenum_qmetaenum_isflag, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qmetaenum_qmetaenum_isscoped, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qmetaenum_qmetaenum_keycount, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_qt_core_qmetaenum_qmetaenum_key, 0, 0, 2)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qmetaenum_qmetaenum_value, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_qt_core_qmetaenum_qmetaenum_scope, 0, 0, 1)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qmetaenum_qmetaenum_keytovalue, 0, 2, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_INFO(0, key)
	ZEND_ARG_INFO(0, ok)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_qt_core_qmetaenum_qmetaenum_valuetokey, 0, 0, 2)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qmetaenum_qmetaenum_keystovalue, 0, 2, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_INFO(0, keys)
	ZEND_ARG_INFO(0, ok)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qmetaenum_qmetaenum_valuetokeys, 0, 2, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qmetaenum_qmetaenum_enclosingmetaobject, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qmetaenum_qmetaenum_isvalid, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_core_qmetaenum_qmetaenum_method_entry) {
	PHP_ME(Qt_Core_QMetaEnum_QMetaEnum, new_, arginfo_qt_core_qmetaenum_qmetaenum_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QMetaEnum_QMetaEnum, name, arginfo_qt_core_qmetaenum_qmetaenum_name, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QMetaEnum_QMetaEnum, enumName, arginfo_qt_core_qmetaenum_qmetaenum_enumname, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QMetaEnum_QMetaEnum, metaType, arginfo_qt_core_qmetaenum_qmetaenum_metatype, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QMetaEnum_QMetaEnum, isFlag, arginfo_qt_core_qmetaenum_qmetaenum_isflag, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QMetaEnum_QMetaEnum, isScoped, arginfo_qt_core_qmetaenum_qmetaenum_isscoped, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QMetaEnum_QMetaEnum, keyCount, arginfo_qt_core_qmetaenum_qmetaenum_keycount, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QMetaEnum_QMetaEnum, key, arginfo_qt_core_qmetaenum_qmetaenum_key, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QMetaEnum_QMetaEnum, value, arginfo_qt_core_qmetaenum_qmetaenum_value, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QMetaEnum_QMetaEnum, scope, arginfo_qt_core_qmetaenum_qmetaenum_scope, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QMetaEnum_QMetaEnum, keyToValue, arginfo_qt_core_qmetaenum_qmetaenum_keytovalue, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QMetaEnum_QMetaEnum, valueToKey, arginfo_qt_core_qmetaenum_qmetaenum_valuetokey, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QMetaEnum_QMetaEnum, keysToValue, arginfo_qt_core_qmetaenum_qmetaenum_keystovalue, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QMetaEnum_QMetaEnum, valueToKeys, arginfo_qt_core_qmetaenum_qmetaenum_valuetokeys, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QMetaEnum_QMetaEnum, enclosingMetaObject, arginfo_qt_core_qmetaenum_qmetaenum_enclosingmetaobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QMetaEnum_QMetaEnum, isValid, arginfo_qt_core_qmetaenum_qmetaenum_isvalid, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
