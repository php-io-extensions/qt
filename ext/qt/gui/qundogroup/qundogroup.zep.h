
extern zend_class_entry *qt_gui_qundogroup_qundogroup_ce;

ZEPHIR_INIT_CLASS(Qt_Gui_QUndoGroup_QUndoGroup);

PHP_METHOD(Qt_Gui_QUndoGroup_QUndoGroup, staticMetaObject);
PHP_METHOD(Qt_Gui_QUndoGroup_QUndoGroup, tr);
PHP_METHOD(Qt_Gui_QUndoGroup_QUndoGroup, new_);
PHP_METHOD(Qt_Gui_QUndoGroup_QUndoGroup, addStack);
PHP_METHOD(Qt_Gui_QUndoGroup_QUndoGroup, removeStack);
PHP_METHOD(Qt_Gui_QUndoGroup_QUndoGroup, stacks);
PHP_METHOD(Qt_Gui_QUndoGroup_QUndoGroup, activeStack);
PHP_METHOD(Qt_Gui_QUndoGroup_QUndoGroup, createUndoAction);
PHP_METHOD(Qt_Gui_QUndoGroup_QUndoGroup, createRedoAction);
PHP_METHOD(Qt_Gui_QUndoGroup_QUndoGroup, canUndo);
PHP_METHOD(Qt_Gui_QUndoGroup_QUndoGroup, canRedo);
PHP_METHOD(Qt_Gui_QUndoGroup_QUndoGroup, undoText);
PHP_METHOD(Qt_Gui_QUndoGroup_QUndoGroup, redoText);
PHP_METHOD(Qt_Gui_QUndoGroup_QUndoGroup, isClean);
PHP_METHOD(Qt_Gui_QUndoGroup_QUndoGroup, undo);
PHP_METHOD(Qt_Gui_QUndoGroup_QUndoGroup, redo);
PHP_METHOD(Qt_Gui_QUndoGroup_QUndoGroup, setActiveStack);
PHP_METHOD(Qt_Gui_QUndoGroup_QUndoGroup, activeStackChanged);
PHP_METHOD(Qt_Gui_QUndoGroup_QUndoGroup, indexChanged);
PHP_METHOD(Qt_Gui_QUndoGroup_QUndoGroup, cleanChanged);
PHP_METHOD(Qt_Gui_QUndoGroup_QUndoGroup, canUndoChanged);
PHP_METHOD(Qt_Gui_QUndoGroup_QUndoGroup, canRedoChanged);
PHP_METHOD(Qt_Gui_QUndoGroup_QUndoGroup, undoTextChanged);
PHP_METHOD(Qt_Gui_QUndoGroup_QUndoGroup, redoTextChanged);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qundogroup_qundogroup_staticmetaobject, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qundogroup_qundogroup_tr, 0, 1, IS_STRING, 0)
	ZEND_ARG_INFO(0, s)
	ZEND_ARG_INFO(0, c)
	ZEND_ARG_TYPE_INFO(0, n, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qundogroup_qundogroup_new_, 0, 0, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qundogroup_qundogroup_addstack, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, stack, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qundogroup_qundogroup_removestack, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, stack, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qundogroup_qundogroup_stacks, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qundogroup_qundogroup_activestack, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qundogroup_qundogroup_createundoaction, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, prefix, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qundogroup_qundogroup_createredoaction, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, prefix, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qundogroup_qundogroup_canundo, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qundogroup_qundogroup_canredo, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qundogroup_qundogroup_undotext, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qundogroup_qundogroup_redotext, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qundogroup_qundogroup_isclean, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qundogroup_qundogroup_undo, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qundogroup_qundogroup_redo, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qundogroup_qundogroup_setactivestack, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, stack, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qundogroup_qundogroup_activestackchanged, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, stack, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qundogroup_qundogroup_indexchanged, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, idx, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qundogroup_qundogroup_cleanchanged, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, clean, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qundogroup_qundogroup_canundochanged, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, canUndo, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qundogroup_qundogroup_canredochanged, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, canRedo, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qundogroup_qundogroup_undotextchanged, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, undoText, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qundogroup_qundogroup_redotextchanged, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, redoText, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_gui_qundogroup_qundogroup_method_entry) {
	PHP_ME(Qt_Gui_QUndoGroup_QUndoGroup, staticMetaObject, arginfo_qt_gui_qundogroup_qundogroup_staticmetaobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QUndoGroup_QUndoGroup, tr, arginfo_qt_gui_qundogroup_qundogroup_tr, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QUndoGroup_QUndoGroup, new_, arginfo_qt_gui_qundogroup_qundogroup_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QUndoGroup_QUndoGroup, addStack, arginfo_qt_gui_qundogroup_qundogroup_addstack, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QUndoGroup_QUndoGroup, removeStack, arginfo_qt_gui_qundogroup_qundogroup_removestack, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QUndoGroup_QUndoGroup, stacks, arginfo_qt_gui_qundogroup_qundogroup_stacks, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QUndoGroup_QUndoGroup, activeStack, arginfo_qt_gui_qundogroup_qundogroup_activestack, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QUndoGroup_QUndoGroup, createUndoAction, arginfo_qt_gui_qundogroup_qundogroup_createundoaction, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QUndoGroup_QUndoGroup, createRedoAction, arginfo_qt_gui_qundogroup_qundogroup_createredoaction, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QUndoGroup_QUndoGroup, canUndo, arginfo_qt_gui_qundogroup_qundogroup_canundo, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QUndoGroup_QUndoGroup, canRedo, arginfo_qt_gui_qundogroup_qundogroup_canredo, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QUndoGroup_QUndoGroup, undoText, arginfo_qt_gui_qundogroup_qundogroup_undotext, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QUndoGroup_QUndoGroup, redoText, arginfo_qt_gui_qundogroup_qundogroup_redotext, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QUndoGroup_QUndoGroup, isClean, arginfo_qt_gui_qundogroup_qundogroup_isclean, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QUndoGroup_QUndoGroup, undo, arginfo_qt_gui_qundogroup_qundogroup_undo, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QUndoGroup_QUndoGroup, redo, arginfo_qt_gui_qundogroup_qundogroup_redo, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QUndoGroup_QUndoGroup, setActiveStack, arginfo_qt_gui_qundogroup_qundogroup_setactivestack, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QUndoGroup_QUndoGroup, activeStackChanged, arginfo_qt_gui_qundogroup_qundogroup_activestackchanged, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QUndoGroup_QUndoGroup, indexChanged, arginfo_qt_gui_qundogroup_qundogroup_indexchanged, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QUndoGroup_QUndoGroup, cleanChanged, arginfo_qt_gui_qundogroup_qundogroup_cleanchanged, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QUndoGroup_QUndoGroup, canUndoChanged, arginfo_qt_gui_qundogroup_qundogroup_canundochanged, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QUndoGroup_QUndoGroup, canRedoChanged, arginfo_qt_gui_qundogroup_qundogroup_canredochanged, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QUndoGroup_QUndoGroup, undoTextChanged, arginfo_qt_gui_qundogroup_qundogroup_undotextchanged, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QUndoGroup_QUndoGroup, redoTextChanged, arginfo_qt_gui_qundogroup_qundogroup_redotextchanged, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
