
extern zend_class_entry *qt_gui_qradialgradient_qradialgradient_ce;

ZEPHIR_INIT_CLASS(Qt_Gui_QRadialGradient_QRadialGradient);

PHP_METHOD(Qt_Gui_QRadialGradient_QRadialGradient, new_);
PHP_METHOD(Qt_Gui_QRadialGradient_QRadialGradient, newQPointFQrealQPointF);
PHP_METHOD(Qt_Gui_QRadialGradient_QRadialGradient, newQrealQrealQrealQrealQreal);
PHP_METHOD(Qt_Gui_QRadialGradient_QRadialGradient, newQPointFQreal);
PHP_METHOD(Qt_Gui_QRadialGradient_QRadialGradient, newQrealQrealQreal);
PHP_METHOD(Qt_Gui_QRadialGradient_QRadialGradient, newQPointFQrealQPointFQreal);
PHP_METHOD(Qt_Gui_QRadialGradient_QRadialGradient, newQrealQrealQrealQrealQrealQreal);
PHP_METHOD(Qt_Gui_QRadialGradient_QRadialGradient, center);
PHP_METHOD(Qt_Gui_QRadialGradient_QRadialGradient, setCenter);
PHP_METHOD(Qt_Gui_QRadialGradient_QRadialGradient, setCenterQrealQreal);
PHP_METHOD(Qt_Gui_QRadialGradient_QRadialGradient, focalPoint);
PHP_METHOD(Qt_Gui_QRadialGradient_QRadialGradient, setFocalPoint);
PHP_METHOD(Qt_Gui_QRadialGradient_QRadialGradient, setFocalPointQrealQreal);
PHP_METHOD(Qt_Gui_QRadialGradient_QRadialGradient, radius);
PHP_METHOD(Qt_Gui_QRadialGradient_QRadialGradient, setRadius);
PHP_METHOD(Qt_Gui_QRadialGradient_QRadialGradient, centerRadius);
PHP_METHOD(Qt_Gui_QRadialGradient_QRadialGradient, setCenterRadius);
PHP_METHOD(Qt_Gui_QRadialGradient_QRadialGradient, focalRadius);
PHP_METHOD(Qt_Gui_QRadialGradient_QRadialGradient, setFocalRadius);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qradialgradient_qradialgradient_new_, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qradialgradient_qradialgradient_newqpointfqrealqpointf, 0, 5, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, centerX, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, centerY, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, radius, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, focalPointX, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, focalPointY, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qradialgradient_qradialgradient_newqrealqrealqrealqrealqreal, 0, 5, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, cx, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, cy, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, radius, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, fx, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, fy, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qradialgradient_qradialgradient_newqpointfqreal, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, centerX, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, centerY, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, radius, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qradialgradient_qradialgradient_newqrealqrealqreal, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, cx, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, cy, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, radius, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qradialgradient_qradialgradient_newqpointfqrealqpointfqreal, 0, 6, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, centerX, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, centerY, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, centerRadius, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, focalPointX, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, focalPointY, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, focalRadius, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qradialgradient_qradialgradient_newqrealqrealqrealqrealqrealqreal, 0, 6, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, cx, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, cy, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, centerRadius, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, fx, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, fy, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, focalRadius, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qradialgradient_qradialgradient_center, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qradialgradient_qradialgradient_setcenter, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, centerX, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, centerY, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qradialgradient_qradialgradient_setcenterqrealqreal, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qradialgradient_qradialgradient_focalpoint, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qradialgradient_qradialgradient_setfocalpoint, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, focalPointX, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, focalPointY, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qradialgradient_qradialgradient_setfocalpointqrealqreal, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qradialgradient_qradialgradient_radius, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qradialgradient_qradialgradient_setradius, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, radius, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qradialgradient_qradialgradient_centerradius, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qradialgradient_qradialgradient_setcenterradius, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, radius, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qradialgradient_qradialgradient_focalradius, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qradialgradient_qradialgradient_setfocalradius, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, radius, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_gui_qradialgradient_qradialgradient_method_entry) {
	PHP_ME(Qt_Gui_QRadialGradient_QRadialGradient, new_, arginfo_qt_gui_qradialgradient_qradialgradient_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QRadialGradient_QRadialGradient, newQPointFQrealQPointF, arginfo_qt_gui_qradialgradient_qradialgradient_newqpointfqrealqpointf, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QRadialGradient_QRadialGradient, newQrealQrealQrealQrealQreal, arginfo_qt_gui_qradialgradient_qradialgradient_newqrealqrealqrealqrealqreal, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QRadialGradient_QRadialGradient, newQPointFQreal, arginfo_qt_gui_qradialgradient_qradialgradient_newqpointfqreal, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QRadialGradient_QRadialGradient, newQrealQrealQreal, arginfo_qt_gui_qradialgradient_qradialgradient_newqrealqrealqreal, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QRadialGradient_QRadialGradient, newQPointFQrealQPointFQreal, arginfo_qt_gui_qradialgradient_qradialgradient_newqpointfqrealqpointfqreal, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QRadialGradient_QRadialGradient, newQrealQrealQrealQrealQrealQreal, arginfo_qt_gui_qradialgradient_qradialgradient_newqrealqrealqrealqrealqrealqreal, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QRadialGradient_QRadialGradient, center, arginfo_qt_gui_qradialgradient_qradialgradient_center, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QRadialGradient_QRadialGradient, setCenter, arginfo_qt_gui_qradialgradient_qradialgradient_setcenter, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QRadialGradient_QRadialGradient, setCenterQrealQreal, arginfo_qt_gui_qradialgradient_qradialgradient_setcenterqrealqreal, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QRadialGradient_QRadialGradient, focalPoint, arginfo_qt_gui_qradialgradient_qradialgradient_focalpoint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QRadialGradient_QRadialGradient, setFocalPoint, arginfo_qt_gui_qradialgradient_qradialgradient_setfocalpoint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QRadialGradient_QRadialGradient, setFocalPointQrealQreal, arginfo_qt_gui_qradialgradient_qradialgradient_setfocalpointqrealqreal, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QRadialGradient_QRadialGradient, radius, arginfo_qt_gui_qradialgradient_qradialgradient_radius, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QRadialGradient_QRadialGradient, setRadius, arginfo_qt_gui_qradialgradient_qradialgradient_setradius, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QRadialGradient_QRadialGradient, centerRadius, arginfo_qt_gui_qradialgradient_qradialgradient_centerradius, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QRadialGradient_QRadialGradient, setCenterRadius, arginfo_qt_gui_qradialgradient_qradialgradient_setcenterradius, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QRadialGradient_QRadialGradient, focalRadius, arginfo_qt_gui_qradialgradient_qradialgradient_focalradius, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QRadialGradient_QRadialGradient, setFocalRadius, arginfo_qt_gui_qradialgradient_qradialgradient_setfocalradius, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
