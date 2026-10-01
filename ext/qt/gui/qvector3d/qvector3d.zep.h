
extern zend_class_entry *qt_gui_qvector3d_qvector3d_ce;

ZEPHIR_INIT_CLASS(Qt_Gui_QVector3D_QVector3D);

PHP_METHOD(Qt_Gui_QVector3D_QVector3D, new_);
PHP_METHOD(Qt_Gui_QVector3D_QVector3D, newQtInitialization);
PHP_METHOD(Qt_Gui_QVector3D_QVector3D, newFloatFloatFloat);
PHP_METHOD(Qt_Gui_QVector3D_QVector3D, newQPoint);
PHP_METHOD(Qt_Gui_QVector3D_QVector3D, newQPointF);
PHP_METHOD(Qt_Gui_QVector3D_QVector3D, newQVector2D);
PHP_METHOD(Qt_Gui_QVector3D_QVector3D, newQVector2DFloat);
PHP_METHOD(Qt_Gui_QVector3D_QVector3D, newQVector4D);
PHP_METHOD(Qt_Gui_QVector3D_QVector3D, isNull);
PHP_METHOD(Qt_Gui_QVector3D_QVector3D, x);
PHP_METHOD(Qt_Gui_QVector3D_QVector3D, y);
PHP_METHOD(Qt_Gui_QVector3D_QVector3D, z);
PHP_METHOD(Qt_Gui_QVector3D_QVector3D, setX);
PHP_METHOD(Qt_Gui_QVector3D_QVector3D, setY);
PHP_METHOD(Qt_Gui_QVector3D_QVector3D, setZ);
PHP_METHOD(Qt_Gui_QVector3D_QVector3D, length);
PHP_METHOD(Qt_Gui_QVector3D_QVector3D, lengthSquared);
PHP_METHOD(Qt_Gui_QVector3D_QVector3D, normalized);
PHP_METHOD(Qt_Gui_QVector3D_QVector3D, normalize);
PHP_METHOD(Qt_Gui_QVector3D_QVector3D, dotProduct);
PHP_METHOD(Qt_Gui_QVector3D_QVector3D, crossProduct);
PHP_METHOD(Qt_Gui_QVector3D_QVector3D, normal);
PHP_METHOD(Qt_Gui_QVector3D_QVector3D, normalQVector3DQVector3DQVector3D);
PHP_METHOD(Qt_Gui_QVector3D_QVector3D, project);
PHP_METHOD(Qt_Gui_QVector3D_QVector3D, unproject);
PHP_METHOD(Qt_Gui_QVector3D_QVector3D, distanceToPoint);
PHP_METHOD(Qt_Gui_QVector3D_QVector3D, distanceToPlane);
PHP_METHOD(Qt_Gui_QVector3D_QVector3D, distanceToPlaneQVector3DQVector3DQVector3D);
PHP_METHOD(Qt_Gui_QVector3D_QVector3D, distanceToLine);
PHP_METHOD(Qt_Gui_QVector3D_QVector3D, toVector2D);
PHP_METHOD(Qt_Gui_QVector3D_QVector3D, toVector4D);
PHP_METHOD(Qt_Gui_QVector3D_QVector3D, toPoint);
PHP_METHOD(Qt_Gui_QVector3D_QVector3D, toPointF);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qvector3d_qvector3d_new_, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qvector3d_qvector3d_newqtinitialization, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qvector3d_qvector3d_newfloatfloatfloat, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, xpos, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, ypos, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, zpos, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qvector3d_qvector3d_newqpoint, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, pointX, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, pointY, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qvector3d_qvector3d_newqpointf, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, pointX, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, pointY, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qvector3d_qvector3d_newqvector2d, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, vector, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qvector3d_qvector3d_newqvector2dfloat, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, vector, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, zpos, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qvector3d_qvector3d_newqvector4d, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, vector, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qvector3d_qvector3d_isnull, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qvector3d_qvector3d_x, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qvector3d_qvector3d_y, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qvector3d_qvector3d_z, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qvector3d_qvector3d_setx, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qvector3d_qvector3d_sety, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qvector3d_qvector3d_setz, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, z, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qvector3d_qvector3d_length, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qvector3d_qvector3d_lengthsquared, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qvector3d_qvector3d_normalized, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qvector3d_qvector3d_normalize, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qvector3d_qvector3d_dotproduct, 0, 2, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, v1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, v2, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qvector3d_qvector3d_crossproduct, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, v1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, v2, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qvector3d_qvector3d_normal, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, v1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, v2, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qvector3d_qvector3d_normalqvector3dqvector3dqvector3d, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, v1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, v2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, v3, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qvector3d_qvector3d_project, 0, 7, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, modelView, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, projection, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, viewportX, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, viewportY, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, viewportWidth, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, viewportHeight, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qvector3d_qvector3d_unproject, 0, 7, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, modelView, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, projection, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, viewportX, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, viewportY, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, viewportWidth, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, viewportHeight, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qvector3d_qvector3d_distancetopoint, 0, 2, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, point, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qvector3d_qvector3d_distancetoplane, 0, 3, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, plane, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, normal, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qvector3d_qvector3d_distancetoplaneqvector3dqvector3dqvector3d, 0, 4, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, plane1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, plane2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, plane3, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qvector3d_qvector3d_distancetoline, 0, 3, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, point, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, direction, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qvector3d_qvector3d_tovector2d, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qvector3d_qvector3d_tovector4d, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qvector3d_qvector3d_topoint, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qvector3d_qvector3d_topointf, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_gui_qvector3d_qvector3d_method_entry) {
	PHP_ME(Qt_Gui_QVector3D_QVector3D, new_, arginfo_qt_gui_qvector3d_qvector3d_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QVector3D_QVector3D, newQtInitialization, arginfo_qt_gui_qvector3d_qvector3d_newqtinitialization, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QVector3D_QVector3D, newFloatFloatFloat, arginfo_qt_gui_qvector3d_qvector3d_newfloatfloatfloat, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QVector3D_QVector3D, newQPoint, arginfo_qt_gui_qvector3d_qvector3d_newqpoint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QVector3D_QVector3D, newQPointF, arginfo_qt_gui_qvector3d_qvector3d_newqpointf, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QVector3D_QVector3D, newQVector2D, arginfo_qt_gui_qvector3d_qvector3d_newqvector2d, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QVector3D_QVector3D, newQVector2DFloat, arginfo_qt_gui_qvector3d_qvector3d_newqvector2dfloat, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QVector3D_QVector3D, newQVector4D, arginfo_qt_gui_qvector3d_qvector3d_newqvector4d, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QVector3D_QVector3D, isNull, arginfo_qt_gui_qvector3d_qvector3d_isnull, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QVector3D_QVector3D, x, arginfo_qt_gui_qvector3d_qvector3d_x, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QVector3D_QVector3D, y, arginfo_qt_gui_qvector3d_qvector3d_y, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QVector3D_QVector3D, z, arginfo_qt_gui_qvector3d_qvector3d_z, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QVector3D_QVector3D, setX, arginfo_qt_gui_qvector3d_qvector3d_setx, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QVector3D_QVector3D, setY, arginfo_qt_gui_qvector3d_qvector3d_sety, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QVector3D_QVector3D, setZ, arginfo_qt_gui_qvector3d_qvector3d_setz, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QVector3D_QVector3D, length, arginfo_qt_gui_qvector3d_qvector3d_length, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QVector3D_QVector3D, lengthSquared, arginfo_qt_gui_qvector3d_qvector3d_lengthsquared, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QVector3D_QVector3D, normalized, arginfo_qt_gui_qvector3d_qvector3d_normalized, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QVector3D_QVector3D, normalize, arginfo_qt_gui_qvector3d_qvector3d_normalize, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QVector3D_QVector3D, dotProduct, arginfo_qt_gui_qvector3d_qvector3d_dotproduct, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QVector3D_QVector3D, crossProduct, arginfo_qt_gui_qvector3d_qvector3d_crossproduct, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QVector3D_QVector3D, normal, arginfo_qt_gui_qvector3d_qvector3d_normal, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QVector3D_QVector3D, normalQVector3DQVector3DQVector3D, arginfo_qt_gui_qvector3d_qvector3d_normalqvector3dqvector3dqvector3d, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QVector3D_QVector3D, project, arginfo_qt_gui_qvector3d_qvector3d_project, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QVector3D_QVector3D, unproject, arginfo_qt_gui_qvector3d_qvector3d_unproject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QVector3D_QVector3D, distanceToPoint, arginfo_qt_gui_qvector3d_qvector3d_distancetopoint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QVector3D_QVector3D, distanceToPlane, arginfo_qt_gui_qvector3d_qvector3d_distancetoplane, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QVector3D_QVector3D, distanceToPlaneQVector3DQVector3DQVector3D, arginfo_qt_gui_qvector3d_qvector3d_distancetoplaneqvector3dqvector3dqvector3d, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QVector3D_QVector3D, distanceToLine, arginfo_qt_gui_qvector3d_qvector3d_distancetoline, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QVector3D_QVector3D, toVector2D, arginfo_qt_gui_qvector3d_qvector3d_tovector2d, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QVector3D_QVector3D, toVector4D, arginfo_qt_gui_qvector3d_qvector3d_tovector4d, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QVector3D_QVector3D, toPoint, arginfo_qt_gui_qvector3d_qvector3d_topoint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QVector3D_QVector3D, toPointF, arginfo_qt_gui_qvector3d_qvector3d_topointf, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
