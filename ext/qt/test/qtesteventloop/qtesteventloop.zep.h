
extern zend_class_entry *qt_test_qtesteventloop_qtesteventloop_ce;

ZEPHIR_INIT_CLASS(Qt_Test_QTestEventLoop_QTestEventLoop);

PHP_METHOD(Qt_Test_QTestEventLoop_QTestEventLoop, staticMetaObject);
PHP_METHOD(Qt_Test_QTestEventLoop_QTestEventLoop, tr);
PHP_METHOD(Qt_Test_QTestEventLoop_QTestEventLoop, new_);
PHP_METHOD(Qt_Test_QTestEventLoop_QTestEventLoop, enterLoopMSecs);
PHP_METHOD(Qt_Test_QTestEventLoop_QTestEventLoop, enterLoop);
PHP_METHOD(Qt_Test_QTestEventLoop_QTestEventLoop, changeInterval);
PHP_METHOD(Qt_Test_QTestEventLoop_QTestEventLoop, timeout);
PHP_METHOD(Qt_Test_QTestEventLoop_QTestEventLoop, instance);
PHP_METHOD(Qt_Test_QTestEventLoop_QTestEventLoop, exitLoop);
PHP_METHOD(Qt_Test_QTestEventLoop_QTestEventLoop, timerEvent);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_test_qtesteventloop_qtesteventloop_staticmetaobject, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_test_qtesteventloop_qtesteventloop_tr, 0, 1, IS_STRING, 0)
	ZEND_ARG_INFO(0, s)
	ZEND_ARG_INFO(0, c)
	ZEND_ARG_TYPE_INFO(0, n, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_test_qtesteventloop_qtesteventloop_new_, 0, 0, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_test_qtesteventloop_qtesteventloop_enterloopmsecs, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, ms, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_test_qtesteventloop_qtesteventloop_enterloop, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, secs, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_test_qtesteventloop_qtesteventloop_changeinterval, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, secs, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_test_qtesteventloop_qtesteventloop_timeout, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_test_qtesteventloop_qtesteventloop_instance, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_test_qtesteventloop_qtesteventloop_exitloop, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_test_qtesteventloop_qtesteventloop_timerevent, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, e, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_test_qtesteventloop_qtesteventloop_method_entry) {
	PHP_ME(Qt_Test_QTestEventLoop_QTestEventLoop, staticMetaObject, arginfo_qt_test_qtesteventloop_qtesteventloop_staticmetaobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Test_QTestEventLoop_QTestEventLoop, tr, arginfo_qt_test_qtesteventloop_qtesteventloop_tr, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Test_QTestEventLoop_QTestEventLoop, new_, arginfo_qt_test_qtesteventloop_qtesteventloop_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Test_QTestEventLoop_QTestEventLoop, enterLoopMSecs, arginfo_qt_test_qtesteventloop_qtesteventloop_enterloopmsecs, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Test_QTestEventLoop_QTestEventLoop, enterLoop, arginfo_qt_test_qtesteventloop_qtesteventloop_enterloop, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Test_QTestEventLoop_QTestEventLoop, changeInterval, arginfo_qt_test_qtesteventloop_qtesteventloop_changeinterval, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Test_QTestEventLoop_QTestEventLoop, timeout, arginfo_qt_test_qtesteventloop_qtesteventloop_timeout, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Test_QTestEventLoop_QTestEventLoop, instance, arginfo_qt_test_qtesteventloop_qtesteventloop_instance, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Test_QTestEventLoop_QTestEventLoop, exitLoop, arginfo_qt_test_qtesteventloop_qtesteventloop_exitloop, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Test_QTestEventLoop_QTestEventLoop, timerEvent, arginfo_qt_test_qtesteventloop_qtesteventloop_timerevent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
