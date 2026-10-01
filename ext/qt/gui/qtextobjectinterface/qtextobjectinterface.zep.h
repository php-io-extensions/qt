
extern zend_class_entry *qt_gui_qtextobjectinterface_qtextobjectinterface_ce;

ZEPHIR_INIT_CLASS(Qt_Gui_QTextObjectInterface_QTextObjectInterface);

PHP_METHOD(Qt_Gui_QTextObjectInterface_QTextObjectInterface, intrinsicSize);
PHP_METHOD(Qt_Gui_QTextObjectInterface_QTextObjectInterface, drawObject);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextobjectinterface_qtextobjectinterface_intrinsicsize, 0, 4, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, doc, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, posInDocument, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, format, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextobjectinterface_qtextobjectinterface_drawobject, 0, 9, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, painter, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rectX, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, rectY, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, rectWidth, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, rectHeight, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, doc, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, posInDocument, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, format, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_gui_qtextobjectinterface_qtextobjectinterface_method_entry) {
	PHP_ME(Qt_Gui_QTextObjectInterface_QTextObjectInterface, intrinsicSize, arginfo_qt_gui_qtextobjectinterface_qtextobjectinterface_intrinsicsize, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextObjectInterface_QTextObjectInterface, drawObject, arginfo_qt_gui_qtextobjectinterface_qtextobjectinterface_drawobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
