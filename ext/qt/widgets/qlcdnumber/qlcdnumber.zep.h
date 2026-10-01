
extern zend_class_entry *qt_widgets_qlcdnumber_qlcdnumber_ce;

ZEPHIR_INIT_CLASS(Qt_Widgets_QLCDNumber_QLCDNumber);

PHP_METHOD(Qt_Widgets_QLCDNumber_QLCDNumber, staticMetaObject);
PHP_METHOD(Qt_Widgets_QLCDNumber_QLCDNumber, tr);
PHP_METHOD(Qt_Widgets_QLCDNumber_QLCDNumber, new_);
PHP_METHOD(Qt_Widgets_QLCDNumber_QLCDNumber, newUintQWidget);
PHP_METHOD(Qt_Widgets_QLCDNumber_QLCDNumber, smallDecimalPoint);
PHP_METHOD(Qt_Widgets_QLCDNumber_QLCDNumber, digitCount);
PHP_METHOD(Qt_Widgets_QLCDNumber_QLCDNumber, setDigitCount);
PHP_METHOD(Qt_Widgets_QLCDNumber_QLCDNumber, checkOverflow);
PHP_METHOD(Qt_Widgets_QLCDNumber_QLCDNumber, checkOverflowInt);
PHP_METHOD(Qt_Widgets_QLCDNumber_QLCDNumber, mode);
PHP_METHOD(Qt_Widgets_QLCDNumber_QLCDNumber, setMode);
PHP_METHOD(Qt_Widgets_QLCDNumber_QLCDNumber, segmentStyle);
PHP_METHOD(Qt_Widgets_QLCDNumber_QLCDNumber, setSegmentStyle);
PHP_METHOD(Qt_Widgets_QLCDNumber_QLCDNumber, value);
PHP_METHOD(Qt_Widgets_QLCDNumber_QLCDNumber, intValue);
PHP_METHOD(Qt_Widgets_QLCDNumber_QLCDNumber, sizeHint);
PHP_METHOD(Qt_Widgets_QLCDNumber_QLCDNumber, display);
PHP_METHOD(Qt_Widgets_QLCDNumber_QLCDNumber, displayInt);
PHP_METHOD(Qt_Widgets_QLCDNumber_QLCDNumber, displayDouble);
PHP_METHOD(Qt_Widgets_QLCDNumber_QLCDNumber, setHexMode);
PHP_METHOD(Qt_Widgets_QLCDNumber_QLCDNumber, setDecMode);
PHP_METHOD(Qt_Widgets_QLCDNumber_QLCDNumber, setOctMode);
PHP_METHOD(Qt_Widgets_QLCDNumber_QLCDNumber, setBinMode);
PHP_METHOD(Qt_Widgets_QLCDNumber_QLCDNumber, setSmallDecimalPoint);
PHP_METHOD(Qt_Widgets_QLCDNumber_QLCDNumber, overflow);
PHP_METHOD(Qt_Widgets_QLCDNumber_QLCDNumber, event);
PHP_METHOD(Qt_Widgets_QLCDNumber_QLCDNumber, paintEvent);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qlcdnumber_qlcdnumber_staticmetaobject, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qlcdnumber_qlcdnumber_tr, 0, 1, IS_STRING, 0)
	ZEND_ARG_INFO(0, s)
	ZEND_ARG_INFO(0, c)
	ZEND_ARG_TYPE_INFO(0, n, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qlcdnumber_qlcdnumber_new_, 0, 0, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qlcdnumber_qlcdnumber_newuintqwidget, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, numDigits, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qlcdnumber_qlcdnumber_smalldecimalpoint, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qlcdnumber_qlcdnumber_digitcount, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qlcdnumber_qlcdnumber_setdigitcount, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, nDigits, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qlcdnumber_qlcdnumber_checkoverflow, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, num, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qlcdnumber_qlcdnumber_checkoverflowint, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, num, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qlcdnumber_qlcdnumber_mode, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qlcdnumber_qlcdnumber_setmode, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qlcdnumber_qlcdnumber_segmentstyle, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qlcdnumber_qlcdnumber_setsegmentstyle, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qlcdnumber_qlcdnumber_value, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qlcdnumber_qlcdnumber_intvalue, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qlcdnumber_qlcdnumber_sizehint, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qlcdnumber_qlcdnumber_display, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, str, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qlcdnumber_qlcdnumber_displayint, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, num, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qlcdnumber_qlcdnumber_displaydouble, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, num, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qlcdnumber_qlcdnumber_sethexmode, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qlcdnumber_qlcdnumber_setdecmode, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qlcdnumber_qlcdnumber_setoctmode, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qlcdnumber_qlcdnumber_setbinmode, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qlcdnumber_qlcdnumber_setsmalldecimalpoint, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qlcdnumber_qlcdnumber_overflow, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qlcdnumber_qlcdnumber_event, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, e, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qlcdnumber_qlcdnumber_paintevent, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_widgets_qlcdnumber_qlcdnumber_method_entry) {
	PHP_ME(Qt_Widgets_QLCDNumber_QLCDNumber, staticMetaObject, arginfo_qt_widgets_qlcdnumber_qlcdnumber_staticmetaobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QLCDNumber_QLCDNumber, tr, arginfo_qt_widgets_qlcdnumber_qlcdnumber_tr, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QLCDNumber_QLCDNumber, new_, arginfo_qt_widgets_qlcdnumber_qlcdnumber_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QLCDNumber_QLCDNumber, newUintQWidget, arginfo_qt_widgets_qlcdnumber_qlcdnumber_newuintqwidget, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QLCDNumber_QLCDNumber, smallDecimalPoint, arginfo_qt_widgets_qlcdnumber_qlcdnumber_smalldecimalpoint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QLCDNumber_QLCDNumber, digitCount, arginfo_qt_widgets_qlcdnumber_qlcdnumber_digitcount, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QLCDNumber_QLCDNumber, setDigitCount, arginfo_qt_widgets_qlcdnumber_qlcdnumber_setdigitcount, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QLCDNumber_QLCDNumber, checkOverflow, arginfo_qt_widgets_qlcdnumber_qlcdnumber_checkoverflow, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QLCDNumber_QLCDNumber, checkOverflowInt, arginfo_qt_widgets_qlcdnumber_qlcdnumber_checkoverflowint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QLCDNumber_QLCDNumber, mode, arginfo_qt_widgets_qlcdnumber_qlcdnumber_mode, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QLCDNumber_QLCDNumber, setMode, arginfo_qt_widgets_qlcdnumber_qlcdnumber_setmode, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QLCDNumber_QLCDNumber, segmentStyle, arginfo_qt_widgets_qlcdnumber_qlcdnumber_segmentstyle, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QLCDNumber_QLCDNumber, setSegmentStyle, arginfo_qt_widgets_qlcdnumber_qlcdnumber_setsegmentstyle, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QLCDNumber_QLCDNumber, value, arginfo_qt_widgets_qlcdnumber_qlcdnumber_value, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QLCDNumber_QLCDNumber, intValue, arginfo_qt_widgets_qlcdnumber_qlcdnumber_intvalue, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QLCDNumber_QLCDNumber, sizeHint, arginfo_qt_widgets_qlcdnumber_qlcdnumber_sizehint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QLCDNumber_QLCDNumber, display, arginfo_qt_widgets_qlcdnumber_qlcdnumber_display, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QLCDNumber_QLCDNumber, displayInt, arginfo_qt_widgets_qlcdnumber_qlcdnumber_displayint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QLCDNumber_QLCDNumber, displayDouble, arginfo_qt_widgets_qlcdnumber_qlcdnumber_displaydouble, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QLCDNumber_QLCDNumber, setHexMode, arginfo_qt_widgets_qlcdnumber_qlcdnumber_sethexmode, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QLCDNumber_QLCDNumber, setDecMode, arginfo_qt_widgets_qlcdnumber_qlcdnumber_setdecmode, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QLCDNumber_QLCDNumber, setOctMode, arginfo_qt_widgets_qlcdnumber_qlcdnumber_setoctmode, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QLCDNumber_QLCDNumber, setBinMode, arginfo_qt_widgets_qlcdnumber_qlcdnumber_setbinmode, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QLCDNumber_QLCDNumber, setSmallDecimalPoint, arginfo_qt_widgets_qlcdnumber_qlcdnumber_setsmalldecimalpoint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QLCDNumber_QLCDNumber, overflow, arginfo_qt_widgets_qlcdnumber_qlcdnumber_overflow, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QLCDNumber_QLCDNumber, event, arginfo_qt_widgets_qlcdnumber_qlcdnumber_event, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QLCDNumber_QLCDNumber, paintEvent, arginfo_qt_widgets_qlcdnumber_qlcdnumber_paintevent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
