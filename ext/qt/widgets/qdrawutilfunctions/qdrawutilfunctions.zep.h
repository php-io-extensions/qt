
extern zend_class_entry *qt_widgets_qdrawutilfunctions_qdrawutilfunctions_ce;

ZEPHIR_INIT_CLASS(Qt_Widgets_QDrawutilFunctions_QDrawutilFunctions);

PHP_METHOD(Qt_Widgets_QDrawutilFunctions_QDrawutilFunctions, qDrawShadeLine);
PHP_METHOD(Qt_Widgets_QDrawutilFunctions_QDrawutilFunctions, qDrawShadeLineQPainterQPointQPointQPaletteBoolIntInt);
PHP_METHOD(Qt_Widgets_QDrawutilFunctions_QDrawutilFunctions, qDrawShadeRect);
PHP_METHOD(Qt_Widgets_QDrawutilFunctions_QDrawutilFunctions, qDrawShadeRectQPainterQRectQPaletteBoolIntIntQBrush);
PHP_METHOD(Qt_Widgets_QDrawutilFunctions_QDrawutilFunctions, qDrawShadePanel);
PHP_METHOD(Qt_Widgets_QDrawutilFunctions_QDrawutilFunctions, qDrawShadePanelQPainterQRectQPaletteBoolIntQBrush);
PHP_METHOD(Qt_Widgets_QDrawutilFunctions_QDrawutilFunctions, qDrawWinButton);
PHP_METHOD(Qt_Widgets_QDrawutilFunctions_QDrawutilFunctions, qDrawWinButtonQPainterQRectQPaletteBoolQBrush);
PHP_METHOD(Qt_Widgets_QDrawutilFunctions_QDrawutilFunctions, qDrawWinPanel);
PHP_METHOD(Qt_Widgets_QDrawutilFunctions_QDrawutilFunctions, qDrawWinPanelQPainterQRectQPaletteBoolQBrush);
PHP_METHOD(Qt_Widgets_QDrawutilFunctions_QDrawutilFunctions, qDrawPlainRect);
PHP_METHOD(Qt_Widgets_QDrawutilFunctions_QDrawutilFunctions, qDrawPlainRectQPainterQRectQColorIntQBrush);
PHP_METHOD(Qt_Widgets_QDrawutilFunctions_QDrawutilFunctions, qDrawPlainRoundedRect);
PHP_METHOD(Qt_Widgets_QDrawutilFunctions_QDrawutilFunctions, qDrawPlainRoundedRectQPainterQRectQrealQrealQColorIntQBrush);
PHP_METHOD(Qt_Widgets_QDrawutilFunctions_QDrawutilFunctions, qDrawBorderPixmap);
PHP_METHOD(Qt_Widgets_QDrawutilFunctions_QDrawutilFunctions, qDrawBorderPixmapQPainterQRectQMarginsQPixmap);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qdrawutilfunctions_qdrawutilfunctions_qdrawshadeline, 0, 6, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, p, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, y1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, y2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, pal, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sunken, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, lineWidth, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, midLineWidth, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qdrawutilfunctions_qdrawutilfunctions_qdrawshadelineqpainterqpointqpointqpaletteboolintint, 0, 6, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, p, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, p1X, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, p1Y, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, p2X, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, p2Y, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, pal, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sunken, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, lineWidth, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, midLineWidth, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qdrawutilfunctions_qdrawutilfunctions_qdrawshaderect, 0, 6, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, p, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, w, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, h, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, pal, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sunken, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, lineWidth, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, midLineWidth, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, fill, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qdrawutilfunctions_qdrawutilfunctions_qdrawshaderectqpainterqrectqpaletteboolintintqbrush, 0, 6, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, p, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rX, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rY, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rWidth, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rHeight, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, pal, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sunken, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, lineWidth, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, midLineWidth, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, fill, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qdrawutilfunctions_qdrawutilfunctions_qdrawshadepanel, 0, 6, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, p, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, w, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, h, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, pal, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sunken, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, lineWidth, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, fill, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qdrawutilfunctions_qdrawutilfunctions_qdrawshadepanelqpainterqrectqpaletteboolintqbrush, 0, 6, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, p, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rX, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rY, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rWidth, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rHeight, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, pal, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sunken, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, lineWidth, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, fill, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qdrawutilfunctions_qdrawutilfunctions_qdrawwinbutton, 0, 6, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, p, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, w, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, h, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, pal, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sunken, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, fill, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qdrawutilfunctions_qdrawutilfunctions_qdrawwinbuttonqpainterqrectqpaletteboolqbrush, 0, 6, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, p, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rX, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rY, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rWidth, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rHeight, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, pal, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sunken, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, fill, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qdrawutilfunctions_qdrawutilfunctions_qdrawwinpanel, 0, 6, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, p, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, w, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, h, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, pal, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sunken, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, fill, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qdrawutilfunctions_qdrawutilfunctions_qdrawwinpanelqpainterqrectqpaletteboolqbrush, 0, 6, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, p, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rX, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rY, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rWidth, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rHeight, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, pal, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sunken, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, fill, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qdrawutilfunctions_qdrawutilfunctions_qdrawplainrect, 0, 6, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, p, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, w, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, h, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg5, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, lineWidth, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, fill, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qdrawutilfunctions_qdrawutilfunctions_qdrawplainrectqpainterqrectqcolorintqbrush, 0, 6, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, p, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rX, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rY, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rWidth, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rHeight, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, lineWidth, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, fill, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qdrawutilfunctions_qdrawutilfunctions_qdrawplainroundedrect, 0, 8, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, p, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, w, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, h, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rx, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, ry, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, arg7, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, lineWidth, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, fill, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qdrawutilfunctions_qdrawutilfunctions_qdrawplainroundedrectqpainterqrectqrealqrealqcolorintqbrush, 0, 8, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, painter, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rectX, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rectY, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rectWidth, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rectHeight, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rx, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, ry, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, lineColor, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, lineWidth, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, fill, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qdrawutilfunctions_qdrawutilfunctions_qdrawborderpixmap, 0, 18, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, painter, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, targetRectX, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, targetRectY, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, targetRectWidth, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, targetRectHeight, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, targetMarginsLeft, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, targetMarginsTop, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, targetMarginsRight, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, targetMarginsBottom, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, pixmap, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sourceRectX, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sourceRectY, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sourceRectWidth, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sourceRectHeight, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sourceMarginsLeft, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sourceMarginsTop, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sourceMarginsRight, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sourceMarginsBottom, IS_LONG, 0)
	ZEND_ARG_INFO(0, rules)
	ZEND_ARG_INFO(0, hints)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qdrawutilfunctions_qdrawutilfunctions_qdrawborderpixmapqpainterqrectqmarginsqpixmap, 0, 10, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, painter, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, targetX, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, targetY, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, targetWidth, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, targetHeight, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, marginsLeft, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, marginsTop, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, marginsRight, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, marginsBottom, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, pixmap, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_widgets_qdrawutilfunctions_qdrawutilfunctions_method_entry) {
	PHP_ME(Qt_Widgets_QDrawutilFunctions_QDrawutilFunctions, qDrawShadeLine, arginfo_qt_widgets_qdrawutilfunctions_qdrawutilfunctions_qdrawshadeline, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QDrawutilFunctions_QDrawutilFunctions, qDrawShadeLineQPainterQPointQPointQPaletteBoolIntInt, arginfo_qt_widgets_qdrawutilfunctions_qdrawutilfunctions_qdrawshadelineqpainterqpointqpointqpaletteboolintint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QDrawutilFunctions_QDrawutilFunctions, qDrawShadeRect, arginfo_qt_widgets_qdrawutilfunctions_qdrawutilfunctions_qdrawshaderect, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QDrawutilFunctions_QDrawutilFunctions, qDrawShadeRectQPainterQRectQPaletteBoolIntIntQBrush, arginfo_qt_widgets_qdrawutilfunctions_qdrawutilfunctions_qdrawshaderectqpainterqrectqpaletteboolintintqbrush, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QDrawutilFunctions_QDrawutilFunctions, qDrawShadePanel, arginfo_qt_widgets_qdrawutilfunctions_qdrawutilfunctions_qdrawshadepanel, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QDrawutilFunctions_QDrawutilFunctions, qDrawShadePanelQPainterQRectQPaletteBoolIntQBrush, arginfo_qt_widgets_qdrawutilfunctions_qdrawutilfunctions_qdrawshadepanelqpainterqrectqpaletteboolintqbrush, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QDrawutilFunctions_QDrawutilFunctions, qDrawWinButton, arginfo_qt_widgets_qdrawutilfunctions_qdrawutilfunctions_qdrawwinbutton, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QDrawutilFunctions_QDrawutilFunctions, qDrawWinButtonQPainterQRectQPaletteBoolQBrush, arginfo_qt_widgets_qdrawutilfunctions_qdrawutilfunctions_qdrawwinbuttonqpainterqrectqpaletteboolqbrush, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QDrawutilFunctions_QDrawutilFunctions, qDrawWinPanel, arginfo_qt_widgets_qdrawutilfunctions_qdrawutilfunctions_qdrawwinpanel, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QDrawutilFunctions_QDrawutilFunctions, qDrawWinPanelQPainterQRectQPaletteBoolQBrush, arginfo_qt_widgets_qdrawutilfunctions_qdrawutilfunctions_qdrawwinpanelqpainterqrectqpaletteboolqbrush, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QDrawutilFunctions_QDrawutilFunctions, qDrawPlainRect, arginfo_qt_widgets_qdrawutilfunctions_qdrawutilfunctions_qdrawplainrect, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QDrawutilFunctions_QDrawutilFunctions, qDrawPlainRectQPainterQRectQColorIntQBrush, arginfo_qt_widgets_qdrawutilfunctions_qdrawutilfunctions_qdrawplainrectqpainterqrectqcolorintqbrush, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QDrawutilFunctions_QDrawutilFunctions, qDrawPlainRoundedRect, arginfo_qt_widgets_qdrawutilfunctions_qdrawutilfunctions_qdrawplainroundedrect, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QDrawutilFunctions_QDrawutilFunctions, qDrawPlainRoundedRectQPainterQRectQrealQrealQColorIntQBrush, arginfo_qt_widgets_qdrawutilfunctions_qdrawutilfunctions_qdrawplainroundedrectqpainterqrectqrealqrealqcolorintqbrush, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QDrawutilFunctions_QDrawutilFunctions, qDrawBorderPixmap, arginfo_qt_widgets_qdrawutilfunctions_qdrawutilfunctions_qdrawborderpixmap, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QDrawutilFunctions_QDrawutilFunctions, qDrawBorderPixmapQPainterQRectQMarginsQPixmap, arginfo_qt_widgets_qdrawutilfunctions_qdrawutilfunctions_qdrawborderpixmapqpainterqrectqmarginsqpixmap, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
