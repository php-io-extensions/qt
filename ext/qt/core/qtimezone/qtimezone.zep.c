
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
#include "src/core-qtimezone.h"
#include "kernel/object.h"
#include "kernel/operators.h"
#include "kernel/memory.h"
#include "kernel/string.h"


ZEPHIR_INIT_CLASS(Qt_Core_QTimeZone_QTimeZone)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Core\\QTimeZone, QTimeZone, qt, core_qtimezone_qtimezone, qt_core_qtimezone_qtimezone_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Core_QTimeZone_QTimeZone, MinUtcOffsetSecs)
{

	RETURN_LONG(phpqt_qtimezone_min_utc_offset_secs());
}

PHP_METHOD(Qt_Core_QTimeZone_QTimeZone, MaxUtcOffsetSecs)
{

	RETURN_LONG(phpqt_qtimezone_max_utc_offset_secs());
}

PHP_METHOD(Qt_Core_QTimeZone_QTimeZone, new_)
{

	RETURN_LONG(phpqt_qtimezone_new());
}

PHP_METHOD(Qt_Core_QTimeZone_QTimeZone, newQTimeZoneInitialization)
{
	zval *spec_param = NULL, _0;
	zend_long spec;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(spec)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &spec_param);
	ZVAL_LONG(&_0, spec);
	RETURN_LONG(phpqt_qtimezone_new_q_time_zone_initialization(&_0));
}

PHP_METHOD(Qt_Core_QTimeZone_QTimeZone, newInt)
{
	zval *offsetSeconds_param = NULL, _0;
	zend_long offsetSeconds;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(offsetSeconds)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &offsetSeconds_param);
	ZVAL_LONG(&_0, offsetSeconds);
	RETURN_LONG(phpqt_qtimezone_new_int(&_0));
}

PHP_METHOD(Qt_Core_QTimeZone_QTimeZone, newQByteArray)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *ianaId_param = NULL;
	zval ianaId;

	ZVAL_UNDEF(&ianaId);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_STR(ianaId)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &ianaId_param);
	zephir_get_strval(&ianaId, ianaId_param);
	RETURN_MM_LONG(phpqt_qtimezone_new_q_byte_array(&ianaId));
}

PHP_METHOD(Qt_Core_QTimeZone_QTimeZone, newQByteArrayIntQStringQStringQLocaleTerritoryQString)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long offsetSeconds;
	zval *zoneId_param = NULL, *offsetSeconds_param = NULL, *name_param = NULL, *abbreviation_param = NULL, *territory = NULL, territory_sub, *comment_param = NULL, __$null, _0;
	zval zoneId, name, abbreviation, comment;

	ZVAL_UNDEF(&zoneId);
	ZVAL_UNDEF(&name);
	ZVAL_UNDEF(&abbreviation);
	ZVAL_UNDEF(&comment);
	ZVAL_UNDEF(&territory_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(4, 6)
		Z_PARAM_STR(zoneId)
		Z_PARAM_LONG(offsetSeconds)
		Z_PARAM_STR(name)
		Z_PARAM_STR(abbreviation)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(territory)
		Z_PARAM_STR(comment)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 4, 2, &zoneId_param, &offsetSeconds_param, &name_param, &abbreviation_param, &territory, &comment_param);
	zephir_get_strval(&zoneId, zoneId_param);
	zephir_get_strval(&name, name_param);
	zephir_get_strval(&abbreviation, abbreviation_param);
	if (!territory) {
		territory = &territory_sub;
		territory = &__$null;
	}
	if (!comment_param) {
		ZEPHIR_INIT_VAR(&comment);
		ZVAL_STRING(&comment, "");
	} else {
		zephir_get_strval(&comment, comment_param);
	}
	ZVAL_LONG(&_0, offsetSeconds);
	RETURN_MM_LONG(phpqt_qtimezone_new_q_byte_array_int_q_string_q_string_q_locale_territory_q_string(&zoneId, &_0, &name, &abbreviation, territory, &comment));
}

PHP_METHOD(Qt_Core_QTimeZone_QTimeZone, newQTimeZone)
{
	zval *other_param = NULL, _0;
	zend_long other;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(other)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &other_param);
	ZVAL_LONG(&_0, other);
	RETURN_LONG(phpqt_qtimezone_new_q_time_zone(&_0));
}

PHP_METHOD(Qt_Core_QTimeZone_QTimeZone, swap)
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
	phpqt_qtimezone_swap(&_0, &_1);
}

PHP_METHOD(Qt_Core_QTimeZone_QTimeZone, isValid)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qtimezone_is_valid(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QTimeZone_QTimeZone, fromSecondsAheadOfUtc)
{
	zval *offset_param = NULL, _0;
	zend_long offset;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(offset)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &offset_param);
	ZVAL_LONG(&_0, offset);
	RETURN_LONG(phpqt_qtimezone_from_seconds_ahead_of_utc(&_0));
}

PHP_METHOD(Qt_Core_QTimeZone_QTimeZone, timeSpec)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qtimezone_time_spec(&_0));
}

PHP_METHOD(Qt_Core_QTimeZone_QTimeZone, fixedSecondsAheadOfUtc)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qtimezone_fixed_seconds_ahead_of_utc(&_0));
}

PHP_METHOD(Qt_Core_QTimeZone_QTimeZone, isUtcOrFixedOffset)
{
	zval *spec_param = NULL, _0;
	zend_long spec, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(spec)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &spec_param);
	ZVAL_LONG(&_0, spec);
	r = phpqt_qtimezone_is_utc_or_fixed_offset(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QTimeZone_QTimeZone, isUtcOrFixedOffset2)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qtimezone_is_utc_or_fixed_offset2(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QTimeZone_QTimeZone, asBackendZone)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qtimezone_as_backend_zone(&_0));
}

PHP_METHOD(Qt_Core_QTimeZone_QTimeZone, hasAlternativeName)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval alias;
	zval *handle_param = NULL, *alias_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&alias);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(alias)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &alias_param);
	zephir_get_strval(&alias, alias_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qtimezone_has_alternative_name(&_0, &alias);
	RETURN_MM_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QTimeZone_QTimeZone, id)
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
	phpqt_qtimezone_id(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QTimeZone_QTimeZone, territory)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qtimezone_territory(&_0));
}

PHP_METHOD(Qt_Core_QTimeZone_QTimeZone, comment)
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
	phpqt_qtimezone_comment(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QTimeZone_QTimeZone, displayName)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, *atDateTime_param = NULL, *nameType = NULL, nameType_sub, *locale = NULL, locale_sub, __$null, result, _0, _1;
	zend_long handle, atDateTime;

	ZVAL_UNDEF(&nameType_sub);
	ZVAL_UNDEF(&locale_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(2, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(atDateTime)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(nameType)
		Z_PARAM_ZVAL_OR_NULL(locale)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 2, &handle_param, &atDateTime_param, &nameType, &locale);
	if (!nameType) {
		nameType = &nameType_sub;
		nameType = &__$null;
	}
	if (!locale) {
		locale = &locale_sub;
		locale = &__$null;
	}
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, atDateTime);
	phpqt_qtimezone_display_name(&result, &_0, &_1, nameType, locale);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QTimeZone_QTimeZone, displayNameQTimeZoneTimeTypeQTimeZoneNameTypeQLocale)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, *timeType_param = NULL, *nameType = NULL, nameType_sub, *locale = NULL, locale_sub, __$null, result, _0, _1;
	zend_long handle, timeType;

	ZVAL_UNDEF(&nameType_sub);
	ZVAL_UNDEF(&locale_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(2, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(timeType)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(nameType)
		Z_PARAM_ZVAL_OR_NULL(locale)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 2, &handle_param, &timeType_param, &nameType, &locale);
	if (!nameType) {
		nameType = &nameType_sub;
		nameType = &__$null;
	}
	if (!locale) {
		locale = &locale_sub;
		locale = &__$null;
	}
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, timeType);
	phpqt_qtimezone_display_name_q_time_zone_time_type_q_time_zone_name_type_q_locale(&result, &_0, &_1, nameType, locale);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QTimeZone_QTimeZone, abbreviation)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, *atDateTime_param = NULL, result, _0, _1;
	zend_long handle, atDateTime;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(atDateTime)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &atDateTime_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, atDateTime);
	phpqt_qtimezone_abbreviation(&result, &_0, &_1);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QTimeZone_QTimeZone, offsetFromUtc)
{
	zval *handle_param = NULL, *atDateTime_param = NULL, _0, _1;
	zend_long handle, atDateTime;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(atDateTime)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &atDateTime_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, atDateTime);
	RETURN_LONG(phpqt_qtimezone_offset_from_utc(&_0, &_1));
}

PHP_METHOD(Qt_Core_QTimeZone_QTimeZone, standardTimeOffset)
{
	zval *handle_param = NULL, *atDateTime_param = NULL, _0, _1;
	zend_long handle, atDateTime;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(atDateTime)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &atDateTime_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, atDateTime);
	RETURN_LONG(phpqt_qtimezone_standard_time_offset(&_0, &_1));
}

PHP_METHOD(Qt_Core_QTimeZone_QTimeZone, daylightTimeOffset)
{
	zval *handle_param = NULL, *atDateTime_param = NULL, _0, _1;
	zend_long handle, atDateTime;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(atDateTime)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &atDateTime_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, atDateTime);
	RETURN_LONG(phpqt_qtimezone_daylight_time_offset(&_0, &_1));
}

PHP_METHOD(Qt_Core_QTimeZone_QTimeZone, hasDaylightTime)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qtimezone_has_daylight_time(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QTimeZone_QTimeZone, isDaylightTime)
{
	zval *handle_param = NULL, *atDateTime_param = NULL, _0, _1;
	zend_long handle, atDateTime, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(atDateTime)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &atDateTime_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, atDateTime);
	r = phpqt_qtimezone_is_daylight_time(&_0, &_1);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QTimeZone_QTimeZone, offsetData)
{
	zval *handle_param = NULL, *forDateTime_param = NULL, _0, _1;
	zend_long handle, forDateTime;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(forDateTime)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &forDateTime_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, forDateTime);
	RETURN_LONG(phpqt_qtimezone_offset_data(&_0, &_1));
}

PHP_METHOD(Qt_Core_QTimeZone_QTimeZone, hasTransitions)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qtimezone_has_transitions(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QTimeZone_QTimeZone, nextTransition)
{
	zval *handle_param = NULL, *afterDateTime_param = NULL, _0, _1;
	zend_long handle, afterDateTime;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(afterDateTime)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &afterDateTime_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, afterDateTime);
	RETURN_LONG(phpqt_qtimezone_next_transition(&_0, &_1));
}

PHP_METHOD(Qt_Core_QTimeZone_QTimeZone, previousTransition)
{
	zval *handle_param = NULL, *beforeDateTime_param = NULL, _0, _1;
	zend_long handle, beforeDateTime;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(beforeDateTime)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &beforeDateTime_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, beforeDateTime);
	RETURN_LONG(phpqt_qtimezone_previous_transition(&_0, &_1));
}

PHP_METHOD(Qt_Core_QTimeZone_QTimeZone, transitions)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, *fromDateTime_param = NULL, *toDateTime_param = NULL, result, _0, _1, _2;
	zend_long handle, fromDateTime, toDateTime;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(fromDateTime)
		Z_PARAM_LONG(toDateTime)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 3, 0, &handle_param, &fromDateTime_param, &toDateTime_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, fromDateTime);
	ZVAL_LONG(&_2, toDateTime);
	phpqt_qtimezone_transitions(&result, &_0, &_1, &_2);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QTimeZone_QTimeZone, systemTimeZoneId)
{
	zval result;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;

	ZVAL_UNDEF(&result);
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);

	ZEPHIR_INIT_VAR(&result);
	phpqt_qtimezone_system_time_zone_id(&result);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QTimeZone_QTimeZone, systemTimeZone)
{

	RETURN_LONG(phpqt_qtimezone_system_time_zone());
}

PHP_METHOD(Qt_Core_QTimeZone_QTimeZone, utc)
{

	RETURN_LONG(phpqt_qtimezone_utc());
}

PHP_METHOD(Qt_Core_QTimeZone_QTimeZone, isTimeZoneIdAvailable)
{
	zend_long r = 0;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *ianaId_param = NULL;
	zval ianaId;

	ZVAL_UNDEF(&ianaId);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_STR(ianaId)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &ianaId_param);
	zephir_get_strval(&ianaId, ianaId_param);
	r = phpqt_qtimezone_is_time_zone_id_available(&ianaId);
	RETURN_MM_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QTimeZone_QTimeZone, availableTimeZoneIds)
{
	zval result;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;

	ZVAL_UNDEF(&result);
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);

	ZEPHIR_INIT_VAR(&result);
	phpqt_qtimezone_available_time_zone_ids(&result);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QTimeZone_QTimeZone, availableTimeZoneIdsQLocaleTerritory)
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
	phpqt_qtimezone_available_time_zone_ids_q_locale_territory(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QTimeZone_QTimeZone, availableTimeZoneIdsInt)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *offsetSeconds_param = NULL, result, _0;
	zend_long offsetSeconds;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(offsetSeconds)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &offsetSeconds_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, offsetSeconds);
	phpqt_qtimezone_available_time_zone_ids_int(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QTimeZone_QTimeZone, ianaIdToWindowsId)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *ianaId_param = NULL, result;
	zval ianaId;

	ZVAL_UNDEF(&ianaId);
	ZVAL_UNDEF(&result);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_STR(ianaId)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &ianaId_param);
	zephir_get_strval(&ianaId, ianaId_param);
	ZEPHIR_INIT_VAR(&result);
	phpqt_qtimezone_iana_id_to_windows_id(&result, &ianaId);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QTimeZone_QTimeZone, windowsIdToDefaultIanaId)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *windowsId_param = NULL, result;
	zval windowsId;

	ZVAL_UNDEF(&windowsId);
	ZVAL_UNDEF(&result);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_STR(windowsId)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &windowsId_param);
	zephir_get_strval(&windowsId, windowsId_param);
	ZEPHIR_INIT_VAR(&result);
	phpqt_qtimezone_windows_id_to_default_iana_id(&result, &windowsId);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QTimeZone_QTimeZone, windowsIdToDefaultIanaIdQByteArrayQLocaleTerritory)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long territory;
	zval *windowsId_param = NULL, *territory_param = NULL, result, _0;
	zval windowsId;

	ZVAL_UNDEF(&windowsId);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_STR(windowsId)
		Z_PARAM_LONG(territory)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &windowsId_param, &territory_param);
	zephir_get_strval(&windowsId, windowsId_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, territory);
	phpqt_qtimezone_windows_id_to_default_iana_id_q_byte_array_q_locale_territory(&result, &windowsId, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QTimeZone_QTimeZone, windowsIdToIanaIds)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *windowsId_param = NULL, result;
	zval windowsId;

	ZVAL_UNDEF(&windowsId);
	ZVAL_UNDEF(&result);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_STR(windowsId)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &windowsId_param);
	zephir_get_strval(&windowsId, windowsId_param);
	ZEPHIR_INIT_VAR(&result);
	phpqt_qtimezone_windows_id_to_iana_ids(&result, &windowsId);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QTimeZone_QTimeZone, windowsIdToIanaIdsQByteArrayQLocaleTerritory)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long territory;
	zval *windowsId_param = NULL, *territory_param = NULL, result, _0;
	zval windowsId;

	ZVAL_UNDEF(&windowsId);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_STR(windowsId)
		Z_PARAM_LONG(territory)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &windowsId_param, &territory_param);
	zephir_get_strval(&windowsId, windowsId_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, territory);
	phpqt_qtimezone_windows_id_to_iana_ids_q_byte_array_q_locale_territory(&result, &windowsId, &_0);
	RETURN_CCTOR(&result);
}

