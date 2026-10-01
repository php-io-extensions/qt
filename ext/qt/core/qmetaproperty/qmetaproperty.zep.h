
extern zend_class_entry *qt_core_qmetaproperty_qmetaproperty_ce;

ZEPHIR_INIT_CLASS(Qt_Core_QMetaProperty_QMetaProperty);

PHP_METHOD(Qt_Core_QMetaProperty_QMetaProperty, new_);
PHP_METHOD(Qt_Core_QMetaProperty_QMetaProperty, name);
PHP_METHOD(Qt_Core_QMetaProperty_QMetaProperty, typeName);
PHP_METHOD(Qt_Core_QMetaProperty_QMetaProperty, type);
PHP_METHOD(Qt_Core_QMetaProperty_QMetaProperty, userType);
PHP_METHOD(Qt_Core_QMetaProperty_QMetaProperty, typeId);
PHP_METHOD(Qt_Core_QMetaProperty_QMetaProperty, metaType);
PHP_METHOD(Qt_Core_QMetaProperty_QMetaProperty, propertyIndex);
PHP_METHOD(Qt_Core_QMetaProperty_QMetaProperty, relativePropertyIndex);
PHP_METHOD(Qt_Core_QMetaProperty_QMetaProperty, isReadable);
PHP_METHOD(Qt_Core_QMetaProperty_QMetaProperty, isWritable);
PHP_METHOD(Qt_Core_QMetaProperty_QMetaProperty, isResettable);
PHP_METHOD(Qt_Core_QMetaProperty_QMetaProperty, isDesignable);
PHP_METHOD(Qt_Core_QMetaProperty_QMetaProperty, isScriptable);
PHP_METHOD(Qt_Core_QMetaProperty_QMetaProperty, isStored);
PHP_METHOD(Qt_Core_QMetaProperty_QMetaProperty, isUser);
PHP_METHOD(Qt_Core_QMetaProperty_QMetaProperty, isConstant);
PHP_METHOD(Qt_Core_QMetaProperty_QMetaProperty, isFinal);
PHP_METHOD(Qt_Core_QMetaProperty_QMetaProperty, isRequired);
PHP_METHOD(Qt_Core_QMetaProperty_QMetaProperty, isBindable);
PHP_METHOD(Qt_Core_QMetaProperty_QMetaProperty, isFlagType);
PHP_METHOD(Qt_Core_QMetaProperty_QMetaProperty, isEnumType);
PHP_METHOD(Qt_Core_QMetaProperty_QMetaProperty, enumerator);
PHP_METHOD(Qt_Core_QMetaProperty_QMetaProperty, hasNotifySignal);
PHP_METHOD(Qt_Core_QMetaProperty_QMetaProperty, notifySignal);
PHP_METHOD(Qt_Core_QMetaProperty_QMetaProperty, notifySignalIndex);
PHP_METHOD(Qt_Core_QMetaProperty_QMetaProperty, revision);
PHP_METHOD(Qt_Core_QMetaProperty_QMetaProperty, read);
PHP_METHOD(Qt_Core_QMetaProperty_QMetaProperty, write);
PHP_METHOD(Qt_Core_QMetaProperty_QMetaProperty, reset);
PHP_METHOD(Qt_Core_QMetaProperty_QMetaProperty, bindable);
PHP_METHOD(Qt_Core_QMetaProperty_QMetaProperty, hasStdCppSet);
PHP_METHOD(Qt_Core_QMetaProperty_QMetaProperty, isAlias);
PHP_METHOD(Qt_Core_QMetaProperty_QMetaProperty, isValid);
PHP_METHOD(Qt_Core_QMetaProperty_QMetaProperty, enclosingMetaObject);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qmetaproperty_qmetaproperty_new_, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_qt_core_qmetaproperty_qmetaproperty_name, 0, 0, 1)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_qt_core_qmetaproperty_qmetaproperty_typename, 0, 0, 1)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qmetaproperty_qmetaproperty_type, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qmetaproperty_qmetaproperty_usertype, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qmetaproperty_qmetaproperty_typeid, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qmetaproperty_qmetaproperty_metatype, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qmetaproperty_qmetaproperty_propertyindex, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qmetaproperty_qmetaproperty_relativepropertyindex, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qmetaproperty_qmetaproperty_isreadable, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qmetaproperty_qmetaproperty_iswritable, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qmetaproperty_qmetaproperty_isresettable, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qmetaproperty_qmetaproperty_isdesignable, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qmetaproperty_qmetaproperty_isscriptable, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qmetaproperty_qmetaproperty_isstored, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qmetaproperty_qmetaproperty_isuser, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qmetaproperty_qmetaproperty_isconstant, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qmetaproperty_qmetaproperty_isfinal, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qmetaproperty_qmetaproperty_isrequired, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qmetaproperty_qmetaproperty_isbindable, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qmetaproperty_qmetaproperty_isflagtype, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qmetaproperty_qmetaproperty_isenumtype, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qmetaproperty_qmetaproperty_enumerator, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qmetaproperty_qmetaproperty_hasnotifysignal, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qmetaproperty_qmetaproperty_notifysignal, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qmetaproperty_qmetaproperty_notifysignalindex, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qmetaproperty_qmetaproperty_revision, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_qt_core_qmetaproperty_qmetaproperty_read, 0, 0, 2)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, obj, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qmetaproperty_qmetaproperty_write, 0, 3, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, obj, IS_LONG, 0)
	ZEND_ARG_INFO(0, value)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qmetaproperty_qmetaproperty_reset, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, obj, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qmetaproperty_qmetaproperty_bindable, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, object_, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qmetaproperty_qmetaproperty_hasstdcppset, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qmetaproperty_qmetaproperty_isalias, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qmetaproperty_qmetaproperty_isvalid, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qmetaproperty_qmetaproperty_enclosingmetaobject, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_core_qmetaproperty_qmetaproperty_method_entry) {
	PHP_ME(Qt_Core_QMetaProperty_QMetaProperty, new_, arginfo_qt_core_qmetaproperty_qmetaproperty_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QMetaProperty_QMetaProperty, name, arginfo_qt_core_qmetaproperty_qmetaproperty_name, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QMetaProperty_QMetaProperty, typeName, arginfo_qt_core_qmetaproperty_qmetaproperty_typename, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QMetaProperty_QMetaProperty, type, arginfo_qt_core_qmetaproperty_qmetaproperty_type, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QMetaProperty_QMetaProperty, userType, arginfo_qt_core_qmetaproperty_qmetaproperty_usertype, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QMetaProperty_QMetaProperty, typeId, arginfo_qt_core_qmetaproperty_qmetaproperty_typeid, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QMetaProperty_QMetaProperty, metaType, arginfo_qt_core_qmetaproperty_qmetaproperty_metatype, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QMetaProperty_QMetaProperty, propertyIndex, arginfo_qt_core_qmetaproperty_qmetaproperty_propertyindex, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QMetaProperty_QMetaProperty, relativePropertyIndex, arginfo_qt_core_qmetaproperty_qmetaproperty_relativepropertyindex, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QMetaProperty_QMetaProperty, isReadable, arginfo_qt_core_qmetaproperty_qmetaproperty_isreadable, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QMetaProperty_QMetaProperty, isWritable, arginfo_qt_core_qmetaproperty_qmetaproperty_iswritable, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QMetaProperty_QMetaProperty, isResettable, arginfo_qt_core_qmetaproperty_qmetaproperty_isresettable, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QMetaProperty_QMetaProperty, isDesignable, arginfo_qt_core_qmetaproperty_qmetaproperty_isdesignable, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QMetaProperty_QMetaProperty, isScriptable, arginfo_qt_core_qmetaproperty_qmetaproperty_isscriptable, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QMetaProperty_QMetaProperty, isStored, arginfo_qt_core_qmetaproperty_qmetaproperty_isstored, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QMetaProperty_QMetaProperty, isUser, arginfo_qt_core_qmetaproperty_qmetaproperty_isuser, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QMetaProperty_QMetaProperty, isConstant, arginfo_qt_core_qmetaproperty_qmetaproperty_isconstant, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QMetaProperty_QMetaProperty, isFinal, arginfo_qt_core_qmetaproperty_qmetaproperty_isfinal, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QMetaProperty_QMetaProperty, isRequired, arginfo_qt_core_qmetaproperty_qmetaproperty_isrequired, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QMetaProperty_QMetaProperty, isBindable, arginfo_qt_core_qmetaproperty_qmetaproperty_isbindable, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QMetaProperty_QMetaProperty, isFlagType, arginfo_qt_core_qmetaproperty_qmetaproperty_isflagtype, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QMetaProperty_QMetaProperty, isEnumType, arginfo_qt_core_qmetaproperty_qmetaproperty_isenumtype, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QMetaProperty_QMetaProperty, enumerator, arginfo_qt_core_qmetaproperty_qmetaproperty_enumerator, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QMetaProperty_QMetaProperty, hasNotifySignal, arginfo_qt_core_qmetaproperty_qmetaproperty_hasnotifysignal, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QMetaProperty_QMetaProperty, notifySignal, arginfo_qt_core_qmetaproperty_qmetaproperty_notifysignal, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QMetaProperty_QMetaProperty, notifySignalIndex, arginfo_qt_core_qmetaproperty_qmetaproperty_notifysignalindex, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QMetaProperty_QMetaProperty, revision, arginfo_qt_core_qmetaproperty_qmetaproperty_revision, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QMetaProperty_QMetaProperty, read, arginfo_qt_core_qmetaproperty_qmetaproperty_read, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QMetaProperty_QMetaProperty, write, arginfo_qt_core_qmetaproperty_qmetaproperty_write, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QMetaProperty_QMetaProperty, reset, arginfo_qt_core_qmetaproperty_qmetaproperty_reset, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QMetaProperty_QMetaProperty, bindable, arginfo_qt_core_qmetaproperty_qmetaproperty_bindable, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QMetaProperty_QMetaProperty, hasStdCppSet, arginfo_qt_core_qmetaproperty_qmetaproperty_hasstdcppset, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QMetaProperty_QMetaProperty, isAlias, arginfo_qt_core_qmetaproperty_qmetaproperty_isalias, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QMetaProperty_QMetaProperty, isValid, arginfo_qt_core_qmetaproperty_qmetaproperty_isvalid, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QMetaProperty_QMetaProperty, enclosingMetaObject, arginfo_qt_core_qmetaproperty_qmetaproperty_enclosingmetaobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
