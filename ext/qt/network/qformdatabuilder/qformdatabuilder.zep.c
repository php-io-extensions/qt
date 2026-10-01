
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
#include "src/network-qformdatabuilder.h"
#include "kernel/object.h"
#include "kernel/operators.h"
#include "kernel/memory.h"


ZEPHIR_INIT_CLASS(Qt_Network_QFormDataBuilder_QFormDataBuilder)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Network\\QFormDataBuilder, QFormDataBuilder, qt, network_qformdatabuilder_qformdatabuilder, qt_network_qformdatabuilder_qformdatabuilder_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Network_QFormDataBuilder_QFormDataBuilder, new_)
{

	RETURN_LONG(phpqt_qformdatabuilder_new());
}

PHP_METHOD(Qt_Network_QFormDataBuilder_QFormDataBuilder, swap)
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
	phpqt_qformdatabuilder_swap(&_0, &_1);
}

PHP_METHOD(Qt_Network_QFormDataBuilder_QFormDataBuilder, part)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval name;
	zval *handle_param = NULL, *name_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&name);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(name)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &name_param);
	zephir_get_strval(&name, name_param);
	ZVAL_LONG(&_0, handle);
	RETURN_MM_LONG(phpqt_qformdatabuilder_part(&_0, &name));
}

