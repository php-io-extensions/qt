
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
#include "src/gui-qpointingdevicefunctions.h"
#include "kernel/operators.h"
#include "kernel/memory.h"
#include "kernel/object.h"


ZEPHIR_INIT_CLASS(Qt_Gui_QPointingdeviceFunctions_QPointingdeviceFunctions)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Gui\\QPointingdeviceFunctions, QPointingdeviceFunctions, qt, gui_qpointingdevicefunctions_qpointingdevicefunctions, qt_gui_qpointingdevicefunctions_qpointingdevicefunctions_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Gui_QPointingdeviceFunctions_QPointingdeviceFunctions, qHash)
{
	zval *key_param = NULL, *seed_param = NULL, _0, _1;
	zend_long key, seed;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_LONG(key)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(seed)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 1, &key_param, &seed_param);
	if (!seed_param) {
		seed = 0;
	} else {
		}
	ZVAL_LONG(&_0, key);
	ZVAL_LONG(&_1, seed);
	RETURN_LONG(phpqt_qpointingdevicefunctions_q_hash(&_0, &_1));
}

