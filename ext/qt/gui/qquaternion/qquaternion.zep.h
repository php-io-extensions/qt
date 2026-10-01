
extern zend_class_entry *qt_gui_qquaternion_qquaternion_ce;

ZEPHIR_INIT_CLASS(Qt_Gui_QQuaternion_QQuaternion);

PHP_METHOD(Qt_Gui_QQuaternion_QQuaternion, new_);
PHP_METHOD(Qt_Gui_QQuaternion_QQuaternion, newQtInitialization);
PHP_METHOD(Qt_Gui_QQuaternion_QQuaternion, newFloatFloatFloatFloat);
PHP_METHOD(Qt_Gui_QQuaternion_QQuaternion, newFloatQVector3D);
PHP_METHOD(Qt_Gui_QQuaternion_QQuaternion, newQVector4D);
PHP_METHOD(Qt_Gui_QQuaternion_QQuaternion, isNull);
PHP_METHOD(Qt_Gui_QQuaternion_QQuaternion, isIdentity);
PHP_METHOD(Qt_Gui_QQuaternion_QQuaternion, vector);
PHP_METHOD(Qt_Gui_QQuaternion_QQuaternion, setVector);
PHP_METHOD(Qt_Gui_QQuaternion_QQuaternion, setVectorFloatFloatFloat);
PHP_METHOD(Qt_Gui_QQuaternion_QQuaternion, x);
PHP_METHOD(Qt_Gui_QQuaternion_QQuaternion, y);
PHP_METHOD(Qt_Gui_QQuaternion_QQuaternion, z);
PHP_METHOD(Qt_Gui_QQuaternion_QQuaternion, scalar);
PHP_METHOD(Qt_Gui_QQuaternion_QQuaternion, setX);
PHP_METHOD(Qt_Gui_QQuaternion_QQuaternion, setY);
PHP_METHOD(Qt_Gui_QQuaternion_QQuaternion, setZ);
PHP_METHOD(Qt_Gui_QQuaternion_QQuaternion, setScalar);
PHP_METHOD(Qt_Gui_QQuaternion_QQuaternion, dotProduct);
PHP_METHOD(Qt_Gui_QQuaternion_QQuaternion, length);
PHP_METHOD(Qt_Gui_QQuaternion_QQuaternion, lengthSquared);
PHP_METHOD(Qt_Gui_QQuaternion_QQuaternion, normalized);
PHP_METHOD(Qt_Gui_QQuaternion_QQuaternion, normalize);
PHP_METHOD(Qt_Gui_QQuaternion_QQuaternion, inverted);
PHP_METHOD(Qt_Gui_QQuaternion_QQuaternion, conjugated);
PHP_METHOD(Qt_Gui_QQuaternion_QQuaternion, rotatedVector);
PHP_METHOD(Qt_Gui_QQuaternion_QQuaternion, toVector4D);
PHP_METHOD(Qt_Gui_QQuaternion_QQuaternion, getAxisAndAngle);
PHP_METHOD(Qt_Gui_QQuaternion_QQuaternion, fromAxisAndAngle);
PHP_METHOD(Qt_Gui_QQuaternion_QQuaternion, getAxisAndAngleFloatFloatFloatFloat);
PHP_METHOD(Qt_Gui_QQuaternion_QQuaternion, fromAxisAndAngleFloatFloatFloatFloat);
PHP_METHOD(Qt_Gui_QQuaternion_QQuaternion, toEulerAngles);
PHP_METHOD(Qt_Gui_QQuaternion_QQuaternion, fromEulerAngles);
PHP_METHOD(Qt_Gui_QQuaternion_QQuaternion, getEulerAngles);
PHP_METHOD(Qt_Gui_QQuaternion_QQuaternion, fromEulerAnglesFloatFloatFloat);
PHP_METHOD(Qt_Gui_QQuaternion_QQuaternion, getAxes);
PHP_METHOD(Qt_Gui_QQuaternion_QQuaternion, fromAxes);
PHP_METHOD(Qt_Gui_QQuaternion_QQuaternion, fromDirection);
PHP_METHOD(Qt_Gui_QQuaternion_QQuaternion, rotationTo);
PHP_METHOD(Qt_Gui_QQuaternion_QQuaternion, slerp);
PHP_METHOD(Qt_Gui_QQuaternion_QQuaternion, nlerp);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qquaternion_qquaternion_new_, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qquaternion_qquaternion_newqtinitialization, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qquaternion_qquaternion_newfloatfloatfloatfloat, 0, 4, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, scalar, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, xpos, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, ypos, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, zpos, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qquaternion_qquaternion_newfloatqvector3d, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, scalar, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, vector, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qquaternion_qquaternion_newqvector4d, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, vector, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qquaternion_qquaternion_isnull, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qquaternion_qquaternion_isidentity, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qquaternion_qquaternion_vector, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qquaternion_qquaternion_setvector, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, vector, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qquaternion_qquaternion_setvectorfloatfloatfloat, 0, 4, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, z, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qquaternion_qquaternion_x, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qquaternion_qquaternion_y, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qquaternion_qquaternion_z, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qquaternion_qquaternion_scalar, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qquaternion_qquaternion_setx, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qquaternion_qquaternion_sety, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qquaternion_qquaternion_setz, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, z, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qquaternion_qquaternion_setscalar, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, scalar, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qquaternion_qquaternion_dotproduct, 0, 2, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, q1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, q2, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qquaternion_qquaternion_length, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qquaternion_qquaternion_lengthsquared, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qquaternion_qquaternion_normalized, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qquaternion_qquaternion_normalize, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qquaternion_qquaternion_inverted, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qquaternion_qquaternion_conjugated, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qquaternion_qquaternion_rotatedvector, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, vector, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qquaternion_qquaternion_tovector4d, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qquaternion_qquaternion_getaxisandangle, 0, 3, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, axis, IS_LONG, 0)
	ZEND_ARG_INFO(0, angle)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qquaternion_qquaternion_fromaxisandangle, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, axis, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, angle, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qquaternion_qquaternion_getaxisandanglefloatfloatfloatfloat, 0, 5, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_INFO(0, x)
	ZEND_ARG_INFO(0, y)
	ZEND_ARG_INFO(0, z)
	ZEND_ARG_INFO(0, angle)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qquaternion_qquaternion_fromaxisandanglefloatfloatfloatfloat, 0, 4, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, z, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, angle, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qquaternion_qquaternion_toeulerangles, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qquaternion_qquaternion_fromeulerangles, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, eulerAngles, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qquaternion_qquaternion_geteulerangles, 0, 4, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_INFO(0, pitch)
	ZEND_ARG_INFO(0, yaw)
	ZEND_ARG_INFO(0, roll)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qquaternion_qquaternion_fromeuleranglesfloatfloatfloat, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, pitch, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, yaw, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, roll, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qquaternion_qquaternion_getaxes, 0, 4, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, xAxis, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, yAxis, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, zAxis, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qquaternion_qquaternion_fromaxes, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, xAxis, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, yAxis, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, zAxis, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qquaternion_qquaternion_fromdirection, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, direction, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, up, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qquaternion_qquaternion_rotationto, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, from, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, to, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qquaternion_qquaternion_slerp, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, q1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, q2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, t, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qquaternion_qquaternion_nlerp, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, q1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, q2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, t, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_gui_qquaternion_qquaternion_method_entry) {
	PHP_ME(Qt_Gui_QQuaternion_QQuaternion, new_, arginfo_qt_gui_qquaternion_qquaternion_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QQuaternion_QQuaternion, newQtInitialization, arginfo_qt_gui_qquaternion_qquaternion_newqtinitialization, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QQuaternion_QQuaternion, newFloatFloatFloatFloat, arginfo_qt_gui_qquaternion_qquaternion_newfloatfloatfloatfloat, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QQuaternion_QQuaternion, newFloatQVector3D, arginfo_qt_gui_qquaternion_qquaternion_newfloatqvector3d, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QQuaternion_QQuaternion, newQVector4D, arginfo_qt_gui_qquaternion_qquaternion_newqvector4d, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QQuaternion_QQuaternion, isNull, arginfo_qt_gui_qquaternion_qquaternion_isnull, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QQuaternion_QQuaternion, isIdentity, arginfo_qt_gui_qquaternion_qquaternion_isidentity, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QQuaternion_QQuaternion, vector, arginfo_qt_gui_qquaternion_qquaternion_vector, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QQuaternion_QQuaternion, setVector, arginfo_qt_gui_qquaternion_qquaternion_setvector, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QQuaternion_QQuaternion, setVectorFloatFloatFloat, arginfo_qt_gui_qquaternion_qquaternion_setvectorfloatfloatfloat, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QQuaternion_QQuaternion, x, arginfo_qt_gui_qquaternion_qquaternion_x, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QQuaternion_QQuaternion, y, arginfo_qt_gui_qquaternion_qquaternion_y, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QQuaternion_QQuaternion, z, arginfo_qt_gui_qquaternion_qquaternion_z, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QQuaternion_QQuaternion, scalar, arginfo_qt_gui_qquaternion_qquaternion_scalar, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QQuaternion_QQuaternion, setX, arginfo_qt_gui_qquaternion_qquaternion_setx, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QQuaternion_QQuaternion, setY, arginfo_qt_gui_qquaternion_qquaternion_sety, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QQuaternion_QQuaternion, setZ, arginfo_qt_gui_qquaternion_qquaternion_setz, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QQuaternion_QQuaternion, setScalar, arginfo_qt_gui_qquaternion_qquaternion_setscalar, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QQuaternion_QQuaternion, dotProduct, arginfo_qt_gui_qquaternion_qquaternion_dotproduct, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QQuaternion_QQuaternion, length, arginfo_qt_gui_qquaternion_qquaternion_length, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QQuaternion_QQuaternion, lengthSquared, arginfo_qt_gui_qquaternion_qquaternion_lengthsquared, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QQuaternion_QQuaternion, normalized, arginfo_qt_gui_qquaternion_qquaternion_normalized, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QQuaternion_QQuaternion, normalize, arginfo_qt_gui_qquaternion_qquaternion_normalize, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QQuaternion_QQuaternion, inverted, arginfo_qt_gui_qquaternion_qquaternion_inverted, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QQuaternion_QQuaternion, conjugated, arginfo_qt_gui_qquaternion_qquaternion_conjugated, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QQuaternion_QQuaternion, rotatedVector, arginfo_qt_gui_qquaternion_qquaternion_rotatedvector, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QQuaternion_QQuaternion, toVector4D, arginfo_qt_gui_qquaternion_qquaternion_tovector4d, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QQuaternion_QQuaternion, getAxisAndAngle, arginfo_qt_gui_qquaternion_qquaternion_getaxisandangle, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QQuaternion_QQuaternion, fromAxisAndAngle, arginfo_qt_gui_qquaternion_qquaternion_fromaxisandangle, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QQuaternion_QQuaternion, getAxisAndAngleFloatFloatFloatFloat, arginfo_qt_gui_qquaternion_qquaternion_getaxisandanglefloatfloatfloatfloat, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QQuaternion_QQuaternion, fromAxisAndAngleFloatFloatFloatFloat, arginfo_qt_gui_qquaternion_qquaternion_fromaxisandanglefloatfloatfloatfloat, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QQuaternion_QQuaternion, toEulerAngles, arginfo_qt_gui_qquaternion_qquaternion_toeulerangles, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QQuaternion_QQuaternion, fromEulerAngles, arginfo_qt_gui_qquaternion_qquaternion_fromeulerangles, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QQuaternion_QQuaternion, getEulerAngles, arginfo_qt_gui_qquaternion_qquaternion_geteulerangles, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QQuaternion_QQuaternion, fromEulerAnglesFloatFloatFloat, arginfo_qt_gui_qquaternion_qquaternion_fromeuleranglesfloatfloatfloat, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QQuaternion_QQuaternion, getAxes, arginfo_qt_gui_qquaternion_qquaternion_getaxes, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QQuaternion_QQuaternion, fromAxes, arginfo_qt_gui_qquaternion_qquaternion_fromaxes, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QQuaternion_QQuaternion, fromDirection, arginfo_qt_gui_qquaternion_qquaternion_fromdirection, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QQuaternion_QQuaternion, rotationTo, arginfo_qt_gui_qquaternion_qquaternion_rotationto, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QQuaternion_QQuaternion, slerp, arginfo_qt_gui_qquaternion_qquaternion_slerp, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QQuaternion_QQuaternion, nlerp, arginfo_qt_gui_qquaternion_qquaternion_nlerp, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
