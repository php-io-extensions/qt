
extern zend_class_entry *qt_widgets_qstackedlayout_qstackedlayout_ce;

ZEPHIR_INIT_CLASS(Qt_Widgets_QStackedLayout_QStackedLayout);

PHP_METHOD(Qt_Widgets_QStackedLayout_QStackedLayout, widget);
PHP_METHOD(Qt_Widgets_QStackedLayout_QStackedLayout, staticMetaObject);
PHP_METHOD(Qt_Widgets_QStackedLayout_QStackedLayout, tr);
PHP_METHOD(Qt_Widgets_QStackedLayout_QStackedLayout, new_);
PHP_METHOD(Qt_Widgets_QStackedLayout_QStackedLayout, newQWidget);
PHP_METHOD(Qt_Widgets_QStackedLayout_QStackedLayout, newQLayout);
PHP_METHOD(Qt_Widgets_QStackedLayout_QStackedLayout, addWidget);
PHP_METHOD(Qt_Widgets_QStackedLayout_QStackedLayout, insertWidget);
PHP_METHOD(Qt_Widgets_QStackedLayout_QStackedLayout, currentWidget);
PHP_METHOD(Qt_Widgets_QStackedLayout_QStackedLayout, currentIndex);
PHP_METHOD(Qt_Widgets_QStackedLayout_QStackedLayout, widgetInt);
PHP_METHOD(Qt_Widgets_QStackedLayout_QStackedLayout, count);
PHP_METHOD(Qt_Widgets_QStackedLayout_QStackedLayout, stackingMode);
PHP_METHOD(Qt_Widgets_QStackedLayout_QStackedLayout, setStackingMode);
PHP_METHOD(Qt_Widgets_QStackedLayout_QStackedLayout, addItem);
PHP_METHOD(Qt_Widgets_QStackedLayout_QStackedLayout, sizeHint);
PHP_METHOD(Qt_Widgets_QStackedLayout_QStackedLayout, minimumSize);
PHP_METHOD(Qt_Widgets_QStackedLayout_QStackedLayout, itemAt);
PHP_METHOD(Qt_Widgets_QStackedLayout_QStackedLayout, takeAt);
PHP_METHOD(Qt_Widgets_QStackedLayout_QStackedLayout, setGeometry);
PHP_METHOD(Qt_Widgets_QStackedLayout_QStackedLayout, hasHeightForWidth);
PHP_METHOD(Qt_Widgets_QStackedLayout_QStackedLayout, heightForWidth);
PHP_METHOD(Qt_Widgets_QStackedLayout_QStackedLayout, widgetRemoved);
PHP_METHOD(Qt_Widgets_QStackedLayout_QStackedLayout, currentChanged);
PHP_METHOD(Qt_Widgets_QStackedLayout_QStackedLayout, setCurrentIndex);
PHP_METHOD(Qt_Widgets_QStackedLayout_QStackedLayout, setCurrentWidget);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qstackedlayout_qstackedlayout_widget, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qstackedlayout_qstackedlayout_staticmetaobject, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qstackedlayout_qstackedlayout_tr, 0, 1, IS_STRING, 0)
	ZEND_ARG_INFO(0, s)
	ZEND_ARG_INFO(0, c)
	ZEND_ARG_TYPE_INFO(0, n, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qstackedlayout_qstackedlayout_new_, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qstackedlayout_qstackedlayout_newqwidget, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qstackedlayout_qstackedlayout_newqlayout, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, parentLayout, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qstackedlayout_qstackedlayout_addwidget, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, w, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qstackedlayout_qstackedlayout_insertwidget, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, w, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qstackedlayout_qstackedlayout_currentwidget, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qstackedlayout_qstackedlayout_currentindex, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qstackedlayout_qstackedlayout_widgetint, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qstackedlayout_qstackedlayout_count, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qstackedlayout_qstackedlayout_stackingmode, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qstackedlayout_qstackedlayout_setstackingmode, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, stackingMode, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qstackedlayout_qstackedlayout_additem, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, item, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qstackedlayout_qstackedlayout_sizehint, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qstackedlayout_qstackedlayout_minimumsize, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qstackedlayout_qstackedlayout_itemat, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qstackedlayout_qstackedlayout_takeat, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qstackedlayout_qstackedlayout_setgeometry, 0, 5, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rectX, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rectY, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rectWidth, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rectHeight, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qstackedlayout_qstackedlayout_hasheightforwidth, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qstackedlayout_qstackedlayout_heightforwidth, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qstackedlayout_qstackedlayout_widgetremoved, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qstackedlayout_qstackedlayout_currentchanged, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qstackedlayout_qstackedlayout_setcurrentindex, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qstackedlayout_qstackedlayout_setcurrentwidget, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, w, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_widgets_qstackedlayout_qstackedlayout_method_entry) {
	PHP_ME(Qt_Widgets_QStackedLayout_QStackedLayout, widget, arginfo_qt_widgets_qstackedlayout_qstackedlayout_widget, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QStackedLayout_QStackedLayout, staticMetaObject, arginfo_qt_widgets_qstackedlayout_qstackedlayout_staticmetaobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QStackedLayout_QStackedLayout, tr, arginfo_qt_widgets_qstackedlayout_qstackedlayout_tr, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QStackedLayout_QStackedLayout, new_, arginfo_qt_widgets_qstackedlayout_qstackedlayout_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QStackedLayout_QStackedLayout, newQWidget, arginfo_qt_widgets_qstackedlayout_qstackedlayout_newqwidget, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QStackedLayout_QStackedLayout, newQLayout, arginfo_qt_widgets_qstackedlayout_qstackedlayout_newqlayout, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QStackedLayout_QStackedLayout, addWidget, arginfo_qt_widgets_qstackedlayout_qstackedlayout_addwidget, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QStackedLayout_QStackedLayout, insertWidget, arginfo_qt_widgets_qstackedlayout_qstackedlayout_insertwidget, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QStackedLayout_QStackedLayout, currentWidget, arginfo_qt_widgets_qstackedlayout_qstackedlayout_currentwidget, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QStackedLayout_QStackedLayout, currentIndex, arginfo_qt_widgets_qstackedlayout_qstackedlayout_currentindex, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QStackedLayout_QStackedLayout, widgetInt, arginfo_qt_widgets_qstackedlayout_qstackedlayout_widgetint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QStackedLayout_QStackedLayout, count, arginfo_qt_widgets_qstackedlayout_qstackedlayout_count, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QStackedLayout_QStackedLayout, stackingMode, arginfo_qt_widgets_qstackedlayout_qstackedlayout_stackingmode, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QStackedLayout_QStackedLayout, setStackingMode, arginfo_qt_widgets_qstackedlayout_qstackedlayout_setstackingmode, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QStackedLayout_QStackedLayout, addItem, arginfo_qt_widgets_qstackedlayout_qstackedlayout_additem, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QStackedLayout_QStackedLayout, sizeHint, arginfo_qt_widgets_qstackedlayout_qstackedlayout_sizehint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QStackedLayout_QStackedLayout, minimumSize, arginfo_qt_widgets_qstackedlayout_qstackedlayout_minimumsize, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QStackedLayout_QStackedLayout, itemAt, arginfo_qt_widgets_qstackedlayout_qstackedlayout_itemat, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QStackedLayout_QStackedLayout, takeAt, arginfo_qt_widgets_qstackedlayout_qstackedlayout_takeat, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QStackedLayout_QStackedLayout, setGeometry, arginfo_qt_widgets_qstackedlayout_qstackedlayout_setgeometry, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QStackedLayout_QStackedLayout, hasHeightForWidth, arginfo_qt_widgets_qstackedlayout_qstackedlayout_hasheightforwidth, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QStackedLayout_QStackedLayout, heightForWidth, arginfo_qt_widgets_qstackedlayout_qstackedlayout_heightforwidth, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QStackedLayout_QStackedLayout, widgetRemoved, arginfo_qt_widgets_qstackedlayout_qstackedlayout_widgetremoved, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QStackedLayout_QStackedLayout, currentChanged, arginfo_qt_widgets_qstackedlayout_qstackedlayout_currentchanged, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QStackedLayout_QStackedLayout, setCurrentIndex, arginfo_qt_widgets_qstackedlayout_qstackedlayout_setcurrentindex, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QStackedLayout_QStackedLayout, setCurrentWidget, arginfo_qt_widgets_qstackedlayout_qstackedlayout_setcurrentwidget, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
