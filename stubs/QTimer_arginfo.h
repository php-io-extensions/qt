/* This is a generated file, edit the .stub.php file instead.
 * Stub hash: c4435e5d78e3f1ba65e6abaa007d12d7d895fa00 */

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_QTimer___construct, 0, 0, 0)
	ZEND_ARG_OBJ_INFO_WITH_DEFAULT_VALUE(0, parent, QObject, 1, "null")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_QTimer_start, 0, 0, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, msec, IS_LONG, 1, "null")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_QTimer_stop, 0, 0, IS_VOID, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_QTimer_isActive, 0, 0, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_QTimer_interval, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_QTimer_setInterval, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, msec, IS_LONG, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_QTimer_isSingleShot arginfo_class_QTimer_isActive

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_QTimer_setSingleShot, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, singleShot, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_QTimer_timerType, 0, 0, Qt\\TimerType, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_QTimer_setTimerType, 0, 1, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, atype, Qt\\TimerType, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_QTimer_remainingTime arginfo_class_QTimer_interval

#define arginfo_class_QTimer_timerId arginfo_class_QTimer_interval

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_QTimer_singleShot, 0, 2, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, msec, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, functor, IS_CALLABLE, 0)
ZEND_END_ARG_INFO()

ZEND_METHOD(QTimer, __construct);
ZEND_METHOD(QTimer, start);
ZEND_METHOD(QTimer, stop);
ZEND_METHOD(QTimer, isActive);
ZEND_METHOD(QTimer, interval);
ZEND_METHOD(QTimer, setInterval);
ZEND_METHOD(QTimer, isSingleShot);
ZEND_METHOD(QTimer, setSingleShot);
ZEND_METHOD(QTimer, timerType);
ZEND_METHOD(QTimer, setTimerType);
ZEND_METHOD(QTimer, remainingTime);
ZEND_METHOD(QTimer, timerId);
ZEND_METHOD(QTimer, singleShot);

static const zend_function_entry class_QTimer_methods[] = {
	ZEND_ME(QTimer, __construct, arginfo_class_QTimer___construct, ZEND_ACC_PUBLIC)
	ZEND_ME(QTimer, start, arginfo_class_QTimer_start, ZEND_ACC_PUBLIC)
	ZEND_ME(QTimer, stop, arginfo_class_QTimer_stop, ZEND_ACC_PUBLIC)
	ZEND_ME(QTimer, isActive, arginfo_class_QTimer_isActive, ZEND_ACC_PUBLIC)
	ZEND_ME(QTimer, interval, arginfo_class_QTimer_interval, ZEND_ACC_PUBLIC)
	ZEND_ME(QTimer, setInterval, arginfo_class_QTimer_setInterval, ZEND_ACC_PUBLIC)
	ZEND_ME(QTimer, isSingleShot, arginfo_class_QTimer_isSingleShot, ZEND_ACC_PUBLIC)
	ZEND_ME(QTimer, setSingleShot, arginfo_class_QTimer_setSingleShot, ZEND_ACC_PUBLIC)
	ZEND_ME(QTimer, timerType, arginfo_class_QTimer_timerType, ZEND_ACC_PUBLIC)
	ZEND_ME(QTimer, setTimerType, arginfo_class_QTimer_setTimerType, ZEND_ACC_PUBLIC)
	ZEND_ME(QTimer, remainingTime, arginfo_class_QTimer_remainingTime, ZEND_ACC_PUBLIC)
	ZEND_ME(QTimer, timerId, arginfo_class_QTimer_timerId, ZEND_ACC_PUBLIC)
	ZEND_ME(QTimer, singleShot, arginfo_class_QTimer_singleShot, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	ZEND_FE_END
};

static zend_class_entry *register_class_QTimer(zend_class_entry *class_entry_QObject)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "QTimer", class_QTimer_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, class_entry_QObject, ZEND_ACC_NOT_SERIALIZABLE);

	return class_entry;
}
