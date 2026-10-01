
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
#include "src/core-qmetamethod.h"
#include "kernel/object.h"
#include "kernel/string.h"
#include "kernel/memory.h"
#include "kernel/operators.h"


ZEPHIR_INIT_CLASS(Qt_Core_QMetaMethod_QMetaMethod)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Core\\QMetaMethod, QMetaMethod, qt, core_qmetamethod_qmetamethod, qt_core_qmetamethod_qmetamethod_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Core_QMetaMethod_QMetaMethod, new_)
{

	RETURN_LONG(phpqt_qmetamethod_new());
}

PHP_METHOD(Qt_Core_QMetaMethod_QMetaMethod, methodSignature)
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
	phpqt_qmetamethod_method_signature(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QMetaMethod_QMetaMethod, name)
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
	phpqt_qmetamethod_name(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QMetaMethod_QMetaMethod, typeName)
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
	phpqt_qmetamethod_type_name(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QMetaMethod_QMetaMethod, returnType)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qmetamethod_return_type(&_0));
}

PHP_METHOD(Qt_Core_QMetaMethod_QMetaMethod, returnMetaType)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qmetamethod_return_meta_type(&_0));
}

PHP_METHOD(Qt_Core_QMetaMethod_QMetaMethod, parameterCount)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qmetamethod_parameter_count(&_0));
}

PHP_METHOD(Qt_Core_QMetaMethod_QMetaMethod, parameterType)
{
	zval *handle_param = NULL, *index_param = NULL, _0, _1;
	zend_long handle, index;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(index)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &index_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, index);
	RETURN_LONG(phpqt_qmetamethod_parameter_type(&_0, &_1));
}

PHP_METHOD(Qt_Core_QMetaMethod_QMetaMethod, parameterMetaType)
{
	zval *handle_param = NULL, *index_param = NULL, _0, _1;
	zend_long handle, index;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(index)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &index_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, index);
	RETURN_LONG(phpqt_qmetamethod_parameter_meta_type(&_0, &_1));
}

PHP_METHOD(Qt_Core_QMetaMethod_QMetaMethod, getParameterTypes)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, *types = NULL, types_sub, result, _0;
	zend_long handle;

	ZVAL_UNDEF(&types_sub);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(types)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &types);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	phpqt_qmetamethod_get_parameter_types(&result, &_0, types);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QMetaMethod_QMetaMethod, parameterTypes)
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
	phpqt_qmetamethod_parameter_types(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QMetaMethod_QMetaMethod, parameterTypeName)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, *index_param = NULL, result, _0, _1;
	zend_long handle, index;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(index)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &index_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, index);
	phpqt_qmetamethod_parameter_type_name(&result, &_0, &_1);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QMetaMethod_QMetaMethod, parameterNames)
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
	phpqt_qmetamethod_parameter_names(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QMetaMethod_QMetaMethod, tag)
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
	phpqt_qmetamethod_tag(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QMetaMethod_QMetaMethod, access)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qmetamethod_access(&_0));
}

PHP_METHOD(Qt_Core_QMetaMethod_QMetaMethod, methodType)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qmetamethod_method_type(&_0));
}

PHP_METHOD(Qt_Core_QMetaMethod_QMetaMethod, attributes)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qmetamethod_attributes(&_0));
}

PHP_METHOD(Qt_Core_QMetaMethod_QMetaMethod, methodIndex)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qmetamethod_method_index(&_0));
}

PHP_METHOD(Qt_Core_QMetaMethod_QMetaMethod, relativeMethodIndex)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qmetamethod_relative_method_index(&_0));
}

PHP_METHOD(Qt_Core_QMetaMethod_QMetaMethod, revision)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qmetamethod_revision(&_0));
}

PHP_METHOD(Qt_Core_QMetaMethod_QMetaMethod, isConst)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qmetamethod_is_const(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QMetaMethod_QMetaMethod, enclosingMetaObject)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qmetamethod_enclosing_meta_object(&_0));
}

PHP_METHOD(Qt_Core_QMetaMethod_QMetaMethod, invoke)
{
	zval *handle_param = NULL, *object__param = NULL, *connectionType_param = NULL, *returnValue_param = NULL, *val0 = NULL, val0_sub, *val1 = NULL, val1_sub, *val2 = NULL, val2_sub, *val3 = NULL, val3_sub, *val4 = NULL, val4_sub, *val5 = NULL, val5_sub, *val6 = NULL, val6_sub, *val7 = NULL, val7_sub, *val8 = NULL, val8_sub, *val9 = NULL, val9_sub, __$null, _0, _1, _2, _3;
	zend_long handle, object_, connectionType, returnValue, r = 0;

	ZVAL_UNDEF(&val0_sub);
	ZVAL_UNDEF(&val1_sub);
	ZVAL_UNDEF(&val2_sub);
	ZVAL_UNDEF(&val3_sub);
	ZVAL_UNDEF(&val4_sub);
	ZVAL_UNDEF(&val5_sub);
	ZVAL_UNDEF(&val6_sub);
	ZVAL_UNDEF(&val7_sub);
	ZVAL_UNDEF(&val8_sub);
	ZVAL_UNDEF(&val9_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(4, 14)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(object_)
		Z_PARAM_LONG(connectionType)
		Z_PARAM_LONG(returnValue)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(val0)
		Z_PARAM_ZVAL_OR_NULL(val1)
		Z_PARAM_ZVAL_OR_NULL(val2)
		Z_PARAM_ZVAL_OR_NULL(val3)
		Z_PARAM_ZVAL_OR_NULL(val4)
		Z_PARAM_ZVAL_OR_NULL(val5)
		Z_PARAM_ZVAL_OR_NULL(val6)
		Z_PARAM_ZVAL_OR_NULL(val7)
		Z_PARAM_ZVAL_OR_NULL(val8)
		Z_PARAM_ZVAL_OR_NULL(val9)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 10, &handle_param, &object__param, &connectionType_param, &returnValue_param, &val0, &val1, &val2, &val3, &val4, &val5, &val6, &val7, &val8, &val9);
	if (!val0) {
		val0 = &val0_sub;
		val0 = &__$null;
	}
	if (!val1) {
		val1 = &val1_sub;
		val1 = &__$null;
	}
	if (!val2) {
		val2 = &val2_sub;
		val2 = &__$null;
	}
	if (!val3) {
		val3 = &val3_sub;
		val3 = &__$null;
	}
	if (!val4) {
		val4 = &val4_sub;
		val4 = &__$null;
	}
	if (!val5) {
		val5 = &val5_sub;
		val5 = &__$null;
	}
	if (!val6) {
		val6 = &val6_sub;
		val6 = &__$null;
	}
	if (!val7) {
		val7 = &val7_sub;
		val7 = &__$null;
	}
	if (!val8) {
		val8 = &val8_sub;
		val8 = &__$null;
	}
	if (!val9) {
		val9 = &val9_sub;
		val9 = &__$null;
	}
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, object_);
	ZVAL_LONG(&_2, connectionType);
	ZVAL_LONG(&_3, returnValue);
	r = phpqt_qmetamethod_invoke(&_0, &_1, &_2, &_3, val0, val1, val2, val3, val4, val5, val6, val7, val8, val9);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QMetaMethod_QMetaMethod, invokeQObjectQGenericReturnArgumentQGenericArgumentQGenericArgumentQGenericArgumentQGenericArgumentQGenericArgumentQGenericArgumentQGenericArgumentQGenericArgumentQGenericArgumentQGenericArgument)
{
	zval *handle_param = NULL, *object__param = NULL, *returnValue_param = NULL, *val0 = NULL, val0_sub, *val1 = NULL, val1_sub, *val2 = NULL, val2_sub, *val3 = NULL, val3_sub, *val4 = NULL, val4_sub, *val5 = NULL, val5_sub, *val6 = NULL, val6_sub, *val7 = NULL, val7_sub, *val8 = NULL, val8_sub, *val9 = NULL, val9_sub, __$null, _0, _1, _2;
	zend_long handle, object_, returnValue, r = 0;

	ZVAL_UNDEF(&val0_sub);
	ZVAL_UNDEF(&val1_sub);
	ZVAL_UNDEF(&val2_sub);
	ZVAL_UNDEF(&val3_sub);
	ZVAL_UNDEF(&val4_sub);
	ZVAL_UNDEF(&val5_sub);
	ZVAL_UNDEF(&val6_sub);
	ZVAL_UNDEF(&val7_sub);
	ZVAL_UNDEF(&val8_sub);
	ZVAL_UNDEF(&val9_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(3, 13)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(object_)
		Z_PARAM_LONG(returnValue)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(val0)
		Z_PARAM_ZVAL_OR_NULL(val1)
		Z_PARAM_ZVAL_OR_NULL(val2)
		Z_PARAM_ZVAL_OR_NULL(val3)
		Z_PARAM_ZVAL_OR_NULL(val4)
		Z_PARAM_ZVAL_OR_NULL(val5)
		Z_PARAM_ZVAL_OR_NULL(val6)
		Z_PARAM_ZVAL_OR_NULL(val7)
		Z_PARAM_ZVAL_OR_NULL(val8)
		Z_PARAM_ZVAL_OR_NULL(val9)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 10, &handle_param, &object__param, &returnValue_param, &val0, &val1, &val2, &val3, &val4, &val5, &val6, &val7, &val8, &val9);
	if (!val0) {
		val0 = &val0_sub;
		val0 = &__$null;
	}
	if (!val1) {
		val1 = &val1_sub;
		val1 = &__$null;
	}
	if (!val2) {
		val2 = &val2_sub;
		val2 = &__$null;
	}
	if (!val3) {
		val3 = &val3_sub;
		val3 = &__$null;
	}
	if (!val4) {
		val4 = &val4_sub;
		val4 = &__$null;
	}
	if (!val5) {
		val5 = &val5_sub;
		val5 = &__$null;
	}
	if (!val6) {
		val6 = &val6_sub;
		val6 = &__$null;
	}
	if (!val7) {
		val7 = &val7_sub;
		val7 = &__$null;
	}
	if (!val8) {
		val8 = &val8_sub;
		val8 = &__$null;
	}
	if (!val9) {
		val9 = &val9_sub;
		val9 = &__$null;
	}
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, object_);
	ZVAL_LONG(&_2, returnValue);
	r = phpqt_qmetamethod_invoke_q_object_q_generic_return_argument_q_generic_argument_q_generic_argument_q_generic_argument_q_generic_argument_q_generic_argument_q_generic_argument_q_generic_argument_q_generic_argument_q_generic_argument_q_generic_argument(&_0, &_1, &_2, val0, val1, val2, val3, val4, val5, val6, val7, val8, val9);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QMetaMethod_QMetaMethod, invokeQObjectQtConnectionTypeQGenericArgumentQGenericArgumentQGenericArgumentQGenericArgumentQGenericArgumentQGenericArgumentQGenericArgumentQGenericArgumentQGenericArgumentQGenericArgument)
{
	zval *handle_param = NULL, *object__param = NULL, *connectionType_param = NULL, *val0_param = NULL, *val1 = NULL, val1_sub, *val2 = NULL, val2_sub, *val3 = NULL, val3_sub, *val4 = NULL, val4_sub, *val5 = NULL, val5_sub, *val6 = NULL, val6_sub, *val7 = NULL, val7_sub, *val8 = NULL, val8_sub, *val9 = NULL, val9_sub, __$null, _0, _1, _2, _3;
	zend_long handle, object_, connectionType, val0, r = 0;

	ZVAL_UNDEF(&val1_sub);
	ZVAL_UNDEF(&val2_sub);
	ZVAL_UNDEF(&val3_sub);
	ZVAL_UNDEF(&val4_sub);
	ZVAL_UNDEF(&val5_sub);
	ZVAL_UNDEF(&val6_sub);
	ZVAL_UNDEF(&val7_sub);
	ZVAL_UNDEF(&val8_sub);
	ZVAL_UNDEF(&val9_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(4, 13)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(object_)
		Z_PARAM_LONG(connectionType)
		Z_PARAM_LONG(val0)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(val1)
		Z_PARAM_ZVAL_OR_NULL(val2)
		Z_PARAM_ZVAL_OR_NULL(val3)
		Z_PARAM_ZVAL_OR_NULL(val4)
		Z_PARAM_ZVAL_OR_NULL(val5)
		Z_PARAM_ZVAL_OR_NULL(val6)
		Z_PARAM_ZVAL_OR_NULL(val7)
		Z_PARAM_ZVAL_OR_NULL(val8)
		Z_PARAM_ZVAL_OR_NULL(val9)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 9, &handle_param, &object__param, &connectionType_param, &val0_param, &val1, &val2, &val3, &val4, &val5, &val6, &val7, &val8, &val9);
	if (!val1) {
		val1 = &val1_sub;
		val1 = &__$null;
	}
	if (!val2) {
		val2 = &val2_sub;
		val2 = &__$null;
	}
	if (!val3) {
		val3 = &val3_sub;
		val3 = &__$null;
	}
	if (!val4) {
		val4 = &val4_sub;
		val4 = &__$null;
	}
	if (!val5) {
		val5 = &val5_sub;
		val5 = &__$null;
	}
	if (!val6) {
		val6 = &val6_sub;
		val6 = &__$null;
	}
	if (!val7) {
		val7 = &val7_sub;
		val7 = &__$null;
	}
	if (!val8) {
		val8 = &val8_sub;
		val8 = &__$null;
	}
	if (!val9) {
		val9 = &val9_sub;
		val9 = &__$null;
	}
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, object_);
	ZVAL_LONG(&_2, connectionType);
	ZVAL_LONG(&_3, val0);
	r = phpqt_qmetamethod_invoke_q_object_qt_connection_type_q_generic_argument_q_generic_argument_q_generic_argument_q_generic_argument_q_generic_argument_q_generic_argument_q_generic_argument_q_generic_argument_q_generic_argument_q_generic_argument(&_0, &_1, &_2, &_3, val1, val2, val3, val4, val5, val6, val7, val8, val9);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QMetaMethod_QMetaMethod, invokeQObjectQGenericArgumentQGenericArgumentQGenericArgumentQGenericArgumentQGenericArgumentQGenericArgumentQGenericArgumentQGenericArgumentQGenericArgumentQGenericArgument)
{
	zval *handle_param = NULL, *object__param = NULL, *val0_param = NULL, *val1 = NULL, val1_sub, *val2 = NULL, val2_sub, *val3 = NULL, val3_sub, *val4 = NULL, val4_sub, *val5 = NULL, val5_sub, *val6 = NULL, val6_sub, *val7 = NULL, val7_sub, *val8 = NULL, val8_sub, *val9 = NULL, val9_sub, __$null, _0, _1, _2;
	zend_long handle, object_, val0, r = 0;

	ZVAL_UNDEF(&val1_sub);
	ZVAL_UNDEF(&val2_sub);
	ZVAL_UNDEF(&val3_sub);
	ZVAL_UNDEF(&val4_sub);
	ZVAL_UNDEF(&val5_sub);
	ZVAL_UNDEF(&val6_sub);
	ZVAL_UNDEF(&val7_sub);
	ZVAL_UNDEF(&val8_sub);
	ZVAL_UNDEF(&val9_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(3, 12)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(object_)
		Z_PARAM_LONG(val0)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(val1)
		Z_PARAM_ZVAL_OR_NULL(val2)
		Z_PARAM_ZVAL_OR_NULL(val3)
		Z_PARAM_ZVAL_OR_NULL(val4)
		Z_PARAM_ZVAL_OR_NULL(val5)
		Z_PARAM_ZVAL_OR_NULL(val6)
		Z_PARAM_ZVAL_OR_NULL(val7)
		Z_PARAM_ZVAL_OR_NULL(val8)
		Z_PARAM_ZVAL_OR_NULL(val9)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 9, &handle_param, &object__param, &val0_param, &val1, &val2, &val3, &val4, &val5, &val6, &val7, &val8, &val9);
	if (!val1) {
		val1 = &val1_sub;
		val1 = &__$null;
	}
	if (!val2) {
		val2 = &val2_sub;
		val2 = &__$null;
	}
	if (!val3) {
		val3 = &val3_sub;
		val3 = &__$null;
	}
	if (!val4) {
		val4 = &val4_sub;
		val4 = &__$null;
	}
	if (!val5) {
		val5 = &val5_sub;
		val5 = &__$null;
	}
	if (!val6) {
		val6 = &val6_sub;
		val6 = &__$null;
	}
	if (!val7) {
		val7 = &val7_sub;
		val7 = &__$null;
	}
	if (!val8) {
		val8 = &val8_sub;
		val8 = &__$null;
	}
	if (!val9) {
		val9 = &val9_sub;
		val9 = &__$null;
	}
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, object_);
	ZVAL_LONG(&_2, val0);
	r = phpqt_qmetamethod_invoke_q_object_q_generic_argument_q_generic_argument_q_generic_argument_q_generic_argument_q_generic_argument_q_generic_argument_q_generic_argument_q_generic_argument_q_generic_argument_q_generic_argument(&_0, &_1, &_2, val1, val2, val3, val4, val5, val6, val7, val8, val9);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QMetaMethod_QMetaMethod, isValid)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qmetamethod_is_valid(&_0);
	RETURN_BOOL(r == 1);
}

