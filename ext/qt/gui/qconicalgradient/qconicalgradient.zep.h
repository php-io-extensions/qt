
extern zend_class_entry *qt_gui_qconicalgradient_qconicalgradient_ce;

ZEPHIR_INIT_CLASS(Qt_Gui_QConicalGradient_QConicalGradient);

PHP_METHOD(Qt_Gui_QConicalGradient_QConicalGradient, new_);
PHP_METHOD(Qt_Gui_QConicalGradient_QConicalGradient, newQPointFQreal);
PHP_METHOD(Qt_Gui_QConicalGradient_QConicalGradient, newQrealQrealQreal);
PHP_METHOD(Qt_Gui_QConicalGradient_QConicalGradient, center);
PHP_METHOD(Qt_Gui_QConicalGradient_QConicalGradient, setCenter);
PHP_METHOD(Qt_Gui_QConicalGradient_QConicalGradient, setCenterQrealQreal);
PHP_METHOD(Qt_Gui_QConicalGradient_QConicalGradient, angle);
PHP_METHOD(Qt_Gui_QConicalGradient_QConicalGradient, setAngle);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qconicalgradient_qconicalgradient_new_, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qconicalgradient_qconicalgradient_newqpointfqreal, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, centerX, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, centerY, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, startAngle, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qconicalgradient_qconicalgradient_newqrealqrealqreal, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, cx, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, cy, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, startAngle, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qconicalgradient_qconicalgradient_center, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qconicalgradient_qconicalgradient_setcenter, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, centerX, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, centerY, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qconicalgradient_qconicalgradient_setcenterqrealqreal, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qconicalgradient_qconicalgradient_angle, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qconicalgradient_qconicalgradient_setangle, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, angle, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_gui_qconicalgradient_qconicalgradient_method_entry) {
	PHP_ME(Qt_Gui_QConicalGradient_QConicalGradient, new_, arginfo_qt_gui_qconicalgradient_qconicalgradient_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QConicalGradient_QConicalGradient, newQPointFQreal, arginfo_qt_gui_qconicalgradient_qconicalgradient_newqpointfqreal, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QConicalGradient_QConicalGradient, newQrealQrealQreal, arginfo_qt_gui_qconicalgradient_qconicalgradient_newqrealqrealqreal, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QConicalGradient_QConicalGradient, center, arginfo_qt_gui_qconicalgradient_qconicalgradient_center, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QConicalGradient_QConicalGradient, setCenter, arginfo_qt_gui_qconicalgradient_qconicalgradient_setcenter, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QConicalGradient_QConicalGradient, setCenterQrealQreal, arginfo_qt_gui_qconicalgradient_qconicalgradient_setcenterqrealqreal, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QConicalGradient_QConicalGradient, angle, arginfo_qt_gui_qconicalgradient_qconicalgradient_angle, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QConicalGradient_QConicalGradient, setAngle, arginfo_qt_gui_qconicalgradient_qconicalgradient_setangle, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
