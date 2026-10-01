
extern zend_class_entry *qt_core_qsocketnotifier_qsocketnotifier_ce;

ZEPHIR_INIT_CLASS(Qt_Core_QSocketNotifier_QSocketNotifier);

PHP_METHOD(Qt_Core_QSocketNotifier_QSocketNotifier, staticMetaObject);
PHP_METHOD(Qt_Core_QSocketNotifier_QSocketNotifier, tr);
PHP_METHOD(Qt_Core_QSocketNotifier_QSocketNotifier, new_);
PHP_METHOD(Qt_Core_QSocketNotifier_QSocketNotifier, newQintptrQSocketNotifierTypeQObject);
PHP_METHOD(Qt_Core_QSocketNotifier_QSocketNotifier, setSocket);
PHP_METHOD(Qt_Core_QSocketNotifier_QSocketNotifier, socket);
PHP_METHOD(Qt_Core_QSocketNotifier_QSocketNotifier, type);
PHP_METHOD(Qt_Core_QSocketNotifier_QSocketNotifier, isValid);
PHP_METHOD(Qt_Core_QSocketNotifier_QSocketNotifier, isEnabled);
PHP_METHOD(Qt_Core_QSocketNotifier_QSocketNotifier, setEnabled);
PHP_METHOD(Qt_Core_QSocketNotifier_QSocketNotifier, event);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qsocketnotifier_qsocketnotifier_staticmetaobject, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qsocketnotifier_qsocketnotifier_tr, 0, 1, IS_STRING, 0)
	ZEND_ARG_INFO(0, s)
	ZEND_ARG_INFO(0, c)
	ZEND_ARG_TYPE_INFO(0, n, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qsocketnotifier_qsocketnotifier_new_, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qsocketnotifier_qsocketnotifier_newqintptrqsocketnotifiertypeqobject, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, socket, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qsocketnotifier_qsocketnotifier_setsocket, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, socket, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qsocketnotifier_qsocketnotifier_socket, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qsocketnotifier_qsocketnotifier_type, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qsocketnotifier_qsocketnotifier_isvalid, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qsocketnotifier_qsocketnotifier_isenabled, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qsocketnotifier_qsocketnotifier_setenabled, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qsocketnotifier_qsocketnotifier_event, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_core_qsocketnotifier_qsocketnotifier_method_entry) {
	PHP_ME(Qt_Core_QSocketNotifier_QSocketNotifier, staticMetaObject, arginfo_qt_core_qsocketnotifier_qsocketnotifier_staticmetaobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QSocketNotifier_QSocketNotifier, tr, arginfo_qt_core_qsocketnotifier_qsocketnotifier_tr, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QSocketNotifier_QSocketNotifier, new_, arginfo_qt_core_qsocketnotifier_qsocketnotifier_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QSocketNotifier_QSocketNotifier, newQintptrQSocketNotifierTypeQObject, arginfo_qt_core_qsocketnotifier_qsocketnotifier_newqintptrqsocketnotifiertypeqobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QSocketNotifier_QSocketNotifier, setSocket, arginfo_qt_core_qsocketnotifier_qsocketnotifier_setsocket, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QSocketNotifier_QSocketNotifier, socket, arginfo_qt_core_qsocketnotifier_qsocketnotifier_socket, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QSocketNotifier_QSocketNotifier, type, arginfo_qt_core_qsocketnotifier_qsocketnotifier_type, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QSocketNotifier_QSocketNotifier, isValid, arginfo_qt_core_qsocketnotifier_qsocketnotifier_isvalid, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QSocketNotifier_QSocketNotifier, isEnabled, arginfo_qt_core_qsocketnotifier_qsocketnotifier_isenabled, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QSocketNotifier_QSocketNotifier, setEnabled, arginfo_qt_core_qsocketnotifier_qsocketnotifier_setenabled, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QSocketNotifier_QSocketNotifier, event, arginfo_qt_core_qsocketnotifier_qsocketnotifier_event, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
