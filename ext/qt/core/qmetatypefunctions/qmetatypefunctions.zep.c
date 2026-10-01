
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
#include "src/core-qmetatypefunctions.h"
#include "kernel/operators.h"
#include "kernel/memory.h"
#include "kernel/object.h"


ZEPHIR_INIT_CLASS(Qt_Core_QMetatypeFunctions_QMetatypeFunctions)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Core\\QMetatypeFunctions, QMetatypeFunctions, qt, core_qmetatypefunctions_qmetatypefunctions, qt_core_qmetatypefunctions_qmetatypefunctions_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Core_QMetatypeFunctions_QMetatypeFunctions, qRegisterMetaType)
{
	zval *meta_param = NULL, _0;
	zend_long meta;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(meta)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &meta_param);
	ZVAL_LONG(&_0, meta);
	RETURN_LONG(phpqt_qmetatypefunctions_q_register_meta_type(&_0));
}

PHP_METHOD(Qt_Core_QMetatypeFunctions_QMetatypeFunctions, qHash)
{
	zval *type_param = NULL, *seed_param = NULL, _0, _1;
	zend_long type, seed;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_LONG(type)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(seed)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 1, &type_param, &seed_param);
	if (!seed_param) {
		seed = 0;
	} else {
		}
	ZVAL_LONG(&_0, type);
	ZVAL_LONG(&_1, seed);
	RETURN_LONG(phpqt_qmetatypefunctions_q_hash(&_0, &_1));
}

PHP_METHOD(Qt_Core_QMetatypeFunctions_QMetatypeFunctions, qRegisterNormalizedMetaType_QPairVariantInterfaceImpl)
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
	RETURN_MM_LONG(phpqt_qmetatypefunctions_q_register_normalized_meta_type__q_pair_variant_interface_impl(&arg0));
}

PHP_METHOD(Qt_Core_QMetatypeFunctions_QMetatypeFunctions, comparesEqual)
{
	zval *lhs_param = NULL, *rhs_param = NULL, _0, _1;
	zend_long lhs, rhs, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(lhs)
		Z_PARAM_LONG(rhs)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &lhs_param, &rhs_param);
	ZVAL_LONG(&_0, lhs);
	ZVAL_LONG(&_1, rhs);
	r = phpqt_qmetatypefunctions_compares_equal(&_0, &_1);
	RETURN_BOOL(r == 1);
}

