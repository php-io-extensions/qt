
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
#include "src/gui-qvectorndfunctions.h"
#include "kernel/operators.h"
#include "kernel/memory.h"
#include "kernel/object.h"


ZEPHIR_INIT_CLASS(Qt_Gui_QVectorndFunctions_QVectorndFunctions)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Gui\\QVectorndFunctions, QVectorndFunctions, qt, gui_qvectorndfunctions_qvectorndfunctions, qt_gui_qvectorndfunctions_qvectorndfunctions_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Gui_QVectorndFunctions_QVectorndFunctions, qFuzzyCompare)
{
	zval *v1_param = NULL, *v2_param = NULL, _0, _1;
	zend_long v1, v2, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(v1)
		Z_PARAM_LONG(v2)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &v1_param, &v2_param);
	ZVAL_LONG(&_0, v1);
	ZVAL_LONG(&_1, v2);
	r = phpqt_qvectorndfunctions_q_fuzzy_compare(&_0, &_1);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Gui_QVectorndFunctions_QVectorndFunctions, qFuzzyCompareQVector3DQVector3D)
{
	zval *v1_param = NULL, *v2_param = NULL, _0, _1;
	zend_long v1, v2, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(v1)
		Z_PARAM_LONG(v2)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &v1_param, &v2_param);
	ZVAL_LONG(&_0, v1);
	ZVAL_LONG(&_1, v2);
	r = phpqt_qvectorndfunctions_q_fuzzy_compare_q_vector3_d_q_vector3_d(&_0, &_1);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Gui_QVectorndFunctions_QVectorndFunctions, qFuzzyCompareQVector4DQVector4D)
{
	zval *v1_param = NULL, *v2_param = NULL, _0, _1;
	zend_long v1, v2, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(v1)
		Z_PARAM_LONG(v2)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &v1_param, &v2_param);
	ZVAL_LONG(&_0, v1);
	ZVAL_LONG(&_1, v2);
	r = phpqt_qvectorndfunctions_q_fuzzy_compare_q_vector4_d_q_vector4_d(&_0, &_1);
	RETURN_BOOL(r == 1);
}

