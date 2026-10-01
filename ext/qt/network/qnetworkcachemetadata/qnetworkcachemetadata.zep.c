
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
#include "src/network-qnetworkcachemetadata.h"
#include "kernel/object.h"
#include "kernel/operators.h"
#include "kernel/memory.h"


ZEPHIR_INIT_CLASS(Qt_Network_QNetworkCacheMetaData_QNetworkCacheMetaData)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Network\\QNetworkCacheMetaData, QNetworkCacheMetaData, qt, network_qnetworkcachemetadata_qnetworkcachemetadata, qt_network_qnetworkcachemetadata_qnetworkcachemetadata_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Network_QNetworkCacheMetaData_QNetworkCacheMetaData, new_)
{

	RETURN_LONG(phpqt_qnetworkcachemetadata_new());
}

PHP_METHOD(Qt_Network_QNetworkCacheMetaData_QNetworkCacheMetaData, newQNetworkCacheMetaData)
{
	zval *other_param = NULL, _0;
	zend_long other;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(other)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &other_param);
	ZVAL_LONG(&_0, other);
	RETURN_LONG(phpqt_qnetworkcachemetadata_new_q_network_cache_meta_data(&_0));
}

PHP_METHOD(Qt_Network_QNetworkCacheMetaData_QNetworkCacheMetaData, swap)
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
	phpqt_qnetworkcachemetadata_swap(&_0, &_1);
}

PHP_METHOD(Qt_Network_QNetworkCacheMetaData_QNetworkCacheMetaData, isValid)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qnetworkcachemetadata_is_valid(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Network_QNetworkCacheMetaData_QNetworkCacheMetaData, url)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qnetworkcachemetadata_url(&_0));
}

PHP_METHOD(Qt_Network_QNetworkCacheMetaData_QNetworkCacheMetaData, setUrl)
{
	zval *handle_param = NULL, *url_param = NULL, _0, _1;
	zend_long handle, url;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(url)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &url_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, url);
	phpqt_qnetworkcachemetadata_set_url(&_0, &_1);
}

PHP_METHOD(Qt_Network_QNetworkCacheMetaData_QNetworkCacheMetaData, rawHeaders)
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
	phpqt_qnetworkcachemetadata_raw_headers(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Network_QNetworkCacheMetaData_QNetworkCacheMetaData, setRawHeaders)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval headers;
	zval *handle_param = NULL, *headers_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&headers);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ARRAY(headers)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &headers_param);
	zephir_get_arrval(&headers, headers_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qnetworkcachemetadata_set_raw_headers(&_0, &headers);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_Network_QNetworkCacheMetaData_QNetworkCacheMetaData, headers)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qnetworkcachemetadata_headers(&_0));
}

PHP_METHOD(Qt_Network_QNetworkCacheMetaData_QNetworkCacheMetaData, setHeaders)
{
	zval *handle_param = NULL, *headers_param = NULL, _0, _1;
	zend_long handle, headers;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(headers)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &headers_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, headers);
	phpqt_qnetworkcachemetadata_set_headers(&_0, &_1);
}

PHP_METHOD(Qt_Network_QNetworkCacheMetaData_QNetworkCacheMetaData, lastModified)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qnetworkcachemetadata_last_modified(&_0));
}

PHP_METHOD(Qt_Network_QNetworkCacheMetaData_QNetworkCacheMetaData, setLastModified)
{
	zval *handle_param = NULL, *dateTime_param = NULL, _0, _1;
	zend_long handle, dateTime;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(dateTime)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &dateTime_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, dateTime);
	phpqt_qnetworkcachemetadata_set_last_modified(&_0, &_1);
}

PHP_METHOD(Qt_Network_QNetworkCacheMetaData_QNetworkCacheMetaData, expirationDate)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qnetworkcachemetadata_expiration_date(&_0));
}

PHP_METHOD(Qt_Network_QNetworkCacheMetaData_QNetworkCacheMetaData, setExpirationDate)
{
	zval *handle_param = NULL, *dateTime_param = NULL, _0, _1;
	zend_long handle, dateTime;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(dateTime)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &dateTime_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, dateTime);
	phpqt_qnetworkcachemetadata_set_expiration_date(&_0, &_1);
}

PHP_METHOD(Qt_Network_QNetworkCacheMetaData_QNetworkCacheMetaData, saveToDisk)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qnetworkcachemetadata_save_to_disk(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Network_QNetworkCacheMetaData_QNetworkCacheMetaData, setSaveToDisk)
{
	zend_bool allow;
	zval *handle_param = NULL, *allow_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_BOOL(allow)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &allow_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_BOOL(&_1, (allow ? 1 : 0));
	phpqt_qnetworkcachemetadata_set_save_to_disk(&_0, &_1);
}

PHP_METHOD(Qt_Network_QNetworkCacheMetaData_QNetworkCacheMetaData, attributes)
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
	phpqt_qnetworkcachemetadata_attributes(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Network_QNetworkCacheMetaData_QNetworkCacheMetaData, setAttributes)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval attributes;
	zval *handle_param = NULL, *attributes_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&attributes);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ARRAY(attributes)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &attributes_param);
	zephir_get_arrval(&attributes, attributes_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qnetworkcachemetadata_set_attributes(&_0, &attributes);
	ZEPHIR_MM_RESTORE();
}

