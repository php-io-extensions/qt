
extern zend_class_entry *qt_widgets_qgraphicsitemgroup_qgraphicsitemgroup_ce;

ZEPHIR_INIT_CLASS(Qt_Widgets_QGraphicsItemGroup_QGraphicsItemGroup);

PHP_METHOD(Qt_Widgets_QGraphicsItemGroup_QGraphicsItemGroup, new_);
PHP_METHOD(Qt_Widgets_QGraphicsItemGroup_QGraphicsItemGroup, addToGroup);
PHP_METHOD(Qt_Widgets_QGraphicsItemGroup_QGraphicsItemGroup, removeFromGroup);
PHP_METHOD(Qt_Widgets_QGraphicsItemGroup_QGraphicsItemGroup, boundingRect);
PHP_METHOD(Qt_Widgets_QGraphicsItemGroup_QGraphicsItemGroup, paint);
PHP_METHOD(Qt_Widgets_QGraphicsItemGroup_QGraphicsItemGroup, isObscuredBy);
PHP_METHOD(Qt_Widgets_QGraphicsItemGroup_QGraphicsItemGroup, opaqueArea);
PHP_METHOD(Qt_Widgets_QGraphicsItemGroup_QGraphicsItemGroup, type);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicsitemgroup_qgraphicsitemgroup_new_, 0, 0, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicsitemgroup_qgraphicsitemgroup_addtogroup, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, item, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicsitemgroup_qgraphicsitemgroup_removefromgroup, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, item, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicsitemgroup_qgraphicsitemgroup_boundingrect, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicsitemgroup_qgraphicsitemgroup_paint, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, painter, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, option, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, widget, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicsitemgroup_qgraphicsitemgroup_isobscuredby, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, item, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicsitemgroup_qgraphicsitemgroup_opaquearea, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicsitemgroup_qgraphicsitemgroup_type, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_widgets_qgraphicsitemgroup_qgraphicsitemgroup_method_entry) {
	PHP_ME(Qt_Widgets_QGraphicsItemGroup_QGraphicsItemGroup, new_, arginfo_qt_widgets_qgraphicsitemgroup_qgraphicsitemgroup_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsItemGroup_QGraphicsItemGroup, addToGroup, arginfo_qt_widgets_qgraphicsitemgroup_qgraphicsitemgroup_addtogroup, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsItemGroup_QGraphicsItemGroup, removeFromGroup, arginfo_qt_widgets_qgraphicsitemgroup_qgraphicsitemgroup_removefromgroup, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsItemGroup_QGraphicsItemGroup, boundingRect, arginfo_qt_widgets_qgraphicsitemgroup_qgraphicsitemgroup_boundingrect, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsItemGroup_QGraphicsItemGroup, paint, arginfo_qt_widgets_qgraphicsitemgroup_qgraphicsitemgroup_paint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsItemGroup_QGraphicsItemGroup, isObscuredBy, arginfo_qt_widgets_qgraphicsitemgroup_qgraphicsitemgroup_isobscuredby, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsItemGroup_QGraphicsItemGroup, opaqueArea, arginfo_qt_widgets_qgraphicsitemgroup_qgraphicsitemgroup_opaquearea, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsItemGroup_QGraphicsItemGroup, type, arginfo_qt_widgets_qgraphicsitemgroup_qgraphicsitemgroup_type, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
