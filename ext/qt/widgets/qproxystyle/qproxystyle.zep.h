
extern zend_class_entry *qt_widgets_qproxystyle_qproxystyle_ce;

ZEPHIR_INIT_CLASS(Qt_Widgets_QProxyStyle_QProxyStyle);

PHP_METHOD(Qt_Widgets_QProxyStyle_QProxyStyle, staticMetaObject);
PHP_METHOD(Qt_Widgets_QProxyStyle_QProxyStyle, tr);
PHP_METHOD(Qt_Widgets_QProxyStyle_QProxyStyle, new_);
PHP_METHOD(Qt_Widgets_QProxyStyle_QProxyStyle, newQString);
PHP_METHOD(Qt_Widgets_QProxyStyle_QProxyStyle, baseStyle);
PHP_METHOD(Qt_Widgets_QProxyStyle_QProxyStyle, setBaseStyle);
PHP_METHOD(Qt_Widgets_QProxyStyle_QProxyStyle, drawPrimitive);
PHP_METHOD(Qt_Widgets_QProxyStyle_QProxyStyle, drawControl);
PHP_METHOD(Qt_Widgets_QProxyStyle_QProxyStyle, drawComplexControl);
PHP_METHOD(Qt_Widgets_QProxyStyle_QProxyStyle, drawItemText);
PHP_METHOD(Qt_Widgets_QProxyStyle_QProxyStyle, drawItemPixmap);
PHP_METHOD(Qt_Widgets_QProxyStyle_QProxyStyle, sizeFromContents);
PHP_METHOD(Qt_Widgets_QProxyStyle_QProxyStyle, subElementRect);
PHP_METHOD(Qt_Widgets_QProxyStyle_QProxyStyle, subControlRect);
PHP_METHOD(Qt_Widgets_QProxyStyle_QProxyStyle, itemTextRect);
PHP_METHOD(Qt_Widgets_QProxyStyle_QProxyStyle, itemPixmapRect);
PHP_METHOD(Qt_Widgets_QProxyStyle_QProxyStyle, hitTestComplexControl);
PHP_METHOD(Qt_Widgets_QProxyStyle_QProxyStyle, styleHint);
PHP_METHOD(Qt_Widgets_QProxyStyle_QProxyStyle, pixelMetric);
PHP_METHOD(Qt_Widgets_QProxyStyle_QProxyStyle, layoutSpacing);
PHP_METHOD(Qt_Widgets_QProxyStyle_QProxyStyle, standardIcon);
PHP_METHOD(Qt_Widgets_QProxyStyle_QProxyStyle, standardPixmap);
PHP_METHOD(Qt_Widgets_QProxyStyle_QProxyStyle, generatedIconPixmap);
PHP_METHOD(Qt_Widgets_QProxyStyle_QProxyStyle, standardPalette);
PHP_METHOD(Qt_Widgets_QProxyStyle_QProxyStyle, polish);
PHP_METHOD(Qt_Widgets_QProxyStyle_QProxyStyle, polishQPalette);
PHP_METHOD(Qt_Widgets_QProxyStyle_QProxyStyle, polishQApplication);
PHP_METHOD(Qt_Widgets_QProxyStyle_QProxyStyle, unpolish);
PHP_METHOD(Qt_Widgets_QProxyStyle_QProxyStyle, unpolishQApplication);
PHP_METHOD(Qt_Widgets_QProxyStyle_QProxyStyle, event);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qproxystyle_qproxystyle_staticmetaobject, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qproxystyle_qproxystyle_tr, 0, 1, IS_STRING, 0)
	ZEND_ARG_INFO(0, s)
	ZEND_ARG_INFO(0, c)
	ZEND_ARG_TYPE_INFO(0, n, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qproxystyle_qproxystyle_new_, 0, 0, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, style, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qproxystyle_qproxystyle_newqstring, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, key, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qproxystyle_qproxystyle_basestyle, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qproxystyle_qproxystyle_setbasestyle, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, style, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qproxystyle_qproxystyle_drawprimitive, 0, 4, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, element, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, option, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, painter, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, widget, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qproxystyle_qproxystyle_drawcontrol, 0, 4, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, element, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, option, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, painter, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, widget, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qproxystyle_qproxystyle_drawcomplexcontrol, 0, 4, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, control, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, option, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, painter, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, widget, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qproxystyle_qproxystyle_drawitemtext, 0, 10, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, painter, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rectX, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rectY, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rectWidth, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rectHeight, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, flags, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, pal, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, enabled, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, text, IS_STRING, 0)
	ZEND_ARG_INFO(0, textRole)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qproxystyle_qproxystyle_drawitempixmap, 0, 8, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, painter, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rectX, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rectY, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rectWidth, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rectHeight, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, alignment, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, pixmap, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qproxystyle_qproxystyle_sizefromcontents, 0, 6, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, type, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, option, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sizeWidth, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sizeHeight, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, widget, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qproxystyle_qproxystyle_subelementrect, 0, 4, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, element, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, option, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, widget, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qproxystyle_qproxystyle_subcontrolrect, 0, 5, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, cc, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, opt, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sc, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, widget, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qproxystyle_qproxystyle_itemtextrect, 0, 9, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, fm, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rX, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rY, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rWidth, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rHeight, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, flags, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, enabled, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, text, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qproxystyle_qproxystyle_itempixmaprect, 0, 7, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rX, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rY, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rWidth, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rHeight, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, flags, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, pixmap, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qproxystyle_qproxystyle_hittestcomplexcontrol, 0, 5, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, control, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, option, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, posX, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, posY, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, widget, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qproxystyle_qproxystyle_stylehint, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, hint, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, option, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, widget, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, returnData, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qproxystyle_qproxystyle_pixelmetric, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, metric, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, option, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, widget, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qproxystyle_qproxystyle_layoutspacing, 0, 4, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, control1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, control2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, orientation, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, option, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, widget, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qproxystyle_qproxystyle_standardicon, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, standardIcon, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, option, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, widget, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qproxystyle_qproxystyle_standardpixmap, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, standardPixmap, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, opt, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, widget, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qproxystyle_qproxystyle_generatediconpixmap, 0, 4, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, iconMode, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, pixmap, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, opt, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qproxystyle_qproxystyle_standardpalette, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qproxystyle_qproxystyle_polish, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, widget, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qproxystyle_qproxystyle_polishqpalette, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, pal, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qproxystyle_qproxystyle_polishqapplication, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, app, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qproxystyle_qproxystyle_unpolish, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, widget, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qproxystyle_qproxystyle_unpolishqapplication, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, app, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qproxystyle_qproxystyle_event, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, e, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_widgets_qproxystyle_qproxystyle_method_entry) {
	PHP_ME(Qt_Widgets_QProxyStyle_QProxyStyle, staticMetaObject, arginfo_qt_widgets_qproxystyle_qproxystyle_staticmetaobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QProxyStyle_QProxyStyle, tr, arginfo_qt_widgets_qproxystyle_qproxystyle_tr, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QProxyStyle_QProxyStyle, new_, arginfo_qt_widgets_qproxystyle_qproxystyle_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QProxyStyle_QProxyStyle, newQString, arginfo_qt_widgets_qproxystyle_qproxystyle_newqstring, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QProxyStyle_QProxyStyle, baseStyle, arginfo_qt_widgets_qproxystyle_qproxystyle_basestyle, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QProxyStyle_QProxyStyle, setBaseStyle, arginfo_qt_widgets_qproxystyle_qproxystyle_setbasestyle, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QProxyStyle_QProxyStyle, drawPrimitive, arginfo_qt_widgets_qproxystyle_qproxystyle_drawprimitive, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QProxyStyle_QProxyStyle, drawControl, arginfo_qt_widgets_qproxystyle_qproxystyle_drawcontrol, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QProxyStyle_QProxyStyle, drawComplexControl, arginfo_qt_widgets_qproxystyle_qproxystyle_drawcomplexcontrol, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QProxyStyle_QProxyStyle, drawItemText, arginfo_qt_widgets_qproxystyle_qproxystyle_drawitemtext, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QProxyStyle_QProxyStyle, drawItemPixmap, arginfo_qt_widgets_qproxystyle_qproxystyle_drawitempixmap, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QProxyStyle_QProxyStyle, sizeFromContents, arginfo_qt_widgets_qproxystyle_qproxystyle_sizefromcontents, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QProxyStyle_QProxyStyle, subElementRect, arginfo_qt_widgets_qproxystyle_qproxystyle_subelementrect, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QProxyStyle_QProxyStyle, subControlRect, arginfo_qt_widgets_qproxystyle_qproxystyle_subcontrolrect, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QProxyStyle_QProxyStyle, itemTextRect, arginfo_qt_widgets_qproxystyle_qproxystyle_itemtextrect, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QProxyStyle_QProxyStyle, itemPixmapRect, arginfo_qt_widgets_qproxystyle_qproxystyle_itempixmaprect, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QProxyStyle_QProxyStyle, hitTestComplexControl, arginfo_qt_widgets_qproxystyle_qproxystyle_hittestcomplexcontrol, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QProxyStyle_QProxyStyle, styleHint, arginfo_qt_widgets_qproxystyle_qproxystyle_stylehint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QProxyStyle_QProxyStyle, pixelMetric, arginfo_qt_widgets_qproxystyle_qproxystyle_pixelmetric, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QProxyStyle_QProxyStyle, layoutSpacing, arginfo_qt_widgets_qproxystyle_qproxystyle_layoutspacing, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QProxyStyle_QProxyStyle, standardIcon, arginfo_qt_widgets_qproxystyle_qproxystyle_standardicon, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QProxyStyle_QProxyStyle, standardPixmap, arginfo_qt_widgets_qproxystyle_qproxystyle_standardpixmap, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QProxyStyle_QProxyStyle, generatedIconPixmap, arginfo_qt_widgets_qproxystyle_qproxystyle_generatediconpixmap, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QProxyStyle_QProxyStyle, standardPalette, arginfo_qt_widgets_qproxystyle_qproxystyle_standardpalette, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QProxyStyle_QProxyStyle, polish, arginfo_qt_widgets_qproxystyle_qproxystyle_polish, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QProxyStyle_QProxyStyle, polishQPalette, arginfo_qt_widgets_qproxystyle_qproxystyle_polishqpalette, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QProxyStyle_QProxyStyle, polishQApplication, arginfo_qt_widgets_qproxystyle_qproxystyle_polishqapplication, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QProxyStyle_QProxyStyle, unpolish, arginfo_qt_widgets_qproxystyle_qproxystyle_unpolish, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QProxyStyle_QProxyStyle, unpolishQApplication, arginfo_qt_widgets_qproxystyle_qproxystyle_unpolishqapplication, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QProxyStyle_QProxyStyle, event, arginfo_qt_widgets_qproxystyle_qproxystyle_event, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
