
extern zend_class_entry *qt_widgets_qgraphicslineitem_qgraphicslineitem_ce;

ZEPHIR_INIT_CLASS(Qt_Widgets_QGraphicsLineItem_QGraphicsLineItem);

PHP_METHOD(Qt_Widgets_QGraphicsLineItem_QGraphicsLineItem, new_);
PHP_METHOD(Qt_Widgets_QGraphicsLineItem_QGraphicsLineItem, newQLineFQGraphicsItem);
PHP_METHOD(Qt_Widgets_QGraphicsLineItem_QGraphicsLineItem, newQrealQrealQrealQrealQGraphicsItem);
PHP_METHOD(Qt_Widgets_QGraphicsLineItem_QGraphicsLineItem, pen);
PHP_METHOD(Qt_Widgets_QGraphicsLineItem_QGraphicsLineItem, setPen);
PHP_METHOD(Qt_Widgets_QGraphicsLineItem_QGraphicsLineItem, line);
PHP_METHOD(Qt_Widgets_QGraphicsLineItem_QGraphicsLineItem, setLine);
PHP_METHOD(Qt_Widgets_QGraphicsLineItem_QGraphicsLineItem, setLineQrealQrealQrealQreal);
PHP_METHOD(Qt_Widgets_QGraphicsLineItem_QGraphicsLineItem, boundingRect);
PHP_METHOD(Qt_Widgets_QGraphicsLineItem_QGraphicsLineItem, shape);
PHP_METHOD(Qt_Widgets_QGraphicsLineItem_QGraphicsLineItem, contains);
PHP_METHOD(Qt_Widgets_QGraphicsLineItem_QGraphicsLineItem, paint);
PHP_METHOD(Qt_Widgets_QGraphicsLineItem_QGraphicsLineItem, isObscuredBy);
PHP_METHOD(Qt_Widgets_QGraphicsLineItem_QGraphicsLineItem, opaqueArea);
PHP_METHOD(Qt_Widgets_QGraphicsLineItem_QGraphicsLineItem, type);
PHP_METHOD(Qt_Widgets_QGraphicsLineItem_QGraphicsLineItem, supportsExtension);
PHP_METHOD(Qt_Widgets_QGraphicsLineItem_QGraphicsLineItem, setExtension);
PHP_METHOD(Qt_Widgets_QGraphicsLineItem_QGraphicsLineItem, extension);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicslineitem_qgraphicslineitem_new_, 0, 0, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicslineitem_qgraphicslineitem_newqlinefqgraphicsitem, 0, 4, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, lineX1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, lineY1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, lineX2, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, lineY2, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicslineitem_qgraphicslineitem_newqrealqrealqrealqrealqgraphicsitem, 0, 4, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, y1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, x2, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, y2, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicslineitem_qgraphicslineitem_pen, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicslineitem_qgraphicslineitem_setpen, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, pen, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicslineitem_qgraphicslineitem_line, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicslineitem_qgraphicslineitem_setline, 0, 5, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, lineX1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, lineY1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, lineX2, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, lineY2, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicslineitem_qgraphicslineitem_setlineqrealqrealqrealqreal, 0, 5, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, y1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, x2, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, y2, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicslineitem_qgraphicslineitem_boundingrect, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicslineitem_qgraphicslineitem_shape, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicslineitem_qgraphicslineitem_contains, 0, 3, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, pointX, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, pointY, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicslineitem_qgraphicslineitem_paint, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, painter, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, option, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, widget, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicslineitem_qgraphicslineitem_isobscuredby, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, item, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicslineitem_qgraphicslineitem_opaquearea, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicslineitem_qgraphicslineitem_type, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicslineitem_qgraphicslineitem_supportsextension, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, extension, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicslineitem_qgraphicslineitem_setextension, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, extension, IS_LONG, 0)
	ZEND_ARG_INFO(0, variant)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_qt_widgets_qgraphicslineitem_qgraphicslineitem_extension, 0, 0, 2)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_INFO(0, variant)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_widgets_qgraphicslineitem_qgraphicslineitem_method_entry) {
	PHP_ME(Qt_Widgets_QGraphicsLineItem_QGraphicsLineItem, new_, arginfo_qt_widgets_qgraphicslineitem_qgraphicslineitem_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsLineItem_QGraphicsLineItem, newQLineFQGraphicsItem, arginfo_qt_widgets_qgraphicslineitem_qgraphicslineitem_newqlinefqgraphicsitem, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsLineItem_QGraphicsLineItem, newQrealQrealQrealQrealQGraphicsItem, arginfo_qt_widgets_qgraphicslineitem_qgraphicslineitem_newqrealqrealqrealqrealqgraphicsitem, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsLineItem_QGraphicsLineItem, pen, arginfo_qt_widgets_qgraphicslineitem_qgraphicslineitem_pen, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsLineItem_QGraphicsLineItem, setPen, arginfo_qt_widgets_qgraphicslineitem_qgraphicslineitem_setpen, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsLineItem_QGraphicsLineItem, line, arginfo_qt_widgets_qgraphicslineitem_qgraphicslineitem_line, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsLineItem_QGraphicsLineItem, setLine, arginfo_qt_widgets_qgraphicslineitem_qgraphicslineitem_setline, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsLineItem_QGraphicsLineItem, setLineQrealQrealQrealQreal, arginfo_qt_widgets_qgraphicslineitem_qgraphicslineitem_setlineqrealqrealqrealqreal, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsLineItem_QGraphicsLineItem, boundingRect, arginfo_qt_widgets_qgraphicslineitem_qgraphicslineitem_boundingrect, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsLineItem_QGraphicsLineItem, shape, arginfo_qt_widgets_qgraphicslineitem_qgraphicslineitem_shape, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsLineItem_QGraphicsLineItem, contains, arginfo_qt_widgets_qgraphicslineitem_qgraphicslineitem_contains, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsLineItem_QGraphicsLineItem, paint, arginfo_qt_widgets_qgraphicslineitem_qgraphicslineitem_paint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsLineItem_QGraphicsLineItem, isObscuredBy, arginfo_qt_widgets_qgraphicslineitem_qgraphicslineitem_isobscuredby, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsLineItem_QGraphicsLineItem, opaqueArea, arginfo_qt_widgets_qgraphicslineitem_qgraphicslineitem_opaquearea, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsLineItem_QGraphicsLineItem, type, arginfo_qt_widgets_qgraphicslineitem_qgraphicslineitem_type, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsLineItem_QGraphicsLineItem, supportsExtension, arginfo_qt_widgets_qgraphicslineitem_qgraphicslineitem_supportsextension, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsLineItem_QGraphicsLineItem, setExtension, arginfo_qt_widgets_qgraphicslineitem_qgraphicslineitem_setextension, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsLineItem_QGraphicsLineItem, extension, arginfo_qt_widgets_qgraphicslineitem_qgraphicslineitem_extension, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
