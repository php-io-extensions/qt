
extern zend_class_entry *qt_core_qcalendar_qcalendar_ce;

ZEPHIR_INIT_CLASS(Qt_Core_QCalendar_QCalendar);

PHP_METHOD(Qt_Core_QCalendar_QCalendar, staticMetaObject);
PHP_METHOD(Qt_Core_QCalendar_QCalendar, qt_check_for_QGADGET_macro);
PHP_METHOD(Qt_Core_QCalendar_QCalendar, new_);
PHP_METHOD(Qt_Core_QCalendar_QCalendar, newQCalendarSystem);
PHP_METHOD(Qt_Core_QCalendar_QCalendar, newQAnyStringView);
PHP_METHOD(Qt_Core_QCalendar_QCalendar, newQCalendarSystemId);
PHP_METHOD(Qt_Core_QCalendar_QCalendar, isValid);
PHP_METHOD(Qt_Core_QCalendar_QCalendar, daysInMonth);
PHP_METHOD(Qt_Core_QCalendar_QCalendar, daysInYear);
PHP_METHOD(Qt_Core_QCalendar_QCalendar, monthsInYear);
PHP_METHOD(Qt_Core_QCalendar_QCalendar, isDateValid);
PHP_METHOD(Qt_Core_QCalendar_QCalendar, isLeapYear);
PHP_METHOD(Qt_Core_QCalendar_QCalendar, isGregorian);
PHP_METHOD(Qt_Core_QCalendar_QCalendar, isLunar);
PHP_METHOD(Qt_Core_QCalendar_QCalendar, isLuniSolar);
PHP_METHOD(Qt_Core_QCalendar_QCalendar, isSolar);
PHP_METHOD(Qt_Core_QCalendar_QCalendar, isProleptic);
PHP_METHOD(Qt_Core_QCalendar_QCalendar, hasYearZero);
PHP_METHOD(Qt_Core_QCalendar_QCalendar, maximumDaysInMonth);
PHP_METHOD(Qt_Core_QCalendar_QCalendar, minimumDaysInMonth);
PHP_METHOD(Qt_Core_QCalendar_QCalendar, maximumMonthsInYear);
PHP_METHOD(Qt_Core_QCalendar_QCalendar, name);
PHP_METHOD(Qt_Core_QCalendar_QCalendar, dateFromParts);
PHP_METHOD(Qt_Core_QCalendar_QCalendar, dateFromPartsQCalendarYearMonthDay);
PHP_METHOD(Qt_Core_QCalendar_QCalendar, matchCenturyToWeekday);
PHP_METHOD(Qt_Core_QCalendar_QCalendar, partsFromDate);
PHP_METHOD(Qt_Core_QCalendar_QCalendar, dayOfWeek);
PHP_METHOD(Qt_Core_QCalendar_QCalendar, monthName);
PHP_METHOD(Qt_Core_QCalendar_QCalendar, standaloneMonthName);
PHP_METHOD(Qt_Core_QCalendar_QCalendar, weekDayName);
PHP_METHOD(Qt_Core_QCalendar_QCalendar, standaloneWeekDayName);
PHP_METHOD(Qt_Core_QCalendar_QCalendar, dateTimeToString);
PHP_METHOD(Qt_Core_QCalendar_QCalendar, availableCalendars);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcalendar_qcalendar_staticmetaobject, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcalendar_qcalendar_qt_check_for_qgadget_macro, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcalendar_qcalendar_new_, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcalendar_qcalendar_newqcalendarsystem, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, system, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcalendar_qcalendar_newqanystringview, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, name, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcalendar_qcalendar_newqcalendarsystemid, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, id, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcalendar_qcalendar_isvalid, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcalendar_qcalendar_daysinmonth, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, month, IS_LONG, 0)
	ZEND_ARG_INFO(0, year)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcalendar_qcalendar_daysinyear, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, year, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcalendar_qcalendar_monthsinyear, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, year, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcalendar_qcalendar_isdatevalid, 0, 4, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, year, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, month, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, day, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcalendar_qcalendar_isleapyear, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, year, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcalendar_qcalendar_isgregorian, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcalendar_qcalendar_islunar, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcalendar_qcalendar_islunisolar, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcalendar_qcalendar_issolar, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcalendar_qcalendar_isproleptic, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcalendar_qcalendar_hasyearzero, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcalendar_qcalendar_maximumdaysinmonth, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcalendar_qcalendar_minimumdaysinmonth, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcalendar_qcalendar_maximummonthsinyear, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcalendar_qcalendar_name, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcalendar_qcalendar_datefromparts, 0, 4, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, year, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, month, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, day, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcalendar_qcalendar_datefrompartsqcalendaryearmonthday, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, parts, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcalendar_qcalendar_matchcenturytoweekday, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, parts, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, dow, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcalendar_qcalendar_partsfromdate, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, date, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcalendar_qcalendar_dayofweek, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, date, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcalendar_qcalendar_monthname, 0, 3, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, locale, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, month, IS_LONG, 0)
	ZEND_ARG_INFO(0, year)
	ZEND_ARG_INFO(0, format)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcalendar_qcalendar_standalonemonthname, 0, 3, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, locale, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, month, IS_LONG, 0)
	ZEND_ARG_INFO(0, year)
	ZEND_ARG_INFO(0, format)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcalendar_qcalendar_weekdayname, 0, 3, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, locale, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, day, IS_LONG, 0)
	ZEND_ARG_INFO(0, format)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcalendar_qcalendar_standaloneweekdayname, 0, 3, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, locale, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, day, IS_LONG, 0)
	ZEND_ARG_INFO(0, format)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcalendar_qcalendar_datetimetostring, 0, 6, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, format, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, datetime, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, dateOnly, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, timeOnly, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, locale, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcalendar_qcalendar_availablecalendars, 0, 0, IS_ARRAY, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_core_qcalendar_qcalendar_method_entry) {
	PHP_ME(Qt_Core_QCalendar_QCalendar, staticMetaObject, arginfo_qt_core_qcalendar_qcalendar_staticmetaobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCalendar_QCalendar, qt_check_for_QGADGET_macro, arginfo_qt_core_qcalendar_qcalendar_qt_check_for_qgadget_macro, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCalendar_QCalendar, new_, arginfo_qt_core_qcalendar_qcalendar_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCalendar_QCalendar, newQCalendarSystem, arginfo_qt_core_qcalendar_qcalendar_newqcalendarsystem, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCalendar_QCalendar, newQAnyStringView, arginfo_qt_core_qcalendar_qcalendar_newqanystringview, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCalendar_QCalendar, newQCalendarSystemId, arginfo_qt_core_qcalendar_qcalendar_newqcalendarsystemid, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCalendar_QCalendar, isValid, arginfo_qt_core_qcalendar_qcalendar_isvalid, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCalendar_QCalendar, daysInMonth, arginfo_qt_core_qcalendar_qcalendar_daysinmonth, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCalendar_QCalendar, daysInYear, arginfo_qt_core_qcalendar_qcalendar_daysinyear, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCalendar_QCalendar, monthsInYear, arginfo_qt_core_qcalendar_qcalendar_monthsinyear, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCalendar_QCalendar, isDateValid, arginfo_qt_core_qcalendar_qcalendar_isdatevalid, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCalendar_QCalendar, isLeapYear, arginfo_qt_core_qcalendar_qcalendar_isleapyear, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCalendar_QCalendar, isGregorian, arginfo_qt_core_qcalendar_qcalendar_isgregorian, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCalendar_QCalendar, isLunar, arginfo_qt_core_qcalendar_qcalendar_islunar, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCalendar_QCalendar, isLuniSolar, arginfo_qt_core_qcalendar_qcalendar_islunisolar, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCalendar_QCalendar, isSolar, arginfo_qt_core_qcalendar_qcalendar_issolar, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCalendar_QCalendar, isProleptic, arginfo_qt_core_qcalendar_qcalendar_isproleptic, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCalendar_QCalendar, hasYearZero, arginfo_qt_core_qcalendar_qcalendar_hasyearzero, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCalendar_QCalendar, maximumDaysInMonth, arginfo_qt_core_qcalendar_qcalendar_maximumdaysinmonth, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCalendar_QCalendar, minimumDaysInMonth, arginfo_qt_core_qcalendar_qcalendar_minimumdaysinmonth, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCalendar_QCalendar, maximumMonthsInYear, arginfo_qt_core_qcalendar_qcalendar_maximummonthsinyear, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCalendar_QCalendar, name, arginfo_qt_core_qcalendar_qcalendar_name, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCalendar_QCalendar, dateFromParts, arginfo_qt_core_qcalendar_qcalendar_datefromparts, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCalendar_QCalendar, dateFromPartsQCalendarYearMonthDay, arginfo_qt_core_qcalendar_qcalendar_datefrompartsqcalendaryearmonthday, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCalendar_QCalendar, matchCenturyToWeekday, arginfo_qt_core_qcalendar_qcalendar_matchcenturytoweekday, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCalendar_QCalendar, partsFromDate, arginfo_qt_core_qcalendar_qcalendar_partsfromdate, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCalendar_QCalendar, dayOfWeek, arginfo_qt_core_qcalendar_qcalendar_dayofweek, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCalendar_QCalendar, monthName, arginfo_qt_core_qcalendar_qcalendar_monthname, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCalendar_QCalendar, standaloneMonthName, arginfo_qt_core_qcalendar_qcalendar_standalonemonthname, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCalendar_QCalendar, weekDayName, arginfo_qt_core_qcalendar_qcalendar_weekdayname, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCalendar_QCalendar, standaloneWeekDayName, arginfo_qt_core_qcalendar_qcalendar_standaloneweekdayname, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCalendar_QCalendar, dateTimeToString, arginfo_qt_core_qcalendar_qcalendar_datetimetostring, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCalendar_QCalendar, availableCalendars, arginfo_qt_core_qcalendar_qcalendar_availablecalendars, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
