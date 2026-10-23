/* This is a generated file, edit the .stub.php file instead.
 * Stub hash: 73402992aaca65c178607c5b2831a52a16a60863 */

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_QClipboard___construct, 0, 0, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_QClipboard_setText, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, text, IS_STRING, 0)
	ZEND_ARG_OBJ_INFO_WITH_DEFAULT_VALUE(0, mode, QClipboard\\Mode, 0, "QClipboard\\Mode::CLIPBOARD")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_QClipboard_text, 0, 0, IS_STRING, 0)
	ZEND_ARG_OBJ_INFO_WITH_DEFAULT_VALUE(0, mode, QClipboard\\Mode, 0, "QClipboard\\Mode::CLIPBOARD")
ZEND_END_ARG_INFO()

#define arginfo_class_QDesktopServices___construct arginfo_class_QClipboard___construct

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_QDesktopServices_openUrl, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_OBJ_INFO(0, url, QUrl, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_QFontDatabase___construct arginfo_class_QClipboard___construct

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_QFontDatabase_systemFont, 0, 1, QFont, 0)
	ZEND_ARG_OBJ_INFO(0, type, QFontDatabase\\SystemFont, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_QFont___construct, 0, 0, 1)
	ZEND_ARG_TYPE_INFO(0, family, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, pointSize, IS_LONG, 0, "-1")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, weight, IS_LONG, 0, "-1")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, italic, _IS_BOOL, 0, "false")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_QFont_family, 0, 0, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_QFont_setFamily, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, family, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_QFont_pointSizeF, 0, 0, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_QFont_setPointSizeF, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, pointSize, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_TYPE_MASK_EX(arginfo_class_QFont_weight, 0, 0, QFont\\Weight, MAY_BE_LONG)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_QFont_setWeight, 0, 1, IS_VOID, 0)
	ZEND_ARG_OBJ_TYPE_MASK(0, weight, QFont\\Weight, MAY_BE_LONG, NULL)
ZEND_END_ARG_INFO()

#define arginfo_class_QPixmap___construct arginfo_class_QClipboard___construct

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_QPixmap_fromImage, 0, 1, QPixmap, 0)
	ZEND_ARG_OBJ_INFO(0, image, QImage, 0)
	ZEND_ARG_OBJ_TYPE_MASK(0, flags, Qt\\ImageConversionFlag, MAY_BE_LONG, "Qt\\ImageConversionFlag::AUTO_COLOR")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_QPixmap_load, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, fileName, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, format, IS_STRING, 1, "null")
	ZEND_ARG_OBJ_TYPE_MASK(0, flags, Qt\\ImageConversionFlag, MAY_BE_LONG, "Qt\\ImageConversionFlag::AUTO_COLOR")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_QPixmap_isNull, 0, 0, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_QPixmap_width, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_QPixmap_height arginfo_class_QPixmap_width

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_QPixmap_scaled, 0, 2, QPixmap, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, height, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO_WITH_DEFAULT_VALUE(0, aspectRatioMode, Qt\\AspectRatioMode, 0, "Qt\\AspectRatioMode::IGNORE_ASPECT_RATIO")
	ZEND_ARG_OBJ_INFO_WITH_DEFAULT_VALUE(0, transformMode, Qt\\TransformationMode, 0, "Qt\\TransformationMode::FAST_TRANSFORMATION")
ZEND_END_ARG_INFO()

#define arginfo_class_QPixmap_devicePixelRatio arginfo_class_QFont_pointSizeF

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_QPixmap_setDevicePixelRatio, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, scaleFactor, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_QImage___construct, 0, 0, 5)
	ZEND_ARG_TYPE_INFO(0, data, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, height, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, bytesPerLine, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, format, QImage\\Format, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, cleanupFunction, IS_CALLABLE, 1, "null")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, cleanupInfo, IS_MIXED, 0, "null")
ZEND_END_ARG_INFO()

#define arginfo_class_QImage_isNull arginfo_class_QPixmap_isNull

#define arginfo_class_QImage_width arginfo_class_QPixmap_width

#define arginfo_class_QImage_height arginfo_class_QPixmap_width

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_QImage_format, 0, 0, QImage\\Format, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_QImage_copy, 0, 0, QImage, 0)
	ZEND_ARG_OBJ_INFO_WITH_DEFAULT_VALUE(0, rect, QRect, 1, "null")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_QTableWidgetItem___construct, 0, 0, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, text, IS_STRING, 0, "\"\"")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, type, IS_LONG, 0, "QTableWidgetItem::TYPE")
ZEND_END_ARG_INFO()

#define arginfo_class_QTableWidgetItem_text arginfo_class_QFont_family

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_QTableWidgetItem_setText, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, text, IS_STRING, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_QTableWidgetItem_type arginfo_class_QPixmap_width

#define arginfo_class_QTableWidgetItem_row arginfo_class_QPixmap_width

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_QTreeWidgetItem___construct, 0, 0, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, type, IS_LONG, 0, "QTreeWidgetItem::TYPE")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_QTreeWidgetItem_text, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, column, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_QTreeWidgetItem_setText, 0, 2, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, column, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, text, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_QTreeWidgetItem_foreground, 0, 1, QBrush, 0)
	ZEND_ARG_TYPE_INFO(0, column, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_QTreeWidgetItem_setForeground, 0, 2, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, column, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, brush, QBrush, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_QTreeWidgetItem_data, 0, 2, IS_MIXED, 0)
	ZEND_ARG_TYPE_INFO(0, column, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, role, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_QTreeWidgetItem_setData, 0, 3, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, column, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, role, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_MIXED, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_QTreeWidgetItem_addChild, 0, 1, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, child, QTreeWidgetItem, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_QTreeWidgetItem_childCount arginfo_class_QPixmap_width

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_QTreeWidgetItem_child, 0, 1, QTreeWidgetItem, 1)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_QTreeWidgetItem_parent, 0, 0, QTreeWidgetItem, 1)
ZEND_END_ARG_INFO()

#define arginfo_class_QTreeWidgetItem_isExpanded arginfo_class_QPixmap_isNull

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_QTreeWidgetItem_setExpanded, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, expand, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_QTreeWidgetItem_childIndicatorPolicy, 0, 0, QTreeWidgetItem\\ChildIndicatorPolicy, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_QTreeWidgetItem_setChildIndicatorPolicy, 0, 1, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, policy, QTreeWidgetItem\\ChildIndicatorPolicy, 0)
ZEND_END_ARG_INFO()

ZEND_METHOD(QClipboard, __construct);
ZEND_METHOD(QClipboard, setText);
ZEND_METHOD(QClipboard, text);
ZEND_METHOD(QDesktopServices, __construct);
ZEND_METHOD(QDesktopServices, openUrl);
ZEND_METHOD(QFontDatabase, __construct);
ZEND_METHOD(QFontDatabase, systemFont);
ZEND_METHOD(QFont, __construct);
ZEND_METHOD(QFont, family);
ZEND_METHOD(QFont, setFamily);
ZEND_METHOD(QFont, pointSizeF);
ZEND_METHOD(QFont, setPointSizeF);
ZEND_METHOD(QFont, weight);
ZEND_METHOD(QFont, setWeight);
ZEND_METHOD(QPixmap, __construct);
ZEND_METHOD(QPixmap, fromImage);
ZEND_METHOD(QPixmap, load);
ZEND_METHOD(QPixmap, isNull);
ZEND_METHOD(QPixmap, width);
ZEND_METHOD(QPixmap, height);
ZEND_METHOD(QPixmap, scaled);
ZEND_METHOD(QPixmap, devicePixelRatio);
ZEND_METHOD(QPixmap, setDevicePixelRatio);
ZEND_METHOD(QImage, __construct);
ZEND_METHOD(QImage, isNull);
ZEND_METHOD(QImage, width);
ZEND_METHOD(QImage, height);
ZEND_METHOD(QImage, format);
ZEND_METHOD(QImage, copy);
ZEND_METHOD(QTableWidgetItem, __construct);
ZEND_METHOD(QTableWidgetItem, text);
ZEND_METHOD(QTableWidgetItem, setText);
ZEND_METHOD(QTableWidgetItem, type);
ZEND_METHOD(QTableWidgetItem, row);
ZEND_METHOD(QTreeWidgetItem, __construct);
ZEND_METHOD(QTreeWidgetItem, text);
ZEND_METHOD(QTreeWidgetItem, setText);
ZEND_METHOD(QTreeWidgetItem, foreground);
ZEND_METHOD(QTreeWidgetItem, setForeground);
ZEND_METHOD(QTreeWidgetItem, data);
ZEND_METHOD(QTreeWidgetItem, setData);
ZEND_METHOD(QTreeWidgetItem, addChild);
ZEND_METHOD(QTreeWidgetItem, childCount);
ZEND_METHOD(QTreeWidgetItem, child);
ZEND_METHOD(QTreeWidgetItem, parent);
ZEND_METHOD(QTreeWidgetItem, isExpanded);
ZEND_METHOD(QTreeWidgetItem, setExpanded);
ZEND_METHOD(QTreeWidgetItem, childIndicatorPolicy);
ZEND_METHOD(QTreeWidgetItem, setChildIndicatorPolicy);

static const zend_function_entry class_QClipboard_methods[] = {
	ZEND_ME(QClipboard, __construct, arginfo_class_QClipboard___construct, ZEND_ACC_PRIVATE)
	ZEND_ME(QClipboard, setText, arginfo_class_QClipboard_setText, ZEND_ACC_PUBLIC)
	ZEND_ME(QClipboard, text, arginfo_class_QClipboard_text, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static const zend_function_entry class_QDesktopServices_methods[] = {
	ZEND_ME(QDesktopServices, __construct, arginfo_class_QDesktopServices___construct, ZEND_ACC_PRIVATE)
	ZEND_ME(QDesktopServices, openUrl, arginfo_class_QDesktopServices_openUrl, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	ZEND_FE_END
};

static const zend_function_entry class_QFontDatabase_methods[] = {
	ZEND_ME(QFontDatabase, __construct, arginfo_class_QFontDatabase___construct, ZEND_ACC_PRIVATE)
	ZEND_ME(QFontDatabase, systemFont, arginfo_class_QFontDatabase_systemFont, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	ZEND_FE_END
};

static const zend_function_entry class_QFont_methods[] = {
	ZEND_ME(QFont, __construct, arginfo_class_QFont___construct, ZEND_ACC_PUBLIC)
	ZEND_ME(QFont, family, arginfo_class_QFont_family, ZEND_ACC_PUBLIC)
	ZEND_ME(QFont, setFamily, arginfo_class_QFont_setFamily, ZEND_ACC_PUBLIC)
	ZEND_ME(QFont, pointSizeF, arginfo_class_QFont_pointSizeF, ZEND_ACC_PUBLIC)
	ZEND_ME(QFont, setPointSizeF, arginfo_class_QFont_setPointSizeF, ZEND_ACC_PUBLIC)
	ZEND_ME(QFont, weight, arginfo_class_QFont_weight, ZEND_ACC_PUBLIC)
	ZEND_ME(QFont, setWeight, arginfo_class_QFont_setWeight, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static const zend_function_entry class_QPixmap_methods[] = {
	ZEND_ME(QPixmap, __construct, arginfo_class_QPixmap___construct, ZEND_ACC_PUBLIC)
	ZEND_ME(QPixmap, fromImage, arginfo_class_QPixmap_fromImage, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	ZEND_ME(QPixmap, load, arginfo_class_QPixmap_load, ZEND_ACC_PUBLIC)
	ZEND_ME(QPixmap, isNull, arginfo_class_QPixmap_isNull, ZEND_ACC_PUBLIC)
	ZEND_ME(QPixmap, width, arginfo_class_QPixmap_width, ZEND_ACC_PUBLIC)
	ZEND_ME(QPixmap, height, arginfo_class_QPixmap_height, ZEND_ACC_PUBLIC)
	ZEND_ME(QPixmap, scaled, arginfo_class_QPixmap_scaled, ZEND_ACC_PUBLIC)
	ZEND_ME(QPixmap, devicePixelRatio, arginfo_class_QPixmap_devicePixelRatio, ZEND_ACC_PUBLIC)
	ZEND_ME(QPixmap, setDevicePixelRatio, arginfo_class_QPixmap_setDevicePixelRatio, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static const zend_function_entry class_QImage_methods[] = {
	ZEND_ME(QImage, __construct, arginfo_class_QImage___construct, ZEND_ACC_PUBLIC)
	ZEND_ME(QImage, isNull, arginfo_class_QImage_isNull, ZEND_ACC_PUBLIC)
	ZEND_ME(QImage, width, arginfo_class_QImage_width, ZEND_ACC_PUBLIC)
	ZEND_ME(QImage, height, arginfo_class_QImage_height, ZEND_ACC_PUBLIC)
	ZEND_ME(QImage, format, arginfo_class_QImage_format, ZEND_ACC_PUBLIC)
	ZEND_ME(QImage, copy, arginfo_class_QImage_copy, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static const zend_function_entry class_QTableWidgetItem_methods[] = {
	ZEND_ME(QTableWidgetItem, __construct, arginfo_class_QTableWidgetItem___construct, ZEND_ACC_PUBLIC)
	ZEND_ME(QTableWidgetItem, text, arginfo_class_QTableWidgetItem_text, ZEND_ACC_PUBLIC)
	ZEND_ME(QTableWidgetItem, setText, arginfo_class_QTableWidgetItem_setText, ZEND_ACC_PUBLIC)
	ZEND_ME(QTableWidgetItem, type, arginfo_class_QTableWidgetItem_type, ZEND_ACC_PUBLIC)
	ZEND_ME(QTableWidgetItem, row, arginfo_class_QTableWidgetItem_row, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static const zend_function_entry class_QTreeWidgetItem_methods[] = {
	ZEND_ME(QTreeWidgetItem, __construct, arginfo_class_QTreeWidgetItem___construct, ZEND_ACC_PUBLIC)
	ZEND_ME(QTreeWidgetItem, text, arginfo_class_QTreeWidgetItem_text, ZEND_ACC_PUBLIC)
	ZEND_ME(QTreeWidgetItem, setText, arginfo_class_QTreeWidgetItem_setText, ZEND_ACC_PUBLIC)
	ZEND_ME(QTreeWidgetItem, foreground, arginfo_class_QTreeWidgetItem_foreground, ZEND_ACC_PUBLIC)
	ZEND_ME(QTreeWidgetItem, setForeground, arginfo_class_QTreeWidgetItem_setForeground, ZEND_ACC_PUBLIC)
	ZEND_ME(QTreeWidgetItem, data, arginfo_class_QTreeWidgetItem_data, ZEND_ACC_PUBLIC)
	ZEND_ME(QTreeWidgetItem, setData, arginfo_class_QTreeWidgetItem_setData, ZEND_ACC_PUBLIC)
	ZEND_ME(QTreeWidgetItem, addChild, arginfo_class_QTreeWidgetItem_addChild, ZEND_ACC_PUBLIC)
	ZEND_ME(QTreeWidgetItem, childCount, arginfo_class_QTreeWidgetItem_childCount, ZEND_ACC_PUBLIC)
	ZEND_ME(QTreeWidgetItem, child, arginfo_class_QTreeWidgetItem_child, ZEND_ACC_PUBLIC)
	ZEND_ME(QTreeWidgetItem, parent, arginfo_class_QTreeWidgetItem_parent, ZEND_ACC_PUBLIC)
	ZEND_ME(QTreeWidgetItem, isExpanded, arginfo_class_QTreeWidgetItem_isExpanded, ZEND_ACC_PUBLIC)
	ZEND_ME(QTreeWidgetItem, setExpanded, arginfo_class_QTreeWidgetItem_setExpanded, ZEND_ACC_PUBLIC)
	ZEND_ME(QTreeWidgetItem, childIndicatorPolicy, arginfo_class_QTreeWidgetItem_childIndicatorPolicy, ZEND_ACC_PUBLIC)
	ZEND_ME(QTreeWidgetItem, setChildIndicatorPolicy, arginfo_class_QTreeWidgetItem_setChildIndicatorPolicy, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static zend_class_entry *register_class_QFont_Weight(void)
{
	zend_class_entry *class_entry = zend_register_internal_enum("QFont\\Weight", IS_LONG, NULL);

	zval enum_case_THIN_value;
	ZVAL_LONG(&enum_case_THIN_value, 100);
	zend_enum_add_case_cstr(class_entry, "THIN", &enum_case_THIN_value);

	zval enum_case_EXTRA_LIGHT_value;
	ZVAL_LONG(&enum_case_EXTRA_LIGHT_value, 200);
	zend_enum_add_case_cstr(class_entry, "EXTRA_LIGHT", &enum_case_EXTRA_LIGHT_value);

	zval enum_case_LIGHT_value;
	ZVAL_LONG(&enum_case_LIGHT_value, 300);
	zend_enum_add_case_cstr(class_entry, "LIGHT", &enum_case_LIGHT_value);

	zval enum_case_NORMAL_value;
	ZVAL_LONG(&enum_case_NORMAL_value, 400);
	zend_enum_add_case_cstr(class_entry, "NORMAL", &enum_case_NORMAL_value);

	zval enum_case_MEDIUM_value;
	ZVAL_LONG(&enum_case_MEDIUM_value, 500);
	zend_enum_add_case_cstr(class_entry, "MEDIUM", &enum_case_MEDIUM_value);

	zval enum_case_DEMI_BOLD_value;
	ZVAL_LONG(&enum_case_DEMI_BOLD_value, 600);
	zend_enum_add_case_cstr(class_entry, "DEMI_BOLD", &enum_case_DEMI_BOLD_value);

	zval enum_case_BOLD_value;
	ZVAL_LONG(&enum_case_BOLD_value, 700);
	zend_enum_add_case_cstr(class_entry, "BOLD", &enum_case_BOLD_value);

	zval enum_case_EXTRA_BOLD_value;
	ZVAL_LONG(&enum_case_EXTRA_BOLD_value, 800);
	zend_enum_add_case_cstr(class_entry, "EXTRA_BOLD", &enum_case_EXTRA_BOLD_value);

	zval enum_case_BLACK_value;
	ZVAL_LONG(&enum_case_BLACK_value, 900);
	zend_enum_add_case_cstr(class_entry, "BLACK", &enum_case_BLACK_value);

	return class_entry;
}

static zend_class_entry *register_class_QFontDatabase_SystemFont(void)
{
	zend_class_entry *class_entry = zend_register_internal_enum("QFontDatabase\\SystemFont", IS_LONG, NULL);

	zval enum_case_GENERAL_FONT_value;
	ZVAL_LONG(&enum_case_GENERAL_FONT_value, 0);
	zend_enum_add_case_cstr(class_entry, "GENERAL_FONT", &enum_case_GENERAL_FONT_value);

	zval enum_case_FIXED_FONT_value;
	ZVAL_LONG(&enum_case_FIXED_FONT_value, 1);
	zend_enum_add_case_cstr(class_entry, "FIXED_FONT", &enum_case_FIXED_FONT_value);

	zval enum_case_TITLE_FONT_value;
	ZVAL_LONG(&enum_case_TITLE_FONT_value, 2);
	zend_enum_add_case_cstr(class_entry, "TITLE_FONT", &enum_case_TITLE_FONT_value);

	zval enum_case_SMALLEST_READABLE_FONT_value;
	ZVAL_LONG(&enum_case_SMALLEST_READABLE_FONT_value, 3);
	zend_enum_add_case_cstr(class_entry, "SMALLEST_READABLE_FONT", &enum_case_SMALLEST_READABLE_FONT_value);

	return class_entry;
}

static zend_class_entry *register_class_QClipboard_Mode(void)
{
	zend_class_entry *class_entry = zend_register_internal_enum("QClipboard\\Mode", IS_LONG, NULL);

	zval enum_case_CLIPBOARD_value;
	ZVAL_LONG(&enum_case_CLIPBOARD_value, 0);
	zend_enum_add_case_cstr(class_entry, "CLIPBOARD", &enum_case_CLIPBOARD_value);

	zval enum_case_SELECTION_value;
	ZVAL_LONG(&enum_case_SELECTION_value, 1);
	zend_enum_add_case_cstr(class_entry, "SELECTION", &enum_case_SELECTION_value);

	zval enum_case_FIND_BUFFER_value;
	ZVAL_LONG(&enum_case_FIND_BUFFER_value, 2);
	zend_enum_add_case_cstr(class_entry, "FIND_BUFFER", &enum_case_FIND_BUFFER_value);

	return class_entry;
}

static zend_class_entry *register_class_QImage_Format(void)
{
	zend_class_entry *class_entry = zend_register_internal_enum("QImage\\Format", IS_LONG, NULL);

	zval enum_case_RGB32_value;
	ZVAL_LONG(&enum_case_RGB32_value, 4);
	zend_enum_add_case_cstr(class_entry, "RGB32", &enum_case_RGB32_value);

	zval enum_case_ARGB32_value;
	ZVAL_LONG(&enum_case_ARGB32_value, 5);
	zend_enum_add_case_cstr(class_entry, "ARGB32", &enum_case_ARGB32_value);

	zval enum_case_ARGB32_PREMULTIPLIED_value;
	ZVAL_LONG(&enum_case_ARGB32_PREMULTIPLIED_value, 6);
	zend_enum_add_case_cstr(class_entry, "ARGB32_PREMULTIPLIED", &enum_case_ARGB32_PREMULTIPLIED_value);

	zval enum_case_RGB888_value;
	ZVAL_LONG(&enum_case_RGB888_value, 13);
	zend_enum_add_case_cstr(class_entry, "RGB888", &enum_case_RGB888_value);

	zval enum_case_RGBX8888_value;
	ZVAL_LONG(&enum_case_RGBX8888_value, 16);
	zend_enum_add_case_cstr(class_entry, "RGBX8888", &enum_case_RGBX8888_value);

	zval enum_case_RGBA8888_value;
	ZVAL_LONG(&enum_case_RGBA8888_value, 17);
	zend_enum_add_case_cstr(class_entry, "RGBA8888", &enum_case_RGBA8888_value);

	zval enum_case_RGBA8888_PREMULTIPLIED_value;
	ZVAL_LONG(&enum_case_RGBA8888_PREMULTIPLIED_value, 18);
	zend_enum_add_case_cstr(class_entry, "RGBA8888_PREMULTIPLIED", &enum_case_RGBA8888_PREMULTIPLIED_value);

	zval enum_case_BGR888_value;
	ZVAL_LONG(&enum_case_BGR888_value, 29);
	zend_enum_add_case_cstr(class_entry, "BGR888", &enum_case_BGR888_value);

	return class_entry;
}

static zend_class_entry *register_class_QTreeWidgetItem_ChildIndicatorPolicy(void)
{
	zend_class_entry *class_entry = zend_register_internal_enum("QTreeWidgetItem\\ChildIndicatorPolicy", IS_LONG, NULL);

	zval enum_case_SHOW_INDICATOR_value;
	ZVAL_LONG(&enum_case_SHOW_INDICATOR_value, 0);
	zend_enum_add_case_cstr(class_entry, "SHOW_INDICATOR", &enum_case_SHOW_INDICATOR_value);

	zval enum_case_DONT_SHOW_INDICATOR_value;
	ZVAL_LONG(&enum_case_DONT_SHOW_INDICATOR_value, 1);
	zend_enum_add_case_cstr(class_entry, "DONT_SHOW_INDICATOR", &enum_case_DONT_SHOW_INDICATOR_value);

	zval enum_case_DONT_SHOW_INDICATOR_WHEN_CHILDLESS_value;
	ZVAL_LONG(&enum_case_DONT_SHOW_INDICATOR_WHEN_CHILDLESS_value, 2);
	zend_enum_add_case_cstr(class_entry, "DONT_SHOW_INDICATOR_WHEN_CHILDLESS", &enum_case_DONT_SHOW_INDICATOR_WHEN_CHILDLESS_value);

	return class_entry;
}

static zend_class_entry *register_class_QClipboard(zend_class_entry *class_entry_QObject)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "QClipboard", class_QClipboard_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, class_entry_QObject, ZEND_ACC_NOT_SERIALIZABLE);

	return class_entry;
}

static zend_class_entry *register_class_QDesktopServices(void)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "QDesktopServices", class_QDesktopServices_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, NULL, ZEND_ACC_FINAL|ZEND_ACC_NOT_SERIALIZABLE);

	return class_entry;
}

static zend_class_entry *register_class_QFontDatabase(void)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "QFontDatabase", class_QFontDatabase_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, NULL, ZEND_ACC_FINAL);

	return class_entry;
}

static zend_class_entry *register_class_QFont(void)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "QFont", class_QFont_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, NULL, ZEND_ACC_FINAL|ZEND_ACC_NOT_SERIALIZABLE);

	return class_entry;
}

static zend_class_entry *register_class_QPixmap(void)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "QPixmap", class_QPixmap_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, NULL, ZEND_ACC_FINAL|ZEND_ACC_NOT_SERIALIZABLE);

	return class_entry;
}

static zend_class_entry *register_class_QImage(void)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "QImage", class_QImage_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, NULL, ZEND_ACC_FINAL|ZEND_ACC_NOT_SERIALIZABLE);

	return class_entry;
}

static zend_class_entry *register_class_QTableWidgetItem(void)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "QTableWidgetItem", class_QTableWidgetItem_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, NULL, ZEND_ACC_FINAL|ZEND_ACC_NOT_SERIALIZABLE);

	zval const_TYPE_value;
	ZVAL_LONG(&const_TYPE_value, QTableWidgetItem::Type);
	zend_string *const_TYPE_name = zend_string_init_interned("TYPE", sizeof("TYPE") - 1, 1);
	zend_declare_typed_class_constant(class_entry, const_TYPE_name, &const_TYPE_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(const_TYPE_name);

	zval const_USER_TYPE_value;
	ZVAL_LONG(&const_USER_TYPE_value, QTableWidgetItem::UserType);
	zend_string *const_USER_TYPE_name = zend_string_init_interned("USER_TYPE", sizeof("USER_TYPE") - 1, 1);
	zend_declare_typed_class_constant(class_entry, const_USER_TYPE_name, &const_USER_TYPE_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(const_USER_TYPE_name);

	return class_entry;
}

static zend_class_entry *register_class_QTreeWidgetItem(void)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "QTreeWidgetItem", class_QTreeWidgetItem_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, NULL, ZEND_ACC_FINAL|ZEND_ACC_NOT_SERIALIZABLE);

	zval const_TYPE_value;
	ZVAL_LONG(&const_TYPE_value, QTreeWidgetItem::Type);
	zend_string *const_TYPE_name = zend_string_init_interned("TYPE", sizeof("TYPE") - 1, 1);
	zend_declare_typed_class_constant(class_entry, const_TYPE_name, &const_TYPE_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(const_TYPE_name);

	zval const_USER_TYPE_value;
	ZVAL_LONG(&const_USER_TYPE_value, QTreeWidgetItem::UserType);
	zend_string *const_USER_TYPE_name = zend_string_init_interned("USER_TYPE", sizeof("USER_TYPE") - 1, 1);
	zend_declare_typed_class_constant(class_entry, const_USER_TYPE_name, &const_USER_TYPE_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(const_USER_TYPE_name);

	return class_entry;
}
