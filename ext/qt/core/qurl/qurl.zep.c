
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
#include "src/core-qurl.h"
#include "kernel/object.h"
#include "kernel/operators.h"
#include "kernel/memory.h"
#include "kernel/string.h"


ZEPHIR_INIT_CLASS(Qt_Core_QUrl_QUrl)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Core\\QUrl, QUrl, qt, core_qurl_qurl, qt_core_qurl_qurl_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Core_QUrl_QUrl, new_)
{

	RETURN_LONG(phpqt_qurl_new());
}

PHP_METHOD(Qt_Core_QUrl_QUrl, newQUrl)
{
	zval *copy_param = NULL, _0;
	zend_long copy;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(copy)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &copy_param);
	ZVAL_LONG(&_0, copy);
	RETURN_LONG(phpqt_qurl_new_q_url(&_0));
}

PHP_METHOD(Qt_Core_QUrl_QUrl, newQStringQUrlParsingMode)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *url_param = NULL, *mode = NULL, mode_sub, __$null;
	zval url;

	ZVAL_UNDEF(&url);
	ZVAL_UNDEF(&mode_sub);
	ZVAL_NULL(&__$null);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_STR(url)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(mode)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 1, &url_param, &mode);
	zephir_get_strval(&url, url_param);
	if (!mode) {
		mode = &mode_sub;
		mode = &__$null;
	}
	RETURN_MM_LONG(phpqt_qurl_new_q_string_q_url_parsing_mode(&url, mode));
}

PHP_METHOD(Qt_Core_QUrl_QUrl, swap)
{
	zval *handle_param = NULL, *other_param = NULL, _0, _1;
	zend_long handle, other;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(other)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &other_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, other);
	phpqt_qurl_swap(&_0, &_1);
}

PHP_METHOD(Qt_Core_QUrl_QUrl, setUrl)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval url;
	zval *handle_param = NULL, *url_param = NULL, *mode = NULL, mode_sub, __$null, _0;
	zend_long handle;

	ZVAL_UNDEF(&mode_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&url);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(2, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(url)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(mode)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 1, &handle_param, &url_param, &mode);
	zephir_get_strval(&url, url_param);
	if (!mode) {
		mode = &mode_sub;
		mode = &__$null;
	}
	ZVAL_LONG(&_0, handle);
	phpqt_qurl_set_url(&_0, &url, mode);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_Core_QUrl_QUrl, fromEncoded)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *input_param = NULL, *mode = NULL, mode_sub, __$null;
	zval input;

	ZVAL_UNDEF(&input);
	ZVAL_UNDEF(&mode_sub);
	ZVAL_NULL(&__$null);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_STR(input)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(mode)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 1, &input_param, &mode);
	zephir_get_strval(&input, input_param);
	if (!mode) {
		mode = &mode_sub;
		mode = &__$null;
	}
	RETURN_MM_LONG(phpqt_qurl_from_encoded(&input, mode));
}

PHP_METHOD(Qt_Core_QUrl_QUrl, fromUserInput)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *userInput_param = NULL, *workingDirectory_param = NULL, *options = NULL, options_sub, __$null;
	zval userInput, workingDirectory;

	ZVAL_UNDEF(&userInput);
	ZVAL_UNDEF(&workingDirectory);
	ZVAL_UNDEF(&options_sub);
	ZVAL_NULL(&__$null);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(1, 3)
		Z_PARAM_STR(userInput)
		Z_PARAM_OPTIONAL
		Z_PARAM_STR(workingDirectory)
		Z_PARAM_ZVAL_OR_NULL(options)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 2, &userInput_param, &workingDirectory_param, &options);
	zephir_get_strval(&userInput, userInput_param);
	if (!workingDirectory_param) {
		ZEPHIR_INIT_VAR(&workingDirectory);
		ZVAL_STRING(&workingDirectory, "");
	} else {
		zephir_get_strval(&workingDirectory, workingDirectory_param);
	}
	if (!options) {
		options = &options_sub;
		options = &__$null;
	}
	RETURN_MM_LONG(phpqt_qurl_from_user_input(&userInput, &workingDirectory, options));
}

PHP_METHOD(Qt_Core_QUrl_QUrl, isValid)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qurl_is_valid(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QUrl_QUrl, errorString)
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
	phpqt_qurl_error_string(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QUrl_QUrl, isEmpty)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qurl_is_empty(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QUrl_QUrl, clear)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qurl_clear(&_0);
}

PHP_METHOD(Qt_Core_QUrl_QUrl, setScheme)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval scheme;
	zval *handle_param = NULL, *scheme_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&scheme);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(scheme)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &scheme_param);
	zephir_get_strval(&scheme, scheme_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qurl_set_scheme(&_0, &scheme);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_Core_QUrl_QUrl, scheme)
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
	phpqt_qurl_scheme(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QUrl_QUrl, setAuthority)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval authority;
	zval *handle_param = NULL, *authority_param = NULL, *mode = NULL, mode_sub, __$null, _0;
	zend_long handle;

	ZVAL_UNDEF(&mode_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&authority);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(2, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(authority)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(mode)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 1, &handle_param, &authority_param, &mode);
	zephir_get_strval(&authority, authority_param);
	if (!mode) {
		mode = &mode_sub;
		mode = &__$null;
	}
	ZVAL_LONG(&_0, handle);
	phpqt_qurl_set_authority(&_0, &authority, mode);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_Core_QUrl_QUrl, authority)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, *options = NULL, options_sub, __$null, result, _0;
	zend_long handle;

	ZVAL_UNDEF(&options_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(options)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 1, &handle_param, &options);
	if (!options) {
		options = &options_sub;
		options = &__$null;
	}
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	phpqt_qurl_authority(&result, &_0, options);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QUrl_QUrl, setUserInfo)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval userInfo;
	zval *handle_param = NULL, *userInfo_param = NULL, *mode = NULL, mode_sub, __$null, _0;
	zend_long handle;

	ZVAL_UNDEF(&mode_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&userInfo);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(2, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(userInfo)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(mode)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 1, &handle_param, &userInfo_param, &mode);
	zephir_get_strval(&userInfo, userInfo_param);
	if (!mode) {
		mode = &mode_sub;
		mode = &__$null;
	}
	ZVAL_LONG(&_0, handle);
	phpqt_qurl_set_user_info(&_0, &userInfo, mode);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_Core_QUrl_QUrl, userInfo)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, *options = NULL, options_sub, __$null, result, _0;
	zend_long handle;

	ZVAL_UNDEF(&options_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(options)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 1, &handle_param, &options);
	if (!options) {
		options = &options_sub;
		options = &__$null;
	}
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	phpqt_qurl_user_info(&result, &_0, options);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QUrl_QUrl, setUserName)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval userName;
	zval *handle_param = NULL, *userName_param = NULL, *mode = NULL, mode_sub, __$null, _0;
	zend_long handle;

	ZVAL_UNDEF(&mode_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&userName);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(2, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(userName)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(mode)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 1, &handle_param, &userName_param, &mode);
	zephir_get_strval(&userName, userName_param);
	if (!mode) {
		mode = &mode_sub;
		mode = &__$null;
	}
	ZVAL_LONG(&_0, handle);
	phpqt_qurl_set_user_name(&_0, &userName, mode);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_Core_QUrl_QUrl, userName)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, *options = NULL, options_sub, __$null, result, _0;
	zend_long handle;

	ZVAL_UNDEF(&options_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(options)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 1, &handle_param, &options);
	if (!options) {
		options = &options_sub;
		options = &__$null;
	}
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	phpqt_qurl_user_name(&result, &_0, options);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QUrl_QUrl, setPassword)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval password;
	zval *handle_param = NULL, *password_param = NULL, *mode = NULL, mode_sub, __$null, _0;
	zend_long handle;

	ZVAL_UNDEF(&mode_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&password);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(2, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(password)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(mode)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 1, &handle_param, &password_param, &mode);
	zephir_get_strval(&password, password_param);
	if (!mode) {
		mode = &mode_sub;
		mode = &__$null;
	}
	ZVAL_LONG(&_0, handle);
	phpqt_qurl_set_password(&_0, &password, mode);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_Core_QUrl_QUrl, password)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, *arg0 = NULL, arg0_sub, __$null, result, _0;
	zend_long handle;

	ZVAL_UNDEF(&arg0_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(arg0)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 1, &handle_param, &arg0);
	if (!arg0) {
		arg0 = &arg0_sub;
		arg0 = &__$null;
	}
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	phpqt_qurl_password(&result, &_0, arg0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QUrl_QUrl, setHost)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval host;
	zval *handle_param = NULL, *host_param = NULL, *mode = NULL, mode_sub, __$null, _0;
	zend_long handle;

	ZVAL_UNDEF(&mode_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&host);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(2, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(host)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(mode)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 1, &handle_param, &host_param, &mode);
	zephir_get_strval(&host, host_param);
	if (!mode) {
		mode = &mode_sub;
		mode = &__$null;
	}
	ZVAL_LONG(&_0, handle);
	phpqt_qurl_set_host(&_0, &host, mode);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_Core_QUrl_QUrl, host)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, *arg0 = NULL, arg0_sub, __$null, result, _0;
	zend_long handle;

	ZVAL_UNDEF(&arg0_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(arg0)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 1, &handle_param, &arg0);
	if (!arg0) {
		arg0 = &arg0_sub;
		arg0 = &__$null;
	}
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	phpqt_qurl_host(&result, &_0, arg0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QUrl_QUrl, setPort)
{
	zval *handle_param = NULL, *port_param = NULL, _0, _1;
	zend_long handle, port;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(port)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &port_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, port);
	phpqt_qurl_set_port(&_0, &_1);
}

PHP_METHOD(Qt_Core_QUrl_QUrl, port)
{
	zval *handle_param = NULL, *defaultPort_param = NULL, _0, _1;
	zend_long handle, defaultPort;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(defaultPort)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 1, &handle_param, &defaultPort_param);
	if (!defaultPort_param) {
		defaultPort = -1;
	} else {
		}
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, defaultPort);
	RETURN_LONG(phpqt_qurl_port(&_0, &_1));
}

PHP_METHOD(Qt_Core_QUrl_QUrl, setPath)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval path;
	zval *handle_param = NULL, *path_param = NULL, *mode = NULL, mode_sub, __$null, _0;
	zend_long handle;

	ZVAL_UNDEF(&mode_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&path);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(2, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(path)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(mode)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 1, &handle_param, &path_param, &mode);
	zephir_get_strval(&path, path_param);
	if (!mode) {
		mode = &mode_sub;
		mode = &__$null;
	}
	ZVAL_LONG(&_0, handle);
	phpqt_qurl_set_path(&_0, &path, mode);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_Core_QUrl_QUrl, path)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, *options = NULL, options_sub, __$null, result, _0;
	zend_long handle;

	ZVAL_UNDEF(&options_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(options)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 1, &handle_param, &options);
	if (!options) {
		options = &options_sub;
		options = &__$null;
	}
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	phpqt_qurl_path(&result, &_0, options);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QUrl_QUrl, fileName)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, *options = NULL, options_sub, __$null, result, _0;
	zend_long handle;

	ZVAL_UNDEF(&options_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(options)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 1, &handle_param, &options);
	if (!options) {
		options = &options_sub;
		options = &__$null;
	}
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	phpqt_qurl_file_name(&result, &_0, options);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QUrl_QUrl, hasQuery)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qurl_has_query(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QUrl_QUrl, setQuery)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval query;
	zval *handle_param = NULL, *query_param = NULL, *mode = NULL, mode_sub, __$null, _0;
	zend_long handle;

	ZVAL_UNDEF(&mode_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&query);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(2, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(query)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(mode)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 1, &handle_param, &query_param, &mode);
	zephir_get_strval(&query, query_param);
	if (!mode) {
		mode = &mode_sub;
		mode = &__$null;
	}
	ZVAL_LONG(&_0, handle);
	phpqt_qurl_set_query(&_0, &query, mode);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_Core_QUrl_QUrl, setQueryQUrlQuery)
{
	zval *handle_param = NULL, *query_param = NULL, _0, _1;
	zend_long handle, query;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(query)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &query_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, query);
	phpqt_qurl_set_query_q_url_query(&_0, &_1);
}

PHP_METHOD(Qt_Core_QUrl_QUrl, query)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, *arg0 = NULL, arg0_sub, __$null, result, _0;
	zend_long handle;

	ZVAL_UNDEF(&arg0_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(arg0)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 1, &handle_param, &arg0);
	if (!arg0) {
		arg0 = &arg0_sub;
		arg0 = &__$null;
	}
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	phpqt_qurl_query(&result, &_0, arg0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QUrl_QUrl, hasFragment)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qurl_has_fragment(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QUrl_QUrl, fragment)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, *options = NULL, options_sub, __$null, result, _0;
	zend_long handle;

	ZVAL_UNDEF(&options_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(options)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 1, &handle_param, &options);
	if (!options) {
		options = &options_sub;
		options = &__$null;
	}
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	phpqt_qurl_fragment(&result, &_0, options);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QUrl_QUrl, setFragment)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval fragment;
	zval *handle_param = NULL, *fragment_param = NULL, *mode = NULL, mode_sub, __$null, _0;
	zend_long handle;

	ZVAL_UNDEF(&mode_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&fragment);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(2, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(fragment)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(mode)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 1, &handle_param, &fragment_param, &mode);
	zephir_get_strval(&fragment, fragment_param);
	if (!mode) {
		mode = &mode_sub;
		mode = &__$null;
	}
	ZVAL_LONG(&_0, handle);
	phpqt_qurl_set_fragment(&_0, &fragment, mode);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_Core_QUrl_QUrl, resolved)
{
	zval *handle_param = NULL, *relative_param = NULL, _0, _1;
	zend_long handle, relative;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(relative)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &relative_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, relative);
	RETURN_LONG(phpqt_qurl_resolved(&_0, &_1));
}

PHP_METHOD(Qt_Core_QUrl_QUrl, isRelative)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qurl_is_relative(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QUrl_QUrl, isParentOf)
{
	zval *handle_param = NULL, *url_param = NULL, _0, _1;
	zend_long handle, url, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(url)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &url_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, url);
	r = phpqt_qurl_is_parent_of(&_0, &_1);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QUrl_QUrl, isLocalFile)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qurl_is_local_file(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QUrl_QUrl, fromLocalFile)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *localfile_param = NULL;
	zval localfile;

	ZVAL_UNDEF(&localfile);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_STR(localfile)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &localfile_param);
	zephir_get_strval(&localfile, localfile_param);
	RETURN_MM_LONG(phpqt_qurl_from_local_file(&localfile));
}

PHP_METHOD(Qt_Core_QUrl_QUrl, toLocalFile)
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
	phpqt_qurl_to_local_file(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QUrl_QUrl, detach)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qurl_detach(&_0);
}

PHP_METHOD(Qt_Core_QUrl_QUrl, isDetached)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qurl_is_detached(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QUrl_QUrl, fromPercentEncoding)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *arg0_param = NULL, result;
	zval arg0;

	ZVAL_UNDEF(&arg0);
	ZVAL_UNDEF(&result);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_STR(arg0)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &arg0_param);
	zephir_get_strval(&arg0, arg0_param);
	ZEPHIR_INIT_VAR(&result);
	phpqt_qurl_from_percent_encoding(&result, &arg0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QUrl_QUrl, toPercentEncoding)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *arg0_param = NULL, *exclude_param = NULL, *include__param = NULL, result;
	zval arg0, exclude, include_;

	ZVAL_UNDEF(&arg0);
	ZVAL_UNDEF(&exclude);
	ZVAL_UNDEF(&include_);
	ZVAL_UNDEF(&result);
	ZEND_PARSE_PARAMETERS_START(1, 3)
		Z_PARAM_STR(arg0)
		Z_PARAM_OPTIONAL
		Z_PARAM_STR(exclude)
		Z_PARAM_STR(include_)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 2, &arg0_param, &exclude_param, &include__param);
	zephir_get_strval(&arg0, arg0_param);
	if (!exclude_param) {
		ZEPHIR_INIT_VAR(&exclude);
		ZVAL_STRING(&exclude, "");
	} else {
		zephir_get_strval(&exclude, exclude_param);
	}
	if (!include__param) {
		ZEPHIR_INIT_VAR(&include_);
		ZVAL_STRING(&include_, "");
	} else {
		zephir_get_strval(&include_, include__param);
	}
	ZEPHIR_INIT_VAR(&result);
	phpqt_qurl_to_percent_encoding(&result, &arg0, &exclude, &include_);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QUrl_QUrl, fromAce)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *domain_param = NULL, *options = NULL, options_sub, __$null, result;
	zval domain;

	ZVAL_UNDEF(&domain);
	ZVAL_UNDEF(&options_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&result);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_STR(domain)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(options)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 1, &domain_param, &options);
	zephir_get_strval(&domain, domain_param);
	if (!options) {
		options = &options_sub;
		options = &__$null;
	}
	ZEPHIR_INIT_VAR(&result);
	phpqt_qurl_from_ace(&result, &domain, options);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QUrl_QUrl, toAce)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *domain_param = NULL, *options = NULL, options_sub, __$null, result;
	zval domain;

	ZVAL_UNDEF(&domain);
	ZVAL_UNDEF(&options_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&result);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_STR(domain)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(options)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 1, &domain_param, &options);
	zephir_get_strval(&domain, domain_param);
	if (!options) {
		options = &options_sub;
		options = &__$null;
	}
	ZEPHIR_INIT_VAR(&result);
	phpqt_qurl_to_ace(&result, &domain, options);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QUrl_QUrl, idnWhitelist)
{
	zval result;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;

	ZVAL_UNDEF(&result);
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);

	ZEPHIR_INIT_VAR(&result);
	phpqt_qurl_idn_whitelist(&result);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QUrl_QUrl, fromStringList)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *uris_param = NULL, *mode = NULL, mode_sub, __$null, result;
	zval uris;

	ZVAL_UNDEF(&uris);
	ZVAL_UNDEF(&mode_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&result);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_ARRAY(uris)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(mode)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 1, &uris_param, &mode);
	zephir_get_arrval(&uris, uris_param);
	if (!mode) {
		mode = &mode_sub;
		mode = &__$null;
	}
	ZEPHIR_INIT_VAR(&result);
	phpqt_qurl_from_string_list(&result, &uris, mode);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QUrl_QUrl, setIdnWhitelist)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *arg0_param = NULL;
	zval arg0;

	ZVAL_UNDEF(&arg0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_ARRAY(arg0)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &arg0_param);
	zephir_get_arrval(&arg0, arg0_param);
	phpqt_qurl_set_idn_whitelist(&arg0);
	ZEPHIR_MM_RESTORE();
}

