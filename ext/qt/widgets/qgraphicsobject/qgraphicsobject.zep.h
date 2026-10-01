
extern zend_class_entry *qt_widgets_qgraphicsobject_qgraphicsobject_ce;

ZEPHIR_INIT_CLASS(Qt_Widgets_QGraphicsObject_QGraphicsObject);

PHP_METHOD(Qt_Widgets_QGraphicsObject_QGraphicsObject, children);
PHP_METHOD(Qt_Widgets_QGraphicsObject_QGraphicsObject, staticMetaObject);
PHP_METHOD(Qt_Widgets_QGraphicsObject_QGraphicsObject, tr);
PHP_METHOD(Qt_Widgets_QGraphicsObject_QGraphicsObject, new_);
PHP_METHOD(Qt_Widgets_QGraphicsObject_QGraphicsObject, grabGesture);
PHP_METHOD(Qt_Widgets_QGraphicsObject_QGraphicsObject, ungrabGesture);
PHP_METHOD(Qt_Widgets_QGraphicsObject_QGraphicsObject, updateMicroFocus);
PHP_METHOD(Qt_Widgets_QGraphicsObject_QGraphicsObject, parentChanged);
PHP_METHOD(Qt_Widgets_QGraphicsObject_QGraphicsObject, opacityChanged);
PHP_METHOD(Qt_Widgets_QGraphicsObject_QGraphicsObject, visibleChanged);
PHP_METHOD(Qt_Widgets_QGraphicsObject_QGraphicsObject, enabledChanged);
PHP_METHOD(Qt_Widgets_QGraphicsObject_QGraphicsObject, xChanged);
PHP_METHOD(Qt_Widgets_QGraphicsObject_QGraphicsObject, yChanged);
PHP_METHOD(Qt_Widgets_QGraphicsObject_QGraphicsObject, zChanged);
PHP_METHOD(Qt_Widgets_QGraphicsObject_QGraphicsObject, rotationChanged);
PHP_METHOD(Qt_Widgets_QGraphicsObject_QGraphicsObject, scaleChanged);
PHP_METHOD(Qt_Widgets_QGraphicsObject_QGraphicsObject, childrenChanged);
PHP_METHOD(Qt_Widgets_QGraphicsObject_QGraphicsObject, widthChanged);
PHP_METHOD(Qt_Widgets_QGraphicsObject_QGraphicsObject, heightChanged);
PHP_METHOD(Qt_Widgets_QGraphicsObject_QGraphicsObject, event);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicsobject_qgraphicsobject_children, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicsobject_qgraphicsobject_staticmetaobject, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicsobject_qgraphicsobject_tr, 0, 1, IS_STRING, 0)
	ZEND_ARG_INFO(0, s)
	ZEND_ARG_INFO(0, c)
	ZEND_ARG_TYPE_INFO(0, n, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicsobject_qgraphicsobject_new_, 0, 0, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicsobject_qgraphicsobject_grabgesture, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, type, IS_LONG, 0)
	ZEND_ARG_INFO(0, flags)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicsobject_qgraphicsobject_ungrabgesture, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, type, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicsobject_qgraphicsobject_updatemicrofocus, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicsobject_qgraphicsobject_parentchanged, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicsobject_qgraphicsobject_opacitychanged, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicsobject_qgraphicsobject_visiblechanged, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicsobject_qgraphicsobject_enabledchanged, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicsobject_qgraphicsobject_xchanged, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicsobject_qgraphicsobject_ychanged, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicsobject_qgraphicsobject_zchanged, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicsobject_qgraphicsobject_rotationchanged, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicsobject_qgraphicsobject_scalechanged, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicsobject_qgraphicsobject_childrenchanged, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicsobject_qgraphicsobject_widthchanged, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicsobject_qgraphicsobject_heightchanged, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicsobject_qgraphicsobject_event, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, ev, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_widgets_qgraphicsobject_qgraphicsobject_method_entry) {
	PHP_ME(Qt_Widgets_QGraphicsObject_QGraphicsObject, children, arginfo_qt_widgets_qgraphicsobject_qgraphicsobject_children, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsObject_QGraphicsObject, staticMetaObject, arginfo_qt_widgets_qgraphicsobject_qgraphicsobject_staticmetaobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsObject_QGraphicsObject, tr, arginfo_qt_widgets_qgraphicsobject_qgraphicsobject_tr, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsObject_QGraphicsObject, new_, arginfo_qt_widgets_qgraphicsobject_qgraphicsobject_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsObject_QGraphicsObject, grabGesture, arginfo_qt_widgets_qgraphicsobject_qgraphicsobject_grabgesture, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsObject_QGraphicsObject, ungrabGesture, arginfo_qt_widgets_qgraphicsobject_qgraphicsobject_ungrabgesture, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsObject_QGraphicsObject, updateMicroFocus, arginfo_qt_widgets_qgraphicsobject_qgraphicsobject_updatemicrofocus, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsObject_QGraphicsObject, parentChanged, arginfo_qt_widgets_qgraphicsobject_qgraphicsobject_parentchanged, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsObject_QGraphicsObject, opacityChanged, arginfo_qt_widgets_qgraphicsobject_qgraphicsobject_opacitychanged, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsObject_QGraphicsObject, visibleChanged, arginfo_qt_widgets_qgraphicsobject_qgraphicsobject_visiblechanged, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsObject_QGraphicsObject, enabledChanged, arginfo_qt_widgets_qgraphicsobject_qgraphicsobject_enabledchanged, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsObject_QGraphicsObject, xChanged, arginfo_qt_widgets_qgraphicsobject_qgraphicsobject_xchanged, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsObject_QGraphicsObject, yChanged, arginfo_qt_widgets_qgraphicsobject_qgraphicsobject_ychanged, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsObject_QGraphicsObject, zChanged, arginfo_qt_widgets_qgraphicsobject_qgraphicsobject_zchanged, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsObject_QGraphicsObject, rotationChanged, arginfo_qt_widgets_qgraphicsobject_qgraphicsobject_rotationchanged, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsObject_QGraphicsObject, scaleChanged, arginfo_qt_widgets_qgraphicsobject_qgraphicsobject_scalechanged, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsObject_QGraphicsObject, childrenChanged, arginfo_qt_widgets_qgraphicsobject_qgraphicsobject_childrenchanged, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsObject_QGraphicsObject, widthChanged, arginfo_qt_widgets_qgraphicsobject_qgraphicsobject_widthchanged, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsObject_QGraphicsObject, heightChanged, arginfo_qt_widgets_qgraphicsobject_qgraphicsobject_heightchanged, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsObject_QGraphicsObject, event, arginfo_qt_widgets_qgraphicsobject_qgraphicsobject_event, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
