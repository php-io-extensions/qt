
extern zend_class_entry *qt_test_qsignalspy_qsignalspy_ce;

ZEPHIR_INIT_CLASS(Qt_Test_QSignalSpy_QSignalSpy);

PHP_METHOD(Qt_Test_QSignalSpy_QSignalSpy, new_);
PHP_METHOD(Qt_Test_QSignalSpy_QSignalSpy, newQObjectQMetaMethod);
PHP_METHOD(Qt_Test_QSignalSpy_QSignalSpy, isValid);
PHP_METHOD(Qt_Test_QSignalSpy_QSignalSpy, signal);
PHP_METHOD(Qt_Test_QSignalSpy_QSignalSpy, wait);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_test_qsignalspy_qsignalspy_new_, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, obj, IS_LONG, 0)
	ZEND_ARG_INFO(0, aSignal)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_test_qsignalspy_qsignalspy_newqobjectqmetamethod, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, obj, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, signal, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_test_qsignalspy_qsignalspy_isvalid, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_test_qsignalspy_qsignalspy_signal, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_test_qsignalspy_qsignalspy_wait, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, timeout, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_test_qsignalspy_qsignalspy_method_entry) {
	PHP_ME(Qt_Test_QSignalSpy_QSignalSpy, new_, arginfo_qt_test_qsignalspy_qsignalspy_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Test_QSignalSpy_QSignalSpy, newQObjectQMetaMethod, arginfo_qt_test_qsignalspy_qsignalspy_newqobjectqmetamethod, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Test_QSignalSpy_QSignalSpy, isValid, arginfo_qt_test_qsignalspy_qsignalspy_isvalid, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Test_QSignalSpy_QSignalSpy, signal, arginfo_qt_test_qsignalspy_qsignalspy_signal, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Test_QSignalSpy_QSignalSpy, wait, arginfo_qt_test_qsignalspy_qsignalspy_wait, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
