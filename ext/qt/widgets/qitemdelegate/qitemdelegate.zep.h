
extern zend_class_entry *qt_widgets_qitemdelegate_qitemdelegate_ce;

ZEPHIR_INIT_CLASS(Qt_Widgets_QItemDelegate_QItemDelegate);

PHP_METHOD(Qt_Widgets_QItemDelegate_QItemDelegate, staticMetaObject);
PHP_METHOD(Qt_Widgets_QItemDelegate_QItemDelegate, tr);
PHP_METHOD(Qt_Widgets_QItemDelegate_QItemDelegate, new_);
PHP_METHOD(Qt_Widgets_QItemDelegate_QItemDelegate, hasClipping);
PHP_METHOD(Qt_Widgets_QItemDelegate_QItemDelegate, setClipping);
PHP_METHOD(Qt_Widgets_QItemDelegate_QItemDelegate, paint);
PHP_METHOD(Qt_Widgets_QItemDelegate_QItemDelegate, sizeHint);
PHP_METHOD(Qt_Widgets_QItemDelegate_QItemDelegate, createEditor);
PHP_METHOD(Qt_Widgets_QItemDelegate_QItemDelegate, setEditorData);
PHP_METHOD(Qt_Widgets_QItemDelegate_QItemDelegate, setModelData);
PHP_METHOD(Qt_Widgets_QItemDelegate_QItemDelegate, updateEditorGeometry);
PHP_METHOD(Qt_Widgets_QItemDelegate_QItemDelegate, itemEditorFactory);
PHP_METHOD(Qt_Widgets_QItemDelegate_QItemDelegate, setItemEditorFactory);
PHP_METHOD(Qt_Widgets_QItemDelegate_QItemDelegate, drawDisplay);
PHP_METHOD(Qt_Widgets_QItemDelegate_QItemDelegate, drawDecoration);
PHP_METHOD(Qt_Widgets_QItemDelegate_QItemDelegate, drawFocus);
PHP_METHOD(Qt_Widgets_QItemDelegate_QItemDelegate, drawCheck);
PHP_METHOD(Qt_Widgets_QItemDelegate_QItemDelegate, drawBackground);
PHP_METHOD(Qt_Widgets_QItemDelegate_QItemDelegate, doLayout);
PHP_METHOD(Qt_Widgets_QItemDelegate_QItemDelegate, rect);
PHP_METHOD(Qt_Widgets_QItemDelegate_QItemDelegate, eventFilter);
PHP_METHOD(Qt_Widgets_QItemDelegate_QItemDelegate, editorEvent);
PHP_METHOD(Qt_Widgets_QItemDelegate_QItemDelegate, setOptions);
PHP_METHOD(Qt_Widgets_QItemDelegate_QItemDelegate, decoration);
PHP_METHOD(Qt_Widgets_QItemDelegate_QItemDelegate, selectedPixmap);
PHP_METHOD(Qt_Widgets_QItemDelegate_QItemDelegate, doCheck);
PHP_METHOD(Qt_Widgets_QItemDelegate_QItemDelegate, textRectangle);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qitemdelegate_qitemdelegate_staticmetaobject, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qitemdelegate_qitemdelegate_tr, 0, 1, IS_STRING, 0)
	ZEND_ARG_INFO(0, s)
	ZEND_ARG_INFO(0, c)
	ZEND_ARG_TYPE_INFO(0, n, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qitemdelegate_qitemdelegate_new_, 0, 0, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qitemdelegate_qitemdelegate_hasclipping, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qitemdelegate_qitemdelegate_setclipping, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, clip, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qitemdelegate_qitemdelegate_paint, 0, 4, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, painter, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, option, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qitemdelegate_qitemdelegate_sizehint, 0, 3, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, option, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qitemdelegate_qitemdelegate_createeditor, 0, 4, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, option, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qitemdelegate_qitemdelegate_seteditordata, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, editor, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qitemdelegate_qitemdelegate_setmodeldata, 0, 4, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, editor, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, model, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qitemdelegate_qitemdelegate_updateeditorgeometry, 0, 4, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, editor, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, option, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qitemdelegate_qitemdelegate_itemeditorfactory, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qitemdelegate_qitemdelegate_setitemeditorfactory, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, factory, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qitemdelegate_qitemdelegate_drawdisplay, 0, 8, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, painter, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, option, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rectX, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rectY, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rectWidth, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rectHeight, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, text, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qitemdelegate_qitemdelegate_drawdecoration, 0, 8, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, painter, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, option, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rectX, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rectY, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rectWidth, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rectHeight, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, pixmap, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qitemdelegate_qitemdelegate_drawfocus, 0, 7, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, painter, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, option, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rectX, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rectY, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rectWidth, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rectHeight, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qitemdelegate_qitemdelegate_drawcheck, 0, 8, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, painter, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, option, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rectX, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rectY, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rectWidth, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rectHeight, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, state, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qitemdelegate_qitemdelegate_drawbackground, 0, 4, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, painter, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, option, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qitemdelegate_qitemdelegate_dolayout, 0, 6, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, option, IS_LONG, 0)
	ZEND_ARG_INFO(0, checkRect)
	ZEND_ARG_INFO(0, iconRect)
	ZEND_ARG_INFO(0, textRect)
	ZEND_ARG_TYPE_INFO(0, hint, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qitemdelegate_qitemdelegate_rect, 0, 4, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, option, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, role, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qitemdelegate_qitemdelegate_eventfilter, 0, 3, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, object_, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, event, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qitemdelegate_qitemdelegate_editorevent, 0, 5, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, event, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, model, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, option, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qitemdelegate_qitemdelegate_setoptions, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, option, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qitemdelegate_qitemdelegate_decoration, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, option, IS_LONG, 0)
	ZEND_ARG_INFO(0, variant)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qitemdelegate_qitemdelegate_selectedpixmap, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, pixmap, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, palette, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, enabled, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qitemdelegate_qitemdelegate_docheck, 0, 7, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, option, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, boundingX, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, boundingY, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, boundingWidth, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, boundingHeight, IS_LONG, 0)
	ZEND_ARG_INFO(0, variant)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qitemdelegate_qitemdelegate_textrectangle, 0, 8, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, painter, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rectX, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rectY, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rectWidth, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rectHeight, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, font, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, text, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_widgets_qitemdelegate_qitemdelegate_method_entry) {
	PHP_ME(Qt_Widgets_QItemDelegate_QItemDelegate, staticMetaObject, arginfo_qt_widgets_qitemdelegate_qitemdelegate_staticmetaobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QItemDelegate_QItemDelegate, tr, arginfo_qt_widgets_qitemdelegate_qitemdelegate_tr, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QItemDelegate_QItemDelegate, new_, arginfo_qt_widgets_qitemdelegate_qitemdelegate_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QItemDelegate_QItemDelegate, hasClipping, arginfo_qt_widgets_qitemdelegate_qitemdelegate_hasclipping, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QItemDelegate_QItemDelegate, setClipping, arginfo_qt_widgets_qitemdelegate_qitemdelegate_setclipping, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QItemDelegate_QItemDelegate, paint, arginfo_qt_widgets_qitemdelegate_qitemdelegate_paint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QItemDelegate_QItemDelegate, sizeHint, arginfo_qt_widgets_qitemdelegate_qitemdelegate_sizehint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QItemDelegate_QItemDelegate, createEditor, arginfo_qt_widgets_qitemdelegate_qitemdelegate_createeditor, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QItemDelegate_QItemDelegate, setEditorData, arginfo_qt_widgets_qitemdelegate_qitemdelegate_seteditordata, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QItemDelegate_QItemDelegate, setModelData, arginfo_qt_widgets_qitemdelegate_qitemdelegate_setmodeldata, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QItemDelegate_QItemDelegate, updateEditorGeometry, arginfo_qt_widgets_qitemdelegate_qitemdelegate_updateeditorgeometry, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QItemDelegate_QItemDelegate, itemEditorFactory, arginfo_qt_widgets_qitemdelegate_qitemdelegate_itemeditorfactory, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QItemDelegate_QItemDelegate, setItemEditorFactory, arginfo_qt_widgets_qitemdelegate_qitemdelegate_setitemeditorfactory, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QItemDelegate_QItemDelegate, drawDisplay, arginfo_qt_widgets_qitemdelegate_qitemdelegate_drawdisplay, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QItemDelegate_QItemDelegate, drawDecoration, arginfo_qt_widgets_qitemdelegate_qitemdelegate_drawdecoration, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QItemDelegate_QItemDelegate, drawFocus, arginfo_qt_widgets_qitemdelegate_qitemdelegate_drawfocus, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QItemDelegate_QItemDelegate, drawCheck, arginfo_qt_widgets_qitemdelegate_qitemdelegate_drawcheck, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QItemDelegate_QItemDelegate, drawBackground, arginfo_qt_widgets_qitemdelegate_qitemdelegate_drawbackground, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QItemDelegate_QItemDelegate, doLayout, arginfo_qt_widgets_qitemdelegate_qitemdelegate_dolayout, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QItemDelegate_QItemDelegate, rect, arginfo_qt_widgets_qitemdelegate_qitemdelegate_rect, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QItemDelegate_QItemDelegate, eventFilter, arginfo_qt_widgets_qitemdelegate_qitemdelegate_eventfilter, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QItemDelegate_QItemDelegate, editorEvent, arginfo_qt_widgets_qitemdelegate_qitemdelegate_editorevent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QItemDelegate_QItemDelegate, setOptions, arginfo_qt_widgets_qitemdelegate_qitemdelegate_setoptions, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QItemDelegate_QItemDelegate, decoration, arginfo_qt_widgets_qitemdelegate_qitemdelegate_decoration, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QItemDelegate_QItemDelegate, selectedPixmap, arginfo_qt_widgets_qitemdelegate_qitemdelegate_selectedpixmap, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QItemDelegate_QItemDelegate, doCheck, arginfo_qt_widgets_qitemdelegate_qitemdelegate_docheck, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QItemDelegate_QItemDelegate, textRectangle, arginfo_qt_widgets_qitemdelegate_qitemdelegate_textrectangle, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
