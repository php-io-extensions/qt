
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
#include "src/network-qhttpmultipart.h"
#include "kernel/object.h"
#include "kernel/string.h"
#include "kernel/memory.h"
#include "kernel/operators.h"


ZEPHIR_INIT_CLASS(Qt_Network_QHttpMultiPart_QHttpMultiPart)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Network\\QHttpMultiPart, QHttpMultiPart, qt, network_qhttpmultipart_qhttpmultipart, qt_network_qhttpmultipart_qhttpmultipart_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Network_QHttpMultiPart_QHttpMultiPart, staticMetaObject)
{

	RETURN_LONG(phpqt_qhttpmultipart_static_meta_object());
}

PHP_METHOD(Qt_Network_QHttpMultiPart_QHttpMultiPart, tr)
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
	phpqt_qhttpmultipart_tr(&result, s, c, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Network_QHttpMultiPart_QHttpMultiPart, new_)
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
	RETURN_LONG(phpqt_qhttpmultipart_new(&_0));
}

PHP_METHOD(Qt_Network_QHttpMultiPart_QHttpMultiPart, newQHttpMultiPartContentTypeQObject)
{
	zval *contentType_param = NULL, *parent__param = NULL, _0, _1;
	zend_long contentType, parent_;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_LONG(contentType)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(parent_)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 1, &contentType_param, &parent__param);
	if (!parent__param) {
		parent_ = 0;
	} else {
		}
	ZVAL_LONG(&_0, contentType);
	ZVAL_LONG(&_1, parent_);
	RETURN_LONG(phpqt_qhttpmultipart_new_q_http_multi_part_content_type_q_object(&_0, &_1));
}

PHP_METHOD(Qt_Network_QHttpMultiPart_QHttpMultiPart, append)
{
	zval *handle_param = NULL, *httpPart_param = NULL, _0, _1;
	zend_long handle, httpPart;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(httpPart)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &httpPart_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, httpPart);
	phpqt_qhttpmultipart_append(&_0, &_1);
}

PHP_METHOD(Qt_Network_QHttpMultiPart_QHttpMultiPart, setContentType)
{
	zval *handle_param = NULL, *contentType_param = NULL, _0, _1;
	zend_long handle, contentType;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(contentType)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &contentType_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, contentType);
	phpqt_qhttpmultipart_set_content_type(&_0, &_1);
}

PHP_METHOD(Qt_Network_QHttpMultiPart_QHttpMultiPart, boundary)
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
	phpqt_qhttpmultipart_boundary(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Network_QHttpMultiPart_QHttpMultiPart, setBoundary)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval boundary;
	zval *handle_param = NULL, *boundary_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&boundary);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(boundary)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &boundary_param);
	zephir_get_strval(&boundary, boundary_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qhttpmultipart_set_boundary(&_0, &boundary);
	ZEPHIR_MM_RESTORE();
}

