
extern zend_class_entry *qt_gui_qtextitem_qtextitem_ce;

ZEPHIR_INIT_CLASS(Qt_Gui_QTextItem_QTextItem);

PHP_METHOD(Qt_Gui_QTextItem_QTextItem, descent);
PHP_METHOD(Qt_Gui_QTextItem_QTextItem, ascent);
PHP_METHOD(Qt_Gui_QTextItem_QTextItem, width);
PHP_METHOD(Qt_Gui_QTextItem_QTextItem, renderFlags);
PHP_METHOD(Qt_Gui_QTextItem_QTextItem, text);
PHP_METHOD(Qt_Gui_QTextItem_QTextItem, font);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextitem_qtextitem_descent, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextitem_qtextitem_ascent, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextitem_qtextitem_width, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextitem_qtextitem_renderflags, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextitem_qtextitem_text, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextitem_qtextitem_font, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_gui_qtextitem_qtextitem_method_entry) {
	PHP_ME(Qt_Gui_QTextItem_QTextItem, descent, arginfo_qt_gui_qtextitem_qtextitem_descent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextItem_QTextItem, ascent, arginfo_qt_gui_qtextitem_qtextitem_ascent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextItem_QTextItem, width, arginfo_qt_gui_qtextitem_qtextitem_width, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextItem_QTextItem, renderFlags, arginfo_qt_gui_qtextitem_qtextitem_renderflags, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextItem_QTextItem, text, arginfo_qt_gui_qtextitem_qtextitem_text, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextItem_QTextItem, font, arginfo_qt_gui_qtextitem_qtextitem_font, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
