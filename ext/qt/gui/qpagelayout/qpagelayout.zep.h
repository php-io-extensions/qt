
extern zend_class_entry *qt_gui_qpagelayout_qpagelayout_ce;

ZEPHIR_INIT_CLASS(Qt_Gui_QPageLayout_QPageLayout);

PHP_METHOD(Qt_Gui_QPageLayout_QPageLayout, new_);
PHP_METHOD(Qt_Gui_QPageLayout_QPageLayout, newQPageSizeQPageLayoutOrientationQMarginsFQPageLayoutUnitQMarginsF);
PHP_METHOD(Qt_Gui_QPageLayout_QPageLayout, newQPageLayout);
PHP_METHOD(Qt_Gui_QPageLayout_QPageLayout, swap);
PHP_METHOD(Qt_Gui_QPageLayout_QPageLayout, isEquivalentTo);
PHP_METHOD(Qt_Gui_QPageLayout_QPageLayout, isValid);
PHP_METHOD(Qt_Gui_QPageLayout_QPageLayout, setMode);
PHP_METHOD(Qt_Gui_QPageLayout_QPageLayout, mode);
PHP_METHOD(Qt_Gui_QPageLayout_QPageLayout, setPageSize);
PHP_METHOD(Qt_Gui_QPageLayout_QPageLayout, pageSize);
PHP_METHOD(Qt_Gui_QPageLayout_QPageLayout, setOrientation);
PHP_METHOD(Qt_Gui_QPageLayout_QPageLayout, orientation);
PHP_METHOD(Qt_Gui_QPageLayout_QPageLayout, setUnits);
PHP_METHOD(Qt_Gui_QPageLayout_QPageLayout, units);
PHP_METHOD(Qt_Gui_QPageLayout_QPageLayout, setMargins);
PHP_METHOD(Qt_Gui_QPageLayout_QPageLayout, setLeftMargin);
PHP_METHOD(Qt_Gui_QPageLayout_QPageLayout, setRightMargin);
PHP_METHOD(Qt_Gui_QPageLayout_QPageLayout, setTopMargin);
PHP_METHOD(Qt_Gui_QPageLayout_QPageLayout, setBottomMargin);
PHP_METHOD(Qt_Gui_QPageLayout_QPageLayout, margins);
PHP_METHOD(Qt_Gui_QPageLayout_QPageLayout, marginsQPageLayoutUnit);
PHP_METHOD(Qt_Gui_QPageLayout_QPageLayout, marginsPoints);
PHP_METHOD(Qt_Gui_QPageLayout_QPageLayout, marginsPixels);
PHP_METHOD(Qt_Gui_QPageLayout_QPageLayout, setMinimumMargins);
PHP_METHOD(Qt_Gui_QPageLayout_QPageLayout, minimumMargins);
PHP_METHOD(Qt_Gui_QPageLayout_QPageLayout, maximumMargins);
PHP_METHOD(Qt_Gui_QPageLayout_QPageLayout, fullRect);
PHP_METHOD(Qt_Gui_QPageLayout_QPageLayout, fullRectQPageLayoutUnit);
PHP_METHOD(Qt_Gui_QPageLayout_QPageLayout, fullRectPoints);
PHP_METHOD(Qt_Gui_QPageLayout_QPageLayout, fullRectPixels);
PHP_METHOD(Qt_Gui_QPageLayout_QPageLayout, paintRect);
PHP_METHOD(Qt_Gui_QPageLayout_QPageLayout, paintRectQPageLayoutUnit);
PHP_METHOD(Qt_Gui_QPageLayout_QPageLayout, paintRectPoints);
PHP_METHOD(Qt_Gui_QPageLayout_QPageLayout, paintRectPixels);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpagelayout_qpagelayout_new_, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpagelayout_qpagelayout_newqpagesizeqpagelayoutorientationqmarginsfqpagelayoutunitqmarginsf, 0, 6, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, pageSize, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, orientation, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, marginsLeft, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, marginsTop, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, marginsRight, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, marginsBottom, IS_DOUBLE, 0)
	ZEND_ARG_INFO(0, units)
	ZEND_ARG_INFO(0, minMarginsLeft)
	ZEND_ARG_INFO(0, minMarginsTop)
	ZEND_ARG_INFO(0, minMarginsRight)
	ZEND_ARG_INFO(0, minMarginsBottom)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpagelayout_qpagelayout_newqpagelayout, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, other, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpagelayout_qpagelayout_swap, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, other, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpagelayout_qpagelayout_isequivalentto, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, other, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpagelayout_qpagelayout_isvalid, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpagelayout_qpagelayout_setmode, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, mode, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpagelayout_qpagelayout_mode, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpagelayout_qpagelayout_setpagesize, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, pageSize, IS_LONG, 0)
	ZEND_ARG_INFO(0, minMarginsLeft)
	ZEND_ARG_INFO(0, minMarginsTop)
	ZEND_ARG_INFO(0, minMarginsRight)
	ZEND_ARG_INFO(0, minMarginsBottom)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpagelayout_qpagelayout_pagesize, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpagelayout_qpagelayout_setorientation, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, orientation, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpagelayout_qpagelayout_orientation, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpagelayout_qpagelayout_setunits, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, units, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpagelayout_qpagelayout_units, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpagelayout_qpagelayout_setmargins, 0, 5, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, marginsLeft, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, marginsTop, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, marginsRight, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, marginsBottom, IS_DOUBLE, 0)
	ZEND_ARG_INFO(0, outOfBoundsPolicy)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpagelayout_qpagelayout_setleftmargin, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, leftMargin, IS_DOUBLE, 0)
	ZEND_ARG_INFO(0, outOfBoundsPolicy)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpagelayout_qpagelayout_setrightmargin, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rightMargin, IS_DOUBLE, 0)
	ZEND_ARG_INFO(0, outOfBoundsPolicy)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpagelayout_qpagelayout_settopmargin, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, topMargin, IS_DOUBLE, 0)
	ZEND_ARG_INFO(0, outOfBoundsPolicy)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpagelayout_qpagelayout_setbottommargin, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, bottomMargin, IS_DOUBLE, 0)
	ZEND_ARG_INFO(0, outOfBoundsPolicy)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpagelayout_qpagelayout_margins, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpagelayout_qpagelayout_marginsqpagelayoutunit, 0, 2, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, units, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpagelayout_qpagelayout_marginspoints, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpagelayout_qpagelayout_marginspixels, 0, 2, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, resolution, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpagelayout_qpagelayout_setminimummargins, 0, 5, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, minMarginsLeft, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, minMarginsTop, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, minMarginsRight, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, minMarginsBottom, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpagelayout_qpagelayout_minimummargins, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpagelayout_qpagelayout_maximummargins, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpagelayout_qpagelayout_fullrect, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpagelayout_qpagelayout_fullrectqpagelayoutunit, 0, 2, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, units, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpagelayout_qpagelayout_fullrectpoints, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpagelayout_qpagelayout_fullrectpixels, 0, 2, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, resolution, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpagelayout_qpagelayout_paintrect, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpagelayout_qpagelayout_paintrectqpagelayoutunit, 0, 2, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, units, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpagelayout_qpagelayout_paintrectpoints, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpagelayout_qpagelayout_paintrectpixels, 0, 2, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, resolution, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_gui_qpagelayout_qpagelayout_method_entry) {
	PHP_ME(Qt_Gui_QPageLayout_QPageLayout, new_, arginfo_qt_gui_qpagelayout_qpagelayout_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPageLayout_QPageLayout, newQPageSizeQPageLayoutOrientationQMarginsFQPageLayoutUnitQMarginsF, arginfo_qt_gui_qpagelayout_qpagelayout_newqpagesizeqpagelayoutorientationqmarginsfqpagelayoutunitqmarginsf, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPageLayout_QPageLayout, newQPageLayout, arginfo_qt_gui_qpagelayout_qpagelayout_newqpagelayout, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPageLayout_QPageLayout, swap, arginfo_qt_gui_qpagelayout_qpagelayout_swap, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPageLayout_QPageLayout, isEquivalentTo, arginfo_qt_gui_qpagelayout_qpagelayout_isequivalentto, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPageLayout_QPageLayout, isValid, arginfo_qt_gui_qpagelayout_qpagelayout_isvalid, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPageLayout_QPageLayout, setMode, arginfo_qt_gui_qpagelayout_qpagelayout_setmode, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPageLayout_QPageLayout, mode, arginfo_qt_gui_qpagelayout_qpagelayout_mode, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPageLayout_QPageLayout, setPageSize, arginfo_qt_gui_qpagelayout_qpagelayout_setpagesize, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPageLayout_QPageLayout, pageSize, arginfo_qt_gui_qpagelayout_qpagelayout_pagesize, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPageLayout_QPageLayout, setOrientation, arginfo_qt_gui_qpagelayout_qpagelayout_setorientation, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPageLayout_QPageLayout, orientation, arginfo_qt_gui_qpagelayout_qpagelayout_orientation, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPageLayout_QPageLayout, setUnits, arginfo_qt_gui_qpagelayout_qpagelayout_setunits, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPageLayout_QPageLayout, units, arginfo_qt_gui_qpagelayout_qpagelayout_units, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPageLayout_QPageLayout, setMargins, arginfo_qt_gui_qpagelayout_qpagelayout_setmargins, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPageLayout_QPageLayout, setLeftMargin, arginfo_qt_gui_qpagelayout_qpagelayout_setleftmargin, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPageLayout_QPageLayout, setRightMargin, arginfo_qt_gui_qpagelayout_qpagelayout_setrightmargin, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPageLayout_QPageLayout, setTopMargin, arginfo_qt_gui_qpagelayout_qpagelayout_settopmargin, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPageLayout_QPageLayout, setBottomMargin, arginfo_qt_gui_qpagelayout_qpagelayout_setbottommargin, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPageLayout_QPageLayout, margins, arginfo_qt_gui_qpagelayout_qpagelayout_margins, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPageLayout_QPageLayout, marginsQPageLayoutUnit, arginfo_qt_gui_qpagelayout_qpagelayout_marginsqpagelayoutunit, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPageLayout_QPageLayout, marginsPoints, arginfo_qt_gui_qpagelayout_qpagelayout_marginspoints, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPageLayout_QPageLayout, marginsPixels, arginfo_qt_gui_qpagelayout_qpagelayout_marginspixels, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPageLayout_QPageLayout, setMinimumMargins, arginfo_qt_gui_qpagelayout_qpagelayout_setminimummargins, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPageLayout_QPageLayout, minimumMargins, arginfo_qt_gui_qpagelayout_qpagelayout_minimummargins, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPageLayout_QPageLayout, maximumMargins, arginfo_qt_gui_qpagelayout_qpagelayout_maximummargins, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPageLayout_QPageLayout, fullRect, arginfo_qt_gui_qpagelayout_qpagelayout_fullrect, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPageLayout_QPageLayout, fullRectQPageLayoutUnit, arginfo_qt_gui_qpagelayout_qpagelayout_fullrectqpagelayoutunit, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPageLayout_QPageLayout, fullRectPoints, arginfo_qt_gui_qpagelayout_qpagelayout_fullrectpoints, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPageLayout_QPageLayout, fullRectPixels, arginfo_qt_gui_qpagelayout_qpagelayout_fullrectpixels, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPageLayout_QPageLayout, paintRect, arginfo_qt_gui_qpagelayout_qpagelayout_paintrect, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPageLayout_QPageLayout, paintRectQPageLayoutUnit, arginfo_qt_gui_qpagelayout_qpagelayout_paintrectqpagelayoutunit, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPageLayout_QPageLayout, paintRectPoints, arginfo_qt_gui_qpagelayout_qpagelayout_paintrectpoints, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPageLayout_QPageLayout, paintRectPixels, arginfo_qt_gui_qpagelayout_qpagelayout_paintrectpixels, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
