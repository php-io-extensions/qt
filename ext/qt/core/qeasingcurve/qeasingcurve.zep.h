
extern zend_class_entry *qt_core_qeasingcurve_qeasingcurve_ce;

ZEPHIR_INIT_CLASS(Qt_Core_QEasingCurve_QEasingCurve);

PHP_METHOD(Qt_Core_QEasingCurve_QEasingCurve, staticMetaObject);
PHP_METHOD(Qt_Core_QEasingCurve_QEasingCurve, qt_check_for_QGADGET_macro);
PHP_METHOD(Qt_Core_QEasingCurve_QEasingCurve, new_);
PHP_METHOD(Qt_Core_QEasingCurve_QEasingCurve, newQEasingCurve);
PHP_METHOD(Qt_Core_QEasingCurve_QEasingCurve, swap);
PHP_METHOD(Qt_Core_QEasingCurve_QEasingCurve, amplitude);
PHP_METHOD(Qt_Core_QEasingCurve_QEasingCurve, setAmplitude);
PHP_METHOD(Qt_Core_QEasingCurve_QEasingCurve, period);
PHP_METHOD(Qt_Core_QEasingCurve_QEasingCurve, setPeriod);
PHP_METHOD(Qt_Core_QEasingCurve_QEasingCurve, overshoot);
PHP_METHOD(Qt_Core_QEasingCurve_QEasingCurve, setOvershoot);
PHP_METHOD(Qt_Core_QEasingCurve_QEasingCurve, addCubicBezierSegment);
PHP_METHOD(Qt_Core_QEasingCurve_QEasingCurve, addTCBSegment);
PHP_METHOD(Qt_Core_QEasingCurve_QEasingCurve, toCubicSpline);
PHP_METHOD(Qt_Core_QEasingCurve_QEasingCurve, type);
PHP_METHOD(Qt_Core_QEasingCurve_QEasingCurve, setType);
PHP_METHOD(Qt_Core_QEasingCurve_QEasingCurve, valueForProgress);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qeasingcurve_qeasingcurve_staticmetaobject, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qeasingcurve_qeasingcurve_qt_check_for_qgadget_macro, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qeasingcurve_qeasingcurve_new_, 0, 0, IS_LONG, 0)
	ZEND_ARG_INFO(0, type)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qeasingcurve_qeasingcurve_newqeasingcurve, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, other, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qeasingcurve_qeasingcurve_swap, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, other, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qeasingcurve_qeasingcurve_amplitude, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qeasingcurve_qeasingcurve_setamplitude, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, amplitude, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qeasingcurve_qeasingcurve_period, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qeasingcurve_qeasingcurve_setperiod, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, period, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qeasingcurve_qeasingcurve_overshoot, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qeasingcurve_qeasingcurve_setovershoot, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, overshoot, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qeasingcurve_qeasingcurve_addcubicbeziersegment, 0, 7, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, c1X, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, c1Y, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, c2X, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, c2Y, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, endPointX, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, endPointY, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qeasingcurve_qeasingcurve_addtcbsegment, 0, 6, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, nextPointX, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, nextPointY, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, t, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, c, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, b, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qeasingcurve_qeasingcurve_tocubicspline, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qeasingcurve_qeasingcurve_type, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qeasingcurve_qeasingcurve_settype, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, type, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qeasingcurve_qeasingcurve_valueforprogress, 0, 2, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, progress, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_core_qeasingcurve_qeasingcurve_method_entry) {
	PHP_ME(Qt_Core_QEasingCurve_QEasingCurve, staticMetaObject, arginfo_qt_core_qeasingcurve_qeasingcurve_staticmetaobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QEasingCurve_QEasingCurve, qt_check_for_QGADGET_macro, arginfo_qt_core_qeasingcurve_qeasingcurve_qt_check_for_qgadget_macro, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QEasingCurve_QEasingCurve, new_, arginfo_qt_core_qeasingcurve_qeasingcurve_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QEasingCurve_QEasingCurve, newQEasingCurve, arginfo_qt_core_qeasingcurve_qeasingcurve_newqeasingcurve, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QEasingCurve_QEasingCurve, swap, arginfo_qt_core_qeasingcurve_qeasingcurve_swap, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QEasingCurve_QEasingCurve, amplitude, arginfo_qt_core_qeasingcurve_qeasingcurve_amplitude, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QEasingCurve_QEasingCurve, setAmplitude, arginfo_qt_core_qeasingcurve_qeasingcurve_setamplitude, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QEasingCurve_QEasingCurve, period, arginfo_qt_core_qeasingcurve_qeasingcurve_period, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QEasingCurve_QEasingCurve, setPeriod, arginfo_qt_core_qeasingcurve_qeasingcurve_setperiod, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QEasingCurve_QEasingCurve, overshoot, arginfo_qt_core_qeasingcurve_qeasingcurve_overshoot, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QEasingCurve_QEasingCurve, setOvershoot, arginfo_qt_core_qeasingcurve_qeasingcurve_setovershoot, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QEasingCurve_QEasingCurve, addCubicBezierSegment, arginfo_qt_core_qeasingcurve_qeasingcurve_addcubicbeziersegment, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QEasingCurve_QEasingCurve, addTCBSegment, arginfo_qt_core_qeasingcurve_qeasingcurve_addtcbsegment, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QEasingCurve_QEasingCurve, toCubicSpline, arginfo_qt_core_qeasingcurve_qeasingcurve_tocubicspline, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QEasingCurve_QEasingCurve, type, arginfo_qt_core_qeasingcurve_qeasingcurve_type, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QEasingCurve_QEasingCurve, setType, arginfo_qt_core_qeasingcurve_qeasingcurve_settype, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QEasingCurve_QEasingCurve, valueForProgress, arginfo_qt_core_qeasingcurve_qeasingcurve_valueforprogress, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
