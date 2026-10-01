
extern zend_class_entry *qt_widgets_qlayoutitem_qlayoutitem_ce;

ZEPHIR_INIT_CLASS(Qt_Widgets_QLayoutItem_QLayoutItem);

PHP_METHOD(Qt_Widgets_QLayoutItem_QLayoutItem, setAlignment);
PHP_METHOD(Qt_Widgets_QLayoutItem_QLayoutItem, new_);
PHP_METHOD(Qt_Widgets_QLayoutItem_QLayoutItem, sizeHint);
PHP_METHOD(Qt_Widgets_QLayoutItem_QLayoutItem, minimumSize);
PHP_METHOD(Qt_Widgets_QLayoutItem_QLayoutItem, maximumSize);
PHP_METHOD(Qt_Widgets_QLayoutItem_QLayoutItem, expandingDirections);
PHP_METHOD(Qt_Widgets_QLayoutItem_QLayoutItem, setGeometry);
PHP_METHOD(Qt_Widgets_QLayoutItem_QLayoutItem, geometry);
PHP_METHOD(Qt_Widgets_QLayoutItem_QLayoutItem, isEmpty);
PHP_METHOD(Qt_Widgets_QLayoutItem_QLayoutItem, hasHeightForWidth);
PHP_METHOD(Qt_Widgets_QLayoutItem_QLayoutItem, heightForWidth);
PHP_METHOD(Qt_Widgets_QLayoutItem_QLayoutItem, minimumHeightForWidth);
PHP_METHOD(Qt_Widgets_QLayoutItem_QLayoutItem, invalidate);
PHP_METHOD(Qt_Widgets_QLayoutItem_QLayoutItem, widget);
PHP_METHOD(Qt_Widgets_QLayoutItem_QLayoutItem, layout);
PHP_METHOD(Qt_Widgets_QLayoutItem_QLayoutItem, spacerItem);
PHP_METHOD(Qt_Widgets_QLayoutItem_QLayoutItem, alignment);
PHP_METHOD(Qt_Widgets_QLayoutItem_QLayoutItem, controlTypes);
PHP_METHOD(Qt_Widgets_QLayoutItem_QLayoutItem, align);
PHP_METHOD(Qt_Widgets_QLayoutItem_QLayoutItem, setAlign);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qlayoutitem_qlayoutitem_setalignment, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, a, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qlayoutitem_qlayoutitem_new_, 0, 0, IS_LONG, 0)
	ZEND_ARG_INFO(0, alignment)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qlayoutitem_qlayoutitem_sizehint, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qlayoutitem_qlayoutitem_minimumsize, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qlayoutitem_qlayoutitem_maximumsize, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qlayoutitem_qlayoutitem_expandingdirections, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qlayoutitem_qlayoutitem_setgeometry, 0, 5, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0X, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0Y, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0Width, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0Height, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qlayoutitem_qlayoutitem_geometry, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qlayoutitem_qlayoutitem_isempty, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qlayoutitem_qlayoutitem_hasheightforwidth, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qlayoutitem_qlayoutitem_heightforwidth, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qlayoutitem_qlayoutitem_minimumheightforwidth, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qlayoutitem_qlayoutitem_invalidate, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qlayoutitem_qlayoutitem_widget, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qlayoutitem_qlayoutitem_layout, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qlayoutitem_qlayoutitem_spaceritem, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qlayoutitem_qlayoutitem_alignment, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qlayoutitem_qlayoutitem_controltypes, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qlayoutitem_qlayoutitem_align, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qlayoutitem_qlayoutitem_setalign, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_widgets_qlayoutitem_qlayoutitem_method_entry) {
	PHP_ME(Qt_Widgets_QLayoutItem_QLayoutItem, setAlignment, arginfo_qt_widgets_qlayoutitem_qlayoutitem_setalignment, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QLayoutItem_QLayoutItem, new_, arginfo_qt_widgets_qlayoutitem_qlayoutitem_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QLayoutItem_QLayoutItem, sizeHint, arginfo_qt_widgets_qlayoutitem_qlayoutitem_sizehint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QLayoutItem_QLayoutItem, minimumSize, arginfo_qt_widgets_qlayoutitem_qlayoutitem_minimumsize, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QLayoutItem_QLayoutItem, maximumSize, arginfo_qt_widgets_qlayoutitem_qlayoutitem_maximumsize, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QLayoutItem_QLayoutItem, expandingDirections, arginfo_qt_widgets_qlayoutitem_qlayoutitem_expandingdirections, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QLayoutItem_QLayoutItem, setGeometry, arginfo_qt_widgets_qlayoutitem_qlayoutitem_setgeometry, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QLayoutItem_QLayoutItem, geometry, arginfo_qt_widgets_qlayoutitem_qlayoutitem_geometry, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QLayoutItem_QLayoutItem, isEmpty, arginfo_qt_widgets_qlayoutitem_qlayoutitem_isempty, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QLayoutItem_QLayoutItem, hasHeightForWidth, arginfo_qt_widgets_qlayoutitem_qlayoutitem_hasheightforwidth, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QLayoutItem_QLayoutItem, heightForWidth, arginfo_qt_widgets_qlayoutitem_qlayoutitem_heightforwidth, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QLayoutItem_QLayoutItem, minimumHeightForWidth, arginfo_qt_widgets_qlayoutitem_qlayoutitem_minimumheightforwidth, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QLayoutItem_QLayoutItem, invalidate, arginfo_qt_widgets_qlayoutitem_qlayoutitem_invalidate, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QLayoutItem_QLayoutItem, widget, arginfo_qt_widgets_qlayoutitem_qlayoutitem_widget, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QLayoutItem_QLayoutItem, layout, arginfo_qt_widgets_qlayoutitem_qlayoutitem_layout, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QLayoutItem_QLayoutItem, spacerItem, arginfo_qt_widgets_qlayoutitem_qlayoutitem_spaceritem, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QLayoutItem_QLayoutItem, alignment, arginfo_qt_widgets_qlayoutitem_qlayoutitem_alignment, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QLayoutItem_QLayoutItem, controlTypes, arginfo_qt_widgets_qlayoutitem_qlayoutitem_controltypes, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QLayoutItem_QLayoutItem, align, arginfo_qt_widgets_qlayoutitem_qlayoutitem_align, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QLayoutItem_QLayoutItem, setAlign, arginfo_qt_widgets_qlayoutitem_qlayoutitem_setalign, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
