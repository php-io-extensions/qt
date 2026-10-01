
extern zend_class_entry *qt_network_qnetworkcookie_qnetworkcookie_ce;

ZEPHIR_INIT_CLASS(Qt_Network_QNetworkCookie_QNetworkCookie);

PHP_METHOD(Qt_Network_QNetworkCookie_QNetworkCookie, staticMetaObject);
PHP_METHOD(Qt_Network_QNetworkCookie_QNetworkCookie, qt_check_for_QGADGET_macro);
PHP_METHOD(Qt_Network_QNetworkCookie_QNetworkCookie, new_);
PHP_METHOD(Qt_Network_QNetworkCookie_QNetworkCookie, newQNetworkCookie);
PHP_METHOD(Qt_Network_QNetworkCookie_QNetworkCookie, swap);
PHP_METHOD(Qt_Network_QNetworkCookie_QNetworkCookie, isSecure);
PHP_METHOD(Qt_Network_QNetworkCookie_QNetworkCookie, setSecure);
PHP_METHOD(Qt_Network_QNetworkCookie_QNetworkCookie, isHttpOnly);
PHP_METHOD(Qt_Network_QNetworkCookie_QNetworkCookie, setHttpOnly);
PHP_METHOD(Qt_Network_QNetworkCookie_QNetworkCookie, sameSitePolicy);
PHP_METHOD(Qt_Network_QNetworkCookie_QNetworkCookie, setSameSitePolicy);
PHP_METHOD(Qt_Network_QNetworkCookie_QNetworkCookie, isSessionCookie);
PHP_METHOD(Qt_Network_QNetworkCookie_QNetworkCookie, expirationDate);
PHP_METHOD(Qt_Network_QNetworkCookie_QNetworkCookie, setExpirationDate);
PHP_METHOD(Qt_Network_QNetworkCookie_QNetworkCookie, domain);
PHP_METHOD(Qt_Network_QNetworkCookie_QNetworkCookie, setDomain);
PHP_METHOD(Qt_Network_QNetworkCookie_QNetworkCookie, path);
PHP_METHOD(Qt_Network_QNetworkCookie_QNetworkCookie, setPath);
PHP_METHOD(Qt_Network_QNetworkCookie_QNetworkCookie, name);
PHP_METHOD(Qt_Network_QNetworkCookie_QNetworkCookie, setName);
PHP_METHOD(Qt_Network_QNetworkCookie_QNetworkCookie, value);
PHP_METHOD(Qt_Network_QNetworkCookie_QNetworkCookie, setValue);
PHP_METHOD(Qt_Network_QNetworkCookie_QNetworkCookie, toRawForm);
PHP_METHOD(Qt_Network_QNetworkCookie_QNetworkCookie, hasSameIdentifier);
PHP_METHOD(Qt_Network_QNetworkCookie_QNetworkCookie, normalize);
PHP_METHOD(Qt_Network_QNetworkCookie_QNetworkCookie, parseCookies);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qnetworkcookie_qnetworkcookie_staticmetaobject, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qnetworkcookie_qnetworkcookie_qt_check_for_qgadget_macro, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qnetworkcookie_qnetworkcookie_new_, 0, 0, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, name, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qnetworkcookie_qnetworkcookie_newqnetworkcookie, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, other, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qnetworkcookie_qnetworkcookie_swap, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, other, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qnetworkcookie_qnetworkcookie_issecure, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qnetworkcookie_qnetworkcookie_setsecure, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, enable, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qnetworkcookie_qnetworkcookie_ishttponly, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qnetworkcookie_qnetworkcookie_sethttponly, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, enable, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qnetworkcookie_qnetworkcookie_samesitepolicy, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qnetworkcookie_qnetworkcookie_setsamesitepolicy, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sameSite, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qnetworkcookie_qnetworkcookie_issessioncookie, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qnetworkcookie_qnetworkcookie_expirationdate, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qnetworkcookie_qnetworkcookie_setexpirationdate, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, date, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qnetworkcookie_qnetworkcookie_domain, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qnetworkcookie_qnetworkcookie_setdomain, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, domain, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qnetworkcookie_qnetworkcookie_path, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qnetworkcookie_qnetworkcookie_setpath, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, path, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qnetworkcookie_qnetworkcookie_name, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qnetworkcookie_qnetworkcookie_setname, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, cookieName, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qnetworkcookie_qnetworkcookie_value, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qnetworkcookie_qnetworkcookie_setvalue, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qnetworkcookie_qnetworkcookie_torawform, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_INFO(0, form)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qnetworkcookie_qnetworkcookie_hassameidentifier, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, other, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qnetworkcookie_qnetworkcookie_normalize, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, url, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qnetworkcookie_qnetworkcookie_parsecookies, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, cookieString, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_network_qnetworkcookie_qnetworkcookie_method_entry) {
	PHP_ME(Qt_Network_QNetworkCookie_QNetworkCookie, staticMetaObject, arginfo_qt_network_qnetworkcookie_qnetworkcookie_staticmetaobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QNetworkCookie_QNetworkCookie, qt_check_for_QGADGET_macro, arginfo_qt_network_qnetworkcookie_qnetworkcookie_qt_check_for_qgadget_macro, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QNetworkCookie_QNetworkCookie, new_, arginfo_qt_network_qnetworkcookie_qnetworkcookie_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QNetworkCookie_QNetworkCookie, newQNetworkCookie, arginfo_qt_network_qnetworkcookie_qnetworkcookie_newqnetworkcookie, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QNetworkCookie_QNetworkCookie, swap, arginfo_qt_network_qnetworkcookie_qnetworkcookie_swap, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QNetworkCookie_QNetworkCookie, isSecure, arginfo_qt_network_qnetworkcookie_qnetworkcookie_issecure, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QNetworkCookie_QNetworkCookie, setSecure, arginfo_qt_network_qnetworkcookie_qnetworkcookie_setsecure, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QNetworkCookie_QNetworkCookie, isHttpOnly, arginfo_qt_network_qnetworkcookie_qnetworkcookie_ishttponly, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QNetworkCookie_QNetworkCookie, setHttpOnly, arginfo_qt_network_qnetworkcookie_qnetworkcookie_sethttponly, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QNetworkCookie_QNetworkCookie, sameSitePolicy, arginfo_qt_network_qnetworkcookie_qnetworkcookie_samesitepolicy, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QNetworkCookie_QNetworkCookie, setSameSitePolicy, arginfo_qt_network_qnetworkcookie_qnetworkcookie_setsamesitepolicy, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QNetworkCookie_QNetworkCookie, isSessionCookie, arginfo_qt_network_qnetworkcookie_qnetworkcookie_issessioncookie, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QNetworkCookie_QNetworkCookie, expirationDate, arginfo_qt_network_qnetworkcookie_qnetworkcookie_expirationdate, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QNetworkCookie_QNetworkCookie, setExpirationDate, arginfo_qt_network_qnetworkcookie_qnetworkcookie_setexpirationdate, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QNetworkCookie_QNetworkCookie, domain, arginfo_qt_network_qnetworkcookie_qnetworkcookie_domain, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QNetworkCookie_QNetworkCookie, setDomain, arginfo_qt_network_qnetworkcookie_qnetworkcookie_setdomain, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QNetworkCookie_QNetworkCookie, path, arginfo_qt_network_qnetworkcookie_qnetworkcookie_path, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QNetworkCookie_QNetworkCookie, setPath, arginfo_qt_network_qnetworkcookie_qnetworkcookie_setpath, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QNetworkCookie_QNetworkCookie, name, arginfo_qt_network_qnetworkcookie_qnetworkcookie_name, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QNetworkCookie_QNetworkCookie, setName, arginfo_qt_network_qnetworkcookie_qnetworkcookie_setname, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QNetworkCookie_QNetworkCookie, value, arginfo_qt_network_qnetworkcookie_qnetworkcookie_value, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QNetworkCookie_QNetworkCookie, setValue, arginfo_qt_network_qnetworkcookie_qnetworkcookie_setvalue, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QNetworkCookie_QNetworkCookie, toRawForm, arginfo_qt_network_qnetworkcookie_qnetworkcookie_torawform, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QNetworkCookie_QNetworkCookie, hasSameIdentifier, arginfo_qt_network_qnetworkcookie_qnetworkcookie_hassameidentifier, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QNetworkCookie_QNetworkCookie, normalize, arginfo_qt_network_qnetworkcookie_qnetworkcookie_normalize, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QNetworkCookie_QNetworkCookie, parseCookies, arginfo_qt_network_qnetworkcookie_qnetworkcookie_parsecookies, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
