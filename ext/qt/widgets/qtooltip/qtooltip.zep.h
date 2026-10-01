
extern zend_class_entry *qt_widgets_qtooltip_qtooltip_ce;

ZEPHIR_INIT_CLASS(Qt_Widgets_QToolTip_QToolTip);

PHP_METHOD(Qt_Widgets_QToolTip_QToolTip, showText);
PHP_METHOD(Qt_Widgets_QToolTip_QToolTip, hideText);
PHP_METHOD(Qt_Widgets_QToolTip_QToolTip, isVisible);
PHP_METHOD(Qt_Widgets_QToolTip_QToolTip, text);
PHP_METHOD(Qt_Widgets_QToolTip_QToolTip, palette);
PHP_METHOD(Qt_Widgets_QToolTip_QToolTip, setPalette);
PHP_METHOD(Qt_Widgets_QToolTip_QToolTip, font);
PHP_METHOD(Qt_Widgets_QToolTip_QToolTip, setFont);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtooltip_qtooltip_showtext, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, posX, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, posY, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, text, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, w, IS_LONG, 0)
	ZEND_ARG_INFO(0, rectX)
	ZEND_ARG_INFO(0, rectY)
	ZEND_ARG_INFO(0, rectWidth)
	ZEND_ARG_INFO(0, rectHeight)
	ZEND_ARG_TYPE_INFO(0, msecShowTime, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtooltip_qtooltip_hidetext, 0, 0, IS_VOID, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtooltip_qtooltip_isvisible, 0, 0, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtooltip_qtooltip_text, 0, 0, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtooltip_qtooltip_palette, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtooltip_qtooltip_setpalette, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtooltip_qtooltip_font, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtooltip_qtooltip_setfont, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_widgets_qtooltip_qtooltip_method_entry) {
	PHP_ME(Qt_Widgets_QToolTip_QToolTip, showText, arginfo_qt_widgets_qtooltip_qtooltip_showtext, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QToolTip_QToolTip, hideText, arginfo_qt_widgets_qtooltip_qtooltip_hidetext, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QToolTip_QToolTip, isVisible, arginfo_qt_widgets_qtooltip_qtooltip_isvisible, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QToolTip_QToolTip, text, arginfo_qt_widgets_qtooltip_qtooltip_text, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QToolTip_QToolTip, palette, arginfo_qt_widgets_qtooltip_qtooltip_palette, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QToolTip_QToolTip, setPalette, arginfo_qt_widgets_qtooltip_qtooltip_setpalette, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QToolTip_QToolTip, font, arginfo_qt_widgets_qtooltip_qtooltip_font, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QToolTip_QToolTip, setFont, arginfo_qt_widgets_qtooltip_qtooltip_setfont, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
