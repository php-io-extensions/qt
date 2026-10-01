
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
#include "src/core-qhashseed.h"
#include "kernel/operators.h"
#include "kernel/memory.h"
#include "kernel/object.h"


ZEPHIR_INIT_CLASS(Qt_Core_QHashSeed_QHashSeed)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Core\\QHashSeed, QHashSeed, qt, core_qhashseed_qhashseed, qt_core_qhashseed_qhashseed_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Core_QHashSeed_QHashSeed, new_)
{
	zval *d_param = NULL, _0;
	zend_long d;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(0, 1)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(d)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(0, 1, &d_param);
	if (!d_param) {
		d = 0;
	} else {
		}
	ZVAL_LONG(&_0, d);
	RETURN_LONG(phpqt_qhashseed_new(&_0));
}

PHP_METHOD(Qt_Core_QHashSeed_QHashSeed, globalSeed)
{

	RETURN_LONG(phpqt_qhashseed_global_seed());
}

PHP_METHOD(Qt_Core_QHashSeed_QHashSeed, setDeterministicGlobalSeed)
{

	phpqt_qhashseed_set_deterministic_global_seed();
}

PHP_METHOD(Qt_Core_QHashSeed_QHashSeed, resetRandomGlobalSeed)
{

	phpqt_qhashseed_reset_random_global_seed();
}

