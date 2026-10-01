
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
#include "src/core-qdebugfunctions.h"
#include "kernel/operators.h"
#include "kernel/memory.h"
#include "kernel/object.h"


ZEPHIR_INIT_CLASS(Qt_Core_QDebugFunctions_QDebugFunctions)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Core\\QDebugFunctions, QDebugFunctions, qt, core_qdebugfunctions_qdebugfunctions, qt_core_qdebugfunctions_qdebugfunctions_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Core_QDebugFunctions_QDebugFunctions, swap)
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
	phpqt_qdebugfunctions_swap(&_0, &_1);
}

PHP_METHOD(Qt_Core_QDebugFunctions_QDebugFunctions, qt_QMetaEnum_flagDebugOperator)
{
	zval *debug_param = NULL, *sizeofT_param = NULL, *value_param = NULL, _0, _1, _2;
	zend_long debug, sizeofT, value;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(debug)
		Z_PARAM_LONG(sizeofT)
		Z_PARAM_LONG(value)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &debug_param, &sizeofT_param, &value_param);
	ZVAL_LONG(&_0, debug);
	ZVAL_LONG(&_1, sizeofT);
	ZVAL_LONG(&_2, value);
	phpqt_qdebugfunctions_qt__q_meta_enum_flag_debug_operator(&_0, &_1, &_2);
}

PHP_METHOD(Qt_Core_QDebugFunctions_QDebugFunctions, qt_QMetaEnum_debugOperator)
{
	zval *arg0_param = NULL, *value_param = NULL, *meta_param = NULL, *name = NULL, name_sub, _0, _1, _2;
	zend_long arg0, value, meta;

	ZVAL_UNDEF(&name_sub);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(arg0)
		Z_PARAM_LONG(value)
		Z_PARAM_LONG(meta)
		Z_PARAM_ZVAL(name)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 0, &arg0_param, &value_param, &meta_param, &name);
	ZVAL_LONG(&_0, arg0);
	ZVAL_LONG(&_1, value);
	ZVAL_LONG(&_2, meta);
	RETURN_LONG(phpqt_qdebugfunctions_qt__q_meta_enum_debug_operator(&_0, &_1, &_2, name));
}

PHP_METHOD(Qt_Core_QDebugFunctions_QDebugFunctions, qt_QMetaEnum_flagDebugOperatorQDebugQuint64QMetaObjectChar)
{
	zval *dbg_param = NULL, *value_param = NULL, *meta_param = NULL, *name = NULL, name_sub, _0, _1, _2;
	zend_long dbg, value, meta;

	ZVAL_UNDEF(&name_sub);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(dbg)
		Z_PARAM_LONG(value)
		Z_PARAM_LONG(meta)
		Z_PARAM_ZVAL(name)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 0, &dbg_param, &value_param, &meta_param, &name);
	ZVAL_LONG(&_0, dbg);
	ZVAL_LONG(&_1, value);
	ZVAL_LONG(&_2, meta);
	RETURN_LONG(phpqt_qdebugfunctions_qt__q_meta_enum_flag_debug_operator_q_debug_quint64_q_meta_object_char(&_0, &_1, &_2, name));
}

