
extern zend_class_entry *qt_widgets_qgraphicspixmapitem_qgraphicspixmapitem_ce;

ZEPHIR_INIT_CLASS(Qt_Widgets_QGraphicsPixmapItem_QGraphicsPixmapItem);

PHP_METHOD(Qt_Widgets_QGraphicsPixmapItem_QGraphicsPixmapItem, new_);
PHP_METHOD(Qt_Widgets_QGraphicsPixmapItem_QGraphicsPixmapItem, newQPixmapQGraphicsItem);
PHP_METHOD(Qt_Widgets_QGraphicsPixmapItem_QGraphicsPixmapItem, pixmap);
PHP_METHOD(Qt_Widgets_QGraphicsPixmapItem_QGraphicsPixmapItem, setPixmap);
PHP_METHOD(Qt_Widgets_QGraphicsPixmapItem_QGraphicsPixmapItem, transformationMode);
PHP_METHOD(Qt_Widgets_QGraphicsPixmapItem_QGraphicsPixmapItem, setTransformationMode);
PHP_METHOD(Qt_Widgets_QGraphicsPixmapItem_QGraphicsPixmapItem, offset);
PHP_METHOD(Qt_Widgets_QGraphicsPixmapItem_QGraphicsPixmapItem, setOffset);
PHP_METHOD(Qt_Widgets_QGraphicsPixmapItem_QGraphicsPixmapItem, setOffsetQrealQreal);
PHP_METHOD(Qt_Widgets_QGraphicsPixmapItem_QGraphicsPixmapItem, boundingRect);
PHP_METHOD(Qt_Widgets_QGraphicsPixmapItem_QGraphicsPixmapItem, shape);
PHP_METHOD(Qt_Widgets_QGraphicsPixmapItem_QGraphicsPixmapItem, contains);
PHP_METHOD(Qt_Widgets_QGraphicsPixmapItem_QGraphicsPixmapItem, paint);
PHP_METHOD(Qt_Widgets_QGraphicsPixmapItem_QGraphicsPixmapItem, isObscuredBy);
PHP_METHOD(Qt_Widgets_QGraphicsPixmapItem_QGraphicsPixmapItem, opaqueArea);
PHP_METHOD(Qt_Widgets_QGraphicsPixmapItem_QGraphicsPixmapItem, type);
PHP_METHOD(Qt_Widgets_QGraphicsPixmapItem_QGraphicsPixmapItem, shapeMode);
PHP_METHOD(Qt_Widgets_QGraphicsPixmapItem_QGraphicsPixmapItem, setShapeMode);
PHP_METHOD(Qt_Widgets_QGraphicsPixmapItem_QGraphicsPixmapItem, supportsExtension);
PHP_METHOD(Qt_Widgets_QGraphicsPixmapItem_QGraphicsPixmapItem, setExtension);
PHP_METHOD(Qt_Widgets_QGraphicsPixmapItem_QGraphicsPixmapItem, extension);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicspixmapitem_qgraphicspixmapitem_new_, 0, 0, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicspixmapitem_qgraphicspixmapitem_newqpixmapqgraphicsitem, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, pixmap, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicspixmapitem_qgraphicspixmapitem_pixmap, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicspixmapitem_qgraphicspixmapitem_setpixmap, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, pixmap, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicspixmapitem_qgraphicspixmapitem_transformationmode, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicspixmapitem_qgraphicspixmapitem_settransformationmode, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, mode, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicspixmapitem_qgraphicspixmapitem_offset, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicspixmapitem_qgraphicspixmapitem_setoffset, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, offsetX, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, offsetY, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicspixmapitem_qgraphicspixmapitem_setoffsetqrealqreal, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicspixmapitem_qgraphicspixmapitem_boundingrect, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicspixmapitem_qgraphicspixmapitem_shape, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicspixmapitem_qgraphicspixmapitem_contains, 0, 3, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, pointX, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, pointY, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicspixmapitem_qgraphicspixmapitem_paint, 0, 4, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, painter, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, option, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, widget, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicspixmapitem_qgraphicspixmapitem_isobscuredby, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, item, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicspixmapitem_qgraphicspixmapitem_opaquearea, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicspixmapitem_qgraphicspixmapitem_type, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicspixmapitem_qgraphicspixmapitem_shapemode, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicspixmapitem_qgraphicspixmapitem_setshapemode, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, mode, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicspixmapitem_qgraphicspixmapitem_supportsextension, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, extension, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicspixmapitem_qgraphicspixmapitem_setextension, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, extension, IS_LONG, 0)
	ZEND_ARG_INFO(0, variant)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_qt_widgets_qgraphicspixmapitem_qgraphicspixmapitem_extension, 0, 0, 2)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_INFO(0, variant)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_widgets_qgraphicspixmapitem_qgraphicspixmapitem_method_entry) {
	PHP_ME(Qt_Widgets_QGraphicsPixmapItem_QGraphicsPixmapItem, new_, arginfo_qt_widgets_qgraphicspixmapitem_qgraphicspixmapitem_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsPixmapItem_QGraphicsPixmapItem, newQPixmapQGraphicsItem, arginfo_qt_widgets_qgraphicspixmapitem_qgraphicspixmapitem_newqpixmapqgraphicsitem, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsPixmapItem_QGraphicsPixmapItem, pixmap, arginfo_qt_widgets_qgraphicspixmapitem_qgraphicspixmapitem_pixmap, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsPixmapItem_QGraphicsPixmapItem, setPixmap, arginfo_qt_widgets_qgraphicspixmapitem_qgraphicspixmapitem_setpixmap, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsPixmapItem_QGraphicsPixmapItem, transformationMode, arginfo_qt_widgets_qgraphicspixmapitem_qgraphicspixmapitem_transformationmode, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsPixmapItem_QGraphicsPixmapItem, setTransformationMode, arginfo_qt_widgets_qgraphicspixmapitem_qgraphicspixmapitem_settransformationmode, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsPixmapItem_QGraphicsPixmapItem, offset, arginfo_qt_widgets_qgraphicspixmapitem_qgraphicspixmapitem_offset, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsPixmapItem_QGraphicsPixmapItem, setOffset, arginfo_qt_widgets_qgraphicspixmapitem_qgraphicspixmapitem_setoffset, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsPixmapItem_QGraphicsPixmapItem, setOffsetQrealQreal, arginfo_qt_widgets_qgraphicspixmapitem_qgraphicspixmapitem_setoffsetqrealqreal, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsPixmapItem_QGraphicsPixmapItem, boundingRect, arginfo_qt_widgets_qgraphicspixmapitem_qgraphicspixmapitem_boundingrect, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsPixmapItem_QGraphicsPixmapItem, shape, arginfo_qt_widgets_qgraphicspixmapitem_qgraphicspixmapitem_shape, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsPixmapItem_QGraphicsPixmapItem, contains, arginfo_qt_widgets_qgraphicspixmapitem_qgraphicspixmapitem_contains, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsPixmapItem_QGraphicsPixmapItem, paint, arginfo_qt_widgets_qgraphicspixmapitem_qgraphicspixmapitem_paint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsPixmapItem_QGraphicsPixmapItem, isObscuredBy, arginfo_qt_widgets_qgraphicspixmapitem_qgraphicspixmapitem_isobscuredby, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsPixmapItem_QGraphicsPixmapItem, opaqueArea, arginfo_qt_widgets_qgraphicspixmapitem_qgraphicspixmapitem_opaquearea, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsPixmapItem_QGraphicsPixmapItem, type, arginfo_qt_widgets_qgraphicspixmapitem_qgraphicspixmapitem_type, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsPixmapItem_QGraphicsPixmapItem, shapeMode, arginfo_qt_widgets_qgraphicspixmapitem_qgraphicspixmapitem_shapemode, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsPixmapItem_QGraphicsPixmapItem, setShapeMode, arginfo_qt_widgets_qgraphicspixmapitem_qgraphicspixmapitem_setshapemode, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsPixmapItem_QGraphicsPixmapItem, supportsExtension, arginfo_qt_widgets_qgraphicspixmapitem_qgraphicspixmapitem_supportsextension, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsPixmapItem_QGraphicsPixmapItem, setExtension, arginfo_qt_widgets_qgraphicspixmapitem_qgraphicspixmapitem_setextension, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsPixmapItem_QGraphicsPixmapItem, extension, arginfo_qt_widgets_qgraphicspixmapitem_qgraphicspixmapitem_extension, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
