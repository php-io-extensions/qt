
extern zend_class_entry *qt_gui_qpaintdevice_qpaintdevice_ce;

ZEPHIR_INIT_CLASS(Qt_Gui_QPaintDevice_QPaintDevice);

PHP_METHOD(Qt_Gui_QPaintDevice_QPaintDevice, devType);
PHP_METHOD(Qt_Gui_QPaintDevice_QPaintDevice, paintingActive);
PHP_METHOD(Qt_Gui_QPaintDevice_QPaintDevice, paintEngine);
PHP_METHOD(Qt_Gui_QPaintDevice_QPaintDevice, width);
PHP_METHOD(Qt_Gui_QPaintDevice_QPaintDevice, height);
PHP_METHOD(Qt_Gui_QPaintDevice_QPaintDevice, widthMM);
PHP_METHOD(Qt_Gui_QPaintDevice_QPaintDevice, heightMM);
PHP_METHOD(Qt_Gui_QPaintDevice_QPaintDevice, logicalDpiX);
PHP_METHOD(Qt_Gui_QPaintDevice_QPaintDevice, logicalDpiY);
PHP_METHOD(Qt_Gui_QPaintDevice_QPaintDevice, physicalDpiX);
PHP_METHOD(Qt_Gui_QPaintDevice_QPaintDevice, physicalDpiY);
PHP_METHOD(Qt_Gui_QPaintDevice_QPaintDevice, devicePixelRatio);
PHP_METHOD(Qt_Gui_QPaintDevice_QPaintDevice, devicePixelRatioF);
PHP_METHOD(Qt_Gui_QPaintDevice_QPaintDevice, colorCount);
PHP_METHOD(Qt_Gui_QPaintDevice_QPaintDevice, depth);
PHP_METHOD(Qt_Gui_QPaintDevice_QPaintDevice, devicePixelRatioFScale);
PHP_METHOD(Qt_Gui_QPaintDevice_QPaintDevice, encodeMetricF);
PHP_METHOD(Qt_Gui_QPaintDevice_QPaintDevice, new_);
PHP_METHOD(Qt_Gui_QPaintDevice_QPaintDevice, metric);
PHP_METHOD(Qt_Gui_QPaintDevice_QPaintDevice, initPainter);
PHP_METHOD(Qt_Gui_QPaintDevice_QPaintDevice, redirected);
PHP_METHOD(Qt_Gui_QPaintDevice_QPaintDevice, sharedPainter);
PHP_METHOD(Qt_Gui_QPaintDevice_QPaintDevice, getDecodedMetricF);
PHP_METHOD(Qt_Gui_QPaintDevice_QPaintDevice, painters);
PHP_METHOD(Qt_Gui_QPaintDevice_QPaintDevice, setPainters);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpaintdevice_qpaintdevice_devtype, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpaintdevice_qpaintdevice_paintingactive, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpaintdevice_qpaintdevice_paintengine, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpaintdevice_qpaintdevice_width, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpaintdevice_qpaintdevice_height, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpaintdevice_qpaintdevice_widthmm, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpaintdevice_qpaintdevice_heightmm, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpaintdevice_qpaintdevice_logicaldpix, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpaintdevice_qpaintdevice_logicaldpiy, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpaintdevice_qpaintdevice_physicaldpix, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpaintdevice_qpaintdevice_physicaldpiy, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpaintdevice_qpaintdevice_devicepixelratio, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpaintdevice_qpaintdevice_devicepixelratiof, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpaintdevice_qpaintdevice_colorcount, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpaintdevice_qpaintdevice_depth, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpaintdevice_qpaintdevice_devicepixelratiofscale, 0, 0, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpaintdevice_qpaintdevice_encodemetricf, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, metric, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpaintdevice_qpaintdevice_new_, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpaintdevice_qpaintdevice_metric, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, metric, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpaintdevice_qpaintdevice_initpainter, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, painter, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpaintdevice_qpaintdevice_redirected, 0, 2, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_INFO(0, offset)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpaintdevice_qpaintdevice_sharedpainter, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpaintdevice_qpaintdevice_getdecodedmetricf, 0, 3, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, metricA, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, metricB, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpaintdevice_qpaintdevice_painters, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpaintdevice_qpaintdevice_setpainters, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_gui_qpaintdevice_qpaintdevice_method_entry) {
	PHP_ME(Qt_Gui_QPaintDevice_QPaintDevice, devType, arginfo_qt_gui_qpaintdevice_qpaintdevice_devtype, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPaintDevice_QPaintDevice, paintingActive, arginfo_qt_gui_qpaintdevice_qpaintdevice_paintingactive, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPaintDevice_QPaintDevice, paintEngine, arginfo_qt_gui_qpaintdevice_qpaintdevice_paintengine, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPaintDevice_QPaintDevice, width, arginfo_qt_gui_qpaintdevice_qpaintdevice_width, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPaintDevice_QPaintDevice, height, arginfo_qt_gui_qpaintdevice_qpaintdevice_height, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPaintDevice_QPaintDevice, widthMM, arginfo_qt_gui_qpaintdevice_qpaintdevice_widthmm, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPaintDevice_QPaintDevice, heightMM, arginfo_qt_gui_qpaintdevice_qpaintdevice_heightmm, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPaintDevice_QPaintDevice, logicalDpiX, arginfo_qt_gui_qpaintdevice_qpaintdevice_logicaldpix, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPaintDevice_QPaintDevice, logicalDpiY, arginfo_qt_gui_qpaintdevice_qpaintdevice_logicaldpiy, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPaintDevice_QPaintDevice, physicalDpiX, arginfo_qt_gui_qpaintdevice_qpaintdevice_physicaldpix, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPaintDevice_QPaintDevice, physicalDpiY, arginfo_qt_gui_qpaintdevice_qpaintdevice_physicaldpiy, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPaintDevice_QPaintDevice, devicePixelRatio, arginfo_qt_gui_qpaintdevice_qpaintdevice_devicepixelratio, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPaintDevice_QPaintDevice, devicePixelRatioF, arginfo_qt_gui_qpaintdevice_qpaintdevice_devicepixelratiof, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPaintDevice_QPaintDevice, colorCount, arginfo_qt_gui_qpaintdevice_qpaintdevice_colorcount, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPaintDevice_QPaintDevice, depth, arginfo_qt_gui_qpaintdevice_qpaintdevice_depth, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPaintDevice_QPaintDevice, devicePixelRatioFScale, arginfo_qt_gui_qpaintdevice_qpaintdevice_devicepixelratiofscale, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPaintDevice_QPaintDevice, encodeMetricF, arginfo_qt_gui_qpaintdevice_qpaintdevice_encodemetricf, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPaintDevice_QPaintDevice, new_, arginfo_qt_gui_qpaintdevice_qpaintdevice_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPaintDevice_QPaintDevice, metric, arginfo_qt_gui_qpaintdevice_qpaintdevice_metric, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPaintDevice_QPaintDevice, initPainter, arginfo_qt_gui_qpaintdevice_qpaintdevice_initpainter, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPaintDevice_QPaintDevice, redirected, arginfo_qt_gui_qpaintdevice_qpaintdevice_redirected, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPaintDevice_QPaintDevice, sharedPainter, arginfo_qt_gui_qpaintdevice_qpaintdevice_sharedpainter, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPaintDevice_QPaintDevice, getDecodedMetricF, arginfo_qt_gui_qpaintdevice_qpaintdevice_getdecodedmetricf, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPaintDevice_QPaintDevice, painters, arginfo_qt_gui_qpaintdevice_qpaintdevice_painters, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPaintDevice_QPaintDevice, setPainters, arginfo_qt_gui_qpaintdevice_qpaintdevice_setpainters, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
