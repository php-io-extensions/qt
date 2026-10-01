
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
#include "src/network-qhstspolicy.h"
#include "kernel/object.h"
#include "kernel/operators.h"
#include "kernel/memory.h"
#include "kernel/string.h"


ZEPHIR_INIT_CLASS(Qt_Network_QHstsPolicy_QHstsPolicy)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Network\\QHstsPolicy, QHstsPolicy, qt, network_qhstspolicy_qhstspolicy, qt_network_qhstspolicy_qhstspolicy_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Network_QHstsPolicy_QHstsPolicy, new_)
{

	RETURN_LONG(phpqt_qhstspolicy_new());
}

PHP_METHOD(Qt_Network_QHstsPolicy_QHstsPolicy, newQDateTimeQHstsPolicyPolicyFlagsQStringQUrlParsingMode)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval host;
	zval *expiry_param = NULL, *flags_param = NULL, *host_param = NULL, *mode = NULL, mode_sub, __$null, _0, _1;
	zend_long expiry, flags;

	ZVAL_UNDEF(&mode_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&host);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(3, 4)
		Z_PARAM_LONG(expiry)
		Z_PARAM_LONG(flags)
		Z_PARAM_STR(host)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(mode)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 3, 1, &expiry_param, &flags_param, &host_param, &mode);
	zephir_get_strval(&host, host_param);
	if (!mode) {
		mode = &mode_sub;
		mode = &__$null;
	}
	ZVAL_LONG(&_0, expiry);
	ZVAL_LONG(&_1, flags);
	RETURN_MM_LONG(phpqt_qhstspolicy_new_q_date_time_q_hsts_policy_policy_flags_q_string_q_url_parsing_mode(&_0, &_1, &host, mode));
}

PHP_METHOD(Qt_Network_QHstsPolicy_QHstsPolicy, newQHstsPolicy)
{
	zval *rhs_param = NULL, _0;
	zend_long rhs;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(rhs)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &rhs_param);
	ZVAL_LONG(&_0, rhs);
	RETURN_LONG(phpqt_qhstspolicy_new_q_hsts_policy(&_0));
}

PHP_METHOD(Qt_Network_QHstsPolicy_QHstsPolicy, swap)
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
	phpqt_qhstspolicy_swap(&_0, &_1);
}

PHP_METHOD(Qt_Network_QHstsPolicy_QHstsPolicy, setHost)
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
	phpqt_qhstspolicy_set_host(&_0, &host, mode);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_Network_QHstsPolicy_QHstsPolicy, host)
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
	phpqt_qhstspolicy_host(&result, &_0, options);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Network_QHstsPolicy_QHstsPolicy, setExpiry)
{
	zval *handle_param = NULL, *expiry_param = NULL, _0, _1;
	zend_long handle, expiry;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(expiry)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &expiry_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, expiry);
	phpqt_qhstspolicy_set_expiry(&_0, &_1);
}

PHP_METHOD(Qt_Network_QHstsPolicy_QHstsPolicy, expiry)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qhstspolicy_expiry(&_0));
}

PHP_METHOD(Qt_Network_QHstsPolicy_QHstsPolicy, setIncludesSubDomains)
{
	zend_bool include_;
	zval *handle_param = NULL, *include__param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_BOOL(include_)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &include__param);
	ZVAL_LONG(&_0, handle);
	ZVAL_BOOL(&_1, (include_ ? 1 : 0));
	phpqt_qhstspolicy_set_includes_sub_domains(&_0, &_1);
}

PHP_METHOD(Qt_Network_QHstsPolicy_QHstsPolicy, includesSubDomains)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qhstspolicy_includes_sub_domains(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Network_QHstsPolicy_QHstsPolicy, isExpired)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qhstspolicy_is_expired(&_0);
	RETURN_BOOL(r == 1);
}

