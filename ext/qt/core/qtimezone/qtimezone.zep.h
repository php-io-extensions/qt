
extern zend_class_entry *qt_core_qtimezone_qtimezone_ce;

ZEPHIR_INIT_CLASS(Qt_Core_QTimeZone_QTimeZone);

PHP_METHOD(Qt_Core_QTimeZone_QTimeZone, MinUtcOffsetSecs);
PHP_METHOD(Qt_Core_QTimeZone_QTimeZone, MaxUtcOffsetSecs);
PHP_METHOD(Qt_Core_QTimeZone_QTimeZone, new_);
PHP_METHOD(Qt_Core_QTimeZone_QTimeZone, newQTimeZoneInitialization);
PHP_METHOD(Qt_Core_QTimeZone_QTimeZone, newInt);
PHP_METHOD(Qt_Core_QTimeZone_QTimeZone, newQByteArray);
PHP_METHOD(Qt_Core_QTimeZone_QTimeZone, newQByteArrayIntQStringQStringQLocaleTerritoryQString);
PHP_METHOD(Qt_Core_QTimeZone_QTimeZone, newQTimeZone);
PHP_METHOD(Qt_Core_QTimeZone_QTimeZone, swap);
PHP_METHOD(Qt_Core_QTimeZone_QTimeZone, isValid);
PHP_METHOD(Qt_Core_QTimeZone_QTimeZone, fromSecondsAheadOfUtc);
PHP_METHOD(Qt_Core_QTimeZone_QTimeZone, timeSpec);
PHP_METHOD(Qt_Core_QTimeZone_QTimeZone, fixedSecondsAheadOfUtc);
PHP_METHOD(Qt_Core_QTimeZone_QTimeZone, isUtcOrFixedOffset);
PHP_METHOD(Qt_Core_QTimeZone_QTimeZone, isUtcOrFixedOffset2);
PHP_METHOD(Qt_Core_QTimeZone_QTimeZone, asBackendZone);
PHP_METHOD(Qt_Core_QTimeZone_QTimeZone, hasAlternativeName);
PHP_METHOD(Qt_Core_QTimeZone_QTimeZone, id);
PHP_METHOD(Qt_Core_QTimeZone_QTimeZone, territory);
PHP_METHOD(Qt_Core_QTimeZone_QTimeZone, comment);
PHP_METHOD(Qt_Core_QTimeZone_QTimeZone, displayName);
PHP_METHOD(Qt_Core_QTimeZone_QTimeZone, displayNameQTimeZoneTimeTypeQTimeZoneNameTypeQLocale);
PHP_METHOD(Qt_Core_QTimeZone_QTimeZone, abbreviation);
PHP_METHOD(Qt_Core_QTimeZone_QTimeZone, offsetFromUtc);
PHP_METHOD(Qt_Core_QTimeZone_QTimeZone, standardTimeOffset);
PHP_METHOD(Qt_Core_QTimeZone_QTimeZone, daylightTimeOffset);
PHP_METHOD(Qt_Core_QTimeZone_QTimeZone, hasDaylightTime);
PHP_METHOD(Qt_Core_QTimeZone_QTimeZone, isDaylightTime);
PHP_METHOD(Qt_Core_QTimeZone_QTimeZone, offsetData);
PHP_METHOD(Qt_Core_QTimeZone_QTimeZone, hasTransitions);
PHP_METHOD(Qt_Core_QTimeZone_QTimeZone, nextTransition);
PHP_METHOD(Qt_Core_QTimeZone_QTimeZone, previousTransition);
PHP_METHOD(Qt_Core_QTimeZone_QTimeZone, transitions);
PHP_METHOD(Qt_Core_QTimeZone_QTimeZone, systemTimeZoneId);
PHP_METHOD(Qt_Core_QTimeZone_QTimeZone, systemTimeZone);
PHP_METHOD(Qt_Core_QTimeZone_QTimeZone, utc);
PHP_METHOD(Qt_Core_QTimeZone_QTimeZone, isTimeZoneIdAvailable);
PHP_METHOD(Qt_Core_QTimeZone_QTimeZone, availableTimeZoneIds);
PHP_METHOD(Qt_Core_QTimeZone_QTimeZone, availableTimeZoneIdsQLocaleTerritory);
PHP_METHOD(Qt_Core_QTimeZone_QTimeZone, availableTimeZoneIdsInt);
PHP_METHOD(Qt_Core_QTimeZone_QTimeZone, ianaIdToWindowsId);
PHP_METHOD(Qt_Core_QTimeZone_QTimeZone, windowsIdToDefaultIanaId);
PHP_METHOD(Qt_Core_QTimeZone_QTimeZone, windowsIdToDefaultIanaIdQByteArrayQLocaleTerritory);
PHP_METHOD(Qt_Core_QTimeZone_QTimeZone, windowsIdToIanaIds);
PHP_METHOD(Qt_Core_QTimeZone_QTimeZone, windowsIdToIanaIdsQByteArrayQLocaleTerritory);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qtimezone_qtimezone_minutcoffsetsecs, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qtimezone_qtimezone_maxutcoffsetsecs, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qtimezone_qtimezone_new_, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qtimezone_qtimezone_newqtimezoneinitialization, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, spec, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qtimezone_qtimezone_newint, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, offsetSeconds, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qtimezone_qtimezone_newqbytearray, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, ianaId, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qtimezone_qtimezone_newqbytearrayintqstringqstringqlocaleterritoryqstring, 0, 4, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, zoneId, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, offsetSeconds, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, name, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, abbreviation, IS_STRING, 0)
	ZEND_ARG_INFO(0, territory)
	ZEND_ARG_TYPE_INFO(0, comment, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qtimezone_qtimezone_newqtimezone, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, other, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qtimezone_qtimezone_swap, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, other, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qtimezone_qtimezone_isvalid, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qtimezone_qtimezone_fromsecondsaheadofutc, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, offset, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qtimezone_qtimezone_timespec, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qtimezone_qtimezone_fixedsecondsaheadofutc, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qtimezone_qtimezone_isutcorfixedoffset, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, spec, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qtimezone_qtimezone_isutcorfixedoffset2, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qtimezone_qtimezone_asbackendzone, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qtimezone_qtimezone_hasalternativename, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, alias, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qtimezone_qtimezone_id, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qtimezone_qtimezone_territory, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qtimezone_qtimezone_comment, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qtimezone_qtimezone_displayname, 0, 2, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, atDateTime, IS_LONG, 0)
	ZEND_ARG_INFO(0, nameType)
	ZEND_ARG_INFO(0, locale)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qtimezone_qtimezone_displaynameqtimezonetimetypeqtimezonenametypeqlocale, 0, 2, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, timeType, IS_LONG, 0)
	ZEND_ARG_INFO(0, nameType)
	ZEND_ARG_INFO(0, locale)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qtimezone_qtimezone_abbreviation, 0, 2, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, atDateTime, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qtimezone_qtimezone_offsetfromutc, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, atDateTime, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qtimezone_qtimezone_standardtimeoffset, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, atDateTime, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qtimezone_qtimezone_daylighttimeoffset, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, atDateTime, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qtimezone_qtimezone_hasdaylighttime, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qtimezone_qtimezone_isdaylighttime, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, atDateTime, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qtimezone_qtimezone_offsetdata, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, forDateTime, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qtimezone_qtimezone_hastransitions, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qtimezone_qtimezone_nexttransition, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, afterDateTime, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qtimezone_qtimezone_previoustransition, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, beforeDateTime, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qtimezone_qtimezone_transitions, 0, 3, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, fromDateTime, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, toDateTime, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qtimezone_qtimezone_systemtimezoneid, 0, 0, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qtimezone_qtimezone_systemtimezone, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qtimezone_qtimezone_utc, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qtimezone_qtimezone_istimezoneidavailable, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, ianaId, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qtimezone_qtimezone_availabletimezoneids, 0, 0, IS_ARRAY, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qtimezone_qtimezone_availabletimezoneidsqlocaleterritory, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, territory, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qtimezone_qtimezone_availabletimezoneidsint, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, offsetSeconds, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qtimezone_qtimezone_ianaidtowindowsid, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, ianaId, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qtimezone_qtimezone_windowsidtodefaultianaid, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, windowsId, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qtimezone_qtimezone_windowsidtodefaultianaidqbytearrayqlocaleterritory, 0, 2, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, windowsId, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, territory, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qtimezone_qtimezone_windowsidtoianaids, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, windowsId, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qtimezone_qtimezone_windowsidtoianaidsqbytearrayqlocaleterritory, 0, 2, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, windowsId, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, territory, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_core_qtimezone_qtimezone_method_entry) {
	PHP_ME(Qt_Core_QTimeZone_QTimeZone, MinUtcOffsetSecs, arginfo_qt_core_qtimezone_qtimezone_minutcoffsetsecs, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QTimeZone_QTimeZone, MaxUtcOffsetSecs, arginfo_qt_core_qtimezone_qtimezone_maxutcoffsetsecs, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QTimeZone_QTimeZone, new_, arginfo_qt_core_qtimezone_qtimezone_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QTimeZone_QTimeZone, newQTimeZoneInitialization, arginfo_qt_core_qtimezone_qtimezone_newqtimezoneinitialization, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QTimeZone_QTimeZone, newInt, arginfo_qt_core_qtimezone_qtimezone_newint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QTimeZone_QTimeZone, newQByteArray, arginfo_qt_core_qtimezone_qtimezone_newqbytearray, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QTimeZone_QTimeZone, newQByteArrayIntQStringQStringQLocaleTerritoryQString, arginfo_qt_core_qtimezone_qtimezone_newqbytearrayintqstringqstringqlocaleterritoryqstring, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QTimeZone_QTimeZone, newQTimeZone, arginfo_qt_core_qtimezone_qtimezone_newqtimezone, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QTimeZone_QTimeZone, swap, arginfo_qt_core_qtimezone_qtimezone_swap, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QTimeZone_QTimeZone, isValid, arginfo_qt_core_qtimezone_qtimezone_isvalid, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QTimeZone_QTimeZone, fromSecondsAheadOfUtc, arginfo_qt_core_qtimezone_qtimezone_fromsecondsaheadofutc, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QTimeZone_QTimeZone, timeSpec, arginfo_qt_core_qtimezone_qtimezone_timespec, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QTimeZone_QTimeZone, fixedSecondsAheadOfUtc, arginfo_qt_core_qtimezone_qtimezone_fixedsecondsaheadofutc, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QTimeZone_QTimeZone, isUtcOrFixedOffset, arginfo_qt_core_qtimezone_qtimezone_isutcorfixedoffset, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QTimeZone_QTimeZone, isUtcOrFixedOffset2, arginfo_qt_core_qtimezone_qtimezone_isutcorfixedoffset2, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QTimeZone_QTimeZone, asBackendZone, arginfo_qt_core_qtimezone_qtimezone_asbackendzone, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QTimeZone_QTimeZone, hasAlternativeName, arginfo_qt_core_qtimezone_qtimezone_hasalternativename, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QTimeZone_QTimeZone, id, arginfo_qt_core_qtimezone_qtimezone_id, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QTimeZone_QTimeZone, territory, arginfo_qt_core_qtimezone_qtimezone_territory, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QTimeZone_QTimeZone, comment, arginfo_qt_core_qtimezone_qtimezone_comment, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QTimeZone_QTimeZone, displayName, arginfo_qt_core_qtimezone_qtimezone_displayname, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QTimeZone_QTimeZone, displayNameQTimeZoneTimeTypeQTimeZoneNameTypeQLocale, arginfo_qt_core_qtimezone_qtimezone_displaynameqtimezonetimetypeqtimezonenametypeqlocale, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QTimeZone_QTimeZone, abbreviation, arginfo_qt_core_qtimezone_qtimezone_abbreviation, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QTimeZone_QTimeZone, offsetFromUtc, arginfo_qt_core_qtimezone_qtimezone_offsetfromutc, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QTimeZone_QTimeZone, standardTimeOffset, arginfo_qt_core_qtimezone_qtimezone_standardtimeoffset, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QTimeZone_QTimeZone, daylightTimeOffset, arginfo_qt_core_qtimezone_qtimezone_daylighttimeoffset, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QTimeZone_QTimeZone, hasDaylightTime, arginfo_qt_core_qtimezone_qtimezone_hasdaylighttime, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QTimeZone_QTimeZone, isDaylightTime, arginfo_qt_core_qtimezone_qtimezone_isdaylighttime, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QTimeZone_QTimeZone, offsetData, arginfo_qt_core_qtimezone_qtimezone_offsetdata, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QTimeZone_QTimeZone, hasTransitions, arginfo_qt_core_qtimezone_qtimezone_hastransitions, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QTimeZone_QTimeZone, nextTransition, arginfo_qt_core_qtimezone_qtimezone_nexttransition, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QTimeZone_QTimeZone, previousTransition, arginfo_qt_core_qtimezone_qtimezone_previoustransition, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QTimeZone_QTimeZone, transitions, arginfo_qt_core_qtimezone_qtimezone_transitions, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QTimeZone_QTimeZone, systemTimeZoneId, arginfo_qt_core_qtimezone_qtimezone_systemtimezoneid, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QTimeZone_QTimeZone, systemTimeZone, arginfo_qt_core_qtimezone_qtimezone_systemtimezone, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QTimeZone_QTimeZone, utc, arginfo_qt_core_qtimezone_qtimezone_utc, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QTimeZone_QTimeZone, isTimeZoneIdAvailable, arginfo_qt_core_qtimezone_qtimezone_istimezoneidavailable, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QTimeZone_QTimeZone, availableTimeZoneIds, arginfo_qt_core_qtimezone_qtimezone_availabletimezoneids, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QTimeZone_QTimeZone, availableTimeZoneIdsQLocaleTerritory, arginfo_qt_core_qtimezone_qtimezone_availabletimezoneidsqlocaleterritory, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QTimeZone_QTimeZone, availableTimeZoneIdsInt, arginfo_qt_core_qtimezone_qtimezone_availabletimezoneidsint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QTimeZone_QTimeZone, ianaIdToWindowsId, arginfo_qt_core_qtimezone_qtimezone_ianaidtowindowsid, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QTimeZone_QTimeZone, windowsIdToDefaultIanaId, arginfo_qt_core_qtimezone_qtimezone_windowsidtodefaultianaid, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QTimeZone_QTimeZone, windowsIdToDefaultIanaIdQByteArrayQLocaleTerritory, arginfo_qt_core_qtimezone_qtimezone_windowsidtodefaultianaidqbytearrayqlocaleterritory, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QTimeZone_QTimeZone, windowsIdToIanaIds, arginfo_qt_core_qtimezone_qtimezone_windowsidtoianaids, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QTimeZone_QTimeZone, windowsIdToIanaIdsQByteArrayQLocaleTerritory, arginfo_qt_core_qtimezone_qtimezone_windowsidtoianaidsqbytearrayqlocaleterritory, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
