
#ifdef HAVE_CONFIG_H
#include "../../../ext_config.h"
#endif

#include <php.h>
#include "../../../php_ext.h"
#include "../../../ext.h"

#include <Zend/zend_operators.h>
#include <Zend/zend_exceptions.h>
#include <Zend/zend_interfaces.h>

#include "kernel/main.h"
#include "src/network-qnetworkcookiejar.h"
#include "kernel/object.h"
#include "kernel/string.h"
#include "kernel/memory.h"
#include "kernel/operators.h"


ZEPHIR_INIT_CLASS(Qt_Network_QNetworkCookieJar_QNetworkCookieJar)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Network\\QNetworkCookieJar, QNetworkCookieJar, qt, network_qnetworkcookiejar_qnetworkcookiejar, qt_network_qnetworkcookiejar_qnetworkcookiejar_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Network_QNetworkCookieJar_QNetworkCookieJar, staticMetaObject)
{

	RETURN_LONG(phpqt_qnetworkcookiejar_static_meta_object());
}

PHP_METHOD(Qt_Network_QNetworkCookieJar_QNetworkCookieJar, tr)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long n;
	zval *s = NULL, s_sub, *c = NULL, c_sub, *n_param = NULL, __$null, result, _0;

	ZVAL_UNDEF(&s_sub);
	ZVAL_UNDEF(&c_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(1, 3)
		Z_PARAM_ZVAL(s)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(c)
		Z_PARAM_LONG(n)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 2, &s, &c, &n_param);
	if (!c) {
		c = &c_sub;
		c = &__$null;
	}
	if (!n_param) {
		n = -1;
	} else {
		}
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, n);
	phpqt_qnetworkcookiejar_tr(&result, s, c, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Network_QNetworkCookieJar_QNetworkCookieJar, new_)
{
	zval *parent__param = NULL, _0;
	zend_long parent_;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(0, 1)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(parent_)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(0, 1, &parent__param);
	if (!parent__param) {
		parent_ = 0;
	} else {
		}
	ZVAL_LONG(&_0, parent_);
	RETURN_LONG(phpqt_qnetworkcookiejar_new(&_0));
}

PHP_METHOD(Qt_Network_QNetworkCookieJar_QNetworkCookieJar, cookiesForUrl)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, *url_param = NULL, result, _0, _1;
	zend_long handle, url;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(url)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &url_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, url);
	phpqt_qnetworkcookiejar_cookies_for_url(&result, &_0, &_1);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Network_QNetworkCookieJar_QNetworkCookieJar, setCookiesFromUrl)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval cookieList;
	zval *handle_param = NULL, *cookieList_param = NULL, *url_param = NULL, _0, _1;
	zend_long handle, url, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&cookieList);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_ARRAY(cookieList)
		Z_PARAM_LONG(url)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 3, 0, &handle_param, &cookieList_param, &url_param);
	zephir_get_arrval(&cookieList, cookieList_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, url);
	r = phpqt_qnetworkcookiejar_set_cookies_from_url(&_0, &cookieList, &_1);
	RETURN_MM_BOOL(r == 1);
}

PHP_METHOD(Qt_Network_QNetworkCookieJar_QNetworkCookieJar, insertCookie)
{
	zval *handle_param = NULL, *cookie_param = NULL, _0, _1;
	zend_long handle, cookie, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(cookie)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &cookie_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, cookie);
	r = phpqt_qnetworkcookiejar_insert_cookie(&_0, &_1);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Network_QNetworkCookieJar_QNetworkCookieJar, updateCookie)
{
	zval *handle_param = NULL, *cookie_param = NULL, _0, _1;
	zend_long handle, cookie, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(cookie)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &cookie_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, cookie);
	r = phpqt_qnetworkcookiejar_update_cookie(&_0, &_1);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Network_QNetworkCookieJar_QNetworkCookieJar, deleteCookie)
{
	zval *handle_param = NULL, *cookie_param = NULL, _0, _1;
	zend_long handle, cookie, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(cookie)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &cookie_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, cookie);
	r = phpqt_qnetworkcookiejar_delete_cookie(&_0, &_1);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Network_QNetworkCookieJar_QNetworkCookieJar, allCookies)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, result, _0;
	zend_long handle;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &handle_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	phpqt_qnetworkcookiejar_all_cookies(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Network_QNetworkCookieJar_QNetworkCookieJar, setAllCookies)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval cookieList;
	zval *handle_param = NULL, *cookieList_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&cookieList);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ARRAY(cookieList)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &cookieList_param);
	zephir_get_arrval(&cookieList, cookieList_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qnetworkcookiejar_set_all_cookies(&_0, &cookieList);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_Network_QNetworkCookieJar_QNetworkCookieJar, validateCookie)
{
	zval *handle_param = NULL, *cookie_param = NULL, *url_param = NULL, _0, _1, _2;
	zend_long handle, cookie, url, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(cookie)
		Z_PARAM_LONG(url)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &cookie_param, &url_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, cookie);
	ZVAL_LONG(&_2, url);
	r = phpqt_qnetworkcookiejar_validate_cookie(&_0, &_1, &_2);
	RETURN_BOOL(r == 1);
}

