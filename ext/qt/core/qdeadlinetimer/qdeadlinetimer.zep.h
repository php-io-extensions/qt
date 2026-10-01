
extern zend_class_entry *qt_core_qdeadlinetimer_qdeadlinetimer_ce;

ZEPHIR_INIT_CLASS(Qt_Core_QDeadlineTimer_QDeadlineTimer);

PHP_METHOD(Qt_Core_QDeadlineTimer_QDeadlineTimer, Forever);
PHP_METHOD(Qt_Core_QDeadlineTimer_QDeadlineTimer, new_);
PHP_METHOD(Qt_Core_QDeadlineTimer_QDeadlineTimer, newQtTimerType);
PHP_METHOD(Qt_Core_QDeadlineTimer_QDeadlineTimer, newQDeadlineTimerForeverConstantQtTimerType);
PHP_METHOD(Qt_Core_QDeadlineTimer_QDeadlineTimer, newQint64QtTimerType);
PHP_METHOD(Qt_Core_QDeadlineTimer_QDeadlineTimer, swap);
PHP_METHOD(Qt_Core_QDeadlineTimer_QDeadlineTimer, isForever);
PHP_METHOD(Qt_Core_QDeadlineTimer_QDeadlineTimer, hasExpired);
PHP_METHOD(Qt_Core_QDeadlineTimer_QDeadlineTimer, timerType);
PHP_METHOD(Qt_Core_QDeadlineTimer_QDeadlineTimer, setTimerType);
PHP_METHOD(Qt_Core_QDeadlineTimer_QDeadlineTimer, remainingTime);
PHP_METHOD(Qt_Core_QDeadlineTimer_QDeadlineTimer, remainingTimeNSecs);
PHP_METHOD(Qt_Core_QDeadlineTimer_QDeadlineTimer, setRemainingTime);
PHP_METHOD(Qt_Core_QDeadlineTimer_QDeadlineTimer, setPreciseRemainingTime);
PHP_METHOD(Qt_Core_QDeadlineTimer_QDeadlineTimer, deadline);
PHP_METHOD(Qt_Core_QDeadlineTimer_QDeadlineTimer, deadlineNSecs);
PHP_METHOD(Qt_Core_QDeadlineTimer_QDeadlineTimer, setDeadline);
PHP_METHOD(Qt_Core_QDeadlineTimer_QDeadlineTimer, setPreciseDeadline);
PHP_METHOD(Qt_Core_QDeadlineTimer_QDeadlineTimer, addNSecs);
PHP_METHOD(Qt_Core_QDeadlineTimer_QDeadlineTimer, current);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qdeadlinetimer_qdeadlinetimer_forever, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qdeadlinetimer_qdeadlinetimer_new_, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qdeadlinetimer_qdeadlinetimer_newqttimertype, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, type_, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qdeadlinetimer_qdeadlinetimer_newqdeadlinetimerforeverconstantqttimertype, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
	ZEND_ARG_INFO(0, type_)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qdeadlinetimer_qdeadlinetimer_newqint64qttimertype, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, msecs, IS_LONG, 0)
	ZEND_ARG_INFO(0, type)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qdeadlinetimer_qdeadlinetimer_swap, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, other, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qdeadlinetimer_qdeadlinetimer_isforever, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qdeadlinetimer_qdeadlinetimer_hasexpired, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qdeadlinetimer_qdeadlinetimer_timertype, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qdeadlinetimer_qdeadlinetimer_settimertype, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, type, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qdeadlinetimer_qdeadlinetimer_remainingtime, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qdeadlinetimer_qdeadlinetimer_remainingtimensecs, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qdeadlinetimer_qdeadlinetimer_setremainingtime, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, msecs, IS_LONG, 0)
	ZEND_ARG_INFO(0, type)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qdeadlinetimer_qdeadlinetimer_setpreciseremainingtime, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, secs, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, nsecs, IS_LONG, 0)
	ZEND_ARG_INFO(0, type)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qdeadlinetimer_qdeadlinetimer_deadline, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qdeadlinetimer_qdeadlinetimer_deadlinensecs, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qdeadlinetimer_qdeadlinetimer_setdeadline, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, msecs, IS_LONG, 0)
	ZEND_ARG_INFO(0, timerType)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qdeadlinetimer_qdeadlinetimer_setprecisedeadline, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, secs, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, nsecs, IS_LONG, 0)
	ZEND_ARG_INFO(0, type)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qdeadlinetimer_qdeadlinetimer_addnsecs, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, dt, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, nsecs, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qdeadlinetimer_qdeadlinetimer_current, 0, 0, IS_LONG, 0)
	ZEND_ARG_INFO(0, timerType)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_core_qdeadlinetimer_qdeadlinetimer_method_entry) {
	PHP_ME(Qt_Core_QDeadlineTimer_QDeadlineTimer, Forever, arginfo_qt_core_qdeadlinetimer_qdeadlinetimer_forever, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QDeadlineTimer_QDeadlineTimer, new_, arginfo_qt_core_qdeadlinetimer_qdeadlinetimer_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QDeadlineTimer_QDeadlineTimer, newQtTimerType, arginfo_qt_core_qdeadlinetimer_qdeadlinetimer_newqttimertype, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QDeadlineTimer_QDeadlineTimer, newQDeadlineTimerForeverConstantQtTimerType, arginfo_qt_core_qdeadlinetimer_qdeadlinetimer_newqdeadlinetimerforeverconstantqttimertype, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QDeadlineTimer_QDeadlineTimer, newQint64QtTimerType, arginfo_qt_core_qdeadlinetimer_qdeadlinetimer_newqint64qttimertype, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QDeadlineTimer_QDeadlineTimer, swap, arginfo_qt_core_qdeadlinetimer_qdeadlinetimer_swap, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QDeadlineTimer_QDeadlineTimer, isForever, arginfo_qt_core_qdeadlinetimer_qdeadlinetimer_isforever, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QDeadlineTimer_QDeadlineTimer, hasExpired, arginfo_qt_core_qdeadlinetimer_qdeadlinetimer_hasexpired, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QDeadlineTimer_QDeadlineTimer, timerType, arginfo_qt_core_qdeadlinetimer_qdeadlinetimer_timertype, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QDeadlineTimer_QDeadlineTimer, setTimerType, arginfo_qt_core_qdeadlinetimer_qdeadlinetimer_settimertype, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QDeadlineTimer_QDeadlineTimer, remainingTime, arginfo_qt_core_qdeadlinetimer_qdeadlinetimer_remainingtime, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QDeadlineTimer_QDeadlineTimer, remainingTimeNSecs, arginfo_qt_core_qdeadlinetimer_qdeadlinetimer_remainingtimensecs, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QDeadlineTimer_QDeadlineTimer, setRemainingTime, arginfo_qt_core_qdeadlinetimer_qdeadlinetimer_setremainingtime, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QDeadlineTimer_QDeadlineTimer, setPreciseRemainingTime, arginfo_qt_core_qdeadlinetimer_qdeadlinetimer_setpreciseremainingtime, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QDeadlineTimer_QDeadlineTimer, deadline, arginfo_qt_core_qdeadlinetimer_qdeadlinetimer_deadline, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QDeadlineTimer_QDeadlineTimer, deadlineNSecs, arginfo_qt_core_qdeadlinetimer_qdeadlinetimer_deadlinensecs, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QDeadlineTimer_QDeadlineTimer, setDeadline, arginfo_qt_core_qdeadlinetimer_qdeadlinetimer_setdeadline, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QDeadlineTimer_QDeadlineTimer, setPreciseDeadline, arginfo_qt_core_qdeadlinetimer_qdeadlinetimer_setprecisedeadline, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QDeadlineTimer_QDeadlineTimer, addNSecs, arginfo_qt_core_qdeadlinetimer_qdeadlinetimer_addnsecs, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QDeadlineTimer_QDeadlineTimer, current, arginfo_qt_core_qdeadlinetimer_qdeadlinetimer_current, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
