
extern zend_class_entry *qt_widgets_qabstractitemdelegate_qabstractitemdelegate_ce;

ZEPHIR_INIT_CLASS(Qt_Widgets_QAbstractItemDelegate_QAbstractItemDelegate);

PHP_METHOD(Qt_Widgets_QAbstractItemDelegate_QAbstractItemDelegate, staticMetaObject);
PHP_METHOD(Qt_Widgets_QAbstractItemDelegate_QAbstractItemDelegate, tr);
PHP_METHOD(Qt_Widgets_QAbstractItemDelegate_QAbstractItemDelegate, new_);
PHP_METHOD(Qt_Widgets_QAbstractItemDelegate_QAbstractItemDelegate, paint);
PHP_METHOD(Qt_Widgets_QAbstractItemDelegate_QAbstractItemDelegate, sizeHint);
PHP_METHOD(Qt_Widgets_QAbstractItemDelegate_QAbstractItemDelegate, createEditor);
PHP_METHOD(Qt_Widgets_QAbstractItemDelegate_QAbstractItemDelegate, destroyEditor);
PHP_METHOD(Qt_Widgets_QAbstractItemDelegate_QAbstractItemDelegate, setEditorData);
PHP_METHOD(Qt_Widgets_QAbstractItemDelegate_QAbstractItemDelegate, setModelData);
PHP_METHOD(Qt_Widgets_QAbstractItemDelegate_QAbstractItemDelegate, updateEditorGeometry);
PHP_METHOD(Qt_Widgets_QAbstractItemDelegate_QAbstractItemDelegate, editorEvent);
PHP_METHOD(Qt_Widgets_QAbstractItemDelegate_QAbstractItemDelegate, helpEvent);
PHP_METHOD(Qt_Widgets_QAbstractItemDelegate_QAbstractItemDelegate, paintingRoles);
PHP_METHOD(Qt_Widgets_QAbstractItemDelegate_QAbstractItemDelegate, commitData);
PHP_METHOD(Qt_Widgets_QAbstractItemDelegate_QAbstractItemDelegate, closeEditor);
PHP_METHOD(Qt_Widgets_QAbstractItemDelegate_QAbstractItemDelegate, sizeHintChanged);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qabstractitemdelegate_qabstractitemdelegate_staticmetaobject, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qabstractitemdelegate_qabstractitemdelegate_tr, 0, 1, IS_STRING, 0)
	ZEND_ARG_INFO(0, s)
	ZEND_ARG_INFO(0, c)
	ZEND_ARG_TYPE_INFO(0, n, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qabstractitemdelegate_qabstractitemdelegate_new_, 0, 0, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qabstractitemdelegate_qabstractitemdelegate_paint, 0, 4, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, painter, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, option, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qabstractitemdelegate_qabstractitemdelegate_sizehint, 0, 3, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, option, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qabstractitemdelegate_qabstractitemdelegate_createeditor, 0, 4, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, option, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qabstractitemdelegate_qabstractitemdelegate_destroyeditor, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, editor, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qabstractitemdelegate_qabstractitemdelegate_seteditordata, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, editor, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qabstractitemdelegate_qabstractitemdelegate_setmodeldata, 0, 4, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, editor, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, model, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qabstractitemdelegate_qabstractitemdelegate_updateeditorgeometry, 0, 4, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, editor, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, option, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qabstractitemdelegate_qabstractitemdelegate_editorevent, 0, 5, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, event, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, model, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, option, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qabstractitemdelegate_qabstractitemdelegate_helpevent, 0, 5, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, event, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, view, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, option, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qabstractitemdelegate_qabstractitemdelegate_paintingroles, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qabstractitemdelegate_qabstractitemdelegate_commitdata, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, editor, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qabstractitemdelegate_qabstractitemdelegate_closeeditor, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, editor, IS_LONG, 0)
	ZEND_ARG_INFO(0, hint)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qabstractitemdelegate_qabstractitemdelegate_sizehintchanged, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_widgets_qabstractitemdelegate_qabstractitemdelegate_method_entry) {
	PHP_ME(Qt_Widgets_QAbstractItemDelegate_QAbstractItemDelegate, staticMetaObject, arginfo_qt_widgets_qabstractitemdelegate_qabstractitemdelegate_staticmetaobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QAbstractItemDelegate_QAbstractItemDelegate, tr, arginfo_qt_widgets_qabstractitemdelegate_qabstractitemdelegate_tr, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QAbstractItemDelegate_QAbstractItemDelegate, new_, arginfo_qt_widgets_qabstractitemdelegate_qabstractitemdelegate_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QAbstractItemDelegate_QAbstractItemDelegate, paint, arginfo_qt_widgets_qabstractitemdelegate_qabstractitemdelegate_paint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QAbstractItemDelegate_QAbstractItemDelegate, sizeHint, arginfo_qt_widgets_qabstractitemdelegate_qabstractitemdelegate_sizehint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QAbstractItemDelegate_QAbstractItemDelegate, createEditor, arginfo_qt_widgets_qabstractitemdelegate_qabstractitemdelegate_createeditor, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QAbstractItemDelegate_QAbstractItemDelegate, destroyEditor, arginfo_qt_widgets_qabstractitemdelegate_qabstractitemdelegate_destroyeditor, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QAbstractItemDelegate_QAbstractItemDelegate, setEditorData, arginfo_qt_widgets_qabstractitemdelegate_qabstractitemdelegate_seteditordata, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QAbstractItemDelegate_QAbstractItemDelegate, setModelData, arginfo_qt_widgets_qabstractitemdelegate_qabstractitemdelegate_setmodeldata, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QAbstractItemDelegate_QAbstractItemDelegate, updateEditorGeometry, arginfo_qt_widgets_qabstractitemdelegate_qabstractitemdelegate_updateeditorgeometry, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QAbstractItemDelegate_QAbstractItemDelegate, editorEvent, arginfo_qt_widgets_qabstractitemdelegate_qabstractitemdelegate_editorevent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QAbstractItemDelegate_QAbstractItemDelegate, helpEvent, arginfo_qt_widgets_qabstractitemdelegate_qabstractitemdelegate_helpevent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QAbstractItemDelegate_QAbstractItemDelegate, paintingRoles, arginfo_qt_widgets_qabstractitemdelegate_qabstractitemdelegate_paintingroles, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QAbstractItemDelegate_QAbstractItemDelegate, commitData, arginfo_qt_widgets_qabstractitemdelegate_qabstractitemdelegate_commitdata, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QAbstractItemDelegate_QAbstractItemDelegate, closeEditor, arginfo_qt_widgets_qabstractitemdelegate_qabstractitemdelegate_closeeditor, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QAbstractItemDelegate_QAbstractItemDelegate, sizeHintChanged, arginfo_qt_widgets_qabstractitemdelegate_qabstractitemdelegate_sizehintchanged, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
