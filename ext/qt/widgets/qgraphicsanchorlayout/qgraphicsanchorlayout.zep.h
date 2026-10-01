
extern zend_class_entry *qt_widgets_qgraphicsanchorlayout_qgraphicsanchorlayout_ce;

ZEPHIR_INIT_CLASS(Qt_Widgets_QGraphicsAnchorLayout_QGraphicsAnchorLayout);

PHP_METHOD(Qt_Widgets_QGraphicsAnchorLayout_QGraphicsAnchorLayout, new_);
PHP_METHOD(Qt_Widgets_QGraphicsAnchorLayout_QGraphicsAnchorLayout, addAnchor);
PHP_METHOD(Qt_Widgets_QGraphicsAnchorLayout_QGraphicsAnchorLayout, anchor);
PHP_METHOD(Qt_Widgets_QGraphicsAnchorLayout_QGraphicsAnchorLayout, addCornerAnchors);
PHP_METHOD(Qt_Widgets_QGraphicsAnchorLayout_QGraphicsAnchorLayout, addAnchors);
PHP_METHOD(Qt_Widgets_QGraphicsAnchorLayout_QGraphicsAnchorLayout, setHorizontalSpacing);
PHP_METHOD(Qt_Widgets_QGraphicsAnchorLayout_QGraphicsAnchorLayout, setVerticalSpacing);
PHP_METHOD(Qt_Widgets_QGraphicsAnchorLayout_QGraphicsAnchorLayout, setSpacing);
PHP_METHOD(Qt_Widgets_QGraphicsAnchorLayout_QGraphicsAnchorLayout, horizontalSpacing);
PHP_METHOD(Qt_Widgets_QGraphicsAnchorLayout_QGraphicsAnchorLayout, verticalSpacing);
PHP_METHOD(Qt_Widgets_QGraphicsAnchorLayout_QGraphicsAnchorLayout, removeAt);
PHP_METHOD(Qt_Widgets_QGraphicsAnchorLayout_QGraphicsAnchorLayout, setGeometry);
PHP_METHOD(Qt_Widgets_QGraphicsAnchorLayout_QGraphicsAnchorLayout, count);
PHP_METHOD(Qt_Widgets_QGraphicsAnchorLayout_QGraphicsAnchorLayout, itemAt);
PHP_METHOD(Qt_Widgets_QGraphicsAnchorLayout_QGraphicsAnchorLayout, invalidate);
PHP_METHOD(Qt_Widgets_QGraphicsAnchorLayout_QGraphicsAnchorLayout, sizeHint);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicsanchorlayout_qgraphicsanchorlayout_new_, 0, 0, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicsanchorlayout_qgraphicsanchorlayout_addanchor, 0, 5, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, firstItem, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, firstEdge, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, secondItem, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, secondEdge, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicsanchorlayout_qgraphicsanchorlayout_anchor, 0, 5, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, firstItem, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, firstEdge, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, secondItem, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, secondEdge, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicsanchorlayout_qgraphicsanchorlayout_addcorneranchors, 0, 5, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, firstItem, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, firstCorner, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, secondItem, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, secondCorner, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicsanchorlayout_qgraphicsanchorlayout_addanchors, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, firstItem, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, secondItem, IS_LONG, 0)
	ZEND_ARG_INFO(0, orientations)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicsanchorlayout_qgraphicsanchorlayout_sethorizontalspacing, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, spacing, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicsanchorlayout_qgraphicsanchorlayout_setverticalspacing, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, spacing, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicsanchorlayout_qgraphicsanchorlayout_setspacing, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, spacing, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicsanchorlayout_qgraphicsanchorlayout_horizontalspacing, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicsanchorlayout_qgraphicsanchorlayout_verticalspacing, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicsanchorlayout_qgraphicsanchorlayout_removeat, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicsanchorlayout_qgraphicsanchorlayout_setgeometry, 0, 5, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rectX, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, rectY, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, rectWidth, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, rectHeight, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicsanchorlayout_qgraphicsanchorlayout_count, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicsanchorlayout_qgraphicsanchorlayout_itemat, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicsanchorlayout_qgraphicsanchorlayout_invalidate, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicsanchorlayout_qgraphicsanchorlayout_sizehint, 0, 2, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, which, IS_LONG, 0)
	ZEND_ARG_INFO(0, constraintWidth)
	ZEND_ARG_INFO(0, constraintHeight)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_widgets_qgraphicsanchorlayout_qgraphicsanchorlayout_method_entry) {
	PHP_ME(Qt_Widgets_QGraphicsAnchorLayout_QGraphicsAnchorLayout, new_, arginfo_qt_widgets_qgraphicsanchorlayout_qgraphicsanchorlayout_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsAnchorLayout_QGraphicsAnchorLayout, addAnchor, arginfo_qt_widgets_qgraphicsanchorlayout_qgraphicsanchorlayout_addanchor, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsAnchorLayout_QGraphicsAnchorLayout, anchor, arginfo_qt_widgets_qgraphicsanchorlayout_qgraphicsanchorlayout_anchor, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsAnchorLayout_QGraphicsAnchorLayout, addCornerAnchors, arginfo_qt_widgets_qgraphicsanchorlayout_qgraphicsanchorlayout_addcorneranchors, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsAnchorLayout_QGraphicsAnchorLayout, addAnchors, arginfo_qt_widgets_qgraphicsanchorlayout_qgraphicsanchorlayout_addanchors, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsAnchorLayout_QGraphicsAnchorLayout, setHorizontalSpacing, arginfo_qt_widgets_qgraphicsanchorlayout_qgraphicsanchorlayout_sethorizontalspacing, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsAnchorLayout_QGraphicsAnchorLayout, setVerticalSpacing, arginfo_qt_widgets_qgraphicsanchorlayout_qgraphicsanchorlayout_setverticalspacing, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsAnchorLayout_QGraphicsAnchorLayout, setSpacing, arginfo_qt_widgets_qgraphicsanchorlayout_qgraphicsanchorlayout_setspacing, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsAnchorLayout_QGraphicsAnchorLayout, horizontalSpacing, arginfo_qt_widgets_qgraphicsanchorlayout_qgraphicsanchorlayout_horizontalspacing, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsAnchorLayout_QGraphicsAnchorLayout, verticalSpacing, arginfo_qt_widgets_qgraphicsanchorlayout_qgraphicsanchorlayout_verticalspacing, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsAnchorLayout_QGraphicsAnchorLayout, removeAt, arginfo_qt_widgets_qgraphicsanchorlayout_qgraphicsanchorlayout_removeat, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsAnchorLayout_QGraphicsAnchorLayout, setGeometry, arginfo_qt_widgets_qgraphicsanchorlayout_qgraphicsanchorlayout_setgeometry, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsAnchorLayout_QGraphicsAnchorLayout, count, arginfo_qt_widgets_qgraphicsanchorlayout_qgraphicsanchorlayout_count, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsAnchorLayout_QGraphicsAnchorLayout, itemAt, arginfo_qt_widgets_qgraphicsanchorlayout_qgraphicsanchorlayout_itemat, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsAnchorLayout_QGraphicsAnchorLayout, invalidate, arginfo_qt_widgets_qgraphicsanchorlayout_qgraphicsanchorlayout_invalidate, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsAnchorLayout_QGraphicsAnchorLayout, sizeHint, arginfo_qt_widgets_qgraphicsanchorlayout_qgraphicsanchorlayout_sizehint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
