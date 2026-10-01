
extern zend_class_entry *qt_widgets_qcommonstyle_qcommonstyle_ce;

ZEPHIR_INIT_CLASS(Qt_Widgets_QCommonStyle_QCommonStyle);

PHP_METHOD(Qt_Widgets_QCommonStyle_QCommonStyle, staticMetaObject);
PHP_METHOD(Qt_Widgets_QCommonStyle_QCommonStyle, tr);
PHP_METHOD(Qt_Widgets_QCommonStyle_QCommonStyle, new_);
PHP_METHOD(Qt_Widgets_QCommonStyle_QCommonStyle, drawPrimitive);
PHP_METHOD(Qt_Widgets_QCommonStyle_QCommonStyle, drawControl);
PHP_METHOD(Qt_Widgets_QCommonStyle_QCommonStyle, subElementRect);
PHP_METHOD(Qt_Widgets_QCommonStyle_QCommonStyle, drawComplexControl);
PHP_METHOD(Qt_Widgets_QCommonStyle_QCommonStyle, hitTestComplexControl);
PHP_METHOD(Qt_Widgets_QCommonStyle_QCommonStyle, subControlRect);
PHP_METHOD(Qt_Widgets_QCommonStyle_QCommonStyle, sizeFromContents);
PHP_METHOD(Qt_Widgets_QCommonStyle_QCommonStyle, pixelMetric);
PHP_METHOD(Qt_Widgets_QCommonStyle_QCommonStyle, styleHint);
PHP_METHOD(Qt_Widgets_QCommonStyle_QCommonStyle, standardIcon);
PHP_METHOD(Qt_Widgets_QCommonStyle_QCommonStyle, standardPixmap);
PHP_METHOD(Qt_Widgets_QCommonStyle_QCommonStyle, generatedIconPixmap);
PHP_METHOD(Qt_Widgets_QCommonStyle_QCommonStyle, layoutSpacing);
PHP_METHOD(Qt_Widgets_QCommonStyle_QCommonStyle, polish);
PHP_METHOD(Qt_Widgets_QCommonStyle_QCommonStyle, polishQApplication);
PHP_METHOD(Qt_Widgets_QCommonStyle_QCommonStyle, polishQWidget);
PHP_METHOD(Qt_Widgets_QCommonStyle_QCommonStyle, unpolish);
PHP_METHOD(Qt_Widgets_QCommonStyle_QCommonStyle, unpolishQApplication);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qcommonstyle_qcommonstyle_staticmetaobject, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qcommonstyle_qcommonstyle_tr, 0, 1, IS_STRING, 0)
	ZEND_ARG_INFO(0, s)
	ZEND_ARG_INFO(0, c)
	ZEND_ARG_TYPE_INFO(0, n, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qcommonstyle_qcommonstyle_new_, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qcommonstyle_qcommonstyle_drawprimitive, 0, 4, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, pe, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, opt, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, p, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, w, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qcommonstyle_qcommonstyle_drawcontrol, 0, 4, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, element, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, opt, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, p, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, w, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qcommonstyle_qcommonstyle_subelementrect, 0, 3, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, r, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, opt, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, widget, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qcommonstyle_qcommonstyle_drawcomplexcontrol, 0, 4, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, cc, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, opt, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, p, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, w, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qcommonstyle_qcommonstyle_hittestcomplexcontrol, 0, 5, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, cc, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, opt, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, ptX, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, ptY, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, w, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qcommonstyle_qcommonstyle_subcontrolrect, 0, 4, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, cc, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, opt, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sc, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, w, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qcommonstyle_qcommonstyle_sizefromcontents, 0, 5, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, ct, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, opt, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, contentsSizeWidth, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, contentsSizeHeight, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, widget, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qcommonstyle_qcommonstyle_pixelmetric, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, m, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, opt, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, widget, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qcommonstyle_qcommonstyle_stylehint, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sh, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, opt, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, w, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, shret, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qcommonstyle_qcommonstyle_standardicon, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, standardIcon, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, opt, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, widget, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qcommonstyle_qcommonstyle_standardpixmap, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sp, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, opt, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, widget, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qcommonstyle_qcommonstyle_generatediconpixmap, 0, 4, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, iconMode, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, pixmap, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, opt, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qcommonstyle_qcommonstyle_layoutspacing, 0, 4, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, control1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, control2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, orientation, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, option, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, widget, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qcommonstyle_qcommonstyle_polish, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qcommonstyle_qcommonstyle_polishqapplication, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, app, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qcommonstyle_qcommonstyle_polishqwidget, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, widget, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qcommonstyle_qcommonstyle_unpolish, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, widget, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qcommonstyle_qcommonstyle_unpolishqapplication, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, application, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_widgets_qcommonstyle_qcommonstyle_method_entry) {
	PHP_ME(Qt_Widgets_QCommonStyle_QCommonStyle, staticMetaObject, arginfo_qt_widgets_qcommonstyle_qcommonstyle_staticmetaobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QCommonStyle_QCommonStyle, tr, arginfo_qt_widgets_qcommonstyle_qcommonstyle_tr, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QCommonStyle_QCommonStyle, new_, arginfo_qt_widgets_qcommonstyle_qcommonstyle_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QCommonStyle_QCommonStyle, drawPrimitive, arginfo_qt_widgets_qcommonstyle_qcommonstyle_drawprimitive, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QCommonStyle_QCommonStyle, drawControl, arginfo_qt_widgets_qcommonstyle_qcommonstyle_drawcontrol, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QCommonStyle_QCommonStyle, subElementRect, arginfo_qt_widgets_qcommonstyle_qcommonstyle_subelementrect, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QCommonStyle_QCommonStyle, drawComplexControl, arginfo_qt_widgets_qcommonstyle_qcommonstyle_drawcomplexcontrol, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QCommonStyle_QCommonStyle, hitTestComplexControl, arginfo_qt_widgets_qcommonstyle_qcommonstyle_hittestcomplexcontrol, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QCommonStyle_QCommonStyle, subControlRect, arginfo_qt_widgets_qcommonstyle_qcommonstyle_subcontrolrect, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QCommonStyle_QCommonStyle, sizeFromContents, arginfo_qt_widgets_qcommonstyle_qcommonstyle_sizefromcontents, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QCommonStyle_QCommonStyle, pixelMetric, arginfo_qt_widgets_qcommonstyle_qcommonstyle_pixelmetric, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QCommonStyle_QCommonStyle, styleHint, arginfo_qt_widgets_qcommonstyle_qcommonstyle_stylehint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QCommonStyle_QCommonStyle, standardIcon, arginfo_qt_widgets_qcommonstyle_qcommonstyle_standardicon, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QCommonStyle_QCommonStyle, standardPixmap, arginfo_qt_widgets_qcommonstyle_qcommonstyle_standardpixmap, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QCommonStyle_QCommonStyle, generatedIconPixmap, arginfo_qt_widgets_qcommonstyle_qcommonstyle_generatediconpixmap, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QCommonStyle_QCommonStyle, layoutSpacing, arginfo_qt_widgets_qcommonstyle_qcommonstyle_layoutspacing, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QCommonStyle_QCommonStyle, polish, arginfo_qt_widgets_qcommonstyle_qcommonstyle_polish, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QCommonStyle_QCommonStyle, polishQApplication, arginfo_qt_widgets_qcommonstyle_qcommonstyle_polishqapplication, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QCommonStyle_QCommonStyle, polishQWidget, arginfo_qt_widgets_qcommonstyle_qcommonstyle_polishqwidget, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QCommonStyle_QCommonStyle, unpolish, arginfo_qt_widgets_qcommonstyle_qcommonstyle_unpolish, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QCommonStyle_QCommonStyle, unpolishQApplication, arginfo_qt_widgets_qcommonstyle_qcommonstyle_unpolishqapplication, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
