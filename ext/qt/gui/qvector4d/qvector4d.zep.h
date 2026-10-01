
extern zend_class_entry *qt_gui_qvector4d_qvector4d_ce;

ZEPHIR_INIT_CLASS(Qt_Gui_QVector4D_QVector4D);

PHP_METHOD(Qt_Gui_QVector4D_QVector4D, new_);
PHP_METHOD(Qt_Gui_QVector4D_QVector4D, newQtInitialization);
PHP_METHOD(Qt_Gui_QVector4D_QVector4D, newFloatFloatFloatFloat);
PHP_METHOD(Qt_Gui_QVector4D_QVector4D, newQPoint);
PHP_METHOD(Qt_Gui_QVector4D_QVector4D, newQPointF);
PHP_METHOD(Qt_Gui_QVector4D_QVector4D, newQVector2D);
PHP_METHOD(Qt_Gui_QVector4D_QVector4D, newQVector2DFloatFloat);
PHP_METHOD(Qt_Gui_QVector4D_QVector4D, newQVector3D);
PHP_METHOD(Qt_Gui_QVector4D_QVector4D, newQVector3DFloat);
PHP_METHOD(Qt_Gui_QVector4D_QVector4D, isNull);
PHP_METHOD(Qt_Gui_QVector4D_QVector4D, x);
PHP_METHOD(Qt_Gui_QVector4D_QVector4D, y);
PHP_METHOD(Qt_Gui_QVector4D_QVector4D, z);
PHP_METHOD(Qt_Gui_QVector4D_QVector4D, w);
PHP_METHOD(Qt_Gui_QVector4D_QVector4D, setX);
PHP_METHOD(Qt_Gui_QVector4D_QVector4D, setY);
PHP_METHOD(Qt_Gui_QVector4D_QVector4D, setZ);
PHP_METHOD(Qt_Gui_QVector4D_QVector4D, setW);
PHP_METHOD(Qt_Gui_QVector4D_QVector4D, length);
PHP_METHOD(Qt_Gui_QVector4D_QVector4D, lengthSquared);
PHP_METHOD(Qt_Gui_QVector4D_QVector4D, normalized);
PHP_METHOD(Qt_Gui_QVector4D_QVector4D, normalize);
PHP_METHOD(Qt_Gui_QVector4D_QVector4D, dotProduct);
PHP_METHOD(Qt_Gui_QVector4D_QVector4D, toVector2D);
PHP_METHOD(Qt_Gui_QVector4D_QVector4D, toVector2DAffine);
PHP_METHOD(Qt_Gui_QVector4D_QVector4D, toVector3D);
PHP_METHOD(Qt_Gui_QVector4D_QVector4D, toVector3DAffine);
PHP_METHOD(Qt_Gui_QVector4D_QVector4D, toPoint);
PHP_METHOD(Qt_Gui_QVector4D_QVector4D, toPointF);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qvector4d_qvector4d_new_, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qvector4d_qvector4d_newqtinitialization, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qvector4d_qvector4d_newfloatfloatfloatfloat, 0, 4, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, xpos, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, ypos, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, zpos, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, wpos, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qvector4d_qvector4d_newqpoint, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, pointX, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, pointY, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qvector4d_qvector4d_newqpointf, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, pointX, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, pointY, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qvector4d_qvector4d_newqvector2d, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, vector, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qvector4d_qvector4d_newqvector2dfloatfloat, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, vector, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, zpos, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, wpos, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qvector4d_qvector4d_newqvector3d, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, vector, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qvector4d_qvector4d_newqvector3dfloat, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, vector, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, wpos, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qvector4d_qvector4d_isnull, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qvector4d_qvector4d_x, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qvector4d_qvector4d_y, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qvector4d_qvector4d_z, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qvector4d_qvector4d_w, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qvector4d_qvector4d_setx, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qvector4d_qvector4d_sety, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qvector4d_qvector4d_setz, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, z, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qvector4d_qvector4d_setw, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, w, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qvector4d_qvector4d_length, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qvector4d_qvector4d_lengthsquared, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qvector4d_qvector4d_normalized, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qvector4d_qvector4d_normalize, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qvector4d_qvector4d_dotproduct, 0, 2, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, v1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, v2, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qvector4d_qvector4d_tovector2d, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qvector4d_qvector4d_tovector2daffine, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qvector4d_qvector4d_tovector3d, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qvector4d_qvector4d_tovector3daffine, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qvector4d_qvector4d_topoint, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qvector4d_qvector4d_topointf, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_gui_qvector4d_qvector4d_method_entry) {
	PHP_ME(Qt_Gui_QVector4D_QVector4D, new_, arginfo_qt_gui_qvector4d_qvector4d_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QVector4D_QVector4D, newQtInitialization, arginfo_qt_gui_qvector4d_qvector4d_newqtinitialization, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QVector4D_QVector4D, newFloatFloatFloatFloat, arginfo_qt_gui_qvector4d_qvector4d_newfloatfloatfloatfloat, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QVector4D_QVector4D, newQPoint, arginfo_qt_gui_qvector4d_qvector4d_newqpoint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QVector4D_QVector4D, newQPointF, arginfo_qt_gui_qvector4d_qvector4d_newqpointf, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QVector4D_QVector4D, newQVector2D, arginfo_qt_gui_qvector4d_qvector4d_newqvector2d, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QVector4D_QVector4D, newQVector2DFloatFloat, arginfo_qt_gui_qvector4d_qvector4d_newqvector2dfloatfloat, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QVector4D_QVector4D, newQVector3D, arginfo_qt_gui_qvector4d_qvector4d_newqvector3d, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QVector4D_QVector4D, newQVector3DFloat, arginfo_qt_gui_qvector4d_qvector4d_newqvector3dfloat, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QVector4D_QVector4D, isNull, arginfo_qt_gui_qvector4d_qvector4d_isnull, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QVector4D_QVector4D, x, arginfo_qt_gui_qvector4d_qvector4d_x, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QVector4D_QVector4D, y, arginfo_qt_gui_qvector4d_qvector4d_y, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QVector4D_QVector4D, z, arginfo_qt_gui_qvector4d_qvector4d_z, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QVector4D_QVector4D, w, arginfo_qt_gui_qvector4d_qvector4d_w, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QVector4D_QVector4D, setX, arginfo_qt_gui_qvector4d_qvector4d_setx, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QVector4D_QVector4D, setY, arginfo_qt_gui_qvector4d_qvector4d_sety, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QVector4D_QVector4D, setZ, arginfo_qt_gui_qvector4d_qvector4d_setz, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QVector4D_QVector4D, setW, arginfo_qt_gui_qvector4d_qvector4d_setw, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QVector4D_QVector4D, length, arginfo_qt_gui_qvector4d_qvector4d_length, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QVector4D_QVector4D, lengthSquared, arginfo_qt_gui_qvector4d_qvector4d_lengthsquared, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QVector4D_QVector4D, normalized, arginfo_qt_gui_qvector4d_qvector4d_normalized, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QVector4D_QVector4D, normalize, arginfo_qt_gui_qvector4d_qvector4d_normalize, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QVector4D_QVector4D, dotProduct, arginfo_qt_gui_qvector4d_qvector4d_dotproduct, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QVector4D_QVector4D, toVector2D, arginfo_qt_gui_qvector4d_qvector4d_tovector2d, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QVector4D_QVector4D, toVector2DAffine, arginfo_qt_gui_qvector4d_qvector4d_tovector2daffine, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QVector4D_QVector4D, toVector3D, arginfo_qt_gui_qvector4d_qvector4d_tovector3d, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QVector4D_QVector4D, toVector3DAffine, arginfo_qt_gui_qvector4d_qvector4d_tovector3daffine, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QVector4D_QVector4D, toPoint, arginfo_qt_gui_qvector4d_qvector4d_topoint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QVector4D_QVector4D, toPointF, arginfo_qt_gui_qvector4d_qvector4d_topointf, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
