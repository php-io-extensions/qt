
extern zend_class_entry *qt_core_qloggingcategory_qloggingcategory_ce;

ZEPHIR_INIT_CLASS(Qt_Core_QLoggingCategory_QLoggingCategory);

PHP_METHOD(Qt_Core_QLoggingCategory_QLoggingCategory, new_);
PHP_METHOD(Qt_Core_QLoggingCategory_QLoggingCategory, isEnabled);
PHP_METHOD(Qt_Core_QLoggingCategory_QLoggingCategory, setEnabled);
PHP_METHOD(Qt_Core_QLoggingCategory_QLoggingCategory, isDebugEnabled);
PHP_METHOD(Qt_Core_QLoggingCategory_QLoggingCategory, isInfoEnabled);
PHP_METHOD(Qt_Core_QLoggingCategory_QLoggingCategory, isWarningEnabled);
PHP_METHOD(Qt_Core_QLoggingCategory_QLoggingCategory, isCriticalEnabled);
PHP_METHOD(Qt_Core_QLoggingCategory_QLoggingCategory, categoryName);
PHP_METHOD(Qt_Core_QLoggingCategory_QLoggingCategory, defaultCategory);
PHP_METHOD(Qt_Core_QLoggingCategory_QLoggingCategory, setFilterRules);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qloggingcategory_qloggingcategory_new_, 0, 1, IS_LONG, 0)
	ZEND_ARG_INFO(0, category)
	ZEND_ARG_INFO(0, severityLevel)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qloggingcategory_qloggingcategory_isenabled, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, type, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qloggingcategory_qloggingcategory_setenabled, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, type, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, enable, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qloggingcategory_qloggingcategory_isdebugenabled, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qloggingcategory_qloggingcategory_isinfoenabled, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qloggingcategory_qloggingcategory_iswarningenabled, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qloggingcategory_qloggingcategory_iscriticalenabled, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_qt_core_qloggingcategory_qloggingcategory_categoryname, 0, 0, 1)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qloggingcategory_qloggingcategory_defaultcategory, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qloggingcategory_qloggingcategory_setfilterrules, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, rules, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_core_qloggingcategory_qloggingcategory_method_entry) {
	PHP_ME(Qt_Core_QLoggingCategory_QLoggingCategory, new_, arginfo_qt_core_qloggingcategory_qloggingcategory_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QLoggingCategory_QLoggingCategory, isEnabled, arginfo_qt_core_qloggingcategory_qloggingcategory_isenabled, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QLoggingCategory_QLoggingCategory, setEnabled, arginfo_qt_core_qloggingcategory_qloggingcategory_setenabled, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QLoggingCategory_QLoggingCategory, isDebugEnabled, arginfo_qt_core_qloggingcategory_qloggingcategory_isdebugenabled, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QLoggingCategory_QLoggingCategory, isInfoEnabled, arginfo_qt_core_qloggingcategory_qloggingcategory_isinfoenabled, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QLoggingCategory_QLoggingCategory, isWarningEnabled, arginfo_qt_core_qloggingcategory_qloggingcategory_iswarningenabled, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QLoggingCategory_QLoggingCategory, isCriticalEnabled, arginfo_qt_core_qloggingcategory_qloggingcategory_iscriticalenabled, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QLoggingCategory_QLoggingCategory, categoryName, arginfo_qt_core_qloggingcategory_qloggingcategory_categoryname, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QLoggingCategory_QLoggingCategory, defaultCategory, arginfo_qt_core_qloggingcategory_qloggingcategory_defaultcategory, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QLoggingCategory_QLoggingCategory, setFilterRules, arginfo_qt_core_qloggingcategory_qloggingcategory_setfilterrules, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
