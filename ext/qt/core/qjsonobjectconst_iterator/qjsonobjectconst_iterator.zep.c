
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
#include "src/core-qjsonobjectconst_iterator.h"
#include "kernel/object.h"
#include "kernel/operators.h"
#include "kernel/memory.h"
#include "kernel/string.h"


ZEPHIR_INIT_CLASS(Qt_Core_QJsonObjectconst_iterator_QJsonObjectconst_iterator)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Core\\QJsonObjectconst_iterator, QJsonObjectconst_iterator, qt, core_qjsonobjectconst_iterator_qjsonobjectconst_iterator, qt_core_qjsonobjectconst_iterator_qjsonobjectconst_iterator_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Core_QJsonObjectconst_iterator_QJsonObjectconst_iterator, new_)
{

	RETURN_LONG(phpqt_qjsonobjectconst_iterator_new());
}

PHP_METHOD(Qt_Core_QJsonObjectconst_iterator_QJsonObjectconst_iterator, newQJsonObjectQsizetype)
{
	zval *obj_param = NULL, *index_param = NULL, _0, _1;
	zend_long obj, index;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(obj)
		Z_PARAM_LONG(index)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &obj_param, &index_param);
	ZVAL_LONG(&_0, obj);
	ZVAL_LONG(&_1, index);
	RETURN_LONG(phpqt_qjsonobjectconst_iterator_new_q_json_object_qsizetype(&_0, &_1));
}

PHP_METHOD(Qt_Core_QJsonObjectconst_iterator_QJsonObjectconst_iterator, key)
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
	phpqt_qjsonobjectconst_iterator_key(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QJsonObjectconst_iterator_QJsonObjectconst_iterator, value)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qjsonobjectconst_iterator_value(&_0));
}

