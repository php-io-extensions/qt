
extern zend_class_entry *qt_core_qcalendarsystemid_qcalendarsystemid_ce;

ZEPHIR_INIT_CLASS(Qt_Core_QCalendarSystemId_QCalendarSystemId);

PHP_METHOD(Qt_Core_QCalendarSystemId_QCalendarSystemId, new_);
PHP_METHOD(Qt_Core_QCalendarSystemId_QCalendarSystemId, index);
PHP_METHOD(Qt_Core_QCalendarSystemId_QCalendarSystemId, isValid);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcalendarsystemid_qcalendarsystemid_new_, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcalendarsystemid_qcalendarsystemid_index, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcalendarsystemid_qcalendarsystemid_isvalid, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_core_qcalendarsystemid_qcalendarsystemid_method_entry) {
	PHP_ME(Qt_Core_QCalendarSystemId_QCalendarSystemId, new_, arginfo_qt_core_qcalendarsystemid_qcalendarsystemid_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCalendarSystemId_QCalendarSystemId, index, arginfo_qt_core_qcalendarsystemid_qcalendarsystemid_index, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCalendarSystemId_QCalendarSystemId, isValid, arginfo_qt_core_qcalendarsystemid_qcalendarsystemid_isvalid, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
