
extern zend_class_entry *qt_gui_qabstracttextdocumentlayout_qabstracttextdocumentlayout_ce;

ZEPHIR_INIT_CLASS(Qt_Gui_QAbstractTextDocumentLayout_QAbstractTextDocumentLayout);

PHP_METHOD(Qt_Gui_QAbstractTextDocumentLayout_QAbstractTextDocumentLayout, staticMetaObject);
PHP_METHOD(Qt_Gui_QAbstractTextDocumentLayout_QAbstractTextDocumentLayout, tr);
PHP_METHOD(Qt_Gui_QAbstractTextDocumentLayout_QAbstractTextDocumentLayout, new_);
PHP_METHOD(Qt_Gui_QAbstractTextDocumentLayout_QAbstractTextDocumentLayout, draw);
PHP_METHOD(Qt_Gui_QAbstractTextDocumentLayout_QAbstractTextDocumentLayout, hitTest);
PHP_METHOD(Qt_Gui_QAbstractTextDocumentLayout_QAbstractTextDocumentLayout, anchorAt);
PHP_METHOD(Qt_Gui_QAbstractTextDocumentLayout_QAbstractTextDocumentLayout, imageAt);
PHP_METHOD(Qt_Gui_QAbstractTextDocumentLayout_QAbstractTextDocumentLayout, formatAt);
PHP_METHOD(Qt_Gui_QAbstractTextDocumentLayout_QAbstractTextDocumentLayout, blockWithMarkerAt);
PHP_METHOD(Qt_Gui_QAbstractTextDocumentLayout_QAbstractTextDocumentLayout, pageCount);
PHP_METHOD(Qt_Gui_QAbstractTextDocumentLayout_QAbstractTextDocumentLayout, documentSize);
PHP_METHOD(Qt_Gui_QAbstractTextDocumentLayout_QAbstractTextDocumentLayout, frameBoundingRect);
PHP_METHOD(Qt_Gui_QAbstractTextDocumentLayout_QAbstractTextDocumentLayout, blockBoundingRect);
PHP_METHOD(Qt_Gui_QAbstractTextDocumentLayout_QAbstractTextDocumentLayout, setPaintDevice);
PHP_METHOD(Qt_Gui_QAbstractTextDocumentLayout_QAbstractTextDocumentLayout, paintDevice);
PHP_METHOD(Qt_Gui_QAbstractTextDocumentLayout_QAbstractTextDocumentLayout, document);
PHP_METHOD(Qt_Gui_QAbstractTextDocumentLayout_QAbstractTextDocumentLayout, registerHandler);
PHP_METHOD(Qt_Gui_QAbstractTextDocumentLayout_QAbstractTextDocumentLayout, unregisterHandler);
PHP_METHOD(Qt_Gui_QAbstractTextDocumentLayout_QAbstractTextDocumentLayout, handlerForObject);
PHP_METHOD(Qt_Gui_QAbstractTextDocumentLayout_QAbstractTextDocumentLayout, update);
PHP_METHOD(Qt_Gui_QAbstractTextDocumentLayout_QAbstractTextDocumentLayout, updateBlock);
PHP_METHOD(Qt_Gui_QAbstractTextDocumentLayout_QAbstractTextDocumentLayout, documentSizeChanged);
PHP_METHOD(Qt_Gui_QAbstractTextDocumentLayout_QAbstractTextDocumentLayout, pageCountChanged);
PHP_METHOD(Qt_Gui_QAbstractTextDocumentLayout_QAbstractTextDocumentLayout, documentChanged);
PHP_METHOD(Qt_Gui_QAbstractTextDocumentLayout_QAbstractTextDocumentLayout, resizeInlineObject);
PHP_METHOD(Qt_Gui_QAbstractTextDocumentLayout_QAbstractTextDocumentLayout, positionInlineObject);
PHP_METHOD(Qt_Gui_QAbstractTextDocumentLayout_QAbstractTextDocumentLayout, drawInlineObject);
PHP_METHOD(Qt_Gui_QAbstractTextDocumentLayout_QAbstractTextDocumentLayout, formatIndex);
PHP_METHOD(Qt_Gui_QAbstractTextDocumentLayout_QAbstractTextDocumentLayout, format);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qabstracttextdocumentlayout_qabstracttextdocumentlayout_staticmetaobject, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qabstracttextdocumentlayout_qabstracttextdocumentlayout_tr, 0, 1, IS_STRING, 0)
	ZEND_ARG_INFO(0, s)
	ZEND_ARG_INFO(0, c)
	ZEND_ARG_TYPE_INFO(0, n, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qabstracttextdocumentlayout_qabstracttextdocumentlayout_new_, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, doc, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qabstracttextdocumentlayout_qabstracttextdocumentlayout_draw, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, painter, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, context, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qabstracttextdocumentlayout_qabstracttextdocumentlayout_hittest, 0, 4, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, pointX, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, pointY, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, accuracy, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qabstracttextdocumentlayout_qabstracttextdocumentlayout_anchorat, 0, 3, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, posX, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, posY, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qabstracttextdocumentlayout_qabstracttextdocumentlayout_imageat, 0, 3, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, posX, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, posY, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qabstracttextdocumentlayout_qabstracttextdocumentlayout_formatat, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, posX, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, posY, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qabstracttextdocumentlayout_qabstracttextdocumentlayout_blockwithmarkerat, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, posX, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, posY, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qabstracttextdocumentlayout_qabstracttextdocumentlayout_pagecount, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qabstracttextdocumentlayout_qabstracttextdocumentlayout_documentsize, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qabstracttextdocumentlayout_qabstracttextdocumentlayout_frameboundingrect, 0, 2, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, frame, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qabstracttextdocumentlayout_qabstracttextdocumentlayout_blockboundingrect, 0, 2, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, block, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qabstracttextdocumentlayout_qabstracttextdocumentlayout_setpaintdevice, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, device, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qabstracttextdocumentlayout_qabstracttextdocumentlayout_paintdevice, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qabstracttextdocumentlayout_qabstracttextdocumentlayout_document, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qabstracttextdocumentlayout_qabstracttextdocumentlayout_registerhandler, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, objectType, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, component, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qabstracttextdocumentlayout_qabstracttextdocumentlayout_unregisterhandler, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, objectType, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, component, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qabstracttextdocumentlayout_qabstracttextdocumentlayout_handlerforobject, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, objectType, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qabstracttextdocumentlayout_qabstracttextdocumentlayout_update, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_INFO(0, arg0X)
	ZEND_ARG_INFO(0, arg0Y)
	ZEND_ARG_INFO(0, arg0Width)
	ZEND_ARG_INFO(0, arg0Height)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qabstracttextdocumentlayout_qabstracttextdocumentlayout_updateblock, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, block, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qabstracttextdocumentlayout_qabstracttextdocumentlayout_documentsizechanged, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, newSizeWidth, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, newSizeHeight, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qabstracttextdocumentlayout_qabstracttextdocumentlayout_pagecountchanged, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, newPages, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qabstracttextdocumentlayout_qabstracttextdocumentlayout_documentchanged, 0, 4, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, from, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, charsRemoved, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, charsAdded, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qabstracttextdocumentlayout_qabstracttextdocumentlayout_resizeinlineobject, 0, 4, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, item, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, posInDocument, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, format, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qabstracttextdocumentlayout_qabstracttextdocumentlayout_positioninlineobject, 0, 4, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, item, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, posInDocument, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, format, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qabstracttextdocumentlayout_qabstracttextdocumentlayout_drawinlineobject, 0, 9, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, painter, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rectX, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, rectY, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, rectWidth, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, rectHeight, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, object_, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, posInDocument, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, format, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qabstracttextdocumentlayout_qabstracttextdocumentlayout_formatindex, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, pos, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qabstracttextdocumentlayout_qabstracttextdocumentlayout_format, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, pos, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_gui_qabstracttextdocumentlayout_qabstracttextdocumentlayout_method_entry) {
	PHP_ME(Qt_Gui_QAbstractTextDocumentLayout_QAbstractTextDocumentLayout, staticMetaObject, arginfo_qt_gui_qabstracttextdocumentlayout_qabstracttextdocumentlayout_staticmetaobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QAbstractTextDocumentLayout_QAbstractTextDocumentLayout, tr, arginfo_qt_gui_qabstracttextdocumentlayout_qabstracttextdocumentlayout_tr, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QAbstractTextDocumentLayout_QAbstractTextDocumentLayout, new_, arginfo_qt_gui_qabstracttextdocumentlayout_qabstracttextdocumentlayout_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QAbstractTextDocumentLayout_QAbstractTextDocumentLayout, draw, arginfo_qt_gui_qabstracttextdocumentlayout_qabstracttextdocumentlayout_draw, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QAbstractTextDocumentLayout_QAbstractTextDocumentLayout, hitTest, arginfo_qt_gui_qabstracttextdocumentlayout_qabstracttextdocumentlayout_hittest, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QAbstractTextDocumentLayout_QAbstractTextDocumentLayout, anchorAt, arginfo_qt_gui_qabstracttextdocumentlayout_qabstracttextdocumentlayout_anchorat, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QAbstractTextDocumentLayout_QAbstractTextDocumentLayout, imageAt, arginfo_qt_gui_qabstracttextdocumentlayout_qabstracttextdocumentlayout_imageat, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QAbstractTextDocumentLayout_QAbstractTextDocumentLayout, formatAt, arginfo_qt_gui_qabstracttextdocumentlayout_qabstracttextdocumentlayout_formatat, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QAbstractTextDocumentLayout_QAbstractTextDocumentLayout, blockWithMarkerAt, arginfo_qt_gui_qabstracttextdocumentlayout_qabstracttextdocumentlayout_blockwithmarkerat, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QAbstractTextDocumentLayout_QAbstractTextDocumentLayout, pageCount, arginfo_qt_gui_qabstracttextdocumentlayout_qabstracttextdocumentlayout_pagecount, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QAbstractTextDocumentLayout_QAbstractTextDocumentLayout, documentSize, arginfo_qt_gui_qabstracttextdocumentlayout_qabstracttextdocumentlayout_documentsize, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QAbstractTextDocumentLayout_QAbstractTextDocumentLayout, frameBoundingRect, arginfo_qt_gui_qabstracttextdocumentlayout_qabstracttextdocumentlayout_frameboundingrect, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QAbstractTextDocumentLayout_QAbstractTextDocumentLayout, blockBoundingRect, arginfo_qt_gui_qabstracttextdocumentlayout_qabstracttextdocumentlayout_blockboundingrect, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QAbstractTextDocumentLayout_QAbstractTextDocumentLayout, setPaintDevice, arginfo_qt_gui_qabstracttextdocumentlayout_qabstracttextdocumentlayout_setpaintdevice, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QAbstractTextDocumentLayout_QAbstractTextDocumentLayout, paintDevice, arginfo_qt_gui_qabstracttextdocumentlayout_qabstracttextdocumentlayout_paintdevice, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QAbstractTextDocumentLayout_QAbstractTextDocumentLayout, document, arginfo_qt_gui_qabstracttextdocumentlayout_qabstracttextdocumentlayout_document, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QAbstractTextDocumentLayout_QAbstractTextDocumentLayout, registerHandler, arginfo_qt_gui_qabstracttextdocumentlayout_qabstracttextdocumentlayout_registerhandler, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QAbstractTextDocumentLayout_QAbstractTextDocumentLayout, unregisterHandler, arginfo_qt_gui_qabstracttextdocumentlayout_qabstracttextdocumentlayout_unregisterhandler, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QAbstractTextDocumentLayout_QAbstractTextDocumentLayout, handlerForObject, arginfo_qt_gui_qabstracttextdocumentlayout_qabstracttextdocumentlayout_handlerforobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QAbstractTextDocumentLayout_QAbstractTextDocumentLayout, update, arginfo_qt_gui_qabstracttextdocumentlayout_qabstracttextdocumentlayout_update, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QAbstractTextDocumentLayout_QAbstractTextDocumentLayout, updateBlock, arginfo_qt_gui_qabstracttextdocumentlayout_qabstracttextdocumentlayout_updateblock, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QAbstractTextDocumentLayout_QAbstractTextDocumentLayout, documentSizeChanged, arginfo_qt_gui_qabstracttextdocumentlayout_qabstracttextdocumentlayout_documentsizechanged, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QAbstractTextDocumentLayout_QAbstractTextDocumentLayout, pageCountChanged, arginfo_qt_gui_qabstracttextdocumentlayout_qabstracttextdocumentlayout_pagecountchanged, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QAbstractTextDocumentLayout_QAbstractTextDocumentLayout, documentChanged, arginfo_qt_gui_qabstracttextdocumentlayout_qabstracttextdocumentlayout_documentchanged, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QAbstractTextDocumentLayout_QAbstractTextDocumentLayout, resizeInlineObject, arginfo_qt_gui_qabstracttextdocumentlayout_qabstracttextdocumentlayout_resizeinlineobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QAbstractTextDocumentLayout_QAbstractTextDocumentLayout, positionInlineObject, arginfo_qt_gui_qabstracttextdocumentlayout_qabstracttextdocumentlayout_positioninlineobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QAbstractTextDocumentLayout_QAbstractTextDocumentLayout, drawInlineObject, arginfo_qt_gui_qabstracttextdocumentlayout_qabstracttextdocumentlayout_drawinlineobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QAbstractTextDocumentLayout_QAbstractTextDocumentLayout, formatIndex, arginfo_qt_gui_qabstracttextdocumentlayout_qabstracttextdocumentlayout_formatindex, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QAbstractTextDocumentLayout_QAbstractTextDocumentLayout, format, arginfo_qt_gui_qabstracttextdocumentlayout_qabstracttextdocumentlayout_format, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
