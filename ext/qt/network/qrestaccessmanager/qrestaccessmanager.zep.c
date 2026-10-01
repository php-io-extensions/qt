
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
#include "src/network-qrestaccessmanager.h"
#include "kernel/object.h"
#include "kernel/string.h"
#include "kernel/memory.h"
#include "kernel/operators.h"


ZEPHIR_INIT_CLASS(Qt_Network_QRestAccessManager_QRestAccessManager)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Network\\QRestAccessManager, QRestAccessManager, qt, network_qrestaccessmanager_qrestaccessmanager, qt_network_qrestaccessmanager_qrestaccessmanager_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Network_QRestAccessManager_QRestAccessManager, staticMetaObject)
{

	RETURN_LONG(phpqt_qrestaccessmanager_static_meta_object());
}

PHP_METHOD(Qt_Network_QRestAccessManager_QRestAccessManager, tr)
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
	phpqt_qrestaccessmanager_tr(&result, s, c, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Network_QRestAccessManager_QRestAccessManager, new_)
{
	zval *manager_param = NULL, *parent__param = NULL, _0, _1;
	zend_long manager, parent_;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_LONG(manager)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(parent_)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 1, &manager_param, &parent__param);
	if (!parent__param) {
		parent_ = 0;
	} else {
		}
	ZVAL_LONG(&_0, manager);
	ZVAL_LONG(&_1, parent_);
	RETURN_LONG(phpqt_qrestaccessmanager_new(&_0, &_1));
}

PHP_METHOD(Qt_Network_QRestAccessManager_QRestAccessManager, networkAccessManager)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qrestaccessmanager_network_access_manager(&_0));
}

PHP_METHOD(Qt_Network_QRestAccessManager_QRestAccessManager, deleteResource)
{
	zval *handle_param = NULL, *request_param = NULL, _0, _1;
	zend_long handle, request;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(request)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &request_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, request);
	RETURN_LONG(phpqt_qrestaccessmanager_delete_resource(&_0, &_1));
}

PHP_METHOD(Qt_Network_QRestAccessManager_QRestAccessManager, head)
{
	zval *handle_param = NULL, *request_param = NULL, _0, _1;
	zend_long handle, request;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(request)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &request_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, request);
	RETURN_LONG(phpqt_qrestaccessmanager_head(&_0, &_1));
}

PHP_METHOD(Qt_Network_QRestAccessManager_QRestAccessManager, get)
{
	zval *handle_param = NULL, *request_param = NULL, _0, _1;
	zend_long handle, request;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(request)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &request_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, request);
	RETURN_LONG(phpqt_qrestaccessmanager_get(&_0, &_1));
}

PHP_METHOD(Qt_Network_QRestAccessManager_QRestAccessManager, getQNetworkRequestQByteArray)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval data;
	zval *handle_param = NULL, *request_param = NULL, *data_param = NULL, _0, _1;
	zend_long handle, request;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&data);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(request)
		Z_PARAM_STR(data)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 3, 0, &handle_param, &request_param, &data_param);
	zephir_get_strval(&data, data_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, request);
	RETURN_MM_LONG(phpqt_qrestaccessmanager_get_q_network_request_q_byte_array(&_0, &_1, &data));
}

PHP_METHOD(Qt_Network_QRestAccessManager_QRestAccessManager, getQNetworkRequestQJsonDocument)
{
	zval *handle_param = NULL, *request_param = NULL, *data_param = NULL, _0, _1, _2;
	zend_long handle, request, data;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(request)
		Z_PARAM_LONG(data)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &request_param, &data_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, request);
	ZVAL_LONG(&_2, data);
	RETURN_LONG(phpqt_qrestaccessmanager_get_q_network_request_q_json_document(&_0, &_1, &_2));
}

PHP_METHOD(Qt_Network_QRestAccessManager_QRestAccessManager, getQNetworkRequestQIODevice)
{
	zval *handle_param = NULL, *request_param = NULL, *data_param = NULL, _0, _1, _2;
	zend_long handle, request, data;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(request)
		Z_PARAM_LONG(data)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &request_param, &data_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, request);
	ZVAL_LONG(&_2, data);
	RETURN_LONG(phpqt_qrestaccessmanager_get_q_network_request_q_i_o_device(&_0, &_1, &_2));
}

PHP_METHOD(Qt_Network_QRestAccessManager_QRestAccessManager, post)
{
	zval *handle_param = NULL, *request_param = NULL, *data_param = NULL, _0, _1, _2;
	zend_long handle, request, data;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(request)
		Z_PARAM_LONG(data)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &request_param, &data_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, request);
	ZVAL_LONG(&_2, data);
	RETURN_LONG(phpqt_qrestaccessmanager_post(&_0, &_1, &_2));
}

PHP_METHOD(Qt_Network_QRestAccessManager_QRestAccessManager, postQNetworkRequestQVariantMap)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval data;
	zval *handle_param = NULL, *request_param = NULL, *data_param = NULL, _0, _1;
	zend_long handle, request;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&data);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(request)
		Z_PARAM_ARRAY(data)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 3, 0, &handle_param, &request_param, &data_param);
	zephir_get_arrval(&data, data_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, request);
	RETURN_MM_LONG(phpqt_qrestaccessmanager_post_q_network_request_q_variant_map(&_0, &_1, &data));
}

PHP_METHOD(Qt_Network_QRestAccessManager_QRestAccessManager, postQNetworkRequestQByteArray)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval data;
	zval *handle_param = NULL, *request_param = NULL, *data_param = NULL, _0, _1;
	zend_long handle, request;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&data);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(request)
		Z_PARAM_STR(data)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 3, 0, &handle_param, &request_param, &data_param);
	zephir_get_strval(&data, data_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, request);
	RETURN_MM_LONG(phpqt_qrestaccessmanager_post_q_network_request_q_byte_array(&_0, &_1, &data));
}

PHP_METHOD(Qt_Network_QRestAccessManager_QRestAccessManager, postQNetworkRequestQHttpMultiPart)
{
	zval *handle_param = NULL, *request_param = NULL, *data_param = NULL, _0, _1, _2;
	zend_long handle, request, data;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(request)
		Z_PARAM_LONG(data)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &request_param, &data_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, request);
	ZVAL_LONG(&_2, data);
	RETURN_LONG(phpqt_qrestaccessmanager_post_q_network_request_q_http_multi_part(&_0, &_1, &_2));
}

PHP_METHOD(Qt_Network_QRestAccessManager_QRestAccessManager, postQNetworkRequestQIODevice)
{
	zval *handle_param = NULL, *request_param = NULL, *data_param = NULL, _0, _1, _2;
	zend_long handle, request, data;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(request)
		Z_PARAM_LONG(data)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &request_param, &data_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, request);
	ZVAL_LONG(&_2, data);
	RETURN_LONG(phpqt_qrestaccessmanager_post_q_network_request_q_i_o_device(&_0, &_1, &_2));
}

PHP_METHOD(Qt_Network_QRestAccessManager_QRestAccessManager, put)
{
	zval *handle_param = NULL, *request_param = NULL, *data_param = NULL, _0, _1, _2;
	zend_long handle, request, data;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(request)
		Z_PARAM_LONG(data)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &request_param, &data_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, request);
	ZVAL_LONG(&_2, data);
	RETURN_LONG(phpqt_qrestaccessmanager_put(&_0, &_1, &_2));
}

PHP_METHOD(Qt_Network_QRestAccessManager_QRestAccessManager, putQNetworkRequestQVariantMap)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval data;
	zval *handle_param = NULL, *request_param = NULL, *data_param = NULL, _0, _1;
	zend_long handle, request;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&data);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(request)
		Z_PARAM_ARRAY(data)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 3, 0, &handle_param, &request_param, &data_param);
	zephir_get_arrval(&data, data_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, request);
	RETURN_MM_LONG(phpqt_qrestaccessmanager_put_q_network_request_q_variant_map(&_0, &_1, &data));
}

PHP_METHOD(Qt_Network_QRestAccessManager_QRestAccessManager, putQNetworkRequestQByteArray)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval data;
	zval *handle_param = NULL, *request_param = NULL, *data_param = NULL, _0, _1;
	zend_long handle, request;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&data);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(request)
		Z_PARAM_STR(data)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 3, 0, &handle_param, &request_param, &data_param);
	zephir_get_strval(&data, data_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, request);
	RETURN_MM_LONG(phpqt_qrestaccessmanager_put_q_network_request_q_byte_array(&_0, &_1, &data));
}

PHP_METHOD(Qt_Network_QRestAccessManager_QRestAccessManager, putQNetworkRequestQHttpMultiPart)
{
	zval *handle_param = NULL, *request_param = NULL, *data_param = NULL, _0, _1, _2;
	zend_long handle, request, data;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(request)
		Z_PARAM_LONG(data)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &request_param, &data_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, request);
	ZVAL_LONG(&_2, data);
	RETURN_LONG(phpqt_qrestaccessmanager_put_q_network_request_q_http_multi_part(&_0, &_1, &_2));
}

PHP_METHOD(Qt_Network_QRestAccessManager_QRestAccessManager, putQNetworkRequestQIODevice)
{
	zval *handle_param = NULL, *request_param = NULL, *data_param = NULL, _0, _1, _2;
	zend_long handle, request, data;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(request)
		Z_PARAM_LONG(data)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &request_param, &data_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, request);
	ZVAL_LONG(&_2, data);
	RETURN_LONG(phpqt_qrestaccessmanager_put_q_network_request_q_i_o_device(&_0, &_1, &_2));
}

PHP_METHOD(Qt_Network_QRestAccessManager_QRestAccessManager, patch)
{
	zval *handle_param = NULL, *request_param = NULL, *data_param = NULL, _0, _1, _2;
	zend_long handle, request, data;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(request)
		Z_PARAM_LONG(data)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &request_param, &data_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, request);
	ZVAL_LONG(&_2, data);
	RETURN_LONG(phpqt_qrestaccessmanager_patch(&_0, &_1, &_2));
}

PHP_METHOD(Qt_Network_QRestAccessManager_QRestAccessManager, patchQNetworkRequestQVariantMap)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval data;
	zval *handle_param = NULL, *request_param = NULL, *data_param = NULL, _0, _1;
	zend_long handle, request;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&data);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(request)
		Z_PARAM_ARRAY(data)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 3, 0, &handle_param, &request_param, &data_param);
	zephir_get_arrval(&data, data_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, request);
	RETURN_MM_LONG(phpqt_qrestaccessmanager_patch_q_network_request_q_variant_map(&_0, &_1, &data));
}

PHP_METHOD(Qt_Network_QRestAccessManager_QRestAccessManager, patchQNetworkRequestQByteArray)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval data;
	zval *handle_param = NULL, *request_param = NULL, *data_param = NULL, _0, _1;
	zend_long handle, request;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&data);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(request)
		Z_PARAM_STR(data)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 3, 0, &handle_param, &request_param, &data_param);
	zephir_get_strval(&data, data_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, request);
	RETURN_MM_LONG(phpqt_qrestaccessmanager_patch_q_network_request_q_byte_array(&_0, &_1, &data));
}

PHP_METHOD(Qt_Network_QRestAccessManager_QRestAccessManager, patchQNetworkRequestQIODevice)
{
	zval *handle_param = NULL, *request_param = NULL, *data_param = NULL, _0, _1, _2;
	zend_long handle, request, data;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(request)
		Z_PARAM_LONG(data)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &request_param, &data_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, request);
	ZVAL_LONG(&_2, data);
	RETURN_LONG(phpqt_qrestaccessmanager_patch_q_network_request_q_i_o_device(&_0, &_1, &_2));
}

PHP_METHOD(Qt_Network_QRestAccessManager_QRestAccessManager, sendCustomRequest)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval method, data;
	zval *handle_param = NULL, *request_param = NULL, *method_param = NULL, *data_param = NULL, _0, _1;
	zend_long handle, request;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&method);
	ZVAL_UNDEF(&data);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(request)
		Z_PARAM_STR(method)
		Z_PARAM_STR(data)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 4, 0, &handle_param, &request_param, &method_param, &data_param);
	zephir_get_strval(&method, method_param);
	zephir_get_strval(&data, data_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, request);
	RETURN_MM_LONG(phpqt_qrestaccessmanager_send_custom_request(&_0, &_1, &method, &data));
}

PHP_METHOD(Qt_Network_QRestAccessManager_QRestAccessManager, sendCustomRequestQNetworkRequestQByteArrayQIODevice)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval method;
	zval *handle_param = NULL, *request_param = NULL, *method_param = NULL, *data_param = NULL, _0, _1, _2;
	zend_long handle, request, data;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&method);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(request)
		Z_PARAM_STR(method)
		Z_PARAM_LONG(data)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 4, 0, &handle_param, &request_param, &method_param, &data_param);
	zephir_get_strval(&method, method_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, request);
	ZVAL_LONG(&_2, data);
	RETURN_MM_LONG(phpqt_qrestaccessmanager_send_custom_request_q_network_request_q_byte_array_q_i_o_device(&_0, &_1, &method, &_2));
}

PHP_METHOD(Qt_Network_QRestAccessManager_QRestAccessManager, sendCustomRequestQNetworkRequestQByteArrayQHttpMultiPart)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval method;
	zval *handle_param = NULL, *request_param = NULL, *method_param = NULL, *data_param = NULL, _0, _1, _2;
	zend_long handle, request, data;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&method);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(request)
		Z_PARAM_STR(method)
		Z_PARAM_LONG(data)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 4, 0, &handle_param, &request_param, &method_param, &data_param);
	zephir_get_strval(&method, method_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, request);
	ZVAL_LONG(&_2, data);
	RETURN_MM_LONG(phpqt_qrestaccessmanager_send_custom_request_q_network_request_q_byte_array_q_http_multi_part(&_0, &_1, &method, &_2));
}

