
extern zend_class_entry *qt_widgets_qgraphicsgridlayout_qgraphicsgridlayout_ce;

ZEPHIR_INIT_CLASS(Qt_Widgets_QGraphicsGridLayout_QGraphicsGridLayout);

PHP_METHOD(Qt_Widgets_QGraphicsGridLayout_QGraphicsGridLayout, new_);
PHP_METHOD(Qt_Widgets_QGraphicsGridLayout_QGraphicsGridLayout, addItem);
PHP_METHOD(Qt_Widgets_QGraphicsGridLayout_QGraphicsGridLayout, addItemQGraphicsLayoutItemIntIntQtAlignment);
PHP_METHOD(Qt_Widgets_QGraphicsGridLayout_QGraphicsGridLayout, setHorizontalSpacing);
PHP_METHOD(Qt_Widgets_QGraphicsGridLayout_QGraphicsGridLayout, horizontalSpacing);
PHP_METHOD(Qt_Widgets_QGraphicsGridLayout_QGraphicsGridLayout, setVerticalSpacing);
PHP_METHOD(Qt_Widgets_QGraphicsGridLayout_QGraphicsGridLayout, verticalSpacing);
PHP_METHOD(Qt_Widgets_QGraphicsGridLayout_QGraphicsGridLayout, setSpacing);
PHP_METHOD(Qt_Widgets_QGraphicsGridLayout_QGraphicsGridLayout, setRowSpacing);
PHP_METHOD(Qt_Widgets_QGraphicsGridLayout_QGraphicsGridLayout, rowSpacing);
PHP_METHOD(Qt_Widgets_QGraphicsGridLayout_QGraphicsGridLayout, setColumnSpacing);
PHP_METHOD(Qt_Widgets_QGraphicsGridLayout_QGraphicsGridLayout, columnSpacing);
PHP_METHOD(Qt_Widgets_QGraphicsGridLayout_QGraphicsGridLayout, setRowStretchFactor);
PHP_METHOD(Qt_Widgets_QGraphicsGridLayout_QGraphicsGridLayout, rowStretchFactor);
PHP_METHOD(Qt_Widgets_QGraphicsGridLayout_QGraphicsGridLayout, setColumnStretchFactor);
PHP_METHOD(Qt_Widgets_QGraphicsGridLayout_QGraphicsGridLayout, columnStretchFactor);
PHP_METHOD(Qt_Widgets_QGraphicsGridLayout_QGraphicsGridLayout, setRowMinimumHeight);
PHP_METHOD(Qt_Widgets_QGraphicsGridLayout_QGraphicsGridLayout, rowMinimumHeight);
PHP_METHOD(Qt_Widgets_QGraphicsGridLayout_QGraphicsGridLayout, setRowPreferredHeight);
PHP_METHOD(Qt_Widgets_QGraphicsGridLayout_QGraphicsGridLayout, rowPreferredHeight);
PHP_METHOD(Qt_Widgets_QGraphicsGridLayout_QGraphicsGridLayout, setRowMaximumHeight);
PHP_METHOD(Qt_Widgets_QGraphicsGridLayout_QGraphicsGridLayout, rowMaximumHeight);
PHP_METHOD(Qt_Widgets_QGraphicsGridLayout_QGraphicsGridLayout, setRowFixedHeight);
PHP_METHOD(Qt_Widgets_QGraphicsGridLayout_QGraphicsGridLayout, setColumnMinimumWidth);
PHP_METHOD(Qt_Widgets_QGraphicsGridLayout_QGraphicsGridLayout, columnMinimumWidth);
PHP_METHOD(Qt_Widgets_QGraphicsGridLayout_QGraphicsGridLayout, setColumnPreferredWidth);
PHP_METHOD(Qt_Widgets_QGraphicsGridLayout_QGraphicsGridLayout, columnPreferredWidth);
PHP_METHOD(Qt_Widgets_QGraphicsGridLayout_QGraphicsGridLayout, setColumnMaximumWidth);
PHP_METHOD(Qt_Widgets_QGraphicsGridLayout_QGraphicsGridLayout, columnMaximumWidth);
PHP_METHOD(Qt_Widgets_QGraphicsGridLayout_QGraphicsGridLayout, setColumnFixedWidth);
PHP_METHOD(Qt_Widgets_QGraphicsGridLayout_QGraphicsGridLayout, setRowAlignment);
PHP_METHOD(Qt_Widgets_QGraphicsGridLayout_QGraphicsGridLayout, rowAlignment);
PHP_METHOD(Qt_Widgets_QGraphicsGridLayout_QGraphicsGridLayout, setColumnAlignment);
PHP_METHOD(Qt_Widgets_QGraphicsGridLayout_QGraphicsGridLayout, columnAlignment);
PHP_METHOD(Qt_Widgets_QGraphicsGridLayout_QGraphicsGridLayout, setAlignment);
PHP_METHOD(Qt_Widgets_QGraphicsGridLayout_QGraphicsGridLayout, alignment);
PHP_METHOD(Qt_Widgets_QGraphicsGridLayout_QGraphicsGridLayout, rowCount);
PHP_METHOD(Qt_Widgets_QGraphicsGridLayout_QGraphicsGridLayout, columnCount);
PHP_METHOD(Qt_Widgets_QGraphicsGridLayout_QGraphicsGridLayout, itemAt);
PHP_METHOD(Qt_Widgets_QGraphicsGridLayout_QGraphicsGridLayout, count);
PHP_METHOD(Qt_Widgets_QGraphicsGridLayout_QGraphicsGridLayout, itemAtInt);
PHP_METHOD(Qt_Widgets_QGraphicsGridLayout_QGraphicsGridLayout, removeAt);
PHP_METHOD(Qt_Widgets_QGraphicsGridLayout_QGraphicsGridLayout, removeItem);
PHP_METHOD(Qt_Widgets_QGraphicsGridLayout_QGraphicsGridLayout, invalidate);
PHP_METHOD(Qt_Widgets_QGraphicsGridLayout_QGraphicsGridLayout, setGeometry);
PHP_METHOD(Qt_Widgets_QGraphicsGridLayout_QGraphicsGridLayout, sizeHint);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicsgridlayout_qgraphicsgridlayout_new_, 0, 0, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicsgridlayout_qgraphicsgridlayout_additem, 0, 6, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, item, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, row, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, column, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rowSpan, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, columnSpan, IS_LONG, 0)
	ZEND_ARG_INFO(0, alignment)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicsgridlayout_qgraphicsgridlayout_additemqgraphicslayoutitemintintqtalignment, 0, 4, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, item, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, row, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, column, IS_LONG, 0)
	ZEND_ARG_INFO(0, alignment)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicsgridlayout_qgraphicsgridlayout_sethorizontalspacing, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, spacing, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicsgridlayout_qgraphicsgridlayout_horizontalspacing, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicsgridlayout_qgraphicsgridlayout_setverticalspacing, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, spacing, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicsgridlayout_qgraphicsgridlayout_verticalspacing, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicsgridlayout_qgraphicsgridlayout_setspacing, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, spacing, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicsgridlayout_qgraphicsgridlayout_setrowspacing, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, row, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, spacing, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicsgridlayout_qgraphicsgridlayout_rowspacing, 0, 2, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, row, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicsgridlayout_qgraphicsgridlayout_setcolumnspacing, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, column, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, spacing, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicsgridlayout_qgraphicsgridlayout_columnspacing, 0, 2, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, column, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicsgridlayout_qgraphicsgridlayout_setrowstretchfactor, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, row, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, stretch, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicsgridlayout_qgraphicsgridlayout_rowstretchfactor, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, row, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicsgridlayout_qgraphicsgridlayout_setcolumnstretchfactor, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, column, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, stretch, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicsgridlayout_qgraphicsgridlayout_columnstretchfactor, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, column, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicsgridlayout_qgraphicsgridlayout_setrowminimumheight, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, row, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, height, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicsgridlayout_qgraphicsgridlayout_rowminimumheight, 0, 2, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, row, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicsgridlayout_qgraphicsgridlayout_setrowpreferredheight, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, row, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, height, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicsgridlayout_qgraphicsgridlayout_rowpreferredheight, 0, 2, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, row, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicsgridlayout_qgraphicsgridlayout_setrowmaximumheight, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, row, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, height, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicsgridlayout_qgraphicsgridlayout_rowmaximumheight, 0, 2, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, row, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicsgridlayout_qgraphicsgridlayout_setrowfixedheight, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, row, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, height, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicsgridlayout_qgraphicsgridlayout_setcolumnminimumwidth, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, column, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicsgridlayout_qgraphicsgridlayout_columnminimumwidth, 0, 2, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, column, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicsgridlayout_qgraphicsgridlayout_setcolumnpreferredwidth, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, column, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicsgridlayout_qgraphicsgridlayout_columnpreferredwidth, 0, 2, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, column, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicsgridlayout_qgraphicsgridlayout_setcolumnmaximumwidth, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, column, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicsgridlayout_qgraphicsgridlayout_columnmaximumwidth, 0, 2, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, column, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicsgridlayout_qgraphicsgridlayout_setcolumnfixedwidth, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, column, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicsgridlayout_qgraphicsgridlayout_setrowalignment, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, row, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, alignment, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicsgridlayout_qgraphicsgridlayout_rowalignment, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, row, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicsgridlayout_qgraphicsgridlayout_setcolumnalignment, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, column, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, alignment, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicsgridlayout_qgraphicsgridlayout_columnalignment, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, column, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicsgridlayout_qgraphicsgridlayout_setalignment, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, item, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, alignment, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicsgridlayout_qgraphicsgridlayout_alignment, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, item, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicsgridlayout_qgraphicsgridlayout_rowcount, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicsgridlayout_qgraphicsgridlayout_columncount, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicsgridlayout_qgraphicsgridlayout_itemat, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, row, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, column, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicsgridlayout_qgraphicsgridlayout_count, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicsgridlayout_qgraphicsgridlayout_itematint, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicsgridlayout_qgraphicsgridlayout_removeat, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicsgridlayout_qgraphicsgridlayout_removeitem, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, item, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicsgridlayout_qgraphicsgridlayout_invalidate, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicsgridlayout_qgraphicsgridlayout_setgeometry, 0, 5, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rectX, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, rectY, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, rectWidth, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, rectHeight, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicsgridlayout_qgraphicsgridlayout_sizehint, 0, 2, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, which, IS_LONG, 0)
	ZEND_ARG_INFO(0, constraintWidth)
	ZEND_ARG_INFO(0, constraintHeight)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_widgets_qgraphicsgridlayout_qgraphicsgridlayout_method_entry) {
	PHP_ME(Qt_Widgets_QGraphicsGridLayout_QGraphicsGridLayout, new_, arginfo_qt_widgets_qgraphicsgridlayout_qgraphicsgridlayout_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsGridLayout_QGraphicsGridLayout, addItem, arginfo_qt_widgets_qgraphicsgridlayout_qgraphicsgridlayout_additem, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsGridLayout_QGraphicsGridLayout, addItemQGraphicsLayoutItemIntIntQtAlignment, arginfo_qt_widgets_qgraphicsgridlayout_qgraphicsgridlayout_additemqgraphicslayoutitemintintqtalignment, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsGridLayout_QGraphicsGridLayout, setHorizontalSpacing, arginfo_qt_widgets_qgraphicsgridlayout_qgraphicsgridlayout_sethorizontalspacing, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsGridLayout_QGraphicsGridLayout, horizontalSpacing, arginfo_qt_widgets_qgraphicsgridlayout_qgraphicsgridlayout_horizontalspacing, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsGridLayout_QGraphicsGridLayout, setVerticalSpacing, arginfo_qt_widgets_qgraphicsgridlayout_qgraphicsgridlayout_setverticalspacing, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsGridLayout_QGraphicsGridLayout, verticalSpacing, arginfo_qt_widgets_qgraphicsgridlayout_qgraphicsgridlayout_verticalspacing, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsGridLayout_QGraphicsGridLayout, setSpacing, arginfo_qt_widgets_qgraphicsgridlayout_qgraphicsgridlayout_setspacing, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsGridLayout_QGraphicsGridLayout, setRowSpacing, arginfo_qt_widgets_qgraphicsgridlayout_qgraphicsgridlayout_setrowspacing, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsGridLayout_QGraphicsGridLayout, rowSpacing, arginfo_qt_widgets_qgraphicsgridlayout_qgraphicsgridlayout_rowspacing, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsGridLayout_QGraphicsGridLayout, setColumnSpacing, arginfo_qt_widgets_qgraphicsgridlayout_qgraphicsgridlayout_setcolumnspacing, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsGridLayout_QGraphicsGridLayout, columnSpacing, arginfo_qt_widgets_qgraphicsgridlayout_qgraphicsgridlayout_columnspacing, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsGridLayout_QGraphicsGridLayout, setRowStretchFactor, arginfo_qt_widgets_qgraphicsgridlayout_qgraphicsgridlayout_setrowstretchfactor, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsGridLayout_QGraphicsGridLayout, rowStretchFactor, arginfo_qt_widgets_qgraphicsgridlayout_qgraphicsgridlayout_rowstretchfactor, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsGridLayout_QGraphicsGridLayout, setColumnStretchFactor, arginfo_qt_widgets_qgraphicsgridlayout_qgraphicsgridlayout_setcolumnstretchfactor, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsGridLayout_QGraphicsGridLayout, columnStretchFactor, arginfo_qt_widgets_qgraphicsgridlayout_qgraphicsgridlayout_columnstretchfactor, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsGridLayout_QGraphicsGridLayout, setRowMinimumHeight, arginfo_qt_widgets_qgraphicsgridlayout_qgraphicsgridlayout_setrowminimumheight, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsGridLayout_QGraphicsGridLayout, rowMinimumHeight, arginfo_qt_widgets_qgraphicsgridlayout_qgraphicsgridlayout_rowminimumheight, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsGridLayout_QGraphicsGridLayout, setRowPreferredHeight, arginfo_qt_widgets_qgraphicsgridlayout_qgraphicsgridlayout_setrowpreferredheight, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsGridLayout_QGraphicsGridLayout, rowPreferredHeight, arginfo_qt_widgets_qgraphicsgridlayout_qgraphicsgridlayout_rowpreferredheight, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsGridLayout_QGraphicsGridLayout, setRowMaximumHeight, arginfo_qt_widgets_qgraphicsgridlayout_qgraphicsgridlayout_setrowmaximumheight, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsGridLayout_QGraphicsGridLayout, rowMaximumHeight, arginfo_qt_widgets_qgraphicsgridlayout_qgraphicsgridlayout_rowmaximumheight, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsGridLayout_QGraphicsGridLayout, setRowFixedHeight, arginfo_qt_widgets_qgraphicsgridlayout_qgraphicsgridlayout_setrowfixedheight, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsGridLayout_QGraphicsGridLayout, setColumnMinimumWidth, arginfo_qt_widgets_qgraphicsgridlayout_qgraphicsgridlayout_setcolumnminimumwidth, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsGridLayout_QGraphicsGridLayout, columnMinimumWidth, arginfo_qt_widgets_qgraphicsgridlayout_qgraphicsgridlayout_columnminimumwidth, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsGridLayout_QGraphicsGridLayout, setColumnPreferredWidth, arginfo_qt_widgets_qgraphicsgridlayout_qgraphicsgridlayout_setcolumnpreferredwidth, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsGridLayout_QGraphicsGridLayout, columnPreferredWidth, arginfo_qt_widgets_qgraphicsgridlayout_qgraphicsgridlayout_columnpreferredwidth, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsGridLayout_QGraphicsGridLayout, setColumnMaximumWidth, arginfo_qt_widgets_qgraphicsgridlayout_qgraphicsgridlayout_setcolumnmaximumwidth, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsGridLayout_QGraphicsGridLayout, columnMaximumWidth, arginfo_qt_widgets_qgraphicsgridlayout_qgraphicsgridlayout_columnmaximumwidth, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsGridLayout_QGraphicsGridLayout, setColumnFixedWidth, arginfo_qt_widgets_qgraphicsgridlayout_qgraphicsgridlayout_setcolumnfixedwidth, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsGridLayout_QGraphicsGridLayout, setRowAlignment, arginfo_qt_widgets_qgraphicsgridlayout_qgraphicsgridlayout_setrowalignment, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsGridLayout_QGraphicsGridLayout, rowAlignment, arginfo_qt_widgets_qgraphicsgridlayout_qgraphicsgridlayout_rowalignment, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsGridLayout_QGraphicsGridLayout, setColumnAlignment, arginfo_qt_widgets_qgraphicsgridlayout_qgraphicsgridlayout_setcolumnalignment, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsGridLayout_QGraphicsGridLayout, columnAlignment, arginfo_qt_widgets_qgraphicsgridlayout_qgraphicsgridlayout_columnalignment, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsGridLayout_QGraphicsGridLayout, setAlignment, arginfo_qt_widgets_qgraphicsgridlayout_qgraphicsgridlayout_setalignment, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsGridLayout_QGraphicsGridLayout, alignment, arginfo_qt_widgets_qgraphicsgridlayout_qgraphicsgridlayout_alignment, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsGridLayout_QGraphicsGridLayout, rowCount, arginfo_qt_widgets_qgraphicsgridlayout_qgraphicsgridlayout_rowcount, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsGridLayout_QGraphicsGridLayout, columnCount, arginfo_qt_widgets_qgraphicsgridlayout_qgraphicsgridlayout_columncount, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsGridLayout_QGraphicsGridLayout, itemAt, arginfo_qt_widgets_qgraphicsgridlayout_qgraphicsgridlayout_itemat, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsGridLayout_QGraphicsGridLayout, count, arginfo_qt_widgets_qgraphicsgridlayout_qgraphicsgridlayout_count, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsGridLayout_QGraphicsGridLayout, itemAtInt, arginfo_qt_widgets_qgraphicsgridlayout_qgraphicsgridlayout_itematint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsGridLayout_QGraphicsGridLayout, removeAt, arginfo_qt_widgets_qgraphicsgridlayout_qgraphicsgridlayout_removeat, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsGridLayout_QGraphicsGridLayout, removeItem, arginfo_qt_widgets_qgraphicsgridlayout_qgraphicsgridlayout_removeitem, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsGridLayout_QGraphicsGridLayout, invalidate, arginfo_qt_widgets_qgraphicsgridlayout_qgraphicsgridlayout_invalidate, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsGridLayout_QGraphicsGridLayout, setGeometry, arginfo_qt_widgets_qgraphicsgridlayout_qgraphicsgridlayout_setgeometry, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsGridLayout_QGraphicsGridLayout, sizeHint, arginfo_qt_widgets_qgraphicsgridlayout_qgraphicsgridlayout_sizehint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
