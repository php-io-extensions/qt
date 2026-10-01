
extern zend_class_entry *qt_widgets_qgraphicsrectitem_qgraphicsrectitem_ce;

ZEPHIR_INIT_CLASS(Qt_Widgets_QGraphicsRectItem_QGraphicsRectItem);

PHP_METHOD(Qt_Widgets_QGraphicsRectItem_QGraphicsRectItem, new_);
PHP_METHOD(Qt_Widgets_QGraphicsRectItem_QGraphicsRectItem, newQRectFQGraphicsItem);
PHP_METHOD(Qt_Widgets_QGraphicsRectItem_QGraphicsRectItem, newQrealQrealQrealQrealQGraphicsItem);
PHP_METHOD(Qt_Widgets_QGraphicsRectItem_QGraphicsRectItem, rect);
PHP_METHOD(Qt_Widgets_QGraphicsRectItem_QGraphicsRectItem, setRect);
PHP_METHOD(Qt_Widgets_QGraphicsRectItem_QGraphicsRectItem, setRectQrealQrealQrealQreal);
PHP_METHOD(Qt_Widgets_QGraphicsRectItem_QGraphicsRectItem, boundingRect);
PHP_METHOD(Qt_Widgets_QGraphicsRectItem_QGraphicsRectItem, shape);
PHP_METHOD(Qt_Widgets_QGraphicsRectItem_QGraphicsRectItem, contains);
PHP_METHOD(Qt_Widgets_QGraphicsRectItem_QGraphicsRectItem, paint);
PHP_METHOD(Qt_Widgets_QGraphicsRectItem_QGraphicsRectItem, isObscuredBy);
PHP_METHOD(Qt_Widgets_QGraphicsRectItem_QGraphicsRectItem, opaqueArea);
PHP_METHOD(Qt_Widgets_QGraphicsRectItem_QGraphicsRectItem, type);
PHP_METHOD(Qt_Widgets_QGraphicsRectItem_QGraphicsRectItem, supportsExtension);
PHP_METHOD(Qt_Widgets_QGraphicsRectItem_QGraphicsRectItem, setExtension);
PHP_METHOD(Qt_Widgets_QGraphicsRectItem_QGraphicsRectItem, extension);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicsrectitem_qgraphicsrectitem_new_, 0, 0, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicsrectitem_qgraphicsrectitem_newqrectfqgraphicsitem, 0, 4, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rectX, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, rectY, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, rectWidth, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, rectHeight, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicsrectitem_qgraphicsrectitem_newqrealqrealqrealqrealqgraphicsitem, 0, 4, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, w, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, h, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicsrectitem_qgraphicsrectitem_rect, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicsrectitem_qgraphicsrectitem_setrect, 0, 5, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rectX, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, rectY, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, rectWidth, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, rectHeight, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicsrectitem_qgraphicsrectitem_setrectqrealqrealqrealqreal, 0, 5, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, w, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, h, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicsrectitem_qgraphicsrectitem_boundingrect, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicsrectitem_qgraphicsrectitem_shape, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicsrectitem_qgraphicsrectitem_contains, 0, 3, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, pointX, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, pointY, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicsrectitem_qgraphicsrectitem_paint, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, painter, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, option, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, widget, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicsrectitem_qgraphicsrectitem_isobscuredby, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, item, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicsrectitem_qgraphicsrectitem_opaquearea, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicsrectitem_qgraphicsrectitem_type, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicsrectitem_qgraphicsrectitem_supportsextension, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, extension, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicsrectitem_qgraphicsrectitem_setextension, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, extension, IS_LONG, 0)
	ZEND_ARG_INFO(0, variant)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_qt_widgets_qgraphicsrectitem_qgraphicsrectitem_extension, 0, 0, 2)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_INFO(0, variant)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_widgets_qgraphicsrectitem_qgraphicsrectitem_method_entry) {
	PHP_ME(Qt_Widgets_QGraphicsRectItem_QGraphicsRectItem, new_, arginfo_qt_widgets_qgraphicsrectitem_qgraphicsrectitem_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsRectItem_QGraphicsRectItem, newQRectFQGraphicsItem, arginfo_qt_widgets_qgraphicsrectitem_qgraphicsrectitem_newqrectfqgraphicsitem, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsRectItem_QGraphicsRectItem, newQrealQrealQrealQrealQGraphicsItem, arginfo_qt_widgets_qgraphicsrectitem_qgraphicsrectitem_newqrealqrealqrealqrealqgraphicsitem, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsRectItem_QGraphicsRectItem, rect, arginfo_qt_widgets_qgraphicsrectitem_qgraphicsrectitem_rect, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsRectItem_QGraphicsRectItem, setRect, arginfo_qt_widgets_qgraphicsrectitem_qgraphicsrectitem_setrect, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsRectItem_QGraphicsRectItem, setRectQrealQrealQrealQreal, arginfo_qt_widgets_qgraphicsrectitem_qgraphicsrectitem_setrectqrealqrealqrealqreal, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsRectItem_QGraphicsRectItem, boundingRect, arginfo_qt_widgets_qgraphicsrectitem_qgraphicsrectitem_boundingrect, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsRectItem_QGraphicsRectItem, shape, arginfo_qt_widgets_qgraphicsrectitem_qgraphicsrectitem_shape, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsRectItem_QGraphicsRectItem, contains, arginfo_qt_widgets_qgraphicsrectitem_qgraphicsrectitem_contains, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsRectItem_QGraphicsRectItem, paint, arginfo_qt_widgets_qgraphicsrectitem_qgraphicsrectitem_paint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsRectItem_QGraphicsRectItem, isObscuredBy, arginfo_qt_widgets_qgraphicsrectitem_qgraphicsrectitem_isobscuredby, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsRectItem_QGraphicsRectItem, opaqueArea, arginfo_qt_widgets_qgraphicsrectitem_qgraphicsrectitem_opaquearea, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsRectItem_QGraphicsRectItem, type, arginfo_qt_widgets_qgraphicsrectitem_qgraphicsrectitem_type, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsRectItem_QGraphicsRectItem, supportsExtension, arginfo_qt_widgets_qgraphicsrectitem_qgraphicsrectitem_supportsextension, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsRectItem_QGraphicsRectItem, setExtension, arginfo_qt_widgets_qgraphicsrectitem_qgraphicsrectitem_setextension, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsRectItem_QGraphicsRectItem, extension, arginfo_qt_widgets_qgraphicsrectitem_qgraphicsrectitem_extension, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
