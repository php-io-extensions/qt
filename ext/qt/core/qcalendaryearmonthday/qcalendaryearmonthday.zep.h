
extern zend_class_entry *qt_core_qcalendaryearmonthday_qcalendaryearmonthday_ce;

ZEPHIR_INIT_CLASS(Qt_Core_QCalendarYearMonthDay_QCalendarYearMonthDay);

PHP_METHOD(Qt_Core_QCalendarYearMonthDay_QCalendarYearMonthDay, new_);
PHP_METHOD(Qt_Core_QCalendarYearMonthDay_QCalendarYearMonthDay, newIntIntInt);
PHP_METHOD(Qt_Core_QCalendarYearMonthDay_QCalendarYearMonthDay, isValid);
PHP_METHOD(Qt_Core_QCalendarYearMonthDay_QCalendarYearMonthDay, year);
PHP_METHOD(Qt_Core_QCalendarYearMonthDay_QCalendarYearMonthDay, setYear);
PHP_METHOD(Qt_Core_QCalendarYearMonthDay_QCalendarYearMonthDay, month);
PHP_METHOD(Qt_Core_QCalendarYearMonthDay_QCalendarYearMonthDay, setMonth);
PHP_METHOD(Qt_Core_QCalendarYearMonthDay_QCalendarYearMonthDay, day);
PHP_METHOD(Qt_Core_QCalendarYearMonthDay_QCalendarYearMonthDay, setDay);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcalendaryearmonthday_qcalendaryearmonthday_new_, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcalendaryearmonthday_qcalendaryearmonthday_newintintint, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, m, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, d, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcalendaryearmonthday_qcalendaryearmonthday_isvalid, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcalendaryearmonthday_qcalendaryearmonthday_year, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcalendaryearmonthday_qcalendaryearmonthday_setyear, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcalendaryearmonthday_qcalendaryearmonthday_month, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcalendaryearmonthday_qcalendaryearmonthday_setmonth, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcalendaryearmonthday_qcalendaryearmonthday_day, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcalendaryearmonthday_qcalendaryearmonthday_setday, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_core_qcalendaryearmonthday_qcalendaryearmonthday_method_entry) {
	PHP_ME(Qt_Core_QCalendarYearMonthDay_QCalendarYearMonthDay, new_, arginfo_qt_core_qcalendaryearmonthday_qcalendaryearmonthday_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCalendarYearMonthDay_QCalendarYearMonthDay, newIntIntInt, arginfo_qt_core_qcalendaryearmonthday_qcalendaryearmonthday_newintintint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCalendarYearMonthDay_QCalendarYearMonthDay, isValid, arginfo_qt_core_qcalendaryearmonthday_qcalendaryearmonthday_isvalid, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCalendarYearMonthDay_QCalendarYearMonthDay, year, arginfo_qt_core_qcalendaryearmonthday_qcalendaryearmonthday_year, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCalendarYearMonthDay_QCalendarYearMonthDay, setYear, arginfo_qt_core_qcalendaryearmonthday_qcalendaryearmonthday_setyear, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCalendarYearMonthDay_QCalendarYearMonthDay, month, arginfo_qt_core_qcalendaryearmonthday_qcalendaryearmonthday_month, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCalendarYearMonthDay_QCalendarYearMonthDay, setMonth, arginfo_qt_core_qcalendaryearmonthday_qcalendaryearmonthday_setmonth, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCalendarYearMonthDay_QCalendarYearMonthDay, day, arginfo_qt_core_qcalendaryearmonthday_qcalendaryearmonthday_day, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCalendarYearMonthDay_QCalendarYearMonthDay, setDay, arginfo_qt_core_qcalendaryearmonthday_qcalendaryearmonthday_setday, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
