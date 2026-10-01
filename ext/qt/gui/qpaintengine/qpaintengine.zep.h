
extern zend_class_entry *qt_gui_qpaintengine_qpaintengine_ce;

ZEPHIR_INIT_CLASS(Qt_Gui_QPaintEngine_QPaintEngine);

PHP_METHOD(Qt_Gui_QPaintEngine_QPaintEngine, new_);
PHP_METHOD(Qt_Gui_QPaintEngine_QPaintEngine, isActive);
PHP_METHOD(Qt_Gui_QPaintEngine_QPaintEngine, setActive);
PHP_METHOD(Qt_Gui_QPaintEngine_QPaintEngine, begin);
PHP_METHOD(Qt_Gui_QPaintEngine_QPaintEngine, end);
PHP_METHOD(Qt_Gui_QPaintEngine_QPaintEngine, updateState);
PHP_METHOD(Qt_Gui_QPaintEngine_QPaintEngine, drawRects);
PHP_METHOD(Qt_Gui_QPaintEngine_QPaintEngine, drawRectsQRectFInt);
PHP_METHOD(Qt_Gui_QPaintEngine_QPaintEngine, drawLines);
PHP_METHOD(Qt_Gui_QPaintEngine_QPaintEngine, drawLinesQLineFInt);
PHP_METHOD(Qt_Gui_QPaintEngine_QPaintEngine, drawEllipse);
PHP_METHOD(Qt_Gui_QPaintEngine_QPaintEngine, drawEllipseQRect);
PHP_METHOD(Qt_Gui_QPaintEngine_QPaintEngine, drawPath);
PHP_METHOD(Qt_Gui_QPaintEngine_QPaintEngine, drawPoints);
PHP_METHOD(Qt_Gui_QPaintEngine_QPaintEngine, drawPointsQPointInt);
PHP_METHOD(Qt_Gui_QPaintEngine_QPaintEngine, drawPolygon);
PHP_METHOD(Qt_Gui_QPaintEngine_QPaintEngine, drawPolygonQPointIntQPaintEnginePolygonDrawMode);
PHP_METHOD(Qt_Gui_QPaintEngine_QPaintEngine, drawPixmap);
PHP_METHOD(Qt_Gui_QPaintEngine_QPaintEngine, drawTextItem);
PHP_METHOD(Qt_Gui_QPaintEngine_QPaintEngine, drawTiledPixmap);
PHP_METHOD(Qt_Gui_QPaintEngine_QPaintEngine, drawImage);
PHP_METHOD(Qt_Gui_QPaintEngine_QPaintEngine, setPaintDevice);
PHP_METHOD(Qt_Gui_QPaintEngine_QPaintEngine, paintDevice);
PHP_METHOD(Qt_Gui_QPaintEngine_QPaintEngine, setSystemClip);
PHP_METHOD(Qt_Gui_QPaintEngine_QPaintEngine, systemClip);
PHP_METHOD(Qt_Gui_QPaintEngine_QPaintEngine, setSystemRect);
PHP_METHOD(Qt_Gui_QPaintEngine_QPaintEngine, systemRect);
PHP_METHOD(Qt_Gui_QPaintEngine_QPaintEngine, coordinateOffset);
PHP_METHOD(Qt_Gui_QPaintEngine_QPaintEngine, type);
PHP_METHOD(Qt_Gui_QPaintEngine_QPaintEngine, fix_neg_rect);
PHP_METHOD(Qt_Gui_QPaintEngine_QPaintEngine, testDirty);
PHP_METHOD(Qt_Gui_QPaintEngine_QPaintEngine, setDirty);
PHP_METHOD(Qt_Gui_QPaintEngine_QPaintEngine, clearDirty);
PHP_METHOD(Qt_Gui_QPaintEngine_QPaintEngine, hasFeature);
PHP_METHOD(Qt_Gui_QPaintEngine_QPaintEngine, painter);
PHP_METHOD(Qt_Gui_QPaintEngine_QPaintEngine, syncState);
PHP_METHOD(Qt_Gui_QPaintEngine_QPaintEngine, isExtended);
PHP_METHOD(Qt_Gui_QPaintEngine_QPaintEngine, createPixmap);
PHP_METHOD(Qt_Gui_QPaintEngine_QPaintEngine, createPixmapFromImage);
PHP_METHOD(Qt_Gui_QPaintEngine_QPaintEngine, state);
PHP_METHOD(Qt_Gui_QPaintEngine_QPaintEngine, setState);
PHP_METHOD(Qt_Gui_QPaintEngine_QPaintEngine, gccaps);
PHP_METHOD(Qt_Gui_QPaintEngine_QPaintEngine, setGccaps);
PHP_METHOD(Qt_Gui_QPaintEngine_QPaintEngine, active);
PHP_METHOD(Qt_Gui_QPaintEngine_QPaintEngine, setActiveUint);
PHP_METHOD(Qt_Gui_QPaintEngine_QPaintEngine, selfDestruct);
PHP_METHOD(Qt_Gui_QPaintEngine_QPaintEngine, setSelfDestruct);
PHP_METHOD(Qt_Gui_QPaintEngine_QPaintEngine, extended);
PHP_METHOD(Qt_Gui_QPaintEngine_QPaintEngine, setExtended);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpaintengine_qpaintengine_new_, 0, 0, IS_LONG, 0)
	ZEND_ARG_INFO(0, features)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpaintengine_qpaintengine_isactive, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpaintengine_qpaintengine_setactive, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, newState, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpaintengine_qpaintengine_begin, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, pdev, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpaintengine_qpaintengine_end, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpaintengine_qpaintengine_updatestate, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, state, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpaintengine_qpaintengine_drawrects, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_INFO(0, rects)
	ZEND_ARG_TYPE_INFO(0, rectCount, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpaintengine_qpaintengine_drawrectsqrectfint, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_INFO(0, rects)
	ZEND_ARG_TYPE_INFO(0, rectCount, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpaintengine_qpaintengine_drawlines, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_INFO(0, lines)
	ZEND_ARG_TYPE_INFO(0, lineCount, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpaintengine_qpaintengine_drawlinesqlinefint, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_INFO(0, lines)
	ZEND_ARG_TYPE_INFO(0, lineCount, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpaintengine_qpaintengine_drawellipse, 0, 5, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rX, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, rY, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, rWidth, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, rHeight, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpaintengine_qpaintengine_drawellipseqrect, 0, 5, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rX, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rY, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rWidth, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rHeight, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpaintengine_qpaintengine_drawpath, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, path, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpaintengine_qpaintengine_drawpoints, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_INFO(0, points)
	ZEND_ARG_TYPE_INFO(0, pointCount, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpaintengine_qpaintengine_drawpointsqpointint, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_INFO(0, points)
	ZEND_ARG_TYPE_INFO(0, pointCount, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpaintengine_qpaintengine_drawpolygon, 0, 4, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_INFO(0, points)
	ZEND_ARG_TYPE_INFO(0, pointCount, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, mode, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpaintengine_qpaintengine_drawpolygonqpointintqpaintenginepolygondrawmode, 0, 4, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_INFO(0, points)
	ZEND_ARG_TYPE_INFO(0, pointCount, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, mode, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpaintengine_qpaintengine_drawpixmap, 0, 10, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rX, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, rY, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, rWidth, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, rHeight, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, pm, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, srX, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, srY, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, srWidth, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, srHeight, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpaintengine_qpaintengine_drawtextitem, 0, 4, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, pX, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, pY, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, textItem, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpaintengine_qpaintengine_drawtiledpixmap, 0, 8, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rX, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, rY, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, rWidth, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, rHeight, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, pixmap, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sX, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, sY, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpaintengine_qpaintengine_drawimage, 0, 10, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rX, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, rY, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, rWidth, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, rHeight, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, pm, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, srX, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, srY, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, srWidth, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, srHeight, IS_DOUBLE, 0)
	ZEND_ARG_INFO(0, flags)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpaintengine_qpaintengine_setpaintdevice, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, device, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpaintengine_qpaintengine_paintdevice, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpaintengine_qpaintengine_setsystemclip, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, baseClip, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpaintengine_qpaintengine_systemclip, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpaintengine_qpaintengine_setsystemrect, 0, 5, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rectX, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rectY, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rectWidth, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rectHeight, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpaintengine_qpaintengine_systemrect, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpaintengine_qpaintengine_coordinateoffset, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpaintengine_qpaintengine_type, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpaintengine_qpaintengine_fix_neg_rect, 0, 5, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_INFO(0, x)
	ZEND_ARG_INFO(0, y)
	ZEND_ARG_INFO(0, w)
	ZEND_ARG_INFO(0, h)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpaintengine_qpaintengine_testdirty, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, df, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpaintengine_qpaintengine_setdirty, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, df, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpaintengine_qpaintengine_cleardirty, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, df, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpaintengine_qpaintengine_hasfeature, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, feature, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpaintengine_qpaintengine_painter, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpaintengine_qpaintengine_syncstate, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpaintengine_qpaintengine_isextended, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpaintengine_qpaintengine_createpixmap, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sizeWidth, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sizeHeight, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpaintengine_qpaintengine_createpixmapfromimage, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, image, IS_LONG, 0)
	ZEND_ARG_INFO(0, flags)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpaintengine_qpaintengine_state, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpaintengine_qpaintengine_setstate, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpaintengine_qpaintengine_gccaps, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpaintengine_qpaintengine_setgccaps, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpaintengine_qpaintengine_active, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpaintengine_qpaintengine_setactiveuint, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpaintengine_qpaintengine_selfdestruct, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpaintengine_qpaintengine_setselfdestruct, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpaintengine_qpaintengine_extended, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpaintengine_qpaintengine_setextended, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_gui_qpaintengine_qpaintengine_method_entry) {
	PHP_ME(Qt_Gui_QPaintEngine_QPaintEngine, new_, arginfo_qt_gui_qpaintengine_qpaintengine_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPaintEngine_QPaintEngine, isActive, arginfo_qt_gui_qpaintengine_qpaintengine_isactive, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPaintEngine_QPaintEngine, setActive, arginfo_qt_gui_qpaintengine_qpaintengine_setactive, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPaintEngine_QPaintEngine, begin, arginfo_qt_gui_qpaintengine_qpaintengine_begin, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPaintEngine_QPaintEngine, end, arginfo_qt_gui_qpaintengine_qpaintengine_end, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPaintEngine_QPaintEngine, updateState, arginfo_qt_gui_qpaintengine_qpaintengine_updatestate, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPaintEngine_QPaintEngine, drawRects, arginfo_qt_gui_qpaintengine_qpaintengine_drawrects, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPaintEngine_QPaintEngine, drawRectsQRectFInt, arginfo_qt_gui_qpaintengine_qpaintengine_drawrectsqrectfint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPaintEngine_QPaintEngine, drawLines, arginfo_qt_gui_qpaintengine_qpaintengine_drawlines, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPaintEngine_QPaintEngine, drawLinesQLineFInt, arginfo_qt_gui_qpaintengine_qpaintengine_drawlinesqlinefint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPaintEngine_QPaintEngine, drawEllipse, arginfo_qt_gui_qpaintengine_qpaintengine_drawellipse, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPaintEngine_QPaintEngine, drawEllipseQRect, arginfo_qt_gui_qpaintengine_qpaintengine_drawellipseqrect, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPaintEngine_QPaintEngine, drawPath, arginfo_qt_gui_qpaintengine_qpaintengine_drawpath, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPaintEngine_QPaintEngine, drawPoints, arginfo_qt_gui_qpaintengine_qpaintengine_drawpoints, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPaintEngine_QPaintEngine, drawPointsQPointInt, arginfo_qt_gui_qpaintengine_qpaintengine_drawpointsqpointint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPaintEngine_QPaintEngine, drawPolygon, arginfo_qt_gui_qpaintengine_qpaintengine_drawpolygon, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPaintEngine_QPaintEngine, drawPolygonQPointIntQPaintEnginePolygonDrawMode, arginfo_qt_gui_qpaintengine_qpaintengine_drawpolygonqpointintqpaintenginepolygondrawmode, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPaintEngine_QPaintEngine, drawPixmap, arginfo_qt_gui_qpaintengine_qpaintengine_drawpixmap, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPaintEngine_QPaintEngine, drawTextItem, arginfo_qt_gui_qpaintengine_qpaintengine_drawtextitem, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPaintEngine_QPaintEngine, drawTiledPixmap, arginfo_qt_gui_qpaintengine_qpaintengine_drawtiledpixmap, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPaintEngine_QPaintEngine, drawImage, arginfo_qt_gui_qpaintengine_qpaintengine_drawimage, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPaintEngine_QPaintEngine, setPaintDevice, arginfo_qt_gui_qpaintengine_qpaintengine_setpaintdevice, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPaintEngine_QPaintEngine, paintDevice, arginfo_qt_gui_qpaintengine_qpaintengine_paintdevice, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPaintEngine_QPaintEngine, setSystemClip, arginfo_qt_gui_qpaintengine_qpaintengine_setsystemclip, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPaintEngine_QPaintEngine, systemClip, arginfo_qt_gui_qpaintengine_qpaintengine_systemclip, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPaintEngine_QPaintEngine, setSystemRect, arginfo_qt_gui_qpaintengine_qpaintengine_setsystemrect, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPaintEngine_QPaintEngine, systemRect, arginfo_qt_gui_qpaintengine_qpaintengine_systemrect, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPaintEngine_QPaintEngine, coordinateOffset, arginfo_qt_gui_qpaintengine_qpaintengine_coordinateoffset, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPaintEngine_QPaintEngine, type, arginfo_qt_gui_qpaintengine_qpaintengine_type, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPaintEngine_QPaintEngine, fix_neg_rect, arginfo_qt_gui_qpaintengine_qpaintengine_fix_neg_rect, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPaintEngine_QPaintEngine, testDirty, arginfo_qt_gui_qpaintengine_qpaintengine_testdirty, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPaintEngine_QPaintEngine, setDirty, arginfo_qt_gui_qpaintengine_qpaintengine_setdirty, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPaintEngine_QPaintEngine, clearDirty, arginfo_qt_gui_qpaintengine_qpaintengine_cleardirty, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPaintEngine_QPaintEngine, hasFeature, arginfo_qt_gui_qpaintengine_qpaintengine_hasfeature, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPaintEngine_QPaintEngine, painter, arginfo_qt_gui_qpaintengine_qpaintengine_painter, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPaintEngine_QPaintEngine, syncState, arginfo_qt_gui_qpaintengine_qpaintengine_syncstate, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPaintEngine_QPaintEngine, isExtended, arginfo_qt_gui_qpaintengine_qpaintengine_isextended, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPaintEngine_QPaintEngine, createPixmap, arginfo_qt_gui_qpaintengine_qpaintengine_createpixmap, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPaintEngine_QPaintEngine, createPixmapFromImage, arginfo_qt_gui_qpaintengine_qpaintengine_createpixmapfromimage, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPaintEngine_QPaintEngine, state, arginfo_qt_gui_qpaintengine_qpaintengine_state, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPaintEngine_QPaintEngine, setState, arginfo_qt_gui_qpaintengine_qpaintengine_setstate, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPaintEngine_QPaintEngine, gccaps, arginfo_qt_gui_qpaintengine_qpaintengine_gccaps, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPaintEngine_QPaintEngine, setGccaps, arginfo_qt_gui_qpaintengine_qpaintengine_setgccaps, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPaintEngine_QPaintEngine, active, arginfo_qt_gui_qpaintengine_qpaintengine_active, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPaintEngine_QPaintEngine, setActiveUint, arginfo_qt_gui_qpaintengine_qpaintengine_setactiveuint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPaintEngine_QPaintEngine, selfDestruct, arginfo_qt_gui_qpaintengine_qpaintengine_selfdestruct, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPaintEngine_QPaintEngine, setSelfDestruct, arginfo_qt_gui_qpaintengine_qpaintengine_setselfdestruct, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPaintEngine_QPaintEngine, extended, arginfo_qt_gui_qpaintengine_qpaintengine_extended, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPaintEngine_QPaintEngine, setExtended, arginfo_qt_gui_qpaintengine_qpaintengine_setextended, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
