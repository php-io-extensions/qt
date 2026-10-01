
extern zend_class_entry *qt_core_qdate_qdate_ce;

ZEPHIR_INIT_CLASS(Qt_Core_QDate_QDate);

PHP_METHOD(Qt_Core_QDate_QDate, new_);
PHP_METHOD(Qt_Core_QDate_QDate, newIntIntInt);
PHP_METHOD(Qt_Core_QDate_QDate, newIntIntIntQCalendar);
PHP_METHOD(Qt_Core_QDate_QDate, isNull);
PHP_METHOD(Qt_Core_QDate_QDate, isValid);
PHP_METHOD(Qt_Core_QDate_QDate, year);
PHP_METHOD(Qt_Core_QDate_QDate, month);
PHP_METHOD(Qt_Core_QDate_QDate, day);
PHP_METHOD(Qt_Core_QDate_QDate, dayOfWeek);
PHP_METHOD(Qt_Core_QDate_QDate, dayOfYear);
PHP_METHOD(Qt_Core_QDate_QDate, daysInMonth);
PHP_METHOD(Qt_Core_QDate_QDate, daysInYear);
PHP_METHOD(Qt_Core_QDate_QDate, weekNumber);
PHP_METHOD(Qt_Core_QDate_QDate, yearQCalendar);
PHP_METHOD(Qt_Core_QDate_QDate, monthQCalendar);
PHP_METHOD(Qt_Core_QDate_QDate, dayQCalendar);
PHP_METHOD(Qt_Core_QDate_QDate, dayOfWeekQCalendar);
PHP_METHOD(Qt_Core_QDate_QDate, dayOfYearQCalendar);
PHP_METHOD(Qt_Core_QDate_QDate, daysInMonthQCalendar);
PHP_METHOD(Qt_Core_QDate_QDate, daysInYearQCalendar);
PHP_METHOD(Qt_Core_QDate_QDate, startOfDay);
PHP_METHOD(Qt_Core_QDate_QDate, endOfDay);
PHP_METHOD(Qt_Core_QDate_QDate, startOfDay2);
PHP_METHOD(Qt_Core_QDate_QDate, endOfDay2);
PHP_METHOD(Qt_Core_QDate_QDate, toString);
PHP_METHOD(Qt_Core_QDate_QDate, toStringQString);
PHP_METHOD(Qt_Core_QDate_QDate, toStringQStringQCalendar);
PHP_METHOD(Qt_Core_QDate_QDate, toStringQStringView);
PHP_METHOD(Qt_Core_QDate_QDate, toStringQStringViewQCalendar);
PHP_METHOD(Qt_Core_QDate_QDate, setDate);
PHP_METHOD(Qt_Core_QDate_QDate, setDateIntIntIntQCalendar);
PHP_METHOD(Qt_Core_QDate_QDate, getDate);
PHP_METHOD(Qt_Core_QDate_QDate, addDays);
PHP_METHOD(Qt_Core_QDate_QDate, addMonths);
PHP_METHOD(Qt_Core_QDate_QDate, addYears);
PHP_METHOD(Qt_Core_QDate_QDate, addMonthsIntQCalendar);
PHP_METHOD(Qt_Core_QDate_QDate, addYearsIntQCalendar);
PHP_METHOD(Qt_Core_QDate_QDate, daysTo);
PHP_METHOD(Qt_Core_QDate_QDate, currentDate);
PHP_METHOD(Qt_Core_QDate_QDate, fromString);
PHP_METHOD(Qt_Core_QDate_QDate, fromStringQStringQtDateFormat);
PHP_METHOD(Qt_Core_QDate_QDate, fromStringQStringViewQStringViewQCalendar);
PHP_METHOD(Qt_Core_QDate_QDate, fromStringQStringQStringViewQCalendar);
PHP_METHOD(Qt_Core_QDate_QDate, fromStringQStringQStringQCalendar);
PHP_METHOD(Qt_Core_QDate_QDate, fromStringQStringViewQStringViewInt);
PHP_METHOD(Qt_Core_QDate_QDate, fromStringQStringViewQStringViewIntQCalendar);
PHP_METHOD(Qt_Core_QDate_QDate, fromStringQStringQStringViewInt);
PHP_METHOD(Qt_Core_QDate_QDate, fromStringQStringQStringViewIntQCalendar);
PHP_METHOD(Qt_Core_QDate_QDate, fromStringQStringQStringInt);
PHP_METHOD(Qt_Core_QDate_QDate, fromStringQStringQStringIntQCalendar);
PHP_METHOD(Qt_Core_QDate_QDate, isValidIntIntInt);
PHP_METHOD(Qt_Core_QDate_QDate, isLeapYear);
PHP_METHOD(Qt_Core_QDate_QDate, fromJulianDay);
PHP_METHOD(Qt_Core_QDate_QDate, toJulianDay);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qdate_qdate_new_, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qdate_qdate_newintintint, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, m, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, d, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qdate_qdate_newintintintqcalendar, 0, 4, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, m, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, d, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, cal, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qdate_qdate_isnull, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qdate_qdate_isvalid, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qdate_qdate_year, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qdate_qdate_month, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qdate_qdate_day, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qdate_qdate_dayofweek, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qdate_qdate_dayofyear, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qdate_qdate_daysinmonth, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qdate_qdate_daysinyear, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qdate_qdate_weeknumber, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_INFO(0, yearNum)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qdate_qdate_yearqcalendar, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, cal, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qdate_qdate_monthqcalendar, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, cal, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qdate_qdate_dayqcalendar, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, cal, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qdate_qdate_dayofweekqcalendar, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, cal, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qdate_qdate_dayofyearqcalendar, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, cal, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qdate_qdate_daysinmonthqcalendar, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, cal, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qdate_qdate_daysinyearqcalendar, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, cal, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qdate_qdate_startofday, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, zone, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qdate_qdate_endofday, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, zone, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qdate_qdate_startofday2, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qdate_qdate_endofday2, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qdate_qdate_tostring, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_INFO(0, format)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qdate_qdate_tostringqstring, 0, 2, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, format, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qdate_qdate_tostringqstringqcalendar, 0, 3, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, format, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, cal, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qdate_qdate_tostringqstringview, 0, 2, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, format, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qdate_qdate_tostringqstringviewqcalendar, 0, 3, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, format, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, cal, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qdate_qdate_setdate, 0, 4, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, year, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, month, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, day, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qdate_qdate_setdateintintintqcalendar, 0, 5, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, year, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, month, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, day, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, cal, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qdate_qdate_getdate, 0, 4, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_INFO(0, year)
	ZEND_ARG_INFO(0, month)
	ZEND_ARG_INFO(0, day)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qdate_qdate_adddays, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, days, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qdate_qdate_addmonths, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, months, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qdate_qdate_addyears, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, years, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qdate_qdate_addmonthsintqcalendar, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, months, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, cal, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qdate_qdate_addyearsintqcalendar, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, years, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, cal, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qdate_qdate_daysto, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, d, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qdate_qdate_currentdate, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qdate_qdate_fromstring, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, string_, IS_STRING, 0)
	ZEND_ARG_INFO(0, format)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qdate_qdate_fromstringqstringqtdateformat, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, string_, IS_STRING, 0)
	ZEND_ARG_INFO(0, format)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qdate_qdate_fromstringqstringviewqstringviewqcalendar, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, string_, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, format, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, cal, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qdate_qdate_fromstringqstringqstringviewqcalendar, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, string_, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, format, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, cal, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qdate_qdate_fromstringqstringqstringqcalendar, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, string_, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, format, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, cal, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qdate_qdate_fromstringqstringviewqstringviewint, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, string_, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, format, IS_STRING, 0)
	ZEND_ARG_INFO(0, baseYear)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qdate_qdate_fromstringqstringviewqstringviewintqcalendar, 0, 4, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, string_, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, format, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, baseYear, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, cal, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qdate_qdate_fromstringqstringqstringviewint, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, string_, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, format, IS_STRING, 0)
	ZEND_ARG_INFO(0, baseYear)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qdate_qdate_fromstringqstringqstringviewintqcalendar, 0, 4, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, string_, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, format, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, baseYear, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, cal, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qdate_qdate_fromstringqstringqstringint, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, string_, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, format, IS_STRING, 0)
	ZEND_ARG_INFO(0, baseYear)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qdate_qdate_fromstringqstringqstringintqcalendar, 0, 4, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, string_, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, format, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, baseYear, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, cal, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qdate_qdate_isvalidintintint, 0, 3, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, m, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, d, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qdate_qdate_isleapyear, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, year, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qdate_qdate_fromjulianday, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, jd_, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qdate_qdate_tojulianday, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_core_qdate_qdate_method_entry) {
	PHP_ME(Qt_Core_QDate_QDate, new_, arginfo_qt_core_qdate_qdate_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QDate_QDate, newIntIntInt, arginfo_qt_core_qdate_qdate_newintintint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QDate_QDate, newIntIntIntQCalendar, arginfo_qt_core_qdate_qdate_newintintintqcalendar, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QDate_QDate, isNull, arginfo_qt_core_qdate_qdate_isnull, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QDate_QDate, isValid, arginfo_qt_core_qdate_qdate_isvalid, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QDate_QDate, year, arginfo_qt_core_qdate_qdate_year, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QDate_QDate, month, arginfo_qt_core_qdate_qdate_month, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QDate_QDate, day, arginfo_qt_core_qdate_qdate_day, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QDate_QDate, dayOfWeek, arginfo_qt_core_qdate_qdate_dayofweek, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QDate_QDate, dayOfYear, arginfo_qt_core_qdate_qdate_dayofyear, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QDate_QDate, daysInMonth, arginfo_qt_core_qdate_qdate_daysinmonth, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QDate_QDate, daysInYear, arginfo_qt_core_qdate_qdate_daysinyear, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QDate_QDate, weekNumber, arginfo_qt_core_qdate_qdate_weeknumber, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QDate_QDate, yearQCalendar, arginfo_qt_core_qdate_qdate_yearqcalendar, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QDate_QDate, monthQCalendar, arginfo_qt_core_qdate_qdate_monthqcalendar, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QDate_QDate, dayQCalendar, arginfo_qt_core_qdate_qdate_dayqcalendar, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QDate_QDate, dayOfWeekQCalendar, arginfo_qt_core_qdate_qdate_dayofweekqcalendar, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QDate_QDate, dayOfYearQCalendar, arginfo_qt_core_qdate_qdate_dayofyearqcalendar, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QDate_QDate, daysInMonthQCalendar, arginfo_qt_core_qdate_qdate_daysinmonthqcalendar, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QDate_QDate, daysInYearQCalendar, arginfo_qt_core_qdate_qdate_daysinyearqcalendar, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QDate_QDate, startOfDay, arginfo_qt_core_qdate_qdate_startofday, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QDate_QDate, endOfDay, arginfo_qt_core_qdate_qdate_endofday, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QDate_QDate, startOfDay2, arginfo_qt_core_qdate_qdate_startofday2, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QDate_QDate, endOfDay2, arginfo_qt_core_qdate_qdate_endofday2, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QDate_QDate, toString, arginfo_qt_core_qdate_qdate_tostring, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QDate_QDate, toStringQString, arginfo_qt_core_qdate_qdate_tostringqstring, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QDate_QDate, toStringQStringQCalendar, arginfo_qt_core_qdate_qdate_tostringqstringqcalendar, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QDate_QDate, toStringQStringView, arginfo_qt_core_qdate_qdate_tostringqstringview, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QDate_QDate, toStringQStringViewQCalendar, arginfo_qt_core_qdate_qdate_tostringqstringviewqcalendar, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QDate_QDate, setDate, arginfo_qt_core_qdate_qdate_setdate, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QDate_QDate, setDateIntIntIntQCalendar, arginfo_qt_core_qdate_qdate_setdateintintintqcalendar, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QDate_QDate, getDate, arginfo_qt_core_qdate_qdate_getdate, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QDate_QDate, addDays, arginfo_qt_core_qdate_qdate_adddays, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QDate_QDate, addMonths, arginfo_qt_core_qdate_qdate_addmonths, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QDate_QDate, addYears, arginfo_qt_core_qdate_qdate_addyears, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QDate_QDate, addMonthsIntQCalendar, arginfo_qt_core_qdate_qdate_addmonthsintqcalendar, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QDate_QDate, addYearsIntQCalendar, arginfo_qt_core_qdate_qdate_addyearsintqcalendar, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QDate_QDate, daysTo, arginfo_qt_core_qdate_qdate_daysto, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QDate_QDate, currentDate, arginfo_qt_core_qdate_qdate_currentdate, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QDate_QDate, fromString, arginfo_qt_core_qdate_qdate_fromstring, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QDate_QDate, fromStringQStringQtDateFormat, arginfo_qt_core_qdate_qdate_fromstringqstringqtdateformat, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QDate_QDate, fromStringQStringViewQStringViewQCalendar, arginfo_qt_core_qdate_qdate_fromstringqstringviewqstringviewqcalendar, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QDate_QDate, fromStringQStringQStringViewQCalendar, arginfo_qt_core_qdate_qdate_fromstringqstringqstringviewqcalendar, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QDate_QDate, fromStringQStringQStringQCalendar, arginfo_qt_core_qdate_qdate_fromstringqstringqstringqcalendar, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QDate_QDate, fromStringQStringViewQStringViewInt, arginfo_qt_core_qdate_qdate_fromstringqstringviewqstringviewint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QDate_QDate, fromStringQStringViewQStringViewIntQCalendar, arginfo_qt_core_qdate_qdate_fromstringqstringviewqstringviewintqcalendar, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QDate_QDate, fromStringQStringQStringViewInt, arginfo_qt_core_qdate_qdate_fromstringqstringqstringviewint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QDate_QDate, fromStringQStringQStringViewIntQCalendar, arginfo_qt_core_qdate_qdate_fromstringqstringqstringviewintqcalendar, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QDate_QDate, fromStringQStringQStringInt, arginfo_qt_core_qdate_qdate_fromstringqstringqstringint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QDate_QDate, fromStringQStringQStringIntQCalendar, arginfo_qt_core_qdate_qdate_fromstringqstringqstringintqcalendar, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QDate_QDate, isValidIntIntInt, arginfo_qt_core_qdate_qdate_isvalidintintint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QDate_QDate, isLeapYear, arginfo_qt_core_qdate_qdate_isleapyear, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QDate_QDate, fromJulianDay, arginfo_qt_core_qdate_qdate_fromjulianday, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QDate_QDate, toJulianDay, arginfo_qt_core_qdate_qdate_tojulianday, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
