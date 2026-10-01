
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
#include "src/core-qmetaobject.h"
#include "kernel/memory.h"
#include "kernel/operators.h"
#include "kernel/object.h"
#include "kernel/string.h"


ZEPHIR_INIT_CLASS(Qt_Core_QMetaObject_QMetaObject)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Core\\QMetaObject, QMetaObject, qt, core_qmetaobject_qmetaobject, qt_core_qmetaobject_qmetaobject_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Core_QMetaObject_QMetaObject, className)
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
	phpqt_qmetaobject_class_name(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QMetaObject_QMetaObject, superClass)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qmetaobject_super_class(&_0));
}

PHP_METHOD(Qt_Core_QMetaObject_QMetaObject, inherits)
{
	zval *handle_param = NULL, *metaObject_param = NULL, _0, _1;
	zend_long handle, metaObject, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(metaObject)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &metaObject_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, metaObject);
	r = phpqt_qmetaobject_inherits(&_0, &_1);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QMetaObject_QMetaObject, cast)
{
	zval *handle_param = NULL, *obj_param = NULL, _0, _1;
	zend_long handle, obj;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(obj)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &obj_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, obj);
	RETURN_LONG(phpqt_qmetaobject_cast(&_0, &_1));
}

PHP_METHOD(Qt_Core_QMetaObject_QMetaObject, tr)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, *s = NULL, s_sub, *c = NULL, c_sub, *n_param = NULL, result, _0, _1;
	zend_long handle, n;

	ZVAL_UNDEF(&s_sub);
	ZVAL_UNDEF(&c_sub);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(3, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(s)
		Z_PARAM_ZVAL(c)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(n)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 3, 1, &handle_param, &s, &c, &n_param);
	if (!n_param) {
		n = -1;
	} else {
		}
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, n);
	phpqt_qmetaobject_tr(&result, &_0, s, c, &_1);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QMetaObject_QMetaObject, metaType)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qmetaobject_meta_type(&_0));
}

PHP_METHOD(Qt_Core_QMetaObject_QMetaObject, methodOffset)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qmetaobject_method_offset(&_0));
}

PHP_METHOD(Qt_Core_QMetaObject_QMetaObject, enumeratorOffset)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qmetaobject_enumerator_offset(&_0));
}

PHP_METHOD(Qt_Core_QMetaObject_QMetaObject, propertyOffset)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qmetaobject_property_offset(&_0));
}

PHP_METHOD(Qt_Core_QMetaObject_QMetaObject, classInfoOffset)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qmetaobject_class_info_offset(&_0));
}

PHP_METHOD(Qt_Core_QMetaObject_QMetaObject, constructorCount)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qmetaobject_constructor_count(&_0));
}

PHP_METHOD(Qt_Core_QMetaObject_QMetaObject, methodCount)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qmetaobject_method_count(&_0));
}

PHP_METHOD(Qt_Core_QMetaObject_QMetaObject, enumeratorCount)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qmetaobject_enumerator_count(&_0));
}

PHP_METHOD(Qt_Core_QMetaObject_QMetaObject, propertyCount)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qmetaobject_property_count(&_0));
}

PHP_METHOD(Qt_Core_QMetaObject_QMetaObject, classInfoCount)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qmetaobject_class_info_count(&_0));
}

PHP_METHOD(Qt_Core_QMetaObject_QMetaObject, indexOfConstructor)
{
	zval *handle_param = NULL, *constructor = NULL, constructor_sub, _0;
	zend_long handle;

	ZVAL_UNDEF(&constructor_sub);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(constructor)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &constructor);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qmetaobject_index_of_constructor(&_0, constructor));
}

PHP_METHOD(Qt_Core_QMetaObject_QMetaObject, indexOfMethod)
{
	zval *handle_param = NULL, *method = NULL, method_sub, _0;
	zend_long handle;

	ZVAL_UNDEF(&method_sub);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(method)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &method);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qmetaobject_index_of_method(&_0, method));
}

PHP_METHOD(Qt_Core_QMetaObject_QMetaObject, indexOfSignal)
{
	zval *handle_param = NULL, *signal = NULL, signal_sub, _0;
	zend_long handle;

	ZVAL_UNDEF(&signal_sub);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(signal)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &signal);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qmetaobject_index_of_signal(&_0, signal));
}

PHP_METHOD(Qt_Core_QMetaObject_QMetaObject, indexOfSlot)
{
	zval *handle_param = NULL, *slot = NULL, slot_sub, _0;
	zend_long handle;

	ZVAL_UNDEF(&slot_sub);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(slot)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &slot);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qmetaobject_index_of_slot(&_0, slot));
}

PHP_METHOD(Qt_Core_QMetaObject_QMetaObject, indexOfEnumerator)
{
	zval *handle_param = NULL, *name = NULL, name_sub, _0;
	zend_long handle;

	ZVAL_UNDEF(&name_sub);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(name)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &name);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qmetaobject_index_of_enumerator(&_0, name));
}

PHP_METHOD(Qt_Core_QMetaObject_QMetaObject, indexOfProperty)
{
	zval *handle_param = NULL, *name = NULL, name_sub, _0;
	zend_long handle;

	ZVAL_UNDEF(&name_sub);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(name)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &name);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qmetaobject_index_of_property(&_0, name));
}

PHP_METHOD(Qt_Core_QMetaObject_QMetaObject, indexOfClassInfo)
{
	zval *handle_param = NULL, *name = NULL, name_sub, _0;
	zend_long handle;

	ZVAL_UNDEF(&name_sub);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(name)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &name);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qmetaobject_index_of_class_info(&_0, name));
}

PHP_METHOD(Qt_Core_QMetaObject_QMetaObject, constructor)
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
	RETURN_LONG(phpqt_qmetaobject_constructor(&_0, &_1));
}

PHP_METHOD(Qt_Core_QMetaObject_QMetaObject, method)
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
	RETURN_LONG(phpqt_qmetaobject_method(&_0, &_1));
}

PHP_METHOD(Qt_Core_QMetaObject_QMetaObject, enumerator)
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
	RETURN_LONG(phpqt_qmetaobject_enumerator(&_0, &_1));
}

PHP_METHOD(Qt_Core_QMetaObject_QMetaObject, property)
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
	RETURN_LONG(phpqt_qmetaobject_property(&_0, &_1));
}

PHP_METHOD(Qt_Core_QMetaObject_QMetaObject, classInfo)
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
	RETURN_LONG(phpqt_qmetaobject_class_info(&_0, &_1));
}

PHP_METHOD(Qt_Core_QMetaObject_QMetaObject, userProperty)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qmetaobject_user_property(&_0));
}

PHP_METHOD(Qt_Core_QMetaObject_QMetaObject, checkConnectArgs)
{
	zend_long r = 0;
	zval *signal = NULL, signal_sub, *method = NULL, method_sub;

	ZVAL_UNDEF(&signal_sub);
	ZVAL_UNDEF(&method_sub);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_ZVAL(signal)
		Z_PARAM_ZVAL(method)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &signal, &method);
	r = phpqt_qmetaobject_check_connect_args(signal, method);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QMetaObject_QMetaObject, checkConnectArgsQMetaMethodQMetaMethod)
{
	zval *signal_param = NULL, *method_param = NULL, _0, _1;
	zend_long signal, method, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(signal)
		Z_PARAM_LONG(method)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &signal_param, &method_param);
	ZVAL_LONG(&_0, signal);
	ZVAL_LONG(&_1, method);
	r = phpqt_qmetaobject_check_connect_args_q_meta_method_q_meta_method(&_0, &_1);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QMetaObject_QMetaObject, normalizedSignature)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *method = NULL, method_sub, result;

	ZVAL_UNDEF(&method_sub);
	ZVAL_UNDEF(&result);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_ZVAL(method)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &method);
	ZEPHIR_INIT_VAR(&result);
	phpqt_qmetaobject_normalized_signature(&result, method);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QMetaObject_QMetaObject, normalizedType)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *type = NULL, type_sub, result;

	ZVAL_UNDEF(&type_sub);
	ZVAL_UNDEF(&result);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_ZVAL(type)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &type);
	ZEPHIR_INIT_VAR(&result);
	phpqt_qmetaobject_normalized_type(&result, type);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QMetaObject_QMetaObject, connect)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *sender_param = NULL, *signal_index_param = NULL, *receiver_param = NULL, *method_index_param = NULL, *type_param = NULL, *types = NULL, types_sub, __$null, result, _0, _1, _2, _3, _4;
	zend_long sender, signal_index, receiver, method_index, type;

	ZVAL_UNDEF(&types_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(4, 6)
		Z_PARAM_LONG(sender)
		Z_PARAM_LONG(signal_index)
		Z_PARAM_LONG(receiver)
		Z_PARAM_LONG(method_index)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(type)
		Z_PARAM_ZVAL_OR_NULL(types)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 4, 2, &sender_param, &signal_index_param, &receiver_param, &method_index_param, &type_param, &types);
	if (!type_param) {
		type = 0;
	} else {
		}
	if (!types) {
		types = &types_sub;
		types = &__$null;
	}
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, sender);
	ZVAL_LONG(&_1, signal_index);
	ZVAL_LONG(&_2, receiver);
	ZVAL_LONG(&_3, method_index);
	ZVAL_LONG(&_4, type);
	phpqt_qmetaobject_connect(&result, &_0, &_1, &_2, &_3, &_4, types);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QMetaObject_QMetaObject, disconnect)
{
	zval *sender_param = NULL, *signal_index_param = NULL, *receiver_param = NULL, *method_index_param = NULL, _0, _1, _2, _3;
	zend_long sender, signal_index, receiver, method_index, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(sender)
		Z_PARAM_LONG(signal_index)
		Z_PARAM_LONG(receiver)
		Z_PARAM_LONG(method_index)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 0, &sender_param, &signal_index_param, &receiver_param, &method_index_param);
	ZVAL_LONG(&_0, sender);
	ZVAL_LONG(&_1, signal_index);
	ZVAL_LONG(&_2, receiver);
	ZVAL_LONG(&_3, method_index);
	r = phpqt_qmetaobject_disconnect(&_0, &_1, &_2, &_3);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QMetaObject_QMetaObject, disconnectOne)
{
	zval *sender_param = NULL, *signal_index_param = NULL, *receiver_param = NULL, *method_index_param = NULL, _0, _1, _2, _3;
	zend_long sender, signal_index, receiver, method_index, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(sender)
		Z_PARAM_LONG(signal_index)
		Z_PARAM_LONG(receiver)
		Z_PARAM_LONG(method_index)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 0, &sender_param, &signal_index_param, &receiver_param, &method_index_param);
	ZVAL_LONG(&_0, sender);
	ZVAL_LONG(&_1, signal_index);
	ZVAL_LONG(&_2, receiver);
	ZVAL_LONG(&_3, method_index);
	r = phpqt_qmetaobject_disconnect_one(&_0, &_1, &_2, &_3);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QMetaObject_QMetaObject, connectSlotsByName)
{
	zval *o_param = NULL, _0;
	zend_long o;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(o)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &o_param);
	ZVAL_LONG(&_0, o);
	phpqt_qmetaobject_connect_slots_by_name(&_0);
}

PHP_METHOD(Qt_Core_QMetaObject_QMetaObject, invokeMethod)
{
	zval *obj_param = NULL, *member = NULL, member_sub, *arg2_param = NULL, *ret_param = NULL, *val0 = NULL, val0_sub, *val1 = NULL, val1_sub, *val2 = NULL, val2_sub, *val3 = NULL, val3_sub, *val4 = NULL, val4_sub, *val5 = NULL, val5_sub, *val6 = NULL, val6_sub, *val7 = NULL, val7_sub, *val8 = NULL, val8_sub, *val9 = NULL, val9_sub, __$null, _0, _1, _2;
	zend_long obj, arg2, ret, r = 0;

	ZVAL_UNDEF(&member_sub);
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
	ZEND_PARSE_PARAMETERS_START(4, 14)
		Z_PARAM_LONG(obj)
		Z_PARAM_ZVAL(member)
		Z_PARAM_LONG(arg2)
		Z_PARAM_LONG(ret)
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
	zephir_fetch_params_without_memory_grow(4, 10, &obj_param, &member, &arg2_param, &ret_param, &val0, &val1, &val2, &val3, &val4, &val5, &val6, &val7, &val8, &val9);
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
	ZVAL_LONG(&_0, obj);
	ZVAL_LONG(&_1, arg2);
	ZVAL_LONG(&_2, ret);
	r = phpqt_qmetaobject_invoke_method(&_0, member, &_1, &_2, val0, val1, val2, val3, val4, val5, val6, val7, val8, val9);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QMetaObject_QMetaObject, invokeMethodQObjectCharQGenericReturnArgumentQGenericArgumentQGenericArgumentQGenericArgumentQGenericArgumentQGenericArgumentQGenericArgumentQGenericArgumentQGenericArgumentQGenericArgumentQGenericArgument)
{
	zval *obj_param = NULL, *member = NULL, member_sub, *ret_param = NULL, *val0 = NULL, val0_sub, *val1 = NULL, val1_sub, *val2 = NULL, val2_sub, *val3 = NULL, val3_sub, *val4 = NULL, val4_sub, *val5 = NULL, val5_sub, *val6 = NULL, val6_sub, *val7 = NULL, val7_sub, *val8 = NULL, val8_sub, *val9 = NULL, val9_sub, __$null, _0, _1;
	zend_long obj, ret, r = 0;

	ZVAL_UNDEF(&member_sub);
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
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(3, 13)
		Z_PARAM_LONG(obj)
		Z_PARAM_ZVAL(member)
		Z_PARAM_LONG(ret)
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
	zephir_fetch_params_without_memory_grow(3, 10, &obj_param, &member, &ret_param, &val0, &val1, &val2, &val3, &val4, &val5, &val6, &val7, &val8, &val9);
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
	ZVAL_LONG(&_0, obj);
	ZVAL_LONG(&_1, ret);
	r = phpqt_qmetaobject_invoke_method_q_object_char_q_generic_return_argument_q_generic_argument_q_generic_argument_q_generic_argument_q_generic_argument_q_generic_argument_q_generic_argument_q_generic_argument_q_generic_argument_q_generic_argument_q_generic_argument(&_0, member, &_1, val0, val1, val2, val3, val4, val5, val6, val7, val8, val9);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QMetaObject_QMetaObject, invokeMethodQObjectCharQtConnectionTypeQGenericArgumentQGenericArgumentQGenericArgumentQGenericArgumentQGenericArgumentQGenericArgumentQGenericArgumentQGenericArgumentQGenericArgumentQGenericArgument)
{
	zval *obj_param = NULL, *member = NULL, member_sub, *type_param = NULL, *val0_param = NULL, *val1 = NULL, val1_sub, *val2 = NULL, val2_sub, *val3 = NULL, val3_sub, *val4 = NULL, val4_sub, *val5 = NULL, val5_sub, *val6 = NULL, val6_sub, *val7 = NULL, val7_sub, *val8 = NULL, val8_sub, *val9 = NULL, val9_sub, __$null, _0, _1, _2;
	zend_long obj, type, val0, r = 0;

	ZVAL_UNDEF(&member_sub);
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
	ZEND_PARSE_PARAMETERS_START(4, 13)
		Z_PARAM_LONG(obj)
		Z_PARAM_ZVAL(member)
		Z_PARAM_LONG(type)
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
	zephir_fetch_params_without_memory_grow(4, 9, &obj_param, &member, &type_param, &val0_param, &val1, &val2, &val3, &val4, &val5, &val6, &val7, &val8, &val9);
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
	ZVAL_LONG(&_0, obj);
	ZVAL_LONG(&_1, type);
	ZVAL_LONG(&_2, val0);
	r = phpqt_qmetaobject_invoke_method_q_object_char_qt_connection_type_q_generic_argument_q_generic_argument_q_generic_argument_q_generic_argument_q_generic_argument_q_generic_argument_q_generic_argument_q_generic_argument_q_generic_argument_q_generic_argument(&_0, member, &_1, &_2, val1, val2, val3, val4, val5, val6, val7, val8, val9);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QMetaObject_QMetaObject, invokeMethodQObjectCharQGenericArgumentQGenericArgumentQGenericArgumentQGenericArgumentQGenericArgumentQGenericArgumentQGenericArgumentQGenericArgumentQGenericArgumentQGenericArgument)
{
	zval *obj_param = NULL, *member = NULL, member_sub, *val0_param = NULL, *val1 = NULL, val1_sub, *val2 = NULL, val2_sub, *val3 = NULL, val3_sub, *val4 = NULL, val4_sub, *val5 = NULL, val5_sub, *val6 = NULL, val6_sub, *val7 = NULL, val7_sub, *val8 = NULL, val8_sub, *val9 = NULL, val9_sub, __$null, _0, _1;
	zend_long obj, val0, r = 0;

	ZVAL_UNDEF(&member_sub);
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
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(3, 12)
		Z_PARAM_LONG(obj)
		Z_PARAM_ZVAL(member)
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
	zephir_fetch_params_without_memory_grow(3, 9, &obj_param, &member, &val0_param, &val1, &val2, &val3, &val4, &val5, &val6, &val7, &val8, &val9);
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
	ZVAL_LONG(&_0, obj);
	ZVAL_LONG(&_1, val0);
	r = phpqt_qmetaobject_invoke_method_q_object_char_q_generic_argument_q_generic_argument_q_generic_argument_q_generic_argument_q_generic_argument_q_generic_argument_q_generic_argument_q_generic_argument_q_generic_argument_q_generic_argument(&_0, member, &_1, val1, val2, val3, val4, val5, val6, val7, val8, val9);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QMetaObject_QMetaObject, newInstance)
{
	zval *handle_param = NULL, *val0_param = NULL, *val1 = NULL, val1_sub, *val2 = NULL, val2_sub, *val3 = NULL, val3_sub, *val4 = NULL, val4_sub, *val5 = NULL, val5_sub, *val6 = NULL, val6_sub, *val7 = NULL, val7_sub, *val8 = NULL, val8_sub, *val9 = NULL, val9_sub, __$null, _0, _1;
	zend_long handle, val0;

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
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(2, 11)
		Z_PARAM_LONG(handle)
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
	zephir_fetch_params_without_memory_grow(2, 9, &handle_param, &val0_param, &val1, &val2, &val3, &val4, &val5, &val6, &val7, &val8, &val9);
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
	ZVAL_LONG(&_1, val0);
	RETURN_LONG(phpqt_qmetaobject_new_instance(&_0, &_1, val1, val2, val3, val4, val5, val6, val7, val8, val9));
}

PHP_METHOD(Qt_Core_QMetaObject_QMetaObject, d)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qmetaobject_d(&_0));
}

PHP_METHOD(Qt_Core_QMetaObject_QMetaObject, setD)
{
	zval *handle_param = NULL, *value_param = NULL, _0, _1;
	zend_long handle, value;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(value)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &value_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, value);
	phpqt_qmetaobject_set_d(&_0, &_1);
}

