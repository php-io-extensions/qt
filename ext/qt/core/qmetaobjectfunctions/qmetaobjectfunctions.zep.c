
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
#include "src/core-qmetaobjectfunctions.h"
#include "kernel/operators.h"
#include "kernel/memory.h"
#include "kernel/object.h"


ZEPHIR_INIT_CLASS(Qt_Core_QMetaobjectFunctions_QMetaobjectFunctions)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Core\\QMetaobjectFunctions, QMetaobjectFunctions, qt, core_qmetaobjectfunctions_qmetaobjectfunctions, qt_core_qmetaobjectfunctions_qmetaobjectfunctions_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Core_QMetaobjectFunctions_QMetaobjectFunctions, comparesEqual)
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
	r = phpqt_qmetaobjectfunctions_compares_equal(&_0, &_1);
	RETURN_BOOL(r == 1);
}

