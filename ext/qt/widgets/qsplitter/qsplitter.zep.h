
extern zend_class_entry *qt_widgets_qsplitter_qsplitter_ce;

ZEPHIR_INIT_CLASS(Qt_Widgets_QSplitter_QSplitter);

PHP_METHOD(Qt_Widgets_QSplitter_QSplitter, staticMetaObject);
PHP_METHOD(Qt_Widgets_QSplitter_QSplitter, tr);
PHP_METHOD(Qt_Widgets_QSplitter_QSplitter, new_);
PHP_METHOD(Qt_Widgets_QSplitter_QSplitter, newQtOrientationQWidget);
PHP_METHOD(Qt_Widgets_QSplitter_QSplitter, addWidget);
PHP_METHOD(Qt_Widgets_QSplitter_QSplitter, insertWidget);
PHP_METHOD(Qt_Widgets_QSplitter_QSplitter, replaceWidget);
PHP_METHOD(Qt_Widgets_QSplitter_QSplitter, setOrientation);
PHP_METHOD(Qt_Widgets_QSplitter_QSplitter, orientation);
PHP_METHOD(Qt_Widgets_QSplitter_QSplitter, setChildrenCollapsible);
PHP_METHOD(Qt_Widgets_QSplitter_QSplitter, childrenCollapsible);
PHP_METHOD(Qt_Widgets_QSplitter_QSplitter, setCollapsible);
PHP_METHOD(Qt_Widgets_QSplitter_QSplitter, isCollapsible);
PHP_METHOD(Qt_Widgets_QSplitter_QSplitter, setOpaqueResize);
PHP_METHOD(Qt_Widgets_QSplitter_QSplitter, opaqueResize);
PHP_METHOD(Qt_Widgets_QSplitter_QSplitter, refresh);
PHP_METHOD(Qt_Widgets_QSplitter_QSplitter, sizeHint);
PHP_METHOD(Qt_Widgets_QSplitter_QSplitter, minimumSizeHint);
PHP_METHOD(Qt_Widgets_QSplitter_QSplitter, sizes);
PHP_METHOD(Qt_Widgets_QSplitter_QSplitter, setSizes);
PHP_METHOD(Qt_Widgets_QSplitter_QSplitter, saveState);
PHP_METHOD(Qt_Widgets_QSplitter_QSplitter, restoreState);
PHP_METHOD(Qt_Widgets_QSplitter_QSplitter, handleWidth);
PHP_METHOD(Qt_Widgets_QSplitter_QSplitter, setHandleWidth);
PHP_METHOD(Qt_Widgets_QSplitter_QSplitter, indexOf);
PHP_METHOD(Qt_Widgets_QSplitter_QSplitter, widget);
PHP_METHOD(Qt_Widgets_QSplitter_QSplitter, count);
PHP_METHOD(Qt_Widgets_QSplitter_QSplitter, getRange);
PHP_METHOD(Qt_Widgets_QSplitter_QSplitter, handle);
PHP_METHOD(Qt_Widgets_QSplitter_QSplitter, setStretchFactor);
PHP_METHOD(Qt_Widgets_QSplitter_QSplitter, splitterMoved);
PHP_METHOD(Qt_Widgets_QSplitter_QSplitter, createHandle);
PHP_METHOD(Qt_Widgets_QSplitter_QSplitter, childEvent);
PHP_METHOD(Qt_Widgets_QSplitter_QSplitter, event);
PHP_METHOD(Qt_Widgets_QSplitter_QSplitter, resizeEvent);
PHP_METHOD(Qt_Widgets_QSplitter_QSplitter, changeEvent);
PHP_METHOD(Qt_Widgets_QSplitter_QSplitter, moveSplitter);
PHP_METHOD(Qt_Widgets_QSplitter_QSplitter, setRubberBand);
PHP_METHOD(Qt_Widgets_QSplitter_QSplitter, closestLegalPosition);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qsplitter_qsplitter_staticmetaobject, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qsplitter_qsplitter_tr, 0, 1, IS_STRING, 0)
	ZEND_ARG_INFO(0, s)
	ZEND_ARG_INFO(0, c)
	ZEND_ARG_TYPE_INFO(0, n, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qsplitter_qsplitter_new_, 0, 0, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qsplitter_qsplitter_newqtorientationqwidget, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qsplitter_qsplitter_addwidget, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, widget, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qsplitter_qsplitter_insertwidget, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, widget, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qsplitter_qsplitter_replacewidget, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, widget, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qsplitter_qsplitter_setorientation, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qsplitter_qsplitter_orientation, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qsplitter_qsplitter_setchildrencollapsible, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qsplitter_qsplitter_childrencollapsible, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qsplitter_qsplitter_setcollapsible, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg1, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qsplitter_qsplitter_iscollapsible, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qsplitter_qsplitter_setopaqueresize, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, opaque, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qsplitter_qsplitter_opaqueresize, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qsplitter_qsplitter_refresh, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qsplitter_qsplitter_sizehint, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qsplitter_qsplitter_minimumsizehint, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qsplitter_qsplitter_sizes, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qsplitter_qsplitter_setsizes, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_ARRAY_INFO(0, list_, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qsplitter_qsplitter_savestate, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qsplitter_qsplitter_restorestate, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, state, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qsplitter_qsplitter_handlewidth, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qsplitter_qsplitter_sethandlewidth, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qsplitter_qsplitter_indexof, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, w, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qsplitter_qsplitter_widget, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qsplitter_qsplitter_count, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qsplitter_qsplitter_getrange, 0, 4, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
	ZEND_ARG_INFO(0, arg1)
	ZEND_ARG_INFO(0, arg2)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qsplitter_qsplitter_handle, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qsplitter_qsplitter_setstretchfactor, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, stretch, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qsplitter_qsplitter_splittermoved, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, pos, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qsplitter_qsplitter_createhandle, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qsplitter_qsplitter_childevent, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qsplitter_qsplitter_event, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qsplitter_qsplitter_resizeevent, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qsplitter_qsplitter_changeevent, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qsplitter_qsplitter_movesplitter, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, pos, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qsplitter_qsplitter_setrubberband, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, position, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qsplitter_qsplitter_closestlegalposition, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg1, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_widgets_qsplitter_qsplitter_method_entry) {
	PHP_ME(Qt_Widgets_QSplitter_QSplitter, staticMetaObject, arginfo_qt_widgets_qsplitter_qsplitter_staticmetaobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QSplitter_QSplitter, tr, arginfo_qt_widgets_qsplitter_qsplitter_tr, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QSplitter_QSplitter, new_, arginfo_qt_widgets_qsplitter_qsplitter_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QSplitter_QSplitter, newQtOrientationQWidget, arginfo_qt_widgets_qsplitter_qsplitter_newqtorientationqwidget, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QSplitter_QSplitter, addWidget, arginfo_qt_widgets_qsplitter_qsplitter_addwidget, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QSplitter_QSplitter, insertWidget, arginfo_qt_widgets_qsplitter_qsplitter_insertwidget, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QSplitter_QSplitter, replaceWidget, arginfo_qt_widgets_qsplitter_qsplitter_replacewidget, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QSplitter_QSplitter, setOrientation, arginfo_qt_widgets_qsplitter_qsplitter_setorientation, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QSplitter_QSplitter, orientation, arginfo_qt_widgets_qsplitter_qsplitter_orientation, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QSplitter_QSplitter, setChildrenCollapsible, arginfo_qt_widgets_qsplitter_qsplitter_setchildrencollapsible, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QSplitter_QSplitter, childrenCollapsible, arginfo_qt_widgets_qsplitter_qsplitter_childrencollapsible, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QSplitter_QSplitter, setCollapsible, arginfo_qt_widgets_qsplitter_qsplitter_setcollapsible, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QSplitter_QSplitter, isCollapsible, arginfo_qt_widgets_qsplitter_qsplitter_iscollapsible, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QSplitter_QSplitter, setOpaqueResize, arginfo_qt_widgets_qsplitter_qsplitter_setopaqueresize, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QSplitter_QSplitter, opaqueResize, arginfo_qt_widgets_qsplitter_qsplitter_opaqueresize, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QSplitter_QSplitter, refresh, arginfo_qt_widgets_qsplitter_qsplitter_refresh, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QSplitter_QSplitter, sizeHint, arginfo_qt_widgets_qsplitter_qsplitter_sizehint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QSplitter_QSplitter, minimumSizeHint, arginfo_qt_widgets_qsplitter_qsplitter_minimumsizehint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QSplitter_QSplitter, sizes, arginfo_qt_widgets_qsplitter_qsplitter_sizes, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QSplitter_QSplitter, setSizes, arginfo_qt_widgets_qsplitter_qsplitter_setsizes, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QSplitter_QSplitter, saveState, arginfo_qt_widgets_qsplitter_qsplitter_savestate, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QSplitter_QSplitter, restoreState, arginfo_qt_widgets_qsplitter_qsplitter_restorestate, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QSplitter_QSplitter, handleWidth, arginfo_qt_widgets_qsplitter_qsplitter_handlewidth, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QSplitter_QSplitter, setHandleWidth, arginfo_qt_widgets_qsplitter_qsplitter_sethandlewidth, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QSplitter_QSplitter, indexOf, arginfo_qt_widgets_qsplitter_qsplitter_indexof, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QSplitter_QSplitter, widget, arginfo_qt_widgets_qsplitter_qsplitter_widget, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QSplitter_QSplitter, count, arginfo_qt_widgets_qsplitter_qsplitter_count, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QSplitter_QSplitter, getRange, arginfo_qt_widgets_qsplitter_qsplitter_getrange, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QSplitter_QSplitter, handle, arginfo_qt_widgets_qsplitter_qsplitter_handle, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QSplitter_QSplitter, setStretchFactor, arginfo_qt_widgets_qsplitter_qsplitter_setstretchfactor, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QSplitter_QSplitter, splitterMoved, arginfo_qt_widgets_qsplitter_qsplitter_splittermoved, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QSplitter_QSplitter, createHandle, arginfo_qt_widgets_qsplitter_qsplitter_createhandle, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QSplitter_QSplitter, childEvent, arginfo_qt_widgets_qsplitter_qsplitter_childevent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QSplitter_QSplitter, event, arginfo_qt_widgets_qsplitter_qsplitter_event, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QSplitter_QSplitter, resizeEvent, arginfo_qt_widgets_qsplitter_qsplitter_resizeevent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QSplitter_QSplitter, changeEvent, arginfo_qt_widgets_qsplitter_qsplitter_changeevent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QSplitter_QSplitter, moveSplitter, arginfo_qt_widgets_qsplitter_qsplitter_movesplitter, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QSplitter_QSplitter, setRubberBand, arginfo_qt_widgets_qsplitter_qsplitter_setrubberband, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QSplitter_QSplitter, closestLegalPosition, arginfo_qt_widgets_qsplitter_qsplitter_closestlegalposition, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
