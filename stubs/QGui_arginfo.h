/* This is a generated file, edit the .stub.php file instead.
 * Stub hash: aa285df1cd882ce496788ddb0e4b5c2c672a7fcb */

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_QFont___construct, 0, 0, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, family, IS_STRING, 0, "\"\"")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, pointSize, IS_DOUBLE, 0, "-1.0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, weight, IS_LONG, 0, "-1")
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

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_QPixmap___construct, 0, 0, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_QPixmap_fromImage, 0, 1, QPixmap, 0)
	ZEND_ARG_OBJ_INFO(0, image, QImage, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_QPixmap_load, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, fileName, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_QPixmap_isNull, 0, 0, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_QPixmap_width, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_QPixmap_height arginfo_class_QPixmap_width

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_QPixmap_scaled, 0, 3, QPixmap, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, height, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, aspectRatioMode, Qt\\AspectRatioMode, 0)
	ZEND_ARG_OBJ_INFO_WITH_DEFAULT_VALUE(0, transformMode, Qt\\TransformationMode, 0, "Qt\\TransformationMode::FAST_TRANSFORMATION")
ZEND_END_ARG_INFO()

#define arginfo_class_QPixmap_devicePixelRatio arginfo_class_QFont_pointSizeF

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_QPixmap_setDevicePixelRatio, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, scaleFactor, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_QImage___construct, 0, 0, 5)
	ZEND_ARG_TYPE_INFO(0, data, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, height, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, bytesPerLine, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, format, QImage\\Format, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_QImage_isNull arginfo_class_QPixmap_isNull

#define arginfo_class_QImage_width arginfo_class_QPixmap_width

#define arginfo_class_QImage_height arginfo_class_QPixmap_width

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_QImage_format, 0, 0, QImage\\Format, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_QTableWidgetItem___construct, 0, 0, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, text, IS_STRING, 0, "\"\"")
ZEND_END_ARG_INFO()

#define arginfo_class_QTableWidgetItem_text arginfo_class_QFont_family

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_QTableWidgetItem_setText, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, text, IS_STRING, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_QTableWidgetItem_row arginfo_class_QPixmap_width

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
ZEND_METHOD(QTableWidgetItem, __construct);
ZEND_METHOD(QTableWidgetItem, text);
ZEND_METHOD(QTableWidgetItem, setText);
ZEND_METHOD(QTableWidgetItem, row);

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
	ZEND_FE_END
};

static const zend_function_entry class_QTableWidgetItem_methods[] = {
	ZEND_ME(QTableWidgetItem, __construct, arginfo_class_QTableWidgetItem___construct, ZEND_ACC_PUBLIC)
	ZEND_ME(QTableWidgetItem, text, arginfo_class_QTableWidgetItem_text, ZEND_ACC_PUBLIC)
	ZEND_ME(QTableWidgetItem, setText, arginfo_class_QTableWidgetItem_setText, ZEND_ACC_PUBLIC)
	ZEND_ME(QTableWidgetItem, row, arginfo_class_QTableWidgetItem_row, ZEND_ACC_PUBLIC)
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

	return class_entry;
}
