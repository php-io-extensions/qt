
extern zend_class_entry *qt_gui_qtextinlineobject_qtextinlineobject_ce;

ZEPHIR_INIT_CLASS(Qt_Gui_QTextInlineObject_QTextInlineObject);

PHP_METHOD(Qt_Gui_QTextInlineObject_QTextInlineObject, new_);
PHP_METHOD(Qt_Gui_QTextInlineObject_QTextInlineObject, isValid);
PHP_METHOD(Qt_Gui_QTextInlineObject_QTextInlineObject, rect);
PHP_METHOD(Qt_Gui_QTextInlineObject_QTextInlineObject, width);
PHP_METHOD(Qt_Gui_QTextInlineObject_QTextInlineObject, ascent);
PHP_METHOD(Qt_Gui_QTextInlineObject_QTextInlineObject, descent);
PHP_METHOD(Qt_Gui_QTextInlineObject_QTextInlineObject, height);
PHP_METHOD(Qt_Gui_QTextInlineObject_QTextInlineObject, textDirection);
PHP_METHOD(Qt_Gui_QTextInlineObject_QTextInlineObject, setWidth);
PHP_METHOD(Qt_Gui_QTextInlineObject_QTextInlineObject, setAscent);
PHP_METHOD(Qt_Gui_QTextInlineObject_QTextInlineObject, setDescent);
PHP_METHOD(Qt_Gui_QTextInlineObject_QTextInlineObject, textPosition);
PHP_METHOD(Qt_Gui_QTextInlineObject_QTextInlineObject, formatIndex);
PHP_METHOD(Qt_Gui_QTextInlineObject_QTextInlineObject, format);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextinlineobject_qtextinlineobject_new_, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextinlineobject_qtextinlineobject_isvalid, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextinlineobject_qtextinlineobject_rect, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextinlineobject_qtextinlineobject_width, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextinlineobject_qtextinlineobject_ascent, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextinlineobject_qtextinlineobject_descent, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextinlineobject_qtextinlineobject_height, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextinlineobject_qtextinlineobject_textdirection, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextinlineobject_qtextinlineobject_setwidth, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, w, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextinlineobject_qtextinlineobject_setascent, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, a, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextinlineobject_qtextinlineobject_setdescent, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, d, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextinlineobject_qtextinlineobject_textposition, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextinlineobject_qtextinlineobject_formatindex, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextinlineobject_qtextinlineobject_format, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_gui_qtextinlineobject_qtextinlineobject_method_entry) {
	PHP_ME(Qt_Gui_QTextInlineObject_QTextInlineObject, new_, arginfo_qt_gui_qtextinlineobject_qtextinlineobject_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextInlineObject_QTextInlineObject, isValid, arginfo_qt_gui_qtextinlineobject_qtextinlineobject_isvalid, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextInlineObject_QTextInlineObject, rect, arginfo_qt_gui_qtextinlineobject_qtextinlineobject_rect, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextInlineObject_QTextInlineObject, width, arginfo_qt_gui_qtextinlineobject_qtextinlineobject_width, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextInlineObject_QTextInlineObject, ascent, arginfo_qt_gui_qtextinlineobject_qtextinlineobject_ascent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextInlineObject_QTextInlineObject, descent, arginfo_qt_gui_qtextinlineobject_qtextinlineobject_descent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextInlineObject_QTextInlineObject, height, arginfo_qt_gui_qtextinlineobject_qtextinlineobject_height, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextInlineObject_QTextInlineObject, textDirection, arginfo_qt_gui_qtextinlineobject_qtextinlineobject_textdirection, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextInlineObject_QTextInlineObject, setWidth, arginfo_qt_gui_qtextinlineobject_qtextinlineobject_setwidth, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextInlineObject_QTextInlineObject, setAscent, arginfo_qt_gui_qtextinlineobject_qtextinlineobject_setascent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextInlineObject_QTextInlineObject, setDescent, arginfo_qt_gui_qtextinlineobject_qtextinlineobject_setdescent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextInlineObject_QTextInlineObject, textPosition, arginfo_qt_gui_qtextinlineobject_qtextinlineobject_textposition, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextInlineObject_QTextInlineObject, formatIndex, arginfo_qt_gui_qtextinlineobject_qtextinlineobject_formatindex, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextInlineObject_QTextInlineObject, format, arginfo_qt_gui_qtextinlineobject_qtextinlineobject_format, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
