
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
#include "src/core-qabstractitemmodelfunctions.h"
#include "kernel/operators.h"
#include "kernel/memory.h"
#include "kernel/object.h"


ZEPHIR_INIT_CLASS(Qt_Core_QAbstractitemmodelFunctions_QAbstractitemmodelFunctions)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Core\\QAbstractitemmodelFunctions, QAbstractitemmodelFunctions, qt, core_qabstractitemmodelfunctions_qabstractitemmodelfunctions, qt_core_qabstractitemmodelfunctions_qabstractitemmodelfunctions_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Core_QAbstractitemmodelFunctions_QAbstractitemmodelFunctions, qHash)
{
	zval *index_param = NULL, *seed_param = NULL, _0, _1;
	zend_long index, seed;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_LONG(index)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(seed)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 1, &index_param, &seed_param);
	if (!seed_param) {
		seed = 0;
	} else {
		}
	ZVAL_LONG(&_0, index);
	ZVAL_LONG(&_1, seed);
	RETURN_LONG(phpqt_qabstractitemmodelfunctions_q_hash(&_0, &_1));
}

PHP_METHOD(Qt_Core_QAbstractitemmodelFunctions_QAbstractitemmodelFunctions, swap)
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
	phpqt_qabstractitemmodelfunctions_swap(&_0, &_1);
}

PHP_METHOD(Qt_Core_QAbstractitemmodelFunctions_QAbstractitemmodelFunctions, qHashQModelIndexSizeT)
{
	zval *index_param = NULL, *seed_param = NULL, _0, _1;
	zend_long index, seed;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_LONG(index)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(seed)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 1, &index_param, &seed_param);
	if (!seed_param) {
		seed = 0;
	} else {
		}
	ZVAL_LONG(&_0, index);
	ZVAL_LONG(&_1, seed);
	RETURN_LONG(phpqt_qabstractitemmodelfunctions_q_hash_q_model_index_size_t(&_0, &_1));
}

PHP_METHOD(Qt_Core_QAbstractitemmodelFunctions_QAbstractitemmodelFunctions, qRegisterNormalizedMetaType_QModelIndexList)
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
	RETURN_MM_LONG(phpqt_qabstractitemmodelfunctions_q_register_normalized_meta_type__q_model_index_list(&arg0));
}

PHP_METHOD(Qt_Core_QAbstractitemmodelFunctions_QAbstractitemmodelFunctions, compareThreeWay)
{
	zval *lhs_param = NULL, *rhs_param = NULL, _0, _1;
	zend_long lhs, rhs;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(lhs)
		Z_PARAM_LONG(rhs)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &lhs_param, &rhs_param);
	ZVAL_LONG(&_0, lhs);
	ZVAL_LONG(&_1, rhs);
	RETURN_LONG(phpqt_qabstractitemmodelfunctions_compare_three_way(&_0, &_1));
}

PHP_METHOD(Qt_Core_QAbstractitemmodelFunctions_QAbstractitemmodelFunctions, comparesEqual)
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
	r = phpqt_qabstractitemmodelfunctions_compares_equal(&_0, &_1);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QAbstractitemmodelFunctions_QAbstractitemmodelFunctions, compareThreeWayQPersistentModelIndexQModelIndex)
{
	zval *lhs_param = NULL, *rhs_param = NULL, _0, _1;
	zend_long lhs, rhs;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(lhs)
		Z_PARAM_LONG(rhs)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &lhs_param, &rhs_param);
	ZVAL_LONG(&_0, lhs);
	ZVAL_LONG(&_1, rhs);
	RETURN_LONG(phpqt_qabstractitemmodelfunctions_compare_three_way_q_persistent_model_index_q_model_index(&_0, &_1));
}

PHP_METHOD(Qt_Core_QAbstractitemmodelFunctions_QAbstractitemmodelFunctions, compareThreeWayQPersistentModelIndexQPersistentModelIndex)
{
	zval *lhs_param = NULL, *rhs_param = NULL, _0, _1;
	zend_long lhs, rhs;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(lhs)
		Z_PARAM_LONG(rhs)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &lhs_param, &rhs_param);
	ZVAL_LONG(&_0, lhs);
	ZVAL_LONG(&_1, rhs);
	RETURN_LONG(phpqt_qabstractitemmodelfunctions_compare_three_way_q_persistent_model_index_q_persistent_model_index(&_0, &_1));
}

PHP_METHOD(Qt_Core_QAbstractitemmodelFunctions_QAbstractitemmodelFunctions, comparesEqualQPersistentModelIndexQModelIndex)
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
	r = phpqt_qabstractitemmodelfunctions_compares_equal_q_persistent_model_index_q_model_index(&_0, &_1);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QAbstractitemmodelFunctions_QAbstractitemmodelFunctions, comparesEqualQPersistentModelIndexQPersistentModelIndex)
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
	r = phpqt_qabstractitemmodelfunctions_compares_equal_q_persistent_model_index_q_persistent_model_index(&_0, &_1);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QAbstractitemmodelFunctions_QAbstractitemmodelFunctions, qHashEquals)
{
	zval *a_param = NULL, *b_param = NULL, _0, _1;
	zend_long a, b, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(a)
		Z_PARAM_LONG(b)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &a_param, &b_param);
	ZVAL_LONG(&_0, a);
	ZVAL_LONG(&_1, b);
	r = phpqt_qabstractitemmodelfunctions_q_hash_equals(&_0, &_1);
	RETURN_BOOL(r == 1);
}

