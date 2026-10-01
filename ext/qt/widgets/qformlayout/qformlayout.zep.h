
extern zend_class_entry *qt_widgets_qformlayout_qformlayout_ce;

ZEPHIR_INIT_CLASS(Qt_Widgets_QFormLayout_QFormLayout);

PHP_METHOD(Qt_Widgets_QFormLayout_QFormLayout, staticMetaObject);
PHP_METHOD(Qt_Widgets_QFormLayout_QFormLayout, tr);
PHP_METHOD(Qt_Widgets_QFormLayout_QFormLayout, new_);
PHP_METHOD(Qt_Widgets_QFormLayout_QFormLayout, setFieldGrowthPolicy);
PHP_METHOD(Qt_Widgets_QFormLayout_QFormLayout, fieldGrowthPolicy);
PHP_METHOD(Qt_Widgets_QFormLayout_QFormLayout, setRowWrapPolicy);
PHP_METHOD(Qt_Widgets_QFormLayout_QFormLayout, rowWrapPolicy);
PHP_METHOD(Qt_Widgets_QFormLayout_QFormLayout, setLabelAlignment);
PHP_METHOD(Qt_Widgets_QFormLayout_QFormLayout, labelAlignment);
PHP_METHOD(Qt_Widgets_QFormLayout_QFormLayout, setFormAlignment);
PHP_METHOD(Qt_Widgets_QFormLayout_QFormLayout, formAlignment);
PHP_METHOD(Qt_Widgets_QFormLayout_QFormLayout, setHorizontalSpacing);
PHP_METHOD(Qt_Widgets_QFormLayout_QFormLayout, horizontalSpacing);
PHP_METHOD(Qt_Widgets_QFormLayout_QFormLayout, setVerticalSpacing);
PHP_METHOD(Qt_Widgets_QFormLayout_QFormLayout, verticalSpacing);
PHP_METHOD(Qt_Widgets_QFormLayout_QFormLayout, spacing);
PHP_METHOD(Qt_Widgets_QFormLayout_QFormLayout, setSpacing);
PHP_METHOD(Qt_Widgets_QFormLayout_QFormLayout, addRow);
PHP_METHOD(Qt_Widgets_QFormLayout_QFormLayout, addRowQWidgetQLayout);
PHP_METHOD(Qt_Widgets_QFormLayout_QFormLayout, addRowQStringQWidget);
PHP_METHOD(Qt_Widgets_QFormLayout_QFormLayout, addRowQStringQLayout);
PHP_METHOD(Qt_Widgets_QFormLayout_QFormLayout, addRowQWidget);
PHP_METHOD(Qt_Widgets_QFormLayout_QFormLayout, addRowQLayout);
PHP_METHOD(Qt_Widgets_QFormLayout_QFormLayout, insertRow);
PHP_METHOD(Qt_Widgets_QFormLayout_QFormLayout, insertRowIntQWidgetQLayout);
PHP_METHOD(Qt_Widgets_QFormLayout_QFormLayout, insertRowIntQStringQWidget);
PHP_METHOD(Qt_Widgets_QFormLayout_QFormLayout, insertRowIntQStringQLayout);
PHP_METHOD(Qt_Widgets_QFormLayout_QFormLayout, insertRowIntQWidget);
PHP_METHOD(Qt_Widgets_QFormLayout_QFormLayout, insertRowIntQLayout);
PHP_METHOD(Qt_Widgets_QFormLayout_QFormLayout, removeRow);
PHP_METHOD(Qt_Widgets_QFormLayout_QFormLayout, removeRowQWidget);
PHP_METHOD(Qt_Widgets_QFormLayout_QFormLayout, removeRowQLayout);
PHP_METHOD(Qt_Widgets_QFormLayout_QFormLayout, takeRow);
PHP_METHOD(Qt_Widgets_QFormLayout_QFormLayout, takeRowQWidget);
PHP_METHOD(Qt_Widgets_QFormLayout_QFormLayout, takeRowQLayout);
PHP_METHOD(Qt_Widgets_QFormLayout_QFormLayout, setItem);
PHP_METHOD(Qt_Widgets_QFormLayout_QFormLayout, setWidget);
PHP_METHOD(Qt_Widgets_QFormLayout_QFormLayout, setLayout);
PHP_METHOD(Qt_Widgets_QFormLayout_QFormLayout, setRowVisible);
PHP_METHOD(Qt_Widgets_QFormLayout_QFormLayout, setRowVisibleQWidgetBool);
PHP_METHOD(Qt_Widgets_QFormLayout_QFormLayout, setRowVisibleQLayoutBool);
PHP_METHOD(Qt_Widgets_QFormLayout_QFormLayout, isRowVisible);
PHP_METHOD(Qt_Widgets_QFormLayout_QFormLayout, isRowVisibleQWidget);
PHP_METHOD(Qt_Widgets_QFormLayout_QFormLayout, isRowVisibleQLayout);
PHP_METHOD(Qt_Widgets_QFormLayout_QFormLayout, itemAt);
PHP_METHOD(Qt_Widgets_QFormLayout_QFormLayout, getItemPosition);
PHP_METHOD(Qt_Widgets_QFormLayout_QFormLayout, getWidgetPosition);
PHP_METHOD(Qt_Widgets_QFormLayout_QFormLayout, getLayoutPosition);
PHP_METHOD(Qt_Widgets_QFormLayout_QFormLayout, labelForField);
PHP_METHOD(Qt_Widgets_QFormLayout_QFormLayout, labelForFieldQLayout);
PHP_METHOD(Qt_Widgets_QFormLayout_QFormLayout, addItem);
PHP_METHOD(Qt_Widgets_QFormLayout_QFormLayout, itemAtInt);
PHP_METHOD(Qt_Widgets_QFormLayout_QFormLayout, takeAt);
PHP_METHOD(Qt_Widgets_QFormLayout_QFormLayout, setGeometry);
PHP_METHOD(Qt_Widgets_QFormLayout_QFormLayout, minimumSize);
PHP_METHOD(Qt_Widgets_QFormLayout_QFormLayout, sizeHint);
PHP_METHOD(Qt_Widgets_QFormLayout_QFormLayout, invalidate);
PHP_METHOD(Qt_Widgets_QFormLayout_QFormLayout, hasHeightForWidth);
PHP_METHOD(Qt_Widgets_QFormLayout_QFormLayout, heightForWidth);
PHP_METHOD(Qt_Widgets_QFormLayout_QFormLayout, expandingDirections);
PHP_METHOD(Qt_Widgets_QFormLayout_QFormLayout, count);
PHP_METHOD(Qt_Widgets_QFormLayout_QFormLayout, rowCount);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qformlayout_qformlayout_staticmetaobject, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qformlayout_qformlayout_tr, 0, 1, IS_STRING, 0)
	ZEND_ARG_INFO(0, s)
	ZEND_ARG_INFO(0, c)
	ZEND_ARG_TYPE_INFO(0, n, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qformlayout_qformlayout_new_, 0, 0, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qformlayout_qformlayout_setfieldgrowthpolicy, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, policy, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qformlayout_qformlayout_fieldgrowthpolicy, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qformlayout_qformlayout_setrowwrappolicy, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, policy, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qformlayout_qformlayout_rowwrappolicy, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qformlayout_qformlayout_setlabelalignment, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, alignment, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qformlayout_qformlayout_labelalignment, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qformlayout_qformlayout_setformalignment, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, alignment, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qformlayout_qformlayout_formalignment, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qformlayout_qformlayout_sethorizontalspacing, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, spacing, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qformlayout_qformlayout_horizontalspacing, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qformlayout_qformlayout_setverticalspacing, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, spacing, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qformlayout_qformlayout_verticalspacing, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qformlayout_qformlayout_spacing, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qformlayout_qformlayout_setspacing, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qformlayout_qformlayout_addrow, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, label, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, field, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qformlayout_qformlayout_addrowqwidgetqlayout, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, label, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, field, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qformlayout_qformlayout_addrowqstringqwidget, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, labelText, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, field, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qformlayout_qformlayout_addrowqstringqlayout, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, labelText, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, field, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qformlayout_qformlayout_addrowqwidget, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, widget, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qformlayout_qformlayout_addrowqlayout, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, layout, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qformlayout_qformlayout_insertrow, 0, 4, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, row, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, label, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, field, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qformlayout_qformlayout_insertrowintqwidgetqlayout, 0, 4, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, row, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, label, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, field, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qformlayout_qformlayout_insertrowintqstringqwidget, 0, 4, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, row, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, labelText, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, field, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qformlayout_qformlayout_insertrowintqstringqlayout, 0, 4, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, row, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, labelText, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, field, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qformlayout_qformlayout_insertrowintqwidget, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, row, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, widget, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qformlayout_qformlayout_insertrowintqlayout, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, row, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, layout, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qformlayout_qformlayout_removerow, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, row, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qformlayout_qformlayout_removerowqwidget, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, widget, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qformlayout_qformlayout_removerowqlayout, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, layout, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qformlayout_qformlayout_takerow, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, row, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qformlayout_qformlayout_takerowqwidget, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, widget, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qformlayout_qformlayout_takerowqlayout, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, layout, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qformlayout_qformlayout_setitem, 0, 4, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, row, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, role, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, item, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qformlayout_qformlayout_setwidget, 0, 4, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, row, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, role, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, widget, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qformlayout_qformlayout_setlayout, 0, 4, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, row, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, role, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, layout, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qformlayout_qformlayout_setrowvisible, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, row, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, on, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qformlayout_qformlayout_setrowvisibleqwidgetbool, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, widget, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, on, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qformlayout_qformlayout_setrowvisibleqlayoutbool, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, layout, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, on, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qformlayout_qformlayout_isrowvisible, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, row, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qformlayout_qformlayout_isrowvisibleqwidget, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, widget, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qformlayout_qformlayout_isrowvisibleqlayout, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, layout, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qformlayout_qformlayout_itemat, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, row, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, role, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qformlayout_qformlayout_getitemposition, 0, 4, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
	ZEND_ARG_INFO(0, rowPtr)
	ZEND_ARG_INFO(0, rolePtr)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qformlayout_qformlayout_getwidgetposition, 0, 4, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, widget, IS_LONG, 0)
	ZEND_ARG_INFO(0, rowPtr)
	ZEND_ARG_INFO(0, rolePtr)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qformlayout_qformlayout_getlayoutposition, 0, 4, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, layout, IS_LONG, 0)
	ZEND_ARG_INFO(0, rowPtr)
	ZEND_ARG_INFO(0, rolePtr)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qformlayout_qformlayout_labelforfield, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, field, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qformlayout_qformlayout_labelforfieldqlayout, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, field, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qformlayout_qformlayout_additem, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, item, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qformlayout_qformlayout_itematint, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qformlayout_qformlayout_takeat, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qformlayout_qformlayout_setgeometry, 0, 5, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rectX, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rectY, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rectWidth, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rectHeight, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qformlayout_qformlayout_minimumsize, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qformlayout_qformlayout_sizehint, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qformlayout_qformlayout_invalidate, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qformlayout_qformlayout_hasheightforwidth, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qformlayout_qformlayout_heightforwidth, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qformlayout_qformlayout_expandingdirections, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qformlayout_qformlayout_count, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qformlayout_qformlayout_rowcount, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_widgets_qformlayout_qformlayout_method_entry) {
	PHP_ME(Qt_Widgets_QFormLayout_QFormLayout, staticMetaObject, arginfo_qt_widgets_qformlayout_qformlayout_staticmetaobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QFormLayout_QFormLayout, tr, arginfo_qt_widgets_qformlayout_qformlayout_tr, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QFormLayout_QFormLayout, new_, arginfo_qt_widgets_qformlayout_qformlayout_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QFormLayout_QFormLayout, setFieldGrowthPolicy, arginfo_qt_widgets_qformlayout_qformlayout_setfieldgrowthpolicy, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QFormLayout_QFormLayout, fieldGrowthPolicy, arginfo_qt_widgets_qformlayout_qformlayout_fieldgrowthpolicy, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QFormLayout_QFormLayout, setRowWrapPolicy, arginfo_qt_widgets_qformlayout_qformlayout_setrowwrappolicy, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QFormLayout_QFormLayout, rowWrapPolicy, arginfo_qt_widgets_qformlayout_qformlayout_rowwrappolicy, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QFormLayout_QFormLayout, setLabelAlignment, arginfo_qt_widgets_qformlayout_qformlayout_setlabelalignment, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QFormLayout_QFormLayout, labelAlignment, arginfo_qt_widgets_qformlayout_qformlayout_labelalignment, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QFormLayout_QFormLayout, setFormAlignment, arginfo_qt_widgets_qformlayout_qformlayout_setformalignment, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QFormLayout_QFormLayout, formAlignment, arginfo_qt_widgets_qformlayout_qformlayout_formalignment, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QFormLayout_QFormLayout, setHorizontalSpacing, arginfo_qt_widgets_qformlayout_qformlayout_sethorizontalspacing, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QFormLayout_QFormLayout, horizontalSpacing, arginfo_qt_widgets_qformlayout_qformlayout_horizontalspacing, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QFormLayout_QFormLayout, setVerticalSpacing, arginfo_qt_widgets_qformlayout_qformlayout_setverticalspacing, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QFormLayout_QFormLayout, verticalSpacing, arginfo_qt_widgets_qformlayout_qformlayout_verticalspacing, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QFormLayout_QFormLayout, spacing, arginfo_qt_widgets_qformlayout_qformlayout_spacing, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QFormLayout_QFormLayout, setSpacing, arginfo_qt_widgets_qformlayout_qformlayout_setspacing, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QFormLayout_QFormLayout, addRow, arginfo_qt_widgets_qformlayout_qformlayout_addrow, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QFormLayout_QFormLayout, addRowQWidgetQLayout, arginfo_qt_widgets_qformlayout_qformlayout_addrowqwidgetqlayout, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QFormLayout_QFormLayout, addRowQStringQWidget, arginfo_qt_widgets_qformlayout_qformlayout_addrowqstringqwidget, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QFormLayout_QFormLayout, addRowQStringQLayout, arginfo_qt_widgets_qformlayout_qformlayout_addrowqstringqlayout, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QFormLayout_QFormLayout, addRowQWidget, arginfo_qt_widgets_qformlayout_qformlayout_addrowqwidget, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QFormLayout_QFormLayout, addRowQLayout, arginfo_qt_widgets_qformlayout_qformlayout_addrowqlayout, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QFormLayout_QFormLayout, insertRow, arginfo_qt_widgets_qformlayout_qformlayout_insertrow, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QFormLayout_QFormLayout, insertRowIntQWidgetQLayout, arginfo_qt_widgets_qformlayout_qformlayout_insertrowintqwidgetqlayout, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QFormLayout_QFormLayout, insertRowIntQStringQWidget, arginfo_qt_widgets_qformlayout_qformlayout_insertrowintqstringqwidget, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QFormLayout_QFormLayout, insertRowIntQStringQLayout, arginfo_qt_widgets_qformlayout_qformlayout_insertrowintqstringqlayout, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QFormLayout_QFormLayout, insertRowIntQWidget, arginfo_qt_widgets_qformlayout_qformlayout_insertrowintqwidget, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QFormLayout_QFormLayout, insertRowIntQLayout, arginfo_qt_widgets_qformlayout_qformlayout_insertrowintqlayout, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QFormLayout_QFormLayout, removeRow, arginfo_qt_widgets_qformlayout_qformlayout_removerow, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QFormLayout_QFormLayout, removeRowQWidget, arginfo_qt_widgets_qformlayout_qformlayout_removerowqwidget, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QFormLayout_QFormLayout, removeRowQLayout, arginfo_qt_widgets_qformlayout_qformlayout_removerowqlayout, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QFormLayout_QFormLayout, takeRow, arginfo_qt_widgets_qformlayout_qformlayout_takerow, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QFormLayout_QFormLayout, takeRowQWidget, arginfo_qt_widgets_qformlayout_qformlayout_takerowqwidget, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QFormLayout_QFormLayout, takeRowQLayout, arginfo_qt_widgets_qformlayout_qformlayout_takerowqlayout, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QFormLayout_QFormLayout, setItem, arginfo_qt_widgets_qformlayout_qformlayout_setitem, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QFormLayout_QFormLayout, setWidget, arginfo_qt_widgets_qformlayout_qformlayout_setwidget, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QFormLayout_QFormLayout, setLayout, arginfo_qt_widgets_qformlayout_qformlayout_setlayout, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QFormLayout_QFormLayout, setRowVisible, arginfo_qt_widgets_qformlayout_qformlayout_setrowvisible, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QFormLayout_QFormLayout, setRowVisibleQWidgetBool, arginfo_qt_widgets_qformlayout_qformlayout_setrowvisibleqwidgetbool, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QFormLayout_QFormLayout, setRowVisibleQLayoutBool, arginfo_qt_widgets_qformlayout_qformlayout_setrowvisibleqlayoutbool, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QFormLayout_QFormLayout, isRowVisible, arginfo_qt_widgets_qformlayout_qformlayout_isrowvisible, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QFormLayout_QFormLayout, isRowVisibleQWidget, arginfo_qt_widgets_qformlayout_qformlayout_isrowvisibleqwidget, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QFormLayout_QFormLayout, isRowVisibleQLayout, arginfo_qt_widgets_qformlayout_qformlayout_isrowvisibleqlayout, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QFormLayout_QFormLayout, itemAt, arginfo_qt_widgets_qformlayout_qformlayout_itemat, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QFormLayout_QFormLayout, getItemPosition, arginfo_qt_widgets_qformlayout_qformlayout_getitemposition, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QFormLayout_QFormLayout, getWidgetPosition, arginfo_qt_widgets_qformlayout_qformlayout_getwidgetposition, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QFormLayout_QFormLayout, getLayoutPosition, arginfo_qt_widgets_qformlayout_qformlayout_getlayoutposition, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QFormLayout_QFormLayout, labelForField, arginfo_qt_widgets_qformlayout_qformlayout_labelforfield, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QFormLayout_QFormLayout, labelForFieldQLayout, arginfo_qt_widgets_qformlayout_qformlayout_labelforfieldqlayout, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QFormLayout_QFormLayout, addItem, arginfo_qt_widgets_qformlayout_qformlayout_additem, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QFormLayout_QFormLayout, itemAtInt, arginfo_qt_widgets_qformlayout_qformlayout_itematint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QFormLayout_QFormLayout, takeAt, arginfo_qt_widgets_qformlayout_qformlayout_takeat, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QFormLayout_QFormLayout, setGeometry, arginfo_qt_widgets_qformlayout_qformlayout_setgeometry, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QFormLayout_QFormLayout, minimumSize, arginfo_qt_widgets_qformlayout_qformlayout_minimumsize, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QFormLayout_QFormLayout, sizeHint, arginfo_qt_widgets_qformlayout_qformlayout_sizehint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QFormLayout_QFormLayout, invalidate, arginfo_qt_widgets_qformlayout_qformlayout_invalidate, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QFormLayout_QFormLayout, hasHeightForWidth, arginfo_qt_widgets_qformlayout_qformlayout_hasheightforwidth, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QFormLayout_QFormLayout, heightForWidth, arginfo_qt_widgets_qformlayout_qformlayout_heightforwidth, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QFormLayout_QFormLayout, expandingDirections, arginfo_qt_widgets_qformlayout_qformlayout_expandingdirections, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QFormLayout_QFormLayout, count, arginfo_qt_widgets_qformlayout_qformlayout_count, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QFormLayout_QFormLayout, rowCount, arginfo_qt_widgets_qformlayout_qformlayout_rowcount, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
