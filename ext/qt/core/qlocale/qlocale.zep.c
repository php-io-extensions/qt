
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
#include "src/core-qlocale.h"
#include "kernel/object.h"
#include "kernel/operators.h"
#include "kernel/memory.h"
#include "kernel/string.h"


ZEPHIR_INIT_CLASS(Qt_Core_QLocale_QLocale)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Core\\QLocale, QLocale, qt, core_qlocale_qlocale, qt_core_qlocale_qlocale_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Core_QLocale_QLocale, staticMetaObject)
{

	RETURN_LONG(phpqt_qlocale_static_meta_object());
}

PHP_METHOD(Qt_Core_QLocale_QLocale, qt_check_for_QGADGET_macro)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qlocale_qt_check_for__q_g_a_d_g_e_t_macro(&_0);
}

PHP_METHOD(Qt_Core_QLocale_QLocale, DefaultTwoDigitBaseYear)
{

	RETURN_LONG(phpqt_qlocale_default_two_digit_base_year());
}

PHP_METHOD(Qt_Core_QLocale_QLocale, new_)
{

	RETURN_LONG(phpqt_qlocale_new());
}

PHP_METHOD(Qt_Core_QLocale_QLocale, newQString)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *name_param = NULL;
	zval name;

	ZVAL_UNDEF(&name);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_STR(name)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &name_param);
	zephir_get_strval(&name, name_param);
	RETURN_MM_LONG(phpqt_qlocale_new_q_string(&name));
}

PHP_METHOD(Qt_Core_QLocale_QLocale, newQStringView)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *name_param = NULL;
	zval name;

	ZVAL_UNDEF(&name);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_STR(name)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &name_param);
	zephir_get_strval(&name, name_param);
	RETURN_MM_LONG(phpqt_qlocale_new_q_string_view(&name));
}

PHP_METHOD(Qt_Core_QLocale_QLocale, newQLocaleLanguageQLocaleTerritory)
{
	zval *language_param = NULL, *territory_param = NULL, _0, _1;
	zend_long language, territory;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(language)
		Z_PARAM_LONG(territory)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &language_param, &territory_param);
	ZVAL_LONG(&_0, language);
	ZVAL_LONG(&_1, territory);
	RETURN_LONG(phpqt_qlocale_new_q_locale_language_q_locale_territory(&_0, &_1));
}

PHP_METHOD(Qt_Core_QLocale_QLocale, newQLocaleLanguageQLocaleScriptQLocaleTerritory)
{
	zval *language_param = NULL, *script = NULL, script_sub, *territory = NULL, territory_sub, __$null, _0;
	zend_long language;

	ZVAL_UNDEF(&script_sub);
	ZVAL_UNDEF(&territory_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(1, 3)
		Z_PARAM_LONG(language)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(script)
		Z_PARAM_ZVAL_OR_NULL(territory)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 2, &language_param, &script, &territory);
	if (!script) {
		script = &script_sub;
		script = &__$null;
	}
	if (!territory) {
		territory = &territory_sub;
		territory = &__$null;
	}
	ZVAL_LONG(&_0, language);
	RETURN_LONG(phpqt_qlocale_new_q_locale_language_q_locale_script_q_locale_territory(&_0, script, territory));
}

PHP_METHOD(Qt_Core_QLocale_QLocale, newQLocale)
{
	zval *other_param = NULL, _0;
	zend_long other;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(other)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &other_param);
	ZVAL_LONG(&_0, other);
	RETURN_LONG(phpqt_qlocale_new_q_locale(&_0));
}

PHP_METHOD(Qt_Core_QLocale_QLocale, swap)
{
	zval *handle_param = NULL, *other_param = NULL, _0, _1;
	zend_long handle, other;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(other)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &other_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, other);
	phpqt_qlocale_swap(&_0, &_1);
}

PHP_METHOD(Qt_Core_QLocale_QLocale, language)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qlocale_language(&_0));
}

PHP_METHOD(Qt_Core_QLocale_QLocale, script)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qlocale_script(&_0));
}

PHP_METHOD(Qt_Core_QLocale_QLocale, territory)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qlocale_territory(&_0));
}

PHP_METHOD(Qt_Core_QLocale_QLocale, name)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, *separator = NULL, separator_sub, __$null, result, _0;
	zend_long handle;

	ZVAL_UNDEF(&separator_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(separator)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 1, &handle_param, &separator);
	if (!separator) {
		separator = &separator_sub;
		separator = &__$null;
	}
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	phpqt_qlocale_name(&result, &_0, separator);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QLocale_QLocale, bcp47Name)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, *separator = NULL, separator_sub, __$null, result, _0;
	zend_long handle;

	ZVAL_UNDEF(&separator_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(separator)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 1, &handle_param, &separator);
	if (!separator) {
		separator = &separator_sub;
		separator = &__$null;
	}
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	phpqt_qlocale_bcp47_name(&result, &_0, separator);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QLocale_QLocale, nativeLanguageName)
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
	phpqt_qlocale_native_language_name(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QLocale_QLocale, nativeTerritoryName)
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
	phpqt_qlocale_native_territory_name(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QLocale_QLocale, toShort)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval s;
	zval *handle_param = NULL, *s_param = NULL, *ok = NULL, ok_sub, __$null, result, _0;
	zend_long handle;

	ZVAL_UNDEF(&ok_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&s);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(2, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(s)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(ok)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 1, &handle_param, &s_param, &ok);
	zephir_get_strval(&s, s_param);
	if (!ok) {
		ok = &ok_sub;
		ok = &__$null;
	}
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	phpqt_qlocale_to_short(&result, &_0, &s, ok);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QLocale_QLocale, toUShort)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval s;
	zval *handle_param = NULL, *s_param = NULL, *ok = NULL, ok_sub, __$null, result, _0;
	zend_long handle;

	ZVAL_UNDEF(&ok_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&s);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(2, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(s)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(ok)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 1, &handle_param, &s_param, &ok);
	zephir_get_strval(&s, s_param);
	if (!ok) {
		ok = &ok_sub;
		ok = &__$null;
	}
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	phpqt_qlocale_to_u_short(&result, &_0, &s, ok);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QLocale_QLocale, toInt)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval s;
	zval *handle_param = NULL, *s_param = NULL, *ok = NULL, ok_sub, __$null, result, _0;
	zend_long handle;

	ZVAL_UNDEF(&ok_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&s);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(2, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(s)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(ok)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 1, &handle_param, &s_param, &ok);
	zephir_get_strval(&s, s_param);
	if (!ok) {
		ok = &ok_sub;
		ok = &__$null;
	}
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	phpqt_qlocale_to_int(&result, &_0, &s, ok);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QLocale_QLocale, toUInt)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval s;
	zval *handle_param = NULL, *s_param = NULL, *ok = NULL, ok_sub, __$null, result, _0;
	zend_long handle;

	ZVAL_UNDEF(&ok_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&s);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(2, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(s)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(ok)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 1, &handle_param, &s_param, &ok);
	zephir_get_strval(&s, s_param);
	if (!ok) {
		ok = &ok_sub;
		ok = &__$null;
	}
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	phpqt_qlocale_to_u_int(&result, &_0, &s, ok);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QLocale_QLocale, toLong)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval s;
	zval *handle_param = NULL, *s_param = NULL, *ok = NULL, ok_sub, __$null, result, _0;
	zend_long handle;

	ZVAL_UNDEF(&ok_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&s);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(2, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(s)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(ok)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 1, &handle_param, &s_param, &ok);
	zephir_get_strval(&s, s_param);
	if (!ok) {
		ok = &ok_sub;
		ok = &__$null;
	}
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	phpqt_qlocale_to_long(&result, &_0, &s, ok);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QLocale_QLocale, toULong)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval s;
	zval *handle_param = NULL, *s_param = NULL, *ok = NULL, ok_sub, __$null, result, _0;
	zend_long handle;

	ZVAL_UNDEF(&ok_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&s);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(2, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(s)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(ok)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 1, &handle_param, &s_param, &ok);
	zephir_get_strval(&s, s_param);
	if (!ok) {
		ok = &ok_sub;
		ok = &__$null;
	}
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	phpqt_qlocale_to_u_long(&result, &_0, &s, ok);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QLocale_QLocale, toLongLong)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval s;
	zval *handle_param = NULL, *s_param = NULL, *ok = NULL, ok_sub, __$null, result, _0;
	zend_long handle;

	ZVAL_UNDEF(&ok_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&s);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(2, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(s)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(ok)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 1, &handle_param, &s_param, &ok);
	zephir_get_strval(&s, s_param);
	if (!ok) {
		ok = &ok_sub;
		ok = &__$null;
	}
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	phpqt_qlocale_to_long_long(&result, &_0, &s, ok);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QLocale_QLocale, toULongLong)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval s;
	zval *handle_param = NULL, *s_param = NULL, *ok = NULL, ok_sub, __$null, result, _0;
	zend_long handle;

	ZVAL_UNDEF(&ok_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&s);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(2, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(s)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(ok)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 1, &handle_param, &s_param, &ok);
	zephir_get_strval(&s, s_param);
	if (!ok) {
		ok = &ok_sub;
		ok = &__$null;
	}
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	phpqt_qlocale_to_u_long_long(&result, &_0, &s, ok);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QLocale_QLocale, toFloat)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval s;
	zval *handle_param = NULL, *s_param = NULL, *ok = NULL, ok_sub, __$null, result, _0;
	zend_long handle;

	ZVAL_UNDEF(&ok_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&s);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(2, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(s)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(ok)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 1, &handle_param, &s_param, &ok);
	zephir_get_strval(&s, s_param);
	if (!ok) {
		ok = &ok_sub;
		ok = &__$null;
	}
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	phpqt_qlocale_to_float(&result, &_0, &s, ok);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QLocale_QLocale, toDouble)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval s;
	zval *handle_param = NULL, *s_param = NULL, *ok = NULL, ok_sub, __$null, result, _0;
	zend_long handle;

	ZVAL_UNDEF(&ok_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&s);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(2, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(s)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(ok)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 1, &handle_param, &s_param, &ok);
	zephir_get_strval(&s, s_param);
	if (!ok) {
		ok = &ok_sub;
		ok = &__$null;
	}
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	phpqt_qlocale_to_double(&result, &_0, &s, ok);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QLocale_QLocale, toShortQStringViewBool)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval s;
	zval *handle_param = NULL, *s_param = NULL, *ok = NULL, ok_sub, __$null, result, _0;
	zend_long handle;

	ZVAL_UNDEF(&ok_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&s);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(2, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(s)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(ok)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 1, &handle_param, &s_param, &ok);
	zephir_get_strval(&s, s_param);
	if (!ok) {
		ok = &ok_sub;
		ok = &__$null;
	}
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	phpqt_qlocale_to_short_q_string_view_bool(&result, &_0, &s, ok);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QLocale_QLocale, toUShortQStringViewBool)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval s;
	zval *handle_param = NULL, *s_param = NULL, *ok = NULL, ok_sub, __$null, result, _0;
	zend_long handle;

	ZVAL_UNDEF(&ok_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&s);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(2, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(s)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(ok)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 1, &handle_param, &s_param, &ok);
	zephir_get_strval(&s, s_param);
	if (!ok) {
		ok = &ok_sub;
		ok = &__$null;
	}
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	phpqt_qlocale_to_u_short_q_string_view_bool(&result, &_0, &s, ok);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QLocale_QLocale, toIntQStringViewBool)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval s;
	zval *handle_param = NULL, *s_param = NULL, *ok = NULL, ok_sub, __$null, result, _0;
	zend_long handle;

	ZVAL_UNDEF(&ok_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&s);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(2, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(s)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(ok)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 1, &handle_param, &s_param, &ok);
	zephir_get_strval(&s, s_param);
	if (!ok) {
		ok = &ok_sub;
		ok = &__$null;
	}
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	phpqt_qlocale_to_int_q_string_view_bool(&result, &_0, &s, ok);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QLocale_QLocale, toUIntQStringViewBool)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval s;
	zval *handle_param = NULL, *s_param = NULL, *ok = NULL, ok_sub, __$null, result, _0;
	zend_long handle;

	ZVAL_UNDEF(&ok_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&s);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(2, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(s)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(ok)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 1, &handle_param, &s_param, &ok);
	zephir_get_strval(&s, s_param);
	if (!ok) {
		ok = &ok_sub;
		ok = &__$null;
	}
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	phpqt_qlocale_to_u_int_q_string_view_bool(&result, &_0, &s, ok);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QLocale_QLocale, toLongQStringViewBool)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval s;
	zval *handle_param = NULL, *s_param = NULL, *ok = NULL, ok_sub, __$null, result, _0;
	zend_long handle;

	ZVAL_UNDEF(&ok_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&s);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(2, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(s)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(ok)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 1, &handle_param, &s_param, &ok);
	zephir_get_strval(&s, s_param);
	if (!ok) {
		ok = &ok_sub;
		ok = &__$null;
	}
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	phpqt_qlocale_to_long_q_string_view_bool(&result, &_0, &s, ok);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QLocale_QLocale, toULongQStringViewBool)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval s;
	zval *handle_param = NULL, *s_param = NULL, *ok = NULL, ok_sub, __$null, result, _0;
	zend_long handle;

	ZVAL_UNDEF(&ok_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&s);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(2, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(s)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(ok)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 1, &handle_param, &s_param, &ok);
	zephir_get_strval(&s, s_param);
	if (!ok) {
		ok = &ok_sub;
		ok = &__$null;
	}
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	phpqt_qlocale_to_u_long_q_string_view_bool(&result, &_0, &s, ok);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QLocale_QLocale, toLongLongQStringViewBool)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval s;
	zval *handle_param = NULL, *s_param = NULL, *ok = NULL, ok_sub, __$null, result, _0;
	zend_long handle;

	ZVAL_UNDEF(&ok_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&s);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(2, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(s)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(ok)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 1, &handle_param, &s_param, &ok);
	zephir_get_strval(&s, s_param);
	if (!ok) {
		ok = &ok_sub;
		ok = &__$null;
	}
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	phpqt_qlocale_to_long_long_q_string_view_bool(&result, &_0, &s, ok);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QLocale_QLocale, toULongLongQStringViewBool)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval s;
	zval *handle_param = NULL, *s_param = NULL, *ok = NULL, ok_sub, __$null, result, _0;
	zend_long handle;

	ZVAL_UNDEF(&ok_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&s);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(2, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(s)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(ok)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 1, &handle_param, &s_param, &ok);
	zephir_get_strval(&s, s_param);
	if (!ok) {
		ok = &ok_sub;
		ok = &__$null;
	}
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	phpqt_qlocale_to_u_long_long_q_string_view_bool(&result, &_0, &s, ok);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QLocale_QLocale, toFloatQStringViewBool)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval s;
	zval *handle_param = NULL, *s_param = NULL, *ok = NULL, ok_sub, __$null, result, _0;
	zend_long handle;

	ZVAL_UNDEF(&ok_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&s);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(2, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(s)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(ok)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 1, &handle_param, &s_param, &ok);
	zephir_get_strval(&s, s_param);
	if (!ok) {
		ok = &ok_sub;
		ok = &__$null;
	}
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	phpqt_qlocale_to_float_q_string_view_bool(&result, &_0, &s, ok);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QLocale_QLocale, toDoubleQStringViewBool)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval s;
	zval *handle_param = NULL, *s_param = NULL, *ok = NULL, ok_sub, __$null, result, _0;
	zend_long handle;

	ZVAL_UNDEF(&ok_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&s);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(2, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(s)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(ok)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 1, &handle_param, &s_param, &ok);
	zephir_get_strval(&s, s_param);
	if (!ok) {
		ok = &ok_sub;
		ok = &__$null;
	}
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	phpqt_qlocale_to_double_q_string_view_bool(&result, &_0, &s, ok);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QLocale_QLocale, toString)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, *i_param = NULL, result, _0, _1;
	zend_long handle, i;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(i)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &i_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, i);
	phpqt_qlocale_to_string(&result, &_0, &_1);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QLocale_QLocale, toStringQulonglong)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, *i_param = NULL, result, _0, _1;
	zend_long handle, i;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(i)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &i_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, i);
	phpqt_qlocale_to_string_qulonglong(&result, &_0, &_1);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QLocale_QLocale, toStringLongInt)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, *i_param = NULL, result, _0, _1;
	zend_long handle, i;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(i)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &i_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, i);
	phpqt_qlocale_to_string_long_int(&result, &_0, &_1);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QLocale_QLocale, toStringUlong)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, *i_param = NULL, result, _0, _1;
	zend_long handle, i;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(i)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &i_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, i);
	phpqt_qlocale_to_string_ulong(&result, &_0, &_1);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QLocale_QLocale, toStringShortInt)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, *i_param = NULL, result, _0, _1;
	zend_long handle, i;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(i)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &i_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, i);
	phpqt_qlocale_to_string_short_int(&result, &_0, &_1);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QLocale_QLocale, toStringUshort)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, *i_param = NULL, result, _0, _1;
	zend_long handle, i;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(i)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &i_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, i);
	phpqt_qlocale_to_string_ushort(&result, &_0, &_1);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QLocale_QLocale, toStringInt)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, *i_param = NULL, result, _0, _1;
	zend_long handle, i;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(i)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &i_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, i);
	phpqt_qlocale_to_string_int(&result, &_0, &_1);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QLocale_QLocale, toStringUint)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, *i_param = NULL, result, _0, _1;
	zend_long handle, i;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(i)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &i_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, i);
	phpqt_qlocale_to_string_uint(&result, &_0, &_1);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QLocale_QLocale, toStringDoubleCharInt)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	double f;
	zval *handle_param = NULL, *f_param = NULL, *format = NULL, format_sub, *precision_param = NULL, __$null, result, _0, _1, _2;
	zend_long handle, precision;

	ZVAL_UNDEF(&format_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(2, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(f)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(format)
		Z_PARAM_LONG(precision)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 2, &handle_param, &f_param, &format, &precision_param);
	f = zephir_get_doubleval(f_param);
	if (!format) {
		format = &format_sub;
		format = &__$null;
	}
	if (!precision_param) {
		precision = 6;
	} else {
		}
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, f);
	ZVAL_LONG(&_2, precision);
	phpqt_qlocale_to_string_double_char_int(&result, &_0, &_1, format, &_2);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QLocale_QLocale, toStringFloatCharInt)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	double f;
	zval *handle_param = NULL, *f_param = NULL, *format = NULL, format_sub, *precision_param = NULL, __$null, result, _0, _1, _2;
	zend_long handle, precision;

	ZVAL_UNDEF(&format_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(2, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(f)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(format)
		Z_PARAM_LONG(precision)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 2, &handle_param, &f_param, &format, &precision_param);
	f = zephir_get_doubleval(f_param);
	if (!format) {
		format = &format_sub;
		format = &__$null;
	}
	if (!precision_param) {
		precision = 6;
	} else {
		}
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, f);
	ZVAL_LONG(&_2, precision);
	phpqt_qlocale_to_string_float_char_int(&result, &_0, &_1, format, &_2);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QLocale_QLocale, toStringQDateQString)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval format;
	zval *handle_param = NULL, *date_param = NULL, *format_param = NULL, result, _0, _1;
	zend_long handle, date;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&format);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(date)
		Z_PARAM_STR(format)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 3, 0, &handle_param, &date_param, &format_param);
	zephir_get_strval(&format, format_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, date);
	phpqt_qlocale_to_string_q_date_q_string(&result, &_0, &_1, &format);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QLocale_QLocale, toStringQTimeQString)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval format;
	zval *handle_param = NULL, *time_param = NULL, *format_param = NULL, result, _0, _1;
	zend_long handle, time;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&format);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(time)
		Z_PARAM_STR(format)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 3, 0, &handle_param, &time_param, &format_param);
	zephir_get_strval(&format, format_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, time);
	phpqt_qlocale_to_string_q_time_q_string(&result, &_0, &_1, &format);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QLocale_QLocale, toStringQDateTimeQString)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval format;
	zval *handle_param = NULL, *dateTime_param = NULL, *format_param = NULL, result, _0, _1;
	zend_long handle, dateTime;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&format);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(dateTime)
		Z_PARAM_STR(format)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 3, 0, &handle_param, &dateTime_param, &format_param);
	zephir_get_strval(&format, format_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, dateTime);
	phpqt_qlocale_to_string_q_date_time_q_string(&result, &_0, &_1, &format);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QLocale_QLocale, toStringQDateQStringView)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval format;
	zval *handle_param = NULL, *date_param = NULL, *format_param = NULL, result, _0, _1;
	zend_long handle, date;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&format);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(date)
		Z_PARAM_STR(format)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 3, 0, &handle_param, &date_param, &format_param);
	zephir_get_strval(&format, format_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, date);
	phpqt_qlocale_to_string_q_date_q_string_view(&result, &_0, &_1, &format);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QLocale_QLocale, toStringQTimeQStringView)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval format;
	zval *handle_param = NULL, *time_param = NULL, *format_param = NULL, result, _0, _1;
	zend_long handle, time;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&format);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(time)
		Z_PARAM_STR(format)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 3, 0, &handle_param, &time_param, &format_param);
	zephir_get_strval(&format, format_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, time);
	phpqt_qlocale_to_string_q_time_q_string_view(&result, &_0, &_1, &format);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QLocale_QLocale, toStringQDateTimeQStringView)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval format;
	zval *handle_param = NULL, *dateTime_param = NULL, *format_param = NULL, result, _0, _1;
	zend_long handle, dateTime;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&format);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(dateTime)
		Z_PARAM_STR(format)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 3, 0, &handle_param, &dateTime_param, &format_param);
	zephir_get_strval(&format, format_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, dateTime);
	phpqt_qlocale_to_string_q_date_time_q_string_view(&result, &_0, &_1, &format);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QLocale_QLocale, toStringQDateQLocaleFormatType)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, *date_param = NULL, *format = NULL, format_sub, __$null, result, _0, _1;
	zend_long handle, date;

	ZVAL_UNDEF(&format_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(2, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(date)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(format)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 1, &handle_param, &date_param, &format);
	if (!format) {
		format = &format_sub;
		format = &__$null;
	}
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, date);
	phpqt_qlocale_to_string_q_date_q_locale_format_type(&result, &_0, &_1, format);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QLocale_QLocale, toStringQTimeQLocaleFormatType)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, *time_param = NULL, *format = NULL, format_sub, __$null, result, _0, _1;
	zend_long handle, time;

	ZVAL_UNDEF(&format_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(2, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(time)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(format)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 1, &handle_param, &time_param, &format);
	if (!format) {
		format = &format_sub;
		format = &__$null;
	}
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, time);
	phpqt_qlocale_to_string_q_time_q_locale_format_type(&result, &_0, &_1, format);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QLocale_QLocale, toStringQDateTimeQLocaleFormatType)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, *dateTime_param = NULL, *format = NULL, format_sub, __$null, result, _0, _1;
	zend_long handle, dateTime;

	ZVAL_UNDEF(&format_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(2, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(dateTime)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(format)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 1, &handle_param, &dateTime_param, &format);
	if (!format) {
		format = &format_sub;
		format = &__$null;
	}
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, dateTime);
	phpqt_qlocale_to_string_q_date_time_q_locale_format_type(&result, &_0, &_1, format);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QLocale_QLocale, toStringQDateQStringViewQCalendar)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval format;
	zval *handle_param = NULL, *date_param = NULL, *format_param = NULL, *cal_param = NULL, result, _0, _1, _2;
	zend_long handle, date, cal;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&format);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(date)
		Z_PARAM_STR(format)
		Z_PARAM_LONG(cal)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 4, 0, &handle_param, &date_param, &format_param, &cal_param);
	zephir_get_strval(&format, format_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, date);
	ZVAL_LONG(&_2, cal);
	phpqt_qlocale_to_string_q_date_q_string_view_q_calendar(&result, &_0, &_1, &format, &_2);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QLocale_QLocale, toStringQDateQLocaleFormatTypeQCalendar)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, *date_param = NULL, *format_param = NULL, *cal_param = NULL, result, _0, _1, _2, _3;
	zend_long handle, date, format, cal;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(date)
		Z_PARAM_LONG(format)
		Z_PARAM_LONG(cal)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 4, 0, &handle_param, &date_param, &format_param, &cal_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, date);
	ZVAL_LONG(&_2, format);
	ZVAL_LONG(&_3, cal);
	phpqt_qlocale_to_string_q_date_q_locale_format_type_q_calendar(&result, &_0, &_1, &_2, &_3);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QLocale_QLocale, toStringQDateTimeQLocaleFormatTypeQCalendar)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, *dateTime_param = NULL, *format_param = NULL, *cal_param = NULL, result, _0, _1, _2, _3;
	zend_long handle, dateTime, format, cal;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(dateTime)
		Z_PARAM_LONG(format)
		Z_PARAM_LONG(cal)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 4, 0, &handle_param, &dateTime_param, &format_param, &cal_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, dateTime);
	ZVAL_LONG(&_2, format);
	ZVAL_LONG(&_3, cal);
	phpqt_qlocale_to_string_q_date_time_q_locale_format_type_q_calendar(&result, &_0, &_1, &_2, &_3);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QLocale_QLocale, toStringQDateTimeQStringViewQCalendar)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval format;
	zval *handle_param = NULL, *dateTime_param = NULL, *format_param = NULL, *cal_param = NULL, result, _0, _1, _2;
	zend_long handle, dateTime, cal;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&format);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(dateTime)
		Z_PARAM_STR(format)
		Z_PARAM_LONG(cal)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 4, 0, &handle_param, &dateTime_param, &format_param, &cal_param);
	zephir_get_strval(&format, format_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, dateTime);
	ZVAL_LONG(&_2, cal);
	phpqt_qlocale_to_string_q_date_time_q_string_view_q_calendar(&result, &_0, &_1, &format, &_2);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QLocale_QLocale, dateFormat)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, *format = NULL, format_sub, __$null, result, _0;
	zend_long handle;

	ZVAL_UNDEF(&format_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(format)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 1, &handle_param, &format);
	if (!format) {
		format = &format_sub;
		format = &__$null;
	}
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	phpqt_qlocale_date_format(&result, &_0, format);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QLocale_QLocale, timeFormat)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, *format = NULL, format_sub, __$null, result, _0;
	zend_long handle;

	ZVAL_UNDEF(&format_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(format)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 1, &handle_param, &format);
	if (!format) {
		format = &format_sub;
		format = &__$null;
	}
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	phpqt_qlocale_time_format(&result, &_0, format);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QLocale_QLocale, dateTimeFormat)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, *format = NULL, format_sub, __$null, result, _0;
	zend_long handle;

	ZVAL_UNDEF(&format_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(format)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 1, &handle_param, &format);
	if (!format) {
		format = &format_sub;
		format = &__$null;
	}
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	phpqt_qlocale_date_time_format(&result, &_0, format);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QLocale_QLocale, toTime)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval string_;
	zval *handle_param = NULL, *string__param = NULL, *arg1 = NULL, arg1_sub, __$null, _0;
	zend_long handle;

	ZVAL_UNDEF(&arg1_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&string_);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(2, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(string_)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(arg1)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 1, &handle_param, &string__param, &arg1);
	zephir_get_strval(&string_, string__param);
	if (!arg1) {
		arg1 = &arg1_sub;
		arg1 = &__$null;
	}
	ZVAL_LONG(&_0, handle);
	RETURN_MM_LONG(phpqt_qlocale_to_time(&_0, &string_, arg1));
}

PHP_METHOD(Qt_Core_QLocale_QLocale, toTimeQStringQString)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval string_, format;
	zval *handle_param = NULL, *string__param = NULL, *format_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&string_);
	ZVAL_UNDEF(&format);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(string_)
		Z_PARAM_STR(format)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 3, 0, &handle_param, &string__param, &format_param);
	zephir_get_strval(&string_, string__param);
	zephir_get_strval(&format, format_param);
	ZVAL_LONG(&_0, handle);
	RETURN_MM_LONG(phpqt_qlocale_to_time_q_string_q_string(&_0, &string_, &format));
}

PHP_METHOD(Qt_Core_QLocale_QLocale, toDate)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval string_;
	zval *handle_param = NULL, *string__param = NULL, *arg1 = NULL, arg1_sub, *baseYear = NULL, baseYear_sub, __$null, _0;
	zend_long handle;

	ZVAL_UNDEF(&arg1_sub);
	ZVAL_UNDEF(&baseYear_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&string_);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(2, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(string_)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(arg1)
		Z_PARAM_ZVAL_OR_NULL(baseYear)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 2, &handle_param, &string__param, &arg1, &baseYear);
	zephir_get_strval(&string_, string__param);
	if (!arg1) {
		arg1 = &arg1_sub;
		arg1 = &__$null;
	}
	if (!baseYear) {
		baseYear = &baseYear_sub;
		baseYear = &__$null;
	}
	ZVAL_LONG(&_0, handle);
	RETURN_MM_LONG(phpqt_qlocale_to_date(&_0, &string_, arg1, baseYear));
}

PHP_METHOD(Qt_Core_QLocale_QLocale, toDateQStringQStringInt)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval string_, format;
	zval *handle_param = NULL, *string__param = NULL, *format_param = NULL, *baseYear = NULL, baseYear_sub, __$null, _0;
	zend_long handle;

	ZVAL_UNDEF(&baseYear_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&string_);
	ZVAL_UNDEF(&format);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(3, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(string_)
		Z_PARAM_STR(format)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(baseYear)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 3, 1, &handle_param, &string__param, &format_param, &baseYear);
	zephir_get_strval(&string_, string__param);
	zephir_get_strval(&format, format_param);
	if (!baseYear) {
		baseYear = &baseYear_sub;
		baseYear = &__$null;
	}
	ZVAL_LONG(&_0, handle);
	RETURN_MM_LONG(phpqt_qlocale_to_date_q_string_q_string_int(&_0, &string_, &format, baseYear));
}

PHP_METHOD(Qt_Core_QLocale_QLocale, toDateTime)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval string_;
	zval *handle_param = NULL, *string__param = NULL, *format = NULL, format_sub, *baseYear = NULL, baseYear_sub, __$null, _0;
	zend_long handle;

	ZVAL_UNDEF(&format_sub);
	ZVAL_UNDEF(&baseYear_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&string_);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(2, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(string_)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(format)
		Z_PARAM_ZVAL_OR_NULL(baseYear)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 2, &handle_param, &string__param, &format, &baseYear);
	zephir_get_strval(&string_, string__param);
	if (!format) {
		format = &format_sub;
		format = &__$null;
	}
	if (!baseYear) {
		baseYear = &baseYear_sub;
		baseYear = &__$null;
	}
	ZVAL_LONG(&_0, handle);
	RETURN_MM_LONG(phpqt_qlocale_to_date_time(&_0, &string_, format, baseYear));
}

PHP_METHOD(Qt_Core_QLocale_QLocale, toDateTimeQStringQStringInt)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval string_, format;
	zval *handle_param = NULL, *string__param = NULL, *format_param = NULL, *baseYear = NULL, baseYear_sub, __$null, _0;
	zend_long handle;

	ZVAL_UNDEF(&baseYear_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&string_);
	ZVAL_UNDEF(&format);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(3, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(string_)
		Z_PARAM_STR(format)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(baseYear)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 3, 1, &handle_param, &string__param, &format_param, &baseYear);
	zephir_get_strval(&string_, string__param);
	zephir_get_strval(&format, format_param);
	if (!baseYear) {
		baseYear = &baseYear_sub;
		baseYear = &__$null;
	}
	ZVAL_LONG(&_0, handle);
	RETURN_MM_LONG(phpqt_qlocale_to_date_time_q_string_q_string_int(&_0, &string_, &format, baseYear));
}

PHP_METHOD(Qt_Core_QLocale_QLocale, toDateQStringQLocaleFormatTypeQCalendarInt)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval string_;
	zval *handle_param = NULL, *string__param = NULL, *format_param = NULL, *cal_param = NULL, *baseYear = NULL, baseYear_sub, __$null, _0, _1, _2;
	zend_long handle, format, cal;

	ZVAL_UNDEF(&baseYear_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&string_);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(4, 5)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(string_)
		Z_PARAM_LONG(format)
		Z_PARAM_LONG(cal)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(baseYear)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 4, 1, &handle_param, &string__param, &format_param, &cal_param, &baseYear);
	zephir_get_strval(&string_, string__param);
	if (!baseYear) {
		baseYear = &baseYear_sub;
		baseYear = &__$null;
	}
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, format);
	ZVAL_LONG(&_2, cal);
	RETURN_MM_LONG(phpqt_qlocale_to_date_q_string_q_locale_format_type_q_calendar_int(&_0, &string_, &_1, &_2, baseYear));
}

PHP_METHOD(Qt_Core_QLocale_QLocale, toDateQStringQStringQCalendarInt)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval string_, format;
	zval *handle_param = NULL, *string__param = NULL, *format_param = NULL, *cal_param = NULL, *baseYear = NULL, baseYear_sub, __$null, _0, _1;
	zend_long handle, cal;

	ZVAL_UNDEF(&baseYear_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&string_);
	ZVAL_UNDEF(&format);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(4, 5)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(string_)
		Z_PARAM_STR(format)
		Z_PARAM_LONG(cal)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(baseYear)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 4, 1, &handle_param, &string__param, &format_param, &cal_param, &baseYear);
	zephir_get_strval(&string_, string__param);
	zephir_get_strval(&format, format_param);
	if (!baseYear) {
		baseYear = &baseYear_sub;
		baseYear = &__$null;
	}
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, cal);
	RETURN_MM_LONG(phpqt_qlocale_to_date_q_string_q_string_q_calendar_int(&_0, &string_, &format, &_1, baseYear));
}

PHP_METHOD(Qt_Core_QLocale_QLocale, toDateTimeQStringQLocaleFormatTypeQCalendarInt)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval string_;
	zval *handle_param = NULL, *string__param = NULL, *format_param = NULL, *cal_param = NULL, *baseYear = NULL, baseYear_sub, __$null, _0, _1, _2;
	zend_long handle, format, cal;

	ZVAL_UNDEF(&baseYear_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&string_);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(4, 5)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(string_)
		Z_PARAM_LONG(format)
		Z_PARAM_LONG(cal)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(baseYear)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 4, 1, &handle_param, &string__param, &format_param, &cal_param, &baseYear);
	zephir_get_strval(&string_, string__param);
	if (!baseYear) {
		baseYear = &baseYear_sub;
		baseYear = &__$null;
	}
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, format);
	ZVAL_LONG(&_2, cal);
	RETURN_MM_LONG(phpqt_qlocale_to_date_time_q_string_q_locale_format_type_q_calendar_int(&_0, &string_, &_1, &_2, baseYear));
}

PHP_METHOD(Qt_Core_QLocale_QLocale, toDateTimeQStringQStringQCalendarInt)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval string_, format;
	zval *handle_param = NULL, *string__param = NULL, *format_param = NULL, *cal_param = NULL, *baseYear = NULL, baseYear_sub, __$null, _0, _1;
	zend_long handle, cal;

	ZVAL_UNDEF(&baseYear_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&string_);
	ZVAL_UNDEF(&format);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(4, 5)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(string_)
		Z_PARAM_STR(format)
		Z_PARAM_LONG(cal)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(baseYear)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 4, 1, &handle_param, &string__param, &format_param, &cal_param, &baseYear);
	zephir_get_strval(&string_, string__param);
	zephir_get_strval(&format, format_param);
	if (!baseYear) {
		baseYear = &baseYear_sub;
		baseYear = &__$null;
	}
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, cal);
	RETURN_MM_LONG(phpqt_qlocale_to_date_time_q_string_q_string_q_calendar_int(&_0, &string_, &format, &_1, baseYear));
}

PHP_METHOD(Qt_Core_QLocale_QLocale, decimalPoint)
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
	phpqt_qlocale_decimal_point(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QLocale_QLocale, groupSeparator)
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
	phpqt_qlocale_group_separator(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QLocale_QLocale, percent)
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
	phpqt_qlocale_percent(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QLocale_QLocale, zeroDigit)
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
	phpqt_qlocale_zero_digit(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QLocale_QLocale, negativeSign)
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
	phpqt_qlocale_negative_sign(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QLocale_QLocale, positiveSign)
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
	phpqt_qlocale_positive_sign(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QLocale_QLocale, exponential)
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
	phpqt_qlocale_exponential(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QLocale_QLocale, monthName)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, *arg0_param = NULL, *format = NULL, format_sub, __$null, result, _0, _1;
	zend_long handle, arg0;

	ZVAL_UNDEF(&format_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(2, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(arg0)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(format)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 1, &handle_param, &arg0_param, &format);
	if (!format) {
		format = &format_sub;
		format = &__$null;
	}
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, arg0);
	phpqt_qlocale_month_name(&result, &_0, &_1, format);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QLocale_QLocale, standaloneMonthName)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, *arg0_param = NULL, *format = NULL, format_sub, __$null, result, _0, _1;
	zend_long handle, arg0;

	ZVAL_UNDEF(&format_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(2, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(arg0)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(format)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 1, &handle_param, &arg0_param, &format);
	if (!format) {
		format = &format_sub;
		format = &__$null;
	}
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, arg0);
	phpqt_qlocale_standalone_month_name(&result, &_0, &_1, format);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QLocale_QLocale, dayName)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, *arg0_param = NULL, *format = NULL, format_sub, __$null, result, _0, _1;
	zend_long handle, arg0;

	ZVAL_UNDEF(&format_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(2, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(arg0)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(format)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 1, &handle_param, &arg0_param, &format);
	if (!format) {
		format = &format_sub;
		format = &__$null;
	}
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, arg0);
	phpqt_qlocale_day_name(&result, &_0, &_1, format);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QLocale_QLocale, standaloneDayName)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, *arg0_param = NULL, *format = NULL, format_sub, __$null, result, _0, _1;
	zend_long handle, arg0;

	ZVAL_UNDEF(&format_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(2, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(arg0)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(format)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 1, &handle_param, &arg0_param, &format);
	if (!format) {
		format = &format_sub;
		format = &__$null;
	}
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, arg0);
	phpqt_qlocale_standalone_day_name(&result, &_0, &_1, format);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QLocale_QLocale, firstDayOfWeek)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qlocale_first_day_of_week(&_0));
}

PHP_METHOD(Qt_Core_QLocale_QLocale, weekdays)
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
	phpqt_qlocale_weekdays(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QLocale_QLocale, amText)
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
	phpqt_qlocale_am_text(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QLocale_QLocale, pmText)
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
	phpqt_qlocale_pm_text(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QLocale_QLocale, measurementSystem)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qlocale_measurement_system(&_0));
}

PHP_METHOD(Qt_Core_QLocale_QLocale, collation)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qlocale_collation(&_0));
}

PHP_METHOD(Qt_Core_QLocale_QLocale, textDirection)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qlocale_text_direction(&_0));
}

PHP_METHOD(Qt_Core_QLocale_QLocale, toUpper)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval str;
	zval *handle_param = NULL, *str_param = NULL, result, _0;
	zend_long handle;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&str);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(str)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &str_param);
	zephir_get_strval(&str, str_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	phpqt_qlocale_to_upper(&result, &_0, &str);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QLocale_QLocale, toLower)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval str;
	zval *handle_param = NULL, *str_param = NULL, result, _0;
	zend_long handle;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&str);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(str)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &str_param);
	zephir_get_strval(&str, str_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	phpqt_qlocale_to_lower(&result, &_0, &str);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QLocale_QLocale, currencySymbol)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, *arg0 = NULL, arg0_sub, __$null, result, _0;
	zend_long handle;

	ZVAL_UNDEF(&arg0_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(arg0)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 1, &handle_param, &arg0);
	if (!arg0) {
		arg0 = &arg0_sub;
		arg0 = &__$null;
	}
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	phpqt_qlocale_currency_symbol(&result, &_0, arg0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QLocale_QLocale, toCurrencyString)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval symbol;
	zval *handle_param = NULL, *arg0_param = NULL, *symbol_param = NULL, result, _0, _1;
	zend_long handle, arg0;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&symbol);
	ZEND_PARSE_PARAMETERS_START(2, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(arg0)
		Z_PARAM_OPTIONAL
		Z_PARAM_STR(symbol)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 1, &handle_param, &arg0_param, &symbol_param);
	if (!symbol_param) {
		ZEPHIR_INIT_VAR(&symbol);
		ZVAL_STRING(&symbol, "");
	} else {
		zephir_get_strval(&symbol, symbol_param);
	}
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, arg0);
	phpqt_qlocale_to_currency_string(&result, &_0, &_1, &symbol);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QLocale_QLocale, toCurrencyStringQulonglongQString)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval symbol;
	zval *handle_param = NULL, *arg0_param = NULL, *symbol_param = NULL, result, _0, _1;
	zend_long handle, arg0;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&symbol);
	ZEND_PARSE_PARAMETERS_START(2, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(arg0)
		Z_PARAM_OPTIONAL
		Z_PARAM_STR(symbol)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 1, &handle_param, &arg0_param, &symbol_param);
	if (!symbol_param) {
		ZEPHIR_INIT_VAR(&symbol);
		ZVAL_STRING(&symbol, "");
	} else {
		zephir_get_strval(&symbol, symbol_param);
	}
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, arg0);
	phpqt_qlocale_to_currency_string_qulonglong_q_string(&result, &_0, &_1, &symbol);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QLocale_QLocale, toCurrencyStringShortIntQString)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval symbol;
	zval *handle_param = NULL, *i_param = NULL, *symbol_param = NULL, result, _0, _1;
	zend_long handle, i;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&symbol);
	ZEND_PARSE_PARAMETERS_START(2, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(i)
		Z_PARAM_OPTIONAL
		Z_PARAM_STR(symbol)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 1, &handle_param, &i_param, &symbol_param);
	if (!symbol_param) {
		ZEPHIR_INIT_VAR(&symbol);
		ZVAL_STRING(&symbol, "");
	} else {
		zephir_get_strval(&symbol, symbol_param);
	}
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, i);
	phpqt_qlocale_to_currency_string_short_int_q_string(&result, &_0, &_1, &symbol);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QLocale_QLocale, toCurrencyStringUshortQString)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval symbol;
	zval *handle_param = NULL, *i_param = NULL, *symbol_param = NULL, result, _0, _1;
	zend_long handle, i;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&symbol);
	ZEND_PARSE_PARAMETERS_START(2, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(i)
		Z_PARAM_OPTIONAL
		Z_PARAM_STR(symbol)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 1, &handle_param, &i_param, &symbol_param);
	if (!symbol_param) {
		ZEPHIR_INIT_VAR(&symbol);
		ZVAL_STRING(&symbol, "");
	} else {
		zephir_get_strval(&symbol, symbol_param);
	}
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, i);
	phpqt_qlocale_to_currency_string_ushort_q_string(&result, &_0, &_1, &symbol);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QLocale_QLocale, toCurrencyStringIntQString)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval symbol;
	zval *handle_param = NULL, *i_param = NULL, *symbol_param = NULL, result, _0, _1;
	zend_long handle, i;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&symbol);
	ZEND_PARSE_PARAMETERS_START(2, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(i)
		Z_PARAM_OPTIONAL
		Z_PARAM_STR(symbol)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 1, &handle_param, &i_param, &symbol_param);
	if (!symbol_param) {
		ZEPHIR_INIT_VAR(&symbol);
		ZVAL_STRING(&symbol, "");
	} else {
		zephir_get_strval(&symbol, symbol_param);
	}
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, i);
	phpqt_qlocale_to_currency_string_int_q_string(&result, &_0, &_1, &symbol);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QLocale_QLocale, toCurrencyStringUintQString)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval symbol;
	zval *handle_param = NULL, *i_param = NULL, *symbol_param = NULL, result, _0, _1;
	zend_long handle, i;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&symbol);
	ZEND_PARSE_PARAMETERS_START(2, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(i)
		Z_PARAM_OPTIONAL
		Z_PARAM_STR(symbol)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 1, &handle_param, &i_param, &symbol_param);
	if (!symbol_param) {
		ZEPHIR_INIT_VAR(&symbol);
		ZVAL_STRING(&symbol, "");
	} else {
		zephir_get_strval(&symbol, symbol_param);
	}
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, i);
	phpqt_qlocale_to_currency_string_uint_q_string(&result, &_0, &_1, &symbol);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QLocale_QLocale, toCurrencyStringDoubleQStringInt)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval symbol;
	double arg0;
	zval *handle_param = NULL, *arg0_param = NULL, *symbol_param = NULL, *precision_param = NULL, result, _0, _1, _2;
	zend_long handle, precision;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&symbol);
	ZEND_PARSE_PARAMETERS_START(2, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(arg0)
		Z_PARAM_OPTIONAL
		Z_PARAM_STR(symbol)
		Z_PARAM_LONG(precision)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 2, &handle_param, &arg0_param, &symbol_param, &precision_param);
	arg0 = zephir_get_doubleval(arg0_param);
	if (!symbol_param) {
		ZEPHIR_INIT_VAR(&symbol);
		ZVAL_STRING(&symbol, "");
	} else {
		zephir_get_strval(&symbol, symbol_param);
	}
	if (!precision_param) {
		precision = -1;
	} else {
		}
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, arg0);
	ZVAL_LONG(&_2, precision);
	phpqt_qlocale_to_currency_string_double_q_string_int(&result, &_0, &_1, &symbol, &_2);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QLocale_QLocale, toCurrencyStringFloatQStringInt)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval symbol;
	double i;
	zval *handle_param = NULL, *i_param = NULL, *symbol_param = NULL, *precision_param = NULL, result, _0, _1, _2;
	zend_long handle, precision;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&symbol);
	ZEND_PARSE_PARAMETERS_START(2, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(i)
		Z_PARAM_OPTIONAL
		Z_PARAM_STR(symbol)
		Z_PARAM_LONG(precision)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 2, &handle_param, &i_param, &symbol_param, &precision_param);
	i = zephir_get_doubleval(i_param);
	if (!symbol_param) {
		ZEPHIR_INIT_VAR(&symbol);
		ZVAL_STRING(&symbol, "");
	} else {
		zephir_get_strval(&symbol, symbol_param);
	}
	if (!precision_param) {
		precision = -1;
	} else {
		}
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, i);
	ZVAL_LONG(&_2, precision);
	phpqt_qlocale_to_currency_string_float_q_string_int(&result, &_0, &_1, &symbol, &_2);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QLocale_QLocale, formattedDataSize)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, *bytes_param = NULL, *precision_param = NULL, *format = NULL, format_sub, __$null, result, _0, _1, _2;
	zend_long handle, bytes, precision;

	ZVAL_UNDEF(&format_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(2, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(bytes)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(precision)
		Z_PARAM_ZVAL_OR_NULL(format)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 2, &handle_param, &bytes_param, &precision_param, &format);
	if (!precision_param) {
		precision = 2;
	} else {
		}
	if (!format) {
		format = &format_sub;
		format = &__$null;
	}
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, bytes);
	ZVAL_LONG(&_2, precision);
	phpqt_qlocale_formatted_data_size(&result, &_0, &_1, &_2, format);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QLocale_QLocale, uiLanguages)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, *separator = NULL, separator_sub, __$null, result, _0;
	zend_long handle;

	ZVAL_UNDEF(&separator_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(separator)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 1, &handle_param, &separator);
	if (!separator) {
		separator = &separator_sub;
		separator = &__$null;
	}
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	phpqt_qlocale_ui_languages(&result, &_0, separator);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QLocale_QLocale, languageToCode)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *language_param = NULL, *codeTypes = NULL, codeTypes_sub, __$null, result, _0;
	zend_long language;

	ZVAL_UNDEF(&codeTypes_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_LONG(language)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(codeTypes)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 1, &language_param, &codeTypes);
	if (!codeTypes) {
		codeTypes = &codeTypes_sub;
		codeTypes = &__$null;
	}
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, language);
	phpqt_qlocale_language_to_code(&result, &_0, codeTypes);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QLocale_QLocale, codeToLanguage)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *languageCode_param = NULL, *codeTypes = NULL, codeTypes_sub, __$null;
	zval languageCode;

	ZVAL_UNDEF(&languageCode);
	ZVAL_UNDEF(&codeTypes_sub);
	ZVAL_NULL(&__$null);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_STR(languageCode)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(codeTypes)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 1, &languageCode_param, &codeTypes);
	zephir_get_strval(&languageCode, languageCode_param);
	if (!codeTypes) {
		codeTypes = &codeTypes_sub;
		codeTypes = &__$null;
	}
	RETURN_MM_LONG(phpqt_qlocale_code_to_language(&languageCode, codeTypes));
}

PHP_METHOD(Qt_Core_QLocale_QLocale, territoryToCode)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *territory_param = NULL, result, _0;
	zend_long territory;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(territory)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &territory_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, territory);
	phpqt_qlocale_territory_to_code(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QLocale_QLocale, codeToTerritory)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *territoryCode_param = NULL;
	zval territoryCode;

	ZVAL_UNDEF(&territoryCode);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_STR(territoryCode)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &territoryCode_param);
	zephir_get_strval(&territoryCode, territoryCode_param);
	RETURN_MM_LONG(phpqt_qlocale_code_to_territory(&territoryCode));
}

PHP_METHOD(Qt_Core_QLocale_QLocale, scriptToCode)
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
	phpqt_qlocale_script_to_code(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QLocale_QLocale, codeToScript)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *scriptCode_param = NULL;
	zval scriptCode;

	ZVAL_UNDEF(&scriptCode);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_STR(scriptCode)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &scriptCode_param);
	zephir_get_strval(&scriptCode, scriptCode_param);
	RETURN_MM_LONG(phpqt_qlocale_code_to_script(&scriptCode));
}

PHP_METHOD(Qt_Core_QLocale_QLocale, languageToString)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *language_param = NULL, result, _0;
	zend_long language;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(language)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &language_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, language);
	phpqt_qlocale_language_to_string(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QLocale_QLocale, territoryToString)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *territory_param = NULL, result, _0;
	zend_long territory;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(territory)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &territory_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, territory);
	phpqt_qlocale_territory_to_string(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QLocale_QLocale, scriptToString)
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
	phpqt_qlocale_script_to_string(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QLocale_QLocale, setDefault)
{
	zval *locale_param = NULL, _0;
	zend_long locale;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(locale)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &locale_param);
	ZVAL_LONG(&_0, locale);
	phpqt_qlocale_set_default(&_0);
}

PHP_METHOD(Qt_Core_QLocale_QLocale, c)
{

	RETURN_LONG(phpqt_qlocale_c());
}

PHP_METHOD(Qt_Core_QLocale_QLocale, system)
{

	RETURN_LONG(phpqt_qlocale_system());
}

PHP_METHOD(Qt_Core_QLocale_QLocale, matchingLocales)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *language_param = NULL, *script_param = NULL, *territory_param = NULL, result, _0, _1, _2;
	zend_long language, script, territory;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(language)
		Z_PARAM_LONG(script)
		Z_PARAM_LONG(territory)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 3, 0, &language_param, &script_param, &territory_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, language);
	ZVAL_LONG(&_1, script);
	ZVAL_LONG(&_2, territory);
	phpqt_qlocale_matching_locales(&result, &_0, &_1, &_2);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QLocale_QLocale, setNumberOptions)
{
	zval *handle_param = NULL, *options_param = NULL, _0, _1;
	zend_long handle, options;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(options)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &options_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, options);
	phpqt_qlocale_set_number_options(&_0, &_1);
}

PHP_METHOD(Qt_Core_QLocale_QLocale, numberOptions)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qlocale_number_options(&_0));
}

PHP_METHOD(Qt_Core_QLocale_QLocale, quoteString)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval str;
	zval *handle_param = NULL, *str_param = NULL, *style = NULL, style_sub, __$null, result, _0;
	zend_long handle;

	ZVAL_UNDEF(&style_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&str);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(2, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(str)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(style)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 1, &handle_param, &str_param, &style);
	zephir_get_strval(&str, str_param);
	if (!style) {
		style = &style_sub;
		style = &__$null;
	}
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	phpqt_qlocale_quote_string(&result, &_0, &str, style);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QLocale_QLocale, quoteStringQStringViewQLocaleQuotationStyle)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval str;
	zval *handle_param = NULL, *str_param = NULL, *style = NULL, style_sub, __$null, result, _0;
	zend_long handle;

	ZVAL_UNDEF(&style_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&str);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(2, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(str)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(style)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 1, &handle_param, &str_param, &style);
	zephir_get_strval(&str, str_param);
	if (!style) {
		style = &style_sub;
		style = &__$null;
	}
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	phpqt_qlocale_quote_string_q_string_view_q_locale_quotation_style(&result, &_0, &str, style);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QLocale_QLocale, createSeparatedList)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval strl;
	zval *handle_param = NULL, *strl_param = NULL, result, _0;
	zend_long handle;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&strl);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ARRAY(strl)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &strl_param);
	zephir_get_arrval(&strl, strl_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	phpqt_qlocale_create_separated_list(&result, &_0, &strl);
	RETURN_CCTOR(&result);
}

