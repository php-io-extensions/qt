
extern zend_class_entry *qt_core_qpauseanimation_qpauseanimation_ce;

ZEPHIR_INIT_CLASS(Qt_Core_QPauseAnimation_QPauseAnimation);

PHP_METHOD(Qt_Core_QPauseAnimation_QPauseAnimation, staticMetaObject);
PHP_METHOD(Qt_Core_QPauseAnimation_QPauseAnimation, tr);
PHP_METHOD(Qt_Core_QPauseAnimation_QPauseAnimation, new_);
PHP_METHOD(Qt_Core_QPauseAnimation_QPauseAnimation, newIntQObject);
PHP_METHOD(Qt_Core_QPauseAnimation_QPauseAnimation, duration);
PHP_METHOD(Qt_Core_QPauseAnimation_QPauseAnimation, setDuration);
PHP_METHOD(Qt_Core_QPauseAnimation_QPauseAnimation, event);
PHP_METHOD(Qt_Core_QPauseAnimation_QPauseAnimation, updateCurrentTime);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qpauseanimation_qpauseanimation_staticmetaobject, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qpauseanimation_qpauseanimation_tr, 0, 1, IS_STRING, 0)
	ZEND_ARG_INFO(0, s)
	ZEND_ARG_INFO(0, c)
	ZEND_ARG_TYPE_INFO(0, n, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qpauseanimation_qpauseanimation_new_, 0, 0, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qpauseanimation_qpauseanimation_newintqobject, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, msecs, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qpauseanimation_qpauseanimation_duration, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qpauseanimation_qpauseanimation_setduration, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, msecs, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qpauseanimation_qpauseanimation_event, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, e, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qpauseanimation_qpauseanimation_updatecurrenttime, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_core_qpauseanimation_qpauseanimation_method_entry) {
	PHP_ME(Qt_Core_QPauseAnimation_QPauseAnimation, staticMetaObject, arginfo_qt_core_qpauseanimation_qpauseanimation_staticmetaobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QPauseAnimation_QPauseAnimation, tr, arginfo_qt_core_qpauseanimation_qpauseanimation_tr, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QPauseAnimation_QPauseAnimation, new_, arginfo_qt_core_qpauseanimation_qpauseanimation_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QPauseAnimation_QPauseAnimation, newIntQObject, arginfo_qt_core_qpauseanimation_qpauseanimation_newintqobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QPauseAnimation_QPauseAnimation, duration, arginfo_qt_core_qpauseanimation_qpauseanimation_duration, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QPauseAnimation_QPauseAnimation, setDuration, arginfo_qt_core_qpauseanimation_qpauseanimation_setduration, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QPauseAnimation_QPauseAnimation, event, arginfo_qt_core_qpauseanimation_qpauseanimation_event, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QPauseAnimation_QPauseAnimation, updateCurrentTime, arginfo_qt_core_qpauseanimation_qpauseanimation_updatecurrenttime, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
