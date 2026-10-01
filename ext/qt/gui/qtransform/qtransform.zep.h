
extern zend_class_entry *qt_gui_qtransform_qtransform_ce;

ZEPHIR_INIT_CLASS(Qt_Gui_QTransform_QTransform);

PHP_METHOD(Qt_Gui_QTransform_QTransform, new_);
PHP_METHOD(Qt_Gui_QTransform_QTransform, new2);
PHP_METHOD(Qt_Gui_QTransform_QTransform, newQrealQrealQrealQrealQrealQrealQrealQrealQreal);
PHP_METHOD(Qt_Gui_QTransform_QTransform, newQrealQrealQrealQrealQrealQreal);
PHP_METHOD(Qt_Gui_QTransform_QTransform, newQTransform);
PHP_METHOD(Qt_Gui_QTransform_QTransform, isAffine);
PHP_METHOD(Qt_Gui_QTransform_QTransform, isIdentity);
PHP_METHOD(Qt_Gui_QTransform_QTransform, isInvertible);
PHP_METHOD(Qt_Gui_QTransform_QTransform, isScaling);
PHP_METHOD(Qt_Gui_QTransform_QTransform, isRotating);
PHP_METHOD(Qt_Gui_QTransform_QTransform, isTranslating);
PHP_METHOD(Qt_Gui_QTransform_QTransform, type);
PHP_METHOD(Qt_Gui_QTransform_QTransform, determinant);
PHP_METHOD(Qt_Gui_QTransform_QTransform, m11);
PHP_METHOD(Qt_Gui_QTransform_QTransform, m12);
PHP_METHOD(Qt_Gui_QTransform_QTransform, m13);
PHP_METHOD(Qt_Gui_QTransform_QTransform, m21);
PHP_METHOD(Qt_Gui_QTransform_QTransform, m22);
PHP_METHOD(Qt_Gui_QTransform_QTransform, m23);
PHP_METHOD(Qt_Gui_QTransform_QTransform, m31);
PHP_METHOD(Qt_Gui_QTransform_QTransform, m32);
PHP_METHOD(Qt_Gui_QTransform_QTransform, m33);
PHP_METHOD(Qt_Gui_QTransform_QTransform, dx);
PHP_METHOD(Qt_Gui_QTransform_QTransform, dy);
PHP_METHOD(Qt_Gui_QTransform_QTransform, setMatrix);
PHP_METHOD(Qt_Gui_QTransform_QTransform, inverted);
PHP_METHOD(Qt_Gui_QTransform_QTransform, adjoint);
PHP_METHOD(Qt_Gui_QTransform_QTransform, transposed);
PHP_METHOD(Qt_Gui_QTransform_QTransform, translate);
PHP_METHOD(Qt_Gui_QTransform_QTransform, scale);
PHP_METHOD(Qt_Gui_QTransform_QTransform, shear);
PHP_METHOD(Qt_Gui_QTransform_QTransform, rotate);
PHP_METHOD(Qt_Gui_QTransform_QTransform, rotateQrealQtAxis);
PHP_METHOD(Qt_Gui_QTransform_QTransform, rotateRadians);
PHP_METHOD(Qt_Gui_QTransform_QTransform, rotateRadiansQrealQtAxis);
PHP_METHOD(Qt_Gui_QTransform_QTransform, squareToQuad);
PHP_METHOD(Qt_Gui_QTransform_QTransform, quadToSquare);
PHP_METHOD(Qt_Gui_QTransform_QTransform, quadToQuad);
PHP_METHOD(Qt_Gui_QTransform_QTransform, reset);
PHP_METHOD(Qt_Gui_QTransform_QTransform, map);
PHP_METHOD(Qt_Gui_QTransform_QTransform, mapQPointF);
PHP_METHOD(Qt_Gui_QTransform_QTransform, mapQLine);
PHP_METHOD(Qt_Gui_QTransform_QTransform, mapQLineF);
PHP_METHOD(Qt_Gui_QTransform_QTransform, mapQPolygonF);
PHP_METHOD(Qt_Gui_QTransform_QTransform, mapQPolygon);
PHP_METHOD(Qt_Gui_QTransform_QTransform, mapQRegion);
PHP_METHOD(Qt_Gui_QTransform_QTransform, mapQPainterPath);
PHP_METHOD(Qt_Gui_QTransform_QTransform, mapToPolygon);
PHP_METHOD(Qt_Gui_QTransform_QTransform, mapRect);
PHP_METHOD(Qt_Gui_QTransform_QTransform, mapRectQRectF);
PHP_METHOD(Qt_Gui_QTransform_QTransform, mapIntIntIntInt);
PHP_METHOD(Qt_Gui_QTransform_QTransform, mapQrealQrealQrealQreal);
PHP_METHOD(Qt_Gui_QTransform_QTransform, fromTranslate);
PHP_METHOD(Qt_Gui_QTransform_QTransform, fromScale);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtransform_qtransform_new_, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtransform_qtransform_new2, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtransform_qtransform_newqrealqrealqrealqrealqrealqrealqrealqrealqreal, 0, 9, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, h11, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, h12, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, h13, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, h21, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, h22, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, h23, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, h31, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, h32, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, h33, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtransform_qtransform_newqrealqrealqrealqrealqrealqreal, 0, 6, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, h11, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, h12, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, h21, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, h22, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, dx, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, dy, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtransform_qtransform_newqtransform, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, other, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtransform_qtransform_isaffine, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtransform_qtransform_isidentity, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtransform_qtransform_isinvertible, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtransform_qtransform_isscaling, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtransform_qtransform_isrotating, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtransform_qtransform_istranslating, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtransform_qtransform_type, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtransform_qtransform_determinant, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtransform_qtransform_m11, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtransform_qtransform_m12, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtransform_qtransform_m13, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtransform_qtransform_m21, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtransform_qtransform_m22, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtransform_qtransform_m23, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtransform_qtransform_m31, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtransform_qtransform_m32, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtransform_qtransform_m33, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtransform_qtransform_dx, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtransform_qtransform_dy, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtransform_qtransform_setmatrix, 0, 10, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, m11, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, m12, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, m13, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, m21, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, m22, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, m23, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, m31, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, m32, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, m33, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtransform_qtransform_inverted, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_INFO(0, invertible)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtransform_qtransform_adjoint, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtransform_qtransform_transposed, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtransform_qtransform_translate, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, dx, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, dy, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtransform_qtransform_scale, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sx, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, sy, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtransform_qtransform_shear, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sh, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, sv, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtransform_qtransform_rotate, 0, 4, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, a, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, axis, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, distanceToPlane, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtransform_qtransform_rotateqrealqtaxis, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, a, IS_DOUBLE, 0)
	ZEND_ARG_INFO(0, axis)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtransform_qtransform_rotateradians, 0, 4, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, a, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, axis, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, distanceToPlane, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtransform_qtransform_rotateradiansqrealqtaxis, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, a, IS_DOUBLE, 0)
	ZEND_ARG_INFO(0, axis)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtransform_qtransform_squaretoquad, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, square, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, result, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtransform_qtransform_quadtosquare, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, quad, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, result, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtransform_qtransform_quadtoquad, 0, 3, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, one, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, two, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, result, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtransform_qtransform_reset, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtransform_qtransform_map, 0, 3, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, pX, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, pY, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtransform_qtransform_mapqpointf, 0, 3, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, pX, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, pY, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtransform_qtransform_mapqline, 0, 5, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, lX1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, lY1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, lX2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, lY2, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtransform_qtransform_mapqlinef, 0, 5, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, lX1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, lY1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, lX2, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, lY2, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtransform_qtransform_mapqpolygonf, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, a, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtransform_qtransform_mapqpolygon, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, a, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtransform_qtransform_mapqregion, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, r, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtransform_qtransform_mapqpainterpath, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, p, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtransform_qtransform_maptopolygon, 0, 5, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rX, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rY, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rWidth, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rHeight, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtransform_qtransform_maprect, 0, 5, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0X, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0Y, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0Width, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0Height, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtransform_qtransform_maprectqrectf, 0, 5, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0X, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, arg0Y, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, arg0Width, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, arg0Height, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtransform_qtransform_mapintintintint, 0, 5, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_LONG, 0)
	ZEND_ARG_INFO(0, tx)
	ZEND_ARG_INFO(0, ty)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtransform_qtransform_mapqrealqrealqrealqreal, 0, 5, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_DOUBLE, 0)
	ZEND_ARG_INFO(0, tx)
	ZEND_ARG_INFO(0, ty)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtransform_qtransform_fromtranslate, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, dx, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, dy, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtransform_qtransform_fromscale, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, dx, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, dy, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_gui_qtransform_qtransform_method_entry) {
	PHP_ME(Qt_Gui_QTransform_QTransform, new_, arginfo_qt_gui_qtransform_qtransform_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTransform_QTransform, new2, arginfo_qt_gui_qtransform_qtransform_new2, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTransform_QTransform, newQrealQrealQrealQrealQrealQrealQrealQrealQreal, arginfo_qt_gui_qtransform_qtransform_newqrealqrealqrealqrealqrealqrealqrealqrealqreal, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTransform_QTransform, newQrealQrealQrealQrealQrealQreal, arginfo_qt_gui_qtransform_qtransform_newqrealqrealqrealqrealqrealqreal, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTransform_QTransform, newQTransform, arginfo_qt_gui_qtransform_qtransform_newqtransform, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTransform_QTransform, isAffine, arginfo_qt_gui_qtransform_qtransform_isaffine, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTransform_QTransform, isIdentity, arginfo_qt_gui_qtransform_qtransform_isidentity, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTransform_QTransform, isInvertible, arginfo_qt_gui_qtransform_qtransform_isinvertible, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTransform_QTransform, isScaling, arginfo_qt_gui_qtransform_qtransform_isscaling, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTransform_QTransform, isRotating, arginfo_qt_gui_qtransform_qtransform_isrotating, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTransform_QTransform, isTranslating, arginfo_qt_gui_qtransform_qtransform_istranslating, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTransform_QTransform, type, arginfo_qt_gui_qtransform_qtransform_type, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTransform_QTransform, determinant, arginfo_qt_gui_qtransform_qtransform_determinant, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTransform_QTransform, m11, arginfo_qt_gui_qtransform_qtransform_m11, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTransform_QTransform, m12, arginfo_qt_gui_qtransform_qtransform_m12, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTransform_QTransform, m13, arginfo_qt_gui_qtransform_qtransform_m13, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTransform_QTransform, m21, arginfo_qt_gui_qtransform_qtransform_m21, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTransform_QTransform, m22, arginfo_qt_gui_qtransform_qtransform_m22, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTransform_QTransform, m23, arginfo_qt_gui_qtransform_qtransform_m23, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTransform_QTransform, m31, arginfo_qt_gui_qtransform_qtransform_m31, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTransform_QTransform, m32, arginfo_qt_gui_qtransform_qtransform_m32, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTransform_QTransform, m33, arginfo_qt_gui_qtransform_qtransform_m33, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTransform_QTransform, dx, arginfo_qt_gui_qtransform_qtransform_dx, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTransform_QTransform, dy, arginfo_qt_gui_qtransform_qtransform_dy, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTransform_QTransform, setMatrix, arginfo_qt_gui_qtransform_qtransform_setmatrix, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTransform_QTransform, inverted, arginfo_qt_gui_qtransform_qtransform_inverted, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTransform_QTransform, adjoint, arginfo_qt_gui_qtransform_qtransform_adjoint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTransform_QTransform, transposed, arginfo_qt_gui_qtransform_qtransform_transposed, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTransform_QTransform, translate, arginfo_qt_gui_qtransform_qtransform_translate, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTransform_QTransform, scale, arginfo_qt_gui_qtransform_qtransform_scale, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTransform_QTransform, shear, arginfo_qt_gui_qtransform_qtransform_shear, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTransform_QTransform, rotate, arginfo_qt_gui_qtransform_qtransform_rotate, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTransform_QTransform, rotateQrealQtAxis, arginfo_qt_gui_qtransform_qtransform_rotateqrealqtaxis, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTransform_QTransform, rotateRadians, arginfo_qt_gui_qtransform_qtransform_rotateradians, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTransform_QTransform, rotateRadiansQrealQtAxis, arginfo_qt_gui_qtransform_qtransform_rotateradiansqrealqtaxis, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTransform_QTransform, squareToQuad, arginfo_qt_gui_qtransform_qtransform_squaretoquad, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTransform_QTransform, quadToSquare, arginfo_qt_gui_qtransform_qtransform_quadtosquare, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTransform_QTransform, quadToQuad, arginfo_qt_gui_qtransform_qtransform_quadtoquad, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTransform_QTransform, reset, arginfo_qt_gui_qtransform_qtransform_reset, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTransform_QTransform, map, arginfo_qt_gui_qtransform_qtransform_map, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTransform_QTransform, mapQPointF, arginfo_qt_gui_qtransform_qtransform_mapqpointf, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTransform_QTransform, mapQLine, arginfo_qt_gui_qtransform_qtransform_mapqline, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTransform_QTransform, mapQLineF, arginfo_qt_gui_qtransform_qtransform_mapqlinef, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTransform_QTransform, mapQPolygonF, arginfo_qt_gui_qtransform_qtransform_mapqpolygonf, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTransform_QTransform, mapQPolygon, arginfo_qt_gui_qtransform_qtransform_mapqpolygon, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTransform_QTransform, mapQRegion, arginfo_qt_gui_qtransform_qtransform_mapqregion, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTransform_QTransform, mapQPainterPath, arginfo_qt_gui_qtransform_qtransform_mapqpainterpath, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTransform_QTransform, mapToPolygon, arginfo_qt_gui_qtransform_qtransform_maptopolygon, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTransform_QTransform, mapRect, arginfo_qt_gui_qtransform_qtransform_maprect, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTransform_QTransform, mapRectQRectF, arginfo_qt_gui_qtransform_qtransform_maprectqrectf, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTransform_QTransform, mapIntIntIntInt, arginfo_qt_gui_qtransform_qtransform_mapintintintint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTransform_QTransform, mapQrealQrealQrealQreal, arginfo_qt_gui_qtransform_qtransform_mapqrealqrealqrealqreal, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTransform_QTransform, fromTranslate, arginfo_qt_gui_qtransform_qtransform_fromtranslate, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTransform_QTransform, fromScale, arginfo_qt_gui_qtransform_qtransform_fromscale, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
