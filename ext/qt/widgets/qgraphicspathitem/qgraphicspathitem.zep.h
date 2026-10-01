
extern zend_class_entry *qt_widgets_qgraphicspathitem_qgraphicspathitem_ce;

ZEPHIR_INIT_CLASS(Qt_Widgets_QGraphicsPathItem_QGraphicsPathItem);

PHP_METHOD(Qt_Widgets_QGraphicsPathItem_QGraphicsPathItem, new_);
PHP_METHOD(Qt_Widgets_QGraphicsPathItem_QGraphicsPathItem, newQPainterPathQGraphicsItem);
PHP_METHOD(Qt_Widgets_QGraphicsPathItem_QGraphicsPathItem, path);
PHP_METHOD(Qt_Widgets_QGraphicsPathItem_QGraphicsPathItem, setPath);
PHP_METHOD(Qt_Widgets_QGraphicsPathItem_QGraphicsPathItem, boundingRect);
PHP_METHOD(Qt_Widgets_QGraphicsPathItem_QGraphicsPathItem, shape);
PHP_METHOD(Qt_Widgets_QGraphicsPathItem_QGraphicsPathItem, contains);
PHP_METHOD(Qt_Widgets_QGraphicsPathItem_QGraphicsPathItem, paint);
PHP_METHOD(Qt_Widgets_QGraphicsPathItem_QGraphicsPathItem, isObscuredBy);
PHP_METHOD(Qt_Widgets_QGraphicsPathItem_QGraphicsPathItem, opaqueArea);
PHP_METHOD(Qt_Widgets_QGraphicsPathItem_QGraphicsPathItem, type);
PHP_METHOD(Qt_Widgets_QGraphicsPathItem_QGraphicsPathItem, supportsExtension);
PHP_METHOD(Qt_Widgets_QGraphicsPathItem_QGraphicsPathItem, setExtension);
PHP_METHOD(Qt_Widgets_QGraphicsPathItem_QGraphicsPathItem, extension);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicspathitem_qgraphicspathitem_new_, 0, 0, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicspathitem_qgraphicspathitem_newqpainterpathqgraphicsitem, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, path, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicspathitem_qgraphicspathitem_path, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicspathitem_qgraphicspathitem_setpath, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, path, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicspathitem_qgraphicspathitem_boundingrect, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicspathitem_qgraphicspathitem_shape, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicspathitem_qgraphicspathitem_contains, 0, 3, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, pointX, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, pointY, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicspathitem_qgraphicspathitem_paint, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, painter, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, option, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, widget, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicspathitem_qgraphicspathitem_isobscuredby, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, item, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicspathitem_qgraphicspathitem_opaquearea, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicspathitem_qgraphicspathitem_type, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicspathitem_qgraphicspathitem_supportsextension, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, extension, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicspathitem_qgraphicspathitem_setextension, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, extension, IS_LONG, 0)
	ZEND_ARG_INFO(0, variant)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_qt_widgets_qgraphicspathitem_qgraphicspathitem_extension, 0, 0, 2)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_INFO(0, variant)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_widgets_qgraphicspathitem_qgraphicspathitem_method_entry) {
	PHP_ME(Qt_Widgets_QGraphicsPathItem_QGraphicsPathItem, new_, arginfo_qt_widgets_qgraphicspathitem_qgraphicspathitem_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsPathItem_QGraphicsPathItem, newQPainterPathQGraphicsItem, arginfo_qt_widgets_qgraphicspathitem_qgraphicspathitem_newqpainterpathqgraphicsitem, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsPathItem_QGraphicsPathItem, path, arginfo_qt_widgets_qgraphicspathitem_qgraphicspathitem_path, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsPathItem_QGraphicsPathItem, setPath, arginfo_qt_widgets_qgraphicspathitem_qgraphicspathitem_setpath, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsPathItem_QGraphicsPathItem, boundingRect, arginfo_qt_widgets_qgraphicspathitem_qgraphicspathitem_boundingrect, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsPathItem_QGraphicsPathItem, shape, arginfo_qt_widgets_qgraphicspathitem_qgraphicspathitem_shape, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsPathItem_QGraphicsPathItem, contains, arginfo_qt_widgets_qgraphicspathitem_qgraphicspathitem_contains, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsPathItem_QGraphicsPathItem, paint, arginfo_qt_widgets_qgraphicspathitem_qgraphicspathitem_paint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsPathItem_QGraphicsPathItem, isObscuredBy, arginfo_qt_widgets_qgraphicspathitem_qgraphicspathitem_isobscuredby, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsPathItem_QGraphicsPathItem, opaqueArea, arginfo_qt_widgets_qgraphicspathitem_qgraphicspathitem_opaquearea, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsPathItem_QGraphicsPathItem, type, arginfo_qt_widgets_qgraphicspathitem_qgraphicspathitem_type, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsPathItem_QGraphicsPathItem, supportsExtension, arginfo_qt_widgets_qgraphicspathitem_qgraphicspathitem_supportsextension, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsPathItem_QGraphicsPathItem, setExtension, arginfo_qt_widgets_qgraphicspathitem_qgraphicspathitem_setextension, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsPathItem_QGraphicsPathItem, extension, arginfo_qt_widgets_qgraphicspathitem_qgraphicspathitem_extension, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
