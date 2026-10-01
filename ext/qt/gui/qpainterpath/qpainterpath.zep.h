
extern zend_class_entry *qt_gui_qpainterpath_qpainterpath_ce;

ZEPHIR_INIT_CLASS(Qt_Gui_QPainterPath_QPainterPath);

PHP_METHOD(Qt_Gui_QPainterPath_QPainterPath, new_);
PHP_METHOD(Qt_Gui_QPainterPath_QPainterPath, newQPointF);
PHP_METHOD(Qt_Gui_QPainterPath_QPainterPath, newQPainterPath);
PHP_METHOD(Qt_Gui_QPainterPath_QPainterPath, swap);
PHP_METHOD(Qt_Gui_QPainterPath_QPainterPath, clear);
PHP_METHOD(Qt_Gui_QPainterPath_QPainterPath, reserve);
PHP_METHOD(Qt_Gui_QPainterPath_QPainterPath, capacity);
PHP_METHOD(Qt_Gui_QPainterPath_QPainterPath, closeSubpath);
PHP_METHOD(Qt_Gui_QPainterPath_QPainterPath, moveTo);
PHP_METHOD(Qt_Gui_QPainterPath_QPainterPath, moveToQrealQreal);
PHP_METHOD(Qt_Gui_QPainterPath_QPainterPath, lineTo);
PHP_METHOD(Qt_Gui_QPainterPath_QPainterPath, lineToQrealQreal);
PHP_METHOD(Qt_Gui_QPainterPath_QPainterPath, arcMoveTo);
PHP_METHOD(Qt_Gui_QPainterPath_QPainterPath, arcMoveToQrealQrealQrealQrealQreal);
PHP_METHOD(Qt_Gui_QPainterPath_QPainterPath, arcTo);
PHP_METHOD(Qt_Gui_QPainterPath_QPainterPath, arcToQrealQrealQrealQrealQrealQreal);
PHP_METHOD(Qt_Gui_QPainterPath_QPainterPath, cubicTo);
PHP_METHOD(Qt_Gui_QPainterPath_QPainterPath, cubicToQrealQrealQrealQrealQrealQreal);
PHP_METHOD(Qt_Gui_QPainterPath_QPainterPath, quadTo);
PHP_METHOD(Qt_Gui_QPainterPath_QPainterPath, quadToQrealQrealQrealQreal);
PHP_METHOD(Qt_Gui_QPainterPath_QPainterPath, currentPosition);
PHP_METHOD(Qt_Gui_QPainterPath_QPainterPath, addRect);
PHP_METHOD(Qt_Gui_QPainterPath_QPainterPath, addRectQrealQrealQrealQreal);
PHP_METHOD(Qt_Gui_QPainterPath_QPainterPath, addEllipse);
PHP_METHOD(Qt_Gui_QPainterPath_QPainterPath, addEllipseQrealQrealQrealQreal);
PHP_METHOD(Qt_Gui_QPainterPath_QPainterPath, addEllipseQPointFQrealQreal);
PHP_METHOD(Qt_Gui_QPainterPath_QPainterPath, addPolygon);
PHP_METHOD(Qt_Gui_QPainterPath_QPainterPath, addText);
PHP_METHOD(Qt_Gui_QPainterPath_QPainterPath, addTextQrealQrealQFontQString);
PHP_METHOD(Qt_Gui_QPainterPath_QPainterPath, addPath);
PHP_METHOD(Qt_Gui_QPainterPath_QPainterPath, addRegion);
PHP_METHOD(Qt_Gui_QPainterPath_QPainterPath, addRoundedRect);
PHP_METHOD(Qt_Gui_QPainterPath_QPainterPath, addRoundedRectQrealQrealQrealQrealQrealQrealQtSizeMode);
PHP_METHOD(Qt_Gui_QPainterPath_QPainterPath, connectPath);
PHP_METHOD(Qt_Gui_QPainterPath_QPainterPath, contains);
PHP_METHOD(Qt_Gui_QPainterPath_QPainterPath, containsQRectF);
PHP_METHOD(Qt_Gui_QPainterPath_QPainterPath, intersects);
PHP_METHOD(Qt_Gui_QPainterPath_QPainterPath, translate);
PHP_METHOD(Qt_Gui_QPainterPath_QPainterPath, translateQPointF);
PHP_METHOD(Qt_Gui_QPainterPath_QPainterPath, translated);
PHP_METHOD(Qt_Gui_QPainterPath_QPainterPath, translatedQPointF);
PHP_METHOD(Qt_Gui_QPainterPath_QPainterPath, boundingRect);
PHP_METHOD(Qt_Gui_QPainterPath_QPainterPath, controlPointRect);
PHP_METHOD(Qt_Gui_QPainterPath_QPainterPath, fillRule);
PHP_METHOD(Qt_Gui_QPainterPath_QPainterPath, setFillRule);
PHP_METHOD(Qt_Gui_QPainterPath_QPainterPath, isEmpty);
PHP_METHOD(Qt_Gui_QPainterPath_QPainterPath, toReversed);
PHP_METHOD(Qt_Gui_QPainterPath_QPainterPath, toSubpathPolygons);
PHP_METHOD(Qt_Gui_QPainterPath_QPainterPath, toFillPolygons);
PHP_METHOD(Qt_Gui_QPainterPath_QPainterPath, toFillPolygon);
PHP_METHOD(Qt_Gui_QPainterPath_QPainterPath, elementCount);
PHP_METHOD(Qt_Gui_QPainterPath_QPainterPath, elementAt);
PHP_METHOD(Qt_Gui_QPainterPath_QPainterPath, setElementPositionAt);
PHP_METHOD(Qt_Gui_QPainterPath_QPainterPath, length);
PHP_METHOD(Qt_Gui_QPainterPath_QPainterPath, percentAtLength);
PHP_METHOD(Qt_Gui_QPainterPath_QPainterPath, pointAtPercent);
PHP_METHOD(Qt_Gui_QPainterPath_QPainterPath, angleAtPercent);
PHP_METHOD(Qt_Gui_QPainterPath_QPainterPath, slopeAtPercent);
PHP_METHOD(Qt_Gui_QPainterPath_QPainterPath, intersectsQPainterPath);
PHP_METHOD(Qt_Gui_QPainterPath_QPainterPath, containsQPainterPath);
PHP_METHOD(Qt_Gui_QPainterPath_QPainterPath, united);
PHP_METHOD(Qt_Gui_QPainterPath_QPainterPath, intersected);
PHP_METHOD(Qt_Gui_QPainterPath_QPainterPath, subtracted);
PHP_METHOD(Qt_Gui_QPainterPath_QPainterPath, simplified);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpainterpath_qpainterpath_new_, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpainterpath_qpainterpath_newqpointf, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, startPointX, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, startPointY, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpainterpath_qpainterpath_newqpainterpath, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, other, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpainterpath_qpainterpath_swap, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, other, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpainterpath_qpainterpath_clear, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpainterpath_qpainterpath_reserve, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, size, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpainterpath_qpainterpath_capacity, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpainterpath_qpainterpath_closesubpath, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpainterpath_qpainterpath_moveto, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, pX, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, pY, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpainterpath_qpainterpath_movetoqrealqreal, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpainterpath_qpainterpath_lineto, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, pX, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, pY, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpainterpath_qpainterpath_linetoqrealqreal, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpainterpath_qpainterpath_arcmoveto, 0, 6, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rectX, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, rectY, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, rectWidth, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, rectHeight, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, angle, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpainterpath_qpainterpath_arcmovetoqrealqrealqrealqrealqreal, 0, 6, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, w, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, h, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, angle, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpainterpath_qpainterpath_arcto, 0, 7, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rectX, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, rectY, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, rectWidth, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, rectHeight, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, startAngle, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, arcLength, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpainterpath_qpainterpath_arctoqrealqrealqrealqrealqrealqreal, 0, 7, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, w, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, h, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, startAngle, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, arcLength, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpainterpath_qpainterpath_cubicto, 0, 7, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, ctrlPt1X, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, ctrlPt1Y, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, ctrlPt2X, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, ctrlPt2Y, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, endPtX, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, endPtY, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpainterpath_qpainterpath_cubictoqrealqrealqrealqrealqrealqreal, 0, 7, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, ctrlPt1x, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, ctrlPt1y, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, ctrlPt2x, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, ctrlPt2y, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, endPtx, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, endPty, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpainterpath_qpainterpath_quadto, 0, 5, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, ctrlPtX, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, ctrlPtY, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, endPtX, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, endPtY, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpainterpath_qpainterpath_quadtoqrealqrealqrealqreal, 0, 5, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, ctrlPtx, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, ctrlPty, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, endPtx, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, endPty, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpainterpath_qpainterpath_currentposition, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpainterpath_qpainterpath_addrect, 0, 5, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rectX, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, rectY, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, rectWidth, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, rectHeight, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpainterpath_qpainterpath_addrectqrealqrealqrealqreal, 0, 5, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, w, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, h, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpainterpath_qpainterpath_addellipse, 0, 5, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rectX, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, rectY, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, rectWidth, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, rectHeight, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpainterpath_qpainterpath_addellipseqrealqrealqrealqreal, 0, 5, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, w, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, h, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpainterpath_qpainterpath_addellipseqpointfqrealqreal, 0, 5, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, centerX, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, centerY, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, rx, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, ry, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpainterpath_qpainterpath_addpolygon, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, polygon, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpainterpath_qpainterpath_addtext, 0, 5, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, pointX, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, pointY, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, f, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, text, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpainterpath_qpainterpath_addtextqrealqrealqfontqstring, 0, 5, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, f, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, text, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpainterpath_qpainterpath_addpath, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, path, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpainterpath_qpainterpath_addregion, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, region, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpainterpath_qpainterpath_addroundedrect, 0, 7, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rectX, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, rectY, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, rectWidth, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, rectHeight, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, xRadius, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, yRadius, IS_DOUBLE, 0)
	ZEND_ARG_INFO(0, mode)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpainterpath_qpainterpath_addroundedrectqrealqrealqrealqrealqrealqrealqtsizemode, 0, 7, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, w, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, h, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, xRadius, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, yRadius, IS_DOUBLE, 0)
	ZEND_ARG_INFO(0, mode)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpainterpath_qpainterpath_connectpath, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, path, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpainterpath_qpainterpath_contains, 0, 3, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, ptX, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, ptY, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpainterpath_qpainterpath_containsqrectf, 0, 5, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rectX, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, rectY, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, rectWidth, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, rectHeight, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpainterpath_qpainterpath_intersects, 0, 5, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rectX, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, rectY, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, rectWidth, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, rectHeight, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpainterpath_qpainterpath_translate, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, dx, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, dy, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpainterpath_qpainterpath_translateqpointf, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, offsetX, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, offsetY, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpainterpath_qpainterpath_translated, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, dx, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, dy, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpainterpath_qpainterpath_translatedqpointf, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, offsetX, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, offsetY, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpainterpath_qpainterpath_boundingrect, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpainterpath_qpainterpath_controlpointrect, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpainterpath_qpainterpath_fillrule, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpainterpath_qpainterpath_setfillrule, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, fillRule, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpainterpath_qpainterpath_isempty, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpainterpath_qpainterpath_toreversed, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpainterpath_qpainterpath_tosubpathpolygons, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_INFO(0, matrix)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpainterpath_qpainterpath_tofillpolygons, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_INFO(0, matrix)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpainterpath_qpainterpath_tofillpolygon, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_INFO(0, matrix)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpainterpath_qpainterpath_elementcount, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpainterpath_qpainterpath_elementat, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, i, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpainterpath_qpainterpath_setelementpositionat, 0, 4, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, i, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpainterpath_qpainterpath_length, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpainterpath_qpainterpath_percentatlength, 0, 2, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, t, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpainterpath_qpainterpath_pointatpercent, 0, 2, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, t, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpainterpath_qpainterpath_angleatpercent, 0, 2, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, t, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpainterpath_qpainterpath_slopeatpercent, 0, 2, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, t, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpainterpath_qpainterpath_intersectsqpainterpath, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, p, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpainterpath_qpainterpath_containsqpainterpath, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, p, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpainterpath_qpainterpath_united, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, r, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpainterpath_qpainterpath_intersected, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, r, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpainterpath_qpainterpath_subtracted, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, r, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpainterpath_qpainterpath_simplified, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_gui_qpainterpath_qpainterpath_method_entry) {
	PHP_ME(Qt_Gui_QPainterPath_QPainterPath, new_, arginfo_qt_gui_qpainterpath_qpainterpath_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPainterPath_QPainterPath, newQPointF, arginfo_qt_gui_qpainterpath_qpainterpath_newqpointf, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPainterPath_QPainterPath, newQPainterPath, arginfo_qt_gui_qpainterpath_qpainterpath_newqpainterpath, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPainterPath_QPainterPath, swap, arginfo_qt_gui_qpainterpath_qpainterpath_swap, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPainterPath_QPainterPath, clear, arginfo_qt_gui_qpainterpath_qpainterpath_clear, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPainterPath_QPainterPath, reserve, arginfo_qt_gui_qpainterpath_qpainterpath_reserve, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPainterPath_QPainterPath, capacity, arginfo_qt_gui_qpainterpath_qpainterpath_capacity, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPainterPath_QPainterPath, closeSubpath, arginfo_qt_gui_qpainterpath_qpainterpath_closesubpath, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPainterPath_QPainterPath, moveTo, arginfo_qt_gui_qpainterpath_qpainterpath_moveto, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPainterPath_QPainterPath, moveToQrealQreal, arginfo_qt_gui_qpainterpath_qpainterpath_movetoqrealqreal, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPainterPath_QPainterPath, lineTo, arginfo_qt_gui_qpainterpath_qpainterpath_lineto, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPainterPath_QPainterPath, lineToQrealQreal, arginfo_qt_gui_qpainterpath_qpainterpath_linetoqrealqreal, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPainterPath_QPainterPath, arcMoveTo, arginfo_qt_gui_qpainterpath_qpainterpath_arcmoveto, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPainterPath_QPainterPath, arcMoveToQrealQrealQrealQrealQreal, arginfo_qt_gui_qpainterpath_qpainterpath_arcmovetoqrealqrealqrealqrealqreal, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPainterPath_QPainterPath, arcTo, arginfo_qt_gui_qpainterpath_qpainterpath_arcto, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPainterPath_QPainterPath, arcToQrealQrealQrealQrealQrealQreal, arginfo_qt_gui_qpainterpath_qpainterpath_arctoqrealqrealqrealqrealqrealqreal, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPainterPath_QPainterPath, cubicTo, arginfo_qt_gui_qpainterpath_qpainterpath_cubicto, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPainterPath_QPainterPath, cubicToQrealQrealQrealQrealQrealQreal, arginfo_qt_gui_qpainterpath_qpainterpath_cubictoqrealqrealqrealqrealqrealqreal, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPainterPath_QPainterPath, quadTo, arginfo_qt_gui_qpainterpath_qpainterpath_quadto, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPainterPath_QPainterPath, quadToQrealQrealQrealQreal, arginfo_qt_gui_qpainterpath_qpainterpath_quadtoqrealqrealqrealqreal, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPainterPath_QPainterPath, currentPosition, arginfo_qt_gui_qpainterpath_qpainterpath_currentposition, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPainterPath_QPainterPath, addRect, arginfo_qt_gui_qpainterpath_qpainterpath_addrect, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPainterPath_QPainterPath, addRectQrealQrealQrealQreal, arginfo_qt_gui_qpainterpath_qpainterpath_addrectqrealqrealqrealqreal, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPainterPath_QPainterPath, addEllipse, arginfo_qt_gui_qpainterpath_qpainterpath_addellipse, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPainterPath_QPainterPath, addEllipseQrealQrealQrealQreal, arginfo_qt_gui_qpainterpath_qpainterpath_addellipseqrealqrealqrealqreal, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPainterPath_QPainterPath, addEllipseQPointFQrealQreal, arginfo_qt_gui_qpainterpath_qpainterpath_addellipseqpointfqrealqreal, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPainterPath_QPainterPath, addPolygon, arginfo_qt_gui_qpainterpath_qpainterpath_addpolygon, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPainterPath_QPainterPath, addText, arginfo_qt_gui_qpainterpath_qpainterpath_addtext, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPainterPath_QPainterPath, addTextQrealQrealQFontQString, arginfo_qt_gui_qpainterpath_qpainterpath_addtextqrealqrealqfontqstring, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPainterPath_QPainterPath, addPath, arginfo_qt_gui_qpainterpath_qpainterpath_addpath, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPainterPath_QPainterPath, addRegion, arginfo_qt_gui_qpainterpath_qpainterpath_addregion, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPainterPath_QPainterPath, addRoundedRect, arginfo_qt_gui_qpainterpath_qpainterpath_addroundedrect, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPainterPath_QPainterPath, addRoundedRectQrealQrealQrealQrealQrealQrealQtSizeMode, arginfo_qt_gui_qpainterpath_qpainterpath_addroundedrectqrealqrealqrealqrealqrealqrealqtsizemode, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPainterPath_QPainterPath, connectPath, arginfo_qt_gui_qpainterpath_qpainterpath_connectpath, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPainterPath_QPainterPath, contains, arginfo_qt_gui_qpainterpath_qpainterpath_contains, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPainterPath_QPainterPath, containsQRectF, arginfo_qt_gui_qpainterpath_qpainterpath_containsqrectf, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPainterPath_QPainterPath, intersects, arginfo_qt_gui_qpainterpath_qpainterpath_intersects, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPainterPath_QPainterPath, translate, arginfo_qt_gui_qpainterpath_qpainterpath_translate, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPainterPath_QPainterPath, translateQPointF, arginfo_qt_gui_qpainterpath_qpainterpath_translateqpointf, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPainterPath_QPainterPath, translated, arginfo_qt_gui_qpainterpath_qpainterpath_translated, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPainterPath_QPainterPath, translatedQPointF, arginfo_qt_gui_qpainterpath_qpainterpath_translatedqpointf, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPainterPath_QPainterPath, boundingRect, arginfo_qt_gui_qpainterpath_qpainterpath_boundingrect, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPainterPath_QPainterPath, controlPointRect, arginfo_qt_gui_qpainterpath_qpainterpath_controlpointrect, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPainterPath_QPainterPath, fillRule, arginfo_qt_gui_qpainterpath_qpainterpath_fillrule, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPainterPath_QPainterPath, setFillRule, arginfo_qt_gui_qpainterpath_qpainterpath_setfillrule, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPainterPath_QPainterPath, isEmpty, arginfo_qt_gui_qpainterpath_qpainterpath_isempty, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPainterPath_QPainterPath, toReversed, arginfo_qt_gui_qpainterpath_qpainterpath_toreversed, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPainterPath_QPainterPath, toSubpathPolygons, arginfo_qt_gui_qpainterpath_qpainterpath_tosubpathpolygons, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPainterPath_QPainterPath, toFillPolygons, arginfo_qt_gui_qpainterpath_qpainterpath_tofillpolygons, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPainterPath_QPainterPath, toFillPolygon, arginfo_qt_gui_qpainterpath_qpainterpath_tofillpolygon, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPainterPath_QPainterPath, elementCount, arginfo_qt_gui_qpainterpath_qpainterpath_elementcount, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPainterPath_QPainterPath, elementAt, arginfo_qt_gui_qpainterpath_qpainterpath_elementat, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPainterPath_QPainterPath, setElementPositionAt, arginfo_qt_gui_qpainterpath_qpainterpath_setelementpositionat, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPainterPath_QPainterPath, length, arginfo_qt_gui_qpainterpath_qpainterpath_length, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPainterPath_QPainterPath, percentAtLength, arginfo_qt_gui_qpainterpath_qpainterpath_percentatlength, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPainterPath_QPainterPath, pointAtPercent, arginfo_qt_gui_qpainterpath_qpainterpath_pointatpercent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPainterPath_QPainterPath, angleAtPercent, arginfo_qt_gui_qpainterpath_qpainterpath_angleatpercent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPainterPath_QPainterPath, slopeAtPercent, arginfo_qt_gui_qpainterpath_qpainterpath_slopeatpercent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPainterPath_QPainterPath, intersectsQPainterPath, arginfo_qt_gui_qpainterpath_qpainterpath_intersectsqpainterpath, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPainterPath_QPainterPath, containsQPainterPath, arginfo_qt_gui_qpainterpath_qpainterpath_containsqpainterpath, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPainterPath_QPainterPath, united, arginfo_qt_gui_qpainterpath_qpainterpath_united, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPainterPath_QPainterPath, intersected, arginfo_qt_gui_qpainterpath_qpainterpath_intersected, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPainterPath_QPainterPath, subtracted, arginfo_qt_gui_qpainterpath_qpainterpath_subtracted, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPainterPath_QPainterPath, simplified, arginfo_qt_gui_qpainterpath_qpainterpath_simplified, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
