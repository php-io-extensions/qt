
extern zend_class_entry *qt_gui_qpixmap_qpixmap_ce;

ZEPHIR_INIT_CLASS(Qt_Gui_QPixmap_QPixmap);

PHP_METHOD(Qt_Gui_QPixmap_QPixmap, new_);
PHP_METHOD(Qt_Gui_QPixmap_QPixmap, newIntInt);
PHP_METHOD(Qt_Gui_QPixmap_QPixmap, newQSize);
PHP_METHOD(Qt_Gui_QPixmap_QPixmap, newQStringCharQtImageConversionFlags);
PHP_METHOD(Qt_Gui_QPixmap_QPixmap, newQPixmap);
PHP_METHOD(Qt_Gui_QPixmap_QPixmap, swap);
PHP_METHOD(Qt_Gui_QPixmap_QPixmap, isNull);
PHP_METHOD(Qt_Gui_QPixmap_QPixmap, devType);
PHP_METHOD(Qt_Gui_QPixmap_QPixmap, width);
PHP_METHOD(Qt_Gui_QPixmap_QPixmap, height);
PHP_METHOD(Qt_Gui_QPixmap_QPixmap, size);
PHP_METHOD(Qt_Gui_QPixmap_QPixmap, rect);
PHP_METHOD(Qt_Gui_QPixmap_QPixmap, depth);
PHP_METHOD(Qt_Gui_QPixmap_QPixmap, defaultDepth);
PHP_METHOD(Qt_Gui_QPixmap_QPixmap, fill);
PHP_METHOD(Qt_Gui_QPixmap_QPixmap, mask);
PHP_METHOD(Qt_Gui_QPixmap_QPixmap, setMask);
PHP_METHOD(Qt_Gui_QPixmap_QPixmap, devicePixelRatio);
PHP_METHOD(Qt_Gui_QPixmap_QPixmap, setDevicePixelRatio);
PHP_METHOD(Qt_Gui_QPixmap_QPixmap, deviceIndependentSize);
PHP_METHOD(Qt_Gui_QPixmap_QPixmap, hasAlpha);
PHP_METHOD(Qt_Gui_QPixmap_QPixmap, hasAlphaChannel);
PHP_METHOD(Qt_Gui_QPixmap_QPixmap, createHeuristicMask);
PHP_METHOD(Qt_Gui_QPixmap_QPixmap, createMaskFromColor);
PHP_METHOD(Qt_Gui_QPixmap_QPixmap, scaled);
PHP_METHOD(Qt_Gui_QPixmap_QPixmap, scaledQSizeQtAspectRatioModeQtTransformationMode);
PHP_METHOD(Qt_Gui_QPixmap_QPixmap, scaledToWidth);
PHP_METHOD(Qt_Gui_QPixmap_QPixmap, scaledToHeight);
PHP_METHOD(Qt_Gui_QPixmap_QPixmap, transformed);
PHP_METHOD(Qt_Gui_QPixmap_QPixmap, trueMatrix);
PHP_METHOD(Qt_Gui_QPixmap_QPixmap, toImage);
PHP_METHOD(Qt_Gui_QPixmap_QPixmap, fromImage);
PHP_METHOD(Qt_Gui_QPixmap_QPixmap, fromImageReader);
PHP_METHOD(Qt_Gui_QPixmap_QPixmap, load);
PHP_METHOD(Qt_Gui_QPixmap_QPixmap, loadFromData);
PHP_METHOD(Qt_Gui_QPixmap_QPixmap, loadFromDataQByteArrayCharQtImageConversionFlags);
PHP_METHOD(Qt_Gui_QPixmap_QPixmap, save);
PHP_METHOD(Qt_Gui_QPixmap_QPixmap, saveQIODeviceCharInt);
PHP_METHOD(Qt_Gui_QPixmap_QPixmap, convertFromImage);
PHP_METHOD(Qt_Gui_QPixmap_QPixmap, copy);
PHP_METHOD(Qt_Gui_QPixmap_QPixmap, copyQRect);
PHP_METHOD(Qt_Gui_QPixmap_QPixmap, scroll);
PHP_METHOD(Qt_Gui_QPixmap_QPixmap, scrollIntIntQRectQRegion);
PHP_METHOD(Qt_Gui_QPixmap_QPixmap, cacheKey);
PHP_METHOD(Qt_Gui_QPixmap_QPixmap, isDetached);
PHP_METHOD(Qt_Gui_QPixmap_QPixmap, detach);
PHP_METHOD(Qt_Gui_QPixmap_QPixmap, isQBitmap);
PHP_METHOD(Qt_Gui_QPixmap_QPixmap, paintEngine);
PHP_METHOD(Qt_Gui_QPixmap_QPixmap, metric);
PHP_METHOD(Qt_Gui_QPixmap_QPixmap, fromImageInPlace);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpixmap_qpixmap_new_, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpixmap_qpixmap_newintint, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, w, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, h, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpixmap_qpixmap_newqsize, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0Width, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0Height, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpixmap_qpixmap_newqstringcharqtimageconversionflags, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, fileName, IS_STRING, 0)
	ZEND_ARG_INFO(0, format)
	ZEND_ARG_INFO(0, flags)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpixmap_qpixmap_newqpixmap, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpixmap_qpixmap_swap, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, other, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpixmap_qpixmap_isnull, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpixmap_qpixmap_devtype, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpixmap_qpixmap_width, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpixmap_qpixmap_height, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpixmap_qpixmap_size, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpixmap_qpixmap_rect, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpixmap_qpixmap_depth, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpixmap_qpixmap_defaultdepth, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpixmap_qpixmap_fill, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_INFO(0, fillColor)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpixmap_qpixmap_mask, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpixmap_qpixmap_setmask, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpixmap_qpixmap_devicepixelratio, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpixmap_qpixmap_setdevicepixelratio, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, scaleFactor, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpixmap_qpixmap_deviceindependentsize, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpixmap_qpixmap_hasalpha, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpixmap_qpixmap_hasalphachannel, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpixmap_qpixmap_createheuristicmask, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, clipTight, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpixmap_qpixmap_createmaskfromcolor, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, maskColor, IS_LONG, 0)
	ZEND_ARG_INFO(0, mode)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpixmap_qpixmap_scaled, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, w, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, h, IS_LONG, 0)
	ZEND_ARG_INFO(0, aspectMode)
	ZEND_ARG_INFO(0, mode)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpixmap_qpixmap_scaledqsizeqtaspectratiomodeqttransformationmode, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sWidth, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sHeight, IS_LONG, 0)
	ZEND_ARG_INFO(0, aspectMode)
	ZEND_ARG_INFO(0, mode)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpixmap_qpixmap_scaledtowidth, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, w, IS_LONG, 0)
	ZEND_ARG_INFO(0, mode)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpixmap_qpixmap_scaledtoheight, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, h, IS_LONG, 0)
	ZEND_ARG_INFO(0, mode)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpixmap_qpixmap_transformed, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
	ZEND_ARG_INFO(0, mode)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpixmap_qpixmap_truematrix, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, m, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, w, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, h, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpixmap_qpixmap_toimage, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpixmap_qpixmap_fromimage, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, image, IS_LONG, 0)
	ZEND_ARG_INFO(0, flags)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpixmap_qpixmap_fromimagereader, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, imageReader, IS_LONG, 0)
	ZEND_ARG_INFO(0, flags)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpixmap_qpixmap_load, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, fileName, IS_STRING, 0)
	ZEND_ARG_INFO(0, format)
	ZEND_ARG_INFO(0, flags)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpixmap_qpixmap_loadfromdata, 0, 3, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_INFO(0, buf)
	ZEND_ARG_TYPE_INFO(0, len, IS_LONG, 0)
	ZEND_ARG_INFO(0, format)
	ZEND_ARG_INFO(0, flags)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpixmap_qpixmap_loadfromdataqbytearraycharqtimageconversionflags, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, data, IS_STRING, 0)
	ZEND_ARG_INFO(0, format)
	ZEND_ARG_INFO(0, flags)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpixmap_qpixmap_save, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, fileName, IS_STRING, 0)
	ZEND_ARG_INFO(0, format)
	ZEND_ARG_TYPE_INFO(0, quality, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpixmap_qpixmap_saveqiodevicecharint, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, device, IS_LONG, 0)
	ZEND_ARG_INFO(0, format)
	ZEND_ARG_TYPE_INFO(0, quality, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpixmap_qpixmap_convertfromimage, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, img, IS_LONG, 0)
	ZEND_ARG_INFO(0, flags)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpixmap_qpixmap_copy, 0, 5, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, height, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpixmap_qpixmap_copyqrect, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_INFO(0, rectX)
	ZEND_ARG_INFO(0, rectY)
	ZEND_ARG_INFO(0, rectWidth)
	ZEND_ARG_INFO(0, rectHeight)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpixmap_qpixmap_scroll, 0, 7, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, dx, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, dy, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, height, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, exposed, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpixmap_qpixmap_scrollintintqrectqregion, 0, 7, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, dx, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, dy, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rectX, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rectY, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rectWidth, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rectHeight, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, exposed, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpixmap_qpixmap_cachekey, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpixmap_qpixmap_isdetached, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpixmap_qpixmap_detach, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpixmap_qpixmap_isqbitmap, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpixmap_qpixmap_paintengine, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpixmap_qpixmap_metric, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpixmap_qpixmap_fromimageinplace, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, image, IS_LONG, 0)
	ZEND_ARG_INFO(0, flags)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_gui_qpixmap_qpixmap_method_entry) {
	PHP_ME(Qt_Gui_QPixmap_QPixmap, new_, arginfo_qt_gui_qpixmap_qpixmap_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPixmap_QPixmap, newIntInt, arginfo_qt_gui_qpixmap_qpixmap_newintint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPixmap_QPixmap, newQSize, arginfo_qt_gui_qpixmap_qpixmap_newqsize, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPixmap_QPixmap, newQStringCharQtImageConversionFlags, arginfo_qt_gui_qpixmap_qpixmap_newqstringcharqtimageconversionflags, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPixmap_QPixmap, newQPixmap, arginfo_qt_gui_qpixmap_qpixmap_newqpixmap, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPixmap_QPixmap, swap, arginfo_qt_gui_qpixmap_qpixmap_swap, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPixmap_QPixmap, isNull, arginfo_qt_gui_qpixmap_qpixmap_isnull, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPixmap_QPixmap, devType, arginfo_qt_gui_qpixmap_qpixmap_devtype, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPixmap_QPixmap, width, arginfo_qt_gui_qpixmap_qpixmap_width, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPixmap_QPixmap, height, arginfo_qt_gui_qpixmap_qpixmap_height, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPixmap_QPixmap, size, arginfo_qt_gui_qpixmap_qpixmap_size, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPixmap_QPixmap, rect, arginfo_qt_gui_qpixmap_qpixmap_rect, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPixmap_QPixmap, depth, arginfo_qt_gui_qpixmap_qpixmap_depth, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPixmap_QPixmap, defaultDepth, arginfo_qt_gui_qpixmap_qpixmap_defaultdepth, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPixmap_QPixmap, fill, arginfo_qt_gui_qpixmap_qpixmap_fill, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPixmap_QPixmap, mask, arginfo_qt_gui_qpixmap_qpixmap_mask, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPixmap_QPixmap, setMask, arginfo_qt_gui_qpixmap_qpixmap_setmask, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPixmap_QPixmap, devicePixelRatio, arginfo_qt_gui_qpixmap_qpixmap_devicepixelratio, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPixmap_QPixmap, setDevicePixelRatio, arginfo_qt_gui_qpixmap_qpixmap_setdevicepixelratio, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPixmap_QPixmap, deviceIndependentSize, arginfo_qt_gui_qpixmap_qpixmap_deviceindependentsize, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPixmap_QPixmap, hasAlpha, arginfo_qt_gui_qpixmap_qpixmap_hasalpha, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPixmap_QPixmap, hasAlphaChannel, arginfo_qt_gui_qpixmap_qpixmap_hasalphachannel, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPixmap_QPixmap, createHeuristicMask, arginfo_qt_gui_qpixmap_qpixmap_createheuristicmask, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPixmap_QPixmap, createMaskFromColor, arginfo_qt_gui_qpixmap_qpixmap_createmaskfromcolor, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPixmap_QPixmap, scaled, arginfo_qt_gui_qpixmap_qpixmap_scaled, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPixmap_QPixmap, scaledQSizeQtAspectRatioModeQtTransformationMode, arginfo_qt_gui_qpixmap_qpixmap_scaledqsizeqtaspectratiomodeqttransformationmode, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPixmap_QPixmap, scaledToWidth, arginfo_qt_gui_qpixmap_qpixmap_scaledtowidth, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPixmap_QPixmap, scaledToHeight, arginfo_qt_gui_qpixmap_qpixmap_scaledtoheight, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPixmap_QPixmap, transformed, arginfo_qt_gui_qpixmap_qpixmap_transformed, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPixmap_QPixmap, trueMatrix, arginfo_qt_gui_qpixmap_qpixmap_truematrix, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPixmap_QPixmap, toImage, arginfo_qt_gui_qpixmap_qpixmap_toimage, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPixmap_QPixmap, fromImage, arginfo_qt_gui_qpixmap_qpixmap_fromimage, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPixmap_QPixmap, fromImageReader, arginfo_qt_gui_qpixmap_qpixmap_fromimagereader, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPixmap_QPixmap, load, arginfo_qt_gui_qpixmap_qpixmap_load, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPixmap_QPixmap, loadFromData, arginfo_qt_gui_qpixmap_qpixmap_loadfromdata, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPixmap_QPixmap, loadFromDataQByteArrayCharQtImageConversionFlags, arginfo_qt_gui_qpixmap_qpixmap_loadfromdataqbytearraycharqtimageconversionflags, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPixmap_QPixmap, save, arginfo_qt_gui_qpixmap_qpixmap_save, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPixmap_QPixmap, saveQIODeviceCharInt, arginfo_qt_gui_qpixmap_qpixmap_saveqiodevicecharint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPixmap_QPixmap, convertFromImage, arginfo_qt_gui_qpixmap_qpixmap_convertfromimage, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPixmap_QPixmap, copy, arginfo_qt_gui_qpixmap_qpixmap_copy, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPixmap_QPixmap, copyQRect, arginfo_qt_gui_qpixmap_qpixmap_copyqrect, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPixmap_QPixmap, scroll, arginfo_qt_gui_qpixmap_qpixmap_scroll, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPixmap_QPixmap, scrollIntIntQRectQRegion, arginfo_qt_gui_qpixmap_qpixmap_scrollintintqrectqregion, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPixmap_QPixmap, cacheKey, arginfo_qt_gui_qpixmap_qpixmap_cachekey, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPixmap_QPixmap, isDetached, arginfo_qt_gui_qpixmap_qpixmap_isdetached, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPixmap_QPixmap, detach, arginfo_qt_gui_qpixmap_qpixmap_detach, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPixmap_QPixmap, isQBitmap, arginfo_qt_gui_qpixmap_qpixmap_isqbitmap, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPixmap_QPixmap, paintEngine, arginfo_qt_gui_qpixmap_qpixmap_paintengine, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPixmap_QPixmap, metric, arginfo_qt_gui_qpixmap_qpixmap_metric, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPixmap_QPixmap, fromImageInPlace, arginfo_qt_gui_qpixmap_qpixmap_fromimageinplace, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
