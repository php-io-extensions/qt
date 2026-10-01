
extern zend_class_entry *qt_widgets_qgraphicsrotation_qgraphicsrotation_ce;

ZEPHIR_INIT_CLASS(Qt_Widgets_QGraphicsRotation_QGraphicsRotation);

PHP_METHOD(Qt_Widgets_QGraphicsRotation_QGraphicsRotation, staticMetaObject);
PHP_METHOD(Qt_Widgets_QGraphicsRotation_QGraphicsRotation, tr);
PHP_METHOD(Qt_Widgets_QGraphicsRotation_QGraphicsRotation, new_);
PHP_METHOD(Qt_Widgets_QGraphicsRotation_QGraphicsRotation, origin);
PHP_METHOD(Qt_Widgets_QGraphicsRotation_QGraphicsRotation, setOrigin);
PHP_METHOD(Qt_Widgets_QGraphicsRotation_QGraphicsRotation, angle);
PHP_METHOD(Qt_Widgets_QGraphicsRotation_QGraphicsRotation, setAngle);
PHP_METHOD(Qt_Widgets_QGraphicsRotation_QGraphicsRotation, axis);
PHP_METHOD(Qt_Widgets_QGraphicsRotation_QGraphicsRotation, setAxis);
PHP_METHOD(Qt_Widgets_QGraphicsRotation_QGraphicsRotation, setAxisQtAxis);
PHP_METHOD(Qt_Widgets_QGraphicsRotation_QGraphicsRotation, applyTo);
PHP_METHOD(Qt_Widgets_QGraphicsRotation_QGraphicsRotation, originChanged);
PHP_METHOD(Qt_Widgets_QGraphicsRotation_QGraphicsRotation, angleChanged);
PHP_METHOD(Qt_Widgets_QGraphicsRotation_QGraphicsRotation, axisChanged);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicsrotation_qgraphicsrotation_staticmetaobject, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicsrotation_qgraphicsrotation_tr, 0, 1, IS_STRING, 0)
	ZEND_ARG_INFO(0, s)
	ZEND_ARG_INFO(0, c)
	ZEND_ARG_TYPE_INFO(0, n, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicsrotation_qgraphicsrotation_new_, 0, 0, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicsrotation_qgraphicsrotation_origin, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicsrotation_qgraphicsrotation_setorigin, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, point, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicsrotation_qgraphicsrotation_angle, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicsrotation_qgraphicsrotation_setangle, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicsrotation_qgraphicsrotation_axis, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicsrotation_qgraphicsrotation_setaxis, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, axis, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicsrotation_qgraphicsrotation_setaxisqtaxis, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, axis, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicsrotation_qgraphicsrotation_applyto, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, matrix, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicsrotation_qgraphicsrotation_originchanged, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicsrotation_qgraphicsrotation_anglechanged, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicsrotation_qgraphicsrotation_axischanged, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_widgets_qgraphicsrotation_qgraphicsrotation_method_entry) {
	PHP_ME(Qt_Widgets_QGraphicsRotation_QGraphicsRotation, staticMetaObject, arginfo_qt_widgets_qgraphicsrotation_qgraphicsrotation_staticmetaobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsRotation_QGraphicsRotation, tr, arginfo_qt_widgets_qgraphicsrotation_qgraphicsrotation_tr, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsRotation_QGraphicsRotation, new_, arginfo_qt_widgets_qgraphicsrotation_qgraphicsrotation_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsRotation_QGraphicsRotation, origin, arginfo_qt_widgets_qgraphicsrotation_qgraphicsrotation_origin, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsRotation_QGraphicsRotation, setOrigin, arginfo_qt_widgets_qgraphicsrotation_qgraphicsrotation_setorigin, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsRotation_QGraphicsRotation, angle, arginfo_qt_widgets_qgraphicsrotation_qgraphicsrotation_angle, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsRotation_QGraphicsRotation, setAngle, arginfo_qt_widgets_qgraphicsrotation_qgraphicsrotation_setangle, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsRotation_QGraphicsRotation, axis, arginfo_qt_widgets_qgraphicsrotation_qgraphicsrotation_axis, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsRotation_QGraphicsRotation, setAxis, arginfo_qt_widgets_qgraphicsrotation_qgraphicsrotation_setaxis, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsRotation_QGraphicsRotation, setAxisQtAxis, arginfo_qt_widgets_qgraphicsrotation_qgraphicsrotation_setaxisqtaxis, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsRotation_QGraphicsRotation, applyTo, arginfo_qt_widgets_qgraphicsrotation_qgraphicsrotation_applyto, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsRotation_QGraphicsRotation, originChanged, arginfo_qt_widgets_qgraphicsrotation_qgraphicsrotation_originchanged, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsRotation_QGraphicsRotation, angleChanged, arginfo_qt_widgets_qgraphicsrotation_qgraphicsrotation_anglechanged, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsRotation_QGraphicsRotation, axisChanged, arginfo_qt_widgets_qgraphicsrotation_qgraphicsrotation_axischanged, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
