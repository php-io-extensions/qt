
extern zend_class_entry *qt_widgets_qgraphicsanchor_qgraphicsanchor_ce;

ZEPHIR_INIT_CLASS(Qt_Widgets_QGraphicsAnchor_QGraphicsAnchor);

PHP_METHOD(Qt_Widgets_QGraphicsAnchor_QGraphicsAnchor, staticMetaObject);
PHP_METHOD(Qt_Widgets_QGraphicsAnchor_QGraphicsAnchor, tr);
PHP_METHOD(Qt_Widgets_QGraphicsAnchor_QGraphicsAnchor, setSpacing);
PHP_METHOD(Qt_Widgets_QGraphicsAnchor_QGraphicsAnchor, unsetSpacing);
PHP_METHOD(Qt_Widgets_QGraphicsAnchor_QGraphicsAnchor, spacing);
PHP_METHOD(Qt_Widgets_QGraphicsAnchor_QGraphicsAnchor, setSizePolicy);
PHP_METHOD(Qt_Widgets_QGraphicsAnchor_QGraphicsAnchor, sizePolicy);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicsanchor_qgraphicsanchor_staticmetaobject, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicsanchor_qgraphicsanchor_tr, 0, 1, IS_STRING, 0)
	ZEND_ARG_INFO(0, s)
	ZEND_ARG_INFO(0, c)
	ZEND_ARG_TYPE_INFO(0, n, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicsanchor_qgraphicsanchor_setspacing, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, spacing, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicsanchor_qgraphicsanchor_unsetspacing, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicsanchor_qgraphicsanchor_spacing, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicsanchor_qgraphicsanchor_setsizepolicy, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, policy, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicsanchor_qgraphicsanchor_sizepolicy, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_widgets_qgraphicsanchor_qgraphicsanchor_method_entry) {
	PHP_ME(Qt_Widgets_QGraphicsAnchor_QGraphicsAnchor, staticMetaObject, arginfo_qt_widgets_qgraphicsanchor_qgraphicsanchor_staticmetaobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsAnchor_QGraphicsAnchor, tr, arginfo_qt_widgets_qgraphicsanchor_qgraphicsanchor_tr, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsAnchor_QGraphicsAnchor, setSpacing, arginfo_qt_widgets_qgraphicsanchor_qgraphicsanchor_setspacing, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsAnchor_QGraphicsAnchor, unsetSpacing, arginfo_qt_widgets_qgraphicsanchor_qgraphicsanchor_unsetspacing, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsAnchor_QGraphicsAnchor, spacing, arginfo_qt_widgets_qgraphicsanchor_qgraphicsanchor_spacing, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsAnchor_QGraphicsAnchor, setSizePolicy, arginfo_qt_widgets_qgraphicsanchor_qgraphicsanchor_setsizepolicy, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsAnchor_QGraphicsAnchor, sizePolicy, arginfo_qt_widgets_qgraphicsanchor_qgraphicsanchor_sizepolicy, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
