
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
#include "src/widgets-qstyleoptiongraphicsitem.h"
#include "kernel/memory.h"
#include "kernel/operators.h"
#include "kernel/object.h"


ZEPHIR_INIT_CLASS(Qt_Widgets_QStyleOptionGraphicsItem_QStyleOptionGraphicsItem)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Widgets\\QStyleOptionGraphicsItem, QStyleOptionGraphicsItem, qt, widgets_qstyleoptiongraphicsitem_qstyleoptiongraphicsitem, qt_widgets_qstyleoptiongraphicsitem_qstyleoptiongraphicsitem_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Widgets_QStyleOptionGraphicsItem_QStyleOptionGraphicsItem, exposedRect)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, result, _0;
	zend_long handle;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &handle_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	phpqt_qstyleoptiongraphicsitem_exposed_rect(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Widgets_QStyleOptionGraphicsItem_QStyleOptionGraphicsItem, setExposedRect)
{
	double valueX, valueY, valueWidth, valueHeight;
	zval *handle_param = NULL, *valueX_param = NULL, *valueY_param = NULL, *valueWidth_param = NULL, *valueHeight_param = NULL, _0, _1, _2, _3, _4;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZEND_PARSE_PARAMETERS_START(5, 5)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(valueX)
		Z_PARAM_ZVAL(valueY)
		Z_PARAM_ZVAL(valueWidth)
		Z_PARAM_ZVAL(valueHeight)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(5, 0, &handle_param, &valueX_param, &valueY_param, &valueWidth_param, &valueHeight_param);
	valueX = zephir_get_doubleval(valueX_param);
	valueY = zephir_get_doubleval(valueY_param);
	valueWidth = zephir_get_doubleval(valueWidth_param);
	valueHeight = zephir_get_doubleval(valueHeight_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, valueX);
	ZVAL_DOUBLE(&_2, valueY);
	ZVAL_DOUBLE(&_3, valueWidth);
	ZVAL_DOUBLE(&_4, valueHeight);
	phpqt_qstyleoptiongraphicsitem_set_exposed_rect(&_0, &_1, &_2, &_3, &_4);
}

PHP_METHOD(Qt_Widgets_QStyleOptionGraphicsItem_QStyleOptionGraphicsItem, new_)
{

	RETURN_LONG(phpqt_qstyleoptiongraphicsitem_new());
}

PHP_METHOD(Qt_Widgets_QStyleOptionGraphicsItem_QStyleOptionGraphicsItem, newQStyleOptionGraphicsItem)
{
	zval *other_param = NULL, _0;
	zend_long other;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(other)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &other_param);
	ZVAL_LONG(&_0, other);
	RETURN_LONG(phpqt_qstyleoptiongraphicsitem_new_q_style_option_graphics_item(&_0));
}

PHP_METHOD(Qt_Widgets_QStyleOptionGraphicsItem_QStyleOptionGraphicsItem, levelOfDetailFromTransform)
{
	zval *worldTransform_param = NULL, _0;
	zend_long worldTransform;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(worldTransform)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &worldTransform_param);
	ZVAL_LONG(&_0, worldTransform);
	RETURN_DOUBLE(phpqt_qstyleoptiongraphicsitem_level_of_detail_from_transform(&_0));
}

