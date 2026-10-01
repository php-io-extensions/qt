
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
#include "src/core-qttranslationfunctions.h"
#include "kernel/string.h"
#include "kernel/memory.h"
#include "kernel/operators.h"
#include "kernel/object.h"


ZEPHIR_INIT_CLASS(Qt_Core_QTtranslationFunctions_QTtranslationFunctions)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Core\\QTtranslationFunctions, QTtranslationFunctions, qt, core_qttranslationfunctions_qttranslationfunctions, qt_core_qttranslationfunctions_qttranslationfunctions_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Core_QTtranslationFunctions_QTtranslationFunctions, qtTrId)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long n;
	zval *id = NULL, id_sub, *n_param = NULL, result, _0;

	ZVAL_UNDEF(&id_sub);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_ZVAL(id)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(n)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 1, &id, &n_param);
	if (!n_param) {
		n = -1;
	} else {
		}
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, n);
	phpqt_qttranslationfunctions_qt_tr_id(&result, id, &_0);
	RETURN_CCTOR(&result);
}

