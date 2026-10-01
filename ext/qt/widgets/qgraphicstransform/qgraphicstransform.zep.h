
extern zend_class_entry *qt_widgets_qgraphicstransform_qgraphicstransform_ce;

ZEPHIR_INIT_CLASS(Qt_Widgets_QGraphicsTransform_QGraphicsTransform);

PHP_METHOD(Qt_Widgets_QGraphicsTransform_QGraphicsTransform, staticMetaObject);
PHP_METHOD(Qt_Widgets_QGraphicsTransform_QGraphicsTransform, tr);
PHP_METHOD(Qt_Widgets_QGraphicsTransform_QGraphicsTransform, new_);
PHP_METHOD(Qt_Widgets_QGraphicsTransform_QGraphicsTransform, applyTo);
PHP_METHOD(Qt_Widgets_QGraphicsTransform_QGraphicsTransform, update);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicstransform_qgraphicstransform_staticmetaobject, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicstransform_qgraphicstransform_tr, 0, 1, IS_STRING, 0)
	ZEND_ARG_INFO(0, s)
	ZEND_ARG_INFO(0, c)
	ZEND_ARG_TYPE_INFO(0, n, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicstransform_qgraphicstransform_new_, 0, 0, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicstransform_qgraphicstransform_applyto, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, matrix, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicstransform_qgraphicstransform_update, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_widgets_qgraphicstransform_qgraphicstransform_method_entry) {
	PHP_ME(Qt_Widgets_QGraphicsTransform_QGraphicsTransform, staticMetaObject, arginfo_qt_widgets_qgraphicstransform_qgraphicstransform_staticmetaobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsTransform_QGraphicsTransform, tr, arginfo_qt_widgets_qgraphicstransform_qgraphicstransform_tr, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsTransform_QGraphicsTransform, new_, arginfo_qt_widgets_qgraphicstransform_qgraphicstransform_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsTransform_QGraphicsTransform, applyTo, arginfo_qt_widgets_qgraphicstransform_qgraphicstransform_applyto, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsTransform_QGraphicsTransform, update, arginfo_qt_widgets_qgraphicstransform_qgraphicstransform_update, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
