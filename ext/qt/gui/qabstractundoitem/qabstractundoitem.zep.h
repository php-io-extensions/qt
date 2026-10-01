
extern zend_class_entry *qt_gui_qabstractundoitem_qabstractundoitem_ce;

ZEPHIR_INIT_CLASS(Qt_Gui_QAbstractUndoItem_QAbstractUndoItem);

PHP_METHOD(Qt_Gui_QAbstractUndoItem_QAbstractUndoItem, undo);
PHP_METHOD(Qt_Gui_QAbstractUndoItem_QAbstractUndoItem, redo);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qabstractundoitem_qabstractundoitem_undo, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qabstractundoitem_qabstractundoitem_redo, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_gui_qabstractundoitem_qabstractundoitem_method_entry) {
	PHP_ME(Qt_Gui_QAbstractUndoItem_QAbstractUndoItem, undo, arginfo_qt_gui_qabstractundoitem_qabstractundoitem_undo, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QAbstractUndoItem_QAbstractUndoItem, redo, arginfo_qt_gui_qabstractundoitem_qabstractundoitem_redo, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
