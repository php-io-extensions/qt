
extern zend_class_entry *qt_gui_qmatrix4x4_qmatrix4x4_ce;

ZEPHIR_INIT_CLASS(Qt_Gui_QMatrix4x4_QMatrix4x4);

PHP_METHOD(Qt_Gui_QMatrix4x4_QMatrix4x4, new_);
PHP_METHOD(Qt_Gui_QMatrix4x4_QMatrix4x4, newQtInitialization);
PHP_METHOD(Qt_Gui_QMatrix4x4_QMatrix4x4, newFloat);
PHP_METHOD(Qt_Gui_QMatrix4x4_QMatrix4x4, newFloatFloatFloatFloatFloatFloatFloatFloatFloatFloatFloatFloatFloatFloatFloatFloat);
PHP_METHOD(Qt_Gui_QMatrix4x4_QMatrix4x4, newFloatIntInt);
PHP_METHOD(Qt_Gui_QMatrix4x4_QMatrix4x4, newQTransform);
PHP_METHOD(Qt_Gui_QMatrix4x4_QMatrix4x4, column);
PHP_METHOD(Qt_Gui_QMatrix4x4_QMatrix4x4, setColumn);
PHP_METHOD(Qt_Gui_QMatrix4x4_QMatrix4x4, row);
PHP_METHOD(Qt_Gui_QMatrix4x4_QMatrix4x4, setRow);
PHP_METHOD(Qt_Gui_QMatrix4x4_QMatrix4x4, isAffine);
PHP_METHOD(Qt_Gui_QMatrix4x4_QMatrix4x4, isIdentity);
PHP_METHOD(Qt_Gui_QMatrix4x4_QMatrix4x4, setToIdentity);
PHP_METHOD(Qt_Gui_QMatrix4x4_QMatrix4x4, fill);
PHP_METHOD(Qt_Gui_QMatrix4x4_QMatrix4x4, determinant);
PHP_METHOD(Qt_Gui_QMatrix4x4_QMatrix4x4, inverted);
PHP_METHOD(Qt_Gui_QMatrix4x4_QMatrix4x4, transposed);
PHP_METHOD(Qt_Gui_QMatrix4x4_QMatrix4x4, scale);
PHP_METHOD(Qt_Gui_QMatrix4x4_QMatrix4x4, translate);
PHP_METHOD(Qt_Gui_QMatrix4x4_QMatrix4x4, rotate);
PHP_METHOD(Qt_Gui_QMatrix4x4_QMatrix4x4, scaleFloatFloat);
PHP_METHOD(Qt_Gui_QMatrix4x4_QMatrix4x4, scaleFloatFloatFloat);
PHP_METHOD(Qt_Gui_QMatrix4x4_QMatrix4x4, scaleFloat);
PHP_METHOD(Qt_Gui_QMatrix4x4_QMatrix4x4, translateFloatFloat);
PHP_METHOD(Qt_Gui_QMatrix4x4_QMatrix4x4, translateFloatFloatFloat);
PHP_METHOD(Qt_Gui_QMatrix4x4_QMatrix4x4, rotateFloatFloatFloatFloat);
PHP_METHOD(Qt_Gui_QMatrix4x4_QMatrix4x4, rotateQQuaternion);
PHP_METHOD(Qt_Gui_QMatrix4x4_QMatrix4x4, ortho);
PHP_METHOD(Qt_Gui_QMatrix4x4_QMatrix4x4, orthoQRectF);
PHP_METHOD(Qt_Gui_QMatrix4x4_QMatrix4x4, orthoFloatFloatFloatFloatFloatFloat);
PHP_METHOD(Qt_Gui_QMatrix4x4_QMatrix4x4, frustum);
PHP_METHOD(Qt_Gui_QMatrix4x4_QMatrix4x4, perspective);
PHP_METHOD(Qt_Gui_QMatrix4x4_QMatrix4x4, lookAt);
PHP_METHOD(Qt_Gui_QMatrix4x4_QMatrix4x4, viewport);
PHP_METHOD(Qt_Gui_QMatrix4x4_QMatrix4x4, viewportFloatFloatFloatFloatFloatFloat);
PHP_METHOD(Qt_Gui_QMatrix4x4_QMatrix4x4, flipCoordinates);
PHP_METHOD(Qt_Gui_QMatrix4x4_QMatrix4x4, copyDataTo);
PHP_METHOD(Qt_Gui_QMatrix4x4_QMatrix4x4, toTransform);
PHP_METHOD(Qt_Gui_QMatrix4x4_QMatrix4x4, toTransformFloat);
PHP_METHOD(Qt_Gui_QMatrix4x4_QMatrix4x4, map);
PHP_METHOD(Qt_Gui_QMatrix4x4_QMatrix4x4, mapQPointF);
PHP_METHOD(Qt_Gui_QMatrix4x4_QMatrix4x4, mapQVector3D);
PHP_METHOD(Qt_Gui_QMatrix4x4_QMatrix4x4, mapVector);
PHP_METHOD(Qt_Gui_QMatrix4x4_QMatrix4x4, mapQVector4D);
PHP_METHOD(Qt_Gui_QMatrix4x4_QMatrix4x4, mapRect);
PHP_METHOD(Qt_Gui_QMatrix4x4_QMatrix4x4, mapRectQRectF);
PHP_METHOD(Qt_Gui_QMatrix4x4_QMatrix4x4, optimize);
PHP_METHOD(Qt_Gui_QMatrix4x4_QMatrix4x4, projectedRotate);
PHP_METHOD(Qt_Gui_QMatrix4x4_QMatrix4x4, projectedRotateFloatFloatFloatFloat);
PHP_METHOD(Qt_Gui_QMatrix4x4_QMatrix4x4, flags);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qmatrix4x4_qmatrix4x4_new_, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qmatrix4x4_qmatrix4x4_newqtinitialization, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qmatrix4x4_qmatrix4x4_newfloat, 0, 1, IS_LONG, 0)
	ZEND_ARG_INFO(0, values)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qmatrix4x4_qmatrix4x4_newfloatfloatfloatfloatfloatfloatfloatfloatfloatfloatfloatfloatfloatfloatfloatfloat, 0, 16, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, m11, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, m12, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, m13, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, m14, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, m21, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, m22, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, m23, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, m24, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, m31, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, m32, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, m33, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, m34, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, m41, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, m42, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, m43, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, m44, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qmatrix4x4_qmatrix4x4_newfloatintint, 0, 3, IS_LONG, 0)
	ZEND_ARG_INFO(0, values)
	ZEND_ARG_TYPE_INFO(0, cols, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rows, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qmatrix4x4_qmatrix4x4_newqtransform, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, transform, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qmatrix4x4_qmatrix4x4_column, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qmatrix4x4_qmatrix4x4_setcolumn, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qmatrix4x4_qmatrix4x4_row, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qmatrix4x4_qmatrix4x4_setrow, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qmatrix4x4_qmatrix4x4_isaffine, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qmatrix4x4_qmatrix4x4_isidentity, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qmatrix4x4_qmatrix4x4_settoidentity, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qmatrix4x4_qmatrix4x4_fill, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qmatrix4x4_qmatrix4x4_determinant, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qmatrix4x4_qmatrix4x4_inverted, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_INFO(0, invertible)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qmatrix4x4_qmatrix4x4_transposed, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qmatrix4x4_qmatrix4x4_scale, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, vector, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qmatrix4x4_qmatrix4x4_translate, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, vector, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qmatrix4x4_qmatrix4x4_rotate, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, angle, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, vector, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qmatrix4x4_qmatrix4x4_scalefloatfloat, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qmatrix4x4_qmatrix4x4_scalefloatfloatfloat, 0, 4, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, z, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qmatrix4x4_qmatrix4x4_scalefloat, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, factor, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qmatrix4x4_qmatrix4x4_translatefloatfloat, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qmatrix4x4_qmatrix4x4_translatefloatfloatfloat, 0, 4, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, z, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qmatrix4x4_qmatrix4x4_rotatefloatfloatfloatfloat, 0, 4, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, angle, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, z, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qmatrix4x4_qmatrix4x4_rotateqquaternion, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, quaternion, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qmatrix4x4_qmatrix4x4_ortho, 0, 5, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rectX, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rectY, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rectWidth, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rectHeight, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qmatrix4x4_qmatrix4x4_orthoqrectf, 0, 5, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rectX, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, rectY, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, rectWidth, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, rectHeight, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qmatrix4x4_qmatrix4x4_orthofloatfloatfloatfloatfloatfloat, 0, 7, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, left, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, right, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, bottom, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, top, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, nearPlane, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, farPlane, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qmatrix4x4_qmatrix4x4_frustum, 0, 7, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, left, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, right, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, bottom, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, top, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, nearPlane, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, farPlane, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qmatrix4x4_qmatrix4x4_perspective, 0, 5, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, verticalAngle, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, aspectRatio, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, nearPlane, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, farPlane, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qmatrix4x4_qmatrix4x4_lookat, 0, 4, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, eye, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, center, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, up, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qmatrix4x4_qmatrix4x4_viewport, 0, 5, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rectX, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, rectY, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, rectWidth, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, rectHeight, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qmatrix4x4_qmatrix4x4_viewportfloatfloatfloatfloatfloatfloat, 0, 5, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, left, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, bottom, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, height, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, nearPlane, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, farPlane, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qmatrix4x4_qmatrix4x4_flipcoordinates, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qmatrix4x4_qmatrix4x4_copydatato, 0, 2, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_INFO(0, values)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qmatrix4x4_qmatrix4x4_totransform, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qmatrix4x4_qmatrix4x4_totransformfloat, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, distanceToPlane, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qmatrix4x4_qmatrix4x4_map, 0, 3, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, pointX, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, pointY, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qmatrix4x4_qmatrix4x4_mapqpointf, 0, 3, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, pointX, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, pointY, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qmatrix4x4_qmatrix4x4_mapqvector3d, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, point, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qmatrix4x4_qmatrix4x4_mapvector, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, vector, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qmatrix4x4_qmatrix4x4_mapqvector4d, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, point, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qmatrix4x4_qmatrix4x4_maprect, 0, 5, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rectX, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rectY, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rectWidth, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rectHeight, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qmatrix4x4_qmatrix4x4_maprectqrectf, 0, 5, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rectX, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, rectY, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, rectWidth, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, rectHeight, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qmatrix4x4_qmatrix4x4_optimize, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qmatrix4x4_qmatrix4x4_projectedrotate, 0, 6, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, angle, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, z, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, distanceToPlane, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qmatrix4x4_qmatrix4x4_projectedrotatefloatfloatfloatfloat, 0, 5, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, angle, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, z, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qmatrix4x4_qmatrix4x4_flags, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_gui_qmatrix4x4_qmatrix4x4_method_entry) {
	PHP_ME(Qt_Gui_QMatrix4x4_QMatrix4x4, new_, arginfo_qt_gui_qmatrix4x4_qmatrix4x4_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QMatrix4x4_QMatrix4x4, newQtInitialization, arginfo_qt_gui_qmatrix4x4_qmatrix4x4_newqtinitialization, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QMatrix4x4_QMatrix4x4, newFloat, arginfo_qt_gui_qmatrix4x4_qmatrix4x4_newfloat, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QMatrix4x4_QMatrix4x4, newFloatFloatFloatFloatFloatFloatFloatFloatFloatFloatFloatFloatFloatFloatFloatFloat, arginfo_qt_gui_qmatrix4x4_qmatrix4x4_newfloatfloatfloatfloatfloatfloatfloatfloatfloatfloatfloatfloatfloatfloatfloatfloat, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QMatrix4x4_QMatrix4x4, newFloatIntInt, arginfo_qt_gui_qmatrix4x4_qmatrix4x4_newfloatintint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QMatrix4x4_QMatrix4x4, newQTransform, arginfo_qt_gui_qmatrix4x4_qmatrix4x4_newqtransform, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QMatrix4x4_QMatrix4x4, column, arginfo_qt_gui_qmatrix4x4_qmatrix4x4_column, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QMatrix4x4_QMatrix4x4, setColumn, arginfo_qt_gui_qmatrix4x4_qmatrix4x4_setcolumn, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QMatrix4x4_QMatrix4x4, row, arginfo_qt_gui_qmatrix4x4_qmatrix4x4_row, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QMatrix4x4_QMatrix4x4, setRow, arginfo_qt_gui_qmatrix4x4_qmatrix4x4_setrow, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QMatrix4x4_QMatrix4x4, isAffine, arginfo_qt_gui_qmatrix4x4_qmatrix4x4_isaffine, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QMatrix4x4_QMatrix4x4, isIdentity, arginfo_qt_gui_qmatrix4x4_qmatrix4x4_isidentity, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QMatrix4x4_QMatrix4x4, setToIdentity, arginfo_qt_gui_qmatrix4x4_qmatrix4x4_settoidentity, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QMatrix4x4_QMatrix4x4, fill, arginfo_qt_gui_qmatrix4x4_qmatrix4x4_fill, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QMatrix4x4_QMatrix4x4, determinant, arginfo_qt_gui_qmatrix4x4_qmatrix4x4_determinant, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QMatrix4x4_QMatrix4x4, inverted, arginfo_qt_gui_qmatrix4x4_qmatrix4x4_inverted, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QMatrix4x4_QMatrix4x4, transposed, arginfo_qt_gui_qmatrix4x4_qmatrix4x4_transposed, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QMatrix4x4_QMatrix4x4, scale, arginfo_qt_gui_qmatrix4x4_qmatrix4x4_scale, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QMatrix4x4_QMatrix4x4, translate, arginfo_qt_gui_qmatrix4x4_qmatrix4x4_translate, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QMatrix4x4_QMatrix4x4, rotate, arginfo_qt_gui_qmatrix4x4_qmatrix4x4_rotate, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QMatrix4x4_QMatrix4x4, scaleFloatFloat, arginfo_qt_gui_qmatrix4x4_qmatrix4x4_scalefloatfloat, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QMatrix4x4_QMatrix4x4, scaleFloatFloatFloat, arginfo_qt_gui_qmatrix4x4_qmatrix4x4_scalefloatfloatfloat, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QMatrix4x4_QMatrix4x4, scaleFloat, arginfo_qt_gui_qmatrix4x4_qmatrix4x4_scalefloat, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QMatrix4x4_QMatrix4x4, translateFloatFloat, arginfo_qt_gui_qmatrix4x4_qmatrix4x4_translatefloatfloat, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QMatrix4x4_QMatrix4x4, translateFloatFloatFloat, arginfo_qt_gui_qmatrix4x4_qmatrix4x4_translatefloatfloatfloat, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QMatrix4x4_QMatrix4x4, rotateFloatFloatFloatFloat, arginfo_qt_gui_qmatrix4x4_qmatrix4x4_rotatefloatfloatfloatfloat, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QMatrix4x4_QMatrix4x4, rotateQQuaternion, arginfo_qt_gui_qmatrix4x4_qmatrix4x4_rotateqquaternion, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QMatrix4x4_QMatrix4x4, ortho, arginfo_qt_gui_qmatrix4x4_qmatrix4x4_ortho, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QMatrix4x4_QMatrix4x4, orthoQRectF, arginfo_qt_gui_qmatrix4x4_qmatrix4x4_orthoqrectf, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QMatrix4x4_QMatrix4x4, orthoFloatFloatFloatFloatFloatFloat, arginfo_qt_gui_qmatrix4x4_qmatrix4x4_orthofloatfloatfloatfloatfloatfloat, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QMatrix4x4_QMatrix4x4, frustum, arginfo_qt_gui_qmatrix4x4_qmatrix4x4_frustum, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QMatrix4x4_QMatrix4x4, perspective, arginfo_qt_gui_qmatrix4x4_qmatrix4x4_perspective, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QMatrix4x4_QMatrix4x4, lookAt, arginfo_qt_gui_qmatrix4x4_qmatrix4x4_lookat, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QMatrix4x4_QMatrix4x4, viewport, arginfo_qt_gui_qmatrix4x4_qmatrix4x4_viewport, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QMatrix4x4_QMatrix4x4, viewportFloatFloatFloatFloatFloatFloat, arginfo_qt_gui_qmatrix4x4_qmatrix4x4_viewportfloatfloatfloatfloatfloatfloat, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QMatrix4x4_QMatrix4x4, flipCoordinates, arginfo_qt_gui_qmatrix4x4_qmatrix4x4_flipcoordinates, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QMatrix4x4_QMatrix4x4, copyDataTo, arginfo_qt_gui_qmatrix4x4_qmatrix4x4_copydatato, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QMatrix4x4_QMatrix4x4, toTransform, arginfo_qt_gui_qmatrix4x4_qmatrix4x4_totransform, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QMatrix4x4_QMatrix4x4, toTransformFloat, arginfo_qt_gui_qmatrix4x4_qmatrix4x4_totransformfloat, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QMatrix4x4_QMatrix4x4, map, arginfo_qt_gui_qmatrix4x4_qmatrix4x4_map, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QMatrix4x4_QMatrix4x4, mapQPointF, arginfo_qt_gui_qmatrix4x4_qmatrix4x4_mapqpointf, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QMatrix4x4_QMatrix4x4, mapQVector3D, arginfo_qt_gui_qmatrix4x4_qmatrix4x4_mapqvector3d, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QMatrix4x4_QMatrix4x4, mapVector, arginfo_qt_gui_qmatrix4x4_qmatrix4x4_mapvector, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QMatrix4x4_QMatrix4x4, mapQVector4D, arginfo_qt_gui_qmatrix4x4_qmatrix4x4_mapqvector4d, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QMatrix4x4_QMatrix4x4, mapRect, arginfo_qt_gui_qmatrix4x4_qmatrix4x4_maprect, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QMatrix4x4_QMatrix4x4, mapRectQRectF, arginfo_qt_gui_qmatrix4x4_qmatrix4x4_maprectqrectf, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QMatrix4x4_QMatrix4x4, optimize, arginfo_qt_gui_qmatrix4x4_qmatrix4x4_optimize, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QMatrix4x4_QMatrix4x4, projectedRotate, arginfo_qt_gui_qmatrix4x4_qmatrix4x4_projectedrotate, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QMatrix4x4_QMatrix4x4, projectedRotateFloatFloatFloatFloat, arginfo_qt_gui_qmatrix4x4_qmatrix4x4_projectedrotatefloatfloatfloatfloat, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QMatrix4x4_QMatrix4x4, flags, arginfo_qt_gui_qmatrix4x4_qmatrix4x4_flags, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
