
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
#include "src/core-qobjectfunctions.h"
#include "kernel/operators.h"
#include "kernel/memory.h"
#include "kernel/object.h"


ZEPHIR_INIT_CLASS(Qt_Core_QObjectFunctions_QObjectFunctions)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Core\\QObjectFunctions, QObjectFunctions, qt, core_qobjectfunctions_qobjectfunctions, qt_core_qobjectfunctions_qobjectfunctions_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Core_QObjectFunctions_QObjectFunctions, qt_qFindChild_helper)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval name;
	zval *parent__param = NULL, *name_param = NULL, *mo_param = NULL, *options_param = NULL, _0, _1, _2;
	zend_long parent_, mo, options;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&name);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(parent_)
		Z_PARAM_STR(name)
		Z_PARAM_LONG(mo)
		Z_PARAM_LONG(options)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 4, 0, &parent__param, &name_param, &mo_param, &options_param);
	zephir_get_strval(&name, name_param);
	ZVAL_LONG(&_0, parent_);
	ZVAL_LONG(&_1, mo);
	ZVAL_LONG(&_2, options);
	RETURN_MM_LONG(phpqt_qobjectfunctions_qt_q_find_child_helper(&_0, &name, &_1, &_2));
}

PHP_METHOD(Qt_Core_QObjectFunctions_QObjectFunctions, qGetBindingStorage)
{
	zval *o_param = NULL, _0;
	zend_long o;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(o)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &o_param);
	ZVAL_LONG(&_0, o);
	RETURN_LONG(phpqt_qobjectfunctions_q_get_binding_storage(&_0));
}

