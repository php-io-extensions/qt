
#ifdef HAVE_CONFIG_H
#include "../../../ext_config.h"
#endif

#include <php.h>
#include "../../../php_ext.h"
#include "../../../ext.h"

#include <Zend/zend_operators.h>
#include <Zend/zend_exceptions.h>
#include <Zend/zend_interfaces.h>

#include "kernel/main.h"
#include "src/gui-qfontdatabase.h"
#include "kernel/object.h"
#include "kernel/operators.h"
#include "kernel/memory.h"
#include "kernel/string.h"


ZEPHIR_INIT_CLASS(Qt_Gui_QFontDatabase_QFontDatabase)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Gui\\QFontDatabase, QFontDatabase, qt, gui_qfontdatabase_qfontdatabase, qt_gui_qfontdatabase_qfontdatabase_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Gui_QFontDatabase_QFontDatabase, staticMetaObject)
{

	RETURN_LONG(phpqt_qfontdatabase_static_meta_object());
}

PHP_METHOD(Qt_Gui_QFontDatabase_QFontDatabase, qt_check_for_QGADGET_macro)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qfontdatabase_qt_check_for__q_g_a_d_g_e_t_macro(&_0);
}

PHP_METHOD(Qt_Gui_QFontDatabase_QFontDatabase, standardSizes)
{
	zval result;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;

	ZVAL_UNDEF(&result);
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);

	ZEPHIR_INIT_VAR(&result);
	phpqt_qfontdatabase_standard_sizes(&result);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QFontDatabase_QFontDatabase, new_)
{

	RETURN_LONG(phpqt_qfontdatabase_new());
}

PHP_METHOD(Qt_Gui_QFontDatabase_QFontDatabase, writingSystems)
{
	zval result;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;

	ZVAL_UNDEF(&result);
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);

	ZEPHIR_INIT_VAR(&result);
	phpqt_qfontdatabase_writing_systems(&result);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QFontDatabase_QFontDatabase, writingSystemsQString)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *family_param = NULL, result;
	zval family;

	ZVAL_UNDEF(&family);
	ZVAL_UNDEF(&result);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_STR(family)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &family_param);
	zephir_get_strval(&family, family_param);
	ZEPHIR_INIT_VAR(&result);
	phpqt_qfontdatabase_writing_systems_q_string(&result, &family);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QFontDatabase_QFontDatabase, families)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *writingSystem = NULL, writingSystem_sub, __$null, result;

	ZVAL_UNDEF(&writingSystem_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&result);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(0, 1)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(writingSystem)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 0, 1, &writingSystem);
	if (!writingSystem) {
		writingSystem = &writingSystem_sub;
		writingSystem = &__$null;
	}
	ZEPHIR_INIT_VAR(&result);
	phpqt_qfontdatabase_families(&result, writingSystem);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QFontDatabase_QFontDatabase, styles)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *family_param = NULL, result;
	zval family;

	ZVAL_UNDEF(&family);
	ZVAL_UNDEF(&result);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_STR(family)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &family_param);
	zephir_get_strval(&family, family_param);
	ZEPHIR_INIT_VAR(&result);
	phpqt_qfontdatabase_styles(&result, &family);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QFontDatabase_QFontDatabase, pointSizes)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *family_param = NULL, *style_param = NULL, result;
	zval family, style;

	ZVAL_UNDEF(&family);
	ZVAL_UNDEF(&style);
	ZVAL_UNDEF(&result);
	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_STR(family)
		Z_PARAM_OPTIONAL
		Z_PARAM_STR(style)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 1, &family_param, &style_param);
	zephir_get_strval(&family, family_param);
	if (!style_param) {
		ZEPHIR_INIT_VAR(&style);
		ZVAL_STRING(&style, "");
	} else {
		zephir_get_strval(&style, style_param);
	}
	ZEPHIR_INIT_VAR(&result);
	phpqt_qfontdatabase_point_sizes(&result, &family, &style);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QFontDatabase_QFontDatabase, smoothSizes)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *family_param = NULL, *style_param = NULL, result;
	zval family, style;

	ZVAL_UNDEF(&family);
	ZVAL_UNDEF(&style);
	ZVAL_UNDEF(&result);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_STR(family)
		Z_PARAM_STR(style)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &family_param, &style_param);
	zephir_get_strval(&family, family_param);
	zephir_get_strval(&style, style_param);
	ZEPHIR_INIT_VAR(&result);
	phpqt_qfontdatabase_smooth_sizes(&result, &family, &style);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QFontDatabase_QFontDatabase, styleString)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *font_param = NULL, result, _0;
	zend_long font;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(font)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &font_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, font);
	phpqt_qfontdatabase_style_string(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QFontDatabase_QFontDatabase, styleStringQFontInfo)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *fontInfo_param = NULL, result, _0;
	zend_long fontInfo;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(fontInfo)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &fontInfo_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, fontInfo);
	phpqt_qfontdatabase_style_string_q_font_info(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QFontDatabase_QFontDatabase, font)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long pointSize;
	zval *family_param = NULL, *style_param = NULL, *pointSize_param = NULL, _0;
	zval family, style;

	ZVAL_UNDEF(&family);
	ZVAL_UNDEF(&style);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_STR(family)
		Z_PARAM_STR(style)
		Z_PARAM_LONG(pointSize)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 3, 0, &family_param, &style_param, &pointSize_param);
	zephir_get_strval(&family, family_param);
	zephir_get_strval(&style, style_param);
	ZVAL_LONG(&_0, pointSize);
	RETURN_MM_LONG(phpqt_qfontdatabase_font(&family, &style, &_0));
}

PHP_METHOD(Qt_Gui_QFontDatabase_QFontDatabase, isBitmapScalable)
{
	zend_long r = 0;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *family_param = NULL, *style_param = NULL;
	zval family, style;

	ZVAL_UNDEF(&family);
	ZVAL_UNDEF(&style);
	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_STR(family)
		Z_PARAM_OPTIONAL
		Z_PARAM_STR(style)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 1, &family_param, &style_param);
	zephir_get_strval(&family, family_param);
	if (!style_param) {
		ZEPHIR_INIT_VAR(&style);
		ZVAL_STRING(&style, "");
	} else {
		zephir_get_strval(&style, style_param);
	}
	r = phpqt_qfontdatabase_is_bitmap_scalable(&family, &style);
	RETURN_MM_BOOL(r == 1);
}

PHP_METHOD(Qt_Gui_QFontDatabase_QFontDatabase, isSmoothlyScalable)
{
	zend_long r = 0;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *family_param = NULL, *style_param = NULL;
	zval family, style;

	ZVAL_UNDEF(&family);
	ZVAL_UNDEF(&style);
	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_STR(family)
		Z_PARAM_OPTIONAL
		Z_PARAM_STR(style)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 1, &family_param, &style_param);
	zephir_get_strval(&family, family_param);
	if (!style_param) {
		ZEPHIR_INIT_VAR(&style);
		ZVAL_STRING(&style, "");
	} else {
		zephir_get_strval(&style, style_param);
	}
	r = phpqt_qfontdatabase_is_smoothly_scalable(&family, &style);
	RETURN_MM_BOOL(r == 1);
}

PHP_METHOD(Qt_Gui_QFontDatabase_QFontDatabase, isScalable)
{
	zend_long r = 0;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *family_param = NULL, *style_param = NULL;
	zval family, style;

	ZVAL_UNDEF(&family);
	ZVAL_UNDEF(&style);
	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_STR(family)
		Z_PARAM_OPTIONAL
		Z_PARAM_STR(style)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 1, &family_param, &style_param);
	zephir_get_strval(&family, family_param);
	if (!style_param) {
		ZEPHIR_INIT_VAR(&style);
		ZVAL_STRING(&style, "");
	} else {
		zephir_get_strval(&style, style_param);
	}
	r = phpqt_qfontdatabase_is_scalable(&family, &style);
	RETURN_MM_BOOL(r == 1);
}

PHP_METHOD(Qt_Gui_QFontDatabase_QFontDatabase, isFixedPitch)
{
	zend_long r = 0;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *family_param = NULL, *style_param = NULL;
	zval family, style;

	ZVAL_UNDEF(&family);
	ZVAL_UNDEF(&style);
	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_STR(family)
		Z_PARAM_OPTIONAL
		Z_PARAM_STR(style)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 1, &family_param, &style_param);
	zephir_get_strval(&family, family_param);
	if (!style_param) {
		ZEPHIR_INIT_VAR(&style);
		ZVAL_STRING(&style, "");
	} else {
		zephir_get_strval(&style, style_param);
	}
	r = phpqt_qfontdatabase_is_fixed_pitch(&family, &style);
	RETURN_MM_BOOL(r == 1);
}

PHP_METHOD(Qt_Gui_QFontDatabase_QFontDatabase, italic)
{
	zend_long r = 0;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *family_param = NULL, *style_param = NULL;
	zval family, style;

	ZVAL_UNDEF(&family);
	ZVAL_UNDEF(&style);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_STR(family)
		Z_PARAM_STR(style)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &family_param, &style_param);
	zephir_get_strval(&family, family_param);
	zephir_get_strval(&style, style_param);
	r = phpqt_qfontdatabase_italic(&family, &style);
	RETURN_MM_BOOL(r == 1);
}

PHP_METHOD(Qt_Gui_QFontDatabase_QFontDatabase, bold)
{
	zend_long r = 0;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *family_param = NULL, *style_param = NULL;
	zval family, style;

	ZVAL_UNDEF(&family);
	ZVAL_UNDEF(&style);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_STR(family)
		Z_PARAM_STR(style)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &family_param, &style_param);
	zephir_get_strval(&family, family_param);
	zephir_get_strval(&style, style_param);
	r = phpqt_qfontdatabase_bold(&family, &style);
	RETURN_MM_BOOL(r == 1);
}

PHP_METHOD(Qt_Gui_QFontDatabase_QFontDatabase, weight)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *family_param = NULL, *style_param = NULL;
	zval family, style;

	ZVAL_UNDEF(&family);
	ZVAL_UNDEF(&style);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_STR(family)
		Z_PARAM_STR(style)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &family_param, &style_param);
	zephir_get_strval(&family, family_param);
	zephir_get_strval(&style, style_param);
	RETURN_MM_LONG(phpqt_qfontdatabase_weight(&family, &style));
}

PHP_METHOD(Qt_Gui_QFontDatabase_QFontDatabase, hasFamily)
{
	zend_long r = 0;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *family_param = NULL;
	zval family;

	ZVAL_UNDEF(&family);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_STR(family)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &family_param);
	zephir_get_strval(&family, family_param);
	r = phpqt_qfontdatabase_has_family(&family);
	RETURN_MM_BOOL(r == 1);
}

PHP_METHOD(Qt_Gui_QFontDatabase_QFontDatabase, isPrivateFamily)
{
	zend_long r = 0;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *family_param = NULL;
	zval family;

	ZVAL_UNDEF(&family);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_STR(family)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &family_param);
	zephir_get_strval(&family, family_param);
	r = phpqt_qfontdatabase_is_private_family(&family);
	RETURN_MM_BOOL(r == 1);
}

PHP_METHOD(Qt_Gui_QFontDatabase_QFontDatabase, writingSystemName)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *writingSystem_param = NULL, result, _0;
	zend_long writingSystem;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(writingSystem)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &writingSystem_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, writingSystem);
	phpqt_qfontdatabase_writing_system_name(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QFontDatabase_QFontDatabase, writingSystemSample)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *writingSystem_param = NULL, result, _0;
	zend_long writingSystem;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(writingSystem)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &writingSystem_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, writingSystem);
	phpqt_qfontdatabase_writing_system_sample(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QFontDatabase_QFontDatabase, addApplicationFont)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *fileName_param = NULL;
	zval fileName;

	ZVAL_UNDEF(&fileName);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_STR(fileName)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &fileName_param);
	zephir_get_strval(&fileName, fileName_param);
	RETURN_MM_LONG(phpqt_qfontdatabase_add_application_font(&fileName));
}

PHP_METHOD(Qt_Gui_QFontDatabase_QFontDatabase, addApplicationFontFromData)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *fontData_param = NULL;
	zval fontData;

	ZVAL_UNDEF(&fontData);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_STR(fontData)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &fontData_param);
	zephir_get_strval(&fontData, fontData_param);
	RETURN_MM_LONG(phpqt_qfontdatabase_add_application_font_from_data(&fontData));
}

PHP_METHOD(Qt_Gui_QFontDatabase_QFontDatabase, applicationFontFamilies)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *id_param = NULL, result, _0;
	zend_long id;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(id)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &id_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, id);
	phpqt_qfontdatabase_application_font_families(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QFontDatabase_QFontDatabase, removeApplicationFont)
{
	zval *id_param = NULL, _0;
	zend_long id, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(id)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &id_param);
	ZVAL_LONG(&_0, id);
	r = phpqt_qfontdatabase_remove_application_font(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Gui_QFontDatabase_QFontDatabase, removeAllApplicationFonts)
{
	zend_long r = 0;
	r = phpqt_qfontdatabase_remove_all_application_fonts();
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Gui_QFontDatabase_QFontDatabase, addApplicationFallbackFontFamily)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval familyName;
	zval *script_param = NULL, *familyName_param = NULL, _0;
	zend_long script;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&familyName);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(script)
		Z_PARAM_STR(familyName)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &script_param, &familyName_param);
	zephir_get_strval(&familyName, familyName_param);
	ZVAL_LONG(&_0, script);
	phpqt_qfontdatabase_add_application_fallback_font_family(&_0, &familyName);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_Gui_QFontDatabase_QFontDatabase, removeApplicationFallbackFontFamily)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval familyName;
	zval *script_param = NULL, *familyName_param = NULL, _0;
	zend_long script, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&familyName);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(script)
		Z_PARAM_STR(familyName)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &script_param, &familyName_param);
	zephir_get_strval(&familyName, familyName_param);
	ZVAL_LONG(&_0, script);
	r = phpqt_qfontdatabase_remove_application_fallback_font_family(&_0, &familyName);
	RETURN_MM_BOOL(r == 1);
}

PHP_METHOD(Qt_Gui_QFontDatabase_QFontDatabase, setApplicationFallbackFontFamilies)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval familyNames;
	zval *arg0_param = NULL, *familyNames_param = NULL, _0;
	zend_long arg0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&familyNames);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(arg0)
		Z_PARAM_ARRAY(familyNames)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &arg0_param, &familyNames_param);
	zephir_get_arrval(&familyNames, familyNames_param);
	ZVAL_LONG(&_0, arg0);
	phpqt_qfontdatabase_set_application_fallback_font_families(&_0, &familyNames);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_Gui_QFontDatabase_QFontDatabase, applicationFallbackFontFamilies)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *script_param = NULL, result, _0;
	zend_long script;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(script)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &script_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, script);
	phpqt_qfontdatabase_application_fallback_font_families(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QFontDatabase_QFontDatabase, systemFont)
{
	zval *type_param = NULL, _0;
	zend_long type;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(type)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &type_param);
	ZVAL_LONG(&_0, type);
	RETURN_LONG(phpqt_qfontdatabase_system_font(&_0));
}

