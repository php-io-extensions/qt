
extern zend_class_entry *qt_widgets_qgraphicsellipseitem_qgraphicsellipseitem_ce;

ZEPHIR_INIT_CLASS(Qt_Widgets_QGraphicsEllipseItem_QGraphicsEllipseItem);

PHP_METHOD(Qt_Widgets_QGraphicsEllipseItem_QGraphicsEllipseItem, new_);
PHP_METHOD(Qt_Widgets_QGraphicsEllipseItem_QGraphicsEllipseItem, newQRectFQGraphicsItem);
PHP_METHOD(Qt_Widgets_QGraphicsEllipseItem_QGraphicsEllipseItem, newQrealQrealQrealQrealQGraphicsItem);
PHP_METHOD(Qt_Widgets_QGraphicsEllipseItem_QGraphicsEllipseItem, rect);
PHP_METHOD(Qt_Widgets_QGraphicsEllipseItem_QGraphicsEllipseItem, setRect);
PHP_METHOD(Qt_Widgets_QGraphicsEllipseItem_QGraphicsEllipseItem, setRectQrealQrealQrealQreal);
PHP_METHOD(Qt_Widgets_QGraphicsEllipseItem_QGraphicsEllipseItem, startAngle);
PHP_METHOD(Qt_Widgets_QGraphicsEllipseItem_QGraphicsEllipseItem, setStartAngle);
PHP_METHOD(Qt_Widgets_QGraphicsEllipseItem_QGraphicsEllipseItem, spanAngle);
PHP_METHOD(Qt_Widgets_QGraphicsEllipseItem_QGraphicsEllipseItem, setSpanAngle);
PHP_METHOD(Qt_Widgets_QGraphicsEllipseItem_QGraphicsEllipseItem, boundingRect);
PHP_METHOD(Qt_Widgets_QGraphicsEllipseItem_QGraphicsEllipseItem, shape);
PHP_METHOD(Qt_Widgets_QGraphicsEllipseItem_QGraphicsEllipseItem, contains);
PHP_METHOD(Qt_Widgets_QGraphicsEllipseItem_QGraphicsEllipseItem, paint);
PHP_METHOD(Qt_Widgets_QGraphicsEllipseItem_QGraphicsEllipseItem, isObscuredBy);
PHP_METHOD(Qt_Widgets_QGraphicsEllipseItem_QGraphicsEllipseItem, opaqueArea);
PHP_METHOD(Qt_Widgets_QGraphicsEllipseItem_QGraphicsEllipseItem, type);
PHP_METHOD(Qt_Widgets_QGraphicsEllipseItem_QGraphicsEllipseItem, supportsExtension);
PHP_METHOD(Qt_Widgets_QGraphicsEllipseItem_QGraphicsEllipseItem, setExtension);
PHP_METHOD(Qt_Widgets_QGraphicsEllipseItem_QGraphicsEllipseItem, extension);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicsellipseitem_qgraphicsellipseitem_new_, 0, 0, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicsellipseitem_qgraphicsellipseitem_newqrectfqgraphicsitem, 0, 4, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rectX, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, rectY, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, rectWidth, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, rectHeight, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicsellipseitem_qgraphicsellipseitem_newqrealqrealqrealqrealqgraphicsitem, 0, 4, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, w, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, h, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicsellipseitem_qgraphicsellipseitem_rect, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicsellipseitem_qgraphicsellipseitem_setrect, 0, 5, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rectX, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, rectY, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, rectWidth, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, rectHeight, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicsellipseitem_qgraphicsellipseitem_setrectqrealqrealqrealqreal, 0, 5, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, w, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, h, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicsellipseitem_qgraphicsellipseitem_startangle, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicsellipseitem_qgraphicsellipseitem_setstartangle, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, angle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicsellipseitem_qgraphicsellipseitem_spanangle, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicsellipseitem_qgraphicsellipseitem_setspanangle, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, angle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicsellipseitem_qgraphicsellipseitem_boundingrect, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicsellipseitem_qgraphicsellipseitem_shape, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicsellipseitem_qgraphicsellipseitem_contains, 0, 3, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, pointX, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, pointY, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicsellipseitem_qgraphicsellipseitem_paint, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, painter, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, option, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, widget, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicsellipseitem_qgraphicsellipseitem_isobscuredby, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, item, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicsellipseitem_qgraphicsellipseitem_opaquearea, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicsellipseitem_qgraphicsellipseitem_type, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicsellipseitem_qgraphicsellipseitem_supportsextension, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, extension, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicsellipseitem_qgraphicsellipseitem_setextension, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, extension, IS_LONG, 0)
	ZEND_ARG_INFO(0, variant)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_qt_widgets_qgraphicsellipseitem_qgraphicsellipseitem_extension, 0, 0, 2)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_INFO(0, variant)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_widgets_qgraphicsellipseitem_qgraphicsellipseitem_method_entry) {
	PHP_ME(Qt_Widgets_QGraphicsEllipseItem_QGraphicsEllipseItem, new_, arginfo_qt_widgets_qgraphicsellipseitem_qgraphicsellipseitem_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsEllipseItem_QGraphicsEllipseItem, newQRectFQGraphicsItem, arginfo_qt_widgets_qgraphicsellipseitem_qgraphicsellipseitem_newqrectfqgraphicsitem, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsEllipseItem_QGraphicsEllipseItem, newQrealQrealQrealQrealQGraphicsItem, arginfo_qt_widgets_qgraphicsellipseitem_qgraphicsellipseitem_newqrealqrealqrealqrealqgraphicsitem, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsEllipseItem_QGraphicsEllipseItem, rect, arginfo_qt_widgets_qgraphicsellipseitem_qgraphicsellipseitem_rect, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsEllipseItem_QGraphicsEllipseItem, setRect, arginfo_qt_widgets_qgraphicsellipseitem_qgraphicsellipseitem_setrect, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsEllipseItem_QGraphicsEllipseItem, setRectQrealQrealQrealQreal, arginfo_qt_widgets_qgraphicsellipseitem_qgraphicsellipseitem_setrectqrealqrealqrealqreal, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsEllipseItem_QGraphicsEllipseItem, startAngle, arginfo_qt_widgets_qgraphicsellipseitem_qgraphicsellipseitem_startangle, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsEllipseItem_QGraphicsEllipseItem, setStartAngle, arginfo_qt_widgets_qgraphicsellipseitem_qgraphicsellipseitem_setstartangle, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsEllipseItem_QGraphicsEllipseItem, spanAngle, arginfo_qt_widgets_qgraphicsellipseitem_qgraphicsellipseitem_spanangle, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsEllipseItem_QGraphicsEllipseItem, setSpanAngle, arginfo_qt_widgets_qgraphicsellipseitem_qgraphicsellipseitem_setspanangle, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsEllipseItem_QGraphicsEllipseItem, boundingRect, arginfo_qt_widgets_qgraphicsellipseitem_qgraphicsellipseitem_boundingrect, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsEllipseItem_QGraphicsEllipseItem, shape, arginfo_qt_widgets_qgraphicsellipseitem_qgraphicsellipseitem_shape, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsEllipseItem_QGraphicsEllipseItem, contains, arginfo_qt_widgets_qgraphicsellipseitem_qgraphicsellipseitem_contains, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsEllipseItem_QGraphicsEllipseItem, paint, arginfo_qt_widgets_qgraphicsellipseitem_qgraphicsellipseitem_paint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsEllipseItem_QGraphicsEllipseItem, isObscuredBy, arginfo_qt_widgets_qgraphicsellipseitem_qgraphicsellipseitem_isobscuredby, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsEllipseItem_QGraphicsEllipseItem, opaqueArea, arginfo_qt_widgets_qgraphicsellipseitem_qgraphicsellipseitem_opaquearea, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsEllipseItem_QGraphicsEllipseItem, type, arginfo_qt_widgets_qgraphicsellipseitem_qgraphicsellipseitem_type, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsEllipseItem_QGraphicsEllipseItem, supportsExtension, arginfo_qt_widgets_qgraphicsellipseitem_qgraphicsellipseitem_supportsextension, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsEllipseItem_QGraphicsEllipseItem, setExtension, arginfo_qt_widgets_qgraphicsellipseitem_qgraphicsellipseitem_setextension, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsEllipseItem_QGraphicsEllipseItem, extension, arginfo_qt_widgets_qgraphicsellipseitem_qgraphicsellipseitem_extension, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
