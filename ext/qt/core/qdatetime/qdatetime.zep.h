
extern zend_class_entry *qt_core_qdatetime_qdatetime_ce;

ZEPHIR_INIT_CLASS(Qt_Core_QDateTime_QDateTime);

PHP_METHOD(Qt_Core_QDateTime_QDateTime, new_);
PHP_METHOD(Qt_Core_QDateTime_QDateTime, newQDateQTimeQtTimeSpecInt);
PHP_METHOD(Qt_Core_QDateTime_QDateTime, newQDateQTimeQTimeZoneQDateTimeTransitionResolution);
PHP_METHOD(Qt_Core_QDateTime_QDateTime, newQDateQTimeQDateTimeTransitionResolution);
PHP_METHOD(Qt_Core_QDateTime_QDateTime, newQDateTime);
PHP_METHOD(Qt_Core_QDateTime_QDateTime, swap);
PHP_METHOD(Qt_Core_QDateTime_QDateTime, isNull);
PHP_METHOD(Qt_Core_QDateTime_QDateTime, isValid);
PHP_METHOD(Qt_Core_QDateTime_QDateTime, date);
PHP_METHOD(Qt_Core_QDateTime_QDateTime, time);
PHP_METHOD(Qt_Core_QDateTime_QDateTime, timeSpec);
PHP_METHOD(Qt_Core_QDateTime_QDateTime, offsetFromUtc);
PHP_METHOD(Qt_Core_QDateTime_QDateTime, timeRepresentation);
PHP_METHOD(Qt_Core_QDateTime_QDateTime, timeZone);
PHP_METHOD(Qt_Core_QDateTime_QDateTime, timeZoneAbbreviation);
PHP_METHOD(Qt_Core_QDateTime_QDateTime, isDaylightTime);
PHP_METHOD(Qt_Core_QDateTime_QDateTime, toMSecsSinceEpoch);
PHP_METHOD(Qt_Core_QDateTime_QDateTime, toSecsSinceEpoch);
PHP_METHOD(Qt_Core_QDateTime_QDateTime, setDate);
PHP_METHOD(Qt_Core_QDateTime_QDateTime, setTime);
PHP_METHOD(Qt_Core_QDateTime_QDateTime, setTimeZone);
PHP_METHOD(Qt_Core_QDateTime_QDateTime, setMSecsSinceEpoch);
PHP_METHOD(Qt_Core_QDateTime_QDateTime, setSecsSinceEpoch);
PHP_METHOD(Qt_Core_QDateTime_QDateTime, toString);
PHP_METHOD(Qt_Core_QDateTime_QDateTime, toStringQString);
PHP_METHOD(Qt_Core_QDateTime_QDateTime, toStringQStringQCalendar);
PHP_METHOD(Qt_Core_QDateTime_QDateTime, toStringQStringView);
PHP_METHOD(Qt_Core_QDateTime_QDateTime, toStringQStringViewQCalendar);
PHP_METHOD(Qt_Core_QDateTime_QDateTime, addDays);
PHP_METHOD(Qt_Core_QDateTime_QDateTime, addMonths);
PHP_METHOD(Qt_Core_QDateTime_QDateTime, addYears);
PHP_METHOD(Qt_Core_QDateTime_QDateTime, addSecs);
PHP_METHOD(Qt_Core_QDateTime_QDateTime, addMSecs);
PHP_METHOD(Qt_Core_QDateTime_QDateTime, toLocalTime);
PHP_METHOD(Qt_Core_QDateTime_QDateTime, toUTC);
PHP_METHOD(Qt_Core_QDateTime_QDateTime, toOffsetFromUtc);
PHP_METHOD(Qt_Core_QDateTime_QDateTime, toTimeZone);
PHP_METHOD(Qt_Core_QDateTime_QDateTime, daysTo);
PHP_METHOD(Qt_Core_QDateTime_QDateTime, secsTo);
PHP_METHOD(Qt_Core_QDateTime_QDateTime, msecsTo);
PHP_METHOD(Qt_Core_QDateTime_QDateTime, currentDateTime);
PHP_METHOD(Qt_Core_QDateTime_QDateTime, currentDateTime2);
PHP_METHOD(Qt_Core_QDateTime_QDateTime, currentDateTimeUtc);
PHP_METHOD(Qt_Core_QDateTime_QDateTime, fromString);
PHP_METHOD(Qt_Core_QDateTime_QDateTime, fromStringQStringQtDateFormat);
PHP_METHOD(Qt_Core_QDateTime_QDateTime, fromStringQStringViewQStringViewQCalendar);
PHP_METHOD(Qt_Core_QDateTime_QDateTime, fromStringQStringQStringViewQCalendar);
PHP_METHOD(Qt_Core_QDateTime_QDateTime, fromStringQStringQStringQCalendar);
PHP_METHOD(Qt_Core_QDateTime_QDateTime, fromStringQStringViewQStringViewInt);
PHP_METHOD(Qt_Core_QDateTime_QDateTime, fromStringQStringViewQStringViewIntQCalendar);
PHP_METHOD(Qt_Core_QDateTime_QDateTime, fromStringQStringQStringViewInt);
PHP_METHOD(Qt_Core_QDateTime_QDateTime, fromStringQStringQStringViewIntQCalendar);
PHP_METHOD(Qt_Core_QDateTime_QDateTime, fromStringQStringQStringInt);
PHP_METHOD(Qt_Core_QDateTime_QDateTime, fromStringQStringQStringIntQCalendar);
PHP_METHOD(Qt_Core_QDateTime_QDateTime, fromMSecsSinceEpoch);
PHP_METHOD(Qt_Core_QDateTime_QDateTime, fromSecsSinceEpoch);
PHP_METHOD(Qt_Core_QDateTime_QDateTime, fromMSecsSinceEpochQint64);
PHP_METHOD(Qt_Core_QDateTime_QDateTime, fromSecsSinceEpochQint64);
PHP_METHOD(Qt_Core_QDateTime_QDateTime, currentMSecsSinceEpoch);
PHP_METHOD(Qt_Core_QDateTime_QDateTime, currentSecsSinceEpoch);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qdatetime_qdatetime_new_, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qdatetime_qdatetime_newqdateqtimeqttimespecint, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, date, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, time, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, spec, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, offsetSeconds, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qdatetime_qdatetime_newqdateqtimeqtimezoneqdatetimetransitionresolution, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, date, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, time, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, timeZone, IS_LONG, 0)
	ZEND_ARG_INFO(0, resolve)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qdatetime_qdatetime_newqdateqtimeqdatetimetransitionresolution, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, date, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, time, IS_LONG, 0)
	ZEND_ARG_INFO(0, resolve)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qdatetime_qdatetime_newqdatetime, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, other, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qdatetime_qdatetime_swap, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, other, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qdatetime_qdatetime_isnull, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qdatetime_qdatetime_isvalid, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qdatetime_qdatetime_date, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qdatetime_qdatetime_time, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qdatetime_qdatetime_timespec, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qdatetime_qdatetime_offsetfromutc, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qdatetime_qdatetime_timerepresentation, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qdatetime_qdatetime_timezone, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qdatetime_qdatetime_timezoneabbreviation, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qdatetime_qdatetime_isdaylighttime, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qdatetime_qdatetime_tomsecssinceepoch, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qdatetime_qdatetime_tosecssinceepoch, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qdatetime_qdatetime_setdate, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, date, IS_LONG, 0)
	ZEND_ARG_INFO(0, resolve)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qdatetime_qdatetime_settime, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, time, IS_LONG, 0)
	ZEND_ARG_INFO(0, resolve)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qdatetime_qdatetime_settimezone, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, toZone, IS_LONG, 0)
	ZEND_ARG_INFO(0, resolve)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qdatetime_qdatetime_setmsecssinceepoch, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, msecs, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qdatetime_qdatetime_setsecssinceepoch, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, secs, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qdatetime_qdatetime_tostring, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_INFO(0, format)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qdatetime_qdatetime_tostringqstring, 0, 2, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, format, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qdatetime_qdatetime_tostringqstringqcalendar, 0, 3, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, format, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, cal, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qdatetime_qdatetime_tostringqstringview, 0, 2, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, format, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qdatetime_qdatetime_tostringqstringviewqcalendar, 0, 3, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, format, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, cal, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qdatetime_qdatetime_adddays, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, days, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qdatetime_qdatetime_addmonths, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, months, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qdatetime_qdatetime_addyears, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, years, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qdatetime_qdatetime_addsecs, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, secs, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qdatetime_qdatetime_addmsecs, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, msecs, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qdatetime_qdatetime_tolocaltime, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qdatetime_qdatetime_toutc, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qdatetime_qdatetime_tooffsetfromutc, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, offsetSeconds, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qdatetime_qdatetime_totimezone, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, toZone, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qdatetime_qdatetime_daysto, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qdatetime_qdatetime_secsto, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qdatetime_qdatetime_msecsto, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qdatetime_qdatetime_currentdatetime, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, zone, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qdatetime_qdatetime_currentdatetime2, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qdatetime_qdatetime_currentdatetimeutc, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qdatetime_qdatetime_fromstring, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, string_, IS_STRING, 0)
	ZEND_ARG_INFO(0, format)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qdatetime_qdatetime_fromstringqstringqtdateformat, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, string_, IS_STRING, 0)
	ZEND_ARG_INFO(0, format)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qdatetime_qdatetime_fromstringqstringviewqstringviewqcalendar, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, string_, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, format, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, cal, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qdatetime_qdatetime_fromstringqstringqstringviewqcalendar, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, string_, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, format, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, cal, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qdatetime_qdatetime_fromstringqstringqstringqcalendar, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, string_, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, format, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, cal, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qdatetime_qdatetime_fromstringqstringviewqstringviewint, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, string_, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, format, IS_STRING, 0)
	ZEND_ARG_INFO(0, baseYear)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qdatetime_qdatetime_fromstringqstringviewqstringviewintqcalendar, 0, 4, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, string_, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, format, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, baseYear, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, cal, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qdatetime_qdatetime_fromstringqstringqstringviewint, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, string_, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, format, IS_STRING, 0)
	ZEND_ARG_INFO(0, baseYear)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qdatetime_qdatetime_fromstringqstringqstringviewintqcalendar, 0, 4, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, string_, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, format, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, baseYear, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, cal, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qdatetime_qdatetime_fromstringqstringqstringint, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, string_, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, format, IS_STRING, 0)
	ZEND_ARG_INFO(0, baseYear)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qdatetime_qdatetime_fromstringqstringqstringintqcalendar, 0, 4, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, string_, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, format, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, baseYear, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, cal, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qdatetime_qdatetime_frommsecssinceepoch, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, msecs, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, timeZone, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qdatetime_qdatetime_fromsecssinceepoch, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, secs, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, timeZone, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qdatetime_qdatetime_frommsecssinceepochqint64, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, msecs, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qdatetime_qdatetime_fromsecssinceepochqint64, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, secs, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qdatetime_qdatetime_currentmsecssinceepoch, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qdatetime_qdatetime_currentsecssinceepoch, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_core_qdatetime_qdatetime_method_entry) {
	PHP_ME(Qt_Core_QDateTime_QDateTime, new_, arginfo_qt_core_qdatetime_qdatetime_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QDateTime_QDateTime, newQDateQTimeQtTimeSpecInt, arginfo_qt_core_qdatetime_qdatetime_newqdateqtimeqttimespecint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QDateTime_QDateTime, newQDateQTimeQTimeZoneQDateTimeTransitionResolution, arginfo_qt_core_qdatetime_qdatetime_newqdateqtimeqtimezoneqdatetimetransitionresolution, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QDateTime_QDateTime, newQDateQTimeQDateTimeTransitionResolution, arginfo_qt_core_qdatetime_qdatetime_newqdateqtimeqdatetimetransitionresolution, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QDateTime_QDateTime, newQDateTime, arginfo_qt_core_qdatetime_qdatetime_newqdatetime, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QDateTime_QDateTime, swap, arginfo_qt_core_qdatetime_qdatetime_swap, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QDateTime_QDateTime, isNull, arginfo_qt_core_qdatetime_qdatetime_isnull, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QDateTime_QDateTime, isValid, arginfo_qt_core_qdatetime_qdatetime_isvalid, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QDateTime_QDateTime, date, arginfo_qt_core_qdatetime_qdatetime_date, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QDateTime_QDateTime, time, arginfo_qt_core_qdatetime_qdatetime_time, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QDateTime_QDateTime, timeSpec, arginfo_qt_core_qdatetime_qdatetime_timespec, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QDateTime_QDateTime, offsetFromUtc, arginfo_qt_core_qdatetime_qdatetime_offsetfromutc, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QDateTime_QDateTime, timeRepresentation, arginfo_qt_core_qdatetime_qdatetime_timerepresentation, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QDateTime_QDateTime, timeZone, arginfo_qt_core_qdatetime_qdatetime_timezone, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QDateTime_QDateTime, timeZoneAbbreviation, arginfo_qt_core_qdatetime_qdatetime_timezoneabbreviation, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QDateTime_QDateTime, isDaylightTime, arginfo_qt_core_qdatetime_qdatetime_isdaylighttime, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QDateTime_QDateTime, toMSecsSinceEpoch, arginfo_qt_core_qdatetime_qdatetime_tomsecssinceepoch, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QDateTime_QDateTime, toSecsSinceEpoch, arginfo_qt_core_qdatetime_qdatetime_tosecssinceepoch, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QDateTime_QDateTime, setDate, arginfo_qt_core_qdatetime_qdatetime_setdate, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QDateTime_QDateTime, setTime, arginfo_qt_core_qdatetime_qdatetime_settime, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QDateTime_QDateTime, setTimeZone, arginfo_qt_core_qdatetime_qdatetime_settimezone, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QDateTime_QDateTime, setMSecsSinceEpoch, arginfo_qt_core_qdatetime_qdatetime_setmsecssinceepoch, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QDateTime_QDateTime, setSecsSinceEpoch, arginfo_qt_core_qdatetime_qdatetime_setsecssinceepoch, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QDateTime_QDateTime, toString, arginfo_qt_core_qdatetime_qdatetime_tostring, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QDateTime_QDateTime, toStringQString, arginfo_qt_core_qdatetime_qdatetime_tostringqstring, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QDateTime_QDateTime, toStringQStringQCalendar, arginfo_qt_core_qdatetime_qdatetime_tostringqstringqcalendar, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QDateTime_QDateTime, toStringQStringView, arginfo_qt_core_qdatetime_qdatetime_tostringqstringview, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QDateTime_QDateTime, toStringQStringViewQCalendar, arginfo_qt_core_qdatetime_qdatetime_tostringqstringviewqcalendar, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QDateTime_QDateTime, addDays, arginfo_qt_core_qdatetime_qdatetime_adddays, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QDateTime_QDateTime, addMonths, arginfo_qt_core_qdatetime_qdatetime_addmonths, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QDateTime_QDateTime, addYears, arginfo_qt_core_qdatetime_qdatetime_addyears, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QDateTime_QDateTime, addSecs, arginfo_qt_core_qdatetime_qdatetime_addsecs, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QDateTime_QDateTime, addMSecs, arginfo_qt_core_qdatetime_qdatetime_addmsecs, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QDateTime_QDateTime, toLocalTime, arginfo_qt_core_qdatetime_qdatetime_tolocaltime, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QDateTime_QDateTime, toUTC, arginfo_qt_core_qdatetime_qdatetime_toutc, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QDateTime_QDateTime, toOffsetFromUtc, arginfo_qt_core_qdatetime_qdatetime_tooffsetfromutc, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QDateTime_QDateTime, toTimeZone, arginfo_qt_core_qdatetime_qdatetime_totimezone, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QDateTime_QDateTime, daysTo, arginfo_qt_core_qdatetime_qdatetime_daysto, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QDateTime_QDateTime, secsTo, arginfo_qt_core_qdatetime_qdatetime_secsto, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QDateTime_QDateTime, msecsTo, arginfo_qt_core_qdatetime_qdatetime_msecsto, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QDateTime_QDateTime, currentDateTime, arginfo_qt_core_qdatetime_qdatetime_currentdatetime, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QDateTime_QDateTime, currentDateTime2, arginfo_qt_core_qdatetime_qdatetime_currentdatetime2, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QDateTime_QDateTime, currentDateTimeUtc, arginfo_qt_core_qdatetime_qdatetime_currentdatetimeutc, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QDateTime_QDateTime, fromString, arginfo_qt_core_qdatetime_qdatetime_fromstring, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QDateTime_QDateTime, fromStringQStringQtDateFormat, arginfo_qt_core_qdatetime_qdatetime_fromstringqstringqtdateformat, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QDateTime_QDateTime, fromStringQStringViewQStringViewQCalendar, arginfo_qt_core_qdatetime_qdatetime_fromstringqstringviewqstringviewqcalendar, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QDateTime_QDateTime, fromStringQStringQStringViewQCalendar, arginfo_qt_core_qdatetime_qdatetime_fromstringqstringqstringviewqcalendar, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QDateTime_QDateTime, fromStringQStringQStringQCalendar, arginfo_qt_core_qdatetime_qdatetime_fromstringqstringqstringqcalendar, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QDateTime_QDateTime, fromStringQStringViewQStringViewInt, arginfo_qt_core_qdatetime_qdatetime_fromstringqstringviewqstringviewint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QDateTime_QDateTime, fromStringQStringViewQStringViewIntQCalendar, arginfo_qt_core_qdatetime_qdatetime_fromstringqstringviewqstringviewintqcalendar, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QDateTime_QDateTime, fromStringQStringQStringViewInt, arginfo_qt_core_qdatetime_qdatetime_fromstringqstringqstringviewint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QDateTime_QDateTime, fromStringQStringQStringViewIntQCalendar, arginfo_qt_core_qdatetime_qdatetime_fromstringqstringqstringviewintqcalendar, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QDateTime_QDateTime, fromStringQStringQStringInt, arginfo_qt_core_qdatetime_qdatetime_fromstringqstringqstringint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QDateTime_QDateTime, fromStringQStringQStringIntQCalendar, arginfo_qt_core_qdatetime_qdatetime_fromstringqstringqstringintqcalendar, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QDateTime_QDateTime, fromMSecsSinceEpoch, arginfo_qt_core_qdatetime_qdatetime_frommsecssinceepoch, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QDateTime_QDateTime, fromSecsSinceEpoch, arginfo_qt_core_qdatetime_qdatetime_fromsecssinceepoch, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QDateTime_QDateTime, fromMSecsSinceEpochQint64, arginfo_qt_core_qdatetime_qdatetime_frommsecssinceepochqint64, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QDateTime_QDateTime, fromSecsSinceEpochQint64, arginfo_qt_core_qdatetime_qdatetime_fromsecssinceepochqint64, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QDateTime_QDateTime, currentMSecsSinceEpoch, arginfo_qt_core_qdatetime_qdatetime_currentmsecssinceepoch, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QDateTime_QDateTime, currentSecsSinceEpoch, arginfo_qt_core_qdatetime_qdatetime_currentsecssinceepoch, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
