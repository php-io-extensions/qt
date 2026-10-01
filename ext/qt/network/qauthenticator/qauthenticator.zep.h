
extern zend_class_entry *qt_network_qauthenticator_qauthenticator_ce;

ZEPHIR_INIT_CLASS(Qt_Network_QAuthenticator_QAuthenticator);

PHP_METHOD(Qt_Network_QAuthenticator_QAuthenticator, staticMetaObject);
PHP_METHOD(Qt_Network_QAuthenticator_QAuthenticator, qt_check_for_QGADGET_macro);
PHP_METHOD(Qt_Network_QAuthenticator_QAuthenticator, new_);
PHP_METHOD(Qt_Network_QAuthenticator_QAuthenticator, newQAuthenticator);
PHP_METHOD(Qt_Network_QAuthenticator_QAuthenticator, user);
PHP_METHOD(Qt_Network_QAuthenticator_QAuthenticator, setUser);
PHP_METHOD(Qt_Network_QAuthenticator_QAuthenticator, password);
PHP_METHOD(Qt_Network_QAuthenticator_QAuthenticator, setPassword);
PHP_METHOD(Qt_Network_QAuthenticator_QAuthenticator, realm);
PHP_METHOD(Qt_Network_QAuthenticator_QAuthenticator, setRealm);
PHP_METHOD(Qt_Network_QAuthenticator_QAuthenticator, option);
PHP_METHOD(Qt_Network_QAuthenticator_QAuthenticator, options);
PHP_METHOD(Qt_Network_QAuthenticator_QAuthenticator, setOption);
PHP_METHOD(Qt_Network_QAuthenticator_QAuthenticator, isNull);
PHP_METHOD(Qt_Network_QAuthenticator_QAuthenticator, detach);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qauthenticator_qauthenticator_staticmetaobject, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qauthenticator_qauthenticator_qt_check_for_qgadget_macro, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qauthenticator_qauthenticator_new_, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qauthenticator_qauthenticator_newqauthenticator, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, other, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qauthenticator_qauthenticator_user, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qauthenticator_qauthenticator_setuser, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, user, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qauthenticator_qauthenticator_password, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qauthenticator_qauthenticator_setpassword, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, password, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qauthenticator_qauthenticator_realm, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qauthenticator_qauthenticator_setrealm, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, realm, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_qt_network_qauthenticator_qauthenticator_option, 0, 0, 2)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, opt, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qauthenticator_qauthenticator_options, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qauthenticator_qauthenticator_setoption, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, opt, IS_STRING, 0)
	ZEND_ARG_INFO(0, value)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qauthenticator_qauthenticator_isnull, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qauthenticator_qauthenticator_detach, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_network_qauthenticator_qauthenticator_method_entry) {
	PHP_ME(Qt_Network_QAuthenticator_QAuthenticator, staticMetaObject, arginfo_qt_network_qauthenticator_qauthenticator_staticmetaobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QAuthenticator_QAuthenticator, qt_check_for_QGADGET_macro, arginfo_qt_network_qauthenticator_qauthenticator_qt_check_for_qgadget_macro, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QAuthenticator_QAuthenticator, new_, arginfo_qt_network_qauthenticator_qauthenticator_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QAuthenticator_QAuthenticator, newQAuthenticator, arginfo_qt_network_qauthenticator_qauthenticator_newqauthenticator, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QAuthenticator_QAuthenticator, user, arginfo_qt_network_qauthenticator_qauthenticator_user, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QAuthenticator_QAuthenticator, setUser, arginfo_qt_network_qauthenticator_qauthenticator_setuser, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QAuthenticator_QAuthenticator, password, arginfo_qt_network_qauthenticator_qauthenticator_password, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QAuthenticator_QAuthenticator, setPassword, arginfo_qt_network_qauthenticator_qauthenticator_setpassword, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QAuthenticator_QAuthenticator, realm, arginfo_qt_network_qauthenticator_qauthenticator_realm, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QAuthenticator_QAuthenticator, setRealm, arginfo_qt_network_qauthenticator_qauthenticator_setrealm, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QAuthenticator_QAuthenticator, option, arginfo_qt_network_qauthenticator_qauthenticator_option, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QAuthenticator_QAuthenticator, options, arginfo_qt_network_qauthenticator_qauthenticator_options, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QAuthenticator_QAuthenticator, setOption, arginfo_qt_network_qauthenticator_qauthenticator_setoption, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QAuthenticator_QAuthenticator, isNull, arginfo_qt_network_qauthenticator_qauthenticator_isnull, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QAuthenticator_QAuthenticator, detach, arginfo_qt_network_qauthenticator_qauthenticator_detach, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
