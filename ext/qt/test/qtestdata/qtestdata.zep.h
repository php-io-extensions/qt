
extern zend_class_entry *qt_test_qtestdata_qtestdata_ce;

ZEPHIR_INIT_CLASS(Qt_Test_QTestData_QTestData);

PHP_METHOD(Qt_Test_QTestData_QTestData, dataTag);
PHP_METHOD(Qt_Test_QTestData_QTestData, dataCount);

ZEND_BEGIN_ARG_INFO_EX(arginfo_qt_test_qtestdata_qtestdata_datatag, 0, 0, 1)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_test_qtestdata_qtestdata_datacount, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_test_qtestdata_qtestdata_method_entry) {
	PHP_ME(Qt_Test_QTestData_QTestData, dataTag, arginfo_qt_test_qtestdata_qtestdata_datatag, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Test_QTestData_QTestData, dataCount, arginfo_qt_test_qtestdata_qtestdata_datacount, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
