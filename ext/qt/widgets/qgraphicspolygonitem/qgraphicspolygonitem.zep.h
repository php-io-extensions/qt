
extern zend_class_entry *qt_widgets_qgraphicspolygonitem_qgraphicspolygonitem_ce;

ZEPHIR_INIT_CLASS(Qt_Widgets_QGraphicsPolygonItem_QGraphicsPolygonItem);

PHP_METHOD(Qt_Widgets_QGraphicsPolygonItem_QGraphicsPolygonItem, new_);
PHP_METHOD(Qt_Widgets_QGraphicsPolygonItem_QGraphicsPolygonItem, newQPolygonFQGraphicsItem);
PHP_METHOD(Qt_Widgets_QGraphicsPolygonItem_QGraphicsPolygonItem, polygon);
PHP_METHOD(Qt_Widgets_QGraphicsPolygonItem_QGraphicsPolygonItem, setPolygon);
PHP_METHOD(Qt_Widgets_QGraphicsPolygonItem_QGraphicsPolygonItem, fillRule);
PHP_METHOD(Qt_Widgets_QGraphicsPolygonItem_QGraphicsPolygonItem, setFillRule);
PHP_METHOD(Qt_Widgets_QGraphicsPolygonItem_QGraphicsPolygonItem, boundingRect);
PHP_METHOD(Qt_Widgets_QGraphicsPolygonItem_QGraphicsPolygonItem, shape);
PHP_METHOD(Qt_Widgets_QGraphicsPolygonItem_QGraphicsPolygonItem, contains);
PHP_METHOD(Qt_Widgets_QGraphicsPolygonItem_QGraphicsPolygonItem, paint);
PHP_METHOD(Qt_Widgets_QGraphicsPolygonItem_QGraphicsPolygonItem, isObscuredBy);
PHP_METHOD(Qt_Widgets_QGraphicsPolygonItem_QGraphicsPolygonItem, opaqueArea);
PHP_METHOD(Qt_Widgets_QGraphicsPolygonItem_QGraphicsPolygonItem, type);
PHP_METHOD(Qt_Widgets_QGraphicsPolygonItem_QGraphicsPolygonItem, supportsExtension);
PHP_METHOD(Qt_Widgets_QGraphicsPolygonItem_QGraphicsPolygonItem, setExtension);
PHP_METHOD(Qt_Widgets_QGraphicsPolygonItem_QGraphicsPolygonItem, extension);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicspolygonitem_qgraphicspolygonitem_new_, 0, 0, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicspolygonitem_qgraphicspolygonitem_newqpolygonfqgraphicsitem, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, polygon, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicspolygonitem_qgraphicspolygonitem_polygon, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicspolygonitem_qgraphicspolygonitem_setpolygon, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, polygon, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicspolygonitem_qgraphicspolygonitem_fillrule, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicspolygonitem_qgraphicspolygonitem_setfillrule, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rule, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicspolygonitem_qgraphicspolygonitem_boundingrect, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicspolygonitem_qgraphicspolygonitem_shape, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicspolygonitem_qgraphicspolygonitem_contains, 0, 3, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, pointX, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, pointY, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicspolygonitem_qgraphicspolygonitem_paint, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, painter, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, option, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, widget, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicspolygonitem_qgraphicspolygonitem_isobscuredby, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, item, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicspolygonitem_qgraphicspolygonitem_opaquearea, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicspolygonitem_qgraphicspolygonitem_type, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicspolygonitem_qgraphicspolygonitem_supportsextension, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, extension, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicspolygonitem_qgraphicspolygonitem_setextension, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, extension, IS_LONG, 0)
	ZEND_ARG_INFO(0, variant)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_qt_widgets_qgraphicspolygonitem_qgraphicspolygonitem_extension, 0, 0, 2)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_INFO(0, variant)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_widgets_qgraphicspolygonitem_qgraphicspolygonitem_method_entry) {
	PHP_ME(Qt_Widgets_QGraphicsPolygonItem_QGraphicsPolygonItem, new_, arginfo_qt_widgets_qgraphicspolygonitem_qgraphicspolygonitem_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsPolygonItem_QGraphicsPolygonItem, newQPolygonFQGraphicsItem, arginfo_qt_widgets_qgraphicspolygonitem_qgraphicspolygonitem_newqpolygonfqgraphicsitem, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsPolygonItem_QGraphicsPolygonItem, polygon, arginfo_qt_widgets_qgraphicspolygonitem_qgraphicspolygonitem_polygon, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsPolygonItem_QGraphicsPolygonItem, setPolygon, arginfo_qt_widgets_qgraphicspolygonitem_qgraphicspolygonitem_setpolygon, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsPolygonItem_QGraphicsPolygonItem, fillRule, arginfo_qt_widgets_qgraphicspolygonitem_qgraphicspolygonitem_fillrule, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsPolygonItem_QGraphicsPolygonItem, setFillRule, arginfo_qt_widgets_qgraphicspolygonitem_qgraphicspolygonitem_setfillrule, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsPolygonItem_QGraphicsPolygonItem, boundingRect, arginfo_qt_widgets_qgraphicspolygonitem_qgraphicspolygonitem_boundingrect, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsPolygonItem_QGraphicsPolygonItem, shape, arginfo_qt_widgets_qgraphicspolygonitem_qgraphicspolygonitem_shape, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsPolygonItem_QGraphicsPolygonItem, contains, arginfo_qt_widgets_qgraphicspolygonitem_qgraphicspolygonitem_contains, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsPolygonItem_QGraphicsPolygonItem, paint, arginfo_qt_widgets_qgraphicspolygonitem_qgraphicspolygonitem_paint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsPolygonItem_QGraphicsPolygonItem, isObscuredBy, arginfo_qt_widgets_qgraphicspolygonitem_qgraphicspolygonitem_isobscuredby, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsPolygonItem_QGraphicsPolygonItem, opaqueArea, arginfo_qt_widgets_qgraphicspolygonitem_qgraphicspolygonitem_opaquearea, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsPolygonItem_QGraphicsPolygonItem, type, arginfo_qt_widgets_qgraphicspolygonitem_qgraphicspolygonitem_type, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsPolygonItem_QGraphicsPolygonItem, supportsExtension, arginfo_qt_widgets_qgraphicspolygonitem_qgraphicspolygonitem_supportsextension, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsPolygonItem_QGraphicsPolygonItem, setExtension, arginfo_qt_widgets_qgraphicspolygonitem_qgraphicspolygonitem_setextension, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsPolygonItem_QGraphicsPolygonItem, extension, arginfo_qt_widgets_qgraphicspolygonitem_qgraphicspolygonitem_extension, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
