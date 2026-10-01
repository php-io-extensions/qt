
extern zend_class_entry *qt_gui_qundocommand_qundocommand_ce;

ZEPHIR_INIT_CLASS(Qt_Gui_QUndoCommand_QUndoCommand);

PHP_METHOD(Qt_Gui_QUndoCommand_QUndoCommand, new_);
PHP_METHOD(Qt_Gui_QUndoCommand_QUndoCommand, newQStringQUndoCommand);
PHP_METHOD(Qt_Gui_QUndoCommand_QUndoCommand, undo);
PHP_METHOD(Qt_Gui_QUndoCommand_QUndoCommand, redo);
PHP_METHOD(Qt_Gui_QUndoCommand_QUndoCommand, text);
PHP_METHOD(Qt_Gui_QUndoCommand_QUndoCommand, actionText);
PHP_METHOD(Qt_Gui_QUndoCommand_QUndoCommand, setText);
PHP_METHOD(Qt_Gui_QUndoCommand_QUndoCommand, isObsolete);
PHP_METHOD(Qt_Gui_QUndoCommand_QUndoCommand, setObsolete);
PHP_METHOD(Qt_Gui_QUndoCommand_QUndoCommand, id);
PHP_METHOD(Qt_Gui_QUndoCommand_QUndoCommand, mergeWith);
PHP_METHOD(Qt_Gui_QUndoCommand_QUndoCommand, childCount);
PHP_METHOD(Qt_Gui_QUndoCommand_QUndoCommand, child);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qundocommand_qundocommand_new_, 0, 0, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qundocommand_qundocommand_newqstringqundocommand, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, text, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qundocommand_qundocommand_undo, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qundocommand_qundocommand_redo, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qundocommand_qundocommand_text, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qundocommand_qundocommand_actiontext, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qundocommand_qundocommand_settext, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, text, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qundocommand_qundocommand_isobsolete, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qundocommand_qundocommand_setobsolete, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, obsolete, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qundocommand_qundocommand_id, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qundocommand_qundocommand_mergewith, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, other, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qundocommand_qundocommand_childcount, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qundocommand_qundocommand_child, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_gui_qundocommand_qundocommand_method_entry) {
	PHP_ME(Qt_Gui_QUndoCommand_QUndoCommand, new_, arginfo_qt_gui_qundocommand_qundocommand_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QUndoCommand_QUndoCommand, newQStringQUndoCommand, arginfo_qt_gui_qundocommand_qundocommand_newqstringqundocommand, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QUndoCommand_QUndoCommand, undo, arginfo_qt_gui_qundocommand_qundocommand_undo, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QUndoCommand_QUndoCommand, redo, arginfo_qt_gui_qundocommand_qundocommand_redo, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QUndoCommand_QUndoCommand, text, arginfo_qt_gui_qundocommand_qundocommand_text, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QUndoCommand_QUndoCommand, actionText, arginfo_qt_gui_qundocommand_qundocommand_actiontext, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QUndoCommand_QUndoCommand, setText, arginfo_qt_gui_qundocommand_qundocommand_settext, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QUndoCommand_QUndoCommand, isObsolete, arginfo_qt_gui_qundocommand_qundocommand_isobsolete, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QUndoCommand_QUndoCommand, setObsolete, arginfo_qt_gui_qundocommand_qundocommand_setobsolete, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QUndoCommand_QUndoCommand, id, arginfo_qt_gui_qundocommand_qundocommand_id, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QUndoCommand_QUndoCommand, mergeWith, arginfo_qt_gui_qundocommand_qundocommand_mergewith, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QUndoCommand_QUndoCommand, childCount, arginfo_qt_gui_qundocommand_qundocommand_childcount, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QUndoCommand_QUndoCommand, child, arginfo_qt_gui_qundocommand_qundocommand_child, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
