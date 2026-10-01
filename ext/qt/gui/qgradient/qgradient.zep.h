
extern zend_class_entry *qt_gui_qgradient_qgradient_ce;

ZEPHIR_INIT_CLASS(Qt_Gui_QGradient_QGradient);

PHP_METHOD(Qt_Gui_QGradient_QGradient, staticMetaObject);
PHP_METHOD(Qt_Gui_QGradient_QGradient, qt_check_for_QGADGET_macro);
PHP_METHOD(Qt_Gui_QGradient_QGradient, new_);
PHP_METHOD(Qt_Gui_QGradient_QGradient, newQGradientPreset);
PHP_METHOD(Qt_Gui_QGradient_QGradient, type);
PHP_METHOD(Qt_Gui_QGradient_QGradient, setSpread);
PHP_METHOD(Qt_Gui_QGradient_QGradient, spread);
PHP_METHOD(Qt_Gui_QGradient_QGradient, setColorAt);
PHP_METHOD(Qt_Gui_QGradient_QGradient, setStops);
PHP_METHOD(Qt_Gui_QGradient_QGradient, stops);
PHP_METHOD(Qt_Gui_QGradient_QGradient, coordinateMode);
PHP_METHOD(Qt_Gui_QGradient_QGradient, setCoordinateMode);
PHP_METHOD(Qt_Gui_QGradient_QGradient, interpolationMode);
PHP_METHOD(Qt_Gui_QGradient_QGradient, setInterpolationMode);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qgradient_qgradient_staticmetaobject, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qgradient_qgradient_qt_check_for_qgadget_macro, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qgradient_qgradient_new_, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qgradient_qgradient_newqgradientpreset, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qgradient_qgradient_type, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qgradient_qgradient_setspread, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, spread, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qgradient_qgradient_spread, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qgradient_qgradient_setcolorat, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, pos, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, color, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qgradient_qgradient_setstops, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_ARRAY_INFO(0, stops, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qgradient_qgradient_stops, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qgradient_qgradient_coordinatemode, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qgradient_qgradient_setcoordinatemode, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, mode, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qgradient_qgradient_interpolationmode, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qgradient_qgradient_setinterpolationmode, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, mode, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_gui_qgradient_qgradient_method_entry) {
	PHP_ME(Qt_Gui_QGradient_QGradient, staticMetaObject, arginfo_qt_gui_qgradient_qgradient_staticmetaobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QGradient_QGradient, qt_check_for_QGADGET_macro, arginfo_qt_gui_qgradient_qgradient_qt_check_for_qgadget_macro, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QGradient_QGradient, new_, arginfo_qt_gui_qgradient_qgradient_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QGradient_QGradient, newQGradientPreset, arginfo_qt_gui_qgradient_qgradient_newqgradientpreset, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QGradient_QGradient, type, arginfo_qt_gui_qgradient_qgradient_type, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QGradient_QGradient, setSpread, arginfo_qt_gui_qgradient_qgradient_setspread, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QGradient_QGradient, spread, arginfo_qt_gui_qgradient_qgradient_spread, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QGradient_QGradient, setColorAt, arginfo_qt_gui_qgradient_qgradient_setcolorat, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QGradient_QGradient, setStops, arginfo_qt_gui_qgradient_qgradient_setstops, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QGradient_QGradient, stops, arginfo_qt_gui_qgradient_qgradient_stops, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QGradient_QGradient, coordinateMode, arginfo_qt_gui_qgradient_qgradient_coordinatemode, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QGradient_QGradient, setCoordinateMode, arginfo_qt_gui_qgradient_qgradient_setcoordinatemode, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QGradient_QGradient, interpolationMode, arginfo_qt_gui_qgradient_qgradient_interpolationmode, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QGradient_QGradient, setInterpolationMode, arginfo_qt_gui_qgradient_qgradient_setinterpolationmode, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
