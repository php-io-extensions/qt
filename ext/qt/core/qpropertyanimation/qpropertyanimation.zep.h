
extern zend_class_entry *qt_core_qpropertyanimation_qpropertyanimation_ce;

ZEPHIR_INIT_CLASS(Qt_Core_QPropertyAnimation_QPropertyAnimation);

PHP_METHOD(Qt_Core_QPropertyAnimation_QPropertyAnimation, staticMetaObject);
PHP_METHOD(Qt_Core_QPropertyAnimation_QPropertyAnimation, tr);
PHP_METHOD(Qt_Core_QPropertyAnimation_QPropertyAnimation, new_);
PHP_METHOD(Qt_Core_QPropertyAnimation_QPropertyAnimation, newQObjectQByteArrayQObject);
PHP_METHOD(Qt_Core_QPropertyAnimation_QPropertyAnimation, targetObject);
PHP_METHOD(Qt_Core_QPropertyAnimation_QPropertyAnimation, setTargetObject);
PHP_METHOD(Qt_Core_QPropertyAnimation_QPropertyAnimation, propertyName);
PHP_METHOD(Qt_Core_QPropertyAnimation_QPropertyAnimation, setPropertyName);
PHP_METHOD(Qt_Core_QPropertyAnimation_QPropertyAnimation, event);
PHP_METHOD(Qt_Core_QPropertyAnimation_QPropertyAnimation, updateCurrentValue);
PHP_METHOD(Qt_Core_QPropertyAnimation_QPropertyAnimation, updateState);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qpropertyanimation_qpropertyanimation_staticmetaobject, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qpropertyanimation_qpropertyanimation_tr, 0, 1, IS_STRING, 0)
	ZEND_ARG_INFO(0, s)
	ZEND_ARG_INFO(0, c)
	ZEND_ARG_TYPE_INFO(0, n, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qpropertyanimation_qpropertyanimation_new_, 0, 0, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qpropertyanimation_qpropertyanimation_newqobjectqbytearrayqobject, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, target, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, propertyName, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qpropertyanimation_qpropertyanimation_targetobject, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qpropertyanimation_qpropertyanimation_settargetobject, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, target, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qpropertyanimation_qpropertyanimation_propertyname, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qpropertyanimation_qpropertyanimation_setpropertyname, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, propertyName, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qpropertyanimation_qpropertyanimation_event, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, event, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qpropertyanimation_qpropertyanimation_updatecurrentvalue, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_INFO(0, value)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qpropertyanimation_qpropertyanimation_updatestate, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, newState, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, oldState, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_core_qpropertyanimation_qpropertyanimation_method_entry) {
	PHP_ME(Qt_Core_QPropertyAnimation_QPropertyAnimation, staticMetaObject, arginfo_qt_core_qpropertyanimation_qpropertyanimation_staticmetaobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QPropertyAnimation_QPropertyAnimation, tr, arginfo_qt_core_qpropertyanimation_qpropertyanimation_tr, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QPropertyAnimation_QPropertyAnimation, new_, arginfo_qt_core_qpropertyanimation_qpropertyanimation_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QPropertyAnimation_QPropertyAnimation, newQObjectQByteArrayQObject, arginfo_qt_core_qpropertyanimation_qpropertyanimation_newqobjectqbytearrayqobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QPropertyAnimation_QPropertyAnimation, targetObject, arginfo_qt_core_qpropertyanimation_qpropertyanimation_targetobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QPropertyAnimation_QPropertyAnimation, setTargetObject, arginfo_qt_core_qpropertyanimation_qpropertyanimation_settargetobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QPropertyAnimation_QPropertyAnimation, propertyName, arginfo_qt_core_qpropertyanimation_qpropertyanimation_propertyname, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QPropertyAnimation_QPropertyAnimation, setPropertyName, arginfo_qt_core_qpropertyanimation_qpropertyanimation_setpropertyname, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QPropertyAnimation_QPropertyAnimation, event, arginfo_qt_core_qpropertyanimation_qpropertyanimation_event, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QPropertyAnimation_QPropertyAnimation, updateCurrentValue, arginfo_qt_core_qpropertyanimation_qpropertyanimation_updatecurrentvalue, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QPropertyAnimation_QPropertyAnimation, updateState, arginfo_qt_core_qpropertyanimation_qpropertyanimation_updatestate, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
