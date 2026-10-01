
extern zend_class_entry *qt_core_qmetatype_qmetatype_ce;

ZEPHIR_INIT_CLASS(Qt_Core_QMetaType_QMetaType);

PHP_METHOD(Qt_Core_QMetaType_QMetaType, registerNormalizedTypedef);
PHP_METHOD(Qt_Core_QMetaType_QMetaType, type);
PHP_METHOD(Qt_Core_QMetaType_QMetaType, typeQByteArray);
PHP_METHOD(Qt_Core_QMetaType_QMetaType, typeName);
PHP_METHOD(Qt_Core_QMetaType_QMetaType, sizeOf);
PHP_METHOD(Qt_Core_QMetaType_QMetaType, typeFlags);
PHP_METHOD(Qt_Core_QMetaType_QMetaType, metaObjectForType);
PHP_METHOD(Qt_Core_QMetaType_QMetaType, isRegistered);
PHP_METHOD(Qt_Core_QMetaType_QMetaType, new_);
PHP_METHOD(Qt_Core_QMetaType_QMetaType, new2);
PHP_METHOD(Qt_Core_QMetaType_QMetaType, isValid);
PHP_METHOD(Qt_Core_QMetaType_QMetaType, isRegistered2);
PHP_METHOD(Qt_Core_QMetaType_QMetaType, registerType);
PHP_METHOD(Qt_Core_QMetaType_QMetaType, id);
PHP_METHOD(Qt_Core_QMetaType_QMetaType, sizeOf2);
PHP_METHOD(Qt_Core_QMetaType_QMetaType, alignOf);
PHP_METHOD(Qt_Core_QMetaType_QMetaType, flags);
PHP_METHOD(Qt_Core_QMetaType_QMetaType, name);
PHP_METHOD(Qt_Core_QMetaType_QMetaType, isDefaultConstructible);
PHP_METHOD(Qt_Core_QMetaType_QMetaType, isCopyConstructible);
PHP_METHOD(Qt_Core_QMetaType_QMetaType, isMoveConstructible);
PHP_METHOD(Qt_Core_QMetaType_QMetaType, isDestructible);
PHP_METHOD(Qt_Core_QMetaType_QMetaType, isEqualityComparable);
PHP_METHOD(Qt_Core_QMetaType_QMetaType, isOrdered);
PHP_METHOD(Qt_Core_QMetaType_QMetaType, hasRegisteredDataStreamOperators);
PHP_METHOD(Qt_Core_QMetaType_QMetaType, underlyingType);
PHP_METHOD(Qt_Core_QMetaType_QMetaType, fromName);
PHP_METHOD(Qt_Core_QMetaType_QMetaType, hasRegisteredDebugStreamOperator);
PHP_METHOD(Qt_Core_QMetaType_QMetaType, hasRegisteredDebugStreamOperatorInt);
PHP_METHOD(Qt_Core_QMetaType_QMetaType, canConvert);
PHP_METHOD(Qt_Core_QMetaType_QMetaType, canView);
PHP_METHOD(Qt_Core_QMetaType_QMetaType, hasRegisteredConverterFunction);
PHP_METHOD(Qt_Core_QMetaType_QMetaType, hasRegisteredMutableViewFunction);
PHP_METHOD(Qt_Core_QMetaType_QMetaType, unregisterConverterFunction);
PHP_METHOD(Qt_Core_QMetaType_QMetaType, unregisterMutableViewFunction);
PHP_METHOD(Qt_Core_QMetaType_QMetaType, unregisterMetaType);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qmetatype_qmetatype_registernormalizedtypedef, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, normalizedTypeName, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, type, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qmetatype_qmetatype_type, 0, 1, IS_LONG, 0)
	ZEND_ARG_INFO(0, typeName)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qmetatype_qmetatype_typeqbytearray, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, typeName, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_qt_core_qmetatype_qmetatype_typename, 0, 0, 1)
	ZEND_ARG_TYPE_INFO(0, type, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qmetatype_qmetatype_sizeof, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, type, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qmetatype_qmetatype_typeflags, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, type, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qmetatype_qmetatype_metaobjectfortype, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, type, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qmetatype_qmetatype_isregistered, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, type, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qmetatype_qmetatype_new_, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, type, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qmetatype_qmetatype_new2, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qmetatype_qmetatype_isvalid, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qmetatype_qmetatype_isregistered2, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qmetatype_qmetatype_registertype, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qmetatype_qmetatype_id, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qmetatype_qmetatype_sizeof2, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qmetatype_qmetatype_alignof, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qmetatype_qmetatype_flags, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_qt_core_qmetatype_qmetatype_name, 0, 0, 1)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qmetatype_qmetatype_isdefaultconstructible, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qmetatype_qmetatype_iscopyconstructible, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qmetatype_qmetatype_ismoveconstructible, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qmetatype_qmetatype_isdestructible, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qmetatype_qmetatype_isequalitycomparable, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qmetatype_qmetatype_isordered, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qmetatype_qmetatype_hasregistereddatastreamoperators, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qmetatype_qmetatype_underlyingtype, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qmetatype_qmetatype_fromname, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, name, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qmetatype_qmetatype_hasregistereddebugstreamoperator, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qmetatype_qmetatype_hasregistereddebugstreamoperatorint, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, typeId, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qmetatype_qmetatype_canconvert, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, fromType, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, toType, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qmetatype_qmetatype_canview, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, fromType, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, toType, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qmetatype_qmetatype_hasregisteredconverterfunction, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, fromType, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, toType, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qmetatype_qmetatype_hasregisteredmutableviewfunction, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, fromType, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, toType, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qmetatype_qmetatype_unregisterconverterfunction, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, from, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, to, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qmetatype_qmetatype_unregistermutableviewfunction, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, from, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, to, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qmetatype_qmetatype_unregistermetatype, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, type, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_core_qmetatype_qmetatype_method_entry) {
	PHP_ME(Qt_Core_QMetaType_QMetaType, registerNormalizedTypedef, arginfo_qt_core_qmetatype_qmetatype_registernormalizedtypedef, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QMetaType_QMetaType, type, arginfo_qt_core_qmetatype_qmetatype_type, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QMetaType_QMetaType, typeQByteArray, arginfo_qt_core_qmetatype_qmetatype_typeqbytearray, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QMetaType_QMetaType, typeName, arginfo_qt_core_qmetatype_qmetatype_typename, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QMetaType_QMetaType, sizeOf, arginfo_qt_core_qmetatype_qmetatype_sizeof, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QMetaType_QMetaType, typeFlags, arginfo_qt_core_qmetatype_qmetatype_typeflags, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QMetaType_QMetaType, metaObjectForType, arginfo_qt_core_qmetatype_qmetatype_metaobjectfortype, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QMetaType_QMetaType, isRegistered, arginfo_qt_core_qmetatype_qmetatype_isregistered, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QMetaType_QMetaType, new_, arginfo_qt_core_qmetatype_qmetatype_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QMetaType_QMetaType, new2, arginfo_qt_core_qmetatype_qmetatype_new2, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QMetaType_QMetaType, isValid, arginfo_qt_core_qmetatype_qmetatype_isvalid, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QMetaType_QMetaType, isRegistered2, arginfo_qt_core_qmetatype_qmetatype_isregistered2, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QMetaType_QMetaType, registerType, arginfo_qt_core_qmetatype_qmetatype_registertype, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QMetaType_QMetaType, id, arginfo_qt_core_qmetatype_qmetatype_id, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QMetaType_QMetaType, sizeOf2, arginfo_qt_core_qmetatype_qmetatype_sizeof2, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QMetaType_QMetaType, alignOf, arginfo_qt_core_qmetatype_qmetatype_alignof, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QMetaType_QMetaType, flags, arginfo_qt_core_qmetatype_qmetatype_flags, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QMetaType_QMetaType, name, arginfo_qt_core_qmetatype_qmetatype_name, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QMetaType_QMetaType, isDefaultConstructible, arginfo_qt_core_qmetatype_qmetatype_isdefaultconstructible, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QMetaType_QMetaType, isCopyConstructible, arginfo_qt_core_qmetatype_qmetatype_iscopyconstructible, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QMetaType_QMetaType, isMoveConstructible, arginfo_qt_core_qmetatype_qmetatype_ismoveconstructible, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QMetaType_QMetaType, isDestructible, arginfo_qt_core_qmetatype_qmetatype_isdestructible, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QMetaType_QMetaType, isEqualityComparable, arginfo_qt_core_qmetatype_qmetatype_isequalitycomparable, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QMetaType_QMetaType, isOrdered, arginfo_qt_core_qmetatype_qmetatype_isordered, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QMetaType_QMetaType, hasRegisteredDataStreamOperators, arginfo_qt_core_qmetatype_qmetatype_hasregistereddatastreamoperators, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QMetaType_QMetaType, underlyingType, arginfo_qt_core_qmetatype_qmetatype_underlyingtype, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QMetaType_QMetaType, fromName, arginfo_qt_core_qmetatype_qmetatype_fromname, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QMetaType_QMetaType, hasRegisteredDebugStreamOperator, arginfo_qt_core_qmetatype_qmetatype_hasregistereddebugstreamoperator, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QMetaType_QMetaType, hasRegisteredDebugStreamOperatorInt, arginfo_qt_core_qmetatype_qmetatype_hasregistereddebugstreamoperatorint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QMetaType_QMetaType, canConvert, arginfo_qt_core_qmetatype_qmetatype_canconvert, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QMetaType_QMetaType, canView, arginfo_qt_core_qmetatype_qmetatype_canview, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QMetaType_QMetaType, hasRegisteredConverterFunction, arginfo_qt_core_qmetatype_qmetatype_hasregisteredconverterfunction, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QMetaType_QMetaType, hasRegisteredMutableViewFunction, arginfo_qt_core_qmetatype_qmetatype_hasregisteredmutableviewfunction, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QMetaType_QMetaType, unregisterConverterFunction, arginfo_qt_core_qmetatype_qmetatype_unregisterconverterfunction, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QMetaType_QMetaType, unregisterMutableViewFunction, arginfo_qt_core_qmetatype_qmetatype_unregistermutableviewfunction, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QMetaType_QMetaType, unregisterMetaType, arginfo_qt_core_qmetatype_qmetatype_unregistermetatype, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
