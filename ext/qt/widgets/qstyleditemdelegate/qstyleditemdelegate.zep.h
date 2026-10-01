
extern zend_class_entry *qt_widgets_qstyleditemdelegate_qstyleditemdelegate_ce;

ZEPHIR_INIT_CLASS(Qt_Widgets_QStyledItemDelegate_QStyledItemDelegate);

PHP_METHOD(Qt_Widgets_QStyledItemDelegate_QStyledItemDelegate, staticMetaObject);
PHP_METHOD(Qt_Widgets_QStyledItemDelegate_QStyledItemDelegate, tr);
PHP_METHOD(Qt_Widgets_QStyledItemDelegate_QStyledItemDelegate, new_);
PHP_METHOD(Qt_Widgets_QStyledItemDelegate_QStyledItemDelegate, paint);
PHP_METHOD(Qt_Widgets_QStyledItemDelegate_QStyledItemDelegate, sizeHint);
PHP_METHOD(Qt_Widgets_QStyledItemDelegate_QStyledItemDelegate, createEditor);
PHP_METHOD(Qt_Widgets_QStyledItemDelegate_QStyledItemDelegate, setEditorData);
PHP_METHOD(Qt_Widgets_QStyledItemDelegate_QStyledItemDelegate, setModelData);
PHP_METHOD(Qt_Widgets_QStyledItemDelegate_QStyledItemDelegate, updateEditorGeometry);
PHP_METHOD(Qt_Widgets_QStyledItemDelegate_QStyledItemDelegate, itemEditorFactory);
PHP_METHOD(Qt_Widgets_QStyledItemDelegate_QStyledItemDelegate, setItemEditorFactory);
PHP_METHOD(Qt_Widgets_QStyledItemDelegate_QStyledItemDelegate, displayText);
PHP_METHOD(Qt_Widgets_QStyledItemDelegate_QStyledItemDelegate, initStyleOption);
PHP_METHOD(Qt_Widgets_QStyledItemDelegate_QStyledItemDelegate, eventFilter);
PHP_METHOD(Qt_Widgets_QStyledItemDelegate_QStyledItemDelegate, editorEvent);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qstyleditemdelegate_qstyleditemdelegate_staticmetaobject, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qstyleditemdelegate_qstyleditemdelegate_tr, 0, 1, IS_STRING, 0)
	ZEND_ARG_INFO(0, s)
	ZEND_ARG_INFO(0, c)
	ZEND_ARG_TYPE_INFO(0, n, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qstyleditemdelegate_qstyleditemdelegate_new_, 0, 0, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qstyleditemdelegate_qstyleditemdelegate_paint, 0, 4, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, painter, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, option, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qstyleditemdelegate_qstyleditemdelegate_sizehint, 0, 3, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, option, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qstyleditemdelegate_qstyleditemdelegate_createeditor, 0, 4, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, option, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qstyleditemdelegate_qstyleditemdelegate_seteditordata, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, editor, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qstyleditemdelegate_qstyleditemdelegate_setmodeldata, 0, 4, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, editor, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, model, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qstyleditemdelegate_qstyleditemdelegate_updateeditorgeometry, 0, 4, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, editor, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, option, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qstyleditemdelegate_qstyleditemdelegate_itemeditorfactory, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qstyleditemdelegate_qstyleditemdelegate_setitemeditorfactory, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, factory, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qstyleditemdelegate_qstyleditemdelegate_displaytext, 0, 3, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_INFO(0, value)
	ZEND_ARG_TYPE_INFO(0, locale, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qstyleditemdelegate_qstyleditemdelegate_initstyleoption, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, option, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qstyleditemdelegate_qstyleditemdelegate_eventfilter, 0, 3, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, object_, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, event, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qstyleditemdelegate_qstyleditemdelegate_editorevent, 0, 5, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, event, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, model, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, option, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_widgets_qstyleditemdelegate_qstyleditemdelegate_method_entry) {
	PHP_ME(Qt_Widgets_QStyledItemDelegate_QStyledItemDelegate, staticMetaObject, arginfo_qt_widgets_qstyleditemdelegate_qstyleditemdelegate_staticmetaobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QStyledItemDelegate_QStyledItemDelegate, tr, arginfo_qt_widgets_qstyleditemdelegate_qstyleditemdelegate_tr, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QStyledItemDelegate_QStyledItemDelegate, new_, arginfo_qt_widgets_qstyleditemdelegate_qstyleditemdelegate_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QStyledItemDelegate_QStyledItemDelegate, paint, arginfo_qt_widgets_qstyleditemdelegate_qstyleditemdelegate_paint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QStyledItemDelegate_QStyledItemDelegate, sizeHint, arginfo_qt_widgets_qstyleditemdelegate_qstyleditemdelegate_sizehint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QStyledItemDelegate_QStyledItemDelegate, createEditor, arginfo_qt_widgets_qstyleditemdelegate_qstyleditemdelegate_createeditor, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QStyledItemDelegate_QStyledItemDelegate, setEditorData, arginfo_qt_widgets_qstyleditemdelegate_qstyleditemdelegate_seteditordata, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QStyledItemDelegate_QStyledItemDelegate, setModelData, arginfo_qt_widgets_qstyleditemdelegate_qstyleditemdelegate_setmodeldata, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QStyledItemDelegate_QStyledItemDelegate, updateEditorGeometry, arginfo_qt_widgets_qstyleditemdelegate_qstyleditemdelegate_updateeditorgeometry, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QStyledItemDelegate_QStyledItemDelegate, itemEditorFactory, arginfo_qt_widgets_qstyleditemdelegate_qstyleditemdelegate_itemeditorfactory, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QStyledItemDelegate_QStyledItemDelegate, setItemEditorFactory, arginfo_qt_widgets_qstyleditemdelegate_qstyleditemdelegate_setitemeditorfactory, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QStyledItemDelegate_QStyledItemDelegate, displayText, arginfo_qt_widgets_qstyleditemdelegate_qstyleditemdelegate_displaytext, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QStyledItemDelegate_QStyledItemDelegate, initStyleOption, arginfo_qt_widgets_qstyleditemdelegate_qstyleditemdelegate_initstyleoption, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QStyledItemDelegate_QStyledItemDelegate, eventFilter, arginfo_qt_widgets_qstyleditemdelegate_qstyleditemdelegate_eventfilter, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QStyledItemDelegate_QStyledItemDelegate, editorEvent, arginfo_qt_widgets_qstyleditemdelegate_qstyleditemdelegate_editorevent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
