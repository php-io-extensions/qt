
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
#include "src/widgets-qgraphicsitemfunctions.h"
#include "kernel/operators.h"
#include "kernel/memory.h"
#include "kernel/object.h"


ZEPHIR_INIT_CLASS(Qt_Widgets_QGraphicsitemFunctions_QGraphicsitemFunctions)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Widgets\\QGraphicsitemFunctions, QGraphicsitemFunctions, qt, widgets_qgraphicsitemfunctions_qgraphicsitemfunctions, qt_widgets_qgraphicsitemfunctions_qgraphicsitemfunctions_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Widgets_QGraphicsitemFunctions_QGraphicsitemFunctions, qRegisterNormalizedMetaType_QGraphicsItem_ptr)
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
	RETURN_MM_LONG(phpqt_qgraphicsitemfunctions_q_register_normalized_meta_type__q_graphics_item_ptr(&arg0));
}

PHP_METHOD(Qt_Widgets_QGraphicsitemFunctions_QGraphicsitemFunctions, qt_closestItemFirst)
{
	zval *arg0_param = NULL, *arg1_param = NULL, _0, _1;
	zend_long arg0, arg1, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(arg0)
		Z_PARAM_LONG(arg1)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &arg0_param, &arg1_param);
	ZVAL_LONG(&_0, arg0);
	ZVAL_LONG(&_1, arg1);
	r = phpqt_qgraphicsitemfunctions_qt_closest_item_first(&_0, &_1);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Widgets_QGraphicsitemFunctions_QGraphicsitemFunctions, qt_closestLeaf)
{
	zval *arg0_param = NULL, *arg1_param = NULL, _0, _1;
	zend_long arg0, arg1, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(arg0)
		Z_PARAM_LONG(arg1)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &arg0_param, &arg1_param);
	ZVAL_LONG(&_0, arg0);
	ZVAL_LONG(&_1, arg1);
	r = phpqt_qgraphicsitemfunctions_qt_closest_leaf(&_0, &_1);
	RETURN_BOOL(r == 1);
}

