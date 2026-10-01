
extern zend_class_entry *qt_gui_qpainter_qpainter_ce;

ZEPHIR_INIT_CLASS(Qt_Gui_QPainter_QPainter);

PHP_METHOD(Qt_Gui_QPainter_QPainter, staticMetaObject);
PHP_METHOD(Qt_Gui_QPainter_QPainter, qt_check_for_QGADGET_macro);
PHP_METHOD(Qt_Gui_QPainter_QPainter, new_);
PHP_METHOD(Qt_Gui_QPainter_QPainter, newQPaintDevice);
PHP_METHOD(Qt_Gui_QPainter_QPainter, device);
PHP_METHOD(Qt_Gui_QPainter_QPainter, begin);
PHP_METHOD(Qt_Gui_QPainter_QPainter, end);
PHP_METHOD(Qt_Gui_QPainter_QPainter, isActive);
PHP_METHOD(Qt_Gui_QPainter_QPainter, setCompositionMode);
PHP_METHOD(Qt_Gui_QPainter_QPainter, compositionMode);
PHP_METHOD(Qt_Gui_QPainter_QPainter, font);
PHP_METHOD(Qt_Gui_QPainter_QPainter, setFont);
PHP_METHOD(Qt_Gui_QPainter_QPainter, fontMetrics);
PHP_METHOD(Qt_Gui_QPainter_QPainter, fontInfo);
PHP_METHOD(Qt_Gui_QPainter_QPainter, setPen);
PHP_METHOD(Qt_Gui_QPainter_QPainter, setPenQPen);
PHP_METHOD(Qt_Gui_QPainter_QPainter, setPenQtPenStyle);
PHP_METHOD(Qt_Gui_QPainter_QPainter, pen);
PHP_METHOD(Qt_Gui_QPainter_QPainter, setBrush);
PHP_METHOD(Qt_Gui_QPainter_QPainter, setBrushQtBrushStyle);
PHP_METHOD(Qt_Gui_QPainter_QPainter, brush);
PHP_METHOD(Qt_Gui_QPainter_QPainter, setBackgroundMode);
PHP_METHOD(Qt_Gui_QPainter_QPainter, backgroundMode);
PHP_METHOD(Qt_Gui_QPainter_QPainter, brushOrigin);
PHP_METHOD(Qt_Gui_QPainter_QPainter, setBrushOrigin);
PHP_METHOD(Qt_Gui_QPainter_QPainter, setBrushOriginQPoint);
PHP_METHOD(Qt_Gui_QPainter_QPainter, setBrushOriginQPointF);
PHP_METHOD(Qt_Gui_QPainter_QPainter, setBackground);
PHP_METHOD(Qt_Gui_QPainter_QPainter, background);
PHP_METHOD(Qt_Gui_QPainter_QPainter, opacity);
PHP_METHOD(Qt_Gui_QPainter_QPainter, setOpacity);
PHP_METHOD(Qt_Gui_QPainter_QPainter, clipRegion);
PHP_METHOD(Qt_Gui_QPainter_QPainter, clipPath);
PHP_METHOD(Qt_Gui_QPainter_QPainter, setClipRect);
PHP_METHOD(Qt_Gui_QPainter_QPainter, setClipRectQRectQtClipOperation);
PHP_METHOD(Qt_Gui_QPainter_QPainter, setClipRectIntIntIntIntQtClipOperation);
PHP_METHOD(Qt_Gui_QPainter_QPainter, setClipRegion);
PHP_METHOD(Qt_Gui_QPainter_QPainter, setClipPath);
PHP_METHOD(Qt_Gui_QPainter_QPainter, setClipping);
PHP_METHOD(Qt_Gui_QPainter_QPainter, hasClipping);
PHP_METHOD(Qt_Gui_QPainter_QPainter, clipBoundingRect);
PHP_METHOD(Qt_Gui_QPainter_QPainter, save);
PHP_METHOD(Qt_Gui_QPainter_QPainter, restore);
PHP_METHOD(Qt_Gui_QPainter_QPainter, setTransform);
PHP_METHOD(Qt_Gui_QPainter_QPainter, transform);
PHP_METHOD(Qt_Gui_QPainter_QPainter, deviceTransform);
PHP_METHOD(Qt_Gui_QPainter_QPainter, resetTransform);
PHP_METHOD(Qt_Gui_QPainter_QPainter, setWorldTransform);
PHP_METHOD(Qt_Gui_QPainter_QPainter, worldTransform);
PHP_METHOD(Qt_Gui_QPainter_QPainter, combinedTransform);
PHP_METHOD(Qt_Gui_QPainter_QPainter, setWorldMatrixEnabled);
PHP_METHOD(Qt_Gui_QPainter_QPainter, worldMatrixEnabled);
PHP_METHOD(Qt_Gui_QPainter_QPainter, scale);
PHP_METHOD(Qt_Gui_QPainter_QPainter, shear);
PHP_METHOD(Qt_Gui_QPainter_QPainter, rotate);
PHP_METHOD(Qt_Gui_QPainter_QPainter, translate);
PHP_METHOD(Qt_Gui_QPainter_QPainter, translateQPoint);
PHP_METHOD(Qt_Gui_QPainter_QPainter, translateQrealQreal);
PHP_METHOD(Qt_Gui_QPainter_QPainter, window);
PHP_METHOD(Qt_Gui_QPainter_QPainter, setWindow);
PHP_METHOD(Qt_Gui_QPainter_QPainter, setWindowIntIntIntInt);
PHP_METHOD(Qt_Gui_QPainter_QPainter, viewport);
PHP_METHOD(Qt_Gui_QPainter_QPainter, setViewport);
PHP_METHOD(Qt_Gui_QPainter_QPainter, setViewportIntIntIntInt);
PHP_METHOD(Qt_Gui_QPainter_QPainter, setViewTransformEnabled);
PHP_METHOD(Qt_Gui_QPainter_QPainter, viewTransformEnabled);
PHP_METHOD(Qt_Gui_QPainter_QPainter, strokePath);
PHP_METHOD(Qt_Gui_QPainter_QPainter, fillPath);
PHP_METHOD(Qt_Gui_QPainter_QPainter, drawPath);
PHP_METHOD(Qt_Gui_QPainter_QPainter, drawPoint);
PHP_METHOD(Qt_Gui_QPainter_QPainter, drawPointQPoint);
PHP_METHOD(Qt_Gui_QPainter_QPainter, drawPointIntInt);
PHP_METHOD(Qt_Gui_QPainter_QPainter, drawPoints);
PHP_METHOD(Qt_Gui_QPainter_QPainter, drawPointsQPolygonF);
PHP_METHOD(Qt_Gui_QPainter_QPainter, drawPointsQPointInt);
PHP_METHOD(Qt_Gui_QPainter_QPainter, drawPointsQPolygon);
PHP_METHOD(Qt_Gui_QPainter_QPainter, drawLine);
PHP_METHOD(Qt_Gui_QPainter_QPainter, drawLineQLine);
PHP_METHOD(Qt_Gui_QPainter_QPainter, drawLineIntIntIntInt);
PHP_METHOD(Qt_Gui_QPainter_QPainter, drawLineQPointQPoint);
PHP_METHOD(Qt_Gui_QPainter_QPainter, drawLineQPointFQPointF);
PHP_METHOD(Qt_Gui_QPainter_QPainter, drawLines);
PHP_METHOD(Qt_Gui_QPainter_QPainter, drawLinesQListQLineF);
PHP_METHOD(Qt_Gui_QPainter_QPainter, drawLinesQPointFInt);
PHP_METHOD(Qt_Gui_QPainter_QPainter, drawLinesQListQPointF);
PHP_METHOD(Qt_Gui_QPainter_QPainter, drawLinesQLineInt);
PHP_METHOD(Qt_Gui_QPainter_QPainter, drawLinesQListQLine);
PHP_METHOD(Qt_Gui_QPainter_QPainter, drawLinesQPointInt);
PHP_METHOD(Qt_Gui_QPainter_QPainter, drawLinesQListQPoint);
PHP_METHOD(Qt_Gui_QPainter_QPainter, drawRect);
PHP_METHOD(Qt_Gui_QPainter_QPainter, drawRectIntIntIntInt);
PHP_METHOD(Qt_Gui_QPainter_QPainter, drawRectQRect);
PHP_METHOD(Qt_Gui_QPainter_QPainter, drawRects);
PHP_METHOD(Qt_Gui_QPainter_QPainter, drawRectsQListQRectF);
PHP_METHOD(Qt_Gui_QPainter_QPainter, drawRectsQRectInt);
PHP_METHOD(Qt_Gui_QPainter_QPainter, drawRectsQListQRect);
PHP_METHOD(Qt_Gui_QPainter_QPainter, drawEllipse);
PHP_METHOD(Qt_Gui_QPainter_QPainter, drawEllipseQRect);
PHP_METHOD(Qt_Gui_QPainter_QPainter, drawEllipseIntIntIntInt);
PHP_METHOD(Qt_Gui_QPainter_QPainter, drawEllipseQPointFQrealQreal);
PHP_METHOD(Qt_Gui_QPainter_QPainter, drawEllipseQPointIntInt);
PHP_METHOD(Qt_Gui_QPainter_QPainter, drawPolyline);
PHP_METHOD(Qt_Gui_QPainter_QPainter, drawPolylineQPolygonF);
PHP_METHOD(Qt_Gui_QPainter_QPainter, drawPolylineQPointInt);
PHP_METHOD(Qt_Gui_QPainter_QPainter, drawPolylineQPolygon);
PHP_METHOD(Qt_Gui_QPainter_QPainter, drawPolygon);
PHP_METHOD(Qt_Gui_QPainter_QPainter, drawPolygonQPolygonFQtFillRule);
PHP_METHOD(Qt_Gui_QPainter_QPainter, drawPolygonQPointIntQtFillRule);
PHP_METHOD(Qt_Gui_QPainter_QPainter, drawPolygonQPolygonQtFillRule);
PHP_METHOD(Qt_Gui_QPainter_QPainter, drawConvexPolygon);
PHP_METHOD(Qt_Gui_QPainter_QPainter, drawConvexPolygonQPolygonF);
PHP_METHOD(Qt_Gui_QPainter_QPainter, drawConvexPolygonQPointInt);
PHP_METHOD(Qt_Gui_QPainter_QPainter, drawConvexPolygonQPolygon);
PHP_METHOD(Qt_Gui_QPainter_QPainter, drawArc);
PHP_METHOD(Qt_Gui_QPainter_QPainter, drawArcQRectIntInt);
PHP_METHOD(Qt_Gui_QPainter_QPainter, drawArcIntIntIntIntIntInt);
PHP_METHOD(Qt_Gui_QPainter_QPainter, drawPie);
PHP_METHOD(Qt_Gui_QPainter_QPainter, drawPieIntIntIntIntIntInt);
PHP_METHOD(Qt_Gui_QPainter_QPainter, drawPieQRectIntInt);
PHP_METHOD(Qt_Gui_QPainter_QPainter, drawChord);
PHP_METHOD(Qt_Gui_QPainter_QPainter, drawChordIntIntIntIntIntInt);
PHP_METHOD(Qt_Gui_QPainter_QPainter, drawChordQRectIntInt);
PHP_METHOD(Qt_Gui_QPainter_QPainter, drawRoundedRect);
PHP_METHOD(Qt_Gui_QPainter_QPainter, drawRoundedRectIntIntIntIntQrealQrealQtSizeMode);
PHP_METHOD(Qt_Gui_QPainter_QPainter, drawRoundedRectQRectQrealQrealQtSizeMode);
PHP_METHOD(Qt_Gui_QPainter_QPainter, drawTiledPixmap);
PHP_METHOD(Qt_Gui_QPainter_QPainter, drawTiledPixmapIntIntIntIntQPixmapIntInt);
PHP_METHOD(Qt_Gui_QPainter_QPainter, drawTiledPixmapQRectQPixmapQPoint);
PHP_METHOD(Qt_Gui_QPainter_QPainter, drawPicture);
PHP_METHOD(Qt_Gui_QPainter_QPainter, drawPictureIntIntQPicture);
PHP_METHOD(Qt_Gui_QPainter_QPainter, drawPictureQPointQPicture);
PHP_METHOD(Qt_Gui_QPainter_QPainter, drawPixmap);
PHP_METHOD(Qt_Gui_QPainter_QPainter, drawPixmapQRectQPixmapQRect);
PHP_METHOD(Qt_Gui_QPainter_QPainter, drawPixmapIntIntIntIntQPixmapIntIntIntInt);
PHP_METHOD(Qt_Gui_QPainter_QPainter, drawPixmapIntIntQPixmapIntIntIntInt);
PHP_METHOD(Qt_Gui_QPainter_QPainter, drawPixmapQPointFQPixmapQRectF);
PHP_METHOD(Qt_Gui_QPainter_QPainter, drawPixmapQPointQPixmapQRect);
PHP_METHOD(Qt_Gui_QPainter_QPainter, drawPixmapQPointFQPixmap);
PHP_METHOD(Qt_Gui_QPainter_QPainter, drawPixmapQPointQPixmap);
PHP_METHOD(Qt_Gui_QPainter_QPainter, drawPixmapIntIntQPixmap);
PHP_METHOD(Qt_Gui_QPainter_QPainter, drawPixmapQRectQPixmap);
PHP_METHOD(Qt_Gui_QPainter_QPainter, drawPixmapIntIntIntIntQPixmap);
PHP_METHOD(Qt_Gui_QPainter_QPainter, drawPixmapFragments);
PHP_METHOD(Qt_Gui_QPainter_QPainter, drawImage);
PHP_METHOD(Qt_Gui_QPainter_QPainter, drawImageQRectQImageQRectQtImageConversionFlags);
PHP_METHOD(Qt_Gui_QPainter_QPainter, drawImageQPointFQImageQRectFQtImageConversionFlags);
PHP_METHOD(Qt_Gui_QPainter_QPainter, drawImageQPointQImageQRectQtImageConversionFlags);
PHP_METHOD(Qt_Gui_QPainter_QPainter, drawImageQRectFQImage);
PHP_METHOD(Qt_Gui_QPainter_QPainter, drawImageQRectQImage);
PHP_METHOD(Qt_Gui_QPainter_QPainter, drawImageQPointFQImage);
PHP_METHOD(Qt_Gui_QPainter_QPainter, drawImageQPointQImage);
PHP_METHOD(Qt_Gui_QPainter_QPainter, drawImageIntIntQImageIntIntIntIntQtImageConversionFlags);
PHP_METHOD(Qt_Gui_QPainter_QPainter, setLayoutDirection);
PHP_METHOD(Qt_Gui_QPainter_QPainter, layoutDirection);
PHP_METHOD(Qt_Gui_QPainter_QPainter, drawGlyphRun);
PHP_METHOD(Qt_Gui_QPainter_QPainter, drawStaticText);
PHP_METHOD(Qt_Gui_QPainter_QPainter, drawStaticTextQPointQStaticText);
PHP_METHOD(Qt_Gui_QPainter_QPainter, drawStaticTextIntIntQStaticText);
PHP_METHOD(Qt_Gui_QPainter_QPainter, drawText);
PHP_METHOD(Qt_Gui_QPainter_QPainter, drawTextQPointQString);
PHP_METHOD(Qt_Gui_QPainter_QPainter, drawTextIntIntQString);
PHP_METHOD(Qt_Gui_QPainter_QPainter, drawTextQPointFQStringIntInt);
PHP_METHOD(Qt_Gui_QPainter_QPainter, drawTextQRectFIntQStringQRectF);
PHP_METHOD(Qt_Gui_QPainter_QPainter, drawTextQRectIntQStringQRect);
PHP_METHOD(Qt_Gui_QPainter_QPainter, drawTextIntIntIntIntIntQStringQRect);
PHP_METHOD(Qt_Gui_QPainter_QPainter, drawTextQRectFQStringQTextOption);
PHP_METHOD(Qt_Gui_QPainter_QPainter, boundingRect);
PHP_METHOD(Qt_Gui_QPainter_QPainter, boundingRectQRectIntQString);
PHP_METHOD(Qt_Gui_QPainter_QPainter, boundingRectIntIntIntIntIntQString);
PHP_METHOD(Qt_Gui_QPainter_QPainter, boundingRectQRectFQStringQTextOption);
PHP_METHOD(Qt_Gui_QPainter_QPainter, drawTextItem);
PHP_METHOD(Qt_Gui_QPainter_QPainter, drawTextItemIntIntQTextItem);
PHP_METHOD(Qt_Gui_QPainter_QPainter, drawTextItemQPointQTextItem);
PHP_METHOD(Qt_Gui_QPainter_QPainter, fillRect);
PHP_METHOD(Qt_Gui_QPainter_QPainter, fillRectIntIntIntIntQBrush);
PHP_METHOD(Qt_Gui_QPainter_QPainter, fillRectQRectQBrush);
PHP_METHOD(Qt_Gui_QPainter_QPainter, fillRectQRectFQColor);
PHP_METHOD(Qt_Gui_QPainter_QPainter, fillRectIntIntIntIntQColor);
PHP_METHOD(Qt_Gui_QPainter_QPainter, fillRectQRectQColor);
PHP_METHOD(Qt_Gui_QPainter_QPainter, fillRectIntIntIntIntQtGlobalColor);
PHP_METHOD(Qt_Gui_QPainter_QPainter, fillRectQRectQtGlobalColor);
PHP_METHOD(Qt_Gui_QPainter_QPainter, fillRectQRectFQtGlobalColor);
PHP_METHOD(Qt_Gui_QPainter_QPainter, fillRectIntIntIntIntQtBrushStyle);
PHP_METHOD(Qt_Gui_QPainter_QPainter, fillRectQRectQtBrushStyle);
PHP_METHOD(Qt_Gui_QPainter_QPainter, fillRectQRectFQtBrushStyle);
PHP_METHOD(Qt_Gui_QPainter_QPainter, fillRectIntIntIntIntQGradientPreset);
PHP_METHOD(Qt_Gui_QPainter_QPainter, fillRectQRectQGradientPreset);
PHP_METHOD(Qt_Gui_QPainter_QPainter, fillRectQRectFQGradientPreset);
PHP_METHOD(Qt_Gui_QPainter_QPainter, eraseRect);
PHP_METHOD(Qt_Gui_QPainter_QPainter, eraseRectIntIntIntInt);
PHP_METHOD(Qt_Gui_QPainter_QPainter, eraseRectQRect);
PHP_METHOD(Qt_Gui_QPainter_QPainter, setRenderHint);
PHP_METHOD(Qt_Gui_QPainter_QPainter, setRenderHints);
PHP_METHOD(Qt_Gui_QPainter_QPainter, renderHints);
PHP_METHOD(Qt_Gui_QPainter_QPainter, testRenderHint);
PHP_METHOD(Qt_Gui_QPainter_QPainter, paintEngine);
PHP_METHOD(Qt_Gui_QPainter_QPainter, beginNativePainting);
PHP_METHOD(Qt_Gui_QPainter_QPainter, endNativePainting);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpainter_qpainter_staticmetaobject, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpainter_qpainter_qt_check_for_qgadget_macro, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpainter_qpainter_new_, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpainter_qpainter_newqpaintdevice, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpainter_qpainter_device, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpainter_qpainter_begin, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpainter_qpainter_end, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpainter_qpainter_isactive, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpainter_qpainter_setcompositionmode, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, mode, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpainter_qpainter_compositionmode, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpainter_qpainter_font, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpainter_qpainter_setfont, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, f, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpainter_qpainter_fontmetrics, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpainter_qpainter_fontinfo, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpainter_qpainter_setpen, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, color, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpainter_qpainter_setpenqpen, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, pen, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpainter_qpainter_setpenqtpenstyle, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, style, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpainter_qpainter_pen, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpainter_qpainter_setbrush, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, brush, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpainter_qpainter_setbrushqtbrushstyle, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, style, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpainter_qpainter_brush, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpainter_qpainter_setbackgroundmode, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, mode, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpainter_qpainter_backgroundmode, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpainter_qpainter_brushorigin, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpainter_qpainter_setbrushorigin, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpainter_qpainter_setbrushoriginqpoint, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0X, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0Y, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpainter_qpainter_setbrushoriginqpointf, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0X, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, arg0Y, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpainter_qpainter_setbackground, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, bg, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpainter_qpainter_background, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpainter_qpainter_opacity, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpainter_qpainter_setopacity, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, opacity, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpainter_qpainter_clipregion, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpainter_qpainter_clippath, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpainter_qpainter_setcliprect, 0, 5, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0X, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, arg0Y, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, arg0Width, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, arg0Height, IS_DOUBLE, 0)
	ZEND_ARG_INFO(0, op)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpainter_qpainter_setcliprectqrectqtclipoperation, 0, 5, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0X, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0Y, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0Width, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0Height, IS_LONG, 0)
	ZEND_ARG_INFO(0, op)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpainter_qpainter_setcliprectintintintintqtclipoperation, 0, 5, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, w, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, h, IS_LONG, 0)
	ZEND_ARG_INFO(0, op)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpainter_qpainter_setclipregion, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
	ZEND_ARG_INFO(0, op)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpainter_qpainter_setclippath, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, path, IS_LONG, 0)
	ZEND_ARG_INFO(0, op)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpainter_qpainter_setclipping, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, enable, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpainter_qpainter_hasclipping, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpainter_qpainter_clipboundingrect, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpainter_qpainter_save, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpainter_qpainter_restore, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpainter_qpainter_settransform, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, transform, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, combine, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpainter_qpainter_transform, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpainter_qpainter_devicetransform, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpainter_qpainter_resettransform, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpainter_qpainter_setworldtransform, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, matrix, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, combine, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpainter_qpainter_worldtransform, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpainter_qpainter_combinedtransform, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpainter_qpainter_setworldmatrixenabled, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, enabled, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpainter_qpainter_worldmatrixenabled, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpainter_qpainter_scale, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sx, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, sy, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpainter_qpainter_shear, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sh, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, sv, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpainter_qpainter_rotate, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, a, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpainter_qpainter_translate, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, offsetX, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, offsetY, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpainter_qpainter_translateqpoint, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, offsetX, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, offsetY, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpainter_qpainter_translateqrealqreal, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, dx, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, dy, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpainter_qpainter_window, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpainter_qpainter_setwindow, 0, 5, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, windowX, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, windowY, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, windowWidth, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, windowHeight, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpainter_qpainter_setwindowintintintint, 0, 5, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, w, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, h, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpainter_qpainter_viewport, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpainter_qpainter_setviewport, 0, 5, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, viewportX, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, viewportY, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, viewportWidth, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, viewportHeight, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpainter_qpainter_setviewportintintintint, 0, 5, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, w, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, h, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpainter_qpainter_setviewtransformenabled, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, enable, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpainter_qpainter_viewtransformenabled, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpainter_qpainter_strokepath, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, path, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, pen, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpainter_qpainter_fillpath, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, path, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, brush, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpainter_qpainter_drawpath, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, path, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpainter_qpainter_drawpoint, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, ptX, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, ptY, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpainter_qpainter_drawpointqpoint, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, pX, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, pY, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpainter_qpainter_drawpointintint, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpainter_qpainter_drawpoints, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_INFO(0, points)
	ZEND_ARG_TYPE_INFO(0, pointCount, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpainter_qpainter_drawpointsqpolygonf, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, points, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpainter_qpainter_drawpointsqpointint, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_INFO(0, points)
	ZEND_ARG_TYPE_INFO(0, pointCount, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpainter_qpainter_drawpointsqpolygon, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, points, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpainter_qpainter_drawline, 0, 5, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, lineX1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, lineY1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, lineX2, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, lineY2, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpainter_qpainter_drawlineqline, 0, 5, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, lineX1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, lineY1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, lineX2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, lineY2, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpainter_qpainter_drawlineintintintint, 0, 5, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, y1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, y2, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpainter_qpainter_drawlineqpointqpoint, 0, 5, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, p1X, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, p1Y, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, p2X, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, p2Y, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpainter_qpainter_drawlineqpointfqpointf, 0, 5, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, p1X, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, p1Y, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, p2X, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, p2Y, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpainter_qpainter_drawlines, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_INFO(0, lines)
	ZEND_ARG_TYPE_INFO(0, lineCount, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpainter_qpainter_drawlinesqlistqlinef, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_ARRAY_INFO(0, lines, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpainter_qpainter_drawlinesqpointfint, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_INFO(0, pointPairs)
	ZEND_ARG_TYPE_INFO(0, lineCount, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpainter_qpainter_drawlinesqlistqpointf, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_ARRAY_INFO(0, pointPairs, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpainter_qpainter_drawlinesqlineint, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_INFO(0, lines)
	ZEND_ARG_TYPE_INFO(0, lineCount, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpainter_qpainter_drawlinesqlistqline, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_ARRAY_INFO(0, lines, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpainter_qpainter_drawlinesqpointint, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_INFO(0, pointPairs)
	ZEND_ARG_TYPE_INFO(0, lineCount, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpainter_qpainter_drawlinesqlistqpoint, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_ARRAY_INFO(0, pointPairs, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpainter_qpainter_drawrect, 0, 5, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rectX, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, rectY, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, rectWidth, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, rectHeight, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpainter_qpainter_drawrectintintintint, 0, 5, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, y1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, w, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, h, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpainter_qpainter_drawrectqrect, 0, 5, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rectX, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rectY, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rectWidth, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rectHeight, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpainter_qpainter_drawrects, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_INFO(0, rects)
	ZEND_ARG_TYPE_INFO(0, rectCount, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpainter_qpainter_drawrectsqlistqrectf, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_ARRAY_INFO(0, rectangles, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpainter_qpainter_drawrectsqrectint, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_INFO(0, rects)
	ZEND_ARG_TYPE_INFO(0, rectCount, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpainter_qpainter_drawrectsqlistqrect, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_ARRAY_INFO(0, rectangles, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpainter_qpainter_drawellipse, 0, 5, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rX, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, rY, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, rWidth, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, rHeight, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpainter_qpainter_drawellipseqrect, 0, 5, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rX, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rY, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rWidth, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rHeight, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpainter_qpainter_drawellipseintintintint, 0, 5, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, w, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, h, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpainter_qpainter_drawellipseqpointfqrealqreal, 0, 5, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, centerX, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, centerY, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, rx, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, ry, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpainter_qpainter_drawellipseqpointintint, 0, 5, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, centerX, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, centerY, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rx, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, ry, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpainter_qpainter_drawpolyline, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_INFO(0, points)
	ZEND_ARG_TYPE_INFO(0, pointCount, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpainter_qpainter_drawpolylineqpolygonf, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, polyline, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpainter_qpainter_drawpolylineqpointint, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_INFO(0, points)
	ZEND_ARG_TYPE_INFO(0, pointCount, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpainter_qpainter_drawpolylineqpolygon, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, polygon, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpainter_qpainter_drawpolygon, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_INFO(0, points)
	ZEND_ARG_TYPE_INFO(0, pointCount, IS_LONG, 0)
	ZEND_ARG_INFO(0, fillRule)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpainter_qpainter_drawpolygonqpolygonfqtfillrule, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, polygon, IS_LONG, 0)
	ZEND_ARG_INFO(0, fillRule)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpainter_qpainter_drawpolygonqpointintqtfillrule, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_INFO(0, points)
	ZEND_ARG_TYPE_INFO(0, pointCount, IS_LONG, 0)
	ZEND_ARG_INFO(0, fillRule)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpainter_qpainter_drawpolygonqpolygonqtfillrule, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, polygon, IS_LONG, 0)
	ZEND_ARG_INFO(0, fillRule)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpainter_qpainter_drawconvexpolygon, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_INFO(0, points)
	ZEND_ARG_TYPE_INFO(0, pointCount, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpainter_qpainter_drawconvexpolygonqpolygonf, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, polygon, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpainter_qpainter_drawconvexpolygonqpointint, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_INFO(0, points)
	ZEND_ARG_TYPE_INFO(0, pointCount, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpainter_qpainter_drawconvexpolygonqpolygon, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, polygon, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpainter_qpainter_drawarc, 0, 7, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rectX, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, rectY, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, rectWidth, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, rectHeight, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, a, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, alen, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpainter_qpainter_drawarcqrectintint, 0, 7, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0X, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0Y, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0Width, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0Height, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, a, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, alen, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpainter_qpainter_drawarcintintintintintint, 0, 7, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, w, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, h, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, a, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, alen, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpainter_qpainter_drawpie, 0, 7, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rectX, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, rectY, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, rectWidth, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, rectHeight, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, a, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, alen, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpainter_qpainter_drawpieintintintintintint, 0, 7, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, w, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, h, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, a, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, alen, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpainter_qpainter_drawpieqrectintint, 0, 7, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0X, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0Y, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0Width, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0Height, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, a, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, alen, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpainter_qpainter_drawchord, 0, 7, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rectX, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, rectY, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, rectWidth, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, rectHeight, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, a, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, alen, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpainter_qpainter_drawchordintintintintintint, 0, 7, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, w, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, h, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, a, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, alen, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpainter_qpainter_drawchordqrectintint, 0, 7, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0X, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0Y, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0Width, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0Height, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, a, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, alen, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpainter_qpainter_drawroundedrect, 0, 7, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rectX, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, rectY, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, rectWidth, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, rectHeight, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, xRadius, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, yRadius, IS_DOUBLE, 0)
	ZEND_ARG_INFO(0, mode)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpainter_qpainter_drawroundedrectintintintintqrealqrealqtsizemode, 0, 7, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, w, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, h, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, xRadius, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, yRadius, IS_DOUBLE, 0)
	ZEND_ARG_INFO(0, mode)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpainter_qpainter_drawroundedrectqrectqrealqrealqtsizemode, 0, 7, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rectX, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rectY, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rectWidth, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rectHeight, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, xRadius, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, yRadius, IS_DOUBLE, 0)
	ZEND_ARG_INFO(0, mode)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpainter_qpainter_drawtiledpixmap, 0, 6, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rectX, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, rectY, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, rectWidth, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, rectHeight, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, pm, IS_LONG, 0)
	ZEND_ARG_INFO(0, offsetX)
	ZEND_ARG_INFO(0, offsetY)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpainter_qpainter_drawtiledpixmapintintintintqpixmapintint, 0, 6, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, w, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, h, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg4, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sx, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sy, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpainter_qpainter_drawtiledpixmapqrectqpixmapqpoint, 0, 6, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0X, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0Y, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0Width, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0Height, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg1, IS_LONG, 0)
	ZEND_ARG_INFO(0, arg2X)
	ZEND_ARG_INFO(0, arg2Y)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpainter_qpainter_drawpicture, 0, 4, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, pX, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, pY, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, picture, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpainter_qpainter_drawpictureintintqpicture, 0, 4, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, picture, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpainter_qpainter_drawpictureqpointqpicture, 0, 4, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, pX, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, pY, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, picture, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpainter_qpainter_drawpixmap, 0, 10, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, targetRectX, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, targetRectY, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, targetRectWidth, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, targetRectHeight, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, pixmap, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sourceRectX, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, sourceRectY, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, sourceRectWidth, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, sourceRectHeight, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpainter_qpainter_drawpixmapqrectqpixmapqrect, 0, 10, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, targetRectX, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, targetRectY, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, targetRectWidth, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, targetRectHeight, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, pixmap, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sourceRectX, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sourceRectY, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sourceRectWidth, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sourceRectHeight, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpainter_qpainter_drawpixmapintintintintqpixmapintintintint, 0, 10, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, w, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, h, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, pm, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sx, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sy, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sw, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sh, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpainter_qpainter_drawpixmapintintqpixmapintintintint, 0, 8, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, pm, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sx, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sy, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sw, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sh, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpainter_qpainter_drawpixmapqpointfqpixmapqrectf, 0, 8, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, pX, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, pY, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, pm, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, srX, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, srY, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, srWidth, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, srHeight, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpainter_qpainter_drawpixmapqpointqpixmapqrect, 0, 8, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, pX, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, pY, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, pm, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, srX, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, srY, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, srWidth, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, srHeight, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpainter_qpainter_drawpixmapqpointfqpixmap, 0, 4, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, pX, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, pY, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, pm, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpainter_qpainter_drawpixmapqpointqpixmap, 0, 4, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, pX, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, pY, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, pm, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpainter_qpainter_drawpixmapintintqpixmap, 0, 4, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, pm, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpainter_qpainter_drawpixmapqrectqpixmap, 0, 6, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rX, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rY, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rWidth, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rHeight, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, pm, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpainter_qpainter_drawpixmapintintintintqpixmap, 0, 6, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, w, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, h, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, pm, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpainter_qpainter_drawpixmapfragments, 0, 4, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, fragments, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, fragmentCount, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, pixmap, IS_LONG, 0)
	ZEND_ARG_INFO(0, hints)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpainter_qpainter_drawimage, 0, 10, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, targetRectX, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, targetRectY, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, targetRectWidth, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, targetRectHeight, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, image, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sourceRectX, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, sourceRectY, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, sourceRectWidth, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, sourceRectHeight, IS_DOUBLE, 0)
	ZEND_ARG_INFO(0, flags)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpainter_qpainter_drawimageqrectqimageqrectqtimageconversionflags, 0, 10, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, targetRectX, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, targetRectY, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, targetRectWidth, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, targetRectHeight, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, image, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sourceRectX, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sourceRectY, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sourceRectWidth, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sourceRectHeight, IS_LONG, 0)
	ZEND_ARG_INFO(0, flags)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpainter_qpainter_drawimageqpointfqimageqrectfqtimageconversionflags, 0, 8, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, pX, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, pY, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, image, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, srX, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, srY, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, srWidth, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, srHeight, IS_DOUBLE, 0)
	ZEND_ARG_INFO(0, flags)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpainter_qpainter_drawimageqpointqimageqrectqtimageconversionflags, 0, 8, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, pX, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, pY, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, image, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, srX, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, srY, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, srWidth, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, srHeight, IS_LONG, 0)
	ZEND_ARG_INFO(0, flags)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpainter_qpainter_drawimageqrectfqimage, 0, 6, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rX, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, rY, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, rWidth, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, rHeight, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, image, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpainter_qpainter_drawimageqrectqimage, 0, 6, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rX, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rY, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rWidth, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rHeight, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, image, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpainter_qpainter_drawimageqpointfqimage, 0, 4, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, pX, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, pY, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, image, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpainter_qpainter_drawimageqpointqimage, 0, 4, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, pX, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, pY, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, image, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpainter_qpainter_drawimageintintqimageintintintintqtimageconversionflags, 0, 4, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, image, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sx, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sy, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sw, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sh, IS_LONG, 0)
	ZEND_ARG_INFO(0, flags)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpainter_qpainter_setlayoutdirection, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, direction, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpainter_qpainter_layoutdirection, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpainter_qpainter_drawglyphrun, 0, 4, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, positionX, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, positionY, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, glyphRun, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpainter_qpainter_drawstatictext, 0, 4, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, topLeftPositionX, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, topLeftPositionY, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, staticText, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpainter_qpainter_drawstatictextqpointqstatictext, 0, 4, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, topLeftPositionX, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, topLeftPositionY, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, staticText, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpainter_qpainter_drawstatictextintintqstatictext, 0, 4, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, left, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, top, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, staticText, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpainter_qpainter_drawtext, 0, 4, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, pX, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, pY, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, s, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpainter_qpainter_drawtextqpointqstring, 0, 4, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, pX, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, pY, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, s, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpainter_qpainter_drawtextintintqstring, 0, 4, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, s, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpainter_qpainter_drawtextqpointfqstringintint, 0, 6, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, pX, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, pY, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, str, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, tf, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, justificationPadding, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpainter_qpainter_drawtextqrectfintqstringqrectf, 0, 7, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rX, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, rY, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, rWidth, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, rHeight, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, flags, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, text, IS_STRING, 0)
	ZEND_ARG_INFO(0, br)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpainter_qpainter_drawtextqrectintqstringqrect, 0, 7, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rX, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rY, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rWidth, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rHeight, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, flags, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, text, IS_STRING, 0)
	ZEND_ARG_INFO(0, br)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpainter_qpainter_drawtextintintintintintqstringqrect, 0, 7, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, w, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, h, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, flags, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, text, IS_STRING, 0)
	ZEND_ARG_INFO(0, br)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpainter_qpainter_drawtextqrectfqstringqtextoption, 0, 6, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rX, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, rY, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, rWidth, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, rHeight, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, text, IS_STRING, 0)
	ZEND_ARG_INFO(0, o)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpainter_qpainter_boundingrect, 0, 7, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rectX, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, rectY, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, rectWidth, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, rectHeight, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, flags, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, text, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpainter_qpainter_boundingrectqrectintqstring, 0, 7, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rectX, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rectY, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rectWidth, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rectHeight, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, flags, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, text, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpainter_qpainter_boundingrectintintintintintqstring, 0, 7, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, w, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, h, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, flags, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, text, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpainter_qpainter_boundingrectqrectfqstringqtextoption, 0, 6, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rectX, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, rectY, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, rectWidth, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, rectHeight, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, text, IS_STRING, 0)
	ZEND_ARG_INFO(0, o)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpainter_qpainter_drawtextitem, 0, 4, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, pX, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, pY, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, ti, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpainter_qpainter_drawtextitemintintqtextitem, 0, 4, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, ti, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpainter_qpainter_drawtextitemqpointqtextitem, 0, 4, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, pX, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, pY, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, ti, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpainter_qpainter_fillrect, 0, 6, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0X, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, arg0Y, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, arg0Width, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, arg0Height, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, arg1, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpainter_qpainter_fillrectintintintintqbrush, 0, 6, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, w, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, h, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg4, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpainter_qpainter_fillrectqrectqbrush, 0, 6, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0X, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0Y, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0Width, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0Height, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg1, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpainter_qpainter_fillrectqrectfqcolor, 0, 6, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0X, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, arg0Y, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, arg0Width, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, arg0Height, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, color, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpainter_qpainter_fillrectintintintintqcolor, 0, 6, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, w, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, h, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, color, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpainter_qpainter_fillrectqrectqcolor, 0, 6, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0X, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0Y, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0Width, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0Height, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, color, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpainter_qpainter_fillrectintintintintqtglobalcolor, 0, 6, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, w, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, h, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, c, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpainter_qpainter_fillrectqrectqtglobalcolor, 0, 6, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rX, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rY, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rWidth, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rHeight, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, c, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpainter_qpainter_fillrectqrectfqtglobalcolor, 0, 6, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rX, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, rY, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, rWidth, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, rHeight, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, c, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpainter_qpainter_fillrectintintintintqtbrushstyle, 0, 6, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, w, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, h, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, style, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpainter_qpainter_fillrectqrectqtbrushstyle, 0, 6, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rX, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rY, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rWidth, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rHeight, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, style, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpainter_qpainter_fillrectqrectfqtbrushstyle, 0, 6, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rX, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, rY, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, rWidth, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, rHeight, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, style, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpainter_qpainter_fillrectintintintintqgradientpreset, 0, 6, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, w, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, h, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, preset, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpainter_qpainter_fillrectqrectqgradientpreset, 0, 6, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rX, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rY, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rWidth, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rHeight, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, preset, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpainter_qpainter_fillrectqrectfqgradientpreset, 0, 6, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rX, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, rY, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, rWidth, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, rHeight, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, preset, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpainter_qpainter_eraserect, 0, 5, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0X, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, arg0Y, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, arg0Width, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, arg0Height, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpainter_qpainter_eraserectintintintint, 0, 5, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, w, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, h, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpainter_qpainter_eraserectqrect, 0, 5, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0X, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0Y, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0Width, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0Height, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpainter_qpainter_setrenderhint, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, hint, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, on, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpainter_qpainter_setrenderhints, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, hints, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, on, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpainter_qpainter_renderhints, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpainter_qpainter_testrenderhint, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, hint, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpainter_qpainter_paintengine, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpainter_qpainter_beginnativepainting, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpainter_qpainter_endnativepainting, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_gui_qpainter_qpainter_method_entry) {
	PHP_ME(Qt_Gui_QPainter_QPainter, staticMetaObject, arginfo_qt_gui_qpainter_qpainter_staticmetaobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPainter_QPainter, qt_check_for_QGADGET_macro, arginfo_qt_gui_qpainter_qpainter_qt_check_for_qgadget_macro, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPainter_QPainter, new_, arginfo_qt_gui_qpainter_qpainter_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPainter_QPainter, newQPaintDevice, arginfo_qt_gui_qpainter_qpainter_newqpaintdevice, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPainter_QPainter, device, arginfo_qt_gui_qpainter_qpainter_device, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPainter_QPainter, begin, arginfo_qt_gui_qpainter_qpainter_begin, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPainter_QPainter, end, arginfo_qt_gui_qpainter_qpainter_end, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPainter_QPainter, isActive, arginfo_qt_gui_qpainter_qpainter_isactive, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPainter_QPainter, setCompositionMode, arginfo_qt_gui_qpainter_qpainter_setcompositionmode, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPainter_QPainter, compositionMode, arginfo_qt_gui_qpainter_qpainter_compositionmode, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPainter_QPainter, font, arginfo_qt_gui_qpainter_qpainter_font, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPainter_QPainter, setFont, arginfo_qt_gui_qpainter_qpainter_setfont, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPainter_QPainter, fontMetrics, arginfo_qt_gui_qpainter_qpainter_fontmetrics, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPainter_QPainter, fontInfo, arginfo_qt_gui_qpainter_qpainter_fontinfo, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPainter_QPainter, setPen, arginfo_qt_gui_qpainter_qpainter_setpen, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPainter_QPainter, setPenQPen, arginfo_qt_gui_qpainter_qpainter_setpenqpen, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPainter_QPainter, setPenQtPenStyle, arginfo_qt_gui_qpainter_qpainter_setpenqtpenstyle, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPainter_QPainter, pen, arginfo_qt_gui_qpainter_qpainter_pen, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPainter_QPainter, setBrush, arginfo_qt_gui_qpainter_qpainter_setbrush, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPainter_QPainter, setBrushQtBrushStyle, arginfo_qt_gui_qpainter_qpainter_setbrushqtbrushstyle, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPainter_QPainter, brush, arginfo_qt_gui_qpainter_qpainter_brush, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPainter_QPainter, setBackgroundMode, arginfo_qt_gui_qpainter_qpainter_setbackgroundmode, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPainter_QPainter, backgroundMode, arginfo_qt_gui_qpainter_qpainter_backgroundmode, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPainter_QPainter, brushOrigin, arginfo_qt_gui_qpainter_qpainter_brushorigin, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPainter_QPainter, setBrushOrigin, arginfo_qt_gui_qpainter_qpainter_setbrushorigin, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPainter_QPainter, setBrushOriginQPoint, arginfo_qt_gui_qpainter_qpainter_setbrushoriginqpoint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPainter_QPainter, setBrushOriginQPointF, arginfo_qt_gui_qpainter_qpainter_setbrushoriginqpointf, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPainter_QPainter, setBackground, arginfo_qt_gui_qpainter_qpainter_setbackground, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPainter_QPainter, background, arginfo_qt_gui_qpainter_qpainter_background, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPainter_QPainter, opacity, arginfo_qt_gui_qpainter_qpainter_opacity, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPainter_QPainter, setOpacity, arginfo_qt_gui_qpainter_qpainter_setopacity, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPainter_QPainter, clipRegion, arginfo_qt_gui_qpainter_qpainter_clipregion, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPainter_QPainter, clipPath, arginfo_qt_gui_qpainter_qpainter_clippath, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPainter_QPainter, setClipRect, arginfo_qt_gui_qpainter_qpainter_setcliprect, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPainter_QPainter, setClipRectQRectQtClipOperation, arginfo_qt_gui_qpainter_qpainter_setcliprectqrectqtclipoperation, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPainter_QPainter, setClipRectIntIntIntIntQtClipOperation, arginfo_qt_gui_qpainter_qpainter_setcliprectintintintintqtclipoperation, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPainter_QPainter, setClipRegion, arginfo_qt_gui_qpainter_qpainter_setclipregion, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPainter_QPainter, setClipPath, arginfo_qt_gui_qpainter_qpainter_setclippath, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPainter_QPainter, setClipping, arginfo_qt_gui_qpainter_qpainter_setclipping, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPainter_QPainter, hasClipping, arginfo_qt_gui_qpainter_qpainter_hasclipping, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPainter_QPainter, clipBoundingRect, arginfo_qt_gui_qpainter_qpainter_clipboundingrect, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPainter_QPainter, save, arginfo_qt_gui_qpainter_qpainter_save, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPainter_QPainter, restore, arginfo_qt_gui_qpainter_qpainter_restore, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPainter_QPainter, setTransform, arginfo_qt_gui_qpainter_qpainter_settransform, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPainter_QPainter, transform, arginfo_qt_gui_qpainter_qpainter_transform, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPainter_QPainter, deviceTransform, arginfo_qt_gui_qpainter_qpainter_devicetransform, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPainter_QPainter, resetTransform, arginfo_qt_gui_qpainter_qpainter_resettransform, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPainter_QPainter, setWorldTransform, arginfo_qt_gui_qpainter_qpainter_setworldtransform, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPainter_QPainter, worldTransform, arginfo_qt_gui_qpainter_qpainter_worldtransform, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPainter_QPainter, combinedTransform, arginfo_qt_gui_qpainter_qpainter_combinedtransform, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPainter_QPainter, setWorldMatrixEnabled, arginfo_qt_gui_qpainter_qpainter_setworldmatrixenabled, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPainter_QPainter, worldMatrixEnabled, arginfo_qt_gui_qpainter_qpainter_worldmatrixenabled, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPainter_QPainter, scale, arginfo_qt_gui_qpainter_qpainter_scale, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPainter_QPainter, shear, arginfo_qt_gui_qpainter_qpainter_shear, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPainter_QPainter, rotate, arginfo_qt_gui_qpainter_qpainter_rotate, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPainter_QPainter, translate, arginfo_qt_gui_qpainter_qpainter_translate, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPainter_QPainter, translateQPoint, arginfo_qt_gui_qpainter_qpainter_translateqpoint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPainter_QPainter, translateQrealQreal, arginfo_qt_gui_qpainter_qpainter_translateqrealqreal, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPainter_QPainter, window, arginfo_qt_gui_qpainter_qpainter_window, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPainter_QPainter, setWindow, arginfo_qt_gui_qpainter_qpainter_setwindow, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPainter_QPainter, setWindowIntIntIntInt, arginfo_qt_gui_qpainter_qpainter_setwindowintintintint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPainter_QPainter, viewport, arginfo_qt_gui_qpainter_qpainter_viewport, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPainter_QPainter, setViewport, arginfo_qt_gui_qpainter_qpainter_setviewport, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPainter_QPainter, setViewportIntIntIntInt, arginfo_qt_gui_qpainter_qpainter_setviewportintintintint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPainter_QPainter, setViewTransformEnabled, arginfo_qt_gui_qpainter_qpainter_setviewtransformenabled, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPainter_QPainter, viewTransformEnabled, arginfo_qt_gui_qpainter_qpainter_viewtransformenabled, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPainter_QPainter, strokePath, arginfo_qt_gui_qpainter_qpainter_strokepath, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPainter_QPainter, fillPath, arginfo_qt_gui_qpainter_qpainter_fillpath, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPainter_QPainter, drawPath, arginfo_qt_gui_qpainter_qpainter_drawpath, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPainter_QPainter, drawPoint, arginfo_qt_gui_qpainter_qpainter_drawpoint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPainter_QPainter, drawPointQPoint, arginfo_qt_gui_qpainter_qpainter_drawpointqpoint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPainter_QPainter, drawPointIntInt, arginfo_qt_gui_qpainter_qpainter_drawpointintint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPainter_QPainter, drawPoints, arginfo_qt_gui_qpainter_qpainter_drawpoints, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPainter_QPainter, drawPointsQPolygonF, arginfo_qt_gui_qpainter_qpainter_drawpointsqpolygonf, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPainter_QPainter, drawPointsQPointInt, arginfo_qt_gui_qpainter_qpainter_drawpointsqpointint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPainter_QPainter, drawPointsQPolygon, arginfo_qt_gui_qpainter_qpainter_drawpointsqpolygon, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPainter_QPainter, drawLine, arginfo_qt_gui_qpainter_qpainter_drawline, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPainter_QPainter, drawLineQLine, arginfo_qt_gui_qpainter_qpainter_drawlineqline, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPainter_QPainter, drawLineIntIntIntInt, arginfo_qt_gui_qpainter_qpainter_drawlineintintintint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPainter_QPainter, drawLineQPointQPoint, arginfo_qt_gui_qpainter_qpainter_drawlineqpointqpoint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPainter_QPainter, drawLineQPointFQPointF, arginfo_qt_gui_qpainter_qpainter_drawlineqpointfqpointf, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPainter_QPainter, drawLines, arginfo_qt_gui_qpainter_qpainter_drawlines, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPainter_QPainter, drawLinesQListQLineF, arginfo_qt_gui_qpainter_qpainter_drawlinesqlistqlinef, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPainter_QPainter, drawLinesQPointFInt, arginfo_qt_gui_qpainter_qpainter_drawlinesqpointfint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPainter_QPainter, drawLinesQListQPointF, arginfo_qt_gui_qpainter_qpainter_drawlinesqlistqpointf, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPainter_QPainter, drawLinesQLineInt, arginfo_qt_gui_qpainter_qpainter_drawlinesqlineint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPainter_QPainter, drawLinesQListQLine, arginfo_qt_gui_qpainter_qpainter_drawlinesqlistqline, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPainter_QPainter, drawLinesQPointInt, arginfo_qt_gui_qpainter_qpainter_drawlinesqpointint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPainter_QPainter, drawLinesQListQPoint, arginfo_qt_gui_qpainter_qpainter_drawlinesqlistqpoint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPainter_QPainter, drawRect, arginfo_qt_gui_qpainter_qpainter_drawrect, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPainter_QPainter, drawRectIntIntIntInt, arginfo_qt_gui_qpainter_qpainter_drawrectintintintint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPainter_QPainter, drawRectQRect, arginfo_qt_gui_qpainter_qpainter_drawrectqrect, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPainter_QPainter, drawRects, arginfo_qt_gui_qpainter_qpainter_drawrects, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPainter_QPainter, drawRectsQListQRectF, arginfo_qt_gui_qpainter_qpainter_drawrectsqlistqrectf, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPainter_QPainter, drawRectsQRectInt, arginfo_qt_gui_qpainter_qpainter_drawrectsqrectint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPainter_QPainter, drawRectsQListQRect, arginfo_qt_gui_qpainter_qpainter_drawrectsqlistqrect, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPainter_QPainter, drawEllipse, arginfo_qt_gui_qpainter_qpainter_drawellipse, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPainter_QPainter, drawEllipseQRect, arginfo_qt_gui_qpainter_qpainter_drawellipseqrect, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPainter_QPainter, drawEllipseIntIntIntInt, arginfo_qt_gui_qpainter_qpainter_drawellipseintintintint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPainter_QPainter, drawEllipseQPointFQrealQreal, arginfo_qt_gui_qpainter_qpainter_drawellipseqpointfqrealqreal, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPainter_QPainter, drawEllipseQPointIntInt, arginfo_qt_gui_qpainter_qpainter_drawellipseqpointintint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPainter_QPainter, drawPolyline, arginfo_qt_gui_qpainter_qpainter_drawpolyline, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPainter_QPainter, drawPolylineQPolygonF, arginfo_qt_gui_qpainter_qpainter_drawpolylineqpolygonf, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPainter_QPainter, drawPolylineQPointInt, arginfo_qt_gui_qpainter_qpainter_drawpolylineqpointint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPainter_QPainter, drawPolylineQPolygon, arginfo_qt_gui_qpainter_qpainter_drawpolylineqpolygon, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPainter_QPainter, drawPolygon, arginfo_qt_gui_qpainter_qpainter_drawpolygon, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPainter_QPainter, drawPolygonQPolygonFQtFillRule, arginfo_qt_gui_qpainter_qpainter_drawpolygonqpolygonfqtfillrule, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPainter_QPainter, drawPolygonQPointIntQtFillRule, arginfo_qt_gui_qpainter_qpainter_drawpolygonqpointintqtfillrule, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPainter_QPainter, drawPolygonQPolygonQtFillRule, arginfo_qt_gui_qpainter_qpainter_drawpolygonqpolygonqtfillrule, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPainter_QPainter, drawConvexPolygon, arginfo_qt_gui_qpainter_qpainter_drawconvexpolygon, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPainter_QPainter, drawConvexPolygonQPolygonF, arginfo_qt_gui_qpainter_qpainter_drawconvexpolygonqpolygonf, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPainter_QPainter, drawConvexPolygonQPointInt, arginfo_qt_gui_qpainter_qpainter_drawconvexpolygonqpointint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPainter_QPainter, drawConvexPolygonQPolygon, arginfo_qt_gui_qpainter_qpainter_drawconvexpolygonqpolygon, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPainter_QPainter, drawArc, arginfo_qt_gui_qpainter_qpainter_drawarc, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPainter_QPainter, drawArcQRectIntInt, arginfo_qt_gui_qpainter_qpainter_drawarcqrectintint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPainter_QPainter, drawArcIntIntIntIntIntInt, arginfo_qt_gui_qpainter_qpainter_drawarcintintintintintint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPainter_QPainter, drawPie, arginfo_qt_gui_qpainter_qpainter_drawpie, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPainter_QPainter, drawPieIntIntIntIntIntInt, arginfo_qt_gui_qpainter_qpainter_drawpieintintintintintint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPainter_QPainter, drawPieQRectIntInt, arginfo_qt_gui_qpainter_qpainter_drawpieqrectintint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPainter_QPainter, drawChord, arginfo_qt_gui_qpainter_qpainter_drawchord, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPainter_QPainter, drawChordIntIntIntIntIntInt, arginfo_qt_gui_qpainter_qpainter_drawchordintintintintintint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPainter_QPainter, drawChordQRectIntInt, arginfo_qt_gui_qpainter_qpainter_drawchordqrectintint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPainter_QPainter, drawRoundedRect, arginfo_qt_gui_qpainter_qpainter_drawroundedrect, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPainter_QPainter, drawRoundedRectIntIntIntIntQrealQrealQtSizeMode, arginfo_qt_gui_qpainter_qpainter_drawroundedrectintintintintqrealqrealqtsizemode, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPainter_QPainter, drawRoundedRectQRectQrealQrealQtSizeMode, arginfo_qt_gui_qpainter_qpainter_drawroundedrectqrectqrealqrealqtsizemode, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPainter_QPainter, drawTiledPixmap, arginfo_qt_gui_qpainter_qpainter_drawtiledpixmap, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPainter_QPainter, drawTiledPixmapIntIntIntIntQPixmapIntInt, arginfo_qt_gui_qpainter_qpainter_drawtiledpixmapintintintintqpixmapintint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPainter_QPainter, drawTiledPixmapQRectQPixmapQPoint, arginfo_qt_gui_qpainter_qpainter_drawtiledpixmapqrectqpixmapqpoint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPainter_QPainter, drawPicture, arginfo_qt_gui_qpainter_qpainter_drawpicture, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPainter_QPainter, drawPictureIntIntQPicture, arginfo_qt_gui_qpainter_qpainter_drawpictureintintqpicture, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPainter_QPainter, drawPictureQPointQPicture, arginfo_qt_gui_qpainter_qpainter_drawpictureqpointqpicture, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPainter_QPainter, drawPixmap, arginfo_qt_gui_qpainter_qpainter_drawpixmap, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPainter_QPainter, drawPixmapQRectQPixmapQRect, arginfo_qt_gui_qpainter_qpainter_drawpixmapqrectqpixmapqrect, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPainter_QPainter, drawPixmapIntIntIntIntQPixmapIntIntIntInt, arginfo_qt_gui_qpainter_qpainter_drawpixmapintintintintqpixmapintintintint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPainter_QPainter, drawPixmapIntIntQPixmapIntIntIntInt, arginfo_qt_gui_qpainter_qpainter_drawpixmapintintqpixmapintintintint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPainter_QPainter, drawPixmapQPointFQPixmapQRectF, arginfo_qt_gui_qpainter_qpainter_drawpixmapqpointfqpixmapqrectf, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPainter_QPainter, drawPixmapQPointQPixmapQRect, arginfo_qt_gui_qpainter_qpainter_drawpixmapqpointqpixmapqrect, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPainter_QPainter, drawPixmapQPointFQPixmap, arginfo_qt_gui_qpainter_qpainter_drawpixmapqpointfqpixmap, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPainter_QPainter, drawPixmapQPointQPixmap, arginfo_qt_gui_qpainter_qpainter_drawpixmapqpointqpixmap, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPainter_QPainter, drawPixmapIntIntQPixmap, arginfo_qt_gui_qpainter_qpainter_drawpixmapintintqpixmap, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPainter_QPainter, drawPixmapQRectQPixmap, arginfo_qt_gui_qpainter_qpainter_drawpixmapqrectqpixmap, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPainter_QPainter, drawPixmapIntIntIntIntQPixmap, arginfo_qt_gui_qpainter_qpainter_drawpixmapintintintintqpixmap, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPainter_QPainter, drawPixmapFragments, arginfo_qt_gui_qpainter_qpainter_drawpixmapfragments, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPainter_QPainter, drawImage, arginfo_qt_gui_qpainter_qpainter_drawimage, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPainter_QPainter, drawImageQRectQImageQRectQtImageConversionFlags, arginfo_qt_gui_qpainter_qpainter_drawimageqrectqimageqrectqtimageconversionflags, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPainter_QPainter, drawImageQPointFQImageQRectFQtImageConversionFlags, arginfo_qt_gui_qpainter_qpainter_drawimageqpointfqimageqrectfqtimageconversionflags, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPainter_QPainter, drawImageQPointQImageQRectQtImageConversionFlags, arginfo_qt_gui_qpainter_qpainter_drawimageqpointqimageqrectqtimageconversionflags, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPainter_QPainter, drawImageQRectFQImage, arginfo_qt_gui_qpainter_qpainter_drawimageqrectfqimage, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPainter_QPainter, drawImageQRectQImage, arginfo_qt_gui_qpainter_qpainter_drawimageqrectqimage, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPainter_QPainter, drawImageQPointFQImage, arginfo_qt_gui_qpainter_qpainter_drawimageqpointfqimage, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPainter_QPainter, drawImageQPointQImage, arginfo_qt_gui_qpainter_qpainter_drawimageqpointqimage, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPainter_QPainter, drawImageIntIntQImageIntIntIntIntQtImageConversionFlags, arginfo_qt_gui_qpainter_qpainter_drawimageintintqimageintintintintqtimageconversionflags, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPainter_QPainter, setLayoutDirection, arginfo_qt_gui_qpainter_qpainter_setlayoutdirection, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPainter_QPainter, layoutDirection, arginfo_qt_gui_qpainter_qpainter_layoutdirection, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPainter_QPainter, drawGlyphRun, arginfo_qt_gui_qpainter_qpainter_drawglyphrun, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPainter_QPainter, drawStaticText, arginfo_qt_gui_qpainter_qpainter_drawstatictext, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPainter_QPainter, drawStaticTextQPointQStaticText, arginfo_qt_gui_qpainter_qpainter_drawstatictextqpointqstatictext, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPainter_QPainter, drawStaticTextIntIntQStaticText, arginfo_qt_gui_qpainter_qpainter_drawstatictextintintqstatictext, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPainter_QPainter, drawText, arginfo_qt_gui_qpainter_qpainter_drawtext, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPainter_QPainter, drawTextQPointQString, arginfo_qt_gui_qpainter_qpainter_drawtextqpointqstring, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPainter_QPainter, drawTextIntIntQString, arginfo_qt_gui_qpainter_qpainter_drawtextintintqstring, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPainter_QPainter, drawTextQPointFQStringIntInt, arginfo_qt_gui_qpainter_qpainter_drawtextqpointfqstringintint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPainter_QPainter, drawTextQRectFIntQStringQRectF, arginfo_qt_gui_qpainter_qpainter_drawtextqrectfintqstringqrectf, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPainter_QPainter, drawTextQRectIntQStringQRect, arginfo_qt_gui_qpainter_qpainter_drawtextqrectintqstringqrect, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPainter_QPainter, drawTextIntIntIntIntIntQStringQRect, arginfo_qt_gui_qpainter_qpainter_drawtextintintintintintqstringqrect, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPainter_QPainter, drawTextQRectFQStringQTextOption, arginfo_qt_gui_qpainter_qpainter_drawtextqrectfqstringqtextoption, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPainter_QPainter, boundingRect, arginfo_qt_gui_qpainter_qpainter_boundingrect, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPainter_QPainter, boundingRectQRectIntQString, arginfo_qt_gui_qpainter_qpainter_boundingrectqrectintqstring, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPainter_QPainter, boundingRectIntIntIntIntIntQString, arginfo_qt_gui_qpainter_qpainter_boundingrectintintintintintqstring, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPainter_QPainter, boundingRectQRectFQStringQTextOption, arginfo_qt_gui_qpainter_qpainter_boundingrectqrectfqstringqtextoption, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPainter_QPainter, drawTextItem, arginfo_qt_gui_qpainter_qpainter_drawtextitem, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPainter_QPainter, drawTextItemIntIntQTextItem, arginfo_qt_gui_qpainter_qpainter_drawtextitemintintqtextitem, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPainter_QPainter, drawTextItemQPointQTextItem, arginfo_qt_gui_qpainter_qpainter_drawtextitemqpointqtextitem, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPainter_QPainter, fillRect, arginfo_qt_gui_qpainter_qpainter_fillrect, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPainter_QPainter, fillRectIntIntIntIntQBrush, arginfo_qt_gui_qpainter_qpainter_fillrectintintintintqbrush, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPainter_QPainter, fillRectQRectQBrush, arginfo_qt_gui_qpainter_qpainter_fillrectqrectqbrush, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPainter_QPainter, fillRectQRectFQColor, arginfo_qt_gui_qpainter_qpainter_fillrectqrectfqcolor, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPainter_QPainter, fillRectIntIntIntIntQColor, arginfo_qt_gui_qpainter_qpainter_fillrectintintintintqcolor, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPainter_QPainter, fillRectQRectQColor, arginfo_qt_gui_qpainter_qpainter_fillrectqrectqcolor, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPainter_QPainter, fillRectIntIntIntIntQtGlobalColor, arginfo_qt_gui_qpainter_qpainter_fillrectintintintintqtglobalcolor, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPainter_QPainter, fillRectQRectQtGlobalColor, arginfo_qt_gui_qpainter_qpainter_fillrectqrectqtglobalcolor, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPainter_QPainter, fillRectQRectFQtGlobalColor, arginfo_qt_gui_qpainter_qpainter_fillrectqrectfqtglobalcolor, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPainter_QPainter, fillRectIntIntIntIntQtBrushStyle, arginfo_qt_gui_qpainter_qpainter_fillrectintintintintqtbrushstyle, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPainter_QPainter, fillRectQRectQtBrushStyle, arginfo_qt_gui_qpainter_qpainter_fillrectqrectqtbrushstyle, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPainter_QPainter, fillRectQRectFQtBrushStyle, arginfo_qt_gui_qpainter_qpainter_fillrectqrectfqtbrushstyle, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPainter_QPainter, fillRectIntIntIntIntQGradientPreset, arginfo_qt_gui_qpainter_qpainter_fillrectintintintintqgradientpreset, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPainter_QPainter, fillRectQRectQGradientPreset, arginfo_qt_gui_qpainter_qpainter_fillrectqrectqgradientpreset, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPainter_QPainter, fillRectQRectFQGradientPreset, arginfo_qt_gui_qpainter_qpainter_fillrectqrectfqgradientpreset, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPainter_QPainter, eraseRect, arginfo_qt_gui_qpainter_qpainter_eraserect, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPainter_QPainter, eraseRectIntIntIntInt, arginfo_qt_gui_qpainter_qpainter_eraserectintintintint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPainter_QPainter, eraseRectQRect, arginfo_qt_gui_qpainter_qpainter_eraserectqrect, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPainter_QPainter, setRenderHint, arginfo_qt_gui_qpainter_qpainter_setrenderhint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPainter_QPainter, setRenderHints, arginfo_qt_gui_qpainter_qpainter_setrenderhints, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPainter_QPainter, renderHints, arginfo_qt_gui_qpainter_qpainter_renderhints, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPainter_QPainter, testRenderHint, arginfo_qt_gui_qpainter_qpainter_testrenderhint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPainter_QPainter, paintEngine, arginfo_qt_gui_qpainter_qpainter_paintengine, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPainter_QPainter, beginNativePainting, arginfo_qt_gui_qpainter_qpainter_beginnativepainting, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPainter_QPainter, endNativePainting, arginfo_qt_gui_qpainter_qpainter_endnativepainting, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
