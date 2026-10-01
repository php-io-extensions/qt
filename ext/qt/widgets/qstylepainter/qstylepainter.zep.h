
extern zend_class_entry *qt_widgets_qstylepainter_qstylepainter_ce;

ZEPHIR_INIT_CLASS(Qt_Widgets_QStylePainter_QStylePainter);

PHP_METHOD(Qt_Widgets_QStylePainter_QStylePainter, new_);
PHP_METHOD(Qt_Widgets_QStylePainter_QStylePainter, newQWidget);
PHP_METHOD(Qt_Widgets_QStylePainter_QStylePainter, newQPaintDeviceQWidget);
PHP_METHOD(Qt_Widgets_QStylePainter_QStylePainter, begin);
PHP_METHOD(Qt_Widgets_QStylePainter_QStylePainter, beginQPaintDeviceQWidget);
PHP_METHOD(Qt_Widgets_QStylePainter_QStylePainter, drawPrimitive);
PHP_METHOD(Qt_Widgets_QStylePainter_QStylePainter, drawControl);
PHP_METHOD(Qt_Widgets_QStylePainter_QStylePainter, drawComplexControl);
PHP_METHOD(Qt_Widgets_QStylePainter_QStylePainter, drawItemText);
PHP_METHOD(Qt_Widgets_QStylePainter_QStylePainter, drawItemPixmap);
PHP_METHOD(Qt_Widgets_QStylePainter_QStylePainter, style);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qstylepainter_qstylepainter_new_, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qstylepainter_qstylepainter_newqwidget, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, w, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qstylepainter_qstylepainter_newqpaintdeviceqwidget, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, pd, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, w, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qstylepainter_qstylepainter_begin, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, w, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qstylepainter_qstylepainter_beginqpaintdeviceqwidget, 0, 3, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, pd, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, w, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qstylepainter_qstylepainter_drawprimitive, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, pe, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, opt, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qstylepainter_qstylepainter_drawcontrol, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, ce, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, opt, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qstylepainter_qstylepainter_drawcomplexcontrol, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, cc, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, opt, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qstylepainter_qstylepainter_drawitemtext, 0, 9, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rX, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rY, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rWidth, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rHeight, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, flags, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, pal, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, enabled, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, text, IS_STRING, 0)
	ZEND_ARG_INFO(0, textRole)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qstylepainter_qstylepainter_drawitempixmap, 0, 7, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rX, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rY, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rWidth, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rHeight, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, flags, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, pixmap, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qstylepainter_qstylepainter_style, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_widgets_qstylepainter_qstylepainter_method_entry) {
	PHP_ME(Qt_Widgets_QStylePainter_QStylePainter, new_, arginfo_qt_widgets_qstylepainter_qstylepainter_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QStylePainter_QStylePainter, newQWidget, arginfo_qt_widgets_qstylepainter_qstylepainter_newqwidget, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QStylePainter_QStylePainter, newQPaintDeviceQWidget, arginfo_qt_widgets_qstylepainter_qstylepainter_newqpaintdeviceqwidget, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QStylePainter_QStylePainter, begin, arginfo_qt_widgets_qstylepainter_qstylepainter_begin, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QStylePainter_QStylePainter, beginQPaintDeviceQWidget, arginfo_qt_widgets_qstylepainter_qstylepainter_beginqpaintdeviceqwidget, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QStylePainter_QStylePainter, drawPrimitive, arginfo_qt_widgets_qstylepainter_qstylepainter_drawprimitive, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QStylePainter_QStylePainter, drawControl, arginfo_qt_widgets_qstylepainter_qstylepainter_drawcontrol, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QStylePainter_QStylePainter, drawComplexControl, arginfo_qt_widgets_qstylepainter_qstylepainter_drawcomplexcontrol, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QStylePainter_QStylePainter, drawItemText, arginfo_qt_widgets_qstylepainter_qstylepainter_drawitemtext, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QStylePainter_QStylePainter, drawItemPixmap, arginfo_qt_widgets_qstylepainter_qstylepainter_drawitempixmap, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QStylePainter_QStylePainter, style, arginfo_qt_widgets_qstylepainter_qstylepainter_style, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
