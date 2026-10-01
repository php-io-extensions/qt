
extern zend_class_entry *qt_network_qnetworkcookiejar_qnetworkcookiejar_ce;

ZEPHIR_INIT_CLASS(Qt_Network_QNetworkCookieJar_QNetworkCookieJar);

PHP_METHOD(Qt_Network_QNetworkCookieJar_QNetworkCookieJar, staticMetaObject);
PHP_METHOD(Qt_Network_QNetworkCookieJar_QNetworkCookieJar, tr);
PHP_METHOD(Qt_Network_QNetworkCookieJar_QNetworkCookieJar, new_);
PHP_METHOD(Qt_Network_QNetworkCookieJar_QNetworkCookieJar, cookiesForUrl);
PHP_METHOD(Qt_Network_QNetworkCookieJar_QNetworkCookieJar, setCookiesFromUrl);
PHP_METHOD(Qt_Network_QNetworkCookieJar_QNetworkCookieJar, insertCookie);
PHP_METHOD(Qt_Network_QNetworkCookieJar_QNetworkCookieJar, updateCookie);
PHP_METHOD(Qt_Network_QNetworkCookieJar_QNetworkCookieJar, deleteCookie);
PHP_METHOD(Qt_Network_QNetworkCookieJar_QNetworkCookieJar, allCookies);
PHP_METHOD(Qt_Network_QNetworkCookieJar_QNetworkCookieJar, setAllCookies);
PHP_METHOD(Qt_Network_QNetworkCookieJar_QNetworkCookieJar, validateCookie);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qnetworkcookiejar_qnetworkcookiejar_staticmetaobject, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qnetworkcookiejar_qnetworkcookiejar_tr, 0, 1, IS_STRING, 0)
	ZEND_ARG_INFO(0, s)
	ZEND_ARG_INFO(0, c)
	ZEND_ARG_TYPE_INFO(0, n, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qnetworkcookiejar_qnetworkcookiejar_new_, 0, 0, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qnetworkcookiejar_qnetworkcookiejar_cookiesforurl, 0, 2, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, url, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qnetworkcookiejar_qnetworkcookiejar_setcookiesfromurl, 0, 3, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_ARRAY_INFO(0, cookieList, 0)
	ZEND_ARG_TYPE_INFO(0, url, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qnetworkcookiejar_qnetworkcookiejar_insertcookie, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, cookie, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qnetworkcookiejar_qnetworkcookiejar_updatecookie, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, cookie, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qnetworkcookiejar_qnetworkcookiejar_deletecookie, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, cookie, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qnetworkcookiejar_qnetworkcookiejar_allcookies, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qnetworkcookiejar_qnetworkcookiejar_setallcookies, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_ARRAY_INFO(0, cookieList, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qnetworkcookiejar_qnetworkcookiejar_validatecookie, 0, 3, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, cookie, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, url, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_network_qnetworkcookiejar_qnetworkcookiejar_method_entry) {
	PHP_ME(Qt_Network_QNetworkCookieJar_QNetworkCookieJar, staticMetaObject, arginfo_qt_network_qnetworkcookiejar_qnetworkcookiejar_staticmetaobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QNetworkCookieJar_QNetworkCookieJar, tr, arginfo_qt_network_qnetworkcookiejar_qnetworkcookiejar_tr, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QNetworkCookieJar_QNetworkCookieJar, new_, arginfo_qt_network_qnetworkcookiejar_qnetworkcookiejar_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QNetworkCookieJar_QNetworkCookieJar, cookiesForUrl, arginfo_qt_network_qnetworkcookiejar_qnetworkcookiejar_cookiesforurl, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QNetworkCookieJar_QNetworkCookieJar, setCookiesFromUrl, arginfo_qt_network_qnetworkcookiejar_qnetworkcookiejar_setcookiesfromurl, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QNetworkCookieJar_QNetworkCookieJar, insertCookie, arginfo_qt_network_qnetworkcookiejar_qnetworkcookiejar_insertcookie, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QNetworkCookieJar_QNetworkCookieJar, updateCookie, arginfo_qt_network_qnetworkcookiejar_qnetworkcookiejar_updatecookie, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QNetworkCookieJar_QNetworkCookieJar, deleteCookie, arginfo_qt_network_qnetworkcookiejar_qnetworkcookiejar_deletecookie, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QNetworkCookieJar_QNetworkCookieJar, allCookies, arginfo_qt_network_qnetworkcookiejar_qnetworkcookiejar_allcookies, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QNetworkCookieJar_QNetworkCookieJar, setAllCookies, arginfo_qt_network_qnetworkcookiejar_qnetworkcookiejar_setallcookies, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QNetworkCookieJar_QNetworkCookieJar, validateCookie, arginfo_qt_network_qnetworkcookiejar_qnetworkcookiejar_validatecookie, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
