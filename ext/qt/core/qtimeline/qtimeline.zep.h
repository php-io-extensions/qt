
extern zend_class_entry *qt_core_qtimeline_qtimeline_ce;

ZEPHIR_INIT_CLASS(Qt_Core_QTimeLine_QTimeLine);

PHP_METHOD(Qt_Core_QTimeLine_QTimeLine, staticMetaObject);
PHP_METHOD(Qt_Core_QTimeLine_QTimeLine, tr);
PHP_METHOD(Qt_Core_QTimeLine_QTimeLine, new_);
PHP_METHOD(Qt_Core_QTimeLine_QTimeLine, state);
PHP_METHOD(Qt_Core_QTimeLine_QTimeLine, loopCount);
PHP_METHOD(Qt_Core_QTimeLine_QTimeLine, setLoopCount);
PHP_METHOD(Qt_Core_QTimeLine_QTimeLine, direction);
PHP_METHOD(Qt_Core_QTimeLine_QTimeLine, setDirection);
PHP_METHOD(Qt_Core_QTimeLine_QTimeLine, duration);
PHP_METHOD(Qt_Core_QTimeLine_QTimeLine, setDuration);
PHP_METHOD(Qt_Core_QTimeLine_QTimeLine, startFrame);
PHP_METHOD(Qt_Core_QTimeLine_QTimeLine, setStartFrame);
PHP_METHOD(Qt_Core_QTimeLine_QTimeLine, endFrame);
PHP_METHOD(Qt_Core_QTimeLine_QTimeLine, setEndFrame);
PHP_METHOD(Qt_Core_QTimeLine_QTimeLine, setFrameRange);
PHP_METHOD(Qt_Core_QTimeLine_QTimeLine, updateInterval);
PHP_METHOD(Qt_Core_QTimeLine_QTimeLine, setUpdateInterval);
PHP_METHOD(Qt_Core_QTimeLine_QTimeLine, easingCurve);
PHP_METHOD(Qt_Core_QTimeLine_QTimeLine, setEasingCurve);
PHP_METHOD(Qt_Core_QTimeLine_QTimeLine, currentTime);
PHP_METHOD(Qt_Core_QTimeLine_QTimeLine, currentFrame);
PHP_METHOD(Qt_Core_QTimeLine_QTimeLine, currentValue);
PHP_METHOD(Qt_Core_QTimeLine_QTimeLine, frameForTime);
PHP_METHOD(Qt_Core_QTimeLine_QTimeLine, valueForTime);
PHP_METHOD(Qt_Core_QTimeLine_QTimeLine, start);
PHP_METHOD(Qt_Core_QTimeLine_QTimeLine, resume);
PHP_METHOD(Qt_Core_QTimeLine_QTimeLine, stop);
PHP_METHOD(Qt_Core_QTimeLine_QTimeLine, setPaused);
PHP_METHOD(Qt_Core_QTimeLine_QTimeLine, setCurrentTime);
PHP_METHOD(Qt_Core_QTimeLine_QTimeLine, toggleDirection);
PHP_METHOD(Qt_Core_QTimeLine_QTimeLine, timerEvent);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qtimeline_qtimeline_staticmetaobject, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qtimeline_qtimeline_tr, 0, 1, IS_STRING, 0)
	ZEND_ARG_INFO(0, s)
	ZEND_ARG_INFO(0, c)
	ZEND_ARG_TYPE_INFO(0, n, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qtimeline_qtimeline_new_, 0, 0, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, duration, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qtimeline_qtimeline_state, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qtimeline_qtimeline_loopcount, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qtimeline_qtimeline_setloopcount, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, count, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qtimeline_qtimeline_direction, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qtimeline_qtimeline_setdirection, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, direction, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qtimeline_qtimeline_duration, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qtimeline_qtimeline_setduration, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, duration, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qtimeline_qtimeline_startframe, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qtimeline_qtimeline_setstartframe, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, frame, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qtimeline_qtimeline_endframe, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qtimeline_qtimeline_setendframe, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, frame, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qtimeline_qtimeline_setframerange, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, startFrame, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, endFrame, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qtimeline_qtimeline_updateinterval, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qtimeline_qtimeline_setupdateinterval, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, interval, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qtimeline_qtimeline_easingcurve, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qtimeline_qtimeline_seteasingcurve, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, curve, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qtimeline_qtimeline_currenttime, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qtimeline_qtimeline_currentframe, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qtimeline_qtimeline_currentvalue, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qtimeline_qtimeline_framefortime, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, msec, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qtimeline_qtimeline_valuefortime, 0, 2, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, msec, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qtimeline_qtimeline_start, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qtimeline_qtimeline_resume, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qtimeline_qtimeline_stop, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qtimeline_qtimeline_setpaused, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, paused, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qtimeline_qtimeline_setcurrenttime, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, msec, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qtimeline_qtimeline_toggledirection, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qtimeline_qtimeline_timerevent, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, event, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_core_qtimeline_qtimeline_method_entry) {
	PHP_ME(Qt_Core_QTimeLine_QTimeLine, staticMetaObject, arginfo_qt_core_qtimeline_qtimeline_staticmetaobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QTimeLine_QTimeLine, tr, arginfo_qt_core_qtimeline_qtimeline_tr, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QTimeLine_QTimeLine, new_, arginfo_qt_core_qtimeline_qtimeline_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QTimeLine_QTimeLine, state, arginfo_qt_core_qtimeline_qtimeline_state, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QTimeLine_QTimeLine, loopCount, arginfo_qt_core_qtimeline_qtimeline_loopcount, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QTimeLine_QTimeLine, setLoopCount, arginfo_qt_core_qtimeline_qtimeline_setloopcount, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QTimeLine_QTimeLine, direction, arginfo_qt_core_qtimeline_qtimeline_direction, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QTimeLine_QTimeLine, setDirection, arginfo_qt_core_qtimeline_qtimeline_setdirection, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QTimeLine_QTimeLine, duration, arginfo_qt_core_qtimeline_qtimeline_duration, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QTimeLine_QTimeLine, setDuration, arginfo_qt_core_qtimeline_qtimeline_setduration, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QTimeLine_QTimeLine, startFrame, arginfo_qt_core_qtimeline_qtimeline_startframe, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QTimeLine_QTimeLine, setStartFrame, arginfo_qt_core_qtimeline_qtimeline_setstartframe, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QTimeLine_QTimeLine, endFrame, arginfo_qt_core_qtimeline_qtimeline_endframe, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QTimeLine_QTimeLine, setEndFrame, arginfo_qt_core_qtimeline_qtimeline_setendframe, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QTimeLine_QTimeLine, setFrameRange, arginfo_qt_core_qtimeline_qtimeline_setframerange, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QTimeLine_QTimeLine, updateInterval, arginfo_qt_core_qtimeline_qtimeline_updateinterval, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QTimeLine_QTimeLine, setUpdateInterval, arginfo_qt_core_qtimeline_qtimeline_setupdateinterval, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QTimeLine_QTimeLine, easingCurve, arginfo_qt_core_qtimeline_qtimeline_easingcurve, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QTimeLine_QTimeLine, setEasingCurve, arginfo_qt_core_qtimeline_qtimeline_seteasingcurve, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QTimeLine_QTimeLine, currentTime, arginfo_qt_core_qtimeline_qtimeline_currenttime, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QTimeLine_QTimeLine, currentFrame, arginfo_qt_core_qtimeline_qtimeline_currentframe, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QTimeLine_QTimeLine, currentValue, arginfo_qt_core_qtimeline_qtimeline_currentvalue, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QTimeLine_QTimeLine, frameForTime, arginfo_qt_core_qtimeline_qtimeline_framefortime, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QTimeLine_QTimeLine, valueForTime, arginfo_qt_core_qtimeline_qtimeline_valuefortime, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QTimeLine_QTimeLine, start, arginfo_qt_core_qtimeline_qtimeline_start, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QTimeLine_QTimeLine, resume, arginfo_qt_core_qtimeline_qtimeline_resume, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QTimeLine_QTimeLine, stop, arginfo_qt_core_qtimeline_qtimeline_stop, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QTimeLine_QTimeLine, setPaused, arginfo_qt_core_qtimeline_qtimeline_setpaused, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QTimeLine_QTimeLine, setCurrentTime, arginfo_qt_core_qtimeline_qtimeline_setcurrenttime, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QTimeLine_QTimeLine, toggleDirection, arginfo_qt_core_qtimeline_qtimeline_toggledirection, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QTimeLine_QTimeLine, timerEvent, arginfo_qt_core_qtimeline_qtimeline_timerevent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
