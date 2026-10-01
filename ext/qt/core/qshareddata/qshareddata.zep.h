
extern zend_class_entry *qt_core_qshareddata_qshareddata_ce;

ZEPHIR_INIT_CLASS(Qt_Core_QSharedData_QSharedData);

PHP_METHOD(Qt_Core_QSharedData_QSharedData, ref);
PHP_METHOD(Qt_Core_QSharedData_QSharedData, setRef);
PHP_METHOD(Qt_Core_QSharedData_QSharedData, new_);
PHP_METHOD(Qt_Core_QSharedData_QSharedData, newQSharedData);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qshareddata_qshareddata_ref, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qshareddata_qshareddata_setref, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qshareddata_qshareddata_new_, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qshareddata_qshareddata_newqshareddata, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_core_qshareddata_qshareddata_method_entry) {
	PHP_ME(Qt_Core_QSharedData_QSharedData, ref, arginfo_qt_core_qshareddata_qshareddata_ref, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QSharedData_QSharedData, setRef, arginfo_qt_core_qshareddata_qshareddata_setref, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QSharedData_QSharedData, new_, arginfo_qt_core_qshareddata_qshareddata_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QSharedData_QSharedData, newQSharedData, arginfo_qt_core_qshareddata_qshareddata_newqshareddata, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
