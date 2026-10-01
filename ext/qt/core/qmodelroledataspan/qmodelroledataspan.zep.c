
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
#include "src/core-qmodelroledataspan.h"
#include "kernel/object.h"
#include "kernel/operators.h"
#include "kernel/memory.h"


ZEPHIR_INIT_CLASS(Qt_Core_QModelRoleDataSpan_QModelRoleDataSpan)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Core\\QModelRoleDataSpan, QModelRoleDataSpan, qt, core_qmodelroledataspan_qmodelroledataspan, qt_core_qmodelroledataspan_qmodelroledataspan_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Core_QModelRoleDataSpan_QModelRoleDataSpan, new_)
{

	RETURN_LONG(phpqt_qmodelroledataspan_new());
}

PHP_METHOD(Qt_Core_QModelRoleDataSpan_QModelRoleDataSpan, newQModelRoleData)
{
	zval *modelRoleData_param = NULL, _0;
	zend_long modelRoleData;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(modelRoleData)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &modelRoleData_param);
	ZVAL_LONG(&_0, modelRoleData);
	RETURN_LONG(phpqt_qmodelroledataspan_new_q_model_role_data(&_0));
}

PHP_METHOD(Qt_Core_QModelRoleDataSpan_QModelRoleDataSpan, newQModelRoleDataQsizetype)
{
	zval *modelRoleData_param = NULL, *len_param = NULL, _0, _1;
	zend_long modelRoleData, len;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(modelRoleData)
		Z_PARAM_LONG(len)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &modelRoleData_param, &len_param);
	ZVAL_LONG(&_0, modelRoleData);
	ZVAL_LONG(&_1, len);
	RETURN_LONG(phpqt_qmodelroledataspan_new_q_model_role_data_qsizetype(&_0, &_1));
}

PHP_METHOD(Qt_Core_QModelRoleDataSpan_QModelRoleDataSpan, size)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qmodelroledataspan_size(&_0));
}

PHP_METHOD(Qt_Core_QModelRoleDataSpan_QModelRoleDataSpan, length)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qmodelroledataspan_length(&_0));
}

PHP_METHOD(Qt_Core_QModelRoleDataSpan_QModelRoleDataSpan, data)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qmodelroledataspan_data(&_0));
}

PHP_METHOD(Qt_Core_QModelRoleDataSpan_QModelRoleDataSpan, begin)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qmodelroledataspan_begin(&_0));
}

PHP_METHOD(Qt_Core_QModelRoleDataSpan_QModelRoleDataSpan, end)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qmodelroledataspan_end(&_0));
}

