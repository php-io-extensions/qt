
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
#include "src/widgets-qabstractgraphicsshapeitem.h"
#include "kernel/operators.h"
#include "kernel/memory.h"
#include "kernel/object.h"


ZEPHIR_INIT_CLASS(Qt_Widgets_QAbstractGraphicsShapeItem_QAbstractGraphicsShapeItem)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Widgets\\QAbstractGraphicsShapeItem, QAbstractGraphicsShapeItem, qt, widgets_qabstractgraphicsshapeitem_qabstractgraphicsshapeitem, qt_widgets_qabstractgraphicsshapeitem_qabstractgraphicsshapeitem_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Widgets_QAbstractGraphicsShapeItem_QAbstractGraphicsShapeItem, new_)
{
	zval *parent__param = NULL, _0;
	zend_long parent_;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(0, 1)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(parent_)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(0, 1, &parent__param);
	if (!parent__param) {
		parent_ = 0;
	} else {
		}
	ZVAL_LONG(&_0, parent_);
	RETURN_LONG(phpqt_qabstractgraphicsshapeitem_new(&_0));
}

PHP_METHOD(Qt_Widgets_QAbstractGraphicsShapeItem_QAbstractGraphicsShapeItem, pen)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qabstractgraphicsshapeitem_pen(&_0));
}

PHP_METHOD(Qt_Widgets_QAbstractGraphicsShapeItem_QAbstractGraphicsShapeItem, setPen)
{
	zval *handle_param = NULL, *pen_param = NULL, _0, _1;
	zend_long handle, pen;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(pen)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &pen_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, pen);
	phpqt_qabstractgraphicsshapeitem_set_pen(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QAbstractGraphicsShapeItem_QAbstractGraphicsShapeItem, brush)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qabstractgraphicsshapeitem_brush(&_0));
}

PHP_METHOD(Qt_Widgets_QAbstractGraphicsShapeItem_QAbstractGraphicsShapeItem, setBrush)
{
	zval *handle_param = NULL, *brush_param = NULL, _0, _1;
	zend_long handle, brush;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(brush)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &brush_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, brush);
	phpqt_qabstractgraphicsshapeitem_set_brush(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QAbstractGraphicsShapeItem_QAbstractGraphicsShapeItem, isObscuredBy)
{
	zval *handle_param = NULL, *item_param = NULL, _0, _1;
	zend_long handle, item, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(item)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &item_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, item);
	r = phpqt_qabstractgraphicsshapeitem_is_obscured_by(&_0, &_1);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Widgets_QAbstractGraphicsShapeItem_QAbstractGraphicsShapeItem, opaqueArea)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qabstractgraphicsshapeitem_opaque_area(&_0));
}

