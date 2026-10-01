
extern zend_class_entry *qt_gui_qfontdatabase_qfontdatabase_ce;

ZEPHIR_INIT_CLASS(Qt_Gui_QFontDatabase_QFontDatabase);

PHP_METHOD(Qt_Gui_QFontDatabase_QFontDatabase, staticMetaObject);
PHP_METHOD(Qt_Gui_QFontDatabase_QFontDatabase, qt_check_for_QGADGET_macro);
PHP_METHOD(Qt_Gui_QFontDatabase_QFontDatabase, standardSizes);
PHP_METHOD(Qt_Gui_QFontDatabase_QFontDatabase, new_);
PHP_METHOD(Qt_Gui_QFontDatabase_QFontDatabase, writingSystems);
PHP_METHOD(Qt_Gui_QFontDatabase_QFontDatabase, writingSystemsQString);
PHP_METHOD(Qt_Gui_QFontDatabase_QFontDatabase, families);
PHP_METHOD(Qt_Gui_QFontDatabase_QFontDatabase, styles);
PHP_METHOD(Qt_Gui_QFontDatabase_QFontDatabase, pointSizes);
PHP_METHOD(Qt_Gui_QFontDatabase_QFontDatabase, smoothSizes);
PHP_METHOD(Qt_Gui_QFontDatabase_QFontDatabase, styleString);
PHP_METHOD(Qt_Gui_QFontDatabase_QFontDatabase, styleStringQFontInfo);
PHP_METHOD(Qt_Gui_QFontDatabase_QFontDatabase, font);
PHP_METHOD(Qt_Gui_QFontDatabase_QFontDatabase, isBitmapScalable);
PHP_METHOD(Qt_Gui_QFontDatabase_QFontDatabase, isSmoothlyScalable);
PHP_METHOD(Qt_Gui_QFontDatabase_QFontDatabase, isScalable);
PHP_METHOD(Qt_Gui_QFontDatabase_QFontDatabase, isFixedPitch);
PHP_METHOD(Qt_Gui_QFontDatabase_QFontDatabase, italic);
PHP_METHOD(Qt_Gui_QFontDatabase_QFontDatabase, bold);
PHP_METHOD(Qt_Gui_QFontDatabase_QFontDatabase, weight);
PHP_METHOD(Qt_Gui_QFontDatabase_QFontDatabase, hasFamily);
PHP_METHOD(Qt_Gui_QFontDatabase_QFontDatabase, isPrivateFamily);
PHP_METHOD(Qt_Gui_QFontDatabase_QFontDatabase, writingSystemName);
PHP_METHOD(Qt_Gui_QFontDatabase_QFontDatabase, writingSystemSample);
PHP_METHOD(Qt_Gui_QFontDatabase_QFontDatabase, addApplicationFont);
PHP_METHOD(Qt_Gui_QFontDatabase_QFontDatabase, addApplicationFontFromData);
PHP_METHOD(Qt_Gui_QFontDatabase_QFontDatabase, applicationFontFamilies);
PHP_METHOD(Qt_Gui_QFontDatabase_QFontDatabase, removeApplicationFont);
PHP_METHOD(Qt_Gui_QFontDatabase_QFontDatabase, removeAllApplicationFonts);
PHP_METHOD(Qt_Gui_QFontDatabase_QFontDatabase, addApplicationFallbackFontFamily);
PHP_METHOD(Qt_Gui_QFontDatabase_QFontDatabase, removeApplicationFallbackFontFamily);
PHP_METHOD(Qt_Gui_QFontDatabase_QFontDatabase, setApplicationFallbackFontFamilies);
PHP_METHOD(Qt_Gui_QFontDatabase_QFontDatabase, applicationFallbackFontFamilies);
PHP_METHOD(Qt_Gui_QFontDatabase_QFontDatabase, systemFont);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qfontdatabase_qfontdatabase_staticmetaobject, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qfontdatabase_qfontdatabase_qt_check_for_qgadget_macro, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qfontdatabase_qfontdatabase_standardsizes, 0, 0, IS_ARRAY, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qfontdatabase_qfontdatabase_new_, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qfontdatabase_qfontdatabase_writingsystems, 0, 0, IS_ARRAY, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qfontdatabase_qfontdatabase_writingsystemsqstring, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, family, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qfontdatabase_qfontdatabase_families, 0, 0, IS_ARRAY, 0)
	ZEND_ARG_INFO(0, writingSystem)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qfontdatabase_qfontdatabase_styles, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, family, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qfontdatabase_qfontdatabase_pointsizes, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, family, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, style, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qfontdatabase_qfontdatabase_smoothsizes, 0, 2, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, family, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, style, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qfontdatabase_qfontdatabase_stylestring, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, font, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qfontdatabase_qfontdatabase_stylestringqfontinfo, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, fontInfo, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qfontdatabase_qfontdatabase_font, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, family, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, style, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, pointSize, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qfontdatabase_qfontdatabase_isbitmapscalable, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, family, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, style, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qfontdatabase_qfontdatabase_issmoothlyscalable, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, family, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, style, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qfontdatabase_qfontdatabase_isscalable, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, family, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, style, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qfontdatabase_qfontdatabase_isfixedpitch, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, family, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, style, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qfontdatabase_qfontdatabase_italic, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, family, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, style, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qfontdatabase_qfontdatabase_bold, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, family, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, style, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qfontdatabase_qfontdatabase_weight, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, family, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, style, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qfontdatabase_qfontdatabase_hasfamily, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, family, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qfontdatabase_qfontdatabase_isprivatefamily, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, family, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qfontdatabase_qfontdatabase_writingsystemname, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, writingSystem, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qfontdatabase_qfontdatabase_writingsystemsample, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, writingSystem, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qfontdatabase_qfontdatabase_addapplicationfont, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, fileName, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qfontdatabase_qfontdatabase_addapplicationfontfromdata, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, fontData, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qfontdatabase_qfontdatabase_applicationfontfamilies, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, id, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qfontdatabase_qfontdatabase_removeapplicationfont, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, id, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qfontdatabase_qfontdatabase_removeallapplicationfonts, 0, 0, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qfontdatabase_qfontdatabase_addapplicationfallbackfontfamily, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, script, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, familyName, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qfontdatabase_qfontdatabase_removeapplicationfallbackfontfamily, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, script, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, familyName, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qfontdatabase_qfontdatabase_setapplicationfallbackfontfamilies, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
	ZEND_ARG_ARRAY_INFO(0, familyNames, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qfontdatabase_qfontdatabase_applicationfallbackfontfamilies, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, script, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qfontdatabase_qfontdatabase_systemfont, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, type, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_gui_qfontdatabase_qfontdatabase_method_entry) {
	PHP_ME(Qt_Gui_QFontDatabase_QFontDatabase, staticMetaObject, arginfo_qt_gui_qfontdatabase_qfontdatabase_staticmetaobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QFontDatabase_QFontDatabase, qt_check_for_QGADGET_macro, arginfo_qt_gui_qfontdatabase_qfontdatabase_qt_check_for_qgadget_macro, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QFontDatabase_QFontDatabase, standardSizes, arginfo_qt_gui_qfontdatabase_qfontdatabase_standardsizes, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QFontDatabase_QFontDatabase, new_, arginfo_qt_gui_qfontdatabase_qfontdatabase_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QFontDatabase_QFontDatabase, writingSystems, arginfo_qt_gui_qfontdatabase_qfontdatabase_writingsystems, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QFontDatabase_QFontDatabase, writingSystemsQString, arginfo_qt_gui_qfontdatabase_qfontdatabase_writingsystemsqstring, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QFontDatabase_QFontDatabase, families, arginfo_qt_gui_qfontdatabase_qfontdatabase_families, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QFontDatabase_QFontDatabase, styles, arginfo_qt_gui_qfontdatabase_qfontdatabase_styles, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QFontDatabase_QFontDatabase, pointSizes, arginfo_qt_gui_qfontdatabase_qfontdatabase_pointsizes, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QFontDatabase_QFontDatabase, smoothSizes, arginfo_qt_gui_qfontdatabase_qfontdatabase_smoothsizes, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QFontDatabase_QFontDatabase, styleString, arginfo_qt_gui_qfontdatabase_qfontdatabase_stylestring, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QFontDatabase_QFontDatabase, styleStringQFontInfo, arginfo_qt_gui_qfontdatabase_qfontdatabase_stylestringqfontinfo, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QFontDatabase_QFontDatabase, font, arginfo_qt_gui_qfontdatabase_qfontdatabase_font, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QFontDatabase_QFontDatabase, isBitmapScalable, arginfo_qt_gui_qfontdatabase_qfontdatabase_isbitmapscalable, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QFontDatabase_QFontDatabase, isSmoothlyScalable, arginfo_qt_gui_qfontdatabase_qfontdatabase_issmoothlyscalable, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QFontDatabase_QFontDatabase, isScalable, arginfo_qt_gui_qfontdatabase_qfontdatabase_isscalable, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QFontDatabase_QFontDatabase, isFixedPitch, arginfo_qt_gui_qfontdatabase_qfontdatabase_isfixedpitch, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QFontDatabase_QFontDatabase, italic, arginfo_qt_gui_qfontdatabase_qfontdatabase_italic, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QFontDatabase_QFontDatabase, bold, arginfo_qt_gui_qfontdatabase_qfontdatabase_bold, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QFontDatabase_QFontDatabase, weight, arginfo_qt_gui_qfontdatabase_qfontdatabase_weight, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QFontDatabase_QFontDatabase, hasFamily, arginfo_qt_gui_qfontdatabase_qfontdatabase_hasfamily, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QFontDatabase_QFontDatabase, isPrivateFamily, arginfo_qt_gui_qfontdatabase_qfontdatabase_isprivatefamily, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QFontDatabase_QFontDatabase, writingSystemName, arginfo_qt_gui_qfontdatabase_qfontdatabase_writingsystemname, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QFontDatabase_QFontDatabase, writingSystemSample, arginfo_qt_gui_qfontdatabase_qfontdatabase_writingsystemsample, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QFontDatabase_QFontDatabase, addApplicationFont, arginfo_qt_gui_qfontdatabase_qfontdatabase_addapplicationfont, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QFontDatabase_QFontDatabase, addApplicationFontFromData, arginfo_qt_gui_qfontdatabase_qfontdatabase_addapplicationfontfromdata, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QFontDatabase_QFontDatabase, applicationFontFamilies, arginfo_qt_gui_qfontdatabase_qfontdatabase_applicationfontfamilies, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QFontDatabase_QFontDatabase, removeApplicationFont, arginfo_qt_gui_qfontdatabase_qfontdatabase_removeapplicationfont, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QFontDatabase_QFontDatabase, removeAllApplicationFonts, arginfo_qt_gui_qfontdatabase_qfontdatabase_removeallapplicationfonts, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QFontDatabase_QFontDatabase, addApplicationFallbackFontFamily, arginfo_qt_gui_qfontdatabase_qfontdatabase_addapplicationfallbackfontfamily, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QFontDatabase_QFontDatabase, removeApplicationFallbackFontFamily, arginfo_qt_gui_qfontdatabase_qfontdatabase_removeapplicationfallbackfontfamily, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QFontDatabase_QFontDatabase, setApplicationFallbackFontFamilies, arginfo_qt_gui_qfontdatabase_qfontdatabase_setapplicationfallbackfontfamilies, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QFontDatabase_QFontDatabase, applicationFallbackFontFamilies, arginfo_qt_gui_qfontdatabase_qfontdatabase_applicationfallbackfontfamilies, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QFontDatabase_QFontDatabase, systemFont, arginfo_qt_gui_qfontdatabase_qfontdatabase_systemfont, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
