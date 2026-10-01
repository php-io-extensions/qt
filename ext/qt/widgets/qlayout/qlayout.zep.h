
extern zend_class_entry *qt_widgets_qlayout_qlayout_ce;

ZEPHIR_INIT_CLASS(Qt_Widgets_QLayout_QLayout);

PHP_METHOD(Qt_Widgets_QLayout_QLayout, staticMetaObject);
PHP_METHOD(Qt_Widgets_QLayout_QLayout, tr);
PHP_METHOD(Qt_Widgets_QLayout_QLayout, new_);
PHP_METHOD(Qt_Widgets_QLayout_QLayout, spacing);
PHP_METHOD(Qt_Widgets_QLayout_QLayout, setSpacing);
PHP_METHOD(Qt_Widgets_QLayout_QLayout, setContentsMargins);
PHP_METHOD(Qt_Widgets_QLayout_QLayout, setContentsMarginsQMargins);
PHP_METHOD(Qt_Widgets_QLayout_QLayout, unsetContentsMargins);
PHP_METHOD(Qt_Widgets_QLayout_QLayout, getContentsMargins);
PHP_METHOD(Qt_Widgets_QLayout_QLayout, contentsMargins);
PHP_METHOD(Qt_Widgets_QLayout_QLayout, contentsRect);
PHP_METHOD(Qt_Widgets_QLayout_QLayout, setAlignment);
PHP_METHOD(Qt_Widgets_QLayout_QLayout, setAlignmentQLayoutQtAlignment);
PHP_METHOD(Qt_Widgets_QLayout_QLayout, setAlignmentQtAlignment);
PHP_METHOD(Qt_Widgets_QLayout_QLayout, setSizeConstraint);
PHP_METHOD(Qt_Widgets_QLayout_QLayout, sizeConstraint);
PHP_METHOD(Qt_Widgets_QLayout_QLayout, setMenuBar);
PHP_METHOD(Qt_Widgets_QLayout_QLayout, menuBar);
PHP_METHOD(Qt_Widgets_QLayout_QLayout, parentWidget);
PHP_METHOD(Qt_Widgets_QLayout_QLayout, invalidate);
PHP_METHOD(Qt_Widgets_QLayout_QLayout, geometry);
PHP_METHOD(Qt_Widgets_QLayout_QLayout, activate);
PHP_METHOD(Qt_Widgets_QLayout_QLayout, update);
PHP_METHOD(Qt_Widgets_QLayout_QLayout, addWidget);
PHP_METHOD(Qt_Widgets_QLayout_QLayout, addItem);
PHP_METHOD(Qt_Widgets_QLayout_QLayout, removeWidget);
PHP_METHOD(Qt_Widgets_QLayout_QLayout, removeItem);
PHP_METHOD(Qt_Widgets_QLayout_QLayout, expandingDirections);
PHP_METHOD(Qt_Widgets_QLayout_QLayout, minimumSize);
PHP_METHOD(Qt_Widgets_QLayout_QLayout, maximumSize);
PHP_METHOD(Qt_Widgets_QLayout_QLayout, setGeometry);
PHP_METHOD(Qt_Widgets_QLayout_QLayout, itemAt);
PHP_METHOD(Qt_Widgets_QLayout_QLayout, takeAt);
PHP_METHOD(Qt_Widgets_QLayout_QLayout, indexOf);
PHP_METHOD(Qt_Widgets_QLayout_QLayout, indexOfQLayoutItem);
PHP_METHOD(Qt_Widgets_QLayout_QLayout, count);
PHP_METHOD(Qt_Widgets_QLayout_QLayout, isEmpty);
PHP_METHOD(Qt_Widgets_QLayout_QLayout, controlTypes);
PHP_METHOD(Qt_Widgets_QLayout_QLayout, replaceWidget);
PHP_METHOD(Qt_Widgets_QLayout_QLayout, totalMinimumHeightForWidth);
PHP_METHOD(Qt_Widgets_QLayout_QLayout, totalHeightForWidth);
PHP_METHOD(Qt_Widgets_QLayout_QLayout, totalMinimumSize);
PHP_METHOD(Qt_Widgets_QLayout_QLayout, totalMaximumSize);
PHP_METHOD(Qt_Widgets_QLayout_QLayout, totalSizeHint);
PHP_METHOD(Qt_Widgets_QLayout_QLayout, layout);
PHP_METHOD(Qt_Widgets_QLayout_QLayout, setEnabled);
PHP_METHOD(Qt_Widgets_QLayout_QLayout, isEnabled);
PHP_METHOD(Qt_Widgets_QLayout_QLayout, closestAcceptableSize);
PHP_METHOD(Qt_Widgets_QLayout_QLayout, widgetEvent);
PHP_METHOD(Qt_Widgets_QLayout_QLayout, childEvent);
PHP_METHOD(Qt_Widgets_QLayout_QLayout, addChildLayout);
PHP_METHOD(Qt_Widgets_QLayout_QLayout, addChildWidget);
PHP_METHOD(Qt_Widgets_QLayout_QLayout, adoptLayout);
PHP_METHOD(Qt_Widgets_QLayout_QLayout, alignmentRect);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qlayout_qlayout_staticmetaobject, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qlayout_qlayout_tr, 0, 1, IS_STRING, 0)
	ZEND_ARG_INFO(0, s)
	ZEND_ARG_INFO(0, c)
	ZEND_ARG_TYPE_INFO(0, n, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qlayout_qlayout_new_, 0, 0, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qlayout_qlayout_spacing, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qlayout_qlayout_setspacing, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qlayout_qlayout_setcontentsmargins, 0, 5, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, left, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, top, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, right, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, bottom, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qlayout_qlayout_setcontentsmarginsqmargins, 0, 5, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, marginsLeft, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, marginsTop, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, marginsRight, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, marginsBottom, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qlayout_qlayout_unsetcontentsmargins, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qlayout_qlayout_getcontentsmargins, 0, 5, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_INFO(0, left)
	ZEND_ARG_INFO(0, top)
	ZEND_ARG_INFO(0, right)
	ZEND_ARG_INFO(0, bottom)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qlayout_qlayout_contentsmargins, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qlayout_qlayout_contentsrect, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qlayout_qlayout_setalignment, 0, 3, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, w, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, alignment, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qlayout_qlayout_setalignmentqlayoutqtalignment, 0, 3, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, l, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, alignment, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qlayout_qlayout_setalignmentqtalignment, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, a, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qlayout_qlayout_setsizeconstraint, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qlayout_qlayout_sizeconstraint, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qlayout_qlayout_setmenubar, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, w, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qlayout_qlayout_menubar, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qlayout_qlayout_parentwidget, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qlayout_qlayout_invalidate, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qlayout_qlayout_geometry, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qlayout_qlayout_activate, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qlayout_qlayout_update, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qlayout_qlayout_addwidget, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, w, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qlayout_qlayout_additem, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qlayout_qlayout_removewidget, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, w, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qlayout_qlayout_removeitem, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qlayout_qlayout_expandingdirections, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qlayout_qlayout_minimumsize, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qlayout_qlayout_maximumsize, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qlayout_qlayout_setgeometry, 0, 5, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0X, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0Y, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0Width, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0Height, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qlayout_qlayout_itemat, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qlayout_qlayout_takeat, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qlayout_qlayout_indexof, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qlayout_qlayout_indexofqlayoutitem, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qlayout_qlayout_count, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qlayout_qlayout_isempty, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qlayout_qlayout_controltypes, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qlayout_qlayout_replacewidget, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, from, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, to, IS_LONG, 0)
	ZEND_ARG_INFO(0, options)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qlayout_qlayout_totalminimumheightforwidth, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, w, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qlayout_qlayout_totalheightforwidth, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, w, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qlayout_qlayout_totalminimumsize, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qlayout_qlayout_totalmaximumsize, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qlayout_qlayout_totalsizehint, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qlayout_qlayout_layout, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qlayout_qlayout_setenabled, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qlayout_qlayout_isenabled, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qlayout_qlayout_closestacceptablesize, 0, 3, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, w, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sWidth, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sHeight, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qlayout_qlayout_widgetevent, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qlayout_qlayout_childevent, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, e, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qlayout_qlayout_addchildlayout, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, l, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qlayout_qlayout_addchildwidget, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, w, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qlayout_qlayout_adoptlayout, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, layout, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qlayout_qlayout_alignmentrect, 0, 5, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0X, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0Y, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0Width, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0Height, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_widgets_qlayout_qlayout_method_entry) {
	PHP_ME(Qt_Widgets_QLayout_QLayout, staticMetaObject, arginfo_qt_widgets_qlayout_qlayout_staticmetaobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QLayout_QLayout, tr, arginfo_qt_widgets_qlayout_qlayout_tr, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QLayout_QLayout, new_, arginfo_qt_widgets_qlayout_qlayout_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QLayout_QLayout, spacing, arginfo_qt_widgets_qlayout_qlayout_spacing, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QLayout_QLayout, setSpacing, arginfo_qt_widgets_qlayout_qlayout_setspacing, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QLayout_QLayout, setContentsMargins, arginfo_qt_widgets_qlayout_qlayout_setcontentsmargins, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QLayout_QLayout, setContentsMarginsQMargins, arginfo_qt_widgets_qlayout_qlayout_setcontentsmarginsqmargins, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QLayout_QLayout, unsetContentsMargins, arginfo_qt_widgets_qlayout_qlayout_unsetcontentsmargins, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QLayout_QLayout, getContentsMargins, arginfo_qt_widgets_qlayout_qlayout_getcontentsmargins, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QLayout_QLayout, contentsMargins, arginfo_qt_widgets_qlayout_qlayout_contentsmargins, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QLayout_QLayout, contentsRect, arginfo_qt_widgets_qlayout_qlayout_contentsrect, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QLayout_QLayout, setAlignment, arginfo_qt_widgets_qlayout_qlayout_setalignment, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QLayout_QLayout, setAlignmentQLayoutQtAlignment, arginfo_qt_widgets_qlayout_qlayout_setalignmentqlayoutqtalignment, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QLayout_QLayout, setAlignmentQtAlignment, arginfo_qt_widgets_qlayout_qlayout_setalignmentqtalignment, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QLayout_QLayout, setSizeConstraint, arginfo_qt_widgets_qlayout_qlayout_setsizeconstraint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QLayout_QLayout, sizeConstraint, arginfo_qt_widgets_qlayout_qlayout_sizeconstraint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QLayout_QLayout, setMenuBar, arginfo_qt_widgets_qlayout_qlayout_setmenubar, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QLayout_QLayout, menuBar, arginfo_qt_widgets_qlayout_qlayout_menubar, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QLayout_QLayout, parentWidget, arginfo_qt_widgets_qlayout_qlayout_parentwidget, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QLayout_QLayout, invalidate, arginfo_qt_widgets_qlayout_qlayout_invalidate, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QLayout_QLayout, geometry, arginfo_qt_widgets_qlayout_qlayout_geometry, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QLayout_QLayout, activate, arginfo_qt_widgets_qlayout_qlayout_activate, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QLayout_QLayout, update, arginfo_qt_widgets_qlayout_qlayout_update, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QLayout_QLayout, addWidget, arginfo_qt_widgets_qlayout_qlayout_addwidget, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QLayout_QLayout, addItem, arginfo_qt_widgets_qlayout_qlayout_additem, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QLayout_QLayout, removeWidget, arginfo_qt_widgets_qlayout_qlayout_removewidget, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QLayout_QLayout, removeItem, arginfo_qt_widgets_qlayout_qlayout_removeitem, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QLayout_QLayout, expandingDirections, arginfo_qt_widgets_qlayout_qlayout_expandingdirections, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QLayout_QLayout, minimumSize, arginfo_qt_widgets_qlayout_qlayout_minimumsize, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QLayout_QLayout, maximumSize, arginfo_qt_widgets_qlayout_qlayout_maximumsize, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QLayout_QLayout, setGeometry, arginfo_qt_widgets_qlayout_qlayout_setgeometry, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QLayout_QLayout, itemAt, arginfo_qt_widgets_qlayout_qlayout_itemat, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QLayout_QLayout, takeAt, arginfo_qt_widgets_qlayout_qlayout_takeat, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QLayout_QLayout, indexOf, arginfo_qt_widgets_qlayout_qlayout_indexof, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QLayout_QLayout, indexOfQLayoutItem, arginfo_qt_widgets_qlayout_qlayout_indexofqlayoutitem, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QLayout_QLayout, count, arginfo_qt_widgets_qlayout_qlayout_count, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QLayout_QLayout, isEmpty, arginfo_qt_widgets_qlayout_qlayout_isempty, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QLayout_QLayout, controlTypes, arginfo_qt_widgets_qlayout_qlayout_controltypes, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QLayout_QLayout, replaceWidget, arginfo_qt_widgets_qlayout_qlayout_replacewidget, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QLayout_QLayout, totalMinimumHeightForWidth, arginfo_qt_widgets_qlayout_qlayout_totalminimumheightforwidth, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QLayout_QLayout, totalHeightForWidth, arginfo_qt_widgets_qlayout_qlayout_totalheightforwidth, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QLayout_QLayout, totalMinimumSize, arginfo_qt_widgets_qlayout_qlayout_totalminimumsize, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QLayout_QLayout, totalMaximumSize, arginfo_qt_widgets_qlayout_qlayout_totalmaximumsize, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QLayout_QLayout, totalSizeHint, arginfo_qt_widgets_qlayout_qlayout_totalsizehint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QLayout_QLayout, layout, arginfo_qt_widgets_qlayout_qlayout_layout, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QLayout_QLayout, setEnabled, arginfo_qt_widgets_qlayout_qlayout_setenabled, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QLayout_QLayout, isEnabled, arginfo_qt_widgets_qlayout_qlayout_isenabled, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QLayout_QLayout, closestAcceptableSize, arginfo_qt_widgets_qlayout_qlayout_closestacceptablesize, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QLayout_QLayout, widgetEvent, arginfo_qt_widgets_qlayout_qlayout_widgetevent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QLayout_QLayout, childEvent, arginfo_qt_widgets_qlayout_qlayout_childevent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QLayout_QLayout, addChildLayout, arginfo_qt_widgets_qlayout_qlayout_addchildlayout, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QLayout_QLayout, addChildWidget, arginfo_qt_widgets_qlayout_qlayout_addchildwidget, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QLayout_QLayout, adoptLayout, arginfo_qt_widgets_qlayout_qlayout_adoptlayout, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QLayout_QLayout, alignmentRect, arginfo_qt_widgets_qlayout_qlayout_alignmentrect, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
