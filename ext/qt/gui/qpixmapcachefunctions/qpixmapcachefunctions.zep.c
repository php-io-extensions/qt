
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
#include "src/gui-qpixmapcachefunctions.h"
#include "kernel/operators.h"
#include "kernel/memory.h"
#include "kernel/object.h"


ZEPHIR_INIT_CLASS(Qt_Gui_QPixmapcacheFunctions_QPixmapcacheFunctions)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Gui\\QPixmapcacheFunctions, QPixmapcacheFunctions, qt, gui_qpixmapcachefunctions_qpixmapcachefunctions, qt_gui_qpixmapcachefunctions_qpixmapcachefunctions_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Gui_QPixmapcacheFunctions_QPixmapcacheFunctions, swap)
{
	zval *value1_param = NULL, *value2_param = NULL, _0, _1;
	zend_long value1, value2;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(value1)
		Z_PARAM_LONG(value2)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &value1_param, &value2_param);
	ZVAL_LONG(&_0, value1);
	ZVAL_LONG(&_1, value2);
	phpqt_qpixmapcachefunctions_swap(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QPixmapcacheFunctions_QPixmapcacheFunctions, qHash)
{
	zval *k_param = NULL, *seed_param = NULL, _0, _1;
	zend_long k, seed;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_LONG(k)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(seed)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 1, &k_param, &seed_param);
	if (!seed_param) {
		seed = 0;
	} else {
		}
	ZVAL_LONG(&_0, k);
	ZVAL_LONG(&_1, seed);
	RETURN_LONG(phpqt_qpixmapcachefunctions_q_hash(&_0, &_1));
}

