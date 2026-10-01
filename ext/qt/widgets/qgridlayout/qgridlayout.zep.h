
extern zend_class_entry *qt_widgets_qgridlayout_qgridlayout_ce;

ZEPHIR_INIT_CLASS(Qt_Widgets_QGridLayout_QGridLayout);

PHP_METHOD(Qt_Widgets_QGridLayout_QGridLayout, staticMetaObject);
PHP_METHOD(Qt_Widgets_QGridLayout_QGridLayout, tr);
PHP_METHOD(Qt_Widgets_QGridLayout_QGridLayout, new_);
PHP_METHOD(Qt_Widgets_QGridLayout_QGridLayout, sizeHint);
PHP_METHOD(Qt_Widgets_QGridLayout_QGridLayout, minimumSize);
PHP_METHOD(Qt_Widgets_QGridLayout_QGridLayout, maximumSize);
PHP_METHOD(Qt_Widgets_QGridLayout_QGridLayout, setHorizontalSpacing);
PHP_METHOD(Qt_Widgets_QGridLayout_QGridLayout, horizontalSpacing);
PHP_METHOD(Qt_Widgets_QGridLayout_QGridLayout, setVerticalSpacing);
PHP_METHOD(Qt_Widgets_QGridLayout_QGridLayout, verticalSpacing);
PHP_METHOD(Qt_Widgets_QGridLayout_QGridLayout, setSpacing);
PHP_METHOD(Qt_Widgets_QGridLayout_QGridLayout, spacing);
PHP_METHOD(Qt_Widgets_QGridLayout_QGridLayout, setRowStretch);
PHP_METHOD(Qt_Widgets_QGridLayout_QGridLayout, setColumnStretch);
PHP_METHOD(Qt_Widgets_QGridLayout_QGridLayout, rowStretch);
PHP_METHOD(Qt_Widgets_QGridLayout_QGridLayout, columnStretch);
PHP_METHOD(Qt_Widgets_QGridLayout_QGridLayout, setRowMinimumHeight);
PHP_METHOD(Qt_Widgets_QGridLayout_QGridLayout, setColumnMinimumWidth);
PHP_METHOD(Qt_Widgets_QGridLayout_QGridLayout, rowMinimumHeight);
PHP_METHOD(Qt_Widgets_QGridLayout_QGridLayout, columnMinimumWidth);
PHP_METHOD(Qt_Widgets_QGridLayout_QGridLayout, columnCount);
PHP_METHOD(Qt_Widgets_QGridLayout_QGridLayout, rowCount);
PHP_METHOD(Qt_Widgets_QGridLayout_QGridLayout, cellRect);
PHP_METHOD(Qt_Widgets_QGridLayout_QGridLayout, hasHeightForWidth);
PHP_METHOD(Qt_Widgets_QGridLayout_QGridLayout, heightForWidth);
PHP_METHOD(Qt_Widgets_QGridLayout_QGridLayout, minimumHeightForWidth);
PHP_METHOD(Qt_Widgets_QGridLayout_QGridLayout, expandingDirections);
PHP_METHOD(Qt_Widgets_QGridLayout_QGridLayout, invalidate);
PHP_METHOD(Qt_Widgets_QGridLayout_QGridLayout, addWidget);
PHP_METHOD(Qt_Widgets_QGridLayout_QGridLayout, addWidgetQWidgetIntIntQtAlignment);
PHP_METHOD(Qt_Widgets_QGridLayout_QGridLayout, addWidgetQWidgetIntIntIntIntQtAlignment);
PHP_METHOD(Qt_Widgets_QGridLayout_QGridLayout, addLayout);
PHP_METHOD(Qt_Widgets_QGridLayout_QGridLayout, addLayoutQLayoutIntIntIntIntQtAlignment);
PHP_METHOD(Qt_Widgets_QGridLayout_QGridLayout, setOriginCorner);
PHP_METHOD(Qt_Widgets_QGridLayout_QGridLayout, originCorner);
PHP_METHOD(Qt_Widgets_QGridLayout_QGridLayout, itemAt);
PHP_METHOD(Qt_Widgets_QGridLayout_QGridLayout, itemAtPosition);
PHP_METHOD(Qt_Widgets_QGridLayout_QGridLayout, takeAt);
PHP_METHOD(Qt_Widgets_QGridLayout_QGridLayout, count);
PHP_METHOD(Qt_Widgets_QGridLayout_QGridLayout, setGeometry);
PHP_METHOD(Qt_Widgets_QGridLayout_QGridLayout, addItem);
PHP_METHOD(Qt_Widgets_QGridLayout_QGridLayout, setDefaultPositioning);
PHP_METHOD(Qt_Widgets_QGridLayout_QGridLayout, getItemPosition);
PHP_METHOD(Qt_Widgets_QGridLayout_QGridLayout, addItemQLayoutItem);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgridlayout_qgridlayout_staticmetaobject, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgridlayout_qgridlayout_tr, 0, 1, IS_STRING, 0)
	ZEND_ARG_INFO(0, s)
	ZEND_ARG_INFO(0, c)
	ZEND_ARG_TYPE_INFO(0, n, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgridlayout_qgridlayout_new_, 0, 0, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgridlayout_qgridlayout_sizehint, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgridlayout_qgridlayout_minimumsize, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgridlayout_qgridlayout_maximumsize, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgridlayout_qgridlayout_sethorizontalspacing, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, spacing, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgridlayout_qgridlayout_horizontalspacing, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgridlayout_qgridlayout_setverticalspacing, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, spacing, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgridlayout_qgridlayout_verticalspacing, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgridlayout_qgridlayout_setspacing, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, spacing, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgridlayout_qgridlayout_spacing, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgridlayout_qgridlayout_setrowstretch, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, row, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, stretch, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgridlayout_qgridlayout_setcolumnstretch, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, column, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, stretch, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgridlayout_qgridlayout_rowstretch, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, row, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgridlayout_qgridlayout_columnstretch, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, column, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgridlayout_qgridlayout_setrowminimumheight, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, row, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, minSize, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgridlayout_qgridlayout_setcolumnminimumwidth, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, column, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, minSize, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgridlayout_qgridlayout_rowminimumheight, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, row, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgridlayout_qgridlayout_columnminimumwidth, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, column, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgridlayout_qgridlayout_columncount, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgridlayout_qgridlayout_rowcount, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgridlayout_qgridlayout_cellrect, 0, 3, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, row, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, column, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgridlayout_qgridlayout_hasheightforwidth, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgridlayout_qgridlayout_heightforwidth, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgridlayout_qgridlayout_minimumheightforwidth, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgridlayout_qgridlayout_expandingdirections, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgridlayout_qgridlayout_invalidate, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgridlayout_qgridlayout_addwidget, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, w, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgridlayout_qgridlayout_addwidgetqwidgetintintqtalignment, 0, 4, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, row, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, column, IS_LONG, 0)
	ZEND_ARG_INFO(0, arg3)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgridlayout_qgridlayout_addwidgetqwidgetintintintintqtalignment, 0, 6, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, row, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, column, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rowSpan, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, columnSpan, IS_LONG, 0)
	ZEND_ARG_INFO(0, arg5)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgridlayout_qgridlayout_addlayout, 0, 4, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, row, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, column, IS_LONG, 0)
	ZEND_ARG_INFO(0, arg3)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgridlayout_qgridlayout_addlayoutqlayoutintintintintqtalignment, 0, 6, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, row, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, column, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rowSpan, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, columnSpan, IS_LONG, 0)
	ZEND_ARG_INFO(0, arg5)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgridlayout_qgridlayout_setorigincorner, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgridlayout_qgridlayout_origincorner, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgridlayout_qgridlayout_itemat, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgridlayout_qgridlayout_itematposition, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, row, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, column, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgridlayout_qgridlayout_takeat, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgridlayout_qgridlayout_count, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgridlayout_qgridlayout_setgeometry, 0, 5, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0X, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0Y, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0Width, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0Height, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgridlayout_qgridlayout_additem, 0, 4, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, item, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, row, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, column, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rowSpan, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, columnSpan, IS_LONG, 0)
	ZEND_ARG_INFO(0, arg5)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgridlayout_qgridlayout_setdefaultpositioning, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, n, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, orient, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgridlayout_qgridlayout_getitemposition, 0, 6, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, idx, IS_LONG, 0)
	ZEND_ARG_INFO(0, row)
	ZEND_ARG_INFO(0, column)
	ZEND_ARG_INFO(0, rowSpan)
	ZEND_ARG_INFO(0, columnSpan)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgridlayout_qgridlayout_additemqlayoutitem, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_widgets_qgridlayout_qgridlayout_method_entry) {
	PHP_ME(Qt_Widgets_QGridLayout_QGridLayout, staticMetaObject, arginfo_qt_widgets_qgridlayout_qgridlayout_staticmetaobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGridLayout_QGridLayout, tr, arginfo_qt_widgets_qgridlayout_qgridlayout_tr, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGridLayout_QGridLayout, new_, arginfo_qt_widgets_qgridlayout_qgridlayout_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGridLayout_QGridLayout, sizeHint, arginfo_qt_widgets_qgridlayout_qgridlayout_sizehint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGridLayout_QGridLayout, minimumSize, arginfo_qt_widgets_qgridlayout_qgridlayout_minimumsize, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGridLayout_QGridLayout, maximumSize, arginfo_qt_widgets_qgridlayout_qgridlayout_maximumsize, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGridLayout_QGridLayout, setHorizontalSpacing, arginfo_qt_widgets_qgridlayout_qgridlayout_sethorizontalspacing, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGridLayout_QGridLayout, horizontalSpacing, arginfo_qt_widgets_qgridlayout_qgridlayout_horizontalspacing, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGridLayout_QGridLayout, setVerticalSpacing, arginfo_qt_widgets_qgridlayout_qgridlayout_setverticalspacing, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGridLayout_QGridLayout, verticalSpacing, arginfo_qt_widgets_qgridlayout_qgridlayout_verticalspacing, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGridLayout_QGridLayout, setSpacing, arginfo_qt_widgets_qgridlayout_qgridlayout_setspacing, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGridLayout_QGridLayout, spacing, arginfo_qt_widgets_qgridlayout_qgridlayout_spacing, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGridLayout_QGridLayout, setRowStretch, arginfo_qt_widgets_qgridlayout_qgridlayout_setrowstretch, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGridLayout_QGridLayout, setColumnStretch, arginfo_qt_widgets_qgridlayout_qgridlayout_setcolumnstretch, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGridLayout_QGridLayout, rowStretch, arginfo_qt_widgets_qgridlayout_qgridlayout_rowstretch, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGridLayout_QGridLayout, columnStretch, arginfo_qt_widgets_qgridlayout_qgridlayout_columnstretch, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGridLayout_QGridLayout, setRowMinimumHeight, arginfo_qt_widgets_qgridlayout_qgridlayout_setrowminimumheight, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGridLayout_QGridLayout, setColumnMinimumWidth, arginfo_qt_widgets_qgridlayout_qgridlayout_setcolumnminimumwidth, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGridLayout_QGridLayout, rowMinimumHeight, arginfo_qt_widgets_qgridlayout_qgridlayout_rowminimumheight, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGridLayout_QGridLayout, columnMinimumWidth, arginfo_qt_widgets_qgridlayout_qgridlayout_columnminimumwidth, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGridLayout_QGridLayout, columnCount, arginfo_qt_widgets_qgridlayout_qgridlayout_columncount, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGridLayout_QGridLayout, rowCount, arginfo_qt_widgets_qgridlayout_qgridlayout_rowcount, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGridLayout_QGridLayout, cellRect, arginfo_qt_widgets_qgridlayout_qgridlayout_cellrect, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGridLayout_QGridLayout, hasHeightForWidth, arginfo_qt_widgets_qgridlayout_qgridlayout_hasheightforwidth, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGridLayout_QGridLayout, heightForWidth, arginfo_qt_widgets_qgridlayout_qgridlayout_heightforwidth, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGridLayout_QGridLayout, minimumHeightForWidth, arginfo_qt_widgets_qgridlayout_qgridlayout_minimumheightforwidth, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGridLayout_QGridLayout, expandingDirections, arginfo_qt_widgets_qgridlayout_qgridlayout_expandingdirections, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGridLayout_QGridLayout, invalidate, arginfo_qt_widgets_qgridlayout_qgridlayout_invalidate, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGridLayout_QGridLayout, addWidget, arginfo_qt_widgets_qgridlayout_qgridlayout_addwidget, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGridLayout_QGridLayout, addWidgetQWidgetIntIntQtAlignment, arginfo_qt_widgets_qgridlayout_qgridlayout_addwidgetqwidgetintintqtalignment, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGridLayout_QGridLayout, addWidgetQWidgetIntIntIntIntQtAlignment, arginfo_qt_widgets_qgridlayout_qgridlayout_addwidgetqwidgetintintintintqtalignment, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGridLayout_QGridLayout, addLayout, arginfo_qt_widgets_qgridlayout_qgridlayout_addlayout, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGridLayout_QGridLayout, addLayoutQLayoutIntIntIntIntQtAlignment, arginfo_qt_widgets_qgridlayout_qgridlayout_addlayoutqlayoutintintintintqtalignment, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGridLayout_QGridLayout, setOriginCorner, arginfo_qt_widgets_qgridlayout_qgridlayout_setorigincorner, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGridLayout_QGridLayout, originCorner, arginfo_qt_widgets_qgridlayout_qgridlayout_origincorner, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGridLayout_QGridLayout, itemAt, arginfo_qt_widgets_qgridlayout_qgridlayout_itemat, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGridLayout_QGridLayout, itemAtPosition, arginfo_qt_widgets_qgridlayout_qgridlayout_itematposition, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGridLayout_QGridLayout, takeAt, arginfo_qt_widgets_qgridlayout_qgridlayout_takeat, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGridLayout_QGridLayout, count, arginfo_qt_widgets_qgridlayout_qgridlayout_count, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGridLayout_QGridLayout, setGeometry, arginfo_qt_widgets_qgridlayout_qgridlayout_setgeometry, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGridLayout_QGridLayout, addItem, arginfo_qt_widgets_qgridlayout_qgridlayout_additem, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGridLayout_QGridLayout, setDefaultPositioning, arginfo_qt_widgets_qgridlayout_qgridlayout_setdefaultpositioning, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGridLayout_QGridLayout, getItemPosition, arginfo_qt_widgets_qgridlayout_qgridlayout_getitemposition, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGridLayout_QGridLayout, addItemQLayoutItem, arginfo_qt_widgets_qgridlayout_qgridlayout_additemqlayoutitem, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
