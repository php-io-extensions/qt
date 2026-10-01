
extern zend_class_entry *qt_gui_qvector2d_qvector2d_ce;

ZEPHIR_INIT_CLASS(Qt_Gui_QVector2D_QVector2D);

PHP_METHOD(Qt_Gui_QVector2D_QVector2D, new_);
PHP_METHOD(Qt_Gui_QVector2D_QVector2D, newQtInitialization);
PHP_METHOD(Qt_Gui_QVector2D_QVector2D, newFloatFloat);
PHP_METHOD(Qt_Gui_QVector2D_QVector2D, newQPoint);
PHP_METHOD(Qt_Gui_QVector2D_QVector2D, newQPointF);
PHP_METHOD(Qt_Gui_QVector2D_QVector2D, newQVector3D);
PHP_METHOD(Qt_Gui_QVector2D_QVector2D, newQVector4D);
PHP_METHOD(Qt_Gui_QVector2D_QVector2D, isNull);
PHP_METHOD(Qt_Gui_QVector2D_QVector2D, x);
PHP_METHOD(Qt_Gui_QVector2D_QVector2D, y);
PHP_METHOD(Qt_Gui_QVector2D_QVector2D, setX);
PHP_METHOD(Qt_Gui_QVector2D_QVector2D, setY);
PHP_METHOD(Qt_Gui_QVector2D_QVector2D, length);
PHP_METHOD(Qt_Gui_QVector2D_QVector2D, lengthSquared);
PHP_METHOD(Qt_Gui_QVector2D_QVector2D, normalized);
PHP_METHOD(Qt_Gui_QVector2D_QVector2D, normalize);
PHP_METHOD(Qt_Gui_QVector2D_QVector2D, distanceToPoint);
PHP_METHOD(Qt_Gui_QVector2D_QVector2D, distanceToLine);
PHP_METHOD(Qt_Gui_QVector2D_QVector2D, dotProduct);
PHP_METHOD(Qt_Gui_QVector2D_QVector2D, toVector3D);
PHP_METHOD(Qt_Gui_QVector2D_QVector2D, toVector4D);
PHP_METHOD(Qt_Gui_QVector2D_QVector2D, toPoint);
PHP_METHOD(Qt_Gui_QVector2D_QVector2D, toPointF);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qvector2d_qvector2d_new_, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qvector2d_qvector2d_newqtinitialization, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qvector2d_qvector2d_newfloatfloat, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, xpos, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, ypos, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qvector2d_qvector2d_newqpoint, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, pointX, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, pointY, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qvector2d_qvector2d_newqpointf, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, pointX, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, pointY, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qvector2d_qvector2d_newqvector3d, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, vector, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qvector2d_qvector2d_newqvector4d, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, vector, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qvector2d_qvector2d_isnull, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qvector2d_qvector2d_x, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qvector2d_qvector2d_y, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qvector2d_qvector2d_setx, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qvector2d_qvector2d_sety, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qvector2d_qvector2d_length, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qvector2d_qvector2d_lengthsquared, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qvector2d_qvector2d_normalized, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qvector2d_qvector2d_normalize, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qvector2d_qvector2d_distancetopoint, 0, 2, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, point, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qvector2d_qvector2d_distancetoline, 0, 3, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, point, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, direction, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qvector2d_qvector2d_dotproduct, 0, 2, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, v1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, v2, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qvector2d_qvector2d_tovector3d, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qvector2d_qvector2d_tovector4d, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qvector2d_qvector2d_topoint, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qvector2d_qvector2d_topointf, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_gui_qvector2d_qvector2d_method_entry) {
	PHP_ME(Qt_Gui_QVector2D_QVector2D, new_, arginfo_qt_gui_qvector2d_qvector2d_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QVector2D_QVector2D, newQtInitialization, arginfo_qt_gui_qvector2d_qvector2d_newqtinitialization, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QVector2D_QVector2D, newFloatFloat, arginfo_qt_gui_qvector2d_qvector2d_newfloatfloat, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QVector2D_QVector2D, newQPoint, arginfo_qt_gui_qvector2d_qvector2d_newqpoint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QVector2D_QVector2D, newQPointF, arginfo_qt_gui_qvector2d_qvector2d_newqpointf, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QVector2D_QVector2D, newQVector3D, arginfo_qt_gui_qvector2d_qvector2d_newqvector3d, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QVector2D_QVector2D, newQVector4D, arginfo_qt_gui_qvector2d_qvector2d_newqvector4d, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QVector2D_QVector2D, isNull, arginfo_qt_gui_qvector2d_qvector2d_isnull, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QVector2D_QVector2D, x, arginfo_qt_gui_qvector2d_qvector2d_x, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QVector2D_QVector2D, y, arginfo_qt_gui_qvector2d_qvector2d_y, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QVector2D_QVector2D, setX, arginfo_qt_gui_qvector2d_qvector2d_setx, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QVector2D_QVector2D, setY, arginfo_qt_gui_qvector2d_qvector2d_sety, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QVector2D_QVector2D, length, arginfo_qt_gui_qvector2d_qvector2d_length, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QVector2D_QVector2D, lengthSquared, arginfo_qt_gui_qvector2d_qvector2d_lengthsquared, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QVector2D_QVector2D, normalized, arginfo_qt_gui_qvector2d_qvector2d_normalized, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QVector2D_QVector2D, normalize, arginfo_qt_gui_qvector2d_qvector2d_normalize, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QVector2D_QVector2D, distanceToPoint, arginfo_qt_gui_qvector2d_qvector2d_distancetopoint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QVector2D_QVector2D, distanceToLine, arginfo_qt_gui_qvector2d_qvector2d_distancetoline, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QVector2D_QVector2D, dotProduct, arginfo_qt_gui_qvector2d_qvector2d_dotproduct, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QVector2D_QVector2D, toVector3D, arginfo_qt_gui_qvector2d_qvector2d_tovector3d, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QVector2D_QVector2D, toVector4D, arginfo_qt_gui_qvector2d_qvector2d_tovector4d, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QVector2D_QVector2D, toPoint, arginfo_qt_gui_qvector2d_qvector2d_topoint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QVector2D_QVector2D, toPointF, arginfo_qt_gui_qvector2d_qvector2d_topointf, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
