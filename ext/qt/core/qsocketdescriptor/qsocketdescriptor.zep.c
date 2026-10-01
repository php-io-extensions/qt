
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
#include "src/core-qsocketdescriptor.h"
#include "kernel/memory.h"
#include "kernel/object.h"
#include "kernel/operators.h"


ZEPHIR_INIT_CLASS(Qt_Core_QSocketDescriptor_QSocketDescriptor)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Core\\QSocketDescriptor, QSocketDescriptor, qt, core_qsocketdescriptor_qsocketdescriptor, qt_core_qsocketdescriptor_qsocketdescriptor_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Core_QSocketDescriptor_QSocketDescriptor, new_)
{
	zval *descriptor = NULL, descriptor_sub, __$null;

	ZVAL_UNDEF(&descriptor_sub);
	ZVAL_NULL(&__$null);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(0, 1)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(descriptor)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(0, 1, &descriptor);
	if (!descriptor) {
		descriptor = &descriptor_sub;
		descriptor = &__$null;
	}
	RETURN_LONG(phpqt_qsocketdescriptor_new(descriptor));
}

PHP_METHOD(Qt_Core_QSocketDescriptor_QSocketDescriptor, isValid)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qsocketdescriptor_is_valid(&_0);
	RETURN_BOOL(r == 1);
}

