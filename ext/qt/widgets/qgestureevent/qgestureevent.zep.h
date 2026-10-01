
extern zend_class_entry *qt_widgets_qgestureevent_qgestureevent_ce;

ZEPHIR_INIT_CLASS(Qt_Widgets_QGestureEvent_QGestureEvent);

PHP_METHOD(Qt_Widgets_QGestureEvent_QGestureEvent, setAccepted);
PHP_METHOD(Qt_Widgets_QGestureEvent_QGestureEvent, isAccepted);
PHP_METHOD(Qt_Widgets_QGestureEvent_QGestureEvent, accept);
PHP_METHOD(Qt_Widgets_QGestureEvent_QGestureEvent, ignore);
PHP_METHOD(Qt_Widgets_QGestureEvent_QGestureEvent, new_);
PHP_METHOD(Qt_Widgets_QGestureEvent_QGestureEvent, gestures);
PHP_METHOD(Qt_Widgets_QGestureEvent_QGestureEvent, gesture);
PHP_METHOD(Qt_Widgets_QGestureEvent_QGestureEvent, activeGestures);
PHP_METHOD(Qt_Widgets_QGestureEvent_QGestureEvent, canceledGestures);
PHP_METHOD(Qt_Widgets_QGestureEvent_QGestureEvent, setAcceptedQGestureBool);
PHP_METHOD(Qt_Widgets_QGestureEvent_QGestureEvent, acceptQGesture);
PHP_METHOD(Qt_Widgets_QGestureEvent_QGestureEvent, ignoreQGesture);
PHP_METHOD(Qt_Widgets_QGestureEvent_QGestureEvent, isAcceptedQGesture);
PHP_METHOD(Qt_Widgets_QGestureEvent_QGestureEvent, setAcceptedQtGestureTypeBool);
PHP_METHOD(Qt_Widgets_QGestureEvent_QGestureEvent, acceptQtGestureType);
PHP_METHOD(Qt_Widgets_QGestureEvent_QGestureEvent, ignoreQtGestureType);
PHP_METHOD(Qt_Widgets_QGestureEvent_QGestureEvent, isAcceptedQtGestureType);
PHP_METHOD(Qt_Widgets_QGestureEvent_QGestureEvent, setWidget);
PHP_METHOD(Qt_Widgets_QGestureEvent_QGestureEvent, widget);
PHP_METHOD(Qt_Widgets_QGestureEvent_QGestureEvent, mapToGraphicsScene);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgestureevent_qgestureevent_setaccepted, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, accepted, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgestureevent_qgestureevent_isaccepted, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgestureevent_qgestureevent_accept, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgestureevent_qgestureevent_ignore, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgestureevent_qgestureevent_new_, 0, 1, IS_LONG, 0)
	ZEND_ARG_ARRAY_INFO(0, gestures, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgestureevent_qgestureevent_gestures, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgestureevent_qgestureevent_gesture, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, type, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgestureevent_qgestureevent_activegestures, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgestureevent_qgestureevent_canceledgestures, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgestureevent_qgestureevent_setacceptedqgesturebool, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg1, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgestureevent_qgestureevent_acceptqgesture, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgestureevent_qgestureevent_ignoreqgesture, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgestureevent_qgestureevent_isacceptedqgesture, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgestureevent_qgestureevent_setacceptedqtgesturetypebool, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg1, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgestureevent_qgestureevent_acceptqtgesturetype, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgestureevent_qgestureevent_ignoreqtgesturetype, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgestureevent_qgestureevent_isacceptedqtgesturetype, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgestureevent_qgestureevent_setwidget, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, widget, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgestureevent_qgestureevent_widget, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgestureevent_qgestureevent_maptographicsscene, 0, 3, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, gesturePointX, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, gesturePointY, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_widgets_qgestureevent_qgestureevent_method_entry) {
	PHP_ME(Qt_Widgets_QGestureEvent_QGestureEvent, setAccepted, arginfo_qt_widgets_qgestureevent_qgestureevent_setaccepted, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGestureEvent_QGestureEvent, isAccepted, arginfo_qt_widgets_qgestureevent_qgestureevent_isaccepted, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGestureEvent_QGestureEvent, accept, arginfo_qt_widgets_qgestureevent_qgestureevent_accept, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGestureEvent_QGestureEvent, ignore, arginfo_qt_widgets_qgestureevent_qgestureevent_ignore, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGestureEvent_QGestureEvent, new_, arginfo_qt_widgets_qgestureevent_qgestureevent_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGestureEvent_QGestureEvent, gestures, arginfo_qt_widgets_qgestureevent_qgestureevent_gestures, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGestureEvent_QGestureEvent, gesture, arginfo_qt_widgets_qgestureevent_qgestureevent_gesture, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGestureEvent_QGestureEvent, activeGestures, arginfo_qt_widgets_qgestureevent_qgestureevent_activegestures, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGestureEvent_QGestureEvent, canceledGestures, arginfo_qt_widgets_qgestureevent_qgestureevent_canceledgestures, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGestureEvent_QGestureEvent, setAcceptedQGestureBool, arginfo_qt_widgets_qgestureevent_qgestureevent_setacceptedqgesturebool, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGestureEvent_QGestureEvent, acceptQGesture, arginfo_qt_widgets_qgestureevent_qgestureevent_acceptqgesture, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGestureEvent_QGestureEvent, ignoreQGesture, arginfo_qt_widgets_qgestureevent_qgestureevent_ignoreqgesture, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGestureEvent_QGestureEvent, isAcceptedQGesture, arginfo_qt_widgets_qgestureevent_qgestureevent_isacceptedqgesture, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGestureEvent_QGestureEvent, setAcceptedQtGestureTypeBool, arginfo_qt_widgets_qgestureevent_qgestureevent_setacceptedqtgesturetypebool, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGestureEvent_QGestureEvent, acceptQtGestureType, arginfo_qt_widgets_qgestureevent_qgestureevent_acceptqtgesturetype, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGestureEvent_QGestureEvent, ignoreQtGestureType, arginfo_qt_widgets_qgestureevent_qgestureevent_ignoreqtgesturetype, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGestureEvent_QGestureEvent, isAcceptedQtGestureType, arginfo_qt_widgets_qgestureevent_qgestureevent_isacceptedqtgesturetype, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGestureEvent_QGestureEvent, setWidget, arginfo_qt_widgets_qgestureevent_qgestureevent_setwidget, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGestureEvent_QGestureEvent, widget, arginfo_qt_widgets_qgestureevent_qgestureevent_widget, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGestureEvent_QGestureEvent, mapToGraphicsScene, arginfo_qt_widgets_qgestureevent_qgestureevent_maptographicsscene, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
