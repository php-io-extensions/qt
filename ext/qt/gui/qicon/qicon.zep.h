
extern zend_class_entry *qt_gui_qicon_qicon_ce;

ZEPHIR_INIT_CLASS(Qt_Gui_QIcon_QIcon);

PHP_METHOD(Qt_Gui_QIcon_QIcon, new_);
PHP_METHOD(Qt_Gui_QIcon_QIcon, newQPixmap);
PHP_METHOD(Qt_Gui_QIcon_QIcon, newQIcon);
PHP_METHOD(Qt_Gui_QIcon_QIcon, newQString);
PHP_METHOD(Qt_Gui_QIcon_QIcon, newQIconEngine);
PHP_METHOD(Qt_Gui_QIcon_QIcon, swap);
PHP_METHOD(Qt_Gui_QIcon_QIcon, pixmap);
PHP_METHOD(Qt_Gui_QIcon_QIcon, pixmapIntIntQIconModeQIconState);
PHP_METHOD(Qt_Gui_QIcon_QIcon, pixmapIntQIconModeQIconState);
PHP_METHOD(Qt_Gui_QIcon_QIcon, pixmapQSizeQrealQIconModeQIconState);
PHP_METHOD(Qt_Gui_QIcon_QIcon, actualSize);
PHP_METHOD(Qt_Gui_QIcon_QIcon, name);
PHP_METHOD(Qt_Gui_QIcon_QIcon, paint);
PHP_METHOD(Qt_Gui_QIcon_QIcon, paintQPainterIntIntIntIntQtAlignmentQIconModeQIconState);
PHP_METHOD(Qt_Gui_QIcon_QIcon, isNull);
PHP_METHOD(Qt_Gui_QIcon_QIcon, isDetached);
PHP_METHOD(Qt_Gui_QIcon_QIcon, detach);
PHP_METHOD(Qt_Gui_QIcon_QIcon, cacheKey);
PHP_METHOD(Qt_Gui_QIcon_QIcon, addPixmap);
PHP_METHOD(Qt_Gui_QIcon_QIcon, addFile);
PHP_METHOD(Qt_Gui_QIcon_QIcon, availableSizes);
PHP_METHOD(Qt_Gui_QIcon_QIcon, setIsMask);
PHP_METHOD(Qt_Gui_QIcon_QIcon, isMask);
PHP_METHOD(Qt_Gui_QIcon_QIcon, fromTheme);
PHP_METHOD(Qt_Gui_QIcon_QIcon, fromThemeQStringQIcon);
PHP_METHOD(Qt_Gui_QIcon_QIcon, hasThemeIcon);
PHP_METHOD(Qt_Gui_QIcon_QIcon, fromThemeQIconThemeIcon);
PHP_METHOD(Qt_Gui_QIcon_QIcon, fromThemeQIconThemeIconQIcon);
PHP_METHOD(Qt_Gui_QIcon_QIcon, hasThemeIconQIconThemeIcon);
PHP_METHOD(Qt_Gui_QIcon_QIcon, themeSearchPaths);
PHP_METHOD(Qt_Gui_QIcon_QIcon, setThemeSearchPaths);
PHP_METHOD(Qt_Gui_QIcon_QIcon, fallbackSearchPaths);
PHP_METHOD(Qt_Gui_QIcon_QIcon, setFallbackSearchPaths);
PHP_METHOD(Qt_Gui_QIcon_QIcon, themeName);
PHP_METHOD(Qt_Gui_QIcon_QIcon, setThemeName);
PHP_METHOD(Qt_Gui_QIcon_QIcon, fallbackThemeName);
PHP_METHOD(Qt_Gui_QIcon_QIcon, setFallbackThemeName);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qicon_qicon_new_, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qicon_qicon_newqpixmap, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, pixmap, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qicon_qicon_newqicon, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, other, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qicon_qicon_newqstring, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, fileName, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qicon_qicon_newqiconengine, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, engine, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qicon_qicon_swap, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, other, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qicon_qicon_pixmap, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sizeWidth, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sizeHeight, IS_LONG, 0)
	ZEND_ARG_INFO(0, mode)
	ZEND_ARG_INFO(0, state)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qicon_qicon_pixmapintintqiconmodeqiconstate, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, w, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, h, IS_LONG, 0)
	ZEND_ARG_INFO(0, mode)
	ZEND_ARG_INFO(0, state)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qicon_qicon_pixmapintqiconmodeqiconstate, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, extent, IS_LONG, 0)
	ZEND_ARG_INFO(0, mode)
	ZEND_ARG_INFO(0, state)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qicon_qicon_pixmapqsizeqrealqiconmodeqiconstate, 0, 4, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sizeWidth, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sizeHeight, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, devicePixelRatio, IS_DOUBLE, 0)
	ZEND_ARG_INFO(0, mode)
	ZEND_ARG_INFO(0, state)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qicon_qicon_actualsize, 0, 3, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sizeWidth, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sizeHeight, IS_LONG, 0)
	ZEND_ARG_INFO(0, mode)
	ZEND_ARG_INFO(0, state)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qicon_qicon_name, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qicon_qicon_paint, 0, 6, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, painter, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rectX, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rectY, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rectWidth, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rectHeight, IS_LONG, 0)
	ZEND_ARG_INFO(0, alignment)
	ZEND_ARG_INFO(0, mode)
	ZEND_ARG_INFO(0, state)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qicon_qicon_paintqpainterintintintintqtalignmentqiconmodeqiconstate, 0, 6, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, painter, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, w, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, h, IS_LONG, 0)
	ZEND_ARG_INFO(0, alignment)
	ZEND_ARG_INFO(0, mode)
	ZEND_ARG_INFO(0, state)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qicon_qicon_isnull, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qicon_qicon_isdetached, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qicon_qicon_detach, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qicon_qicon_cachekey, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qicon_qicon_addpixmap, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, pixmap, IS_LONG, 0)
	ZEND_ARG_INFO(0, mode)
	ZEND_ARG_INFO(0, state)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qicon_qicon_addfile, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, fileName, IS_STRING, 0)
	ZEND_ARG_INFO(0, sizeWidth)
	ZEND_ARG_INFO(0, sizeHeight)
	ZEND_ARG_INFO(0, mode)
	ZEND_ARG_INFO(0, state)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qicon_qicon_availablesizes, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_INFO(0, mode)
	ZEND_ARG_INFO(0, state)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qicon_qicon_setismask, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, isMask, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qicon_qicon_ismask, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qicon_qicon_fromtheme, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, name, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qicon_qicon_fromthemeqstringqicon, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, name, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, fallback, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qicon_qicon_hasthemeicon, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, name, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qicon_qicon_fromthemeqiconthemeicon, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, icon, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qicon_qicon_fromthemeqiconthemeiconqicon, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, icon, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, fallback, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qicon_qicon_hasthemeiconqiconthemeicon, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, icon, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qicon_qicon_themesearchpaths, 0, 0, IS_ARRAY, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qicon_qicon_setthemesearchpaths, 0, 1, IS_VOID, 0)

	ZEND_ARG_ARRAY_INFO(0, searchpath, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qicon_qicon_fallbacksearchpaths, 0, 0, IS_ARRAY, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qicon_qicon_setfallbacksearchpaths, 0, 1, IS_VOID, 0)

	ZEND_ARG_ARRAY_INFO(0, paths, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qicon_qicon_themename, 0, 0, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qicon_qicon_setthemename, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, path, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qicon_qicon_fallbackthemename, 0, 0, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qicon_qicon_setfallbackthemename, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, name, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_gui_qicon_qicon_method_entry) {
	PHP_ME(Qt_Gui_QIcon_QIcon, new_, arginfo_qt_gui_qicon_qicon_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QIcon_QIcon, newQPixmap, arginfo_qt_gui_qicon_qicon_newqpixmap, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QIcon_QIcon, newQIcon, arginfo_qt_gui_qicon_qicon_newqicon, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QIcon_QIcon, newQString, arginfo_qt_gui_qicon_qicon_newqstring, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QIcon_QIcon, newQIconEngine, arginfo_qt_gui_qicon_qicon_newqiconengine, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QIcon_QIcon, swap, arginfo_qt_gui_qicon_qicon_swap, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QIcon_QIcon, pixmap, arginfo_qt_gui_qicon_qicon_pixmap, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QIcon_QIcon, pixmapIntIntQIconModeQIconState, arginfo_qt_gui_qicon_qicon_pixmapintintqiconmodeqiconstate, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QIcon_QIcon, pixmapIntQIconModeQIconState, arginfo_qt_gui_qicon_qicon_pixmapintqiconmodeqiconstate, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QIcon_QIcon, pixmapQSizeQrealQIconModeQIconState, arginfo_qt_gui_qicon_qicon_pixmapqsizeqrealqiconmodeqiconstate, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QIcon_QIcon, actualSize, arginfo_qt_gui_qicon_qicon_actualsize, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QIcon_QIcon, name, arginfo_qt_gui_qicon_qicon_name, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QIcon_QIcon, paint, arginfo_qt_gui_qicon_qicon_paint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QIcon_QIcon, paintQPainterIntIntIntIntQtAlignmentQIconModeQIconState, arginfo_qt_gui_qicon_qicon_paintqpainterintintintintqtalignmentqiconmodeqiconstate, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QIcon_QIcon, isNull, arginfo_qt_gui_qicon_qicon_isnull, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QIcon_QIcon, isDetached, arginfo_qt_gui_qicon_qicon_isdetached, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QIcon_QIcon, detach, arginfo_qt_gui_qicon_qicon_detach, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QIcon_QIcon, cacheKey, arginfo_qt_gui_qicon_qicon_cachekey, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QIcon_QIcon, addPixmap, arginfo_qt_gui_qicon_qicon_addpixmap, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QIcon_QIcon, addFile, arginfo_qt_gui_qicon_qicon_addfile, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QIcon_QIcon, availableSizes, arginfo_qt_gui_qicon_qicon_availablesizes, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QIcon_QIcon, setIsMask, arginfo_qt_gui_qicon_qicon_setismask, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QIcon_QIcon, isMask, arginfo_qt_gui_qicon_qicon_ismask, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QIcon_QIcon, fromTheme, arginfo_qt_gui_qicon_qicon_fromtheme, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QIcon_QIcon, fromThemeQStringQIcon, arginfo_qt_gui_qicon_qicon_fromthemeqstringqicon, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QIcon_QIcon, hasThemeIcon, arginfo_qt_gui_qicon_qicon_hasthemeicon, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QIcon_QIcon, fromThemeQIconThemeIcon, arginfo_qt_gui_qicon_qicon_fromthemeqiconthemeicon, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QIcon_QIcon, fromThemeQIconThemeIconQIcon, arginfo_qt_gui_qicon_qicon_fromthemeqiconthemeiconqicon, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QIcon_QIcon, hasThemeIconQIconThemeIcon, arginfo_qt_gui_qicon_qicon_hasthemeiconqiconthemeicon, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QIcon_QIcon, themeSearchPaths, arginfo_qt_gui_qicon_qicon_themesearchpaths, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QIcon_QIcon, setThemeSearchPaths, arginfo_qt_gui_qicon_qicon_setthemesearchpaths, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QIcon_QIcon, fallbackSearchPaths, arginfo_qt_gui_qicon_qicon_fallbacksearchpaths, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QIcon_QIcon, setFallbackSearchPaths, arginfo_qt_gui_qicon_qicon_setfallbacksearchpaths, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QIcon_QIcon, themeName, arginfo_qt_gui_qicon_qicon_themename, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QIcon_QIcon, setThemeName, arginfo_qt_gui_qicon_qicon_setthemename, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QIcon_QIcon, fallbackThemeName, arginfo_qt_gui_qicon_qicon_fallbackthemename, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QIcon_QIcon, setFallbackThemeName, arginfo_qt_gui_qicon_qicon_setfallbackthemename, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
