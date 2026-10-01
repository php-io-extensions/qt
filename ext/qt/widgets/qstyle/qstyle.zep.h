
extern zend_class_entry *qt_widgets_qstyle_qstyle_ce;

ZEPHIR_INIT_CLASS(Qt_Widgets_QStyle_QStyle);

PHP_METHOD(Qt_Widgets_QStyle_QStyle, staticMetaObject);
PHP_METHOD(Qt_Widgets_QStyle_QStyle, tr);
PHP_METHOD(Qt_Widgets_QStyle_QStyle, new_);
PHP_METHOD(Qt_Widgets_QStyle_QStyle, name);
PHP_METHOD(Qt_Widgets_QStyle_QStyle, polish);
PHP_METHOD(Qt_Widgets_QStyle_QStyle, unpolish);
PHP_METHOD(Qt_Widgets_QStyle_QStyle, polishQApplication);
PHP_METHOD(Qt_Widgets_QStyle_QStyle, unpolishQApplication);
PHP_METHOD(Qt_Widgets_QStyle_QStyle, polishQPalette);
PHP_METHOD(Qt_Widgets_QStyle_QStyle, itemTextRect);
PHP_METHOD(Qt_Widgets_QStyle_QStyle, itemPixmapRect);
PHP_METHOD(Qt_Widgets_QStyle_QStyle, drawItemText);
PHP_METHOD(Qt_Widgets_QStyle_QStyle, drawItemPixmap);
PHP_METHOD(Qt_Widgets_QStyle_QStyle, standardPalette);
PHP_METHOD(Qt_Widgets_QStyle_QStyle, drawPrimitive);
PHP_METHOD(Qt_Widgets_QStyle_QStyle, drawControl);
PHP_METHOD(Qt_Widgets_QStyle_QStyle, subElementRect);
PHP_METHOD(Qt_Widgets_QStyle_QStyle, drawComplexControl);
PHP_METHOD(Qt_Widgets_QStyle_QStyle, hitTestComplexControl);
PHP_METHOD(Qt_Widgets_QStyle_QStyle, subControlRect);
PHP_METHOD(Qt_Widgets_QStyle_QStyle, pixelMetric);
PHP_METHOD(Qt_Widgets_QStyle_QStyle, sizeFromContents);
PHP_METHOD(Qt_Widgets_QStyle_QStyle, styleHint);
PHP_METHOD(Qt_Widgets_QStyle_QStyle, standardPixmap);
PHP_METHOD(Qt_Widgets_QStyle_QStyle, standardIcon);
PHP_METHOD(Qt_Widgets_QStyle_QStyle, generatedIconPixmap);
PHP_METHOD(Qt_Widgets_QStyle_QStyle, visualRect);
PHP_METHOD(Qt_Widgets_QStyle_QStyle, visualPos);
PHP_METHOD(Qt_Widgets_QStyle_QStyle, sliderPositionFromValue);
PHP_METHOD(Qt_Widgets_QStyle_QStyle, sliderValueFromPosition);
PHP_METHOD(Qt_Widgets_QStyle_QStyle, visualAlignment);
PHP_METHOD(Qt_Widgets_QStyle_QStyle, alignedRect);
PHP_METHOD(Qt_Widgets_QStyle_QStyle, layoutSpacing);
PHP_METHOD(Qt_Widgets_QStyle_QStyle, combinedLayoutSpacing);
PHP_METHOD(Qt_Widgets_QStyle_QStyle, proxy);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qstyle_qstyle_staticmetaobject, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qstyle_qstyle_tr, 0, 1, IS_STRING, 0)
	ZEND_ARG_INFO(0, s)
	ZEND_ARG_INFO(0, c)
	ZEND_ARG_TYPE_INFO(0, n, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qstyle_qstyle_new_, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qstyle_qstyle_name, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qstyle_qstyle_polish, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, widget, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qstyle_qstyle_unpolish, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, widget, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qstyle_qstyle_polishqapplication, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, application, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qstyle_qstyle_unpolishqapplication, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, application, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qstyle_qstyle_polishqpalette, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, palette, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qstyle_qstyle_itemtextrect, 0, 9, IS_ARRAY, 0)
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

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qstyle_qstyle_itempixmaprect, 0, 7, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rX, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rY, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rWidth, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rHeight, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, flags, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, pixmap, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qstyle_qstyle_drawitemtext, 0, 10, IS_VOID, 0)

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

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qstyle_qstyle_drawitempixmap, 0, 8, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, painter, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rectX, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rectY, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rectWidth, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rectHeight, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, alignment, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, pixmap, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qstyle_qstyle_standardpalette, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qstyle_qstyle_drawprimitive, 0, 4, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, pe, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, opt, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, p, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, w, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qstyle_qstyle_drawcontrol, 0, 4, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, element, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, opt, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, p, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, w, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qstyle_qstyle_subelementrect, 0, 3, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, subElement, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, option, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, widget, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qstyle_qstyle_drawcomplexcontrol, 0, 4, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, cc, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, opt, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, p, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, widget, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qstyle_qstyle_hittestcomplexcontrol, 0, 5, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, cc, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, opt, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, ptX, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, ptY, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, widget, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qstyle_qstyle_subcontrolrect, 0, 4, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, cc, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, opt, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sc, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, widget, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qstyle_qstyle_pixelmetric, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, metric, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, option, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, widget, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qstyle_qstyle_sizefromcontents, 0, 5, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, ct, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, opt, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, contentsSizeWidth, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, contentsSizeHeight, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, w, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qstyle_qstyle_stylehint, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, stylehint, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, opt, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, widget, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, returnData, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qstyle_qstyle_standardpixmap, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, standardPixmap, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, opt, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, widget, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qstyle_qstyle_standardicon, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, standardIcon, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, option, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, widget, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qstyle_qstyle_generatediconpixmap, 0, 4, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, iconMode, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, pixmap, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, opt, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qstyle_qstyle_visualrect, 0, 9, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, direction, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, boundingRectX, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, boundingRectY, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, boundingRectWidth, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, boundingRectHeight, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, logicalRectX, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, logicalRectY, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, logicalRectWidth, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, logicalRectHeight, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qstyle_qstyle_visualpos, 0, 7, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, direction, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, boundingRectX, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, boundingRectY, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, boundingRectWidth, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, boundingRectHeight, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, logicalPosX, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, logicalPosY, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qstyle_qstyle_sliderpositionfromvalue, 0, 4, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, min, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, max, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, val, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, space, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, upsideDown, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qstyle_qstyle_slidervaluefromposition, 0, 4, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, min, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, max, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, pos, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, space, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, upsideDown, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qstyle_qstyle_visualalignment, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, direction, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, alignment, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qstyle_qstyle_alignedrect, 0, 8, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, direction, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, alignment, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sizeWidth, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sizeHeight, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rectangleX, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rectangleY, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rectangleWidth, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rectangleHeight, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qstyle_qstyle_layoutspacing, 0, 4, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, control1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, control2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, orientation, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, option, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, widget, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qstyle_qstyle_combinedlayoutspacing, 0, 4, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, controls1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, controls2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, orientation, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, option, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, widget, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qstyle_qstyle_proxy, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_widgets_qstyle_qstyle_method_entry) {
	PHP_ME(Qt_Widgets_QStyle_QStyle, staticMetaObject, arginfo_qt_widgets_qstyle_qstyle_staticmetaobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QStyle_QStyle, tr, arginfo_qt_widgets_qstyle_qstyle_tr, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QStyle_QStyle, new_, arginfo_qt_widgets_qstyle_qstyle_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QStyle_QStyle, name, arginfo_qt_widgets_qstyle_qstyle_name, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QStyle_QStyle, polish, arginfo_qt_widgets_qstyle_qstyle_polish, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QStyle_QStyle, unpolish, arginfo_qt_widgets_qstyle_qstyle_unpolish, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QStyle_QStyle, polishQApplication, arginfo_qt_widgets_qstyle_qstyle_polishqapplication, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QStyle_QStyle, unpolishQApplication, arginfo_qt_widgets_qstyle_qstyle_unpolishqapplication, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QStyle_QStyle, polishQPalette, arginfo_qt_widgets_qstyle_qstyle_polishqpalette, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QStyle_QStyle, itemTextRect, arginfo_qt_widgets_qstyle_qstyle_itemtextrect, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QStyle_QStyle, itemPixmapRect, arginfo_qt_widgets_qstyle_qstyle_itempixmaprect, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QStyle_QStyle, drawItemText, arginfo_qt_widgets_qstyle_qstyle_drawitemtext, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QStyle_QStyle, drawItemPixmap, arginfo_qt_widgets_qstyle_qstyle_drawitempixmap, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QStyle_QStyle, standardPalette, arginfo_qt_widgets_qstyle_qstyle_standardpalette, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QStyle_QStyle, drawPrimitive, arginfo_qt_widgets_qstyle_qstyle_drawprimitive, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QStyle_QStyle, drawControl, arginfo_qt_widgets_qstyle_qstyle_drawcontrol, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QStyle_QStyle, subElementRect, arginfo_qt_widgets_qstyle_qstyle_subelementrect, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QStyle_QStyle, drawComplexControl, arginfo_qt_widgets_qstyle_qstyle_drawcomplexcontrol, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QStyle_QStyle, hitTestComplexControl, arginfo_qt_widgets_qstyle_qstyle_hittestcomplexcontrol, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QStyle_QStyle, subControlRect, arginfo_qt_widgets_qstyle_qstyle_subcontrolrect, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QStyle_QStyle, pixelMetric, arginfo_qt_widgets_qstyle_qstyle_pixelmetric, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QStyle_QStyle, sizeFromContents, arginfo_qt_widgets_qstyle_qstyle_sizefromcontents, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QStyle_QStyle, styleHint, arginfo_qt_widgets_qstyle_qstyle_stylehint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QStyle_QStyle, standardPixmap, arginfo_qt_widgets_qstyle_qstyle_standardpixmap, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QStyle_QStyle, standardIcon, arginfo_qt_widgets_qstyle_qstyle_standardicon, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QStyle_QStyle, generatedIconPixmap, arginfo_qt_widgets_qstyle_qstyle_generatediconpixmap, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QStyle_QStyle, visualRect, arginfo_qt_widgets_qstyle_qstyle_visualrect, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QStyle_QStyle, visualPos, arginfo_qt_widgets_qstyle_qstyle_visualpos, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QStyle_QStyle, sliderPositionFromValue, arginfo_qt_widgets_qstyle_qstyle_sliderpositionfromvalue, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QStyle_QStyle, sliderValueFromPosition, arginfo_qt_widgets_qstyle_qstyle_slidervaluefromposition, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QStyle_QStyle, visualAlignment, arginfo_qt_widgets_qstyle_qstyle_visualalignment, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QStyle_QStyle, alignedRect, arginfo_qt_widgets_qstyle_qstyle_alignedrect, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QStyle_QStyle, layoutSpacing, arginfo_qt_widgets_qstyle_qstyle_layoutspacing, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QStyle_QStyle, combinedLayoutSpacing, arginfo_qt_widgets_qstyle_qstyle_combinedlayoutspacing, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QStyle_QStyle, proxy, arginfo_qt_widgets_qstyle_qstyle_proxy, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
