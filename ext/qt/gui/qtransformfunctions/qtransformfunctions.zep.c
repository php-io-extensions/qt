
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
#include "src/gui-qtransformfunctions.h"
#include "kernel/operators.h"
#include "kernel/memory.h"
#include "kernel/object.h"


ZEPHIR_INIT_CLASS(Qt_Gui_QTransformFunctions_QTransformFunctions)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Gui\\QTransformFunctions, QTransformFunctions, qt, gui_qtransformfunctions_qtransformfunctions, qt_gui_qtransformfunctions_qtransformfunctions_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Gui_QTransformFunctions_QTransformFunctions, qHash)
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
	RETURN_LONG(phpqt_qtransformfunctions_q_hash(&_0, &_1));
}

PHP_METHOD(Qt_Gui_QTransformFunctions_QTransformFunctions, qFuzzyCompare)
{
	zval *t1_param = NULL, *t2_param = NULL, _0, _1;
	zend_long t1, t2, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(t1)
		Z_PARAM_LONG(t2)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &t1_param, &t2_param);
	ZVAL_LONG(&_0, t1);
	ZVAL_LONG(&_1, t2);
	r = phpqt_qtransformfunctions_q_fuzzy_compare(&_0, &_1);
	RETURN_BOOL(r == 1);
}

