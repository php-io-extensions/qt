
extern zend_class_entry *qt_widgets_qwidgetitem_qwidgetitem_ce;

ZEPHIR_INIT_CLASS(Qt_Widgets_QWidgetItem_QWidgetItem);

PHP_METHOD(Qt_Widgets_QWidgetItem_QWidgetItem, new_);
PHP_METHOD(Qt_Widgets_QWidgetItem_QWidgetItem, sizeHint);
PHP_METHOD(Qt_Widgets_QWidgetItem_QWidgetItem, minimumSize);
PHP_METHOD(Qt_Widgets_QWidgetItem_QWidgetItem, maximumSize);
PHP_METHOD(Qt_Widgets_QWidgetItem_QWidgetItem, expandingDirections);
PHP_METHOD(Qt_Widgets_QWidgetItem_QWidgetItem, isEmpty);
PHP_METHOD(Qt_Widgets_QWidgetItem_QWidgetItem, setGeometry);
PHP_METHOD(Qt_Widgets_QWidgetItem_QWidgetItem, geometry);
PHP_METHOD(Qt_Widgets_QWidgetItem_QWidgetItem, widget);
PHP_METHOD(Qt_Widgets_QWidgetItem_QWidgetItem, hasHeightForWidth);
PHP_METHOD(Qt_Widgets_QWidgetItem_QWidgetItem, heightForWidth);
PHP_METHOD(Qt_Widgets_QWidgetItem_QWidgetItem, minimumHeightForWidth);
PHP_METHOD(Qt_Widgets_QWidgetItem_QWidgetItem, controlTypes);
PHP_METHOD(Qt_Widgets_QWidgetItem_QWidgetItem, wid);
PHP_METHOD(Qt_Widgets_QWidgetItem_QWidgetItem, setWid);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qwidgetitem_qwidgetitem_new_, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, w, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qwidgetitem_qwidgetitem_sizehint, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qwidgetitem_qwidgetitem_minimumsize, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qwidgetitem_qwidgetitem_maximumsize, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qwidgetitem_qwidgetitem_expandingdirections, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qwidgetitem_qwidgetitem_isempty, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qwidgetitem_qwidgetitem_setgeometry, 0, 5, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0X, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0Y, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0Width, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0Height, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qwidgetitem_qwidgetitem_geometry, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qwidgetitem_qwidgetitem_widget, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qwidgetitem_qwidgetitem_hasheightforwidth, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qwidgetitem_qwidgetitem_heightforwidth, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qwidgetitem_qwidgetitem_minimumheightforwidth, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qwidgetitem_qwidgetitem_controltypes, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qwidgetitem_qwidgetitem_wid, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qwidgetitem_qwidgetitem_setwid, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_widgets_qwidgetitem_qwidgetitem_method_entry) {
	PHP_ME(Qt_Widgets_QWidgetItem_QWidgetItem, new_, arginfo_qt_widgets_qwidgetitem_qwidgetitem_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QWidgetItem_QWidgetItem, sizeHint, arginfo_qt_widgets_qwidgetitem_qwidgetitem_sizehint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QWidgetItem_QWidgetItem, minimumSize, arginfo_qt_widgets_qwidgetitem_qwidgetitem_minimumsize, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QWidgetItem_QWidgetItem, maximumSize, arginfo_qt_widgets_qwidgetitem_qwidgetitem_maximumsize, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QWidgetItem_QWidgetItem, expandingDirections, arginfo_qt_widgets_qwidgetitem_qwidgetitem_expandingdirections, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QWidgetItem_QWidgetItem, isEmpty, arginfo_qt_widgets_qwidgetitem_qwidgetitem_isempty, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QWidgetItem_QWidgetItem, setGeometry, arginfo_qt_widgets_qwidgetitem_qwidgetitem_setgeometry, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QWidgetItem_QWidgetItem, geometry, arginfo_qt_widgets_qwidgetitem_qwidgetitem_geometry, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QWidgetItem_QWidgetItem, widget, arginfo_qt_widgets_qwidgetitem_qwidgetitem_widget, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QWidgetItem_QWidgetItem, hasHeightForWidth, arginfo_qt_widgets_qwidgetitem_qwidgetitem_hasheightforwidth, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QWidgetItem_QWidgetItem, heightForWidth, arginfo_qt_widgets_qwidgetitem_qwidgetitem_heightforwidth, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QWidgetItem_QWidgetItem, minimumHeightForWidth, arginfo_qt_widgets_qwidgetitem_qwidgetitem_minimumheightforwidth, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QWidgetItem_QWidgetItem, controlTypes, arginfo_qt_widgets_qwidgetitem_qwidgetitem_controltypes, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QWidgetItem_QWidgetItem, wid, arginfo_qt_widgets_qwidgetitem_qwidgetitem_wid, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QWidgetItem_QWidgetItem, setWid, arginfo_qt_widgets_qwidgetitem_qwidgetitem_setwid, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
