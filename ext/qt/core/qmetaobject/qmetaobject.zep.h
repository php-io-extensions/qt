
extern zend_class_entry *qt_core_qmetaobject_qmetaobject_ce;

ZEPHIR_INIT_CLASS(Qt_Core_QMetaObject_QMetaObject);

PHP_METHOD(Qt_Core_QMetaObject_QMetaObject, className);
PHP_METHOD(Qt_Core_QMetaObject_QMetaObject, superClass);
PHP_METHOD(Qt_Core_QMetaObject_QMetaObject, inherits);
PHP_METHOD(Qt_Core_QMetaObject_QMetaObject, cast);
PHP_METHOD(Qt_Core_QMetaObject_QMetaObject, tr);
PHP_METHOD(Qt_Core_QMetaObject_QMetaObject, metaType);
PHP_METHOD(Qt_Core_QMetaObject_QMetaObject, methodOffset);
PHP_METHOD(Qt_Core_QMetaObject_QMetaObject, enumeratorOffset);
PHP_METHOD(Qt_Core_QMetaObject_QMetaObject, propertyOffset);
PHP_METHOD(Qt_Core_QMetaObject_QMetaObject, classInfoOffset);
PHP_METHOD(Qt_Core_QMetaObject_QMetaObject, constructorCount);
PHP_METHOD(Qt_Core_QMetaObject_QMetaObject, methodCount);
PHP_METHOD(Qt_Core_QMetaObject_QMetaObject, enumeratorCount);
PHP_METHOD(Qt_Core_QMetaObject_QMetaObject, propertyCount);
PHP_METHOD(Qt_Core_QMetaObject_QMetaObject, classInfoCount);
PHP_METHOD(Qt_Core_QMetaObject_QMetaObject, indexOfConstructor);
PHP_METHOD(Qt_Core_QMetaObject_QMetaObject, indexOfMethod);
PHP_METHOD(Qt_Core_QMetaObject_QMetaObject, indexOfSignal);
PHP_METHOD(Qt_Core_QMetaObject_QMetaObject, indexOfSlot);
PHP_METHOD(Qt_Core_QMetaObject_QMetaObject, indexOfEnumerator);
PHP_METHOD(Qt_Core_QMetaObject_QMetaObject, indexOfProperty);
PHP_METHOD(Qt_Core_QMetaObject_QMetaObject, indexOfClassInfo);
PHP_METHOD(Qt_Core_QMetaObject_QMetaObject, constructor);
PHP_METHOD(Qt_Core_QMetaObject_QMetaObject, method);
PHP_METHOD(Qt_Core_QMetaObject_QMetaObject, enumerator);
PHP_METHOD(Qt_Core_QMetaObject_QMetaObject, property);
PHP_METHOD(Qt_Core_QMetaObject_QMetaObject, classInfo);
PHP_METHOD(Qt_Core_QMetaObject_QMetaObject, userProperty);
PHP_METHOD(Qt_Core_QMetaObject_QMetaObject, checkConnectArgs);
PHP_METHOD(Qt_Core_QMetaObject_QMetaObject, checkConnectArgsQMetaMethodQMetaMethod);
PHP_METHOD(Qt_Core_QMetaObject_QMetaObject, normalizedSignature);
PHP_METHOD(Qt_Core_QMetaObject_QMetaObject, normalizedType);
PHP_METHOD(Qt_Core_QMetaObject_QMetaObject, connect);
PHP_METHOD(Qt_Core_QMetaObject_QMetaObject, disconnect);
PHP_METHOD(Qt_Core_QMetaObject_QMetaObject, disconnectOne);
PHP_METHOD(Qt_Core_QMetaObject_QMetaObject, connectSlotsByName);
PHP_METHOD(Qt_Core_QMetaObject_QMetaObject, invokeMethod);
PHP_METHOD(Qt_Core_QMetaObject_QMetaObject, invokeMethodQObjectCharQGenericReturnArgumentQGenericArgumentQGenericArgumentQGenericArgumentQGenericArgumentQGenericArgumentQGenericArgumentQGenericArgumentQGenericArgumentQGenericArgumentQGenericArgument);
PHP_METHOD(Qt_Core_QMetaObject_QMetaObject, invokeMethodQObjectCharQtConnectionTypeQGenericArgumentQGenericArgumentQGenericArgumentQGenericArgumentQGenericArgumentQGenericArgumentQGenericArgumentQGenericArgumentQGenericArgumentQGenericArgument);
PHP_METHOD(Qt_Core_QMetaObject_QMetaObject, invokeMethodQObjectCharQGenericArgumentQGenericArgumentQGenericArgumentQGenericArgumentQGenericArgumentQGenericArgumentQGenericArgumentQGenericArgumentQGenericArgumentQGenericArgument);
PHP_METHOD(Qt_Core_QMetaObject_QMetaObject, newInstance);
PHP_METHOD(Qt_Core_QMetaObject_QMetaObject, d);
PHP_METHOD(Qt_Core_QMetaObject_QMetaObject, setD);

ZEND_BEGIN_ARG_INFO_EX(arginfo_qt_core_qmetaobject_qmetaobject_classname, 0, 0, 1)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qmetaobject_qmetaobject_superclass, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qmetaobject_qmetaobject_inherits, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, metaObject, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qmetaobject_qmetaobject_cast, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, obj, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qmetaobject_qmetaobject_tr, 0, 3, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_INFO(0, s)
	ZEND_ARG_INFO(0, c)
	ZEND_ARG_TYPE_INFO(0, n, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qmetaobject_qmetaobject_metatype, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qmetaobject_qmetaobject_methodoffset, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qmetaobject_qmetaobject_enumeratoroffset, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qmetaobject_qmetaobject_propertyoffset, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qmetaobject_qmetaobject_classinfooffset, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qmetaobject_qmetaobject_constructorcount, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qmetaobject_qmetaobject_methodcount, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qmetaobject_qmetaobject_enumeratorcount, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qmetaobject_qmetaobject_propertycount, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qmetaobject_qmetaobject_classinfocount, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qmetaobject_qmetaobject_indexofconstructor, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_INFO(0, constructor)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qmetaobject_qmetaobject_indexofmethod, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_INFO(0, method)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qmetaobject_qmetaobject_indexofsignal, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_INFO(0, signal)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qmetaobject_qmetaobject_indexofslot, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_INFO(0, slot)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qmetaobject_qmetaobject_indexofenumerator, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_INFO(0, name)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qmetaobject_qmetaobject_indexofproperty, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_INFO(0, name)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qmetaobject_qmetaobject_indexofclassinfo, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_INFO(0, name)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qmetaobject_qmetaobject_constructor, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qmetaobject_qmetaobject_method, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qmetaobject_qmetaobject_enumerator, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qmetaobject_qmetaobject_property, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qmetaobject_qmetaobject_classinfo, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qmetaobject_qmetaobject_userproperty, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qmetaobject_qmetaobject_checkconnectargs, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_INFO(0, signal)
	ZEND_ARG_INFO(0, method)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qmetaobject_qmetaobject_checkconnectargsqmetamethodqmetamethod, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, signal, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, method, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qmetaobject_qmetaobject_normalizedsignature, 0, 1, IS_STRING, 0)
	ZEND_ARG_INFO(0, method)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qmetaobject_qmetaobject_normalizedtype, 0, 1, IS_STRING, 0)
	ZEND_ARG_INFO(0, type)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qmetaobject_qmetaobject_connect, 0, 4, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, sender, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, signal_index, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, receiver, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, method_index, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, type, IS_LONG, 0)
	ZEND_ARG_INFO(0, types)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qmetaobject_qmetaobject_disconnect, 0, 4, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, sender, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, signal_index, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, receiver, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, method_index, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qmetaobject_qmetaobject_disconnectone, 0, 4, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, sender, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, signal_index, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, receiver, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, method_index, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qmetaobject_qmetaobject_connectslotsbyname, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, o, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qmetaobject_qmetaobject_invokemethod, 0, 4, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, obj, IS_LONG, 0)
	ZEND_ARG_INFO(0, member)
	ZEND_ARG_TYPE_INFO(0, arg2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, ret, IS_LONG, 0)
	ZEND_ARG_INFO(0, val0)
	ZEND_ARG_INFO(0, val1)
	ZEND_ARG_INFO(0, val2)
	ZEND_ARG_INFO(0, val3)
	ZEND_ARG_INFO(0, val4)
	ZEND_ARG_INFO(0, val5)
	ZEND_ARG_INFO(0, val6)
	ZEND_ARG_INFO(0, val7)
	ZEND_ARG_INFO(0, val8)
	ZEND_ARG_INFO(0, val9)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qmetaobject_qmetaobject_invokemethodqobjectcharqgenericreturnargumentqgenericargumentqgenericargumentqgenericargumentqgenericargumentqgenericargumentqgenericargumentqgenericargumentqgenericargumentqgenericargumentqgenericargument, 0, 3, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, obj, IS_LONG, 0)
	ZEND_ARG_INFO(0, member)
	ZEND_ARG_TYPE_INFO(0, ret, IS_LONG, 0)
	ZEND_ARG_INFO(0, val0)
	ZEND_ARG_INFO(0, val1)
	ZEND_ARG_INFO(0, val2)
	ZEND_ARG_INFO(0, val3)
	ZEND_ARG_INFO(0, val4)
	ZEND_ARG_INFO(0, val5)
	ZEND_ARG_INFO(0, val6)
	ZEND_ARG_INFO(0, val7)
	ZEND_ARG_INFO(0, val8)
	ZEND_ARG_INFO(0, val9)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qmetaobject_qmetaobject_invokemethodqobjectcharqtconnectiontypeqgenericargumentqgenericargumentqgenericargumentqgenericargumentqgenericargumentqgenericargumentqgenericargumentqgenericargumentqgenericargumentqgenericargument, 0, 4, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, obj, IS_LONG, 0)
	ZEND_ARG_INFO(0, member)
	ZEND_ARG_TYPE_INFO(0, type, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, val0, IS_LONG, 0)
	ZEND_ARG_INFO(0, val1)
	ZEND_ARG_INFO(0, val2)
	ZEND_ARG_INFO(0, val3)
	ZEND_ARG_INFO(0, val4)
	ZEND_ARG_INFO(0, val5)
	ZEND_ARG_INFO(0, val6)
	ZEND_ARG_INFO(0, val7)
	ZEND_ARG_INFO(0, val8)
	ZEND_ARG_INFO(0, val9)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qmetaobject_qmetaobject_invokemethodqobjectcharqgenericargumentqgenericargumentqgenericargumentqgenericargumentqgenericargumentqgenericargumentqgenericargumentqgenericargumentqgenericargumentqgenericargument, 0, 3, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, obj, IS_LONG, 0)
	ZEND_ARG_INFO(0, member)
	ZEND_ARG_TYPE_INFO(0, val0, IS_LONG, 0)
	ZEND_ARG_INFO(0, val1)
	ZEND_ARG_INFO(0, val2)
	ZEND_ARG_INFO(0, val3)
	ZEND_ARG_INFO(0, val4)
	ZEND_ARG_INFO(0, val5)
	ZEND_ARG_INFO(0, val6)
	ZEND_ARG_INFO(0, val7)
	ZEND_ARG_INFO(0, val8)
	ZEND_ARG_INFO(0, val9)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qmetaobject_qmetaobject_newinstance, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, val0, IS_LONG, 0)
	ZEND_ARG_INFO(0, val1)
	ZEND_ARG_INFO(0, val2)
	ZEND_ARG_INFO(0, val3)
	ZEND_ARG_INFO(0, val4)
	ZEND_ARG_INFO(0, val5)
	ZEND_ARG_INFO(0, val6)
	ZEND_ARG_INFO(0, val7)
	ZEND_ARG_INFO(0, val8)
	ZEND_ARG_INFO(0, val9)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qmetaobject_qmetaobject_d, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qmetaobject_qmetaobject_setd, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_core_qmetaobject_qmetaobject_method_entry) {
	PHP_ME(Qt_Core_QMetaObject_QMetaObject, className, arginfo_qt_core_qmetaobject_qmetaobject_classname, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QMetaObject_QMetaObject, superClass, arginfo_qt_core_qmetaobject_qmetaobject_superclass, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QMetaObject_QMetaObject, inherits, arginfo_qt_core_qmetaobject_qmetaobject_inherits, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QMetaObject_QMetaObject, cast, arginfo_qt_core_qmetaobject_qmetaobject_cast, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QMetaObject_QMetaObject, tr, arginfo_qt_core_qmetaobject_qmetaobject_tr, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QMetaObject_QMetaObject, metaType, arginfo_qt_core_qmetaobject_qmetaobject_metatype, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QMetaObject_QMetaObject, methodOffset, arginfo_qt_core_qmetaobject_qmetaobject_methodoffset, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QMetaObject_QMetaObject, enumeratorOffset, arginfo_qt_core_qmetaobject_qmetaobject_enumeratoroffset, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QMetaObject_QMetaObject, propertyOffset, arginfo_qt_core_qmetaobject_qmetaobject_propertyoffset, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QMetaObject_QMetaObject, classInfoOffset, arginfo_qt_core_qmetaobject_qmetaobject_classinfooffset, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QMetaObject_QMetaObject, constructorCount, arginfo_qt_core_qmetaobject_qmetaobject_constructorcount, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QMetaObject_QMetaObject, methodCount, arginfo_qt_core_qmetaobject_qmetaobject_methodcount, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QMetaObject_QMetaObject, enumeratorCount, arginfo_qt_core_qmetaobject_qmetaobject_enumeratorcount, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QMetaObject_QMetaObject, propertyCount, arginfo_qt_core_qmetaobject_qmetaobject_propertycount, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QMetaObject_QMetaObject, classInfoCount, arginfo_qt_core_qmetaobject_qmetaobject_classinfocount, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QMetaObject_QMetaObject, indexOfConstructor, arginfo_qt_core_qmetaobject_qmetaobject_indexofconstructor, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QMetaObject_QMetaObject, indexOfMethod, arginfo_qt_core_qmetaobject_qmetaobject_indexofmethod, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QMetaObject_QMetaObject, indexOfSignal, arginfo_qt_core_qmetaobject_qmetaobject_indexofsignal, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QMetaObject_QMetaObject, indexOfSlot, arginfo_qt_core_qmetaobject_qmetaobject_indexofslot, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QMetaObject_QMetaObject, indexOfEnumerator, arginfo_qt_core_qmetaobject_qmetaobject_indexofenumerator, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QMetaObject_QMetaObject, indexOfProperty, arginfo_qt_core_qmetaobject_qmetaobject_indexofproperty, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QMetaObject_QMetaObject, indexOfClassInfo, arginfo_qt_core_qmetaobject_qmetaobject_indexofclassinfo, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QMetaObject_QMetaObject, constructor, arginfo_qt_core_qmetaobject_qmetaobject_constructor, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QMetaObject_QMetaObject, method, arginfo_qt_core_qmetaobject_qmetaobject_method, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QMetaObject_QMetaObject, enumerator, arginfo_qt_core_qmetaobject_qmetaobject_enumerator, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QMetaObject_QMetaObject, property, arginfo_qt_core_qmetaobject_qmetaobject_property, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QMetaObject_QMetaObject, classInfo, arginfo_qt_core_qmetaobject_qmetaobject_classinfo, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QMetaObject_QMetaObject, userProperty, arginfo_qt_core_qmetaobject_qmetaobject_userproperty, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QMetaObject_QMetaObject, checkConnectArgs, arginfo_qt_core_qmetaobject_qmetaobject_checkconnectargs, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QMetaObject_QMetaObject, checkConnectArgsQMetaMethodQMetaMethod, arginfo_qt_core_qmetaobject_qmetaobject_checkconnectargsqmetamethodqmetamethod, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QMetaObject_QMetaObject, normalizedSignature, arginfo_qt_core_qmetaobject_qmetaobject_normalizedsignature, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QMetaObject_QMetaObject, normalizedType, arginfo_qt_core_qmetaobject_qmetaobject_normalizedtype, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QMetaObject_QMetaObject, connect, arginfo_qt_core_qmetaobject_qmetaobject_connect, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QMetaObject_QMetaObject, disconnect, arginfo_qt_core_qmetaobject_qmetaobject_disconnect, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QMetaObject_QMetaObject, disconnectOne, arginfo_qt_core_qmetaobject_qmetaobject_disconnectone, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QMetaObject_QMetaObject, connectSlotsByName, arginfo_qt_core_qmetaobject_qmetaobject_connectslotsbyname, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QMetaObject_QMetaObject, invokeMethod, arginfo_qt_core_qmetaobject_qmetaobject_invokemethod, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QMetaObject_QMetaObject, invokeMethodQObjectCharQGenericReturnArgumentQGenericArgumentQGenericArgumentQGenericArgumentQGenericArgumentQGenericArgumentQGenericArgumentQGenericArgumentQGenericArgumentQGenericArgumentQGenericArgument, arginfo_qt_core_qmetaobject_qmetaobject_invokemethodqobjectcharqgenericreturnargumentqgenericargumentqgenericargumentqgenericargumentqgenericargumentqgenericargumentqgenericargumentqgenericargumentqgenericargumentqgenericargumentqgenericargument, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QMetaObject_QMetaObject, invokeMethodQObjectCharQtConnectionTypeQGenericArgumentQGenericArgumentQGenericArgumentQGenericArgumentQGenericArgumentQGenericArgumentQGenericArgumentQGenericArgumentQGenericArgumentQGenericArgument, arginfo_qt_core_qmetaobject_qmetaobject_invokemethodqobjectcharqtconnectiontypeqgenericargumentqgenericargumentqgenericargumentqgenericargumentqgenericargumentqgenericargumentqgenericargumentqgenericargumentqgenericargumentqgenericargument, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QMetaObject_QMetaObject, invokeMethodQObjectCharQGenericArgumentQGenericArgumentQGenericArgumentQGenericArgumentQGenericArgumentQGenericArgumentQGenericArgumentQGenericArgumentQGenericArgumentQGenericArgument, arginfo_qt_core_qmetaobject_qmetaobject_invokemethodqobjectcharqgenericargumentqgenericargumentqgenericargumentqgenericargumentqgenericargumentqgenericargumentqgenericargumentqgenericargumentqgenericargumentqgenericargument, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QMetaObject_QMetaObject, newInstance, arginfo_qt_core_qmetaobject_qmetaobject_newinstance, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QMetaObject_QMetaObject, d, arginfo_qt_core_qmetaobject_qmetaobject_d, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QMetaObject_QMetaObject, setD, arginfo_qt_core_qmetaobject_qmetaobject_setd, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
