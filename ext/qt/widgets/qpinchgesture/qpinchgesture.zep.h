
extern zend_class_entry *qt_widgets_qpinchgesture_qpinchgesture_ce;

ZEPHIR_INIT_CLASS(Qt_Widgets_QPinchGesture_QPinchGesture);

PHP_METHOD(Qt_Widgets_QPinchGesture_QPinchGesture, staticMetaObject);
PHP_METHOD(Qt_Widgets_QPinchGesture_QPinchGesture, tr);
PHP_METHOD(Qt_Widgets_QPinchGesture_QPinchGesture, new_);
PHP_METHOD(Qt_Widgets_QPinchGesture_QPinchGesture, totalChangeFlags);
PHP_METHOD(Qt_Widgets_QPinchGesture_QPinchGesture, setTotalChangeFlags);
PHP_METHOD(Qt_Widgets_QPinchGesture_QPinchGesture, changeFlags);
PHP_METHOD(Qt_Widgets_QPinchGesture_QPinchGesture, setChangeFlags);
PHP_METHOD(Qt_Widgets_QPinchGesture_QPinchGesture, startCenterPoint);
PHP_METHOD(Qt_Widgets_QPinchGesture_QPinchGesture, lastCenterPoint);
PHP_METHOD(Qt_Widgets_QPinchGesture_QPinchGesture, centerPoint);
PHP_METHOD(Qt_Widgets_QPinchGesture_QPinchGesture, setStartCenterPoint);
PHP_METHOD(Qt_Widgets_QPinchGesture_QPinchGesture, setLastCenterPoint);
PHP_METHOD(Qt_Widgets_QPinchGesture_QPinchGesture, setCenterPoint);
PHP_METHOD(Qt_Widgets_QPinchGesture_QPinchGesture, totalScaleFactor);
PHP_METHOD(Qt_Widgets_QPinchGesture_QPinchGesture, lastScaleFactor);
PHP_METHOD(Qt_Widgets_QPinchGesture_QPinchGesture, scaleFactor);
PHP_METHOD(Qt_Widgets_QPinchGesture_QPinchGesture, setTotalScaleFactor);
PHP_METHOD(Qt_Widgets_QPinchGesture_QPinchGesture, setLastScaleFactor);
PHP_METHOD(Qt_Widgets_QPinchGesture_QPinchGesture, setScaleFactor);
PHP_METHOD(Qt_Widgets_QPinchGesture_QPinchGesture, totalRotationAngle);
PHP_METHOD(Qt_Widgets_QPinchGesture_QPinchGesture, lastRotationAngle);
PHP_METHOD(Qt_Widgets_QPinchGesture_QPinchGesture, rotationAngle);
PHP_METHOD(Qt_Widgets_QPinchGesture_QPinchGesture, setTotalRotationAngle);
PHP_METHOD(Qt_Widgets_QPinchGesture_QPinchGesture, setLastRotationAngle);
PHP_METHOD(Qt_Widgets_QPinchGesture_QPinchGesture, setRotationAngle);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qpinchgesture_qpinchgesture_staticmetaobject, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qpinchgesture_qpinchgesture_tr, 0, 1, IS_STRING, 0)
	ZEND_ARG_INFO(0, s)
	ZEND_ARG_INFO(0, c)
	ZEND_ARG_TYPE_INFO(0, n, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qpinchgesture_qpinchgesture_new_, 0, 0, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qpinchgesture_qpinchgesture_totalchangeflags, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qpinchgesture_qpinchgesture_settotalchangeflags, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qpinchgesture_qpinchgesture_changeflags, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qpinchgesture_qpinchgesture_setchangeflags, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qpinchgesture_qpinchgesture_startcenterpoint, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qpinchgesture_qpinchgesture_lastcenterpoint, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qpinchgesture_qpinchgesture_centerpoint, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qpinchgesture_qpinchgesture_setstartcenterpoint, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, valueX, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, valueY, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qpinchgesture_qpinchgesture_setlastcenterpoint, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, valueX, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, valueY, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qpinchgesture_qpinchgesture_setcenterpoint, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, valueX, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, valueY, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qpinchgesture_qpinchgesture_totalscalefactor, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qpinchgesture_qpinchgesture_lastscalefactor, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qpinchgesture_qpinchgesture_scalefactor, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qpinchgesture_qpinchgesture_settotalscalefactor, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qpinchgesture_qpinchgesture_setlastscalefactor, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qpinchgesture_qpinchgesture_setscalefactor, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qpinchgesture_qpinchgesture_totalrotationangle, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qpinchgesture_qpinchgesture_lastrotationangle, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qpinchgesture_qpinchgesture_rotationangle, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qpinchgesture_qpinchgesture_settotalrotationangle, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qpinchgesture_qpinchgesture_setlastrotationangle, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qpinchgesture_qpinchgesture_setrotationangle, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_widgets_qpinchgesture_qpinchgesture_method_entry) {
	PHP_ME(Qt_Widgets_QPinchGesture_QPinchGesture, staticMetaObject, arginfo_qt_widgets_qpinchgesture_qpinchgesture_staticmetaobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QPinchGesture_QPinchGesture, tr, arginfo_qt_widgets_qpinchgesture_qpinchgesture_tr, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QPinchGesture_QPinchGesture, new_, arginfo_qt_widgets_qpinchgesture_qpinchgesture_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QPinchGesture_QPinchGesture, totalChangeFlags, arginfo_qt_widgets_qpinchgesture_qpinchgesture_totalchangeflags, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QPinchGesture_QPinchGesture, setTotalChangeFlags, arginfo_qt_widgets_qpinchgesture_qpinchgesture_settotalchangeflags, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QPinchGesture_QPinchGesture, changeFlags, arginfo_qt_widgets_qpinchgesture_qpinchgesture_changeflags, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QPinchGesture_QPinchGesture, setChangeFlags, arginfo_qt_widgets_qpinchgesture_qpinchgesture_setchangeflags, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QPinchGesture_QPinchGesture, startCenterPoint, arginfo_qt_widgets_qpinchgesture_qpinchgesture_startcenterpoint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QPinchGesture_QPinchGesture, lastCenterPoint, arginfo_qt_widgets_qpinchgesture_qpinchgesture_lastcenterpoint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QPinchGesture_QPinchGesture, centerPoint, arginfo_qt_widgets_qpinchgesture_qpinchgesture_centerpoint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QPinchGesture_QPinchGesture, setStartCenterPoint, arginfo_qt_widgets_qpinchgesture_qpinchgesture_setstartcenterpoint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QPinchGesture_QPinchGesture, setLastCenterPoint, arginfo_qt_widgets_qpinchgesture_qpinchgesture_setlastcenterpoint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QPinchGesture_QPinchGesture, setCenterPoint, arginfo_qt_widgets_qpinchgesture_qpinchgesture_setcenterpoint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QPinchGesture_QPinchGesture, totalScaleFactor, arginfo_qt_widgets_qpinchgesture_qpinchgesture_totalscalefactor, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QPinchGesture_QPinchGesture, lastScaleFactor, arginfo_qt_widgets_qpinchgesture_qpinchgesture_lastscalefactor, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QPinchGesture_QPinchGesture, scaleFactor, arginfo_qt_widgets_qpinchgesture_qpinchgesture_scalefactor, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QPinchGesture_QPinchGesture, setTotalScaleFactor, arginfo_qt_widgets_qpinchgesture_qpinchgesture_settotalscalefactor, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QPinchGesture_QPinchGesture, setLastScaleFactor, arginfo_qt_widgets_qpinchgesture_qpinchgesture_setlastscalefactor, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QPinchGesture_QPinchGesture, setScaleFactor, arginfo_qt_widgets_qpinchgesture_qpinchgesture_setscalefactor, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QPinchGesture_QPinchGesture, totalRotationAngle, arginfo_qt_widgets_qpinchgesture_qpinchgesture_totalrotationangle, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QPinchGesture_QPinchGesture, lastRotationAngle, arginfo_qt_widgets_qpinchgesture_qpinchgesture_lastrotationangle, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QPinchGesture_QPinchGesture, rotationAngle, arginfo_qt_widgets_qpinchgesture_qpinchgesture_rotationangle, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QPinchGesture_QPinchGesture, setTotalRotationAngle, arginfo_qt_widgets_qpinchgesture_qpinchgesture_settotalrotationangle, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QPinchGesture_QPinchGesture, setLastRotationAngle, arginfo_qt_widgets_qpinchgesture_qpinchgesture_setlastrotationangle, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QPinchGesture_QPinchGesture, setRotationAngle, arginfo_qt_widgets_qpinchgesture_qpinchgesture_setrotationangle, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
