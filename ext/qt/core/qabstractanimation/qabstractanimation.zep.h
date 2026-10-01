
extern zend_class_entry *qt_core_qabstractanimation_qabstractanimation_ce;

ZEPHIR_INIT_CLASS(Qt_Core_QAbstractAnimation_QAbstractAnimation);

PHP_METHOD(Qt_Core_QAbstractAnimation_QAbstractAnimation, staticMetaObject);
PHP_METHOD(Qt_Core_QAbstractAnimation_QAbstractAnimation, tr);
PHP_METHOD(Qt_Core_QAbstractAnimation_QAbstractAnimation, new_);
PHP_METHOD(Qt_Core_QAbstractAnimation_QAbstractAnimation, state);
PHP_METHOD(Qt_Core_QAbstractAnimation_QAbstractAnimation, group);
PHP_METHOD(Qt_Core_QAbstractAnimation_QAbstractAnimation, direction);
PHP_METHOD(Qt_Core_QAbstractAnimation_QAbstractAnimation, setDirection);
PHP_METHOD(Qt_Core_QAbstractAnimation_QAbstractAnimation, currentTime);
PHP_METHOD(Qt_Core_QAbstractAnimation_QAbstractAnimation, currentLoopTime);
PHP_METHOD(Qt_Core_QAbstractAnimation_QAbstractAnimation, loopCount);
PHP_METHOD(Qt_Core_QAbstractAnimation_QAbstractAnimation, setLoopCount);
PHP_METHOD(Qt_Core_QAbstractAnimation_QAbstractAnimation, currentLoop);
PHP_METHOD(Qt_Core_QAbstractAnimation_QAbstractAnimation, duration);
PHP_METHOD(Qt_Core_QAbstractAnimation_QAbstractAnimation, totalDuration);
PHP_METHOD(Qt_Core_QAbstractAnimation_QAbstractAnimation, finished);
PHP_METHOD(Qt_Core_QAbstractAnimation_QAbstractAnimation, stateChanged);
PHP_METHOD(Qt_Core_QAbstractAnimation_QAbstractAnimation, currentLoopChanged);
PHP_METHOD(Qt_Core_QAbstractAnimation_QAbstractAnimation, directionChanged);
PHP_METHOD(Qt_Core_QAbstractAnimation_QAbstractAnimation, start);
PHP_METHOD(Qt_Core_QAbstractAnimation_QAbstractAnimation, pause);
PHP_METHOD(Qt_Core_QAbstractAnimation_QAbstractAnimation, resume);
PHP_METHOD(Qt_Core_QAbstractAnimation_QAbstractAnimation, setPaused);
PHP_METHOD(Qt_Core_QAbstractAnimation_QAbstractAnimation, stop);
PHP_METHOD(Qt_Core_QAbstractAnimation_QAbstractAnimation, setCurrentTime);
PHP_METHOD(Qt_Core_QAbstractAnimation_QAbstractAnimation, event);
PHP_METHOD(Qt_Core_QAbstractAnimation_QAbstractAnimation, updateCurrentTime);
PHP_METHOD(Qt_Core_QAbstractAnimation_QAbstractAnimation, updateState);
PHP_METHOD(Qt_Core_QAbstractAnimation_QAbstractAnimation, updateDirection);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qabstractanimation_qabstractanimation_staticmetaobject, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qabstractanimation_qabstractanimation_tr, 0, 1, IS_STRING, 0)
	ZEND_ARG_INFO(0, s)
	ZEND_ARG_INFO(0, c)
	ZEND_ARG_TYPE_INFO(0, n, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qabstractanimation_qabstractanimation_new_, 0, 0, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qabstractanimation_qabstractanimation_state, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qabstractanimation_qabstractanimation_group, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qabstractanimation_qabstractanimation_direction, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qabstractanimation_qabstractanimation_setdirection, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, direction, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qabstractanimation_qabstractanimation_currenttime, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qabstractanimation_qabstractanimation_currentlooptime, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qabstractanimation_qabstractanimation_loopcount, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qabstractanimation_qabstractanimation_setloopcount, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, loopCount, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qabstractanimation_qabstractanimation_currentloop, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qabstractanimation_qabstractanimation_duration, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qabstractanimation_qabstractanimation_totalduration, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qabstractanimation_qabstractanimation_finished, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qabstractanimation_qabstractanimation_statechanged, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, newState, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, oldState, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qabstractanimation_qabstractanimation_currentloopchanged, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, currentLoop, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qabstractanimation_qabstractanimation_directionchanged, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qabstractanimation_qabstractanimation_start, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_INFO(0, policy)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qabstractanimation_qabstractanimation_pause, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qabstractanimation_qabstractanimation_resume, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qabstractanimation_qabstractanimation_setpaused, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qabstractanimation_qabstractanimation_stop, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qabstractanimation_qabstractanimation_setcurrenttime, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, msecs, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qabstractanimation_qabstractanimation_event, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, event, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qabstractanimation_qabstractanimation_updatecurrenttime, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, currentTime, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qabstractanimation_qabstractanimation_updatestate, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, newState, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, oldState, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qabstractanimation_qabstractanimation_updatedirection, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, direction, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_core_qabstractanimation_qabstractanimation_method_entry) {
	PHP_ME(Qt_Core_QAbstractAnimation_QAbstractAnimation, staticMetaObject, arginfo_qt_core_qabstractanimation_qabstractanimation_staticmetaobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QAbstractAnimation_QAbstractAnimation, tr, arginfo_qt_core_qabstractanimation_qabstractanimation_tr, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QAbstractAnimation_QAbstractAnimation, new_, arginfo_qt_core_qabstractanimation_qabstractanimation_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QAbstractAnimation_QAbstractAnimation, state, arginfo_qt_core_qabstractanimation_qabstractanimation_state, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QAbstractAnimation_QAbstractAnimation, group, arginfo_qt_core_qabstractanimation_qabstractanimation_group, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QAbstractAnimation_QAbstractAnimation, direction, arginfo_qt_core_qabstractanimation_qabstractanimation_direction, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QAbstractAnimation_QAbstractAnimation, setDirection, arginfo_qt_core_qabstractanimation_qabstractanimation_setdirection, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QAbstractAnimation_QAbstractAnimation, currentTime, arginfo_qt_core_qabstractanimation_qabstractanimation_currenttime, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QAbstractAnimation_QAbstractAnimation, currentLoopTime, arginfo_qt_core_qabstractanimation_qabstractanimation_currentlooptime, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QAbstractAnimation_QAbstractAnimation, loopCount, arginfo_qt_core_qabstractanimation_qabstractanimation_loopcount, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QAbstractAnimation_QAbstractAnimation, setLoopCount, arginfo_qt_core_qabstractanimation_qabstractanimation_setloopcount, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QAbstractAnimation_QAbstractAnimation, currentLoop, arginfo_qt_core_qabstractanimation_qabstractanimation_currentloop, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QAbstractAnimation_QAbstractAnimation, duration, arginfo_qt_core_qabstractanimation_qabstractanimation_duration, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QAbstractAnimation_QAbstractAnimation, totalDuration, arginfo_qt_core_qabstractanimation_qabstractanimation_totalduration, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QAbstractAnimation_QAbstractAnimation, finished, arginfo_qt_core_qabstractanimation_qabstractanimation_finished, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QAbstractAnimation_QAbstractAnimation, stateChanged, arginfo_qt_core_qabstractanimation_qabstractanimation_statechanged, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QAbstractAnimation_QAbstractAnimation, currentLoopChanged, arginfo_qt_core_qabstractanimation_qabstractanimation_currentloopchanged, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QAbstractAnimation_QAbstractAnimation, directionChanged, arginfo_qt_core_qabstractanimation_qabstractanimation_directionchanged, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QAbstractAnimation_QAbstractAnimation, start, arginfo_qt_core_qabstractanimation_qabstractanimation_start, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QAbstractAnimation_QAbstractAnimation, pause, arginfo_qt_core_qabstractanimation_qabstractanimation_pause, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QAbstractAnimation_QAbstractAnimation, resume, arginfo_qt_core_qabstractanimation_qabstractanimation_resume, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QAbstractAnimation_QAbstractAnimation, setPaused, arginfo_qt_core_qabstractanimation_qabstractanimation_setpaused, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QAbstractAnimation_QAbstractAnimation, stop, arginfo_qt_core_qabstractanimation_qabstractanimation_stop, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QAbstractAnimation_QAbstractAnimation, setCurrentTime, arginfo_qt_core_qabstractanimation_qabstractanimation_setcurrenttime, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QAbstractAnimation_QAbstractAnimation, event, arginfo_qt_core_qabstractanimation_qabstractanimation_event, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QAbstractAnimation_QAbstractAnimation, updateCurrentTime, arginfo_qt_core_qabstractanimation_qabstractanimation_updatecurrenttime, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QAbstractAnimation_QAbstractAnimation, updateState, arginfo_qt_core_qabstractanimation_qabstractanimation_updatestate, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QAbstractAnimation_QAbstractAnimation, updateDirection, arginfo_qt_core_qabstractanimation_qabstractanimation_updatedirection, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
