
extern zend_class_entry *qt_widgets_qboxlayout_qboxlayout_ce;

ZEPHIR_INIT_CLASS(Qt_Widgets_QBoxLayout_QBoxLayout);

PHP_METHOD(Qt_Widgets_QBoxLayout_QBoxLayout, staticMetaObject);
PHP_METHOD(Qt_Widgets_QBoxLayout_QBoxLayout, tr);
PHP_METHOD(Qt_Widgets_QBoxLayout_QBoxLayout, new_);
PHP_METHOD(Qt_Widgets_QBoxLayout_QBoxLayout, direction);
PHP_METHOD(Qt_Widgets_QBoxLayout_QBoxLayout, setDirection);
PHP_METHOD(Qt_Widgets_QBoxLayout_QBoxLayout, addSpacing);
PHP_METHOD(Qt_Widgets_QBoxLayout_QBoxLayout, addStretch);
PHP_METHOD(Qt_Widgets_QBoxLayout_QBoxLayout, addSpacerItem);
PHP_METHOD(Qt_Widgets_QBoxLayout_QBoxLayout, addWidget);
PHP_METHOD(Qt_Widgets_QBoxLayout_QBoxLayout, addLayout);
PHP_METHOD(Qt_Widgets_QBoxLayout_QBoxLayout, addStrut);
PHP_METHOD(Qt_Widgets_QBoxLayout_QBoxLayout, addItem);
PHP_METHOD(Qt_Widgets_QBoxLayout_QBoxLayout, insertSpacing);
PHP_METHOD(Qt_Widgets_QBoxLayout_QBoxLayout, insertStretch);
PHP_METHOD(Qt_Widgets_QBoxLayout_QBoxLayout, insertSpacerItem);
PHP_METHOD(Qt_Widgets_QBoxLayout_QBoxLayout, insertWidget);
PHP_METHOD(Qt_Widgets_QBoxLayout_QBoxLayout, insertLayout);
PHP_METHOD(Qt_Widgets_QBoxLayout_QBoxLayout, insertItem);
PHP_METHOD(Qt_Widgets_QBoxLayout_QBoxLayout, spacing);
PHP_METHOD(Qt_Widgets_QBoxLayout_QBoxLayout, setSpacing);
PHP_METHOD(Qt_Widgets_QBoxLayout_QBoxLayout, setStretchFactor);
PHP_METHOD(Qt_Widgets_QBoxLayout_QBoxLayout, setStretchFactorQLayoutInt);
PHP_METHOD(Qt_Widgets_QBoxLayout_QBoxLayout, setStretch);
PHP_METHOD(Qt_Widgets_QBoxLayout_QBoxLayout, stretch);
PHP_METHOD(Qt_Widgets_QBoxLayout_QBoxLayout, sizeHint);
PHP_METHOD(Qt_Widgets_QBoxLayout_QBoxLayout, minimumSize);
PHP_METHOD(Qt_Widgets_QBoxLayout_QBoxLayout, maximumSize);
PHP_METHOD(Qt_Widgets_QBoxLayout_QBoxLayout, hasHeightForWidth);
PHP_METHOD(Qt_Widgets_QBoxLayout_QBoxLayout, heightForWidth);
PHP_METHOD(Qt_Widgets_QBoxLayout_QBoxLayout, minimumHeightForWidth);
PHP_METHOD(Qt_Widgets_QBoxLayout_QBoxLayout, expandingDirections);
PHP_METHOD(Qt_Widgets_QBoxLayout_QBoxLayout, invalidate);
PHP_METHOD(Qt_Widgets_QBoxLayout_QBoxLayout, itemAt);
PHP_METHOD(Qt_Widgets_QBoxLayout_QBoxLayout, takeAt);
PHP_METHOD(Qt_Widgets_QBoxLayout_QBoxLayout, count);
PHP_METHOD(Qt_Widgets_QBoxLayout_QBoxLayout, setGeometry);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qboxlayout_qboxlayout_staticmetaobject, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qboxlayout_qboxlayout_tr, 0, 1, IS_STRING, 0)
	ZEND_ARG_INFO(0, s)
	ZEND_ARG_INFO(0, c)
	ZEND_ARG_TYPE_INFO(0, n, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qboxlayout_qboxlayout_new_, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qboxlayout_qboxlayout_direction, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qboxlayout_qboxlayout_setdirection, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qboxlayout_qboxlayout_addspacing, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, size, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qboxlayout_qboxlayout_addstretch, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, stretch, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qboxlayout_qboxlayout_addspaceritem, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, spacerItem, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qboxlayout_qboxlayout_addwidget, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, stretch, IS_LONG, 0)
	ZEND_ARG_INFO(0, alignment)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qboxlayout_qboxlayout_addlayout, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, layout, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, stretch, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qboxlayout_qboxlayout_addstrut, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qboxlayout_qboxlayout_additem, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qboxlayout_qboxlayout_insertspacing, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, size, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qboxlayout_qboxlayout_insertstretch, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, stretch, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qboxlayout_qboxlayout_insertspaceritem, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, spacerItem, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qboxlayout_qboxlayout_insertwidget, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, widget, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, stretch, IS_LONG, 0)
	ZEND_ARG_INFO(0, alignment)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qboxlayout_qboxlayout_insertlayout, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, layout, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, stretch, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qboxlayout_qboxlayout_insertitem, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg1, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qboxlayout_qboxlayout_spacing, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qboxlayout_qboxlayout_setspacing, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, spacing, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qboxlayout_qboxlayout_setstretchfactor, 0, 3, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, w, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, stretch, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qboxlayout_qboxlayout_setstretchfactorqlayoutint, 0, 3, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, l, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, stretch, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qboxlayout_qboxlayout_setstretch, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, stretch, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qboxlayout_qboxlayout_stretch, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qboxlayout_qboxlayout_sizehint, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qboxlayout_qboxlayout_minimumsize, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qboxlayout_qboxlayout_maximumsize, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qboxlayout_qboxlayout_hasheightforwidth, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qboxlayout_qboxlayout_heightforwidth, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qboxlayout_qboxlayout_minimumheightforwidth, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qboxlayout_qboxlayout_expandingdirections, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qboxlayout_qboxlayout_invalidate, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qboxlayout_qboxlayout_itemat, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qboxlayout_qboxlayout_takeat, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qboxlayout_qboxlayout_count, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qboxlayout_qboxlayout_setgeometry, 0, 5, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0X, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0Y, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0Width, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0Height, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_widgets_qboxlayout_qboxlayout_method_entry) {
	PHP_ME(Qt_Widgets_QBoxLayout_QBoxLayout, staticMetaObject, arginfo_qt_widgets_qboxlayout_qboxlayout_staticmetaobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QBoxLayout_QBoxLayout, tr, arginfo_qt_widgets_qboxlayout_qboxlayout_tr, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QBoxLayout_QBoxLayout, new_, arginfo_qt_widgets_qboxlayout_qboxlayout_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QBoxLayout_QBoxLayout, direction, arginfo_qt_widgets_qboxlayout_qboxlayout_direction, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QBoxLayout_QBoxLayout, setDirection, arginfo_qt_widgets_qboxlayout_qboxlayout_setdirection, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QBoxLayout_QBoxLayout, addSpacing, arginfo_qt_widgets_qboxlayout_qboxlayout_addspacing, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QBoxLayout_QBoxLayout, addStretch, arginfo_qt_widgets_qboxlayout_qboxlayout_addstretch, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QBoxLayout_QBoxLayout, addSpacerItem, arginfo_qt_widgets_qboxlayout_qboxlayout_addspaceritem, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QBoxLayout_QBoxLayout, addWidget, arginfo_qt_widgets_qboxlayout_qboxlayout_addwidget, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QBoxLayout_QBoxLayout, addLayout, arginfo_qt_widgets_qboxlayout_qboxlayout_addlayout, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QBoxLayout_QBoxLayout, addStrut, arginfo_qt_widgets_qboxlayout_qboxlayout_addstrut, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QBoxLayout_QBoxLayout, addItem, arginfo_qt_widgets_qboxlayout_qboxlayout_additem, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QBoxLayout_QBoxLayout, insertSpacing, arginfo_qt_widgets_qboxlayout_qboxlayout_insertspacing, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QBoxLayout_QBoxLayout, insertStretch, arginfo_qt_widgets_qboxlayout_qboxlayout_insertstretch, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QBoxLayout_QBoxLayout, insertSpacerItem, arginfo_qt_widgets_qboxlayout_qboxlayout_insertspaceritem, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QBoxLayout_QBoxLayout, insertWidget, arginfo_qt_widgets_qboxlayout_qboxlayout_insertwidget, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QBoxLayout_QBoxLayout, insertLayout, arginfo_qt_widgets_qboxlayout_qboxlayout_insertlayout, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QBoxLayout_QBoxLayout, insertItem, arginfo_qt_widgets_qboxlayout_qboxlayout_insertitem, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QBoxLayout_QBoxLayout, spacing, arginfo_qt_widgets_qboxlayout_qboxlayout_spacing, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QBoxLayout_QBoxLayout, setSpacing, arginfo_qt_widgets_qboxlayout_qboxlayout_setspacing, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QBoxLayout_QBoxLayout, setStretchFactor, arginfo_qt_widgets_qboxlayout_qboxlayout_setstretchfactor, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QBoxLayout_QBoxLayout, setStretchFactorQLayoutInt, arginfo_qt_widgets_qboxlayout_qboxlayout_setstretchfactorqlayoutint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QBoxLayout_QBoxLayout, setStretch, arginfo_qt_widgets_qboxlayout_qboxlayout_setstretch, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QBoxLayout_QBoxLayout, stretch, arginfo_qt_widgets_qboxlayout_qboxlayout_stretch, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QBoxLayout_QBoxLayout, sizeHint, arginfo_qt_widgets_qboxlayout_qboxlayout_sizehint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QBoxLayout_QBoxLayout, minimumSize, arginfo_qt_widgets_qboxlayout_qboxlayout_minimumsize, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QBoxLayout_QBoxLayout, maximumSize, arginfo_qt_widgets_qboxlayout_qboxlayout_maximumsize, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QBoxLayout_QBoxLayout, hasHeightForWidth, arginfo_qt_widgets_qboxlayout_qboxlayout_hasheightforwidth, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QBoxLayout_QBoxLayout, heightForWidth, arginfo_qt_widgets_qboxlayout_qboxlayout_heightforwidth, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QBoxLayout_QBoxLayout, minimumHeightForWidth, arginfo_qt_widgets_qboxlayout_qboxlayout_minimumheightforwidth, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QBoxLayout_QBoxLayout, expandingDirections, arginfo_qt_widgets_qboxlayout_qboxlayout_expandingdirections, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QBoxLayout_QBoxLayout, invalidate, arginfo_qt_widgets_qboxlayout_qboxlayout_invalidate, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QBoxLayout_QBoxLayout, itemAt, arginfo_qt_widgets_qboxlayout_qboxlayout_itemat, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QBoxLayout_QBoxLayout, takeAt, arginfo_qt_widgets_qboxlayout_qboxlayout_takeat, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QBoxLayout_QBoxLayout, count, arginfo_qt_widgets_qboxlayout_qboxlayout_count, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QBoxLayout_QBoxLayout, setGeometry, arginfo_qt_widgets_qboxlayout_qboxlayout_setgeometry, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
