
extern zend_class_entry *qt_core_qwaitcondition_qwaitcondition_ce;

ZEPHIR_INIT_CLASS(Qt_Core_QWaitCondition_QWaitCondition);

PHP_METHOD(Qt_Core_QWaitCondition_QWaitCondition, new_);
PHP_METHOD(Qt_Core_QWaitCondition_QWaitCondition, wait);
PHP_METHOD(Qt_Core_QWaitCondition_QWaitCondition, waitQMutexLongUnsignedInt);
PHP_METHOD(Qt_Core_QWaitCondition_QWaitCondition, waitQReadWriteLockQDeadlineTimer);
PHP_METHOD(Qt_Core_QWaitCondition_QWaitCondition, waitQReadWriteLockLongUnsignedInt);
PHP_METHOD(Qt_Core_QWaitCondition_QWaitCondition, wakeOne);
PHP_METHOD(Qt_Core_QWaitCondition_QWaitCondition, wakeAll);
PHP_METHOD(Qt_Core_QWaitCondition_QWaitCondition, notify_one);
PHP_METHOD(Qt_Core_QWaitCondition_QWaitCondition, notify_all);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qwaitcondition_qwaitcondition_new_, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qwaitcondition_qwaitcondition_wait, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, lockedMutex, IS_LONG, 0)
	ZEND_ARG_INFO(0, deadline)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qwaitcondition_qwaitcondition_waitqmutexlongunsignedint, 0, 3, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, lockedMutex, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, time, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qwaitcondition_qwaitcondition_waitqreadwritelockqdeadlinetimer, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, lockedReadWriteLock, IS_LONG, 0)
	ZEND_ARG_INFO(0, deadline)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qwaitcondition_qwaitcondition_waitqreadwritelocklongunsignedint, 0, 3, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, lockedReadWriteLock, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, time, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qwaitcondition_qwaitcondition_wakeone, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qwaitcondition_qwaitcondition_wakeall, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qwaitcondition_qwaitcondition_notify_one, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qwaitcondition_qwaitcondition_notify_all, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_core_qwaitcondition_qwaitcondition_method_entry) {
	PHP_ME(Qt_Core_QWaitCondition_QWaitCondition, new_, arginfo_qt_core_qwaitcondition_qwaitcondition_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QWaitCondition_QWaitCondition, wait, arginfo_qt_core_qwaitcondition_qwaitcondition_wait, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QWaitCondition_QWaitCondition, waitQMutexLongUnsignedInt, arginfo_qt_core_qwaitcondition_qwaitcondition_waitqmutexlongunsignedint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QWaitCondition_QWaitCondition, waitQReadWriteLockQDeadlineTimer, arginfo_qt_core_qwaitcondition_qwaitcondition_waitqreadwritelockqdeadlinetimer, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QWaitCondition_QWaitCondition, waitQReadWriteLockLongUnsignedInt, arginfo_qt_core_qwaitcondition_qwaitcondition_waitqreadwritelocklongunsignedint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QWaitCondition_QWaitCondition, wakeOne, arginfo_qt_core_qwaitcondition_qwaitcondition_wakeone, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QWaitCondition_QWaitCondition, wakeAll, arginfo_qt_core_qwaitcondition_qwaitcondition_wakeall, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QWaitCondition_QWaitCondition, notify_one, arginfo_qt_core_qwaitcondition_qwaitcondition_notify_one, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QWaitCondition_QWaitCondition, notify_all, arginfo_qt_core_qwaitcondition_qwaitcondition_notify_all, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
