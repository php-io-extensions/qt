
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
#include "src/widgets-qfontcombobox.h"
#include "kernel/object.h"
#include "kernel/string.h"
#include "kernel/memory.h"
#include "kernel/operators.h"


ZEPHIR_INIT_CLASS(Qt_Widgets_QFontComboBox_QFontComboBox)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Widgets\\QFontComboBox, QFontComboBox, qt, widgets_qfontcombobox_qfontcombobox, qt_widgets_qfontcombobox_qfontcombobox_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Widgets_QFontComboBox_QFontComboBox, staticMetaObject)
{

	RETURN_LONG(phpqt_qfontcombobox_static_meta_object());
}

PHP_METHOD(Qt_Widgets_QFontComboBox_QFontComboBox, tr)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long n;
	zval *s = NULL, s_sub, *c = NULL, c_sub, *n_param = NULL, __$null, result, _0;

	ZVAL_UNDEF(&s_sub);
	ZVAL_UNDEF(&c_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(1, 3)
		Z_PARAM_ZVAL(s)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(c)
		Z_PARAM_LONG(n)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 2, &s, &c, &n_param);
	if (!c) {
		c = &c_sub;
		c = &__$null;
	}
	if (!n_param) {
		n = -1;
	} else {
		}
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, n);
	phpqt_qfontcombobox_tr(&result, s, c, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Widgets_QFontComboBox_QFontComboBox, new_)
{
	zval *parent__param = NULL, _0;
	zend_long parent_;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(0, 1)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(parent_)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(0, 1, &parent__param);
	if (!parent__param) {
		parent_ = 0;
	} else {
		}
	ZVAL_LONG(&_0, parent_);
	RETURN_LONG(phpqt_qfontcombobox_new(&_0));
}

PHP_METHOD(Qt_Widgets_QFontComboBox_QFontComboBox, setWritingSystem)
{
	zval *handle_param = NULL, *arg0_param = NULL, _0, _1;
	zend_long handle, arg0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(arg0)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &arg0_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, arg0);
	phpqt_qfontcombobox_set_writing_system(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QFontComboBox_QFontComboBox, writingSystem)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qfontcombobox_writing_system(&_0));
}

PHP_METHOD(Qt_Widgets_QFontComboBox_QFontComboBox, setFontFilters)
{
	zval *handle_param = NULL, *filters_param = NULL, _0, _1;
	zend_long handle, filters;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(filters)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &filters_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, filters);
	phpqt_qfontcombobox_set_font_filters(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QFontComboBox_QFontComboBox, fontFilters)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qfontcombobox_font_filters(&_0));
}

PHP_METHOD(Qt_Widgets_QFontComboBox_QFontComboBox, currentFont)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qfontcombobox_current_font(&_0));
}

PHP_METHOD(Qt_Widgets_QFontComboBox_QFontComboBox, sizeHint)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, result, _0;
	zend_long handle;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &handle_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	phpqt_qfontcombobox_size_hint(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Widgets_QFontComboBox_QFontComboBox, setSampleTextForSystem)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval sampleText;
	zval *handle_param = NULL, *writingSystem_param = NULL, *sampleText_param = NULL, _0, _1;
	zend_long handle, writingSystem;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&sampleText);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(writingSystem)
		Z_PARAM_STR(sampleText)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 3, 0, &handle_param, &writingSystem_param, &sampleText_param);
	zephir_get_strval(&sampleText, sampleText_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, writingSystem);
	phpqt_qfontcombobox_set_sample_text_for_system(&_0, &_1, &sampleText);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_Widgets_QFontComboBox_QFontComboBox, sampleTextForSystem)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, *writingSystem_param = NULL, result, _0, _1;
	zend_long handle, writingSystem;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(writingSystem)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &writingSystem_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, writingSystem);
	phpqt_qfontcombobox_sample_text_for_system(&result, &_0, &_1);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Widgets_QFontComboBox_QFontComboBox, setSampleTextForFont)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval fontFamily, sampleText;
	zval *handle_param = NULL, *fontFamily_param = NULL, *sampleText_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&fontFamily);
	ZVAL_UNDEF(&sampleText);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(fontFamily)
		Z_PARAM_STR(sampleText)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 3, 0, &handle_param, &fontFamily_param, &sampleText_param);
	zephir_get_strval(&fontFamily, fontFamily_param);
	zephir_get_strval(&sampleText, sampleText_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qfontcombobox_set_sample_text_for_font(&_0, &fontFamily, &sampleText);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_Widgets_QFontComboBox_QFontComboBox, sampleTextForFont)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval fontFamily;
	zval *handle_param = NULL, *fontFamily_param = NULL, result, _0;
	zend_long handle;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&fontFamily);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(fontFamily)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &fontFamily_param);
	zephir_get_strval(&fontFamily, fontFamily_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	phpqt_qfontcombobox_sample_text_for_font(&result, &_0, &fontFamily);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Widgets_QFontComboBox_QFontComboBox, setDisplayFont)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval fontFamily;
	zval *handle_param = NULL, *fontFamily_param = NULL, *font_param = NULL, _0, _1;
	zend_long handle, font;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&fontFamily);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(fontFamily)
		Z_PARAM_LONG(font)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 3, 0, &handle_param, &fontFamily_param, &font_param);
	zephir_get_strval(&fontFamily, fontFamily_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, font);
	phpqt_qfontcombobox_set_display_font(&_0, &fontFamily, &_1);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_Widgets_QFontComboBox_QFontComboBox, setCurrentFont)
{
	zval *handle_param = NULL, *f_param = NULL, _0, _1;
	zend_long handle, f;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(f)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &f_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, f);
	phpqt_qfontcombobox_set_current_font(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QFontComboBox_QFontComboBox, currentFontChanged)
{
	zval *handle_param = NULL, *f_param = NULL, _0, _1;
	zend_long handle, f;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(f)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &f_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, f);
	phpqt_qfontcombobox_current_font_changed(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QFontComboBox_QFontComboBox, event)
{
	zval *handle_param = NULL, *e_param = NULL, _0, _1;
	zend_long handle, e, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(e)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &e_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, e);
	r = phpqt_qfontcombobox_event(&_0, &_1);
	RETURN_BOOL(r == 1);
}

