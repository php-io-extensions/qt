
extern zend_class_entry *qt_gui_qimage_qimage_ce;

ZEPHIR_INIT_CLASS(Qt_Gui_QImage_QImage);

PHP_METHOD(Qt_Gui_QImage_QImage, staticMetaObject);
PHP_METHOD(Qt_Gui_QImage_QImage, qt_check_for_QGADGET_macro);
PHP_METHOD(Qt_Gui_QImage_QImage, new_);
PHP_METHOD(Qt_Gui_QImage_QImage, newQSizeQImageFormat);
PHP_METHOD(Qt_Gui_QImage_QImage, newIntIntQImageFormat);
PHP_METHOD(Qt_Gui_QImage_QImage, newQStringChar);
PHP_METHOD(Qt_Gui_QImage_QImage, newQImage);
PHP_METHOD(Qt_Gui_QImage_QImage, swap);
PHP_METHOD(Qt_Gui_QImage_QImage, isNull);
PHP_METHOD(Qt_Gui_QImage_QImage, devType);
PHP_METHOD(Qt_Gui_QImage_QImage, detach);
PHP_METHOD(Qt_Gui_QImage_QImage, isDetached);
PHP_METHOD(Qt_Gui_QImage_QImage, copy);
PHP_METHOD(Qt_Gui_QImage_QImage, copyIntIntIntInt);
PHP_METHOD(Qt_Gui_QImage_QImage, format);
PHP_METHOD(Qt_Gui_QImage_QImage, convertToFormat);
PHP_METHOD(Qt_Gui_QImage_QImage, convertToFormatQImageFormatQListUnsignedIntQtImageConversionFlags);
PHP_METHOD(Qt_Gui_QImage_QImage, reinterpretAsFormat);
PHP_METHOD(Qt_Gui_QImage_QImage, convertedTo);
PHP_METHOD(Qt_Gui_QImage_QImage, convertTo);
PHP_METHOD(Qt_Gui_QImage_QImage, width);
PHP_METHOD(Qt_Gui_QImage_QImage, height);
PHP_METHOD(Qt_Gui_QImage_QImage, size);
PHP_METHOD(Qt_Gui_QImage_QImage, rect);
PHP_METHOD(Qt_Gui_QImage_QImage, depth);
PHP_METHOD(Qt_Gui_QImage_QImage, colorCount);
PHP_METHOD(Qt_Gui_QImage_QImage, bitPlaneCount);
PHP_METHOD(Qt_Gui_QImage_QImage, color);
PHP_METHOD(Qt_Gui_QImage_QImage, setColor);
PHP_METHOD(Qt_Gui_QImage_QImage, setColorCount);
PHP_METHOD(Qt_Gui_QImage_QImage, allGray);
PHP_METHOD(Qt_Gui_QImage_QImage, isGrayscale);
PHP_METHOD(Qt_Gui_QImage_QImage, sizeInBytes);
PHP_METHOD(Qt_Gui_QImage_QImage, bytesPerLine);
PHP_METHOD(Qt_Gui_QImage_QImage, valid);
PHP_METHOD(Qt_Gui_QImage_QImage, validQPoint);
PHP_METHOD(Qt_Gui_QImage_QImage, pixelIndex);
PHP_METHOD(Qt_Gui_QImage_QImage, pixelIndexQPoint);
PHP_METHOD(Qt_Gui_QImage_QImage, pixel);
PHP_METHOD(Qt_Gui_QImage_QImage, pixelQPoint);
PHP_METHOD(Qt_Gui_QImage_QImage, setPixel);
PHP_METHOD(Qt_Gui_QImage_QImage, setPixelQPointUint);
PHP_METHOD(Qt_Gui_QImage_QImage, pixelColor);
PHP_METHOD(Qt_Gui_QImage_QImage, pixelColorQPoint);
PHP_METHOD(Qt_Gui_QImage_QImage, setPixelColor);
PHP_METHOD(Qt_Gui_QImage_QImage, setPixelColorQPointQColor);
PHP_METHOD(Qt_Gui_QImage_QImage, colorTable);
PHP_METHOD(Qt_Gui_QImage_QImage, setColorTable);
PHP_METHOD(Qt_Gui_QImage_QImage, devicePixelRatio);
PHP_METHOD(Qt_Gui_QImage_QImage, setDevicePixelRatio);
PHP_METHOD(Qt_Gui_QImage_QImage, deviceIndependentSize);
PHP_METHOD(Qt_Gui_QImage_QImage, fill);
PHP_METHOD(Qt_Gui_QImage_QImage, fillQColor);
PHP_METHOD(Qt_Gui_QImage_QImage, fillQtGlobalColor);
PHP_METHOD(Qt_Gui_QImage_QImage, hasAlphaChannel);
PHP_METHOD(Qt_Gui_QImage_QImage, setAlphaChannel);
PHP_METHOD(Qt_Gui_QImage_QImage, createAlphaMask);
PHP_METHOD(Qt_Gui_QImage_QImage, createHeuristicMask);
PHP_METHOD(Qt_Gui_QImage_QImage, createMaskFromColor);
PHP_METHOD(Qt_Gui_QImage_QImage, scaled);
PHP_METHOD(Qt_Gui_QImage_QImage, scaledQSizeQtAspectRatioModeQtTransformationMode);
PHP_METHOD(Qt_Gui_QImage_QImage, scaledToWidth);
PHP_METHOD(Qt_Gui_QImage_QImage, scaledToHeight);
PHP_METHOD(Qt_Gui_QImage_QImage, transformed);
PHP_METHOD(Qt_Gui_QImage_QImage, trueMatrix);
PHP_METHOD(Qt_Gui_QImage_QImage, mirrored);
PHP_METHOD(Qt_Gui_QImage_QImage, rgbSwapped);
PHP_METHOD(Qt_Gui_QImage_QImage, mirror);
PHP_METHOD(Qt_Gui_QImage_QImage, rgbSwap);
PHP_METHOD(Qt_Gui_QImage_QImage, invertPixels);
PHP_METHOD(Qt_Gui_QImage_QImage, colorSpace);
PHP_METHOD(Qt_Gui_QImage_QImage, convertedToColorSpace);
PHP_METHOD(Qt_Gui_QImage_QImage, convertedToColorSpaceQColorSpaceQImageFormatQtImageConversionFlags);
PHP_METHOD(Qt_Gui_QImage_QImage, convertToColorSpace);
PHP_METHOD(Qt_Gui_QImage_QImage, convertToColorSpaceQColorSpaceQImageFormatQtImageConversionFlags);
PHP_METHOD(Qt_Gui_QImage_QImage, setColorSpace);
PHP_METHOD(Qt_Gui_QImage_QImage, colorTransformed);
PHP_METHOD(Qt_Gui_QImage_QImage, colorTransformedQColorTransformQImageFormatQtImageConversionFlags);
PHP_METHOD(Qt_Gui_QImage_QImage, applyColorTransform);
PHP_METHOD(Qt_Gui_QImage_QImage, applyColorTransformQColorTransformQImageFormatQtImageConversionFlags);
PHP_METHOD(Qt_Gui_QImage_QImage, load);
PHP_METHOD(Qt_Gui_QImage_QImage, loadQStringChar);
PHP_METHOD(Qt_Gui_QImage_QImage, loadFromData);
PHP_METHOD(Qt_Gui_QImage_QImage, loadFromDataUcharIntChar);
PHP_METHOD(Qt_Gui_QImage_QImage, loadFromDataQByteArrayChar);
PHP_METHOD(Qt_Gui_QImage_QImage, save);
PHP_METHOD(Qt_Gui_QImage_QImage, saveQIODeviceCharInt);
PHP_METHOD(Qt_Gui_QImage_QImage, fromData);
PHP_METHOD(Qt_Gui_QImage_QImage, fromDataUcharIntChar);
PHP_METHOD(Qt_Gui_QImage_QImage, fromDataQByteArrayChar);
PHP_METHOD(Qt_Gui_QImage_QImage, cacheKey);
PHP_METHOD(Qt_Gui_QImage_QImage, paintEngine);
PHP_METHOD(Qt_Gui_QImage_QImage, dotsPerMeterX);
PHP_METHOD(Qt_Gui_QImage_QImage, dotsPerMeterY);
PHP_METHOD(Qt_Gui_QImage_QImage, setDotsPerMeterX);
PHP_METHOD(Qt_Gui_QImage_QImage, setDotsPerMeterY);
PHP_METHOD(Qt_Gui_QImage_QImage, offset);
PHP_METHOD(Qt_Gui_QImage_QImage, setOffset);
PHP_METHOD(Qt_Gui_QImage_QImage, textKeys);
PHP_METHOD(Qt_Gui_QImage_QImage, text);
PHP_METHOD(Qt_Gui_QImage_QImage, setText);
PHP_METHOD(Qt_Gui_QImage_QImage, pixelFormat);
PHP_METHOD(Qt_Gui_QImage_QImage, toPixelFormat);
PHP_METHOD(Qt_Gui_QImage_QImage, toImageFormat);
PHP_METHOD(Qt_Gui_QImage_QImage, metric);
PHP_METHOD(Qt_Gui_QImage_QImage, mirrored_helper);
PHP_METHOD(Qt_Gui_QImage_QImage, rgbSwapped_helper);
PHP_METHOD(Qt_Gui_QImage_QImage, mirrored_inplace);
PHP_METHOD(Qt_Gui_QImage_QImage, rgbSwapped_inplace);
PHP_METHOD(Qt_Gui_QImage_QImage, convertToFormat_helper);
PHP_METHOD(Qt_Gui_QImage_QImage, convertToFormat_inplace);
PHP_METHOD(Qt_Gui_QImage_QImage, smoothScaled);
PHP_METHOD(Qt_Gui_QImage_QImage, detachMetadata);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qimage_qimage_staticmetaobject, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qimage_qimage_qt_check_for_qgadget_macro, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qimage_qimage_new_, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qimage_qimage_newqsizeqimageformat, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sizeWidth, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sizeHeight, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, format, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qimage_qimage_newintintqimageformat, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, height, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, format, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qimage_qimage_newqstringchar, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, fileName, IS_STRING, 0)
	ZEND_ARG_INFO(0, format)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qimage_qimage_newqimage, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qimage_qimage_swap, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, other, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qimage_qimage_isnull, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qimage_qimage_devtype, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qimage_qimage_detach, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qimage_qimage_isdetached, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qimage_qimage_copy, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_INFO(0, rectX)
	ZEND_ARG_INFO(0, rectY)
	ZEND_ARG_INFO(0, rectWidth)
	ZEND_ARG_INFO(0, rectHeight)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qimage_qimage_copyintintintint, 0, 5, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, w, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, h, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qimage_qimage_format, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qimage_qimage_converttoformat, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, f, IS_LONG, 0)
	ZEND_ARG_INFO(0, flags)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qimage_qimage_converttoformatqimageformatqlistunsignedintqtimageconversionflags, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, f, IS_LONG, 0)
	ZEND_ARG_ARRAY_INFO(0, colorTable, 0)
	ZEND_ARG_INFO(0, flags)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qimage_qimage_reinterpretasformat, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, f, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qimage_qimage_convertedto, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, f, IS_LONG, 0)
	ZEND_ARG_INFO(0, flags)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qimage_qimage_convertto, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, f, IS_LONG, 0)
	ZEND_ARG_INFO(0, flags)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qimage_qimage_width, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qimage_qimage_height, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qimage_qimage_size, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qimage_qimage_rect, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qimage_qimage_depth, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qimage_qimage_colorcount, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qimage_qimage_bitplanecount, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qimage_qimage_color, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, i, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qimage_qimage_setcolor, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, i, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, c, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qimage_qimage_setcolorcount, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qimage_qimage_allgray, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qimage_qimage_isgrayscale, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qimage_qimage_sizeinbytes, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qimage_qimage_bytesperline, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qimage_qimage_valid, 0, 3, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qimage_qimage_validqpoint, 0, 3, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, ptX, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, ptY, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qimage_qimage_pixelindex, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qimage_qimage_pixelindexqpoint, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, ptX, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, ptY, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qimage_qimage_pixel, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qimage_qimage_pixelqpoint, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, ptX, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, ptY, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qimage_qimage_setpixel, 0, 4, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index_or_rgb, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qimage_qimage_setpixelqpointuint, 0, 4, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, ptX, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, ptY, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index_or_rgb, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qimage_qimage_pixelcolor, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qimage_qimage_pixelcolorqpoint, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, ptX, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, ptY, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qimage_qimage_setpixelcolor, 0, 4, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, c, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qimage_qimage_setpixelcolorqpointqcolor, 0, 4, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, ptX, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, ptY, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, c, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qimage_qimage_colortable, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qimage_qimage_setcolortable, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_ARRAY_INFO(0, colors, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qimage_qimage_devicepixelratio, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qimage_qimage_setdevicepixelratio, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, scaleFactor, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qimage_qimage_deviceindependentsize, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qimage_qimage_fill, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, pixel, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qimage_qimage_fillqcolor, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, color, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qimage_qimage_fillqtglobalcolor, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, color, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qimage_qimage_hasalphachannel, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qimage_qimage_setalphachannel, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, alphaChannel, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qimage_qimage_createalphamask, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_INFO(0, flags)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qimage_qimage_createheuristicmask, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, clipTight, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qimage_qimage_createmaskfromcolor, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, color, IS_LONG, 0)
	ZEND_ARG_INFO(0, mode)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qimage_qimage_scaled, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, w, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, h, IS_LONG, 0)
	ZEND_ARG_INFO(0, aspectMode)
	ZEND_ARG_INFO(0, mode)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qimage_qimage_scaledqsizeqtaspectratiomodeqttransformationmode, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sWidth, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sHeight, IS_LONG, 0)
	ZEND_ARG_INFO(0, aspectMode)
	ZEND_ARG_INFO(0, mode)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qimage_qimage_scaledtowidth, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, w, IS_LONG, 0)
	ZEND_ARG_INFO(0, mode)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qimage_qimage_scaledtoheight, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, h, IS_LONG, 0)
	ZEND_ARG_INFO(0, mode)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qimage_qimage_transformed, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, matrix, IS_LONG, 0)
	ZEND_ARG_INFO(0, mode)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qimage_qimage_truematrix, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, w, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, h, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qimage_qimage_mirrored, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, horizontally, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, vertically, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qimage_qimage_rgbswapped, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qimage_qimage_mirror, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, horizontally, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, vertically, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qimage_qimage_rgbswap, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qimage_qimage_invertpixels, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_INFO(0, arg0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qimage_qimage_colorspace, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qimage_qimage_convertedtocolorspace, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, colorSpace, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qimage_qimage_convertedtocolorspaceqcolorspaceqimageformatqtimageconversionflags, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, colorSpace, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, format, IS_LONG, 0)
	ZEND_ARG_INFO(0, flags)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qimage_qimage_converttocolorspace, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, colorSpace, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qimage_qimage_converttocolorspaceqcolorspaceqimageformatqtimageconversionflags, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, colorSpace, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, format, IS_LONG, 0)
	ZEND_ARG_INFO(0, flags)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qimage_qimage_setcolorspace, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, colorSpace, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qimage_qimage_colortransformed, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, transform, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qimage_qimage_colortransformedqcolortransformqimageformatqtimageconversionflags, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, transform, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, format, IS_LONG, 0)
	ZEND_ARG_INFO(0, flags)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qimage_qimage_applycolortransform, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, transform, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qimage_qimage_applycolortransformqcolortransformqimageformatqtimageconversionflags, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, transform, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, format, IS_LONG, 0)
	ZEND_ARG_INFO(0, flags)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qimage_qimage_load, 0, 3, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, device, IS_LONG, 0)
	ZEND_ARG_INFO(0, format)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qimage_qimage_loadqstringchar, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, fileName, IS_STRING, 0)
	ZEND_ARG_INFO(0, format)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qimage_qimage_loadfromdata, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, data, IS_STRING, 0)
	ZEND_ARG_INFO(0, format)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qimage_qimage_loadfromdataucharintchar, 0, 3, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_INFO(0, buf)
	ZEND_ARG_TYPE_INFO(0, len, IS_LONG, 0)
	ZEND_ARG_INFO(0, format)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qimage_qimage_loadfromdataqbytearraychar, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, data, IS_STRING, 0)
	ZEND_ARG_INFO(0, format)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qimage_qimage_save, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, fileName, IS_STRING, 0)
	ZEND_ARG_INFO(0, format)
	ZEND_ARG_TYPE_INFO(0, quality, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qimage_qimage_saveqiodevicecharint, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, device, IS_LONG, 0)
	ZEND_ARG_INFO(0, format)
	ZEND_ARG_TYPE_INFO(0, quality, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qimage_qimage_fromdata, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, data, IS_STRING, 0)
	ZEND_ARG_INFO(0, format)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qimage_qimage_fromdataucharintchar, 0, 2, IS_LONG, 0)
	ZEND_ARG_INFO(0, data)
	ZEND_ARG_TYPE_INFO(0, size, IS_LONG, 0)
	ZEND_ARG_INFO(0, format)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qimage_qimage_fromdataqbytearraychar, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, data, IS_STRING, 0)
	ZEND_ARG_INFO(0, format)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qimage_qimage_cachekey, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qimage_qimage_paintengine, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qimage_qimage_dotspermeterx, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qimage_qimage_dotspermetery, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qimage_qimage_setdotspermeterx, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qimage_qimage_setdotspermetery, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qimage_qimage_offset, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qimage_qimage_setoffset, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0X, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0Y, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qimage_qimage_textkeys, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qimage_qimage_text, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, key, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qimage_qimage_settext, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, key, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qimage_qimage_pixelformat, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qimage_qimage_topixelformat, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, format, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qimage_qimage_toimageformat, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, format, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qimage_qimage_metric, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, metric, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qimage_qimage_mirrored_helper, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, horizontal, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, vertical, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qimage_qimage_rgbswapped_helper, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qimage_qimage_mirrored_inplace, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, horizontal, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, vertical, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qimage_qimage_rgbswapped_inplace, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qimage_qimage_converttoformat_helper, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, format, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, flags, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qimage_qimage_converttoformat_inplace, 0, 3, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, format, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, flags, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qimage_qimage_smoothscaled, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, w, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, h, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qimage_qimage_detachmetadata, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, invalidateCache, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_gui_qimage_qimage_method_entry) {
	PHP_ME(Qt_Gui_QImage_QImage, staticMetaObject, arginfo_qt_gui_qimage_qimage_staticmetaobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QImage_QImage, qt_check_for_QGADGET_macro, arginfo_qt_gui_qimage_qimage_qt_check_for_qgadget_macro, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QImage_QImage, new_, arginfo_qt_gui_qimage_qimage_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QImage_QImage, newQSizeQImageFormat, arginfo_qt_gui_qimage_qimage_newqsizeqimageformat, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QImage_QImage, newIntIntQImageFormat, arginfo_qt_gui_qimage_qimage_newintintqimageformat, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QImage_QImage, newQStringChar, arginfo_qt_gui_qimage_qimage_newqstringchar, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QImage_QImage, newQImage, arginfo_qt_gui_qimage_qimage_newqimage, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QImage_QImage, swap, arginfo_qt_gui_qimage_qimage_swap, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QImage_QImage, isNull, arginfo_qt_gui_qimage_qimage_isnull, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QImage_QImage, devType, arginfo_qt_gui_qimage_qimage_devtype, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QImage_QImage, detach, arginfo_qt_gui_qimage_qimage_detach, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QImage_QImage, isDetached, arginfo_qt_gui_qimage_qimage_isdetached, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QImage_QImage, copy, arginfo_qt_gui_qimage_qimage_copy, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QImage_QImage, copyIntIntIntInt, arginfo_qt_gui_qimage_qimage_copyintintintint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QImage_QImage, format, arginfo_qt_gui_qimage_qimage_format, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QImage_QImage, convertToFormat, arginfo_qt_gui_qimage_qimage_converttoformat, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QImage_QImage, convertToFormatQImageFormatQListUnsignedIntQtImageConversionFlags, arginfo_qt_gui_qimage_qimage_converttoformatqimageformatqlistunsignedintqtimageconversionflags, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QImage_QImage, reinterpretAsFormat, arginfo_qt_gui_qimage_qimage_reinterpretasformat, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QImage_QImage, convertedTo, arginfo_qt_gui_qimage_qimage_convertedto, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QImage_QImage, convertTo, arginfo_qt_gui_qimage_qimage_convertto, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QImage_QImage, width, arginfo_qt_gui_qimage_qimage_width, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QImage_QImage, height, arginfo_qt_gui_qimage_qimage_height, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QImage_QImage, size, arginfo_qt_gui_qimage_qimage_size, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QImage_QImage, rect, arginfo_qt_gui_qimage_qimage_rect, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QImage_QImage, depth, arginfo_qt_gui_qimage_qimage_depth, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QImage_QImage, colorCount, arginfo_qt_gui_qimage_qimage_colorcount, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QImage_QImage, bitPlaneCount, arginfo_qt_gui_qimage_qimage_bitplanecount, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QImage_QImage, color, arginfo_qt_gui_qimage_qimage_color, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QImage_QImage, setColor, arginfo_qt_gui_qimage_qimage_setcolor, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QImage_QImage, setColorCount, arginfo_qt_gui_qimage_qimage_setcolorcount, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QImage_QImage, allGray, arginfo_qt_gui_qimage_qimage_allgray, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QImage_QImage, isGrayscale, arginfo_qt_gui_qimage_qimage_isgrayscale, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QImage_QImage, sizeInBytes, arginfo_qt_gui_qimage_qimage_sizeinbytes, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QImage_QImage, bytesPerLine, arginfo_qt_gui_qimage_qimage_bytesperline, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QImage_QImage, valid, arginfo_qt_gui_qimage_qimage_valid, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QImage_QImage, validQPoint, arginfo_qt_gui_qimage_qimage_validqpoint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QImage_QImage, pixelIndex, arginfo_qt_gui_qimage_qimage_pixelindex, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QImage_QImage, pixelIndexQPoint, arginfo_qt_gui_qimage_qimage_pixelindexqpoint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QImage_QImage, pixel, arginfo_qt_gui_qimage_qimage_pixel, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QImage_QImage, pixelQPoint, arginfo_qt_gui_qimage_qimage_pixelqpoint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QImage_QImage, setPixel, arginfo_qt_gui_qimage_qimage_setpixel, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QImage_QImage, setPixelQPointUint, arginfo_qt_gui_qimage_qimage_setpixelqpointuint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QImage_QImage, pixelColor, arginfo_qt_gui_qimage_qimage_pixelcolor, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QImage_QImage, pixelColorQPoint, arginfo_qt_gui_qimage_qimage_pixelcolorqpoint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QImage_QImage, setPixelColor, arginfo_qt_gui_qimage_qimage_setpixelcolor, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QImage_QImage, setPixelColorQPointQColor, arginfo_qt_gui_qimage_qimage_setpixelcolorqpointqcolor, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QImage_QImage, colorTable, arginfo_qt_gui_qimage_qimage_colortable, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QImage_QImage, setColorTable, arginfo_qt_gui_qimage_qimage_setcolortable, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QImage_QImage, devicePixelRatio, arginfo_qt_gui_qimage_qimage_devicepixelratio, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QImage_QImage, setDevicePixelRatio, arginfo_qt_gui_qimage_qimage_setdevicepixelratio, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QImage_QImage, deviceIndependentSize, arginfo_qt_gui_qimage_qimage_deviceindependentsize, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QImage_QImage, fill, arginfo_qt_gui_qimage_qimage_fill, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QImage_QImage, fillQColor, arginfo_qt_gui_qimage_qimage_fillqcolor, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QImage_QImage, fillQtGlobalColor, arginfo_qt_gui_qimage_qimage_fillqtglobalcolor, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QImage_QImage, hasAlphaChannel, arginfo_qt_gui_qimage_qimage_hasalphachannel, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QImage_QImage, setAlphaChannel, arginfo_qt_gui_qimage_qimage_setalphachannel, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QImage_QImage, createAlphaMask, arginfo_qt_gui_qimage_qimage_createalphamask, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QImage_QImage, createHeuristicMask, arginfo_qt_gui_qimage_qimage_createheuristicmask, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QImage_QImage, createMaskFromColor, arginfo_qt_gui_qimage_qimage_createmaskfromcolor, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QImage_QImage, scaled, arginfo_qt_gui_qimage_qimage_scaled, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QImage_QImage, scaledQSizeQtAspectRatioModeQtTransformationMode, arginfo_qt_gui_qimage_qimage_scaledqsizeqtaspectratiomodeqttransformationmode, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QImage_QImage, scaledToWidth, arginfo_qt_gui_qimage_qimage_scaledtowidth, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QImage_QImage, scaledToHeight, arginfo_qt_gui_qimage_qimage_scaledtoheight, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QImage_QImage, transformed, arginfo_qt_gui_qimage_qimage_transformed, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QImage_QImage, trueMatrix, arginfo_qt_gui_qimage_qimage_truematrix, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QImage_QImage, mirrored, arginfo_qt_gui_qimage_qimage_mirrored, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QImage_QImage, rgbSwapped, arginfo_qt_gui_qimage_qimage_rgbswapped, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QImage_QImage, mirror, arginfo_qt_gui_qimage_qimage_mirror, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QImage_QImage, rgbSwap, arginfo_qt_gui_qimage_qimage_rgbswap, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QImage_QImage, invertPixels, arginfo_qt_gui_qimage_qimage_invertpixels, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QImage_QImage, colorSpace, arginfo_qt_gui_qimage_qimage_colorspace, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QImage_QImage, convertedToColorSpace, arginfo_qt_gui_qimage_qimage_convertedtocolorspace, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QImage_QImage, convertedToColorSpaceQColorSpaceQImageFormatQtImageConversionFlags, arginfo_qt_gui_qimage_qimage_convertedtocolorspaceqcolorspaceqimageformatqtimageconversionflags, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QImage_QImage, convertToColorSpace, arginfo_qt_gui_qimage_qimage_converttocolorspace, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QImage_QImage, convertToColorSpaceQColorSpaceQImageFormatQtImageConversionFlags, arginfo_qt_gui_qimage_qimage_converttocolorspaceqcolorspaceqimageformatqtimageconversionflags, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QImage_QImage, setColorSpace, arginfo_qt_gui_qimage_qimage_setcolorspace, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QImage_QImage, colorTransformed, arginfo_qt_gui_qimage_qimage_colortransformed, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QImage_QImage, colorTransformedQColorTransformQImageFormatQtImageConversionFlags, arginfo_qt_gui_qimage_qimage_colortransformedqcolortransformqimageformatqtimageconversionflags, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QImage_QImage, applyColorTransform, arginfo_qt_gui_qimage_qimage_applycolortransform, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QImage_QImage, applyColorTransformQColorTransformQImageFormatQtImageConversionFlags, arginfo_qt_gui_qimage_qimage_applycolortransformqcolortransformqimageformatqtimageconversionflags, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QImage_QImage, load, arginfo_qt_gui_qimage_qimage_load, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QImage_QImage, loadQStringChar, arginfo_qt_gui_qimage_qimage_loadqstringchar, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QImage_QImage, loadFromData, arginfo_qt_gui_qimage_qimage_loadfromdata, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QImage_QImage, loadFromDataUcharIntChar, arginfo_qt_gui_qimage_qimage_loadfromdataucharintchar, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QImage_QImage, loadFromDataQByteArrayChar, arginfo_qt_gui_qimage_qimage_loadfromdataqbytearraychar, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QImage_QImage, save, arginfo_qt_gui_qimage_qimage_save, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QImage_QImage, saveQIODeviceCharInt, arginfo_qt_gui_qimage_qimage_saveqiodevicecharint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QImage_QImage, fromData, arginfo_qt_gui_qimage_qimage_fromdata, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QImage_QImage, fromDataUcharIntChar, arginfo_qt_gui_qimage_qimage_fromdataucharintchar, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QImage_QImage, fromDataQByteArrayChar, arginfo_qt_gui_qimage_qimage_fromdataqbytearraychar, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QImage_QImage, cacheKey, arginfo_qt_gui_qimage_qimage_cachekey, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QImage_QImage, paintEngine, arginfo_qt_gui_qimage_qimage_paintengine, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QImage_QImage, dotsPerMeterX, arginfo_qt_gui_qimage_qimage_dotspermeterx, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QImage_QImage, dotsPerMeterY, arginfo_qt_gui_qimage_qimage_dotspermetery, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QImage_QImage, setDotsPerMeterX, arginfo_qt_gui_qimage_qimage_setdotspermeterx, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QImage_QImage, setDotsPerMeterY, arginfo_qt_gui_qimage_qimage_setdotspermetery, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QImage_QImage, offset, arginfo_qt_gui_qimage_qimage_offset, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QImage_QImage, setOffset, arginfo_qt_gui_qimage_qimage_setoffset, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QImage_QImage, textKeys, arginfo_qt_gui_qimage_qimage_textkeys, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QImage_QImage, text, arginfo_qt_gui_qimage_qimage_text, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QImage_QImage, setText, arginfo_qt_gui_qimage_qimage_settext, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QImage_QImage, pixelFormat, arginfo_qt_gui_qimage_qimage_pixelformat, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QImage_QImage, toPixelFormat, arginfo_qt_gui_qimage_qimage_topixelformat, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QImage_QImage, toImageFormat, arginfo_qt_gui_qimage_qimage_toimageformat, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QImage_QImage, metric, arginfo_qt_gui_qimage_qimage_metric, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QImage_QImage, mirrored_helper, arginfo_qt_gui_qimage_qimage_mirrored_helper, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QImage_QImage, rgbSwapped_helper, arginfo_qt_gui_qimage_qimage_rgbswapped_helper, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QImage_QImage, mirrored_inplace, arginfo_qt_gui_qimage_qimage_mirrored_inplace, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QImage_QImage, rgbSwapped_inplace, arginfo_qt_gui_qimage_qimage_rgbswapped_inplace, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QImage_QImage, convertToFormat_helper, arginfo_qt_gui_qimage_qimage_converttoformat_helper, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QImage_QImage, convertToFormat_inplace, arginfo_qt_gui_qimage_qimage_converttoformat_inplace, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QImage_QImage, smoothScaled, arginfo_qt_gui_qimage_qimage_smoothscaled, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QImage_QImage, detachMetadata, arginfo_qt_gui_qimage_qimage_detachmetadata, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
