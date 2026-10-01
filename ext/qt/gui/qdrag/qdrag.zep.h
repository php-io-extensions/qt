
extern zend_class_entry *qt_gui_qdrag_qdrag_ce;

ZEPHIR_INIT_CLASS(Qt_Gui_QDrag_QDrag);

PHP_METHOD(Qt_Gui_QDrag_QDrag, staticMetaObject);
PHP_METHOD(Qt_Gui_QDrag_QDrag, tr);
PHP_METHOD(Qt_Gui_QDrag_QDrag, new_);
PHP_METHOD(Qt_Gui_QDrag_QDrag, setMimeData);
PHP_METHOD(Qt_Gui_QDrag_QDrag, mimeData);
PHP_METHOD(Qt_Gui_QDrag_QDrag, setPixmap);
PHP_METHOD(Qt_Gui_QDrag_QDrag, pixmap);
PHP_METHOD(Qt_Gui_QDrag_QDrag, setHotSpot);
PHP_METHOD(Qt_Gui_QDrag_QDrag, hotSpot);
PHP_METHOD(Qt_Gui_QDrag_QDrag, source);
PHP_METHOD(Qt_Gui_QDrag_QDrag, target);
PHP_METHOD(Qt_Gui_QDrag_QDrag, exec);
PHP_METHOD(Qt_Gui_QDrag_QDrag, execQtDropActionsQtDropAction);
PHP_METHOD(Qt_Gui_QDrag_QDrag, setDragCursor);
PHP_METHOD(Qt_Gui_QDrag_QDrag, dragCursor);
PHP_METHOD(Qt_Gui_QDrag_QDrag, supportedActions);
PHP_METHOD(Qt_Gui_QDrag_QDrag, defaultAction);
PHP_METHOD(Qt_Gui_QDrag_QDrag, cancel);
PHP_METHOD(Qt_Gui_QDrag_QDrag, actionChanged);
PHP_METHOD(Qt_Gui_QDrag_QDrag, targetChanged);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qdrag_qdrag_staticmetaobject, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qdrag_qdrag_tr, 0, 1, IS_STRING, 0)
	ZEND_ARG_INFO(0, s)
	ZEND_ARG_INFO(0, c)
	ZEND_ARG_TYPE_INFO(0, n, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qdrag_qdrag_new_, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, dragSource, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qdrag_qdrag_setmimedata, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, data, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qdrag_qdrag_mimedata, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qdrag_qdrag_setpixmap, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qdrag_qdrag_pixmap, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qdrag_qdrag_sethotspot, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, hotspotX, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, hotspotY, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qdrag_qdrag_hotspot, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qdrag_qdrag_source, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qdrag_qdrag_target, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qdrag_qdrag_exec, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_INFO(0, supportedActions)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qdrag_qdrag_execqtdropactionsqtdropaction, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, supportedActions, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, defaultAction, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qdrag_qdrag_setdragcursor, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, cursor, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, action, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qdrag_qdrag_dragcursor, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, action, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qdrag_qdrag_supportedactions, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qdrag_qdrag_defaultaction, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qdrag_qdrag_cancel, 0, 0, IS_VOID, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qdrag_qdrag_actionchanged, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, action, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qdrag_qdrag_targetchanged, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, newTarget, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_gui_qdrag_qdrag_method_entry) {
	PHP_ME(Qt_Gui_QDrag_QDrag, staticMetaObject, arginfo_qt_gui_qdrag_qdrag_staticmetaobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QDrag_QDrag, tr, arginfo_qt_gui_qdrag_qdrag_tr, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QDrag_QDrag, new_, arginfo_qt_gui_qdrag_qdrag_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QDrag_QDrag, setMimeData, arginfo_qt_gui_qdrag_qdrag_setmimedata, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QDrag_QDrag, mimeData, arginfo_qt_gui_qdrag_qdrag_mimedata, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QDrag_QDrag, setPixmap, arginfo_qt_gui_qdrag_qdrag_setpixmap, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QDrag_QDrag, pixmap, arginfo_qt_gui_qdrag_qdrag_pixmap, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QDrag_QDrag, setHotSpot, arginfo_qt_gui_qdrag_qdrag_sethotspot, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QDrag_QDrag, hotSpot, arginfo_qt_gui_qdrag_qdrag_hotspot, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QDrag_QDrag, source, arginfo_qt_gui_qdrag_qdrag_source, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QDrag_QDrag, target, arginfo_qt_gui_qdrag_qdrag_target, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QDrag_QDrag, exec, arginfo_qt_gui_qdrag_qdrag_exec, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QDrag_QDrag, execQtDropActionsQtDropAction, arginfo_qt_gui_qdrag_qdrag_execqtdropactionsqtdropaction, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QDrag_QDrag, setDragCursor, arginfo_qt_gui_qdrag_qdrag_setdragcursor, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QDrag_QDrag, dragCursor, arginfo_qt_gui_qdrag_qdrag_dragcursor, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QDrag_QDrag, supportedActions, arginfo_qt_gui_qdrag_qdrag_supportedactions, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QDrag_QDrag, defaultAction, arginfo_qt_gui_qdrag_qdrag_defaultaction, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QDrag_QDrag, cancel, arginfo_qt_gui_qdrag_qdrag_cancel, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QDrag_QDrag, actionChanged, arginfo_qt_gui_qdrag_qdrag_actionchanged, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QDrag_QDrag, targetChanged, arginfo_qt_gui_qdrag_qdrag_targetchanged, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
