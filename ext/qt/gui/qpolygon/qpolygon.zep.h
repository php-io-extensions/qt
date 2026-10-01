
extern zend_class_entry *qt_gui_qpolygon_qpolygon_ce;

ZEPHIR_INIT_CLASS(Qt_Gui_QPolygon_QPolygon);

PHP_METHOD(Qt_Gui_QPolygon_QPolygon, new_);
PHP_METHOD(Qt_Gui_QPolygon_QPolygon, newQListQPoint);
PHP_METHOD(Qt_Gui_QPolygon_QPolygon, newQRectBool);
PHP_METHOD(Qt_Gui_QPolygon_QPolygon, newIntInt);
PHP_METHOD(Qt_Gui_QPolygon_QPolygon, swap);
PHP_METHOD(Qt_Gui_QPolygon_QPolygon, translate);
PHP_METHOD(Qt_Gui_QPolygon_QPolygon, translateQPoint);
PHP_METHOD(Qt_Gui_QPolygon_QPolygon, translated);
PHP_METHOD(Qt_Gui_QPolygon_QPolygon, translatedQPoint);
PHP_METHOD(Qt_Gui_QPolygon_QPolygon, boundingRect);
PHP_METHOD(Qt_Gui_QPolygon_QPolygon, point);
PHP_METHOD(Qt_Gui_QPolygon_QPolygon, pointInt);
PHP_METHOD(Qt_Gui_QPolygon_QPolygon, setPoint);
PHP_METHOD(Qt_Gui_QPolygon_QPolygon, setPointIntQPoint);
PHP_METHOD(Qt_Gui_QPolygon_QPolygon, setPoints);
PHP_METHOD(Qt_Gui_QPolygon_QPolygon, setPointsIntIntInt);
PHP_METHOD(Qt_Gui_QPolygon_QPolygon, putPoints);
PHP_METHOD(Qt_Gui_QPolygon_QPolygon, putPointsIntIntIntInt);
PHP_METHOD(Qt_Gui_QPolygon_QPolygon, putPointsIntIntQPolygonInt);
PHP_METHOD(Qt_Gui_QPolygon_QPolygon, containsPoint);
PHP_METHOD(Qt_Gui_QPolygon_QPolygon, united);
PHP_METHOD(Qt_Gui_QPolygon_QPolygon, intersected);
PHP_METHOD(Qt_Gui_QPolygon_QPolygon, subtracted);
PHP_METHOD(Qt_Gui_QPolygon_QPolygon, intersects);
PHP_METHOD(Qt_Gui_QPolygon_QPolygon, toPolygonF);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpolygon_qpolygon_new_, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpolygon_qpolygon_newqlistqpoint, 0, 1, IS_LONG, 0)
	ZEND_ARG_ARRAY_INFO(0, v, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpolygon_qpolygon_newqrectbool, 0, 4, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rX, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rY, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rWidth, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rHeight, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, closed, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpolygon_qpolygon_newintint, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, nPoints, IS_LONG, 0)
	ZEND_ARG_INFO(0, points)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpolygon_qpolygon_swap, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, other, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpolygon_qpolygon_translate, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, dx, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, dy, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpolygon_qpolygon_translateqpoint, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, offsetX, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, offsetY, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpolygon_qpolygon_translated, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, dx, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, dy, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpolygon_qpolygon_translatedqpoint, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, offsetX, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, offsetY, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpolygon_qpolygon_boundingrect, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpolygon_qpolygon_point, 0, 4, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, i, IS_LONG, 0)
	ZEND_ARG_INFO(0, x)
	ZEND_ARG_INFO(0, y)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpolygon_qpolygon_pointint, 0, 2, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, i, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpolygon_qpolygon_setpoint, 0, 4, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpolygon_qpolygon_setpointintqpoint, 0, 4, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, pX, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, pY, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpolygon_qpolygon_setpoints, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, nPoints, IS_LONG, 0)
	ZEND_ARG_INFO(0, points)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpolygon_qpolygon_setpointsintintint, 0, 4, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, nPoints, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, firstx, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, firsty, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpolygon_qpolygon_putpoints, 0, 4, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, nPoints, IS_LONG, 0)
	ZEND_ARG_INFO(0, points)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpolygon_qpolygon_putpointsintintintint, 0, 5, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, nPoints, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, firstx, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, firsty, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpolygon_qpolygon_putpointsintintqpolygonint, 0, 4, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, nPoints, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, from, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, fromIndex, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpolygon_qpolygon_containspoint, 0, 4, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, ptX, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, ptY, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, fillRule, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpolygon_qpolygon_united, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, r, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpolygon_qpolygon_intersected, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, r, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpolygon_qpolygon_subtracted, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, r, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpolygon_qpolygon_intersects, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, r, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpolygon_qpolygon_topolygonf, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_gui_qpolygon_qpolygon_method_entry) {
	PHP_ME(Qt_Gui_QPolygon_QPolygon, new_, arginfo_qt_gui_qpolygon_qpolygon_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPolygon_QPolygon, newQListQPoint, arginfo_qt_gui_qpolygon_qpolygon_newqlistqpoint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPolygon_QPolygon, newQRectBool, arginfo_qt_gui_qpolygon_qpolygon_newqrectbool, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPolygon_QPolygon, newIntInt, arginfo_qt_gui_qpolygon_qpolygon_newintint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPolygon_QPolygon, swap, arginfo_qt_gui_qpolygon_qpolygon_swap, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPolygon_QPolygon, translate, arginfo_qt_gui_qpolygon_qpolygon_translate, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPolygon_QPolygon, translateQPoint, arginfo_qt_gui_qpolygon_qpolygon_translateqpoint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPolygon_QPolygon, translated, arginfo_qt_gui_qpolygon_qpolygon_translated, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPolygon_QPolygon, translatedQPoint, arginfo_qt_gui_qpolygon_qpolygon_translatedqpoint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPolygon_QPolygon, boundingRect, arginfo_qt_gui_qpolygon_qpolygon_boundingrect, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPolygon_QPolygon, point, arginfo_qt_gui_qpolygon_qpolygon_point, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPolygon_QPolygon, pointInt, arginfo_qt_gui_qpolygon_qpolygon_pointint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPolygon_QPolygon, setPoint, arginfo_qt_gui_qpolygon_qpolygon_setpoint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPolygon_QPolygon, setPointIntQPoint, arginfo_qt_gui_qpolygon_qpolygon_setpointintqpoint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPolygon_QPolygon, setPoints, arginfo_qt_gui_qpolygon_qpolygon_setpoints, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPolygon_QPolygon, setPointsIntIntInt, arginfo_qt_gui_qpolygon_qpolygon_setpointsintintint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPolygon_QPolygon, putPoints, arginfo_qt_gui_qpolygon_qpolygon_putpoints, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPolygon_QPolygon, putPointsIntIntIntInt, arginfo_qt_gui_qpolygon_qpolygon_putpointsintintintint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPolygon_QPolygon, putPointsIntIntQPolygonInt, arginfo_qt_gui_qpolygon_qpolygon_putpointsintintqpolygonint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPolygon_QPolygon, containsPoint, arginfo_qt_gui_qpolygon_qpolygon_containspoint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPolygon_QPolygon, united, arginfo_qt_gui_qpolygon_qpolygon_united, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPolygon_QPolygon, intersected, arginfo_qt_gui_qpolygon_qpolygon_intersected, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPolygon_QPolygon, subtracted, arginfo_qt_gui_qpolygon_qpolygon_subtracted, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPolygon_QPolygon, intersects, arginfo_qt_gui_qpolygon_qpolygon_intersects, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPolygon_QPolygon, toPolygonF, arginfo_qt_gui_qpolygon_qpolygon_topolygonf, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
