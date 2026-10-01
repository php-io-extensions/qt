
extern zend_class_entry *qt_widgets_qwidgetitemv2_qwidgetitemv2_ce;

ZEPHIR_INIT_CLASS(Qt_Widgets_QWidgetItemV2_QWidgetItemV2);

PHP_METHOD(Qt_Widgets_QWidgetItemV2_QWidgetItemV2, new_);
PHP_METHOD(Qt_Widgets_QWidgetItemV2_QWidgetItemV2, sizeHint);
PHP_METHOD(Qt_Widgets_QWidgetItemV2_QWidgetItemV2, minimumSize);
PHP_METHOD(Qt_Widgets_QWidgetItemV2_QWidgetItemV2, maximumSize);
PHP_METHOD(Qt_Widgets_QWidgetItemV2_QWidgetItemV2, heightForWidth);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qwidgetitemv2_qwidgetitemv2_new_, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, widget, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qwidgetitemv2_qwidgetitemv2_sizehint, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qwidgetitemv2_qwidgetitemv2_minimumsize, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qwidgetitemv2_qwidgetitemv2_maximumsize, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qwidgetitemv2_qwidgetitemv2_heightforwidth, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_widgets_qwidgetitemv2_qwidgetitemv2_method_entry) {
	PHP_ME(Qt_Widgets_QWidgetItemV2_QWidgetItemV2, new_, arginfo_qt_widgets_qwidgetitemv2_qwidgetitemv2_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QWidgetItemV2_QWidgetItemV2, sizeHint, arginfo_qt_widgets_qwidgetitemv2_qwidgetitemv2_sizehint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QWidgetItemV2_QWidgetItemV2, minimumSize, arginfo_qt_widgets_qwidgetitemv2_qwidgetitemv2_minimumsize, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QWidgetItemV2_QWidgetItemV2, maximumSize, arginfo_qt_widgets_qwidgetitemv2_qwidgetitemv2_maximumsize, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QWidgetItemV2_QWidgetItemV2, heightForWidth, arginfo_qt_widgets_qwidgetitemv2_qwidgetitemv2_heightforwidth, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
