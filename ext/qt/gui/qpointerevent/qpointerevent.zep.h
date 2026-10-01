
extern zend_class_entry *qt_gui_qpointerevent_qpointerevent_ce;

ZEPHIR_INIT_CLASS(Qt_Gui_QPointerEvent_QPointerEvent);

PHP_METHOD(Qt_Gui_QPointerEvent_QPointerEvent, staticMetaObject);
PHP_METHOD(Qt_Gui_QPointerEvent_QPointerEvent, qt_check_for_QGADGET_macro);
PHP_METHOD(Qt_Gui_QPointerEvent_QPointerEvent, new_);
PHP_METHOD(Qt_Gui_QPointerEvent_QPointerEvent, clone_);
PHP_METHOD(Qt_Gui_QPointerEvent_QPointerEvent, newQEventTypeQPointingDeviceQtKeyboardModifiersQListQEventPoint);
PHP_METHOD(Qt_Gui_QPointerEvent_QPointerEvent, pointingDevice);
PHP_METHOD(Qt_Gui_QPointerEvent_QPointerEvent, pointerType);
PHP_METHOD(Qt_Gui_QPointerEvent_QPointerEvent, setTimestamp);
PHP_METHOD(Qt_Gui_QPointerEvent_QPointerEvent, pointCount);
PHP_METHOD(Qt_Gui_QPointerEvent_QPointerEvent, point);
PHP_METHOD(Qt_Gui_QPointerEvent_QPointerEvent, points);
PHP_METHOD(Qt_Gui_QPointerEvent_QPointerEvent, pointById);
PHP_METHOD(Qt_Gui_QPointerEvent_QPointerEvent, allPointsGrabbed);
PHP_METHOD(Qt_Gui_QPointerEvent_QPointerEvent, isBeginEvent);
PHP_METHOD(Qt_Gui_QPointerEvent_QPointerEvent, isUpdateEvent);
PHP_METHOD(Qt_Gui_QPointerEvent_QPointerEvent, isEndEvent);
PHP_METHOD(Qt_Gui_QPointerEvent_QPointerEvent, allPointsAccepted);
PHP_METHOD(Qt_Gui_QPointerEvent_QPointerEvent, setAccepted);
PHP_METHOD(Qt_Gui_QPointerEvent_QPointerEvent, exclusiveGrabber);
PHP_METHOD(Qt_Gui_QPointerEvent_QPointerEvent, setExclusiveGrabber);
PHP_METHOD(Qt_Gui_QPointerEvent_QPointerEvent, clearPassiveGrabbers);
PHP_METHOD(Qt_Gui_QPointerEvent_QPointerEvent, addPassiveGrabber);
PHP_METHOD(Qt_Gui_QPointerEvent_QPointerEvent, removePassiveGrabber);
PHP_METHOD(Qt_Gui_QPointerEvent_QPointerEvent, m_points);
PHP_METHOD(Qt_Gui_QPointerEvent_QPointerEvent, setM_points);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpointerevent_qpointerevent_staticmetaobject, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpointerevent_qpointerevent_qt_check_for_qgadget_macro, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpointerevent_qpointerevent_new_, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpointerevent_qpointerevent_clone_, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpointerevent_qpointerevent_newqeventtypeqpointingdeviceqtkeyboardmodifiersqlistqeventpoint, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, type, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, dev, IS_LONG, 0)
	ZEND_ARG_INFO(0, modifiers)
	ZEND_ARG_INFO(0, points)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpointerevent_qpointerevent_pointingdevice, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpointerevent_qpointerevent_pointertype, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpointerevent_qpointerevent_settimestamp, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, timestamp, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpointerevent_qpointerevent_pointcount, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpointerevent_qpointerevent_point, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, i, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpointerevent_qpointerevent_points, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpointerevent_qpointerevent_pointbyid, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, id, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpointerevent_qpointerevent_allpointsgrabbed, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpointerevent_qpointerevent_isbeginevent, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpointerevent_qpointerevent_isupdateevent, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpointerevent_qpointerevent_isendevent, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpointerevent_qpointerevent_allpointsaccepted, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpointerevent_qpointerevent_setaccepted, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, accepted, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpointerevent_qpointerevent_exclusivegrabber, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, point, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpointerevent_qpointerevent_setexclusivegrabber, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, point, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, exclusiveGrabber, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpointerevent_qpointerevent_clearpassivegrabbers, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, point, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpointerevent_qpointerevent_addpassivegrabber, 0, 3, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, point, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, grabber, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpointerevent_qpointerevent_removepassivegrabber, 0, 3, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, point, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, grabber, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpointerevent_qpointerevent_m_points, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpointerevent_qpointerevent_setm_points, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_ARRAY_INFO(0, value, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_gui_qpointerevent_qpointerevent_method_entry) {
	PHP_ME(Qt_Gui_QPointerEvent_QPointerEvent, staticMetaObject, arginfo_qt_gui_qpointerevent_qpointerevent_staticmetaobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPointerEvent_QPointerEvent, qt_check_for_QGADGET_macro, arginfo_qt_gui_qpointerevent_qpointerevent_qt_check_for_qgadget_macro, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPointerEvent_QPointerEvent, new_, arginfo_qt_gui_qpointerevent_qpointerevent_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPointerEvent_QPointerEvent, clone_, arginfo_qt_gui_qpointerevent_qpointerevent_clone_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPointerEvent_QPointerEvent, newQEventTypeQPointingDeviceQtKeyboardModifiersQListQEventPoint, arginfo_qt_gui_qpointerevent_qpointerevent_newqeventtypeqpointingdeviceqtkeyboardmodifiersqlistqeventpoint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPointerEvent_QPointerEvent, pointingDevice, arginfo_qt_gui_qpointerevent_qpointerevent_pointingdevice, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPointerEvent_QPointerEvent, pointerType, arginfo_qt_gui_qpointerevent_qpointerevent_pointertype, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPointerEvent_QPointerEvent, setTimestamp, arginfo_qt_gui_qpointerevent_qpointerevent_settimestamp, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPointerEvent_QPointerEvent, pointCount, arginfo_qt_gui_qpointerevent_qpointerevent_pointcount, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPointerEvent_QPointerEvent, point, arginfo_qt_gui_qpointerevent_qpointerevent_point, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPointerEvent_QPointerEvent, points, arginfo_qt_gui_qpointerevent_qpointerevent_points, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPointerEvent_QPointerEvent, pointById, arginfo_qt_gui_qpointerevent_qpointerevent_pointbyid, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPointerEvent_QPointerEvent, allPointsGrabbed, arginfo_qt_gui_qpointerevent_qpointerevent_allpointsgrabbed, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPointerEvent_QPointerEvent, isBeginEvent, arginfo_qt_gui_qpointerevent_qpointerevent_isbeginevent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPointerEvent_QPointerEvent, isUpdateEvent, arginfo_qt_gui_qpointerevent_qpointerevent_isupdateevent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPointerEvent_QPointerEvent, isEndEvent, arginfo_qt_gui_qpointerevent_qpointerevent_isendevent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPointerEvent_QPointerEvent, allPointsAccepted, arginfo_qt_gui_qpointerevent_qpointerevent_allpointsaccepted, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPointerEvent_QPointerEvent, setAccepted, arginfo_qt_gui_qpointerevent_qpointerevent_setaccepted, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPointerEvent_QPointerEvent, exclusiveGrabber, arginfo_qt_gui_qpointerevent_qpointerevent_exclusivegrabber, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPointerEvent_QPointerEvent, setExclusiveGrabber, arginfo_qt_gui_qpointerevent_qpointerevent_setexclusivegrabber, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPointerEvent_QPointerEvent, clearPassiveGrabbers, arginfo_qt_gui_qpointerevent_qpointerevent_clearpassivegrabbers, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPointerEvent_QPointerEvent, addPassiveGrabber, arginfo_qt_gui_qpointerevent_qpointerevent_addpassivegrabber, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPointerEvent_QPointerEvent, removePassiveGrabber, arginfo_qt_gui_qpointerevent_qpointerevent_removepassivegrabber, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPointerEvent_QPointerEvent, m_points, arginfo_qt_gui_qpointerevent_qpointerevent_m_points, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPointerEvent_QPointerEvent, setM_points, arginfo_qt_gui_qpointerevent_qpointerevent_setm_points, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
