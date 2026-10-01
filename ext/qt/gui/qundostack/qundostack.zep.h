
extern zend_class_entry *qt_gui_qundostack_qundostack_ce;

ZEPHIR_INIT_CLASS(Qt_Gui_QUndoStack_QUndoStack);

PHP_METHOD(Qt_Gui_QUndoStack_QUndoStack, staticMetaObject);
PHP_METHOD(Qt_Gui_QUndoStack_QUndoStack, tr);
PHP_METHOD(Qt_Gui_QUndoStack_QUndoStack, new_);
PHP_METHOD(Qt_Gui_QUndoStack_QUndoStack, clear);
PHP_METHOD(Qt_Gui_QUndoStack_QUndoStack, push);
PHP_METHOD(Qt_Gui_QUndoStack_QUndoStack, canUndo);
PHP_METHOD(Qt_Gui_QUndoStack_QUndoStack, canRedo);
PHP_METHOD(Qt_Gui_QUndoStack_QUndoStack, undoText);
PHP_METHOD(Qt_Gui_QUndoStack_QUndoStack, redoText);
PHP_METHOD(Qt_Gui_QUndoStack_QUndoStack, count);
PHP_METHOD(Qt_Gui_QUndoStack_QUndoStack, index);
PHP_METHOD(Qt_Gui_QUndoStack_QUndoStack, text);
PHP_METHOD(Qt_Gui_QUndoStack_QUndoStack, createUndoAction);
PHP_METHOD(Qt_Gui_QUndoStack_QUndoStack, createRedoAction);
PHP_METHOD(Qt_Gui_QUndoStack_QUndoStack, isActive);
PHP_METHOD(Qt_Gui_QUndoStack_QUndoStack, isClean);
PHP_METHOD(Qt_Gui_QUndoStack_QUndoStack, cleanIndex);
PHP_METHOD(Qt_Gui_QUndoStack_QUndoStack, beginMacro);
PHP_METHOD(Qt_Gui_QUndoStack_QUndoStack, endMacro);
PHP_METHOD(Qt_Gui_QUndoStack_QUndoStack, setUndoLimit);
PHP_METHOD(Qt_Gui_QUndoStack_QUndoStack, undoLimit);
PHP_METHOD(Qt_Gui_QUndoStack_QUndoStack, command);
PHP_METHOD(Qt_Gui_QUndoStack_QUndoStack, setClean);
PHP_METHOD(Qt_Gui_QUndoStack_QUndoStack, resetClean);
PHP_METHOD(Qt_Gui_QUndoStack_QUndoStack, setIndex);
PHP_METHOD(Qt_Gui_QUndoStack_QUndoStack, undo);
PHP_METHOD(Qt_Gui_QUndoStack_QUndoStack, redo);
PHP_METHOD(Qt_Gui_QUndoStack_QUndoStack, setActive);
PHP_METHOD(Qt_Gui_QUndoStack_QUndoStack, indexChanged);
PHP_METHOD(Qt_Gui_QUndoStack_QUndoStack, cleanChanged);
PHP_METHOD(Qt_Gui_QUndoStack_QUndoStack, canUndoChanged);
PHP_METHOD(Qt_Gui_QUndoStack_QUndoStack, canRedoChanged);
PHP_METHOD(Qt_Gui_QUndoStack_QUndoStack, undoTextChanged);
PHP_METHOD(Qt_Gui_QUndoStack_QUndoStack, redoTextChanged);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qundostack_qundostack_staticmetaobject, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qundostack_qundostack_tr, 0, 1, IS_STRING, 0)
	ZEND_ARG_INFO(0, s)
	ZEND_ARG_INFO(0, c)
	ZEND_ARG_TYPE_INFO(0, n, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qundostack_qundostack_new_, 0, 0, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qundostack_qundostack_clear, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qundostack_qundostack_push, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, cmd, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qundostack_qundostack_canundo, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qundostack_qundostack_canredo, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qundostack_qundostack_undotext, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qundostack_qundostack_redotext, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qundostack_qundostack_count, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qundostack_qundostack_index, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qundostack_qundostack_text, 0, 2, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, idx, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qundostack_qundostack_createundoaction, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, prefix, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qundostack_qundostack_createredoaction, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, prefix, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qundostack_qundostack_isactive, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qundostack_qundostack_isclean, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qundostack_qundostack_cleanindex, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qundostack_qundostack_beginmacro, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, text, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qundostack_qundostack_endmacro, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qundostack_qundostack_setundolimit, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, limit, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qundostack_qundostack_undolimit, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qundostack_qundostack_command, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qundostack_qundostack_setclean, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qundostack_qundostack_resetclean, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qundostack_qundostack_setindex, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, idx, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qundostack_qundostack_undo, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qundostack_qundostack_redo, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qundostack_qundostack_setactive, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, active, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qundostack_qundostack_indexchanged, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, idx, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qundostack_qundostack_cleanchanged, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, clean, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qundostack_qundostack_canundochanged, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, canUndo, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qundostack_qundostack_canredochanged, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, canRedo, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qundostack_qundostack_undotextchanged, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, undoText, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qundostack_qundostack_redotextchanged, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, redoText, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_gui_qundostack_qundostack_method_entry) {
	PHP_ME(Qt_Gui_QUndoStack_QUndoStack, staticMetaObject, arginfo_qt_gui_qundostack_qundostack_staticmetaobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QUndoStack_QUndoStack, tr, arginfo_qt_gui_qundostack_qundostack_tr, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QUndoStack_QUndoStack, new_, arginfo_qt_gui_qundostack_qundostack_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QUndoStack_QUndoStack, clear, arginfo_qt_gui_qundostack_qundostack_clear, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QUndoStack_QUndoStack, push, arginfo_qt_gui_qundostack_qundostack_push, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QUndoStack_QUndoStack, canUndo, arginfo_qt_gui_qundostack_qundostack_canundo, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QUndoStack_QUndoStack, canRedo, arginfo_qt_gui_qundostack_qundostack_canredo, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QUndoStack_QUndoStack, undoText, arginfo_qt_gui_qundostack_qundostack_undotext, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QUndoStack_QUndoStack, redoText, arginfo_qt_gui_qundostack_qundostack_redotext, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QUndoStack_QUndoStack, count, arginfo_qt_gui_qundostack_qundostack_count, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QUndoStack_QUndoStack, index, arginfo_qt_gui_qundostack_qundostack_index, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QUndoStack_QUndoStack, text, arginfo_qt_gui_qundostack_qundostack_text, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QUndoStack_QUndoStack, createUndoAction, arginfo_qt_gui_qundostack_qundostack_createundoaction, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QUndoStack_QUndoStack, createRedoAction, arginfo_qt_gui_qundostack_qundostack_createredoaction, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QUndoStack_QUndoStack, isActive, arginfo_qt_gui_qundostack_qundostack_isactive, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QUndoStack_QUndoStack, isClean, arginfo_qt_gui_qundostack_qundostack_isclean, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QUndoStack_QUndoStack, cleanIndex, arginfo_qt_gui_qundostack_qundostack_cleanindex, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QUndoStack_QUndoStack, beginMacro, arginfo_qt_gui_qundostack_qundostack_beginmacro, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QUndoStack_QUndoStack, endMacro, arginfo_qt_gui_qundostack_qundostack_endmacro, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QUndoStack_QUndoStack, setUndoLimit, arginfo_qt_gui_qundostack_qundostack_setundolimit, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QUndoStack_QUndoStack, undoLimit, arginfo_qt_gui_qundostack_qundostack_undolimit, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QUndoStack_QUndoStack, command, arginfo_qt_gui_qundostack_qundostack_command, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QUndoStack_QUndoStack, setClean, arginfo_qt_gui_qundostack_qundostack_setclean, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QUndoStack_QUndoStack, resetClean, arginfo_qt_gui_qundostack_qundostack_resetclean, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QUndoStack_QUndoStack, setIndex, arginfo_qt_gui_qundostack_qundostack_setindex, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QUndoStack_QUndoStack, undo, arginfo_qt_gui_qundostack_qundostack_undo, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QUndoStack_QUndoStack, redo, arginfo_qt_gui_qundostack_qundostack_redo, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QUndoStack_QUndoStack, setActive, arginfo_qt_gui_qundostack_qundostack_setactive, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QUndoStack_QUndoStack, indexChanged, arginfo_qt_gui_qundostack_qundostack_indexchanged, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QUndoStack_QUndoStack, cleanChanged, arginfo_qt_gui_qundostack_qundostack_cleanchanged, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QUndoStack_QUndoStack, canUndoChanged, arginfo_qt_gui_qundostack_qundostack_canundochanged, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QUndoStack_QUndoStack, canRedoChanged, arginfo_qt_gui_qundostack_qundostack_canredochanged, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QUndoStack_QUndoStack, undoTextChanged, arginfo_qt_gui_qundostack_qundostack_undotextchanged, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QUndoStack_QUndoStack, redoTextChanged, arginfo_qt_gui_qundostack_qundostack_redotextchanged, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
