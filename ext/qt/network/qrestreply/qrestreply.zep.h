
extern zend_class_entry *qt_network_qrestreply_qrestreply_ce;

ZEPHIR_INIT_CLASS(Qt_Network_QRestReply_QRestReply);

PHP_METHOD(Qt_Network_QRestReply_QRestReply, new_);
PHP_METHOD(Qt_Network_QRestReply_QRestReply, swap);
PHP_METHOD(Qt_Network_QRestReply_QRestReply, networkReply);
PHP_METHOD(Qt_Network_QRestReply_QRestReply, readBody);
PHP_METHOD(Qt_Network_QRestReply_QRestReply, readText);
PHP_METHOD(Qt_Network_QRestReply_QRestReply, isSuccess);
PHP_METHOD(Qt_Network_QRestReply_QRestReply, httpStatus);
PHP_METHOD(Qt_Network_QRestReply_QRestReply, isHttpStatusSuccess);
PHP_METHOD(Qt_Network_QRestReply_QRestReply, hasError);
PHP_METHOD(Qt_Network_QRestReply_QRestReply, error);
PHP_METHOD(Qt_Network_QRestReply_QRestReply, errorString);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qrestreply_qrestreply_new_, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, reply, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qrestreply_qrestreply_swap, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, other, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qrestreply_qrestreply_networkreply, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qrestreply_qrestreply_readbody, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qrestreply_qrestreply_readtext, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qrestreply_qrestreply_issuccess, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qrestreply_qrestreply_httpstatus, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qrestreply_qrestreply_ishttpstatussuccess, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qrestreply_qrestreply_haserror, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qrestreply_qrestreply_error, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qrestreply_qrestreply_errorstring, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_network_qrestreply_qrestreply_method_entry) {
	PHP_ME(Qt_Network_QRestReply_QRestReply, new_, arginfo_qt_network_qrestreply_qrestreply_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QRestReply_QRestReply, swap, arginfo_qt_network_qrestreply_qrestreply_swap, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QRestReply_QRestReply, networkReply, arginfo_qt_network_qrestreply_qrestreply_networkreply, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QRestReply_QRestReply, readBody, arginfo_qt_network_qrestreply_qrestreply_readbody, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QRestReply_QRestReply, readText, arginfo_qt_network_qrestreply_qrestreply_readtext, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QRestReply_QRestReply, isSuccess, arginfo_qt_network_qrestreply_qrestreply_issuccess, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QRestReply_QRestReply, httpStatus, arginfo_qt_network_qrestreply_qrestreply_httpstatus, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QRestReply_QRestReply, isHttpStatusSuccess, arginfo_qt_network_qrestreply_qrestreply_ishttpstatussuccess, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QRestReply_QRestReply, hasError, arginfo_qt_network_qrestreply_qrestreply_haserror, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QRestReply_QRestReply, error, arginfo_qt_network_qrestreply_qrestreply_error, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QRestReply_QRestReply, errorString, arginfo_qt_network_qrestreply_qrestreply_errorstring, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
