
extern zend_class_entry *qt_gui_qtextobject_qtextobject_ce;

ZEPHIR_INIT_CLASS(Qt_Gui_QTextObject_QTextObject);

PHP_METHOD(Qt_Gui_QTextObject_QTextObject, staticMetaObject);
PHP_METHOD(Qt_Gui_QTextObject_QTextObject, tr);
PHP_METHOD(Qt_Gui_QTextObject_QTextObject, new_);
PHP_METHOD(Qt_Gui_QTextObject_QTextObject, setFormat);
PHP_METHOD(Qt_Gui_QTextObject_QTextObject, format);
PHP_METHOD(Qt_Gui_QTextObject_QTextObject, formatIndex);
PHP_METHOD(Qt_Gui_QTextObject_QTextObject, document);
PHP_METHOD(Qt_Gui_QTextObject_QTextObject, objectIndex);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextobject_qtextobject_staticmetaobject, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextobject_qtextobject_tr, 0, 1, IS_STRING, 0)
	ZEND_ARG_INFO(0, s)
	ZEND_ARG_INFO(0, c)
	ZEND_ARG_TYPE_INFO(0, n, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextobject_qtextobject_new_, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, doc, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextobject_qtextobject_setformat, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, format, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextobject_qtextobject_format, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextobject_qtextobject_formatindex, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextobject_qtextobject_document, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextobject_qtextobject_objectindex, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_gui_qtextobject_qtextobject_method_entry) {
	PHP_ME(Qt_Gui_QTextObject_QTextObject, staticMetaObject, arginfo_qt_gui_qtextobject_qtextobject_staticmetaobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextObject_QTextObject, tr, arginfo_qt_gui_qtextobject_qtextobject_tr, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextObject_QTextObject, new_, arginfo_qt_gui_qtextobject_qtextobject_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextObject_QTextObject, setFormat, arginfo_qt_gui_qtextobject_qtextobject_setformat, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextObject_QTextObject, format, arginfo_qt_gui_qtextobject_qtextobject_format, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextObject_QTextObject, formatIndex, arginfo_qt_gui_qtextobject_qtextobject_formatindex, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextObject_QTextObject, document, arginfo_qt_gui_qtextobject_qtextobject_document, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextObject_QTextObject, objectIndex, arginfo_qt_gui_qtextobject_qtextobject_objectindex, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
