
extern zend_class_entry *qt_core_qanimationdriver_qanimationdriver_ce;

ZEPHIR_INIT_CLASS(Qt_Core_QAnimationDriver_QAnimationDriver);

PHP_METHOD(Qt_Core_QAnimationDriver_QAnimationDriver, staticMetaObject);
PHP_METHOD(Qt_Core_QAnimationDriver_QAnimationDriver, tr);
PHP_METHOD(Qt_Core_QAnimationDriver_QAnimationDriver, new_);
PHP_METHOD(Qt_Core_QAnimationDriver_QAnimationDriver, advance);
PHP_METHOD(Qt_Core_QAnimationDriver_QAnimationDriver, install);
PHP_METHOD(Qt_Core_QAnimationDriver_QAnimationDriver, uninstall);
PHP_METHOD(Qt_Core_QAnimationDriver_QAnimationDriver, isRunning);
PHP_METHOD(Qt_Core_QAnimationDriver_QAnimationDriver, elapsed);
PHP_METHOD(Qt_Core_QAnimationDriver_QAnimationDriver, started);
PHP_METHOD(Qt_Core_QAnimationDriver_QAnimationDriver, stopped);
PHP_METHOD(Qt_Core_QAnimationDriver_QAnimationDriver, advanceAnimation);
PHP_METHOD(Qt_Core_QAnimationDriver_QAnimationDriver, start);
PHP_METHOD(Qt_Core_QAnimationDriver_QAnimationDriver, stop);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qanimationdriver_qanimationdriver_staticmetaobject, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qanimationdriver_qanimationdriver_tr, 0, 1, IS_STRING, 0)
	ZEND_ARG_INFO(0, s)
	ZEND_ARG_INFO(0, c)
	ZEND_ARG_TYPE_INFO(0, n, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qanimationdriver_qanimationdriver_new_, 0, 0, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qanimationdriver_qanimationdriver_advance, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qanimationdriver_qanimationdriver_install, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qanimationdriver_qanimationdriver_uninstall, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qanimationdriver_qanimationdriver_isrunning, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qanimationdriver_qanimationdriver_elapsed, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qanimationdriver_qanimationdriver_started, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qanimationdriver_qanimationdriver_stopped, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qanimationdriver_qanimationdriver_advanceanimation, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qanimationdriver_qanimationdriver_start, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qanimationdriver_qanimationdriver_stop, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_core_qanimationdriver_qanimationdriver_method_entry) {
	PHP_ME(Qt_Core_QAnimationDriver_QAnimationDriver, staticMetaObject, arginfo_qt_core_qanimationdriver_qanimationdriver_staticmetaobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QAnimationDriver_QAnimationDriver, tr, arginfo_qt_core_qanimationdriver_qanimationdriver_tr, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QAnimationDriver_QAnimationDriver, new_, arginfo_qt_core_qanimationdriver_qanimationdriver_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QAnimationDriver_QAnimationDriver, advance, arginfo_qt_core_qanimationdriver_qanimationdriver_advance, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QAnimationDriver_QAnimationDriver, install, arginfo_qt_core_qanimationdriver_qanimationdriver_install, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QAnimationDriver_QAnimationDriver, uninstall, arginfo_qt_core_qanimationdriver_qanimationdriver_uninstall, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QAnimationDriver_QAnimationDriver, isRunning, arginfo_qt_core_qanimationdriver_qanimationdriver_isrunning, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QAnimationDriver_QAnimationDriver, elapsed, arginfo_qt_core_qanimationdriver_qanimationdriver_elapsed, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QAnimationDriver_QAnimationDriver, started, arginfo_qt_core_qanimationdriver_qanimationdriver_started, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QAnimationDriver_QAnimationDriver, stopped, arginfo_qt_core_qanimationdriver_qanimationdriver_stopped, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QAnimationDriver_QAnimationDriver, advanceAnimation, arginfo_qt_core_qanimationdriver_qanimationdriver_advanceanimation, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QAnimationDriver_QAnimationDriver, start, arginfo_qt_core_qanimationdriver_qanimationdriver_start, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QAnimationDriver_QAnimationDriver, stop, arginfo_qt_core_qanimationdriver_qanimationdriver_stop, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
