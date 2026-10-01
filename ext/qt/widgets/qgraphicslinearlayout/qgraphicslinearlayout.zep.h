
extern zend_class_entry *qt_widgets_qgraphicslinearlayout_qgraphicslinearlayout_ce;

ZEPHIR_INIT_CLASS(Qt_Widgets_QGraphicsLinearLayout_QGraphicsLinearLayout);

PHP_METHOD(Qt_Widgets_QGraphicsLinearLayout_QGraphicsLinearLayout, new_);
PHP_METHOD(Qt_Widgets_QGraphicsLinearLayout_QGraphicsLinearLayout, newQtOrientationQGraphicsLayoutItem);
PHP_METHOD(Qt_Widgets_QGraphicsLinearLayout_QGraphicsLinearLayout, setOrientation);
PHP_METHOD(Qt_Widgets_QGraphicsLinearLayout_QGraphicsLinearLayout, orientation);
PHP_METHOD(Qt_Widgets_QGraphicsLinearLayout_QGraphicsLinearLayout, addItem);
PHP_METHOD(Qt_Widgets_QGraphicsLinearLayout_QGraphicsLinearLayout, addStretch);
PHP_METHOD(Qt_Widgets_QGraphicsLinearLayout_QGraphicsLinearLayout, insertItem);
PHP_METHOD(Qt_Widgets_QGraphicsLinearLayout_QGraphicsLinearLayout, insertStretch);
PHP_METHOD(Qt_Widgets_QGraphicsLinearLayout_QGraphicsLinearLayout, removeItem);
PHP_METHOD(Qt_Widgets_QGraphicsLinearLayout_QGraphicsLinearLayout, removeAt);
PHP_METHOD(Qt_Widgets_QGraphicsLinearLayout_QGraphicsLinearLayout, setSpacing);
PHP_METHOD(Qt_Widgets_QGraphicsLinearLayout_QGraphicsLinearLayout, spacing);
PHP_METHOD(Qt_Widgets_QGraphicsLinearLayout_QGraphicsLinearLayout, setItemSpacing);
PHP_METHOD(Qt_Widgets_QGraphicsLinearLayout_QGraphicsLinearLayout, itemSpacing);
PHP_METHOD(Qt_Widgets_QGraphicsLinearLayout_QGraphicsLinearLayout, setStretchFactor);
PHP_METHOD(Qt_Widgets_QGraphicsLinearLayout_QGraphicsLinearLayout, stretchFactor);
PHP_METHOD(Qt_Widgets_QGraphicsLinearLayout_QGraphicsLinearLayout, setAlignment);
PHP_METHOD(Qt_Widgets_QGraphicsLinearLayout_QGraphicsLinearLayout, alignment);
PHP_METHOD(Qt_Widgets_QGraphicsLinearLayout_QGraphicsLinearLayout, setGeometry);
PHP_METHOD(Qt_Widgets_QGraphicsLinearLayout_QGraphicsLinearLayout, count);
PHP_METHOD(Qt_Widgets_QGraphicsLinearLayout_QGraphicsLinearLayout, itemAt);
PHP_METHOD(Qt_Widgets_QGraphicsLinearLayout_QGraphicsLinearLayout, invalidate);
PHP_METHOD(Qt_Widgets_QGraphicsLinearLayout_QGraphicsLinearLayout, sizeHint);
PHP_METHOD(Qt_Widgets_QGraphicsLinearLayout_QGraphicsLinearLayout, dump);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicslinearlayout_qgraphicslinearlayout_new_, 0, 0, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicslinearlayout_qgraphicslinearlayout_newqtorientationqgraphicslayoutitem, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, orientation, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicslinearlayout_qgraphicslinearlayout_setorientation, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, orientation, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicslinearlayout_qgraphicslinearlayout_orientation, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicslinearlayout_qgraphicslinearlayout_additem, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, item, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicslinearlayout_qgraphicslinearlayout_addstretch, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, stretch, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicslinearlayout_qgraphicslinearlayout_insertitem, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, item, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicslinearlayout_qgraphicslinearlayout_insertstretch, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, stretch, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicslinearlayout_qgraphicslinearlayout_removeitem, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, item, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicslinearlayout_qgraphicslinearlayout_removeat, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicslinearlayout_qgraphicslinearlayout_setspacing, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, spacing, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicslinearlayout_qgraphicslinearlayout_spacing, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicslinearlayout_qgraphicslinearlayout_setitemspacing, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, spacing, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicslinearlayout_qgraphicslinearlayout_itemspacing, 0, 2, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicslinearlayout_qgraphicslinearlayout_setstretchfactor, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, item, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, stretch, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicslinearlayout_qgraphicslinearlayout_stretchfactor, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, item, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicslinearlayout_qgraphicslinearlayout_setalignment, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, item, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, alignment, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicslinearlayout_qgraphicslinearlayout_alignment, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, item, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicslinearlayout_qgraphicslinearlayout_setgeometry, 0, 5, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rectX, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, rectY, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, rectWidth, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, rectHeight, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicslinearlayout_qgraphicslinearlayout_count, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicslinearlayout_qgraphicslinearlayout_itemat, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicslinearlayout_qgraphicslinearlayout_invalidate, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicslinearlayout_qgraphicslinearlayout_sizehint, 0, 2, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, which, IS_LONG, 0)
	ZEND_ARG_INFO(0, constraintWidth)
	ZEND_ARG_INFO(0, constraintHeight)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicslinearlayout_qgraphicslinearlayout_dump, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, indent, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_widgets_qgraphicslinearlayout_qgraphicslinearlayout_method_entry) {
	PHP_ME(Qt_Widgets_QGraphicsLinearLayout_QGraphicsLinearLayout, new_, arginfo_qt_widgets_qgraphicslinearlayout_qgraphicslinearlayout_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsLinearLayout_QGraphicsLinearLayout, newQtOrientationQGraphicsLayoutItem, arginfo_qt_widgets_qgraphicslinearlayout_qgraphicslinearlayout_newqtorientationqgraphicslayoutitem, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsLinearLayout_QGraphicsLinearLayout, setOrientation, arginfo_qt_widgets_qgraphicslinearlayout_qgraphicslinearlayout_setorientation, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsLinearLayout_QGraphicsLinearLayout, orientation, arginfo_qt_widgets_qgraphicslinearlayout_qgraphicslinearlayout_orientation, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsLinearLayout_QGraphicsLinearLayout, addItem, arginfo_qt_widgets_qgraphicslinearlayout_qgraphicslinearlayout_additem, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsLinearLayout_QGraphicsLinearLayout, addStretch, arginfo_qt_widgets_qgraphicslinearlayout_qgraphicslinearlayout_addstretch, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsLinearLayout_QGraphicsLinearLayout, insertItem, arginfo_qt_widgets_qgraphicslinearlayout_qgraphicslinearlayout_insertitem, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsLinearLayout_QGraphicsLinearLayout, insertStretch, arginfo_qt_widgets_qgraphicslinearlayout_qgraphicslinearlayout_insertstretch, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsLinearLayout_QGraphicsLinearLayout, removeItem, arginfo_qt_widgets_qgraphicslinearlayout_qgraphicslinearlayout_removeitem, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsLinearLayout_QGraphicsLinearLayout, removeAt, arginfo_qt_widgets_qgraphicslinearlayout_qgraphicslinearlayout_removeat, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsLinearLayout_QGraphicsLinearLayout, setSpacing, arginfo_qt_widgets_qgraphicslinearlayout_qgraphicslinearlayout_setspacing, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsLinearLayout_QGraphicsLinearLayout, spacing, arginfo_qt_widgets_qgraphicslinearlayout_qgraphicslinearlayout_spacing, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsLinearLayout_QGraphicsLinearLayout, setItemSpacing, arginfo_qt_widgets_qgraphicslinearlayout_qgraphicslinearlayout_setitemspacing, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsLinearLayout_QGraphicsLinearLayout, itemSpacing, arginfo_qt_widgets_qgraphicslinearlayout_qgraphicslinearlayout_itemspacing, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsLinearLayout_QGraphicsLinearLayout, setStretchFactor, arginfo_qt_widgets_qgraphicslinearlayout_qgraphicslinearlayout_setstretchfactor, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsLinearLayout_QGraphicsLinearLayout, stretchFactor, arginfo_qt_widgets_qgraphicslinearlayout_qgraphicslinearlayout_stretchfactor, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsLinearLayout_QGraphicsLinearLayout, setAlignment, arginfo_qt_widgets_qgraphicslinearlayout_qgraphicslinearlayout_setalignment, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsLinearLayout_QGraphicsLinearLayout, alignment, arginfo_qt_widgets_qgraphicslinearlayout_qgraphicslinearlayout_alignment, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsLinearLayout_QGraphicsLinearLayout, setGeometry, arginfo_qt_widgets_qgraphicslinearlayout_qgraphicslinearlayout_setgeometry, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsLinearLayout_QGraphicsLinearLayout, count, arginfo_qt_widgets_qgraphicslinearlayout_qgraphicslinearlayout_count, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsLinearLayout_QGraphicsLinearLayout, itemAt, arginfo_qt_widgets_qgraphicslinearlayout_qgraphicslinearlayout_itemat, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsLinearLayout_QGraphicsLinearLayout, invalidate, arginfo_qt_widgets_qgraphicslinearlayout_qgraphicslinearlayout_invalidate, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsLinearLayout_QGraphicsLinearLayout, sizeHint, arginfo_qt_widgets_qgraphicslinearlayout_qgraphicslinearlayout_sizehint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsLinearLayout_QGraphicsLinearLayout, dump, arginfo_qt_widgets_qgraphicslinearlayout_qgraphicslinearlayout_dump, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
