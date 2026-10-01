
extern zend_class_entry *qt_core_qtime_qtime_ce;

ZEPHIR_INIT_CLASS(Qt_Core_QTime_QTime);

PHP_METHOD(Qt_Core_QTime_QTime, new_);
PHP_METHOD(Qt_Core_QTime_QTime, newIntIntIntInt);
PHP_METHOD(Qt_Core_QTime_QTime, isNull);
PHP_METHOD(Qt_Core_QTime_QTime, isValid);
PHP_METHOD(Qt_Core_QTime_QTime, hour);
PHP_METHOD(Qt_Core_QTime_QTime, minute);
PHP_METHOD(Qt_Core_QTime_QTime, second);
PHP_METHOD(Qt_Core_QTime_QTime, msec);
PHP_METHOD(Qt_Core_QTime_QTime, toString);
PHP_METHOD(Qt_Core_QTime_QTime, toStringQString);
PHP_METHOD(Qt_Core_QTime_QTime, toStringQStringView);
PHP_METHOD(Qt_Core_QTime_QTime, setHMS);
PHP_METHOD(Qt_Core_QTime_QTime, addSecs);
PHP_METHOD(Qt_Core_QTime_QTime, secsTo);
PHP_METHOD(Qt_Core_QTime_QTime, addMSecs);
PHP_METHOD(Qt_Core_QTime_QTime, msecsTo);
PHP_METHOD(Qt_Core_QTime_QTime, fromMSecsSinceStartOfDay);
PHP_METHOD(Qt_Core_QTime_QTime, msecsSinceStartOfDay);
PHP_METHOD(Qt_Core_QTime_QTime, currentTime);
PHP_METHOD(Qt_Core_QTime_QTime, fromString);
PHP_METHOD(Qt_Core_QTime_QTime, fromStringQStringViewQStringView);
PHP_METHOD(Qt_Core_QTime_QTime, fromStringQStringQStringView);
PHP_METHOD(Qt_Core_QTime_QTime, fromStringQStringQtDateFormat);
PHP_METHOD(Qt_Core_QTime_QTime, fromStringQStringQString);
PHP_METHOD(Qt_Core_QTime_QTime, isValidIntIntIntInt);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qtime_qtime_new_, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qtime_qtime_newintintintint, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, h, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, m, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, s, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, ms, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qtime_qtime_isnull, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qtime_qtime_isvalid, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qtime_qtime_hour, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qtime_qtime_minute, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qtime_qtime_second, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qtime_qtime_msec, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qtime_qtime_tostring, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_INFO(0, f)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qtime_qtime_tostringqstring, 0, 2, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, format, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qtime_qtime_tostringqstringview, 0, 2, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, format, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qtime_qtime_sethms, 0, 4, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, h, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, m, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, s, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, ms, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qtime_qtime_addsecs, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, secs, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qtime_qtime_secsto, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, t, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qtime_qtime_addmsecs, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, ms, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qtime_qtime_msecsto, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, t, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qtime_qtime_frommsecssincestartofday, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, msecs, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qtime_qtime_msecssincestartofday, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qtime_qtime_currenttime, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qtime_qtime_fromstring, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, string_, IS_STRING, 0)
	ZEND_ARG_INFO(0, format)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qtime_qtime_fromstringqstringviewqstringview, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, string_, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, format, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qtime_qtime_fromstringqstringqstringview, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, string_, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, format, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qtime_qtime_fromstringqstringqtdateformat, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, string_, IS_STRING, 0)
	ZEND_ARG_INFO(0, format)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qtime_qtime_fromstringqstringqstring, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, string_, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, format, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qtime_qtime_isvalidintintintint, 0, 3, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, h, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, m, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, s, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, ms, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_core_qtime_qtime_method_entry) {
	PHP_ME(Qt_Core_QTime_QTime, new_, arginfo_qt_core_qtime_qtime_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QTime_QTime, newIntIntIntInt, arginfo_qt_core_qtime_qtime_newintintintint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QTime_QTime, isNull, arginfo_qt_core_qtime_qtime_isnull, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QTime_QTime, isValid, arginfo_qt_core_qtime_qtime_isvalid, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QTime_QTime, hour, arginfo_qt_core_qtime_qtime_hour, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QTime_QTime, minute, arginfo_qt_core_qtime_qtime_minute, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QTime_QTime, second, arginfo_qt_core_qtime_qtime_second, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QTime_QTime, msec, arginfo_qt_core_qtime_qtime_msec, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QTime_QTime, toString, arginfo_qt_core_qtime_qtime_tostring, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QTime_QTime, toStringQString, arginfo_qt_core_qtime_qtime_tostringqstring, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QTime_QTime, toStringQStringView, arginfo_qt_core_qtime_qtime_tostringqstringview, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QTime_QTime, setHMS, arginfo_qt_core_qtime_qtime_sethms, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QTime_QTime, addSecs, arginfo_qt_core_qtime_qtime_addsecs, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QTime_QTime, secsTo, arginfo_qt_core_qtime_qtime_secsto, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QTime_QTime, addMSecs, arginfo_qt_core_qtime_qtime_addmsecs, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QTime_QTime, msecsTo, arginfo_qt_core_qtime_qtime_msecsto, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QTime_QTime, fromMSecsSinceStartOfDay, arginfo_qt_core_qtime_qtime_frommsecssincestartofday, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QTime_QTime, msecsSinceStartOfDay, arginfo_qt_core_qtime_qtime_msecssincestartofday, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QTime_QTime, currentTime, arginfo_qt_core_qtime_qtime_currenttime, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QTime_QTime, fromString, arginfo_qt_core_qtime_qtime_fromstring, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QTime_QTime, fromStringQStringViewQStringView, arginfo_qt_core_qtime_qtime_fromstringqstringviewqstringview, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QTime_QTime, fromStringQStringQStringView, arginfo_qt_core_qtime_qtime_fromstringqstringqstringview, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QTime_QTime, fromStringQStringQtDateFormat, arginfo_qt_core_qtime_qtime_fromstringqstringqtdateformat, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QTime_QTime, fromStringQStringQString, arginfo_qt_core_qtime_qtime_fromstringqstringqstring, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QTime_QTime, isValidIntIntIntInt, arginfo_qt_core_qtime_qtime_isvalidintintintint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
