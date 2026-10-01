
extern zend_class_entry *qt_widgets_qspaceritem_qspaceritem_ce;

ZEPHIR_INIT_CLASS(Qt_Widgets_QSpacerItem_QSpacerItem);

PHP_METHOD(Qt_Widgets_QSpacerItem_QSpacerItem, new_);
PHP_METHOD(Qt_Widgets_QSpacerItem_QSpacerItem, changeSize);
PHP_METHOD(Qt_Widgets_QSpacerItem_QSpacerItem, sizeHint);
PHP_METHOD(Qt_Widgets_QSpacerItem_QSpacerItem, minimumSize);
PHP_METHOD(Qt_Widgets_QSpacerItem_QSpacerItem, maximumSize);
PHP_METHOD(Qt_Widgets_QSpacerItem_QSpacerItem, expandingDirections);
PHP_METHOD(Qt_Widgets_QSpacerItem_QSpacerItem, isEmpty);
PHP_METHOD(Qt_Widgets_QSpacerItem_QSpacerItem, setGeometry);
PHP_METHOD(Qt_Widgets_QSpacerItem_QSpacerItem, geometry);
PHP_METHOD(Qt_Widgets_QSpacerItem_QSpacerItem, spacerItem);
PHP_METHOD(Qt_Widgets_QSpacerItem_QSpacerItem, sizePolicy);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qspaceritem_qspaceritem_new_, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, w, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, h, IS_LONG, 0)
	ZEND_ARG_INFO(0, hData)
	ZEND_ARG_INFO(0, vData)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qspaceritem_qspaceritem_changesize, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, w, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, h, IS_LONG, 0)
	ZEND_ARG_INFO(0, hData)
	ZEND_ARG_INFO(0, vData)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qspaceritem_qspaceritem_sizehint, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qspaceritem_qspaceritem_minimumsize, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qspaceritem_qspaceritem_maximumsize, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qspaceritem_qspaceritem_expandingdirections, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qspaceritem_qspaceritem_isempty, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qspaceritem_qspaceritem_setgeometry, 0, 5, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0X, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0Y, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0Width, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0Height, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qspaceritem_qspaceritem_geometry, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qspaceritem_qspaceritem_spaceritem, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qspaceritem_qspaceritem_sizepolicy, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_widgets_qspaceritem_qspaceritem_method_entry) {
	PHP_ME(Qt_Widgets_QSpacerItem_QSpacerItem, new_, arginfo_qt_widgets_qspaceritem_qspaceritem_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QSpacerItem_QSpacerItem, changeSize, arginfo_qt_widgets_qspaceritem_qspaceritem_changesize, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QSpacerItem_QSpacerItem, sizeHint, arginfo_qt_widgets_qspaceritem_qspaceritem_sizehint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QSpacerItem_QSpacerItem, minimumSize, arginfo_qt_widgets_qspaceritem_qspaceritem_minimumsize, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QSpacerItem_QSpacerItem, maximumSize, arginfo_qt_widgets_qspaceritem_qspaceritem_maximumsize, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QSpacerItem_QSpacerItem, expandingDirections, arginfo_qt_widgets_qspaceritem_qspaceritem_expandingdirections, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QSpacerItem_QSpacerItem, isEmpty, arginfo_qt_widgets_qspaceritem_qspaceritem_isempty, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QSpacerItem_QSpacerItem, setGeometry, arginfo_qt_widgets_qspaceritem_qspaceritem_setgeometry, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QSpacerItem_QSpacerItem, geometry, arginfo_qt_widgets_qspaceritem_qspaceritem_geometry, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QSpacerItem_QSpacerItem, spacerItem, arginfo_qt_widgets_qspaceritem_qspaceritem_spaceritem, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QSpacerItem_QSpacerItem, sizePolicy, arginfo_qt_widgets_qspaceritem_qspaceritem_sizepolicy, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
