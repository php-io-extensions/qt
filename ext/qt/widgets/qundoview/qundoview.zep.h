
extern zend_class_entry *qt_widgets_qundoview_qundoview_ce;

ZEPHIR_INIT_CLASS(Qt_Widgets_QUndoView_QUndoView);

PHP_METHOD(Qt_Widgets_QUndoView_QUndoView, staticMetaObject);
PHP_METHOD(Qt_Widgets_QUndoView_QUndoView, tr);
PHP_METHOD(Qt_Widgets_QUndoView_QUndoView, new_);
PHP_METHOD(Qt_Widgets_QUndoView_QUndoView, newQUndoStackQWidget);
PHP_METHOD(Qt_Widgets_QUndoView_QUndoView, newQUndoGroupQWidget);
PHP_METHOD(Qt_Widgets_QUndoView_QUndoView, stack);
PHP_METHOD(Qt_Widgets_QUndoView_QUndoView, group);
PHP_METHOD(Qt_Widgets_QUndoView_QUndoView, setEmptyLabel);
PHP_METHOD(Qt_Widgets_QUndoView_QUndoView, emptyLabel);
PHP_METHOD(Qt_Widgets_QUndoView_QUndoView, setCleanIcon);
PHP_METHOD(Qt_Widgets_QUndoView_QUndoView, cleanIcon);
PHP_METHOD(Qt_Widgets_QUndoView_QUndoView, setStack);
PHP_METHOD(Qt_Widgets_QUndoView_QUndoView, setGroup);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qundoview_qundoview_staticmetaobject, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qundoview_qundoview_tr, 0, 1, IS_STRING, 0)
	ZEND_ARG_INFO(0, s)
	ZEND_ARG_INFO(0, c)
	ZEND_ARG_TYPE_INFO(0, n, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qundoview_qundoview_new_, 0, 0, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qundoview_qundoview_newqundostackqwidget, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, stack, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qundoview_qundoview_newqundogroupqwidget, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, group, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qundoview_qundoview_stack, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qundoview_qundoview_group, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qundoview_qundoview_setemptylabel, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, label, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qundoview_qundoview_emptylabel, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qundoview_qundoview_setcleanicon, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, icon, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qundoview_qundoview_cleanicon, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qundoview_qundoview_setstack, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, stack, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qundoview_qundoview_setgroup, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, group, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_widgets_qundoview_qundoview_method_entry) {
	PHP_ME(Qt_Widgets_QUndoView_QUndoView, staticMetaObject, arginfo_qt_widgets_qundoview_qundoview_staticmetaobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QUndoView_QUndoView, tr, arginfo_qt_widgets_qundoview_qundoview_tr, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QUndoView_QUndoView, new_, arginfo_qt_widgets_qundoview_qundoview_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QUndoView_QUndoView, newQUndoStackQWidget, arginfo_qt_widgets_qundoview_qundoview_newqundostackqwidget, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QUndoView_QUndoView, newQUndoGroupQWidget, arginfo_qt_widgets_qundoview_qundoview_newqundogroupqwidget, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QUndoView_QUndoView, stack, arginfo_qt_widgets_qundoview_qundoview_stack, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QUndoView_QUndoView, group, arginfo_qt_widgets_qundoview_qundoview_group, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QUndoView_QUndoView, setEmptyLabel, arginfo_qt_widgets_qundoview_qundoview_setemptylabel, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QUndoView_QUndoView, emptyLabel, arginfo_qt_widgets_qundoview_qundoview_emptylabel, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QUndoView_QUndoView, setCleanIcon, arginfo_qt_widgets_qundoview_qundoview_setcleanicon, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QUndoView_QUndoView, cleanIcon, arginfo_qt_widgets_qundoview_qundoview_cleanicon, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QUndoView_QUndoView, setStack, arginfo_qt_widgets_qundoview_qundoview_setstack, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QUndoView_QUndoView, setGroup, arginfo_qt_widgets_qundoview_qundoview_setgroup, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
