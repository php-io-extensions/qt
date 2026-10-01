
extern zend_class_entry *qt_core_qmetamethod_qmetamethod_ce;

ZEPHIR_INIT_CLASS(Qt_Core_QMetaMethod_QMetaMethod);

PHP_METHOD(Qt_Core_QMetaMethod_QMetaMethod, new_);
PHP_METHOD(Qt_Core_QMetaMethod_QMetaMethod, methodSignature);
PHP_METHOD(Qt_Core_QMetaMethod_QMetaMethod, name);
PHP_METHOD(Qt_Core_QMetaMethod_QMetaMethod, typeName);
PHP_METHOD(Qt_Core_QMetaMethod_QMetaMethod, returnType);
PHP_METHOD(Qt_Core_QMetaMethod_QMetaMethod, returnMetaType);
PHP_METHOD(Qt_Core_QMetaMethod_QMetaMethod, parameterCount);
PHP_METHOD(Qt_Core_QMetaMethod_QMetaMethod, parameterType);
PHP_METHOD(Qt_Core_QMetaMethod_QMetaMethod, parameterMetaType);
PHP_METHOD(Qt_Core_QMetaMethod_QMetaMethod, getParameterTypes);
PHP_METHOD(Qt_Core_QMetaMethod_QMetaMethod, parameterTypes);
PHP_METHOD(Qt_Core_QMetaMethod_QMetaMethod, parameterTypeName);
PHP_METHOD(Qt_Core_QMetaMethod_QMetaMethod, parameterNames);
PHP_METHOD(Qt_Core_QMetaMethod_QMetaMethod, tag);
PHP_METHOD(Qt_Core_QMetaMethod_QMetaMethod, access);
PHP_METHOD(Qt_Core_QMetaMethod_QMetaMethod, methodType);
PHP_METHOD(Qt_Core_QMetaMethod_QMetaMethod, attributes);
PHP_METHOD(Qt_Core_QMetaMethod_QMetaMethod, methodIndex);
PHP_METHOD(Qt_Core_QMetaMethod_QMetaMethod, relativeMethodIndex);
PHP_METHOD(Qt_Core_QMetaMethod_QMetaMethod, revision);
PHP_METHOD(Qt_Core_QMetaMethod_QMetaMethod, isConst);
PHP_METHOD(Qt_Core_QMetaMethod_QMetaMethod, enclosingMetaObject);
PHP_METHOD(Qt_Core_QMetaMethod_QMetaMethod, invoke);
PHP_METHOD(Qt_Core_QMetaMethod_QMetaMethod, invokeQObjectQGenericReturnArgumentQGenericArgumentQGenericArgumentQGenericArgumentQGenericArgumentQGenericArgumentQGenericArgumentQGenericArgumentQGenericArgumentQGenericArgumentQGenericArgument);
PHP_METHOD(Qt_Core_QMetaMethod_QMetaMethod, invokeQObjectQtConnectionTypeQGenericArgumentQGenericArgumentQGenericArgumentQGenericArgumentQGenericArgumentQGenericArgumentQGenericArgumentQGenericArgumentQGenericArgumentQGenericArgument);
PHP_METHOD(Qt_Core_QMetaMethod_QMetaMethod, invokeQObjectQGenericArgumentQGenericArgumentQGenericArgumentQGenericArgumentQGenericArgumentQGenericArgumentQGenericArgumentQGenericArgumentQGenericArgumentQGenericArgument);
PHP_METHOD(Qt_Core_QMetaMethod_QMetaMethod, isValid);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qmetamethod_qmetamethod_new_, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qmetamethod_qmetamethod_methodsignature, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qmetamethod_qmetamethod_name, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_qt_core_qmetamethod_qmetamethod_typename, 0, 0, 1)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qmetamethod_qmetamethod_returntype, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qmetamethod_qmetamethod_returnmetatype, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qmetamethod_qmetamethod_parametercount, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qmetamethod_qmetamethod_parametertype, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qmetamethod_qmetamethod_parametermetatype, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qmetamethod_qmetamethod_getparametertypes, 0, 2, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_INFO(0, types)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qmetamethod_qmetamethod_parametertypes, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qmetamethod_qmetamethod_parametertypename, 0, 2, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qmetamethod_qmetamethod_parameternames, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_qt_core_qmetamethod_qmetamethod_tag, 0, 0, 1)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qmetamethod_qmetamethod_access, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qmetamethod_qmetamethod_methodtype, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qmetamethod_qmetamethod_attributes, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qmetamethod_qmetamethod_methodindex, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qmetamethod_qmetamethod_relativemethodindex, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qmetamethod_qmetamethod_revision, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qmetamethod_qmetamethod_isconst, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qmetamethod_qmetamethod_enclosingmetaobject, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qmetamethod_qmetamethod_invoke, 0, 4, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, object_, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, connectionType, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, returnValue, IS_LONG, 0)
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

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qmetamethod_qmetamethod_invokeqobjectqgenericreturnargumentqgenericargumentqgenericargumentqgenericargumentqgenericargumentqgenericargumentqgenericargumentqgenericargumentqgenericargumentqgenericargumentqgenericargument, 0, 3, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, object_, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, returnValue, IS_LONG, 0)
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

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qmetamethod_qmetamethod_invokeqobjectqtconnectiontypeqgenericargumentqgenericargumentqgenericargumentqgenericargumentqgenericargumentqgenericargumentqgenericargumentqgenericargumentqgenericargumentqgenericargument, 0, 4, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, object_, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, connectionType, IS_LONG, 0)
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

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qmetamethod_qmetamethod_invokeqobjectqgenericargumentqgenericargumentqgenericargumentqgenericargumentqgenericargumentqgenericargumentqgenericargumentqgenericargumentqgenericargumentqgenericargument, 0, 3, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, object_, IS_LONG, 0)
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

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qmetamethod_qmetamethod_isvalid, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_core_qmetamethod_qmetamethod_method_entry) {
	PHP_ME(Qt_Core_QMetaMethod_QMetaMethod, new_, arginfo_qt_core_qmetamethod_qmetamethod_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QMetaMethod_QMetaMethod, methodSignature, arginfo_qt_core_qmetamethod_qmetamethod_methodsignature, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QMetaMethod_QMetaMethod, name, arginfo_qt_core_qmetamethod_qmetamethod_name, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QMetaMethod_QMetaMethod, typeName, arginfo_qt_core_qmetamethod_qmetamethod_typename, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QMetaMethod_QMetaMethod, returnType, arginfo_qt_core_qmetamethod_qmetamethod_returntype, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QMetaMethod_QMetaMethod, returnMetaType, arginfo_qt_core_qmetamethod_qmetamethod_returnmetatype, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QMetaMethod_QMetaMethod, parameterCount, arginfo_qt_core_qmetamethod_qmetamethod_parametercount, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QMetaMethod_QMetaMethod, parameterType, arginfo_qt_core_qmetamethod_qmetamethod_parametertype, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QMetaMethod_QMetaMethod, parameterMetaType, arginfo_qt_core_qmetamethod_qmetamethod_parametermetatype, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QMetaMethod_QMetaMethod, getParameterTypes, arginfo_qt_core_qmetamethod_qmetamethod_getparametertypes, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QMetaMethod_QMetaMethod, parameterTypes, arginfo_qt_core_qmetamethod_qmetamethod_parametertypes, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QMetaMethod_QMetaMethod, parameterTypeName, arginfo_qt_core_qmetamethod_qmetamethod_parametertypename, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QMetaMethod_QMetaMethod, parameterNames, arginfo_qt_core_qmetamethod_qmetamethod_parameternames, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QMetaMethod_QMetaMethod, tag, arginfo_qt_core_qmetamethod_qmetamethod_tag, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QMetaMethod_QMetaMethod, access, arginfo_qt_core_qmetamethod_qmetamethod_access, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QMetaMethod_QMetaMethod, methodType, arginfo_qt_core_qmetamethod_qmetamethod_methodtype, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QMetaMethod_QMetaMethod, attributes, arginfo_qt_core_qmetamethod_qmetamethod_attributes, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QMetaMethod_QMetaMethod, methodIndex, arginfo_qt_core_qmetamethod_qmetamethod_methodindex, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QMetaMethod_QMetaMethod, relativeMethodIndex, arginfo_qt_core_qmetamethod_qmetamethod_relativemethodindex, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QMetaMethod_QMetaMethod, revision, arginfo_qt_core_qmetamethod_qmetamethod_revision, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QMetaMethod_QMetaMethod, isConst, arginfo_qt_core_qmetamethod_qmetamethod_isconst, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QMetaMethod_QMetaMethod, enclosingMetaObject, arginfo_qt_core_qmetamethod_qmetamethod_enclosingmetaobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QMetaMethod_QMetaMethod, invoke, arginfo_qt_core_qmetamethod_qmetamethod_invoke, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QMetaMethod_QMetaMethod, invokeQObjectQGenericReturnArgumentQGenericArgumentQGenericArgumentQGenericArgumentQGenericArgumentQGenericArgumentQGenericArgumentQGenericArgumentQGenericArgumentQGenericArgumentQGenericArgument, arginfo_qt_core_qmetamethod_qmetamethod_invokeqobjectqgenericreturnargumentqgenericargumentqgenericargumentqgenericargumentqgenericargumentqgenericargumentqgenericargumentqgenericargumentqgenericargumentqgenericargumentqgenericargument, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QMetaMethod_QMetaMethod, invokeQObjectQtConnectionTypeQGenericArgumentQGenericArgumentQGenericArgumentQGenericArgumentQGenericArgumentQGenericArgumentQGenericArgumentQGenericArgumentQGenericArgumentQGenericArgument, arginfo_qt_core_qmetamethod_qmetamethod_invokeqobjectqtconnectiontypeqgenericargumentqgenericargumentqgenericargumentqgenericargumentqgenericargumentqgenericargumentqgenericargumentqgenericargumentqgenericargumentqgenericargument, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QMetaMethod_QMetaMethod, invokeQObjectQGenericArgumentQGenericArgumentQGenericArgumentQGenericArgumentQGenericArgumentQGenericArgumentQGenericArgumentQGenericArgumentQGenericArgumentQGenericArgument, arginfo_qt_core_qmetamethod_qmetamethod_invokeqobjectqgenericargumentqgenericargumentqgenericargumentqgenericargumentqgenericargumentqgenericargumentqgenericargumentqgenericargumentqgenericargumentqgenericargument, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QMetaMethod_QMetaMethod, isValid, arginfo_qt_core_qmetamethod_qmetamethod_isvalid, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
