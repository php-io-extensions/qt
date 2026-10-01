
extern zend_class_entry *qt_gui_qscreen_qscreen_ce;

ZEPHIR_INIT_CLASS(Qt_Gui_QScreen_QScreen);

PHP_METHOD(Qt_Gui_QScreen_QScreen, staticMetaObject);
PHP_METHOD(Qt_Gui_QScreen_QScreen, tr);
PHP_METHOD(Qt_Gui_QScreen_QScreen, name);
PHP_METHOD(Qt_Gui_QScreen_QScreen, manufacturer);
PHP_METHOD(Qt_Gui_QScreen_QScreen, model);
PHP_METHOD(Qt_Gui_QScreen_QScreen, serialNumber);
PHP_METHOD(Qt_Gui_QScreen_QScreen, depth);
PHP_METHOD(Qt_Gui_QScreen_QScreen, size);
PHP_METHOD(Qt_Gui_QScreen_QScreen, geometry);
PHP_METHOD(Qt_Gui_QScreen_QScreen, physicalSize);
PHP_METHOD(Qt_Gui_QScreen_QScreen, physicalDotsPerInchX);
PHP_METHOD(Qt_Gui_QScreen_QScreen, physicalDotsPerInchY);
PHP_METHOD(Qt_Gui_QScreen_QScreen, physicalDotsPerInch);
PHP_METHOD(Qt_Gui_QScreen_QScreen, logicalDotsPerInchX);
PHP_METHOD(Qt_Gui_QScreen_QScreen, logicalDotsPerInchY);
PHP_METHOD(Qt_Gui_QScreen_QScreen, logicalDotsPerInch);
PHP_METHOD(Qt_Gui_QScreen_QScreen, devicePixelRatio);
PHP_METHOD(Qt_Gui_QScreen_QScreen, availableSize);
PHP_METHOD(Qt_Gui_QScreen_QScreen, availableGeometry);
PHP_METHOD(Qt_Gui_QScreen_QScreen, virtualSiblings);
PHP_METHOD(Qt_Gui_QScreen_QScreen, virtualSiblingAt);
PHP_METHOD(Qt_Gui_QScreen_QScreen, virtualSize);
PHP_METHOD(Qt_Gui_QScreen_QScreen, virtualGeometry);
PHP_METHOD(Qt_Gui_QScreen_QScreen, availableVirtualSize);
PHP_METHOD(Qt_Gui_QScreen_QScreen, availableVirtualGeometry);
PHP_METHOD(Qt_Gui_QScreen_QScreen, primaryOrientation);
PHP_METHOD(Qt_Gui_QScreen_QScreen, orientation);
PHP_METHOD(Qt_Gui_QScreen_QScreen, nativeOrientation);
PHP_METHOD(Qt_Gui_QScreen_QScreen, angleBetween);
PHP_METHOD(Qt_Gui_QScreen_QScreen, transformBetween);
PHP_METHOD(Qt_Gui_QScreen_QScreen, mapBetween);
PHP_METHOD(Qt_Gui_QScreen_QScreen, isPortrait);
PHP_METHOD(Qt_Gui_QScreen_QScreen, isLandscape);
PHP_METHOD(Qt_Gui_QScreen_QScreen, grabWindow);
PHP_METHOD(Qt_Gui_QScreen_QScreen, refreshRate);
PHP_METHOD(Qt_Gui_QScreen_QScreen, geometryChanged);
PHP_METHOD(Qt_Gui_QScreen_QScreen, availableGeometryChanged);
PHP_METHOD(Qt_Gui_QScreen_QScreen, physicalSizeChanged);
PHP_METHOD(Qt_Gui_QScreen_QScreen, physicalDotsPerInchChanged);
PHP_METHOD(Qt_Gui_QScreen_QScreen, logicalDotsPerInchChanged);
PHP_METHOD(Qt_Gui_QScreen_QScreen, virtualGeometryChanged);
PHP_METHOD(Qt_Gui_QScreen_QScreen, primaryOrientationChanged);
PHP_METHOD(Qt_Gui_QScreen_QScreen, orientationChanged);
PHP_METHOD(Qt_Gui_QScreen_QScreen, refreshRateChanged);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qscreen_qscreen_staticmetaobject, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qscreen_qscreen_tr, 0, 1, IS_STRING, 0)
	ZEND_ARG_INFO(0, s)
	ZEND_ARG_INFO(0, c)
	ZEND_ARG_TYPE_INFO(0, n, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qscreen_qscreen_name, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qscreen_qscreen_manufacturer, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qscreen_qscreen_model, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qscreen_qscreen_serialnumber, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qscreen_qscreen_depth, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qscreen_qscreen_size, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qscreen_qscreen_geometry, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qscreen_qscreen_physicalsize, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qscreen_qscreen_physicaldotsperinchx, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qscreen_qscreen_physicaldotsperinchy, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qscreen_qscreen_physicaldotsperinch, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qscreen_qscreen_logicaldotsperinchx, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qscreen_qscreen_logicaldotsperinchy, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qscreen_qscreen_logicaldotsperinch, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qscreen_qscreen_devicepixelratio, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qscreen_qscreen_availablesize, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qscreen_qscreen_availablegeometry, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qscreen_qscreen_virtualsiblings, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qscreen_qscreen_virtualsiblingat, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, pointX, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, pointY, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qscreen_qscreen_virtualsize, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qscreen_qscreen_virtualgeometry, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qscreen_qscreen_availablevirtualsize, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qscreen_qscreen_availablevirtualgeometry, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qscreen_qscreen_primaryorientation, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qscreen_qscreen_orientation, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qscreen_qscreen_nativeorientation, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qscreen_qscreen_anglebetween, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, a, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, b, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qscreen_qscreen_transformbetween, 0, 7, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, a, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, b, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, targetX, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, targetY, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, targetWidth, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, targetHeight, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qscreen_qscreen_mapbetween, 0, 7, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, a, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, b, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rectX, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rectY, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rectWidth, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rectHeight, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qscreen_qscreen_isportrait, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, orientation, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qscreen_qscreen_islandscape, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, orientation, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qscreen_qscreen_grabwindow, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, window, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, w, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, h, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qscreen_qscreen_refreshrate, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qscreen_qscreen_geometrychanged, 0, 5, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, geometryX, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, geometryY, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, geometryWidth, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, geometryHeight, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qscreen_qscreen_availablegeometrychanged, 0, 5, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, geometryX, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, geometryY, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, geometryWidth, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, geometryHeight, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qscreen_qscreen_physicalsizechanged, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sizeWidth, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, sizeHeight, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qscreen_qscreen_physicaldotsperinchchanged, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, dpi, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qscreen_qscreen_logicaldotsperinchchanged, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, dpi, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qscreen_qscreen_virtualgeometrychanged, 0, 5, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rectX, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rectY, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rectWidth, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rectHeight, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qscreen_qscreen_primaryorientationchanged, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, orientation, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qscreen_qscreen_orientationchanged, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, orientation, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qscreen_qscreen_refreshratechanged, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, refreshRate, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_gui_qscreen_qscreen_method_entry) {
	PHP_ME(Qt_Gui_QScreen_QScreen, staticMetaObject, arginfo_qt_gui_qscreen_qscreen_staticmetaobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QScreen_QScreen, tr, arginfo_qt_gui_qscreen_qscreen_tr, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QScreen_QScreen, name, arginfo_qt_gui_qscreen_qscreen_name, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QScreen_QScreen, manufacturer, arginfo_qt_gui_qscreen_qscreen_manufacturer, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QScreen_QScreen, model, arginfo_qt_gui_qscreen_qscreen_model, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QScreen_QScreen, serialNumber, arginfo_qt_gui_qscreen_qscreen_serialnumber, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QScreen_QScreen, depth, arginfo_qt_gui_qscreen_qscreen_depth, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QScreen_QScreen, size, arginfo_qt_gui_qscreen_qscreen_size, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QScreen_QScreen, geometry, arginfo_qt_gui_qscreen_qscreen_geometry, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QScreen_QScreen, physicalSize, arginfo_qt_gui_qscreen_qscreen_physicalsize, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QScreen_QScreen, physicalDotsPerInchX, arginfo_qt_gui_qscreen_qscreen_physicaldotsperinchx, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QScreen_QScreen, physicalDotsPerInchY, arginfo_qt_gui_qscreen_qscreen_physicaldotsperinchy, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QScreen_QScreen, physicalDotsPerInch, arginfo_qt_gui_qscreen_qscreen_physicaldotsperinch, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QScreen_QScreen, logicalDotsPerInchX, arginfo_qt_gui_qscreen_qscreen_logicaldotsperinchx, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QScreen_QScreen, logicalDotsPerInchY, arginfo_qt_gui_qscreen_qscreen_logicaldotsperinchy, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QScreen_QScreen, logicalDotsPerInch, arginfo_qt_gui_qscreen_qscreen_logicaldotsperinch, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QScreen_QScreen, devicePixelRatio, arginfo_qt_gui_qscreen_qscreen_devicepixelratio, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QScreen_QScreen, availableSize, arginfo_qt_gui_qscreen_qscreen_availablesize, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QScreen_QScreen, availableGeometry, arginfo_qt_gui_qscreen_qscreen_availablegeometry, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QScreen_QScreen, virtualSiblings, arginfo_qt_gui_qscreen_qscreen_virtualsiblings, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QScreen_QScreen, virtualSiblingAt, arginfo_qt_gui_qscreen_qscreen_virtualsiblingat, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QScreen_QScreen, virtualSize, arginfo_qt_gui_qscreen_qscreen_virtualsize, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QScreen_QScreen, virtualGeometry, arginfo_qt_gui_qscreen_qscreen_virtualgeometry, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QScreen_QScreen, availableVirtualSize, arginfo_qt_gui_qscreen_qscreen_availablevirtualsize, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QScreen_QScreen, availableVirtualGeometry, arginfo_qt_gui_qscreen_qscreen_availablevirtualgeometry, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QScreen_QScreen, primaryOrientation, arginfo_qt_gui_qscreen_qscreen_primaryorientation, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QScreen_QScreen, orientation, arginfo_qt_gui_qscreen_qscreen_orientation, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QScreen_QScreen, nativeOrientation, arginfo_qt_gui_qscreen_qscreen_nativeorientation, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QScreen_QScreen, angleBetween, arginfo_qt_gui_qscreen_qscreen_anglebetween, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QScreen_QScreen, transformBetween, arginfo_qt_gui_qscreen_qscreen_transformbetween, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QScreen_QScreen, mapBetween, arginfo_qt_gui_qscreen_qscreen_mapbetween, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QScreen_QScreen, isPortrait, arginfo_qt_gui_qscreen_qscreen_isportrait, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QScreen_QScreen, isLandscape, arginfo_qt_gui_qscreen_qscreen_islandscape, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QScreen_QScreen, grabWindow, arginfo_qt_gui_qscreen_qscreen_grabwindow, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QScreen_QScreen, refreshRate, arginfo_qt_gui_qscreen_qscreen_refreshrate, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QScreen_QScreen, geometryChanged, arginfo_qt_gui_qscreen_qscreen_geometrychanged, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QScreen_QScreen, availableGeometryChanged, arginfo_qt_gui_qscreen_qscreen_availablegeometrychanged, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QScreen_QScreen, physicalSizeChanged, arginfo_qt_gui_qscreen_qscreen_physicalsizechanged, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QScreen_QScreen, physicalDotsPerInchChanged, arginfo_qt_gui_qscreen_qscreen_physicaldotsperinchchanged, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QScreen_QScreen, logicalDotsPerInchChanged, arginfo_qt_gui_qscreen_qscreen_logicaldotsperinchchanged, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QScreen_QScreen, virtualGeometryChanged, arginfo_qt_gui_qscreen_qscreen_virtualgeometrychanged, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QScreen_QScreen, primaryOrientationChanged, arginfo_qt_gui_qscreen_qscreen_primaryorientationchanged, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QScreen_QScreen, orientationChanged, arginfo_qt_gui_qscreen_qscreen_orientationchanged, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QScreen_QScreen, refreshRateChanged, arginfo_qt_gui_qscreen_qscreen_refreshratechanged, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
