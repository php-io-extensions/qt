
extern zend_class_entry *qt_widgets_qstyleoption_qstyleoption_ce;

ZEPHIR_INIT_CLASS(Qt_Widgets_QStyleOption_QStyleOption);

PHP_METHOD(Qt_Widgets_QStyleOption_QStyleOption, version);
PHP_METHOD(Qt_Widgets_QStyleOption_QStyleOption, setVersion);
PHP_METHOD(Qt_Widgets_QStyleOption_QStyleOption, type);
PHP_METHOD(Qt_Widgets_QStyleOption_QStyleOption, setType);
PHP_METHOD(Qt_Widgets_QStyleOption_QStyleOption, state);
PHP_METHOD(Qt_Widgets_QStyleOption_QStyleOption, setState);
PHP_METHOD(Qt_Widgets_QStyleOption_QStyleOption, direction);
PHP_METHOD(Qt_Widgets_QStyleOption_QStyleOption, setDirection);
PHP_METHOD(Qt_Widgets_QStyleOption_QStyleOption, rect);
PHP_METHOD(Qt_Widgets_QStyleOption_QStyleOption, setRect);
PHP_METHOD(Qt_Widgets_QStyleOption_QStyleOption, fontMetrics);
PHP_METHOD(Qt_Widgets_QStyleOption_QStyleOption, setFontMetrics);
PHP_METHOD(Qt_Widgets_QStyleOption_QStyleOption, palette);
PHP_METHOD(Qt_Widgets_QStyleOption_QStyleOption, setPalette);
PHP_METHOD(Qt_Widgets_QStyleOption_QStyleOption, styleObject);
PHP_METHOD(Qt_Widgets_QStyleOption_QStyleOption, setStyleObject);
PHP_METHOD(Qt_Widgets_QStyleOption_QStyleOption, new_);
PHP_METHOD(Qt_Widgets_QStyleOption_QStyleOption, newQStyleOption);
PHP_METHOD(Qt_Widgets_QStyleOption_QStyleOption, initFrom);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qstyleoption_qstyleoption_version, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qstyleoption_qstyleoption_setversion, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qstyleoption_qstyleoption_type, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qstyleoption_qstyleoption_settype, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qstyleoption_qstyleoption_state, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qstyleoption_qstyleoption_setstate, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qstyleoption_qstyleoption_direction, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qstyleoption_qstyleoption_setdirection, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qstyleoption_qstyleoption_rect, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qstyleoption_qstyleoption_setrect, 0, 5, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, valueX, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, valueY, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, valueWidth, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, valueHeight, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qstyleoption_qstyleoption_fontmetrics, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qstyleoption_qstyleoption_setfontmetrics, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qstyleoption_qstyleoption_palette, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qstyleoption_qstyleoption_setpalette, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qstyleoption_qstyleoption_styleobject, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qstyleoption_qstyleoption_setstyleobject, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qstyleoption_qstyleoption_new_, 0, 0, IS_LONG, 0)
	ZEND_ARG_INFO(0, version)
	ZEND_ARG_INFO(0, type)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qstyleoption_qstyleoption_newqstyleoption, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, other, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qstyleoption_qstyleoption_initfrom, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, w, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_widgets_qstyleoption_qstyleoption_method_entry) {
	PHP_ME(Qt_Widgets_QStyleOption_QStyleOption, version, arginfo_qt_widgets_qstyleoption_qstyleoption_version, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QStyleOption_QStyleOption, setVersion, arginfo_qt_widgets_qstyleoption_qstyleoption_setversion, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QStyleOption_QStyleOption, type, arginfo_qt_widgets_qstyleoption_qstyleoption_type, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QStyleOption_QStyleOption, setType, arginfo_qt_widgets_qstyleoption_qstyleoption_settype, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QStyleOption_QStyleOption, state, arginfo_qt_widgets_qstyleoption_qstyleoption_state, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QStyleOption_QStyleOption, setState, arginfo_qt_widgets_qstyleoption_qstyleoption_setstate, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QStyleOption_QStyleOption, direction, arginfo_qt_widgets_qstyleoption_qstyleoption_direction, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QStyleOption_QStyleOption, setDirection, arginfo_qt_widgets_qstyleoption_qstyleoption_setdirection, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QStyleOption_QStyleOption, rect, arginfo_qt_widgets_qstyleoption_qstyleoption_rect, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QStyleOption_QStyleOption, setRect, arginfo_qt_widgets_qstyleoption_qstyleoption_setrect, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QStyleOption_QStyleOption, fontMetrics, arginfo_qt_widgets_qstyleoption_qstyleoption_fontmetrics, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QStyleOption_QStyleOption, setFontMetrics, arginfo_qt_widgets_qstyleoption_qstyleoption_setfontmetrics, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QStyleOption_QStyleOption, palette, arginfo_qt_widgets_qstyleoption_qstyleoption_palette, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QStyleOption_QStyleOption, setPalette, arginfo_qt_widgets_qstyleoption_qstyleoption_setpalette, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QStyleOption_QStyleOption, styleObject, arginfo_qt_widgets_qstyleoption_qstyleoption_styleobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QStyleOption_QStyleOption, setStyleObject, arginfo_qt_widgets_qstyleoption_qstyleoption_setstyleobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QStyleOption_QStyleOption, new_, arginfo_qt_widgets_qstyleoption_qstyleoption_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QStyleOption_QStyleOption, newQStyleOption, arginfo_qt_widgets_qstyleoption_qstyleoption_newqstyleoption, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QStyleOption_QStyleOption, initFrom, arginfo_qt_widgets_qstyleoption_qstyleoption_initfrom, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
