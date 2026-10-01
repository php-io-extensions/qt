
extern zend_class_entry *qt_gui_qpainterpathstroker_qpainterpathstroker_ce;

ZEPHIR_INIT_CLASS(Qt_Gui_QPainterPathStroker_QPainterPathStroker);

PHP_METHOD(Qt_Gui_QPainterPathStroker_QPainterPathStroker, new_);
PHP_METHOD(Qt_Gui_QPainterPathStroker_QPainterPathStroker, newQPen);
PHP_METHOD(Qt_Gui_QPainterPathStroker_QPainterPathStroker, setWidth);
PHP_METHOD(Qt_Gui_QPainterPathStroker_QPainterPathStroker, width);
PHP_METHOD(Qt_Gui_QPainterPathStroker_QPainterPathStroker, setCapStyle);
PHP_METHOD(Qt_Gui_QPainterPathStroker_QPainterPathStroker, capStyle);
PHP_METHOD(Qt_Gui_QPainterPathStroker_QPainterPathStroker, setJoinStyle);
PHP_METHOD(Qt_Gui_QPainterPathStroker_QPainterPathStroker, joinStyle);
PHP_METHOD(Qt_Gui_QPainterPathStroker_QPainterPathStroker, setMiterLimit);
PHP_METHOD(Qt_Gui_QPainterPathStroker_QPainterPathStroker, miterLimit);
PHP_METHOD(Qt_Gui_QPainterPathStroker_QPainterPathStroker, setCurveThreshold);
PHP_METHOD(Qt_Gui_QPainterPathStroker_QPainterPathStroker, curveThreshold);
PHP_METHOD(Qt_Gui_QPainterPathStroker_QPainterPathStroker, setDashPattern);
PHP_METHOD(Qt_Gui_QPainterPathStroker_QPainterPathStroker, setDashPatternQListDouble);
PHP_METHOD(Qt_Gui_QPainterPathStroker_QPainterPathStroker, dashPattern);
PHP_METHOD(Qt_Gui_QPainterPathStroker_QPainterPathStroker, setDashOffset);
PHP_METHOD(Qt_Gui_QPainterPathStroker_QPainterPathStroker, dashOffset);
PHP_METHOD(Qt_Gui_QPainterPathStroker_QPainterPathStroker, createStroke);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpainterpathstroker_qpainterpathstroker_new_, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpainterpathstroker_qpainterpathstroker_newqpen, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, pen, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpainterpathstroker_qpainterpathstroker_setwidth, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpainterpathstroker_qpainterpathstroker_width, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpainterpathstroker_qpainterpathstroker_setcapstyle, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, style, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpainterpathstroker_qpainterpathstroker_capstyle, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpainterpathstroker_qpainterpathstroker_setjoinstyle, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, style, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpainterpathstroker_qpainterpathstroker_joinstyle, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpainterpathstroker_qpainterpathstroker_setmiterlimit, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, length, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpainterpathstroker_qpainterpathstroker_miterlimit, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpainterpathstroker_qpainterpathstroker_setcurvethreshold, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, threshold, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpainterpathstroker_qpainterpathstroker_curvethreshold, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpainterpathstroker_qpainterpathstroker_setdashpattern, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpainterpathstroker_qpainterpathstroker_setdashpatternqlistdouble, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_ARRAY_INFO(0, dashPattern, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpainterpathstroker_qpainterpathstroker_dashpattern, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpainterpathstroker_qpainterpathstroker_setdashoffset, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, offset, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpainterpathstroker_qpainterpathstroker_dashoffset, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpainterpathstroker_qpainterpathstroker_createstroke, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, path, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_gui_qpainterpathstroker_qpainterpathstroker_method_entry) {
	PHP_ME(Qt_Gui_QPainterPathStroker_QPainterPathStroker, new_, arginfo_qt_gui_qpainterpathstroker_qpainterpathstroker_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPainterPathStroker_QPainterPathStroker, newQPen, arginfo_qt_gui_qpainterpathstroker_qpainterpathstroker_newqpen, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPainterPathStroker_QPainterPathStroker, setWidth, arginfo_qt_gui_qpainterpathstroker_qpainterpathstroker_setwidth, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPainterPathStroker_QPainterPathStroker, width, arginfo_qt_gui_qpainterpathstroker_qpainterpathstroker_width, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPainterPathStroker_QPainterPathStroker, setCapStyle, arginfo_qt_gui_qpainterpathstroker_qpainterpathstroker_setcapstyle, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPainterPathStroker_QPainterPathStroker, capStyle, arginfo_qt_gui_qpainterpathstroker_qpainterpathstroker_capstyle, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPainterPathStroker_QPainterPathStroker, setJoinStyle, arginfo_qt_gui_qpainterpathstroker_qpainterpathstroker_setjoinstyle, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPainterPathStroker_QPainterPathStroker, joinStyle, arginfo_qt_gui_qpainterpathstroker_qpainterpathstroker_joinstyle, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPainterPathStroker_QPainterPathStroker, setMiterLimit, arginfo_qt_gui_qpainterpathstroker_qpainterpathstroker_setmiterlimit, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPainterPathStroker_QPainterPathStroker, miterLimit, arginfo_qt_gui_qpainterpathstroker_qpainterpathstroker_miterlimit, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPainterPathStroker_QPainterPathStroker, setCurveThreshold, arginfo_qt_gui_qpainterpathstroker_qpainterpathstroker_setcurvethreshold, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPainterPathStroker_QPainterPathStroker, curveThreshold, arginfo_qt_gui_qpainterpathstroker_qpainterpathstroker_curvethreshold, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPainterPathStroker_QPainterPathStroker, setDashPattern, arginfo_qt_gui_qpainterpathstroker_qpainterpathstroker_setdashpattern, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPainterPathStroker_QPainterPathStroker, setDashPatternQListDouble, arginfo_qt_gui_qpainterpathstroker_qpainterpathstroker_setdashpatternqlistdouble, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPainterPathStroker_QPainterPathStroker, dashPattern, arginfo_qt_gui_qpainterpathstroker_qpainterpathstroker_dashpattern, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPainterPathStroker_QPainterPathStroker, setDashOffset, arginfo_qt_gui_qpainterpathstroker_qpainterpathstroker_setdashoffset, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPainterPathStroker_QPainterPathStroker, dashOffset, arginfo_qt_gui_qpainterpathstroker_qpainterpathstroker_dashoffset, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPainterPathStroker_QPainterPathStroker, createStroke, arginfo_qt_gui_qpainterpathstroker_qpainterpathstroker_createstroke, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
