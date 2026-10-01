
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
#include "src/gui-qquaternionfunctions.h"
#include "kernel/operators.h"
#include "kernel/memory.h"
#include "kernel/object.h"


ZEPHIR_INIT_CLASS(Qt_Gui_QQuaternionFunctions_QQuaternionFunctions)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Gui\\QQuaternionFunctions, QQuaternionFunctions, qt, gui_qquaternionfunctions_qquaternionfunctions, qt_gui_qquaternionfunctions_qquaternionfunctions_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Gui_QQuaternionFunctions_QQuaternionFunctions, qFuzzyCompare)
{
	zval *q1_param = NULL, *q2_param = NULL, _0, _1;
	zend_long q1, q2, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(q1)
		Z_PARAM_LONG(q2)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &q1_param, &q2_param);
	ZVAL_LONG(&_0, q1);
	ZVAL_LONG(&_1, q2);
	r = phpqt_qquaternionfunctions_q_fuzzy_compare(&_0, &_1);
	RETURN_BOOL(r == 1);
}

