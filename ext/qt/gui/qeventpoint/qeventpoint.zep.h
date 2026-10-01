
extern zend_class_entry *qt_gui_qeventpoint_qeventpoint_ce;

ZEPHIR_INIT_CLASS(Qt_Gui_QEventPoint_QEventPoint);

PHP_METHOD(Qt_Gui_QEventPoint_QEventPoint, staticMetaObject);
PHP_METHOD(Qt_Gui_QEventPoint_QEventPoint, qt_check_for_QGADGET_macro);
PHP_METHOD(Qt_Gui_QEventPoint_QEventPoint, new_);
PHP_METHOD(Qt_Gui_QEventPoint_QEventPoint, newIntQEventPointStateQPointFQPointF);
PHP_METHOD(Qt_Gui_QEventPoint_QEventPoint, newQEventPoint);
PHP_METHOD(Qt_Gui_QEventPoint_QEventPoint, swap);
PHP_METHOD(Qt_Gui_QEventPoint_QEventPoint, position);
PHP_METHOD(Qt_Gui_QEventPoint_QEventPoint, pressPosition);
PHP_METHOD(Qt_Gui_QEventPoint_QEventPoint, grabPosition);
PHP_METHOD(Qt_Gui_QEventPoint_QEventPoint, lastPosition);
PHP_METHOD(Qt_Gui_QEventPoint_QEventPoint, scenePosition);
PHP_METHOD(Qt_Gui_QEventPoint_QEventPoint, scenePressPosition);
PHP_METHOD(Qt_Gui_QEventPoint_QEventPoint, sceneGrabPosition);
PHP_METHOD(Qt_Gui_QEventPoint_QEventPoint, sceneLastPosition);
PHP_METHOD(Qt_Gui_QEventPoint_QEventPoint, globalPosition);
PHP_METHOD(Qt_Gui_QEventPoint_QEventPoint, globalPressPosition);
PHP_METHOD(Qt_Gui_QEventPoint_QEventPoint, globalGrabPosition);
PHP_METHOD(Qt_Gui_QEventPoint_QEventPoint, globalLastPosition);
PHP_METHOD(Qt_Gui_QEventPoint_QEventPoint, normalizedPosition);
PHP_METHOD(Qt_Gui_QEventPoint_QEventPoint, velocity);
PHP_METHOD(Qt_Gui_QEventPoint_QEventPoint, state);
PHP_METHOD(Qt_Gui_QEventPoint_QEventPoint, device);
PHP_METHOD(Qt_Gui_QEventPoint_QEventPoint, id);
PHP_METHOD(Qt_Gui_QEventPoint_QEventPoint, uniqueId);
PHP_METHOD(Qt_Gui_QEventPoint_QEventPoint, timestamp);
PHP_METHOD(Qt_Gui_QEventPoint_QEventPoint, lastTimestamp);
PHP_METHOD(Qt_Gui_QEventPoint_QEventPoint, pressTimestamp);
PHP_METHOD(Qt_Gui_QEventPoint_QEventPoint, timeHeld);
PHP_METHOD(Qt_Gui_QEventPoint_QEventPoint, pressure);
PHP_METHOD(Qt_Gui_QEventPoint_QEventPoint, rotation);
PHP_METHOD(Qt_Gui_QEventPoint_QEventPoint, ellipseDiameters);
PHP_METHOD(Qt_Gui_QEventPoint_QEventPoint, isAccepted);
PHP_METHOD(Qt_Gui_QEventPoint_QEventPoint, setAccepted);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qeventpoint_qeventpoint_staticmetaobject, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qeventpoint_qeventpoint_qt_check_for_qgadget_macro, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qeventpoint_qeventpoint_new_, 0, 0, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, id, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, device, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qeventpoint_qeventpoint_newintqeventpointstateqpointfqpointf, 0, 6, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, pointId, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, state, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, scenePositionX, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, scenePositionY, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, globalPositionX, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, globalPositionY, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qeventpoint_qeventpoint_newqeventpoint, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, other, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qeventpoint_qeventpoint_swap, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, other, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qeventpoint_qeventpoint_position, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qeventpoint_qeventpoint_pressposition, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qeventpoint_qeventpoint_grabposition, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qeventpoint_qeventpoint_lastposition, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qeventpoint_qeventpoint_sceneposition, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qeventpoint_qeventpoint_scenepressposition, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qeventpoint_qeventpoint_scenegrabposition, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qeventpoint_qeventpoint_scenelastposition, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qeventpoint_qeventpoint_globalposition, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qeventpoint_qeventpoint_globalpressposition, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qeventpoint_qeventpoint_globalgrabposition, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qeventpoint_qeventpoint_globallastposition, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qeventpoint_qeventpoint_normalizedposition, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qeventpoint_qeventpoint_velocity, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qeventpoint_qeventpoint_state, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qeventpoint_qeventpoint_device, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qeventpoint_qeventpoint_id, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qeventpoint_qeventpoint_uniqueid, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qeventpoint_qeventpoint_timestamp, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qeventpoint_qeventpoint_lasttimestamp, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qeventpoint_qeventpoint_presstimestamp, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qeventpoint_qeventpoint_timeheld, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qeventpoint_qeventpoint_pressure, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qeventpoint_qeventpoint_rotation, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qeventpoint_qeventpoint_ellipsediameters, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qeventpoint_qeventpoint_isaccepted, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qeventpoint_qeventpoint_setaccepted, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, accepted, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_gui_qeventpoint_qeventpoint_method_entry) {
	PHP_ME(Qt_Gui_QEventPoint_QEventPoint, staticMetaObject, arginfo_qt_gui_qeventpoint_qeventpoint_staticmetaobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QEventPoint_QEventPoint, qt_check_for_QGADGET_macro, arginfo_qt_gui_qeventpoint_qeventpoint_qt_check_for_qgadget_macro, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QEventPoint_QEventPoint, new_, arginfo_qt_gui_qeventpoint_qeventpoint_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QEventPoint_QEventPoint, newIntQEventPointStateQPointFQPointF, arginfo_qt_gui_qeventpoint_qeventpoint_newintqeventpointstateqpointfqpointf, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QEventPoint_QEventPoint, newQEventPoint, arginfo_qt_gui_qeventpoint_qeventpoint_newqeventpoint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QEventPoint_QEventPoint, swap, arginfo_qt_gui_qeventpoint_qeventpoint_swap, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QEventPoint_QEventPoint, position, arginfo_qt_gui_qeventpoint_qeventpoint_position, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QEventPoint_QEventPoint, pressPosition, arginfo_qt_gui_qeventpoint_qeventpoint_pressposition, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QEventPoint_QEventPoint, grabPosition, arginfo_qt_gui_qeventpoint_qeventpoint_grabposition, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QEventPoint_QEventPoint, lastPosition, arginfo_qt_gui_qeventpoint_qeventpoint_lastposition, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QEventPoint_QEventPoint, scenePosition, arginfo_qt_gui_qeventpoint_qeventpoint_sceneposition, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QEventPoint_QEventPoint, scenePressPosition, arginfo_qt_gui_qeventpoint_qeventpoint_scenepressposition, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QEventPoint_QEventPoint, sceneGrabPosition, arginfo_qt_gui_qeventpoint_qeventpoint_scenegrabposition, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QEventPoint_QEventPoint, sceneLastPosition, arginfo_qt_gui_qeventpoint_qeventpoint_scenelastposition, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QEventPoint_QEventPoint, globalPosition, arginfo_qt_gui_qeventpoint_qeventpoint_globalposition, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QEventPoint_QEventPoint, globalPressPosition, arginfo_qt_gui_qeventpoint_qeventpoint_globalpressposition, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QEventPoint_QEventPoint, globalGrabPosition, arginfo_qt_gui_qeventpoint_qeventpoint_globalgrabposition, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QEventPoint_QEventPoint, globalLastPosition, arginfo_qt_gui_qeventpoint_qeventpoint_globallastposition, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QEventPoint_QEventPoint, normalizedPosition, arginfo_qt_gui_qeventpoint_qeventpoint_normalizedposition, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QEventPoint_QEventPoint, velocity, arginfo_qt_gui_qeventpoint_qeventpoint_velocity, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QEventPoint_QEventPoint, state, arginfo_qt_gui_qeventpoint_qeventpoint_state, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QEventPoint_QEventPoint, device, arginfo_qt_gui_qeventpoint_qeventpoint_device, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QEventPoint_QEventPoint, id, arginfo_qt_gui_qeventpoint_qeventpoint_id, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QEventPoint_QEventPoint, uniqueId, arginfo_qt_gui_qeventpoint_qeventpoint_uniqueid, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QEventPoint_QEventPoint, timestamp, arginfo_qt_gui_qeventpoint_qeventpoint_timestamp, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QEventPoint_QEventPoint, lastTimestamp, arginfo_qt_gui_qeventpoint_qeventpoint_lasttimestamp, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QEventPoint_QEventPoint, pressTimestamp, arginfo_qt_gui_qeventpoint_qeventpoint_presstimestamp, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QEventPoint_QEventPoint, timeHeld, arginfo_qt_gui_qeventpoint_qeventpoint_timeheld, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QEventPoint_QEventPoint, pressure, arginfo_qt_gui_qeventpoint_qeventpoint_pressure, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QEventPoint_QEventPoint, rotation, arginfo_qt_gui_qeventpoint_qeventpoint_rotation, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QEventPoint_QEventPoint, ellipseDiameters, arginfo_qt_gui_qeventpoint_qeventpoint_ellipsediameters, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QEventPoint_QEventPoint, isAccepted, arginfo_qt_gui_qeventpoint_qeventpoint_isaccepted, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QEventPoint_QEventPoint, setAccepted, arginfo_qt_gui_qeventpoint_qeventpoint_setaccepted, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
