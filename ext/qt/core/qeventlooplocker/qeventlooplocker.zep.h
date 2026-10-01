
extern zend_class_entry *qt_core_qeventlooplocker_qeventlooplocker_ce;

ZEPHIR_INIT_CLASS(Qt_Core_QEventLoopLocker_QEventLoopLocker);

PHP_METHOD(Qt_Core_QEventLoopLocker_QEventLoopLocker, new_);
PHP_METHOD(Qt_Core_QEventLoopLocker_QEventLoopLocker, newQEventLoop);
PHP_METHOD(Qt_Core_QEventLoopLocker_QEventLoopLocker, newQThread);
PHP_METHOD(Qt_Core_QEventLoopLocker_QEventLoopLocker, swap);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qeventlooplocker_qeventlooplocker_new_, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qeventlooplocker_qeventlooplocker_newqeventloop, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, loop_, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qeventlooplocker_qeventlooplocker_newqthread, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, thread, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qeventlooplocker_qeventlooplocker_swap, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, other, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_core_qeventlooplocker_qeventlooplocker_method_entry) {
	PHP_ME(Qt_Core_QEventLoopLocker_QEventLoopLocker, new_, arginfo_qt_core_qeventlooplocker_qeventlooplocker_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QEventLoopLocker_QEventLoopLocker, newQEventLoop, arginfo_qt_core_qeventlooplocker_qeventlooplocker_newqeventloop, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QEventLoopLocker_QEventLoopLocker, newQThread, arginfo_qt_core_qeventlooplocker_qeventlooplocker_newqthread, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QEventLoopLocker_QEventLoopLocker, swap, arginfo_qt_core_qeventlooplocker_qeventlooplocker_swap, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
