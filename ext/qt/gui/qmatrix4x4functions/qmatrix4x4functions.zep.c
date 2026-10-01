
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
#include "src/gui-qmatrix4x4functions.h"
#include "kernel/operators.h"
#include "kernel/memory.h"
#include "kernel/object.h"


ZEPHIR_INIT_CLASS(Qt_Gui_QMatrix4x4Functions_QMatrix4x4Functions)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Gui\\QMatrix4x4Functions, QMatrix4x4Functions, qt, gui_qmatrix4x4functions_qmatrix4x4functions, qt_gui_qmatrix4x4functions_qmatrix4x4functions_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Gui_QMatrix4x4Functions_QMatrix4x4Functions, qFuzzyCompare)
{
	zval *m1_param = NULL, *m2_param = NULL, _0, _1;
	zend_long m1, m2, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(m1)
		Z_PARAM_LONG(m2)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &m1_param, &m2_param);
	ZVAL_LONG(&_0, m1);
	ZVAL_LONG(&_1, m2);
	r = phpqt_qmatrix4x4functions_q_fuzzy_compare(&_0, &_1);
	RETURN_BOOL(r == 1);
}

