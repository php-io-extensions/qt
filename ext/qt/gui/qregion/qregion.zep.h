
extern zend_class_entry *qt_gui_qregion_qregion_ce;

ZEPHIR_INIT_CLASS(Qt_Gui_QRegion_QRegion);

PHP_METHOD(Qt_Gui_QRegion_QRegion, new_);
PHP_METHOD(Qt_Gui_QRegion_QRegion, newIntIntIntIntQRegionRegionType);
PHP_METHOD(Qt_Gui_QRegion_QRegion, newQRectQRegionRegionType);
PHP_METHOD(Qt_Gui_QRegion_QRegion, newQPolygonQtFillRule);
PHP_METHOD(Qt_Gui_QRegion_QRegion, newQRegion);
PHP_METHOD(Qt_Gui_QRegion_QRegion, newQBitmap);
PHP_METHOD(Qt_Gui_QRegion_QRegion, swap);
PHP_METHOD(Qt_Gui_QRegion_QRegion, isEmpty);
PHP_METHOD(Qt_Gui_QRegion_QRegion, isNull);
PHP_METHOD(Qt_Gui_QRegion_QRegion, contains);
PHP_METHOD(Qt_Gui_QRegion_QRegion, containsQRect);
PHP_METHOD(Qt_Gui_QRegion_QRegion, translate);
PHP_METHOD(Qt_Gui_QRegion_QRegion, translateQPoint);
PHP_METHOD(Qt_Gui_QRegion_QRegion, translated);
PHP_METHOD(Qt_Gui_QRegion_QRegion, translatedQPoint);
PHP_METHOD(Qt_Gui_QRegion_QRegion, united);
PHP_METHOD(Qt_Gui_QRegion_QRegion, unitedQRect);
PHP_METHOD(Qt_Gui_QRegion_QRegion, intersected);
PHP_METHOD(Qt_Gui_QRegion_QRegion, intersectedQRect);
PHP_METHOD(Qt_Gui_QRegion_QRegion, subtracted);
PHP_METHOD(Qt_Gui_QRegion_QRegion, xored);
PHP_METHOD(Qt_Gui_QRegion_QRegion, intersects);
PHP_METHOD(Qt_Gui_QRegion_QRegion, intersectsQRect);
PHP_METHOD(Qt_Gui_QRegion_QRegion, boundingRect);
PHP_METHOD(Qt_Gui_QRegion_QRegion, setRects);
PHP_METHOD(Qt_Gui_QRegion_QRegion, rectCount);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qregion_qregion_new_, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qregion_qregion_newintintintintqregionregiontype, 0, 4, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, w, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, h, IS_LONG, 0)
	ZEND_ARG_INFO(0, t)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qregion_qregion_newqrectqregionregiontype, 0, 4, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rX, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rY, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rWidth, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rHeight, IS_LONG, 0)
	ZEND_ARG_INFO(0, t)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qregion_qregion_newqpolygonqtfillrule, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, pa, IS_LONG, 0)
	ZEND_ARG_INFO(0, fillRule)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qregion_qregion_newqregion, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, region, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qregion_qregion_newqbitmap, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, bitmap, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qregion_qregion_swap, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, other, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qregion_qregion_isempty, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qregion_qregion_isnull, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qregion_qregion_contains, 0, 3, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, pX, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, pY, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qregion_qregion_containsqrect, 0, 5, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rX, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rY, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rWidth, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rHeight, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qregion_qregion_translate, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, dx, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, dy, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qregion_qregion_translateqpoint, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, pX, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, pY, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qregion_qregion_translated, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, dx, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, dy, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qregion_qregion_translatedqpoint, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, pX, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, pY, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qregion_qregion_united, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, r, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qregion_qregion_unitedqrect, 0, 5, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rX, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rY, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rWidth, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rHeight, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qregion_qregion_intersected, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, r, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qregion_qregion_intersectedqrect, 0, 5, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rX, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rY, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rWidth, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rHeight, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qregion_qregion_subtracted, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, r, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qregion_qregion_xored, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, r, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qregion_qregion_intersects, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, r, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qregion_qregion_intersectsqrect, 0, 5, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rX, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rY, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rWidth, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rHeight, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qregion_qregion_boundingrect, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qregion_qregion_setrects, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_INFO(0, rect)
	ZEND_ARG_TYPE_INFO(0, num, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qregion_qregion_rectcount, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_gui_qregion_qregion_method_entry) {
	PHP_ME(Qt_Gui_QRegion_QRegion, new_, arginfo_qt_gui_qregion_qregion_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QRegion_QRegion, newIntIntIntIntQRegionRegionType, arginfo_qt_gui_qregion_qregion_newintintintintqregionregiontype, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QRegion_QRegion, newQRectQRegionRegionType, arginfo_qt_gui_qregion_qregion_newqrectqregionregiontype, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QRegion_QRegion, newQPolygonQtFillRule, arginfo_qt_gui_qregion_qregion_newqpolygonqtfillrule, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QRegion_QRegion, newQRegion, arginfo_qt_gui_qregion_qregion_newqregion, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QRegion_QRegion, newQBitmap, arginfo_qt_gui_qregion_qregion_newqbitmap, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QRegion_QRegion, swap, arginfo_qt_gui_qregion_qregion_swap, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QRegion_QRegion, isEmpty, arginfo_qt_gui_qregion_qregion_isempty, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QRegion_QRegion, isNull, arginfo_qt_gui_qregion_qregion_isnull, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QRegion_QRegion, contains, arginfo_qt_gui_qregion_qregion_contains, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QRegion_QRegion, containsQRect, arginfo_qt_gui_qregion_qregion_containsqrect, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QRegion_QRegion, translate, arginfo_qt_gui_qregion_qregion_translate, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QRegion_QRegion, translateQPoint, arginfo_qt_gui_qregion_qregion_translateqpoint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QRegion_QRegion, translated, arginfo_qt_gui_qregion_qregion_translated, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QRegion_QRegion, translatedQPoint, arginfo_qt_gui_qregion_qregion_translatedqpoint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QRegion_QRegion, united, arginfo_qt_gui_qregion_qregion_united, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QRegion_QRegion, unitedQRect, arginfo_qt_gui_qregion_qregion_unitedqrect, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QRegion_QRegion, intersected, arginfo_qt_gui_qregion_qregion_intersected, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QRegion_QRegion, intersectedQRect, arginfo_qt_gui_qregion_qregion_intersectedqrect, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QRegion_QRegion, subtracted, arginfo_qt_gui_qregion_qregion_subtracted, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QRegion_QRegion, xored, arginfo_qt_gui_qregion_qregion_xored, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QRegion_QRegion, intersects, arginfo_qt_gui_qregion_qregion_intersects, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QRegion_QRegion, intersectsQRect, arginfo_qt_gui_qregion_qregion_intersectsqrect, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QRegion_QRegion, boundingRect, arginfo_qt_gui_qregion_qregion_boundingrect, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QRegion_QRegion, setRects, arginfo_qt_gui_qregion_qregion_setrects, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QRegion_QRegion, rectCount, arginfo_qt_gui_qregion_qregion_rectcount, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
