
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
#include "src/gui-qgenericmatrixfunctions.h"
#include "kernel/operators.h"
#include "kernel/memory.h"
#include "kernel/object.h"


ZEPHIR_INIT_CLASS(Qt_Gui_QGenericmatrixFunctions_QGenericmatrixFunctions)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Gui\\QGenericmatrixFunctions, QGenericmatrixFunctions, qt, gui_qgenericmatrixfunctions_qgenericmatrixfunctions, qt_gui_qgenericmatrixfunctions_qgenericmatrixfunctions_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Gui_QGenericmatrixFunctions_QGenericmatrixFunctions, qRegisterNormalizedMetaType_QMatrix2x2)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *arg0_param = NULL;
	zval arg0;

	ZVAL_UNDEF(&arg0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_STR(arg0)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &arg0_param);
	zephir_get_strval(&arg0, arg0_param);
	RETURN_MM_LONG(phpqt_qgenericmatrixfunctions_q_register_normalized_meta_type__q_matrix2x2(&arg0));
}

PHP_METHOD(Qt_Gui_QGenericmatrixFunctions_QGenericmatrixFunctions, qRegisterNormalizedMetaType_QMatrix2x3)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *arg0_param = NULL;
	zval arg0;

	ZVAL_UNDEF(&arg0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_STR(arg0)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &arg0_param);
	zephir_get_strval(&arg0, arg0_param);
	RETURN_MM_LONG(phpqt_qgenericmatrixfunctions_q_register_normalized_meta_type__q_matrix2x3(&arg0));
}

PHP_METHOD(Qt_Gui_QGenericmatrixFunctions_QGenericmatrixFunctions, qRegisterNormalizedMetaType_QMatrix2x4)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *arg0_param = NULL;
	zval arg0;

	ZVAL_UNDEF(&arg0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_STR(arg0)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &arg0_param);
	zephir_get_strval(&arg0, arg0_param);
	RETURN_MM_LONG(phpqt_qgenericmatrixfunctions_q_register_normalized_meta_type__q_matrix2x4(&arg0));
}

PHP_METHOD(Qt_Gui_QGenericmatrixFunctions_QGenericmatrixFunctions, qRegisterNormalizedMetaType_QMatrix3x2)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *arg0_param = NULL;
	zval arg0;

	ZVAL_UNDEF(&arg0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_STR(arg0)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &arg0_param);
	zephir_get_strval(&arg0, arg0_param);
	RETURN_MM_LONG(phpqt_qgenericmatrixfunctions_q_register_normalized_meta_type__q_matrix3x2(&arg0));
}

PHP_METHOD(Qt_Gui_QGenericmatrixFunctions_QGenericmatrixFunctions, qRegisterNormalizedMetaType_QMatrix3x3)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *arg0_param = NULL;
	zval arg0;

	ZVAL_UNDEF(&arg0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_STR(arg0)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &arg0_param);
	zephir_get_strval(&arg0, arg0_param);
	RETURN_MM_LONG(phpqt_qgenericmatrixfunctions_q_register_normalized_meta_type__q_matrix3x3(&arg0));
}

PHP_METHOD(Qt_Gui_QGenericmatrixFunctions_QGenericmatrixFunctions, qRegisterNormalizedMetaType_QMatrix3x4)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *arg0_param = NULL;
	zval arg0;

	ZVAL_UNDEF(&arg0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_STR(arg0)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &arg0_param);
	zephir_get_strval(&arg0, arg0_param);
	RETURN_MM_LONG(phpqt_qgenericmatrixfunctions_q_register_normalized_meta_type__q_matrix3x4(&arg0));
}

PHP_METHOD(Qt_Gui_QGenericmatrixFunctions_QGenericmatrixFunctions, qRegisterNormalizedMetaType_QMatrix4x2)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *arg0_param = NULL;
	zval arg0;

	ZVAL_UNDEF(&arg0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_STR(arg0)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &arg0_param);
	zephir_get_strval(&arg0, arg0_param);
	RETURN_MM_LONG(phpqt_qgenericmatrixfunctions_q_register_normalized_meta_type__q_matrix4x2(&arg0));
}

PHP_METHOD(Qt_Gui_QGenericmatrixFunctions_QGenericmatrixFunctions, qRegisterNormalizedMetaType_QMatrix4x3)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *arg0_param = NULL;
	zval arg0;

	ZVAL_UNDEF(&arg0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_STR(arg0)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &arg0_param);
	zephir_get_strval(&arg0, arg0_param);
	RETURN_MM_LONG(phpqt_qgenericmatrixfunctions_q_register_normalized_meta_type__q_matrix4x3(&arg0));
}

